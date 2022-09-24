//静态成员
//静态成员就是在成员变量和成员函数前加上关键字static，称为静态成员
//静态成员分为
//静态成员变量：
//所有对象共享同一份数据
//在编译阶段分配内存
//类内声明，类外初始化
//静态成员函数：
//所有对象共享同一个函数
//静态成员函数只能访问静态成员变量
//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//	
//	static int m_A;//类内声明
//	//Person():m_A(100){}//无法通过构造函数初始化静态类数据
//
//	//静态成员变量也有访问权限
//private:
//	static int m_B;
//};
//int Person::m_A = 100;//类外初始化
//int Person::m_B = 200;
//void test01()
//{
//	Person p;
//	p.m_A = 200;
//	cout << p.m_A << endl;
//	Person p2;
//	p2.m_A = 500;
//	cout << p.m_A << endl;//所有对象共享同一份数据
//	cout << Person::m_A << endl;
//
//	//cout << Person::m_B << endl; 类外访问不到私有静态成员变量
//}
////静态成员变量 不属于某个对象，所有对象都共享同一份数据
////因为静态成员变量有两种访问方式
////1、通过对象进行访问
//// person p;
//// cout << p.m_A << endl;
////2、通过类名进行访问
////cout << Person::m_A << endl;
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//	static void func()//静态成员函数
//	{
//		m_A = 200;
//		//m_B = 200;//无法访问非静态成员变量你
//		cout << "静态成员函数的访问" << endl;
//	}
//	static int m_A;//静态成员变量
//	int m_B;//非静态成员变量
//
//	//静态成员函数也是有访问权限的
//private:
//	static void func2()
//	{
//		cout <<"访问" << endl;
//	}
//};
//int Person::m_A = 100;
//void test01()
//{
//	//通过对象访问
//	Person p;
//	p.func();
//	//通过类名进行访问
//	Person::func();
//	//Person::func2();//无法访问私有静态成员函数
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//c++对象模型和this指针
//成员变量和成员函数分开存储
//在c++中，类内的成员变量和成员函数分开存储
//只有非静态成员变量才属于类的对象上	
//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//	int m_A;//一个整型占四个字节  非静态成员 属于类的对象上
//	static int m_B;//静态成员变量 不属于类对象上
//	void func() {};//非静态成员函数  不属于类对象上
//	static void func2() { };//静态成员函数 不属于类对象上
//};
//int Person::m_B = 10;
//void test01()
//{
//	Person p;
//	cout << "size of p=" << sizeof(p) << endl;
//	//空对象占用内存空间为：1
//    //c++编译器会给每个空对象也分配一个字节空间，是为了区分空对象占内存的位置
//	//每个空对象也应该有一个独一无二的内存地址
//}
//void test02()
//{
//	 
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//this指针概念
//每一个非静态成员函数只会诞生一份函数实例，也就是说多个同类型的对象会共用同一块代码
//那么问题是：这一块代码是如何区分哪个对象调用自己的呢？
//
//c++通过提供特殊的对象指针，this指针，解决上述问题，this指针指向被调用的成员函数所属的对象
//
//this指针是隐含每一个非静态成员函数内的一种指针
//this指针不需要被定义，直接使用即可
//
//this指针的用途
//当形参和成员变量同名时，可用this指针来区分
//在类的非静态成员函数中返回对象，可使用return *this 

//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//	Person(int age)
//	{
//		//age = age;//名称冲突，无法传值
//		this->age = age;//this指针指向 被调用的成员函数 所属的对象
//	}
//	//Person PersonADDage(Person &p) 返回值   返回的是拷贝 结果36
//	Person PersonADDage(Person& p)//返回本体
//	{
//		this->age += p.age;
//		return *this;
//	}
//	int age;
//};
////1、解决名称冲突
//void test01()
//{
//	Person p1(18);
//	cout << "年龄是：" <<p1.age<< endl;
//}
////2、在成员函数 中 返会对象本体
//void test02()
//{
//	Person p1(18);
//	Person p2(18);
//	p2.PersonADDage(p1).PersonADDage(p1);
//	cout << "年龄是：" << p2.age << endl;
//}
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}

//空指针访问成员函数
//
//c++中空指针也是可以调用成员函数的，但是也要注意有没有用到this指针
//如果用到this指针，需要加以判断保证代码的健壮性
//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//	void showname()
//	{
//		cout << "我的名字是" << endl;
//	}
//	void showage()
//	{
//		if (this == NULL)
//		{
//			return;
//		}
//		cout << "我的年龄是" <<m_age<< endl;//m_age 默认为this->m_age  this 为空指针 无法引用
//	}
//	int m_age;
//};
//int main()
//{
//	Person* p = NULL;
//	p->showname();//凡是指针就用->   是对象就用.
//	p->showage();
//	system("pause");
//	return 0;
//}

//const修饰成员函数
//常函数 成员函数后加const后我们称这个函数为常函数
//常函数内不可以修改成员属性
//成员属性声明加关键字mutable后，在常函数中依然可以修改
//
//常对象
//声明对象前加const称该对象为常对象
//常对象只能调用常函数
 

//#include<iostream>
//using namespace std;
//class Person
//{
//	//this指针的本质 是指针常量 指针的指向是不可以修改的
//	//Person *const this; 因此this指针不能被修改
//	//const Person *const this; this指针指向的值不能被修改
//public:
//	void showname()const
//	{
//		m_name = 100;
//		//m_age = 100;//常函数中不可以修改成员属性
//		//this = NULL; this指针不可以修改指针的指向
//	}
//	void func()
//	{
//
//	}
//	int m_age;
//	mutable int m_name;//特殊变量，即使在常函数中，也可以修改这个值，加关键字mutable
//};
//void test01()
//{
//	const Person p;//常对象 
//	//P.age = 100;//无法修改
//	p.m_name = 100;
//	//p.func; 常对象不可以调用普通成员函数 因为普通成员函数可以修改属性
//}

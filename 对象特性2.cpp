//��̬��Ա
//��̬��Ա�����ڳ�Ա�����ͳ�Ա����ǰ���Ϲؼ���static����Ϊ��̬��Ա
//��̬��Ա��Ϊ
//��̬��Ա������
//���ж�����ͬһ������
//�ڱ���׶η����ڴ�
//���������������ʼ��
//��̬��Ա������
//���ж�����ͬһ������
//��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//	
//	static int m_A;//��������
//	//Person():m_A(100){}//�޷�ͨ�����캯����ʼ����̬������
//
//	//��̬��Ա����Ҳ�з���Ȩ��
//private:
//	static int m_B;
//};
//int Person::m_A = 100;//�����ʼ��
//int Person::m_B = 200;
//void test01()
//{
//	Person p;
//	p.m_A = 200;
//	cout << p.m_A << endl;
//	Person p2;
//	p2.m_A = 500;
//	cout << p.m_A << endl;//���ж�����ͬһ������
//	cout << Person::m_A << endl;
//
//	//cout << Person::m_B << endl; ������ʲ���˽�о�̬��Ա����
//}
////��̬��Ա���� ������ĳ���������ж��󶼹���ͬһ������
////��Ϊ��̬��Ա���������ַ��ʷ�ʽ
////1��ͨ��������з���
//// person p;
//// cout << p.m_A << endl;
////2��ͨ���������з���
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
//	static void func()//��̬��Ա����
//	{
//		m_A = 200;
//		//m_B = 200;//�޷����ʷǾ�̬��Ա������
//		cout << "��̬��Ա�����ķ���" << endl;
//	}
//	static int m_A;//��̬��Ա����
//	int m_B;//�Ǿ�̬��Ա����
//
//	//��̬��Ա����Ҳ���з���Ȩ�޵�
//private:
//	static void func2()
//	{
//		cout <<"����" << endl;
//	}
//};
//int Person::m_A = 100;
//void test01()
//{
//	//ͨ���������
//	Person p;
//	p.func();
//	//ͨ���������з���
//	Person::func();
//	//Person::func2();//�޷�����˽�о�̬��Ա����
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//c++����ģ�ͺ�thisָ��
//��Ա�����ͳ�Ա�����ֿ��洢
//��c++�У����ڵĳ�Ա�����ͳ�Ա�����ֿ��洢
//ֻ�зǾ�̬��Ա������������Ķ�����	
//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//	int m_A;//һ������ռ�ĸ��ֽ�  �Ǿ�̬��Ա ������Ķ�����
//	static int m_B;//��̬��Ա���� �������������
//	void func() {};//�Ǿ�̬��Ա����  �������������
//	static void func2() { };//��̬��Ա���� �������������
//};
//int Person::m_B = 10;
//void test01()
//{
//	Person p;
//	cout << "size of p=" << sizeof(p) << endl;
//	//�ն���ռ���ڴ�ռ�Ϊ��1
//    //c++���������ÿ���ն���Ҳ����һ���ֽڿռ䣬��Ϊ�����ֿն���ռ�ڴ��λ��
//	//ÿ���ն���ҲӦ����һ����һ�޶����ڴ��ַ
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

//thisָ�����
//ÿһ���Ǿ�̬��Ա����ֻ�ᵮ��һ�ݺ���ʵ����Ҳ����˵���ͬ���͵Ķ���Ṳ��ͬһ�����
//��ô�����ǣ���һ���������������ĸ���������Լ����أ�
//
//c++ͨ���ṩ����Ķ���ָ�룬thisָ�룬����������⣬thisָ��ָ�򱻵��õĳ�Ա���������Ķ���
//
//thisָ��������ÿһ���Ǿ�̬��Ա�����ڵ�һ��ָ��
//thisָ�벻��Ҫ�����壬ֱ��ʹ�ü���
//
//thisָ�����;
//���βκͳ�Ա����ͬ��ʱ������thisָ��������
//����ķǾ�̬��Ա�����з��ض��󣬿�ʹ��return *this 

//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//	Person(int age)
//	{
//		//age = age;//���Ƴ�ͻ���޷���ֵ
//		this->age = age;//thisָ��ָ�� �����õĳ�Ա���� �����Ķ���
//	}
//	//Person PersonADDage(Person &p) ����ֵ   ���ص��ǿ��� ���36
//	Person PersonADDage(Person& p)//���ر���
//	{
//		this->age += p.age;
//		return *this;
//	}
//	int age;
//};
////1��������Ƴ�ͻ
//void test01()
//{
//	Person p1(18);
//	cout << "�����ǣ�" <<p1.age<< endl;
//}
////2���ڳ�Ա���� �� ���������
//void test02()
//{
//	Person p1(18);
//	Person p2(18);
//	p2.PersonADDage(p1).PersonADDage(p1);
//	cout << "�����ǣ�" << p2.age << endl;
//}
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}

//��ָ����ʳ�Ա����
//
//c++�п�ָ��Ҳ�ǿ��Ե��ó�Ա�����ģ�����ҲҪע����û���õ�thisָ��
//����õ�thisָ�룬��Ҫ�����жϱ�֤����Ľ�׳��
//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//	void showname()
//	{
//		cout << "�ҵ�������" << endl;
//	}
//	void showage()
//	{
//		if (this == NULL)
//		{
//			return;
//		}
//		cout << "�ҵ�������" <<m_age<< endl;//m_age Ĭ��Ϊthis->m_age  this Ϊ��ָ�� �޷�����
//	}
//	int m_age;
//};
//int main()
//{
//	Person* p = NULL;
//	p->showname();//����ָ�����->   �Ƕ������.
//	p->showage();
//	system("pause");
//	return 0;
//}

//const���γ�Ա����
//������ ��Ա�������const�����ǳ��������Ϊ������
//�������ڲ������޸ĳ�Ա����
//��Ա���������ӹؼ���mutable���ڳ���������Ȼ�����޸�
//
//������
//��������ǰ��const�Ƹö���Ϊ������
//������ֻ�ܵ��ó�����
 

//#include<iostream>
//using namespace std;
//class Person
//{
//	//thisָ��ı��� ��ָ�볣�� ָ���ָ���ǲ������޸ĵ�
//	//Person *const this; ���thisָ�벻�ܱ��޸�
//	//const Person *const this; thisָ��ָ���ֵ���ܱ��޸�
//public:
//	void showname()const
//	{
//		m_name = 100;
//		//m_age = 100;//�������в������޸ĳ�Ա����
//		//this = NULL; thisָ�벻�����޸�ָ���ָ��
//	}
//	void func()
//	{
//
//	}
//	int m_age;
//	mutable int m_name;//�����������ʹ�ڳ������У�Ҳ�����޸����ֵ���ӹؼ���mutable
//};
//void test01()
//{
//	const Person p;//������ 
//	//P.age = 100;//�޷��޸�
//	p.m_name = 100;
//	//p.func; �����󲻿��Ե�����ͨ��Ա���� ��Ϊ��ͨ��Ա���������޸�����
//}

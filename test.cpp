#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;


//��̬
//class Animal
//{
//public:
//	//�麯��
//	virtual void speak()
//	{
//		cout << "������˵��" << endl;
//	}
//};
//class Cat:public Animal
//{
//public:
//	//�麯��
//	void speak()
//	{
//		cout << "Сè��˵��" << endl;
//	}
//};
//class Dog :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "С����˵��" << endl;
//	}
//};
////��ַ��󶨣��ڱ���׶ξ�ȷ���˺�����ַ
////�����ִ��è˵������ô������ַ�Ͳ�����ǰ�󶨣���Ҫ�����н׶ΰ󶨣���ַ���
//
////��̬��̬��������
////1.�м̳й�ϵ
////2.����Ҫ��д�����麯��
//
////��̬��̬ʹ��
////�����ָ���������  ָ������Ķ���
//void doSpeak(Animal& animal)//Animal& animal=cat;
//{
//	animal.speak();
//}
//void test01()
//{
//	Cat cat;
//	doSpeak(cat);
//	Dog dog;
//	doSpeak(dog);
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


//��̬����һ--��������
//�ֱ�������ͨ�Ͷ�̬ʵ�ּ�����
//��ͨ
#include<string.h>
//class Caculator
//{
//public:
//	int getResult(string oper)
//	{
//		if (oper == "+")
//		{
//			return m_Num1 + m_Num2;
//		}
//		else if (oper == "-")
//		{
//			return m_Num1 - m_Num2;
//		}
//		else if (oper == "*")
//		{
//			return m_Num1 * m_Num2;
//		}
//		//�����չ�µĹ��ܣ���Ҫ�޸�Դ��
//		//��ʵ�����У��ᳫ����ԭ��
//		//����չ���п��������޸Ľ��йر�
//	}
//
//	int m_Num1;
//	int m_Num2;
//};
//void test01()
//{
//	//��������������
//	Caculator c;
//	c.m_Num1 = 10;
//	c.m_Num2 = 10;
//	cout << c.m_Num1 << "+" << c.m_Num2 << "=" << c.getResult("+") << endl;
//	cout << c.m_Num1 << "-" << c.m_Num2 << "=" << c.getResult("-") << endl;
//	cout << c.m_Num1 << "*" << c.m_Num2 << "=" << c.getResult("*") << endl;
//
//}

//���ö�̬ʵ��
//�ŵ�1.��֯�ṹ����
// �ŵ�2.�ɶ���ǿ
//  �ŵ�3.����ǰ���������չ�Լ�ά���Ը�
//ʵ�ּ�����������
//class AbstractCalculator
//{
//public:
//	virtual int getResult()
//	{
//		return 0;
//	}
//	int m_Num1;
//	int m_Num2;
//};
////��Ƽӷ���������
//class AddCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 + m_Num2;
//	}
//};
////��Ƽ�����������
//class SubCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 - m_Num2;
//	}
//};
////��Ƴ˷���������
//class MulCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 * m_Num2;
//	}
//};
//void test02()
//{
//	//�ӷ�
//	AbstractCalculator* abc = new AddCalculator;
//	abc->m_Num1 = 100;
//	abc->m_Num2 = 100;
//	cout << abc->m_Num1 << "+" << abc->m_Num2 << "=" << abc->getResult() << endl;
//	delete abc;
//	//����
//	abc = new SubCalculator;
//	abc->m_Num1 = 100;
//	abc->m_Num2 = 100;
//	cout << abc->m_Num1 << "-" << abc->m_Num2 << "=" << abc->getResult() << endl;
//	delete abc;
//	//�˷�
//	abc = new MulCalculator;
//	abc->m_Num1 = 100;
//	abc->m_Num2 = 100;
//	cout << abc->m_Num1 << "*" << abc->m_Num2 << "=" << abc->getResult() << endl;
//	delete abc;
//
//}
//int main()
//{
//	test02();
//	system("pause");
//	return 0;
//}


//��̬������--������Ʒ
//class AbstractDrinking
//{
//public:
//	//��ˮ
//	virtual void Boil() = 0;
//	//����
//	virtual void Brew() = 0;
//	//���뱭��
//	virtual void PourInCup() = 0;
//	//���븨��
//	virtual void PutSomething() = 0;
//	//������Ʒ
//	void makeDrink()
//	{
//		Boil();
//		Brew();
//		PourInCup();
//		PutSomething();
//	}
//};
////��������
//class Coffee :public AbstractDrinking
//{
//public:
//	virtual void Boil()
//	{
//		cout << "��ũ��ɽȪ" << endl;
//	}
//	virtual void Brew()
//	{
//		cout << "���ݿ���" << endl;
//	}
//	virtual void PourInCup()
//	{
//		cout << "���뱭��" << endl;
//	}
//	virtual void PutSomething()
//	{
//		cout << "����ţ�̣���" << endl;
//	}
//};
////������Ҷ
//class Tea :public AbstractDrinking
//{
//public:
//	virtual void Boil()
//	{
//		cout << "���Ȫˮ" << endl;
//	}
//	virtual void Brew()
//	{
//		cout << "���ݲ�Ҷ" << endl;
//	}
//	virtual void PourInCup()
//	{
//		cout << "���뱭��" << endl;
//	}
//	virtual void PutSomething()
//	{
//		cout << "�������" << endl;
//	}
//};
////��������
//void doWork(AbstractDrinking* abs)//AbstractDrinking* abs==new Coffee
//{
//	abs->makeDrink();
//	delete abs;//�ͷ�
//}
//void test01()
//{
//	//��������
//	doWork(new Coffee);
//	cout << "----------------------" << endl;
//	doWork(new Tea);
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


//�������봿������
//class Animal
//{
//public:
//	Animal()
//	{
//		cout << "Animal���캯������" << endl;
//	}
//	/*virtual ~Animal()
//	{
//		cout << "Animal��������������" << endl;
//	}*/
//	//��������
//	virtual ~Animal() = 0;
//	//���麯��
//	virtual void speak() = 0;
//};
//Animal::~Animal()
//{
//	cout << "Animal����������������" << endl;
//}
//
//class Cat :public Animal
//{
//public:
//	Cat(string name)
//	{
//		cout << "Cat���캯������" << endl;
//		m_Name = new string(name);
//	}
//	virtual void speak()
//	{
//		cout << *m_Name << "Сè��˵��" << endl;
//	}
//	~Cat()
//	{
//		if (m_Name != NULL)
//		{
//			cout << "Cat������������" << endl;
//			delete m_Name;
//			m_Name = NULL;
//		}
//	}
//	string *m_Name;
//};
//void test01()
//{
//	Animal* animal = new Cat("Tom");
//	//����ָ��������ʱ�򲻻��������������������������������ж������ԣ������ڴ�й©
//
//	animal->speak();
//	delete animal;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


//��̬������---������װ
//����CPU��
class CPU
{
public:
	//����ļ��㺯��
	virtual void caculate() = 0;
};
//�����Կ���
class VideoCard
{
public:
	//�������ʾ����
	virtual void display() = 0;
};
//�����ڴ�����
class Memory
{
public:
	//����Ĵ洢����
	virtual void storage() = 0;
};
//������
class Computer
{
public:
	Computer(CPU* cpu, VideoCard* vc, Memory* mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}
	//��������
	void work()
	{
		//���ýӿڣ����������
		m_cpu->caculate();
		m_vc->display();
		m_mem->storage();
	}
	//�ṩ�����������ͷ������������
	~Computer()
	{
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}
		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}
	}
private:
	CPU* m_cpu;//CPU���ָ��
	VideoCard* m_vc;//�Կ����ָ��
	Memory* m_mem;//�ڴ����ָ��
};
//���峧��
//Inter
class InterCPU :public CPU
{
public:
	virtual void caculate()
	{
		cout << "Inter��CPU��ʼ�����ˣ�" << endl;
	}
};
class InterVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Inter���Կ���ʼ��ʾ�ˣ�" << endl;
	}
};
class InterMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Inter���ڴ�����ʼ�洢�ˣ�" << endl;
	}
};
//Lenovo
class LenovoCPU :public CPU
{
public:
	virtual void caculate()
	{
		cout << "Lenovo��CPU��ʼ�����ˣ�" << endl;
	}
};
class LenovoVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Lenovo���Կ���ʼ��ʾ�ˣ�" << endl;
	}
};
class LenovoMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Lenovo���ڴ�����ʼ�洢�ˣ�" << endl;
	}
};
void test01()
{
	//��һ̨�������
	CPU* interCpu = new InterCPU;
	VideoCard* interCard = new InterVideoCard;
	Memory* intelMem = new InterMemory;
	//������һ̨����
	cout << "��һ̨���Կ�ʼ������" << endl;
	Computer* computer1 = new Computer(interCpu, interCard, intelMem);
	computer1->work();
	delete computer1;
	cout << "-------------------------" << endl;
	//�ڶ�̨������װ
	cout << "�ڶ�̨���Կ�ʼ������" << endl;
	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
	computer2->work();
	delete computer2;
	cout << "-------------------------" << endl;
	//����̨������װ
	cout << "����̨���Կ�ʼ������" << endl;
	Computer* computer3 = new Computer(new LenovoCPU, new InterVideoCard, new LenovoMemory);
	computer3->work();
	delete computer3;
}
int main()
{
	test01();
	system("pause");
	return 0;
}
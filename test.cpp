#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;


//多态
//class Animal
//{
//public:
//	//虚函数
//	virtual void speak()
//	{
//		cout << "动物在说话" << endl;
//	}
//};
//class Cat:public Animal
//{
//public:
//	//虚函数
//	void speak()
//	{
//		cout << "小猫在说话" << endl;
//	}
//};
//class Dog :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "小狗在说话" << endl;
//	}
//};
////地址早绑定，在编译阶段就确定了函数地址
////如果想执行猫说话，那么函数地址就不能提前绑定，需要在运行阶段绑定，地址晚绑定
//
////动态多态满足条件
////1.有继承关系
////2.子类要重写父类虚函数
//
////动态多态使用
////父类的指针或者引用  指向子类的对象
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


//多态案例一--计算器类
//分别利用普通和多态实现计算器
//普通
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
//		//如果扩展新的功能，需要修改源码
//		//真实开发中，提倡开闭原则
//		//对扩展进行开发，对修改进行关闭
//	}
//
//	int m_Num1;
//	int m_Num2;
//};
//void test01()
//{
//	//创建计算器对象
//	Caculator c;
//	c.m_Num1 = 10;
//	c.m_Num2 = 10;
//	cout << c.m_Num1 << "+" << c.m_Num2 << "=" << c.getResult("+") << endl;
//	cout << c.m_Num1 << "-" << c.m_Num2 << "=" << c.getResult("-") << endl;
//	cout << c.m_Num1 << "*" << c.m_Num2 << "=" << c.getResult("*") << endl;
//
//}

//利用多态实现
//优点1.组织结构清晰
// 优点2.可读性强
//  优点3.对于前期与后期扩展以及维护性高
//实现计算器抽象类
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
////设计加法计算器类
//class AddCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 + m_Num2;
//	}
//};
////设计减法计算器类
//class SubCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 - m_Num2;
//	}
//};
////设计乘法计算器类
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
//	//加法
//	AbstractCalculator* abc = new AddCalculator;
//	abc->m_Num1 = 100;
//	abc->m_Num2 = 100;
//	cout << abc->m_Num1 << "+" << abc->m_Num2 << "=" << abc->getResult() << endl;
//	delete abc;
//	//减法
//	abc = new SubCalculator;
//	abc->m_Num1 = 100;
//	abc->m_Num2 = 100;
//	cout << abc->m_Num1 << "-" << abc->m_Num2 << "=" << abc->getResult() << endl;
//	delete abc;
//	//乘法
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


//多态案例二--制作饮品
//class AbstractDrinking
//{
//public:
//	//煮水
//	virtual void Boil() = 0;
//	//冲泡
//	virtual void Brew() = 0;
//	//倒入杯中
//	virtual void PourInCup() = 0;
//	//加入辅料
//	virtual void PutSomething() = 0;
//	//制作饮品
//	void makeDrink()
//	{
//		Boil();
//		Brew();
//		PourInCup();
//		PutSomething();
//	}
//};
////制作咖啡
//class Coffee :public AbstractDrinking
//{
//public:
//	virtual void Boil()
//	{
//		cout << "煮农夫山泉" << endl;
//	}
//	virtual void Brew()
//	{
//		cout << "冲泡咖啡" << endl;
//	}
//	virtual void PourInCup()
//	{
//		cout << "倒入杯中" << endl;
//	}
//	virtual void PutSomething()
//	{
//		cout << "加入牛奶，糖" << endl;
//	}
//};
////制作茶叶
//class Tea :public AbstractDrinking
//{
//public:
//	virtual void Boil()
//	{
//		cout << "煮矿泉水" << endl;
//	}
//	virtual void Brew()
//	{
//		cout << "冲泡茶叶" << endl;
//	}
//	virtual void PourInCup()
//	{
//		cout << "倒入杯中" << endl;
//	}
//	virtual void PutSomething()
//	{
//		cout << "加入枸杞" << endl;
//	}
//};
////制作函数
//void doWork(AbstractDrinking* abs)//AbstractDrinking* abs==new Coffee
//{
//	abs->makeDrink();
//	delete abs;//释放
//}
//void test01()
//{
//	//制作咖啡
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


//虚析构与纯虚析构
//class Animal
//{
//public:
//	Animal()
//	{
//		cout << "Animal构造函数调用" << endl;
//	}
//	/*virtual ~Animal()
//	{
//		cout << "Animal虚析构函数调用" << endl;
//	}*/
//	//纯虚析构
//	virtual ~Animal() = 0;
//	//纯虚函数
//	virtual void speak() = 0;
//};
//Animal::~Animal()
//{
//	cout << "Animal纯虚析构函数调用" << endl;
//}
//
//class Cat :public Animal
//{
//public:
//	Cat(string name)
//	{
//		cout << "Cat构造函数调用" << endl;
//		m_Name = new string(name);
//	}
//	virtual void speak()
//	{
//		cout << *m_Name << "小猫在说话" << endl;
//	}
//	~Cat()
//	{
//		if (m_Name != NULL)
//		{
//			cout << "Cat析构函数调用" << endl;
//			delete m_Name;
//			m_Name = NULL;
//		}
//	}
//	string *m_Name;
//};
//void test01()
//{
//	Animal* animal = new Cat("Tom");
//	//父类指针在析构时候不会调用子类中析构函数，导致子类如果有堆区属性，出现内存泄漏
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


//多态案例三---电脑组装
//抽象CPU类
class CPU
{
public:
	//抽象的计算函数
	virtual void caculate() = 0;
};
//抽象显卡类
class VideoCard
{
public:
	//抽象的显示函数
	virtual void display() = 0;
};
//抽象内存条类
class Memory
{
public:
	//抽象的存储函数
	virtual void storage() = 0;
};
//电脑类
class Computer
{
public:
	Computer(CPU* cpu, VideoCard* vc, Memory* mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}
	//工作函数
	void work()
	{
		//调用接口，让零件工作
		m_cpu->caculate();
		m_vc->display();
		m_mem->storage();
	}
	//提供析构函数来释放三个电脑零件
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
	CPU* m_cpu;//CPU零件指针
	VideoCard* m_vc;//显卡零件指针
	Memory* m_mem;//内存零件指针
};
//具体厂商
//Inter
class InterCPU :public CPU
{
public:
	virtual void caculate()
	{
		cout << "Inter的CPU开始计算了！" << endl;
	}
};
class InterVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Inter的显卡开始显示了！" << endl;
	}
};
class InterMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Inter的内存条开始存储了！" << endl;
	}
};
//Lenovo
class LenovoCPU :public CPU
{
public:
	virtual void caculate()
	{
		cout << "Lenovo的CPU开始计算了！" << endl;
	}
};
class LenovoVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Lenovo的显卡开始显示了！" << endl;
	}
};
class LenovoMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Lenovo的内存条开始存储了！" << endl;
	}
};
void test01()
{
	//第一台电脑零件
	CPU* interCpu = new InterCPU;
	VideoCard* interCard = new InterVideoCard;
	Memory* intelMem = new InterMemory;
	//创建第一台电脑
	cout << "第一台电脑开始工作：" << endl;
	Computer* computer1 = new Computer(interCpu, interCard, intelMem);
	computer1->work();
	delete computer1;
	cout << "-------------------------" << endl;
	//第二台电脑组装
	cout << "第二台电脑开始工作：" << endl;
	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
	computer2->work();
	delete computer2;
	cout << "-------------------------" << endl;
	//第三台电脑组装
	cout << "第三台电脑开始工作：" << endl;
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
//Порядок вызова конструкторов и деструкторов при наследовании
#include <iostream>
using namespace std;

class A
{
public:
	A()
	{
		cout << "Constructor A\n";
	}
	~A()
	{
		cout << "Destructor A\n";
	}
};

class B:public A
{
public:
	B()
	{
		cout << "Constructor B\n";
	}
	~B()
	{
		cout << "Destructor B\n";
	}
};

class C:public B
{
public:
	C()
	{
		cout << "Constructor C\n";
	}
	~C()
	{
		cout << "Destructor C\n";
	}
};

int main()
{
	A obj1;
	B obj2;
	C obj3;

	return 0;
}
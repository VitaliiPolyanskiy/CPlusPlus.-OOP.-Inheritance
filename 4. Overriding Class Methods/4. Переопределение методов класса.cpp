//переопределение методов класса

#include <iostream>
using namespace std;

class A
{
	int a;
public:
	void setA (int k)
	{
		a = k;
	}
	void show ()
	{
		cout << a << endl;
	}
};

class B : public A
{
	int b;
public:
	void setB (int k)
	{
		b = k;
	}
	void show ()
	{
		A::show();
		cout << b << endl;
	}
};

int main ()
{
	A obj1;
	obj1.setA(10);
	obj1.show();//10

	B obj2;
	obj2.setA(20);
	obj2.setB(30);
	obj2.show(); //20  30  метод класса B
	obj2.A::show(); // 20
	obj2.B::show(); //20  30

	return 0;
}

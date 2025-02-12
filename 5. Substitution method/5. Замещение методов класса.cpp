//Замещение методов класса

#include <iostream>
using namespace std;

class A
{
	int a;
public:
	void set ()
	{
		a = 10;
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
	void set (int k)
	{
		A::set();
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
	obj1.set();
	obj1.show(); // 10

	B obj2;
	// obj2.set(); //ошибка компиляции
	obj2.set(50); // obj2.B::set(50);
	obj2.show(); // 10  50
	obj2.A::set();
	obj2.B::set(30);
	obj2.show(); // 10  30
	return 0;
}

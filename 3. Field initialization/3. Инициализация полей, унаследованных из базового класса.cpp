//Инициализация полей, унаследованных из базового класса
#include <iostream>
using namespace std;

class A
{
	int a;
public:
	A()
	{
		cout << "Default constructor A\n";
		a = 0;
	}
	A(int n)
	{
		cout << "Constructor A with parameter\n";
		a = n;
	}
};

class B:public A
{
	int b;
public:
	B()
	{
		cout << "Default constructor B\n";
		b = 0;
	}
	B(int n, int m):A(n)
	{
		cout << "Constructor B with parameters\n";
		b = m;
	}
};

class C:public B
{
	int c;
public:
	C(int n, int m, int k):B(n, m)
	{
		cout << "Constructor C with parameters\n";
		c = k;
	}
};

class D:public C
{
	int d;
public:
	D():C(0, 0, 0)
	{
		cout << "Default constructor D\n";
		d = 0;
	}
	D(int n, int m, int k, int l):C(n, m, k)
	{
		cout << "Constructor D with parameters\n";
		d = l;
	}
};

int main()
{
	B obj1;
	B obj2(40, 50);
	cout << endl;
	// C obj3; // ошибка компиляции
	C obj4(10, 20, 30);
	cout << endl;
	D obj5;
	D obj6(1, 2, 3, 4);

	return 0;
}
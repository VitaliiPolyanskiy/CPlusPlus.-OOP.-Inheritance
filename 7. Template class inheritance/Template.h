#include "MyClass.h"
#include <iostream>
using namespace std;

template <typename T1>
class A
{
	T1 a;
public:
	A(T1 n)
	{
		a = n;
	}
	void showA();
};
template <typename T1> void A<T1>::showA()
{
	cout << a <<endl;
}


template <typename T1, typename T2>
class B: public A<T1>
{
	T2 b;
public:
	B(T1 n, T2 m): A<T1>(n)
	{
		b = m;
	}
	void showB();
};

template <typename T1, typename T2>
void B<T1, T2>::showB()
{
	cout << b << endl;
}

template <typename T1>
class C: public A<T1>
{
	int c;
public:
	C(T1 n, int m): A<T1>(n)
	{
		c = m;
	}
	void showC();
};

template <typename T1>
void C<T1>::showC()
{
	cout << c << "-";
}

template <typename T>
class MyTemplateClass: public MyClass
{
	T a;
public:
	MyTemplateClass(int m, T n): MyClass(m)
	{
		a = n;
	}
	void show();
};
template <typename T> void MyTemplateClass<T>::show()
{
	cout << a << "-";
}

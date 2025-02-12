#include <iostream>
using namespace std;

class A
{
private:
	int a;
protected:
	int b;
public:
	int c;
	void SetA(int n1, int n2, int n3)
	{
		a = n1;
		b = n2;
		c = n3;
	}
	void ShowA()
	{
		cout << endl << a << b << c;
	}
};

class B: public A
{
private:
	int d;
public:
	void SetB(int n1)
	{
		SetA(10, 20, 30);
		d = n1;
	}
	void ShowB()
	{
		ShowA();
		cout << endl;
		// cout << a; // нет доступа
		cout << b; // protected-поле
		cout << c; // public-поле
		cout << d; // private-поле
	}
};

class C: protected A
{
private:
	int d;
public:
	void SetC(int n1)
	{
		SetA(10, 20, 30);
		d = n1;
	}
	void ShowC()
	{
		ShowA();
		cout << endl;
		// cout << a; // нет доступа
		cout << b; // protected-поле
		cout << c; // protected-поле
		cout << d; // private-поле
	}
};

class D: private A
{
private:
	int d;
public:
	void SetD(int n1)
	{
		SetA(10, 20, 30);
		d = n1;
	}
	void ShowD()
	{
		ShowA();
		cout << endl;
		// cout << a; // нет доступа
		cout << b; // private-поле
		cout << c; // private-поле
		cout << d; // private-поле
	}
};

int main()
{
	A obj1;
	// obj1.a = 1;
	// obj1.b = 2;
	obj1.c = 3;
	obj1.SetA(10, 20, 30); 
	obj1.ShowA();

	B obj2;
	// obj2.a = 1;
	// obj2.b = 2;
	obj2.c = 3;
	// obj2.d = 4;
	obj2.SetA(10, 20, 30);
	obj2.SetB(40);
	obj2.ShowB();

	C obj3;
	// obj3.a = 1;
	// obj3.b = 2;
	// obj3.c = 3;
	// obj3.d = 4;
	// obj3.SetA(10, 20, 30);
	obj3.SetC(40);
	obj3.ShowC();

	D obj4;
	// obj4.a = 1;
	// obj4.b = 2;
	// obj4.c = 3;
	// obj4.d = 4;
	// obj4.SetA(10, 20, 30);
	obj4.SetD(40);
	obj4.ShowD();

	return 0;
}
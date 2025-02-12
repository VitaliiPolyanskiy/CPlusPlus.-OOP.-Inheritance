//уточнение прав доступа

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

	A()
	{
		a = 0;
		b = 0;
		c = 0;
	}

	void setA(int a, int b, int c)
	{
		this->a = a;
		this->b = b;
		this->c = c;
	}
protected:
	void showA()
	{
		cout << a << " " << b << " " << c << endl;
	}
};

class B : private A
{
	int d;

public:
	void setB (int k)
	{
		d = k;
	}
	void showB ()
	{
		cout << d <<endl;
	}

public:
	//A::a;
	A::b;
	A::setA;
	A::showA;
};

int main()
{
	B obj;
	obj.setB(30);
	obj.setA(10, 20, 30);
	obj.showA();
	obj.showB();
	obj.b = 20;

	return 0;
}

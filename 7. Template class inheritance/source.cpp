//Наследование шаблонных классов
#include "Template.h"


void MyClass::Print()
{
	cout << field << endl;
}

void main()
{
	B<int,double> obj1(10, 5.2);
	obj1.showA();
	obj1.showB();

	B<char, const char*> obj2('I', "Inheritance");
	obj2.showA();
	obj2.showB();

	C<char> obj3('A', 65);
	obj3.showC();
	obj3.showA();

	MyTemplateClass<char> obj4(65, 'A');
	obj4.show();
	obj4.Print();
}

#include "myClass.h"
#include <iostream>

using namespace std;

int main()
{
    myClass myObject;
	myObject.sayHello();
	cout << "\nthe result is: " << myObject.sumNumbers() << endl;
    return 0;
}

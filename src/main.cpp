#include "myClass.h"
#include <iostream>

using namespace std;

int main()
{
	int sum = 0;

	int b;
    myClass myObject;
	cout << "enter number of values" << endl;
	int a;
	a = myObject.getNumber();
	for(int i = 1; i <= a; i++){
		cout << "enter number " << i << endl;
		b =  myObject.getNumber();
		sum = myObject.sumNumbers(sum, b);
	}
	cout << "sum = " << sum << endl;
    return 0;
}

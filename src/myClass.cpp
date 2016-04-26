#include "myClass.h"
#include <iostream>

using namespace std;

myClass::sayHello(){

	cout << "Hello world!" << endl;

}

myClass::getNumber(){
	int x;
	cin >> x;
	return x;
}

myClass::sumNumbers(){
	cout << "enter number of values" << endl;
	int x;
	cin >> x;
	int sum = 0;
	for(int i = 1; i <= x; i++){
		cout << "enter number " << i << endl;
		int y;
		y = myClass::getNumber();

		sum = sum + y;
	}

	return sum;
}

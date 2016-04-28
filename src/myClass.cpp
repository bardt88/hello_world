#include "myClass.h"
#include <iostream>
#include <limits>

using namespace std;

myClass::myClass(){
    cout << "hi!" << endl;
}

myClass::~myClass(){
    cout << "bye!" << endl;
}

myClass::sayHello(){

    cout << "Hello world!" << endl;

}

myClass::getNumber(){
    int x;
    cin >> x;
    while(cin.fail()){
        cout << "Not a number. Please enter a number" << endl;
        cin.clear(); 
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cin >> x;
    }
    return x;
}
 
myClass::
    sumNumbers(int x, int y){
    int sum;
    sum = x + y;
    return sum;
}

myClass::printSumResult(int x){
    cout << "sum result: " << x << endl;
}


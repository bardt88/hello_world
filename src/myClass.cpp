#include "myClass.h"
#include <iostream>
#include <limits>

using namespace std;

myClass::myClass(int a, int b)
: var1(a), var2(b)
{
    cout << "hi!" << endl;
}

void myClass::printCter(){
    cout << "print: " << var1 << " and " << var2 << endl;
}

myClass::~myClass(){
    cout << "bye!" << endl;
}

void myClass::sayHello(){

    cout << "Hello world!" << endl;

}

int myClass::getNumber(){
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

int myClass::
    sumNumbers(int x, int y){
    int sum;
    sum = x + y;
    return sum;
}

void myClass::printSumResult(int x){
    cout << "sum result: " << x << endl;
}

void myClass::constFunc() const {
    cout << "constant function" << endl;
}

int * myClass::users(){
    int users = 4;
    int *pUsers = &users;
    return pUsers;
}

void myClass::printAddr(){
    cout << "addr= " << myClass::users() << endl;
}

void myClass::printUsers(){
    int *a = users();
    cout << "addr= " << &a << " value= " << *a << endl;
    //int i = 2;
    //a = &i;
    //cout << "value = " << *a << endl;
}

void myClass::addUser(){
    int *userss = users();
    cout << "addr= " << &userss << " value= " << *userss << endl;
    int i = 16;
    int &ii = *userss;
    cout << "addr= " << &ii << " value= " << ii << endl;
    ii = i;
    cout << "addr= " << &ii << " value= " << ii << endl;

}


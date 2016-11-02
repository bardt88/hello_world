#include "myClass.h"
#include <iostream>
#include <limits>

using namespace std;

string gUsers[4] = {"a", "b", "c", "d"};
string currUser = "userr";
int nUsers = 0;

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

/*void myClass::printUsers(){
    int *a = users();
    cout << "addr= " << &a << " value= " << *a << endl;
    //int i = 2;
    //a = &i;
    //cout << "value = " << *a << endl;
//    cout << gUsers << endl;
}*/

void myClass::printUsers(){
    for (int i = 0; i < nUsers; ++i)
    {
        cout << gUsers[i] << endl;
    }
}

/*void myClass::addUser(){
    int *userss = users();
    cout << "addr= " << &userss << " value= " << *userss << endl;
    int i = 16;
    int &ii = *userss;
    cout << "addr= " << &ii << " value= " << ii << endl;
    ii = i;
    cout << "addr= " << &ii << " value= " << ii << endl;
}*/

void myClass::addUser(){
    cout << "Username: " ;
    string newUSer;
    cin >> newUSer;
    for (int i = 0; i <= nUsers; ++i)
    {
        if (newUSer == gUsers[i])
        {
            cout << "Error: User already exists!" << endl;
            break;
        }
        else if (i == nUsers)
        {
            gUsers[nUsers] = newUSer;
            nUsers++;
            break;
        }
    }
}

void myClass::printGlobal(){
    cout << gUsers[1] << endl;
}

void myClass::setUser(){
    cout << "Insert user name: ";
    string setUserTo;
    cin >> setUserTo;
    for (int i = 0; i < nUsers; ++i)
    {
        if (setUserTo == gUsers[i])
        {
            cout << "current user is: " << setUserTo << endl;
            currUser = setUserTo;
        }
        else if(i == nUsers-1)
        {
            cout << "user not found" << endl;
        }
    }
}

void myClass::mainLoop(){
    string doFunc;
    while(true){
        cout << currUser << ": " ;
        cin >> doFunc;
        if (doFunc == "adduser")
        {
            addUser();
        }
        else if(doFunc == "printusers")
        {
            printUsers();
        }
        else if(doFunc == "setUser")
        {
            setUser();
        }
        else{
            cout << "Invalid command" << endl;
        }
    }
}

void myClass::callFunc(char a){


}

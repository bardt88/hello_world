#ifndef MYCLASS_H
#define MYCLASS_H

class myClass
{
	public:
		myClass(int a, int b);
		~myClass();
        void printCter();
		void sayHello();
		int getNumber();
		int sumNumbers(int x, int y);
		void printSumResult(int x);
        void constFunc() const ;
        int * users();
        void printAddr();
        void printUsers();
        void addUser();
        void setUser();
        void printGlobal();
        void mainLoop();
        void callFunc(char a);
        int var1;
        int var2;


};

#endif

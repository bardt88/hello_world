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
        int var1;
        int var2;


};

#endif
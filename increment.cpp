#include <iostream>

using namespace std;

int main(){
	int a=90,b;
	/*
	b=++a;//increment the value of a by 1 , then assign it to b
	      // a=90---> +1 ----->91 , b=91
	      */
	    b=a++;// assign the value of  a to b, then increment a by 1
	    //b=90, a=91
	    cout<<"a="<<a;
	    cout<<"b="<<b;
}

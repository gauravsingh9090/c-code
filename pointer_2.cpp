#include <iostream>
using namespace std;
/*

int main(){
	int a=90,b=240;
	double d=90.94;
	
	int *ptr1,*ptr2;
	ptr1=&a;
	ptr2=&b;
	
	//ptr=&d;   error
	
	if(*ptr1>*ptr2)
	    *ptr1=*ptr1+100;
	
	else 
	    *ptr2=*ptr2+100;
	    
	    cout<<"a :"<<a<<"b:"<<b;
	    
	    // -> arrow operator
	
}
//=======================

*/

void geeKs(){
	int var = 20;
	
	int* ptr;
	
	ptr =&var;
	
	
	cout<<"Value at ptr ="<< ptr <<"\n";
	cout<<"Value at var="<<var <<"\n";
	cout<<"Value at *ptr"<<*ptr<<"\n";
}


int main(){
	geeKs();
}

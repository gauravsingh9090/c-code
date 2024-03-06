#include <iostream>
using namespace std;

/*
void func(){
	int age = 18;
	
}

int main(){
	cout<<"Age is:";
	

}
=====================================
*/

/*
void func(){
	
	
	int age = 18;
	
	cout<<age;
}

int main(){
	cout<<"Age is:";
	
	func();
}

*/


int globle = 5;


void display(){
	cout<<globle<<endl;
	
}

int main(){
	display();
	
	globle = 10;
	
}

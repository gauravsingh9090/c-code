#include <iostream>
using namespace std;
/*
class A{
	public:
		A(){
		cout<<"Initialized varible memory allocated \n";
	}
	
	~A(){
		cout<<"Object memory released \n";
	}
			
};

int main(){
	A obj1;
	
	if(1){
		cout<<"Inside if \n";	
		A obj2;
	}
	cout<<"Outside if\n";
	cout<<"Obj 2  memory released--> of scop";
}
*/

//===============================================
/*
 class Test{
 	public:
 		Test(){
 			cout<<"\n constructor executed";
		 }
		 ~Test(){
		 	cout<<"\n deconstructor exected";
		 }
 };
 
 int main(){
 	Test t;
 }
 //============================================
 */
 
 
 /*
 class Test{
 	public:
 		Test(){
 			cout<<"\n constructor executed";
		 }
		 ~Test(){
		 	cout<<"\n destructor executed";
		 }
 };
 
 main(){
 	Test t,t1,t2,t3;
 }
*/
 
 static int Count= 0;

class Test {
	
	public:
		Test(){
			Count++;
			cout<<"No of object :"<<Count<<"\n";
		}
		~Test (){
			cout<<"No of object destroyed:"<<Count<<"\n";
			
			Count--;
		}
};

int main(){
	Test t, t1 ,t2,t3;
}

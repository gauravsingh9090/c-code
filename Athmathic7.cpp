#include <iostream>

using namespace std;
// wap to dertermine whether a number given by a user is even number or odd; 

int main(){
	int number;
	//char nation;
	 cout<<"enter youre number:" ;
	 cin>>number;
	 
	  //22%2--->1
	 
	 number%2==0 ? cout<<number<<"is even" : cout<<number<<"is odd";
	 	 
	 return 0;
}

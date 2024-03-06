#include <iostream>
using namespace std;
     void average (int,int,int,int,int);
     
int main(){
	int n1,n2,n3,n4,n5;
	cout<<"enter 5 number:";
	cin>>n1>>n2>>n3>>n4>>n5; //2,3,4,5.6
	average(n1,n2,n3,n4,n5);// actual parameter //parameter pass
	average(33,44,5,2,1);  // argument pass
	average(1,2,3,4);
	
}
/* 
function parameter > formate parameter // a,b,c,d,e
main define ----> actual parameter ---->
a=n1,b=n2,c=n3,d=4,e=n5 copy value*/

void average (int a, int b,int c, int d,int e){


int add =a+b+c+d+e;
double avg=add/5.0;
cout <<"average :"<<avg<<endl;
}

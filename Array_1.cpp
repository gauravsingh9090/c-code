
/*
ARRAY:
	
	Application:
	   traversing is faster
	   operation fast(in comparison --->n variable)
	  1- higest
	  2- lowest
	  3- averge
	  4- sorted
	
	student 50----> cs
	
	float s1.s2,s3,
	if(s1>s2 && s1>s3 && s1>s4......s1>s50)
	
	synatx
	========
	
	data_type array_name[sizeof_array];
	
	
============================================================================	
#	wap to create  aarray of n element (n user define)
	
	a) display array
	b)display array in reverse order
	c)adde all element of array
	d)average
	e)hoghest
	f)second higest
	g)lowest , second lowest
	i)addition of odd number
	j) addition of even number and odd numbers
	k)display only even numbers with thier index number
	
	*/

	
	
#include <iostream>	
using namespace std;
/*
int main(){
	double marks[5]={1,2,3,4};  // decleration of array
	//double marks[5]={1,2,3,4,5,6}; //error
	//
	cout<<marks[3];
	
	
	cout<<marks[4];// junk / garbage value
		
}
=======================================================================
*/
/*
int main(){
	int size;
	cout<<"enter the size of array";//6
	cin>>size;
	int ar[size];
	for(int i=0;i<size;i++){
		cout<<"enter element for index"<<i<<":";
		cin>>ar[i];
	}
	for (int i=0;i<size;i++){
		cout<<"\n element at index"<<i<<":"<<ar[i];
	}
}
*/

/*
int main(){
	int size;
	int sum=0;
	cout<<"Enter the size of array";
	cin>>size;
	int ar[size];
	for(int i=0;i<size;i++){
		cout<<"enter element for index"<<i<<":";
		cin>>ar[i];
}
for (int i=0;i<size;i++){
		cout<<"\n element at index"<<i<<":"<<ar[i];
		sum=sum+ar[i];
	}
	cout<<"\n addtion:"<<sum;
	cout<<"\n averge :"<<sum/(float)size;
}
=============   ---------Array------->
*/
/*
int main(){
	int arr[5]={10,20,30,40,50};
	
	cout<<"Using a traditional for loop:\n ";
	for(int i=0; i<5; i++){
		cout<<arr[i] <<" ";
	}
	
}

=============================================
*/
int main(){
	int size;
	cout<<"enter the size of array";
	cin>>size;
	int ar[size];
	for(int i=0;i<size;i++){
		cout<<"enter element for index"<<i<<":";
		cin>>ar[i];
	}
	for (int i=0;i<size;i++){
		cout<<"\n element at index"<<i<<":"<<ar[i];
	}
}


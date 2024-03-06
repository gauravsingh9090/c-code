/*

# wap to print fibonacci series of n terms n.=8
0 1 1 2 3 5 8 13
# wap to print fibonacci series upto number n=10.
0 1 1 2 3 5 8 */

// swapping using 3 rd variable

# include <iostream>
using namespace std;
/* int main(){
 	int a=9,b=44,temp;
 	cout<<"before swapping a="<<a<<" b="<<b<<endl;
 	temp=a;
 	a=b;
 	b=temp;
 	cout<<"after swapping a="<<a<<" b="<<b;
 }*/
 
 // swapping using 3 rd variable
 
 /* int main(){
 	int a=9,b=44,temp;
 	cout<<"before swapping a="<<a<<" b="<<b<<endl;
 	a=a+b;//a=53
 	b=a-b;//b=9
 	a=a-b;//c=44
 	cout<<"after swapping a="<<a<<" b="<<b;
 }*/

int main(){
	int n1=0,n2=1,n3,n;
	cout<<"enter range:";
	cin>>n;
	cout<<n1<<" "<<n2<<" ";
	for(int i=1;i<=n-2;i++){
		n3=n1+n2;
		cout<<n3<<" ";
		n1=n2;
		n2=n3;
		
	}
}
 

//=========    Loop      =========>
/* #wap to add n nutural number and display result
 n=8
 format :1+2+3+4+5+6+7+8=37;

# wap to take n input from the user and add them all , display result 

# wap to take n inputs from the user and add only even number
amoung them

#wap to take n inputs from the user and add even number;
and  odd number seperately and display result;*/

#include <iostream>
using namespace std;

/*int main(){
	int n,sum=0;
	cout<<"Enter range:";
	cin>>n;
	
	for (int i=1;i<=n;i++){
		if(i==n){
			cout<<i<<"=";
		}else{
			cout<<i<<"+";
		}
		sum=sum+i;//sum=0+1=1 sum=1+2=3 sum=3+3=6 sum=4+6=10 sum=5+10=15 
	}
	cout<<sum;
}*/


int main(){
	int n, sum=0, num;
	cout<<"Enter limit";
	cin>>n;
	
	
	for(int i=1 ;i<=n; i++){
		cout<<"Enter number"<<i<<"=";
	
		cin>>num;
		
		sum=sum+num;
	}
	    cout<<"Sum:"<<sum;
}
















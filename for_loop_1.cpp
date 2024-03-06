/* Write a program to print all natural
/ numbers from 1 to n */
# include <iostream>
using namespace std;
/*
void natural_number(int n){
	for(int i=1; i<=n;i++){
		cout<<i<<endl;
	}
	
}
int main(){
	int n;
	cout<<"Enter Number:";
	cin>>n;
	natural_number(n);
}
=============================================
*/

//Write a program to print all natural numbers in reverse
/*
int main(){
	int n;
	cout<<"Enter Number---->";
	cin>>n;
	
	for(int i=n;i>0;i--){
		cout<<i<<" \n";
		
	}
}
==============================================
*/

void natural_number(int n){
	for(int i=n; i>0; i--){
		cout<<i<<" ";
		
	}
}
	int main(){
		int num;
		cout<<"Enter Number---->";
		cin>>num;
		natural_number(num);
	}
	=========================================

/*
int main(){
	int n, range;
	cout<<"Enter Range and multiple number:";
	cin>>range>>n;
	
	for(int i=1; i<=range;++i){
		cout<<n <<"*"<<i<<"="<<n*i<<endl;
	}
}*/
/*
int main(){
	int num ,flag=0;// flag----->switch (on-off)//indicator
	cout<<"Enter number";
	cin>>num; //35
	
	for(int i=2;i<=num/2;i++){
		if(num%i==0){
			flag=1;
			break;
		}
	}
	if(flag==0){
		cout<<"prime";
	}
	else{
	
	cout<<"not a prime";
     }   
  }
*/

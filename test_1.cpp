
# include <iostream>
using namespace std;

//===================================
/*
int main(){
	int n;
	cout<<"Enter Number---->";
	cin>>n;
	
	for(int i=n;i>0;i--){
		cout<<i<<" \n";
		
	}
}
*/
/*
void fib_number(int n){
	for(int i=n; i>0; i--){
		cout<<i<<" ";
		
	}
}
	int main(){
		int num;
		cout<<"Enter Number---->";
		cin>>num;
		fib_number(num);
	}
*/
/*	
	int main(){
		char ch='A';
		for(int i=1; i<=5;i++){
			for(int j=1; j<=i; j++){
				cout<<ch;
				ch++;
			}
			cout<<endl;
		}
	}*/

// infinet

int main () {
	
	while(true){
	
	int factorial = 1;
	char response ;
	cout<<" To enter number"<<endl;
	cin>>response;
	
	if ( response == 'Y' ||response == 'y') {
		int number ;
		factorial = 1;
		cout<<"Enter the number "<<endl;
		cin>>number ;
		for ( int i = number ; i>=1 ; i--){
			factorial = factorial * i ;
		}
	cout<<"Factorial of given number is "<< factorial<<endl;
	}
    else if ( response =='N'||response=='n') {
    	break;
	}
	else {
	  cout<<"Enter valid ";
	}
}
}
 


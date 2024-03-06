# include <iostream>
using namespace std;
int main(){
	int year;
	cout<<"Enter year:";
	cin>>year;
	if((year%4==0 && year%100!=0)|| year%400==0){
		cout<<year<<" is leap year "; //cascading of output
	}else{
		cout<<year<<   "  Is not a leap year ";
	}
	
}

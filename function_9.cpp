# include <iostream>
using namespace std;

void leap( int year){

if((year%4==0 && year%100!=0)|| year%400==0){
		cout<<year<<" is a leap year";// cascading of output
	}else{
		cout<<year<<"is not a leep year";
	}
}
int main(){
	int year;
	cout<<"enter year:";
	cin>>year;
	leap(year);
}

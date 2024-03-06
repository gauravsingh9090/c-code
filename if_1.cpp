#include <iostream>

using namespace std;

int main(){
	double sal,year_service,bouns;
	cout<<"enter your year of sevice";
	cin>>year_service;
	cout<<"enter your salary";
	cin>>sal;
	if(year_service>5){
		bouns=sal*(5.0/100);
		cout<<"bouns:"<<bouns<<endl;
		cout<<"salary:"<<sal+bouns;
	}
	else{
		cout<<"U r not elgible for bouns \n";
		cout<<"salary"<<sal;
	}
}

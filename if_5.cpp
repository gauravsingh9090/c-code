#include <iostream>
using namespace std;

int main(){
	double quantity, discount , cost;
	cout<<"Enter your quantity :";
	cin>>quantity;
	cost=quantity*100;
	
	if(cost>1000){
		discount=cost*(10.0/100);
		cout<<"Discount="<<discount<<endl;
		cout<<"Discount your cost="<<cost-discount;
	}
}

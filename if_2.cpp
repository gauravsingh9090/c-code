#include <iostream>
using namespace std;

int main(){
	double Quantity ;
	cout<<"Enter Your Quantity ";
	cin>>Quantity;
	double cost = Quantity*100;
	if(cost>1000){
		int discount =cost*(10.0/100);
		cout<<"Total Cost After Discount = "<<discount;
	}
	else{
		cout<<"No Discount"<<cost;
	}
	 
	
	 		
	}

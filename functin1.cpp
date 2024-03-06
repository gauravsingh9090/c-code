# include <iostream>
using namespace std;

void demo(){
	cout<<"\n demonstration of function";
}

int main(){
	cout<<"statement of main function\n";
	demo();
	demo();
	demo();
	
	cout<<"\n after demo calling back to main function";
	
	return 0;
}

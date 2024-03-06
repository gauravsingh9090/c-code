# include <iostream>
using namespace std;

void demo();// decleration ,signature , prototype

// golbal space
int main(){
	cout<<"statement of main function\n";
	demo();// function calling
	demo();
	demo();
	
	cout<<"\n after demo calling back to main function";
	
	return 0;
}
void demo(){
	cout<<"\n demonstration of function";
}
// golbal space

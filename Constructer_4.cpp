#include <iostream>
using namespace std;

class MyClass{              // The class

	public:                // Access specifier
	
	
		int mynum;         // Attribute (int variable)
		
		
		string mystring; // Attribute (String variable)		
};

int main(){
	MyClass myobj;   // create an object of Myclass
	
	
	myobj.mynum=15;
	myobj.mystring= "Some text";
	
	
	
	cout<< myobj.mynum<<"\n";
	cout<< myobj.mystring;
}

#include <iostream>

using namespace std;
/*
int main(){

	string name;
	
	cout<<"Enter the name:";
	
	getline(cin,name);
	
	cout<<name;
	
	// cin --> space ---->string terminate
}
*/


/*
int main(){
	string msg="apple";  // 5 byte
	
	//length(),capacity()
	
	
	cout<<msg.length()<<endl; // 5 // new 20 charater 
	
	cout<<msg.capacity()<<endl; // 15
	
}

*/

int main(){
	string name;
	cout<<"Enter the  name";
	cin>>name;
	
   name.pop_back();
	
	cout<<name;

}



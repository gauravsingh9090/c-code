# include <iostream>
using namespace std;

void fullname(string nm,string sur){ //nm="ajay" sur="sharma"
	string fullN=nm+" "+sur;
	cout<<fullN<<endl;
}
int main(){
	string first_name,last_name;// actula parameter
	cout<<"enter your name";
	cin>>first_name;
	cout<<"enter your surname";
	cin>>last_name;
	fullname(first_name,last_name);
	fullname("rohit","singh");
	
	
}

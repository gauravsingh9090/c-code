#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ofstream wr;
	wr.open("filenew1.txt"); //write mood
	string name , address,stream;
	int age, n;
	
	cout<<"Student file mangem\n";
	
	cout<<"How many record do u want to insert :";
	
	cin>>n;
	
	wr<<"Name   Age  Address  Stream\n";
	
	for(int i=1; i<=n;i++){
		cout<<"Enter name , age , address, steam:";
		cin>>name>>age>>address>>stream;
		wr<<name<<"\t"<<age<<"\t"<<address<<"\t"<<stream<<"\n";
		
	}
	wr.close();
}

#include <iostream>
#include <fstream>
//#include <iomainp>
using namespace std;

int main(){
	string st;
	
	ifstream read("filenew1.txt");
	
	while(getline(read,st)){
		cout<<st<<"\n";
	}
}

#include <iostream>
#include <fstream>
using namespace std;

/*
int main(){
	string st;
	ofstream wr("filenew1.txt",ios::app); 
	wr<<"Gaurav singh";
	wr.close();
}
//====================================================================
*/

int main(){
	string st;
	ofstream wr("filenew1.txt"); // write data delete
	wr<<"Gaurav singh";
	wr.close();
}

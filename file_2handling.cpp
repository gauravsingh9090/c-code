#include <iostream>
#include <fstream>

using namespace std;


int main(){
	/*
	ofstream w("abcd.txt");
	cout<<"File created";
	
	w.close();
	
	
	//===================================================================
	
	*/
	
	/*
	
	ofstream w;
	w.open("C:\\Users\\itxse\\Desktop\\filehandling\\new1.txt");
	cout<<"file created";
	w.close();
	
	*/
	ofstream w;
	w.open("C:\\Users\\itxse\\Desktop\\filehandling\\new1.txt");
	cout<<"\nfile created";
	w<<"\nthis  goes to file";
	w<<"\nthis data goes to file";
	w<<"\nthis data goes to file";
	w.close();
	
	
}

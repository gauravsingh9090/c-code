#include <iostream>
using namespace std;
int main(){
	int x=5, y=5, z;
	x= ++x;// x=6
	y= --y;//y=4
	++y;//y=5
	z= x+ ++x; //7+7
	cout<<"z="<< z;
}

 #include <iostream>
 using namespace std;
 
 int main(){
 	int x= 5, y=5,z;
 	x =++x; y= --y;
 	   ++y;
 	z= x + ++x;
 	
 	cout<<"x="<<x <<" y="<<y <<" z="<<z;
 	 return 0;
 }

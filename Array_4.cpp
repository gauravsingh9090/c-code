#include <iostream>
using namespace std;


int main(){


int marks [10] ={34,45,56,77,78,23,34,66,90,98};

for(int i =0; i<10; i++){
	if(marks[i]<40)
	
	marks[i]=marks[i]+5;
	
}
for(int i =0; i<10; i++){
	cout<<marks[i]<<endl;
		}	
		
}

#include <iostream>
using namespace std;
/*
class  student{
	int rono;
	char name[50];
	double fee;
	
	public:
		student(){
			cout<<"Enter the Roll no:";
			cin>>rono;
			cout<<"Enter the name:";
			cin>>name;
			cout<<"Enter the fee:";
		    cin>>fee;
		}
		
		void display(){
			cout<<name<<"\t"<<rono<<"\t"<<fee<<"\t"<<endl;
		}
};
int main(){
	student s;
	s.display();
}
*/
class student{
	int rno;
	char name[50];
	double fee;
	public:
		student();
		void display();
};

student::student(){
	cout<<"Enter the RollNO:";
	cin>>rno;
	cout<<"Enter the name:";
	cin>>name;
	cout<<"Enter the fee:";
	cin>>fee;
	
}
void student::display(){
	cout<<"\n"<<name<<"\t"<<rno<<"\t"<<fee<<"\t"<<endl;
	
	
}


int main(){
	student s;
	s.display();
}

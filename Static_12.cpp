#include <iostream>
using namespace std;

class worker{
	int age;
	char name[50];
	void get();
};

void worker::get(){
	cout<<"Enter your name:";
	cin>>name;
	cout<<"Enter your age:";
	cin>>age;
}
void worker::show(){
	cout<<"In my name is:"<<name<<"In my age:"<<age;
}

class Manager:: public worker{
	int now;
	public:
		void get();
		void show();
};
worker::get();
cout<<""

#include <iostream>
using namespace std;


class base{
	public:
  virtual void print(){
		cout<<"Print base class\n";
	}
	void show(){
		cout<<"show base class\n";
	}
};

class derived :public base{
	
	public:
		void print(){
		cout<<"Print derived class\n";
	}
	void show(){
		cout<<"show derived class\n";
	}
};

int main(){
	base * ptr;
	derived d;
	ptr =&d;
	ptr->print();
	ptr->show();
}


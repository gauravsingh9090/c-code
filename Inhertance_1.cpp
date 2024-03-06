#include <iostream>
using namespace std;
/*
class Parent {
	void privatef(){
		cout<<"I am private menmber";
	}
	public:
	void publicf(){
		cout<<"I am public menmber";
	}
	
	protected:
		void protectedf(){
		cout<<"I am protected menmber";
	}
};
int main(){
   	Parent p;
   	p.publicf();
   	}
   	
   	========================================================================================
   */	
   	class Parent {
	void privatef(){
		cout<<"I am private menmber";
	}
	public:
	void publicf(){
		cout<<"I am public menmber\n";
		privatef();
		
	}
	
	protected:
		void protectedf(){
		cout<<"I am protected menmber";
	}
};
int main(){
   	Parent p;
   	p.publicf();
   	}

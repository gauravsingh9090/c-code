#include <iostream>
using namespace std;

/*
class A{
	public:
		A(){
			cout<<"A class Constructor\n";
		}
};

class B : public A{
	
	public:
		B(){
			cout<<"B class constructor\n";
			
		}
};

class C : public B{
	public:
		C(){
			cout<<"C class constructor\n";
		}
};

int main(){
	C c;
	
}
//=============================================
*/


/*
class A{
    public:
    	int num;
    	A(int a){
    		num=a;
    		cout<<"a class constructor\n";	
	}
};

class B: public A{
	public:
		B(int a):A(a){
			cout<<"b class constructor\n";
		}
};
class C: public  B{
	public:
		C(int a):B(a){
			cout<<"C class constructor\n";
		}
};

int main(){
	C c(2);
}

*/

class Vehicle{
	protected:
		int max_speed , milage , capacity;
		double total_price;
		
		public:
			Vehicle(int a , int b, int c){
				max_speed=a;
				milage=b;
				capacity=c;
				total_price=0;
			}
			
		virtual	void fare(){
				total_price=capacity*100;
			}
			
		virtual	void display(){
				cout<<"Max speed"<<max_speed<<"Milage:"<<milage<<endl;
				cout<<"capacity"<<capacity<<"Total price:"<<total_price<<endl;
			}
			
};
class Bus: public Vehicle{
	private:
		string name;
		public:
			Bus(string n , int a, int b, int c=50):Vehicle(a,b,c){
				name=n;
			}
			void fare(){
				total_price=capacity*100; //5000
				total_price=total_price+(.1*total_price);
			}
			void display(){
				cout<<"Name:"<<name<<endl;
				cout<<"Max speed"<<max_speed<<"\n""Milage:"<<milage<<endl;
				cout<<"capacity"<<capacity<<"Total price:"<<total_price<<endl;
			}
};
int main(){
	Vehicle * base;
	Bus b("volvo" ,200 ,15);
	
	base=&b;
	base->fare();
	base->display();
	
	
	//b.fare();
}

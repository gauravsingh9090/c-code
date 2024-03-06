#include <iostream>
using namespace std;

class A{
	public:
		void dispaly();
};
 void A::dispaly(){
	cout<<"Hello Display";
}

int main(){
	A a;
	a.dispaly();
}

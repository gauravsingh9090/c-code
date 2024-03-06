#include <iostream>
using namespace std;

class F{
private:
	int private_variable;
	 protected:
	 	int protected_variable;
	 	
	 	public:
	 		F(){
	 		private_variable=10;
			 protected_variable=99;	
			 }
	friend class G;
};

class G{
	public:
	void display(F   t){
		cout<<"The value of private variable="
		<<t.private_variable<<endl;
			cout<<"The value of private variable="
		<<t.protected_variable<<endl;
	}
};

int main(){
	F f;
	G g;
	g.display(f);
}

#include <iostream>
using namespace std;
/*
class customar
{
	string name;
	int account_number ,balance;
	static int total_customar;
	
	public:
		customar(string n , int a , int b)
		{
		name=n;
		account_number=a;
		balance=b;
		total_customar++;	
		}
		static void function(){
			cout<<"\nTotal customar"<<total_customar<<"\n";
		}
		void display()
		{
			cout<<"\nName: "<<name<<"\naccount_number "<<account_number<<endl;
		     
			cout<<"\nBalance: "<<balance<<"\nTotal customar "<<total_customar<<endl;
			 	
		}
};
int customar::total_customar=0;

int main()
{

	customar c("Gaurav",1222,3211);
	c.display();
	customar c1("Gaurav",1222,3211);
	c1.display();
	customar::function();
}
//=================================================
*/

/*
class customar{
	int i;
	
	public:
		customar()
		{
			i=0;
			cout<<"Inside constructor\n";
		}
		~customar()
		{
			cout<<"Inside destructor\n";
		}	
};

int main(){
int x =0;
if(x == 0){
	customar obj;
}
cout<<"End of main\n";
}
//========================================
*/

/*
class customar
{
	public:
		static void display()
		{
		cout<<"Welcome to Gaurav:"<<endl;
		}
};

int main(){
	customar::display();
}
//======================================
*/

class Test{
	static int x;
	public:
		Test(){
			x++;
		}
	static int fun(){
	   return	x;
	}	
};

int Test::x=0;

int main(){
cout << Test::getX() << " ";
    Test t[5];
    cout << Test::getX();
}

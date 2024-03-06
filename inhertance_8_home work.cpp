#include <iostream>
using namespace std;


/*
#data member: int Bid,Quantity;
#member function: parameterized_constructor(),void Purchase(),void Sale(), void currentstock().
# first user intitailized data members with input values.
# purchase can add books quantity
# sale can decremented books quantity.

class Book{
	int bid , quantity;
	
	public:
		Book (int a ,int b){
			bid=a;
			quantity=b;	
		}
		
		void purchase(){
			int number;
			cout<<"How many more picese do u want purchase";
			cin>>number;
			quantity=quantity+number;
		}
		
		void sale(){
			int number;
			cout<<"How many more picese do u want sale";
			cin>>number;
			quantity=quantity-number;
			
		}
		
		void current_stock(){
			cout<<"Book id: "<< bid   <<"  quentity  "<<quantity<<endl;
		}
};

int main(){
	Book b(101,24), b1(102,34);
	b1.current_stock();
	b1.purchase();
	b1.current_stock();
	b1.sale();
	b1.current_stock();
}

*/

//=================================================
/*
3)Write a  class named animal constructed by a name, no_legs, category
(herbivores, carnivores and omnivores)and

#private data member: name(string type),no_legs (int type),category(string type) (herbivores, carnivores and omnivores)
detail(string type)

private member function:
    void set_detail()
description:
 1)herbivores -> "animals that eat plants"
 2)carnivores -> "animals that eat only meat"
 3)omnivores -> "animals eat both plants and meat"
  
public 
#member function: parameterized_constructor(name,legs,category)
                  and call set_detail() inside it.
                  all_details() -->display all
                  category () -->display category
Create some objects and display result.

*/
//======================================================================
/*
class Animal{
	private:
		string name, category , details;
		int no_of_legs;
		
		void set_details(){
			if(category=="carnivores")
			    details="Animal that can eat only meat";
			    
			    else if(category=="omnivores")
			    details="animals eat both plants and meat";
			    
			    else if(category=="herbivores")
			    details="animals that eat plants";
		}
		public:
			Animal(string n, int a , string cat){
				name=n;
				
				no_of_legs=a;
				
				category=cat;
				
				set_details();	
			}
			
			void all_details(){
				cout<<"Name:"<<name<<"Number of legs: "<<no_of_legs<<endl;
				cout<<"category"<<category<<endl;
				cout<<"set_details"<<details<<endl;
			}
};

int main(){
	Animal a("Tiger", 4 , "carnivores"), b("cat", 4 ,"herbivores") , c("Jeeraf", 4 ,"omnivores" );
	a.all_details();
//	b.all_details();
//	c.all_details();
	
}

*/
//=============================================================

/*

2>Write a class named Circle constructed by a radius and 
two methods which will compute the area and the perimeter of a circle.

#data member: double radius.
#member function: parameterized_constructor(),void area() ,void perimeter(), void display().

*/

/*
class Circle{
	
	double radius;
	
	public:
		
		Circle(double r){
			radius = r;
			
		}
		
		void area(){
			double a=3.14 * radius* radius;
			
			cout<<"Area of the circle is "<< a <<endl;
		}
		
		void perimeter(){
			double p = 2* 3.14 * radius;
			
			cout<<"Perimeter of the circle is" <<p << endl;
		}
		void display(){
		 cout<<"Radius of the circle is "<< radius <<endl;
		 
		 area();
		 perimeter();	
		}
};
int main(){
	Circle b(4);
	b.display();
	
}
*/
//=============================================================
/*
WAP to create a class  Resume .
#data member: string name,double percentage10,double percentage12,double percentagedegree,bool currentlyworking,
#member function: parameterized_constructor(),void update_percent() ,void update_name(), void display().
*/


/*
class  Resume {
	string name;
	double percentage10;
	double percentage12;
	double percentagedegree;
	bool currentlyworking;
	
	
	public:
		 Resume(string n , double p10, double p12 , double pd , bool cw){
		 
		        name = n;
		        percentage10 = p10;
		        percentage12 = p12;
		        percentagedegree =  pd;
		        currentlyworking = cw;
		 }
		 void update_percent(double p10 , double p12 , double pd){
		     	percentage10 =p10;
		     	percentage12 = p12;
		     	percentagedegree = pd;
		     	
		 }
		 void update_name(string n){
		 	name = n;
		 }
		 
		 void display(){
		 	cout<<"Name :"<< name <<endl;
		 	cout<<"	percentage in 10th"<<	percentage10 << endl;
		 	cout<<" percentage int 12th"<< percentage12 <<endl;
		 	cout<<" percentage in degree :"<<	percentagedegree<<endl;
		 	cout<<"Currently working :"<<currentlyworking << endl;
		 	
		 }
		    
};


int main(){
	Resume b("Gaurav" ,100.0 , 100.0 , 23 , "yes" );
	b.display();
	b.
}
*/	
	/*
	
6>WAP to create a class  Highest which can
#find highest number amoung 3 numbers.
#data member: int n1,n2,n3,high.
#member function: parameterized_constructor(), highest()
*/

/*
class Highest{
	int n1,n2,n3, high;
	
	public:
		
		Highest(int a , int b , int c){
			n1=a;
			n2=b;
			n3=c;
		}
		void highest(){
			
			high = n1;
			
			if(n2 > high){
				high = n2;
			}
			if(n3 > high){
				high = n3;
			}
			cout<<"The highest number is:"<<high <<endl;
		}
};

int main(){
	Highest v(23 , 45 , 2);
	v.highest();
}
*/
//===============================
/*
WAP to create a class  Swap which can
#swap the value of 2 variable.
#data member: int num.
#member function: parameterized_constructor(), swap()
*/
/*
class Swap{
	
	int num;
	
	public:
		
		Swap(int n){
			num=n;
		}
		
		void swap(Swap & other){
			int temp = num;
			num = other.num;
			other.num = temp;
		}
};

int main(){
	Swap c(12);
	
}

*/
//==========================
/*
WAP to create a class  Factorial which can
#find the factorial of a num.
#data member: int num.
#member function: parameterized_constructor(), factorial()
//==============================================
*/

/*
class Factorial {

    int num;

    public:
    
    Factorial(int n) {
        num = n;
    }

    
    void factorial() {
        
        int f = 1;
        for (int i = 1; i <= num; i++) {
            f = f * i;
        }
        cout << "The factorial of " << num << " is " << f << endl;
    }
};

int main(){
	Factorial a(12);
	a.factorial();
}
//===========================================
*/

/*
.Define a class to represent a bank account. Include the following members:

Data members:
1) Name of the depositor
2) Account number
3) Type of account
4) Balance amount in the account.
5) password 

Member functions:
1) To assign initial values (constructor)
2) To deposit an amount (match password if want to perform operation)
3) To withdraw an amount after checking the balance (match password if want to perform operation)
4) To display name and balance.

//==========================================
*/


class BankAccount{
	string name;
	long accno;
	char type;
	double bal;
	string password;
	
	
	public:
		BankAccount(string n , long a , char t , double b, string p){
		  name=n;
		  accno=a;
		  type=b;
		  bal=b;
		  password=p;	
		}
		
		void deposite(double amount ){
			string pass;
			cout<<"Enter the password";
			cin>>pass;
			if(pass==password){
				bal=bal+amount;
			
			cout<<"Amount deposite successfully.\n";
		}
		else{
			cout<<"Incorrect password";
		}
			}
			
	void withdraw(double amount ){
			string pass;
			cout<<"Enter the password";
			cin>>pass;
			if(pass==password){
				bal=bal-amount;
			
			cout<<"Amount deposite successfully.\n";
		}
		else{
			cout<<"Incorrect password";
		}
	}
	void display(){
		cout<<"Name:"<<name<<"\n";
		cout<<"Balance:"<<bal<<"\n";
	}
			
			
};

int main(){
//	BankAccount a("Gaurav", 121212, "SBI",25000,);
//	a.display();
	
}




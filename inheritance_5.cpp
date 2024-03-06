/*
3.Write a C++ program to find the area and perimeter of rectangle using class Rectangle which have following details:


Data members:
1) breadth
2) length
3) area
4) perimeter
Member functions:
1) area()
2) perimeter()
*/

#include <iostream>	
using namespace std;

/*
class  Area{
	int breadth;
	int length;
	int par;
	int are;
	public :
		Area(){
			cout<<"Enter Breadth of Rectangle : ";
			cin>>breadth;
			cout<<"\nEnter Length of Ractangle : ";
			cin>>length;
		}
		void parameter(){
			par = 2*(length +breadth);
			cout<<"\nparameter of ractangle : "<<par;
		}
		void area(){
			are = breadth* length;
			cout<<"\nArea of Ractangle : "<<are;
		}
};

int main(){
	Area e;
	e.area();
	e.parameter();
}
=============================================================
*/

/*
Q.5)   Define a class Institution
 having private member
int Code,char Course[20],float Fee.
having public member:
constructor()
display()
*/

/*
class Institution{
	int code;
	char Course[20];
	float Fee;
	
	public:
		Institution(){
			cout<<"Enter your code:\n";
			cin>>code;
			
			cout<<"Enter your course:\n";
			cin>>Course;
			
			cout<<"Enter your Fee:\n";
			cin>>Fee;
		}
		void display(){
			cout<<"Your code:\n"<<code;
				cout<<"Your Course:\n"<<Course;
					cout<<"Your code:\n"<<Fee;
			
			
			
		}
};

int main(){
		Institution w;
		w.display();
			
}
*/

/*

Q.6)Define a class TRANSPORT in  with the following 
specifications : 
having private member
- Vno-->int
- Vehicle -->string
- Type -->string
- FindType() # To assign Type of Vehicle
# based on Name of the Vehicle as shown
# below : 
Vehicle     ----------- Type
MotorCycle  ----------  MCYCL
Car         ------------MTV
Truck       ------------HTV
Bus         ------------HTV
Public Member:
- Enter() # To allow user to enter value of
# Vno and Vehicle. Also, this method should
# call FindType() to assign Type
- Display() # To display Vno, Vehicle and Typ
*/

class TRANSPORT {
    
    int Vno; 
    string Vehicle; 
    string Type; 

           	
        void FindType() {
        if (Vehicle == "MotorCycle") {
            Type = "MCYCL";
        }
        else if (Vehicle == "Car") {
            Type = "MTV";
        }
        else if (Vehicle == "Truck") {
            Type = "HTV";
        }
        else if (Vehicle == "Bus"){
        	Type = "MTV";
		}
    }
    public:
     void Enter() {
    
        cout << "Enter Vno:\n ";
        cin >> Vno;
        cout << "Enter Vehicle:\n ";
        cin >> Vehicle;
    
        FindType();
    }
    void Display() {
        
        cout << "Vno:\n " << Vno << endl;
        cout << "Vehicle: \n" << Vehicle << endl;
        cout << "Type:\n " << Type << endl;
    }

};
int main(){
    TRANSPORT  e ;
	e.Enter();
	e.Display();
}


/*
1.Define a class to represent a bank account. Include the following members:

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

*/

class BankAccount {
    
    
    string name; 
    int acc_no; 
    string acc_type; 
    double balance; 
    string password; 
           
           
           public:  
                 BankAccount(){
                 	cout<<"Enter Name of the depositor:";
                 	cin>>name;
                 	
                 		cout<<"Enter Name of the Account Number:";
                 		cin>>acc_no;
                 		
                 			cout<<"Enter Name of the Account Type:";
                 			cin>>acc_type;
                 			
                 				cout<<"Enter Name of the Balance:";
                 		          	cin>>balance;
                 		          	
                 		          		cout<<"Enter Password";
                 			                   cin>>password;	
				 }
				 
			void deposit(double amount){
				cout<<""
				
			}	 
       };
    

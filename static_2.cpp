#include <iostream>
using namespace std;
/*
class custumar
{

string name;
int account_number , balance;
static int total_account; 
       
public:
       	
custumar(string name , int account_number,int balance)
{
	
this->  name=name;
this->  account_number=account_number;
this->  balance=balance; 
total_account ++; 		
       		
}
		   
  
void display()
  
{
   	
cout<<"Name:->"<<name<<"\naccount_number-> "<<account_number<<endl;
cout<<"Balance-> "<<balance<<" "<<"\ntotal_account-> "<<total_account;
			
}
  
    
};

int custumar::total_account=0;

int main()
{
custumar c("Gaurav",1212,232);
c.display();
}

*/

class custumar
{

string name;
int account_number , balance;
static int total_account; 
       
public:
       	
custumar(string name , int account_number,int balance)
{
	
this->  name=name;
this->  account_number=account_number;
this->  balance=balance; 
total_account++; 		
       		
}

  		   
  
void display()
  
{
   	
cout<<"Name:->"<<name<<"\naccount_number-> "<<account_number<<endl;
cout<<"Balance-> "<<balance<<" "<<"\ntotal_account-> "<<total_account;
			
}
static void display1()
{
	cout<<total_account<<endl;
}


    
};

int custumar::total_account=0;

int main()
{
custumar c("Gaurav",1212,232);
custumar c1("Gaurav",1212,232);
//c.display();
custumar::display1();
}

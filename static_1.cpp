//wap to find the number of object creted of a class.


#include  <iostream>
using namespace std;

/*
class Cybrom{
    public:
	
  static int count_objects;
  
  Cybrom(){
  	count_objects++;
  }
		
};

int Cybrom :: count_objects=0;


int main(){
	Cybrom c1,c2,c3;
	
	cout<<Cybrom :: count_objects<<endl;
}

//======================================================
*/

/*
class Cybrom{
    public:
	
  static int count_objects;
  static string address;
  
  
  Cybrom(){
  	count_objects++;
  }
  static void display(){
  	cout<<count_objects<<"\n";
  	cout<<address<<"\n";
  }
		
};

int Cybrom :: count_objects=0;

string Cybrom::address="Bhopla";


int main(){
	Cybrom c1,c2,c3;
	
	cout<<Cybrom :: count_objects<<endl;
	c1.display();
}
//-----------------------------------------=====================>
*/

 static void f2(){
 	cout<<"Indepented static";
 }


class Cybrom{
    public:
	
  static int count_objects;
  static string address;
  
  
  Cybrom(){
  	count_objects++;
  }
  static void display(){
  	//cout<<count_objects<<"\n";
  //	cout<<address<<"\n";
  
   f2();
  }
		
};

int Cybrom :: count_objects=0;

string Cybrom::address="Bhopla";


int main(){
	Cybrom c1,c2,c3;
	
	cout<<Cybrom :: count_objects<<endl;
	c1.display();
}



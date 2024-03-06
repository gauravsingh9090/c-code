#include <iostream>
using namespace std;
/*
class Car{
	public:
	string brand;
	string model;
	int year;
};

int main(){
	Car obj;
	obj.brand ="BMW";
	obj.model ="X5";
	obj.year =1999;
	
	Car obj1;
	obj1.brand="Ford";
	obj1.model="Mustang";
	obj1.year=1969;
	
	
	cout<<obj.brand<<" "<<obj.model<<" "<<obj.year<<" "<<endl;
	cout<<obj1.brand<<" "<<obj1.model<<" "<<obj1.year<<" "<<endl;
	
}
//============================================
*/


/*
class Myclass{
	public:
		void myMethod(){
			cout<<"Hello World:""\n";
			
		}
};

int main(){
	Myclass m;
	m.myMethod();
}
//===================Otside Example ======================
*/


/*
class Myclass{
	public:               //Access specifier
		void myMethod();   // method/ function declaration
};

void Myclass::myMethod(){
	cout<<"Hello world!";
}

int main(){
	Myclass obj;      // create an object of myclass
	obj.myMethod();   // call the method
}
//=========================================
*/

/*
class Car{
	public:
		
		int speed(int maxspeed);		
};

int Car::speed(int maxspeed){
	return maxspeed;
}

int main(){
	  Car myobj;
// call the method with an argument
	  cout<<myobj.speed(200);
}

//=================Constructor Parameters=====================
*/

/*
class Car{
	public:
	   string brand;
	   string model;
	   int year;
	   
	   Car(string x, string y , int z){
	   	brand = x;
	   	model = y;
	   	year = z;
	   }
};

int main(){
	Car obj("BMW" ,"X5", 1995);
	Car obj1("Ford","Mustan" , 1996);
	
	cout<<obj.brand<<" "<<obj.model<<" "<<obj.year<<" "<<endl;
	cout<<obj1.brand<<" "<<obj1.model<<" "<<obj1.year<<" "<<endl;
		
}
//========================================

*/


/*
class Car{
	public:
		string brand;
		string model;
		int year;
		
		Car(string x , string y , int z);
};

Car::Car(string x , string y , int z){
	brand = x;
	model = y;
	year = z;
}

int main(){
	Car obj("BMW","X5",1999);
	Car obj1("Ford","Mustang",1996);
	
	cout<< obj.brand<<" "<<obj.model<<" "<<obj.year<<endl;
	cout<< obj1.brand<<" "<<obj1.model<<" "<<obj1.year<<endl;
	
}
//====================Access Specifiers=========================
*/


class Myclass{
	public:
		int x;
	private:
	    int y;	
};

int main(){
	Myclass obj;
	obj.x=25;
}


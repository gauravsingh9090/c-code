# include <iostream>
using namespace std;

class Ele_Bill{
	char Cname[20];
	long long Pnumber;
	int no_of_units;
	float Amount;
	void calc_Amount(){
		if (no_of_units<=50)
		     Amount=0;
		     
		     else if(no_of_units<=150 && no_of_units>50)
		       Amount=no_of_units*.80;
		       
		       else if(no_of_units<=350 && no_of_units>150)
		       Amount=no_of_units*1;
		       
		       else if( no_of_units>350)
		       Amount=no_of_units*1.20;	       
	}
	
	public:
		Ele_Bill(){
			cout<<"Enter name,mobile,number of unit:";
			cin>>Cname>>Pnumber>>no_of_units;
			calc_Amount();
		}
		void display(){
			cout<<"Name="<<Cname<<endl;
			cout<<"Mobile Number="<<Pnumber<<endl;
			cout<<"No of Units\n="<<no_of_units;
			cout<<"Amount="<<Amount<<endl;
		}
};
int main(){
	Ele_Bill e;
	e.display();
}

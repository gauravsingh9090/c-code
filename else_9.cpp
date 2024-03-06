# include <iostream>
using namespace std;
/*int main(){
	double WaterConsumption;
	cout<<"Enter your Annual water consumption =";
	cin>>WaterConsumption;
	
	if(WaterConsumption>=45 && WaterConsumption<75){
		cout<<"Your Annual water Consumption Tax is =475.00";
		
	}else if(WaterConsumption>=75 && WaterConsumption<125){
		cout<<"Your Annual water Consumption Tax is =750.00";
		
	}else if(WaterConsumption>=125 && WaterConsumption<200){
		cout<<"Your Annual water Consumption Tax is =1225.00";
		
	}else if(WaterConsumption>=200 && WaterConsumption<350){
		cout<<"Your Annual water Consumption Tax is =1650.00";
		
    }   else if( WaterConsumption>=350){
    	
	    cout<<"Your Annual water Consumption Tax is =2000.00";
    }else{
    	 cout<<"Your Annual water Consumption Tax is Free";
	}
}
*/

//============================================================>



int main(){
	string name, address;
	double amount,discount;
	char type;
	cout<<"Enter your name";
	cin>>name;
	cout<<"Enter your address";
	cin>>address;
	cout<<"Please select your catagory 'L' for laptop and 'D' for desktop ";
	cin>>type;
	cout<<"enter amount of purchase";
	cin>>amount;
	cout<<"Your Bill"<<endl;
	cout<<"Name"<<name<<endl;
	cout<<"Addres:"<<address<<endl;
	
	if(type=='L'){
		if(amount>0 && amount<=25000){
			cout<<"No discont , Total amount"<<amount;
		}
		else if(amount>25001 && amount<=57000){
			discount=amount*(5.0/100);
				cout<<"discount:"<<discount<<"amount paid:"<<amount-discount;
	
		}
		else if(amount>57001 && amount<=10000){
			discount=amount*(7.0/100);
				cout<<"discount:"<<discount<<"amount paid:"<<amount-discount;
	}
	    else if(amount>10001){
			discount=amount*(5.0/100);
			cout<<"discount:"<<discount<<"amount paid:"<<amount-discount;
	
    }
}
     else if(type=='D'){
     	if (amount>0 && amount<=25000){
     		discount=amount*(5.0/100);
     		cout<<"discount :"<<discount<<"amount paid:"<<amount-discount;
     		
	}else if(amount>25001 && amount<=57000){
		discount=amount*(7.5/100);
     		cout<<"discount :"<<discount<<"amount paid:"<<amount-discount;
     		
	}else if(amount>57001 && amount<=10000){
		discount=amount*(10.0/100);
     		cout<<"discount :"<<discount<<"amount paid:"<<amount-discount;
     		
	 }else if(amount>10000){
		discount=amount*(15.0/100);
     		cout<<"discount :"<<discount<<"amount paid:"<<amount-discount;
     	}
     }
 }
     		
//====================================================================

 /*int main(){
	char ch;
	cout<<"enter any character:";
	cin>>ch;
	
	
	if(ch>='A' && ch<='Z'){//  4>5  A>B
		cout<<"UPERCASE";
	}else if(ch>='a' && ch<='z'){
		cout<<"LOWERCASE";
	}
	
// ASCIT A=65 B=66 C=67.......Z=90  a=97.......z=122	
}*/

//=================================================================================
/*
void determiner (char character){  //character='G' fromal copy
       if(character>='A' && character<='Z'){//  4>5  A>B
		cout<<"UPERCASE";
	}else if(character>='a' && character<='z'){
		cout<<"LOWERCASE";
	}
	
}  
   string determiner_return(char character){
   
if(character>='A' && character<='Z'){//  4>5  A>B
		cout<<"UPERCASE";
	}else if(character>='a' && character<='z'){
		cout<<"LOWERCASE";
	}
}
int main(){
	char ch;
	cout<<"enter any character";
	cin>>ch;
	determiner (ch); //f() calling ch---->actual
	cout<<endl;
	string result= determiner_return(ch);
	cout<<result;
}*/


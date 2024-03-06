#include <iostream>

using namespace std;

 //string day(int num){   //formal
/* void day(int num){
 	switch(num){
 		case 1: cout<<"Monday";
 		break;
 		case 2:cout<<"Tuesday";
 		break;
 		case 3:cout<<"Wednesday";
 		break;
 		
 		case 4:cout<<"Thusday";		
 		break;
 		
 	    case 5:cout<<"Friday";
 		break;
 			
 		case 6: cout<<"Saturday";
 		break;
 			
 		case 7:cout<<"Sunday";
 		break;
 		
 		default : cout<<"Invalid case";
 		break;
	 }
 }

int main(){
	int day_num;
	cout<<"enter any day number(1-7):";
	cin>>day_num;
	day(day_num);
//	string result=day(day_num);
//	cout<<
}*/

//parameter --->int number

//return string

//========================>
/*string day(int num){   // 4 multiple return statment
 	switch(num){
 		case 1: return "Monday";
 		
 		case 2:return"Tuesday";
 		
 		case 3:return"Wednesday";
 	
 		
 		case 4:return"Thusday";		
 		
 		
 	    case 5:return"Friday";
 		
 			
 		case 6: return"Saturday";
 		
 			
 		case 7:return"Sunday";
 		
 		
 		default : return"Invalid case";
 		
	 }
 }

int main(){
	int day_num;
	cout<<"enter any day number(1-7):";
	cin>>day_num;
	day(day_num);
	string result=day(day_num);
	cout<<"Day correspomding"<<day_num<<"----->"<<result;
}

//============================================>
wap to build  a calculator using switch() case
num!=90;
num2=4
select operator +,-,*,/,%
return -----> operator result*/

  /*  double calculator(int a, int b,char ch ){
     	double result;
     	switch(ch){
     		case'+':result=a+b;
     		break;
     			case'-':result=a-b;
     		break;
     			case'*':result=a*b;
     		break;
     			case'/':result=a/b;
     		break;
     			case'%':result=a%b;
     		break;
     		default: cout<<"Invalid";
		 }
		 return result;
	 }


int main(){
	int n1,n2;
	char choice;//'+','-'....
	cout<<"enter to number:";
	cin>>n1>>n2;
	 
	 cout<<"Enter opertor (+,-,*,/,%)";
	 cin>> choice;
	 cout<<calculator(n1,n2,choice);
}*/
//=====================================>

/*int main(){
	int var=2;
	 switch(var){
	 	case 1:
	 	cout<<"Case 1 is executed.\n";
	 	case 2:
	 		cout<<"Case 2 is executed .\n";
	 	case 3:
	 	    cout<<"Case 3 is executed .\n";	
	 	case 4:
	 		cout<<"Case 4 is executed .\n";
	 	
	 }
}*/
////======================>
int main(){
	int var1 =1;
	int var2 =0;
	
	switch(var1){
		case 0:
			cout<<"Outher switch case 0\n";
			break;
		case 1:
			cout<<"Outher switch case 1\n";
		switch (var2){
			case 0:
				cout<<"Inner switch case 0\n";
				break;
		}
			break;
		default:
			cout<<"Default case of outer Loop";
			break;
		
	}
}

/*num=90 //initialization


while(num>80){//test expression


	cout<<num<<endl;//body of while
	
	
	num++;//updation
}


While(condition){
	//body of while
}*/

/*
  break: to come out of block (loop, switch)

  continue :(loop) restart the next cycle from the begining of loop

  infinite loop: while(1)}{

  must have a exite point (break)

   }

*/

# include <iostream>

using namespace std;
/*
int main(){
	while(1){
	
	cout<<"infinte loop";
    }
}*/
//============================
/*
int main(){
	int num=10;
	
	while(1){
		cout<<"infinite loop---->"<<num<<endl;
		num++;
		
		if(num==30){
			break;//exit point
		}
	}
}
*/
//========================================
/*
int main(){
	int n1,n2;
	char ch; //'y' or 'n'
	
	while(1){
		cout<<"enter two num:";
		cin>>n1>>n2;
		cout<<"add:"<<n1+n2;
		cout<<"\n do u want to continue 'y' or'n' :";
		cin>>ch;
		if(ch=='y'){
			continue;
		}
		else if(ch=='n'){
			cout<<"thanku u n for using our services";
			break;
		}
	}
}*/
/*
int main(){
	int num, count_n=0 ,count_p=0,count_z=0;
	char ch;
	
	while(1){
		cout<<"Enter Number";
		cin>>num;

	if(num>0){
	    count_p++;
	}
	else if(num<0){
		count_n++;
	}
	else if(num==0){
	   	count_z++;
	}
	cout<<"\n Do you want to continue 'y'or 'n':";
	cin>>ch;
	
	if(ch=='y'){
		continue;
		
	}else if(ch=='n'){
		cout<<"Thanku you for using our service";
		break;
     }
 }
	cout<<"\n p="<<count_n ;
	cout<<"\n n="<<count_p;
	cout<<"\n z="<<count_z;

}*/
//==============================================================


//Write a program that ask the user two input . 
//print the multiplication table of that range of numbers(nesting)
/*
int main(){
	int n = 5;  // Change here to change output
    for (int i = 1; i <= 10; ++i) 
        cout << n << " * " << i << " = "<< n * i << endl;
             
}
*/
//====================================================================

//Write a program to find the factorial of any number entered by user.
/*
int main(){
	int n;
	long factorial=1.0;
	
	cout<<"Enter a positive integer:";
	cin>>n;
	
	if(n<0)
		cout<<"Factorial of a negative number doesn't exist";
		else{
			for(int i=1; i<=n;++i){
				factorial*=i;
			}
			cout<<"Factorial of "<< n <<"="<< factorial;
		}
	}
*/
//=============================================================
/*
#Armstrong
#palindrom
# 234=9(addition)
# 234=24(product)


# wap to determine wheter a number passed by a user is armstrong number or not.
153 ,370 , 371 ,407

153=1^3+5^3+3^3=153    .... 1+125+27=153

1   5    3
153%10---->3

153/10----->15
(-------------------------)

15%10------>5

15/10------>1

(-------------------------)
1%10----->1

1/10----->0


=====================================================================
*/
/*
int main(){
	int num,temp,sum=0,last;
	cout<<"Enter Number:";
	cin>>num;
	temp=num;// original num presvber temp=153
	
	while(num>0){
		last=num%10; // last=153%10=3    //last=15%10=5 // last=1%10=1
		sum=sum+(last*last*last); //sum=0+27=27 // sum=0+27=27  // sum=27+5^3=152 // sum=152+1=153
		num=num/10;  //num=153/10=15 //num =15/10=1 //num=1/10=0
	}
	if(temp==sum){
		cout<<"armstrong";
		
	}else{
		cout<<"Not  a armstrong";
	}
}
*/

//========================================
/*
int main(){
	int num,temp,sum=0,last;
	cout<<"Enter Number:";
	cin>>num;
	temp=num;// original num presvber temp=153
	
	while(num>0){
		last=num%10; 
		sum=sum+last; 
		 num=num/10;
	}
	cout<<sum;
}*/

//=============================================
/*
int main(){
	int num,temp,sum=1,last;
	cout<<"Enter Number:";
	cin>>num;
	temp=num;// original num presvber temp=153
	
	while(num>0){
		last=num%10; 
		sum=sum*last; 
		 num=num/10;
	}
	cout<<sum;
}
=============================================================
*/
int main(){
	int num,temp,reverse=0,last;
	cout<<"Enter Number:";
	cin>>num;
	temp=num;// original num presvber temp=153
	
	while(num>0){
		last=num%10; 
		reverse=reverse*10+last; 
		 num=num/10;
	}
	cout<<reverse;
}

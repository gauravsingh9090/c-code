/*

jump statement:
	break,continue,goto,return
	
	
	syntax:
		goto lable1 // sta_4;  // lable block
		sta_5;
		sta_6;
		sta_7;
		lable1   :{     // directy jump here after encountter lable1
		               //set of statement
		
		}
*/


# include <iostream>
using namespace std;
/*
int main(){
	cout<<"Welcome\n";
	cout<<"to\n";
	goto new_msg;
	cout<<"cyborm\n";
	
	new_msg:{
	  cout<<"c++ classes\n";
	}
}

*/

int main(){
	int n,i=1;
	cout<<"Enter number";
	cin>>n;
	
	multiplication_table:{
	cout<<n<<"x"<<i<<"="<<n*i<<endl;
	
	if(i==10){
		goto exit;
	}
	i++;
	}
   goto	multiplication_table;
   
     exit:{
    cout<<"\n thank you";
   }
}


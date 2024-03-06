# include <iostream>
using namespace std;
/*
int main(){
	int ar[4][2]={2,3,45,5,5,55,9,90};
//	{{2,3},{45,5},{5,55},{9,90}};

cout<<ar[3][0]<<endl;//9
cout<<ar[2][1];//55
	
}
int main(){
	int ar[2] [3];// no_ofelement=row*colum=6
	ar[o] [0]=24;// sizeof(int) * no_of element = total_size;
	ar[0] [1]=2;
	ar[0] [2]=45;
	cout<<ar[0][1]<<endl;
	cout<<sizeof(ar);
	
	
	double ar1[2][3][4]; // total element -24
	cout<<sizeof(ar1); //8*24=192
}
==================================================================================
wap to create  a 2-d array of nxm matrix
n and m are user define 
*/

/*
int main(){
	int row , column;
	cout<<"Enter the size of row and column";// 2 ,3
	cin>>row>>column;
	int a[row][column];
	
	//a [0][0] ,a[0][1] ,a[0][1]
		//a [1][0] ,a[1][1] ,a[0][2]
		
	for(int i=0; i<row; i++){//i=1
		for(int j=0; j<column;j++){//j=3
			cout<<"Enter Number for Index "<<i<<j<<" ";
			cin>>a[i][j];
		}
	}
	
	for(int i=0; i<row; i++){//i=1
		for(int j=0; j<column;j++){//j=3
			cout<<"\n Number for Index "<<i<<j<<" "<<a[i][j];
    }
}
cout<<endl;
	for(int i=0; i<row; i++){
		for(int j=0; j<column;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
*/ 
int main(){
	int a[2][3]={1,2,3,4,5,6};
	for (int i=0; i<2;i++){
		for(int j=0; j<3; j++){
			cout<<a[1][j]<<" ";
		}
		cout<<endl;
	}
		for (int i=0; i<2;i++){
		for(int j=0; j<3; j++){
			if(i==j)
				a[i][j]=a[i][j];
				else
					a[i][j]=0;				
	}
}
cout<<"After mutation \n";
for (int i=0; i<2;i++){
		for(int j=0; j<3; j++){
			cout<<a[1][j]<<" ";
		}
		cout<<endl;
	}
}

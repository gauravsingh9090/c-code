#include <iostream>
using namespace std;
/*
int main (){
	int n , m;
	
	cin>>n;
	cin>>m;
	
	
	for(int i=1; i<n; i++){
		for(int j=1; j<m; j++){
			cout<<"*";
		}
		cout<<endl;
	}
}
*/

/*
int main(){
	int n , m;
	
	cin>>n>>m;
	
	for(int i=1; i<=n; i++){
		for(int j=1 ;j<=m; j++){
			if(i==1 || j==1 || i==n || j==m){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	
}
*/

//int main(){
//	int m,n;
//	cin>>m>>n;
//	for(int row=1; row<=m; row++){
//		for(int col=n; col>=1; col--){
//			cout<<col<<" ";
//		}
//		cout<<endl;
//	}
//	
//	
//	
//}

int main(){
	int m,n;
	cin>>m>>n;
	for(int row=1; row<=m; row++){
		for(int col=1; col<=n; col++){
			cout<<" *";
		}
		cout<<endl;
	}
	
	
	
}


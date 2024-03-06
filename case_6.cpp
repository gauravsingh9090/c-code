# include <iostream>
using namespace std;

int main(){
	for(int i = 1; i<=2; ++i){
		cout<<"outer:" <<i<<"\n";
		
		for(int j=1; j<=3; ++j){
			cout<<"Inner:" <<j<<"\n";
		}
	}
}

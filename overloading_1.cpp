#include <iostream>
using namespace std;

class Student{
	private:
	int math, science , english;
	
	public:
		
		Student(){
			math=0;
			science=0;
			 english=0;
		}
		
		Student(int a , int b ,  int c){
			 math=a;
			 science=b;
			 english=c;
		}
		Student operator +(Student s){
			cout<<"+ operator get overloading";
			Student temp;
			temp.math = math + s.math;
			temp.science = science + s.science;
			temp.english = english + s.english;
			return temp;
			
		}
		void display(){
			cout<<"\nMaths marks are="<<math<<endl;
			cout<<"secience marks are="<<science<<endl;
			cout<<"Maths marks are="<<english<<endl;
			
		}
};
int main(){
	Student s1(12,23,34), s2(32,45,76),  s3;
	s3=s1+s2;
	s3.display();
}


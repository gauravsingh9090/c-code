#include <iostream>
using namespace std;

class Shap{
	
	public:
		int a;
		int b;
		void get_data(int n, int m){
			a=n;
			b=m;
		}
};
class Rectangle: public Shap{
	
	public:
		int rect_area(){
			int result=a*b;
			
			return result;
		}
};
class Triangle :public Shap{
	public:
		int triangle_area(){
			float result=0.5*a*b;
			
			return result;
			
		}
};

int main(){
	Rectangle r;
	Triangle t;
	int length,breadth,base,heigth;
	cout<<"Enter the length and breadth of rectangle:"<<endl;
	
	cin>>length>>breadth;
	
	r.get_data(length,breadth);
	int m = r.rect_area();
	cout<<"Area of the rectangle is:"<<m<<endl;
	
	cout<<"Enter the base and heigth of the triangle:"<<endl;
	cin>>base>>heigth;
	t.get_data(base,heigth);
	float n=t.triangle_area();
	cout<<"Area of the triangle is:"<<endl;
	
}

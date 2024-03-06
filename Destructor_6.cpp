#include <iostream>
using namespace std;
/*
class Test
{
public:
	Test()
	{
		cout<<"constructor exected:\n";
	}
	~Test()
	{
		cout<<"Detructor exected:\n";
	}
};


int main()
{
	Test t;
	
}
//============================================
*/


/*
class Test
{
public:
	Test()
	{
		cout<<"constructor exected:\n";
	}
	~Test()
	{
		cout<<"Detructor exected:\n";
	}
};


int main()
{
	Test t ,t1,t2,t3;
	
}
//==============================================
*/


/*
static int count=0;
class Test
{
public:
	Test()
	{
		count++;
		cout<<"No. of object created:\n"<<count;
	}
	~Test()
	{
		cout<<"No. of object created:\n"<<count;
		count--;
	}
};


int main()
{
	Test t,t1,t3,t4,t5;
	
}
//=============================================
*/


class construct
{
	public:
	float area;
	
construct()
{
	area=0;
}
construct::construct(int a ,int b)
{
	area = a*b;
}

void display(){
	cout<<area<<endl;
}
};

int main(){
construct obj(12,23);
obj.display();	
}



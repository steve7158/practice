#include<iostream>
using namespace std;
class parent{
public:
	int id_p=54;
};
class child:public parent{
	public:
		int id_s=90;
};
int main(){
	parent p;
	child c;
	cout<<c.id_s;
	cout<<c.id_p;
	return 0;
}



#include <iostream>
using namespace std;

class A{
private:
	int a;
public:
	A(){
		a=5;
	}
	friend void show();
}
void show(){
	cout<<"A::a"<<a;
}
int main(){
	A a;
	show();
}
		

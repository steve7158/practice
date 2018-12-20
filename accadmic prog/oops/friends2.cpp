#include<iostream>
using namespace std;
class A{
priavte:
	int a;
public:
	A(){
		a=5;
	}
	friend class B;
};
class B{
private:
	int b;
public:
	void showa(){
		cout<<"A:a"<<a.a;
	}
};
int main(){
	A a;
	B b;
	b.showa();
}

void showa(){
	cout<<"A:a"<<a.a;
}
};
int main(){
	A a;
	B b;
	b.showa();
}



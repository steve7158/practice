#include<iostream>
using namesspace std;
class A{
	private:
		int a;
	public:
		void base1(){
			cout<<"base1 of class A"<<endl;
		}
		virtual void base2(){
			cout<<"base2 of class A"<<endl;
		}
		void base3(){
			cout<<"base3 of of class A"<<endl;
		}
		virtual void base4(){
			cout<<"base 4 of class A"<<endl;
		}
};
class B{
	public:
		void base2(){
			cout<<"class B"<<endl;
		}
		void base3(){
			cout<<"base3 of classB"<<endl;
		}
		void base4()
			cout<<"base 4 of classB"<<endl;
};
int main(){
	A *a;
	B b;
	a=&b;
	a->base1();
	a->base2();
	a->base3();
	a->base4();
}


#include<iostream>
using namespace std;

class base{
	public:
		virtual void base1(){
			cout<<"base1 is printed"<<endl;
		}
		virtual void base2(){
			cout<<"base2 is printed"<<endl;
		}
		virtual void base3(){
			cout<<"base3 is printed"<<endl;
		}
		virtual void base4(){
                        cout<<"base4 is printed"<<endl;

		}
};
class B{
	public:
		void base1(){
			cout<<"base1 is printed from class B"<<endl;
		}
		void base2(){
			cout<<"base2 is printed from class B"<<endl;
		}
		void base4(int x){
			cout<<"base4 is printed from class B"<<endl;
		}
};
int main(){
	base *bo;
	B b;
	bo=&b;
	bo->base1();
        bo->base2();
        bo->base3();
        bo->base4(4);
}





#include <iostream>
using namespace std;


class input{
	protected:
		int n;
	public:
		void get_data(){
			cout<<"insert the number"<<endl;
			cin>>n;
		}
};
class s:public input{
	public:
		void square(){
			cout<<"square is: "<<(n*n)<<endl;
		}
};

class c:public input{
	public:
		void cube(){
			cout<<"the cube is: "<<(n*n*n)<<endl;
		}
};

int main(){
	static input in;
	s sq;
	c cu;
	in.get_data();
	sq.square();
	cu.cube();
}


	

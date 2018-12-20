#include<iostream>
using namespace std;

template <class T>

T mymax(T x,T y){
	if(x>y){
		return x;
	}
	else
		return y;
};

int main(){
	cout<<mymax<int>(2,3);
	cout<<mymax<double>(3.3,4.5);
	cout<<mymax<char>('s','d');
	return 0;
}




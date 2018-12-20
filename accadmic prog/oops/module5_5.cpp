#include <iostream>
using namespace std;

template <class T>
T mymax(T x,T y){
	if (x>y){
		return x;
	}
	else
		return y;
}

int main(){
	cout<<mymax<int>(3,7)<<endl;
	cout<<mymax<char>('a','d')<<endl;
	return 0;
}

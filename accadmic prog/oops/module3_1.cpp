#include<iostream>
using namespace std;

class demo{
public:
  void show (int x){
    cout<<"intrger valur is :"<<x;

  }
  void show(double x){
    cout<<"double value is:"<<x
  }
  void show(char x){
    cout <<"char value is "<<x
  }

};

int main(){
  demo do;

  do.show(2);
  do.show(2.3);
  do.show('d');
  return 0;

}

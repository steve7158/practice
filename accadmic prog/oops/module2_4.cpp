#include <iostream>
using namespace std;
class A{
private:
  int a;
public:
  a(){
    a=23;
  }

  friend void show(A a);
};

void show (A a){
  cout<<"A::a= "<<a.a;
}

int main (){
  A a;
  show(a);
  return 0;
}

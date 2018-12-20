#include<iostream>
using namespace std;

class B;
class A{
public:
  void showB(B b);
};

class B{
private:
  int b;
public:
B(){
    b=7;
}
  friend void A::showB(B b);
};

void A::showB(B b){
    cout<<"B::b= "<<b.b;
}

int main (){
  A a;
  B b;
  a.showB(b);
  return 0;

}

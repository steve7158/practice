#include <iostream>
// #include<conio.h>
using namespace std;

class emp{
  int sallary;
  char name[10];
  int emp_no;
public:
  void getdata(){
    cout<<"input emp_no";cin>>emp_no;cout<<"input employee name";cin>>name;cout<<"input employee salary";cin>>sallary;cout<<endl;
  }
  void printdata(){
    cout<<"the provided data is as follows"<<endl<<"employee numnber:"<<emp_no<<endl<<"employee name:"<<name<<endl<<"employee sallary:"<<sallary<<endl;

  }

};
int main(){
  emp e;
  e.getdata();
  e.printdata();
}

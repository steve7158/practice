
#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int power(int n, int r)
{
int x;
x=pow(n,r);
return x;
}
float power(float m, int s)
{
float y;
y=pow(m,s);
return y;
}
void main()
{
clrscr();
int a, b;
float c;
char ch;


cout<<"Enter 1 if you want to calculate the power of an integer "<<endl;
cout<<"Enter 2 if you want to calculate the power of a floating number"<<endl;
cin>>ch;
switch(ch)
{
case '1': cout<<"Enter the integer and the exponent"<<endl;
cin>>a>>b;
cout<<power(a,b);
break;
case '2': cout<<"Enter the floating number and the exponent"<<endl;
cin>>c>>b;
cout<<power(c,b);
break;
default :if((ch!='1')&&(ch!='2'))
{
cout<<"Wrong choice entered "<<endl;
}

}
getch();
}

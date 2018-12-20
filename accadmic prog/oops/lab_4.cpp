
#include<iostream.h>
#include<conio.h>
class tollbooth
{unsigned int coun;
double money;
public:
tollbooth()
{coun=0;
money=0;
}
void payingcar()
{coun=coun+1;
money=money+0.50;
}
void nopaycar()
{coun=coun+1;
}
display()
{cout<<"The total cars : "<<coun<<"\n and The total money is :"<<money;
}
};
void main()
{clrscr();
tollbooth t1;
int y;
cout<<"select case\n 1.paying car \n 2. non paying car \n 3. display";
while(y!=3)
{
cin>>y;
switch(y)
{
case 1:{
t1.payingcar();
break;
}
case 2:{
t1.nopaycar();
break;
}
case 3:{
t1.display();
break;
}
}
}
}

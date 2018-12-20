#include <iostream>
using namespace std;

int main ()
{
int n,dd,mm,yy;

cin>>dd>>mm>>yy;
cin>>n;
dd=dd+n;


if (mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12)
{   if(dd==31||dd>31)
{
mm++;
dd=dd-31;

}
}


else if (mm==2)
{     if (dd==28||dd==29||dd>29)
{
mm++;
dd=dd-28;
}
}
else if ((mm==4)||(mm==6)||(mm==9)||(mm==11))
{   if(dd>30)
{mm++;
dd=dd-30;
}
}
else if(dd>31)
{mm++;
dd=dd-31;

}

else if(mm>12)
{yy++;
mm=mm-12;
}
else
cout<<"error";

cout << "NEW DATE: " << dd << "/" << mm<< "/" << yy << endl;
}

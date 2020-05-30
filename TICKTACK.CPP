#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<singour.h>

char a[3][3]={'1','2','3','4','5','6','7','8','9'};
char x,y;int flag=0;

void board()
{
cout<<"\t\t      |       |       \n";
cout<<"\t\t"<<a[0][0]<<"     |   "<<a[0][1]<<"   |   "<<a[0][2]<<"\n";
cout<<"\t\t-----------------------\n";
cout<<"\t\t"<<a[1][0]<<"     |   "<<a[1][1]<<"   |   "<<a[1][2]<<"\n";
cout<<"\t\t      |       |       \n";
cout<<"\t\t-----------------------\n";
cout<<"\t\t"<<a[2][0]<<"     |   "<<a[2][1]<<"   |   "<<a[2][2]<<"\n";
cout<<"\t\t      |       |       \n";
}
void X()
{
cout<<"\nCHANCE OF X = ";
cin>>x;
if(x=='1')
{if(a[0][0]!='X'&& a[0][0]!='0')
{a[0][0]='X';}
else
{cout<<"\nSORRY WRONG CHOICE";
X();}
}
else if(x=='2')
{
if(a[0][1]!='X'&& a[0][1]!='0')
{a[0][1]='X';}
else
{cout<<"\nSORRY WRONG CHOICE";
X();}
}
else if(x=='3')
{if(a[0][2]!='X'&& a[0][2]!='0')
{a[0][2]='X';}
else
{cout<<"\nSORRY WRONG CHOICE";
X();}
}
else if(x=='4')
{if(a[1][0]!='X'&& a[1][0]!='0')
{a[1][0]='X';}
else
{cout<<"\nSORRY WRONG CHOICE";
X();}
}
else if(x=='5')
{if(a[1][1]!='X'&& a[1][1]!='0')
{a[1][1]='X';}
else
{cout<<"\nSORRY WRONG CHOICE";
X();}
}
else if(x=='6')
{if(a[1][2]!='X'&& a[1][2]!='0')
{a[1][2]='X';}
else
{cout<<"\nSORRY WRONG CHOICE";
X();}
}
else if(x=='7')
{if(a[2][0]!='X'&& a[2][0]!='0')
{a[2][0]='X';}
else
{cout<<"\nSORRY WRONG CHOICE";
X();}
}
else if(x=='8')
{if(a[2][1]!='X'&& a[2][1]!='0')
{a[2][1]='X';}
else
{cout<<"\nSORRY WRONG CHOICE";
X();}
}
else if(x=='9')
{if(a[2][2]!='X'&& a[2][2]!='0')
{a[2][2]='X';}
else
{cout<<"\nSORRY WRONG CHOICE";
X();}
}
}
void Y()
{
cout<<"\nCHANCE OF 0 = ";
cin>>y;
if(y=='1')
{if(a[0][0]!='X'&& a[0][0]!='0')
{a[0][0]='0';}
else
{cout<<"\nSORRY WRONG CHOICE";
Y();}
}
else if(y=='2')
{if(a[0][1]!='X'&& a[0][1]!='0')
{a[0][1]='0';}
else
{cout<<"\nSORRY WRONG CHOICE";
Y();}
}
else if(y=='3')
{if(a[0][2]!='X'&& a[0][2]!='0')
{a[0][2]='0';}
else
{cout<<"\nSORRY WRONG CHOICE";
Y();}
}
else if(y=='4')
{if(a[1][0]!='X'&& a[1][0]!='0')
{a[1][1]='0';}
else
{cout<<"\nSORRY WRONG CHOICE";
Y();}
}
else if(y=='5')
{
if(a[1][1]!='X'&& a[1][1]!='0')
{a[1][1]='0';}
else
{cout<<"\nSORRY WRONG CHOICE";
Y();}
}
else if(y=='6')
{if(a[1][2]!='X'&& a[1][2]!='0')
{a[1][2]='0';}
else
{cout<<"\nSORRY WRONG CHOICE";
Y();}
}
else if(y=='7')
{if(a[2][0]!='X'&& a[2][0]!='0')
{a[2][0]='0';}
else
{cout<<"\nSORRY WRONG CHOICE";
Y();}
}
else if(y=='8')
{if(a[2][1]!='X'&& a[2][1]!='0')
{a[2][1]='0';}
else
{cout<<"\nSORRY WRONG CHOICE";
Y();}
}
else if(y=='9')
{if(a[2][2]!='X'&& a[2][2]!='0')
{a[2][2]='0';}
else
{cout<<"\nSORRY WRONG CHOICE";
Y();}
}
}

void winner()
{
if(a[0][0]=='X' && a[0][1]=='X' && a[0][2]=='X')
{
cout<<"\n     X is winner";
flag++;}
else if(a[1][0]=='X' && a[1][1]=='X' && a[1][2]=='X')
{
cout<<"\n     X is winner";
flag++;}
else if(a[2][0]=='X' && a[2][1]=='X' && a[2][2]=='X')
{
cout<<"\n     X is winner";
flag++;
}
else if(a[0][0]=='X' && a[1][0]=='X' && a[2][0]=='X')
{cout<<"\n    X is winner";
flag++;}
else if(a[0][1]=='X' && a[1][1]=='X' && a[2][1]=='X')
{cout<<"\n    X is winner";
flag++;}
else if(a[0][2]=='X' && a[1][2]=='X' && a[2][2]=='X')
{cout<<"\n    X is winner";
flag++;}
else if(a[0][0]=='X' && a[1][1]=='X' && a[2][2]=='X')
{cout<<"\n    X is winner";
flag++;}
else if(a[0][2]=='X' && a[1][1]=='X' && a[2][0]=='X')
{cout<<"\n    X is winner";
flag++;}

else if(a[0][0]=='0' && a[0][1]=='0' && a[0][2]=='0')
{
cout<<"\n      0 is winner";
flag++;}
else if(a[1][0]=='0' && a[1][1]=='0' && a[1][2]=='0')
{
cout<<"\n      0 is winner";
flag++;}
else if(a[2][0]=='0' && a[2][1]=='0' && a[2][2]=='0')
{
cout<<"\n      0 is winner";
flag++;}
else if(a[0][0]=='0' && a[1][0]=='0' && a[2][0]=='0')
{
cout<<"\n      0 is winner";
flag++;}
else if(a[0][1]=='0' && a[1][1]=='0' && a[2][1]=='0')
{
cout<<"\n      0 is winner";
flag++;}
else if(a[0][2]=='0' && a[1][2]=='0' && a[2][2]=='0')
{
cout<<"\n      0 is winner";
flag++;
}
else if(a[0][0]=='0' && a[1][1]=='0' && a[2][2]=='0')
{
cout<<"\n      0 is winner";
flag++;
}
else if(a[0][2]=='0' && a[1][1]=='0' && a[2][0]=='0')
{
cout<<"\n      0 is winner";
flag++;
}
}
void main()
{
clrscr();
load();
board();
for(int i=0;i<5;i++)
{
X();
winner();
if(flag==1)
{
break;}
board();
Y();
winner();
if(flag==1)
{break;}
board();
}
if(flag==0)
{cout<<"\nmatch draw";
}
getch();
}
#include<fstream.h>
#include<conio.h>
#include<stdio.h>
class store
{long mob_no,mob_prc;
char mob_code[20],mob_mod[20],mob_gen[5];
public :
void get()
{cout<<"\n\tEnter mobile code          : " ;
cin>>mob_no;
cout<<"\tEnter mobile company       : " ;
gets(mob_code);
cout<<"\tEnter model name           : " ;
gets(mob_mod);
cout<<"\tEnter generation(2G/3G/4G) : " ;
gets(mob_gen);
cout<<"\tEnter price of mobile      : " ;
cin>>mob_prc;
}
void put()
{cout<<"\n\n  "<<mob_no<<"\t\t"<<mob_code;
cout<<"\t\t"<<mob_mod<<"\t\t"<<mob_gen<<"\t\t"<<mob_prc;
}
void out()
{cout<<"\n Code\t\tCompany\t\tModel\t\tGeneration\tPrice(in Rs)\n" ;
cout<<"---------------------------------------";
cout<<"---------------------------------------";
}
void line()
{cout<<"\n\n\t  ***********************\t " ;
cout<<"***********************\n\n"; }
void modify()
{cout<<"\n\tEnter new company name           : " ;
gets(mob_code);
cout<<"\tEnter new model name             : " ;
gets(mob_mod);
cout<<"\tEnter new generation(2G/3G/4G)   : " ;
gets(mob_gen);
cout<<"\tEnter new price of mobile        : " ;
cin>>mob_prc;
}
int returncode()
{return mob_no;   }
};
main()
{int choice,code_mod,a,d,pos,code_del;
char c,yn;
store s;
do
{clrscr();
cout<<"\n\n\t\t\t********   WELCOME   ********";
cout<<"\n\n\t\t\t\t    Menu" ;
cout<<"\n\t\t1\t-   Enter records of mobile" ;
cout<<"\n\t\t2\t-   View records of mobile" ;
cout<<"\n\t\t3\t-   Search records of mobile" ;
cout<<"\n\t\t4\t-   Modify records of mobile" ;
cout<<"\n\t\t5\t-   Delete records of mobile" ;
cout<<"\n\t\t6\t-   Exit" ;
s.line();  s.line();
cout<<"\t\tPlease enter operation to perform : " ;
cin>>choice;
switch (choice)
{case 1 :
{clrscr();
ofstream O("Mobile",ios::binary|ios::in);
do
{s.get();
O.write((char*)&s,sizeof(s));
cout<<"\n\tDo you want to enter more records(y/n) : " ;
cin>>c;
}while(c=='y'||c=='Y');
O.close();
getch();  }
break;
case 2:
{clrscr();    cout<<"\n\n\n" ;
s.out();
ifstream I("Mobile");
I.seekg(0);
while(I.read((char*)&s,sizeof(s)))
{s.put();   }
I.close();
s.line();
getch();
}
break;
case 3:
{clrscr();
ifstream I("Mobile");
cout<<"\n\n\tEnter mobile no whose record you want to search : " ;
cin>>d;
s.line();   s.out();
I.seekg(0);
while(I.read((char*)&s,sizeof(s)))
{if(s.returncode()==d)
{s.put();
break;
}}
I.close();  s.line();
getch();
}
break;
case 4:
{clrscr();
cout<<"\n\tEnter mobile code you want to modify : " ;
cin>>code_mod;
fstream I1("Mobile",ios::in|ios::out);
while(!I1.eof())
{pos=I1.tellg();
I1.read((char*)&s,sizeof(s));
if(s.returncode()==code_mod)
{s.modify();   s.line();
I1.seekp(pos);
I1.write((char*)&s,sizeof(s));
break;
}};
I1.close();
cout<<"\t\t******Record after modification******\n" ;
s.out();
ifstream I2("Mobile");
while(I2.read((char*)&s,sizeof(s)))
{s.put();
}
I2.close();
s.line();
getch();  s.line();
}
break;
case 5:
{clrscr();
cout<<"\n\n\tEnter mobile code whose record you want to delete : " ;
cin>>a;
ifstream I("Mobile");
ofstream O("Temp",ios::app);
while(I.read((char*)&s,sizeof(s)))
{if(s.returncode()==a)
{s.out();
s.put();
cout<<"\n\n\tDo you want to delete this record(y/n) : " ;
cin>>yn;    s.line();
if(yn=='n'||yn=='N')
O.write((char*)&s,sizeof(s));
}
else
{cout<<"\n\t\t*************RECORD DELETED*************" ;
O.write((char*)&s,sizeof(s));  }}
I.close();
O.close();
remove("Mobile");
rename("Temp","Mobile");
cout<<"\n\t\tAfter deletion of record\n " ;
ifstream I3("Mobile");
while(I3.read((char*)&s,sizeof(s)))
{s.out();
s.put(); }
s.line();
I3.close();
getch();
}
break;
}}
while(choice!=6);
clrscr();
cout<<"\n\n\n\n\n\n\t**************  THANK YOU FOR COMING  **************" ;
s.line();
cout<<"\n\t*************  PLEASE COME ONCE AGAIN  **************";
s.line();
getch();
}

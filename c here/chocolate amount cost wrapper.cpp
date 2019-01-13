#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main()
{
int i,j,t,am,co,wr;
cout<<"Number of test case = ";
cin>>t;
char str[100][100];
char *ptr;
cin.ignore();
for(i=0;i<t;i++)
{
cin.getline(str[i],100);
}
cout<<"Output\n";
for(i=0;i<t;i++)
{
ptr=strtok(str[i]," ");
am=atoi(ptr);
cout<<"am = "<<am<<endl;
ptr=strtok(NULL," ");
co=atoi(ptr);
cout<<"co = "<<co<<endl;
ptr=strtok(NULL," ");
wr=atoi(ptr);
cout<<"wr = "<<wr<<endl;
cout<<"\n";
}
}


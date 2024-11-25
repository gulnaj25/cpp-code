#include<iostream>
using namespace std;

class employee//A CLASS
{
private://specifier
     int a,b,c;
public://specifier
     int d,e;
     void setdata(int a1,int b1,int c1);//Declaration
     void getdata(){      //with the help of getdata we can print
        cout<<"the value of a"<<a<<endl;
        cout<<"the value od b"<<b<<endl;
        cout<<"the value of c"<<c<<endl;
        cout<<"the value of d"<<d<<endl;
        cout<<"the value of e"<<e<<endl;
     }

};
void employee :: setdata(int a1, intb1, int c1);
a=a1;
b=b1;
c=c1;

int main()
{
    employee Gulnaj;
    Gulnaj.d=2;
    Gulnaj.e=1;
    Gulnaj.setdata(6,9,55);
    Gulnaj.getdata();
    return 0;


}
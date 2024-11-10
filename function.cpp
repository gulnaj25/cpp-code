#include<iostream>
using namespace std;

int sum( int a, int b) //its fxn
{
int c=a+b;
return c;
}
int main()
{
int num1,num2;
cout<<"enter the first value"<<endl;
cin>>num1;
cout<<"enter the second value"<<endl;
cin>>num2;
cout<<"the sum is"<<sum(num1,num2);
 return 0;   
}
 
 //FUNCTION PROTOTYPE-with the help of fxn prototype we can write fxn after code.
 #include<<iostrem>>
 using namespace std;

int sum(int a, int b); //it is a prototype

int main(){
    int num1,num2;
    cout<<"enter first value"<<endl;
    cin>>num1;
    cout<<"enter second value"<<endl;
    cin>>num2;
    cout<<"the sum is"<<sum(int a, int b);
    return 0;

}
int sum(int a, int b){
 int c=a+b
 return c;
}



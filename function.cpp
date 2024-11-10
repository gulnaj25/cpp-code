#include<iostream>
using namespace std;
int sum( int a, int b) 
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

//type function-name(argument)
int sum(int a, int b); //it is a prototype

int main(){
    int num1,num2;//num1 and num2 are actual parameters.
    cout<<"enter first value"<<endl;
    cin>>num1;
    cout<<"enter second value"<<endl;
    cin>>num2;
    cout<<"the sum is"<<sum(int a, int b);
    return 0;

}
int sum(int a, int b)//int a,int b are formal parameter they takes from actual parameter
{
 int c=a+b
 return c;

}



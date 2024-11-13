//EXAMPLE OF FIBONACCI SERIES // 

#include<iostream>
using namespace std;

int fibo(int n){
 if(n<=1) 
 {
  return 1;
  }
 return fibo(n-2)+fibo(n-1); 
}

 int main(){
    int a;
    cout<<"enter the value of a"<<endl;
    cin>>a;
     cout<<"the term in fiboccian series position "<<a<<"is"<<fibo(a)<<endl;
    return 0;
 }



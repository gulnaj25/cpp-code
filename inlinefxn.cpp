/*#include<iostream>
using namespace std;

 inline int product(int a,int b){//we use inline when code repeat and repeat and it is only for small fxn 
 return a*b;
 }

int main()
{
    int a,b;
    cout<<"enter the value of a and b"<<endl; 
    cin>>a>>b;
    cout<<"the product of a and b is"<<product(a,b);
    cout<<"the product of a and b is"<<product(a,b);
    cout<<"the product of a and b is"<<product(a,b);
    cout<<"the product of a and b is"<<product(a,b);
    cout<<"the product of a and b is"<<product(a,b);
    cout<<"the product of a and b is"<<product(a,b);
    cout<<"the product of a and b is"<<product(a,b);
    cout<<"the product of a and b is"<<product(a,b);
    cout<<"the product of a and b is"<<product(a,b);
    cout<<"the product of a and b is"<<product(a,b);
    cout<<"the product of a and b is"<<product(a,b);
    cout<<"the product of a and b is"<<product(a,b);
    cout<<"the product of a and b is"<<product(a,b);
    cout<<"the product of a and b is"<<product(a,b);
 return 0;
}*/



//STATIC fxn

include<iostream>
using namespace std;

int product(int a,int b){
    static c;
    c=c+1;
    return a*b+c;
}
int main(){
    int a,b;
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<"the product of a and b is"<<product(a,b);
    cout<<"the product of a and b is"<<product(a,b);
     return 0;
}
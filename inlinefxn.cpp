#include<iostream>
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
}



//STATIC fxn
                 //inline and static ,both never use in same code
include<iostream>
using namespace std;

int product(int a,int b){
    static c;//after giving one value the line never consider again
    c=c+1;
    return a*b+c;
}
int main(){
    int a,b;
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<"the product of a and b is"<<product(a,b);
    cout<<"the product of a and b is"<<product(a,b);
    cout<<"the product of a and b is"<<product(a,b);
    cout<<"the product of a and b is"<<product(a,b);
     return 0;
}    /* o/p- when a=2,b=3
     7
     8
     9
     10  */
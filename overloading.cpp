#include<iostream>
using namespace std;

int sum(int a, int b){
    cout<<" using function 2 arrgument"<<endl;
return a+b;
}

int sum(int a, int b, int c){
    cout<<" using function with 3 arrgument"<<endl;
    return a+b+c;
}

//volume of cuboid
int volume( int l, int b ,int ){
return (l*b*h);
}

//volume of cube
int volume(int a ){
    return (a*a*a);
}

int main()
{
    cout<<"the sum of 3 and 6 is"<<sum(3,6)<<endl;
    cout<<"the sum of 3,7 and 6 is"<<sum(3, 7, 6)<<endl;
    cout<"the volume of cuboid of 8, 8 and 8 is"<<volume(3, 6, 9)<<endl;
    cout<<"the volume of cube 3 is "<<volume(3)<<endl;
    return 0;
}
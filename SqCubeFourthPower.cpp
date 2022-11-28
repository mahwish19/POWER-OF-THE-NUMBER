#include <iostream>
using namespace std;

void square(int num)
{
    for(int j=1; j<=5; j++){
        cout<<num*num<<endl;
        num=num+1;
    }
}
void cube(int num)
{
    for(int j=1; j<=5; j++){
        cout<<num*num*num<<endl;
        num=num+1;
    }
}
void fourth(int num)
{
    for(int j=1; j<=5; j++){
        cout<<num*num*num*num<<endl;
        num=num+1;
    }
}

int main()
{
    cout<<"The squares of numbers 1 to 5 are: "<<endl;
    square(1);
    cout<<"The cubes of numbers 1 to 5 are: "<<endl;
    cube(1);
    cout<<"The fourth power of numbers 1 to 5 are: "<<endl;
    fourth(1);
    return 0;

}

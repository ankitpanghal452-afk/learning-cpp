#include<iostream>
using namespace std;
int add(int a, int b){
    return a+b;
}
int main()
{
    int x;
    cout<<"Enter the number : ";
    cin>>x;
    int y;
    cout<<"Enter the number : ";
    cin>>y;
    int result;
    result=add(x,y);
    cout<<"Sum of two numbers is : "<<result<<endl;
    return 0;
}
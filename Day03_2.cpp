#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;
    int even_sum=0;
    int odd_sum=0;
    int digit;
    while(n>0){
        digit=n%10;
        if(digit%2==0){
            even_sum=even_sum+digit;
        }
        else{
            odd_sum=odd_sum+digit;
        }
        n=n/10;
    }
    cout<<"Sum of even digits = "<<even_sum<<endl;
    cout<<"Sum of odd digits = "<<odd_sum<<endl;
    return 0;
}
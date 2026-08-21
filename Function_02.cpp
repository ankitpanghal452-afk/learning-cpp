// #include<iostream>
// using namespace std;
// int count(int n){
//     int sum=0;
//     if(n==0){
//         return 1;
//     }
//     while(n>=1){
//         int digit=n/10;
//         sum+=1;
//         n=n/10;
//     }
//     return sum;
// }
// int main()
// {
//     int number;
//     cout<<"Enter the number : ";
//     cin>>number;
//     int result;
//     result=count(number);
//     cout<<"Total number of digits in number are : "<<result<<endl;
//     return 0;
// }





// Reverse Function
// #include<iostream>
// using namespace std;
// long long reverse(long long n){
//     int digit;
//     long long number=0;
//     if(n==0){
//         return 0;
//     }
//     while(n>=1){
//         digit=n%10;
//         number=number*10+digit;
//         n=n/10;
//     }
//     return number;
// }
// int main()
// {
//     long long a;
//     cout<<"Enter the number : ";
//     cin>>a;
//     long long result;
//     result=reverse(a);
//     cout<<"Reverse of an number is : "<<result<<endl;
//     return 0;
// }





// Sum of Digits
// #include<iostream>
// using namespace std;
// int sumOfDigits(int a){
//     if(a==0){
//         return 0;
//     }
//     int digit;
//     int sum=0;
//     while(a>=1){
//         digit=a%10;
//         sum=sum+digit;
//         a=a/10;
//     }
//     return sum;
// }
// int main()
// {
//     int number;
//     cout<<"Enter the number : ";
//     cin>>number;
//     int result;
//     result=sumOfDigits(number);
//     cout<<"The sum of digits is : "<<result<<endl;
//     return 0;
// }



// Prime Number 
#include<iostream>
using namespace std;
bool isPrime(int n){
    bool isPrime=true;
    for(int i=2;i<n;i++){
        if(n%i==0){
            isPrime=false;
            break;
        }
    }
    return isPrime;    
}
int main()
{
    int number;
    cout<<"Enter the number : ";
    cin>>number;
    bool result;
    result=isPrime(number);
    if(result==true){
        cout<<"Number is Prime"<<endl;
    }
    else{
        cout<<"Number is not Prime"<<endl;
    }
}
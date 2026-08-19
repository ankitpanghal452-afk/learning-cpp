// #include<iostream>
// using namespace std;
// int add(int a, int b){
//     return a+b;
// }
// int main()
// {
//     int x;
//     cout<<"Enter the number : ";
//     cin>>x;
//     int y;
//     cout<<"Enter the number : ";
//     cin>>y;
//     int result;
//     result=add(x,y);
//     cout<<"Sum of two numbers is : "<<result<<endl;
//     return 0;
// }




#include <iostream>
using namespace std;

int square(int n)
{
    return n * n;
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    int result = square(num);

    cout << "Square = " << result;

    return 0;
}
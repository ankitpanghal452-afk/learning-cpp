// Sum Using Functions:- 
// #include<iostream>
// using namespace std;
// int add(int a,int b){
//     return a+b;
// }
// int main()
// {
//     int x,y;
//     cout<<"Enter the value of x : ";
//     cin>>x;
//     cout<<"Enter the value of y : ";
//     cin>>y;
//     int result;
//     result=add(x,y);
//     cout<<"Sum of two numbers is = "<<result<<endl;
//     return 0;
// }






// #include<iostream>
// using namespace std;
// void greet(){
//     cout<<"Hello Ankit Panghal!";
// }
// int main()
// {
//     greet();
//     cout<<endl;
//     return 0;
// }





// Square function:-
// #include<iostream>
// using namespace std;
// int square(int a){
//     return a*a;
// }
// int main()
// {
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;
//     int result;
//     result=square(n);
//     cout<<"Square of a number is = "<<result;
//     cout<<endl;
//     return 0;
// }



// #include<iostream>
// using namespace std;
// void square(int a)
// {
//     cout << a * a;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     square(n);
//     return 0;
// }






// #include<iostream>
// using namespace std;
// int getNumber(){
//     return 10;
// }
// int main()
// {
//     int n=getNumber();
//     int result=n;
//     cout<<result;
//     return 0;
// }








#include<iostream>
using namespace std;
int multiply(int a,int b);
int main()
{
    int x,y;
    cout<<"Enter the first number : ";
    cin>>x;
    cout<<"Enter the second number : ";
    cin>>y;
    int result;
    result=multiply(x,y);
    cout<<"Multiplication of two numbers is = "<<result;
    cout<<endl;
    return 0;
}
int multiply(int a,int b){
    return a*b;
}
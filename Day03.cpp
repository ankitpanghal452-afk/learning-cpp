//  Right Shift every element:- 
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the length of an array : ";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cout<<"Enter the element of an array : ";
//         cin>>arr[i];
//     }
//     int temp=arr[n-1];
//     int right=n;
//     for(int i=right-1;i>0;i--){
//         arr[i]=arr[i-1];
//     }
//     arr[0]=temp;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }





//  Reverse number:-
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;
//     int new_num=0;
//     int digit;
//     while(n>=1){
//         digit=n%10;
//         new_num=new_num*10+digit;
//         n=n/10;
//     }
//     cout<<new_num<<endl;
//     return 0;
// }






// Count Digits:- 
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;
//     int count=0;
//     int digit;
//     while(n>0){
//         digit=n%10;
//         count+=1;
//         n=n/10;
//     }
//     cout<<count<<endl;
//     return 0;
// }







#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int sum=0;
    int digit;
    while(n>0){
        digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    cout<<sum<<endl;
    return 0;
}
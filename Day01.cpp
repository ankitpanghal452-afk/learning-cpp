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
//     int target;
//     cout<<"Enter the element you want to search : ";
//     cin>>target;
//     int idx=-1;
//     for(int i=0;i<n;i++){
//         if(arr[i]==target){
//             idx=i;
//             break;
//         }
//     }
//     if(idx==-1){
//         cout<<"Element is not present in the array";
//     }
//     else{
//         cout<<"Element is present at index number : "<<idx<<endl;
//     }
// return 0;
// }





#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the length of an array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element : ";
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the element you want to look for : ";
    cin>>target;
    int first_idx=0;
    int last_idx=0;
    for(int i=0;i<n;i++){
        if(arr[i]==target && first_idx==0){
            first_idx=arr[i];
        }
        else if(arr[i]==target && first_idx!=0 && i>last_idx){
            last_idx=i;
        }
    }  
    cout<<"First Occurance of "<<target<<" in array is "<<first_idx<<endl;
    cout<<"Last Occurance of "<<target<<" in array is "<<last_idx<<endl;
    return 0;
}
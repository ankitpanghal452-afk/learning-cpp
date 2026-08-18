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





// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the length of an array : ";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cout<<"Enter the element : ";
//         cin>>arr[i];
//     }
//     int target;
//     cout<<"Enter the element you want to look for : ";
//     cin>>target;
//     int first_idx=-1;
//     int last_idx=-1;
//     for(int i=0;i<n;i++){
//         if(arr[i]==target && first_idx==-1){
//             first_idx=i;
//         }
//         if(arr[i]==target && first_idx!=-1 && i>last_idx){
//             last_idx=i;
//         }
//     }
//     if(first_idx!=last_idx && first_idx!=-1 && last_idx!=-1){
//         cout<<"First Occurance of "<<target<<" in array is at index number :"<<first_idx<<endl;
//         cout<<"Last Occurance of "<<target<<" in array is at index number : "<<last_idx<<endl;
//     }
//     else if(first_idx!=-1 && last_idx==-1){
//         cout<<"the element occurs only once";
//     }
//     else if(first_idx==-1 && last_idx==-1){
//         cout<<"Element not present";
//     }
//     return 0;
// }
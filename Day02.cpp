// Reverse An Array:-
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the length of an array : ";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cout<<"enter the element of an array : ";
//         cin>>arr[i];
//     }
//     int left=0;
//     int right=n-1;
//     int temp=0;
//     while (left<right)
//     {
//         temp=arr[left];
//         arr[left]=arr[right];
//         arr[right]=temp;
//         left+=1;
//         right-=1;
//     }
//     for(int i=0; i<n; i++)
//     {
//     cout << arr[i] << " ";
//     }
//     cout<<endl;
//     return 0;
// }







//  Shift array element to its one left:-
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[5]={1,2,3,4,5};
//     int temp=arr[0];
//     int left=0;
//     int right=sizeof(arr)/sizeof(arr[0])-1;
//     for(int i=left+1;i<5;i++){
//         arr[i-1]=arr[i];
        
//     }
//     arr[right]=temp;
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     cout<<temp<<endl;
//     cout<<right<<endl;
//     return 0;
// }









// Second Largest Using for loop for positive numbers :-
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
//     int largest=arr[0];
//     int secondLargest=0;
//     if(n==1){
//         cout<<"Single element array --- there is no second largest";
//     }
//     else{
//         for(int i=0;i<n;i++){
//             if(arr[i]>largest){
//                 secondLargest=largest;
//                 largest=arr[i];
//             }
//             else if(arr[i]<largest && arr[i]>secondLargest){
//                 secondLargest=arr[i];
//             }
//         }
//     }
//     cout<<"Second Largest = "<<secondLargest<<endl;
// }
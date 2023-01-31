#include<bits/stdc++.h>
using namespace std;
int main(){
    int s , temp = 0;
    cout<<"enter the size of array"<< endl;
    cin>>s;
    int arr[s];
    // to enter the element
    cout<<"enter the element"<<endl;
    for(int i = 0 ; i<s ; i++){
        cin>>arr[i];
        
    }
    // to display the element
    cout<<"entered element"<<endl;
    for(int i = 0 ; i<s ; i++){
        cout<<arr[i];
        
    }
    //to sort array
    for(int i = 0 ; i<s ; i++){
        if(arr[i]>arr[i+1]){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;

        }
        
    }
     // to display the sorted array
    cout<<"entered element"<<endl;
    for(int i = 0 ; i<s ; i++){
        cout<<arr[i];
        
    }
    return 0;
}
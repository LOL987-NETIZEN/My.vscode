#include<iostream>
using namespace std;
int main(){
    int arr[50];
    cout<<"Enter the elements of the array enter -1 to stop"<<endl;
    int n=0;
    for(int i=0;i<50;i++){
        cin>>arr[i];
        n++;
        if(arr[i]==-1){
            break;
        }
    }
    int key;
    cout<<"Enter the element you want to find."<<endl;
    cin>>key;
    cout<<"This element is present at the following indices:"<<endl;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<i<<" ";
        }
    }
    return 0;
}
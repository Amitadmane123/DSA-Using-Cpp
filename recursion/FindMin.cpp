#include <iostream>
#include <limits.h>
using namespace std;
void findMax(int arr[],int n,int i,int& maxi){
    if(i>=n){
        return;
    }
    if(arr[i]>maxi){
        maxi=arr[i];
    }
    findMax(arr,n,i+1,maxi);
}
int main(){
    int arr[]={10,20,30,44,66,55,44,5}
    int n=8;
    int i=0;
    int maxi=INT_MAX;
    findMax(arr ,n,i,maxi);
    cout<<"Maximum number is:"<<maxi<<endl;

    return 0;
}
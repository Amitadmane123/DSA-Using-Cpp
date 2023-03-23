#include <iostream>
#include <limits.h>
using namespace std;
    void findMax(int arr[],int n,int i,int& maxi){
        //base case
        if(i>=n){
            //array agar khtam hogaya, poora traverse hogaya
            //to wapas aajao
            return;
        } 
        // 1 case solve krna h
        //current element ko check karo for max
        if(arr[i]>maxi){
            maxi=arr[i];
        }
        //baaki recursion sambhal lenga
        findMax(arr,n,i+1,maxi);
         
    }
    int main(){
    int arr[]={10,30,21,44,32,17,19,66};
    int n=8;
    int i=0;

    int maxi = INT_MIN;

    findMax(arr,n,i,maxi);

    cout<<"Maximum number is:"<<maxi<<endl;
}

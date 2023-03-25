#include<iostream>
using namespace std;
// void mergeSort(int*arr,int s,int e){
//     int mid=(s+e)/2;
//     int len1=mid-s+1;
//     int len2=e-mid;

//     //assume to create arrays for len1, len2 length
//     int*left = new int[len1];
//     int*right= new int [len2];
//     //copy values
//     int k=s; 
//     for(int i=0;i<len1;i++){
//         left[i] = arr[k];
//         k++;
//     }

//     int k = mid+1;
//     for(int i=0;i<len1;i++){
//         left[i] = arr[k];
//         k++;
//     }
//     //merge logic
//     int leftIndex =0;
//     int rightIndex = 0;
//     int mainArrayIndex = s;

//     while(leftIndex <len1 && rightIndex <len2){
//         if(left[leftIndex]<right[rightIndex]){
//            arr[mainArrayIndex++] = left[leftIndex++];

//         }
//         else{
//             arr[mainArrayIndex++]=right[rightIndex++];
//         }
//         }
//         //copy logic for left array
//         while(leftIndex < len1){
//             arr[mainArrayIndex++] = left[leftIndex++];
//         }
//         //copy logic for right array
//         while(rightIndex < len2){
//             arr[mainArrayIndex++] = right[rightIndex++];
//         }
//         //TODO: delete left and right wala newly created array
//     }
//     void mergeSort(int arr[],int s, int e){
//       if(s >= e)
//        return;


//      int mid = (s+e)/2;
//     //left part sort kardo recursion bhaiyya
//      mergeSort(arr,s,mid);

//      //right part sort kardo recursion bhaiyya
//      mergeSort(arr,mid+1,e);
     
//      //now merge 2 sorted arrays
//      merge(arr, s,e);
// }

// int main(){
//     int arr[]={4,13,5,13,2,12,2,2,2,2,2,2};
//     int n=12;

//     int s = 0;
//     int e = n-1;
//     //calling mergeSort function
//     mergeSort(arr,s,e);
//     //printing the array
//     for(int i=0;i<n;i++){
//         cout << arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }
//QuickSort
int partition(int arr[],int s,int e) {
    //step 1: choose pivot element
    int pivotIndex = s;
    int pivotElement = arr[s];
    //step 2: find right position for pivot element and place it there
    int count = 0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivotElement){
            count++;
        }
    }
    //jab main loop se bahar hua , toh mere paas pivot ki right position ka index ready h
    int rightIndex = s +count;
    swap(arr[pivotIndex], arr[rightIndex]);
    pivotIndex = rightIndex;

    //step 3: left me chote and right me bade
    int i=s;
    int j=e;
    while(i<pivotIndex && j> pivotElement){
        while(arr[i]<pivotElement) {
            i++;
        }
        while(arr[i]>pivotElement){
            j--;
        }
        //2 case ho sakte h->
        //a->you found the element to swap
        //b->no need to swap
        if(i<pivotIndex && j>pivotIndex)
          swap(arr[i],arr[j]);
    }
    return pivotIndex;


}
void quickSort(int arr[],int s, int e){
    //base case
    if(s >= e)
    return;

    //partition logic
    int p = partition(arr,s,e);
    //recursion logic
    //left
    quickSort(arr,s,p-1);
    //right
    quickSort(arr,p+1,e);

}
int main(){
    int arr[] = {8,1,3,4,20,50,30};
    int n=7;

    int s = 0;
    int e = n-1;
    quickSort(arr,s,e);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout << endl;
    return 0;

}
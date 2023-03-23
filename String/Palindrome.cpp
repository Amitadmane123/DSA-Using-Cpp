#include<iostream>
#include<string.h>
using namespace std;
bool checkPalindrome(char word[]){
    int i=0;
    int n=strlen (word);
    int j=n-1;
    while(i<=j){
        if(word[i]!=word[j]){
            return false;
        }
        else{
            i++;
            j--;
        }
        }
        return true;
    }
void convertIntoUpperCase(char arr[]){
    int n=get.length(arr);
    for(int i=0;i<n;i++){
        arr[i]=arr[i]-'a'+'A';
    }
}
int main(){
    char arr[100]="babbar";
    convertIntoUpperCase(arr);
    cout<<arr<<endl;
    return 0;
}

// int main(){
//     char arr[100]="babbar";
//     cout<<"palindrome check:"<<checkPalindrome(arr);
//     return 0;
// }

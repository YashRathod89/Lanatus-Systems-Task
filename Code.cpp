#include <bits/stdc++.h>
using namespace std;

int duplicate(int arr[],int len) {
    int pos=0;
    for(int i=0;i<len;i++) {
        bool dup=false;
        for(int j=0;j<pos;j++) {
            if (arr[i]==arr[j]) {
                dup=true;
                break;
            }
        }
        if(!dup)
            arr[pos++]=arr[i];
    }
    while(pos<len)
        arr[pos++]=INT_MIN;
    return pos;
}
void print(int arr[], int len) {
    cout<<"[";
    for(int i=0;i<len;i++) {
        if (arr[i]==INT_MIN)
            cout<<" ";
        else
            cout<<arr[i];

        if (i!=len - 1)
            cout<<", ";
    }
    cout<<"]"<<endl;
}
int main() {
    long long int len;
    cin>>len;
    int* arr = new int[len];
    for(int i=0;i<len;i++)
        cin>>arr[i];
    int uniqueCount = duplicate(arr, len);
    int unique = 0;
    for(int i=0;i<uniqueCount;i++) {
        if (arr[i]!=INT_MIN)
            unique++;
    }
    cout<<unique<<endl;
    print(arr, len);
    return 0;
}

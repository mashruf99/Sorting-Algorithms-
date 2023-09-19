//MASHRUF's work
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cout<<"Enter the array size : "<< '\n';
    cin>>t;
    int a[t];
    int i,temp;
    for ( i=0 ;i<t  ;i++  ){
        cin>>a[i];
    }
    cout<<"The unsorted arry : "<< '\n';
    for ( i=0 ;i<t  ;i++  ){
        cout<<a[i]<<" ";
    }
    cout<< '\n';


    for ( i=1 ;i<t  ;i++  ){
        temp = a[i];
        int j = i-1;
        while (j>=0 && a[j]>temp){
            a[j+1] = a[j];
            j--;
        }
        a[j+1]= temp;
    }
    cout<<"The sorted arry : "<< '\n';
    for ( i=0 ;i<t  ;i++  ){
        cout<<a[i]<<" ";
    }
    cout<< '\n';


    return 0;
}

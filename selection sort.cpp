//MASHRUF's work
#include<bits/stdc++.h>
using namespace std;
#define ll long long;

int main()
{
    int n,i,j,temp,index;
    cout<<"Enter the size of the array : \n";
    cin>>n;
    vector<int>a;
    for(i=0; i<n; i++){
        int m;
        cin>>m;
        a.push_back(m);
    }
    cout<<"The unsorted arry : "<< '\n';
    for ( i=0 ;i<n  ;i++  ){
        cout<<a[i]<<" ";
    }
    cout<< '\n';


    for( i=0; i<n; i++){

        index = i;

        for( j=i+1; j<n; j++){
            if(a[index]> a[j]){
               index = j;
            }
        }
        temp = a[i];
        a[i]=a[index];
        a[index] = temp;

    }

    cout<<"The sorted arry : "<< '\n';
    for ( i=0 ;i<n  ;i++  ){
        cout<<a[i]<<" ";
    }
    cout<< '\n';
    return 0;
}

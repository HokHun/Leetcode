#include<iostream>
using namespace std;
#include<algorithm>
// nonnn
// 21. Merge Two Sorted Lists
int main(){
    int m,n,i,k=0;
    int a[100],b[100],c[200];
    cout<<"nhap n";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"nhap phan tu a["<<i<<"] :";
        cin>>a[i];
    }

    cout<<"nhap m";
    cin>>m;
    for(int i=0;i<m;i++){
        cout<<"nhap phan tu b["<<i<<"] :";
        cin>>b[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        cout<<a[i];
    }

    sort(b,b+n);
    for(int i=0;i<n;i++){
        cout<<b[i];
    }
    
}
    


#include <iostream>
using namespace std;
#include<algorithm>

int main(){
    int n,i;
    int a[100],sum;
    cout<< "nhap so n : ";
    cin>>n;
    sum=0;
    for(i=0;i<n;i++){
        cout<<"nhap phan tu["<<i<<"] : ";
        cin>>a[i];
    }
        cout<< "nhap tong :";
        cin>>sum;
    // sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(sum==a[i]+a[j]){
                cout<<i;
                cout<<j<<"\t";
            }
        }
    }   
    return 0;
} 
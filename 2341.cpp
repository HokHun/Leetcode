#include<iostream>
using namespace std;
int  main(){
    int n;
    int a[100];
    int count1=0,count2=0;
    cout<< "nhap so phan tu :";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<" so phan tu a["<<i<<"] :";
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                count1++;
            }
        }
    }
    cout<<count1<<"\t";
    count2=n-count1*2;
    cout<<count2;
}

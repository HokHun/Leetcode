#include<iostream>
using namespace std;
#include<algorithm>
int loop(int a[], int n){
    sort(a,a+n);
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]==a[i+1]){
            if(count==0){
                cout<<a[i];
                count++;
            }
            else if(count>0){
                continue;
            }
        }
        else if(a[i]!=a[i+1]){
            if(i==n||i==0){
            cout<<a[i];
            }
            else{ 
                cout<<a[i+1];
                i++; 
            }
            
        }
}
return 0;
}

int main(){
    int n,a[100];
    cout<<"nhap n";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"nhap a["<<i<<"]";
        cin>>a[i];
    }
    loop(a,n);
}

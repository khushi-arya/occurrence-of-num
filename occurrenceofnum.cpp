#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"size: \n";
    cin>>n;
    int i,arr[n];
    cout<<"elements of array: \n";
    for(i=0;i<=n;i++){
        cin>>arr[i];
    }
    cout<<"\n array is:\n";
   for (i = 0; i<=n; i++) {
        cout<<"  "<<arr[i];
    }
    cout<<"\n";
    int k;
    cout<<"enter the number to find the occurrence of that num: "<<endl;
    cin>>k;
    int j;
    int ans=0;
    for(i=0;i<=n;i++){
       
            if(arr[i]==k){
                ans=ans+1;
            }else{
                ans=ans+0;
            }
        }
    
    cout<<" \n"<<ans;
    return 0;
    }
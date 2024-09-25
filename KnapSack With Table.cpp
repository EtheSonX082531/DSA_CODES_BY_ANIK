#include<bits/stdc++.h>
using namespace std;
int main(){
 int W,n;
 cout<<"Enter the number of items:"<<endl;
 cin>>n;
 int weight[n];
 int val[n];
 cout<<"Enter weights for every items:"<<endl;
 for(int i=0;i<n;i++){
    cin>>weight[i];
 }
 cout<<"Enter items profits here:"<<endl;
 for(int i=0;i<n;i++){
    cin>>val[i];
 }
 cout<<"Enter maximum Weight:"<<endl;
 cin>>W;
 int tab[n+1][W+1];
 for(int i=0;i<=n;i++){
        for(int j=0;j<=W;j++){
            if(i==0 || j==0){
                tab[i][j]=0;
            }
            else if(weight[i-1]<=j){
                tab[i][j]=max(tab[i-1][j],tab[i-1][j-weight[i-1]]+val[i-1]);
            }
            else{
                tab[i][j]=tab[i-1][j];
            }
        }
    }
 cout<<"Max Profit is:"<<tab[n][W]<<endl;
 for(int i=0;i<=n;i++){
    for(int j=0;j<=W;j++){
        cout<<tab[i][j]<<" "<<"|"<<" ";
    }
    cout<<endl;
    for(int k=0;k<=n;k++){
        cout<<"_______";
    }
    cout<<endl;
 }
 return 0;
}

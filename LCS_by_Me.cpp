#include<iostream>
using namespace std;

int main()
{
    string s1="PRESIDENT";
    string s2="PROVIDENCE";
    int c[s2.size()+1][s1.size()+1];
    for(int i=0; i<s2.size()+1; i++) {
        for(int j=0; j<s1.size()+1; j++) {
            if(i==0 || j==0) {
                c[i][j]=0;
            }
            else if(s1[i-1]==s2[j-1]) {
                c[i][j]=c[i-1][j-1]+1;
            }
            else {
                c[i][j]=max(c[i][j-1],c[i-1][j]);
            }
        }
    }
    cout<<"Longest Common Subsequence length is:"<<c[s2.size()][s1.size()]<<endl;
    return 0;
}

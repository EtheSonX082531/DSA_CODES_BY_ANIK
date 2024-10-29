#include<iostream>
using namespace std;

int StringMatching(string haystack,string needle) {
    int n=haystack.size();
    int m=needle.size();
    for(int i=0; i<=(n-m); i++) {
        int first=i,second=0;
        while(second<m) {
            if(haystack[first]!=needle[second]) {
                break;
            }
            else {
                first++;
                second++;
            }
        }
        if(second==m) {
            return first-m;
        }
    }
    return -1;
}

int main()
{
    string haystack="abacdabad";
    string needle="abad";
    int n=StringMatching(haystack,needle);
    if(n>=0) {
        cout << "Match found in index: " << n << endl;
    }
    else {
        cout << "Match not found!" << endl;
    }
    return 0;
}

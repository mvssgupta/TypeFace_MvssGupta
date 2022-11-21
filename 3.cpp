#include<bits/stdc++.h>
using namespace std;
int main(){
    int nthNum;
    cin>>nthNum;
    vector<int> validNumbers;
    int i=1;
    while (validNumbers.size()<nthNum){
        if (i!=3 && i!=4 && i!=7){
            validNumbers.push_back(i);
        }
        i++;
    }
    cout<<validNumbers[nthNum-1];
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int lastCharacterOccurences(string &string1, string &string2) {
    int count = 0;
    char lastCharacter = string2[(string2.size()-1)];
    for (char ch:string1) {
        if (ch == lastCharacter)
            count++;
    }
    return count;
}
                                   
int main()
{
    string string1,string2;
    getline(cin,string1);
    getline(cin,string2);
    cout<<lastCharacterOccurences(string1,string2);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

string baseThreeConversion(int number) {
    if (number < 3)
        return to_string(number);
    else
        return baseThreeConversion(number / 3) + to_string(number % 3);
}

int main()
{
    int number;
    cin>>number;
    cout<<stoi(baseThreeConversion(number))<<endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void minimumSubRectangle(vector<vector<int>> &arr)
{
    int row1 = 0, row2 = arr.size() - 1;
    int col1 = 0, col2 = arr[0].size() - 1;
    if (arr[row1][0] != 0)
        row1++;
    if (arr[row2][0] != 0)
        row2--;
    if (arr[0][col1] != 0)
        col1++;
    if (arr[0][col2] != 0)
        col2--;
    cout << row1 << "," << col1 << " ";
    cout << row1 << "," << col2 << " ";
    cout << row2 << "," << col1 << " ";
    cout << row2 << "," << col2 << " ";
}

int main()
{
    vector<vector<int>> arr;
    minimumSubRectangle(arr);
    return 0;
}
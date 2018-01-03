#include <iostream>
#include<bits/stdc++.h>
using namespace std;

string canConstruct(vector <int> a)
{
    // Return "Yes" or "No" denoting whether you can construct the required number.
    vector<int> digits;
    for (int i=0; i< a.size(); i++)
    {
        int n = a[i];
        while(n>0)
        {
            digits.push_back(n%10);
            n=n/10;
        }
    }

    int sum=0;
    for (int j=0; j< digits.size(); j++)
    {
        sum = sum + digits[j];
    }

    if (sum%3 == 0)
    {
        return "Yes";
    }
    else
    {
        return "No";
    }
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int a_i = 0; a_i < n; a_i++){
           cin >> a[a_i];
        }
        string result = canConstruct(a);
        cout << result << endl;
    }
    return 0;
}

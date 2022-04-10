// CODE BY : AJAY PAL , IIT (BHU)
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

string printLargest(vector<string> &a)
{
    int n = a.size();
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());

    string s = "";
    for (int i = 0; i < n; i++)
    {
        // cout << a[i] << " ";
        s += a[i];
    }
    // cout << kk;

    // cout << s << kk;
    return s;
}

class Solution
{
public:
    static int myCompare(string a, string b)
    {
        string s1 = a + b;
        string s2 = b + a;

        return (s1 > s2);
    }

    string printLargest(vector<string> &a)
    {
        sort(a.begin(), a.end(), myCompare);
        string ans = "";
        for (int i = 0; i < a.size(); i++)
        {
            ans += a[i];
        }

        return ans;
    }
};
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string w;
    cin >> w;
    int n = w.length();
    vector<int> p(n), c(n); // p contain the position of each suffix  and c contain the class of equivalence
    vector<pair<char, int>> a(n);
    for (int i = 0; i < n; i++)
        a[i] = (w[i], i);
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        p[i] = a[i].second;
    }
    c[p[0]] = 0;
    for (int i = 1; i < n; i++)
    {
    }
}
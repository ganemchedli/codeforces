#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct myclass
{
   bool operator()(int i, int j) { return (i < j); }
} myobject;

int main()
{
   int N; // number of test cases
   vector<int> tab;
   cin >> N;
   for (int i = 0; i < N; i++)
   {
      int n;
      cin >> n; // number of integers
      for (int j = 0; j < n; j++)
      {
         int x;
         cin >> x; // integer
         tab.push_back(x);
      }
      sort(tab.begin(), tab.end(), myobject);
      bool done = false;
      int l = tab.size() - 1;
      int a = 1;
      while (!done)
      {
         if (tab[l] != tab[l - a])
         {
            cout << tab[l] * tab[l - a] << endl;
            done = true;
         }
         else if (tab.size() == 2)
         {
            cout << tab[0] * tab[1] << endl;
         }
         else
         {
            a++;
         }
      }
      tab.clear();
   }
   return 0;
}
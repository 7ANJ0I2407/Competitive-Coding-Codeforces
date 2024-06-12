#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <deque>
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pp pop_back
#define ll long long
#define ld long double
#define int long long
#define pair pair<int,int>
typedef vector<ll> vi;
#define forall(i, n, x) for (int i = 0; i < n; i += x)
#define all(x) x.begin(), x.end()
#define all(x) x.begin(), x.end()
#pragma GCC optimize("O3")
#pragma GCC target("avx2")

void solve()
{
   int n, m;
   cin >> n >> m;
   int total = n + m + 1;

   vector<pair> a, b;
   for (int i = 0; i < total; ++i)
   {
      int x; cin >> x;
      a.push_back({x, i});
   }
   for (int i = 0; i < total; ++i)
    {
      int x; cin >> x;
      b.push_back({x, i});
   }
   vector<int> teamSkillWithoutCandidate(total);
   int exclude = 0;
   for (int i = 0; i < total; ++i)
   {
      vector<pair> programmers, testers;
      programmers = a;
      testers = b;
      programmers.erase(programmers.begin() + i);
      testers.erase(testers.begin() + i);
      sort(programmers.begin(), programmers.end(), greater<int>());
      sort(testers.begin(), testers.end(), greater<int>());
      if ()
      {
         if (programmers.size() < n)
         {
            programmers.push_back(a[i]);
         }
         else
         {
            testers.push_back(b[i]);
         }
      }
      else
      {
         if (testers.size() < m)
         {
            testers.push_back(b[i]);
         }
         else
         {
            programmers.push_back(a[i]);
         }
      }

      int totalProgrammerSkill = accumulate(programmers.begin(), programmers.end(), 0);
      int totalTesterSkill = accumulate(testers.begin(), testers.end(), 0);

      teamSkillWithoutCandidate[exclude] = totalProgrammerSkill + totalTesterSkill;
   }

   for (int i = 0; i < total; ++i)
   {
      cout << teamSkillWithoutCandidate[i] << " ";
   }
   cout << endl;
}

signed main()
{
   ios::sync_with_stdio(false);
   cout.tie(0);
   cin.tie(0);
   int t = 1;
   cin >> t;
   while (t--)
   {
      solve();
   }

   return 0;
}
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> findTriplets(vector<int> arr, int n, int K)
{
  set<vector<int>> tripletSet;

  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      for (int k = j + 1; k < n; k++)
      {
        if (arr[i] + arr[j] + arr[k] == K)
        {
          vector<int> temp = {arr[i], arr[j], arr[k]};
          sort(temp.begin(), temp.end()); // ? sort before inserting
          tripletSet.insert(temp);
        }
      }
    }
  }

  vector<vector<int>> result(tripletSet.begin(), tripletSet.end());
  return result;
}

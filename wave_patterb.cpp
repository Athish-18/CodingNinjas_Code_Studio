#include <bits/stdc++.h>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
  vector<int> ans;
  for (int col = 0; col < mCols; col++) // Fixed: mCols, not nCols
  {
    if (col & 1) // Odd column - bottom to top
    {
      for (int row = nRows - 1; row >= 0; row--)
      {
        ans.push_back(arr[row][col]);
      }
    }
    else // Even column - top to bottom
    {
      for (int row = 0; row < nRows; row++)
      {
        ans.push_back(arr[row][col]);
      }
    }
  }
  return ans;
}

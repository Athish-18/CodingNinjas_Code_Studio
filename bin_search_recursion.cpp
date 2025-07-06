#include <iostream>
#include <vector>
using namespace std;

// Recursive binary search function
int recursiveBinarySearch(const vector<int> &A, int left, int right, int target)
{
  if (left > right)
    return -1;

  int mid = left + (right - left) / 2;

  if (A[mid] == target)
    return mid;
  else if (A[mid] > target)
    recursiveBinarySearch(A, left, mid - 1, target);
  else
    recursiveBinarySearch(A, mid + 1, right, target);
}

// Search function as expected by the platform
int search(vector<int> &A, int target)
{
  return recursiveBinarySearch(A, 0, A.size() - 1, target);
}

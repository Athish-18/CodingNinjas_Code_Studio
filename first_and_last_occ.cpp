

int firstOcc(vector<int> &arr, int n, int k)
{
  int s = 0;
  int e = n - 1;
  int mid = s + (e - s) / 2;
  int ans = -1;
  while (s <= e)
  {
    if (k == arr[mid])
    {
      ans = mid;
      e = mid - 1; // because u need to check at left part as well to get first occ
    }
    else if (arr[mid] > k)
    {
      e = mid - 1;
    }
    else
    {
      s = mid + 1;
    }
    mid = s + (e - s) / 2;
  }
  return ans;
}

int lastOcc(vector<int> &arr, int n, int k)
{
  int s = 0;
  int e = n - 1;
  int mid = s + (e - s) / 2;
  int ans = -1;
  while (s <= e)
  {
    if (k == arr[mid])
    {
      ans = mid;
      s = mid + 1; // // because u need to check at right  part as well to get last  occ
    }
    else if (arr[mid] > k)
    {
      e = mid - 1;
    }
    else
    {
      s = mid + 1;
    }
    mid = s + (e - s) / 2;
  }
  return ans;
}
pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
{
  pair<int, int> p;
  p.first = firstOcc(arr, n, k);
  p.second = lastOcc(arr, n, k);
  return p; // Write your code here
}

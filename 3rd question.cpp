/*int NthRoot(int n, int m)
{
  for(int i=1;;i++)
  { int count=1;
  int temp=i;
  while(count<n)
  { count++;
  temp=temp*i;
  }
  if(temp==m)
  return i;
  if(temp>m)
  return -1;
  }
}*/
// Brute force solution O(N^2)(time limit exceeded)
int NthRoot(int n, int m)
{
    int low = 1, high = m; // Got idea of binary search then it"ll become O(NlogN) (which is acceptable)
    while (low <= high)
    {
        long long mid = (low + high) / 2;

        long long res = 1;
        for (int i = 0; i < n; i++)
        {
            res *= mid;
            if (res > m)
                break;
        }

        if (res == m)
            return mid;
        else if (res < m)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

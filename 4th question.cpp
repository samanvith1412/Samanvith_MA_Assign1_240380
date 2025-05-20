#include <iostream>
using namespace std;

// I am unable to solve this problem without TLE.

// Method 1(Using Recursion)(GOT LTE)
/*long long luckyvalue(int l, int r, int k)
{
    int m = (l + r) / 2;
    if (r - l + 1 < k)
        return 0;
    else
    {
        if ((r - l  +1) % 2 == 0)
        {
            return luckyvalue(l, m, k) + luckyvalue(m + 1, r, k);
        }
        else
            return luckyvalue(l, m - 1, k) + m + luckyvalue(m + 1, r, k);
    }
}*/

// Method 2(Using stack)(still got TLE)

/*long long luckyvalue(int l,int r,int k)
{   long long lucky=0;
    stack<pair<int,int>> st;
    st.push({l, r});

    while (!st.empty()) {
        auto [left, right] = st.top();
        st.pop();

        if (right - left + 1 < k) continue;

        int m = (left + right) / 2;

        if ((right - left + 1) % 2 == 1) {
            lucky+= m;
            if (left <= m - 1)
                st.push({left, m - 1});
            if (m + 1 <= right)
                st.push({m + 1, right});
        } else {
            st.push({left, m});
            st.push({m + 1, right});
        }
    }

    return lucky;
}*/

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        long long lucky = luckyvalue(1, n, k);
        cout << lucky << "\n";
    }
}
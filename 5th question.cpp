class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        int top = 0;
        int bottom = n - 1;
        int left = 0;      // We can observe that rotating by 90 degrees is effectively
        int right = n - 1; // (a) Taking transpose of matrix
                           // (b) Reversing each row
        // part(a)
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
                swap(matrix[i][j], matrix[j][i]);
        }
        // part(b)
        for (int i = 0; i < n; i++)
            reverse(matrix[i].begin(), matrix[i].end());
    }
};
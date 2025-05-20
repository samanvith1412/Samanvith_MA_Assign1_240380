class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        vector<int> v;
        int rows = matrix.size();
        int columns = matrix[0].size(); // Already got this in esc112.So I remembered the idea.

        int count_rows = 0;    // top boundary
        int count_columns = 0; // left boundary

        while (count_rows <= rows - 1 && count_columns <= columns - 1)
        {
            // Left to Right
            int i = count_rows;
            for (int j = count_columns; j <= columns - 1; j++)
                v.push_back(matrix[i][j]);
            count_rows++;

            // Top to Bottom
            int j = columns - 1;
            for (int i = count_rows; i <= rows - 1; i++)
                v.push_back(matrix[i][j]);
            columns--;

            // Right to Left
            if (count_rows <= rows - 1)
            {
                int i = rows - 1;
                for (int j = columns - 1; j >= count_columns; j--)
                    v.push_back(matrix[i][j]);
                rows--;
            }

            // Bottom to Top
            if (count_columns <= columns - 1)
            {
                int j = count_columns;
                for (int i = rows - 1; i >= count_rows; i--)
                    v.push_back(matrix[i][j]);
                count_columns++;
            }
        }
        return v;
    }
};

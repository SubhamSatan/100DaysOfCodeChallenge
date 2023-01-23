//LeetCode 1886 : Determine Whether Matrix Can Be Obtained By Rotation 

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) 
    {
        reverse(matrix.begin(), matrix.end());
        for (int i = 0; i < matrix.size(); ++i) 
        {
        for (int j = i + 1; j < matrix[i].size(); ++j)
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int i = 1;
        while(i<=4)
        {
            if(mat == target)
            {
                return 1;
            }
            else{
                rotate(mat);
                i++;
            }
        }
        return 0;
    }
};

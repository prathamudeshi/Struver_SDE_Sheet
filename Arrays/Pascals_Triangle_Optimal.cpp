// https://leetcode.com/problems/pascals-triangle/
class Solution {
public:

    vector<int> generaterow(int row)
    {
        vector<int> ans;
        ans.push_back(1);
        int temp = 1;
        for(int col=1; col<row; col++)
        {
            temp = temp * (row-col);
            temp = temp/col;
            ans.push_back(temp);
        }
        return ans;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=1; i<=numRows; i++)
        {
            ans.push_back(generaterow(i));
        }
        return ans;
    }
};
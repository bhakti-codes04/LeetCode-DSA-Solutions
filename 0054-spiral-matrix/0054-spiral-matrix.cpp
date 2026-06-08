class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        vector<int> ans;

        int row = matrix.size();
        int col = matrix[0].size();

        int count = 0;
        int total = row * col;

        int strtrow = 0;
        int strtcol = 0;
        int endingrow = row - 1;
        int endingcol = col - 1;

        while (count < total) {

            // Starting Row
            for (int index = strtcol; count < total && index <= endingcol; index++) {
                ans.push_back(matrix[strtrow][index]);
                count++;
            }
            strtrow++;

            // Ending Column
            for (int index = strtrow; count < total && index <= endingrow; index++) {
                ans.push_back(matrix[index][endingcol]);
                count++;
            }
            endingcol--;

            // Ending Row
            for (int index = endingcol; count < total && index >= strtcol; index--) {
                ans.push_back(matrix[endingrow][index]);
                count++;
            }
            endingrow--;

            // Starting Column
            for (int index = endingrow; count < total && index >= strtrow; index--) {
                ans.push_back(matrix[index][strtcol]);
                count++;
            }
            strtcol++;
        }

        return ans;
    }
};
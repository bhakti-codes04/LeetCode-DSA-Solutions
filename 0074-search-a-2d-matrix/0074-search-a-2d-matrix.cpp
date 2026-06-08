class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int row = matrix.size();
        int col = matrix[0].size();

        int strt = 0;
        int end = row * col - 1;

        while (strt <= end) {

            int mid = strt + (end - strt) / 2;

            int element = matrix[mid / col][mid % col];

            if (element == target) {
                return true;
            }

            if (element < target) {
                strt = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        return false;
    }
};
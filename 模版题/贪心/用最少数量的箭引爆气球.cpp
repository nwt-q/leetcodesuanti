class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end(),[](const vector<int>&a,const vector<int>&b) {
            return a[0] < b[0];
        });
        int result = 1;
        for (int i = 1; i < points.size(); i++) {
            if (points[i][0] > points[i-1][1]) result++;
            //这个元素的左边界大于前一个元素的右边界说明只要一支箭
            else {
                points[i][1] = min(points[i - 1][1],points[i][1]);
            }
            //球i和气球i-1挨着
        }
        return result;
    }
};

//检查区间是否去重

//https://leetcode.cn/problems/minimum-number-of-arrows-to-burst-balloons/

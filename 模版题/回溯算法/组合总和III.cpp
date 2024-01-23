class Solution {
private:
    //1.确定递归函数参数
    vector<int>vec;
    vector<vector<int>>v;
    void backgound(int n,int k,int StartIndex,int sum) {
        //2.确定终止条件
        if(vec.size()==k) {
            if(sum==n) {
                sum=0;
                v.push_back(vec);
                return;
            }
        }
        //3.确定终止条件
        for(auto i = StartIndex;i<=9;i++) {
            vec.push_back(i);
            sum+=i;//统计sum
            backgound(n,k,i+1,sum);
            vec.pop_back();//回溯
            sum-=i;//回溯
          //进阶回溯隐藏
        }
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vec.clear(),v.clear();//清理容器
        backgound(n,k,1,0);
        return v;
    }
};

//https://leetcode.cn/problems/combination-sum-iii/

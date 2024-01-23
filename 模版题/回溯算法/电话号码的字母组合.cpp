class Solution { 
//多数组回溯求值
private:
    //确定传入参数
    void backtracking(const string& digits,int index) {
        //确定终止条件
        if(index == digits.size()) {
            v.push_back(s);
            return;
        }
        //确定单层遍历逻辑
        int digit = digits[index] - '0';  // 将index指向的数字转为int
        string letters = letterMap[digit]; //取数字对应字符集
        for(auto i = 0; i < letters.size(); i++) {
            s.push_back(letters[i]);        //处理
            backtracking(digits,index+1);   //递归,注意index+1,下一层处理下一个数字
            s.pop_back();      //回溯
        }
    };
public:
    vector<string> letterCombinations(string digits) {
        s.clear(),v.clear();
        if(digits.size() == 0) return v;
        backtracking(digits,0);
        return v;
    }
private:
    vector<string>v;//确定传入参数
    string s;
public:
    const string letterMap[10] = {  //用哈希法储存
    "", // 0
    "", // 1
    "abc", // 2
    "def", // 3
    "ghi", // 4
    "jkl", // 5
    "mno", // 6
    "pqrs", // 7
    "tuv", // 8
    "wxyz", // 9
    };
};

//https://leetcode.cn/problems/letter-combinations-of-a-phone-number/

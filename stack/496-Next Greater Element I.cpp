//下一个更大的元素
#include <iostream>
#include <vector>
#include <map>
#include <stack>
using namespace std;
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {

            vector<int> result;
            stack<int> s;
            map<int, int> m;



            for (int i = nums.size() - 1; i >= 0; i--) {

                //使用栈，从后往前遍历nums[i]，每当栈不为空的时候，一直出栈直到遇到比nums[i]大的数字停止。
                while (!s.empty() && s.top() <= nums[i])
                    s.pop();

                // 设立一个map<int, int> m，存储nums中每一个元素以及它对应的下一个最大元素构成的映射。
                // 如果停止后栈为空就将m[nums[i]]标记为-1，否则就写栈的栈顶元素
                m[nums[i]] = s.empty() ? -1 : s.top();
                s.push(nums[i]);
            }

            //将findNums中出现的每一个元素对应的map的值放入result数组中返回
            for(int i = 0; i < findNums.size(); i++){
                result.push_back(m[findNums[i]]);
            }

            return result;
        }

};

int main(){
    Solution solution;
    vector<int>a={2,4};
    vector<int> b ={1, 2, 3, 4};

    solution.nextGreaterElement(a,b);

}
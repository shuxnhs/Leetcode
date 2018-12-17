//
// Created by shuxnhs on 18-12-18.
//
#include <iostream>
#include <queue>
#include <vector>
using  namespace std;

class Solution {
public:
    int shortestSubarray(vector<int>& A, int K) {
        int N = A.size(), res = N + 1;
        vector<int> B(N + 1, 0);

        for (int i = 0; i < N; i++) {
            B[i + 1] = B[i] + A[i];
        }

        deque<int> deque1;

        for (int i = 0; i < N + 1; i++) {
            while (!deque1.empty() && B[i] - B[deque1.front()] >= K){
                res = min(res, i - deque1.front());
                deque1.pop_front();

            }

            while (!deque1.empty() && B[i] <= B[deque1.back()]){
                deque1.pop_back();
            }

            deque1.push_back(i);
        }

        return res <= N ? res : -1;

    }
};


int main() {
    int K=3;
    vector<int> A={2,-1,2};
    Solution solution;
    cout<<solution.shortestSubarray(A,K);

}
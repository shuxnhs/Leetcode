#include <iostream>
#include <queue>
using  namespace std;

class RecentCounter {
public:
    RecentCounter() {

    }

    queue<int> queue1;

    int ping(int t) {
        while (!queue1.empty() && t-queue1.front()>3000){
            queue1.pop();
        }

        queue1.push(t);

        return queue1.size();


    }
};


int main() {
    int t=1;
    int t1=100;
    int t2=3001;
    int t3=3002;
    RecentCounter recentCounter;
    cout<<recentCounter.ping(t)
    <<endl<<recentCounter.ping(t1)
    <<endl<<recentCounter.ping(t2)
    <<endl<<recentCounter.ping(t3);
    
}
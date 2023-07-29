#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void print(queue<int>q){
        while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }cout<<endl;
}

void reverseK(queue<int> &q, int k ) {
        //StepA: queue ->k elements  -> stack

       
        stack<int> s;
        int count = 0;
        int n = q.size();

        if(k <= 0 || k > n)
                return ;

        while(!q.empty()){
                int temp = q.front();
                q.pop();
                s.push(temp);
                count++;

                if(count == k)
                        break;
        } 

        //stepB: stack -> q me qapas
        while(!s.empty()) {
                int temp = s.top();
                s.pop();
                q.push(temp);
        }

        //step C: push n-k element from q front to back 
        count = 0;
        while(!q.empty() && n-k != 0) {
                int temp = q.front();
                q.pop();
                q.push(temp);
                count++;

                if(count == n-k)
                        break;
        }

}

int main()
{
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    print(q);
    reverseK(q,3);
    print(q);
    return 0;
}
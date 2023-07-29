#include <iostream>
#include <stack>
using namespace std;
void print(stack<int> s){
	while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }cout<<endl;
}
void solve(stack<int> &s,int size)
{
    stack<int> temp;
    for (int i = 0; i < 3; i++)
    {	cout<<s.top()<<endl;
        temp.push(s.top());
        s.pop();
    }
    s.pop();

    while (!temp.empty())
    {
        s.push(temp.top());
        temp.pop();
    }
}

int main(){

    stack<int> s;
    s.push(2);
    s.push(34);
    s.push(22);
    s.push(6);
    s.push(88);
    s.push(4);
    s.push(9);

	print(s);
    cout << "size " << s.size() << endl;
    
    solve(s,7);
	print(s);

    cout << "new size " << s.size() << endl;

    return 0;
}
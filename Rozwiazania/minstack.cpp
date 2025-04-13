#include<iostream>
#include<vector>
#include<map>
#include<stack>
using namespace std;

int main()
{
stack<int> mystack;

int mini=mystack.top();

while (!mystack.empty())
{
if(mini>mystack.top())
{
    mini=mystack.top();
}
mystack.pop();
}
cout << mini << endl;
}
/*void push(int val)
{
    mystack.push(val);
}
void pop() {
    mystack.pop();
}

int top() {
    return mystack.top();
}*/
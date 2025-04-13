#include<iostream>
#include<vector>
#include<map>
#include<stack>
#include <algorithm> 
using namespace std;
int main()
{
    cout << "wew" << endl;
    vector<string> tokens {"3","11","5","+","-"};
    stack<int> myStack;
    int kramp;
int sum=0;
    for(auto group :tokens)
    {
        bool isNumber = (group[0] == '-' && group.size() > 1 && all_of(group.begin() + 1, group.end(), ::isdigit)) 
        || all_of(group.begin(), group.end(), ::isdigit);
     
        if (isNumber) {
            cout << group << " is a number." << endl;
            
            int num=stoi(group);
            kramp=num;
            myStack.push(num);
            if(tokens.size()==1)
            {
              sum=kramp;
              goto aa;
            }

        } else {
            int b= myStack.top();
            myStack.pop();
            int a=myStack.top();
            myStack.pop();
            cout << group << " is not a number." << endl;
            if(group=="+")
            {
            
         myStack.push(a+b);
     
            }
            else if(group=="*")
            {
             
                myStack.push(a*b);
        
            }
            else if(group=="-")
            {
              
                myStack.push(a-b);
            }
            else if(group=="/")
            {
                if(b==0)
                {
                    return -1;
                }
                myStack.push(a/b);
            }
           
        }
    }


  aa:
    cout << sum <<  myStack.top() << endl;
    
 
}
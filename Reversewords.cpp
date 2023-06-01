#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S)
    {
        // code here 
        stack<string>st;
        string x="";
        for(int i=0;i<S.size();i++){
            if(S[i]=='.'){
                st.push(x);   //push into the stack
                x="";
            }
            else{
                x=x+S[i];
            }
        }
        st.push(x);
        x="";
        while (!st.empty()) {  //by the property of lifo
        x=x+st.top();   //top of the element 
        st.pop();   //pop the top element 
        if(!st.empty()){
        x=x+'.';   //adding ' . ' after every pop
        }
    }
    return x;  //return reversed string
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}

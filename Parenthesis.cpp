/*

Input:
{([])}
Output: 
true
Explanation: 
{ ( [ ] ) }. Same colored brackets can form 
balanced pairs, with 0 number of 
unbalanced bracket.
Example 2:

Input: 
()
Output: 
true
Explanation: 
(). Same bracket can form balanced pairs, 
and here only 1 type of bracket is 
present and in balanced way.
Example 3:

Input: 
([]
Output: 
false
Explanation: 
([]. Here square bracket is balanced but 
the small bracket is not balanced and 
Hence , the output will be unbalanced.
Your Task:
This is a function problem. You only need to complete the function ispar() that takes a string as a parameter and returns a boolean value true if brackets are balanced else returns false. The printing is done automatically by the driver code.

Expected Time Complexity: O(|x|)
Expected Auixilliary Space: O(|x|)

Constraints:
1 ≤ |x| ≤ 32000

algo:
dedect length which is divisiable by 2.
break string by half ,
reverse 2nd string 
comapre 1st and 2nd string

alter:
take stack 
push f-1111
if s.top=[/{/( && x[i]=]/}/)
 pop
else
 push

in last check s.top=f then balanced
other other not balanced


*/
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        /*
        int i,j;
        bool b;
        int len= x.length();
        if(len%2==0)
        {
            for(i=0,j=len;i<len/2,j>len/2;i++,j--)
            {
                if(x[i] == x[j])
                {
                    continue;
                }
                else
                    b= 0;
            }
            b=1;
       stack<char>s;
        s.push('f');
        for(int i=0;i<x.size();i++){
            if((s.top()=='['&& x[i]==']')||(s.top()=='{'&& x[i]=='}')||(s.top()=='('&& x[i]==')'))
            s.pop();
            else
            s.push(x[i]);
        }
        bool b= 'f'==s.top();
        return b;
  }
        else
          b=0;
      return b;
      */
        
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends

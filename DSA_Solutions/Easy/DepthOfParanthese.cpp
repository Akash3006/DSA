//Maximum Nesting Depth of the Parentheses


//Time Complexity O(S)---S the length of string
//Space Complexity O(S)

#pragma region//Using stack
// using namespace std;
// class Solution {
// public:
//     int maxDepth(string s) {
        
//         stack<char> st;
//         int count=0,maxCount=0;
//         for(char c:s)
//         {
//             if(c=='(')
//             {
//                 st.push(c);
//                 maxCount = max(++count,maxCount);
//             }
            
//             if(c==')' && st.top()=='(')
//             {                
//                 st.pop();
//                 count--;                
//             }   
//         }
        
//         return maxCount;
//     }
// };
#pragma endregion


//Time Complexity O(S)---S the length of string
//Space Complexity O(1)

#pragma region//No Extra Space

// class Solution {
// public:
//     int maxDepth(string s) {
        
//         int maxCount=0,count=0;
        
//         for(char c: s)
//         {
//             if(c=='(')
//                 maxCount = max(++count,maxCount);
            
//             if(c==')')
//                 count--;
//         }
        
//         return maxCount;
//     }
// };

#pragma endregion
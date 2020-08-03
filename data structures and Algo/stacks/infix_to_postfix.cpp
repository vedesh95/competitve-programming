#include<bits/stdc++.h>
using namespace std;



// // / The main function to convert infix expression
// // //to postfix expression

// // int getweight(char c){
// //     if(c=='^') return 3;
// //     else if(c=='/') return 2;
// //     else if(c=='*') return 1;
// //     else if(c=='+') return 0;
// //     else if(c=='-') return 0;


// // }

// // bool isopearator(char c){
// //     if(c=='^') return 1;
// //     else if(c=='/') return 1;
// //     else if(c=='*') return 1;
// //     else if(c=='+') return 1;
// //     else if(c=='-') return 1;
// //     else return 0;
    

// // }

// // bool isoperand(char c){
// //     if(c>='1' && c<='9') return 1;
// //     else return 0;

// // }

// // int hashigherprecedence(char op1,char op2){
// //     int w1=getweight(op1);
// //     int w2=getweight(op2);
// //     if(w1>=w2) return 1;
// //     else return 0;
// // }
// // string infixToPostfix(string exp)
// // {
// //     // Your code here
// //     string <char> sta;
// //     string postfix="";
// //     for(int i=0;i<exp.length();i++){
// //         if(isopearator(exp[i])){
// //             while(sta.empty() && hashigherprecedence(sta.top(),exp[i])){
// //                 postfix.append(sta.top());sta.pop();
// //             }
// //             sta.push(exp[i]);
            
// //         }
// //         else if(isoperand(exp[i])){
// //             sta.push(exp[i]);
// //         }
// //         else if(exp[i]=='('){
// //             sta.push(exp[i]);
// //         }
// //         else if(exp[i]==')'){
// //             while(!sta.empty() && sta.top()!='('){
// //                 postfix.append(sta.top());sta.pop();
// //             }

// //             sta.pop();
// //         }
// //     }
// //     return postfix;
// // }

// // { Driver Code Starts
// // C++ implementation to convert infix expression to postfix
// #include<bits/stdc++.h>
// using namespace std;


//  // } Driver Code Ends



// // function to convert infix expression
// //to postfix expression

// int getit(char c){
//     if(c=='^') return 3;
//     else if(c=='/') return 2;
//     else if(c=='*') return 1;
//     else if(c=='+') return 0;
//     else if(c=='-') return 0;

//     return 0;
// }

// bool isopearator(char c){
//     if(c=='^') return 1;
//     else if(c=='/') return 1;
//     else if(c=='*') return 1;
//     else if(c=='+') return 1;
//     else if(c=='-') return 1;
//     else return 0;
    

// }

// bool isoperand(char c){
//     if(c>='1' && c<='9') return 1;
//     else return 0;

// }

// int hashigherprecedence(char op1,char op2){
//     int w1=getit(op1);
//     int w2=getit(op2);
//     if(w1>=w2) return 1;
//     else return 0;
// }
// string infixToPostfix(string exp)
// {
//     // Your code here
//     stack <char> sta;
//     string postfix="";
//     for(int i=0;i<exp.length();i++){
//         if(isopearator(exp[i])){
//             while(sta.empty() && hashigherprecedence(sta.top(),exp[i])){
//                 postfix.append(sta.top());sta.pop();
//             }
//             sta.push(exp[i]);
            
//         }
//         else if(isoperand(exp[i])){
//             sta.push(exp[i]);
//         }
//         else if(exp[i]=='('){
//             sta.push(exp[i]);
//         }
//         else if(exp[i]==')'){
//             while(!sta.empty() && sta.top()!='('){
//                 postfix.append(sta.top());sta.pop();
//             }

//             sta.pop();
//         }
//     }
//     return postfix;
// }




// // { Driver Code Starts.
// //Driver program to test above functions
// int main()
// {
//     int t;
//     cin>>t;
//     cin.ignore(INT_MAX, '\n');
//     while(t--)
//     {
//         string exp;
//         cin>>exp;
//         cout<<infixToPostfix(exp)<<endl;
//     }
//     return 0;
// }
//   // } Driver Code Ends


// // { Driver Code Starts.
// //Driver program to test above functions
int main()
{
    string str="";
    str.push_back('a');
    cout<<str;
    return 0;
}
  // } Driver Code Ends
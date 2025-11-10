#include <iostream>
#include <cmath>
#include <cctype>
#include<stack>
using namespace std;

int precedence(char c){
    if(c == '+' || c == '-'){
        return 1;
    }
    else if(c == '/' || c == '*'){
        return 2;
    }
    else{
        return 0;
    }
}

int solve(int v1,int v2,char optr){
    if(optr == '+'){
        return v1+v2;
    }
    else if(optr == '-'){
        return v1-v2;
    }
    else if(optr == '*'){
        return v1*v2;
    }
    else if(optr == '/'){
        return v1/v2;
    }
    else{
        return 0;
    }
}

int infixCalc(string str){
    stack<int> oprnds;
    stack<char> optrs;
    
    for(int i = 0;i<str.length();i++){
        char ch = str[i];
        
        if(ch == ' ')continue;
        if(ch == '(') optrs.push(ch);
        
        if(isdigit(ch)){
            oprnds.push(ch-'0');
        }
        else if(ch == ')'){
            while(!optrs.empty() && optrs.top() != '('){
                char oprtr = optrs.top();
                optrs.pop();
                
                int v2 = oprnds.top();
                oprnds.pop();
                int v1 = oprnds.top();
                oprnds.pop();
                int val = solve(v1,v2,oprtr);
                oprnds.push(val);
            }
            optrs.pop();
        }
        else if(ch == '+' || ch == '-' || ch == '*' || ch == '/'){
            while(!optrs.empty() && optrs.top() != '(' && precedence(ch) <= precedence(optrs.top())){
                char oprtr = optrs.top();
                optrs.pop();
                
                int v2 = oprnds.top();
                oprnds.pop();
                int v1 = oprnds.top();
                oprnds.pop();
                int val = solve(v1,v2,oprtr);
                oprnds.push(val);
            }
            optrs.push(ch);
        }
    }
    
    while(!optrs.empty()){
        char c = optrs.top();
        optrs.pop();
        
        int v2 = oprnds.top();
        oprnds.pop();
        int v1 = oprnds.top();
        oprnds.pop();
        
        int val = solve(v1,v2,c);
        oprnds.push(val);
    }
    
    return oprnds.top();
}

int main(){
    cout<<infixCalc("2+(5-3*6/2)");
    
}

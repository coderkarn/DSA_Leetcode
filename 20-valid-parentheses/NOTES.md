bool isValid(string s) {
stack <char> st;
char top;
for(int i=0;i<s.length();i++){
if(s[i]=='(' || s[i]=='{' || s[i]=='['){
st.push(s[i]);
}
else{
if(st.empty())
return false;
top=st.top();
st.pop();
if(top=='(' && s[i]!=')')
return false;
if(top=='{' && s[i]!='}')
return false;
if(top=='[' && s[i]!=']')
return false;
}
}
return st.empty();
}
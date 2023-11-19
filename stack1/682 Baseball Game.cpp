class Solution {
public:
   int calPoints(vector<string>& v) {
int a,b,sum=0;
stack<int>st;
for(string i:v){
    if (i=="C"){
        st.pop();
    } else if (i=="D"){
        st.push(st.top()*2);
    } 
    else if (i=="+"){
        a=st.top();
        st.pop();
        b=st.top();
        st.push(a);
        st.push(a+b);
    } else
        st.push(stoi(i));
}
    while (st.size()!=0){
        sum+=st.top();
        st.pop();
    }
    return sum;}
};

class Solution {
public:
    int calPoints(vector<string>& op) {
        stack<int>st;
        int ans=0;
        int val,val2;
        for(string i :op){
            if(i=="C") st.pop();
            else if (i=="D") st.push(st.top()*2);
            else if(i=="+"){
                val=st.top();
                st.pop();
                val2=st.top();
                st.push(val);
                st.push(val+val2);
            }
            else{
                st.push(stoi(i));
            }
        }
        while(st.size()!=0){
            ans+=st.top();
            st.pop();
        }
        return ans;
        
    }
};
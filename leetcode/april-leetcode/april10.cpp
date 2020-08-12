class MinStack {
public:
		/** initialize your data structure here. */
		stack<pair<int,int>>st;
		MinStack() {


		}

void push(int x) {
    
    if(!st.empty()){
        pair<int,int>a = st.top();
        st.push(make_pair(x, min(x,a.second)));
    } else {
        st.push(make_pair(x, min(x,x)));
    }
}

void pop() {
    st.pop();
}

int top() {
    return st.top().first;
}

int getMin() {
     return st.top().second;
}
};
stack s;
int min;

int getmin(){
    return min;
}    

void push(int x){
    if(s.empty()){
        min = x;
        s.push(x);
    }
    else if(x <= min){
        s.push(2*x-min);
        min = x;
    }
    else s.push(x);
}

int pop(){
    int t = s.top();
    if(t <= min){
        res = min;
        min = 2*min - t;
        return res;
    }
    else return t;
}

int peek(){
    int t = s.top();
    return (t<=min)?min:t;
}
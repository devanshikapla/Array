class RecentCounter {
public:
    queue < int > q;

    RecentCounter() {
        
    }
    
    int ping(int t) {
        int timer = t - 3000;
        int cnt = 0;
        q.push(t);
        while(!q.empty()){
            if(q.front() < timer){
                q.pop();
                
            }
            else{
                break;
            }
        }
        return q.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */

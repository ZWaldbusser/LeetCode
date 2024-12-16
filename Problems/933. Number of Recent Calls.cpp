class RecentCounter {
public:
    vector<int> pings;
    RecentCounter() {
    }
    
    int ping(int t) {
        pings.push_back(t);
        int min = max(0, t-3000);
        int retVal = 0;
        for(int i : pings){
            if(i > t) {
                return retVal;
            }
            if(i >= min) {
                ++retVal;
            }
        }
        return retVal;
    }
};
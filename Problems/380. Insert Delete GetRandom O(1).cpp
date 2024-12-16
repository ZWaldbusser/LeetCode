class RandomizedSet {
    unordered_map<int, int> m;
    vector<int> v;
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if (m.find(val) != m.end()) {
            return false;
        }
        m[val] = v.size();
        v.push_back(val);
        return true;
    }
    
    bool remove(int val) {
        if (m.find(val) == m.end()) {
            return false;
        }
        int end = v.back();
        m[end] = m[val];
        v[m[val]] = end; 
        v.pop_back(); 
        m.erase(val); 
        return true;
    }
    
    int getRandom() {
        return v[rand() % v.size()];

    }
};
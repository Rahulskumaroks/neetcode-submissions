class MyHashSet {
public:
    vector<int> hash;
    MyHashSet() {
        
    }
    
    void add(int key) {
        if(hash.size()==0){
                 hash.push_back(key);
        }
        if(key!=hash.back()){
            hash.push_back(key);
        }
    }
    
    void remove(int key) {
        erase(hash,key);
    }
    
    bool contains(int key) {
        for(int i=0;i<hash.size();i++){
            if(key==hash[i]){
                return true;
            }
        }
        return  false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
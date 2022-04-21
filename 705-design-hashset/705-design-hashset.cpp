class MyHashSet {
public:
  vector<bool>v;
    MyHashSet() {
       v= vector<bool>(100,false);
    }
    
    void add(int key) {
      if (key + 1 > v.size())
        {
            v.resize(key + 10);
        }
      v[key]=true;  
    }
    
    void remove(int key) {
      if (key + 1 > v.size())
        {
            v.resize(key + 10);
        }
       v[key]=false; 
    }
    
    bool contains(int key) {
      if (key + 1 > v.size())
        {
            v.resize(key + 10);
        }
        return v[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
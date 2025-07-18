// AlgoMonster for leetcode related any problems

// Question Link --> https://leetcode.com/problems/design-hashmap/description/

class MyHashMap {
public:
    vector<int> arr;
    MyHashMap() {
          arr.assign(1000001,-1);
    }
    
    void put(int key, int value) {
        arr[key]=value;
    }
    
    int get(int key) {
        return arr[key];
    }
    
    void remove(int key) {
        arr[key]=-1;    }
};



/*  JAVA CODE

class MyHashMap {
    int[] data;
    public MyHashMap() {
        data = new int[1000001];
        Arrays.fill(data, -1);
    }
    public void put(int key, int val) {
        data[key] = val;
    }
    public int get(int key) {
        return data[key];
    }
    public void remove(int key) {
        data[key] = -1;
    }
}


*/

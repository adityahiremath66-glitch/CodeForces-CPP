class LRUCache {
public:
    //Create a Node class : 
    class Node{
        public:
            int key,val;
            Node* prev;
            Node* next;
            
            Node(int k,int v){
                key = k;
                val = v;
                prev = next = NULL;
            }
    };
    //Initialize head and tail pointers
    Node* head = new Node(-1,-1);
    Node* tail = new Node(-1,-1);

    //Create a unordered map for constant time operations
    unordered_map<int,Node*> mp;

    //Create a global variable limit to be accessed around all the functions
    int limit;


    LRUCache(int cap) {
        limit = cap;
        head->next = tail;
        tail->prev = head;
    }

    void addNode(Node* newNode){
        Node* oldNext = head->next;
        head->next = newNode;
        oldNext->prev = newNode;
        newNode->next = oldNext;
        newNode->prev = head;
    }
    void delNode(Node* newNode){
        Node* oldPrev = newNode->prev;
        Node* oldNext = newNode->next;
        oldPrev->next = oldNext;
        oldNext->prev = oldPrev;
    }

    int get(int key) {
        if(mp.find(key) == mp.end()){
            return -1;
        }
        Node* ansNode = mp[key];
        int ans = mp[key]->val;

        delNode(ansNode);

        addNode(ansNode);

        return ans;
    }
    
    void put(int key, int val) {
        //If key is already there in the map : 
        if(mp.find(key) != mp.end()){
            delNode(mp[key]);
            mp.erase(key);
        }
        //If the Cache limit is reached !!
        if(mp.size() == limit){
            mp.erase(tail->prev->key);
            delNode(tail->prev);
        }
        //Create a new Node and add it, also store it in the map : 
        Node* newNode = new Node(key,val);
        addNode(newNode);
        mp[key] = newNode;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
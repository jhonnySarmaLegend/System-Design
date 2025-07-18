
// Link --> https://leetcode.com/problems/design-browser-history/description/  
// Doubly Linked List

class Node {
public:
    string val;
    Node *next;
    Node *back;
    Node(string v){
        val=v;
        next=NULL;
        back=NULL;
    }
};

class BrowserHistory {
public:
    Node*curr;
    BrowserHistory(string homepage) {
        curr= new Node(homepage);
    }
    
    void visit(string url) {
        Node*newnode= new Node(url);
        curr->next=newnode;
        newnode->back=curr;
        curr=newnode;
    }
    
    string back(int steps) {
        while(steps){
            if(curr->back){
                curr=curr->back;
            }
            else{
                break;
            }
            steps--;
        }
        return curr->val;
    }
    
    string forward(int steps) {
        while(steps){
            if(curr->next){
                curr=curr->next;
            }
            else{
                break;
            }
            steps--;
        }
        return curr->val;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */

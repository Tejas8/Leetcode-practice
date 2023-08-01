/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    int n=101;
   vector<Node*> vis;
    Solution(){
        vis=vector<Node*>(101,NULL);
    }
    Node* cloneGraph(Node* node) {
        if(!node) return NULL;
        Node* clone=new Node(node->val);
        vis[node->val]=clone;
        for(auto i:node->neighbors){
            if(!vis[i->val]){
                clone->neighbors.push_back(cloneGraph(i));
            }else{
                clone->neighbors.push_back(vis[i->val]);
            }
        }
        return clone;
    }
};
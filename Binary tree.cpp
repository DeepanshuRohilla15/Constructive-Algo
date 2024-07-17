#include <iostream>
#include <unordered_map>
#include <queue>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    
    Node(int item) {
        data = item;
        left = right = nullptr;
    }
};

class Solution {
public:
    Node* createTree(vector<int>& parent) {
        int n = parent.size();
        unordered_map<int, Node*> map;
        Node* root = nullptr;
        
        for (int i = 0; i < n; i++) {
            map[i] = new Node(i);
            if (parent[i] == -1) {
                root = map[i];
            }
        }
        
        for (int i = 0; i < n; i++) {
            if (parent[i] != -1) {
                Node* parentNode = map[parent[i]];
                Node* childNode = map[i];
                if (parentNode->left == nullptr) {
                    parentNode->left = childNode;
                } else {
                    parentNode->right = childNode;
                }
            }
        }
        
        return root;
    }
    
    // Helper function to do level order traversal
    void levelOrder(Node* root) {
        if (!root) return;
        queue<Node*> q;
        q.push(root);
        while (!q.empty()) {
            Node* current = q.front();
            q.pop();
            cout << current->data << " ";
            if (current->left) q.push(current->left);
            if (current->right) q.push(current->right);
        }
    }
};
/*
The structure of linked list is the following
struct Node
{
    string data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    bool compute(Node* head) {
        // Your code goes here
        string s = "";
        Node* temp = head;
        
        while(temp)
        {
            s += temp -> data;
            temp = temp -> next;
        }
        
        string rev = s;
        reverse(s.begin(), s.end());
        return rev == s;
    }
};

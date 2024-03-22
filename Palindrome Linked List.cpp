class Solution {
public:
    ListNode* reverseList(ListNode* head)
    {
        ListNode* forward = NULL;
        ListNode* prev = NULL;
        while(head != NULL)
        {
            forward = head -> next;
            head -> next = prev;
            prev = head;
            head = forward;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        if(head == NULL || head -> next == NULL)
        {
            return true;
        }
        ListNode* slow = head, *fast = head;
        while(fast -> next != NULL && fast -> next -> next != NULL)
        {
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        slow -> next = reverseList(slow -> next);
        slow = slow -> next;

        while(slow != NULL)
        {
            if(head -> val != slow -> val)
            {
                return false;
            }
            head = head -> next;
            slow = slow -> next;
        }
        return true;
    }
};

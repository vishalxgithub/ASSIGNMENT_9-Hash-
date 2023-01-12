class Solution {
public:

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> s; 
        ListNode* temp1 = headA;
        while(temp1 != NULL){
            s.insert(temp1);
            temp1 = temp1->next;
        }
        ListNode* temp2 = headB;
        while(temp2 != NULL){
            if(s.find(temp2) != s.end())
                return temp2;
            temp2 = temp2->next;
        }
        return NULL;
    }
};

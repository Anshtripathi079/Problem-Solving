class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int len = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            temp = temp->next;
            len++;
        } 
        int ans = (len/2);
        temp = head;
        int c = 0;
        while(ans){
            temp = temp->next;
            ans--;        
        }
        return temp;
    }
};

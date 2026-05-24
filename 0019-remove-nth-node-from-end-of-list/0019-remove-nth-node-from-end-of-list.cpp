/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* prevNode(ListNode* temp, int n){
        int cnt=1;
        while(temp!=NULL){
           if(cnt==n) return temp;
           cnt++;
           temp=temp->next;
        }
        return temp;
    } 
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int len=1;
        ListNode* tail = head;
        while(tail->next!=NULL){
        len++;
        tail=tail->next;
      }
        if(len==1) return NULL;
        ListNode* prev=prevNode(head,len-n);
        if(prev==NULL) {
            head=head->next;
        }
        else{
        prev->next = prev->next->next;
        } 
        return head;
    }

};
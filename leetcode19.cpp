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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
        ListNode *ans=head;
        ListNode *tmp=head;
        while(tmp!=NULL)
        {
            count++;
            tmp=tmp->next;
        }
        //if(count==1)
        //    return NULL;
        if(count==n||count==1)
        {
            head=head->next;
            return head;
        }
        for(int i=0;i<count-n-1;i++)
        {
            ans=ans->next;
        }
        
        ans->next=(ans->next)->next;
       
        return head;
    }
};

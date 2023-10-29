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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head -> next == NULL ){
            return head;
        }
        ListNode* odd = new ListNode(0);
        ListNode* oddHead = odd;
        ListNode* even = new ListNode(0);
        ListNode* evenHead = even;

        ListNode* ptr = head;
        int index = 1;
        while(ptr != NULL){
            if(index % 2 == 0){
                evenHead -> next = ptr;
                evenHead = evenHead -> next;
            }
            else{
                oddHead -> next = ptr;
                oddHead = oddHead -> next;
            }
            index++;
            ptr = ptr -> next;
        }

        evenHead-> next = NULL;
        oddHead  -> next = NULL;

        ListNode * temp = odd;
        odd = odd -> next;
        delete temp;
        ListNode * temp1 = even;
        even = even -> next;
        delete temp1;

        oddHead -> next = even;
        return odd;

    }
};

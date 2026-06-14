    #define Node ListNode 

    void reverse(ListNode* head, int times){
        Node* curr = head;
        Node* prev = NULL;
        while(times--){
            Node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
    } 

    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL){
            return head;
        }
        Node* left = head;
        Node* right;
        Node* res = NULL;
        Node* prevleft = NULL;
        int size = k;

        while(true){
            right = left;
            for(int i=0; i<size-1; i++){
                if(right==NULL){
                    break;
                }
                right = right->next;
            }

            if(right){
                Node* nextleft = right->next;
                reverse(left,size);
                if(prevleft){
                    prevleft->next = right;
                }
                prevleft = left;
                if(res==NULL){
                    res = right;
                }
                left = nextleft;
            }
            else{
                if(prevleft){
                    prevleft->next = left;
                }
                if(res==NULL){
                    res = left;
                }
                break;
            }
        }
        return res;
    }
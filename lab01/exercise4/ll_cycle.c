#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* TODO: Implement ll_has_cycle */
    if(!head||!head->next)
    return 0;
    struct node* fast=head;
    struct node* slow=head;
    while(fast){
    if(fast->next&&fast->next->next){
    fast=fast->next->next;
    }else return 0;
    slow=slow->next;
    if(slow==fast)
    return 1;
    }
    
}

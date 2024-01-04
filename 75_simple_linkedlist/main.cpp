#include <iostream>
#include "LinkedList.h"
using namespace std;
int main(){
    LinkedListNode* head = initLinkedList();
    insertNewNode(head,10);
    insertNewNode(head,30,"tail");
    insertNewNode(head,20);
    insertNewNode(head,70,"tail");
    printLinkedList(head);
    LinkedListNode* p_loc = search(head,10);
    cout << p_loc->NodeData<<endl;
    cout << p_loc->next->NodeData<<endl;
    freeLinkedList(head);
    return 0;
}

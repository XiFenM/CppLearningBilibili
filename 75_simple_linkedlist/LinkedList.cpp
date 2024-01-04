#include "LinkedList.h"
LinkedListNode* initLinkedList(){
    LinkedListNode* head = new LinkedListNode;
    if(head == nullptr){
        return head;
    }
    head->next= nullptr;
    return head;
}
void insertNewNode(LinkedListNode* head,int NodeData,std::string insertType){
    LinkedListNode* pnode = new LinkedListNode{NodeData,nullptr};
    if(insertType == "head"){
        pnode->next = head->next;
        head->next = pnode; 
    }
    else if (insertType == "tail"){
        while(head->next){
            head = head->next;
        }
        head->next = pnode;
    }
}
LinkedListNode* search(LinkedListNode* head,int NodeData){
    head = head -> next;
    while(head){
        if(head->NodeData == NodeData){
            return head;
        }
        head = head->next;
    }
    return head;
};
void printLinkedList(LinkedListNode* head){
    head = head -> next;
    while(head){
        std::cout << head->NodeData << ' ';
        head = head ->next;
    }
    std::cout << std::endl;
}
void freeLinkedList(LinkedListNode* head){
    LinkedListNode* tmp = nullptr;
    while(head){
        tmp = head;
        head = head->next;
        delete tmp;
    }
};
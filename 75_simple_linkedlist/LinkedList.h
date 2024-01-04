#pragma once
#include<cstring>
#include <iostream>
struct LinkedListNode{
    int NodeData;
    LinkedListNode* next;
};
LinkedListNode* initLinkedList();
void insertNewNode(LinkedListNode* head,int NodeData,std::string insertType = "head");
LinkedListNode* search(LinkedListNode* head,int NodeData);
void freeLinkedList(LinkedListNode* head);
void printLinkedList(LinkedListNode* head);
//
// Created by Omer on 07/06/2018.
//

#ifndef DATASTRUCTURES_HW2_MINHEAP_H
#define DATASTRUCTURES_HW2_MINHEAP_H

#include "AVLTree.h"

class MinHeap {

    struct Node {
        int data;
        int right;
        int left;
    };
    Node **HeapArr;
    int last,size;

    static void siftDown(int index, MinHeap *minHeap);
    static bool isMin(Node* node, MinHeap *minHeap);
    static void swap(Node* node, MinHeap *minHeap);
    static int getMin(Node *node, MinHeap *minHeap);
    static void expandArray(MinHeap *minHeap);
    static void decreaseArray(MinHeap *minHeap);
    //static int findNode(MinHeap *minHeap);
public:

    MinHeap(int n, int* array);

    MinHeap(const MinHeap& heap) = delete;

    MinHeap& operator=(const MinHeap& heap) = delete;

    void insert(int data);

    void decKey(int index, int new_data);

    int findMin();

    void delMin();

    /*//TODO: temp
    void printArr();*/

    ~MinHeap();
};

#endif //DATASTRUCTURES_HW2_MINHEAP_H
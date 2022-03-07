/*
Name: Kevin Harioka
Class: T/Th 7:30-8:45
Date: 3/6/22
Description: Implementation of max-heap for main.cpp
*/

#include "defns.h"
#include <cmath>

int leftChild(int i)
{
    int l = 2 * i;
    return l;
}

int rightChild(int i)
{
    int r = (2 * i) + 1;
    return r;
}

int parent(int i)
{
    int p = floor(i / 2);
    return p;
}

void maxHeapifyTotal( SOC heap[], int i, int n)
{
    int left = leftChild(i);
    int right = rightChild(i);
    int largest;

    if(left <= n && (heap[left].total > heap[right].total))
        largest = left;

    if(right <= n && (heap[right].total > heap[left].total))
        largest = right;

    if(largest != i)
    {
        SOC temp = heap[i];
        heap[i] = heap[largest];
        maxHeapifyTotal(heap, largest, n);
    }
}

void maxHeapifyFemale( SOC heap[], int i, int n)
{
    int left = leftChild(i);
    int right = rightChild(i);
    int largest;

    if(left <= n && (heap[left].female > heap[right].female))
        largest = left;

    if(right <= n && (heap[right].female > heap[left].female))
        largest = right;

    if(largest != i)
    {
        SOC temp = heap[i];
        heap[i] = heap[largest];
        maxHeapifyTotal(heap, largest, n);
    }
}

void maxHeapifyMale( SOC heap[], int i, int n)
{
    int left = leftChild(i);
    int right = rightChild(i);
    int largest;

    if(left <= n && (heap[left].male > heap[right].male))
        largest = left;

    if(right <= n && (heap[right].male > heap[left].male))
        largest = right;

    if(largest != i)
    {
        SOC temp = heap[i];
        heap[i] = heap[largest];
        maxHeapifyTotal(heap, largest, n);
    }
}

void buildMaxHeapTotal(SOC H[], int n)
{
    for(int i = floor(n / 2); i >= 1; i--)
    {
        maxHeapifyTotal(H, i, n);
    }
}

void buildMaxHeapFemale(SOC H[], int n)
{
    for(int i = floor(n / 2); i >= 1; i--)
    {
        maxHeapifyFemale(H, i, n);
    }
}

void buildMaxHeapMale(SOC H[], int n)
{
    for(int i = floor(n / 2); i >= 1; i--)
    {
        maxHeapifyMale(H, i, n);
    }
}

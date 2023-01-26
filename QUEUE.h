#pragma once
#include<iostream>

enum COMAMAND
{
	ENQUEUE = 1,
	DEQUEUE = 2,
	EXIT = 3
};

struct ELEMENT
{
	int value;
	ELEMENT* next;
};

struct QUEUELinkedList
{
	ELEMENT* head;
	ELEMENT* tail;
};

struct QUEUE
{
	int count;
	ELEMENT* front;
	ELEMENT* rear;
};

void UnderLine();

//단일연결리스트 사용
void Initialize(QUEUELinkedList& queue);
void ReleaseAll(QUEUELinkedList& queue);
ELEMENT* Enqueue(QUEUELinkedList& queue, int value);
bool Dequeue(QUEUELinkedList& queue);
void Print(QUEUELinkedList& queue);


//매번 큐의 크기를 탐색하는 일이 없도록 변수 사용
void Initialize(QUEUE& queue);
void ReleaseAll(QUEUE& queue);
void Enqueue(QUEUE& queue, int value);
bool Dequeue(QUEUE& queue);
void Print(QUEUE& queue);

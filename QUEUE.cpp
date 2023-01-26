#include"QUEUE.h"

void UnderLine()
{
	std::cout << "------------------------------------" << std::endl;
}


//단일연결리스트 사용
void Initialize(QUEUELinkedList& queue)
{
	queue.head = nullptr;
	queue.tail = nullptr;

}

void ReleaseAll(QUEUELinkedList& queue)
{
	ELEMENT* element = queue.head;

	while (element != nullptr)
	{
		ELEMENT* next = element->next;

		delete element;

		element = next;
	}

	Initialize(queue);
}

ELEMENT* Enqueue(QUEUELinkedList& queue, int value)
{
	ELEMENT* element = new ELEMENT{ value, nullptr };

	if (queue.tail == nullptr)
	{
		queue.head = element;
		queue.tail = element;
	}
	else
	{
		queue.tail->next = element;
		queue.tail = element;
	}

	return element;
}

bool Dequeue(QUEUELinkedList& queue)
{
	ELEMENT* element = queue.head;

	//큐가 존재하지 않을때
	if (element == nullptr)
	{
		std::cout << "QUEUE is EMPTY!!" << std::endl;
		return false;
	}
	//큐가 1개 일때
	else if (queue.head == queue.tail)
	{
		queue.head = queue.tail = nullptr;
	}
	
	//큐는 항상 맨 앞의 원소를 지운다
	queue.head = element->next;
	std::cout << " > DEQUEUE  " << element->value << std::endl;
	delete element;

	return true;
}

void Print(QUEUELinkedList& queue)
{
	ELEMENT* element = queue.head;

	while (element != nullptr)
	{
		std::cout << element->value << std::endl;
		element = element->next;
	}
}

//
void Initialize(QUEUE& queue)
{
	queue.count = 0;
	queue.front = nullptr;
	queue.rear = nullptr;
}

void ReleaseAll(QUEUE& queue)
{

	ELEMENT* element = queue.front;

	while (element != nullptr)
	{
		ELEMENT* next = element->next;

		delete element;

		element = next;
	}

	Initialize(queue);
}

void Enqueue(QUEUE& queue, int value)
{
	ELEMENT* element = new ELEMENT{ value, nullptr };

	if (queue.rear == nullptr && queue.front == nullptr)
	{
		queue.front = element;
		queue.rear = element;
	}
	else
	{
		queue.rear->next = element;
		queue.rear = element;
	}

	queue.count++;
}

bool Dequeue(QUEUE& queue)
{
	if (queue.count == 0)
	{
		std::cout << "QUEUE is EMPTY!!" << std::endl;
		return false;
	}

	ELEMENT* temp = queue.front;

	queue.front = queue.front->next;
	queue.count--;

	std::cout << "DEQUEUE : " << temp->value << std::endl;
	delete temp;

	return true;
}

void Print(QUEUE& queue)
{
	ELEMENT* element = queue.front;

	while (element != nullptr)
	{
		std::cout << element->value << std::endl;
		element = element->next;
	}
}

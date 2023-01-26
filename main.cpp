#include"QUEUE.h"

int main()
{
	int Command,value;
	QUEUE queue;
	QUEUELinkedList queueLinkedList;

	Initialize(queue);
	Initialize(queueLinkedList);

	while (true)
	{
		UnderLine();
		std::cout << "ENQUEUE : 1 DEQUEUE : 2 EXIT : 3" << std::endl;
		UnderLine();
		std::cin >> Command;

		switch (Command)
		{
			case ENQUEUE:
				std::cout << " > ENQUEUE " << std::endl;
				std::cout << "        > ";
				std::cin >> value;

				//Push(myStack, value);
				Enqueue(queueLinkedList, value);

				UnderLine();
				//Print(myStack);
				Print(queueLinkedList);
				UnderLine();
				break;
			case DEQUEUE:
				
				//Pop(myStack);
				Dequeue(queueLinkedList);

				UnderLine();
				//Print(myStack);
				Print(queueLinkedList);
				UnderLine();
				break;
			case EXIT:
				return 0;
				break;
			default:
				break;
		}
	}
}
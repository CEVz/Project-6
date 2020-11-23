#ifndef LINKED_QUEUE_
#define LINKED_QUEUE_

#include <memory>

#include "PriorityQueueInterface.h"
#include "Node.h"

/** @class LinkedQueue LinkedQueue.h "LinkedQueue.h"
 *
 *  Specification of a pointer-based ADT queue. */
template <typename ItemType>
class LinkedQueue : public QueueInterface<ItemType> {
private:
	using NodePtr = std::shared_ptr<Node<ItemType>>;

	NodePtr backPtr;
	NodePtr frontPtr;

public:
	LinkedQueue() = default;

	LinkedQueue(const LinkedQueue<ItemType>& aQueue);

	~LinkedQueue() override = default;

	bool isEmpty() const override;

	bool enqueue(const ItemType& newEntry) override;

	bool dequeue() override;

	ItemType peekFront() const override;
};

#include "LinkedQueue.cpp"

#endif
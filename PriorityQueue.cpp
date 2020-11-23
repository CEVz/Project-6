#include <memory>

template <typename ItemType>
PriorityQueue<ItemType>::PriorityQueue()
	: sListPtr(std::make_unique<LinkedSortedList<ItemType>>()) {
}

template <typename ItemType>
PriorityQueue<ItemType>::PriorityQueue(const PriorityQueue<ItemType>& pq)
	: sListPtr(std::make_unique<LinkedSortedList<ItemType>>(*(pq.sListPtr))) {
}

template <typename ItemType>
bool PriorityQueue<ItemType>::isEmpty() const {

	return sListPtr->isEmpty();
}

template <typename ItemType>
bool PriorityQueue<ItemType>::enqueue(const ItemType& newEntry) {

	return sListPtr->insertSorted(newEntry);
}

template <typename ItemType>
bool PriorityQueue<ItemType>::dequeue() {

	return sListPtr->remove(sListPtr->getLength());
}

template <typename ItemType>
ItemType PriorityQueue<ItemType>::peekFront() const {

	return sListPtr->getEntry(sListPtr->getLength());
}
#include <memory>

template <typename ItemType>
Node<ItemType>::Node(const ItemType& anItem,
    std::shared_ptr<Node<ItemType>> nextNodePtr)
    : item(anItem),
    next(nextNodePtr) {
}

#ifdef DTOR_TEST

#include <iostream>

template <typename ItemType>
Node<ItemType>::~Node() {

    std::cerr << "Node destructor called. on:"
        << "\n\titem: "
        << item
        << "\n\tnext: "
        << next
        << std::endl;
}

#endif

template <typename ItemType>
void Node<ItemType>::setItem(const ItemType& anItem) {

    item = anItem;
}

template <typename ItemType>
void Node<ItemType>::setNext(const std::shared_ptr<Node<ItemType>>& nextNodePtr) {

    next = nextNodePtr;
}

template <typename ItemType>
ItemType Node<ItemType>::getItem() const {

    return item;
}

template <typename ItemType>
auto Node<ItemType>::getNext() const {

    return next;
}

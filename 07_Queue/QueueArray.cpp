#include "QueueArray.hpp"
template <typename T>
QueueArray<T>::QueueArray() {
queue_size = 0;
front_idx = back_idx = 0;
}
template <typename T>
QueueArray<T>::enqueue(const T& val) {
if (!full()) {
data[back_idx] = val; // Set the last element with the value
back_idx = (back_idx + 1) % size;
queue_size++;
}
}
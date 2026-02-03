#ifndef QUEUEARRAY_H
#define QUEUEARRAY_H

template <typename T, int size = 100>
class QueueArray {
public:
QueueArray();
int size() const;
bool empty() const;
bool full() const;
void enqueue(const T& val);
const T& dequeue();
private:
T data[size]; // An array of 100 elements
int queue_size;
int front_idx;
int back_idx;
};
#endif
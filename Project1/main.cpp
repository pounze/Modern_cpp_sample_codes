#include "Sample.h"
#include "Vector.h"
#include "Deque.h"
#include "List.h"
#include "Set.h"
#include "Stack.h"
#include "Queue.h"
#include "HashMap.h"
#include "Multimap.h"
#include "Map.h"
#include "ConditionVariable.h"
#include "Thread.h"

int main() {

	// sample class

	Sample obj;

	obj.sum();

	// vector

	Vector vec;

	vec.run();

	// deque

	Deque deq;

	deq.run();

	// list

	List list;

	list.run();

	// Set

	Set set;

	set.run();

	// Stack

	Stack stack;

	stack.run();

	// Queue

	Queue queue;

	queue.run();

	// HashMap

	HashMap hashmap;

	hashmap.run();

	// Multimap

	Multimap mulmap;

	mulmap.run();

	// Map

	Map map;

	map.run();

	// condition variable

	CV cv;

	cv.run();

	//Thread

	Thread thread;

	thread.run();

	return 0;
}
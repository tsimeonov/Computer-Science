1. Abstract vs. Concrete Data Structures
   To understand data, we must distinguish between the idea and the execution.

- Abstract Data Structure (ADT): This is a theoretical model. it defines what the data can do (e.g., "I want to store a list of names and be able to add or remove them") without specifying how the computer's memory handles it.

Examples: Stack, Queue, List, Tree.

- Concrete Data Structure: This is the actual physical implementation. It defines how the data is stored in the computer's memory (RAM).

Examples: Arrays, Linked Lists.

Analogy: A "Vehicle" is an abstract concept (it gets you from point A to B). A "Bicycle" or a "Truck" are concrete implementations of that concept.

2. Arrays and Dynamic Arrays

Arrays (Static)
An array is a collection of elements stored in contiguous memory locations (right next to each other).

- Fixed Size: You must declare the size upfront (e.g., an array of 10 integers).

- Random Access: You can jump directly to any element using its index (e.g., arr[5]) because the computer knows exactly where that "slot" is in memory.

Dynamic Arrays
Unlike static arrays, dynamic arrays can grow. When a dynamic array runs out of space, the computer:

1. Allocates a new, larger chunk of memory (usually double the size).

2. Copies the old elements to the new space.

3. Deletes the old array.

4. Linked Lists
   A Linked List is a concrete data structure where elements are not stored together in memory. Instead, each element (called a Node) contains two things:

5. The Data: The value you want to store.

6. A Pointer (Reference): The memory address of the next node in the sequence.

Implementing ADTs

- Using an Array: To implement a "List" ADT with an array, you use the indices. It's fast for looking things up but slow for inserting items in the middle (because you have to shift all other items).

- Using a Linked List: To implement a "List" ADT here, you just change the pointers. It’s very fast for inserting or deleting items, but slow for looking things up because you have to start at the beginning (the "Head") and follow the chain.

4. The Linear Search Algorithm

Linear search is the most basic way to find an item in a collection. It works by checking every single element one by one until the match is found or the end of the list is reached.

How it works:

1. Start at the first element (index 0).
2. Compare the current element with the "target" value.
3. If they match, you're done! Return the index.
4. If they don't match, move to the next element.
5. Repeat until the target is found or you run out of elements.

Efficiency: In the "worst-case scenario" (the item is at the very end or not there at all), you have to check all $n$ items. We call this $O(n)$ complexity.

# DSA

Data structures and algorithims using c

## DATA STRUCTURE

Data structure defines the various ways in which data can be stored in memory and the various operations which can be performed on a data structure. 
There are several categories of data structures, these include

* Linear.
* Non-linear.



## LINEAR DATA STRUCTURES

These are data structures whos arrangement of data is in  a linear manner, and that are sequentially accessed.
examples of these include,

- Arrays
- Linked Lists
- Lists
- Queues
- Stack


### 1. ARRAYS

An array can be defined as  contiguous blocks of memory containing homogeneous data.
Arrays shine when theres need to store multiple elements of similar nature.
Given an array of size *n* the first element will always be at *index 0* while the last element will be at *n-1*.

Arrays have some drawbacks, these are
 
1. Cannot grow in size.
1. Deleteing at the front of an array is resource intensive.

But there are also some advantages using arrays, these include

- Accessing any element in the array is done in constant time *o(1)*
- 

 

### OPERATIONS

The basic Operations perfomed on arrays are

- Insertion
- Deletion
- Searching
- Update
- Display
- Trasverse

Implementation examples can be found [here](./programs/Array.c)
Lets talk about these operations 

### 1. INSERTION

The insertion operation means to add something to the array, we can add anywhere front,end or any given index.
Though remenber adding at the front or at an index close to the begining is resource intensive as all the elements after it need to be shifted to the right.

### Algorithm
### INSERTING AN ELEMENT AT A GIVEN POSITION

1. Declare two variables, SIZE and MAX SIZE. SIZE will be used to keep the index of the last item in the array,Max size is the size of the array.
1. Check if the given Positon is valid, i.e its not more than MAX SIZE.
1. If the position is less than max size, you should start a loop from the last element in the array. This loop is used to shift the items to the right. The way this loop works is 
	* The sarting index should be SIZE - 1 *since arrays always start from position 0*.
	* While iterating, shift the items to the right i.e *Array[i+1] = Array[i]* .
	* When the loops stop condition will be Position-1. Thus when u reach Position-1 you should terminate the loop.
	* After the loop has been terminated, insert the item at that position *Array[Position-1] = data*. Keep in mind how we count the postions ;).
	* Add SIZE by one.
 
Thats all.

### INSERTING AT THE END OF THE ARRAY

In this one, we just insert at the end, how?

remember the SIZE variable that keeps track of the last element in the array, we add it by one and insert the element at that position *ARRAY[SIZE] = data* 

now lets move on to the next operation. Deletion.

### 2. DELETION

To delete an item in the array.
there are two ways in which we can approach this.
	* Deleteing the last item in the array.
	* Deleting at a specified index.
let's start with the first one 

#### 1.Deleting at a specified index

first, we go to that position and move every element to its right to the left by one step

for this, we should check if theres enough space to move the elements,if not we return an underflow 

#### 2.Searching and deleting

For this, we have to search  the array for the element.
If the array is sorted, we can use searching algorithms.


### 3. SEARCHING.

Searching-> looking for the item in the array, for this we can use two methods
	
	* Trasversing the array
	* Using searching algorithms

Using searching algorithms only applies when the array is sorted.

#### 1. Trasversing

This method involves walking through the entire array, doing comparion on every element.
This inturn uses too much compute, this works best in unsorted arrays.

#### 2. Using searching algorithms

The catch is, the items need to be sorted
Looking for an element using the searching algorithms

  


## NON-LINEAR DATA STRUCTURES

These are data structures that do not arrange data in a linear manner, rather data is stored say in different locations in memory.
Examples include,

    * Trees.
    * Graphs.

### 4. UPDATE

This operation involves updating the element at the given index.


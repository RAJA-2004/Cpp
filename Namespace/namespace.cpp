#include <iostream>
using namespace std;

// self-made namespace
namespace name {
    int x = 10;
    int y = 20;
    void fun(){
        cout << "namespace function" << endl;
    }
    // namesapce within namespace
    namespace name1 {
        int z = 30;
        void fun2(){
            cout << "namespace within namespace" << endl;
        }
    }
}

// function with same name in different namesapce
namespace fact {
    void fun(){
        cout << "function with same name" << endl;
    }
}

// un-defined namespace
namespace {
    int a = 100;
    void fun3(){
        cout << "un-named namespace" << endl;
    }
}

int main(){

    cout << name::x << endl;
    name::fun();

    cout << name::name1::z << endl;
    name::name1::fun2();

    fact::fun();

    cout << a << endl;
    return 0;
}

[05/12, 10:37 am] Shubham Graphic: Algorithm: Binary Search Tree Operations

Data Structures:
  - Define Node structure with fields: data, left, right

Functions:

  Node(data):
    1. Allocate newNode with data, left, and right set to NULL.
    2. Return newNode.

  insertIntoBST(root, data):
    1. If data is -1, return NULL.
    2. If root is NULL, return Node(data).
    3. If root's data is less than data, call insertIntoBST(root->right, data).
    4. If root's data is greater than data, call insertIntoBST(root->left, data).
    5. Return root.

  takeInput(root):
    1. Read data.
    2. While data is not -1:
         - Call insertIntoBST(root, data).
         - Read data.

  searchInBST(root, k):
    1. If root is NULL, return -1.
    2. If root's data is equal to k, return 1.
    3. If root's data is less than k, call searchInBST(root->right, k).
    4. If root's data is greater than k, call searchInBST(root->left, k).

  Height(root):
    1. If root is NULL, return 0.
    2. Calculate leftHeight = Height(root->left).
    3. Calculate rightHeight = Height(root->right).
    4. Return maximum of leftHeight and rightHeight plus 1.

  leaf_nodes(root):
    1. If root is NULL, return 0.
    2. If root has no left and right, return 1.
    3. Recursively call leaf_nodes(root->left) + leaf_nodes(root->right).

  minVal(root):
    1. Set temp to root.
    2. While temp's left is not NULL, update temp to temp's left.
    3. Return temp.

  deleteNode(root, val):
    1. If root is NULL, return root.
    2. If root's data is equal to val:
         - If root has no left and right, free root and return NULL.
         - If root has left but no right, update temp to root's left, free root, and return temp.
         - If root has right but no left, update temp to root's right, free root, and return temp.
         - If root has both left and right, find minimum value in root's right subtree, set root's data to minVal, and recursively call deleteNode on root's right.
    3. If root's data is less than val, recursively call deleteNode on root's left.
    4. If root's data is greater than val, recursively call deleteNode on root's right.
    5. Return root.

  kthLargest(root, k):
    1. Initialize count and result to 0.
    2. Call helper(root, count, k, result).
    3. Return result.

  helper(root, count, k, result):
    1. If root is NULL or count is greater than or equal to k, return.
    2. Call helper on root's right with count, k, and result.
    3. Increment count.
    4. If count is equal to k, set result to root's data and return.
    5. Call helper on root's left with count, k, and result.

  TotalNodes(root):
    1. If root is NULL, return 0.
    2. Calculate leftNodes = TotalNodes(root->left).
    3. Calculate rightNodes = TotalNodes(root->right).
    4. Return leftNodes + rightNodes + 1.

  inordertraversal(root):
    1. If root is NULL, return.
    2. Recursively call inordertraversal on root's left.
    3. Print root's data.
    4. Recursively call inordertraversal on root's right.

Main Program:

  1. Set root to NULL, flag to 1, and x to 0.
  2. Repeat until flag is false:
      a. Read user choice and store in x.
      b. Switch on x:
          - Case 0: Set flag to false.
          - Case 1: Call takeInput(&root).
          - Case 2: Read val, call searchInBST(root, val), and print result.
          - Case 3: Read val, call deleteNode(root, val), and update root.
          - Case 4: Call leaf_nodes(root) and print result.
          - Case 5: Call Height(root) and print result.
          - Case 6: Read k, call kthLargest(root, k), and print result.
          - Case 7: Call TotalNodes(root->right) and print result.
          - Case 8: Call inordertraversal(root).
      c. End switch.
  3. End loop.

  4. Return 0.
[05/12, 10:37 am] Shubham Graphic: Algorithm: Breadth-First Search (BFS)

Data Structures:
  - Structure VertexNode:
      * int data
      * VertexNode* next

  - Structure VertexQueue:
      * int front, rear
      * int capacity
      * int* array

  - Structure Graph:
      * int vertices
      * VertexNode** adjacencyList

Functions:

  createVertexNode(data):
    1. Allocate memory for a new VertexNode.
    2. Set data to the provided data.
    3. Set next to NULL.
    4. Return the new VertexNode.

  createVertexQueue(capacity):
    1. Allocate memory for a new VertexQueue.
    2. Set front and rear to -1.
    3. Allocate memory for the array of size capacity.
    4. Return the new VertexQueue.

  isVertexQueueEmpty(queue):
    1. Return true if front is -1, else return false.

  isVertexQueueFull(queue):
    1. Return true if (rear + 1) % capacity is equal to front, else return false.

  enqueueVertex(queue, item):
    1. If isVertexQueueFull(queue), return.
    2. If isVertexQueueEmpty(queue), set front to 0.
    3. Increment rear and set array[rear] to item.

  dequeueVertex(queue):
    1. If isVertexQueueEmpty(queue), return -1.
    2. Set item to array[front].
    3. If front is equal to rear, set front and rear to -1.
       Otherwise, increment front.
    4. Return item.

  createGraph(vertices):
    1. Allocate memory for a new Graph.
    2. Set vertices to the provided vertices.
    3. Allocate memory for the adjacencyList of size vertices.
    4. Initialize each element of adjacencyList to NULL.
    5. Return the new Graph.

  addEdge(graph, src, dest):
    1. Create a new VertexNode with dest and add it to the adjacencyList at src.
    2. Create a new VertexNode with src and add it to the adjacencyList at dest.

  bfs(graph, startVertex):
    1. Create a VertexQueue.
    2. Create an array 'visited' of size MAX_VERTICES, initialized to 0.
    3. Set visited[startVertex] to 1.
    4. Print "BFS traversal starting from vertex startVertex: ".
    5. Enqueue startVertex to the queue.
    6. While the queue is not empty:
        a. Dequeue a vertex from the queue and print it.
        b. For each adjacent vertex not visited, mark it as visited and enqueue it.

Main Program:

  1. Read the number of vertices 'vertices'.
  2. Create a graph using createGraph(vertices).
  3. Read the number of edges 'edges'.
  4. For each edge:
      a. Read source 'src' and destination 'dest'.
      b. Add the edge using addEdge(graph, src, dest).
  5. Read the starting vertex 'startVertex'.
  6. Call bfs(graph, startVertex).
[05/12, 10:37 am] Shubham Graphic: Algorithm: Quick Sort for Character Array

Data Structures:
  - Array 'arr' of characters

Functions:

  partition(arr, low, high):
    1. Set pivot as arr[high].
    2. Initialize variable i as low - 1.
    3. Iterate j over the range from low to high - 1:
        a. If arr[j] is less than pivot:
            - Increment i.
            - Swap arr[i] with arr[j].
    4. Swap arr[i + 1] with arr[high].
    5. Return i + 1.

  quickSort(arr, low, high):
    1. If low is less than high:
        a. Call partition(arr, low, high) and store the result in pi.
        b. Recursively call quickSort(arr, low, pi - 1).
        c. Recursively call quickSort(arr, pi + 1, high).

Main Program:

  1. Read the number of characters 'n'.
  2. Allocate an array 'arr' of characters with size 'n'.
  3. Read 'n' characters into the array.
  4. Call quickSort(arr, 0, n - 1).
  5. Print the sorted sequence of characters.
[05/12, 10:37 am] Shubham Graphic: Algorithm: Queue Operations for Products

Data Structures:
  - Define a structure ProductNode with fields: productId, productName, productGrade, totalSale, next

Functions:
  
  Function Insert(front, rear)
    Input: front (pointer to the front of the queue), rear (pointer to the rear of the queue)
    Output: None

    1. Allocate memory for a new product node (temp).
    2. Read product details (productId, productName, productGrade, totalSale) from the user.
    3. Set temp->next to NULL.
    4. If front is NULL:
        - Set front and rear to temp.
    5. Else:
        - Set rear->next to temp.
        - Update rear to temp.

  Function DeleteProduct(front, rear)
    Input: front (pointer to the front of the queue), rear (pointer to the rear of the queue)
    Output: None

    1. If front is NULL:
        - Print "Underflow."
    2. Else if front is equal to rear:
        - Free the memory allocated for front.
        - Set front and rear to NULL.
    3. Else:
        - Set temp to front->next.
        - Free the memory allocated for front.
        - Set front to temp.

  Function DisplayProducts(front, rear)
    Input: front (pointer to the front of the queue), rear (pointer to the rear of the queue)
    Output: None

    1. If front is NULL:
        - Print "No values to print."
    2. Else:
        - Set temp to front.
        - While temp is not equal to rear:
            - Print product details (temp->productId, temp->productName, temp->totalSale, temp->productGrade).
            - Set temp to temp->next.
        - Print product details of the last node (temp->productId, temp->productName, temp->totalSale, temp->productGrade).

Main Program:

  1. Initialize front and rear pointers for the queue.
  2. Initialize flag to 1.
  3. While flag is not equal to 0:
      - Print menu options for the user.
      - Read user's choice.
      - Switch on the user's choice:
          - Case 1: Call Insert function with parameters (&front, &rear).
          - Case 2: Call DeleteProduct function with parameters (&front, &rear).
          - Case 3: Call DisplayProducts function with parameters (front, rear).
          - Case 4: Set flag to 0 to exit the loop.
          - Default: Print "Invalid choice."
[05/12, 10:37 am] Shubham Graphic: Algorithm: Single Linked List Operations

Data Structures:
  - Define a structure 'node' with fields: info, next

Functions:

  Function insert(head, rear, v)
    Input: head (pointer to the head of the list), rear (pointer to the rear of the list), v (value to insert)
    Output: None

    1. Allocate memory for a new node (temp).
    2. Set temp->info to v.
    3. Set temp->next to NULL.
    4. If head is NULL:
        - Set head and rear to temp.
    5. Else:
        - Set rear->next to temp.
        - Update rear to temp.

  Function display(head)
    Input: head (pointer to the head of the list)
    Output: None

    1. Set temp to head.
    2. If temp is NULL:
        - Print "Nothing to display."
    3. While temp is not NULL:
        - Print temp->info.
        - Update temp to temp->next.

  Function reArr(front)
    Input: front (pointer to the front of the list)
    Output: None

    1. If front is NULL or front->next is NULL:
        - Return.
    2. Set head to front.
    3. Set temp1 to NULL.
    4. While front is not NULL and front->next is not NULL and front->next->next is not NULL:
        - Set rear1 to head.
        - While rear1->next->next is not NULL and rear1->next is not NULL:
            - Update rear1 to rear1->next.
        - Set temp1 to front->next.
        - Set front->next to rear1->next.
        - Set rear1->next->next to temp1.
        - Set rear1->next to NULL.
        - Update front to temp1.

  Function delete(head, x)
    Input: head (pointer to the head of the list), x (value to be deleted)
    Output: None

    1. If head is NULL:
        - Print "Underflow."
    2. Set temp to head.
    3. Update head to head->next.
    4. Set temp->next to NULL.
    5. Set x to temp->info.

Main Program:

  1. Set List1 and rear1 to NULL.
  2. Set a_siz to 0.
  3. Set flag to 1.
  4. While flag is true:
      - Print menu options for the user.
      - Read user's choice.
      - Switch on the user's choice:
          - Case 0: Set flag to false to exit the loop.
          - Case 1:
            - Free memory of List1.
            - Read the size of the list (a_siz).
            - Read values and insert them into List1 using insert function.
          - Case 2: Call display function with List1 as the argument.
          - Case 3: Call reArr function with List1 as the argument, then call display function with List1 as the argument.
[05/12, 10:37 am] Shubham Graphic: Algorithm: Quick Sort for Character Array

Data Structures:
  - Array 'arr' of characters

Functions:

  partition(arr, low, high):
    1. Set pivot as arr[high].
    2. Initialize variable i as low - 1.
    3. Iterate j over the range from low to high - 1:
        a. If arr[j] is less than pivot:
            - Increment i.
            - Swap arr[i] with arr[j].
    4. Swap arr[i + 1] with arr[high].
    5. Return i + 1.

  quickSort(arr, low, high):
    1. If low is less than high:
        a. Call partition(arr, low, high) and store the result in pi.
        b. Recursively call quickSort(arr, low, pi - 1).
        c. Recursively call quickSort(arr, pi + 1, high).

Main Program:

  1. Read the number of characters 'n'.
  2. Allocate an array 'arr' of characters with size 'n'.
  3. Read 'n' characters into the array.
  4. Call quickSort(arr, 0, n - 1).
  5. Print the sorted sequence of characters.
[05/12, 10:37 am] Shubham Graphic: Algorithm: Split Linked List into Positive and Negative Lists

Data Structures:
  - Define Node structure with fields: data, next

Functions:

  createNode(data):
    1. Allocate newNode with data.
    2. Return newNode.

  append(headRef, data):
    1. Create new node with data.
    2. If headRef is NULL, set it to new node.
    3. Else, traverse to end and set last node's next to new node.

  displayList(head):
    1. If head is NULL, print "List is empty."
    2. While head is not NULL, print head->data.

  splitList(originalHead, positiveRef, negativeRef):
    1. Set positiveHead and negativeHead to NULL.
    2. While originalHead is not NULL:
        - Append data to positive or negative list.
    3. Set positiveRef and negativeRef to respective heads.

Main Program:

  1. Set originalHead, positiveList, negativeList to NULL.
  2. Repeat until flag is false:
      a. Read user choice.
      b. Switch on choice:
          - Case 0: Set flag to false.
          - Case 1: Read elements and append to originalHead.
          - Case 2: Split original list into positive and negative lists.
          - Case 3: Display positiveList.
          - Case 4: Display negativeList.
          - Default: Print "Invalid choice."

  3. Return 0.
[05/12, 10:37 am] Shubham Graphic: Algorithm: Subtract Linked Lists

Data Structures:
  - Define a structure 'Node' with fields: info, next

Functions:

  Function insert(head, rear, v)
    Input: head (pointer to the head of the list), rear (pointer to the rear of the list), v (value to insert)
    Output: None

    1. Allocate memory for a new node (temp).
    2. Set temp->info to v.
    3. Set temp->next to NULL.
    4. If head is NULL:
        - Set head to temp.
        - Set rear to temp.
        - Return.
    5. Set rear->next to temp.
    6. Set rear to temp.

  Function display(head)
    Input: head (pointer to the head of the list)
    Output: None

    1. If head is NULL:
        - Print "Nothing to display."
        - Return.
    2. While head is not NULL:
        - Print head->info.
        - Update head to head->next.
    3. Print a newline.

  Function subtractLists(A, B)
    Input: A (pointer to the head of List1), B (pointer to the head of List2)
    Output: diff (subtracted value)

    1. Set num1 to 0 and num2 to 0.
    2. While A is not NULL:
        - Update num1 to (num1 * 10) + A->info.
        - Move A to A->next.
    3. While B is not NULL:
        - Update num2 to (num2 * 10) + B->info.
        - Move B to B->next.
    4. Print num1 and num2.
    5. If num1 >= num2:
        - Set diff to (num1 - num2).
    6. Else:
        - Set diff to (num2 - num1).
    7. Return diff.

  Function deleteNode(head, x)
    Input: head (pointer to the head of the list), x (output parameter to store the deleted value)
    Output: None

    1. If head is NULL:
        - Print "Underflow."
        - Return.
    2. Set temp to head.
    3. Set head to head->next.
    4. Set temp->next to NULL.
    5. Update x to temp->info.

Main Program:

  1. Set List1, List2, rear1, rear2 to NULL.
  2. Set a_siz, b_siz, x, and flag to 0.
  3. Repeat the following until flag is false:
      a. Print menu options for the user.
      b. Read user's choice.
      c. Switch on the user's choice:
          - Case 0:
              - Set flag to false to exit the loop.
          - Case 1:
              - Read elements and insert them into List1 using insert function.
          - Case 2:
              - Read elements and insert them into List2 using insert function.
          - Case 3:
              - Call display function with List1 as the argument.
          - Case 4:
              - Call display function with List2 as the argument.
          - Case 5:
              - Call subtractLists function with List1 and List2 as arguments and print the result.
          - Default:
              - Print "Invalid choice. Please enter a valid option."

  4. Return 0.
[05/12, 10:37 am] Shubham Graphic: Algorithm: Merge Linked Lists Alternately

Data Structures:
  - Define a structure 'ListNode' with fields: value, next

Functions:

  Function insert(head, val)
    Input: head (pointer to the head of the list), val (value to insert)
    Output: None

    1. Allocate memory for a new node (temp).
    2. Set temp->value to val.
    3. Set temp->next to head.
    4. Update head to temp.

  Function display(head)
    Input: head (pointer to the head of the list)
    Output: None

    1. Set temp to head.
    2. If temp is NULL:
        - Print "Nothing to display."
    3. While temp is not NULL:
        - Print temp->value.
        - Update temp to temp->next.

  Function mergeLists(listA, listB)
    Input: listA (pointer to the head of the first list), listB (pointer to the head of the second list)
    Output: mergedList (pointer to the head of the merged list)

    1. Set mergedList to NULL.
    2. While listA is not NULL and listB is not NULL:
        - Call insert with mergedList and listA->value.
        - Update listA to listA->next.
        - Call insert with mergedList and listB->value.
        - Update listB to listB->next.
    3. While listA is not NULL:
        - Call insert with mergedList and listA->value.
        - Update listA to listA->next.
    4. While listB is not NULL:
        - Call insert with mergedList and listB->value.
        - Update listB to listB->next.
    5. Return mergedList.

  Function deleteNode(head, val)
    Input: head (pointer to the head of the list), val (output parameter for the deleted value)
    Output: None

    1. If head is NULL:
        - Print "Underflow."
    2. Set temp to head.
    3. Update head to head->next.
    4. Set temp->next to NULL.
    5. Set val to temp->value.

Main Program:

  1. Set listA and listB to NULL.
  2. Set sizeA and sizeB to 0.
  3. Set flag to 1.
  4. While flag is true:
      - Print menu options for the user.
      - Read user's choice.
      - Switch on the user's choice:
          - Case 0: Set flag to false to exit the loop.
          - Case 1:
            - Free memory of listA.
            - Read the size of the list (sizeA).
            - Read values and insert them into listA using insert function.
          - Case 2:
            - Free memory of listB.
            - Read the size of the list (sizeB).
            - Read values and insert them into listB using insert function.
          - Case 3: Call display function with listA as the argument.
          - Case 4: Call display function with listB as the argument.
          - Case 5:
            - Call mergeLists function with listA and listB as arguments.
            - Call display function with the merged list as the argument.
[05/12, 10:37 am] Shubham Graphic: Algorithm: Partition Linked List

Data Structures:
  - Define a structure 'Node' with fields: data, next

Functions:

  Function createNode(data)
    Input: data (value for the new node)
    Output: newNode (pointer to the new node)

    1. Allocate memory for a new node (newNode).
    2. Set newNode->data to data.
    3. Set newNode->next to NULL.
    4. Return newNode.

  Function append(headRef, data)
    Input: headRef (pointer to the head of the list), data (value to insert)
    Output: None

    1. Call createNode with data as the argument to create a new node (newNode).
    2. If headRef is NULL:
        - Set headRef to newNode.
        - Return.
    3. Set temp to headRef.
    4. While temp->next is not NULL:
        - Update temp to temp->next.
    5. Set temp->next to newNode.

  Function displayList(head)
    Input: head (pointer to the head of the list)
    Output: None

    1. If head is NULL:
        - Print "List is empty."
        - Return.
    2. While head is not NULL:
        - Print head->data.
        - Update head to head->next.
    3. Print a newline.

  Function partitionList(head, partitionValue)
    Input: head (pointer to the head of the list), partitionValue (value for partitioning)
    Output: newHead (pointer to the head of the partitioned list)

    1. Set lessThanHead, lessThanTail, greaterThanHead, and greaterThanTail to NULL.
    2. While head is not NULL:
        - If head->data < partitionValue, append head to lessThanHead.
        - Else, append head to greaterThanHead.
        - Update head to head->next.
    3. If lessThanTail is not NULL:
        - Set lessThanTail->next to NULL.
    4. If greaterThanTail is not NULL:
        - Set greaterThanTail->next to NULL.
    5. If lessThanHead is NULL:
        - Return greaterThanHead.
    6. Set lessThanTail->next to greaterThanHead and return lessThanHead.

Main Program:

  1. Set choice, data, partitionValue, and flag to 0.
  2. Set head to NULL.
  3. Repeat the following until flag is false:
      a. Print menu options for the user.
      b. Read user's choice.
      c. Switch on the user's choice:
          - Case 0:
              - Set flag to false to exit the loop.
          - Case 1:
              - Read elements and append them to the linked list using append function.
          - Case 2:
              - Read the partition value and call partitionList function with head and partitionValue.
          - Case 3:
              - Call displayList function with head as the argument.
          - Default:
              - Print "Invalid choice. Please enter a valid option."

  4.  hi 0.

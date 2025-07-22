// ©️ Soumyadeep Kundu [2305820]
// Write a menu driven program to implement Deques (both Input-restricted and Output-restricted) and perform operations such as Enqueue, Dequeue, Peek, IsEmpty, IsFull using static array.

#include <stdio.h>
#define size 5

int front = -1, rear = -1;
int queue[size];

int isEmpty()
{
  if (front == -1 && rear == -1)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int isFull()
{
  if ((rear + 1) % size == front)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

void insertAtRight(int value)
{
  if (isEmpty() == 1)
  {
    front = 0;
    rear = 0;
  }
  else if (isFull() == 1)
  {
    printf("Queue is Full.\n");
    return;
  }
  else
  {
    rear = (rear + 1) % size;
  }
  queue[rear] = value;
}

void insertAtLeft(int value)
{
  if (isEmpty() == 1)
  {
    front = 0;
    rear = 0;
  }
  else if (isFull() == 1)
  {
    printf("Queue is Full.\n");
    return;
  }
  else
  {
    front = (front - 1 + size) % size;
  }
  queue[front] = value;
}

int deleteFromLeft()
{
  if (isEmpty() == 1)
  {
    printf("Queue is Empty.\n");
    return -1;
  }
  int value = queue[front];
  if (front == rear)
  {
    front = -1;
    rear = -1;
  }
  else
  {
    front = (front + 1) % size;
  }
  return value;
}

int deleteFromRight()
{
  if (isEmpty() == 1)
  {
    printf("Queue is Empty.\n");
    return -1;
  }
  int value = queue[rear];
  if (front == rear)
  {
    front = -1;
    rear = -1;
  }
  else
  {
    rear = (rear - 1 + size) % size;
  }
  return value;
}

void peek()
{
  if (isEmpty() == 1)
  {
    printf("Queue is Empty.\n");
    return;
  }
  printf("Front: %d\nRear: %d\n", queue[front], queue[rear]);
}

void print()
{
  if (front == -1 && rear == -1)
  {
    printf("Queue is Empty.\n");
    return;
  }
  if (front <= rear)
  {
    for (int i = front; i <= rear; i++)
    {
      printf("%d ", queue[i]);
    }
  }
  else
  {
    for (int i = front; i <= rear + size; i++)
    {
      printf("%d ", queue[i % size]);
    }
  }
  printf("\n");
}

void main()
{
  int choice;
  printf("Main Menu:\n1. Insert at Right\n2. Insert at Left\n3. Delete from Right\n4. Delete from Left\n5. IsEmpty\n6. IsFull\n7. Peek\n8. Display\n9. Exit\n");
  while (choice != 9)
  {
    printf("Enter your choice: ");
    scanf("%d", &choice);
    int value;
    switch (choice)
    {
    case 1:
      printf("Enter the value to be enqueued: ");
      scanf("%d", &value);
      insertAtRight(value);
      break;
    case 2:
      printf("Enter the value to be enqueued: ");
      scanf("%d", &value);
      insertAtLeft(value);
      break;
    case 3:
      printf("%d deleted from the Dequeue.\n", deleteFromRight());
      break;
    case 4:
      printf("%d deleted from the Dequeue.\n", deleteFromLeft());
      break;
    case 5:
      isEmpty() == 1 ? printf("Queue is Empty.\n") : printf("Queue is not Empty.\n");
      break;
    case 6:
      isFull() == 1 ? printf("Queue is Full.\n") : printf("Queue is not Full.\n");
      break;
    case 7:
      peek();
      break;
    case 8:
      printf("Deque: ");
      print();
      break;
    case 9:
      break;
    default:
      printf("Invalid Choice.\n");
    }
  }
}
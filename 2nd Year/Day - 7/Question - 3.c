// ©️ Soumyadeep Kundu [2305820]
// Write a menu driven program to implement circular queue operations such as Enqueue, Dequeue, Traverse, IsEmpty, IsFull using array.

#include <stdio.h>

int front = -1, rear = -1;

void enqueue(int value, int *queue, int size)
{
  if (rear == -1 && front == -1)
  {
    front = 0;
    rear = 0;
  }
  else if ((rear + 1) % size == front)
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

int dequeue(int *queue, int size)
{
  if (front == -1 && rear == -1)
  {
    printf("Queue is Empty.\n");
    return -1;
  }
  else if (front == rear)
  {
    int value = queue[front];
    front = -1;
    rear = -1;
    return value;
  }
  else
  {
    int value = queue[front];
    front = (front + 1) % size;
    return value;
  }
}

void print(int *queue, int size)
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

void isEmpty()
{
  if (front == -1 && rear == -1)
  {
    printf("Queue is Empty.\n");
  }
  else
  {
    printf("Queue is not Empty.\n");
  }
}

void isFull(int size)
{
  if ((rear + 1) % size == front)
  {
    printf("Queue is Full.\n");
  }
  else
  {
    printf("Queue is not Full.\n");
  }
}

void main()
{
  int choice, size;
  printf("Enter the size of the queue: ");
  scanf("%d", &size);
  int queue[size];
  printf("Main Menu:\n1. Enqueue\n2. Dequeue\n3. IsEmpty\n4. IsFull\n5. Traverse\n6. Exit\n");
  while (choice != 6)
  {
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
      printf("Enter the value to be enqueued: ");
      int value;
      scanf("%d", &value);
      enqueue(value, queue, size);
      break;
    case 2:
      printf("%d deleted from the Queue.\n", dequeue(queue, size));
      break;
    case 3:
      isEmpty();
      break;
    case 4:
      isFull(size);
      break;
    case 5:
      printf("Queue: ");
      print(queue, size);
      break;
    case 6:
      break;
    default:
      printf("Invalid Choice.\n");
    }
  }
}
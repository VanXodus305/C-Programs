// ©️ Soumyadeep Kundu [2305820]
// Write a menu driven program to create a linear queue using array and perform Enqueue, Dequeue, Traverse, IsEmpty, IsFull operations.
// 1. Enqueue
// 2. Dequeue
// 3. IsEmpty
// 4. IsFull
// 5. Traverse
// 6. Exit

#include <stdio.h>

int front = -1, rear = -1;
int queue[100];

void enqueue(int value)
{
  if (rear == -1 && front == -1)
  {
    front = 0;
    rear = 0;
  }
  else if (rear == 100 - 1)
  {
    printf("Queue is Full.\n");
    return;
  }
  else
  {
    rear++;
  }
  queue[rear] = value;
}

int dequeue()
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
    return queue[front++];
  }
}

void print()
{
  if (front == -1 && rear == -1)
  {
    printf("Queue is Empty.\n");
    return;
  }
  for (int i = front; i <= rear; i++)
  {
    printf("%d ", queue[i]);
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

void isFull()
{
  if (rear == 100 - 1)
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
  int choice;
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
      enqueue(value);
      break;
    case 2:
      printf("%d deleted from the Queue.\n", dequeue());
      break;
    case 3:
      isEmpty();
      break;
    case 4:
      isFull();
      break;
    case 5:
      printf("Queue: ");
      print();
      break;
    case 6:
      break;
    default:
      printf("Invalid Choice.\n");
    }
  }
}
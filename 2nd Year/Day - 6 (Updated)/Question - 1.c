// ©️ Soumyadeep Kundu [2305820]
// WAP using stack for a given string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid. An input string is valid if:
//
// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Every close bracket has a corresponding open bracket of the same type

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct Node
{
  char data;
  struct Node *next;
};

struct Node *top = NULL;
struct Node *temp;

void push(char value)
{
  temp = (struct Node *)malloc(sizeof(struct Node));
  temp->data = value;
  temp->next = top;
  top = temp;
}

char pop()
{
  if (top == NULL)
  {
    printf("Stack is empty.\n");
    return '\0';
  }
  temp = top;
  char ch = temp->data;
  top = top->next;
  free(temp);
  return ch;
}

void checkBalanced(char *str)
{
  for (int i = 0; i < strlen(str); i++)
  {
    if (str[i] == '(' || str[i] == '[' || str[i] == '{')
    {
      push(str[i]);
    }
    else if (str[i] == ')' || str[i] == ']' || str[i] == '}')
    {
      if (top == NULL || (str[i] == ')' && pop() != '(') || (str[i] == ']' && pop() != '[') || (str[i] == '}' && pop() != '{'))
      {
        printf("Not a Valid String.\n");
        return;
      }
    }
  }
  if (top == NULL)
  {
    printf("Valid String.\n");
  }
  else
  {
    printf("Not a Valid String.\n");
  }
}

int main()
{
  printf("Enter an expression: ");
  char str[100];
  scanf("%[^\n]s", str);
  checkBalanced(str);
  return 0;
}
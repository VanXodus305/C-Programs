  #include <stdio.h>
  int main()
  {
    int n, fact = 1;
    printf("Enter the value of 'n': ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
      fact = fact * i;
    }
    printf("The value of 1/%d! = %f", n, (float)1 / fact);
    return 0;
}
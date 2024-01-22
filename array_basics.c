#include <stdio.h>
int main() {
    int n, i;
    float num[100], sum = 0.0, avg;

    printf("Enter the numbers of elements: ");
    scanf("%d", &n);

    while (n > 100 || n < 1) {
        printf("Error! number should in range of (1 to 100).\n");
        printf("Enter the number again: ");
        scanf("%d", &n);
    }

    for (i = 0; i < n; ++i) {
        printf("%d. Enter number: ", i + 1);
        scanf("%f", &num[i]);
        sum += num[i];
    }

    ///to get the largest element
    float largest=num[0];
    for(int j=0;j<n;j++)
    {
      if(num[j]>largest)
      {
        largest=num[j];
      }
      else
      {
        largest=largest;
      }
    }

    printf("The largest elment in the array is %.1f\n",largest);
////to find the average
    avg = sum / n;
    printf("Average = %.2f", avg);
    return 0;
}


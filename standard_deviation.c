#include <stdio.h>
#include<math.h>
void filling_array(int size, int arr[]);
int mean_array(int size,int arr[]);
int standard_deviation(int size, int arr[]);

int main() 
{
  int arr[10];
  printf("Welcome to the standard deviation calculator please enter the 10 elements\n");
  filling_array(10, arr);
  mean_array(10,arr);
  standard_deviation(10,arr);

}





void filling_array(int size, int arr[])
{
  int array_entry = 0;
  for (int i = 0; i < size; i++)
  {
    scanf("%d", &array_entry);
    arr[i] = array_entry;
  }
}
int mean_array(int size,int arr[])
{
  ///simply calculate the average
  float sum;
  for(int i=0;i<size;i++)
  {
    sum+=(float)arr[i];
  }
  sum=sum/size;
  printf("%.2f\n",sum);
  return sum;
}

int standard_deviation(int size, int arr[])
{
  float sum;
  float mean=mean_array(size,arr);
  for(int i=0;i<size;i++)
  {
    sum+=(float)pow((arr[i]-mean),2);
  }
  float finalanswer=0;
  finalanswer=sum/10;
  printf("The standard deviation is %.3f\n",finalanswer);
  return finalanswer;

}
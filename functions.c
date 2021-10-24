#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "functions.h"

//*              ДЗ на 1 модуль              *//

void TaskFirst(float x, float a, float c)
{
   float l = 0;

   l = (sqrt(exp(x) - pow(cos(pow(x, 2) * pow(a, 5)), 4)) + pow(atan(a - pow(x, 5)), 4)) / (exp(1) * sqrt(fabs(a + x * pow(c, 4))));

   printf_s("%f", l);

}

void TaskSecond(int t)
{
   int V = 0;
   
   V = ((3 * t * t) - 6*t);
   printf_s("%d", V);

}
void TaskThird()
{
   float a, b, c, D, x1, x2;

   scanf_s("%f", &a);
   scanf_s("%f", &b);
   scanf_s("%f", &c);

   if (a == 0.)
   {
      printf("ERROR, a cannot be equal 0");
      exit(0);
   }

   D = (b * b) - 4 * a * c;
   if (D < 0)
      printf("there are no roots on the set of real numbers");
   if (D == 0)
   {
      x1 = (-b) / (2 * a);
      printf("there are one root: %f", x1);
   }
   if (D > 0)
   {
      x1 = (-b - sqrt(D)) / (2 * a);//??????
      x2 = (-b + sqrt(D)) / (2 * a);//??????
      printf("there are two roots: x1 = %f, x2 = %f", x1, x2);
   }

}

float TaskFourth(int code, float t)
{
   switch (code)
   {
   case 48:
      return 15 * (t / 60);
   case 44:
      return 18 * (t / 60);
   case 46:
      return 13 * (t / 60);
   case 45:
      return 11 * (t / 60);
   default:
      printf("Error");
      break;
   }
   return 0;
}

void TaskFifth()
{
   int n;
   int summ;

   for (int i = 1000; i < 10000; i++)
   {
      n = i;
      summ = 0;

      for (int r = 0; r < 4; r++)
      {
         summ += pow(n % 10, 4);
         n /= 10;
      }

      if (summ == i)
         printf("%d", i);

   }
}

void TaskSixth(int* num, int N)
{
   int i = 0;
   int decimal = 0;
   int n = N - 1;

   while (i < N)
   {
      decimal += num[i] * pow(2, n);
      i++;
      n--;
   }

   printf("%d", decimal);
}

void TaskSeventh(int i_,int j_)
{
   srand(time(NULL));

   int* arr = malloc(i_ * j_ * sizeof(int));

   for (int k = 0; k < i_ * j_; k++)
   {
      arr[k] = -(rand() % 21 - 10) * 3;
   }
   for (int i = 0; i < i_; i++)
   {
      for (int j = 0; j < j_; j++)
      {
         printf("%d ", arr[i * j_ + j]);
      }
      printf("\n");
   }
}

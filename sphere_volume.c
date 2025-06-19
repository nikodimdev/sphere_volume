#include <stdio.h>
#include <math.h>
#define NUM_PI (4.0f/3.0f)


int
main ()
{

  double radius;
  double volume;
  const double pi = 3.14159;


  printf ("Введите радиус сферы в метрах: ");
  scanf ("%lf", &radius);


  volume = NUM_PI * pi * pow(radius, 3);

  printf ("Объём сферы радиусом %.2f м: %.2f куб. м\n", radius, volume);



    return 0;
}




/*

Задача из книги C Programming: A Modern Approach" (2nd Edition) by K.N. King
Цель: написать программу которая выводит в резуотат вычисления объёма сферы




*/
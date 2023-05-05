
#include <stdio.h>
void show(int x,int y){

    printf("show function e x er value dekhabe x:%d \nshow function e y er value dekhabe y:%d\n\n",x,y);
    //show function er value change kortesi.jaa main function theke je value paise takey protiesthapon kore dibe.
    x=24;
    y=29;
     printf("value change korar por show function er value x:%d y:%d\n\n",x,y);
        printf("show function er x er memory adress: %p\n\n",&x);
    printf("show function er y er memory adress: %p\n\n",&y);
}
int main()
{
  int x=10,y=20;
  printf("show function call korar agey x:%d y:%d\n\n",x,y);
    //ekhon jehetu show function call kortesi tai show function er vitor jaja hoise tai output dekhabe.
   show(x,y);
   printf("main function er x er memory adress: %p\n\n",&x);
   printf("main function er y er memory adress: %p\n\n",&y);
   printf("show function call korar por x:%d y:%d\n\n",x,y);
     //jehetu show function call korar por o main function er x & y er value change hoy nai tai value preserve hoise.
  return 0;
}

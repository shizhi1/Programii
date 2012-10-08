#include<stdio.h>
  int  main()
   {
    int x;
    int y;
    int c=0;
    int b = 1;
    int a = 1;
    printf("vuvedi 1voto 4slo\n");
    scanf("%d" , &x);
    printf("vuvedi vtoroto 4islo, da e po golqmo ot purvoto\n");
    scanf("%d", &y);
    while(c<x){
         c=a+b;
         a=b;
         b=c;}
         while(c<y){
              c=a+b;
              a=b;
              b=c;
              if(c<=y)
              printf("%d\n", c);
              else printf("\n");

}             
   
    system("PAUSE");
    return 0;
    }

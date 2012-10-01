#include<stdio.h>

  int  main()
   {
    int x;
    int y;
    int k = 0;
    printf("vuvedi 1voto 4slo\n");
    scanf("%d" , &x);

    printf("vuvedi vtoroto 4islo, da e po golqmo ot purvoto\n");
    scanf("%d", &y);

    while ( x < y) {
    x++;
    if ( x % 17 == 0) {
         k = k + x;
}
    }        
    printf("%d", k);
    
    system("PAUSE");



    return 0;
    }


#include<stdio.h>

  int  main()
   {
    int x;
    int y;
    int j = 0;
    int i = 0;
    int br = 0;
    printf("vuvedi 1voto 4slo\n");
    scanf("%d" , &x);

    printf("vuvedi vtoroto 4islo, da e po golqmo ot purvoto\n");
    scanf("%d", &y);

    for(i=x;i<=y;i++){
                      if(i%10==3){
                      for(j=2;j<i/2;j++){
                      if(i%j==0)
                      br++;}
                      if(br==0) 
         printf("%d\n", i);}
         br=0;
}
                   
    system("PAUSE");
    return 0;
    }


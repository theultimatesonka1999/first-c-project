#include <stdio.h>
#include <stdlib.h>
void main2(char* nev, double year){
    printf("sia %f éves %s \n", year, nev);

} 

double kocka(double szam)
{
    double vegeredmeny = szam*szam*szam;
    return vegeredmeny;
    
}

int main()
{
    char valtozo[] = "teszt";
    int variable = 0;
    printf("stuff %d stuff\n", variable );
    variable = 69;
    printf("most %d \n", variable);
    printf("noah be like: \"LEEN MINGYENGI ADEIZSDA!4!!!!!44!!444!4!\"\n");
    double age;
    scanf("%lf", &age);
    printf("%f éves vagy\n", age);
    int cuccos[] = {69, 420, 6969, 420420};
    printf("%d\n", cuccos[0]);
    printf("%d\n", cuccos[1]);
    printf("%d\n", cuccos[2]);
    printf("%d\n", cuccos[3]);
    cuccos[3] = 696969;
    printf("%d\n", cuccos[3]);
    main2("amorgo's gaming", 6.9);
    main2("jancsiföldi parasztjancsi!44!!!", 4.2);
    main2("húsgombóc", 420);
    printf("eredménysarok: %f\n", kocka(69420.0));
    /*add a comment*/
    char responz;

    printf("Piracy detected! Leállítod ezt a szart? (i/n) ");
    scanf("%s\n", responz);
    if(responz == 'i')
    {
        return 0;
    }
    else if (responz == 'n')
    {
       printf("de");
    }
    printf("RÍDING MÁJ AVFUL 7 KOMMENC\n");
    int anturunturunturunturusgaming;
    while (anturunturunturunturusgaming <= 5)
    {
        printf("%d\n", anturunturunturunturusgaming);
        anturunturunturunturusgaming += 1;
    }
        
    int TerdikTutoralzBest;
    do{
        TerdikTutoralzBest = 6;
        printf("%d\n", TerdikTutoralzBest);
    }while(TerdikTutoralzBest <= 4);


    int c_;
    for (c_ = 1; c_<=5; c_++){
    switch(c_){
        case 1:
            printf("az %d\n", c_);
            break;
        case 2:
            printf("a %d\n", c_);
            break;
        case 3:
            printf("a %d\n", c_);
            break;
        case 4:
            printf("a %d\n", c_);
            break;
        case 5:
            printf("az %d\n",c_ );
            break;
    }
    }
    return 0;
}


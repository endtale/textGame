#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char imie[50], wybor[3];
int los=0, x=0;


int main()
{
    srand(time(NULL));
    for(;;)
    {
    menu:

    printf("---------MENU---------\n\n");
    printf("1. Rozpocznij rozgrywke\n");
    printf("2. Instrukcja\n");
    printf("3. Wyjscie\n\n");
    printf("----------------------\n\n");

    printf("Wybierz opcje: ");
    scanf("%d", &x);

    switch(x)
    {
    case 1:
    system("cls");
    printf("-----------------------ATAK-----------------------\n\n");
    printf("NIEZNAJOMY: Jak sie nazywasz?\n");
    printf("TY: ");
    scanf("%s", &imie);
    printf("\nW takim razie %s, lepiej sie pospisz zaraz bedzie tu goraco!\n", imie);
    printf("\n-----------------------Nacisnij enter aby przejsc dalej-----------------------");
    getchar();
    getchar();
    system("cls");

    retry:

    printf("-----------------------UCIECZKA-----------------------\n");
    printf("\n#Czy podazasz za nieznajomym? (ODPOWIADAJ tak LUB nie)\n\n");
    scanf("%s", &wybor);


    if(strcmp(wybor, "tak") == 0)
    {
        powrot:

        printf("\nTY: Gdzie idziemy?\n");
        printf("NIEZNAJOMY: Niedlugo sie dowiesz.\n");
        printf("#Biegniesz za nieznajomym.\n");
        printf("\n-----------------------Nacisnij enter aby przejsc dalej-----------------------");
        getchar();
        getchar();
        system("cls");

        retry3:

        printf("-----------------------NIEZNAJOMY-----------------------\n");
        printf("\nTY: Kim jestes?\n");
        printf("NIEZNAJOMY: Nazywam sie Stefan, jestem antyterrorysta.\n");
        printf("TY: To znaczy, ze...\n");
        printf("STEFAN: Tak, na zewnatrz znajduja sie terrorysci.\n");
        printf("TY: A w srodku?\n");
        printf("STEFAN: Miejmy nadzieje, ze nie.\n");
        printf("#Nagle wyskakuje przed wami mezczyzna z bronia.\n");
        printf("#Stefan rzuca sie na niego.\n");
        printf("#Czy mu pomagasz.\n\n");
        scanf("%s", &wybor);

        if(strcmp(wybor, "tak") == 0)
        {

            printf("\n#Udaje wam sie obezwladnic napastnika\n");
            printf("TY: Nic ci nie jest?\n");
            printf("STEFAN: Nie, wszystko w porzadku.\n");
            printf("#Ruszacie dalej.\n");
            printf("\n-----------------------Nacisnij enter aby przejsc dalej-----------------------");
            getchar();
            getchar();
            system("cls");

            retry4:

            printf("-----------------------WYJSCIE-----------------------\n");
            printf("\n#Caly czas podozasz za Stefanem.\n");

            printf("#Idziecie dalej korytarzem.\n");
            printf("STEFAN: Na koncu znajduje sie pomieszczenie z dwoma wyjsciami.\n");
            printf("TY: Ktorym wychodzimy?\n");
            printf("STEFAN: To po lewej jest bezpieczniejsze ale...\n");
            printf("TY: Ale?\n");
            printf("STEFAN: Ale za prawym ktos moze potrzebowac pomocy.\n");
            printf("#Czy chcesz zaryzykowac\n\n");
            scanf("%s", &wybor);

            if(strcmp(wybor, "tak") == 0)
            {
                printf("\nTY: Idziemy prawymi drzwiami.\n");
                printf("STEFAN: Rozumiem.\n");
                printf("#Znajdujecie sie przy skrzyzowaniu, slychac strzaly.\n");
                printf("\n-----------------------Nacisnij enter aby przejsc dalej-----------------------");
                getchar();
                getchar();
                system("cls");

                printf("-----------------------RATUNEK-----------------------\n");
                printf("\n#Zauwazacie ze kawalek dalej znajduje sie dziecko.\n");
                printf("#Stefan rusza mu na pomoc.\n");
                printf("#Czy ruszasz za nim.\n\n");

                retry5:
                scanf("%s", wybor);

                if(strcmp(wybor, "tak") == 0)
                {
                    los=1+rand()%3;

                    if(los!=3)
                    {
                        printf("\n#Udaje wam sie uratowac dzicko.\n");
                        printf("#Doznajecie tylko lekkich obrazen.\n");
                        printf("\n-----------------------Nacisnij enter aby przejsc dalej-----------------------");
                        getchar();
                        getchar();
                        system("cls");

                        printf("-----------------------BOHATEROWIE-----------------------\n");
                        printf("\n#Po krotkim pobycie w szpitalu, zostajecie okrzyknieci bohaterami.\n");
                        printf("#Slawa przytlacza cie.\n");
                        printf("#Wyjezdzasz w Bieszczady.\n");
                        printf("\n-----------------------Nacisnij enter aby zakonczyc-----------------------");
                        getchar();

                        system("cls");
                    }
                    else
                    {
                        printf("\n#Udaje wam sie uratowac dzicko.\n");
                        printf("#Doznajesz jednak powaznych obrazen.\n");
                        printf("\n-----------------------Nacisnij enter aby przejsc dalej-----------------------");
                        getchar();
                        getchar();
                        system("cls");

                        printf("-----------------------BOHATEROWIE-----------------------\n");
                        printf("\n#Po dlugiej rehabilitacji wracasz do zdrowia.\n");
                        printf("#Jednak nigdy nie bedziesz ju¿ chodzic.\n");
                        printf("#Mimo tego nie zalujesz swojej decyzji.\n");
                        printf("\n-----------------------Nacisnij enter aby zakonczyc-----------------------");
                        getchar();

                        system("cls");
                    }
                }
                else if(strcmp(wybor, "nie") == 0)
                {
                    los=1+rand()%2;

                    if(los==1)
                    {
                        printf("\n#Stefan ratuje dziecko jednak zostaje ciezko ranny.\n");
                        printf("\n-----------------------Nacisnij enter aby przejsc dalej-----------------------");
                        getchar();
                        getchar();
                        system("cls");

                        printf("-----------------------SMUTEK-----------------------\n");
                        printf("\n#Stefan niedlugo pozniej umiera.\n");
                        printf("#Rozdziera cie to od srodka.\n");
                        printf("#Czujesz sie winny.\n");
                        printf("#Postanawiasz zaopiekowac sie jego rodzina.\n");
                        printf("\n-----------------------Nacisnij enter aby zakonczyc-----------------------");
                        getchar();
                        getchar();
                        system("cls");

                    }
                    else
                    {
                        printf("\n#Stefan ratuje dziecko jednak zostaje ranny.\n");
                        printf("\n-----------------------Nacisnij enter aby przejsc dalej-----------------------");
                        getchar();
                        getchar();
                        system("cls");

                        printf("-----------------------SMUTEK-----------------------\n");
                        printf("\n#Po dlugiej kuracji Stefan wraca do zdrowia.\n");
                        printf("#Nie moze on jednak chodzic.\n");
                        printf("#Czujesz sie winny.\n");
                        printf("#Postanawiasz, ze bedziesz opiekowac sie Stefanem i jego rodzina.\n");
                        printf("\n-----------------------Nacisnij enter aby zakonczyc-----------------------");
                        getchar();
                        getchar();
                        system("cls");
                    }
                }
                else
                {

                    printf("\nROBISZ TO ZLE!!! NAPISZ tak LUB nie.\n\n");
                    goto retry5;
                }
            }
            else if(strcmp(wybor, "nie") == 0)
            {
                printf("\nTY: Idziemy lewymy drzwiami.\n");
                printf("STEFAN: Rozumiem.\n");
                printf("#Bezpiecznie wychodzicie z budynku.\n");
                printf("\n-----------------------Nacisnij enter aby przejsc dalej-----------------------");
                getchar();
                getchar();
                system("cls");

                printf("-----------------------POCZUCIE WINY-----------------------\n");
                printf("\n#Nastepnego dnia dowiadujesz sie, ze byles jednym z niewielu ocalalych.\n");
                printf("#Dociera do ciebe informacja, ze niedaleko drugiego wyjcia zginelo dziecko.\n");
                printf("#Czujesz sie winny.\n");

                los=1+rand()%2;

                if(los==1)
                {
                    printf("#Popadasz w gleboka depresje.\n");
                    printf("#Po dwoch tygodniach popelniasz samobojstwo.\n");
                    printf("\n-----------------------Nacisnij enter aby zakonczyc-----------------------");
                    getchar();

                    system("cls");
                }
                else
                {
                    printf("#Popadasz w depresje.\n");
                    printf("#Decydujesz sie na zalozenie dzialalnosci charytatywnej.\n");
                    printf("#Mimo tego cale zycie zzera cie poczucie winy.\n");
                    printf("\n-----------------------Nacisnij enter aby zakonczyc-----------------------");
                    getchar();

                    system("cls");
                }

            }
            else
            {
                system("cls");
                printf("ROBISZ TO ZLE!!! NAPISZ tak LUB nie.\n\n");
                goto retry4;
            }


        }
        else if(strcmp(wybor, "nie") == 0)
        {

            printf("\n#Stefan obezwladnia napastnika\n");
            printf("TY: Nic ci nie jest?\n");
            printf("STEFAN: Nie, wszystko w porzadku.\n");
            printf("#Ruszacie dalej.\n");
            printf("\n-----------------------Nacisnij enter aby przejsc dalej-----------------------");
            getchar();
            getchar();
            system("cls");


            printf("-----------------------SMUTEK-----------------------\n");
            printf("\n#Caly czas podozasz za Stefanem.\n");

            printf("#Stefan upada na ziemie.\n");
            printf("TY: Co sie stalo?\n");
            printf("STEFAN: Wybacz ale dalej nie zajde. Zaraz sie wykrwawie.\n");
            printf("TY: Zaraz cos wymyslimy?\n");
            printf("STEFAN: Nie mam szans, ratuj siebie.\n");
            printf("TY: Ale...\n");
            printf("STEFAN: Zadnych ale, na koncu tego korytaza jest wyjscie.\n");
            printf("TY: Dziekuje.\n");
            printf("#Rozdziera cie smutek jednak ruszasz dalej.\n");
            printf("\n-----------------------Nacisnij enter aby przejsc dalej-----------------------");
            getchar();

            system("cls");

            retry6:

            printf("-----------------------WYJSCIE-----------------------\n");
            printf("\n#Dochodzisz do duzego pomieszczenia.\n");

            printf("#Widzisz drzwi po prawej i lewej stronie.\n");
            printf("#Czy wybierasz drzwi po prawej stronie.\n\n");
            scanf("%s", wybor);

            if(strcmp(wybor, "tak") == 0)
            {
                printf("\n#Znajdujesz sie na skrzyzowaniu, slychac strzaly.\n");
                printf("\n-----------------------Nacisnij enter aby przejsc dalej-----------------------");
                getchar();
                getchar();
                system("cls");

                printf("-----------------------SUMIENIE-----------------------\n");
                printf("\n#Zauwazasz dziecko.\n");
                printf("Czy pomagasz mu pomimo ostrzalu.\n\n");
                goto retry2;
            }
            else if(strcmp(wybor, "nie") == 0)
            {
                printf("\n#Jestes bezpieczny\n");
                printf("\n-----------------------Nacisnij enter aby przejsc dalej-----------------------");
                getchar();
                getchar();
                system("cls");

                printf("-----------------------TRAUMA-----------------------\n");
                printf("\n#Jestes jedynym ocalalym z ataku.\n");
                printf("#Bardzo przezywasz smierc Stefana.\n");
                printf("#Czujesz sie odpowiedzialny za jego rodzine wiec skrycie jej pomagasz.\n");
                printf("\n-----------------------Nacisnij enter zakonczyc-----------------------");
                getchar();

                system("cls");
            }
            else
            {
                system("cls");
                printf("ROBISZ TO ZLE!!! NAPISZ tak LUB nie.\n\n");
                goto retry6;
            }

        }
        else
        {
            system("cls");
            printf("ROBISZ TO ZLE!!! NAPISZ tak LUB nie.\n\n");
            goto retry3;
        }


    }
    else if(strcmp(wybor, "nie") == 0)
    {
        printf("\nTY: Sam znajde wyjscie?\n");
        printf("NIEZNAJOMY: Oszalales? Zginiesz tam.\n");
        printf("TY: Brzmi ciekawie.\n");
        printf("#Wybiegasz frontowymi drzwiami.\n");
        printf("#Grupa ludzi zaczyna do ciebie strzelac.\n");
        printf("\n-----------------------Nacisnij enter aby przejsc dalej-----------------------");
        getchar();
        getchar();
        system("cls");

        los=1+rand()%2;

        if(los==1)
        {
            retry1:

            printf("-----------------------RYZYKO-----------------------\n\n");
            printf("#Na twoje szczescie nikt nie trafia.\n");
            printf("#Chowasz sie za pobliskim autem.\n");
            printf("#Niedaleko widzisz skrzyzowanie.\n");
            printf("#Czy wracasz do budynku?\n\n");
            scanf("%s", &wybor);

            if(strcmp(wybor, "tak") == 0)
            {
                printf("\n#Bez problemu przedostajesz sie do srodka.\n");
                printf("\n-----------------------Nacisnij enter aby przejsc dalej-----------------------");
                getchar();
                getchar();
                system("cls");
                printf("-----------------------UCIECZKA-----------------------\n");
                printf("\nNIEZNAJOMY: Skoro juz wiesz co cie tam czeka, ruszamy.");
                goto powrot;


            }
            else if(strcmp(wybor, "nie") == 0)
            {
                printf("\n#Biegniesz w kierunku skrzyzowania.\n");
                printf("#Strzaly rozbrzmiewaja na nowo.\n");
                printf("\n-----------------------Nacisnij enter aby przejsc dalej-----------------------");
                getchar();
                getchar();
                system("cls");

                los=1+rand()%3;

                if(los!=3)
                {


                    printf("-----------------------SUMIENIE-----------------------\n");
                    printf("\n#Nikt cie nie trafia.\n");
                    printf("#Dobiegasz do skrzyzowania.\n");
                    printf("#Gdy masz juz znalezc sie w bezpiecznym\n miejscu cos przykuwa twoja uwage.\n");
                    printf("#Kawalek za toba znajduje sie przerazone dziecko.\n");
                    printf("#Czy wracasz mu pomoc mimo ostrzalu.\n\n");

                    retry2:

                    scanf("%s", &wybor);

                    if(strcmp(wybor, "tak") == 0)
                    {
                        printf("\n#Biegniesz w kierunku dziecka pomimo wlasnego przerazenia.\n");
                        printf("\n-----------------------Nacisnij enter aby przejsc dalej-----------------------");
                        getchar();
                        getchar();
                        system("cls");

                        los=1+rand()%4; //losowe ustawic

                        if(los==1)
                        {
                            printf("-----------------------BOHATER-----------------------\n");
                            printf("\n#Nikt cie nie trafia.\n");
                            printf("#Ratujesz dziecko.\n");
                            printf("#Zostajesz okrzykniety bohaterem.\n");
                            printf("\n-----------------------Nacisnij enter aby przejsc dalej-----------------------");
                            getchar();

                            system("cls");

                            printf("-----------------------BOHATER-----------------------\n");
                            printf("\n#Niestety slawa po ataku terrorystycznym cie przytlacza.\n");
                            printf("#Decydujesz sie wyjechac w bieszczady.\n");
                            printf("\n-----------------------Nacisnij enter aby zakonczyc-----------------------");
                            getchar();

                            system("cls");

                        }
                        else if(los==4)
                        {
                            printf("-----------------------BOHATER-----------------------\n");
                            printf("\n#Ratujesz dziecko jednak zostajesz ciezko ranny.\n");
                            printf("#Ludzie okrzykuja cie bohaterem.\n");
                            printf("#Umierasz w ciagu trzech dni pomimo wsparcia bliskich.\n");
                            printf("\n-----------------------Nacisnij enter aby przejsc dalej-----------------------");
                            getchar();

                            system("cls");

                            printf("-----------------------BOHATER-----------------------\n");
                            printf("\n#Twoj wyczyn na zawsze zapisal sie w historii.\n");
                            printf("#Czyn ktorego dokonales jest inspiracja dla wielu mlodych ludzi.\n");
                            printf("\n-----------------------Nacisnij enter aby zakonczyc-----------------------");
                            getchar();

                            system("cls");
                        }
                        else
                        {
                            printf("-----------------------BOHATER-----------------------\n");
                            printf("\n#Ratujesz dziecko jednak zostajesz ranny.\n");
                            printf("#Ludzie okrzykuja cie bohaterem.\n");
                            printf("#Okazuje sie, ze juz nigdy nie bedziesz chodzic.\n");
                            printf("\n-----------------------Nacisnij enter aby przejsc dalej-----------------------");
                            getchar();

                            system("cls");

                            printf("-----------------------BOHATER-----------------------\n");
                            printf("\n#Twoj wyczyn zapisuje sie w historii.\n");
                            printf("#Dzieki wsparciu bliskich udaje ci sie przetrwac trudne chwile.\n");
                            printf("\n-----------------------Nacisnij enter aby zakonczyc-----------------------");
                            getchar();

                            system("cls");
                        }
                    }
                    else if(strcmp(wybor, "nie") == 0)
                    {
                        printf("\n#Chowasz sie za skrzyzowaniem.\n");
                        printf("Juz nic ci nie grozi.\n");
                        printf("\n-----------------------Nacisnij enter aby przejsc dalej-----------------------");
                        getchar();
                        getchar();
                        system("cls");

                        los=1+rand()%3; //losowe

                        if(los==2)
                        {
                            printf("-----------------------TCHORZ-----------------------\n");
                            printf("\n#Media szybko dowiaduja sie o twoim tchorzostwie.\n");
                            printf("#Popadasz w gleboka depresje.\n");
                            printf("\n-----------------------Nacisnij enter aby przejsc dalej-----------------------");
                            getchar();

                            system("cls");

                            printf("-----------------------TCHORZ-----------------------\n");
                            printf("\n#Popelniasz samobojstwo.\n");
                            printf("\n-----------------------Nacisnij enter aby zakonczyc-----------------------");
                            getchar();

                            system("cls");
                        }
                        else if(los==1)
                        {
                            printf("-----------------------TCHORZ-----------------------\n");
                            printf("\n#Media szybko dowiaduja sie o twoim tchorzostwie.\n");
                            printf("#Popadasz w depresje.\n");
                            printf("\n-----------------------Nacisnij enter aby przejsc dalej-----------------------");
                            getchar();

                            system("cls");

                            printf("-----------------------TCHORZ-----------------------\n");
                            printf("\n#Decydujesz sie publicznie przeprosic.\n");
                            printf("#Zaczynasz aktywnie uczestniczycw dzialalnosci charytatywnej.\n");
                            printf("#Cale zycie starasz sie sprawic, aby ludzie zapomnieli o twoim czynie.\n");
                            printf("\n-----------------------Nacisnij enter aby zakonczyc-----------------------");
                            getchar();

                            system("cls");
                        }
                        else
                        {
                            printf("-----------------------TCHORZ-----------------------\n");
                            printf("\n#Nikt nie dowiaduje sie o twoim czynie.\n");
                            printf("#Pomimo tego zrzera cie sumienie.\n");
                            printf("\n-----------------------Nacisnij enter aby przejsc dalej-----------------------");
                            getchar();
                            getchar();
                            system("cls");

                            printf("-----------------------TCHORZ-----------------------\n");
                            printf("\n#W ramach zadosc uczynienia zakladasz dzialalnosc charytatywna.\n");
                            printf("#Po wielu latach przyznajesz sie publicznie.\n");
                            printf("#Ludzie nie chca ci uwierzyc.\n");
                            printf("#Popelniasz samobojstwo.\n");
                            printf("\n-----------------------Nacisnij enter aby zakonczyc-----------------------");
                            getchar();

                            system("cls");
                        }
                    }
                    else
                    {

                        printf("\nROBISZ TO ZLE!!! NAPISZ tak LUB nie.\n\n");
                        goto retry2;

                    }

                }
                else
                {
                    printf("\n-----------------------RYZYKO-----------------------\n\n");
                    printf("#Sczescie ci nie dopisalo.\n");
                    printf("#Zostajesz jedna z ofiar ataku terrorystycznego\n");
                    printf("\n-----------------------Nacisnij enter aby zakonczyc-----------------------");
                    getchar();
                    getchar();
                    system("cls");
                }
            }
            else
            {
                system("cls");
                printf("ROBISZ TO ZLE!!! NAPISZ tak LUB nie.\n\n");
                goto retry1;
            }

        }
        else if(los==2)
        {
            printf("\n-----------------------RYZYKO-----------------------\n\n");
            printf("#Sczescie ci nie dopisalo.\n");
            printf("#Zostajesz jedna z ofiar ataku terrorystycznego\n");
            printf("\n-----------------------Nacisnij enter aby zakonczyc-----------------------");
            getchar();

            system("cls");
        }
    }
    else
    {
        system("cls");
        printf("ROBISZ TO ZLE!!! NAPISZ tak LUB nie.\n\n");
        goto retry;
    }
    break;
    case 2:
        system("cls");
        printf("---------INSTRUKCJA---------\n\n");
        printf("NA PYTANIA ODPOWIADAMY tak LUB nie\n");
        printf("UWAZAJ NA CAPS LOCK\n");
        printf("STOSUJ TYLKO MALE LITERY\n\n");
        printf("--ENTER ABY WROCIC DO MENU--");
        getchar();
        getchar();
        system("cls");
        goto menu;
    break;
    case 3:
        exit(0);
    break;
    default:
        system("cls");
        printf("\nNie ma takiej opcji\n\n");
        goto menu;
    break;
    }
    }
    return 0;
}

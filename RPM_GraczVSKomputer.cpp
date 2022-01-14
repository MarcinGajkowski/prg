#include <iostream>
#include <cstdlib>
#include <ctime>

    std::string gracz;
    int wins;
    int losses;
    int roll;
    int draws;
    int rocks;
    void error();
    void error2();
    void gamePlay();
    void rezulTaty() 
    {
    	std::cout << wins << " rund wygranych przez gracza" << std::endl;
        std::cout << losses << " rund przez gracza przegranych" << std::endl;		
		std::cout << draws << " remisow." << std::endl;
		
		if (rocks == 1)
		{
        std::cout << "I " << rocks << " zabojczy remis!" << std::endl;
		};
		
        std::cout << "Dziekujemy za granie!" <<std::endl;
        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<std::endl;
    }

    void start() 
    {
    	std::cout << "Pora na rozgrywke w Kamulec, Pistolet, Maczeta!" <<std::endl;
    	std::cout << "Zmierz sie z komputerem albo z drugim graczem w epickiej bitwie!" <<std::endl;
    	std::cout << "0 - Kamulec   1 - Pistolet    2 - Karabin maszynowy" << std::endl;
    	std::cout << "3 - Strzelba   4 - Miotacz ognia    5 - Worek piachu" << std::endl;
    	std::cout << "6 - Maczeta   7 - Siekiera (obustronna)   8 - Mlot" << std::endl;
    	std::cout << "9 - Kopia (rycerska)   10 - Poltorak (Miecz dlugi)" << std::endl;
    	gamePlay();
    }

    void jeszczeRaz() 
    {
        std::cout << "Chcesz grac kolejna runde z komputerem? <y> / <n> " << std::endl;
        std::cout << "Wybierasz: ";
        std::cin >> gracz;
            if (gracz == "y") 
            {
                std::cout << "No to wracaj do walki!" << std::endl;
                std::cout << "\n";
                gamePlay();
            } else if (gracz == "n") 
            {
                std::cout << "Zobaczymy sie nastepnym razem..." << std::endl;
                std::cout << "\n";
                rezulTaty();
            } else
            {
                error2();
            }
    }


    void draw() 
    {
        std::cout << "Remis!" << std::endl;
        draws++;
        std::cout << "\n";
        jeszczeRaz();
    }

    void epicWin() 
    {
        std::cout << "Wygrales!" <<std::endl;
        wins++;
        std::cout << "\n";
        jeszczeRaz();
    }

    void soSad() 
    {
        std::cout << "Przegrales..." << std::endl;
        losses++;
        std::cout << "\n";
        jeszczeRaz();
    }
    
    void dajKamienia() 
    {
        std::cout << "Zabojczy remis! Koniec gry!" << std::endl;
        rocks++;
        std::cout << "\n";
        rezulTaty();
    }



    void gamePlay() 
    {
        std::cout << "Wybierz bron do pokonania przeciwnika: " <<std::endl;
        std::cout << "Wybrales: ";
        std::cin >> gracz;
            srand(time(0));
            roll = 0 + rand() % 11;
        std::cout << "\n";
        switch (roll) 
        {
             case 0:
             {
                std::cout << "Przeciwnik wybral KAMULEC." << std::endl;
                    if (gracz == "kamulec" || gracz == "0") 
                    {
                        std::cout << "Obaj zmiazdzyliscie sie wielkimi kamulcami! A to pech." << std::endl;
                        dajKamienia();
                    }
                    else if (gracz == "pistolet" || gracz == "1") 
                    {
                        std::cout << "Zostales zmiazdzony przez kamulec." << std::endl;
                        soSad();
                    }
                    else if (gracz == "karabin" || gracz == "karabin maszynowy" || gracz == "2") 
                    {
                        std::cout << "Zostales zmiazdzony przez kamulec." << std::endl;
                        soSad();
                    }
                    else if (gracz == "strzelba" || gracz == "3") 
                    {
                        std::cout << "Zostales zmiazdzony przez kamulec." << std::endl;
                        soSad();
                    }
                    else if (gracz == "miotacz" || gracz == "miotacz ognia" || gracz == "4") 
                    {
                        std::cout << "Zostales zmiazdzony przez kamulec." << std::endl;
                        soSad();
                    }
                    else if (gracz == "worek" || gracz == "worek piachu" || gracz == "5") 
                    {
                        std::cout << "Wysypales na ziemie tyle piachu, ze kamulec nie zdolal jej dotknac!" << std::endl;
                        std::cout << "Potem z niewielkim trudem popchnales kamulec ze szczytu piaskowego pagorka wprost na przeciwnika!" << std::endl;
                        epicWin();
                    }
                    else if (gracz == "maczeta" || gracz == "6") 
                    {
                        std::cout << "Zostales zmiazdzony przez kamulec." << std::endl;
                        soSad();
                    }
                    else if (gracz == "siekiera" || gracz == "siekiera obustronna" || gracz == "7") 
                    {
                        std::cout << "Zostales zmiazdzony przez kamulec." << std::endl;
                        soSad();
                    }
                    else if (gracz == "mlot" || gracz == "8") 
                    {
                        std::cout << "Rozkruszyles przeciwnika, wraz z kamulcem, w proch!" << std::endl;
                        epicWin();
                    }
                    else if (gracz == "kopia" || gracz == "kopia rycerska" || gracz == "9") 
                    {
                        std::cout << "Zostales zmiazdzony przez kamulec." << std::endl;
                        soSad();
                    }
                    else if (gracz == "poltorak" || gracz == "miecz" || gracz == "miecz dlugi" || gracz == "10") 
                    {
                        std::cout << "Zostales zmiazdzony przez kamulec." << std::endl;
                        soSad();
                    } else
                    {
                        error();
                    }
                break;
            }
            case 1:
            {
                std::cout << "Przeciwnik wybral PISTOLET." << std::endl;
                    if (gracz == "kamulec" || gracz == "0") 
                    {
                        std::cout << "Zmiazdzyles przeciwnika kamulcem!" << std::endl;
                        epicWin();
                    }
                    else if (gracz == "pistolet" || gracz == "1") 
                    {
                        std::cout << "Obaj wystrzeliliscie sobie pistolet z rak! Ale bez mocnych ran." << std::endl;
                        draw();
                    }
                    else if (gracz == "karabin" || gracz == "karabin maszynowy" || gracz == "2") 
                    {
                        std::cout << "Pokonales pojedynczy pocisk przeciwnika ptwoja przewaga pliczbowa!" << std::endl;
                        epicWin();
                    }
                    else if (gracz == "strzelba" || gracz == "3") 
                    {
                        std::cout << "Może strzelba przewaza czysta moca, ale tutaj pistolet przewazyl zasiegiem." << std::endl;
                        soSad();
                    }
                    else if (gracz == "miotacz" || gracz == "miotacz ognia" || gracz == "4") 
                    {
                        std::cout << "Fala ognia oniesmielila naboj przeciwnika oraz go soczyscie upiekla!" << std::endl;
                        epicWin();
                    }
                    else if (gracz == "worek" || gracz == "worek piachu" || gracz == "5") 
                    {
                        std::cout << "Oslepiles przeciwnika przed strzalem i porzadnie go sprales!" << std::endl;
                        epicWin();
                    }
                    else if (gracz == "maczeta" || gracz == "6") 
                    {
                        std::cout << "CO ty myslales biorac maczete do strzelaniny?" << std::endl;
                        soSad();
                    }
                    else if (gracz == "siekiera" || gracz == "siekiera obustronna" || gracz == "7")
                    {
                        std::cout << "Jeden pocisk zdolal przeciac przez twoja defensywe zanim ty mogles cokolwiek sieknac..." << std::endl;
                        soSad();
                    }
                    else if (gracz == "mlot" || gracz == "8") 
                    {
                        std::cout << "Zastrzelono cie zanim mogles machnac mlotem..." << std::endl;
                        soSad();
                    }
                    else if (gracz == "kopia" || gracz == "kopia rycerska" || gracz == "9") 
                    {
                        std::cout << "Nasz tutaj bandyta nie poszanowal twojego kodu rycerskiego." << std::endl;
                        soSad();
                    }
                    else if (gracz == "poltorak" || gracz == "miecz" || gracz == "miecz dlugi" || gracz == "10") 
                    {
                        std::cout << "Moze to i miecz dlugi, ale kule to kurde szybko leca." << std::endl;
                        soSad();
                    } else 
                    {
                        error();
                    }
                break;
            }
            case 2:
            {
                std::cout << "Przeciwnik wybral KARABIN MASZYNOWY." << std::endl;
                    if (gracz == "kamulec" || gracz == "0") 
                    {
                        std::cout << "Zmiazdzyles przeciwnika kamulcem!" << std::endl;
                        epicWin();
                    }
                    else if (gracz == "pistolet" || gracz == "1") 
                    {
                        std::cout << "Sprobowales strzelic w twojego oponenta swoja jedna kula." << std::endl;
                        std::cout << "Twoja chybiles, ale w zamian przeciwnik oddal ci z jakies 50 swoich!" << std::endl;
                        std::cout << "Chociaz mogl to zrobic w ladniejszy sposob..." << std::endl;
                        soSad();
                    }
                    else if (gracz == "karabin" || gracz == "karabin maszynowy" || gracz == "2") 
                    {
                        std::cout << "Udalo ci sie, kula w kule, dopasowac do wystrzalow karabinu przeciwnika." << std::endl;
                        std::cout << "Jak taka mala konstelacja, prawie ze..." << std::endl;
                        draw();
                    }
                    else if (gracz == "strzelba" || gracz == "3") 
                    {
                        std::cout << "Zeby udowodnic jak bardzo dobry jestes ze strzelba w reku..." << std::endl;
                        std::cout << "...postanawiasz strzelic z niego w srodku salta!" << std::endl;
                        std::cout << "Sedziowie daliby saltu 3/10, ale przynajmniej zestrzeliles oponentowi rece z maszynowki." << std::endl;
                        epicWin();
                    }
                    else if (gracz == "miotacz" || gracz == "miotacz ognia" || gracz == "4") 
                    {
                        std::cout << "Huragan nabojow maszynowki okazal sie sila zbyt duza dla fali plomieni." << std::endl;
                        soSad();
                    }
                    else if (gracz == "worek" || gracz == "worek piachu" || gracz == "5") 
                    {
                        std::cout << "Prawie ze slepy rozrzut maszynowki szybko przedziurawil worek piachu." << std::endl;
                        std::cout << "Oraz twoje szanse na omamienie przeciwnika." << std::endl;
                        soSad();
                    }
                    else if (gracz == "maczeta" || gracz == "6") 
                    {
                        std::cout << "Karabinek sprawnie zrobil z maczety ementaler zanim ty mogles przeciwnika pociac na plasterki." << std::endl;
                        soSad();
                    }
                    else if (gracz == "siekiera" || gracz == "siekiera obustronna" || gracz == "7")
                    {
                        std::cout << "Uzyles twojej siekiery jako kuloodpornej tarczy!" << std::endl;
                        std::cout << "Udalo ci sie wytrzymac caly magazynek i zadac kontratak!" << std::endl;
                        epicWin();
                    }
                    else if (gracz == "mlot" || gracz == "8") 
                    {
                        std::cout << "Twoj mlot byl zbyt ciezki, bys mogl go podniesc przed dotarciem salwy z maszynowki." << std::endl;
                        soSad();
                    }
                    else if (gracz == "kopia" || gracz == "kopia rycerska" || gracz == "9") 
                    {
                        std::cout << "Twoje treningi rycerskie nie przygotowaly cie do takiej ilosci pociskow." << std::endl;
                        soSad();
                    }
                    else if (gracz == "poltorak" || gracz == "miecz" || gracz == "miecz dlugi" || gracz == "10") 
                    {
                        std::cout << "Twoj miecz okazal sie dosc dlugi, aby odciac maszynowke od rak przeciwnika!" << std::endl;
                        std::cout << "Po co komu karabinek jesli nie da sie go trzymac?" << std::endl;
                        epicWin();
                    } else 
                    {
                        error();
                    }
                break;
            }
            case 3:
            {
                std::cout << "Przeciwnik wybral STRZELBE." << std::endl;
                    if (gracz == "kamulec" || gracz == "0") 
                    {
                        std::cout << "Zmiazdzyles przeciwnika kamulcem!" << std::endl;
                        epicWin();
                    }
                    else if (gracz == "pistolet" || gracz == "1") 
                    {
                        std::cout << "Dobrze, ze taki pocisk moze leciec dalej niz szrapnel!" << std::endl;
                        epicWin();
                    }
                    else if (gracz == "karabin" || gracz == "karabin maszynowy" || gracz == "2") 
                    {
                        std::cout << "Zanim mogles rozpoczac swoj atak, twoj przeciwnik skoczyl wzwyz i zrobil salto!" << std::endl;
                        std::cout << "Bedac oszolomionym jego talentem gimnastycznym, nawet nie zauwazyles lufy strzelby przy twoim czole." << std::endl;
                        soSad();
                    }
                    else if (gracz == "strzelba" || gracz == "3") 
                    {
                        std::cout << "Obaj sprobowaliscie ostroznie zblizyc sie do ataku..." << std::endl;
                        std::cout << "...ale nikt nie chcial strzelic jako pierwszy." << std::endl;
                        std::cout << "Po dobrej godzinie impasu, zdecydowaliscie, ze gra nie jest warta swieczki." << std::endl;
                        draw();
                    }
                    else if (gracz == "miotacz" || gracz == "miotacz ognia" || gracz == "4") 
                    {
                        std::cout << "Chmura szrapnelu to nic w porownaniu do twojego huraganu ognia!" << std::endl;
                        epicWin();
                    }
                    else if (gracz == "worek" || gracz == "worek piachu" || gracz == "5") 
                    {
                        std::cout << "Przeciwnik niechlujnie rozprul worek strzalem ze strzelby." << std::endl;
                        soSad();
                    }
                    else if (gracz == "maczeta" || gracz == "6") 
                    {
                        std::cout << "Zdolales oberznac lufe strzelby do dlugosci zbyt malej do funkcjonowania!" << std::endl;
                        std::cout << "Troche nawet nieladnie taki obrzyn obrzynac..." << std::endl;
                        epicWin();
                    }
                    else if (gracz == "siekiera" || gracz == "siekiera obustronna" || gracz == "7")
                    {
                        std::cout << "Przeciwnik zdolal odstrzelic ostrze twojej siekiery od jej trzonu." << std::endl;
                        std::cout << "Nie chcesz wiedziec, gdzie ono wyladowalo..." << std::endl;
                        soSad();
                    }
                    else if (gracz == "mlot" || gracz == "8") 
                    {
                        std::cout << "Przeciwnik odstrzelil glowe mlota zanim go zdolales podniesc." << std::endl;
                        std::cout << "A samym drewnianym patykiem to chyba malo zdolasz." << std::endl;
                        soSad();
                    }
                    else if (gracz == "kopia" || gracz == "kopia rycerska" || gracz == "9") 
                    {
                        std::cout << "Dzieki niesamowitej dlugosci twojej kopii, zdolales zatkac bron twojego adwersarza zaraz przed atakiem!" << std::endl;
                        std::cout << "Po nacisnieciu spustu strzelba wybuchla prosto w twarz przeciwnika!" << std::endl;
                        epicWin();
                    }
                    else if (gracz == "poltorak" || gracz == "miecz" || gracz == "miecz dlugi" || gracz == "10") 
                    {
                        std::cout << "Swoim poteznym zasiegiem i ostroscia zdolales odciac wrogowi dostep do strzelby." << std::endl;
                        std::cout << "A poza tym odciales mu rece i nogi. Bo czemu nie." << std::endl;
                        std::cout << "A ta twoja utracona reka? To tylko drasniecie..." << std::endl;
                        epicWin();
                    } else 
                    {
                        error();
                    }
                break;
            }
            case 4:
            {
                std::cout << "Przeciwnik wybral MIOTACZ OGNIA." << std::endl;
                    if (gracz == "kamulec" || gracz == "0") 
                    {
                        std::cout << "Zmiazdzyles przeciwnika kamulcem!" << std::endl;
                        epicWin();
                    }
                    else if (gracz == "pistolet" || gracz == "1") 
                    {
                        std::cout << "Kula z twojego pistoletu szybko stopila sie w natarczajacej chmurze plomieni." << std::endl;
                        std::cout << "A ty sie upiekles wraz z nia." << std::endl;
                        soSad();
                    }
                    else if (gracz == "karabin" || gracz == "karabin maszynowy" || gracz == "2") 
                    {
                        std::cout << "Sztorm pociskow z karabinu szybko przedarl sie przez sciane plomieni wprost do przeciwnika!" << std::endl;
                        epicWin();
                    }
                    else if (gracz == "strzelba" || gracz == "3") 
                    {
                        std::cout << "Wybuch z twojej strzelby zostaje szybko oniesmielony przez natarczywa fale ognia." << std::endl;
                        soSad();
                    }
                    else if (gracz == "miotacz" || gracz == "miotacz ognia" || gracz == "4") 
                    {
                        std::cout << "Zwalczanie ognia ogniem w tym przypadku nic nie zdzialalo." << std::endl;
                        draw();
                    }
                    else if (gracz == "worek" || gracz == "worek piachu" || gracz == "5") 
                    {
                        std::cout << "Rozsypniecie calej wrecz burzy piaskowej zdolalo otlumic pozar!" << std::endl;
                        std::cout << "Zatkala ona tez lufe miotacza, przez co stal sie bezuzytecznym!" << std::endl;
                        epicWin();
                    }
                    else if (gracz == "maczeta" || gracz == "6") 
                    {
                        std::cout << "Moze Maczete z filmu 'Maczeta (2010)' mozna uwazac za 'fajnego'..." << std::endl;
                        std::cout << "...ale samymi maczetami to chyba z eksplozji nie wychodzil." << std::endl;
                        soSad();
                    }
                    else if (gracz == "siekiera" || gracz == "siekiera obustronna" || gracz == "7")
                    {
                        std::cout << "Siekiery/topory sa podstawowym przyrzadem w walce z pozarem." << std::endl;
                        std::cout << "Pozytecznym przy wybijaniu np. scian drewnianych. Niestety nie ognistych. " << std::endl;
                        soSad();
                    }
                    else if (gracz == "mlot" || gracz == "8") 
                    {
                        std::cout << "Twoj stalowy mlot zdolal skutecznie ochronic cie przed fala plomieni!" << std::endl;
                        std::cout << "Po zuzyciu wszystek paliwa zadales oponenetowi brutalny cios!" << std::endl;
                        epicWin();
                    }
                    else if (gracz == "kopia" || gracz == "kopia rycerska" || gracz == "9") 
                    {
                        std::cout << "Zdolales swoja kopia zatkac lufe miotacza tak, ze biedne smoczysko nie moglo nic z gardzieli wyrzucic!" << std::endl;
                        std::cout << "A potem skopales mu tylek!" << std::endl;
                        epicWin();
                    }
                    else if (gracz == "poltorak" || gracz == "miecz" || gracz == "miecz dlugi" || gracz == "10") 
                    {
                        std::cout << "Pomimo zadziwiajacej dlugosci swego oreza, nie miales jak obejsc jakze szerokiej fali niecnych plomykow." << std::endl;
                        soSad();
                    } else 
                    {
                        error();
                    }
                break;
            }
            case 5:
            {
                std::cout << "Przeciwnik wybral WOREK PIACHU." << std::endl;
                    if (gracz == "kamulec" || gracz == "0") 
                    {
                        std::cout << "Kamulec, zamiast na wrogu, wyladowal na wielkim piaszczystym pagorku!" << std::endl;
                        std::cout << "Po tym historia tylko stacza w dol..." << std::endl;
                        soSad();
                    }
                    else if (gracz == "pistolet" || gracz == "1") 
                    {
                        std::cout << "Przeciwnik oslepil cie nagla chmura piasku!" << std::endl;
                        std::cout << "Zaraz potem zostales mocno pacniety ciezkim workiem z juty." << std::endl;
                        soSad();
                    }
                    else if (gracz == "karabin" || gracz == "karabin maszynowy" || gracz == "2") 
                    {
                        std::cout << "Karabin szybko przedziurawil worek, zostawiajac przeciwnika praktycznie bezbronnym!" << std::endl;
                        epicWin();
                    }
                    else if (gracz == "strzelba" || gracz == "3") 
                    {
                        std::cout << "Dwa pociagniecia spustu efektywnie rozpruly worek i rozprawily sie z oponentem!" << std::endl;
                        epicWin();
                    }
                    else if (gracz == "miotacz" || gracz == "miotacz ognia" || gracz == "4") 
                    {
                        std::cout << "Przeciwnik wyslal na ciebie tak silna burze piaskowa, ze miotacz ci sie zatkal!" << std::endl;
                        std::cout << "I checi zgaszone..." << std::endl;
                        soSad();
                    }
                    else if (gracz == "worek" || gracz == "worek piachu" || gracz == "5") 
                    {
                        std::cout << "Obaj wywaliscie na siebie wielkie chmury piaskowe." << std::endl;
                        std::cout << "Problem w tym, ze teraz nic nie widac i nikt nie wie, gdzie i czym ma celowac." << std::endl;
                        draw();
                    }
                    else if (gracz == "maczeta" || gracz == "6") 
                    {
                        std::cout << "Maczeta zwinnie przeciela worek na pol!" << std::endl;
                        std::cout << "Obciales wrogowi wszystkie opcje!" << std::endl;
                        epicWin();
                    }
                    else if (gracz == "siekiera" || gracz == "siekiera obustronna" || gracz == "7")
                    {
                        std::cout << "Jednym machnieciem siekiery wyrzuciles przeciwnikowi worek z rak!" << std::endl;
                        std::cout << "A drugim zwrociles go prosto w jego twarz!" << std::endl;
                        epicWin();
                    }
                    else if (gracz == "mlot" || gracz == "8") 
                    {
                        std::cout << "Na szczescie twoj mlot spotykal znacznie straszniejsze przeszkody niz jakis tam worek." << std::endl;
                        epicWin();
                    }
                    else if (gracz == "kopia" || gracz == "kopia rycerska" || gracz == "9") 
                    {
                        std::cout << "Twoja kopia przedziurawila worek bez problemu." << std::endl;
                        std::cout << "Probujac podniesc swoja bron po udanym ataku, nie zauwazasz..." << std::endl;
                        std::cout << "...ze przeciwnik zaczal surfowac na wielkim piaskowym tsunami, idacym wprost na ciebie!" << std::endl;
                        soSad();
                    }
                    else if (gracz == "poltorak" || gracz == "miecz" || gracz == "miecz dlugi" || gracz == "10") 
                    {
                        std::cout << "Twoj zacny miecz szybko przeszyl przez plany przeciwnika, rozrywajac worek od srodka!" << std::endl;
                        std::cout << "Nawet obu rak nie trzeba bylo uzywac..." << std::endl;
                        epicWin();
                    } else 
                    {
                        error();
                    }
                break;
            }
            case 6:
            {
                std::cout << "Przeciwnik wybral MACZETE." << std::endl;
                    if (gracz == "kamulec" || gracz == "0") 
                    {
                        std::cout << "Zmiazdzyles przeciwnika kamulcem!" << std::endl;
                        epicWin();
                    }
                    else if (gracz == "pistolet" || gracz == "1") 
                    {
                        std::cout << "Maczeta przeciwnika nie byla dosc ostra, zeby przeciac nadciagajacy mu pocisk." << std::endl;
                        epicWin();
                    }
                    else if (gracz == "karabin" || gracz == "karabin maszynowy" || gracz == "2") 
                    {
                        std::cout << "Karabinek szybko przemienil maczete na ekstrawagancki noz do sera." << std::endl;
                        epicWin();
                    }
                    else if (gracz == "strzelba" || gracz == "3") 
                    {
                        std::cout << "Maczeta momentalnie podzielila twoja strzelbe na dwie czesci!" << std::endl;
                        std::cout << "I z zadna z nich nie zdolasz nic zrobic!" << std::endl;
                        soSad();
                    }
                    else if (gracz == "miotacz" || gracz == "miotacz ognia" || gracz == "4") 
                    {
                        std::cout << "Przeciwnik probowal przelamac sie przez ogien maczeta" << std::endl;
                        std::cout << "Na szczescie, nawet gdyby mial ich z 30 pod reka, to one nic by mu nie daly." << std::endl;
                        epicWin();
                    }
                    else if (gracz == "worek" || gracz == "worek piachu" || gracz == "5") 
                    {
                        std::cout << "Maczeta uporala sie z twoim workiem po jednym cieciu." << std::endl;
                        std::cout << "Nie wiem, czemu mialbys sie spodziewac czegos innego." << std::endl;
                        soSad();
                    }
                    else if (gracz == "maczeta" || gracz == "6") 
                    {
                        std::cout << "Wraz z przeciwnikiem rozpoczeliscie epicka walke na maczety!" << std::endl;
                        std::cout << "Tak, jak legenda glosi, rowna, ze podobno obaj walczycie tam po dzis dzien..." << std::endl;
                        draw();
                    }
                    else if (gracz == "siekiera" || gracz == "siekiera obustronna" || gracz == "7")
                    {
                        std::cout << "Zwinnosc przeciwnika z maczeta w reku przewyzszyla nad czysta sila twojej siekiery." << std::endl;
                        soSad();
                    }
                    else if (gracz == "mlot" || gracz == "8") 
                    {
                        std::cout << "Maczeta w mig poszatkowala trzon mlota na kawalki, zmuszajac cie (doslownie) do rzucenia broni." << std::endl;
                        soSad();
                    }
                    else if (gracz == "kopia" || gracz == "kopia rycerska" || gracz == "9") 
                    {
                        std::cout << "Przeciwnik zdolal odepchnac twoje pchniecie kopia i w odpowiedzi rzucil maczete wprost na twoja twarz!" << std::endl;
                        std::cout << "Nie pamietam, zeby uzywali takich taktyk w sredniowieczu..." << std::endl;
                        soSad();
                    }
                    else if (gracz == "poltorak" || gracz == "miecz" || gracz == "miecz dlugi" || gracz == "10") 
                    {
                        std::cout << "W porownaniu z twoim szlachetnym ostrzem, taka tyci szabelka nie ma zadnych szans na wygrana." << std::endl;
                        epicWin();
                    } else 
                    {
                        error();
                    }
                break;
            }
            case 7:
            {
                std::cout << "Przeciwnik wybral SIEKIERE." << std::endl;
                    if (gracz == "kamulec" || gracz == "0") 
                    {
                        std::cout << "Zmiazdzyles przeciwnika kamulcem!" << std::endl;
                        epicWin();
                    }
                    else if (gracz == "pistolet" || gracz == "1") 
                    {
                        std::cout << "Przeciwnik uzyl siekiery jako tarczy kuloodpornej!" << std::endl;
                        std::cout << "Na szczescie, jeden precyzyjny strzal przedarl sie wprost przez nia!" << std::endl;
                        epicWin();
                    }
                    else if (gracz == "karabin" || gracz == "karabin maszynowy" || gracz == "2") 
                    {
                        std::cout << "Przeciwnik uzyl siekiery jako tarczy kuloodpornej!" << std::endl;
                        std::cout << "Slepy ostrzal maszynowki nie mogl sie przez nia przedrzec!" << std::endl;
                        std::cout << "I akurat magazynek ci sie skonczyl..." << std::endl;
                        soSad();
                    }
                    else if (gracz == "strzelba" || gracz == "3") 
                    {
                        std::cout << "Odstrzeliles ostrze siekiery od jej trzonu!" << std::endl;
                        std::cout << "Ostrze wyladowalo w bardzo niefortunnym miejscu!" << std::endl;
                        epicWin();
                    }
                    else if (gracz == "miotacz" || gracz == "miotacz ognia" || gracz == "4") 
                    {
                        std::cout << "Siekiera nie zdolala uratowac oponenta od twojego natarczywego pozaru." << std::endl;
                        epicWin();
                    }
                    else if (gracz == "worek" || gracz == "worek piachu" || gracz == "5") 
                    {
                        std::cout << "Przeciwnik zmiotl siekiera twoj worek, a potem zwrocil go z podwojna sila!" << std::endl;
                        std::cout << "Jak milo z jego strony!" << std::endl;
                        soSad();
                    }
                    else if (gracz == "maczeta" || gracz == "6") 
                    {
                        std::cout << "Twoje szybkie ruchy maczeta tak sprawnie oniesmielily wroga, ze ledwo sie trzymal siekiery!" << std::endl;
                        epicWin();
                    }
                    else if (gracz == "siekiera" || gracz == "siekiera obustronna" || gracz == "7")
                    {
                        std::cout << "Obaj zawziecie machneliscie swoimi siekierami." << std::endl;
                        std::cout << "Jakims dziwnym trafem, obie odciely sobie ostrza od trzonow, zostawiajac was tylko z samymi patykami." << std::endl;
                        draw();
                    }
                    else if (gracz == "mlot" || gracz == "8") 
                    {
                        std::cout << "Nie mogles podniesc mlotu w czasie, by obronic sie przed dzikim atakiem siekiera." << std::endl;
                        soSad();
                    }
                    else if (gracz == "kopia" || gracz == "kopia rycerska" || gracz == "9") 
                    {
                        std::cout << "Czy wspominalem, ze kopie sa w wiekszosci robione z drewna?" << std::endl;
                        soSad();
                    }
                    else if (gracz == "poltorak" || gracz == "miecz" || gracz == "miecz dlugi" || gracz == "10") 
                    {
                        std::cout << "Twoje umiejetnosci w sztuce fechtunku przewazyly nad barbarzynska natura siekiery." << std::endl;
                        epicWin();
                    } else 
                    {
                        error();
                    }
                break;
            }
            case 8:
            {
                std::cout << "Przeciwnik wybral MLOT." << std::endl;
                    if (gracz == "kamulec" || gracz == "0") 
                    {
                        std::cout << "Przeciwnik zdolal rozkruszyc kamulca!" << std::endl;
                        std::cout << "Oraz twoje marzenia..." << std::endl;
                        soSad();
                    }
                    else if (gracz == "pistolet" || gracz == "1") 
                    {
                        std::cout << "Zastrzeliles przeciwnika zaraz przed machnieciem mlota!" << std::endl;
                        epicWin();
                    }
                    else if (gracz == "karabin" || gracz == "karabin maszynowy" || gracz == "2") 
                    {
                        std::cout << "Twoja maszynowka przekopala przeciwnika z powrotem do fabryki!" << std::endl;
                        epicWin();
                    }
                    else if (gracz == "strzelba" || gracz == "3") 
                    {
                        std::cout << "Przestrzeliles wprost przez trzon mlota!" << std::endl;
                        std::cout << "Przeciwnik zostal zmiazdzony pod jego ogromnym obuchem!" << std::endl;
                        epicWin();
                    }
                    else if (gracz == "miotacz" || gracz == "miotacz ognia" || gracz == "4") 
                    {
                        std::cout << "Przeciwnik zdolal sie ukryc przed natarciem fali plomieni!" << std::endl;
                        std::cout << "I akurat skonczylo ci sie paliwo..." << std::endl;
                        soSad();
                    }
                    else if (gracz == "worek" || gracz == "worek piachu" || gracz == "5") 
                    {
                        std::cout << "Sprobowales pokiereszowac stalowy mlot worem piachu." << std::endl;
                        std::cout << "Czego sie spodziewales? Hmm?" << std::endl;
                        soSad();
                    }
                    else if (gracz == "maczeta" || gracz == "6") 
                    {
                        std::cout << "Poszatkowales trzon mlotka na cienkie slupki." << std::endl;
                        std::cout << "A przeciwnikowi szanse na wygrana!" << std::endl;
                        epicWin();
                    }
                    else if (gracz == "siekiera" || gracz == "siekiera obustronna" || gracz == "7")
                    {
                        std::cout << "Odciales przeciwnikowi glowe... mlota." << std::endl;
                        std::cout << "Przez co zostawiles oponenta bezbronnym!" << std::endl;
                        epicWin();
                    }
                    else if (gracz == "mlot" || gracz == "8") 
                    {
                        std::cout << "Uderzyliscie siebie mlot w mlot w tym samym momencie!" << std::endl;
                        std::cout << "Poszlo troche wibracji, ale, na szczescie, poszlo bez obrazen." << std::endl;
                        draw();
                    } 
                    else if (gracz == "kopia" || gracz == "kopia rycerska" || gracz == "9") 
                    {
                        std::cout << "Przedziurawiles adwersarza zanim mogl podniesc swoj mlot!" << std::endl;
                        epicWin();
                    }
                    else if (gracz == "poltorak" || gracz == "miecz" || gracz == "miecz dlugi" || gracz == "10") 
                    {
                        std::cout << "Mlot przeciwnika byl tak twardy, ze zlamal twoj miecz na pol!" << std::endl;
                        std::cout << "A wraz z nim twoje morale. I nadzieje..." << std::endl;
                        soSad();
                    } else 
                    {
                        error();
                    }
                break;
            }
            case 9:
            {
                std::cout << "Przeciwnik wybral KOPIE." << std::endl;
                    if (gracz == "kamulec" || gracz == "0") 
                    {
                        std::cout << "Zmiazdzyles przeciwnika kamulcem!" << std::endl;
                        epicWin();
                    }
                    else if (gracz == "pistolet" || gracz == "1") 
                    {
                        std::cout << "Nie wiesz czemu twoj przeciwnik przyniosl drewniana kopie i zachowuje sie jak rycerz." << std::endl;
                        std::cout << "Bez dalszych mysli, strzelasz mu w leb." << std::endl;
                        epicWin();
                    }
                    else if (gracz == "karabin" || gracz == "karabin maszynowy" || gracz == "2") 
                    {
                        std::cout << "Nie rozumiesz, jak twoj oponent ma pokonac cie w walce z twoim karabinem." << std::endl;
                        std::cout << "Jedna salwa i po klopocie." << std::endl;
                        epicWin();
                    }
                    else if (gracz == "strzelba" || gracz == "3") 
                    {
                        std::cout << "Probujesz odpalic ze strzelby, ale okazalo sie, ze kopia przeciwnika utknela w jej lufie." << std::endl;
                        std::cout << "Nie wiesz, jak sie ona mogla tam dostac." << std::endl;
                        std::cout << "Desperacko probujac wyjac ten drag, przypadkowo wciskasz spust i strzelba wybucha ci w twarz." << std::endl;
                        std::cout << "No coz." << std::endl;
                        soSad();
                    }
                    else if (gracz == "miotacz" || gracz == "miotacz ognia" || gracz == "4") 
                    {
                        std::cout << "Po wlaczeniu swojego miotacza, zauwazasz, ze ktos wepchnal kopie rycerska do lufy." << std::endl;
                        std::cout << "Nie rozumiesz, jak ten duzy kawal drewna nie daje sie podpalic." << std::endl;
                        std::cout << "Nagle czujesz potezny kop spiczastym butem prosto w tylek i slyszysz cos o 'pokonaniu smoczyska' czy cos w ten desen." << std::endl;
                        std::cout << "Decydujesz, ze sie poddajesz, i ze wolalbys spedzic czas gdzies indziej." << std::endl;
                        soSad();
                    }
                    else if (gracz == "worek" || gracz == "worek piachu" || gracz == "5") 
                    {
                        std::cout << "Nie rozumiesz, jak ktos z tak glupkowata bronia dostal sie do tej areny." << std::endl;
                        std::cout << "Nagle czujesz, ze zostajesz podniesiony kilkanascie metrow wzwyz!" << std::endl;
                        std::cout << "Nie wiedzac, co sie dzieje, trzymasz sie swojego worka jak kola ratunkowego i zaczynasz zjezdzac w dol!" << std::endl;
                        std::cout << "Zjezdzasz coraz szybciej, az w koncu wjezdzasz calym cialem na swego przeciwnika, nokautujac go w mgnieciu oka." << std::endl;
                        epicWin();
                    }
                    else if (gracz == "maczeta" || gracz == "6") 
                    {
                        std::cout << "Nie wiesz, o czym twoj przeciwnik ciagle wygaduje." << std::endl;
                        std::cout << "Bez dalszego zastanawiania sie, odpychasz jego kopie na bok i rabiesz go kilkanascie razy maczeta." << std::endl;
                        epicWin();
                    }
                    else if (gracz == "siekiera" || gracz == "siekiera obustronna" || gracz == "7")
                    {
                        std::cout << "Nie wiesz, jak taki dlugi pal drewna ma cie powstrzymac." << std::endl;
                        std::cout << "Bez dalszych pytan, rozdzielasz kopie na pol, a przeciwnika wraz z nia." << std::endl;
                        epicWin();
                    }
                    else if (gracz == "mlot" || gracz == "8") 
                    {
                        std::cout << "Nie masz czasu myslec o twoim oponencie, bo musisz najpierw podniesc swoj mlot." << std::endl;
                        std::cout << "Nagle czujesz, jakby ktos zrobil ci wielka dziure w brzuchu." << std::endl;
                        std::cout << "Potem orientujesz sie, ze twoj przeciwnik naszpikowal cie na jego kopie rycerska." << std::endl;
                        std::cout << "No trudno." << std::endl;
                        soSad();
                    }
                    else if (gracz == "kopia" || gracz == "kopia rycerska" || gracz == "9") 
                    {
                        std::cout << "W koncu znajdujesz przeciwnika rownie podazajacego za kodeksem rycerskim." << std::endl;
                        std::cout << "Pomimo braku swoich rumakow, obaj szarzujecie na wprost siebie z kopiami w reku." << std::endl;
                        std::cout << "Po spotkaniu sie na swojej drodze, zorientowaliscie sie, ze nikt nie zdolal spasc na ziemie!" << std::endl;
                        std::cout << "A wiec tylko i wypada zadeklarowac..." << std::endl;
                        draw();
                    }
                    else if (gracz == "poltorak" || gracz == "miecz" || gracz == "miecz dlugi" || gracz == "10") 
                    {
                        std::cout << "Nie widzisz, jak taki marny giermek ma cie pokonac jakas stara kopijka." << std::endl;
                        std::cout << "Nie martwisz sie tym i odcinasz mu obie rece za jednym zamachem." << std::endl;
                        epicWin();
                    } else 
                    {
                        error();
                    }
                break;
            }
            case 10:
            {
                std::cout << "Przeciwnik wybral POLTORAK." << std::endl;
                    if (gracz == "kamulec" || gracz == "0") 
                    {
                        std::cout << "Zmiazdzyles przeciwnika kamulcem!" << std::endl;
                        epicWin();
                    }
                    else if (gracz == "pistolet" || gracz == "1") 
                    {
                        std::cout << "Wspolczesna technologia broni palnej okazala sie zbyt szybka nawet dla takiego oreza." << std::endl;
                        epicWin();
                    }
                    else if (gracz == "karabin" || gracz == "karabin maszynowy" || gracz == "2") 
                    {
                        std::cout << "Zanim mogles oddac porzadna salwe, przeciwnik odcial ci rece, wraz z karabinkiem!" << std::endl;
                        std::cout << "Poltorak zostawil cie zerorekim..." << std::endl;
                        soSad();
                    }
                    else if (gracz == "strzelba" || gracz == "3") 
                    {
                        std::cout << "Twoja strzelba nie mogla nawet pomarzyc o siegnieciu polowy tego miecza." << std::endl;
                        std::cout << "A ty moglbys pomarzyc o nowych konczynach." << std::endl;
                        soSad();
                    }
                    else if (gracz == "miotacz" || gracz == "miotacz ognia" || gracz == "4") 
                    {
                        std::cout << "Styl i szermierka nie maja nic w porownaniu do swiezego zapachu napalmu." << std::endl;
                        epicWin();
                    }
                    else if (gracz == "worek" || gracz == "worek piachu" || gracz == "5") 
                    {
                        std::cout << "Nawet ja nie wiem jak piasek moglby obronic cie przed takim mieczem." << std::endl;
                        std::cout << "Naprawde, stary, brakuje mi pomyslow." << std::endl;
                        soSad();
                    }
                    else if (gracz == "maczeta" || gracz == "6") 
                    {
                        std::cout << "W tym wypadku dlugosc ostrza jednak ma znaczenie..." << std::endl;
                        soSad();
                    }
                    else if (gracz == "siekiera" || gracz == "siekiera obustronna" || gracz == "7")
                    {
                        std::cout << "Bledne szarzowanie w walke z profesjonalnym szermierzem raczej nie jest madre..." << std::endl;
                        soSad();
                    }
                    else if (gracz == "mlot" || gracz == "8") 
                    {
                        std::cout << "Moze i najlepsza obrona jest atak.." << std::endl;
                        std::cout << "...ale nawet takie ostrze nie przedrze sie przez zelazna defensywe twojego mlota!" << std::endl;
                        epicWin();
                    }
                    else if (gracz == "kopia" || gracz == "kopia rycerska" || gracz == "9") 
                    {
                        std::cout << "Probujesz z calej sily wszarzowac w przeciwnika..." << std::endl;
                        std::cout << "...a pozniej orientujesz sie, dlaczego rycerze nie walczyli kopia w miecz." << std::endl;
                        soSad();
                    }
                    else if (gracz == "poltorak" || gracz == "miecz" || gracz == "miecz dlugi" || gracz == "10") 
                    {
                        std::cout << "Obaj szykujecie sie na epicki pojedynek szermierczy." << std::endl;
                        std::cout << "Bylby znacznie bardziej epicki, gdybyscie nie zaczeli starcia... celowaniem w rece wroga." << std::endl;
                        std::cout << "Po kilku zawzietych cieciach, obaj uczestnicy, oraz ich rece, sa niezdolni do walki." << std::endl;
                        draw();
                    } else 
                    {
                        error();
                    }
                break;
            }
        }

    }

    void error() 
    {
        std::cout << "W talii nie ma takiej broni." <<std::endl;
        std::cout << "Sprobuj jeszcze raz!" <<std::endl;
        std::cout << "\n";
        gamePlay();
    }
    
    void error2() 
    {
        std::cout << "Nie wprowadzono zadnej z mozliwych opcji." <<std::endl;
        std::cout << "Sprobuj jeszcze raz!" <<std::endl;
        std::cout << "\n";
        jeszczeRaz();
    }

    int main ()
    {
        start();
        return 0;
    }

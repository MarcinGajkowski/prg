#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

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
    	std::cout << wins << " rund wygranych przez gracza\n";
        std::cout << losses << " rund przez gracza przegranych\n";		
		std::cout << draws << " remisów.\n";
		
		if (rocks == 1)
		{
        std::cout << "I " << rocks << " zabójczy remis!\n";
		};
		
        std::cout << "Dziękujemy za granie!\n";
        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    };

    void start() 
    {
    	std::cout << "0 - Kamulec   1 - Pistolet    2 - Karabin maszynowy\n";
    	std::cout << "3 - Strzelba   4 - Miotacz ognia    5 - Worek piachu\n";
    	std::cout << "6 - Maczeta   7 - Siekiera (obustronna)   8 - Młot\n";
    	std::cout << "9 - Kopia (rycerska)   10 - Półtorak (Miecz długi)\n";
    	gamePlay();
    };
    
  /*  void wybierz()
    {
    	std::cout << "Chcesz grać z komputerem czy z drugą osobą? <COM>(1) / <2P>(2) \n";
    	std::cout << "Wybierasz: ";
        std::cin >> gracz;
            if (gracz == "COM" || gracz == "1") 
            {
                std::cout << "To pokonaj to pudło!\n";
                std::cout << "\n";
                start();
            } else if (gracz == "2P" || gracz == "2") 
            {
                std::cout << "W takim razie zapraszamy was obu!\n";
                std::cout << "\n";
                gamePlay();
            } else
            {
                error2();
            }
    }*/

    void jeszczeRaz() 
    {
        std::cout << "Chcesz grać kolejną rundę z komputerem? <y> / <n> \n";
        std::cout << "Wybierasz: ";
        std::cin >> gracz;
            if (gracz == "y") 
            {
                std::cout << "No to wracaj do walki!\n";
                std::cout << "\n";
                gamePlay();
            } else if (gracz == "n") 
            {
                std::cout << "Zobaczymy się następnym razem...\n";
                std::cout << "\n";
                rezulTaty();
            } else
            {
                error2();
            }
    };


    void draw() 
    {
        std::cout << "Remis!\n";
        draws++;
        std::cout << "\n";
        jeszczeRaz();
    };

    void epicWin() 
    {
        std::cout << "Wygrana!\n";
        wins++;
        std::cout << "\n";
        jeszczeRaz();
    };

    void soSad() 
    {
        std::cout << "Przegrana...\n";
        losses++;
        std::cout << "\n";
        jeszczeRaz();
    };
    
    void dajKamienia() 
    {
        std::cout << "Zabójczy remis! Koniec gry!\n";
        rocks++;
        std::cout << "\n";
        rezulTaty();
    };



    void gamePlay() 
    {
        std::cout << "Wybierz broń do pokonania przeciwnika: \n";
        std::cout << "Wybrano: ";
        std::cin >> gracz;
            srand(time(0));
            roll = 0 + rand() % 11;
        std::cout << "\n";
        switch (roll) 
        {
             case 0:
             {
                std::cout << "Przeciwnik wybrał KAMULEC.\n";
                    if (gracz == "kamulec" || gracz == "0") 
                    {
                        std::cout << "Obaj zmiażdzyliście się wielkimi kamulcami! A to pech.\n";
                        dajKamienia();
                    }
                    else if (gracz == "pistolet" || gracz == "1") 
                    {
                        std::cout << "Zostałeś zmiażdzony przez kamulec.\n";
                        soSad();
                    }
                    else if (gracz == "karabin" || gracz == "karabin maszynowy" || gracz == "2") 
                    {
                        std::cout << "Zostałeś zmiażdzony przez kamulec.\n";
                        soSad();
                    }
                    else if (gracz == "strzelba" || gracz == "3") 
                    {
                        std::cout << "Zostałeś zmiażdzony przez kamulec.\n";
                        soSad();
                    }
                    else if (gracz == "miotacz" || gracz == "miotacz ognia" || gracz == "4") 
                    {
                        std::cout << "Zostałeś zmiażdzony przez kamulec.\n";
                        soSad();
                    }
                    else if (gracz == "worek" || gracz == "worek piachu" || gracz == "5") 
                    {
                        std::cout << "Wysypałeś na ziemię tyle piachu, że kamulec nie zdołał jej dotknąć!\n";
                        std::cout << "Potem z niewielkim trudem popchnąłeś kamulec ze szczytu piaskowego pagórka wprost na przeciwnika!\n";
                        epicWin();
                    }
                    else if (gracz == "maczeta" || gracz == "6") 
                    {
                        std::cout << "Zostałeś zmiażdzony przez kamulec.\n";
                        soSad();
                    }
                    else if (gracz == "siekiera" || gracz == "siekiera obustronna" || gracz == "7") 
                    {
                        std::cout << "Zostałeś zmiażdzony przez kamulec.\n";
                        soSad();
                    }
                    else if (gracz == "mlot" || gracz == "młot" || gracz == "8") 
                    {
                        std::cout << "Rozkruszyłeś przeciwnika, wraz z kamulcem, w proch!\n";
                        epicWin();
                    }
                    else if (gracz == "kopia" || gracz == "kopia rycerska" || gracz == "9") 
                    {
                        std::cout << "Zostałeś zmiażdzony przez kamulec.\n";
                        soSad();
                    }
                    else if (gracz == "poltorak" || gracz == "półtorak" || gracz == "miecz" || gracz == "miecz długi" || gracz == "10") 
                    {
                        std::cout << "Zostałeś zmiażdzony przez kamulec.\n";
                        soSad();
                    } else
                    {
                        error();
                    }
                break;
            }
            case 1:
            {
                std::cout << "Przeciwnik wybrał PISTOLET.\n";
                    if (gracz == "kamulec" || gracz == "0") 
                    {
                        std::cout << "Zmiażdzyłeś przeciwnika kamulcem!\n";
                        epicWin();
                    }
                    else if (gracz == "pistolet" || gracz == "1") 
                    {
                        std::cout << "Obaj wystrzeliliście sobie pistolet z rąk! Ale bez żadnych mocnych ran.\n";
                        draw();
                    }
                    else if (gracz == "karabin" || gracz == "karabin maszynowy" || gracz == "2") 
                    {
                        std::cout << "Pokonałeś pojedynczy pocisk przeciwnika ptwoją przewagą pliczbową!\n";
                        epicWin();
                    }
                    else if (gracz == "strzelba" || gracz == "3") 
                    {
                        std::cout << "Może strzelba przeważa czystą mocą, ale tutaj pistolet przeważył zasięgiem.\n";
                        soSad();
                    }
                    else if (gracz == "miotacz" || gracz == "miotacz ognia" || gracz == "4") 
                    {
                        std::cout << "Fala ognia onieśmieliła nabój przeciwnika oraz go soczyście upiekła!\n";
                        epicWin();
                    }
                    else if (gracz == "worek" || gracz == "worek piachu" || gracz == "5") 
                    {
                        std::cout << "Oślepiłeś przeciwnika przed strzałem i porządnie go sprałeś!\n";
                        epicWin();
                    }
                    else if (gracz == "maczeta" || gracz == "6") 
                    {
                        std::cout << "CO ty myślałeś biorąc maczetę do strzelaniny?\n";
                        soSad();
                    }
                    else if (gracz == "siekiera" || gracz == "siekiera obustronna" || gracz == "7")
                    {
                        std::cout << "Jeden pocisk zdołał przeciąć przez twoją defensywę zanim ty mogłeś cokolwiek sieknąć...\n";
                        soSad();
                    }
                    else if (gracz == "mlot" || gracz == "młot" || gracz == "8") 
                    {
                        std::cout << "Zastrzelono cię zanim mogłeś machnąć młotem...\n";
                        soSad();
                    }
                    else if (gracz == "kopia" || gracz == "kopia rycerska" || gracz == "9") 
                    {
                        std::cout << "Nasz tutaj bandyta nie poszanował twojego kodu rycerskiego.\n";
                        soSad();
                    }
                    else if (gracz == "poltorak" || gracz == "półtorak" || gracz == "miecz" || gracz == "miecz długi" || gracz == "10") 
                    {
                        std::cout << "Może to i miecz długi, ale kule to kurde szybko lecą.\n";
                        soSad();
                    } else 
                    {
                        error();
                    }
                break;
            }
            case 2:
            {
                std::cout << "Przeciwnik wybrał KARABIN MASZYNOWY.\n";
                    if (gracz == "kamulec" || gracz == "0") 
                    {
                        std::cout << "Zmiażdzyłeś przeciwnika kamulcem!\n";
                        epicWin();
                    }
                    else if (gracz == "pistolet" || gracz == "1") 
                    {
                        std::cout << "Spróbowałeś strzelić w twojego oponenta swoją jedną kulą.\n";
                        std::cout << "Twoją chybiłeś, ale w zamian przeciwnik oddał ci z jakieś 50 swoich!\n";
                        std::cout << "Chociaż mogł to zrobić w ładniejszy sposób...\n";
                        soSad();
                    }
                    else if (gracz == "karabin" || gracz == "karabin maszynowy" || gracz == "2") 
                    {
                        std::cout << "Udało ci się, kula w kulę, dopasować do wystrzałów karabinu przeciwnika.\n";
                        std::cout << "Jak taka mała konstelacja, prawie że...\n";
                        draw();
                    }
                    else if (gracz == "strzelba" || gracz == "3") 
                    {
                        std::cout << "Żeby udowodnić jak bardzo dobry jesteś ze strzelbą w ręku...\n";
                        std::cout << "...postanawiasz strzelić z niej w środku salta!\n";
                        std::cout << "Sędziowie daliby saltu 3/10, ale przynajmniej zestrzeliłeś oponentowi ręce z maszynówki.\n";
                        epicWin();
                    }
                    else if (gracz == "miotacz" || gracz == "miotacz ognia" || gracz == "4") 
                    {
                        std::cout << "Huragan nabojów maszynówki okazał się siłą zbyt dużą dla fali płomieni.\n";
                        soSad();
                    }
                    else if (gracz == "worek" || gracz == "worek piachu" || gracz == "5") 
                    {
                        std::cout << "Prawie że ślepy rozrzut maszynówki szybko przedziurawił worek piachu.\n";
                        std::cout << "Oraz twoje szanse na omamienie przeciwnika.\n";
                        soSad();
                    }
                    else if (gracz == "maczeta" || gracz == "6") 
                    {
                        std::cout << "Karabinek sprawnie zrobił z maczety ementaler zanim ty mogłeś przeciwnika pociąć na plasterki...\n";
                        soSad();
                    }
                    else if (gracz == "siekiera" || gracz == "siekiera obustronna" || gracz == "7")
                    {
                        std::cout << "Użyłeś twojej siekiery jako kuloodpornej tarczy!\n";
                        std::cout << "Udało ci się wytrzymać cały magazynek i zadać kontratak!\n";
                        epicWin();
                    }
                    else if (gracz == "mlot" || gracz == "młot" || gracz == "8") 
                    {
                        std::cout << "Twój młot był zbyt ciężki, byś mógł go podnieść przed dotarciem salwy z maszynówki.\n";
                        soSad();
                    }
                    else if (gracz == "kopia" || gracz == "kopia rycerska" || gracz == "9") 
                    {
                        std::cout << "Twoje treningi rycerskie nie przygotowały cię do takiej ilości pocisków.\n";
                        soSad();
                    }
                    else if (gracz == "poltorak" || gracz == "półtorak" || gracz == "miecz" || gracz == "miecz długi" || gracz == "10") 
                    {
                        std::cout << "Twój miecz okazał się dość długi, aby odciąć maszynówkę od rąk przeciwnika!\n";
                        std::cout << "Po co komu karabinek jeśli nie da się go trzymać?\n";
                        epicWin();
                    } else 
                    {
                        error();
                    }
                break;
            }
            case 3:
            {
                std::cout << "Przeciwnik wybrał STRZELBĘ.\n";
                    if (gracz == "kamulec" || gracz == "0") 
                    {
                        std::cout << "Zmiażdzyłeś przeciwnika kamulcem!\n";
                        epicWin();
                    }
                    else if (gracz == "pistolet" || gracz == "1") 
                    {
                        std::cout << "Dobrze, że taki pocisk może lecieć dalej niż szrapnel!\n";
                        epicWin();
                    }
                    else if (gracz == "karabin" || gracz == "karabin maszynowy" || gracz == "2") 
                    {
                        std::cout << "Zanim mogłeś rozpocząć swój atak, twój przeciwnik skoczył wzwyż i zrobił salto!\n";
                        std::cout << "Będąc oszołomionym jego talentem gimnastycznym, nawet nie zauwazyłeś lufy strzelby przy twoim czole.\n";
                        soSad();
                    }
                    else if (gracz == "strzelba" || gracz == "3") 
                    {
                        std::cout << "Obaj spróbowaliście ostrożnie zbliżyć się do ataku...\n";
                        std::cout << "...ale nikt nie chciał strzelić jako pierwszy.\n";
                        std::cout << "Po dobrej godzinie impasu, zdecydowaliście, że gra nie jest warta świeczki.\n";
                        draw();
                    }
                    else if (gracz == "miotacz" || gracz == "miotacz ognia" || gracz == "4") 
                    {
                        std::cout << "Chmura szrapnelu to nic w porównaniu do twojego huraganu ognia!\n";
                        epicWin();
                    }
                    else if (gracz == "worek" || gracz == "worek piachu" || gracz == "5") 
                    {
                        std::cout << "Przeciwnik niechlujnie rozpruł worek strzałem ze strzelby.\n";
                        soSad();
                    }
                    else if (gracz == "maczeta" || gracz == "6") 
                    {
                        std::cout << "Zdołałeś oberznąć lufę strzelby do długości zbyt małej do funkcjonowania!\n";
                        std::cout << "Trochę nawet nieładnie taki obrzyn obrzynać...\n";
                        epicWin();
                    }
                    else if (gracz == "siekiera" || gracz == "siekiera obustronna" || gracz == "7")
                    {
                        std::cout << "Przeciwnik zdołał odstrzelić ostrze twojej siekiery od jej trzonu.\n";
                        std::cout << "Nie chcesz wiedzieć, gdzie ono wylądowało...\n";
                        soSad();
                    }
                    else if (gracz == "mlot" || gracz == "młot" || gracz == "8") 
                    {
                        std::cout << "Przeciwnik odstrzelił głowę młota zanim go zdołałeś podnieść.\n";
                        std::cout << "A samym drewnianym patykiem to chyba mało zdołasz.\n";
                        soSad();
                    }
                    else if (gracz == "kopia" || gracz == "kopia rycerska" || gracz == "9") 
                    {
                        std::cout << "Dzięki niesamowitej długości twojej kopii, zdołałeś zatkać broń twojego adwersarza zaraz przed atakiem!\n";
                        std::cout << "Po naciśnięciu spustu strzelba wybuchła prosto w twarz przeciwnika!\n";
                        epicWin();
                    }
                    else if (gracz == "poltorak" || gracz == "półtorak" || gracz == "miecz" || gracz == "miecz długi" || gracz == "10") 
                    {
                        std::cout << "Swoim potężnym zasięgiem i ostrością zdołałeś odciąć wrogowi dostęp do strzelby.\n";
                        std::cout << "A poza tym odciąłeś mu ręce i nogi. Bo czemu nie.\n";
                        std::cout << "A ta twoja utracona ręka? To tylko draśnięcie...\n";
                        epicWin();
                    } else 
                    {
                        error();
                    }
                break;
            }
            case 4:
            {
                std::cout << "Przeciwnik wybrał MIOTACZ OGNIA.\n";
                    if (gracz == "kamulec" || gracz == "0") 
                    {
                        std::cout << "Zmiażdzyłeś przeciwnika kamulcem!\n";
                        epicWin();
                    }
                    else if (gracz == "pistolet" || gracz == "1") 
                    {
                        std::cout << "Kula z twojego pistoletu szybko stopiła się w natarczającej chmurze płomieni.\n";
                        std::cout << "A ty się upiekłeś wraz z nią.\n";
                        soSad();
                    }
                    else if (gracz == "karabin" || gracz == "karabin maszynowy" || gracz == "2") 
                    {
                        std::cout << "Sztorm pocisków z karabinu szybko przedarł się przez ścianę płomieni wprost do przeciwnika!\n";
                        epicWin();
                    }
                    else if (gracz == "strzelba" || gracz == "3") 
                    {
                        std::cout << "Wybuch z twojej strzelby zostaje szybko onieśmielony przez natarczywą falę ognia.\n";
                        soSad();
                    }
                    else if (gracz == "miotacz" || gracz == "miotacz ognia" || gracz == "4") 
                    {
                        std::cout << "Zwalczanie ognia ogniem w tym przypadku nic nie zdziałało.\n";
                        draw();
                    }
                    else if (gracz == "worek" || gracz == "worek piachu" || gracz == "5") 
                    {
                        std::cout << "Rozsypnięcie całej wręcz burzy piaskowej zdołało otłumić pożar!\n";
                        std::cout << "Zatkała ona też lufę miotacza, przez co stał sie bezużytecznym!\n";
                        epicWin();
                    }
                    else if (gracz == "maczeta" || gracz == "6") 
                    {
                        std::cout << "Może Maczetę z filmu 'Maczeta (2010)' można uważać za 'fajnego'...\n";
                        std::cout << "...ale samymi maczetami to chyba z eksplozji nie wychodził.\n";
                        soSad();
                    }
                    else if (gracz == "siekiera" || gracz == "siekiera obustronna" || gracz == "7")
                    {
                        std::cout << "Siekiery/topory są podstawowym przyrządem w walce z pożarem.\n";
                        std::cout << "Pożytecznym przy wybijaniu np. ścian drewnianych. Niestety nie ognistych.\n";
                        soSad();
                    }
                    else if (gracz == "mlot" || gracz == "młot" || gracz == "8") 
                    {
                        std::cout << "Twój stalowy młot zdołał skutecznie ochronić cię przed falą płomieni!\n";
                        std::cout << "Po zużyciu wszystek paliwa zadałeś oponenetowi brutalny cios!\n";
                        epicWin();
                    }
                    else if (gracz == "kopia" || gracz == "kopia rycerska" || gracz == "9") 
                    {
                        std::cout << "Zdołałes swoją kopią zatkać lufę miotacza tak, że biedne smoczysko nie mogło nic z gardzieli wyrzucić!\n";
                        std::cout << "A potem skopałeś mu tyłek!\n";
                        epicWin();
                    }
                    else if (gracz == "poltorak" || gracz == "półtorak" || gracz == "miecz" || gracz == "miecz długi" || gracz == "10") 
                    {
                        std::cout << "Pomimo zadziwiającej długości swego oręża, nie miałeś jak obejść jakże szerokiej fali niecnych płomyków.\n";
                        soSad();
                    } else 
                    {
                        error();
                    }
                break;
            }
            case 5:
            {
                std::cout << "Przeciwnik wybrał WOREK PIACHU.\n";
                    if (gracz == "kamulec" || gracz == "0") 
                    {
                        std::cout << "Kamulec, zamiast na wrogu, wylądował na wielkim piaszczystym pagórku!\n";
                        std::cout << "Po tym historia tylko stacza w dół...\n";
                        soSad();
                    }
                    else if (gracz == "pistolet" || gracz == "1") 
                    {
                        std::cout << "Przeciwnik oślepił cię nagłą chmurą piasku!\n";
                        std::cout << "Zaraz potem zostałeś mocno pacnięty ciężkim workiem z juty.\n";
                        soSad();
                    }
                    else if (gracz == "karabin" || gracz == "karabin maszynowy" || gracz == "2") 
                    {
                        std::cout << "Karabin szybko przedziurawił worek, zostawiając przeciwnika praktycznie bezbronnym!\n";
                        epicWin();
                    }
                    else if (gracz == "strzelba" || gracz == "3") 
                    {
                        std::cout << "Dwa pociągnięcia spustu efektywnie rozpruły worek oraz rozprawiły się z oponentem!\n";
                        epicWin();
                    }
                    else if (gracz == "miotacz" || gracz == "miotacz ognia" || gracz == "4") 
                    {
                        std::cout << "Przeciwnik wysłał na ciebie tak silną burzę piaskową, że miotacz ci się zatkał!\n";
                        std::cout << "I chęci zgaszone...\n";
                        soSad();
                    }
                    else if (gracz == "worek" || gracz == "worek piachu" || gracz == "5") 
                    {
                        std::cout << "Obaj wywaliliście na siebie wielkie chmury piaskowe.\n";
                        std::cout << "Problem w tym, że teraz nic nie widać i nikt nie wie, gdzie i czym ma celować.\n";
                        draw();
                    }
                    else if (gracz == "maczeta" || gracz == "6") 
                    {
                        std::cout << "Maczeta zwinnie przecięła worek na pół!\n";
                        std::cout << "Obciąłeś wrogowi wszystkie opcje!\n";
                        epicWin();
                    }
                    else if (gracz == "siekiera" || gracz == "siekiera obustronna" || gracz == "7")
                    {
                        std::cout << "Jednym machnięciem siekiery wyrzuciłeś przeciwnikowi worek z rąk!\n";
                        std::cout << "A drugim zwróciłeś go prosto w jego twarz!\n";
                        epicWin();
                    }
                    else if (gracz == "mlot" || gracz == "młot" || gracz == "8") 
                    {
                        std::cout << "Na szczęście twój młot spotykał znacznie straszniejsze przeszkody niż jakiś tam worek.\n";
                        epicWin();
                    }
                    else if (gracz == "kopia" || gracz == "kopia rycerska" || gracz == "9") 
                    {
                        std::cout << "Twoja kopia przedziurawiła worek bez problemu.\n";
                        std::cout << "Próbując podnieść swoją broń po udanym ataku, nie zauważasz...\n";
                        std::cout << "...że przeciwnik zaczął surfować na wielkim piaskowym tsunami, idącym wprost na ciebie!\n";
                        soSad();
                    }
                    else if (gracz == "poltorak" || gracz == "półtorak" || gracz == "miecz" || gracz == "miecz długi" || gracz == "10")  
                    {
                        std::cout << "Twój zacny miecz szybko przeszył przez plany przeciwnika, rozrywając worek od środka!\n";
                        std::cout << "Nawet obu rąk nie trzeba było używać...\n";
                        epicWin();
                    } else 
                    {
                        error();
                    }
                break;
            }
            case 6:
            {
                std::cout << "Przeciwnik wybrał MACZETĘ.\n";
                    if (gracz == "kamulec" || gracz == "0") 
                    {
                        std::cout << "Zmiażdzyłeś przeciwnika kamulcem!\n";
                        epicWin();
                    }
                    else if (gracz == "pistolet" || gracz == "1") 
                    {
                        std::cout << "Maczeta przeciwnika nie była dość ostra, żeby przeciąć nadciągajacy mu pocisk.\n";
                        epicWin();
                    }
                    else if (gracz == "karabin" || gracz == "karabin maszynowy" || gracz == "2") 
                    {
                        std::cout << "Karabinek szybko przemienił maczetę na ekstrawagancki nóż do sera.\n";
                        epicWin();
                    }
                    else if (gracz == "strzelba" || gracz == "3") 
                    {
                        std::cout << "Maczeta momentalnie podzieliła twoją strzelbę na dwie części!\n";
                        std::cout << "I z żadną z nich nie zdołasz nic zrobić!\n";
                        soSad();
                    }
                    else if (gracz == "miotacz" || gracz == "miotacz ognia" || gracz == "4") 
                    {
                        std::cout << "Przeciwnik próbował przełamać się przez ogień maczetą.\n";
                        std::cout << "Na szczęście, nawet gdyby miał ich z 30 pod ręką, to one nic by mu nie dały.\n";
                        epicWin();
                    }
                    else if (gracz == "worek" || gracz == "worek piachu" || gracz == "5") 
                    {
                        std::cout << "Maczeta uporała się z twoim workiem po jednym cięciu.\n";
                        std::cout << "Nie wiem, czemu miałbyś się spodziewać czegoś innego.\n";
                        soSad();
                    }
                    else if (gracz == "maczeta" || gracz == "6") 
                    {
                        std::cout << "Wraz z przeciwnikiem rozpoczęliście epicką walkę na maczety!\n";
                        std::cout << "Tak, jak legenda głosi, równa, że podobno obaj walczycie tam po dziś dzień...\n";
                        draw();
                    }
                    else if (gracz == "siekiera" || gracz == "siekiera obustronna" || gracz == "7")
                    {
                        std::cout << "Zwinność przeciwnika z maczetą w ręku przewyższyła nad czystą siłą twojej siekiery.\n";
                        soSad();
                    }
                    else if (gracz == "mlot" || gracz == "młot" || gracz == "8")
                    {
                        std::cout << "Maczeta w mig poszatkowała trzon młota na kawałki, zmuszając cię (dosłownie) do rzucenia broni.\n";
                        soSad();
                    }
                    else if (gracz == "kopia" || gracz == "kopia rycerska" || gracz == "9") 
                    {
                        std::cout << "Przeciwnik zdołał odepchnąć twoje pchnięcie kopią i w odpowiedzi rzucił maczetę wprost na twoją twarz!\n";
                        std::cout << "Nie pamiętam, żeby używali takich taktyk w średniowieczu...\n";
                        soSad();
                    }
                    else if (gracz == "poltorak" || gracz == "półtorak" || gracz == "miecz" || gracz == "miecz długi" || gracz == "10")  
                    {
                        std::cout << "W porównaniu z twoim szlachetnym ostrzem, taka tyci szabelka nie ma żadnych szans na wygraną.\n";
                        epicWin();
                    } else 
                    {
                        error();
                    }
                break;
            }
            case 7:
            {
                std::cout << "Przeciwnik wybrał SIEKIERĘ.\n";
                    if (gracz == "kamulec" || gracz == "0") 
                    {
                        std::cout << "Zmiażdzyłeś przeciwnika kamulcem!\n";
                        epicWin();
                    }
                    else if (gracz == "pistolet" || gracz == "1") 
                    {
                        std::cout << "Przeciwnik użył siekiery jako tarczy kuloodpornej!\n";
                        std::cout << "Na szczęście, jeden precyzyjny strzał przedarł się wprost przez nią!\n";
                        epicWin();
                    }
                    else if (gracz == "karabin" || gracz == "karabin maszynowy" || gracz == "2") 
                    {
                        std::cout << "Przeciwnik użył siekiery jako tarczy kuloodpornej!\n";
                        std::cout << "Ślepy ostrzał maszynówki nie mógł się przez nią przedrzeć!\n";
                        std::cout << "I akurat magazynek ci się skończył...\n";
                        soSad();
                    }
                    else if (gracz == "strzelba" || gracz == "3") 
                    {
                        std::cout << "Odstrzeliłeś ostrze siekiery od jej trzonu!\n";
                        std::cout << "Ostrze wylądowało w bardzo niefortunnym miejscu!\n";
                        epicWin();
                    }
                    else if (gracz == "miotacz" || gracz == "miotacz ognia" || gracz == "4") 
                    {
                        std::cout << "Siekiera nie zdolała uratować oponenta od twojego natarczywego pożaru.\n";
                        epicWin();
                    }
                    else if (gracz == "worek" || gracz == "worek piachu" || gracz == "5") 
                    {
                        std::cout << "Przeciwnik zmiótł siekierą twój worek, a potem zwrócił go z podwójną siłą!\n";
                        std::cout << "Jak miło z jego strony!\n";
                        soSad();
                    }
                    else if (gracz == "maczeta" || gracz == "6") 
                    {
                        std::cout << "Twoje szybkie ruchy maczetą tak sprawnie onieśmieliły wroga, że ledwo się trzymał siekiery!\n";
                        epicWin();
                    }
                    else if (gracz == "siekiera" || gracz == "siekiera obustronna" || gracz == "7")
                    {
                        std::cout << "Obaj zawzięcie machnęliście swoimi siekierami.\n";
                        std::cout << "Jakimś dziwnym trafem, obie odcięły sobie ostrza od trzonów, zostawiając was tylko z samymi patykami.\n";
                        draw();
                    }
                    else if (gracz == "mlot" || gracz == "młot" || gracz == "8")
                    {
                        std::cout << "Nie mogłeś podnieść młotu w czasie, by obronić się przed dzikim atakiem siekierą.\n";
                        soSad();
                    }
                    else if (gracz == "kopia" || gracz == "kopia rycerska" || gracz == "9") 
                    {
                        std::cout << "Czy wspominałem, że kopie są w większości robione z drewna?\n";
                        soSad();
                    }
                    else if (gracz == "poltorak" || gracz == "półtorak" || gracz == "miecz" || gracz == "miecz długi" || gracz == "10")  
                    {
                        std::cout << "Twoje umiejętności w sztuce fechtunku przeważyły nad barbarzyńską naturą siekiery.\n";
                        epicWin();
                    } else 
                    {
                        error();
                    }
                break;
            }
            case 8:
            {
                std::cout << "Przeciwnik wybrał MŁOT.\n";
                    if (gracz == "kamulec" || gracz == "0") 
                    {
                        std::cout << "Przeciwnik zdołał rozkruszyć kamulca!\n";
                        std::cout << "Oraz twoje marzenia...\n";
                        soSad();
                    }
                    else if (gracz == "pistolet" || gracz == "1") 
                    {
                        std::cout << "Zastrzeliłeś przeciwnika zaraz przed machnięciem młota!\n";
                        epicWin();
                    }
                    else if (gracz == "karabin" || gracz == "karabin maszynowy" || gracz == "2") 
                    {
                        std::cout << "Twoja maszynówka przekopała przeciwnika z powrotem do fabryki!\n";
                        epicWin();
                    }
                    else if (gracz == "strzelba" || gracz == "3") 
                    {
                        std::cout << "Przestrzeliłeś wprost przez trzon młota!\n";
                        std::cout << "Przeciwnik został zmiażdzony pod jego ogromnym obuchem!\n";
                        epicWin();
                    }
                    else if (gracz == "miotacz" || gracz == "miotacz ognia" || gracz == "4") 
                    {
                        std::cout << "Przeciwnik zdołał się ukryć przed natarciem fali płomieni!\n";
                        std::cout << "I akurat skończyło ci się paliwo...\n";
                        soSad();
                    }
                    else if (gracz == "worek" || gracz == "worek piachu" || gracz == "5") 
                    {
                        std::cout << "Spróbowałeś pokiereszować stalowy młot worem piachu.\n";
                        std::cout << "Czego się spodziewałeś? Hmm?\n";
                        soSad();
                    }
                    else if (gracz == "maczeta" || gracz == "6") 
                    {
                        std::cout << "Poszatkowałeś trzon młotka na cienkie słupki.\n";
                        std::cout << "A przeciwnikowi szanse na wygraną!\n";
                        epicWin();
                    }
                    else if (gracz == "siekiera" || gracz == "siekiera obustronna" || gracz == "7")
                    {
                        std::cout << "Odciąłeś przeciwnikowi głowę... młota.\n";
                        std::cout << "Przez co zostawiłeś oponenta bezbronnym!\n";
                        epicWin();
                    }
                    else if (gracz == "mlot" || gracz == "młot" || gracz == "8") 
                    {
                        std::cout << "Uderzyliście siebie młot w młot w tym samym momencie!\n";
                        std::cout << "Poszło trochę wibracji, ale, na szczęście, poszło bez obrażen.\n";
                        draw();
                    } 
                    else if (gracz == "kopia" || gracz == "kopia rycerska" || gracz == "9") 
                    {
                        std::cout << "Przedziurawiłeś adwersarza zanim mógł podnieść swój młot!\n";
                        epicWin();
                    }
                    else if (gracz == "poltorak" || gracz == "półtorak" || gracz == "miecz" || gracz == "miecz długi" || gracz == "10")  
                    {
                        std::cout << "Młot przeciwnika był tak twardy, że złamał twój miecz na pół!\n";
                        std::cout << "A wraz z nim twoje morale. I nadzieje...\n";
                        soSad();
                    } else 
                    {
                        error();
                    }
                break;
            }
            case 9:
            {
                std::cout << "Przeciwnik wybrał KOPIĘ.\n";
                    if (gracz == "kamulec" || gracz == "0") 
                    {
                        std::cout << "Zmiażdzyłeś przeciwnika kamulcem!\n";
                        epicWin();
                    }
                    else if (gracz == "pistolet" || gracz == "1") 
                    {
                        std::cout << "Nie wiesz czemu twój przeciwnik przyniósł drewnianą kopię i zachowuje się jak rycerz.\n";
                        std::cout << "Bez dalszych myśli, strzelasz mu w łeb.\n";
                        epicWin();
                    }
                    else if (gracz == "karabin" || gracz == "karabin maszynowy" || gracz == "2") 
                    {
                        std::cout << "Nie rozumiesz, jak twój oponent ma pokonać cię w walce z twoim karabinem.\n";
                        std::cout << "Jedna salwa i po kłopocie.\n";
                        epicWin();
                    }
                    else if (gracz == "strzelba" || gracz == "3") 
                    {
                        std::cout << "Próbujesz odpalić ze strzelby, ale okazało się, że kopia przeciwnika utknęła w jej lufie.\n";
                        std::cout << "Nie wiesz, jak się ona mogła tam dostać.\n";
                        std::cout << "Desperacko próbując wyjąć ten drąg, przypadkowo wciskasz spust i strzelba wybucha ci w twarz.\n";
                        std::cout << "No cóż.\n";
                        soSad();
                    }
                    else if (gracz == "miotacz" || gracz == "miotacz ognia" || gracz == "4") 
                    {
                        std::cout << "Po włączeniu swojego miotacza, zauważasz, że ktoś wepchnął kopię rycerską do lufy.\n";
                        std::cout << "Nie rozumiesz, jak ten duży kawał drewna nie daje się podpalić.\n";
                        std::cout << "Nagle czujesz potężny kop spiczastym butem prosto w tyłek i słyszysz coś o 'pokonaniu smoczyska' czy coś w ten deseń.\n";
                        std::cout << "Decydujesz, że się poddajesz, i że wolałbyś spędzić czas gdzieś indziej.\n";
                        soSad();
                    }
                    else if (gracz == "worek" || gracz == "worek piachu" || gracz == "5") 
                    {
                        std::cout << "Nie rozumiesz, jak ktoś z tak głupkowatą bronią dostał się do tej areny.\n";
                        std::cout << "Nagle czujesz, że zostajesz podniesiony kilkanaście metrów wzwyż!\n";
                        std::cout << "Nie wiedząc, co się dzieje, trzymasz się swojego worka jak koła ratunkowego i zaczynasz zjeżdżać w dół!\n";
                        std::cout << "Zjeżdżasz coraz szybciej, aż w końcu wjeżdżasz całym ciałem na swego przeciwnika, nokautując go w mgnięciu oka.\n";
                        epicWin();
                    }
                    else if (gracz == "maczeta" || gracz == "6") 
                    {
                        std::cout << "Nie wiesz, o czym twój przeciwnik ciągle wygaduje.\n";
                        std::cout << "Bez dalszego zastanawiania się, odpychasz jego kopię na bok i rąbiesz go kilkanaście razy maczetą.\n";
                        epicWin();
                    }
                    else if (gracz == "siekiera" || gracz == "siekiera obustronna" || gracz == "7")
                    {
                        std::cout << "Nie wiesz, jak taki długi pal drewna ma cię powstrzymać.\n";
                        std::cout << "Bez dalszych pytań, rozdzielasz kopię na pół, a przeciwnika wraz z nią.\n";
                        epicWin();
                    }
                    else if (gracz == "mlot" || gracz == "młot" || gracz == "8") 
                    {
                        std::cout << "Nie masz czasu myśleć o twoim oponencie, bo musisz najpierw podnieść swój młot.\n";
                        std::cout << "Nagle czujesz, jakby ktoś zrobił ci wielką dziurę w brzuchu.\n";
                        std::cout << "Potem orientujesz się, ze twój przeciwnik naszpikował cię na jego kopię rycerską.\n";
                        std::cout << "No trudno.\n";
                        soSad();
                    }
                    else if (gracz == "kopia" || gracz == "kopia rycerska" || gracz == "9") 
                    {
                        std::cout << "W końcu znajdujesz przeciwnika równie podażającego za kodeksem rycerskim.\n";
                        std::cout << "Pomimo braku swoich rumaków, obaj szarżujecie na wprost siebie z kopiami w ręku.\n";
                        std::cout << "Po spotkaniu się na swojej drodze, zorientowaliście się, ze nikt nie zdołał spaść na ziemię!\n";
                        std::cout << "A więc tylko i wypada zadeklarować...\n";
                        draw();
                    }
                    else if (gracz == "poltorak" || gracz == "półtorak" || gracz == "miecz" || gracz == "miecz długi" || gracz == "10")  
                    {
                        std::cout << "Nie widzisz, jak taki marny giermek ma cię pokonać jakąś starą kopijką.\n";
                        std::cout << "Nie martwisz się tym i odcinasz mu obie ręce za jednym zamachem.\n";
                        epicWin();
                    } else 
                    {
                        error();
                    }
                break;
            }
            case 10:
            {
                std::cout << "Przeciwnik wybrał PÓŁTORAK.\n";
                    if (gracz == "kamulec" || gracz == "0") 
                    {
                        std::cout << "Zmiażdzyłeś przeciwnika kamulcem!\n";
                        epicWin();
                    }
                    else if (gracz == "pistolet" || gracz == "1") 
                    {
                        std::cout << "Współczesna technologia broni palnej okazała się zbyt szybka nawet dla takiego oręża.\n";
                        epicWin();
                    }
                    else if (gracz == "karabin" || gracz == "karabin maszynowy" || gracz == "2") 
                    {
                        std::cout << "Zanim mogłeś oddać porządną salwę, przeciwnik odciął ci ręce, wraz z karabinkiem!\n";
                        std::cout << "Półtorak zostawił cię zerorękim...\n";
                        soSad();
                    }
                    else if (gracz == "strzelba" || gracz == "3") 
                    {
                        std::cout << "Twoja strzelba nie mogła nawet pomarzyć o sięgnięciu połowy tego miecza.\n";
                        std::cout << "A ty mogłbyś pomarzyć o nowych kończynach.\n";
                        soSad();
                    }
                    else if (gracz == "miotacz" || gracz == "miotacz ognia" || gracz == "4") 
                    {
                        std::cout << "Styl i szermierka nie mają nic w porównaniu do świeżego zapachu napalmu.\n";
                        epicWin();
                    }
                    else if (gracz == "worek" || gracz == "worek piachu" || gracz == "5") 
                    {
                        std::cout << "Nawet ja nie wiem jak piasek mógłby obronić cię przed takim mieczem.\n";
                        std::cout << "Naprawdę, stary, brakuje mi pomysłów.\n";
                        soSad();
                    }
                    else if (gracz == "maczeta" || gracz == "6") 
                    {
                        std::cout << "W tym wypadku długość ostrza jednak ma znaczenie...\n";
                        soSad();
                    }
                    else if (gracz == "siekiera" || gracz == "siekiera obustronna" || gracz == "7")
                    {
                        std::cout << "Błędne szarżowanie w walkę z profesjonalnym szermierzem raczej nie jest mądre...\n";
                        soSad();
                    }
                    else if (gracz == "mlot" || gracz == "młot" || gracz == "8")
                    {
                        std::cout << "Może i najlepszą obroną jest atak..\n";
                        std::cout << "...ale nawet takie ostrze nie przedrze się przez żelazną defensywę twojego młota!\n";
                        epicWin();
                    }
                    else if (gracz == "kopia" || gracz == "kopia rycerska" || gracz == "9") 
                    {
                        std::cout << "Próbujesz z całej siły wszarżować w przeciwnika...\n";
                        std::cout << "...a później orientujesz się, dlaczego rycerze nie walczyli kopia w miecz.\n";
                        soSad();
                    }
                    else if (gracz == "poltorak" || gracz == "półtorak" || gracz == "miecz" || gracz == "miecz długi" || gracz == "10") 
                    {
                        std::cout << "Obaj szykujecie się na epicki pojedynek szermierczy.\n";
                        std::cout << "Byłby znacznie bardziej epicki, gdybyście oboje nie zaczęli starcia... celowaniem w ręce wroga.\n";
                        std::cout << "Po kilku zawziętych cięciach, obaj uczestnicy, oraz ich ręce, są niezdolni do walki.\n";
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
        std::cout << "W talii nie ma takiej broni.\n";
        std::cout << "Spróbuj jeszcze raz!\n";
        std::cout << "\n";
        gamePlay();
    };
    
    void error2() 
    {
        std::cout << "Nie wprowadzono żadnej z możliwych opcji.\n";
        std::cout << "Spróbuj jeszcze raz!\n";
        std::cout << "\n";
        jeszczeRaz();
    };

    int main ()
    {
    	std::cout << "Pora na rozgrywkę w Kamulec, Pistolet, Maczeta!\n";
    	std::cout << "Zmierz się z komputerem albo z drugim graczem w epickiej bitwie!\n";
        start();
        return 0;
    }

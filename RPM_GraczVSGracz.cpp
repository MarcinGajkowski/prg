#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <algorithm>

int P1wins;
int P2wins;
int rocks;
int sets;
std::string gracz;

void error2();
void talia(int sets);

void jeszczeRaz() 
{
	std::cout << "Chcecie grać kilka kolejnych rundek? <3> / <5> / <n> \n";
	std::cout << "Wybierasz: ";
    std::cin >> gracz;
    if (gracz == "3") 
    {
        std::cout << "No to wracajcie do walki!\n";
        std::cout << "\n";
        talia(3);
    }
    if (gracz == "5") 
    {
        std::cout << "No to wracajcie do walki!\n";
        std::cout << "\n";
        talia(5);
    }
    else if (gracz == "n") 
    {
    	std::cout << "Zobaczymy się następnym razem...\n";
        std::cout << "\n";
        std::cout << "Dziękujemy za granie!\n";
    	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    }
    else
    {
        error2();
    }
};

void error2() 
{
    std::cout << "Nie wprowadzono żadnej z możliwych opcji.\n";
    std::cout << "Spróbuj jeszcze raz!\n";
    std::cout << "\n";
    jeszczeRaz();
};

auto sortpls(std::vector<int>& vec) -> void 
{
    auto zmiana = true;
    for (auto j = 0; j < vec.size() && zmiana; j++) 
    {
        zmiana = false;
        for (auto i = 0; i < vec.size() - 1; i++) 
        {
            if (vec[i] > vec[i + 1]) 
            {
                auto chwil = vec[i];
                vec[i] = vec[i + 1];
                vec[i + 1] = chwil;
                zmiana = true;
        	}
        }
    }
}

void rezulTaty() 
{
    std::cout << P1wins << " wygranych P1\n";
    std::cout << P2wins << " wygranych P2\n";		
	
	if (rocks == 1)
	{
        std::cout << "I " << rocks << " zabójczy remis!\n";
	};
	
	jeszczeRaz();
};

void remove(std::vector<int> &vec)
{
    auto end = vec.end();
    for (auto it = vec.begin(); it != end; ++it) 
    {
        end = std::remove(it + 1, end, *it);
    }
 
    vec.erase(end, vec.end());
}

void szufelka(int sets, std::vector<int> vec)
{
	for (int k = 0; k < sets; k++)
	{
		int b = rand() % 11 + 0;
    	vec.push_back(b);
    	std::cout << "{ " << vec[k] << " }" << ' ';
    	sortpls(vec);
    	remove(vec);
	}
	std::cout << "\n";
}

void clear()
{
	std::cout << "\x1B[2J\x1B[H";
}

void P1Dub()
{
	std::cout << "Gracz 1 wygrywa rundę!\n";
	P1wins++;
	std::cout << "\n";
}

void P2Dub()
{
	std::cout << "Gracz 2 wygrywa rundę!\n";
	P2wins++;
	std::cout << "\n";
}

void RocksLmao()
{
	std::cout << "Zabójczy remis! Koniec gry!\n";
	rocks++;
	std::cout << "\n";
	rezulTaty();
}

int matchup(const int& gracz1, const int& gracz2)
{
  if (gracz1 == 0 && gracz2 == 0) 
  {
	RocksLmao();
  } 
  else if (gracz1 == 0 && gracz2 ==  1) 
  {
    P1Dub();
  } 
  else if (gracz1 == 0 && gracz2 ==  2) 
  {
    P1Dub();
  } 
  else if (gracz1 == 0 && gracz2 == 3) 
  {
    P1Dub();
  } 
  else if (gracz1 == 0 && gracz2 == 4) 
  {
    P1Dub();
  } 
  else if (gracz1 == 0 && gracz2 == 5) 
  {
    P2Dub();
  } 
  else if (gracz1 == 0 && gracz2 == 6) 
  {
    P1Dub();
  } 
  else if (gracz1 == 0 && gracz2 == 7) 
  {
    P1Dub();
  } 
  else if (gracz1 == 0 && gracz2 == 8) 
  {
    P2Dub();
  }
  else if (gracz1 == 0 && gracz2 == 9) 
  {
    P1Dub();
  }
  else if (gracz1 == 0 && gracz2 == 10) 
  {
    P1Dub();
  }
  else if (gracz1 == 1 && gracz2 == 0) 
  {
    P2Dub();
  }
  else if (gracz1 == 1 && gracz2 == 2) 
  {
    P2Dub();
  }
  else if (gracz1 == 1 && gracz2 == 3) 
  {
    P1Dub();
  }
  else if (gracz1 == 1 && gracz2 == 4) 
  {
    P2Dub();
  }
  else if (gracz1 == 1 && gracz2 == 5) 
  {
    P2Dub();
  }
  else if (gracz1 == 1 && gracz2 == 6) 
  {
    P1Dub();
  }
  else if (gracz1 == 1 && gracz2 == 7) 
  {
    P1Dub();
  }
  else if (gracz1 == 1 && gracz2 == 8) 
  {
    P1Dub();
  }
  else if (gracz1 == 1 && gracz2 == 9) 
  {
    P1Dub();
  }
  else if (gracz1 == 1 && gracz2 == 10) 
  {
    P1Dub();
  }
  else if (gracz1 == 2 && gracz2 == 0) 
  {
    P2Dub();
  }
  else if (gracz1 == 2 && gracz2 == 1) 
  {
    P1Dub();
  }
  else if (gracz1 == 2 && gracz2 == 3) 
  {
    P2Dub();
  }
  else if (gracz1 == 2 && gracz2 == 4) 
  {
    P1Dub();
  }
  else if (gracz1 == 2 && gracz2 == 5) 
  {
    P1Dub();
  }
  else if (gracz1 == 2 && gracz2 == 6) 
  {
    P1Dub();
  }
  else if (gracz1 == 2 && gracz2 == 7) 
  {
    P2Dub();
  }
  else if (gracz1 == 2 && gracz2 == 8) 
  {
    P1Dub();
  }
  else if (gracz1 == 2 && gracz2 == 9) 
  {
    P1Dub();
  }
  else if (gracz1 == 2 && gracz2 == 10) 
  {
    P2Dub();
  }
  else if (gracz1 == 3 && gracz2 == 0) 
  {
    P2Dub();
  }
  else if (gracz1 == 3 && gracz2 == 1) 
  {
    P2Dub();
  }
  else if (gracz1 == 3 && gracz2 == 2) 
  {
    P1Dub();
  }
  else if (gracz1 == 3 && gracz2 == 4) 
  {
    P2Dub();
  }
  else if (gracz1 == 3 && gracz2 == 5) 
  {
    P1Dub();
  }
  else if (gracz1 == 3 && gracz2 == 6) 
  {
    P2Dub();
  }
  else if (gracz1 == 3 && gracz2 == 7) 
  {
    P1Dub();
  }
  else if (gracz1 == 3 && gracz2 == 8) 
  {
    P1Dub();
  }
  else if (gracz1 == 3 && gracz2 == 9) 
  {
    P2Dub();
  }
  else if (gracz1 == 3 && gracz2 == 10) 
  {
    P2Dub();
  }
  else if (gracz1 == 4 && gracz2 == 0) 
  {
    P2Dub();
  }
  else if (gracz1 == 4 && gracz2 == 1) 
  {
    P1Dub();
  }
  else if (gracz1 == 4 && gracz2 == 2) 
  {
    P2Dub();
  }
  else if (gracz1 == 4 && gracz2 == 3) 
  {
    P1Dub();
  }
  else if (gracz1 == 4 && gracz2 == 5) 
  {
    P2Dub();
  }
  else if (gracz1 == 4 && gracz2 == 6) 
  {
    P1Dub();
  }
  else if (gracz1 == 4 && gracz2 == 7) 
  {
    P1Dub();
  }
  else if (gracz1 == 4 && gracz2 == 8) 
  {
    P2Dub();
  }
  else if (gracz1 == 4 && gracz2 == 9) 
  {
    P2Dub();
  }
  else if (gracz1 == 4 && gracz2 == 10) 
  {
    P1Dub();
  }
  else if (gracz1 == 5 && gracz2 == 0) 
  {
    P1Dub();
  }
  else if (gracz1 == 5 && gracz2 == 1) 
  {
    P1Dub();
  }
  else if (gracz1 == 5 && gracz2 == 2) 
  {
    P2Dub();
  }
  else if (gracz1 == 5 && gracz2 == 3) 
  {
    P2Dub();
  }
  else if (gracz1 == 5 && gracz2 == 4) 
  {
    P1Dub();
  }
  else if (gracz1 == 5 && gracz2 == 6) 
  {
    P2Dub();
  }
  else if (gracz1 == 5 && gracz2 == 7) 
  {
    P2Dub();
  }
  else if (gracz1 == 5 && gracz2 == 8) 
  {
    P2Dub();
  }
  else if (gracz1 == 5 && gracz2 == 9) 
  {
    P1Dub();
  }
  else if (gracz1 == 5 && gracz2 == 10) 
  {
    P2Dub();
  }
  else if (gracz1 == 6 && gracz2 == 0) 
  {
    P2Dub();
  }
  else if (gracz1 == 6 && gracz2 == 1) 
  {
    P2Dub();
  }
  else if (gracz1 == 6 && gracz2 == 2) 
  {
    P2Dub();
  }
  else if (gracz1 == 6 && gracz2 == 3) 
  {
    P1Dub();
  }
  else if (gracz1 == 6 && gracz2 == 4) 
  {
    P2Dub();
  }
  else if (gracz1 == 6 && gracz2 == 5) 
  {
    P1Dub();
  }
  else if (gracz1 == 6 && gracz2 == 7) 
  {
    P1Dub();
  }
  else if (gracz1 == 6 && gracz2 == 8) 
  {
    P1Dub();
  }
  else if (gracz1 == 6 && gracz2 == 9) 
  {
    P1Dub();
  }
  else if (gracz1 == 6 && gracz2 == 10) 
  {
    P2Dub();
  }
  else if (gracz1 == 7 && gracz2 == 0) 
  {
    P2Dub();
  }
  else if (gracz1 == 7 && gracz2 == 1) 
  {
    P2Dub();
  }
  else if (gracz1 == 7 && gracz2 == 2) 
  {
    P1Dub();
  }
  else if (gracz1 == 7 && gracz2 == 3) 
  {
    P2Dub();
  }
  else if (gracz1 == 7 && gracz2 == 4) 
  {
    P2Dub();
  }
  else if (gracz1 == 7 && gracz2 == 5) 
  {
    P1Dub();
  }
  else if (gracz1 == 7 && gracz2 == 6) 
  {
    P2Dub();
  }
  else if (gracz1 == 7 && gracz2 == 8) 
  {
    P1Dub();
  }
  else if (gracz1 == 7 && gracz2 == 9) 
  {
    P1Dub();
  }
  else if (gracz1 == 7 && gracz2 == 10) 
  {
    P2Dub();
  }
  else if (gracz1 == 8 && gracz2 == 0) 
  {
    P1Dub();
  }
  else if (gracz1 == 8 && gracz2 == 1) 
  {
    P2Dub();
  }
  else if (gracz1 == 8 && gracz2 == 2) 
  {
    P2Dub();
  }
  else if (gracz1 == 8 && gracz2 == 3) 
  {
    P2Dub();
  }
  else if (gracz1 == 8 && gracz2 == 4) 
  {
    P1Dub();
  }
  else if (gracz1 == 8 && gracz2 == 5) 
  {
    P1Dub();
  }
  else if (gracz1 == 8 && gracz2 == 6) 
  {
    P2Dub();
  }
  else if (gracz1 == 8 && gracz2 == 7) 
  {
    P2Dub();
  }
  else if (gracz1 == 8 && gracz2 == 9) 
  {
    P2Dub();
  }
  else if (gracz1 == 8 && gracz2 == 10) 
  {
    P1Dub();
  }
  else if (gracz1 == 9 && gracz2 == 0) 
  {
    P2Dub();
  }
  else if (gracz1 == 9 && gracz2 == 1) 
  {
    P2Dub();
  }
  else if (gracz1 == 9 && gracz2 == 2) 
  {
    P2Dub();
  }
  else if (gracz1 == 9 && gracz2 == 3) 
  {
    P1Dub();
  }
  else if (gracz1 == 9 && gracz2 == 4) 
  {
    P1Dub();
  }
  else if (gracz1 == 9 && gracz2 == 5) 
  {
    P2Dub();
  }
  else if (gracz1 == 9 && gracz2 == 6) 
  {
    P2Dub();
  }
  else if (gracz1 == 9 && gracz2 == 7) 
  {
    P2Dub();
  }
  else if (gracz1 == 9 && gracz2 == 8) 
  {
    P1Dub();
  }
  else if (gracz1 == 9 && gracz2 == 10) 
  {
    P2Dub();
  }
  else if (gracz1 == 10 && gracz2 == 0) 
  {
    P2Dub();
  }
  else if (gracz1 == 10 && gracz2 == 1) 
  {
    P2Dub();
  }
  else if (gracz1 == 10 && gracz2 == 2) 
  {
    P1Dub();
  }
  else if (gracz1 == 10 && gracz2 == 3) 
  {
    P1Dub();
  }
  else if (gracz1 == 10 && gracz2 == 4) 
  {
    P2Dub();
  }
  else if (gracz1 == 10 && gracz2 == 5) 
  {
    P1Dub();
  }
  else if (gracz1 == 10 && gracz2 == 6) 
  {
    P1Dub();
  }
  else if (gracz1 == 10 && gracz2 == 7) 
  {
    P1Dub();
  }
  else if (gracz1 == 10 && gracz2 == 8) 
  {
    P2Dub();
  }
  else if (gracz1 == 10 && gracz2 == 9) 
  {
    P1Dub();
  }
  else if (gracz1 == gracz2) 
  {
    std::cout << "Remis!\n";
  }
  else
  {
  	std::cout << "W talii nie ma takiej broni.\n";
    std::cout << "Spróbuj jeszcze raz!\n";
    std::cout << "\n";
    talia(sets);
  }
  
  return 0;
};

void talia(int sets)
{
	srand(time(0));
	std::vector<int> P1;
	std::vector<int> P2;
	int gracz1;
	int gracz2;
	
	std::cout << "Pora na rozgrywkę w Kamulec, Pistolet, Maczeta!\n";
    std::cout << "Zmierz się z drugim graczem w epickim pojedynku!\n";
	std::cout << "0 - Kamulec   1 - Pistolet    2 - Karabin maszynowy\n";
    std::cout << "3 - Strzelba   4 - Miotacz ognia    5 - Worek piachu\n";
    std::cout << "6 - Maczeta   7 - Siekiera (obustronna)   8 - Młot\n";
    std::cout << "9 - Kopia (rycerska)   10 - Półtorak (Miecz długi)\n";
    
	do
	{
		std::cout << "P1, której broni chcesz użyć?\n";
		szufelka(sets, P1);
		std::cout << "Wybrano: ";
		std::cin >> gracz1;
		if (std::find(P1.begin(), P1.end(), gracz1) == P1.end())
		{
			clear();
			std::cout << "P2, której broni chcesz użyć?\n";
			szufelka(sets, P2);
			std::cout << "Wybrano: ";
			std::cin >> gracz2;
			if (std::find(P2.begin(), P2.end(), gracz2) == P2.end())
			{
				matchup(gracz1, gracz2);
				talia(sets - 1);
				if (sets == 0)
				{
					rezulTaty();
				}
			}
			else
			{
				std::cout << "W talii nie ma takiej broni.\n";
				std::cout << "Spróbuj jeszcze raz!\n";
				std::cout << "Której broni chcesz użyć?\n";
				std::cout << "Wybrano: ";
				std::cin >> gracz2;
			}
		}
		else
		{
			std::cout << "W talii nie ma takiej broni.\n";
			std::cout << "Spróbuj jeszcze raz!\n";
			std::cout << "Której broni chcesz użyć?\n";
			std::cout << "Wybrano: ";
			std::cin >> gracz1;
		}
	} while (sets > 0);
	
	if (sets == 0)
	{
		rezulTaty();
	}
}

int main()
{
	std::cout << "Ile rund chcecie grać? 3 czy 5?\n";
	std::cout << "Wybierasz: ";
	while (true)
	{
		std::cin >> sets;
		if (sets == 3 || sets == 5)
		{
			talia(sets);
		}
		else
		{
			std::cout << "Niepoprawna ilość rund. Spróbuj jeszcze raz!\n";
			std::cout << "\n";
		}
	} 
	return 0;
	
}

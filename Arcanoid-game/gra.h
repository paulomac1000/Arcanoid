#pragma once

#include "main.h"

extern Audio audio;

struct Osoba
{
	string gracz;
	int punkty;
};

void sprawd�_ewentualnie_zapisz_w_top(string mapa, Osoba wynik, bool wygrana = 0);

map <string, string> config;

//odczyt ustawie�
string ustaw_nick();
int sprawd�_tryb_ekranu();
void ustaw_parametry(sf::RenderWindow &OKNO);

//obiekty gry
class Gracz
{
public:
	Gracz()	{}

	string �ycia_tekst = "�ycia:";
	int �ycia = 3;
	string punkty_tekst = "Punkty:";
	long int punkty = 0;
	string czas_tekst = "Czas:";
	int minuty = 0;
	int sekundy = 0;
	string nazwa_gracza_tekst = "Gracz:";
	string nazwa_gracza = ustaw_nick();

	~Gracz(){}
};

struct Obiekt
{
	int x;
	int y;
};

class Klocek
	:public Obiekt
{
private:
	int wytrzyma�o��;
	int width;
	int heigth;
	int rodzaj;
	sf::Texture Model;
	sf::Sprite ModelSprajt;

public:
	Klocek(){}

	sf::Sprite GetSprajt()
	{
		return ModelSprajt;
	}
	
	int GetWytrzyma�o��()
	{
		return wytrzyma�o��;
	}

	void Stw�rzKlocek(int x, int y, int wytrzyma�o��, sf::RenderWindow &oknoGRA);

	void Wy�wietlKlocek(sf::RenderWindow &oknoGRA)
	{
		oknoGRA.draw(ModelSprajt);
	}

	void Wytrzyma�o��Minus(sf::RenderWindow &oknoGRA);

	~Klocek(){};
};

class Plansza
{
	int wyb�r;

	int tab[9][12];

	Klocek klocek[9][12];

	int wybierz_level(sf::RenderWindow &oknoGRA);

	void wczytaj_level(char *nazwa_pliku, sf::RenderWindow &oknoGRA);

public:

	Plansza(sf::RenderWindow &oknoGRA);

	void Wy�wietlPlansz�(sf::RenderWindow &oknoGRA, Gracz &gracz);

	int CzyKolizja(float x, float y, sf::RenderWindow &oknoGRA);

	int GetWybranaMapa()
	{
		return wyb�r;
	}

	~Plansza(){};
};

class Paletka
	:public Obiekt
{
private:
	const float y = 440;
	float x = 348;
	float pr�dko�� = 10;
	float d�ugo�� = 180;
	float grubo��_ramki = 5;
	sf::Texture PaletkaObiekt;
	sf::Sprite PaletkaObiektSprajt;

public:

	Paletka(sf::RenderWindow &oknoGRA);

	float GetD�ugo��()
	{
		return d�ugo��;
	}

	void SetD�ugo��(float d�ugo��)
	{
		this->d�ugo�� = d�ugo��;
	}

	void setX(int x)
	{
		this->x = (float)x;
	}

	float getX()
	{
		return x;
	}

	float getY()
	{
		return y;
	}

	void rysowanie(sf::RenderWindow &oknoGRA)
	{
		PaletkaObiektSprajt.setPosition(x, y);
		oknoGRA.draw(PaletkaObiektSprajt);
	}

	void prawo(sf::RenderWindow &oknoGRA);

	void lewo(sf::RenderWindow &oknoGRA);

	~Paletka(){}
};

class Pi�ka
	:public Obiekt
{
private:
	bool czy_w_ruchu = false;
	float x = 392;
	float y = 416;
	float pr�dko�� = 2;
	float pr�dko��_x = 3 * pr�dko��;
	float pr�dko��_y = -(5 - abs(pr�dko��_x / pr�dko��)) * pr�dko��;
	sf::Texture Pi�kaObiekt;
	sf::Sprite Pi�kaObiektSprajt;

public:

	Pi�ka(sf::RenderWindow &oknoGRA);

	void pi�ka_start()
	{
		czy_w_ruchu = true;
	}

	void pi�ka_ruch()
	{
		x += pr�dko��_x;
		y += pr�dko��_y;
	}

	void rysowanie(sf::RenderWindow &oknoGRA)
	{
		Pi�kaObiektSprajt.setPosition(x, y);
		oknoGRA.draw(Pi�kaObiektSprajt);
	}

	void ruch(Paletka &paletka, Plansza &plansza, Gracz &gracz, sf::RenderWindow &oknoGRA);
};

//silnik gry
//do skopiowania p�niej

//funkcja g��wna
void gra();
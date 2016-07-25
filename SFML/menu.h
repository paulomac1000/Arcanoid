#pragma once

#include "main.h"

extern Audio audio;

struct Tekstury
{
	sf::Texture NowaGra;
	sf::Sprite NowaGraSprajt;

	sf::Texture Top10;
	sf::Sprite Top10Sprajt;

	sf::Texture Ustawienia;
	sf::Sprite UstawieniaSprajt;

	sf::Texture Wyj�cie;
	sf::Sprite Wyj�cieSprajt;
};

void wyb�r_opcji(char wyb�r, int &opcja, sf::RenderWindow &oknoAplikacji, Tekstury &obrazki);
void wyb�r_podprogramu(int wyb�r_opcji_w_menu, sf::RenderWindow &oknoAplikacj, Audio &audio);
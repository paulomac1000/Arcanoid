#pragma once

#include "main.h"

extern Audio audio;

void zapis_do_configu(map <string, string> &config);
void odczyt_z_configu(map <string, string> &config);

class T�o
{
	sf::Texture T�oTekstura;
	sf::Sprite T�oSprajt;
public:
	T�o(sf::RenderWindow &oknoUSTAWIENIA);

	void Wy�wietlT�o(sf::RenderWindow &oknoUSTAWIENIA)
	{
		oknoUSTAWIENIA.draw(T�oSprajt);
	}


	~T�o(){}
};

class Obraz
{
	sf::Font tytu�;
	sf::Font napisy;
	sf::Text OBRAZ;

	tgui::Checkbox::Ptr RadioFULLSCREEN;
	tgui::Checkbox::Ptr RadioWINDOW;

public:
	Obraz(sf::RenderWindow &oknoUSTAWIENIA, tgui::Gui &gui, map <string, string> &config);

	void Wy�wietlObraz(sf::RenderWindow &oknoUSTAWIENIA)
	{
		oknoUSTAWIENIA.draw(OBRAZ);
	}

	void Wci�ni�toFULLSCREEN(map <string, string> &config);

	void Wci�ni�toWINDOW(map <string, string> &config);

	~Obraz(){}
};

class Fps
{
	sf::Font tytu�;
	sf::Font napisy;
	sf::Text FPS;

	tgui::Checkbox::Ptr RadioWPISYWANIE;
	tgui::Checkbox::Ptr RadioSYNCHRONIZACJA;
	tgui::EditBox::Ptr EditBoxWPISYWANIE;

public:

	Fps(sf::RenderWindow &oknoUSTAWIENIA, tgui::Gui &gui, map <string, string> &config);

	void Wy�wietlFps(sf::RenderWindow &oknoUSTAWIENIA)
	{
		oknoUSTAWIENIA.draw(FPS);
	}

	void Wci�ni�toWPISYWANIE(map <string, string> &config);

	void Wci�ni�toFPS(map <string, string> &config);

	void ZatwierdzonoFPS(map <string, string> &config);

	void Wci�ni�toSYNCHRONIZACJA(map <string, string> &config);


	~Fps(){}
};

class G��bia
{
	sf::Font tytu�;
	sf::Font napisy;

	sf::Text G��BIA;

	tgui::Checkbox::Ptr Radio16BIT;
	tgui::Checkbox::Ptr Radio32BIT;

public:
	G��bia(sf::RenderWindow &oknoUSTAWIENIA, tgui::Gui &gui, map <string, string> &config);

	void Wy�wietlG��bia(sf::RenderWindow &oknoUSTAWIENIA)
	{
		oknoUSTAWIENIA.draw(G��BIA);
	}

	void Wci�ni�to32BIT(map <string, string> &config);

	void Wci�ni�to16BIT(map <string, string> &config);

	~G��bia(){}
};

class D�wi�k
{
	sf::Font tytu�;
	sf::Font napisy;
	sf::Text D�WI�K;

	tgui::Checkbox::Ptr RadioD�WI�KON;
	tgui::Checkbox::Ptr RadioD�WI�KOFF;

public:
	D�wi�k(sf::RenderWindow &oknoUSTAWIENIA, tgui::Gui &gui, map <string, string> &config);

	void Wy�wietlD�wi�k(sf::RenderWindow &oknoUSTAWIENIA)
	{
		oknoUSTAWIENIA.draw(D�WI�K);
	}

	void Wci�ni�toD�WI�KON(map <string, string> &config);

	void Wci�ni�toD�WI�KOFF(map <string, string> &config);

	~D�wi�k(){}
};

class Nick
{
	sf::Font tytu�;
	sf::Font napisy;
	sf::Text NICK;
	tgui::EditBox::Ptr EditBoxNICK;


public:
	Nick(sf::RenderWindow &oknoUSTAWIENIA, tgui::Gui &gui, map <string, string> &config);

	void Wy�wietlNick(sf::RenderWindow &oknoUSTAWIENIA)
	{
		oknoUSTAWIENIA.draw(NICK);
	}

	void Wci�ni�toNICK(map <string, string> &config)
	{
		EditBoxNICK->enable();
	}

	void ZatwierdzonoNICK(map <string, string> &config);

	~Nick(){}
};

class Back
{
	tgui::Button::Ptr BACK;
	sf::Font napisy;

public:
	Back(sf::RenderWindow &oknoUSTAWIENIA, tgui::Gui &gui);

	~Back(){}

};
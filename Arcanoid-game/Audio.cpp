#include "Audio.h"

void Audio::SetLoud()
{
	MuzykaMenu.setVolume(70);
	MuzykaGra.setVolume(70);


	Switch.setVolume(70);
	Confirm.setVolume(100);
	Klocek.setVolume(30);
	Paletka.setVolume(10);
	�ciana.setVolume(80);

	Strata.setVolume(100);
	Wygrana.setVolume(100);
}

Audio::Audio()
{
	if (!MuzykaMenu.openFromFile("music/menu.ogg"))
	{
		MessageBox(NULL, "B��d podczas �adowania muzyki menu. Upewnij si�, �e plik menu.ogg znajduje si� w katalogu music.", "ERROR", NULL);
	}
	if (!Switch.openFromFile("sounds/switch.ogg"))
	{
		MessageBox(NULL, "B��d podczas �adowania d�wi�ku przesuwania. Upewnij si�, �e plik switch.ogg znajduje si� w katalogu sounds.", "ERROR", NULL);
	}
	if (!Confirm.openFromFile("sounds/confirm.ogg"))
	{
		MessageBox(NULL, "B��d podczas �adowania d�wi�ku zatwierdzenia. Upewnij si�, �e plik confirm.ogg znajduje si� w katalogu sounds.", "ERROR", NULL);
	}
	if (!MuzykaGra.openFromFile("music/gra.ogg"))
	{
		MessageBox(NULL, "B��d podczas �adowania muzyki gry. Upewnij si�, �e plik gra.ogg znajduje si� w katalogu music.", "ERROR", NULL);
	}
	if (!Klocek.openFromFile("sounds/klocek.ogg"))
	{
		MessageBox(NULL, "B��d podczas �adowania d�wi�ku uderzenia w klocek. Upewnij si�, �e plik klocek.ogg znajduje si� w katalogu sounds.", "ERROR", NULL);
	}
	if (!Paletka.openFromFile("sounds/paletka.ogg"))
	{
		MessageBox(NULL, "B��d podczas �adowania d�wi�ku uderzenia w paletk�. Upewnij si�, �e plik paletka.ogg znajduje si� w katalogu sounds.", "ERROR", NULL);
	}
	if (!�ciana.openFromFile("sounds/sciana.ogg"))
	{
		MessageBox(NULL, "B��d podczas �adowania d�wi�ku uderzenia w �cian�. Upewnij si�, �e plik sciana.ogg znajduje si� w katalogu sounds.", "ERROR", NULL);
	}
	if (!Strata.openFromFile("sounds/strata.wav"))
	{
		MessageBox(NULL, "B��d podczas �adowania d�wi�ku straconego �ycia. Upewnij si�, �e plik strata.wav znajduje si� w katalogu sounds.", "ERROR", NULL);
	}
	if (!Wygrana.openFromFile("sounds/wygrana.wav"))
	{
		MessageBox(NULL, "B��d podczas �adowania d�wi�ku wygranej. Upewnij si�, �e plik wygrana.wav znajduje si� w katalogu sounds.", "ERROR", NULL);
	}

	SetLoud();
}


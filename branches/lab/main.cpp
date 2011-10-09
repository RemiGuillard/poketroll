#include "pokedex.h"
#include <QtGui/QApplication>
#include <QSplashScreen>
//#include <QTest>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Pokedex w;
	QSplashScreen	splash(QPixmap("pictures/pokemon.jpg"));
	//start load xml
	//put all pokemon in window
	splash.show();
//	QTest::qSleep(1000);
	w.pokemonNameListDisplay();
	w.pokemonDisplay(w.getPokeList().value(1));
	splash.close();
	w.show();
	return a.exec();
}

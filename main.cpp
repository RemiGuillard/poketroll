#include "pokedex.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Pokedex w;
	//start load xml
	//put all pokemon in window
	w.show();
	return a.exec();
}

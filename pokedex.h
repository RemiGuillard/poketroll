#ifndef POKEDEX_H
#define POKEDEX_H

#include <QtGui/QMainWindow>
 #include <QDomDocument>
#include <iostream>
#include "ui_pokedex.h"

class Pokedex : public QMainWindow
{
	Q_OBJECT

public:
	//typedef void (Pokemon::*setfunc)(const std::string &val);
	Pokedex(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Pokedex();
public:
	void	getPokemonFile(const QString &path);
	void	readName(const QDomElement &Elem/*, Pokemon *poke*/);
	//void	getPokeInfoInNode(const QDomElement &Elem, Pokemon *poke);
private:
	Ui::Pokedex ui;
	//std::list<Pokemon *> _pokeList;
};

#endif // POKEDEX_H
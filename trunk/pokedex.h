#ifndef POKEDEX_H
#define POKEDEX_H

#include <QtGui/QMainWindow>
#include <QDomDocument>
#include <iostream>
#include <QString>
#include <QFile>
#include "ui_pokedex.h"
#include "Pokemon.h"

class Pokedex : public QMainWindow
{
	Q_OBJECT

public:
	//typedef void (Pokemon::*setfunc)(const std::string &val);
	Pokedex(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Pokedex();
public:
	void				getPokemonFile(const QString &path);
	void				readName(QDomElement &Elem, Pokemon *poke);
	void				readTypes(QDomElement &Elem, Pokemon *poke);
	void				readAbility(QDomElement &Elem, Pokemon *poke);
	void				readExp(QDomElement &Elem, Pokemon *poke);
	//void	getPokeInfoInNode(const QDomElement &Elem, Pokemon *poke);
private:
	Ui::Pokedex ui;
	std::map<QString, Pokemon *> _pokeList;
};

#endif // POKEDEX_H

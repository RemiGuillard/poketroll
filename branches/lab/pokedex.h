#ifndef POKEDEX_H
#define POKEDEX_H

#include <QtGui/QMainWindow>
#include <QDomDocument>
#include <iostream>
#include <QString>
#include <QList>
#include <QFile>
#include <QMap>
#include "ui_pokedex.h"
#include "Pokemon.h"
#include "Evolution.h"


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
	void				readStats(QDomElement &Elem, Pokemon *poke);
	void				readEvolution(QDomElement &Elem, Pokemon *poke);
	void				readRatio(QDomElement &Elem, Pokemon *poke);
	void				readEgg(QDomElement &Elem, Pokemon *poke);
	void				readSpecies(QDomElement &Elem, Pokemon *poke);
	void				readHeight(QDomElement &Elem, Pokemon *poke);
	void				readWeight(QDomElement &Elem, Pokemon *poke);
	void				readDescription(QDomElement &Elem, Pokemon *poke);
	void				readAttack(QDomElement &Elem, Pokemon *poke);
public:
	QMap<int, Pokemon *>	getPokeList() const;
	void				pokemonNameListDisplay();
	void				pokemonDisplay(const Pokemon *);
	int					findIdWithName(QString name);
	void				writeEvolutionList(const QList<Evolution *> &evo);
	void				writeAtkList(const QList<Attack *> &atk);
	void				writeType(const QList<QString> &typelist);
	void				writeEgg(const QList<QString> &egglist);
public slots:
	void			PokemonClicked(QListWidgetItem *);
	void			SearchPokemon();

private:
	Ui::Pokedex ui;
	QMap<int, Pokemon *> _pokeList;
	//QList<User *>		_users;
};

#endif // POKEDEX_H

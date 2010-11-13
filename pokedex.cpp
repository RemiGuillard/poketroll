#include <iostream>
#include "pokedex.h"
#include "Evolution.h"

Pokedex::Pokedex(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	getPokemonFile("pokedata.xml");
}

Pokedex::~Pokedex()
{

}




void	Pokedex::getPokemonFile(const QString &path)
{
	QDomDocument myXml(path);
	QFile file(path);
	file.open(QFile::ReadOnly | QFile::Text);
	QDomDocument doc;
	doc.setContent(&file, false);
	QDomElement racine = doc.documentElement();
	racine = racine.firstChildElement();
	int idPoke = 1;
	while (!racine.isNull())
	{
		Pokemon	*poke = new Pokemon();
		if (racine.tagName() == "pokemon")
		{
			poke->setId(idPoke);
			QDomElement Elem = racine.firstChildElement();
			this->readName(Elem, poke);
			this->readTypes(Elem, poke);
			this->readAbility(Elem, poke);
			this->readExp(Elem, poke);
			//this->readStats(Elem, poke);
			this->readEvolution(Elem, poke);
		}
		++idPoke;
		racine = racine.nextSiblingElement();
	}
}

void	Pokedex::readEvolution(QDomElement &Elem, Pokemon *poke)
{
	int	idEvo = 1;

	if (Elem.tagName() == "evolutions")
	{
		std::list<Evolution *> evoList;
		evoList.clear();
		QDomElement node = Elem.firstChildElement();
		while (node.tagName() == "evolution")
		{
			QDomElement ssNode = node.firstChildElement();
			Evolution *evo = new Evolution;
			evo->setId(idEvo);
			QString	require = "";
			while (!ssNode.isNull())
			{
				if (ssNode.tagName() == "name")
					evo->setName(ssNode.text());
				else if (ssNode.tagName() == "require")
					require = ssNode.text();
				ssNode = ssNode.nextSiblingElement();
			}
			++idEvo;
			evo->setRequire(require);
			ui.pokeList->addItem(evo->getName());
			evoList.push_back(evo);
			node = node.nextSiblingElement();
		}
		Elem = Elem.nextSiblingElement();
		poke->setEvolve(evoList);
	}
}

void	Pokedex::readName(QDomElement &Elem, Pokemon *poke)
{
	if (Elem.tagName() == "name")
	{
		poke->setName(Elem.text());
		Elem = Elem.nextSiblingElement();
	}
	//ui.pokeList->addItem(Elem.text());
}

void	Pokedex::readTypes(QDomElement &Elem, Pokemon *poke)
{
	std::list<QString> type;
	type.clear();
	while (Elem.tagName() == "type" && !Elem.isNull())
	{
		type.push_back(Elem.text());
		Elem = Elem.nextSiblingElement();	
	}
	poke->setTypes(type);
}

void	Pokedex::readAbility(QDomElement &Elem, Pokemon *poke)
{
	if (Elem.tagName() == "ability")
	{
		poke->setAbility(Elem.text());
		Elem = Elem.nextSiblingElement();
	}
}

void Pokedex::readExp(QDomElement &Elem, Pokemon *poke)
{
	bool	ok;
	if (Elem.tagName() == "exp")
	{
		poke->setExp(Elem.text().toInt(&ok, 10));
		Elem = Elem.nextSiblingElement();
	}
}

/*
void Pokedex::readStats(QDomElement &Elem, Pokemon *poke)
{
	if (Elem.tagName() == "stats")
	{
		stats	Statu;
		QDomDocument node = Elem.firstChildElement();
		while (!node.isNull())
		{
			Statu.setHp();
			node = node.nextSiblingElement();
			Statu.setAtk();
			node = node.nextSiblingElement();
			Statu.setDef();
			node = node.nextSiblingElement();
			Statu.setSpd();
			node = node.nextSiblingElement();
			Statu.setSat();
			node = node.nextSiblingElement();
			Statu.setSdf();
			node = node.nextSiblingElement();
		}
		poke->setStats(Statu);
	}
}*/
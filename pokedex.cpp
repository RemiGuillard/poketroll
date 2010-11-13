#include <iostream>
#include <QString>
#include <QFile>
#include "pokedex.h"

Pokedex::Pokedex(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
}

Pokedex::~Pokedex()
{

}




/*std::string<Pokemon *>*/void	Pokedex::getPokemonFile(const QString &path)
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
		//Pokemon	*poke = new Pokemon();
		if (racine.tagName() == "pokemon")
		{
			//poke->setPokeId = idPoke;
			QDomElement Elem = racine.firstChildElement();
			this->readName(Elem/*, poke*/);
/*			this->getPokeInfoInNode(Elem, poke);*/
		}
		++idPoke;
		racine = racine.nextSiblingElement();
	}
}

void	Pokedex::readName(const QDomElement &Elem/*, Pokemon *poke*/)
{
	QDomNodeList Node;
	Node = Elem.elementsByTagName("name");

	//poke->setName(Node.text);
}

/*
void	Pokedex::getPokeInfoInNode(const QDomElement &Elem, Pokemon *poke)
{
	int idEvo = 1;
	while (Elem.isNull())
	{

		if (Elem.tagName() == "name")
			poke->setPokeName(Elem.text());
		else if (Elem.tagName() == "type");
		Elem = Elem.nextSiblingElement();
	}
}*/
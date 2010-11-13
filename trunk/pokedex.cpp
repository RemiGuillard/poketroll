#include <iostream>
#include <QMessageBox>
#include "pokedex.h"
#include "Evolution.h"
#include "Stats.h"
#include "Attack.h"

Pokedex::Pokedex(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	getPokemonFile("pokedata.xml");
	QObject::connect(ui.pokeList, SIGNAL(itemClicked(QListWidgetItem *)), this, SLOT(PokemonClicked(QListWidgetItem *)));
	//QObject::connect(ui.pokeList, SIGNAL(itemSelectionChanged()), this, SLOT(PokemonClicked(ui.pokeList->currentItem();)));
	QObject::connect(ui.listEvo, SIGNAL(itemClicked(QListWidgetItem *)), this, SLOT(PokemonClicked(QListWidgetItem *)));
	QObject::connect(ui.searchButton, SIGNAL(clicked()), this, SLOT(SearchPokemon()));
	QObject::connect(ui.searchLine, SIGNAL(returnPressed()), this, SLOT(SearchPokemon()));
	//ui.pokeList->currentItem();
}

Pokedex::~Pokedex() {}

int		Pokedex::findIdWithName(QString name)
{
	QMapIterator<int, Pokemon *>	it(this->_pokeList);
	while (it.hasNext())
	{
		it.next();
		if (it.value()->getName() == name)
			return it.value()->getId();
	}
	return 1;
}

void	Pokedex::PokemonClicked(QListWidgetItem *item)
{
	/*QString tmp = item->text().toUpper();
	int pos = tmp.indexOf(QRegExp("/[a-zA-Z]*?\s+/g"), 0);
	QString test(0);*/
	//QMessageBox::information(this, "lol", "item->text()");
	pokemonDisplay(_pokeList.value(findIdWithName(item->text().toUpper())));
}

void	Pokedex::SearchPokemon()
{
	//QMessageBox::information(this, "lol", ui.searchLine->displayText());
	pokemonDisplay(_pokeList.value(findIdWithName(ui.searchLine->displayText().toUpper())));
}

QMap<int, Pokemon *>	Pokedex::getPokeList() const {return _pokeList;}

void	Pokedex::pokemonNameListDisplay()
{
	QMapIterator<int, Pokemon *>	it(this->_pokeList);

	while (it.hasNext())
	{
		it.next();
		ui.pokeList->addItem(it.value()->getName());
	}
}

void	Pokedex::pokemonDisplay(const Pokemon *poke)
{
	//QMessageBox::information(this, "lol", path);
	QString id(0);
	QString path = "Pictures/" + id.setNum(poke->getId()) + ".png";
	ui.labelImg->setPixmap(QPixmap(path));
	ui.labelImg->setScaledContents(true);
	ui.descr->setText(poke->getDescription());
	ui.labelName->setText(poke->getName());
	ui.textStats->setText("HP\t=   " + poke->getStats().getHp() + "\n");
	ui.textStats->append("ATK\t=   " + poke->getStats().getAtk() + "\n");
	ui.textStats->append("DEF\t=   " + poke->getStats().getDef() + "\n");
	ui.textStats->append("SPD\t=   " + poke->getStats().getSpd() + "\n");
	ui.textStats->append("SAT\t=   " + poke->getStats().getSat() + "\n");
	ui.textStats->append("SDF\t=   " + poke->getStats().getSdf());
	writeEvolutionList(poke->getEvolve());
	writeAtkList(poke->getAttacks());
}

void	Pokedex::writeEvolutionList(const QList<Evolution *> &evolist)
{
	QListIterator<Evolution *>	it(evolist);

	ui.listEvo->clear();
	Evolution	*evo;
	QString tmp;
	while (it.hasNext())
	{
		evo = it.next();
		tmp = evo->getName()/* + "\tlevel : " + evo->getRequire()*/;
		ui.listEvo->addItem(tmp);
	}
}

void	Pokedex::writeAtkList(const QList<Attack *> &atklist)
{
	QListIterator<Attack *>	it(atklist);

	ui.listAttack->clear();
	Attack	*tmp;
	QString info;
	while (it.hasNext())
	{
		tmp = it.next();
		info = tmp->getName().toUpper();
		if (tmp->getLvl() != "")
			info += "\tlevel : " + tmp->getLvl();
		info += "\ttype : " + tmp->getType();
		if (tmp->getMachine() != "")
			info += "\tmachine : " + tmp->getMachine();
		ui.listAttack->addItem(info);
	}
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
	while (!racine.isNull())
	{
		Pokemon	*poke = new Pokemon();
		if (racine.tagName() == "pokemon")
		{
			poke->setId(racine.attribute("id").toInt());
			QDomElement Elem = racine.firstChildElement();
			this->readName(Elem, poke);
			this->readTypes(Elem, poke);
			this->readAbility(Elem, poke);
			this->readExp(Elem, poke);
			this->readStats(Elem, poke);
			this->readEvolution(Elem, poke);
			this->readRatio(Elem, poke);
			this->readEgg(Elem, poke);
			this->readSpecies(Elem, poke);
			this->readHeight(Elem, poke);
			this->readWeight(Elem, poke);
			this->readDescription(Elem, poke);
			this->readAttack(Elem, poke);
		}
		this->_pokeList[poke->getId()] = poke;
		racine = racine.nextSiblingElement();
	}
	//ui.pokeList->addItem(Elem.text());
}

void	Pokedex::readAttack(QDomElement &Elem, Pokemon *poke)
{
	if (Elem.tagName() == "moves")
	{
		QDomElement node = Elem.firstChildElement();
		QList<Attack *> atkList;
		atkList.clear();
		while (!node.isNull())
		{
			Attack *atk = new Attack;
			atk->setType(node.attribute("type"));
			QDomElement ssNode = node.firstChildElement();
			QString mach = "";
			while (!ssNode.isNull())
			{
				if (ssNode.tagName() == "name")
					atk->setName(ssNode.text());
				else if (ssNode.tagName() == "lvl")
					atk->setLvl(ssNode.text());
				else if (ssNode.tagName() == "machine")
					mach = ssNode.text();
				ssNode = ssNode.nextSiblingElement();
			}
			atk->setMachine(mach);
			atkList.push_back(atk);
			node = node.nextSiblingElement();
		}
		poke->setAttacks(atkList);
	}
}

void	Pokedex::readDescription(QDomElement &Elem, Pokemon *poke)
{
	if (Elem.tagName() == "description")
	{
		poke->setDescription(Elem.text());
		Elem = Elem.nextSiblingElement();
	}
}

void	Pokedex::readWeight(QDomElement &Elem, Pokemon *poke)
{
	if (Elem.tagName() == "weight")
	{
		poke->setWeight(Elem.text().toFloat());
		Elem = Elem.nextSiblingElement();
	}
}

void	Pokedex::readHeight(QDomElement &Elem, Pokemon *poke)
{
	if (Elem.tagName() == "height")
	{
		poke->setHeight(Elem.text().toFloat());
		Elem = Elem.nextSiblingElement();
	}
}

void	Pokedex::readSpecies(QDomElement &Elem, Pokemon *poke)
{
	if (Elem.tagName() == "species")
	{
		poke->setSpecies(Elem.text());
		Elem = Elem.nextSiblingElement();
	}
}

void	Pokedex::readEgg(QDomElement &Elem, Pokemon *poke)
{
	QList<QString>	egg;
	egg.clear();
	while (Elem.tagName() == "egg-group")
	{
		egg.push_back(Elem.text());
		Elem = Elem.nextSiblingElement();
	}
	poke->setEggGroup(egg);
}

void	Pokedex::readRatio(QDomElement &Elem, Pokemon *poke)
{
	if (Elem.tagName() == "ratio")
	{
		QDomElement node = Elem.firstChildElement();	
		if (node.tagName() == "male")
			poke->setRatio(node.text().toFloat());
		else if (node.tagName() == "female")
			poke->setRatio(100 - node.text().toFloat());
		Elem = Elem.nextSiblingElement();
	}	
	else
		poke->setRatio(0);
}


void	Pokedex::readEvolution(QDomElement &Elem, Pokemon *poke)
{
	if (Elem.tagName() == "evolutions")
	{
		QList<Evolution *> evoList;
		evoList.clear();
		QDomElement node = Elem.firstChildElement();
		while (node.tagName() == "evolution")
		{
			QDomElement ssNode = node.firstChildElement();
			Evolution *evo = new Evolution;
			evo->setId(node.attribute("id").toInt());
			QString	require = "1";
			while (!ssNode.isNull())
			{
				if (ssNode.tagName() == "name")
					evo->setName(ssNode.text());
				else if (ssNode.tagName() == "lvl" || ssNode.tagName() == "condition")
					require = ssNode.text();
				ssNode = ssNode.nextSiblingElement();
			}
			evo->setRequire(require);
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
}

void	Pokedex::readTypes(QDomElement &Elem, Pokemon *poke)
{
	QList<QString> type;
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

void	Pokedex::readExp(QDomElement &Elem, Pokemon *poke)
{
	bool	ok;
	if (Elem.tagName() == "exp")
	{
		poke->setExp(Elem.text().toInt(&ok, 10));
		Elem = Elem.nextSiblingElement();
	}
}


void	Pokedex::readStats(QDomElement &Elem, Pokemon *poke)
{
	if (Elem.tagName() == "stats")
	{
		Stats	Statu;
		QDomElement node = Elem.firstChildElement();
		while (!node.isNull())
		{
			Statu.setHp(node.text());
			node = node.nextSiblingElement();
			Statu.setAtk(node.text());
			node = node.nextSiblingElement();
			Statu.setDef(node.text());
			node = node.nextSiblingElement();
			Statu.setSpd(node.text());
			node = node.nextSiblingElement();
			Statu.setSat(node.text());
			node = node.nextSiblingElement();
			Statu.setSdf(node.text());
			node = node.nextSiblingElement();
		}
		poke->setStats(Statu);
		Elem = Elem.nextSiblingElement();
	}
}
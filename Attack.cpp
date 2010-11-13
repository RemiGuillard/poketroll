#include "Attack.h"

Attack::Attack() {}

Attack::Attack(QString type, QString name, QString mach, QString lvl)
: _type(type), _name(name), _machine(mach), _lvl(lvl) {}

Attack::Attack(const Attack& cpy) { *this = cpy; }

Attack::~Attack() {}

Attack&		Attack::operator=(const Attack& cpy)
{
	if (this != &cpy)
	{
		this->_type = cpy._type;
		this->_name = cpy._name;
		this->_machine = cpy._machine;
		this->_lvl = cpy._lvl;
	}
	return *this;
}

QString			Attack::getName() const { return _name; }

void			Attack::setName(QString name) { _name = name; }

QString			Attack::getType() const { return _type; }

void			Attack::setType(QString type)  { _type = type; }

QString			Attack::getMachine() const { return _machine; }

void			Attack::setRequire(QString mach) { _machine = mach; }

QString			Attack::getLvl() const { return _lvl; }

void			Attack::setLvl(QString lvl) { _lvl = lvl; }
#include "Evolution.h"

Evolution::Evolution() {}

Evolution::Evolution(int id, QString name, QString req)
: _id(id), _name(name), _require(req) {}

Evolution::Evolution(const Evolution& cpy) { *this = cpy; }

Evolution::~Evolution() {}

Evolution&		Evolution::operator=(const Evolution& cpy)
{
	if (this != &cpy)
	{
		this->_id = cpy._id;
		this->_name = cpy._name;
		this->_require = cpy._require;
	}
	return *this;
}

QString			Evolution::getName() const { return _name; }

void			Evolution::setName(QString name) { _name = name; }

int				Evolution::getId() const { return _id; }

void			Evolution::setId(int id)  { _id = id; }

QString			Evolution::getRequire() const { return _require; }

void			Evolution::setRequire(QString req) { _require = req; }
#include <QString>
#include "Stats.h"

Stats::Stats() {}
Stats::Stats(const Stats& cpy) { *this = cpy; }
Stats::~Stats() {}

Stats&		Stats::operator=(const Stats& cpy)
{
	if (this != &cpy)
	{
		this->_hp = cpy._hp;
		this->_atk = cpy._atk;
		this->_def = cpy._def;
		this->_spd = cpy._spd;
		this->_sat = cpy._sat;
		this->_sdf = cpy._sdf;
	}
	return *this;
}

void		Stats::setHp(QString param) { _hp = param; }
void		Stats::setAtk(QString param) { _atk = param; }
void		Stats::setDef(QString param) { _def = param; }
void		Stats::setSpd(QString param) { _spd = param; }
void		Stats::setSat(QString param) { _sat = param; }
void		Stats::setSdf(QString param) { _sdf = param; }

QString			Stats::getHp() const { return _hp; }
QString			Stats::getAtk() const { return _atk; }
QString			Stats::getDef() const { return _def; }
QString			Stats::getSpd() const { return _spd; }
QString			Stats::getSat() const { return _sat; }
QString			Stats::getSdf() const { return _sdf; }
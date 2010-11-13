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

void		Stats::setHp(int param) { _hp = param; }
void		Stats::setAtk(int param) { _atk = param; }
void		Stats::setDef(int param) { _def = param; }
void		Stats::setSpd(int param) { _spd = param; }
void		Stats::setSat(int param) { _sat = param; }
void		Stats::setSdf(int param) { _sdf = param; }

int			Stats::getHp() const { return _hp; }
int			Stats::getAtk() const { return _atk; }
int			Stats::getDef() const { return _def; }
int			Stats::getSpd() const { return _spd; }
int			Stats::getSat() const { return _sat; }
int			Stats::getSdf() const { return _sdf; }
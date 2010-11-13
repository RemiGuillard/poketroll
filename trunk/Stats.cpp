#include "Stats.h"

Stats::Stats() {}
Stats::Stats(const Stats& cpy) { *this = cpy; }
Stats::~Stats();

Stats&		operator=(const Stats& cpy)
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

void		setHp(int param) { _hp = param; }
void		setAtk(int param) { _atk = param; }
void		setDef(int param) { _def = param; }
void		setSpd(int param) { _spd = param; }
void		setSat(int param) { _sat = param; }
void		setSdf(int param) { _sdf = param; }

int			getHp() const { return _hp; }
int			getAtk() const { return _atk; }
int			getDef() const { return _def; }
int			getSpd() const { return _spd; }
int			getSat() const { return _sat; }
int			getSdf() const { return _sdf; }
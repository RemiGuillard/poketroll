#ifndef POKEMON
# define POKEMON

#include <QString>
#include <list>

#include "Evolution.h"
//#include "Attack.h"

//using std::QString;
using std::list;

class		Pokemon
{
public:
	Pokemon();
	Pokemon(int, QString, list<QString>, QString,
			int/*, Stats* *//*, list<Evolution*>*/,
			float, list<QString>, QString, float,
			float, QString/*, list<Attack *>*/);
	Pokemon(const Pokemon &);
	~Pokemon();

	Pokemon&			operator=(const Pokemon &);

	int					getId() const;
	QString				getName() const;
	list<QString>		getTypes() const;
	QString				getAbility() const;
	int					getExp() const;
//	Stats				getStats() const;
//	list<Evolution *>	getEvolve() const;
	float				getRatio() const;
	list<QString>		getEggGroup() const;
	QString				getSpecies() const;
	float				getHeight() const;
	float				getWeight() const;
	QString				getDescription() const;
//	list<Attack *>		getAttacks() const;

	void				setId(int);
	void				setName(QString);
	void				setTypes(const list<QString> &);
	void				setAbility(QString);
	void				setExp(int);
//	void				setStats(const Stats &);
	void				setEvolve(list<Evolution *>);
	void				setRatio(float);
	void				setEggGroup(list<QString>);
	void				setSpecies(QString);
	void				setHeight(float);
	void				setWeight(float);
	void				setDescription(QString);
//	void				setAttacks(list<Attacks *>);

private:
	int					_id;
	QString				_name;
	list<QString>		_types;
	QString				_ability;
	int					_exp;
//	Stats				_stats;
	list<Evolution *>	_evolutions;
	float				_ratio;
	list<QString>		_eggGroup;
	QString				_species;
	float				_height;
	float				_weight;
	QString				_description;
//	list<Attack *>		_attacks;
};

#endif // !POKEMON
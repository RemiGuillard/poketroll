#ifndef POKEMON
# define POKEMON

#include <string>
#include <list>

#include "Evolution.h"
#include "Attack.h"

using std::string;
using std::list;

class		Pokemon
{
public:
	Pokemon();
	Pokemon(int, string, list<string>, string,
			int, Stats*, list<Evolution*>,
			float, list<string>, string, float,
			float, string, list<Attack *>);
	Pokemon(const Pokemon &);
	~Pokemon();

	Pokemon&			operator=(const Pokemon &);

	int					getId() const;
	string				getName() const;
	list<string>		getTypes() const;
	string				getAbility() const;
	int					getExp() const;
	Stats				getStats() const;
	list<Evolution *>	getEvolve() const;
	float				getRatio() const;
	list<string>		getEggGroup() const;
	string				getSpecies() const;
	float				getHeight() const;
	float				getWeight() const;
	string				getDescription() const;
	list<Attack *>		getAttacks() const;

	void				setId(int);
	void				setName(string);
	void				setTypes(list<string>);
	void				setAbility(string);
	void				setExp(int);
	void				setStats(Stats *);
	void				setEvolve(list<Evolution *>);
	void				setRatio(float);
	void				setEggGroup(list<string>);
	void				setSpecies(string);
	void				setHeight(float);
	void				setWeight(float);
	void				setDescription(string);
	void				setAttacks(list<Attacks *>);

private:
	int					_id;
	string				_name;
	list<string>		_types;
	string				_ability;
	int					_exp;
	Stats*				_stats;
	list<Evolution *>	_evolutions;
	float				_ratio;
	list<string>		_eggGroup;
	string				_species;
	float				_height;
	float				_weight;
	string				_description;
	list<Attack *>		_attacks;
};

#endif // !POKEMON
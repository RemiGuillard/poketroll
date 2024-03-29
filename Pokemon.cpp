#include "Pokemon.h"

Pokemon::Pokemon() {}

Pokemon::Pokemon(int id, QString name, QList<QString> types, QString ability,
			int exp, const Stats &stats, QList<Evolution*> evolutions,
			float ratio, QList<QString> eggGroup, QString species, float height,
			float weight, QString description, QList<Attack *> attacks)
			: _id(id), _name(name), _types(types), _ability(ability),
			_exp(exp), _stats(stats), _evolutions(evolutions),
			_ratio(ratio), _eggGroup(eggGroup), _species(species), _height(height),
			_weight(weight), _description(description), _attacks(attacks) {}

Pokemon::Pokemon(const Pokemon &cpy)
{
	*this = cpy;
}

Pokemon::~Pokemon() {}

Pokemon&			Pokemon::operator=(const Pokemon &cpy)
{
	if (this != &cpy)
	{
		_id = cpy._id;
		_name = cpy._name;
		_types = cpy._types;
		_ability = cpy._ability;
		_exp = cpy._exp;
		_stats = cpy._stats;
		_evolutions = cpy._evolutions;
		_ratio = cpy._ratio;
		_eggGroup = cpy._eggGroup;
		_species = cpy._species;
		_height = cpy._height;
		_weight = cpy._weight;
		_description = cpy._description;
		_attacks = cpy._attacks;
	}
	return *this;
}

int					Pokemon::getId() const { return _id; }

QString				Pokemon::getName() const { return _name; }

QList<QString>		Pokemon::getTypes() const { return _types; }

QString				Pokemon::getAbility() const { return _ability; }

int					Pokemon::getExp() const { return _exp; }

Stats				Pokemon::getStats() const { return _stats; }

QList<Evolution *>	Pokemon::getEvolve() const { return _evolutions; }

float				Pokemon::getRatio() const { return _ratio; }

QList<QString>		Pokemon::getEggGroup() const { return _eggGroup; }

QString				Pokemon::getSpecies() const { return _species; }

float				Pokemon::getHeight() const { return _height; }

float				Pokemon::getWeight() const { return _weight; }

QString				Pokemon::getDescription() const { return _description; }

QList<Attack *>		Pokemon::getAttacks() const { return _attacks; }

void				Pokemon::setId(int id) { _id = id; }

void				Pokemon::setName(QString name) { _name = name; }

void				Pokemon::setTypes(const QList<QString> &type) { _types = type; }

void				Pokemon::setAbility(QString abi) { _ability = abi; }

void				Pokemon::setExp(int exp) { _exp = exp; }

void				Pokemon::setStats(const Stats &stat) { _stats = stat; }

void				Pokemon::setEvolve(QList<Evolution *> evo) { _evolutions = evo; }

void				Pokemon::setRatio(float ratio) { _ratio = ratio; }

void				Pokemon::setEggGroup(QList<QString> egg) { _eggGroup = egg; }

void				Pokemon::setSpecies(QString spec) { _species = spec; }

void				Pokemon::setHeight(float h) { _height = h; }

void				Pokemon::setWeight(float w) { _weight = w; }

void				Pokemon::setDescription(QString desc) { _description = desc; }

void				Pokemon::setAttacks(QList<Attack *> att) { _attacks = att; }
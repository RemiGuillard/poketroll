#ifndef POKEMON
# define POKEMON

#include <QString>
#include <QList>

#include "Evolution.h"
#include "Stats.h"
#include "Attack.h"

class		Pokemon
{
public:
	Pokemon();
	Pokemon(int, QString, QList<QString>, QString,
			int, const Stats & , QList<Evolution*>,
			float, QList<QString>, QString, float,
			float, QString, QList<Attack *>);
	Pokemon(const Pokemon &);
	~Pokemon();

	Pokemon&			operator=(const Pokemon &);

	int					getId() const;
	QString				getName() const;
	QList<QString>		getTypes() const;
	QString				getAbility() const;
	int					getExp() const;
	Stats				getStats() const;
	QList<Evolution *>	getEvolve() const;
	float				getRatio() const;
	QList<QString>		getEggGroup() const;
	QString				getSpecies() const;
	float				getHeight() const;
	float				getWeight() const;
	QString				getDescription() const;
	QList<Attack *>		getAttacks() const;

	void				setId(int);
	void				setName(QString);
	void				setTypes(const QList<QString> &);
	void				setAbility(QString);
	void				setExp(int);
	void				setStats(const Stats &);
	void				setEvolve(QList<Evolution *>);
	void				setRatio(float);
	void				setEggGroup(QList<QString>);
	void				setSpecies(QString);
	void				setHeight(float);
	void				setWeight(float);
	void				setDescription(QString);
	void				setAttacks(QList<Attack *>);

private:
	int					_id;
	QString				_name;
	QList<QString>		_types;
	QString				_ability;
	int					_exp;
	Stats				_stats;
	QList<Evolution *>	_evolutions;
	float				_ratio;
	QList<QString>		_eggGroup;
	QString				_species;
	float				_height;
	float				_weight;
	QString				_description;
	QList<Attack *>		_attacks;
};

#endif // !POKEMON
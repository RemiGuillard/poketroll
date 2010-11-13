#ifndef ATTACK
# define ATTACK

#include <QString>

class		Attack
{
public:
	Attack();
	Attack(QString, QString, QString = "", QString = "");
	Attack(const Attack&);
	~Attack();

	Attack&			operator=(const Attack&);

	QString			getName() const;
	void			setName(QString);

	QString			getType() const;
	void			setType(QString);

	QString			getMachine() const;
	void			setMachine(QString);

	QString			getLvl() const;
	void			setRequire(QString);

private:
	QString			_type;
	QString			_name;
	QString			_machine;
	QString			_lvl;
};

#endif // !ATTACK
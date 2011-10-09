#ifndef EVOLUTION
# define EVOLUTION

#include <QString>

class		Evolution
{
public:
	Evolution();
	Evolution(int, QString, QString = "");
	Evolution(const Evolution&);
	~Evolution();

	Evolution&		operator=(const Evolution&);

	QString			getName() const;
	void			setName(QString);

	int				getId() const;
	void			setId(int);

	QString			getRequire() const;
	void			setRequire(QString);

private:
	int		_id;
	QString	_name;
	QString	_require;
};

#endif // !EVOLUTION
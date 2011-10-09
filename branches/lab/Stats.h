#ifndef STATS
# define STATS

class		Stats
{
public:
	Stats();
	Stats(const Stats&);
	~Stats();

	Stats&		operator=(const Stats&);

	void		setHp(QString);
	void		setAtk(QString);
	void		setDef(QString);
	void		setSpd(QString);
	void		setSat(QString);
	void		setSdf(QString);

	QString			getHp() const;
	QString			getAtk() const;
	QString			getDef() const;
	QString			getSpd() const;
	QString			getSat() const;
	QString			getSdf() const;

private:
	QString			_hp;
	QString			_atk;
	QString			_def;
	QString			_spd;
	QString			_sat;
	QString			_sdf;
};

#endif // !STATS
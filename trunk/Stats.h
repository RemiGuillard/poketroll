#ifndef STATS
# define STATS

class		Stats
{
public:
	Stats();
	Stats(const Stats&);
	~Stats();

	Stats&		operator=(const Stats&);

	void		setHp(int);
	void		setAtk(int);
	void		setDef(int);
	void		setSpd(int);
	void		setSat(int);
	void		setSdf(int);

	int			getHp() const;
	int			getAtk() const;
	int			getDef() const;
	int			getSpd() const;
	int			getSat() const;
	int			getSdf() const;

private:
	int			_hp;
	int			_atk;
	int			_def;
	int			_spd;
	int			_sat;
	int			_sdf;
};

#endif // !STATS
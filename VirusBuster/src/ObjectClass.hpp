#pragma once
#include"Basic.hpp"

class Player
{
private:
	Vec2 position;
	double angle;
	Vec2 vecR;		//���ˋO����̍��W

	RectF Body;
	Line shot_line;		//���ˋO��
	
	int BulletType;

public:
	Player();
	~Player();

	void draw() const;
	void rotate();
	void SelectBullet();
	void Shoot();
};

class EnemyTemplate
{
private:
	int HP;
	int damage;


	RectF Body;

public:
	EnemyTemplate();
	~EnemyTemplate();

	virtual void draw();
	virtual void move();
	void remove();
};

class BulletTemplate
{
private:
	RectF Body;
	int damage;

public:
	BulletTemplate();
	~BulletTemplate();

	virtual void draw();
	virtual void move();
	void remove(EnemyTemplate);
};

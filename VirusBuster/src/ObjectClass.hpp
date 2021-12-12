#pragma once
#include"Basic.hpp"

class Player
{
private:
	const double position;
	double angle;

	Texture looks;
	
	int BulletType;

public:
	Player();
	~Player();

	void draw();
	void SelectBullet();
	void Shoot();
};

class EnemyTemplate
{
private:
	int HP;
	int Damage;

	Texture looks;

public:
	EnemyTemplate();
	~EnemyTemplate();

	void draw();
	void move();
	void remove();
};

class BulletTemplate
{
private:
	double position;
	int Damage;

public:
	BulletTemplate();
	~BulletTemplate();

	void draw();
	void move();
	void remove(EnemyTemplate);
};

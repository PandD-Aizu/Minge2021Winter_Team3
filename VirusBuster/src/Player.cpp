#include"ObjectClass.hpp"

Player::Player() {
	position = Scene::Center();
	angle = Math::Pi / 2;
	vecR = OffsetCircular(position, 400, angle);

	Body = RectF(Arg::center(position), 30, 30);
	shot_line = Line(position.x, position.y, vecR.x, vecR.y);

	BulletType = 1;
}

Player::~Player() {

}

void Player::draw() const{
	Print << BulletType;

	Body.draw(Palette::White);
	shot_line.drawArrow(2, Vec2(20, 20), Palette::Red);
}

void Player::rotate() {
	static const double R = Math::Pi / 90;

	if (KeyRight.pressed()) {
		angle += R;
	}
	if (KeyLeft.pressed()) {
		angle -= R;
	}

	vecR = OffsetCircular(position, 400, angle);

	shot_line = Line(position.x, position.y, vecR.x, vecR.y);
}

void Player::SelectBullet() {
	static const int num_type = 4;

	if (Key1.down())
		BulletType = 1;
	if (Key2.down())
		BulletType = 2;
	if (Key3.down())
		BulletType = 3;
	if (Key4.down())
		BulletType = 4;

	if (KeyRShift.down()) {
		BulletType++;
		if (BulletType > num_type)
			BulletType = 1;
	}
	if (KeyLShift.down()) {
		BulletType--;
		if (BulletType < 1)
			BulletType = num_type;
	}
}

void Player::Shoot() {

}
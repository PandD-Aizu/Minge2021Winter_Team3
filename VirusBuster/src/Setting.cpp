#include"SceneClass.hpp"

Setting::Setting(const InitData& init)
	:IScene(init)
{

}

void Setting::update() {
	//�f�o�b�O�p
	debug();
}

void Setting::draw() const {

}

void Setting::debug() {
	ClearPrint();
	Print << U"�����͐ݒ���";

	if (KeyT.down()) {
		changeScene(State::Title);
	}
}
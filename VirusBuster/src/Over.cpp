#include"SceneClass.hpp"

Over::Over(const InitData& init)
	:IScene(init) {

}

void Over::update() {
	//�f�o�b�O�p
	debug();
}

void Over::draw() const {

}

void Over::debug() const {
	ClearPrint();
	Print << U"�����͐ݒ���";
}
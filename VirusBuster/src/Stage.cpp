#include"SceneClass.hpp"

Stage::Stage(const InitData& init)
	:IScene(init) {

}

void Stage::update() {
	//�f�o�b�O�p
	debug();
}

void Stage::draw() const {

}

void Stage::debug() const {
	ClearPrint();
	Print << U"�����͐ݒ���";
}
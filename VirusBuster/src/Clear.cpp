#include"SceneClass.hpp"

Clear::Clear(const InitData& init):IScene(init) {

}

void Clear::update() {
	//�f�o�b�O�p
	debug();
}

void Clear::draw() const {

}

void Clear::debug() const {
	ClearPrint();
	Print << U"�����͐ݒ���";
}
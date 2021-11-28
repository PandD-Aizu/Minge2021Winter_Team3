#pragma once
#include "Common.hpp"

class Title :public App::Scene {
private:
	
	// �傫�� 60 �̃t�H���g��p��
	const Font font60;

	// �L�̃e�N�X�`����p��
	const Texture cat;

	// �L�̍��W
	Vec2 catPos;
public:
	Title(const InitData& init);

	void update() override;

	void draw() const override;

	void Debug();
};
#pragma once
# include <Siv3D.hpp> // OpenSiv3D v0.4.3

//�V�[����
enum class State {
	Title,
	Setup,
	Game,
};

//�Q�[���S�̂ŋ��L����f�[�^
struct GameData {

};

//�V�[���Ǘ�
using App = SceneManager<State, GameData>;
﻿#include"ObjectClass.hpp"

EnemyTemplate::EnemyTemplate() {

}
EnemyTemplate::~EnemyTemplate() {

}
void EnemyTemplate::draw() {

}
void EnemyTemplate::move() {

}
bool EnemyTemplate::remove() {
	if (HP <= 0||Body.bottomCenter().y>=600) {
		return true;
	}
	return false;
}
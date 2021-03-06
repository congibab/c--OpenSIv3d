﻿#include "Title.h"

Title::Title(const InitData& init) : IScene(init), Tex(Emoji(U"🥝"))
{

}

void Title::update()
{
	//start Buttonを押すとGame Sceneに移動
	if (SimpleGUI::Button(U"game start", Scene::Center() + Vec2(-250,0), 500)) changeScene(U"Game");
}

void Title::draw() const
{
	Scene::SetBackground(ColorF(0.3, 0.4, 0.5));
	Tex.scaled(0.2).draw(Cursor::Pos());
	FontAsset(U"TitleFont")(U"マウスで図形を消すゲーム").drawAt(400, 100);
}

#pragma once

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;

namespace MoveCircle {

	ref class Ball
	{
	public:
		//移動の割合
		int pitch;
	private:
		//描画対象
		PictureBox^ picturebox;
		Bitmap^ bmp;
		Brush^ bcolor;
		//座標
		int positionX;
		int positionY;
		//以前の座標
		int prevX;
		int prevY;
		//進行方向
		int dirX;
		int dirY;
		//円の半径
		int radius;
		String^ kanji;
		String^ font;
	public:
		Ball::Ball() {};
		//引数違いのコンストラクタ
		Ball(PictureBox^pbox, Bitmap^ b, Brush^ br, String^ k) {
			picturebox = pbox;
			bmp = b;
			bcolor = br;
			kanji = k;
			radius = 40;
			pitch = radius / 2;
			dirX = +1;
			dirY = +1;
			font = "HG教科書体";
		}
		//指定位置に円を描く
		void putCircle(int x,int y) {
			positionX = x;
			positionY = y;

			Graphics^ g = Graphics::FromImage(bmp);
			g->FillEllipse(bcolor, x, y, radius * 2, radius * 2);

			g->DrawString(kanji, gcnew Font(font, radius), Brushes::Black, x + 4, y + 12, gcnew StringFormat());

			picturebox->Image = bmp;
		}
		void delCircle() {
			//以前の値がない場合
			if (prevX == 0) {
				prevX = positionX;
			}
			if (prevY == 0) {
				prevY = positionY;
			}
			Graphics^ g = Graphics::FromImage(bmp);
			g->FillEllipse(Brushes::White, prevX, prevY, radius * 2, radius * 2);

			picturebox->Image = bmp;
		}
		void move() {
			//以前の円を消す
			delCircle();
			//座標の調整
			int x=positionX +pitch*dirX;
			int y=positionY +pitch*dirY;

			if (x >= picturebox->Width-radius * 2) {
				dirX = -1;
			}

			if (x <= 0) {
				//壁に当たっていたときの処理
				dirX = +1;
			}

			if (y >= picturebox->Height - radius * 2) {
				dirY = -1;
			}

			if (y <= 0) {
				//壁に当たっていたときの処理
				dirY = +1;
			}

			positionX = x + dirX;
			positionY = y + dirY;

			putCircle(positionX, positionY);

			prevX = positionX;
			prevY = positionY;
		}
	};

}


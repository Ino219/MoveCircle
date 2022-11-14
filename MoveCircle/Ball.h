#pragma once

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;

namespace MoveCircle {

	ref class Ball
	{
	public:
		//�ړ��̊���
		int pitch;
	private:
		//�`��Ώ�
		PictureBox^ picturebox;
		Bitmap^ bmp;
		Brush^ bcolor;
		//���W
		int positionX;
		int positionY;
		//�ȑO�̍��W
		int prevX;
		int prevY;
		//�i�s����
		int dirX;
		int dirY;
		//�~�̔��a
		int radius;
		String^ kanji;
		String^ font;
	public:
		Ball::Ball() {};
		//�����Ⴂ�̃R���X�g���N�^
		Ball(PictureBox^pbox, Bitmap^ b, Brush^ br, String^ k) {
			picturebox = pbox;
			bmp = b;
			bcolor = br;
			kanji = k;
			radius = 40;
			pitch = radius / 2;
			dirX = +1;
			dirY = +1;
			font = "HG���ȏ���";
		}
		//�w��ʒu�ɉ~��`��
		void putCircle(int x,int y) {
			positionX = x;
			positionY = y;

			Graphics^ g = Graphics::FromImage(bmp);
			g->FillEllipse(bcolor, x, y, radius * 2, radius * 2);

			g->DrawString(kanji, gcnew Font(font, radius), Brushes::Black, x + 4, y + 12, gcnew StringFormat());

			picturebox->Image = bmp;
		}
		void delCircle() {
			//�ȑO�̒l���Ȃ��ꍇ
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
			//�ȑO�̉~������
			delCircle();
			//���W�̒���
			int x=positionX +pitch*dirX;
			int y=positionY +pitch*dirY;

			if (x >= picturebox->Width-radius * 2) {
				dirX = -1;
			}

			if (x <= 0) {
				//�ǂɓ������Ă����Ƃ��̏���
				dirX = +1;
			}

			if (y >= picturebox->Height - radius * 2) {
				dirY = -1;
			}

			if (y <= 0) {
				//�ǂɓ������Ă����Ƃ��̏���
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


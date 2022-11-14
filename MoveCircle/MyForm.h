#pragma once
#include"Ball.h"

namespace MoveCircle {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::Collections::Generic;

	/// <summary>
	/// MyForm の概要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ここにコンストラクター コードを追加します
			//
		}

	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::Button^  startbutton;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textTimer;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textHunt;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::PictureBox^  main_pictureBox;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// 必要なデザイナー変数です。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナー サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディターで変更しないでください。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->startbutton = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textTimer = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textHunt = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->main_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->main_pictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			this->splitContainer1->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->pictureBox1);
			this->splitContainer1->Panel1->Controls->Add(this->startbutton);
			this->splitContainer1->Panel1->Controls->Add(this->label5);
			this->splitContainer1->Panel1->Controls->Add(this->label4);
			this->splitContainer1->Panel1->Controls->Add(this->label3);
			this->splitContainer1->Panel1->Controls->Add(this->textTimer);
			this->splitContainer1->Panel1->Controls->Add(this->label2);
			this->splitContainer1->Panel1->Controls->Add(this->label1);
			this->splitContainer1->Panel1->Controls->Add(this->textHunt);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->main_pictureBox);
			this->splitContainer1->Size = System::Drawing::Size(1034, 761);
			this->splitContainer1->SplitterDistance = 70;
			this->splitContainer1->TabIndex = 0;
			// 
			// startbutton
			// 
			this->startbutton->Font = (gcnew System::Drawing::Font(L"メイリオ", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->startbutton->Location = System::Drawing::Point(735, 14);
			this->startbutton->Name = L"startbutton";
			this->startbutton->Size = System::Drawing::Size(82, 35);
			this->startbutton->TabIndex = 11;
			this->startbutton->Text = L"START";
			this->startbutton->UseVisualStyleBackColor = true;
			this->startbutton->Click += gcnew System::EventHandler(this, &MyForm::startbutton_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(1005, 27);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(17, 12);
			this->label3->TabIndex = 10;
			this->label3->Text = L"秒";
			// 
			// textTimer
			// 
			this->textTimer->Font = (gcnew System::Drawing::Font(L"メイリオ", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->textTimer->Location = System::Drawing::Point(870, 12);
			this->textTimer->Multiline = true;
			this->textTimer->Name = L"textTimer";
			this->textTimer->Size = System::Drawing::Size(129, 47);
			this->textTimer->TabIndex = 9;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(833, 27);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(31, 12);
			this->label2->TabIndex = 8;
			this->label2->Text = L"記録:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(73, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(39, 12);
			this->label1->TabIndex = 7;
			this->label1->Text = L"を探せ!";
			// 
			// textHunt
			// 
			this->textHunt->Font = (gcnew System::Drawing::Font(L"メイリオ", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->textHunt->Location = System::Drawing::Point(12, 12);
			this->textHunt->Multiline = true;
			this->textHunt->Name = L"textHunt";
			this->textHunt->Size = System::Drawing::Size(45, 47);
			this->textHunt->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(125, 21);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(238, 12);
			this->label4->TabIndex = 12;
			this->label4->Text = L"下の背景に表示された漢字と同じ色の円をクリック";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(127, 47);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(249, 12);
			this->label5->TabIndex = 13;
			this->label5->Text = L"下のエリアをクリックすると、ボールの位置が変わります";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(436, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(275, 47);
			this->pictureBox1->TabIndex = 14;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseClick);
			// 
			// main_pictureBox
			// 
			this->main_pictureBox->BackColor = System::Drawing::Color::White;
			this->main_pictureBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->main_pictureBox->Location = System::Drawing::Point(0, 0);
			this->main_pictureBox->Name = L"main_pictureBox";
			this->main_pictureBox->Size = System::Drawing::Size(1034, 687);
			this->main_pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->main_pictureBox->TabIndex = 0;
			this->main_pictureBox->TabStop = false;
			this->main_pictureBox->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::main_pictureBox_MouseClick);
			// 
			// timer1
			// 
			this->timer1->Interval = 20;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1034, 761);
			this->Controls->Add(this->splitContainer1);
			this->Name = L"MyForm";
			this->Text = L"間違いボール探し";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->main_pictureBox))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		private:
			Bitmap^ bmp;
			Bitmap^ bmp2;
			Ball^ ball;
			String^ font="HG教科書体";
			String^ correct="荻";
			String^ mistake = "萩";
			String^ cicleText = "〇";
			double now=0;
			int ball_count = 5;
			List<Ball^>^ ball_list;
			array<Brush^>^ brushes;
			array<String^>^ kanjis;
			//正解の番号
			int rndm;

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		//配列を設定
		init();
		
	}
private: System::Void startbutton_Click(System::Object^  sender, System::EventArgs^  e) {
	init();
}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < ball_list->Count; i++) {
		ball_list[i]->move();
	}
	now += 0.02;
	textTimer->Text = now.ToString("0.00");
}
private: System::Void pictureBox1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (startbutton->Enabled) {
		return;
	}
	if (((MouseEventArgs^)e)->Button == System::Windows::Forms::MouseButtons::Left) {
		int selectCircle = ((MouseEventArgs^)e)->X / pictureBox1->Height;
		if (rndm == selectCircle) {
			timer1->Stop();
			DrawMain(Brushes::Red, cicleText, true);
			startbutton->Enabled = true;
		}
		else {
			DrawMain(Brushes::Red, correct, false);

			for (int i = 0; i < ball_count; i++) {
				ball_list[i]->pitch = ball_list[i]->pitch - ball_list[i]->pitch / 2;

			}
			now += 10;
		}
	}
}
private: System::Void main_pictureBox_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (startbutton->Enabled) {
		return;
	}
	ball->putCircle(((MouseEventArgs^)e)->X, ((MouseEventArgs^)e)->Y);
}
		 private:void DrawCicle() {
			 int height = pictureBox1->Height;
			 int width = pictureBox1->Width;
			 //描画領域を定義
			 bmp = gcnew Bitmap(width, height);
			 
				 Graphics^ gr= Graphics::FromImage(bmp);
				 for (int i = 0; i < brushes->Length; i++) {
					 gr->FillEllipse(brushes[i], i*height, 0, height, height);
				 }
				 pictureBox1->Image = bmp;
			 
		 }
		 private:void DrawMain(Brush^ color,String^ text,bool trueflag) {
			 int height = main_pictureBox->Height;
			 int width = main_pictureBox->Width;

			 if (bmp2 == nullptr) {
				 bmp2 = gcnew Bitmap(width, height);
			 }

			 Graphics^ gr = Graphics::FromImage(bmp2);

			 //正解時の処理
			 if (trueflag) {
				 gr->FillRectangle(Brushes::LightPink, 0, 0, width, height);
			 }
			 else {
				 gr->FillRectangle(Brushes::White, 0, 0, width, height);
			 }
			 {
			 
			 gr->DrawString(text, gcnew Drawing::Font(font, height - height / 4), color, 0, 0, gcnew StringFormat());
			 main_pictureBox->Image = bmp2;
			 }
		 }
		 private:void init() {
			 //ボールカウント分の容量を持つ配列
			 brushes = gcnew array<Brush^ > (ball_count);
			 kanjis = gcnew array<String^>(ball_count);
			 

			 brushes[0] = Brushes::LightPink;
			 brushes[1] = Brushes::LightBlue;
			 brushes[2] = Brushes::LightGray;
			 brushes[3] = Brushes::LightCoral;
			 brushes[4] = Brushes::LightGreen;

			 rndm = (gcnew Random())->Next(0, ball_count);

			 for (int i = 0; i < kanjis->Length; i++) {
				 if (i == rndm) {
					 kanjis[i]=correct;
				 }
				 else {
					 kanjis[i]=mistake;
				 }
			 }

			 //pbox1に色数と同じ円を描く
			 DrawCicle();
			 //mainに正解の文字を描く
			 DrawMain(Brushes::Gray, correct, false);

			 ball_list = gcnew List<Ball^>;

			 for (int i = 0; i < ball_count; i++) {
				 ball_list->Add(gcnew Ball(main_pictureBox, bmp2, brushes[i], kanjis[i]));
			 }


			 Random^ rnd2 = gcnew Random();

			 int temp_d;

			 for (int i = 0; i < ball_count; i++) {
				 temp_d = rnd2->Next(0, main_pictureBox->Height);
				 ball_list[i]->putCircle(temp_d, temp_d);
			 }
			 startbutton->Enabled = false;
			 //テキストボックスに正解の文字を当てはめる
			 textHunt->Text = correct;

			 timer1->Start();
		 }
};
}

#pragma once
/*******************************
		入力の追加機能
********************************/
//入力タイプ
enum type {
	INPUT_CLICKED,
	INPUT_PRESSED,
	INPUT_RELEASED,
	INPUT_TYPE_SIZE
};
enum gamepad {
	GAMEPAD0,
	GAMEPAD1,
	GAMEPAD_SIZE
};
enum buttons {
	BUTTON_RIGHT,
	BUTTON_LEFT,
	BUTTON_JUMP,
	BUTTON_BLOCK,
	BUTTON_ATTACK,
	BUTTON_SIZE
};

struct InputFlags {
	bool pressed_right;
	bool pressed_left;
	bool pressed_jump;
	bool pressed_block;
	bool pressed_attack;
	bool clicked_right;
	bool clicked_left;
	bool clicked_jump;
	bool clicked_block;
	bool clicked_attack;
};

	class AddFuncInput {
	private:
		

	public:
		//右ボタンが押されたかどうかをbool型で返します
		//第一引数:入力タイミング 第二引数:GamePad番号
		static bool isRight(type, gamepad);
		//左ボタンが押されたかどうかをbool型で返します
		//第一引数:入力タイミング 第二引数:GamePad番号
		static bool isLeft(type, gamepad);
		//攻撃ボタンが押されたかどうかをbool型で返します
		//第一引数:入力タイミング 第二引数:GamePad番号
		static bool isAttack(type, gamepad);
		//ガードボタンが押されたかどうかをbool型で返します
		//第一引数:入力タイミング 第二引数:GamePad番号
		static bool isBlock(type, gamepad);
		//ジャンプボタンが押されたかどうかをbool型で返します
		//第一引数:入力タイミング 第二引数:GamePad番号
		static bool isJump(type, gamepad);

		static bool isButtons(buttons, type, gamepad);
	};

	class ComInput {
	private:
		InputFlags *input_flags;
		bool click_flag[BUTTON_SIZE];
	public:
		ComInput(InputFlags*);
		void initInput();
		void right();
		void left();
		void jump();
		void block();
		void attack();
	};
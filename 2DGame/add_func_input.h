#pragma once
/*******************************
		���͂̒ǉ��@�\
********************************/
//���̓^�C�v
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
		//�E�{�^���������ꂽ���ǂ�����bool�^�ŕԂ��܂�
		//������:���̓^�C�~���O ������:GamePad�ԍ�
		static bool isRight(type, gamepad);
		//���{�^���������ꂽ���ǂ�����bool�^�ŕԂ��܂�
		//������:���̓^�C�~���O ������:GamePad�ԍ�
		static bool isLeft(type, gamepad);
		//�U���{�^���������ꂽ���ǂ�����bool�^�ŕԂ��܂�
		//������:���̓^�C�~���O ������:GamePad�ԍ�
		static bool isAttack(type, gamepad);
		//�K�[�h�{�^���������ꂽ���ǂ�����bool�^�ŕԂ��܂�
		//������:���̓^�C�~���O ������:GamePad�ԍ�
		static bool isBlock(type, gamepad);
		//�W�����v�{�^���������ꂽ���ǂ�����bool�^�ŕԂ��܂�
		//������:���̓^�C�~���O ������:GamePad�ԍ�
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
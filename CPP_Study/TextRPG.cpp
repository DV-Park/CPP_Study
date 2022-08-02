#include <iostream>
using namespace std;

enum PlayerType {
	PT_Knight = 1,
	PT_Archer = 2,
	PT_Mage = 3,
};

enum MonsterType {
	MT_Slime = 1,
	MT_Orc = 2,
	MT_Skeleton = 3,
};

int playerType;
int hp;
int attack;
int defence;

int monsterType;
int monsterHp;
int monsterAttack;
int monsterdefence;

void EnterLobby();
void SelectPlayer();
void EnterField();
void CreateRandomMonster();
void EnterBattle();

int main() {
	srand(time(0));

	EnterLobby();

	return 0;
}

void EnterLobby() {
	while (true) {
		cout << "--------------------" << endl;
		cout << "�κ� �����߽��ϴ�!" << endl;
		cout << "--------------------" << endl;

		SelectPlayer();

		cout << "----------------------------" << endl;
		cout << "(1) �ʵ� ���� (2) ���� ����" << endl;
		cout << "----------------------------" << endl;

		int input;
		cin >> input;
		if (input == 1) {
			EnterField();
		}
		else {
			return;
		}
	}
}

void SelectPlayer() {
	while (true) {
		cout << "--------------------" << endl;
		cout << "������ ����ּ���!" << endl;
		cout << "(1)��� (2)�ü� (3) ����" << endl;
		cout << "> " << endl;

		cin >> playerType;

		if (playerType == PT_Knight) {
			cout << "��� ������... !" << endl;
			hp = 150;
			attack = 10;
			defence = 5;
			break;
		}
		else if (playerType == PT_Archer) {
			cout << "�ü� ������... !" << endl;
			hp = 100;
			attack = 15;
			defence = 3;
			break;
		}
		else if (playerType == PT_Mage) {
			cout << "���� ������... !" << endl;
			hp = 80;
			attack = 25;
			defence = 0;
			break;
		}
	}
}

void EnterField() {
	while (true) {
		cout << "--------------------" << endl;
		cout << "�ʵ忡 �����߽��ϴ�!" << endl;
		cout << "--------------------" << endl;

		cout << "[Player] HP : " << hp << " /ATT : " << attack << " /DEF : " << defence << endl;

		CreateRandomMonster();

		cout << "--------------------" << endl;
		cout << "(1) ���� (2) ����" << endl;
		cout << "> " << endl;
		int input;
		cin >> input;

		if (input == 1) {
			EnterBattle();
			if (hp == 0)
				return;
		}
		else 
			return;
	}
}

void CreateRandomMonster() {
	monsterType = 1 + (rand() % 3);

	switch (monsterType) {
	case MT_Slime:
		cout << "������ ������...! (HP:15 / ATT:5 / DEF:0)" << endl;
		monsterHp = 15;
		monsterAttack = 5;
		monsterdefence = 0;
		break;
	case MT_Orc:
		cout << "��ũ ������...! (HP:40 / ATT:10 / DEF:3)" << endl;
		monsterHp = 40;
		monsterAttack = 10;
		monsterdefence = 3;
		break;
	case MT_Skeleton:
		cout << "���̷��� ������...! (HP:80 / ATT:15 / DEF:5)" << endl;
		monsterHp = 80;
		monsterAttack = 15;
		monsterdefence = 5;
		break;
	}
}
void EnterBattle() {
	while (true) {
		int damage = attack - monsterdefence;
		if (damage < 0)
			damage = 0;

		monsterHp -= damage;
		if (monsterHp < 0)
			monsterHp = 0;

		cout << "���� ���� ü�� : " << monsterHp << endl;
		if (monsterHp == 0) {
			cout << "���͸� óġ�߽��ϴ�!" << endl;
			return;
		}

		damage = monsterAttack - defence;
		if (damage < 0)
			damage = 0;

		hp -= damage;
		if (hp < 0)
			hp = 0;
		
		cout << "�÷��̾� ���� ü�� : " << hp << endl;
		if (hp == 0) {
			cout << "����� �׾����ϴ�!" << endl;
			return;
		}
	}
}
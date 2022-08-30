#include <iostream>
using namespace std;

struct StatInfo
{
	int hp;
	int attack;
	int defence;
};

void EnterLobby();
StatInfo CreatePlayer();
void CreateMonster(StatInfo* info);
bool StartBattle(StatInfo* player, StatInfo* monster);


int main() {
	EnterLobby();
	return 0;
}

void EnterLobby() {

	cout << "�κ� �����߽��ϴ�" << endl;

	StatInfo player;
	player.hp = 0xbbbbbbbb;
	player.attack = 0xbbbbbbbb;
	player.defence = 0xbbbbbbbb;
	//�۾��� ���� �� ���� (���� ������ ����)
	player = CreatePlayer();

	StatInfo monster;
	monster.hp = 0xbbbbbbbb;
	monster.attack = 0xbbbbbbbb;
	monster.defence = 0xbbbbbbbb;
	//�۾��� ���� (�ּҿ� �����ؼ� �����Ͽ� ����)
	CreateMonster(&monster);

	bool victory = StartBattle(&player, &monster);

	if (victory)
		cout << "�¸�!" << endl;
	else
		cout << "�й�!" << endl;
}

StatInfo CreatePlayer() {

	StatInfo ret;

	cout << "�÷��̾� ����" << endl;

	ret.hp = 100;
	ret.attack = 10;
	ret.defence = 2;

	return ret;
}

void CreateMonster(StatInfo* info) {

	cout << "���� ����" << endl;

	info->hp = 40;
	info->attack = 10;
	info->defence = 1;
}

bool StartBattle(StatInfo* player, StatInfo* monster) {
	while (true) {
		int damage = player->attack - monster->defence;
		if (damage < 0)
			damage = 0;

		monster->hp -= damage;

		if (monster->hp < 0)
			monster->hp = 0;

		cout << "���� HP : " << monster->hp << endl;

		if (monster->hp == 0)
			return true;

		damage = monster->attack - player->defence;
		if (damage < 0)
			damage = 0;

		cout << "�÷��̾� HP: " << player->hp << endl;

		player->hp -= damage;
		if (player->hp < 0)
			player->hp -= damage;

		if (player->hp == 0)
			return false;
	}
}
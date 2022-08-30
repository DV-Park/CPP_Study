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

	cout << "로비에 입장했습니다" << endl;

	StatInfo player;
	player.hp = 0xbbbbbbbb;
	player.attack = 0xbbbbbbbb;
	player.defence = 0xbbbbbbbb;
	//작업이 조금 더 느림 (복사 과정이 복잡)
	player = CreatePlayer();

	StatInfo monster;
	monster.hp = 0xbbbbbbbb;
	monster.attack = 0xbbbbbbbb;
	monster.defence = 0xbbbbbbbb;
	//작업이 빠름 (주소에 접근해서 복사하여 빠름)
	CreateMonster(&monster);

	bool victory = StartBattle(&player, &monster);

	if (victory)
		cout << "승리!" << endl;
	else
		cout << "패배!" << endl;
}

StatInfo CreatePlayer() {

	StatInfo ret;

	cout << "플레이어 생성" << endl;

	ret.hp = 100;
	ret.attack = 10;
	ret.defence = 2;

	return ret;
}

void CreateMonster(StatInfo* info) {

	cout << "몬스터 생성" << endl;

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

		cout << "몬스터 HP : " << monster->hp << endl;

		if (monster->hp == 0)
			return true;

		damage = monster->attack - player->defence;
		if (damage < 0)
			damage = 0;

		cout << "플레이어 HP: " << player->hp << endl;

		player->hp -= damage;
		if (player->hp < 0)
			player->hp -= damage;

		if (player->hp == 0)
			return false;
	}
}
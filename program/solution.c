#include <stdio.h>

struct Player
{
	// ����ü ũ���� ��� ��� ������ ������ ���� �޸��� ũ�Ⱑ �ٸ���
	// ������ �� �ֽ��ϴ�.

	char blood;           // 1 byte
	int health;             // 4 byte
	float attack;         // 4 byte
	double defence; // 8 byte
	


	// ����ü�� �����ϱ� ���� ����ü�� �޸� ������
	// �������� �����Ƿ�, ����ü ���ο� �ִ� �����͸�
	// �ʱ�ȭ�� �� �����ϴ�.
};

int main()
{
#pragma region ����ü
	// ���� ���� ������ �ϳ��� �������� ����ȭ�� ����
	// �ϳ��� ��ü�� �����ϴ� ���Դϴ�.

	//struct Player player = { 'B', 75, 5.5f };

	///*player.attack = 10.5f;
	//player.blood = '0';
	//player.health = 100;
	//*/

	//printf("player.attack�� �� : %f\n", player.attack);
	//printf("player.blood�� �� : %c\n", player.blood);
	//printf("player.health�� �� : %d\n", player.health);

#pragma region ����Ʈ �е�
	// ��� ������ �޸𸮿��� CPU�� ���� �� �� ���� ���� ��
	// �ֵ���, �����Ϸ��� ���������� ��Ͽ� ���߾� ����Ʈ�� 
	// �е����ִ� ����ȭ �����Դϴ�.

	/*printf("Player ����ü�� ũ�� : %d\n", sizeof(struct Player));*/

#pragma endregion

	

#pragma endregion

#pragma region �� �� ������ �Ÿ�

	printf("Root 25 : %lf\n", sqrt(25));
	printf("pow 2�� 3�� : %lf\n", pow(2, 3));

#pragma endregion

	return 0;
}
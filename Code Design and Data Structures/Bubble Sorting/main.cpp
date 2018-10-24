#include <iostream>

struct Player
{
	int m_Health;
	void other(int Health);
	int temp;
};

void Player::other(int Health)
{
	for (int i = 0; i <= Health; i++)
	{
		for (int j = 0; j <= Health; j++)
		{
			if (j < i)
			{
				temp = j;
				j = i;
				i = temp;
			}
		}
	}
}

int main()
{

	Player p1{ 100 };
	Player p2{ 55 };
	Player p3{ 45 };
	Player p4{ 12 };

}
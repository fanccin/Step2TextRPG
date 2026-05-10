#include <iostream>
#include <string>
#include <format>

void printStatus(std::string name, int stat[]);

int main() {
	std::string name;

	const int SIZE = 4;

	//배열 선언
	//정수만 들어감
	//이름은 stat
	//배열의 크기는 4
	//{0} : 초기화
	int stat[SIZE] = {0};

	//배열 인덱스 순서
	//stat[0] = HP
	//stat[1] = MP
	//stat[2] = 공격력
	//stat[3] = 방어력

	//게임 제목 출력
	std::cout << "===========================================\n";
	std::cout << "   [ 던전 탈출 텍스트 RPG ]\n";
	std::cout << "===========================================\n";
	std::cout << "용사의 이름을 입력해주세요 : \n";

	//주인공 이름 입력받기 
	std::cin >> name;

	//스텟 2개씩 입력받기
	std::cout << "HP와 MP를 입력해주세요(HP 입력 후 enter 누르고 MP 입력) : \n";
	std::cin >> stat[0] >> stat[1];

	std::cout << "공격력과 방어력을 입력해주세요(공격력 입력 후 enter 누르고 방어력 입력) : \n";
	std::cin >> stat[2] >> stat[3];

	//출력 함수 호출
	printStatus(name, stat);
	return 0;
}

void printStatus(std::string name, int stat[]) {

	std::cout << "당신의 용사가 태어났습니다!\n";

	//캐릭터 생성 완료 및 스텟창 출력
	std::cout << "====================================\n";
	std::cout << std::format("  {}의 현재 능력치\n", name);
	std::cout << "====================================\n";
	std::cout << std::format("HP : {}    MP : {}\n", stat[0], stat[1]);
	std::cout << std::format("공격력 : {}    방어력 : {}\n", stat[2], stat[3]);
	std::cout << "====================================\n";

}
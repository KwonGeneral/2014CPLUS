#include <iostream>
#include <Windows.h>
#include <ctime>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

void first_Menu();
void second_Menu();
void story();
void dice_Rule();
void roulette_Rule();
void dice_Rule_sub();
void print_dice(int temp_dice[]);
void russianRoulette();
void batting();
void message();
//int dice_Gamble();
int jugge_dice(int my_dice[]);
bool is_dead(int bullet, int shoot);
int selected;
void united();
void inPut();
void editMenu();
void textEdit();
void random(int r_dice[]);

double bullet=6;
double shot=2;

int main()
{
	int first_Select=0;  //처음의 선택을 0으로
	int second_Select=0;  //두번째의 선택을 0으로
	int menu=0;   //메뉴의 값을 0으로
	int russianRoulette_Number=0; //러시안 룰렛 넘버를 0으로
	int dice_Gamble_Number=0; //주사위 게임의 선택을 0으로
	long batting_Money=0; //배팅금액을 0으로 지정
	long own_Money=0; //가진돈을 0으로 지정
	long borrow_Money=200000000;  //빌린돈 2천만원
	int count=1; //카운트는 1부터 시작
	int rate=0;  //배율은 0에서 시작
	int dice[3] = {0, 0, 0}; //주사위의 배열을 0 0 0으로 한다

	srand((unsigned)time(0));
	/*
	for (int i = 0; i < 3; i++)
	{
		dice[i] = (rand()%6)+1;
	}
	여기서 안씀
	*/
	FIRST: //첫번째로 돌아가기위한 go to 문을 사용할수있는 마커
	first_Menu(); //첫번째 메뉴 출력
	cin >> first_Select; //first_Select에 저장
	system("cls"); //시스템 정지

	switch(first_Select)
	{
	case 1: //1을 눌렀을경우 스토리가 나오고 멈춤
		story();
		system("pause");
		system("cls");
		break;
	case 2: //2를 눌렀을경우 텍스트 에디트를 불러오고 멈춤
		textEdit();
		system("cls");
		break;
	case 3://종료
		exit(0);
		break;
	default: //만약 다른숫자나 문자를 입력하였을경우 에러메시지 출력
		cout << "\n ※에러...! 다시 입력하시오. " << endl;
		goto FIRST;
		break;
	}

	RETRY:  //goto문으로 재시도를 불러오는곳
	do{ //배팅머니는 0으로 지정되고 second_Menu를 출력후 second_Select를 입력받고 정지
		cout << " \n		빚 " << borrow_Money << " 원 \n" << endl;
		cout << "		소지금 " << own_Money << " 원 \n" << endl;
		batting_Money=0;
		second_Menu();
		cin >> second_Select;
		system("cls");

	switch(second_Select) //두번째 선택을 하였을 경우
	{
	case 1: //1번을 누르면 batting_Money를 입력받음
		dice_Rule();
		system("pause");
		system("cls");

		batting_Dice: //go to 문
		cout << " \n\n\n " << endl;
		batting();
		cin >> batting_Money;
								;
		if(own_Money >= batting_Money) //가진돈과 배팅머니 입력받은 값을 비교하여 만약 배팅머니가 가진돈보다 적을경우 가진돈에서 배팅머니를 빼고 가진돈을 재정의
		{
			own_Money -= batting_Money;
			cout << " \n\n " << endl;
			system("pause");
			system("cls");
		}
		else //만약 가진돈보다 배팅머니가 더 많다면 에러메시지와 batting_Dice로 바뀜
		{
			cout << "\n 소지금액을 초과하였습니다. " << endl;
			cout << " 다시입력하십시오. \n" << endl;
			system("pause");
			system("cls");
			goto batting_Dice;
		}

		//print_dice(dice);
		//batting_Money *= jugge_dice(dice);

		do{ //두번째 주사위 룰을 출력후 dice_Gamble_Number를 입력받은뒤 만약 2가 나오면 가진돈에서 배팅머니를 더하고 가진돈을 재정의 하고 끝냄
		dice_Rule_sub();
		cin >> dice_Gamble_Number;
		if(dice_Gamble_Number == 2)
		{
			own_Money += batting_Money;
			system("cls");
			break;
		}
		random(dice); //랜덤 주사위를 불러온다
		print_dice(dice); //주사위를 출력하는 메뉴
		own_Money += batting_Money * jugge_dice(dice); //배팅머니와 jugge_dice[dice]를 곱하고 가진돈에서 더한뒤에 가진돈 재정의 하고 멈춤

		system("pause");
		system("cls");
		}while(dice_Gamble_Number != 1); //1과 다를경우 브레이크
		break;
	case 2:

		roulette_Rule(); //룰렛 룰을 출력하고 멈춤
		system("pause");
		system("cls");

		batting_Roulette: //go to문을 위한 배팅 룰렛
		cout << " \n\n\n " << endl;
		batting();
		cin >> batting_Money; //배팅머니를 입력받음
		if(own_Money >= batting_Money) //가진돈과 배팅머니를 비교하는 구문
		{
			own_Money -= batting_Money;
			cout << " \n\n " << endl;
			system("pause");
			system("cls");
		}
		else
		{
			cout << "\n 소지금액을 초과하였습니다. " << endl;
			cout << " 다시입력하십시오. \n" << endl;
			system("pause");
			system("cls");
			goto batting_Roulette;
		}

		do{
			cout << "\n\n ⊙⊙⊙⊙ 총알 발사 수 : " << count-1 << " ⊙⊙⊙⊙ " << endl; //카운트는 하나씩 줄어듦
			russianRoulette(); //러시안 룰렛을 불러온다
			cin >> russianRoulette_Number; //러시안 룰렛 넘버를 입력받음
			if(russianRoulette_Number == 2) //만약 2을 입력했을때 카운트는 1로 불릿은6으로 슛은 2로 되어 배팅머니 곱하기 배율을 한뒤 가진돈을 더하고 가진돈 재정의
			{
				count = 1;
				bullet=6;
				shot=2;
				own_Money += batting_Money*rate;
				system("cls");
				break;
			}
			rate = 1;
			for(int i = 0; i<count; i++) //i는 0이고 카운트보다 작으면서 i는 1씩 더한다
			{
				rate *= 2; //배율을 2배로하고 배율 재정의
			}
			if(is_dead(bullet,shot)) //죽었을경우를 출력
			{
				count = 1; //카운트는 1
				bullet=6; //불릿수는 6
				shot=2; //슛은 2발로 재정의

				cout << "\n\n 공포탄이 발사 되었습니다. \n" << endl;
				cout << " ★ 게임에서 패배하셨습니다. " << endl;
				system("pause");
				system("cls");
				cout << " 소지금을 " << batting_Money << "원 만큼 잃어버렸습니다. " << endl; //배팅머니만큼 돈을 잃고 RETRY메뉴로 복귀
				goto RETRY;
			}
			else //공포탄이 발사되지 않은경우
			{
				cout << "\n\n 공포탄이 발사 되지 않았습니다. \n" << endl;
				cout << " 게임을 속행합니다. " << endl;

				cout << " 배당금 : " << batting_Money*rate << " 원 \n" << endl;
			}
			count++; //카운트는 1씩 올라가고
			bullet--; //불릿수는 1씩 줄어든다
			if(count == 5) //만약 카운트가 5일때 카운트는 1로 불릿수는6으로 슛은 2로 재정의
			{
			count = 1;
			bullet=6;
			shot=2;

			system("cls");
			message(); //메시지 출력
			cout << " 배당금 : " << batting_Money*rate << " 원 \n" << endl; //배팅머니와 비율을 곱하고 배당금과 함께 출력
			own_Money += batting_Money*rate; //배팅머니와 비율을 곱하고 가진돈과 더한뒤 가진돈 재정의
			system("pause");
			system("cls");
			break;
			}
			system("pause");
			system("cls");
		}while(russianRoulette_Number != 2);
		break;
	case 3:  //돈값는 메뉴
		borrow_Money -= own_Money;  //빌린돈에서 가진돈을 빼고 빌린돈 재정의
		cout << " 빚을 " << own_Money << "원 만큼 탕감하였습니다. " << endl; //가진돈으로 탕감한거 출력
		own_Money=0; //가진돈은 0원으로 재정의
		break;
	case 4: //돈 빌리는 메뉴
		long loan=0; //loan은 0
		long loan_Money=0; //loan_Money는 0

		cout << "\n 안녕하세요. 와니은행에 오신것을 환영합니다. " << endl;
		cout << " 저희 은행은 60% 이자가 생깁니다. " << endl;
		cout << " 대출을 하시겠습니까? \n\n" << endl;
		cout << "   1. 예(Yes) " << endl;
		cout << "   2. 아니오(No) \n" << endl;
		cout << "   ※대출한도는 500만원 입니다. " << endl;
		cout << "     1과 2를 제외한 숫자를 입력하시면 이전 메뉴로 돌아갑니다. \n" << endl;
		cout << " 선택하시오 : ";
		cin >> loan; //0에서 입력받은값으로 재정의
		system("cls");

		if(loan == 1) //1을 눌렀을때
		{
			loan_limit: //go to 문을 만듦
			cout << "\n 얼마를 대출하시겠습니까? \n" << endl;
			cout << " 금액 : ";
			cin >> loan_Money; //loan_Money를 입력받음
			system("cls");
			if(loan_Money <= 5000000) //500만원보다 적거나 같은지 체크함
			{
			cout << "\n 소지금이 " << loan_Money << "원 만큼 증가하였습니다. \n" << endl;
			cout << " 빚이 " << loan_Money*0.6 << "원 만큼 증가하였습니다. \n" << endl; //loan_Money에서 60%를 곱하고 빚을 더 증가
			own_Money += loan_Money; //가진돈에서 loan_Money를 더하고 가진돈 재정의
			borrow_Money += loan_Money*0.6+own_Money; //빌린돈은 loan_Money * 60% + own_Money를 계산하고 borrow_Money에 더하고 borrow_Money재정의
			}
			else //500만원을 초과하였을경우 loan_limit으로 이동
			{
				cout << " 대출한도 5000000(500만)원을 초과하였습니다. " << endl;
				cout << " 다시입력하십시오. " << endl;
				goto loan_limit;
			}
			break;
		}
		if(loan == 2) //2를 눌렀을경우 브레이크
		{
			system("cls");
			break;
		}
		}}while(second_Select != 5);

	return 0;
}

void first_Menu() //처음 문서편집프로그램과 도박게임의 선택을 도와주는것
{
	cout << "\n\n ◇◆◇◆◇◆◇◆◇◆◇◆◇◆◇◆◇◆◇◆◇◆◇◆◇◆◇◆◇◆◇◆◇◆◇◆◇◆◇ ";
	cout << " ◆◇                                                                      ◇◆ ";
	cout << " ◇◆                       1. 도박 게임 (빚 환원)                         ◆◇ ";
	cout << " ◆◇                       2. 문서편집 프로그램                           ◇◆ ";
	cout << " ◇◆                       3. 종료(Exit)                                  ◆◇ ";
	cout << " ◇◆                                                                      ◆◇ ";
	cout << " ◆◇◆◇◆◇◆◇◆◇◆◇◆◇◆◇◆◇◆◇◆◇◆◇◆◇◆◇◆◇◆◇◆◇◆◇◆◇◆ \n\n" << endl;
	cout << " ※ Select : ";
}

void second_Menu() //2번을 눌렀을때 도박게임으로 넘어가면 나오는 룰
{
	cout << " ♧♣♧♣♧♣♧♣♧♣♧♣♧♣♧♣♧♣♧♣♧♣♧♣♧♣♧♣♧♣♧♣♧♣♧♣♧♣♧ ";
	cout << " ♣♧                      1. 친치로 (주사위 게임)                         ♧♣ ";
	cout << " ♧♣                      2. 러시안룰렛                                   ♣♧ ";
	cout << " ♣♧                      3. 빚 환산 (소지금으로 빚 탕감)                 ♧♣ ";
	cout << " ♧♣                      4. 대출(60%이자)                                ♣♧ ";
	cout << " ♧♣                      5. 종료(Exit)                                   ♣♧ ";
	cout << " ♣♧♣♧♣♧♣♧♣♧♣♧♣♧♣♧♣♧♣♧♣♧♣♧♣♧♣♧♣♧♣♧♣♧♣♧♣♧♣ \n\n" << endl;
	cout << " ※ Select : ";
}

void story() //스토리를 짠것
{
	cout << "                               <Story>                              " << endl;
	cout << "\n 26살인 주인공은 취직도 안하고 편의점의 아르바이트나 적당히 하면서 " << endl;
	cout << " 하루하루 방만한 생활을 보내고 있다. " << endl;
	cout << "\n 그러던 어느 날, 주인공에게 악덕금융회사 사장인 최민수라는 남자가 나타난다.  " << endl;
	cout << " 남자는 주인공에게 친구가 빌린 사채돈의 보증인이라며 도망간 친구대신 " << endl;
	cout << " 빚을 갚으라고 협박을 한다. " << endl;
	cout << "\n 빌린 돈은 이자가 쌓여서 2억원이라는 고액으로 부풀어 오르고 " << endl;
	cout << " 남자는“ 겜블(Gamble)로 빌린 돈 이상의 큰 돈을 손에 넣는 기회가 있다” " << endl;
	cout << " 라고 달콤하게 속삭인다. " << endl;
	cout << "\n 몇 시간 후, 게임이 벌어지는 운명의 크루즈선에 올라 죽음의 " << endl;
	cout << " '겜블(Gamble)'을 시작하는데… \n" << endl;
}

void dice_Rule() //주사위 게임의 룰
{
	cout << "\n\n ▤▧▥▨▤▧▥▨▤▧▥▨▤▧▥▨▤룰 설명▧▥▨▤▧▥▨▤▧▥▨▤▧▥▨▤▧ \n" << endl;
	cout << " 친치로 겜블 룰(Rule) \n\n" << endl;
	cout << "\n ◈시고로(シゴロ) - 4, 5, 6의 눈이 동시에 나왔을 때, " << endl;
	cout << " 나온 사람은 배팅금의 2배의 돈을 받는다. " << endl;
	cout << " ◈아라시(アラシ) - 동시에 3개의 같은 눈이 나왔을 때, " << endl;
	cout << " 나온 사람은 배팅금의 3배의 돈을 받는다. " << endl;
	cout << " ◈히후미(ヒフミ) - 1, 2, 3의 눈이 동시에 나왔을 때, " << endl;
	cout << " 배팅금액의 4배를 받게된다. " << endl;
	cout << " ◈핀조로(ピンゾロ) - 1, 1, 1이 동시에 나왔을 때, " << endl;
	cout << " 배팅금의 5배를 받게 된다. " << endl;
	cout << "\n ▤▧▥▨▤▧▥▨▤▧▥▨▤▧▥▨▤룰 설명▧▥▨▤▧▥▨▤▧▥▨▤▧▥▨▤▧ \n" << endl;
}

void dice_Rule_sub() //두번째로 보여주는 주사위게임의 룰과 굴리는것
{
	cout << "\n ◈시고로(シゴロ) - 4, 5, 6의 눈이 동시에 나왔을 때, " << endl;
	cout << " 나온 사람은 배팅금의 2배의 돈을 받는다. " << endl;
	cout << " ◈아라시(アラシ) - 동시에 3개의 같은 눈이 나왔을 때, " << endl;
	cout << " 나온 사람은 배팅금의 3배의 돈을 받는다. " << endl;
	cout << " ◈히후미(ヒフミ) - 1, 2, 3의 눈이 동시에 나왔을 때, " << endl;
	cout << " 배팅금액의 4배를 받게된다. " << endl;
	cout << " ◈핀조로(ピンゾロ) - 1, 1, 1이 동시에 나왔을 때, " << endl;
	cout << " 배팅금의 5배를 받게 된다. \n\n" << endl;

	cout << " ▣     선택지를 골라주십시오      ▣ " << endl;
	cout << " ▣                                ▣ " << endl;
	cout << " ▣  1. 주사위 굴리기              ▣ " << endl;
	cout << " ▣  2. 포기(도박 메뉴로 돌아가기) ▣ \n" << endl;
	cout << "    ※ Select : ";
}

/*
int dice_Gamble(int my_dice[])
{
	print_dice(my_dice);

	return 0;
}
노쓸모
*/

void print_dice(int temp_dice[]) //주사위 눈을 표시 temp_dice[]에서 받아오고 출력
{
	cout << "\n";
	 for (int i = 0; i < 3; i++)
	 {
		switch (temp_dice[i])
		{
      case 1:
		  cout<<" □□□□□□□ "<<endl;
		  cout<<" □□□□□□□ "<<endl;
		  cout<<" □□□□□□□ "<<endl;
		  cout<<" □□□■□□□ "<<endl;
		  cout<<" □□□□□□□ "<<endl;
		  cout<<" □□□□□□□ "<<endl;
		  cout<<" □□□□□□□ \n"<<endl;
         break;
      case 2:
		  cout<<" □□□□□□□ "<<endl;
		  cout<<" □□□□□□□ "<<endl;
		  cout<<" □□□□□□□ "<<endl;
		  cout<<" □□■□■□□ "<<endl;
		  cout<<" □□□□□□□ "<<endl;
		  cout<<" □□□□□□□ "<<endl;
		  cout<<" □□□□□□□ \n"<<endl;
         break;
      case 3:
		  cout<<" □□□□□□□ "<<endl;
		  cout<<" □□□□□□□ "<<endl;
		  cout<<" □□□■□□□ "<<endl;
		  cout<<" □□□□□□□ "<<endl;
		  cout<<" □□■□■□□ "<<endl;
		  cout<<" □□□□□□□ "<<endl;
		  cout<<" □□□□□□□ \n"<<endl;
         break;
      case 4:
		  cout<<" □□□□□□□ "<<endl;
		  cout<<" □□□□□□□ "<<endl;
		  cout<<" □□■□■□□ "<<endl;
		  cout<<" □□□□□□□ "<<endl;
		  cout<<" □□■□■□□ "<<endl;
		  cout<<" □□□□□□□ "<<endl;
		  cout<<" □□□□□□□ \n"<<endl;
         break;
      case 5:
		  cout<<" □□□□□□□ "<<endl;
		  cout<<" □□□□□□□ "<<endl;
		  cout<<" □□■□■□□ "<<endl;
		  cout<<" □□□■□□□ "<<endl;
		  cout<<" □□■□■□□ "<<endl;
		  cout<<" □□□□□□□ "<<endl;
		  cout<<" □□□□□□□ \n"<<endl;
         break;
      case 6:
		  cout<<" □□□□□□□ "<<endl;
		  cout<<" □□□□□□□ "<<endl;
		  cout<<" □□■□■□□ "<<endl;
		  cout<<" □□■□■□□ "<<endl;
		  cout<<" □□■□■□□ "<<endl;
		  cout<<" □□□□□□□ "<<endl;
		  cout<<" □□□□□□□ \n"<<endl;
		  break;
      default:
         break;
      }
   }
}

void roulette_Rule() //룰렛의 룰
{
	cout << " \n 회전식 연발권총(6발)에 2개의 총알만 장전하고, " << endl;
	cout << "  머리에 총을 겨누어 방아쇠를 당기는 목숨을 건 게임이다. \n" << endl;
	cout << "  ※여기서는 실탄이 아닌 공포탄을 사용한다. " << endl;
	cout << "    공포탄이 발사되면 패배하고 돈을 잃는 게임이다. \n" << endl;
}

void russianRoulette() //러시안 룰렛의 메뉴
{

	cout << "\n ☞ 러시안룰렛(russianRoulette) 겜블을 시작합니다. ☜" << endl;
	cout << " 회전식 연발권총(6발)에 들어있는 총알의 수는 2개 입니다. " << endl;
	cout << " ※공포탄 발사확률 -> 첫 발 33%, 두 번째 40%, 세 번째 50%, 네 번째 66% " << endl;
	cout << " 선택지를 골라주십시오. \n\n" << endl;
	cout << " 1. 발사 ★" << " 공포탄 발사확률 : " << (shot/bullet)*100 << endl; // 확률 추가
	cout << " 2. 중단(도박 메뉴로 돌아가기) " << endl;
	cout << " ※ 1과 2가 아닌 숫자를 누르면 '강제 발사' 됩니다. \n" << endl;
	cout << " ※ Select : ";
}

void batting() //배팅할때 쓰는 것
{
	cout << " ※배팅한도는 500만원 입니다. " << endl;
	cout << " 배팅금액을 입력하십시오 : ";
}

void message() //메시지
{
	cout << "\n\n ☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★ " << endl;
	cout << " ★☆          러시안룰렛(russianRoulette) 겜블이 끝났습니다.   ★☆ " << endl;
	cout << " ☆★          배당금액의 16배를 획득하였습니다.                ☆★ " << endl;
	cout << " ★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆ \n\n" << endl;
}

void dyingmessage() //죽었을경우 메시지
{
	cout << "\n\n 공포탄이 발사 되었습니다. \n" << endl;
	cout << " ★ 게임에서 패배하셨습니다. " << endl;
	cout << " ★ 배팅금액이 빚에 포함됩니다. " << endl;

	cout << "\n\n 공포탄이 발사 되지 않았습니다. \n" << endl;
	cout << " 게임을 속행합니다. " << endl;
}

bool is_dead(int bullet, int shoot) //불릿과 슛으로 죽음을 결정하는 곳
{
   srand(time(0));
   vector<int> shoot_vect;
   int temp,index;
   int select;
   for (int i = 0; i < bullet; i++)
   {
      if (shoot > 0)
      {
         shoot_vect.push_back(1);
         shoot--;
      }
      else
      {
         shoot_vect.push_back(0);
      }
   }
   for (int i = 0; i < shoot_vect.size(); i++)
   {
      temp = shoot_vect[i];
      index = ((i + rand()%bullet) % bullet);
      shoot_vect[i] = shoot_vect[index];
      shoot_vect[index] = temp;
   }
   select = rand() % bullet;
   if (shoot_vect[select] == 1)
   {
      return true;
   }
   else
   {
      return false;
   }
}

int jugge_dice(int my_dice[]) //my_dice[]에서 받아와서 0은1로 쳐서 대입을 해본뒤에 리턴값으로 dice_judgement로 출력 이때 x는 my_dice[0]에서 1을빼는 식으로
{
   int dice_judgement[6][6][6];
   int x, y, z;

   x = my_dice[0];
   y = my_dice[1];
   z = my_dice[2];

   for (int i = 0; i < 6; i++)
   {
      for (int j = 0; j < 6; j++)
      {
         for (int k = 0; k < 6; k++)
         {
            if (i == 0 & j == 0 & k == 0) { dice_judgement[i][j][k] = 5; }
            else if (i == 0 & j == 1 & k == 2) { dice_judgement[i][j][k] = 4; }
            else if (i == 0 & j == 2 & k == 1) { dice_judgement[i][j][k] = 4; }
            else if (i == 1 & j == 0 & k == 2) { dice_judgement[i][j][k] = 4; }
            else if (i == 1 & j == 2 & k == 0) { dice_judgement[i][j][k] = 4; }
            else if (i == 2 & j == 0 & k == 1) { dice_judgement[i][j][k] = 4; }
            else if (i == 2 & j == 1 & k == 0) { dice_judgement[i][j][k] = 4; }
            else if (i == 1 & j == 1 & k == 1) { dice_judgement[i][j][k] = 3; }
            else if (i == 2 & j == 2 & k == 2) { dice_judgement[i][j][k] = 3; }
            else if (i == 3 & j == 3 & k == 3) { dice_judgement[i][j][k] = 3; }
            else if (i == 4 & j == 4 & k == 4) { dice_judgement[i][j][k] = 3; }
            else if (i == 5 & j == 5 & k == 5) { dice_judgement[i][j][k] = 3; }
            else if (i == 3 & j == 4 & k == 5) { dice_judgement[i][j][k] = 2; }
            else if (i == 3 & j == 5 & k == 4) { dice_judgement[i][j][k] = 2; }
            else if (i == 4 & j == 3 & k == 5) { dice_judgement[i][j][k] = 2; }
            else if (i == 4 & j == 5 & k == 3) { dice_judgement[i][j][k] = 2; }
            else if (i == 5 & j == 3 & k == 4) { dice_judgement[i][j][k] = 2; }
            else if (i == 5 & j == 4 & k == 3) { dice_judgement[i][j][k] = 2; }
            else { dice_judgement[i][j][k] = 0; }
         }
      }
   }

   return dice_judgement[x-1][y-1][z-1];
}

/*
******텍스트를 불러오거나 합쳐주는 프로그램입니다.********
     프로그램을 키고 지시에 따라주시면됩니다.
**********************************************************
*/

void textEdit() //텍스트의편집기의 메인
{
	do
	{
		editMenu();
		cin>>selected;
		system("cls");

		if(selected == 1)
		{
			inPut();
			system("cls");
		}
		else if(selected == 2)
		{
			united();
			system("cls");
		}
		else if(selected == 3)
		{
			cout<<"종료하겠습니다."<<endl;
			system("pause");
			exit(0);
		}
		else
		{
			cout<<"올바른 입력값을 입력해 주세요."<<endl;
			system("cls");
		}
	}while(selected!= 3);
}

void editMenu() //텍스트 편집기 메뉴
{
	cout<<"********** 메 뉴 **********"<<endl;
	cout<<"1.텍스트 파일 열기         "<<endl;
	cout<<"2.텍스트 합치기            "<<endl;
	cout<<"3.종료                     "<<endl;
	cout<<"***************************"<<endl;

}

void inPut() //불러올 텍스트의 제목을 입력받아 name에 저장하고 name에 저장된 제목을 불러오기
{
	string str;
	string name;
	cout<<"불러올 텍스트의 제목을 적어주세요.(예:sample.txt) :"<<endl;
	cin>>name;
	ifstream fin;
	fin.open(name);
	while(fin>>str)
	{
		cout<<str<<endl;
	}
	system("pause");
}

void united() //텍스트를 합치는 구간 lineNumber에서 저장할 공간을 정하고 name에서 이름을 받아서 정해진 파일만 합침
{
	fstream f2;
	string str;
	string name;
	string newfiletxt="";
	int lineNumber;

	cout<<"합치기를 원하는 텍스트파일의 수를 적어주세요. :";
	cin>>lineNumber;
	cout<<"합치려는 텍스트파일의 제목을 적어주세요.(예:sample.txt) :"<<endl;

	for( int i = 1; i<lineNumber+1; i++)
	{
		fstream f1;
		cin>>name;
		f1.open(name,std::ios::in);
		while(f1>>str)
		{
			newfiletxt += (str+"\n");
		}
		f1.close();
	}

	f2.open("united.txt",std::ios::out);
	f2<<newfiletxt;
	f2.close();
	system("pause");
}

void random(int r_dice[]) //r_dice[]로 랜덤을 만드는 역할
{
	for (int i = 0; i < 3; i++)
	{
		r_dice[i] = (rand()%6)+1;
	}

}
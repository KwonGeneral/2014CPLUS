#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <stdlib.h>
#include <mmsystem.h>
#include <fstream>
#include <string>
#pragma comment(lib, "winmm.lib")

using namespace std;

void firstMenu();
void monster_1();
void card_Rule();
void go_choice();
void stop_choice();
void check();
void last_check();
int collection();
int movie_SF_quiz();
int movie_Comedy_quiz();
int movie_Action_quiz();
int movie_Melo_quiz();
int movie_Fantasy_quiz();
int book_Mystery_quiz();
int book_Comic_quiz();
int book_FairyTale_quiz();
int music_Song_quiz();
int music_NewAge_quiz();
int music_Classic_quiz();
int music_Club_quiz();
int buy_Monster();
int save_load();
int user_card_form();
int user_card_number();
int dealer_card_form();
int dealer_card_number();

char userAnswer[100];

int quiz;
int card_add;
double own_Money=10000;
double lose_Money=0;
double batting_Money=0;
int user_score=0;
int dealer_score=0;
int count=0;
bool buy_monster_1 = false;

string make_name;

int main()
{
	int frist_Menu_Select;
	int second_Menu_Select;
	int genre_Choice;
	int movie_Choice;
	int music_Choice;
	int book_Choice;
	int card_Choice;
	int user_card_choice;
	bool name = false;

	  //PlaySound (NULL, NULL, NULL ); 정지시킬실 부분에 추가하시면 됩니다.

	first:
	// PlaySound(TEXT("music/Bad.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	firstMenu();
	user_score=0;
	dealer_score=0;
	cin >> frist_Menu_Select;
	system("cls");

	switch(frist_Menu_Select)
	{
	case 1:
		second:
		cout << "\n\n                   ◈                                     ◈ " << endl;
		cout << "                              ①. 초성퀴즈 " << endl;
		cout << "                              ②. 몬스터 이름 맞추기 " << endl;
		cout << "                              ③. 블랙잭 " << endl;
		cout << "                              ④. 이전메뉴로 돌아가기 " << endl;
		cout << "                   ◈                                     ◈ " << endl;
		cout << "\n                               ☞ 게임 선택 : ";
		cin >> second_Menu_Select;
		system("cls");

		switch(second_Menu_Select)
		{
		case 1:
			genre:
			cout << "\n\n                   ㉿                                     ♬ " << endl;
			cout << "                              ①. 영화 " << endl;
			cout << "                              ②. 음악 " << endl;
			cout << "                              ③. 책 제목 " << endl;
			cout << "                              ④. 이전메뉴로 돌아가기 " << endl;
			cout << "                              ⑤. 처음메뉴로 돌아가기 " << endl;
			cout << "                   ▥                                     ㉿ " << endl;
			cout << "\n                               ☞ 장르 선택 : ";
			cin >> genre_Choice;
			system("cls");

			switch(genre_Choice)
			{
			case 1:
				movie:
				cout << "\n\n                   ㉿                                     ㉿ " << endl;
				cout << "                              ①. SF " << endl;
				cout << "                              ②. 코미디 " << endl;
				cout << "                              ③. 액션 " << endl;
				cout << "                              ④. 멜로 " << endl;
				cout << "                              ⑤. 판타지 " << endl;
				cout << "                              ⑥. 이전메뉴로 돌아가기 " << endl;
				cout << "                              ⑦. 처음메뉴로 돌아가기 " << endl;
				cout << "                   ㉿                                     ㉿ " << endl;
				cout << "\n                               ☞ 장르 선택 : ";
				cin >> movie_Choice;
				system("cls");

				switch(movie_Choice)
				{
				case 1:
					movie_SF_quiz();
					break;
				case 2:
					movie_Comedy_quiz();
					break;
				case 3:
					movie_Action_quiz();
					break;
				case 4:
					movie_Melo_quiz();
					break;
				case 5:
					movie_Fantasy_quiz();
					break;
				case 6:
					system("cls");
					goto genre;
					break;
				case 7:
					system("cls");
					goto first;
					break;
				default:
					goto movie;
					break;
				}
				break;
			case 2:
				music:
				// PlaySound(NULL, 0, 0);
				cout << "\n\n                   ♬                                     ♬ " << endl;
				cout << "                              ①. 가요 " << endl;
				cout << "                              ②. 뉴에이지 " << endl;
				cout << "                              ③. 클래식 " << endl;
				cout << "                              ④. 클럽뮤직 " << endl;
				cout << "                              ⑤. 이전메뉴로 돌아가기 " << endl;
				cout << "                              ⑥. 처음메뉴로 돌아가기 " << endl;
				cout << "                   ♬                                     ♬ " << endl;
				cout << "\n                               ☞ 장르 선택 : ";
				cin >> music_Choice;
				system("cls");

				switch(music_Choice)
				{
				case 1:
					music_Song_quiz();
					goto first;
					break;
				case 2:
					music_NewAge_quiz();
					goto first;
					break;
				case 3:
					music_Classic_quiz();
					goto first;
					break;
				case 4:
					music_Club_quiz();
					goto first;
					break;
				case 5:
					system("cls");
					goto genre;
					break;
				case 6:
					system("cls");
					goto first;
					break;
				default:
					goto music;
					break;
				}
				break;
			case 3:
				book:
				cout << "\n\n                   ▥                                     ▥ " << endl;
				cout << "                              ①. 추리소설 " << endl;
				cout << "                              ②. 만화책 " << endl;
				cout << "                              ③. 동화책 " << endl;
				cout << "                              ④. 이전메뉴로 돌아가기 " << endl;
				cout << "                              ⑤. 처음메뉴로 돌아가기 " << endl;
				cout << "                   ▥                                     ▥ " << endl;
				cout << "\n                               ☞ 장르 선택 : ";
				cin >> book_Choice;
				system("cls");

				switch(book_Choice)
				{
				case 1:
					book_Mystery_quiz();
					break;
				case 2:
					book_Comic_quiz();
					break;
				case 3:
					book_FairyTale_quiz();
					break;
				case 4:
					system("cls");
					goto genre;
					break;
				case 5:
					system("cls");
					goto first;
					break;
				default:
					goto book;
					break;
				}
				break;
			case 4:
				system("cls");
				goto second;
				break;
			case 5:
				system("cls");
				goto first;
				break;
			}
			break;
		case 2:
			goto first;
			break;
		case 3:
			card:
			user_score=0;
			dealer_score=0;
			cout << "\n\n                   ♣                                     ♡ " << endl;
			cout << "                              ①. 게임 시작(Game Start) " << endl;
			cout << "                              ②. 이전메뉴로 돌아가기 " << endl;
			cout << "                              ③. 처음메뉴로 돌아가기 " << endl;
			cout << "                   ◇                                    ♠ " << endl;
			cout << "\n                               ☞ 장르 선택 : ";
			cin >> card_Choice;

			switch(card_Choice)
			{
			case 1:
				cout<<"\n\n"<<endl;
				card_Rule();
				cout<<"\n\n"<<endl;
				system("pause");
				system("cls");

				if(name==false)
				{
					naming:
					int name_true_false;

					cout << " 닉네임을 입력하여 주십시오 : ";
					cin >> make_name;
					cout << "\n 닉네임을 '" << make_name << "'로 결정하시겠습니까? " << endl;
					cout << " 1. Yes " << endl;
					cout << " 2. No " << endl;
					cout << " 3. Back " << endl;
					cout << "\n※닉네임 변경불가능" << endl;
					cout << "  선택 : ";
					cin >> name_true_false;
					if(name_true_false==1)
					{
						name=true;
						if(name==true)
						{
							start:
							system("cls");
							cout << " \n\n\n " << endl;
							cout << "   <배팅한도 10만원> " << endl;
							cout << " 배팅금액을 입력하십시오 : ";
							cin >> batting_Money;
							own_Money -= batting_Money;

							if(own_Money >= batting_Money)
							{
								own_Money -= batting_Money;
								cout << " \n\n " << endl;
								system("pause");
								system("cls");
							}
							else if(own_Money < batting_Money)
							{
								cout << "\n 소지금액을 초과하였습니다. " << endl;
								cout << " 다시입력하십시오. \n" << endl;
								own_Money += batting_Money;
								system("pause");
								system("cls");
								goto start;
							}

							cout << "\n 게임을 시작합니다. \n" << endl;
							cout << "\n" << make_name << " 카드 : ";
							user_card_form(); 
							user_card_number();
							cout << " 포인트 : " << user_score << endl;
							cout << " 딜러 카드 : ";
							dealer_card_form();
							dealer_card_number();
							cout << " 포인트 : " << dealer_score << endl;
							cout << " \n " << make_name << " 님 카드를 더 받으시겠습니까? (1.Yes / 2.No) : ";
							cin >> card_add;		

							switch(card_add)
							{
							case 1:
								count++;
								go_choice();
								check();
								cout << " \n " << make_name << " 님 카드를 더 받으시겠습니까? (1.Yes / 2.No) : ";
								cin >> card_add;
								switch(card_add)
								{
								case 1:
									count++;
									go_choice();
									check();
									cout << " \n " << make_name << " 님 카드를 더 받으시겠습니까? (1.Yes / 2.No) : ";
									cin >> card_add;
									switch(card_add)
									{
									case 1:
										count++;
										go_choice();
										last_check();
										system("pause");
										break;
									case 2:
										stop_choice();
										system("pause");
										break;
									}
									break;
								case 2:
									stop_choice();
									system("pause");
									}
									break;
							case 2:
								stop_choice();
								system("pause");
								break;
							}
						}
					}
					else if(name_true_false==2)
					{
						system("cls");
						goto naming;
					}
					else if(name_true_false==3)
					{
						system("cls");
						goto card;
					}
					else
					{
						goto naming;
					}
				}
				break;
			case 2:
				system("cls");
				goto second;
				break;
			case 3:
				system("cls");
				goto first;
				break;
			default:
				goto card;
				break;
			}
			break;
		case 4:
			goto first;
			break;
		}
			break;
	case 2:
		buy_Monster();
		goto first;
		break;
	case 3:
		collection();
		goto first;
		break;
	case 4:
		//save_load();
		goto first;
		break;
	case 5:
		cout << "음악플레이어" << endl;
		break;
	case 6:
		cout << "옵션" << endl;
	default:
		goto first;
		break;
	}
}

void firstMenu()
{
	cout << "                                                   ┌───────────── ";
	cout << "                                                   │소지금 : " << own_Money << " 원" << endl;
	cout << "                                                   └───────────── " << endl;
	cout << "                   ♨                                     ♨ " << endl;
	cout << "                              ①. 게임 " << endl;
	cout << "                              ②. 몬스터 구매 " << endl;
	cout << "                              ③. 앨범 " << endl;
	cout << "                              ④. 저장 & 로드 " << endl;
	cout << "                              ⑤. 음악플레이어 " << endl;
	cout << "                              ⑥. 옵션 " << endl;
	cout << "                              ⑦. 종료 " << endl;
	cout << "                   ♨                                     ♨ " << endl;
	cout << "\n                               ☞ 메뉴 선택 : ";
}

void card_Rule()
{
	cout << " 당신은 딜러에게서 카드를 1장 받고 계속해서 1장씩 총 4장까지 받으실 수 있습니다. " << endl;
	cout << " 받은 카드의 포인트 합이 21을 초과하지 않고, 딜러보다 포인트가 높으면 이깁니다. " << endl;
	cout << " \n 카드 : ♠♥♣◆ ' A, 2, 3, 4, 5, 6, 7, 8, 9, 10 ,J ,Q ,K ' \n" << endl;
	cout << " 카드 10, J, Q, K 는 모두 10 포인트 " << endl;
	cout << " 카드 A는 포인트의 합이 10이하일 경우 11, 11이상일 경우 1 포인트 " << endl;
}

void go_choice()
{
	cout << "\n" << make_name << " 카드 : ";
	user_card_form(); 
	user_card_number();
	cout << " 포인트 : " << user_score << endl;
	cout << " 딜러 카드 : ";
	dealer_card_form();
	dealer_card_number();
	cout << " 포인트 : " << dealer_score << endl;
	cout << " 받은 카드 개수 : " << count << endl;
}

void check()
{
	if(user_score<21 && dealer_score>21 || user_score==21)
	{
		cout << "\n 당신은 딜러를 이겼습니다. " << endl;
		cout << "\n 배당금" << batting_Money*1.5 << "원을 얻었습니다. " << endl;
		own_Money += batting_Money*2.5;
		cout << "\n ①. 이전메뉴로 돌아가기 " << endl;
		cout << " ②. 처음메뉴로 돌아가기 " << endl;
	}
	else if(user_score>21 && dealer_score<21 || dealer_score==21)
	{
		cout << "\n 당신은 딜러에게 졌습니다. " << endl;
		cout << "\n 배팅금 " << batting_Money << "원을 잃었습니다. " << endl;
		cout << "\n ①. 이전메뉴로 돌아가기 " << endl;
		cout << " ②. 처음메뉴로 돌아가기 " << endl;
	}
	else if(user_score>21 && dealer_score>21 && user_score==dealer_score || user_score<21 && dealer_score<21 && user_score==dealer_score)
	{
		cout << "\n 당신은 딜러와 비겼습니다. " << endl;
		cout << "\n 배당금" << batting_Money*1.5 << "원을 얻었습니다. " << endl;
		own_Money += batting_Money*2.5;
		cout << "\n ①. 이전메뉴로 돌아가기 " << endl;
		cout << " ②. 처음메뉴로 돌아가기 " << endl;
	}
}

void last_check()
{
	if(user_score<21 && dealer_score<21 && user_score>dealer_score || user_score<21 && dealer_score>21 || user_score==21)
	{
		cout << "\n 당신은 딜러를 이겼습니다. " << endl;
		cout << "\n 배당금" << batting_Money*1.5 << "원을 얻었습니다. " << endl;
		own_Money += batting_Money*2.5;
		cout << "\n ①. 이전메뉴로 돌아가기 " << endl;
		cout << " ②. 처음메뉴로 돌아가기 " << endl;
	}
	else if(user_score<21 && dealer_score<21 && user_score<dealer_score || user_score>21 && dealer_score<21 || dealer_score==21)
	{
		cout << "\n 당신은 딜러에게 졌습니다. " << endl;
		cout << "\n 배팅금 " << batting_Money << "원을 잃었습니다. " << endl;
		cout << "\n ①. 이전메뉴로 돌아가기 " << endl;
		cout << " ②. 처음메뉴로 돌아가기 " << endl;
	}
	else if(user_score>21 && dealer_score>21 && user_score==dealer_score || user_score<21 && dealer_score<21 && user_score==dealer_score)
	{
		cout << "\n 당신은 딜러와 비겼습니다. " << endl;
		cout << "\n 배당금" << batting_Money*1.5 << "원을 얻었습니다. " << endl;
		own_Money += batting_Money*2.5;
		cout << "\n ①. 이전메뉴로 돌아가기 " << endl;
		cout << " ②. 처음메뉴로 돌아가기 " << endl;
	}
}

void stop_choice()
{
	if(user_score<21 && dealer_score<21 && user_score>dealer_score || dealer_score>21 || user_score==21)
	{
		cout << "\n 당신은 딜러를 이겼습니다. " << endl;
		cout << "\n 배당금" << batting_Money*1.5 << "원을 얻었습니다. " << endl;
		own_Money += batting_Money*2.5;
		cout << "\n ①. 이전메뉴로 돌아가기 " << endl;
		cout << " ②. 처음메뉴로 돌아가기 " << endl;
	}
	else if(user_score<21 && dealer_score<21 && user_score<dealer_score || user_score>21 || dealer_score==21)
	{
		cout << "\n 당신은 딜러에게 졌습니다. " << endl;
		cout << "\n 배팅금 " << batting_Money << "원을 잃었습니다. " << endl;
		cout << "\n ①. 이전메뉴로 돌아가기 " << endl;
		cout << " ②. 처음메뉴로 돌아가기 " << endl;
	}
	else if(user_score<21 && dealer_score<21 && user_score==dealer_score)
	{
		cout << "\n 당신은 딜러와 비겼습니다. " << endl;
		cout << "\n 배당금" << batting_Money*1.5 << "원을 얻었습니다. " << endl;
		own_Money += batting_Money*2.5;
		cout << "\n ①. 이전메뉴로 돌아가기 " << endl;
		cout << " ②. 처음메뉴로 돌아가기 " << endl;
	}
}

int user_card_form()
{
	srand((unsigned)time(NULL));
	int user_form=rand()%4;
	user_form++;

	switch(user_form)
	{
	case 1:
		cout << "♠";
		break;
	case 2:
		cout << "♡";
		break;
	case 3:
		cout << "◇";
		break;
	case 4:
		cout << "♣";
		break;
	}
	return 0;
}

int user_card_number()
{
	srand((unsigned)time(NULL));
	int user_number=rand()%4;
	user_number++;

	switch(user_number)
	{
	case 1:
		cout << " A ";
		if(user_score >= 0 && user_score <= 10)
		{
			user_score+=11;
		}
		else if(user_score >= 11)
		{
			user_score+=1;
		}
		break;
	case 2:
		cout << " 2 ";
		user_score+=2;
		break;
	case 3:
		cout << " 3 ";
		user_score+=3;
		break;
	case 4:
		cout << " 4 ";
		user_score+=4;
		break;
	case 5:
		cout << " 5 ";
		user_score+=5;
		break;
	case 6:
		cout << " 6 ";
		user_score+=6;
		break;
	case 7:
		cout << " 7 ";
		user_score+=7;
		break;
	case 8:
		cout << " 8 ";
		user_score+=8;
		break;
	case 9:
		cout << " 9 ";
		user_score+=9;
		break;
	case 10:
		cout << " 10 ";
		user_score+=10;
		break;
	case 11:
		cout << " J ";
		user_score+=10;
		break;
	case 12:
		cout << " Q ";
		user_score+=10;
		break;
	case 13:
		cout << " K ";
		user_score+=10;
		break;
	}
	return 0;
}

int dealer_card_form()
{
	srand((unsigned)time(NULL));
	int dealer_form=rand()%4;
	dealer_form++;
		
	switch(dealer_form)
	{
	case 1:
		cout << "♠";
		break;
	case 2:
		cout << "♡";
		break;
	case 3:
		cout << "◇";
		break;
	case 4:
		cout << "♣";
		break;
	}
	return 0;
}

int dealer_card_number()
{
	srand((unsigned)time(NULL));
	int dealer_number=rand()%13;
	dealer_number++;

	switch(dealer_number)
	{
	case 1:
		cout << " A ";
		if(dealer_score >= 0 && dealer_score <= 10)
		{
			dealer_score+=11;
		}
		else if(user_score >= 11)
		{
			dealer_score+=1;
		}
		break;
	case 2:
		cout << " 2 ";
		dealer_score+=2;
		break;
	case 3:
		cout << " 3 ";
		dealer_score+=3;
		break;
	case 4:
		cout << " 4 ";
		dealer_score+=4;
		break;
	case 5:
		cout << " 5 ";
		dealer_score+=5;
		break;
	case 6:
		cout << " 6 ";
		dealer_score+=6;
		break;
	case 7:
		cout << " 7 ";
		dealer_score+=7;
		break;
	case 8:
		cout << " 8 ";
		dealer_score+=8;
		break;
	case 9:
		cout << " 9 ";
		dealer_score+=9;
		break;
	case 10:
		cout << " 10 ";
		dealer_score+=10;
		break;
	case 11:
		cout << " J ";
		dealer_score+=10;
		break;
	case 12:
		cout << " Q ";
		dealer_score+=10;
		break;
	case 13:
		cout << " K ";
		dealer_score+=10;
		break;
	}
	return 0;
}

int buy_Monster()
{
	int buy_monster_Number;

	cout << " 몬스터 상점 " << endl;
	cout << " 1번 " << endl;
	monster_1();
	cin >> buy_monster_Number;

	switch(buy_monster_Number)
	{
	case 1:
		if(!buy_monster_1)
		{
		own_Money-=1000;
			cout << " 소지금이 1000원 감소되었습니다. " << endl;
			buy_monster_1 = true;
		}
		else
		{
			cout << " 이미 앨범에 있는 몬스터입니다. " << endl;
		}
	}

	return 0;
}

void monster_1()
{
	cout << " ■■■■■■■■■■■■ " << endl;
	cout << " ■■□□□■■□□□■■ " << endl;
	cout << " ■■■■■■■■■■■■ " << endl; 
	cout << " ■■■■■■■■■■■■ " << endl;
	cout << " ■■■■□□□□■■■■ " << endl;
	cout << " ■■■■□■■□■■■■ " << endl;
	cout << " ■■■■□□□□■■■■ " << endl;
	cout << " ■■■■■■■■■■■■ " << endl;
	cout << " ■■■■■■■■■■■■ " << endl;
}

int collection()
{
	if(buy_monster_1==true)
	{
		cout << " ■■■■■■■■■■■■ " << endl;
		cout << " ■■□□□■■□□□■■ " << endl;
		cout << " ■■■■■■■■■■■■ " << endl; 
		cout << " ■■■■■■■■■■■■ " << endl;
		cout << " ■■■■□□□□■■■■ " << endl;
		cout << " ■■■■□■■□■■■■ " << endl;
		cout << " ■■■■□□□□■■■■ " << endl;
		cout << " ■■■■■■■■■■■■ " << endl;
		cout << " ■■■■■■■■■■■■ " << endl;
	}
	system("pause");
	return 0;
}

int movie_SF_quiz()
{
	srand((unsigned)time(NULL));
	int sf_quiz=rand()%4;
	sf_quiz++;
	switch(sf_quiz)
	{
	case 1:
		cout << "\n\n 초성 : 'ㅇㅌㅅㅌㄹ' " << endl;
		cout << "\n 힌트① : 황폐해진 지구를 떠나서 새로운 개척지를 발견하는 영화" << endl;
		cout << "\n                        ☞ 이것은 무엇입니까? : ";
		cin >> userAnswer;
		
		if(strcmp(userAnswer, "인터스텔라")==0)
		{
			cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
		}
		else
		{
			cout << "\n 틀렸습니다! \n" << endl;
			cout << " 힌트② : 주연 캐릭터의 이름은 쿠퍼, 아멜리아, 브랜드 교수, 머피 입니다.  " << endl;
			cout << "\n                        ☞ 이것은 무엇입니까? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "인터스텔라")==0)
			{
				cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			}
			else
			{
				cout << "\n 틀렸습니다! \n" << endl;
				cout << " ★ 마지막 힌트 : ㅇㅌㅅㅌㄹ의 뜻은 별들간의 거리, 굉장히 먼거리 라는 뜻입니다. " << endl;
				cout << "\n                        ☞ 이것은 무엇입니까? : " ;
				while(getchar() != '\n');
				cin >> userAnswer;

				if(strcmp(userAnswer, "인터스텔라")==0)
				{
					cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
				}
				else
				{
					cout << "\n 틀렸습니다.. \n" << endl;
					cout << " 정답은 '인터스텔라' 입니다. " << endl;
					system("pause");
				}
			}
		}
		break;
	case 2:
		cout << "\n\n 초성 : 'ㅇㅂㅌ' " << endl;
		cout << "\n 힌트① : 미래에 인간이 다른 행성에 쳐들어 갑니다. 그런데 주인공이 그 행성의" << endl;
		cout << "         동물을 조종할 수 있게되고, 원주민들과 함께 생활합니다. " << endl;
		cout << "         인간들이 쳐들어 오지만 주인공이 부족을 이끌고 싸워 이깁니다. " << endl;
		cout << "\n                        ☞ 이것은 무엇입니까? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "아바타")==0)
		{
			cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
		}
		else
		{
			cout << "\n 틀렸습니다! \n" << endl;
			cout << " 힌트② : 2010년 개봉한 영화 입니다. " << endl;
			cout << "\n                        ☞ 이것은 무엇입니까? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "아바타")==0)
			{
				cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			}
			else
			{
				cout << "\n 틀렸습니다! \n" << endl;
				cout << " ★ 마지막 힌트 : 제임스 카메론이 감독을 맡았습니다. " << endl;
				cout << "\n                        ☞ 이것은 무엇입니까? : " ;
				while(getchar() != '\n');
				cin >> userAnswer;

				if(strcmp(userAnswer, "아바타")==0)
				{
					cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
				}
				else
				{
					cout << "\n 틀렸습니다.. \n" << endl;
					cout << " 정답은 '아바타' 입니다. " << endl;
					system("pause");
				}
			}
		}
		break;
	case 3:
		cout << "\n\n 초성 : 'ㅇㅇㅇㅁ' " << endl;
		cout << "\n 힌트① : 무기개발로 엄청난 돈을 얻은 박사가 직접 제작한 슈트를 입고 " << endl;
		cout << "         활약하는 영화입니다. " << endl;
		cout << "\n                        ☞ 이것은 무엇입니까? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "아이언맨")==0)
		{
			cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
		}
		else
		{
			cout << "\n 틀렸습니다! \n" << endl;
			cout << " 힌트② : 슈트는 최첨단 장비로 무장된 슈트입니다. " << endl;
			cout << "         또, 이 영화는 인기가 많아 1, 2, 3 시리즈가 나왔습니다 " << endl;
			cout << "\n                        ☞ 이것은 무엇입니까? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "아이언맨")==0)
			{
				cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			}
			else
			{
				cout << "\n 틀렸습니다! \n" << endl;
				cout << " ★ 마지막 힌트 : 주연 캐릭터의 이름은 토니스타크 입니다. " << endl;
				cout << "\n                        ☞ 이것은 무엇입니까? : " ;
				while(getchar() != '\n');
				cin >> userAnswer;

				if(strcmp(userAnswer, "아이언맨")==0)
				{
					cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
				}
				else
				{
					cout << "\n 틀렸습니다.. \n" << endl;
					cout << " 정답은 '아이언맨' 입니다. " << endl;
					system("pause");
				}
			}
		}
		break;
	case 4:
		cout << "\n\n 초성 : 'ㅇㅂㅈㅅ' " << endl;
		cout << "\n 힌트① : 로키가 지구로 와서 큐브를 빼았습니다. " << endl;
		cout << "         로키는 그 큐브를 이용해 지구에 외계인들을 데려와 지배하려고 합니다. " << endl;
		cout << "         그것을 다른 영화의 히어로들이 모여 막습니다. " << endl;
		cout << "\n                        ☞ 이것은 무엇입니까? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "어벤져스")==0)
		{
			cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
		}
		else
		{
			cout << "\n 틀렸습니다! \n" << endl;
			cout << " 힌트② : 로키의 형은 토르입니다. " << endl;
			cout << "\n                        ☞ 이것은 무엇입니까? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "어벤져스")==0)
			{
				cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			}
			else
			{
				cout << "\n 틀렸습니다! \n" << endl;
				cout << " ★ 마지막 힌트 : 주연 캐릭터의 이름은 헐크, 토르, 로키, 캡틴, " << endl;
				cout << "                             블랙위도우, 호크아이 입니다." << endl;
				cout << "\n                        ☞ 이것은 무엇입니까? : " ;
				while(getchar() != '\n');
				cin >> userAnswer;

				if(strcmp(userAnswer, "어벤져스")==0)
				{
					cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
				}
				else
				{
					cout << "\n 틀렸습니다.. \n" << endl;
					cout << " 정답은 '어벤져스' 입니다. " << endl;
					system("pause");
				}
			}
		}
		break;
	}
return 0;
}

int movie_Comedy_quiz()
{
	srand((unsigned)time(NULL));
	int comedy_quiz=rand()%4;
	comedy_quiz++;
	
	switch(comedy_quiz)
	{
	case 1:
		cout << "\n\n 초성 : 'ㅅㅇㄱㄴ' " << endl;
		cout << "\n 힌트① : 최고 대학이지만 성적으로 사람을 평가하는 대학교." << endl;
		cout << "           이 대학교에 다니는 3명의 천재 대학생의 이야기 " << endl;
		cout << "\n                        ☞ 이것은 무엇입니까? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "세얼간이")==0)
		{
			cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n 틀렸습니다! \n" << endl;
			cout << " 힌트② : 주연 캐릭터의 이름은 란초, 파르한, 라주 입니다.  " << endl;
			cout << "\n                        ☞ 이것은 무엇입니까? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "세얼간이")==0)
			{
				cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			}
			else
			{
				cout << "\n 틀렸습니다! \n" << endl;
				cout << " ★ 마지막 힌트 : 알 이즈 웰~!!! " << endl;
				cout << "\n                        ☞ 이것은 무엇입니까? : " ;
				while(getchar() != '\n');
				cin >> userAnswer;

				if(strcmp(userAnswer, "세얼간이")==0)
				{
					cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
				}
				else
				{
					cout << "\n 틀렸습니다.. \n" << endl;
					cout << " 정답은 '세얼간이' 입니다. " << endl;
					system("pause");
				}
			}
		}
		break;
	case 2:
		cout << "\n\n 초성 : 'ㅇㄱㅈㅇㄱㄴ' " << endl;
		cout << "\n 힌트① : 엽기적이지만 한 사람만을 사랑하는 여자와 소심하지만 알고보면 대범한 복학생 남자의 알콩달콩 로맨스를 그린 영화" << endl;
		cout << "\n                        ☞ 이것은 무엇입니까? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "엽기적인그녀")==0)
		{
			cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n 틀렸습니다! \n" << endl;
			cout << " 힌트② : 주연 캐릭터의 이름은 견우, 그녀 입니다.  " << endl;
			cout << "\n                        ☞ 이것은 무엇입니까? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "엽기적인그녀")==0)
			{
				cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			}
			else
			{
				cout << "\n 틀렸습니다! \n" << endl;
				cout << " ★ 마지막 힌트 : 차태현과 전지현의 사랑이야기입니다.  " << endl;
				cout << "\n                        ☞ 이것은 무엇입니까? : " ;
				while(getchar() != '\n');
				cin >> userAnswer;

				if(strcmp(userAnswer, "엽기적인그녀")==0)
				{
					cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
				}
				else
				{
					cout << "\n 틀렸습니다.. \n" << endl;
					cout << " 정답은 '엽기적인그녀' 입니다. " << endl;
					system("pause");
				}
			}
		}
		break;
	case 3:
		cout << "\n\n 초성 : 'ㅌㅇㅅㅌㄹ' " << endl;
		cout << "\n 힌트① : 장난감들이 서로서로 협력을 해서 문제를 해결해나가는 영화" << endl;
		cout << "\n                        ☞ 이것은 무엇입니까? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "토이스토리")==0)
		{
			cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n 틀렸습니다! \n" << endl;
			cout << " 힌트② : 애니메이션 입니다.  " << endl;
			cout << "\n                        ☞ 이것은 무엇입니까? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "토이스토리")==0)
			{
				cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			}
			else
			{
				cout << "\n 틀렸습니다! \n" << endl;
				cout << " ★ 마지막 힌트 : 주연 캐릭터의 이름은 우디, 버즈,제시, 로초 입니다. " << endl;
				cout << "\n                        ☞ 이것은 무엇입니까? : " ;
				while(getchar() != '\n');
				cin >> userAnswer;

				if(strcmp(userAnswer, "토이스토리")==0)
				{
					cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
				}
				else
				{
					cout << "\n 틀렸습니다.. \n" << endl;
					cout << " 정답은 '토이스토리' 입니다. " << endl;
					system("pause");
				}
			}
		}
		break;
	case 4:
		cout << "\n\n 초성 : 'ㄱㅅㅅㅋㄷ' " << endl;
		cout << "\n 힌트① : 남주의 라디오에 사연을 보내는 미혼모가 있다." << endl;
		cout << "           이 미혼모가 알고보니 자신의 딸이었다. " << endl;
		cout << "           그런데 그 딸도 미혼모였다... " << endl;
		cout << "\n                        ☞ 이것은 무엇입니까? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "과속스캔들")==0)
		{
			cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n 틀렸습니다! \n" << endl;
			cout << " ★ 마지막 힌트 : : 차태현과 박보영의 해피스토리 " << endl;
			cout << "\n                        ☞ 이것은 무엇입니까? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "과속스캔들")==0)
			{
				cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			}
			else
			{
				cout << "\n 틀렸습니다.. \n" << endl;
				cout << " 정답은 '과속스캔들' 입니다. " << endl;
				system("pause");
			}
		}
		break;
	}
	return 0;
}

int movie_Action_quiz()
{
	srand((unsigned)time(NULL));
	int action_quiz=rand()%4;
	action_quiz++;
	
	switch(action_quiz)
	{
	case 1:
		cout << "\n\n 초성 : 'ㄹㅇ' " << endl;
		cout << "\n 힌트① : 다른사람은 다 모르겠지만 사랑하던 남동생을 죽인" << endl;
		cout << "           그 사람들을 찾아 복수하고자 하는 여자아이 " << endl;
		cout << "           그리고 그런 아이가 자신의 보호 아래 있다는 것만으로도 신세계인 남자 " << endl;
		cout << "\n                        ☞ 이것은 무엇입니까? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "레옹")==0)
		{
			cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n 틀렸습니다! \n" << endl;
			cout << " ★ 마지막 힌트 : Shape Of My Heart " << endl;
			cout << "\n                        ☞ 이것은 무엇입니까? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "레옹")==0)
			{
				cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			}
			else
			{
				cout << "\n 틀렸습니다.. \n" << endl;
				cout << " 정답은 '레옹' 입니다. " << endl;
				system("pause");
			}
		}
		break;
	case 2:
		cout << "\n\n 초성 : 'ㅂㅈㅇㅈㅇ' " << endl;
		cout << "\n 힌트① : 반지를 찾아 떠나는 여행 " << endl;
		cout << "\n                        ☞ 이것은 무엇입니까? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "반지의제왕")==0)
		{
			cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n 틀렸습니다! \n" << endl;
			cout << " ★ 마지막 힌트 : 주연 캐릭터의 이름은 간달프, 샘, 골룸 입니다.  " << endl;
			cout << "\n                        ☞ 이것은 무엇입니까? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "반지의제왕")==0)
			{
				cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			}
			else
			{
				cout << "\n 틀렸습니다.. \n" << endl;
				cout << " 정답은 '반지의제왕' 입니다. " << endl;
				system("pause");
			}
		}
		break;
	case 3:
		cout << "\n\n 초성 : 'ㅁㅌㄹㅅ' " << endl;
		cout << "\n 힌트① : 시스템이 인간을 지배하는 세상을 그린 영화" << endl;
		cout << "\n                        ☞ 이것은 무엇입니까? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "매트릭스")==0)
		{
			cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n 틀렸습니다! \n" << endl;
			cout << " 힌트② : 주연 캐릭터의 이름은 모피어스, 토마스 앤더슨, 사이퍼 입니다. " << endl;
			cout << "\n                        ☞ 이것은 무엇입니까? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "매트릭스")==0)
			{
				cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			}
			else
			{
				cout << "\n 틀렸습니다! \n" << endl;
				cout << " ★ 마지막 힌트 : 총알이 날라오면 슬로우모션으로 피합니다. " << endl;
				cout << "\n                        ☞ 이것은 무엇입니까? : " ;
				while(getchar() != '\n');
				cin >> userAnswer;

				if(strcmp(userAnswer, "매트릭스")==0)
				{
					cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
				}
				else
				{
					cout << "\n 틀렸습니다.. \n" << endl;
					cout << " 정답은 '매트릭스' 입니다. " << endl;
					system("pause");
				}
			}
		}
		break;
	case 4:
		cout << "\n\n 초성 : 'ㅌㅁㄴㅇㅌ' " << endl;
		cout << "\n 힌트① : 기계들이 타임머신으로 존코너가 태어나지 못하도록" << endl;
		cout << "           그의 엄마인 사라코너를 죽일려고 남자를 보낸다. " << endl;
		cout << "\n                        ☞ 이것은 무엇입니까? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "터미네이터")==0)
		{
			cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n 틀렸습니다! \n" << endl;
			cout << " ★ 마지막 힌트 : 주연의 이름은 아놀드 슈왈제네거 입니다. " << endl;
			cout << "                 I will be back " << endl;
			cout << "\n                        ☞ 이것은 무엇입니까? : " ;
			cin >> userAnswer;

			if(strcmp(userAnswer, "터미네이터")==0)
			{
				cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			}
			else
			{
				cout << "\n 틀렸습니다.. \n" << endl;
				cout << " 정답은 '터미네이터' 입니다. " << endl;
				system("pause");
			}
		}
		break;
	}
	return 0;
}

int movie_Melo_quiz()
{
	srand((unsigned)time(NULL));
	int melo_quiz=rand()%4;
	melo_quiz++;
	
	switch(melo_quiz)
	{
	case 1:
		cout << "\n\n 초성 : 'ㅋㄹㅅ' " << endl;
		cout << "\n 힌트① : 부모님에 의해 사랑을 이룰수 없었던 남녀가 있었습니다." << endl;
		cout << "           결국 둘은 헤어지게 되었고, 남자는 전쟁터에 갔습니다 " << endl;
		cout << "\n           전쟁터에 가서 헬기를 타려는데 여자가 준 목걸이가 없는걸 확인하고는 " << endl;
		cout << "           그 목걸이를 찾으러 갔다가 결국 눈을 잃게됩니다. " << endl;
		cout << "           여자에게 들키지 않으려 했지만, 결국 들키게 되고... " << endl;
		cout << "\n           그러한 이야기를 그녀의 딸은 알게 되지요. " << endl;
		cout << "           그녀의 딸을 사랑하는 남자가 있는데 그 남자가 바로 눈을 잃은 남자주인공의 아들이었습니다. " << endl;
		cout << "\n                        ☞ 이것은 무엇입니까? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "클래식")==0)
		{
			cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n 틀렸습니다! \n" << endl;
			cout << " ★ 마지막 힌트 : 주연 캐릭터의 이름은 지혜(손예진), 준하(조승우),  " << endl;
			cout << "                 상민(조인성), 태수(이기우), 나희(서영희) 입니다. " << endl;
			cout << "\n                        ☞ 이것은 무엇입니까? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "클래식")==0)
			{
				cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			}
			else
			{
				cout << "\n 틀렸습니다.. \n" << endl;
				cout << " 정답은 '클래식' 입니다. " << endl;
				system("pause");
			}
		}
		break;
	case 2:
		cout << "\n\n 초성 : 'ㅈㄱㅁㄴㄹㄱㄴㄷ' " << endl;
		cout << "\n 힌트① : 비의 계절에 돌아온다는 약속을 하고 세상을 떠난 아내와의 이야기 " << endl;
		cout << "\n                        ☞ 이것은 무엇입니까? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "지금만나러갑니다")==0)
		{
			cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n 틀렸습니다! \n" << endl;
			cout << " 힌트② : 주연 캐릭터의 이름은 아이오, 유코, 아카시 입니다. " << endl;
			cout << "\n                        ☞ 이것은 무엇입니까? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "지금만나러갑니다")==0)
			{
				cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			}
			else
			{
				cout << "\n 틀렸습니다! \n" << endl;
				cout << " ★ 마지막 힌트 : 롸잇나우 " << endl;
				cout << "\n                        ☞ 이것은 무엇입니까? : " ;
				while(getchar() != '\n');
				cin >> userAnswer;

				if(strcmp(userAnswer, "지금만나러갑니다")==0)
				{
					cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
				}
				else
				{
					cout << "\n 틀렸습니다.. \n" << endl;
					cout << " 정답은 '지금만나러갑니다' 입니다. " << endl;
					system("pause");
				}
			}
		}
		break;
	case 3:
		cout << "\n\n 초성 : 'ㅁㅎㅅㅇㄴㅂㅁ' " << endl;
		cout << "\n 힌트① : 귀신을 위해 피아노를 치는 남자 이야기" << endl;
		cout << "\n                        ☞ 이것은 무엇입니까? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "말할수없는비밀")==0)
		{
			cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n 틀렸습니다! \n" << endl;
			cout << " 힌트② : 피아노배틀로 유명한 영화입니다. " << endl;
			cout << "\n                        ☞ 이것은 무엇입니까? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "말할수없는비밀")==0)
			{
				cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			}
			else
			{
				cout << "\n 틀렸습니다! \n" << endl;
				cout << " ★ 마지막 힌트 : 주걸륜이 감독과 배우역할 모두 맡았습니다. " << endl;
				cout << "\n                        ☞ 이것은 무엇입니까? : " ;
				while(getchar() != '\n');
				cin >> userAnswer;

				if(strcmp(userAnswer, "말할수없는비밀")==0)
				{
					cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
				}
				else
				{
					cout << "\n 틀렸습니다.. \n" << endl;
					cout << " 정답은 '말할수없는비밀' 입니다. " << endl;
					system("pause");
				}
			}
		}
		break;
	case 4:
		cout << "\n\n 초성 : 'ㅌㅇㅌㄴ' " << endl;
		cout << "\n 힌트① : 그림을 그리고, 도박을 하며 살아가는 청년" << endl;
		cout << "           청년은 운좋게 도박에서 배의 승선 티켓을 얻게 됩니다. " << endl;
		cout << "           거기서 귀족 소녀를 만나 깊은 사랑을 하게 됩니다. " << endl;
		cout << "           하지만, 불행하게도 배는 빙하와 부딪쳐 " << endl;
		cout << "           깊은 바다로 가라앉아 버립니다. " << endl;
		cout << "\n                        ☞ 이것은 무엇입니까? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "타이타닉")==0)
		{
			cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n 틀렸습니다! \n" << endl;
			cout << " ★ 마지막 힌트 : 주연의 이름은 잭 도슨(디카프리오), 로즈(윈슬렛) 입니다. " << endl;
			cout << "\n                        ☞ 이것은 무엇입니까? : " ;
			cin >> userAnswer;

			if(strcmp(userAnswer, "타이타닉")==0)
			{
				cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			}
			else
			{
				cout << "\n 틀렸습니다.. \n" << endl;
				cout << " 정답은 '타이타닉' 입니다. " << endl;
				system("pause");
			}
		}
		break;
	}
	return 0;
}

int movie_Fantasy_quiz()
{
	srand((unsigned)time(NULL));
	int fantasy_quiz=rand()%4;
	fantasy_quiz++;
	
	switch(fantasy_quiz)
	{
	case 1:
		cout << "\n\n 초성 : 'ㅎㄹㅍㅌ' " << endl;
		cout << "\n 힌트① : 이마에 번개모양 흉터가 있는, 비쩍곯고 안경 쓴 고아 아이가 주인공인 영화" << endl;
		cout << "\n                        ☞ 이것은 무엇입니까? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "해리포터")==0)
		{
			cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n 틀렸습니다! \n" << endl;
			cout << " 힌트② : 이마의 번개 모양 흉터는 죽이려고 한 어둠의 마법사 볼드모트의 저주를 이긴 증표입니다 " << endl;
			cout << "\n                        ☞ 이것은 무엇입니까? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "해리포터")==0)
			{
				cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			}
			else
			{
				cout << "\n 틀렸습니다! \n" << endl;
				cout << " ★ 마지막 힌트 : 11살이 되는 날 모든 마법사가 의무적으로 가야하는 " << endl;
				cout << "                 마법학교 '호그와트'로부터의 입학편지를 받고  " << endl;
				cout << "                 친구 론, 헤르미온느와 함께 학교를 다니며 여러 모험을 하는 영화 " << endl;
				cout << "\n                        ☞ 이것은 무엇입니까? : " ;
				while(getchar() != '\n');
				cin >> userAnswer;

				if(strcmp(userAnswer, "해리포터")==0)
				{
					cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
				}
				else
				{
					cout << "\n 틀렸습니다.. \n" << endl;
					cout << " 정답은 '해리포터' 입니다. " << endl;
					system("pause");
				}
			}
		}
		break;
	case 2:
		cout << "\n\n 초성 : 'ㅊㄹㅇㅊㅋㄹㄱㅈ' " << endl;
		cout << "\n 힌트① : 초콜릿공장의 계승자를 찾아내는 영화 " << endl;
		cout << "\n                        ☞ 이것은 무엇입니까? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "찰리와초콜릿공장")==0)
		{
			cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n 틀렸습니다! \n" << endl;
			cout << " 힌트② : 주연의 이름은 조니 뎁, 하이모어 입니다. " << endl;
			cout << "\n                        ☞ 이것은 무엇입니까? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "찰리와초콜릿공장")==0)
			{
				cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			}
			else
			{
				cout << "\n 틀렸습니다! \n" << endl;
				cout << " ★ 마지막 힌트 : 윌리 윙카와 찰리 버켓 " << endl;
				cout << "\n                        ☞ 이것은 무엇입니까? : " ;
				while(getchar() != '\n');
				cin >> userAnswer;

				if(strcmp(userAnswer, "찰리와초콜릿공장")==0)
				{
					cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
				}
				else
				{
					cout << "\n 틀렸습니다.. \n" << endl;
					cout << " 정답은 '찰리와초콜릿공장' 입니다. " << endl;
					system("pause");
				}
			}
		}
		break;
	case 3:
		cout << "\n\n 초성 : 'ㅁㄹㄹㄱㄴㅅㄴ' " << endl;
		cout << "\n 힌트① : 남주가 100년후의 미래를 살고있는 여주에게 " << endl;
		cout << "           자신의 미래에 대해 알아봐 줄 것을 부탁하고나서 사건이 일어나는 영화 " << endl;
		cout << "\n                        ☞ 이것은 무엇입니까? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "미래를걷는소녀")==0)
		{
			cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n 틀렸습니다! \n" << endl;
			cout << " 힌트② : 애니메이션으로도 유명한 영화입니다." << endl;
			cout << "\n                        ☞ 이것은 무엇입니까? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "미래를걷는소녀")==0)
			{
				cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			}
			else
			{
				cout << "\n 틀렸습니다! \n" << endl;
				cout << " ★ 마지막 힌트 : 시간과 미래를 초월 " << endl;
				cout << "\n                        ☞ 이것은 무엇입니까? : " ;
				while(getchar() != '\n');
				cin >> userAnswer;

				if(strcmp(userAnswer, "미래를걷는소녀")==0)
				{
					cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
				}
				else
				{
					cout << "\n 틀렸습니다.. \n" << endl;
					cout << " 정답은 '미래를걷는소녀' 입니다. " << endl;
					system("pause");
				}
			}
		}
		break;
	case 4:
		cout << "\n\n 초성 : 'ㅎㄱㄱㅇ' " << endl;
		cout << "\n 힌트① : 24명중 단 한 사람만이 승리하는 서바이벌을 다룬 영화" << endl;
		cout << "\n                        ☞ 이것은 무엇입니까? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "헝거게임")==0)
		{
			cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n 틀렸습니다! \n" << endl;
			cout << " ★ 마지막 힌트 : 단 한 사람만이 승리할 수 있지만 " << endl;
			cout << "                 여주는 꾀를써서 남주와 공동 우승을 합니다. " << endl;
			cout << "\n                        ☞ 이것은 무엇입니까? : " ;
			cin >> userAnswer;

			if(strcmp(userAnswer, "헝거게임")==0)
			{
				cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			}
			else
			{
				cout << "\n 틀렸습니다.. \n" << endl;
				cout << " 정답은 '헝거게임' 입니다. " << endl;
				system("pause");
			}
		}
		break;
	}
	return 0;
}

int book_Mystery_quiz()
{
	srand((unsigned)time(NULL));
	int mystery_quiz=rand()%4;
	mystery_quiz++;
	
	switch(mystery_quiz)
	{
	case 1:
		cout << "\n\n 초성 : 'ㅅㄹㅎㅈ' " << endl;
		cout << "\n 힌트① : 영국에서 유명한 추리소설 중 하나이다." << endl;
		cout << "\n                        ☞ 이것은 무엇입니까? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "셜록홈즈")==0)
		{
			cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n 틀렸습니다! \n" << endl;
			cout << " ★ 마지막 힌트 : : 그의 조수 왓슨과 함께 사건을 해결해 나가는 소설 " << endl;
			cout << "\n                        ☞ 이것은 무엇입니까? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "셜록홈즈")==0)
			{
				cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			}
			else
			{
				cout << "\n 틀렸습니다.. \n" << endl;
				cout << " 정답은 '셜록홈즈' 입니다. " << endl;
				system("pause");
			}
		}
		break;
	case 2:
		cout << "\n\n 초성 : 'ㅅㄴㅇㅁ' " << endl;
		cout << "\n 힌트① : 어느날 창문 밖을 보니 이상한 눈사람이 자기를 꼬라본다. " << endl;
		cout << "\n                        ☞ 이것은 무엇입니까? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "스노우맨")==0)
		{
			cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n 틀렸습니다! \n" << endl;
			cout << " 힌트② : 이 책의 작가는 요 네스뵈 입니다. " << endl;
			cout << "\n                        ☞ 이것은 무엇입니까? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "스노우맨")==0)
			{
				cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			}
			else
			{
				cout << "\n 틀렸습니다! \n" << endl;
				cout << " ★ 마지막 힌트 : 눈사람 " << endl;
				cout << "\n                        ☞ 이것은 무엇입니까? : " ;
				while(getchar() != '\n');
				cin >> userAnswer;

				if(strcmp(userAnswer, "스노우맨")==0)
				{
					cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
				}
				else
				{
					cout << "\n 틀렸습니다.. \n" << endl;
					cout << " 정답은 '스노우맨' 입니다. " << endl;
					system("pause");
				}
			}
		}
		break;
	case 3:
		cout << "\n\n 초성 : 'ㄱㄹㄱㅇㅁㄷㅇㅇㄷ' " << endl;
		cout << "\n 힌트① : 갇힌 열 사람은 모두 죽고 한 사람도 살아 남지 못한다. " << endl;
		cout << "           인디언 섬에는 이들 열 명 외엔 아무도 없다. " << endl;
		cout << "\n                        ☞ 이것은 무엇입니까? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "그리고아무도없었다")==0)
		{
			cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n 틀렸습니다! \n" << endl;
			cout << " 힌트② : 이 책의 저자는 아가사 크리스티 입니다." << endl;
			cout << "\n                        ☞ 이것은 무엇입니까? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "그리고아무도없었다")==0)
			{
				cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			}
			else
			{
				cout << "\n 틀렸습니다! \n" << endl;
				cout << " ★ 마지막 힌트 : Nobody Else " << endl;
				cout << "\n                        ☞ 이것은 무엇입니까? : " ;
				while(getchar() != '\n');
				cin >> userAnswer;

				if(strcmp(userAnswer, "그리고아무도없었다")==0)
				{
					cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
				}
				else
				{
					cout << "\n 틀렸습니다.. \n" << endl;
					cout << " 정답은 '그리고아무도없었다' 입니다. " << endl;
					system("pause");
				}
			}
		}
		break;
	case 4:
		cout << "\n\n 초성 : '명탐정코난' " << endl;
		cout << "\n 힌트① : 주인공이 약을 먹고 어린아이가 되어 사건을 해결하는 이야기" << endl;
		cout << "\n                        ☞ 이것은 무엇입니까? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "명탐정코난")==0)
		{
			cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n 틀렸습니다! \n" << endl;
			cout << " ★ 마지막 힌트 : 내 이름은 ㅋㄴ 탐정이죠. " << endl;
			cout << "\n                        ☞ 이것은 무엇입니까? : " ;
			cin >> userAnswer;

			if(strcmp(userAnswer, "명탐정코난")==0)
			{
				cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			}
			else
			{
				cout << "\n 틀렸습니다.. \n" << endl;
				cout << " 정답은 '명탐정코난' 입니다. " << endl;
				system("pause");
			}
		}
		break;
	}
	return 0;
}

int book_Comic_quiz()
{
	srand((unsigned)time(NULL));
	int comic_quiz=rand()%4;
	comic_quiz++;
	
	switch(comic_quiz)
	{
	case 1:
		cout << "\n\n 초성 : 'ㄴㄹㅌ' " << endl;
		cout << "\n 힌트① : 친구 찾는 만화" << endl;
		cout << "\n                        ☞ 이것은 무엇입니까? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "나루토")==0)
		{
			cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n 틀렸습니다! \n" << endl;
			cout << " ★ 마지막 힌트 : : 나는.. 호카게가 되겠어! " << endl;
			cout << "\n                        ☞ 이것은 무엇입니까? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "나루토")==0)
			{
				cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			}
			else
			{
				cout << "\n 틀렸습니다.. \n" << endl;
				cout << " 정답은 '나루토' 입니다. " << endl;
				system("pause");
			}
		}
		break;
	case 2:
		cout << "\n\n 초성 : 'ㅂㄹㅊ' " << endl;
		cout << "\n 힌트① : 평범한 고등학생이 사신의 능력을 갖게 되면서 " << endl;
		cout << "           일어나는 사건들을 다룬 만화 " << endl;
		cout << "\n                        ☞ 이것은 무엇입니까? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "블리치")==0)
		{
			cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n 틀렸습니다! \n" << endl;
			cout << " ★ 마지막 힌트 : 주인공의 이름은 쿠로사키 이치고 입니다. " << endl;
			cout << "\n                        ☞ 이것은 무엇입니까? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "블리치")==0)
			{
				cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			}
			else
			{
				cout << "\n 틀렸습니다.. \n" << endl;
				cout << " 정답은 '블리치' 입니다. " << endl;
				system("pause");
			}
		}
		break;
	case 3:
		cout << "\n\n 초성 : 'ㅈㄱㅇㄱㅇ' " << endl;
		cout << "\n 힌트① : 식인 거인이 성벽을 파괴하면서 벌어지는 다양한 일상과 " << endl;
		cout << "           인간의 복수극을 그린 만화 " << endl;
		cout << "\n                        ☞ 이것은 무엇입니까? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "진격의거인")==0)
		{
			cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n 틀렸습니다! \n" << endl;
			cout << " ★ 마지막 힌트 : 주인공의 이름은 에렌, 미카사 입니다." << endl;
			cout << "\n                        ☞ 이것은 무엇입니까? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "진격의거인")==0)
			{
				cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			}
			else
			{
				cout << "\n 틀렸습니다.. \n" << endl;
				cout << " 정답은 '진격의거인' 입니다. " << endl;
				system("pause");
			}
		}
		break;
	case 4:
		cout << "\n\n 초성 : 'ㅇㅍㅅ' " << endl;
		cout << "\n 힌트① : 해적왕이 되기위해 여행하는 이야기" << endl;
		cout << "\n                        ☞ 이것은 무엇입니까? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "원피스")==0)
		{
			cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n 틀렸습니다! \n" << endl;
			cout << " ★ 마지막 힌트 : 고무고무~ 바주카!! " << endl;
			cout << "\n                        ☞ 이것은 무엇입니까? : " ;
			cin >> userAnswer;

			if(strcmp(userAnswer, "원피스")==0)
			{
				cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			}
			else
			{
				cout << "\n 틀렸습니다.. \n" << endl;
				cout << " 정답은 '원피스' 입니다. " << endl;
				system("pause");
			}
		}
		break;
	}
	return 0;
}

int book_FairyTale_quiz()
{
	srand((unsigned)time(NULL));
	int fairyTale_quiz=rand()%4;
	fairyTale_quiz++;
	
	switch(fairyTale_quiz)
	{
	case 1:
		cout << "\n\n 초성 : 'ㅇㅅㅎㄴㄹㅇㅇㄹㅅ' " << endl;
		cout << "\n 힌트① : 주인공이 토끼를 따라가서 고생하는 이야기" << endl;
		cout << "\n                        ☞ 이것은 무엇입니까? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "이상한나라의앨리스")==0)
		{
			cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n 틀렸습니다! \n" << endl;
			cout << " ★ 마지막 힌트 : : 주인공의 이름은 앨리스 입니다. " << endl;
			cout << "\n                        ☞ 이것은 무엇입니까? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "이상한나라의앨리스")==0)
			{
				cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			}
			else
			{
				cout << "\n 틀렸습니다.. \n" << endl;
				cout << " 정답은 '이상한나라의앨리스' 입니다. " << endl;
				system("pause");
			}
		}
		break;
	case 2:
		cout << "\n\n 초성 : 'ㅎㄱㅇㅇㄴㄴㄱㅇ' " << endl;
		cout << "\n 힌트① : 할아버지가 신기한 거위 한 마리를 발견했고, 그로인해 일어나는 사건들 " << endl;
		cout << "\n                        ☞ 이것은 무엇입니까? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "황금알을낳는거위")==0)
		{
			cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n 틀렸습니다! \n" << endl;
			cout << " ★ 마지막 힌트 : 거위가 황금알을 낳았다. " << endl;
			cout << "\n                        ☞ 이것은 무엇입니까? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "황금알을낳는거위")==0)
			{
				cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			}
			else
			{
				cout << "\n 틀렸습니다.. \n" << endl;
				cout << " 정답은 '황금알을낳는거위' 입니다. " << endl;
				system("pause");
			}
		}
		break;
	case 3:
		cout << "\n\n 초성 : 'ㅇㄱㄷㅈㅅㅎㅈ' " << endl;
		cout << "\n 힌트① : 늑대를 피하기 위해 집짓는 이야기 " << endl;
		cout << "\n                        ☞ 이것은 무엇입니까? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "아기돼지삼형제")==0)
		{
			cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n 틀렸습니다! \n" << endl;
			cout << " ★ 마지막 힌트 : 삼겹살 3인분" << endl;
			cout << "\n                        ☞ 이것은 무엇입니까? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "아기돼지삼형제")==0)
			{
				cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			}
			else
			{
				cout << "\n 틀렸습니다.. \n" << endl;
				cout << " 정답은 '아기돼지삼형제' 입니다. " << endl;
				system("pause");
			}
		}
		break;
	case 4:
		cout << "\n\n 초성 : 'ㅃㄱㅁㅌ' " << endl;
		cout << "\n 힌트① : 늑대가 소녀를 잡아먹으려다가 실패하는 이야기" << endl;
		cout << "\n                        ☞ 이것은 무엇입니까? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "빨간망토")==0)
		{
			cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n 틀렸습니다! \n" << endl;
			cout << " ★ 마지막 힌트 : 차차 " << endl;
			cout << "\n                        ☞ 이것은 무엇입니까? : " ;
			cin >> userAnswer;

			if(strcmp(userAnswer, "빨간망토")==0)
			{
				cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			}
			else
			{
				cout << "\n 틀렸습니다.. \n" << endl;
				cout << " 정답은 '빨간망토' 입니다. " << endl;
				system("pause");
			}
		}
		break;
	}
	return 0;
}

int music_Song_quiz()
{
	srand((unsigned)time(NULL));
	int song_quiz=rand()%4;
	song_quiz++;
	switch(song_quiz)
	{
	case 1:
		cout << "\n\n         ┌──────────────────────────────┐ " << endl;
		cout << "         │                        초성 : 'ㄴㄴㄷㄹ'                   │ " << endl;
		cout << "         │                                                            │" << endl;
		cout << "         │힌트① : 이하이, 바비, 수현                                 │" << endl;
		cout << "         │                                                            │ " << endl;
		cout << "         └──────────────────────────────┘" << endl;
		cout << "                        ┌───────────────┐" << endl;
		cout << "                        │※Music Play Number : 1004    │" << endl;
		cout << "                        │※기회 1회 감소               │" << endl;
		cout << "                        └───────────────┘" << endl;
		cout << "\n                        ☞ 이것은 무엇입니까? : ";
		cin >> userAnswer;

		if(userAnswer, "1004")
		{
			// PlaySound(TEXT("music/HI SUHYUN.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
		}
		if(strcmp(userAnswer, "나는달라")==0)
		{
			system("cls");
			cout << " \n\n\n\n             ★☆                                              ☆★ " << endl;
			cout << "             ☆                                                  ☆ " << endl;
			cout << "                     정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			cout << "             ☆                                                  ☆ " << endl;
			cout << "             ★☆                                              ☆★ \n\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
			system("pause");
			system("cls");
		}
		else
		{
			cout << "\n 틀렸습니다! \n" << endl;
			cout << " ★ 마지막 힌트 : : I Am Diffrent " << endl;
			cout << "\n                        ☞ 이것은 무엇입니까? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "나는달라")==0)
			{
				system("cls");
				cout << " \n\n\n\n             ★☆                                              ☆★ " << endl;
				cout << "             ☆                                                  ☆ " << endl;
				cout << "                     정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
				cout << "             ☆                                                  ☆ " << endl;
				cout << "             ★☆                                              ☆★ \n\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
				system("pause");
				system("cls");
			}
			else
			{
				cout << "\n 틀렸습니다.. \n" << endl;
				cout << " 정답은 '나는달라' 입니다. \n\n" << endl;
				system("pause");
				system("cls");
			}
		}
		break;
	case 2:
		cout << "\n\n         ┌──────────────────────────────┐ " << endl;
		cout << "         │                        초성 : 'ㅇㅇㄹ'                     │ " << endl;
		cout << "         │                                                            │" << endl;
		cout << "         │힌트① : ↗ ↘ ↑↑ ↓                                      │" << endl;
		cout << "         │                                                            │ " << endl;
		cout << "         └──────────────────────────────┘" << endl;
		cout << "                        ┌───────────────┐" << endl;
		cout << "                        │※Music Play Number : 1004    │" << endl;
		cout << "                        │※기회 1회 감소               │" << endl;
		cout << "                        └───────────────┘" << endl;
		cout << "\n                        ☞ 이것은 무엇입니까? : ";
		cin >> userAnswer;
			
		if(userAnswer, "1004")
		{
			// PlaySound(TEXT("music/EXID.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
		}
		if(strcmp(userAnswer, "위아래")==0)
		{
			system("cls");
			cout << " \n\n\n\n             ★☆                                              ☆★ " << endl;
			cout << "             ☆                                                  ☆ " << endl;
			cout << "                     정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			cout << "             ☆                                                  ☆ " << endl;
			cout << "             ★☆                                              ☆★ \n\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
			system("pause");
			system("cls");
		}
		else
		{
			cout << "\n 틀렸습니다! \n" << endl;
			cout << " ★ 마지막 힌트 : EXID " << endl;
			cout << "\n                        ☞ 이것은 무엇입니까? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "위아래")==0)
			{
				system("cls");
				cout << " \n\n\n\n             ★☆                                              ☆★ " << endl;
				cout << "             ☆                                                  ☆ " << endl;
				cout << "                     정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
				cout << "             ☆                                                  ☆ " << endl;
				cout << "             ★☆                                              ☆★ \n\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
				system("pause");
				system("cls");
			}
			else
			{
				cout << "\n 틀렸습니다.. \n" << endl;
				cout << " 정답은 '위아래' 입니다. \n\n" << endl;
				system("pause");
				system("cls");
			}
		}
		break;
	case 3:
		cout << "\n\n         ┌──────────────────────────────┐ " << endl;
		cout << "         │                        초성 : 'ㅅㅊㅇㅁㄱ'                 │ " << endl;
		cout << "         │                                                            │" << endl;
		cout << "         │힌트① : 포스트맨                                           │" << endl;
		cout << "         │                                                            │ " << endl;
		cout << "         └──────────────────────────────┘" << endl;
		cout << "                        ┌───────────────┐" << endl;
		cout << "                        │※Music Play Number : 1004    │" << endl;
		cout << "                        │※기회 1회 감소               │" << endl;
		cout << "                        └───────────────┘" << endl;
		cout << "\n                        ☞ 이것은 무엇입니까? : ";
		cin >> userAnswer;
			
		if(userAnswer, "1004")
		{
			// PlaySound(TEXT("music/Postmen.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
		}
		if(strcmp(userAnswer, "신촌을못가")==0)
		{
			system("cls");
			cout << " \n\n\n\n             ★☆                                              ☆★ " << endl;
			cout << "             ☆                                                  ☆ " << endl;
			cout << "                     정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			cout << "             ☆                                                  ☆ " << endl;
			cout << "             ★☆                                              ☆★ \n\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
			system("pause");
			system("cls");
		}
		else
		{
			cout << "\n 틀렸습니다! \n" << endl;
			cout << " ★ 마지막 힌트 : 홍대 친구" << endl;
			cout << "\n                        ☞ 이것은 무엇입니까? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "신촌을못가")==0)
			{
				system("cls");
				cout << " \n\n\n\n             ★☆                                              ☆★ " << endl;
				cout << "             ☆                                                  ☆ " << endl;
				cout << "                     정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
				cout << "             ☆                                                  ☆ " << endl;
				cout << "             ★☆                                              ☆★ \n\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
				system("pause");
				system("cls");
			}
			else
			{
				cout << "\n 틀렸습니다.. \n" << endl;
				cout << " 정답은 '신촌을못가' 입니다. \n\n" << endl;
				system("pause");
				system("cls");
			}
		}
		break;
	case 4:
		cout << "\n\n         ┌──────────────────────────────┐ " << endl;
		cout << "         │                        초성 : 'ㅅㄷㅈㅁ'                   │ " << endl;
		cout << "         │                                                            │" << endl;
		cout << "         │힌트① : 날 사랑한다는 그 흔해빠진 거짓말                   │" << endl;
		cout << "         │        반복되는 싸움 gotta go I say good bye               │ " << endl;
		cout << "         │                                                            │ " << endl;
		cout << "         └──────────────────────────────┘" << endl;
		cout << "                        ┌───────────────┐" << endl;
		cout << "                        │※Music Play Number : 1004    │" << endl;
		cout << "                        │※기회 1회 감소               │" << endl;
		cout << "                        └───────────────┘" << endl;
		cout << "\n                        ☞ 이것은 무엇입니까? : ";
		cin >> userAnswer;
			
		if(userAnswer, "1004")
		{
			// PlaySound(TEXT("music/Ailee.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
		}
		if(strcmp(userAnswer, "손대지마")==0)
		{
			system("cls");
			cout << " \n\n\n\n             ★☆                                              ☆★ " << endl;
			cout << "             ☆                                                  ☆ " << endl;
			cout << "                     정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			cout << "             ☆                                                  ☆ " << endl;
			cout << "             ★☆                                              ☆★ \n\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
			system("pause");
			system("cls");
		}
		else
		{
			cout << "\n 틀렸습니다! \n" << endl;
			cout << " ★ 마지막 힌트 : 에일리 " << endl;
			cout << "\n                        ☞ 이것은 무엇입니까? : " ;
			cin >> userAnswer;

			if(strcmp(userAnswer, "손대지마")==0)
			{
				system("cls");
				cout << " \n\n\n\n             ★☆                                              ☆★ " << endl;
				cout << "             ☆                                                  ☆ " << endl;
				cout << "                     정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
				cout << "             ☆                                                  ☆ " << endl;
				cout << "             ★☆                                              ☆★ \n\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
				system("pause");
				system("cls");
			}
			else
			{
				cout << "\n 틀렸습니다.. \n" << endl;
				cout << " 정답은 '손대지마' 입니다. \n\n" << endl;
				system("pause");
				system("cls");
			}
		}
		break;
	}
	return 0;
}

int music_NewAge_quiz()
{
	srand((unsigned)time(NULL));
	int newAge_quiz=rand()%4;
	newAge_quiz++;
	
	switch(newAge_quiz)
	{
	case 1:
		cout << "\n\n 초성 : 'ㄹㅅㅌㅋㄴㅂ' " << endl;
		cout << "\n 힌트① : 어쿠스틱카페" << endl;
		cout << "\n                        ☞ 이것은 무엇입니까? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "라스트카니발")==0)
		{
			cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n 틀렸습니다! \n" << endl;
			cout << " ★ 마지막 힌트 : : 마지막 축제 " << endl;
			cout << "\n                        ☞ 이것은 무엇입니까? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "라스트카니발")==0)
			{
				cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			}
			else
			{
				cout << "\n 틀렸습니다.. \n" << endl;
				cout << " 정답은 '라스트카니발' 입니다. " << endl;
				system("pause");
			}
		}
		break;
	case 2:
		cout << "\n\n 초성 : 'ㅇㅇㅇㅁ' " << endl;
		cout << "\n 힌트① : 두번째 달 " << endl;
		cout << "\n                        ☞ 이것은 무엇입니까? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "얼음연못")==0)
		{
			cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n 틀렸습니다! \n" << endl;
			cout << " ★ 마지막 힌트 : 바이올린 곡 " << endl;
			cout << "\n                        ☞ 이것은 무엇입니까? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "얼음연못")==0)
			{
				cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			}
			else
			{
				cout << "\n 틀렸습니다.. \n" << endl;
				cout << " 정답은 '얼음연못' 입니다. " << endl;
				system("pause");
			}
		}
		break;
	case 3:
		cout << "\n\n 초성 : 'ㅋㅅㄷㄹㅇ' " << endl;
		cout << "\n 힌트① : 이루마 " << endl;
		cout << "\n                        ☞ 이것은 무엇입니까? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "키스더레인")==0)
		{
			cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n 틀렸습니다! \n" << endl;
			cout << " ★ 마지막 힌트 : 비오는날 키스" << endl;
			cout << "\n                        ☞ 이것은 무엇입니까? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "키스더레인")==0)
			{
				cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			}
			else
			{
				cout << "\n 틀렸습니다.. \n" << endl;
				cout << " 정답은 '키스더레인' 입니다. " << endl;
				system("pause");
			}
		}
		break;
	case 4:
		cout << "\n\n 초성 : 'ㅇㅈㄴㅁㅂㅇㄹㄷ' " << endl;
		cout << "\n 힌트① : Elizabeth Bright" << endl;
		cout << "\n                        ☞ 이것은 무엇입니까? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "언제나몇번이라도")==0)
		{
			cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n 틀렸습니다! \n" << endl;
			cout << " ★ 마지막 힌트 : 센과 치히로의 행방불명 " << endl;
			cout << "\n                        ☞ 이것은 무엇입니까? : " ;
			cin >> userAnswer;

			if(strcmp(userAnswer, "언제나몇번이라도")==0)
			{
				cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			}
			else
			{
				cout << "\n 틀렸습니다.. \n" << endl;
				cout << " 정답은 '언제나몇번이라도' 입니다. " << endl;
				system("pause");
			}
		}
		break;
	}
	return 0;
}

int music_Classic_quiz()
{
	srand((unsigned)time(NULL));
	int classic_quiz=rand()%4;
	classic_quiz++;
	
	switch(classic_quiz)
	{
	case 1:
		cout << "\n\n 초성 : 'ㅇㅁ' " << endl;
		cout << "\n 힌트① : 베토벤" << endl;
		cout << "\n                        ☞ 이것은 무엇입니까? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "운명")==0)
		{
			cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n 틀렸습니다! \n" << endl;
			cout << " ★ 마지막 힌트 : : 베토벤 교향곡 5번 " << endl;
			cout << "\n                        ☞ 이것은 무엇입니까? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "운명")==0)
			{
				cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			}
			else
			{
				cout << "\n 틀렸습니다.. \n" << endl;
				cout << " 정답은 '운명' 입니다. " << endl;
				system("pause");
			}
		}
		break;
	case 2:
		cout << "\n\n 초성 : 'ㅇㄱㅅㄴㅌ' " << endl;
		cout << "\n 힌트① : 베토벤 " << endl;
		cout << "\n                        ☞ 이것은 무엇입니까? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "월광소나타")==0)
		{
			cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n 틀렸습니다! \n" << endl;
			cout << " ★ 마지막 힌트 : Moonlight Sonata " << endl;
			cout << "\n                        ☞ 이것은 무엇입니까? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "월광소나타")==0)
			{
				cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			}
			else
			{
				cout << "\n 틀렸습니다.. \n" << endl;
				cout << " 정답은 '월광소나타' 입니다. " << endl;
				system("pause");
			}
		}
		break;
	case 3:
		cout << "\n\n 초성 : 'ㅎㅅㅈㅎㄱ' " << endl;
		cout << "\n 힌트① : 쇼팽 " << endl;
		cout << "\n                        ☞ 이것은 무엇입니까? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "환상즉흥곡")==0)
		{
			cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n 틀렸습니다! \n" << endl;
			cout << " ★ 마지막 힌트 : 쇼팽 즉흥곡 4번" << endl;
			cout << "\n                        ☞ 이것은 무엇입니까? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "환상즉흥곡")==0)
			{
				cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			}
			else
			{
				cout << "\n 틀렸습니다.. \n" << endl;
				cout << " 정답은 '환상즉흥곡' 입니다. " << endl;
				system("pause");
			}
		}
		break;
	case 4:
		cout << "\n\n 초성 : 'ㅎㄱ' " << endl;
		cout << "\n 힌트① : 쇼팽 " << endl;
		cout << "\n                        ☞ 이것은 무엇입니까? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "흑건")==0)
		{
			cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n 틀렸습니다! \n" << endl;
			cout << " ★ 마지막 힌트 : 영화 말할수없는비밀 " << endl;
			cout << "\n                        ☞ 이것은 무엇입니까? : " ;
			cin >> userAnswer;

			if(strcmp(userAnswer, "흑건")==0)
			{
				cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			}
			else
			{
				cout << "\n 틀렸습니다.. \n" << endl;
				cout << " 정답은 '흑건' 입니다. " << endl;
				system("pause");
			}
		}
		break;
	}
	return 0;
}

int music_Club_quiz()
{
	srand((unsigned)time(NULL));
	int club_quiz=rand()%4;
	club_quiz++;
	
	switch(club_quiz)
	{
	case 1:
		cout << "\n\n 초성 : 'ㅂㄷ' " << endl;
		cout << "\n 힌트① : 딴↗따다↘딴↗따다↘ 딴따따다따다" << endl;
		cout << "\n                        ☞ 이것은 무엇입니까? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "베드")==0)
		{
			cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n 틀렸습니다! \n" << endl;
			cout << " ★ 마지막 힌트 : : David Guetta, Showtek, 침대 " << endl;
			cout << "\n                        ☞ 이것은 무엇입니까? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "베드")==0)
			{
				cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			}
			else
			{
				cout << "\n 틀렸습니다.. \n" << endl;
				cout << " 정답은 '베드' 입니다. " << endl;
				system("pause");
			}
		}
		break;
	case 2:
		cout << "\n\n 초성 : 'ㄷㅂㄷㅌㅊ' " << endl;
		cout << "\n 힌트① : 스웻↗베비↘스웩↗베비↘ 섹시↑택시↓돗트↑ " << endl;
		cout << "\n                        ☞ 이것은 무엇입니까? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "더베드터치")==0)
		{
			cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n 틀렸습니다! \n" << endl;
			cout << " ★ 마지막 힌트 : DJ Gollum, 침대를 만지다 " << endl;
			cout << "\n                        ☞ 이것은 무엇입니까? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "더베드터치")==0)
			{
				cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			}
			else
			{
				cout << "\n 틀렸습니다.. \n" << endl;
				cout << " 정답은 '더베드터치' 입니다. " << endl;
				system("pause");
			}
		}
		break;
	case 3:
		cout << "\n\n 초성 : 'ㅂㅇㅅㅈㄴㄹㅇㅅ' " << endl;
		cout << "\n 힌트① : 에블봐리↗에블바디↗에블봐리↗에블바디↗에블봐리↗ 멕미바운스 " << endl;
		cout << "           딴 따 딴따 딴 따 딴따 읭↗ " << endl;
		cout << "\n                        ☞ 이것은 무엇입니까? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "바운스제네레이션")==0)
		{
			cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n 틀렸습니다! \n" << endl;
			cout << " ★ 마지막 힌트 : 세대를 뛰어넘다" << endl;
			cout << "\n                        ☞ 이것은 무엇입니까? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "바운스제네레이션")==0)
			{
				cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			}
			else
			{
				cout << "\n 틀렸습니다.. \n" << endl;
				cout << " 정답은 '바운스제네레이션' 입니다. " << endl;
				system("pause");
			}
		}
		break;
	case 4:
		cout << "\n\n 초성 : 'ㅁㅁㅁ' " << endl;
		cout << "\n 힌트① : ㅁㅁㅁ ㅁㅁㅁ ㅁㅁ 온리 ㅁㅁ" << endl;
		cout << "           ㅁㅁㅁ ㅁㅁㅁ ㅁㅁ 섹시 ㅁㅁ" << endl;
		cout << "\n                        ☞ 이것은 무엇입니까? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "미미미")==0)
		{
			cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n 틀렸습니다! \n" << endl;
			cout << " ★ 마지막 힌트 : Serebro, MeMeME " << endl;
			cout << "\n                        ☞ 이것은 무엇입니까? : " ;
			cin >> userAnswer;

			if(strcmp(userAnswer, "미미미")==0)
			{
				cout << " 정답입니다! 정답은 " << userAnswer << " 입니다. " << endl;
			}
			else
			{
				cout << "\n 틀렸습니다.. \n" << endl;
				cout << " 정답은 '미미미' 입니다. " << endl;
				system("pause");
			}
		}
		break;
	}
	return 0;
}

int save_load()
{
	int save_load_Number;
	fstream f1;
	string str = "";

	cout << " 1. Save " << endl;
	cout << " 2. Load " << endl;
	cin >> save_load_Number;

	switch(save_load_Number)
	{
	case 1:
		f1.open("save.txt", std::fstream::out);
		f1<<own_Money<<"\n";
		f1<<buy_monster_1;
		f1.close();
		break;
	case 2:
		f1.open("save.txt", std::fstream::in);
		f1 >> str;
		own_Money=atoi(str.c_str());
		f1 >> str;
		buy_monster_1=atoi(str.c_str());
		f1.close();
		break;
	}

	return 0;
}
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

	  //PlaySound (NULL, NULL, NULL ); ������ų�� �κп� �߰��Ͻø� �˴ϴ�.

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
		cout << "\n\n                   ��                                     �� " << endl;
		cout << "                              ��. �ʼ����� " << endl;
		cout << "                              ��. ���� �̸� ���߱� " << endl;
		cout << "                              ��. ���� " << endl;
		cout << "                              ��. �����޴��� ���ư��� " << endl;
		cout << "                   ��                                     �� " << endl;
		cout << "\n                               �� ���� ���� : ";
		cin >> second_Menu_Select;
		system("cls");

		switch(second_Menu_Select)
		{
		case 1:
			genre:
			cout << "\n\n                   ��                                     �� " << endl;
			cout << "                              ��. ��ȭ " << endl;
			cout << "                              ��. ���� " << endl;
			cout << "                              ��. å ���� " << endl;
			cout << "                              ��. �����޴��� ���ư��� " << endl;
			cout << "                              ��. ó���޴��� ���ư��� " << endl;
			cout << "                   ��                                     �� " << endl;
			cout << "\n                               �� �帣 ���� : ";
			cin >> genre_Choice;
			system("cls");

			switch(genre_Choice)
			{
			case 1:
				movie:
				cout << "\n\n                   ��                                     �� " << endl;
				cout << "                              ��. SF " << endl;
				cout << "                              ��. �ڹ̵� " << endl;
				cout << "                              ��. �׼� " << endl;
				cout << "                              ��. ��� " << endl;
				cout << "                              ��. ��Ÿ�� " << endl;
				cout << "                              ��. �����޴��� ���ư��� " << endl;
				cout << "                              ��. ó���޴��� ���ư��� " << endl;
				cout << "                   ��                                     �� " << endl;
				cout << "\n                               �� �帣 ���� : ";
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
				cout << "\n\n                   ��                                     �� " << endl;
				cout << "                              ��. ���� " << endl;
				cout << "                              ��. �������� " << endl;
				cout << "                              ��. Ŭ���� " << endl;
				cout << "                              ��. Ŭ������ " << endl;
				cout << "                              ��. �����޴��� ���ư��� " << endl;
				cout << "                              ��. ó���޴��� ���ư��� " << endl;
				cout << "                   ��                                     �� " << endl;
				cout << "\n                               �� �帣 ���� : ";
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
				cout << "\n\n                   ��                                     �� " << endl;
				cout << "                              ��. �߸��Ҽ� " << endl;
				cout << "                              ��. ��ȭå " << endl;
				cout << "                              ��. ��ȭå " << endl;
				cout << "                              ��. �����޴��� ���ư��� " << endl;
				cout << "                              ��. ó���޴��� ���ư��� " << endl;
				cout << "                   ��                                     �� " << endl;
				cout << "\n                               �� �帣 ���� : ";
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
			cout << "\n\n                   ��                                     �� " << endl;
			cout << "                              ��. ���� ����(Game Start) " << endl;
			cout << "                              ��. �����޴��� ���ư��� " << endl;
			cout << "                              ��. ó���޴��� ���ư��� " << endl;
			cout << "                   ��                                    �� " << endl;
			cout << "\n                               �� �帣 ���� : ";
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

					cout << " �г����� �Է��Ͽ� �ֽʽÿ� : ";
					cin >> make_name;
					cout << "\n �г����� '" << make_name << "'�� �����Ͻðڽ��ϱ�? " << endl;
					cout << " 1. Yes " << endl;
					cout << " 2. No " << endl;
					cout << " 3. Back " << endl;
					cout << "\n�شг��� ����Ұ���" << endl;
					cout << "  ���� : ";
					cin >> name_true_false;
					if(name_true_false==1)
					{
						name=true;
						if(name==true)
						{
							start:
							system("cls");
							cout << " \n\n\n " << endl;
							cout << "   <�����ѵ� 10����> " << endl;
							cout << " ���ñݾ��� �Է��Ͻʽÿ� : ";
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
								cout << "\n �����ݾ��� �ʰ��Ͽ����ϴ�. " << endl;
								cout << " �ٽ��Է��Ͻʽÿ�. \n" << endl;
								own_Money += batting_Money;
								system("pause");
								system("cls");
								goto start;
							}

							cout << "\n ������ �����մϴ�. \n" << endl;
							cout << "\n" << make_name << " ī�� : ";
							user_card_form(); 
							user_card_number();
							cout << " ����Ʈ : " << user_score << endl;
							cout << " ���� ī�� : ";
							dealer_card_form();
							dealer_card_number();
							cout << " ����Ʈ : " << dealer_score << endl;
							cout << " \n " << make_name << " �� ī�带 �� �����ðڽ��ϱ�? (1.Yes / 2.No) : ";
							cin >> card_add;		

							switch(card_add)
							{
							case 1:
								count++;
								go_choice();
								check();
								cout << " \n " << make_name << " �� ī�带 �� �����ðڽ��ϱ�? (1.Yes / 2.No) : ";
								cin >> card_add;
								switch(card_add)
								{
								case 1:
									count++;
									go_choice();
									check();
									cout << " \n " << make_name << " �� ī�带 �� �����ðڽ��ϱ�? (1.Yes / 2.No) : ";
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
		cout << "�����÷��̾�" << endl;
		break;
	case 6:
		cout << "�ɼ�" << endl;
	default:
		goto first;
		break;
	}
}

void firstMenu()
{
	cout << "                                                   ���������������������������� ";
	cout << "                                                   �������� : " << own_Money << " ��" << endl;
	cout << "                                                   ���������������������������� " << endl;
	cout << "                   ��                                     �� " << endl;
	cout << "                              ��. ���� " << endl;
	cout << "                              ��. ���� ���� " << endl;
	cout << "                              ��. �ٹ� " << endl;
	cout << "                              ��. ���� & �ε� " << endl;
	cout << "                              ��. �����÷��̾� " << endl;
	cout << "                              ��. �ɼ� " << endl;
	cout << "                              ��. ���� " << endl;
	cout << "                   ��                                     �� " << endl;
	cout << "\n                               �� �޴� ���� : ";
}

void card_Rule()
{
	cout << " ����� �������Լ� ī�带 1�� �ް� ����ؼ� 1�徿 �� 4����� ������ �� �ֽ��ϴ�. " << endl;
	cout << " ���� ī���� ����Ʈ ���� 21�� �ʰ����� �ʰ�, �������� ����Ʈ�� ������ �̱�ϴ�. " << endl;
	cout << " \n ī�� : �������� ' A, 2, 3, 4, 5, 6, 7, 8, 9, 10 ,J ,Q ,K ' \n" << endl;
	cout << " ī�� 10, J, Q, K �� ��� 10 ����Ʈ " << endl;
	cout << " ī�� A�� ����Ʈ�� ���� 10������ ��� 11, 11�̻��� ��� 1 ����Ʈ " << endl;
}

void go_choice()
{
	cout << "\n" << make_name << " ī�� : ";
	user_card_form(); 
	user_card_number();
	cout << " ����Ʈ : " << user_score << endl;
	cout << " ���� ī�� : ";
	dealer_card_form();
	dealer_card_number();
	cout << " ����Ʈ : " << dealer_score << endl;
	cout << " ���� ī�� ���� : " << count << endl;
}

void check()
{
	if(user_score<21 && dealer_score>21 || user_score==21)
	{
		cout << "\n ����� ������ �̰���ϴ�. " << endl;
		cout << "\n ����" << batting_Money*1.5 << "���� ������ϴ�. " << endl;
		own_Money += batting_Money*2.5;
		cout << "\n ��. �����޴��� ���ư��� " << endl;
		cout << " ��. ó���޴��� ���ư��� " << endl;
	}
	else if(user_score>21 && dealer_score<21 || dealer_score==21)
	{
		cout << "\n ����� �������� �����ϴ�. " << endl;
		cout << "\n ���ñ� " << batting_Money << "���� �Ҿ����ϴ�. " << endl;
		cout << "\n ��. �����޴��� ���ư��� " << endl;
		cout << " ��. ó���޴��� ���ư��� " << endl;
	}
	else if(user_score>21 && dealer_score>21 && user_score==dealer_score || user_score<21 && dealer_score<21 && user_score==dealer_score)
	{
		cout << "\n ����� ������ �����ϴ�. " << endl;
		cout << "\n ����" << batting_Money*1.5 << "���� ������ϴ�. " << endl;
		own_Money += batting_Money*2.5;
		cout << "\n ��. �����޴��� ���ư��� " << endl;
		cout << " ��. ó���޴��� ���ư��� " << endl;
	}
}

void last_check()
{
	if(user_score<21 && dealer_score<21 && user_score>dealer_score || user_score<21 && dealer_score>21 || user_score==21)
	{
		cout << "\n ����� ������ �̰���ϴ�. " << endl;
		cout << "\n ����" << batting_Money*1.5 << "���� ������ϴ�. " << endl;
		own_Money += batting_Money*2.5;
		cout << "\n ��. �����޴��� ���ư��� " << endl;
		cout << " ��. ó���޴��� ���ư��� " << endl;
	}
	else if(user_score<21 && dealer_score<21 && user_score<dealer_score || user_score>21 && dealer_score<21 || dealer_score==21)
	{
		cout << "\n ����� �������� �����ϴ�. " << endl;
		cout << "\n ���ñ� " << batting_Money << "���� �Ҿ����ϴ�. " << endl;
		cout << "\n ��. �����޴��� ���ư��� " << endl;
		cout << " ��. ó���޴��� ���ư��� " << endl;
	}
	else if(user_score>21 && dealer_score>21 && user_score==dealer_score || user_score<21 && dealer_score<21 && user_score==dealer_score)
	{
		cout << "\n ����� ������ �����ϴ�. " << endl;
		cout << "\n ����" << batting_Money*1.5 << "���� ������ϴ�. " << endl;
		own_Money += batting_Money*2.5;
		cout << "\n ��. �����޴��� ���ư��� " << endl;
		cout << " ��. ó���޴��� ���ư��� " << endl;
	}
}

void stop_choice()
{
	if(user_score<21 && dealer_score<21 && user_score>dealer_score || dealer_score>21 || user_score==21)
	{
		cout << "\n ����� ������ �̰���ϴ�. " << endl;
		cout << "\n ����" << batting_Money*1.5 << "���� ������ϴ�. " << endl;
		own_Money += batting_Money*2.5;
		cout << "\n ��. �����޴��� ���ư��� " << endl;
		cout << " ��. ó���޴��� ���ư��� " << endl;
	}
	else if(user_score<21 && dealer_score<21 && user_score<dealer_score || user_score>21 || dealer_score==21)
	{
		cout << "\n ����� �������� �����ϴ�. " << endl;
		cout << "\n ���ñ� " << batting_Money << "���� �Ҿ����ϴ�. " << endl;
		cout << "\n ��. �����޴��� ���ư��� " << endl;
		cout << " ��. ó���޴��� ���ư��� " << endl;
	}
	else if(user_score<21 && dealer_score<21 && user_score==dealer_score)
	{
		cout << "\n ����� ������ �����ϴ�. " << endl;
		cout << "\n ����" << batting_Money*1.5 << "���� ������ϴ�. " << endl;
		own_Money += batting_Money*2.5;
		cout << "\n ��. �����޴��� ���ư��� " << endl;
		cout << " ��. ó���޴��� ���ư��� " << endl;
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
		cout << "��";
		break;
	case 2:
		cout << "��";
		break;
	case 3:
		cout << "��";
		break;
	case 4:
		cout << "��";
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
		cout << "��";
		break;
	case 2:
		cout << "��";
		break;
	case 3:
		cout << "��";
		break;
	case 4:
		cout << "��";
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

	cout << " ���� ���� " << endl;
	cout << " 1�� " << endl;
	monster_1();
	cin >> buy_monster_Number;

	switch(buy_monster_Number)
	{
	case 1:
		if(!buy_monster_1)
		{
		own_Money-=1000;
			cout << " �������� 1000�� ���ҵǾ����ϴ�. " << endl;
			buy_monster_1 = true;
		}
		else
		{
			cout << " �̹� �ٹ��� �ִ� �����Դϴ�. " << endl;
		}
	}

	return 0;
}

void monster_1()
{
	cout << " ������������� " << endl;
	cout << " ������������� " << endl;
	cout << " ������������� " << endl; 
	cout << " ������������� " << endl;
	cout << " ������������� " << endl;
	cout << " ������������� " << endl;
	cout << " ������������� " << endl;
	cout << " ������������� " << endl;
	cout << " ������������� " << endl;
}

int collection()
{
	if(buy_monster_1==true)
	{
		cout << " ������������� " << endl;
		cout << " ������������� " << endl;
		cout << " ������������� " << endl; 
		cout << " ������������� " << endl;
		cout << " ������������� " << endl;
		cout << " ������������� " << endl;
		cout << " ������������� " << endl;
		cout << " ������������� " << endl;
		cout << " ������������� " << endl;
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
		cout << "\n\n �ʼ� : '����������' " << endl;
		cout << "\n ��Ʈ�� : Ȳ������ ������ ������ ���ο� ��ô���� �߰��ϴ� ��ȭ" << endl;
		cout << "\n                        �� �̰��� �����Դϱ�? : ";
		cin >> userAnswer;
		
		if(strcmp(userAnswer, "���ͽ��ڶ�")==0)
		{
			cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
		}
		else
		{
			cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
			cout << " ��Ʈ�� : �ֿ� ĳ������ �̸��� ����, �ƸḮ��, �귣�� ����, ���� �Դϴ�.  " << endl;
			cout << "\n                        �� �̰��� �����Դϱ�? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "���ͽ��ڶ�")==0)
			{
				cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			}
			else
			{
				cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
				cout << " �� ������ ��Ʈ : ������������ ���� ���鰣�� �Ÿ�, ������ �հŸ� ��� ���Դϴ�. " << endl;
				cout << "\n                        �� �̰��� �����Դϱ�? : " ;
				while(getchar() != '\n');
				cin >> userAnswer;

				if(strcmp(userAnswer, "���ͽ��ڶ�")==0)
				{
					cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
				}
				else
				{
					cout << "\n Ʋ�Ƚ��ϴ�.. \n" << endl;
					cout << " ������ '���ͽ��ڶ�' �Դϴ�. " << endl;
					system("pause");
				}
			}
		}
		break;
	case 2:
		cout << "\n\n �ʼ� : '������' " << endl;
		cout << "\n ��Ʈ�� : �̷��� �ΰ��� �ٸ� �༺�� �ĵ�� ���ϴ�. �׷��� ���ΰ��� �� �༺��" << endl;
		cout << "         ������ ������ �� �ְԵǰ�, ���ֹε�� �Բ� ��Ȱ�մϴ�. " << endl;
		cout << "         �ΰ����� �ĵ�� ������ ���ΰ��� ������ �̲��� �ο� �̱�ϴ�. " << endl;
		cout << "\n                        �� �̰��� �����Դϱ�? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "�ƹ�Ÿ")==0)
		{
			cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
		}
		else
		{
			cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
			cout << " ��Ʈ�� : 2010�� ������ ��ȭ �Դϴ�. " << endl;
			cout << "\n                        �� �̰��� �����Դϱ�? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "�ƹ�Ÿ")==0)
			{
				cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			}
			else
			{
				cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
				cout << " �� ������ ��Ʈ : ���ӽ� ī�޷��� ������ �þҽ��ϴ�. " << endl;
				cout << "\n                        �� �̰��� �����Դϱ�? : " ;
				while(getchar() != '\n');
				cin >> userAnswer;

				if(strcmp(userAnswer, "�ƹ�Ÿ")==0)
				{
					cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
				}
				else
				{
					cout << "\n Ʋ�Ƚ��ϴ�.. \n" << endl;
					cout << " ������ '�ƹ�Ÿ' �Դϴ�. " << endl;
					system("pause");
				}
			}
		}
		break;
	case 3:
		cout << "\n\n �ʼ� : '��������' " << endl;
		cout << "\n ��Ʈ�� : ���ⰳ�߷� ��û�� ���� ���� �ڻ簡 ���� ������ ��Ʈ�� �԰� " << endl;
		cout << "         Ȱ���ϴ� ��ȭ�Դϴ�. " << endl;
		cout << "\n                        �� �̰��� �����Դϱ�? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "���̾��")==0)
		{
			cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
		}
		else
		{
			cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
			cout << " ��Ʈ�� : ��Ʈ�� ��÷�� ���� ����� ��Ʈ�Դϴ�. " << endl;
			cout << "         ��, �� ��ȭ�� �αⰡ ���� 1, 2, 3 �ø�� ���Խ��ϴ� " << endl;
			cout << "\n                        �� �̰��� �����Դϱ�? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "���̾��")==0)
			{
				cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			}
			else
			{
				cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
				cout << " �� ������ ��Ʈ : �ֿ� ĳ������ �̸��� ��Ͻ�Ÿũ �Դϴ�. " << endl;
				cout << "\n                        �� �̰��� �����Դϱ�? : " ;
				while(getchar() != '\n');
				cin >> userAnswer;

				if(strcmp(userAnswer, "���̾��")==0)
				{
					cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
				}
				else
				{
					cout << "\n Ʋ�Ƚ��ϴ�.. \n" << endl;
					cout << " ������ '���̾��' �Դϴ�. " << endl;
					system("pause");
				}
			}
		}
		break;
	case 4:
		cout << "\n\n �ʼ� : '��������' " << endl;
		cout << "\n ��Ʈ�� : ��Ű�� ������ �ͼ� ť�긦 ���ҽ��ϴ�. " << endl;
		cout << "         ��Ű�� �� ť�긦 �̿��� ������ �ܰ��ε��� ������ �����Ϸ��� �մϴ�. " << endl;
		cout << "         �װ��� �ٸ� ��ȭ�� ����ε��� �� �����ϴ�. " << endl;
		cout << "\n                        �� �̰��� �����Դϱ�? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "�����")==0)
		{
			cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
		}
		else
		{
			cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
			cout << " ��Ʈ�� : ��Ű�� ���� �丣�Դϴ�. " << endl;
			cout << "\n                        �� �̰��� �����Դϱ�? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "�����")==0)
			{
				cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			}
			else
			{
				cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
				cout << " �� ������ ��Ʈ : �ֿ� ĳ������ �̸��� ��ũ, �丣, ��Ű, ĸƾ, " << endl;
				cout << "                             ��������, ȣũ���� �Դϴ�." << endl;
				cout << "\n                        �� �̰��� �����Դϱ�? : " ;
				while(getchar() != '\n');
				cin >> userAnswer;

				if(strcmp(userAnswer, "�����")==0)
				{
					cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
				}
				else
				{
					cout << "\n Ʋ�Ƚ��ϴ�.. \n" << endl;
					cout << " ������ '�����' �Դϴ�. " << endl;
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
		cout << "\n\n �ʼ� : '��������' " << endl;
		cout << "\n ��Ʈ�� : �ְ� ���������� �������� ����� ���ϴ� ���б�." << endl;
		cout << "           �� ���б��� �ٴϴ� 3���� õ�� ���л��� �̾߱� " << endl;
		cout << "\n                        �� �̰��� �����Դϱ�? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "������")==0)
		{
			cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
			cout << " ��Ʈ�� : �ֿ� ĳ������ �̸��� ����, �ĸ���, ���� �Դϴ�.  " << endl;
			cout << "\n                        �� �̰��� �����Դϱ�? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "������")==0)
			{
				cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			}
			else
			{
				cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
				cout << " �� ������ ��Ʈ : �� ���� ��~!!! " << endl;
				cout << "\n                        �� �̰��� �����Դϱ�? : " ;
				while(getchar() != '\n');
				cin >> userAnswer;

				if(strcmp(userAnswer, "������")==0)
				{
					cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
				}
				else
				{
					cout << "\n Ʋ�Ƚ��ϴ�.. \n" << endl;
					cout << " ������ '������' �Դϴ�. " << endl;
					system("pause");
				}
			}
		}
		break;
	case 2:
		cout << "\n\n �ʼ� : '������������' " << endl;
		cout << "\n ��Ʈ�� : ������������ �� ������� ����ϴ� ���ڿ� �ҽ������� �˰��� ����� ���л� ������ ������� �θǽ��� �׸� ��ȭ" << endl;
		cout << "\n                        �� �̰��� �����Դϱ�? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "�������α׳�")==0)
		{
			cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
			cout << " ��Ʈ�� : �ֿ� ĳ������ �̸��� �߿�, �׳� �Դϴ�.  " << endl;
			cout << "\n                        �� �̰��� �����Դϱ�? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "�������α׳�")==0)
			{
				cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			}
			else
			{
				cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
				cout << " �� ������ ��Ʈ : �������� �������� ����̾߱��Դϴ�.  " << endl;
				cout << "\n                        �� �̰��� �����Դϱ�? : " ;
				while(getchar() != '\n');
				cin >> userAnswer;

				if(strcmp(userAnswer, "�������α׳�")==0)
				{
					cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
				}
				else
				{
					cout << "\n Ʋ�Ƚ��ϴ�.. \n" << endl;
					cout << " ������ '�������α׳�' �Դϴ�. " << endl;
					system("pause");
				}
			}
		}
		break;
	case 3:
		cout << "\n\n �ʼ� : '����������' " << endl;
		cout << "\n ��Ʈ�� : �峭������ ���μ��� ������ �ؼ� ������ �ذ��س����� ��ȭ" << endl;
		cout << "\n                        �� �̰��� �����Դϱ�? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "���̽��丮")==0)
		{
			cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
			cout << " ��Ʈ�� : �ִϸ��̼� �Դϴ�.  " << endl;
			cout << "\n                        �� �̰��� �����Դϱ�? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "���̽��丮")==0)
			{
				cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			}
			else
			{
				cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
				cout << " �� ������ ��Ʈ : �ֿ� ĳ������ �̸��� ���, ����,����, ���� �Դϴ�. " << endl;
				cout << "\n                        �� �̰��� �����Դϱ�? : " ;
				while(getchar() != '\n');
				cin >> userAnswer;

				if(strcmp(userAnswer, "���̽��丮")==0)
				{
					cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
				}
				else
				{
					cout << "\n Ʋ�Ƚ��ϴ�.. \n" << endl;
					cout << " ������ '���̽��丮' �Դϴ�. " << endl;
					system("pause");
				}
			}
		}
		break;
	case 4:
		cout << "\n\n �ʼ� : '����������' " << endl;
		cout << "\n ��Ʈ�� : ������ ������ �翬�� ������ ��ȥ�� �ִ�." << endl;
		cout << "           �� ��ȥ�� �˰��� �ڽ��� ���̾���. " << endl;
		cout << "           �׷��� �� ���� ��ȥ�𿴴�... " << endl;
		cout << "\n                        �� �̰��� �����Դϱ�? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "���ӽ�ĵ��")==0)
		{
			cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
			cout << " �� ������ ��Ʈ : : �������� �ں����� ���ǽ��丮 " << endl;
			cout << "\n                        �� �̰��� �����Դϱ�? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "���ӽ�ĵ��")==0)
			{
				cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			}
			else
			{
				cout << "\n Ʋ�Ƚ��ϴ�.. \n" << endl;
				cout << " ������ '���ӽ�ĵ��' �Դϴ�. " << endl;
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
		cout << "\n\n �ʼ� : '����' " << endl;
		cout << "\n ��Ʈ�� : �ٸ������ �� �𸣰����� ����ϴ� �������� ����" << endl;
		cout << "           �� ������� ã�� �����ϰ��� �ϴ� ���ھ��� " << endl;
		cout << "           �׸��� �׷� ���̰� �ڽ��� ��ȣ �Ʒ� �ִٴ� �͸����ε� �ż����� ���� " << endl;
		cout << "\n                        �� �̰��� �����Դϱ�? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "����")==0)
		{
			cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
			cout << " �� ������ ��Ʈ : Shape Of My Heart " << endl;
			cout << "\n                        �� �̰��� �����Դϱ�? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "����")==0)
			{
				cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			}
			else
			{
				cout << "\n Ʋ�Ƚ��ϴ�.. \n" << endl;
				cout << " ������ '����' �Դϴ�. " << endl;
				system("pause");
			}
		}
		break;
	case 2:
		cout << "\n\n �ʼ� : '����������' " << endl;
		cout << "\n ��Ʈ�� : ������ ã�� ������ ���� " << endl;
		cout << "\n                        �� �̰��� �����Դϱ�? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "����������")==0)
		{
			cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
			cout << " �� ������ ��Ʈ : �ֿ� ĳ������ �̸��� ������, ��, ��� �Դϴ�.  " << endl;
			cout << "\n                        �� �̰��� �����Դϱ�? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "����������")==0)
			{
				cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			}
			else
			{
				cout << "\n Ʋ�Ƚ��ϴ�.. \n" << endl;
				cout << " ������ '����������' �Դϴ�. " << endl;
				system("pause");
			}
		}
		break;
	case 3:
		cout << "\n\n �ʼ� : '��������' " << endl;
		cout << "\n ��Ʈ�� : �ý����� �ΰ��� �����ϴ� ������ �׸� ��ȭ" << endl;
		cout << "\n                        �� �̰��� �����Դϱ�? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "��Ʈ����")==0)
		{
			cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
			cout << " ��Ʈ�� : �ֿ� ĳ������ �̸��� ���Ǿ, �丶�� �ش���, ������ �Դϴ�. " << endl;
			cout << "\n                        �� �̰��� �����Դϱ�? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "��Ʈ����")==0)
			{
				cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			}
			else
			{
				cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
				cout << " �� ������ ��Ʈ : �Ѿ��� ������� ���ο������� ���մϴ�. " << endl;
				cout << "\n                        �� �̰��� �����Դϱ�? : " ;
				while(getchar() != '\n');
				cin >> userAnswer;

				if(strcmp(userAnswer, "��Ʈ����")==0)
				{
					cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
				}
				else
				{
					cout << "\n Ʋ�Ƚ��ϴ�.. \n" << endl;
					cout << " ������ '��Ʈ����' �Դϴ�. " << endl;
					system("pause");
				}
			}
		}
		break;
	case 4:
		cout << "\n\n �ʼ� : '����������' " << endl;
		cout << "\n ��Ʈ�� : ������ Ÿ�Ӹӽ����� ���ڳʰ� �¾�� ���ϵ���" << endl;
		cout << "           ���� ������ ����ڳʸ� ���Ϸ��� ���ڸ� ������. " << endl;
		cout << "\n                        �� �̰��� �����Դϱ�? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "�͹̳�����")==0)
		{
			cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
			cout << " �� ������ ��Ʈ : �ֿ��� �̸��� �Ƴ�� �������װ� �Դϴ�. " << endl;
			cout << "                 I will be back " << endl;
			cout << "\n                        �� �̰��� �����Դϱ�? : " ;
			cin >> userAnswer;

			if(strcmp(userAnswer, "�͹̳�����")==0)
			{
				cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			}
			else
			{
				cout << "\n Ʋ�Ƚ��ϴ�.. \n" << endl;
				cout << " ������ '�͹̳�����' �Դϴ�. " << endl;
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
		cout << "\n\n �ʼ� : '������' " << endl;
		cout << "\n ��Ʈ�� : �θ�Կ� ���� ����� �̷�� ������ ���డ �־����ϴ�." << endl;
		cout << "           �ᱹ ���� ������� �Ǿ���, ���ڴ� �����Ϳ� �����ϴ� " << endl;
		cout << "\n           �����Ϳ� ���� ��⸦ Ÿ���µ� ���ڰ� �� ����̰� ���°� Ȯ���ϰ�� " << endl;
		cout << "           �� ����̸� ã���� ���ٰ� �ᱹ ���� �ҰԵ˴ϴ�. " << endl;
		cout << "           ���ڿ��� ��Ű�� ������ ������, �ᱹ ��Ű�� �ǰ�... " << endl;
		cout << "\n           �׷��� �̾߱⸦ �׳��� ���� �˰� ������. " << endl;
		cout << "           �׳��� ���� ����ϴ� ���ڰ� �ִµ� �� ���ڰ� �ٷ� ���� ���� �������ΰ��� �Ƶ��̾����ϴ�. " << endl;
		cout << "\n                        �� �̰��� �����Դϱ�? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "Ŭ����")==0)
		{
			cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
			cout << " �� ������ ��Ʈ : �ֿ� ĳ������ �̸��� ����(�տ���), ����(���¿�),  " << endl;
			cout << "                 ���(���μ�), �¼�(�̱��), ����(������) �Դϴ�. " << endl;
			cout << "\n                        �� �̰��� �����Դϱ�? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "Ŭ����")==0)
			{
				cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			}
			else
			{
				cout << "\n Ʋ�Ƚ��ϴ�.. \n" << endl;
				cout << " ������ 'Ŭ����' �Դϴ�. " << endl;
				system("pause");
			}
		}
		break;
	case 2:
		cout << "\n\n �ʼ� : '����������������' " << endl;
		cout << "\n ��Ʈ�� : ���� ������ ���ƿ´ٴ� ����� �ϰ� ������ ���� �Ƴ����� �̾߱� " << endl;
		cout << "\n                        �� �̰��� �����Դϱ�? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "���ݸ��������ϴ�")==0)
		{
			cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
			cout << " ��Ʈ�� : �ֿ� ĳ������ �̸��� ���̿�, ����, ��ī�� �Դϴ�. " << endl;
			cout << "\n                        �� �̰��� �����Դϱ�? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "���ݸ��������ϴ�")==0)
			{
				cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			}
			else
			{
				cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
				cout << " �� ������ ��Ʈ : ���ճ��� " << endl;
				cout << "\n                        �� �̰��� �����Դϱ�? : " ;
				while(getchar() != '\n');
				cin >> userAnswer;

				if(strcmp(userAnswer, "���ݸ��������ϴ�")==0)
				{
					cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
				}
				else
				{
					cout << "\n Ʋ�Ƚ��ϴ�.. \n" << endl;
					cout << " ������ '���ݸ��������ϴ�' �Դϴ�. " << endl;
					system("pause");
				}
			}
		}
		break;
	case 3:
		cout << "\n\n �ʼ� : '��������������' " << endl;
		cout << "\n ��Ʈ�� : �ͽ��� ���� �ǾƳ븦 ġ�� ���� �̾߱�" << endl;
		cout << "\n                        �� �̰��� �����Դϱ�? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "���Ҽ����º��")==0)
		{
			cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
			cout << " ��Ʈ�� : �ǾƳ��Ʋ�� ������ ��ȭ�Դϴ�. " << endl;
			cout << "\n                        �� �̰��� �����Դϱ�? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "���Ҽ����º��")==0)
			{
				cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			}
			else
			{
				cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
				cout << " �� ������ ��Ʈ : �ְɷ��� ������ ��쿪�� ��� �þҽ��ϴ�. " << endl;
				cout << "\n                        �� �̰��� �����Դϱ�? : " ;
				while(getchar() != '\n');
				cin >> userAnswer;

				if(strcmp(userAnswer, "���Ҽ����º��")==0)
				{
					cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
				}
				else
				{
					cout << "\n Ʋ�Ƚ��ϴ�.. \n" << endl;
					cout << " ������ '���Ҽ����º��' �Դϴ�. " << endl;
					system("pause");
				}
			}
		}
		break;
	case 4:
		cout << "\n\n �ʼ� : '��������' " << endl;
		cout << "\n ��Ʈ�� : �׸��� �׸���, ������ �ϸ� ��ư��� û��" << endl;
		cout << "           û���� ������ ���ڿ��� ���� �¼� Ƽ���� ��� �˴ϴ�. " << endl;
		cout << "           �ű⼭ ���� �ҳฦ ���� ���� ����� �ϰ� �˴ϴ�. " << endl;
		cout << "           ������, �����ϰԵ� ��� ���Ͽ� �ε��� " << endl;
		cout << "           ���� �ٴٷ� ����ɾ� �����ϴ�. " << endl;
		cout << "\n                        �� �̰��� �����Դϱ�? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "Ÿ��Ÿ��")==0)
		{
			cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
			cout << " �� ������ ��Ʈ : �ֿ��� �̸��� �� ����(��ī������), ����(������) �Դϴ�. " << endl;
			cout << "\n                        �� �̰��� �����Դϱ�? : " ;
			cin >> userAnswer;

			if(strcmp(userAnswer, "Ÿ��Ÿ��")==0)
			{
				cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			}
			else
			{
				cout << "\n Ʋ�Ƚ��ϴ�.. \n" << endl;
				cout << " ������ 'Ÿ��Ÿ��' �Դϴ�. " << endl;
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
		cout << "\n\n �ʼ� : '��������' " << endl;
		cout << "\n ��Ʈ�� : �̸��� ������� ���Ͱ� �ִ�, ��½���� �Ȱ� �� ��� ���̰� ���ΰ��� ��ȭ" << endl;
		cout << "\n                        �� �̰��� �����Դϱ�? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "�ظ�����")==0)
		{
			cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
			cout << " ��Ʈ�� : �̸��� ���� ��� ���ʹ� ���̷��� �� ����� ������ �����Ʈ�� ���ָ� �̱� ��ǥ�Դϴ� " << endl;
			cout << "\n                        �� �̰��� �����Դϱ�? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "�ظ�����")==0)
			{
				cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			}
			else
			{
				cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
				cout << " �� ������ ��Ʈ : 11���� �Ǵ� �� ��� �����簡 �ǹ������� �����ϴ� " << endl;
				cout << "                 �����б� 'ȣ�׿�Ʈ'�κ����� ���������� �ް�  " << endl;
				cout << "                 ģ�� ��, �츣�̿´��� �Բ� �б��� �ٴϸ� ���� ������ �ϴ� ��ȭ " << endl;
				cout << "\n                        �� �̰��� �����Դϱ�? : " ;
				while(getchar() != '\n');
				cin >> userAnswer;

				if(strcmp(userAnswer, "�ظ�����")==0)
				{
					cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
				}
				else
				{
					cout << "\n Ʋ�Ƚ��ϴ�.. \n" << endl;
					cout << " ������ '�ظ�����' �Դϴ�. " << endl;
					system("pause");
				}
			}
		}
		break;
	case 2:
		cout << "\n\n �ʼ� : '����������������' " << endl;
		cout << "\n ��Ʈ�� : ���ݸ������� ����ڸ� ã�Ƴ��� ��ȭ " << endl;
		cout << "\n                        �� �̰��� �����Դϱ�? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "���������ݸ�����")==0)
		{
			cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
			cout << " ��Ʈ�� : �ֿ��� �̸��� ���� ��, ���̸�� �Դϴ�. " << endl;
			cout << "\n                        �� �̰��� �����Դϱ�? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "���������ݸ�����")==0)
			{
				cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			}
			else
			{
				cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
				cout << " �� ������ ��Ʈ : ���� ��ī�� ���� ���� " << endl;
				cout << "\n                        �� �̰��� �����Դϱ�? : " ;
				while(getchar() != '\n');
				cin >> userAnswer;

				if(strcmp(userAnswer, "���������ݸ�����")==0)
				{
					cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
				}
				else
				{
					cout << "\n Ʋ�Ƚ��ϴ�.. \n" << endl;
					cout << " ������ '���������ݸ�����' �Դϴ�. " << endl;
					system("pause");
				}
			}
		}
		break;
	case 3:
		cout << "\n\n �ʼ� : '��������������' " << endl;
		cout << "\n ��Ʈ�� : ���ְ� 100������ �̷��� ����ִ� ���ֿ��� " << endl;
		cout << "           �ڽ��� �̷��� ���� �˾ƺ� �� ���� ��Ź�ϰ��� ����� �Ͼ�� ��ȭ " << endl;
		cout << "\n                        �� �̰��� �����Դϱ�? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "�̷����ȴ¼ҳ�")==0)
		{
			cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
			cout << " ��Ʈ�� : �ִϸ��̼����ε� ������ ��ȭ�Դϴ�." << endl;
			cout << "\n                        �� �̰��� �����Դϱ�? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "�̷����ȴ¼ҳ�")==0)
			{
				cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			}
			else
			{
				cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
				cout << " �� ������ ��Ʈ : �ð��� �̷��� �ʿ� " << endl;
				cout << "\n                        �� �̰��� �����Դϱ�? : " ;
				while(getchar() != '\n');
				cin >> userAnswer;

				if(strcmp(userAnswer, "�̷����ȴ¼ҳ�")==0)
				{
					cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
				}
				else
				{
					cout << "\n Ʋ�Ƚ��ϴ�.. \n" << endl;
					cout << " ������ '�̷����ȴ¼ҳ�' �Դϴ�. " << endl;
					system("pause");
				}
			}
		}
		break;
	case 4:
		cout << "\n\n �ʼ� : '��������' " << endl;
		cout << "\n ��Ʈ�� : 24���� �� �� ������� �¸��ϴ� �����̹��� �ٷ� ��ȭ" << endl;
		cout << "\n                        �� �̰��� �����Դϱ�? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "��Ű���")==0)
		{
			cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
			cout << " �� ������ ��Ʈ : �� �� ������� �¸��� �� ������ " << endl;
			cout << "                 ���ִ� �Ҹ��Ἥ ���ֿ� ���� ����� �մϴ�. " << endl;
			cout << "\n                        �� �̰��� �����Դϱ�? : " ;
			cin >> userAnswer;

			if(strcmp(userAnswer, "��Ű���")==0)
			{
				cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			}
			else
			{
				cout << "\n Ʋ�Ƚ��ϴ�.. \n" << endl;
				cout << " ������ '��Ű���' �Դϴ�. " << endl;
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
		cout << "\n\n �ʼ� : '��������' " << endl;
		cout << "\n ��Ʈ�� : �������� ������ �߸��Ҽ� �� �ϳ��̴�." << endl;
		cout << "\n                        �� �̰��� �����Դϱ�? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "�ȷ�Ȩ��")==0)
		{
			cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
			cout << " �� ������ ��Ʈ : : ���� ���� �ӽ��� �Բ� ����� �ذ��� ������ �Ҽ� " << endl;
			cout << "\n                        �� �̰��� �����Դϱ�? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "�ȷ�Ȩ��")==0)
			{
				cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			}
			else
			{
				cout << "\n Ʋ�Ƚ��ϴ�.. \n" << endl;
				cout << " ������ '�ȷ�Ȩ��' �Դϴ�. " << endl;
				system("pause");
			}
		}
		break;
	case 2:
		cout << "\n\n �ʼ� : '��������' " << endl;
		cout << "\n ��Ʈ�� : ����� â�� ���� ���� �̻��� ������� �ڱ⸦ ���󺻴�. " << endl;
		cout << "\n                        �� �̰��� �����Դϱ�? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "������")==0)
		{
			cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
			cout << " ��Ʈ�� : �� å�� �۰��� �� �׽��� �Դϴ�. " << endl;
			cout << "\n                        �� �̰��� �����Դϱ�? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "������")==0)
			{
				cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			}
			else
			{
				cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
				cout << " �� ������ ��Ʈ : ����� " << endl;
				cout << "\n                        �� �̰��� �����Դϱ�? : " ;
				while(getchar() != '\n');
				cin >> userAnswer;

				if(strcmp(userAnswer, "������")==0)
				{
					cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
				}
				else
				{
					cout << "\n Ʋ�Ƚ��ϴ�.. \n" << endl;
					cout << " ������ '������' �Դϴ�. " << endl;
					system("pause");
				}
			}
		}
		break;
	case 3:
		cout << "\n\n �ʼ� : '������������������' " << endl;
		cout << "\n ��Ʈ�� : ���� �� ����� ��� �װ� �� ����� ��� ���� ���Ѵ�. " << endl;
		cout << "           �ε�� ������ �̵� �� �� �ܿ� �ƹ��� ����. " << endl;
		cout << "\n                        �� �̰��� �����Դϱ�? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "�׸���ƹ���������")==0)
		{
			cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
			cout << " ��Ʈ�� : �� å�� ���ڴ� �ư��� ũ����Ƽ �Դϴ�." << endl;
			cout << "\n                        �� �̰��� �����Դϱ�? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "�׸���ƹ���������")==0)
			{
				cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			}
			else
			{
				cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
				cout << " �� ������ ��Ʈ : Nobody Else " << endl;
				cout << "\n                        �� �̰��� �����Դϱ�? : " ;
				while(getchar() != '\n');
				cin >> userAnswer;

				if(strcmp(userAnswer, "�׸���ƹ���������")==0)
				{
					cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
				}
				else
				{
					cout << "\n Ʋ�Ƚ��ϴ�.. \n" << endl;
					cout << " ������ '�׸���ƹ���������' �Դϴ�. " << endl;
					system("pause");
				}
			}
		}
		break;
	case 4:
		cout << "\n\n �ʼ� : '��Ž���ڳ�' " << endl;
		cout << "\n ��Ʈ�� : ���ΰ��� ���� �԰� ����̰� �Ǿ� ����� �ذ��ϴ� �̾߱�" << endl;
		cout << "\n                        �� �̰��� �����Դϱ�? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "��Ž���ڳ�")==0)
		{
			cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
			cout << " �� ������ ��Ʈ : �� �̸��� ���� Ž������. " << endl;
			cout << "\n                        �� �̰��� �����Դϱ�? : " ;
			cin >> userAnswer;

			if(strcmp(userAnswer, "��Ž���ڳ�")==0)
			{
				cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			}
			else
			{
				cout << "\n Ʋ�Ƚ��ϴ�.. \n" << endl;
				cout << " ������ '��Ž���ڳ�' �Դϴ�. " << endl;
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
		cout << "\n\n �ʼ� : '������' " << endl;
		cout << "\n ��Ʈ�� : ģ�� ã�� ��ȭ" << endl;
		cout << "\n                        �� �̰��� �����Դϱ�? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "������")==0)
		{
			cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
			cout << " �� ������ ��Ʈ : : ����.. ȣī�԰� �ǰھ�! " << endl;
			cout << "\n                        �� �̰��� �����Դϱ�? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "������")==0)
			{
				cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			}
			else
			{
				cout << "\n Ʋ�Ƚ��ϴ�.. \n" << endl;
				cout << " ������ '������' �Դϴ�. " << endl;
				system("pause");
			}
		}
		break;
	case 2:
		cout << "\n\n �ʼ� : '������' " << endl;
		cout << "\n ��Ʈ�� : ����� ����л��� ����� �ɷ��� ���� �Ǹ鼭 " << endl;
		cout << "           �Ͼ�� ��ǵ��� �ٷ� ��ȭ " << endl;
		cout << "\n                        �� �̰��� �����Դϱ�? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "��ġ")==0)
		{
			cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
			cout << " �� ������ ��Ʈ : ���ΰ��� �̸��� ��λ�Ű ��ġ�� �Դϴ�. " << endl;
			cout << "\n                        �� �̰��� �����Դϱ�? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "��ġ")==0)
			{
				cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			}
			else
			{
				cout << "\n Ʋ�Ƚ��ϴ�.. \n" << endl;
				cout << " ������ '��ġ' �Դϴ�. " << endl;
				system("pause");
			}
		}
		break;
	case 3:
		cout << "\n\n �ʼ� : '����������' " << endl;
		cout << "\n ��Ʈ�� : ���� ������ ������ �ı��ϸ鼭 �������� �پ��� �ϻ�� " << endl;
		cout << "           �ΰ��� �������� �׸� ��ȭ " << endl;
		cout << "\n                        �� �̰��� �����Դϱ�? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "�����ǰ���")==0)
		{
			cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
			cout << " �� ������ ��Ʈ : ���ΰ��� �̸��� ����, ��ī�� �Դϴ�." << endl;
			cout << "\n                        �� �̰��� �����Դϱ�? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "�����ǰ���")==0)
			{
				cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			}
			else
			{
				cout << "\n Ʋ�Ƚ��ϴ�.. \n" << endl;
				cout << " ������ '�����ǰ���' �Դϴ�. " << endl;
				system("pause");
			}
		}
		break;
	case 4:
		cout << "\n\n �ʼ� : '������' " << endl;
		cout << "\n ��Ʈ�� : �������� �Ǳ����� �����ϴ� �̾߱�" << endl;
		cout << "\n                        �� �̰��� �����Դϱ�? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "���ǽ�")==0)
		{
			cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
			cout << " �� ������ ��Ʈ : ����~ ����ī!! " << endl;
			cout << "\n                        �� �̰��� �����Դϱ�? : " ;
			cin >> userAnswer;

			if(strcmp(userAnswer, "���ǽ�")==0)
			{
				cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			}
			else
			{
				cout << "\n Ʋ�Ƚ��ϴ�.. \n" << endl;
				cout << " ������ '���ǽ�' �Դϴ�. " << endl;
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
		cout << "\n\n �ʼ� : '������������������' " << endl;
		cout << "\n ��Ʈ�� : ���ΰ��� �䳢�� ���󰡼� ����ϴ� �̾߱�" << endl;
		cout << "\n                        �� �̰��� �����Դϱ�? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "�̻��ѳ����Ǿٸ���")==0)
		{
			cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
			cout << " �� ������ ��Ʈ : : ���ΰ��� �̸��� �ٸ��� �Դϴ�. " << endl;
			cout << "\n                        �� �̰��� �����Դϱ�? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "�̻��ѳ����Ǿٸ���")==0)
			{
				cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			}
			else
			{
				cout << "\n Ʋ�Ƚ��ϴ�.. \n" << endl;
				cout << " ������ '�̻��ѳ����Ǿٸ���' �Դϴ�. " << endl;
				system("pause");
			}
		}
		break;
	case 2:
		cout << "\n\n �ʼ� : '����������������' " << endl;
		cout << "\n ��Ʈ�� : �Ҿƹ����� �ű��� ���� �� ������ �߰��߰�, �׷����� �Ͼ�� ��ǵ� " << endl;
		cout << "\n                        �� �̰��� �����Դϱ�? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "Ȳ�ݾ������°���")==0)
		{
			cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
			cout << " �� ������ ��Ʈ : ������ Ȳ�ݾ��� ���Ҵ�. " << endl;
			cout << "\n                        �� �̰��� �����Դϱ�? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "Ȳ�ݾ������°���")==0)
			{
				cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			}
			else
			{
				cout << "\n Ʋ�Ƚ��ϴ�.. \n" << endl;
				cout << " ������ 'Ȳ�ݾ������°���' �Դϴ�. " << endl;
				system("pause");
			}
		}
		break;
	case 3:
		cout << "\n\n �ʼ� : '��������������' " << endl;
		cout << "\n ��Ʈ�� : ���븦 ���ϱ� ���� ������ �̾߱� " << endl;
		cout << "\n                        �� �̰��� �����Դϱ�? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "�Ʊ����������")==0)
		{
			cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
			cout << " �� ������ ��Ʈ : ���� 3�κ�" << endl;
			cout << "\n                        �� �̰��� �����Դϱ�? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "�Ʊ����������")==0)
			{
				cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			}
			else
			{
				cout << "\n Ʋ�Ƚ��ϴ�.. \n" << endl;
				cout << " ������ '�Ʊ����������' �Դϴ�. " << endl;
				system("pause");
			}
		}
		break;
	case 4:
		cout << "\n\n �ʼ� : '��������' " << endl;
		cout << "\n ��Ʈ�� : ���밡 �ҳฦ ��Ƹ������ٰ� �����ϴ� �̾߱�" << endl;
		cout << "\n                        �� �̰��� �����Դϱ�? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "��������")==0)
		{
			cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
			cout << " �� ������ ��Ʈ : ���� " << endl;
			cout << "\n                        �� �̰��� �����Դϱ�? : " ;
			cin >> userAnswer;

			if(strcmp(userAnswer, "��������")==0)
			{
				cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			}
			else
			{
				cout << "\n Ʋ�Ƚ��ϴ�.. \n" << endl;
				cout << " ������ '��������' �Դϴ�. " << endl;
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
		cout << "\n\n         ���������������������������������������������������������������� " << endl;
		cout << "         ��                        �ʼ� : '��������'                   �� " << endl;
		cout << "         ��                                                            ��" << endl;
		cout << "         ����Ʈ�� : ������, �ٺ�, ����                                 ��" << endl;
		cout << "         ��                                                            �� " << endl;
		cout << "         ����������������������������������������������������������������" << endl;
		cout << "                        ����������������������������������" << endl;
		cout << "                        ����Music Play Number : 1004    ��" << endl;
		cout << "                        ���ر�ȸ 1ȸ ����               ��" << endl;
		cout << "                        ����������������������������������" << endl;
		cout << "\n                        �� �̰��� �����Դϱ�? : ";
		cin >> userAnswer;

		if(userAnswer, "1004")
		{
			// PlaySound(TEXT("music/HI SUHYUN.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
		}
		if(strcmp(userAnswer, "���´޶�")==0)
		{
			system("cls");
			cout << " \n\n\n\n             �ڡ�                                              �١� " << endl;
			cout << "             ��                                                  �� " << endl;
			cout << "                     �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			cout << "             ��                                                  �� " << endl;
			cout << "             �ڡ�                                              �١� \n\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
			system("pause");
			system("cls");
		}
		else
		{
			cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
			cout << " �� ������ ��Ʈ : : I Am Diffrent " << endl;
			cout << "\n                        �� �̰��� �����Դϱ�? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "���´޶�")==0)
			{
				system("cls");
				cout << " \n\n\n\n             �ڡ�                                              �١� " << endl;
				cout << "             ��                                                  �� " << endl;
				cout << "                     �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
				cout << "             ��                                                  �� " << endl;
				cout << "             �ڡ�                                              �١� \n\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
				system("pause");
				system("cls");
			}
			else
			{
				cout << "\n Ʋ�Ƚ��ϴ�.. \n" << endl;
				cout << " ������ '���´޶�' �Դϴ�. \n\n" << endl;
				system("pause");
				system("cls");
			}
		}
		break;
	case 2:
		cout << "\n\n         ���������������������������������������������������������������� " << endl;
		cout << "         ��                        �ʼ� : '������'                     �� " << endl;
		cout << "         ��                                                            ��" << endl;
		cout << "         ����Ʈ�� : �� �� ��� ��                                      ��" << endl;
		cout << "         ��                                                            �� " << endl;
		cout << "         ����������������������������������������������������������������" << endl;
		cout << "                        ����������������������������������" << endl;
		cout << "                        ����Music Play Number : 1004    ��" << endl;
		cout << "                        ���ر�ȸ 1ȸ ����               ��" << endl;
		cout << "                        ����������������������������������" << endl;
		cout << "\n                        �� �̰��� �����Դϱ�? : ";
		cin >> userAnswer;
			
		if(userAnswer, "1004")
		{
			// PlaySound(TEXT("music/EXID.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
		}
		if(strcmp(userAnswer, "���Ʒ�")==0)
		{
			system("cls");
			cout << " \n\n\n\n             �ڡ�                                              �١� " << endl;
			cout << "             ��                                                  �� " << endl;
			cout << "                     �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			cout << "             ��                                                  �� " << endl;
			cout << "             �ڡ�                                              �١� \n\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
			system("pause");
			system("cls");
		}
		else
		{
			cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
			cout << " �� ������ ��Ʈ : EXID " << endl;
			cout << "\n                        �� �̰��� �����Դϱ�? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "���Ʒ�")==0)
			{
				system("cls");
				cout << " \n\n\n\n             �ڡ�                                              �١� " << endl;
				cout << "             ��                                                  �� " << endl;
				cout << "                     �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
				cout << "             ��                                                  �� " << endl;
				cout << "             �ڡ�                                              �١� \n\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
				system("pause");
				system("cls");
			}
			else
			{
				cout << "\n Ʋ�Ƚ��ϴ�.. \n" << endl;
				cout << " ������ '���Ʒ�' �Դϴ�. \n\n" << endl;
				system("pause");
				system("cls");
			}
		}
		break;
	case 3:
		cout << "\n\n         ���������������������������������������������������������������� " << endl;
		cout << "         ��                        �ʼ� : '����������'                 �� " << endl;
		cout << "         ��                                                            ��" << endl;
		cout << "         ����Ʈ�� : ����Ʈ��                                           ��" << endl;
		cout << "         ��                                                            �� " << endl;
		cout << "         ����������������������������������������������������������������" << endl;
		cout << "                        ����������������������������������" << endl;
		cout << "                        ����Music Play Number : 1004    ��" << endl;
		cout << "                        ���ر�ȸ 1ȸ ����               ��" << endl;
		cout << "                        ����������������������������������" << endl;
		cout << "\n                        �� �̰��� �����Դϱ�? : ";
		cin >> userAnswer;
			
		if(userAnswer, "1004")
		{
			// PlaySound(TEXT("music/Postmen.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
		}
		if(strcmp(userAnswer, "����������")==0)
		{
			system("cls");
			cout << " \n\n\n\n             �ڡ�                                              �١� " << endl;
			cout << "             ��                                                  �� " << endl;
			cout << "                     �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			cout << "             ��                                                  �� " << endl;
			cout << "             �ڡ�                                              �١� \n\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
			system("pause");
			system("cls");
		}
		else
		{
			cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
			cout << " �� ������ ��Ʈ : ȫ�� ģ��" << endl;
			cout << "\n                        �� �̰��� �����Դϱ�? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "����������")==0)
			{
				system("cls");
				cout << " \n\n\n\n             �ڡ�                                              �١� " << endl;
				cout << "             ��                                                  �� " << endl;
				cout << "                     �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
				cout << "             ��                                                  �� " << endl;
				cout << "             �ڡ�                                              �١� \n\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
				system("pause");
				system("cls");
			}
			else
			{
				cout << "\n Ʋ�Ƚ��ϴ�.. \n" << endl;
				cout << " ������ '����������' �Դϴ�. \n\n" << endl;
				system("pause");
				system("cls");
			}
		}
		break;
	case 4:
		cout << "\n\n         ���������������������������������������������������������������� " << endl;
		cout << "         ��                        �ʼ� : '��������'                   �� " << endl;
		cout << "         ��                                                            ��" << endl;
		cout << "         ����Ʈ�� : �� ����Ѵٴ� �� ���غ��� ������                   ��" << endl;
		cout << "         ��        �ݺ��Ǵ� �ο� gotta go I say good bye               �� " << endl;
		cout << "         ��                                                            �� " << endl;
		cout << "         ����������������������������������������������������������������" << endl;
		cout << "                        ����������������������������������" << endl;
		cout << "                        ����Music Play Number : 1004    ��" << endl;
		cout << "                        ���ر�ȸ 1ȸ ����               ��" << endl;
		cout << "                        ����������������������������������" << endl;
		cout << "\n                        �� �̰��� �����Դϱ�? : ";
		cin >> userAnswer;
			
		if(userAnswer, "1004")
		{
			// PlaySound(TEXT("music/Ailee.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
		}
		if(strcmp(userAnswer, "�մ�����")==0)
		{
			system("cls");
			cout << " \n\n\n\n             �ڡ�                                              �١� " << endl;
			cout << "             ��                                                  �� " << endl;
			cout << "                     �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			cout << "             ��                                                  �� " << endl;
			cout << "             �ڡ�                                              �١� \n\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
			system("pause");
			system("cls");
		}
		else
		{
			cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
			cout << " �� ������ ��Ʈ : ���ϸ� " << endl;
			cout << "\n                        �� �̰��� �����Դϱ�? : " ;
			cin >> userAnswer;

			if(strcmp(userAnswer, "�մ�����")==0)
			{
				system("cls");
				cout << " \n\n\n\n             �ڡ�                                              �١� " << endl;
				cout << "             ��                                                  �� " << endl;
				cout << "                     �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
				cout << "             ��                                                  �� " << endl;
				cout << "             �ڡ�                                              �١� \n\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
				system("pause");
				system("cls");
			}
			else
			{
				cout << "\n Ʋ�Ƚ��ϴ�.. \n" << endl;
				cout << " ������ '�մ�����' �Դϴ�. \n\n" << endl;
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
		cout << "\n\n �ʼ� : '������������' " << endl;
		cout << "\n ��Ʈ�� : ����ƽī��" << endl;
		cout << "\n                        �� �̰��� �����Դϱ�? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "��Ʈī�Ϲ�")==0)
		{
			cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
			cout << " �� ������ ��Ʈ : : ������ ���� " << endl;
			cout << "\n                        �� �̰��� �����Դϱ�? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "��Ʈī�Ϲ�")==0)
			{
				cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			}
			else
			{
				cout << "\n Ʋ�Ƚ��ϴ�.. \n" << endl;
				cout << " ������ '��Ʈī�Ϲ�' �Դϴ�. " << endl;
				system("pause");
			}
		}
		break;
	case 2:
		cout << "\n\n �ʼ� : '��������' " << endl;
		cout << "\n ��Ʈ�� : �ι�° �� " << endl;
		cout << "\n                        �� �̰��� �����Դϱ�? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "��������")==0)
		{
			cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
			cout << " �� ������ ��Ʈ : ���̿ø� �� " << endl;
			cout << "\n                        �� �̰��� �����Դϱ�? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "��������")==0)
			{
				cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			}
			else
			{
				cout << "\n Ʋ�Ƚ��ϴ�.. \n" << endl;
				cout << " ������ '��������' �Դϴ�. " << endl;
				system("pause");
			}
		}
		break;
	case 3:
		cout << "\n\n �ʼ� : '����������' " << endl;
		cout << "\n ��Ʈ�� : �̷縶 " << endl;
		cout << "\n                        �� �̰��� �����Դϱ�? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "Ű��������")==0)
		{
			cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
			cout << " �� ������ ��Ʈ : ����³� Ű��" << endl;
			cout << "\n                        �� �̰��� �����Դϱ�? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "Ű��������")==0)
			{
				cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			}
			else
			{
				cout << "\n Ʋ�Ƚ��ϴ�.. \n" << endl;
				cout << " ������ 'Ű��������' �Դϴ�. " << endl;
				system("pause");
			}
		}
		break;
	case 4:
		cout << "\n\n �ʼ� : '����������������' " << endl;
		cout << "\n ��Ʈ�� : Elizabeth Bright" << endl;
		cout << "\n                        �� �̰��� �����Դϱ�? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "����������̶�")==0)
		{
			cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
			cout << " �� ������ ��Ʈ : ���� ġ������ ���Ҹ� " << endl;
			cout << "\n                        �� �̰��� �����Դϱ�? : " ;
			cin >> userAnswer;

			if(strcmp(userAnswer, "����������̶�")==0)
			{
				cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			}
			else
			{
				cout << "\n Ʋ�Ƚ��ϴ�.. \n" << endl;
				cout << " ������ '����������̶�' �Դϴ�. " << endl;
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
		cout << "\n\n �ʼ� : '����' " << endl;
		cout << "\n ��Ʈ�� : ���亥" << endl;
		cout << "\n                        �� �̰��� �����Դϱ�? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "���")==0)
		{
			cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
			cout << " �� ������ ��Ʈ : : ���亥 ����� 5�� " << endl;
			cout << "\n                        �� �̰��� �����Դϱ�? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "���")==0)
			{
				cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			}
			else
			{
				cout << "\n Ʋ�Ƚ��ϴ�.. \n" << endl;
				cout << " ������ '���' �Դϴ�. " << endl;
				system("pause");
			}
		}
		break;
	case 2:
		cout << "\n\n �ʼ� : '����������' " << endl;
		cout << "\n ��Ʈ�� : ���亥 " << endl;
		cout << "\n                        �� �̰��� �����Դϱ�? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "�����ҳ�Ÿ")==0)
		{
			cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
			cout << " �� ������ ��Ʈ : Moonlight Sonata " << endl;
			cout << "\n                        �� �̰��� �����Դϱ�? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "�����ҳ�Ÿ")==0)
			{
				cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			}
			else
			{
				cout << "\n Ʋ�Ƚ��ϴ�.. \n" << endl;
				cout << " ������ '�����ҳ�Ÿ' �Դϴ�. " << endl;
				system("pause");
			}
		}
		break;
	case 3:
		cout << "\n\n �ʼ� : '����������' " << endl;
		cout << "\n ��Ʈ�� : ���� " << endl;
		cout << "\n                        �� �̰��� �����Դϱ�? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "ȯ�������")==0)
		{
			cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
			cout << " �� ������ ��Ʈ : ���� ����� 4��" << endl;
			cout << "\n                        �� �̰��� �����Դϱ�? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "ȯ�������")==0)
			{
				cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			}
			else
			{
				cout << "\n Ʋ�Ƚ��ϴ�.. \n" << endl;
				cout << " ������ 'ȯ�������' �Դϴ�. " << endl;
				system("pause");
			}
		}
		break;
	case 4:
		cout << "\n\n �ʼ� : '����' " << endl;
		cout << "\n ��Ʈ�� : ���� " << endl;
		cout << "\n                        �� �̰��� �����Դϱ�? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "���")==0)
		{
			cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
			cout << " �� ������ ��Ʈ : ��ȭ ���Ҽ����º�� " << endl;
			cout << "\n                        �� �̰��� �����Դϱ�? : " ;
			cin >> userAnswer;

			if(strcmp(userAnswer, "���")==0)
			{
				cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			}
			else
			{
				cout << "\n Ʋ�Ƚ��ϴ�.. \n" << endl;
				cout << " ������ '���' �Դϴ�. " << endl;
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
		cout << "\n\n �ʼ� : '����' " << endl;
		cout << "\n ��Ʈ�� : ���ֵ��٢ٵ��ֵ��٢� �������ٵ���" << endl;
		cout << "\n                        �� �̰��� �����Դϱ�? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "����")==0)
		{
			cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
			cout << " �� ������ ��Ʈ : : David Guetta, Showtek, ħ�� " << endl;
			cout << "\n                        �� �̰��� �����Դϱ�? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "����")==0)
			{
				cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			}
			else
			{
				cout << "\n Ʋ�Ƚ��ϴ�.. \n" << endl;
				cout << " ������ '����' �Դϴ�. " << endl;
				system("pause");
			}
		}
		break;
	case 2:
		cout << "\n\n �ʼ� : '����������' " << endl;
		cout << "\n ��Ʈ�� : �����ֺ���ٽ����ֺ���� ���á��ýá鵾Ʈ�� " << endl;
		cout << "\n                        �� �̰��� �����Դϱ�? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "��������ġ")==0)
		{
			cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
			cout << " �� ������ ��Ʈ : DJ Gollum, ħ�븦 ������ " << endl;
			cout << "\n                        �� �̰��� �����Դϱ�? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "��������ġ")==0)
			{
				cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			}
			else
			{
				cout << "\n Ʋ�Ƚ��ϴ�.. \n" << endl;
				cout << " ������ '��������ġ' �Դϴ�. " << endl;
				system("pause");
			}
		}
		break;
	case 3:
		cout << "\n\n �ʼ� : '����������������' " << endl;
		cout << "\n ��Ʈ�� : ��������ֿ���ٵ�ֿ�������ֿ���ٵ�ֿ�������� �߹̹ٿ " << endl;
		cout << "           �� �� ���� �� �� ���� �Ӣ� " << endl;
		cout << "\n                        �� �̰��� �����Դϱ�? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "�ٿ���׷��̼�")==0)
		{
			cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
			cout << " �� ������ ��Ʈ : ���븦 �پ�Ѵ�" << endl;
			cout << "\n                        �� �̰��� �����Դϱ�? : " ;
			cin >> userAnswer;
				
			if(strcmp(userAnswer, "�ٿ���׷��̼�")==0)
			{
				cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			}
			else
			{
				cout << "\n Ʋ�Ƚ��ϴ�.. \n" << endl;
				cout << " ������ '�ٿ���׷��̼�' �Դϴ�. " << endl;
				system("pause");
			}
		}
		break;
	case 4:
		cout << "\n\n �ʼ� : '������' " << endl;
		cout << "\n ��Ʈ�� : ������ ������ ���� �¸� ����" << endl;
		cout << "           ������ ������ ���� ���� ����" << endl;
		cout << "\n                        �� �̰��� �����Դϱ�? : ";
		cin >> userAnswer;
			
		if(strcmp(userAnswer, "�̹̹�")==0)
		{
			cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			system("pause");
		}
		else
		{
			cout << "\n Ʋ�Ƚ��ϴ�! \n" << endl;
			cout << " �� ������ ��Ʈ : Serebro, MeMeME " << endl;
			cout << "\n                        �� �̰��� �����Դϱ�? : " ;
			cin >> userAnswer;

			if(strcmp(userAnswer, "�̹̹�")==0)
			{
				cout << " �����Դϴ�! ������ " << userAnswer << " �Դϴ�. " << endl;
			}
			else
			{
				cout << "\n Ʋ�Ƚ��ϴ�.. \n" << endl;
				cout << " ������ '�̹̹�' �Դϴ�. " << endl;
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
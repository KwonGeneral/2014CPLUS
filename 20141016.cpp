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
	int first_Select=0;  //ó���� ������ 0����
	int second_Select=0;  //�ι�°�� ������ 0����
	int menu=0;   //�޴��� ���� 0����
	int russianRoulette_Number=0; //���þ� �귿 �ѹ��� 0����
	int dice_Gamble_Number=0; //�ֻ��� ������ ������ 0����
	long batting_Money=0; //���ñݾ��� 0���� ����
	long own_Money=0; //�������� 0���� ����
	long borrow_Money=200000000;  //������ 2õ����
	int count=1; //ī��Ʈ�� 1���� ����
	int rate=0;  //������ 0���� ����
	int dice[3] = {0, 0, 0}; //�ֻ����� �迭�� 0 0 0���� �Ѵ�

	srand((unsigned)time(0));
	/*
	for (int i = 0; i < 3; i++)
	{
		dice[i] = (rand()%6)+1;
	}
	���⼭ �Ⱦ�
	*/
	FIRST: //ù��°�� ���ư������� go to ���� ����Ҽ��ִ� ��Ŀ
	first_Menu(); //ù��° �޴� ���
	cin >> first_Select; //first_Select�� ����
	system("cls"); //�ý��� ����

	switch(first_Select)
	{
	case 1: //1�� ��������� ���丮�� ������ ����
		story();
		system("pause");
		system("cls");
		break;
	case 2: //2�� ��������� �ؽ�Ʈ ����Ʈ�� �ҷ����� ����
		textEdit();
		system("cls");
		break;
	case 3://����
		exit(0);
		break;
	default: //���� �ٸ����ڳ� ���ڸ� �Է��Ͽ������ �����޽��� ���
		cout << "\n �ؿ���...! �ٽ� �Է��Ͻÿ�. " << endl;
		goto FIRST;
		break;
	}

	RETRY:  //goto������ ��õ��� �ҷ����°�
	do{ //���øӴϴ� 0���� �����ǰ� second_Menu�� ����� second_Select�� �Է¹ް� ����
		cout << " \n		�� " << borrow_Money << " �� \n" << endl;
		cout << "		������ " << own_Money << " �� \n" << endl;
		batting_Money=0;
		second_Menu();
		cin >> second_Select;
		system("cls");

	switch(second_Select) //�ι�° ������ �Ͽ��� ���
	{
	case 1: //1���� ������ batting_Money�� �Է¹���
		dice_Rule();
		system("pause");
		system("cls");

		batting_Dice: //go to ��
		cout << " \n\n\n " << endl;
		batting();
		cin >> batting_Money;
								;
		if(own_Money >= batting_Money) //�������� ���øӴ� �Է¹��� ���� ���Ͽ� ���� ���øӴϰ� ���������� ������� ���������� ���øӴϸ� ���� �������� ������
		{
			own_Money -= batting_Money;
			cout << " \n\n " << endl;
			system("pause");
			system("cls");
		}
		else //���� ���������� ���øӴϰ� �� ���ٸ� �����޽����� batting_Dice�� �ٲ�
		{
			cout << "\n �����ݾ��� �ʰ��Ͽ����ϴ�. " << endl;
			cout << " �ٽ��Է��Ͻʽÿ�. \n" << endl;
			system("pause");
			system("cls");
			goto batting_Dice;
		}

		//print_dice(dice);
		//batting_Money *= jugge_dice(dice);

		do{ //�ι�° �ֻ��� ���� ����� dice_Gamble_Number�� �Է¹����� ���� 2�� ������ ���������� ���øӴϸ� ���ϰ� �������� ������ �ϰ� ����
		dice_Rule_sub();
		cin >> dice_Gamble_Number;
		if(dice_Gamble_Number == 2)
		{
			own_Money += batting_Money;
			system("cls");
			break;
		}
		random(dice); //���� �ֻ����� �ҷ��´�
		print_dice(dice); //�ֻ����� ����ϴ� �޴�
		own_Money += batting_Money * jugge_dice(dice); //���øӴϿ� jugge_dice[dice]�� ���ϰ� ���������� ���ѵڿ� ������ ������ �ϰ� ����

		system("pause");
		system("cls");
		}while(dice_Gamble_Number != 1); //1�� �ٸ���� �극��ũ
		break;
	case 2:

		roulette_Rule(); //�귿 ���� ����ϰ� ����
		system("pause");
		system("cls");

		batting_Roulette: //go to���� ���� ���� �귿
		cout << " \n\n\n " << endl;
		batting();
		cin >> batting_Money; //���øӴϸ� �Է¹���
		if(own_Money >= batting_Money) //�������� ���øӴϸ� ���ϴ� ����
		{
			own_Money -= batting_Money;
			cout << " \n\n " << endl;
			system("pause");
			system("cls");
		}
		else
		{
			cout << "\n �����ݾ��� �ʰ��Ͽ����ϴ�. " << endl;
			cout << " �ٽ��Է��Ͻʽÿ�. \n" << endl;
			system("pause");
			system("cls");
			goto batting_Roulette;
		}

		do{
			cout << "\n\n �������� �Ѿ� �߻� �� : " << count-1 << " �������� " << endl; //ī��Ʈ�� �ϳ��� �پ��
			russianRoulette(); //���þ� �귿�� �ҷ��´�
			cin >> russianRoulette_Number; //���þ� �귿 �ѹ��� �Է¹���
			if(russianRoulette_Number == 2) //���� 2�� �Է������� ī��Ʈ�� 1�� �Ҹ���6���� ���� 2�� �Ǿ� ���øӴ� ���ϱ� ������ �ѵ� �������� ���ϰ� ������ ������
			{
				count = 1;
				bullet=6;
				shot=2;
				own_Money += batting_Money*rate;
				system("cls");
				break;
			}
			rate = 1;
			for(int i = 0; i<count; i++) //i�� 0�̰� ī��Ʈ���� �����鼭 i�� 1�� ���Ѵ�
			{
				rate *= 2; //������ 2����ϰ� ���� ������
			}
			if(is_dead(bullet,shot)) //�׾�����츦 ���
			{
				count = 1; //ī��Ʈ�� 1
				bullet=6; //�Ҹ����� 6
				shot=2; //���� 2�߷� ������

				cout << "\n\n ����ź�� �߻� �Ǿ����ϴ�. \n" << endl;
				cout << " �� ���ӿ��� �й��ϼ̽��ϴ�. " << endl;
				system("pause");
				system("cls");
				cout << " �������� " << batting_Money << "�� ��ŭ �Ҿ���Ƚ��ϴ�. " << endl; //���øӴϸ�ŭ ���� �Ұ� RETRY�޴��� ����
				goto RETRY;
			}
			else //����ź�� �߻���� �������
			{
				cout << "\n\n ����ź�� �߻� ���� �ʾҽ��ϴ�. \n" << endl;
				cout << " ������ �����մϴ�. " << endl;

				cout << " ���� : " << batting_Money*rate << " �� \n" << endl;
			}
			count++; //ī��Ʈ�� 1�� �ö󰡰�
			bullet--; //�Ҹ����� 1�� �پ���
			if(count == 5) //���� ī��Ʈ�� 5�϶� ī��Ʈ�� 1�� �Ҹ�����6���� ���� 2�� ������
			{
			count = 1;
			bullet=6;
			shot=2;

			system("cls");
			message(); //�޽��� ���
			cout << " ���� : " << batting_Money*rate << " �� \n" << endl; //���øӴϿ� ������ ���ϰ� ���ݰ� �Բ� ���
			own_Money += batting_Money*rate; //���øӴϿ� ������ ���ϰ� �������� ���ѵ� ������ ������
			system("pause");
			system("cls");
			break;
			}
			system("pause");
			system("cls");
		}while(russianRoulette_Number != 2);
		break;
	case 3:  //������ �޴�
		borrow_Money -= own_Money;  //���������� �������� ���� ������ ������
		cout << " ���� " << own_Money << "�� ��ŭ �����Ͽ����ϴ�. " << endl; //���������� �����Ѱ� ���
		own_Money=0; //�������� 0������ ������
		break;
	case 4: //�� ������ �޴�
		long loan=0; //loan�� 0
		long loan_Money=0; //loan_Money�� 0

		cout << "\n �ȳ��ϼ���. �ʹ����࿡ ���Ű��� ȯ���մϴ�. " << endl;
		cout << " ���� ������ 60% ���ڰ� ����ϴ�. " << endl;
		cout << " ������ �Ͻðڽ��ϱ�? \n\n" << endl;
		cout << "   1. ��(Yes) " << endl;
		cout << "   2. �ƴϿ�(No) \n" << endl;
		cout << "   �ش����ѵ��� 500���� �Դϴ�. " << endl;
		cout << "     1�� 2�� ������ ���ڸ� �Է��Ͻø� ���� �޴��� ���ư��ϴ�. \n" << endl;
		cout << " �����Ͻÿ� : ";
		cin >> loan; //0���� �Է¹��������� ������
		system("cls");

		if(loan == 1) //1�� ��������
		{
			loan_limit: //go to ���� ����
			cout << "\n �󸶸� �����Ͻðڽ��ϱ�? \n" << endl;
			cout << " �ݾ� : ";
			cin >> loan_Money; //loan_Money�� �Է¹���
			system("cls");
			if(loan_Money <= 5000000) //500�������� ���ų� ������ üũ��
			{
			cout << "\n �������� " << loan_Money << "�� ��ŭ �����Ͽ����ϴ�. \n" << endl;
			cout << " ���� " << loan_Money*0.6 << "�� ��ŭ �����Ͽ����ϴ�. \n" << endl; //loan_Money���� 60%�� ���ϰ� ���� �� ����
			own_Money += loan_Money; //���������� loan_Money�� ���ϰ� ������ ������
			borrow_Money += loan_Money*0.6+own_Money; //�������� loan_Money * 60% + own_Money�� ����ϰ� borrow_Money�� ���ϰ� borrow_Money������
			}
			else //500������ �ʰ��Ͽ������ loan_limit���� �̵�
			{
				cout << " �����ѵ� 5000000(500��)���� �ʰ��Ͽ����ϴ�. " << endl;
				cout << " �ٽ��Է��Ͻʽÿ�. " << endl;
				goto loan_limit;
			}
			break;
		}
		if(loan == 2) //2�� ��������� �극��ũ
		{
			system("cls");
			break;
		}
		}}while(second_Select != 5);

	return 0;
}

void first_Menu() //ó�� �����������α׷��� ���ڰ����� ������ �����ִ°�
{
	cout << "\n\n �ޡߡޡߡޡߡޡߡޡߡޡߡޡߡޡߡޡߡޡߡޡߡޡߡޡߡޡߡޡߡޡߡޡߡޡߡޡߡ� ";
	cout << " �ߡ�                                                                      �ޡ� ";
	cout << " �ޡ�                       1. ���� ���� (�� ȯ��)                         �ߡ� ";
	cout << " �ߡ�                       2. �������� ���α׷�                           �ޡ� ";
	cout << " �ޡ�                       3. ����(Exit)                                  �ߡ� ";
	cout << " �ޡ�                                                                      �ߡ� ";
	cout << " �ߡޡߡޡߡޡߡޡߡޡߡޡߡޡߡޡߡޡߡޡߡޡߡޡߡޡߡޡߡޡߡޡߡޡߡޡߡޡ� \n\n" << endl;
	cout << " �� Select : ";
}

void second_Menu() //2���� �������� ���ڰ������� �Ѿ�� ������ ��
{
	cout << " ������������������������������������������������������������������������������ ";
	cout << " ����                      1. ģġ�� (�ֻ��� ����)                         ���� ";
	cout << " ����                      2. ���þȷ귿                                   ���� ";
	cout << " ����                      3. �� ȯ�� (���������� �� ����)                 ���� ";
	cout << " ����                      4. ����(60%����)                                ���� ";
	cout << " ����                      5. ����(Exit)                                   ���� ";
	cout << " ������������������������������������������������������������������������������ \n\n" << endl;
	cout << " �� Select : ";
}

void story() //���丮�� §��
{
	cout << "                               <Story>                              " << endl;
	cout << "\n 26���� ���ΰ��� ������ ���ϰ� �������� �Ƹ�����Ʈ�� ������ �ϸ鼭 " << endl;
	cout << " �Ϸ��Ϸ� �游�� ��Ȱ�� ������ �ִ�. " << endl;
	cout << "\n �׷��� ��� ��, ���ΰ����� �Ǵ�����ȸ�� ������ �ֹμ���� ���ڰ� ��Ÿ����.  " << endl;
	cout << " ���ڴ� ���ΰ����� ģ���� ���� ��ä���� �������̶�� ������ ģ����� " << endl;
	cout << " ���� ������� ������ �Ѵ�. " << endl;
	cout << "\n ���� ���� ���ڰ� �׿��� 2����̶�� ������� ��Ǯ�� ������ " << endl;
	cout << " ���ڴ¡� �׺�(Gamble)�� ���� �� �̻��� ū ���� �տ� �ִ� ��ȸ�� �ִ١� " << endl;
	cout << " ��� �����ϰ� �ӻ��δ�. " << endl;
	cout << "\n �� �ð� ��, ������ �������� ����� ũ����� �ö� ������ " << endl;
	cout << " '�׺�(Gamble)'�� �����ϴµ��� \n" << endl;
}

void dice_Rule() //�ֻ��� ������ ��
{
	cout << "\n\n �ǢʢȢɢǢʢȢɢǢʢȢɢǢʢȢɢǷ� ����ʢȢɢǢʢȢɢǢʢȢɢǢʢȢɢǢ� \n" << endl;
	cout << " ģġ�� �׺� ��(Rule) \n\n" << endl;
	cout << "\n �½ð��(������) - 4, 5, 6�� ���� ���ÿ� ������ ��, " << endl;
	cout << " ���� ����� ���ñ��� 2���� ���� �޴´�. " << endl;
	cout << " �¾ƶ��(���髷) - ���ÿ� 3���� ���� ���� ������ ��, " << endl;
	cout << " ���� ����� ���ñ��� 3���� ���� �޴´�. " << endl;
	cout << " �����Ĺ�(�ҫի�) - 1, 2, 3�� ���� ���ÿ� ������ ��, " << endl;
	cout << " ���ñݾ��� 4�踦 �ްԵȴ�. " << endl;
	cout << " ��������(�ԫ󫾫�) - 1, 1, 1�� ���ÿ� ������ ��, " << endl;
	cout << " ���ñ��� 5�踦 �ް� �ȴ�. " << endl;
	cout << "\n �ǢʢȢɢǢʢȢɢǢʢȢɢǢʢȢɢǷ� ����ʢȢɢǢʢȢɢǢʢȢɢǢʢȢɢǢ� \n" << endl;
}

void dice_Rule_sub() //�ι�°�� �����ִ� �ֻ��������� ��� �����°�
{
	cout << "\n �½ð��(������) - 4, 5, 6�� ���� ���ÿ� ������ ��, " << endl;
	cout << " ���� ����� ���ñ��� 2���� ���� �޴´�. " << endl;
	cout << " �¾ƶ��(���髷) - ���ÿ� 3���� ���� ���� ������ ��, " << endl;
	cout << " ���� ����� ���ñ��� 3���� ���� �޴´�. " << endl;
	cout << " �����Ĺ�(�ҫի�) - 1, 2, 3�� ���� ���ÿ� ������ ��, " << endl;
	cout << " ���ñݾ��� 4�踦 �ްԵȴ�. " << endl;
	cout << " ��������(�ԫ󫾫�) - 1, 1, 1�� ���ÿ� ������ ��, " << endl;
	cout << " ���ñ��� 5�踦 �ް� �ȴ�. \n\n" << endl;

	cout << " ��     �������� ����ֽʽÿ�      �� " << endl;
	cout << " ��                                �� " << endl;
	cout << " ��  1. �ֻ��� ������              �� " << endl;
	cout << " ��  2. ����(���� �޴��� ���ư���) �� \n" << endl;
	cout << "    �� Select : ";
}

/*
int dice_Gamble(int my_dice[])
{
	print_dice(my_dice);

	return 0;
}
�뾵��
*/

void print_dice(int temp_dice[]) //�ֻ��� ���� ǥ�� temp_dice[]���� �޾ƿ��� ���
{
	cout << "\n";
	 for (int i = 0; i < 3; i++)
	 {
		switch (temp_dice[i])
		{
      case 1:
		  cout<<" �������� "<<endl;
		  cout<<" �������� "<<endl;
		  cout<<" �������� "<<endl;
		  cout<<" �������� "<<endl;
		  cout<<" �������� "<<endl;
		  cout<<" �������� "<<endl;
		  cout<<" �������� \n"<<endl;
         break;
      case 2:
		  cout<<" �������� "<<endl;
		  cout<<" �������� "<<endl;
		  cout<<" �������� "<<endl;
		  cout<<" �������� "<<endl;
		  cout<<" �������� "<<endl;
		  cout<<" �������� "<<endl;
		  cout<<" �������� \n"<<endl;
         break;
      case 3:
		  cout<<" �������� "<<endl;
		  cout<<" �������� "<<endl;
		  cout<<" �������� "<<endl;
		  cout<<" �������� "<<endl;
		  cout<<" �������� "<<endl;
		  cout<<" �������� "<<endl;
		  cout<<" �������� \n"<<endl;
         break;
      case 4:
		  cout<<" �������� "<<endl;
		  cout<<" �������� "<<endl;
		  cout<<" �������� "<<endl;
		  cout<<" �������� "<<endl;
		  cout<<" �������� "<<endl;
		  cout<<" �������� "<<endl;
		  cout<<" �������� \n"<<endl;
         break;
      case 5:
		  cout<<" �������� "<<endl;
		  cout<<" �������� "<<endl;
		  cout<<" �������� "<<endl;
		  cout<<" �������� "<<endl;
		  cout<<" �������� "<<endl;
		  cout<<" �������� "<<endl;
		  cout<<" �������� \n"<<endl;
         break;
      case 6:
		  cout<<" �������� "<<endl;
		  cout<<" �������� "<<endl;
		  cout<<" �������� "<<endl;
		  cout<<" �������� "<<endl;
		  cout<<" �������� "<<endl;
		  cout<<" �������� "<<endl;
		  cout<<" �������� \n"<<endl;
		  break;
      default:
         break;
      }
   }
}

void roulette_Rule() //�귿�� ��
{
	cout << " \n ȸ���� ���߱���(6��)�� 2���� �Ѿ˸� �����ϰ�, " << endl;
	cout << "  �Ӹ��� ���� �ܴ��� ��Ƽ踦 ���� ����� �� �����̴�. \n" << endl;
	cout << "  �ؿ��⼭�� ��ź�� �ƴ� ����ź�� ����Ѵ�. " << endl;
	cout << "    ����ź�� �߻�Ǹ� �й��ϰ� ���� �Ҵ� �����̴�. \n" << endl;
}

void russianRoulette() //���þ� �귿�� �޴�
{

	cout << "\n �� ���þȷ귿(russianRoulette) �׺��� �����մϴ�. ��" << endl;
	cout << " ȸ���� ���߱���(6��)�� ����ִ� �Ѿ��� ���� 2�� �Դϴ�. " << endl;
	cout << " �ذ���ź �߻�Ȯ�� -> ù �� 33%, �� ��° 40%, �� ��° 50%, �� ��° 66% " << endl;
	cout << " �������� ����ֽʽÿ�. \n\n" << endl;
	cout << " 1. �߻� ��" << " ����ź �߻�Ȯ�� : " << (shot/bullet)*100 << endl; // Ȯ�� �߰�
	cout << " 2. �ߴ�(���� �޴��� ���ư���) " << endl;
	cout << " �� 1�� 2�� �ƴ� ���ڸ� ������ '���� �߻�' �˴ϴ�. \n" << endl;
	cout << " �� Select : ";
}

void batting() //�����Ҷ� ���� ��
{
	cout << " �ع����ѵ��� 500���� �Դϴ�. " << endl;
	cout << " ���ñݾ��� �Է��Ͻʽÿ� : ";
}

void message() //�޽���
{
	cout << "\n\n �١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١� " << endl;
	cout << " �ڡ�          ���þȷ귿(russianRoulette) �׺��� �������ϴ�.   �ڡ� " << endl;
	cout << " �١�          ���ݾ��� 16�踦 ȹ���Ͽ����ϴ�.                �١� " << endl;
	cout << " �ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ� \n\n" << endl;
}

void dyingmessage() //�׾������ �޽���
{
	cout << "\n\n ����ź�� �߻� �Ǿ����ϴ�. \n" << endl;
	cout << " �� ���ӿ��� �й��ϼ̽��ϴ�. " << endl;
	cout << " �� ���ñݾ��� ���� ���Ե˴ϴ�. " << endl;

	cout << "\n\n ����ź�� �߻� ���� �ʾҽ��ϴ�. \n" << endl;
	cout << " ������ �����մϴ�. " << endl;
}

bool is_dead(int bullet, int shoot) //�Ҹ��� ������ ������ �����ϴ� ��
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

int jugge_dice(int my_dice[]) //my_dice[]���� �޾ƿͼ� 0��1�� �ļ� ������ �غ��ڿ� ���ϰ����� dice_judgement�� ��� �̶� x�� my_dice[0]���� 1������ ������
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
******�ؽ�Ʈ�� �ҷ����ų� �����ִ� ���α׷��Դϴ�.********
     ���α׷��� Ű�� ���ÿ� �����ֽø�˴ϴ�.
**********************************************************
*/

void textEdit() //�ؽ�Ʈ���������� ����
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
			cout<<"�����ϰڽ��ϴ�."<<endl;
			system("pause");
			exit(0);
		}
		else
		{
			cout<<"�ùٸ� �Է°��� �Է��� �ּ���."<<endl;
			system("cls");
		}
	}while(selected!= 3);
}

void editMenu() //�ؽ�Ʈ ������ �޴�
{
	cout<<"********** �� �� **********"<<endl;
	cout<<"1.�ؽ�Ʈ ���� ����         "<<endl;
	cout<<"2.�ؽ�Ʈ ��ġ��            "<<endl;
	cout<<"3.����                     "<<endl;
	cout<<"***************************"<<endl;

}

void inPut() //�ҷ��� �ؽ�Ʈ�� ������ �Է¹޾� name�� �����ϰ� name�� ����� ������ �ҷ�����
{
	string str;
	string name;
	cout<<"�ҷ��� �ؽ�Ʈ�� ������ �����ּ���.(��:sample.txt) :"<<endl;
	cin>>name;
	ifstream fin;
	fin.open(name);
	while(fin>>str)
	{
		cout<<str<<endl;
	}
	system("pause");
}

void united() //�ؽ�Ʈ�� ��ġ�� ���� lineNumber���� ������ ������ ���ϰ� name���� �̸��� �޾Ƽ� ������ ���ϸ� ��ħ
{
	fstream f2;
	string str;
	string name;
	string newfiletxt="";
	int lineNumber;

	cout<<"��ġ�⸦ ���ϴ� �ؽ�Ʈ������ ���� �����ּ���. :";
	cin>>lineNumber;
	cout<<"��ġ���� �ؽ�Ʈ������ ������ �����ּ���.(��:sample.txt) :"<<endl;

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

void random(int r_dice[]) //r_dice[]�� ������ ����� ����
{
	for (int i = 0; i < 3; i++)
	{
		r_dice[i] = (rand()%6)+1;
	}

}
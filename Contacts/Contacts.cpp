#include<iostream>
using namespace std;
#include<string>
#define MAX 1000

//设计联系人结构体
struct Person
{
	string m_Name;
	int m_Sex;
	int m_Age;
	string m_Phone;
	string m_Addr;
};
//设计通讯录的结构体
struct Addressbooks 
{
	struct Person personArray[MAX];
	int m_Size;

};
//1, 添加联系人
void addPerson(Addressbooks* abs)
{
	if (abs->m_Size >= MAX)
	{
		cout << "通讯录已满, 无法添加!" << endl;
		return;
	}
	else
	{
		//添加具体联系人
		string name;
		cout << "请输入姓名: " << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		//性别
		int sex = 0;
		cout << "请输入性别: " << endl;
		cout << "1----男  " << endl;
		cout << "2----女  " << endl;
		while (1)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			else
		}
		

	}
}
//菜单页面函数
void showMenu()
{
	cout << "****************************" << endl;
	cout << "****** 1,添加联系人 ********" << endl;
	cout << "****** 2,显示联系人 ********" << endl;
	cout << "****** 3,删除联系人 ********" << endl;
	cout << "****** 4,查找联系人 ********" << endl;
	cout << "****** 5,修改联系人 ********" << endl;
	cout << "****** 6,清空联系人 ********" << endl;
	cout << "****** 0,退出通讯录 ********" << endl;
	cout << "****************************" << endl;
}

int main()
{
	//创建通讯录结构体变量
	Addressbooks abs;
	//初始化通讯录中当前人员个数
	abs.m_Size = 0;
	//显示开始菜单调用	
	int select = 0;
	
	while (1)
	{
		showMenu(); 
		cin >> select; 
		switch (select)
			{
			case 1://1,添加联系人
				addPerson(&abs);
				break;
			case 2://2,显示联系人
				break;
			case 3://3,删除联系人
				break;
			case 4://4,查找联系人
				break;
			case 5://5,修改联系人
				break;
			case 6://6,清空联系人
				break;
			case 0://0,退出通讯录
				cout << "欢迎下次使用" << endl;
				system("pause");
				return 0;
				break;
			}
	
	}
	

	system("pause");
	return 0;
}
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <bitset>
#include <iomanip>
using namespace std;
void checkthechar(const ifstream& myreadfile, ofstream& mywritefile, char half2[], char fin[], int loc, int ct, int& flag)
{
	string z;
	int ct2 = 0;
	string line;
	int mainct = ct;
	while (getline(const_cast<ifstream&>(myreadfile), line))
	{
		z = line;
		char is[10] = {};
		for (int i = 0; i < z.length(); i++)
		{
			is[i] = z[i];
		}
		cout << "half2: " << half2 << endl;
		if (z.length() >= 3 && z[0] == half2[0] && z[1] == half2[1] && z[2] == half2[2])
		{
			ct2 = ct;
			flag = 1;
			break;
		}
		ct++;
	}
	if (flag == 0)
	{
		cout << "undeclared";
	}
	if (ct < 10)
	{
		fin[1] = '0' + loc;
		fin[2] = '0';
		fin[3] = '0' + ct2;
	}
	else
	{
		fin[1] = '0' + loc;
		fin[2] = '0' + ct2;
	}
	cout << "fin[1]: " << fin[1] << "0" << fin[2] << endl;
	for (int i = 0; i < 4; i++)
	{
		cout << fin[i];
	}
}
void check(char temp1[], int length, char fin[], int& loc, int& ct, int& flag, ifstream& myreadfile, ofstream& mywritefile)
{
	char half1[3] = {}; // the chars of the instrctions 
	char half2[3] = {}; //the numbers or char of the input of instruction
	char bit[1] = {}; //direct or not bit 
	int k = 0;
	int c = 0;
	int p = 0;
	int noneed = 0;
	int count = ct;
	for (int i = 0; i < length; i++)
	{
		if (i < 3)
		{
			half1[i] = temp1[i];
		}
		if (i > 3 && i <= 6)
		{
			half2[p] = temp1[i];
			p++;
		}
		if (i == 7)
		{
			bit[0] = temp1[i];
		}
	}
	if (half1[k] == 'O' && half1[k + 1] == 'R' && half1[k + 2] == 'G')
	{

		loc = half2[0] - '0';
		ct = 0;
		flag = 1;
	}
	if (half2[1] != '1' && half2[1] != '2' && half2[1] != '3' && half2[1] != '4' && half2[1] != '5' && half2[1] != '6' && half2[1] != '7' && half2[1] != '8' && half2[1] != '9' && half2[1] != '0' && half2[0] != '\0')
	{
		noneed = 1;
		checkthechar(myreadfile, mywritefile, half2, fin, loc, count, flag);
	}

	if (half1[k] == 'A' && half1[k + 1] == 'N' && half1[k + 2] == 'D' && bit[0] == 'I')
	{
		fin[c] = '8';
		c++;
		flag = 1;
		if (noneed == 0)
		{
			for (int y = 0; y < 3; y++)
			{
				fin[c] = half2[y];
				c++;
			}
		}
	}
	else if (half1[k] == 'A' && half1[k + 1] == 'N' && half1[k + 2] == 'D' && bit[0] != 'I')
	{
		fin[c] = '0';
		c++;
		flag = 1;
		if (noneed == 0)
		{
			for (int y = 0; y < 3; y++)
			{
				fin[c] = half2[y];
				c++;
			}
		}
	}

	if (half1[k] == 'A' && half1[k + 1] == 'D' && half1[k + 2] == 'D' && bit[0] == 'I')
	{
		fin[c] = '9';
		c++;
		flag = 1;
		if (noneed == 0)
		{
			for (int y = 0; y < 3; y++)
			{
				fin[c] = half2[y];
				c++;
			}
		}
	}
	else if (half1[k] == 'A' && half1[k + 1] == 'D' && half1[k + 2] == 'D' && bit[0] != 'I')
	{
		fin[c] = '1';
		c++;
		flag = 1;
		if (noneed == 0)
		{
			for (int y = 0; y < 3; y++)
			{
				fin[c] = half2[y];
				c++;
			}
		}
	}

	if (half1[k] == 'L' && half1[k + 1] == 'D' && half1[k + 2] == 'A' && bit[0] == 'I')
	{
		fin[c] = 'A';
		c++;
		flag = 1;
		if (noneed == 0)
		{
			for (int y = 0; y < 3; y++)
			{
				fin[c] = half2[y];
				c++;
			}
		}
	}
	else if (half1[k] == 'L' && half1[k + 1] == 'D' && half1[k + 2] == 'A' && bit[0] != 'I')
	{
		fin[c] = '2';
		c++;
		flag = 1;
		if (noneed == 0)
		{
			for (int y = 0; y < 3; y++)
			{
				fin[c] = half2[y];
				c++;
			}
		}
	}

	if (half1[k] == 'S' && half1[k + 1] == 'T' && half1[k + 2] == 'A' && bit[0] == 'I')
	{
		fin[c] = 'B';
		c++;
		flag = 1;
		if (noneed == 0)
		{
			for (int y = 0; y < 3; y++)
			{
				fin[c] = half2[y];
				c++;
			}
		}
	}
	else if (half1[k] == 'S' && half1[k + 1] == 'T' && half1[k + 2] == 'A' && bit[0] != 'I')
	{
		fin[c] = '3';
		c++;
		flag = 1;
		if (noneed == 0)
		{
			for (int y = 0; y < 3; y++)
			{
				fin[c] = half2[y];
				c++;
			}
		}
	}

	if (half1[k] == 'B' && half1[k + 1] == 'U' && half1[k + 2] == 'N' && bit[0] == 'I')
	{
		fin[c] = 'C';
		c++;
		flag = 1;
		if (noneed == 0)
		{
			for (int y = 0; y < 3; y++)
			{
				fin[c] = half2[y];
				c++;
			}
		}
	}
	else if (half1[k] == 'B' && half1[k + 1] == 'U' && half1[k + 2] == 'N' && bit[0] != 'I')
	{
		fin[c] = '4';
		c++;
		flag = 1;
		if (noneed == 0)
		{
			for (int y = 0; y < 3; y++)
			{
				fin[c] = half2[y];
				c++;
			}
		}
	}

	if (half1[k] == 'B' && half1[k + 1] == 'S' && half1[k + 2] == 'A' && bit[0] == 'I')
	{
		fin[c] = 'D';
		c++;
		flag = 1;
		if (noneed == 0)
		{
			for (int y = 0; y < 3; y++)
			{
				fin[c] = half2[y];
				c++;
			}
		}
	}
	else if (half1[k] == 'B' && half1[k + 1] == 'S' && half1[k + 2] == 'A' && bit[0] != 'I')
	{
		fin[c] = '5';
		c++;
		flag = 1;
		if (noneed == 0)
		{
			for (int y = 0; y < 3; y++)
			{
				fin[c] = half2[y];
				c++;
			}
		}
	}

	if (half1[k] == 'I' && half1[k + 1] == 'S' && half1[k + 2] == 'Z' && bit[0] == 'I')
	{
		fin[c] = 'E';
		c++;
		flag = 1;
		if (noneed == 0)
		{
			for (int y = 0; y < 3; y++)
			{
				fin[c] = half2[y];
				c++;
			}
		}
	}
	else if (half1[k] == 'I' && half1[k + 1] == 'S' && half1[k + 2] == 'Z' && bit[0] != 'I')
	{
		fin[c] = '6';
		c++;
		flag = 1;
		if (noneed == 0)
		{
			for (int y = 0; y < 3; y++)
			{
				fin[c] = half2[y];
				c++;
			}
		}
	}
	if (half1[k] == 'C' && half1[k + 1] == 'L' && half1[k + 2] == 'A')
	{
		fin[0] = '7';
		fin[1] = '8';
		fin[2] = '0';
		fin[3] = '0';
		flag = 1;
	}

	if (half1[k] == 'C' && half1[k + 1] == 'L' && half1[k + 2] == 'E')
	{
		fin[0] = '7';
		fin[1] = '4';
		fin[2] = '0';
		fin[3] = '0';
		flag = 1;
	}

	if (half1[k] == 'C' && half1[k + 1] == 'M' && half1[k + 2] == 'A')
	{
		fin[0] = '7';
		fin[1] = '2';
		fin[2] = '0';
		fin[3] = '0';
		flag = 1;
	}

	if (half1[k] == 'C' && half1[k + 1] == 'M' && half1[k + 2] == 'E')
	{
		fin[0] = '7';
		fin[1] = '1';
		fin[2] = '0';
		fin[3] = '0';
		flag = 1;
	}

	if (half1[k] == 'C' && half1[k + 1] == 'I' && half1[k + 2] == 'R')
	{
		fin[0] = '7';
		fin[1] = '0';
		fin[2] = '8';
		fin[3] = '0';
		flag = 1;
	}

	if (half1[k] == 'C' && half1[k + 1] == 'I' && half1[k + 2] == 'L')
	{
		fin[0] = '7';
		fin[1] = '0';
		fin[2] = '4';
		fin[3] = '0';
		flag = 1;
	}

	if (half1[k] == 'I' && half1[k + 1] == 'N' && half1[k + 2] == 'C')
	{
		fin[0] = '7';
		fin[1] = '0';
		fin[2] = '2';
		fin[3] = '0';
		flag = 1;
	}

	if (half1[k] == 'S' && half1[k + 1] == 'P' && half1[k + 2] == 'A')
	{
		fin[0] = '7';
		fin[1] = '0';
		fin[2] = '1';
		fin[3] = '0';
		flag = 1;
	}

	if (half1[k] == 'S' && half1[k + 1] == 'N' && half1[k + 2] == 'A')
	{
		fin[0] = '7';
		fin[1] = '0';
		fin[2] = '0';
		fin[3] = '8';
		flag = 1;
	}

	if (half1[k] == 'S' && half1[k + 1] == 'Z' && half1[k + 2] == 'A')
	{
		fin[0] = '7';
		fin[1] = '0';
		fin[2] = '0';
		fin[3] = '4';
		flag = 1;
	}
	if (half1[k] == 'S' && half1[k + 1] == 'Z' && half1[k + 2] == 'E')
	{
		fin[0] = '7';
		fin[1] = '0';
		fin[2] = '0';
		fin[3] = '2';
		flag = 1;
	}

	if (half1[k] == 'H' && half1[k + 1] == 'L' && half1[k + 2] == 'T')
	{
		fin[0] = '7';
		fin[1] = '0';
		fin[2] = '0';
		fin[3] = '1';
		flag = 1;
	}

	if (half1[k] == 'I' && half1[k + 1] == 'N' && half1[k + 2] == 'P')
	{
		fin[0] = 'F';
		fin[1] = '8';
		fin[2] = '0';
		fin[3] = '0';
		flag = 1;
	}

	if (half1[k] == 'O' && half1[k + 1] == 'U' && half1[k + 2] == 'T')
	{
		fin[0] = 'F';
		fin[1] = '4';
		fin[2] = '0';
		fin[3] = '0';
		flag = 1;
	}

	if (half1[k] == 'S' && half1[k + 1] == 'K' && half1[k + 2] == 'I')
	{
		fin[0] = 'F';
		fin[1] = '2';
		fin[2] = '0';
		fin[3] = '0';
		flag = 1;
	}

	if (half1[k] == 'S' && half1[k + 1] == 'K' && half1[k + 2] == 'O')
	{
		fin[0] = 'F';
		fin[1] = '1';
		fin[2] = '0';
		fin[3] = '0';
		flag = 1;
	}

	if (half1[k] == 'I' && half1[k + 1] == 'O' && half1[k + 2] == 'N')
	{
		fin[0] = 'F';
		fin[1] = '0';
		fin[2] = '8';
		fin[3] = '0';
		flag = 1;
	}

	if (half1[k] == 'I' && half1[k + 1] == 'O' && half1[k + 2] == 'F')
	{
		fin[0] = 'F';
		fin[1] = '0';
		fin[2] = '4';
		fin[3] = '0';
		flag = 1;
	}
}
int main()
{
	string x;
	ifstream myreadfile;
	ofstream mywritefile;
	int ct = 0; //counter of the ORG lines to be displayed in hexadecmil 
	int loc = 0; //location of ORG
	int loop = 0; //number of loops
	myreadfile.open("C:/Users/ka422/OneDrive/Desktop/read.txt");
	mywritefile.open("C:/Users/ka422/OneDrive/Desktop/write.txt");
	if (myreadfile.is_open() && mywritefile.is_open())
	{
		while (getline(myreadfile, x))
		{
			int flag = 0; // check if instruction exists
			char temp1[8] = {};
			char fin[10] = {};
			for (int i = 0; i < x.length() && i < 8; i++)
			{
				temp1[i] = x[i];
			}
			check(temp1, x.length(), fin, loc, ct, flag, myreadfile, mywritefile);
			if (loop >= 0 && flag == 0)
			{
				mywritefile << "the instruction is not exists" << endl;
			}
			if (loop >= 1 && flag == 1) // Display of the code in the write file 
			{
				mywritefile << uppercase;
				if (ct < 16)
				{
					mywritefile << loc << '0' << hex << ct << " "; // Display of virtual address for if the number is not two digits 
				}
				else
				{
					mywritefile << loc << hex << ct << " "; // Display of virtual address for if the number is not two digits 
				}
				for (int i = 0; fin[i] != '\0'; i++) // code of the instruction 
				{
					mywritefile << fin[i];
				}
				mywritefile << " ";
				for (int i = 0; fin[i] != '\0'; i++) // binary of the instruction 
				{
					mywritefile << bitset<4>(fin[i] - '0');
				}
				mywritefile << endl;
				ct++;
			}
			loop++;
		}
	}
}
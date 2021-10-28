#include <iostream>
#include <cmath>
#include <fstream>
#include <sstream>
using namespace std;



void ROBDD(ifstream&);
void Redundant(Node*, int);
void Save(string, Node*, int);

int main(int argc, char *argv[])
{
	//Load pla file.
	if (argc == 2)
	{
		ifstream fin(argv[1]);
		if (!fin)
		{
			cout << "file error!" << endl;
			return -1;
		}
		else
		{
			ROBDD(fin);
		}
	}
	else
	{
		cout << "parameter error!" << endl;
		return -1;
	}

	return 0;
}

void ROBDD(ifstream& fin)
{
	string str;
	int num_In = 0, num_Out = 0;
	string ilb, ob;
	int **arr;
	while (!fin.eof())
	{
		fin >> str;
		if (str == ".i")
		{
			fin >> num_In;	
			arr = new int*[pow(2, num_In) + 1];
			for(int i = 0; i < pow(2, num_In) + 1; i++){
				arr[i] = new int[2];
				arr[i][0] = 0;
				arr[i][1] = 0;
			}
			for(int i = 0; i < pow(2, num_In - 1) - 1; i++){
				arr[i][0] = 2 * i;
				arr[i][1] = 2 * i + 1;
			}
		}
		else if (str == ".o")
		{
			fin >> num_Out;
		}
		else if (str == ".ilb")
		{
			for(int i = 0; i < num_In; i++){
				fin >> ilb[i];
			}
		}
		else if (str == ".ob")
		{
			for (int i = 0; i < num_Out; i++){
				fin >> ob[i];
			}
		}
		else if (str == ".p")
		{
			bool *bit = new bool[pow(2,num_In)];
			int times;
			fin >> time;
			for(int i = 0; i < times; i++){
				string input;
				fin >> input;
				for (int i = 0; i < pow(2, num_In); i++){
					bit[i] = false;
				}
				for(int i = 0; i < input.length(); i++){
					if(input[i] = ='1')
						bit[i * 2 + 1] = true;
					else if(input[i] == '0')
						bit[i * 2] = true;
					else{
						bit[i * 2 + 1] = true;
						bit[i * 2] = true;
					}
				}
				fin >> input;
				for(int i = pow(2, num_In - 1); i < pow(2, num_In); i++){
					bool test = true;
					int temp = i * 2 - pow(2, num_In);
					for(int j = 0; j < num_In; j++){
						if(bit[temp % 2 + j * 2] == false)
							f = false;
						temp /= 2;
					}
					if(arr[i][0] == 0 && test == true){
						arr[i][0] = pow(2, num_In);
					}
					
					test = true;
					temp = i * 2 + 1 - pow(2, num_In);
					for(int j = 0; j < num_In; j++){
						if(bit[temp % 2 + j * 2] == false){
							f = false;
						}
						temp /= 2;
					}
					if(arr[i][1] == 0 && test == true){
						arr[i][1] = pow(2, num_In);
					}
				}
			}
			
		}
		else if (str == ".e")
		{
			
		}
	}
}

/*void Redundant(Node* n, int size)
{
	bool f = false;
	for (int i = 1; i < size; i++)
	{
		if (n[i].isRedundant) continue;
		if (n[i].Else_edge == n[i].Then_edge)
		{
			n[i].isRedundant = true;
			f = true;
			for (int j = 1; j < size; j++)
			{
				if (n[j].Else_edge == i)
					n[j].Else_edge = n[i].Else_edge;
				if (n[j].Then_edge == i)
					n[j].Then_edge = n[i].Else_edge;
			}
		}
	}
	for (int i = 1; i < size; i++)
	{
		for (int j = i+1; j < size; j++)
		{
			if (n[i].isRedundant)continue;
			if (n[j].isRedundant)continue;

			if (n[i].Else_edge == n[j].Else_edge &&
				n[i].Then_edge == n[j].Then_edge &&
				n[i].Variable == n[j].Variable)
			{
				n[j].isRedundant = true;
				f = true;
				for (int k = 1; k < size; k++)
				{
					if (n[k].Else_edge == j)
						n[k].Else_edge = i;
					if (n[k].Then_edge == j)
						n[k].Then_edge = i;
				}
			}
		}
	}

	if (f)
		Redundant(n, size);
}*/

void Save(string fileName,Node *n, int size)
{
	ofstream fout(fileName, ofstream::out);
	fout << "digraph " << fileName << " {" << endl;
	fout << "\t0 [label=\"0\", shape=box];" << endl;
	for (int i = 1; i < size; i++)
	{
		if (!n[i].isRedundant)
			fout << "\t" << i << " [label=\"" << n[i].Variable << "\"];\n";
	}
	fout << "\t" << size << " [label=\"1\", shape=box];\n";
	fout << endl;
	for (int i = 1; i < size; i++)
	{
		if (!n[i].isRedundant)
		{
			fout << "\t" << i << " -> " << n[i].Else_edge << " [label=\"0\", style=dotted]\n";
			fout << "\t" << i << " -> " << n[i].Then_edge << " [label=\"1\", style=solid]\n";
		}
	}
	fout << "}";

	fout.close();
}

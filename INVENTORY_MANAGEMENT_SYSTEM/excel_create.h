#include<libxl.h>
#include<iostream>
using namespace libxl;
using namespace std;

class Excel_File{
	bool sheet_create = false;
	const wchar_t* file_name;
	const wchar_t* sheet_name;
public:
	Book* book = xlCreateBook();
	Sheet* sheet = book->addSheet(sheet_name);
	Excel_File() {
		if (book)
		{
			sheet_name = L"Sheet1";
			if (sheet) {
				sheet_create = true;
				file_name = L"example.xls";
			}
		}
	}
	Excel_File(const wchar_t* file) {
		if (book)
		{
			sheet_name = L"Sheet1";
			if (sheet) {
				sheet_create = true;
				file_name = file;
			}
		}
	}
	Excel_File(const wchar_t* file,const wchar_t* _sheet_name) {
		if (book)
		{
			sheet_name = _sheet_name;
			if (sheet) {
				sheet_create = true;
				file_name = file;
			}
		}
	}
	~Excel_File() {
		book->save(file_name);
		book->release();
	}
	int add(int _row, int _coloum, const wchar_t* _data) {
		if (sheet) {
			sheet->writeStr(_row, _coloum, _data);
			return 1;
		}
		else {
			return 0;
		}
	}
	int read() {
		if (sheet) {
				int _row = sheet->lastRow();
				int _coloum = sheet->lastCol();
				for (int row = 0; row < _row; ++row) {
					for (int col = 0; col < _coloum; ++col) {
						// Check if the cell contains string data
						const wchar_t* strData = sheet->readStr(row, col);
						if (strData) {
							wcout << strData << "\t"; // Print string data
						}
						// Check if the cell contains numeric data
						double numData = sheet->readNum(row, col);
						if (!std::isnan(numData)) {
							cout << numData << "\t"; // Print numeric data
						}
					}
					cout << std::endl; // Move to the next row
				}
			return 1;
		}
		else {
			return 0;
		}
	}
	int add(int _row, int _coloum,int _data) {
		if (sheet) {
			sheet->writeNum(_row, _coloum, _data);
			return 1;
		}
		else {
			return 0;
		}
	}
	int add(int _row, int _coloum, bool _data) {
		if (sheet) {
			sheet->writeBool(_row, _coloum, _data);
			return 1;
		}
		else {
			return 0;
		}
	}
};
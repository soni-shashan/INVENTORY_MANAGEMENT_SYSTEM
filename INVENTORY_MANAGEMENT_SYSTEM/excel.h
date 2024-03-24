#pragma once
#include"libxl.h"
using namespace libxl;
namespace INVENTORYMANAGEMENTSYSTEM {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	public ref class excel : public System::Windows::Forms::Form
	{
	public:
		const char* _filename = "INVENTORY.xlsx";

		char* stoc(String^ name) {
			int length = name->Length;
			char* _name = new char[length + 1];
			for (int i = 0; i < length; i++) {
				_name[i] = static_cast<char>(name[i]);
			}
			_name[length] = '\0';
			return _name;
		}
		int stoi(String^ value) {
			try {
				int intValue = Convert::ToInt32(value);
				return intValue;
			}
			catch (FormatException^) {
				return 0;
			}
			catch (OverflowException^) {
				return 0;
			}
			return 0;
		}
		void add_data(int row, int sr, String^ name, String^ id, String^ price, String^ quantity) {
			row = row + 2;
			Book* book = xlCreateXMLBook();
			if (book) {
				if (book->load(_filename)) {
					Sheet* sheet = book->getSheet(0);
					if (sheet) {
						sheet->writeStr(0, 0, "INVENTORY MANAGEMENT SYSTEM");
						sheet->writeNum(row, 0, sr);
						sheet->writeStr(row, 1, stoc(name));
						sheet->writeStr(row, 2, stoc(id));
						sheet->writeNum(row, 3, stoi(price));
						sheet->writeNum(row, 4, stoi(quantity));
						book->save(_filename);
					}
				}
			}
			book->release();
		}
		void create_file() {
			Book* book = xlCreateXMLBook();
			if (!(book->load(_filename))) {
				if (book) {
					Sheet* sheet = book->addSheet("Sheet1");
					if (sheet)
					{
						libxl::Font* textFont = book->addFont();
						textFont->setSize(14);
						textFont->setBold();
						sheet->writeStr(0, 0, "INVENTORY MANAGEMENT SYSTEM");
						sheet->writeStr(1, 0, "SR.NO");
						sheet->writeStr(1, 1, "Product Name");
						sheet->writeStr(1, 2, "Product Id");
						sheet->writeStr(1, 3, "Product Price");
						sheet->writeStr(1, 4, "Product Quantity");
						sheet->setCol(0, 0, 10);
						sheet->setCol(1, 1, 50);
						sheet->setCol(2, 2, 15);
						sheet->setCol(3, 3, 15);
						sheet->setCol(4, 4, 15);
						book->save(_filename);
					}
				}
			}
			book->release();
		}
	};
}
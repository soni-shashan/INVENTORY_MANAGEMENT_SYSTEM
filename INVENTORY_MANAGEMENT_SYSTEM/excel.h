#pragma once
#include"libxl.h"
#include<cstring>
#include<cmath>
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
		const char* _filename;;
		excel(char* filename) {
			_filename = filename;
			create_file();
		}
		~excel() {

		}
		char* stoc(String^ name) {
			int length = name->Length;
			char* _name = new char[length + 1];
			for (int i = 0; i < length; i++) {
				_name[i] = static_cast<char>(name[i]);
			}
			_name[length] = '\0';
			return _name;
		}
		String^ ctos(const char* name) {
			if (name == nullptr)
				return nullptr;

			int length = strlen(name);
			String^ result = gcnew String("");
			for (int i = 0; i < length; i++) {
				result += static_cast<wchar_t>(name[i]);
			}
			return result;
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
		void add_data(String^ name, String^ id, String^ price, String^ quantity) {
			Book* book = xlCreateXMLBook();
			if (book) {
				if (book->load(_filename)) {
					Sheet* sheet = book->getSheet(0);
					int row = sheet->lastRow();
					int sr = row -1;
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
		void remove_data(int sr) {
			Book* book = xlCreateXMLBook();
			if (book) {
				if (book->load(_filename)) {
					Sheet* sheet = book->getSheet(0);
					int rowToRemove=sr+1;
					if (sheet) {
						sheet->writeStr(0, 0, "INVENTORY MANAGEMENT SYSTEM");
						int row;
						for (row = rowToRemove + 1; row <= sheet->lastRow(); ++row) {
							for (int col = 0; col < sheet->lastCol(); ++col) {
								CellType cellType = sheet->cellType(row, col);
								if (cellType != CELLTYPE_BLANK) {
									switch (cellType) {
									case CELLTYPE_STRING:
										sheet->writeStr(row - 1, col, sheet->readStr(row, col));
										break;
									case CELLTYPE_NUMBER:
										sheet->writeNum(row - 1, col, sheet->readNum(row, col));
										break;
										// Add cases for other cell types as needed
									default:
										break;
									}
								}
								if (col == 0) {
									sheet->writeNum(row - 1, 0, row - 2);
								}
							}
						}
						sheet->removeRow(row-2, row-2);
						book->save(_filename);
					}
				}
			}
			book->release();
		}
		int last_data() {
			Book* book = xlCreateXMLBookA();
			if (book) {
				if (book->load(_filename)) {
					Sheet* sheet = book->getSheet(0);
					if (sheet) {
						int ans = sheet->lastRow()-2;
						book->release();
						return ans;
					}
				}
			}
		}
		String^ read_data(int row, int col) {
			row = row + 2;
			Book* book = xlCreateXMLBookA();
			if (book) {
				if (book->load(_filename)) {
					Sheet* sheet = book->getSheet(0);
					if (sheet->readNum(row,col)) {
						return Convert::ToString(sheet->readNum(row, col));
						book->release();
					}
					else
					{
						return ctos(sheet->readStr(row, col));
						book->release();
					}
				}
			}
		}
		int searchProductByName(String^ key) {
			Book* book = xlCreateXMLBookA();
			if(book){
			if (book->load(_filename)) {
				Sheet* sheet = book->getSheet(0);
				if (sheet) {
					for (int i = 0;i < sheet->lastRow();i++) {
						if (read_data(i, 1) == key) {
							return i;
						}
					}
					book->release();
				}
			}
		}
		}
		int searchProductById(String^ key) {
			Book* book = xlCreateXMLBookA();
			if (book) {
				if (book->load(_filename)) {
					Sheet* sheet = book->getSheet(0);
					if (sheet) {
						for (int i = 0;i < sheet->lastRow();i++) {
							if (read_data(i, 2) == key) {
								return i;
							}
						}
						book->release();
					}
				}
			}
		}
		void updateProduct(int row, int col,String^ info) {
			row = row + 2;
			Book* book = xlCreateXMLBookA();
			if (book) {
				if (book->load(_filename)) {
					Sheet* sheet = book->getSheet(0);
					if (sheet) {
						if(col==0){}
						else if (col == 1 || col == 2) {
							sheet->writeStr(row, col, stoc(info));
						}
						else if (col == 3 || col == 4) {
							sheet->writeNum(row, col, stoi(info));
						}else{}
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
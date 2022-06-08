#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main()
{
	int no, jum, uang, tot, kem, maaf, kurang, kemba, tiket;
	char pilihan1, menu, hari;
	string Hbiasa[5] = {"senin", "selasa", "rabu", "kamis", "jumat"};
	string Week[2] = {"sabtu", "minggu"};
	string H, nama;

	do
	{

	menu:
		system("cls");
		cout << "\t===================================================================================================" << endl;
		cout << "\t::::###::::###::########:###::::::#######:#####::::::#####:#########:#######:###:::###:::##:###::::" << endl;
		cout << "\t::::###:::###:::###::::::###::::::#######:###:##::::##:###:###:::###:###::##:###::###:::##::###::::" << endl;
		cout << "\t::::###:###:::::###::::::###::::::###::##:###::##::##::###:###:::###:###::##:###:###:::##:::###::::" << endl;
		cout << "\t::::#####:::::::########:###::::::###::##:###::::#:#:::###:#########:###::##:#####::::#########::::" << endl;
		cout << "\t::::###:###:::::###::::::###::::::###::##:###:::::#::::###:###:::::::###::##:###:###::::::::###::::" << endl;
		cout << "\t::::###::###::::###::::::########:#######:###::::::::::###:###:::::::###::##:###::###:::::::###::::" << endl;
		cout << "\t::::###::::###::########:########:#######:###::::::::::###:###:::::::#######:###::::###:::::###::::" << endl;
		cout << "\t===================================================================================================" << endl;
		cout << endl;
		cout << "\t\t###### ###### ###   # ###### ##  # #####   ###### #### ##### ##### ##  ## ##### #####  " << endl;
		cout << "\t\t  ##   ##   # ## #  # ##     ##  # ##  #   ##   #  ##  ##  # ##    ## ##  ##  # ##  #  " << endl;
		cout << "\t\t  ##   ###### ##  # # ##     ##### ##  #   ######  ##  ##  # ##### ###    ##  # #####  " << endl;
		cout << "\t\t  ##   ##   # ##   ## ##     ##  # ##  #   ##   #  ##  ##  #    ## ## ##  ##  # ##     " << endl;
		cout << "\t\t  ##   ##   # ##    # ###### ##  # #####   ###### #### ##### ##### ##  ## ##### ##     " << endl;
		cout << "\t\t=======================================================================================" << endl;

		cout << "\t\t\t\t<===========Daftar Menu Bioskop===========>" << endl;
		cout << "\t\t\t\t\t1.Pesan tiket" << endl;
		cout << "\t\t\t\t\t2.Daftar film Yang tersedia" << endl;
		cout << "\t\t\t\t\t3.Harga tiket" << endl;
		cout << "\t\t\t\t\t4.Waktu Tayang" << endl;
		cout << "\t\t\t\t\t5.Keluar" << endl;
		cout << "\t\t\t\t=========================================" << endl;
		cout << "Masukkan Nomor untuk daftar Menu yang tersedia: ";
		cin >> pilihan1;

		switch (pilihan1)
		{
		case '1':
			system("cls");
			cout << "====================================" << endl;
			cout << "+          Tancho Bioskop          +" << endl;
			cout << "====================================" << endl;
			cout << "1.		Jawa man							A1" << endl;
			cout << "2.		Yowes ben							A2" << endl;
			cout << "3.		Upin ipin							A3" << endl;
			cout << "4.		Spiderman No Way Home				A5" << endl;
			cout << " Masukan film pilihan anda: ";
			cin >> no;
			cout << endl;

			if (no == 1)
			{
				system("cls");
				cout << "====================================" << endl;
				cout << "+            Jawa man              +" << endl;
				cout << "====================================" << endl;
			hari:
				cout << "Hari biasa atau weekend?[b][w]: ";
				cin >> hari;
				if (hari == 'b')
				{
					cout << "Hari: ";
					for (int i = 0; i < 5; i++)
					{
						cout << Hbiasa[i] << " | ";
					}
					cout << "\nPilih hari: ";
					cin >> H;
					if ((H == "senin") || (H == "selasa") || (H == "rabu") || (H == "kamis") || (H == "jumat"))
					{
						tiket = 35000;
						cout << " Harga tiket : " << tiket << endl;
					}
					else
					{
						cin.ignore();
						cout << "Maaf inputan yang anda masukan salah" << endl;
						cin.get();
						system("cls");
						goto hari;
					}
				}
				else if (hari == 'w')
				{
					cout << "Hari: ";
					for (int j = 0; j < 2; j++)
					{
						cout << Week[j] << " | ";
					}
					cout << "\nPilih hari: ";
					cin >> H;
					if ((H == "sabtu") || (H == "minggu"))
					{
						tiket = 45000;
						cout << " Harga tiket : " << tiket << endl;
					}
					else
					{
						cin.ignore();
						cout << "Maaf inputan yang anda masukan salah" << endl;
						cin.get();
						system("cls");
						goto hari;
					}
				}
				else
				{
					cin.ignore();
					cout << "Maaf inputan yang anda masukan salah" << endl;
					cin.get();
					system("cls");
					goto hari;
				}
				cout << " Masukan nama pelanggan : ";
				cin.ignore();
				getline(cin, nama);
				cout << " Jumlah Pembelian Tiket : ";
				cin >> jum;
				tot = tiket * jum;
				cout << " Harga Total Pembayaran : Rp.\n " << tot << endl;
				cout << " Uang Yang Dibayarkan : Rp.\n ";
				cin >> uang;

				if (uang < tot)
				{
					cout << endl;
					maaf = tot - uang;
					cout << " Maaf Uang Anda Kurang Rp. " << maaf << endl;
					cout << " Masukkan Nominal yang kurang : Rp. ";
					cin >> kurang;
					kemba = (uang + kurang) - tot;
					cout << "===============================" << endl;
					cout << "+ Uang Kembalian Anda : Rp.   +" << kemba << endl;
					cout << "===============================" << endl;
				}
				else
				{
					kem = uang - tot;
					cout << "===============================" << endl;
					cout << "+ Uang Kembalian Anda : Rp.   +" << kem << endl;
					cout << "===============================" << endl;
				}
			}

			if (no == 2)
			{
				system("cls");
				cout << "=====================================" << endl;
				cout << "+            Yowes Ben              +" << endl;
				cout << "=====================================" << endl;
				cout << "Hari biasa atau weekend?[b][w]: ";
				cin >> hari;
				if (hari == 'b')
				{
					cout << "Hari: ";
					for (int i = 0; i < 5; i++)
					{
						cout << Hbiasa[i] << " | ";
					}
					cout << "\nPilih hari: ";
					cin >> H;
					if ((H == "senin") || (H == "selasa") || (H == "rabu") || (H == "kamis") || (H == "jumat"))
					{
						tiket = 35000;
						cout << " Harga tiket : " << tiket << endl;
					}
					else
					{
						cin.ignore();
						cout << "Maaf inputan yang anda masukan salah" << endl;
						cin.get();
						system("cls");
						goto hari;
					}
				}
				else if (hari == 'w')
				{
					cout << "Hari: ";
					for (int j = 0; j < 2; j++)
					{
						cout << Week[j] << " | ";
					}
					cout << "\nPilih hari: ";
					cin >> H;
					if ((H == "sabtu") || (H == "minggu"))
					{
						tiket = 45000;
						cout << " Harga tiket : " << tiket << endl;
					}
					else
					{
						cin.ignore();
						cout << "Maaf inputan yang anda masukan salah" << endl;
						cin.get();
						system("cls");
						goto hari;
					}
				}
				else
				{
					cin.ignore();
					cout << "Maaf inputan yang anda masukan salah" << endl;
					cin.get();
					system("cls");
					goto hari;
				}
				cout << " Masukan nama pelanggan : ";
				cin.ignore();
				getline(cin, nama);
				cout << " Jumlah Pembelian Tiket : ";
				cin >> jum;
				tot = tiket * jum;
				cout << " Harga Total Pembayaran : Rp.\n " << tot << endl;
				cout << " Uang Yang Dibayarkan : Rp. \n";
				cin >> uang;

				if (uang < tot)
				{
					cout << endl;
					maaf = tot - uang;
					cout << " Maaf Uang Anda Kurang Rp. " << maaf << endl;
					cout << " Masukkan Nominal yang kurang : Rp. ";
					cin >> kurang;
					kemba = (uang + kurang) - tot;
					cout << "===============================" << endl;
					cout << "+ Uang Kembalian Anda : Rp.   +" << kemba << endl;
					cout << "===============================" << endl;
				}
				else
				{
					kem = uang - tot;
					cout << "===============================" << endl;
					cout << "+ Uang Kembalian Anda : Rp.   +" << kem << endl;
					cout << "===============================" << endl;
				}
			}
			if (no == 3)
			{
				system("cls");
				cout << "=====================================" << endl;
				cout << "+            Upin Upin              +" << endl;
				cout << "=====================================" << endl;
				cout << "Hari biasa atau weekend?[b][w]: ";
				cin >> hari;
				if (hari == 'b')
				{
					cout << "Hari: ";
					for (int i = 0; i < 5; i++)
					{
						cout << Hbiasa[i] << " | ";
					}
					cout << "\nPilih hari: ";
					cin >> H;
					if ((H == "senin") || (H == "selasa") || (H == "rabu") || (H == "kamis") || (H == "jumat"))
					{
						tiket = 35000;
						cout << " Harga tiket : " << tiket << endl;
					}
					else
					{
						cin.ignore();
						cout << "Maaf inputan yang anda masukan salah" << endl;
						cin.get();
						system("cls");
						goto hari;
					}
				}
				else if (hari == 'w')
				{
					cout << "Hari: ";
					for (int j = 0; j < 2; j++)
					{
						cout << Week[j] << " | ";
					}
					cout << "\nPilih hari: ";
					cin >> H;
					if ((H == "sabtu") || (H == "minggu"))
					{
						tiket = 45000;
						cout << " Harga tiket : " << tiket << endl;
					}
					else
					{
						cin.ignore();
						cout << "Maaf inputan yang anda masukan salah" << endl;
						cin.get();
						system("cls");
						goto hari;
					}
				}
				else
				{
					cin.ignore();
					cout << "Maaf inputan yang anda masukan salah" << endl;
					cin.get();
					system("cls");
					goto hari;
				}
				cout << " Masukan nama pelanggan : ";
				cin.ignore();
				getline(cin, nama);
				cout << " Jumlah Pembelian Tiket : ";
				cin >> jum;
				tot = tiket * jum;
				cout << " Harga Total Pembayaran : Rp. \n"
					 << tot << endl;
				cout << " Uang Yang Dibayarkan : Rp. \n";
				cin >> uang;

				if (uang < tot)
				{
					cout << endl;
					maaf = tot - uang;
					cout << " Maaf Uang Anda Kurang Rp. " << maaf << endl;
					cout << " Masukkan Nominal yang kurang : Rp. ";
					cin >> kurang;
					kemba = (uang + kurang) - tot;
					cout << "===============================" << endl;
					cout << "+ Uang Kembalian Anda : Rp.   +" << kemba << endl;
					cout << "===============================" << endl;
				}
				else
				{
					kem = uang - tot;
					cout << "===============================" << endl;
					cout << "+ Uang Kembalian Anda : Rp.   +" << kem << endl;
					cout << "===============================" << endl;
				}
			}
			if (no == 4)
			{
				system("cls");
				cout << "=====================================" << endl;
				cout << "+            Spiderman No Way Home              +" << endl;
				cout << "=====================================" << endl;
				cout << "Hari biasa atau weekend?[b][w]: ";
				cin >> hari;
				if (hari == 'b')
				{
					cout << "Hari: ";
					for (int i = 0; i < 5; i++)
					{
						cout << Hbiasa[i] << " | ";
					}
					cout << "\nPilih hari: ";
					cin >> H;
					if ((H == "senin") || (H == "selasa") || (H == "rabu") || (H == "kamis") || (H == "jumat"))
					{
						tiket = 35000;
						cout << " Harga tiket : " << tiket << endl;
					}
					else
					{
						cin.ignore();
						cout << "Maaf inputan yang anda masukan salah" << endl;
						cin.get();
						system("cls");
						goto hari;
					}
				}
				else if (hari == 'w')
				{
					cout << "Hari: ";
					for (int j = 0; j < 2; j++)
					{
						cout << Week[j] << " | ";
					}
					cout << "\nPilih hari: ";
					cin >> H;
					if ((H == "sabtu") || (H == "minggu"))
					{
						tiket = 45000;
						cout << " Harga tiket : " << tiket << endl;
					}
					else
					{
						cin.ignore();
						cout << "Maaf inputan yang anda masukan salah" << endl;
						cin.get();
						system("cls");
						goto hari;
					}
				}
				cout << " Masukan nama pelanggan : ";
				cin.ignore();
				getline(cin, nama);
				;
				cout << " Jumlah Pembelian Tiket : ";
				cin >> jum;
				tot = tiket * jum;
				cout << " Harga Total Pembayaran : Rp. \n"
					 << tot << endl;
				cout << " Uang Yang Dibayarkan : Rp. \n";
				cin >> uang;

				if (uang < tot)
				{
					cout << endl;
					maaf = tot - uang;
					cout << " Maaf Uang Anda Kurang Rp. " << maaf << endl;
					cout << " Masukkan Nominal yang kurang : Rp. ";
					cin >> kurang;
					kemba = (uang + kurang) - tot;
					cout << "===============================" << endl;
					cout << "+ Uang Kembalian Anda : Rp.   +" << kemba << endl;
					cout << "===============================" << endl;
				}
				else
				{
					kem = uang - tot;
					cout << "===============================" << endl;
					cout << "+ Uang Kembalian Anda : Rp.   +" << kem << endl;
					cout << "===============================" << endl;
				}
			}

			cout << endl;
			cout << " SELAMAT MENONTON " << nama << endl;
			cout << " Apakah Anda Ingin Memasukan Data Lagi ? [Y/N] :";
			cin >> menu;
			if (menu == 'y' || menu == 'Y')
			{
				system("cls");
				goto menu;
			}
			else
			{
				exit(0);
			}
			break;

		case '2':
			system("cls");
			cout << "\n<=============== Daftar Film yang Tersedia ===============>" << endl;
			cout << "No.		Judul Film				Kode" << endl;
			cout << "1.		Jawa man				A1" << endl;
			cout << "2.		Yowes ben				A2" << endl;
			cout << "3.		Upin ipin				A3" << endl;
			cout << "4.		Spidermen No Way Home			A5" << endl;
			cout << "===========================================================" << endl;
			cout << "kembali ke-Menu Untuk pesan tiket?[y][n]: ";
			cin >> menu;
			if (menu == 'y' || menu == 'Y')
			{
				system("cls");
				goto menu;
			}
			else
			{
				exit(0);
			}
			break;

		case '3':
			system("cls");
			cout << "\n<============= Harga Tiket Tancho Bioskop =============>" << endl;
			cout << "Senin\tSelasa\tRabu\tKamis\tJum'at\tSabtu\tMinggu" << endl;
			cout << "35.000\t35.000\t35.000\t35.000\t35.000\t45.000\t45.000" << endl;
			cout << "kembali ke-menu Untuk pesan tiket?[y][n]: ";
			cin >> menu;
			if (menu == 'y' || menu == 'y')
			{
				system("cls");
				goto menu;
			}
			else
			{
				exit(0);
			}
			break;

		case '4':
			system("cls");
			cout << "\n=============================== Jam tayang Tancho Bioskop ===============================" << endl;
			cout << "No.	Judul Film				|	Waktu	|	Jam Tayang	|" << endl;
			cout << "=========================================================================================" << endl;
			cout << "1.	Jawa man							Pagi		08.00-10.00" << endl;
			cout << "2.	Yowes ben							Siang		11.00-13.00" << endl;
			cout << "3.	Upin ipin							Sore		14.00-16.00" << endl;
			cout << "4.	Spiderman No Way Home				Malam		18.00-20.00" << endl;
			cout << "kembali ke-menu Untuk pesan tiket?[y][n]: ";
			cin >> menu;
			if (menu == 'y' || menu == 'y')
			{
				system("cls");
				goto menu;
			}
			else
			{
				exit(0);
			}
			break;

		case '5':
			exit(0);
			break;

		default:
		{
			cout << "Maaf inputan yang anda masukkan salah!!!!" << endl;
		}
		}
	} while (menu == 'y' || menu == 'Y');
	cout << endl;
	cout << "" << endl;
	getch();
}

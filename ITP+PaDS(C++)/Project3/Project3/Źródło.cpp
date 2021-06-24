////#include<iostream>
////using namespace std;
////
//////int main()
//////{
//////	//start
//////	float dlugosc_trasy, czas, czas1;
//////	float srednia_predkosc;
//////	cout << "Dodaj liczbu dlugosci trasy w km" << endl;
//////	cin >> dlugosc_trasy;
//////	cout << "Dodaj liczbu czasa w minutach" << endl;
//////	cin >> czas;
//////	//calculator
//////	czas1 = czas / 1000;
//////	srednia_predkosc = dlugosc_trasy / czas1;
//////		//output
//////		cout << "srednia predkosc w km/h = " << srednia_predkosc << endl;
//////		return 0;
////
////}
//
//
//#include <iostream>
//#include <functional>
//#include <Windows.h>
//using namespace std;
//const int cell = 4;
//void draw_board() {
//	for (int y = 0; y <= 3 * cell; ++y) {
//		for (int x = 0; x <= 3 * cell; ++x)
//			if (x % cell == 0 && y % cell == 0) cout << "+";
//			else if (x % cell == 0) cout << "|";
//			else if (y % cell == 0) cout << "-";
//			else cout << " ";
//		cout << endl;
//	}
//}
//HANDLE output;
//COORD input() {
//	static COORD cursor = { 2, 2 };
//	SetConsoleCursorPosition(output, cursor);
//	while (!GetAsyncKeyState(VK_RETURN)) {
//		const int max_move = 4;
//		COORD moves[max_move] = { {2,0}, {0,2}, {1,0}, {0,1} };
//		bool moved = false;
//		for (int i = 0; i < max_move; ++i)
//			if (GetAsyncKeyState(VK_LEFT + i)) {
//				moved = true;
//				cursor.X = (moves[i].X * cell + cursor.X) % (3 * cell);
//				cursor.Y = (moves[i].Y * cell + cursor.Y) % (3 * cell);
//			}
//		if (moved) SetConsoleCursorPosition(output, cursor);
//		Sleep(100);
//	}
//	return { (cursor.X - 2) / cell, (cursor.Y - 2) / cell };
//}
//char board[3][4] = { "   ","   ", "   " };
//void iterate(SHORT& it, SHORT& i, SHORT& j, int& x_counter, int& o_counter, COORD& space, function<SHORT(SHORT)> adjust) {
//	x_counter = 0, o_counter = 0;
//	for (it = 0; it < 3; ++it)
//		if (board[i][adjust(j)] == 'X') ++x_counter;
//		else if (board[i][adjust(j)] == 'O') ++o_counter;
//		else space = { i, adjust(j) };
//}
//bool seek_row(COORD& space, int triggerX, int triggerO) {
//	int x_counter, o_counter;
//	SHORT i, j;
//	for (i = 0; i < 3; ++i) {
//		iterate(j, i, j, x_counter = 0, o_counter = 0, space, [](SHORT x) {return x; });
//		if (x_counter == triggerX && o_counter == triggerO) return true;
//		iterate(j, j, i, x_counter = 0, o_counter = 0, space, [](SHORT x) {return x; });
//		if (x_counter == triggerX && o_counter == triggerO) return true;
//	}
//	iterate(i, i, i, x_counter = 0, o_counter = 0, space, [](SHORT x) {return x; });
//	if (x_counter == triggerX && o_counter == triggerO) return true;
//	iterate(i, i, i, x_counter = 0, o_counter = 0, space, [](SHORT x) {return 2 - x; });
//	if (x_counter == triggerX && o_counter == triggerO) return true;
//	return false;
//}
//COORD solve(int turn, bool& gameover) {
//	gameover = false;
//	if (turn == 0) return { 1, 1 };
//	if (turn == 1) {
//		const int max_case = 8;
//		COORD cases[] = { {0,0}, {0,2}, {2,2}, {2,0}, {1,0}, {2,1}, {1,2}, {0,1} };
//		COORD answs[] = { {0,2}, {2,2}, {0,2}, {2,2}, {0,2}, {0,0}, {0,0}, {0,2} };
//		for (int i = 0; i < max_case; ++i)
//			if (board[cases[i].X][cases[i].Y] == 'O') return answs[i];
//	}
//	COORD space;
//	if (seek_row(space, 2, 0)) {
//		gameover = true;
//		return space;
//	}
//	if (seek_row(space, 0, 2)) return space;
//	return space;
//}
//void put_X(COORD cursor) {
//	board[cursor.X][cursor.Y] = 'X';
//	cursor.X = (cursor.X * cell) + 2;
//	cursor.Y = (cursor.Y * cell) + 2;
//	SetConsoleCursorPosition(output, cursor);
//	cout << 'X';
//}
//int main() {
//	output = GetStdHandle(STD_OUTPUT_HANDLE);
//	bool gameover = false;
//	draw_board();
//	int counter = 0;
//	while (!gameover) {
//		put_X(solve(counter, gameover));
//		if (gameover || counter == 4) break;
//		COORD plr;
//		do {
//			plr = input();
//		} while (board[plr.X][plr.Y] != ' ');
//		cout << (board[plr.X][plr.Y] = 'O');
//		++counter;
//	}
//	SetConsoleCursorPosition(output, { 0, 13 });
//	return 0;
//}
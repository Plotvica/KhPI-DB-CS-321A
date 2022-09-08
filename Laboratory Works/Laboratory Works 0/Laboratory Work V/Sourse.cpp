void SUM::initialization(int x, int y){
	cout << "Enter new x and y values \n--->";
	cin >> x >> y;
}



void SUM::print(){
	cout << "X - " << x << "Y - " << y << "S -  " << s << endl;
}


void SUM::summa(int x, int y, int s){
	s = x + y;
	cout << "Summa" << s << endl; 

}
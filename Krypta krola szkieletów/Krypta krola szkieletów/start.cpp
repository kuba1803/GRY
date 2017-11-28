#include <iostream>
#include <string>
#include <ctime>
#include <algorithm>

//chamber - komnata z rzezba diabla
//corridor - zachodni korytarz z komnaty w ktorej sie walczylo z goblinem

using namespace std;
void plot_1(string &odpowiedz,int &hp,int &ac, int &attack_bonus,int &potion, int & gold,bool & chamber, bool & corridor,bool &mace,bool &sickened);
void plot_2(string &odpowiedz,int &hp,int &ac, int &attack_bonus,int &potion, int & gold,bool & chamber, bool & corridor,bool &mace,bool &sickened);
void plot_3(string &odpowiedz,int &hp,int &ac, int &attack_bonus,int &potion, int & gold,bool & chamber, bool & corridor,bool &mace,bool &sickened);
void plot_4(string &odpowiedz,int &hp,int &ac, int &attack_bonus,int &potion, int & gold,bool & chamber, bool & corridor,bool &mace,bool &sickened);
void plot_5(string &odpowiedz,int &hp,int &ac, int &attack_bonus,int &potion, int & gold,bool & chamber, bool & corridor,bool &mace,bool &sickened);
void plot_6(string &odpowiedz,int &hp,int &ac, int &attack_bonus,int &potion, int & gold,bool & chamber, bool & corridor,bool &mace,bool &sickened);
void plot_7(string &odpowiedz,int &hp,int &ac, int &attack_bonus,int &potion, int & gold,bool & chamber, bool & corridor,bool &mace,bool &sickened);
void plot_8(string &odpowiedz,int &hp,int &ac, int &attack_bonus,int &potion, int & gold,bool & chamber, bool & corridor,bool &mace,bool &sickened);
void plot_9(string &odpowiedz,int &hp,int &ac, int &attack_bonus,int &potion, int & gold,bool & chamber, bool & corridor,bool &mace,bool &sickened);
void plot_10(string &odpowiedz,int &hp,int &ac, int &attack_bonus,int &potion, int & gold,bool & chamber, bool & corridor,bool &mace,bool &sickened);
void plot_11(string &odpowiedz,int &hp,int &ac, int &attack_bonus,int &potion, int & gold,bool & chamber, bool & corridor,bool &mace,bool &sickened);
void plot_12(string &odpowiedz,int &hp,int &ac, int &attack_bonus,int &potion, int & gold,bool & chamber, bool & corridor,bool &mace,bool &sickened);
void plot_13(string &odpowiedz,int &hp,int &ac, int &attack_bonus,int &potion, int & gold,bool & chamber, bool & corridor,bool &mace,bool &sickened);
void plot_14(string &odpowiedz,int &hp,int &ac, int &attack_bonus,int &potion, int & gold,bool & chamber, bool & corridor,bool &mace,bool &sickened);
void plot_15(string &odpowiedz,int &hp,int &ac, int &attack_bonus,int &potion, int & gold,bool & chamber, bool & corridor,bool &mace,bool &sickened);
void plot_16(string &odpowiedz,int &hp,int &ac, int &attack_bonus,int &potion, int & gold,bool & chamber, bool & corridor,bool &mace,bool &sickened);
void plot_17(string &odpowiedz,int &hp,int &ac, int &attack_bonus,int &potion, int & gold,bool & chamber, bool & corridor,bool &mace,bool &sickened);
void plot_18(string &odpowiedz,int &hp,int &ac, int &attack_bonus,int &potion, int & gold,bool & chamber, bool & corridor,bool &mace,bool &sickened);
void plot_19(string &odpowiedz,int &hp,int &ac, int &attack_bonus,int &potion, int & gold,bool & chamber, bool & corridor,bool &mace,bool &sickened);
void plot_20(string &odpowiedz,int &hp,int &ac, int &attack_bonus,int &potion, int & gold,bool & chamber, bool & corridor,bool &mace,bool &sickened);
void plot_21(string &odpowiedz,int &hp,int &ac, int &attack_bonus,int &potion, int & gold,bool & chamber, bool & corridor,bool &mace,bool &sickened);
void plot_22(string &odpowiedz,int &hp,int &ac, int &attack_bonus,int &potion, int & gold,bool & chamber, bool & corridor,bool &mace,bool &sickened);
void plot_23(string &odpowiedz,int &hp,int &ac, int &attack_bonus,int &potion, int & gold,bool & chamber, bool & corridor,bool &mace,bool &sickened);


void to_Upper(string &s) {
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			s[i] += 'a' - 'A';
		}
	}
}

int d_x(int x) {
	return rand() % x;
}

void fight(string bohater, int &hp_b, int attack_b, int demage_d_b, int demage_b_b, int ac_b,int &potion,
	string potwor, int &hp_p, int attack_p, int demage_d_p, int demage_b_p, int ac_p, bool sickness) {
	string odpowiedz;
	int count = 0;
	do {
		if (hp_b>0) {
			if (potion > 0) {
				do {
					cout << "Mozesz zatakowac goblina (atak) lub uzyc mikstury uzdrawiajacej (ulecz)";
					cin >> odpowiedz;
					if (odpowiedz.compare("atak")==0) {
						if (d_x(20) + attack_b-((sickness&&count<3)?2:0) >= ac_p) {
							int damage = max(d_x(demage_d_b) + demage_b_b,0);
							hp_p -= damage;
							cout << bohater << " zadal " << potwor << " " << damage << " obrazen" << endl;
							break;
						}
						else {
							cout << bohater << " nie zadal zandych obrazen " << potwor << endl;
							break;
						}
					}
					else if (odpowiedz.compare("ulecz")==0) {
						potion--;
						hp_b = min(hp_b + 8, 12);
						cout << "Wracasz do zdrowia masz" << hp_b << "punktow zyci" << endl;
						break;
					}
					else {
						cout << "nie wiem co zrobic" << endl;
					}
				} while (true);
			}
			else
			{
				if (d_x(20) + attack_b-((sickness&&count<3)?2:0) >= ac_p) {
					int damage = max(d_x(demage_d_b) + demage_b_b,0);
					hp_p -= damage;
					cout << bohater << " zadal " << potwor << " " << damage << " obrazen" << endl;
				}
				else {
					cout << bohater << " nie zadal zandych obrazen " << potwor << endl;
				}
			}
			
		}
		if (hp_p>0) {
			if (d_x(20) + attack_p >= ac_b) {
				int damage = max(d_x(demage_d_b) + demage_b_b,0);
				hp_b -= damage;
				cout << potwor<<" zadal "<<bohater <<" "<< damage << " obrazen" << endl;
				cout << "Pozostalo ci " << hp_b << "punktow zycia" << endl;
			}
			else {
				cout << potwor<<" nie zadal zandych obrazen "<<bohater << endl;
			}
		}

	} while (hp_b > 0 && hp_p > 0);
}

void plot_1(string &odpowiedz,int &hp,int &ac, int &attack_bonus,int &potion, int & gold,bool & chamber, bool & corridor,bool &mace,bool &sickened){
	cout << "Jestes dzielnym wojownikiem wezwanym z Sandpoint, na ziemi zwana Varisa na wybrzezu wielkiego\
 Parujacego Morza.\n Zycie w malym miasteczku jest proste, ale i trudne - otoczne przez dzicz pelna goblinow\
 i innych potworow. Ostatnio te potwory zrobily sie smielsze, zacze³y uprowadzac dzieci oraz zwierzta chodowlane\
 z lezacych nieopodal gospodarstw. Zdesperowani mieszkancy zwrucili sie do ciebie o ochrone. Burmistrz, zyczliwa \
kobieta o nazywajaca sie Kendra Deveria, obiecala ci 100 sztuk zlota jesli oczyscisz pobliskie lochy, gdzie zyja\
 niektore z tych kreatur.\n To niebezpieczna robota, ale wiesz ze jestes w stanie podolac wyzwaniu, Zabierasz ze\
soba ekwipunek - kolczuge oraz stary dlugi miecz ojca - i udajesz sie do lasu. Podazajac droga zaznaczona na mapie\
od burmistrza. Po kilku godzinach marszu, docierasz na opuszczone wzniesienie. Tuz przed toba jest mroczne wejscie\
do tunelu" << endl;
	do {
		cout << "Czy odwarzysz sie wejsc? (Tak/Nie)" << endl;
		if (potion > 0)cout << "Mozesz tagze uzyc mikstury uzdrawiajacej (ulecz)"<<endl;
		cin >> odpowiedz;
		to_Upper(odpowiedz);
		if (potion>0&& odpowiedz.compare("ulecz") == 0) {
			potion--;
			hp = min(hp + 8, 12);
			cout << "Wracasz do zdrowia masz" << hp << "punktow zyci" << endl;
			continue;
		}
		if (odpowiedz.compare("tak") == 0) {
			plot_9(odpowiedz,hp,ac,attack_bonus,potion,gold,chamber,corridor,mace,sickened);
			break;
		}
		else if (odpowiedz.compare("nie") == 0) {
			cout << "Od tego dnia byles znany na ziemi Varisa, byles znany jako Tchorzliwy";
			break;
		}
		else {
			cout << "nie wiem co zrobic" << endl;
		}
	} while (true);
}
void plot_2(string &odpowiedz,int &hp,int &ac, int &attack_bonus,int &potion, int & gold,bool & chamber, bool & corridor,bool &mace,bool &sickened){
	cout << "Wracasz do pomieszczenia w ktorym walczyles z goblinem, zwracasz sie ku korytarzowi na zachod smierdzacym sianem i \
plesnia" << endl;
	if (corridor,mace) {
		plot_16(odpowiedz, hp, ac, attack_bonus, potion, gold, chamber, corridor,mace,sickened);
	}
	else
	{
		corridor = true;
		plot_4(odpowiedz, hp, ac, attack_bonus, potion, gold, chamber, corridor,mace,sickened);
	}
}
void plot_3(string &odpowiedz,int &hp,int &ac, int &attack_bonus,int &potion, int & gold,bool & chamber, bool & corridor,bool &mace,bool &sickened){
	cout << "Oracasz sie i uciekasz od straszliwego szkieleta, skrycie siemieje sie z ciebie gdy przedzierasz sie \
przez sale. Wkoncu docierasz do konca tunelu i dostrzegasz upragnione dzienne swiatlo. Kiedy w koncu lapiesz oddech\
postanawiasz ze zrobiles juz dosc wiele. Zabiles potwora , przetrwalen wieksze niebezpieczenstwo niz ktorykolwiek \
inny mieszkaniec miasta - to mnustwo przygod jak na jeden dzien. Zbierasz skarby ktore znalazles i ruszasz spowrotem \
do miasta. Kiedy docierasz na obrzeza miasta slonce wlasnie zachodzi. \n Natychmiast udajesz sie do ratusza by \
zlozyc raport z tego co dokonales. Kiedy wszyscy sa wdzieczni ze po tym czego dokonalec zdolales wrucic zywy.\
Burmistrz i paru innych martwi sie wielkim niebezpieczenstwem ktore pozostalo w lochach. Daj ci polowe obiecanej \
nagrody, 50 sztuk zlota. Mow ci ze reszta czeka na ciebie jesli wrocisz do lochu dokonczyc swoja robote \n \
Szepczac mieszkancy rozchodza sie, spieszac sie do domow zamknac drzwi. Zapad noc" << endl;
	do {
		cout << "Co zrobisz ? " << endl;
		cout << "Byc moze poczujesz sie pewniej jesli kupisz miksture leczaca z 50 sztuk zlota ktore otrzymales i \
wrocisz stawic czolo przerazajacemu szkieletowi (loch)" << endl;
		cout << "Nie podejmiesz is wyzwania (koniec)" << endl;
		if (potion > 0)cout << "Mozesz tagze uzyc mikstury uzdrawiajacej (ulecz)" << endl;
		cin >> odpowiedz;
		to_Upper(odpowiedz);
		if (potion>0 && odpowiedz.compare("ulecz") == 0) {
			potion--;
			hp = min(hp + 8, 12);
			cout << "Wracasz do zdrowia masz" << hp << "punktow zyci" << endl;
			continue;
		}
		else if (odpowiedz.compare("loch") == 0) {
			plot_9(odpowiedz, hp, ac, attack_bonus, potion, gold, chamber, corridor, mace, sickened);
			break;
		}
		else if (odpowiedz.compare("koniec") == 0) {
			cout << "Twoja przygoda konczy sie. Udajesz sie w droge powrotna do Sandpoint o swicie." << endl;
			break;
		}
		else {
			cout << "nie wiem co zrobic" << endl;
		}
	} while (true);

}
void plot_4(string &odpowiedz,int &hp,int &ac, int &attack_bonus,int &potion, int & gold,bool & chamber, bool & corridor,bool &mace,bool &sickened){
	cout << "Odor plesni staje sie mocniejszy z kazdym krokiem. Po okolo 50 m, na koncu korytarza sa proste drewniane drzwi\
 na wpol otwarte, ujawniajace co jest z drzwiami. \n W pomieszceniu znajduje sie  ogromna klatka zrobiona z zelaznych pretow\
 z dnem wyscielonym gnijacym sianem. Le¿y w sianie wiejski chlopiec, jest jednym z zaginionych dzieci z ostatniego ataku goblinow.\
 Wyglada na glodnego i jest pokryty siniakami. Po drugiej stronie pokoju, dynda na haku wielki klucz kilkadziesiat centymetrow\
 na ziemia, w sam raz by go siegnol goblin. Chlopiec wyglada jakby spal" << endl;
	do {
		cout << "Co zrobisz ? " << endl;
		cout << "Wezmiesz klucz z haka (klucz)" << endl;
		cout << "Obudzisz chlopca by z nim porozmawiac (chlopiec)" << endl;
		cout << "Zignorujesz chlopca i opuscisz pomieszczenie (wyjdz)" << endl;
		if (potion > 0)cout << "Mozesz tagze uzyc mikstury uzdrawiajacej (ulecz)"<<endl;
		cin >> odpowiedz;
		to_Upper(odpowiedz);
		if (potion>0 && odpowiedz.compare("ulecz") == 0) {
			potion--;
			hp = min(hp + 8, 12);
			cout << "Wracasz do zdrowia masz" << hp << "punktow zyci" << endl;
			continue;
		}
		if (odpowiedz.compare("klucz") == 0) {
			plot_11(odpowiedz, hp, ac, attack_bonus, potion, gold, chamber, corridor,mace,sickened);
			break;
		}
		else if (odpowiedz.compare("chlopiec") == 0) {
			plot_22(odpowiedz, hp, ac, attack_bonus, potion, gold, chamber, corridor,mace,sickened);
			break;
		}
		else if (odpowiedz.compare("wyjdz") == 0) {
			plot_14(odpowiedz, hp, ac, attack_bonus, potion, gold, chamber, corridor,mace,sickened);
			break;
		}
		else {
			cout << "nie wiem co zrobic" << endl;
		}
	} while (true);
	
}
void plot_5(string &odpowiedz,int &hp,int &ac, int &attack_bonus,int &potion, int & gold,bool & chamber, bool & corridor,bool &mace,bool &sickened){
	cout << "Na koncu przejscia znajduje sie olbrzymia komnata z lukowatym sufitem. Schody po drugiej stronie pokoju prowadza w gore\
 na mala platforme. Na platformie znajduje sie zloty tron udekorowan diamentami i rubinami. \n Siedzacy na tronie szkielet ubrany w\
starozytna i zardzewiala krolewska zbroje, w swej koscistej rece dzierzy dziwny swiecacy dlugi miecz. Nagle glowa szkieleta obraca \
sie w twoja strone, i puste oczodoly wypelniaja sie plomieniami. Jego szczeka wykrzywia sie w przerazliwym usmiechu gdy unosi miecz\
wskazuja nim ciebie. \n \"Wiec\" zgrzytajacy glos jakby ocierac dwa kamienie o siebe \"Ta zalosne miesteczko wyslalo czempiona. Jak\
milo z ich strony. Skoro najwyraznie zabiles mojego gobliniego sluge, uczciwie bedzie jesli zajmiesz jego miejsce i dolaczysz do mine\
- gin!\" \n Z usmiechem na twarzy, szkielet wstaje i idze w twoja strone, przygotowywujac swoj dlugi miecz do ataku" << endl;
	do {
		cout << "Co zrobisz ? " << endl;
		cout << "Zatakuj szkieleta mieczem (Miecz)" << endl;
		if(mace)cout << "Zatakuj szkieleta blawa (Blawa)" << endl;
		cout << "Uciekasz (uciekaj)" << endl;
		if (potion > 0)cout << "Mozesz tagze uzyc mikstury uzdrawiajacej (ulecz)" << endl;
		cin >> odpowiedz;
		to_Upper(odpowiedz);
		if (potion>0 && odpowiedz.compare("ulecz") == 0) {
			potion--;
			hp = min(hp + 8, 12);
			cout << "Wracasz do zdrowia masz" << hp << "punktow zyci" << endl;
			continue;
		}
		if (odpowiedz.compare("miecz") == 0) {
			plot_20(odpowiedz, hp, ac, attack_bonus, potion, gold, chamber, corridor, mace, sickened);
			break;
		}
		else if (mace && odpowiedz.compare("blawa") == 0) {
			plot_15(odpowiedz, hp, ac, attack_bonus, potion, gold, chamber, corridor, mace, sickened);
			break;
		}
		else if (odpowiedz.compare("uciekaj") == 0) {
			plot_3(odpowiedz, hp, ac, attack_bonus, potion, gold, chamber, corridor, mace, sickened);
			break;
		}
		else {
			cout << "nie wiem co masz na mysli" << endl;
		}
	} while (true);


}
void plot_6(string &odpowiedz,int &hp,int &ac, int &attack_bonus,int &potion, int & gold,bool & chamber, bool & corridor,bool &mace,bool &sickened){
	cout << "\"Dziekuje\" Chlopiec szloch gdy otwierasz drzwi klatki. \"Bylem uwiziony tu przez wiele dni. Wynosze sie z stad\
, ale jesli zamierzasz isc dalej, musisz byc ostrozny. Tam jest cos o wiele bardziej przerazajacego niz gobliny w glabi lochu \
- gobliny nazywaja go krolem szkieletow. Prosze wez moja blawe ze soba\" Odsunol na bok czesc slomy z podlogi i wyja bron \
wygladajaca jak palka z wielka metalowa koncowka. \"Zdolalem ukryc ja pod moja koszula kiedy goblin mnie zlapal. Mylse ze \
bedziesz tego potrzebowal przeciwki czemukolwiek co sie ukrywa tam na dole. Powodzenia\" Po tym, chlopiec wybiegl z lochu \
do swojej rodziny" << endl;
	mace = true;
	plot_14(odpowiedz, hp, ac, attack_bonus, potion, gold, chamber, corridor, mace,sickened);
}
void plot_7(string &odpowiedz,int &hp,int &ac, int &attack_bonus,int &potion, int & gold,bool & chamber, bool & corridor,bool &mace,bool &sickened){
	cout << "Mimo ze nie potrafisz sie pozbyc uczucia z cos jest nie tak, stwierdzasz ze to przez nerwy i ruszasz dalej. Idac dlej\
nadepnosec butem na kamien porosniety zolta plesnia. Nagle slyszysz syczenie, powietrze do okola ciebie zamiena sie w zylta chmure\
zarodnikow. Wyglada jaby byly wszedzie, dostaja sie do twoich ust i nosa. Zarodniki sprawiaja ze kaszlesz i sie ksztusisz, oczy ci\
lzawia i czujesz jak ramiona ci slabna. Kiedy zarodniki osiadaja, znow mozesz widziec przez zolte lzy. Podchodzisz do peknieci na \
koncu pomieszczenia. To co znajdujesz rzeczywiscie jest przejsciem. Dostrzegasz migotliwe swiatlo, w akompaniamencie grzechotania \
sluchych kosci" << endl;
	sickened = true;
	plot_14(odpowiedz, hp, ac, attack_bonus, potion, gold, chamber, corridor, mace, sickened);
}
void plot_8(string &odpowiedz,int &hp,int &ac, int &attack_bonus,int &potion, int & gold,bool & chamber, bool & corridor,bool &mace,bool &sickened){
	cout << "Podloga i sufit tego pomieszczenia niesie slady plomieni, ale pulapka byla juz odpalona i mie stanowi juz dluzej\
 zadnego zagrozenia. Jedyna droga jest droga na przod, przechodzisz pod diabelska rzezba i schodzisz schodami w mrok" << endl;
	plot_11(odpowiedz, hp, ac, attack_bonus, potion, gold, chamber, corridor,mace,sickened);
}
void plot_9(string &odpowiedz,int &hp,int &ac, int &attack_bonus,int &potion, int & gold,bool & chamber, bool & corridor,bool &mace,bool &sickened){
	int goblin_hp = 6;
	cout << "Znajdujesz sie w mrocznym, zakurzonym korytarzu biegnacm w glab ziemi. W miare wchodzenie coraz glebiej\
swiatlo padajace z wejscia szybko zanika do zaledwie niklej poswiaty, jestes zmuszony by uzyc pochodni do oswietlenia\
sobie drogi. W migotliwym swietle widzisz jak korytarz przechodi w pomieszczenie tuz przed toba. Slyszysz ciche warczenie\
dobywasz swojego miecza z pochwy. \n Nagle dostrzegasz ruch - kupa szmat w rugu unosi sie, ujawniajac ze w istocie to byl\
ochydny goblin z zielona skura i glowa w ksztalcie ananasa. Jego brudna ubranie pokryte plamami krwi, w jednej rece wciaz\
trzyma umieczona noge z stracdzione owcy. W drugiej rece trzyma dziwnie wygladajacy krutki miecz. Wrczy i rzuca sie na ciebie." << endl;
	fight("bohater",hp,attack_bonus,8,2,ac,potion,"Goblin",goblin_hp,1,4,0,13,sickened);
	if (goblin_hp <= 0) {
		plot_13(odpowiedz, hp, ac, attack_bonus,potion,gold,chamber,corridor,mace,sickened);
	}
	else {
		plot_17(odpowiedz, hp, ac, attack_bonus,potion,gold,chamber,corridor,mace,sickened);
	}
}
void plot_10(string &odpowiedz,int &hp,int &ac, int &attack_bonus,int &potion, int & gold,bool & chamber, bool & corridor,bool &mace,bool &sickened){
	cout << "Starozytne schody sa wilgotne. Na dnie znajdujesz wielka naturalna grote wypelniona stalagnitami i stalaktytami. Na\
podlodze widzisz kaluze i wielkie pekniecie w wygladajace jak przejscie. \n Jak przemierzasz pomieszczenie, cos wyglada nie tak.\
Zatrzymujesz sie i rozgladasz wokol" << endl;
	if (d_x(20) + 4 >= 12) {
		plot_19(odpowiedz, hp, ac, attack_bonus, potion, gold, chamber, corridor, mace,sickened);
	}
	else {
		plot_7(odpowiedz, hp, ac, attack_bonus, potion, gold, chamber, corridor, mace,sickened);
	}
}
void plot_11(string &odpowiedz,int &hp,int &ac, int &attack_bonus,int &potion, int & gold,bool & chamber, bool & corridor,bool &mace,bool &sickened){
	cout << "Zdejmujesz zelazny klucz z haka, wyglada jakby pasowal do zamka w klatce z chlopcem. Jestes jego jedyna szansa\
na ucieczke z lochu" << endl;
	do {
		cout << "Co zrobisz ? " << endl;
		cout << "Obudzisz chlopca by z nim porozmawiac (chlopiec)" << endl;
		cout << "Zignorujesz chlopca i opuscisz pomieszczenie (wyjdz)" << endl;
		if (potion > 0)cout << "Mozesz tagze uzyc mikstury uzdrawiajacej (ulecz)"<<endl;
		cin >> odpowiedz;
		to_Upper(odpowiedz);
		if (potion>0 && odpowiedz.compare("ulecz") == 0) {
			potion--;
			hp = min(hp + 8, 12);
			cout << "Wracasz do zdrowia masz" << hp << "punktow zyci" << endl;
			continue;
		}
		else if (odpowiedz.compare("chlopiec") == 0) {
			plot_22(odpowiedz, hp, ac, attack_bonus, potion, gold, chamber, corridor,mace,sickened);
			break;
		}
		else if (odpowiedz.compare("wyjdz") == 0) {
			plot_14(odpowiedz, hp, ac, attack_bonus, potion, gold, chamber, corridor,mace,sickened);
			break;
		}
		else {
			cout << "nie wiem co zrobic" << endl;
		}
	} while (true);
}
void plot_12(string &odpowiedz,int &hp,int &ac, int &attack_bonus,int &potion, int & gold,bool & chamber, bool & corridor,bool &mace,bool &sickened){
	cout << "Obrzymia komnata jest niemal pusta poza pajaczynami zwisajacymi z sufitu. Poprzez komnate mozna \
zobaczyc zmasakrowana rzezbe diabla siegajaca ponad drzwiami. Na podlodza lezy rozsypanych pare zlotych monet\
poprzez drzwi mozesz zobaczyc schody idace w dol glabiej w loch \n Nie widzac potworow w pomieszczeniu kierujesz\
sie ku schoda, zatrzymujac sie po drodze by podniesc monety. W polowie pomieszczenie wchodzisz na ukryta linke.\
Nagle, ogien bucha z glowy posagu diabla prosto w ciebie." << endl;

	do {
		cout << "Mozesz czekac na otrzymanie obrazen (czekaj) lub sprubowac odskoczyc (unik)" << endl;
		cin >> odpowiedz;
		to_Upper(odpowiedz);
		if (odpowiedz.compare("czekaj") == 0) {
			hp -= 6;
			cout << "Otrzymales 6 orazen" << endl;
			cout << "Pozostalo ci " << hp << "punktow zycia" << endl;
			break;
		}
		else if (odpowiedz.compare("unik") == 0) {
			if (11 <= d_x(20) + 2) {
				hp -= 3;
				cout << "Udalo ci sie odskoczyc otrzymujesz 3 obrazenia";
			}
			else
			{
				hp -= 6;
				cout << "Nie udalo ci sie odskoczyc otrzymujesz 6 orazen" << endl;
			}
			cout << "Pozostalo ci " << hp << "punktow zycia" << endl;
			break;
		}
		else {
			cout << "nie wiem co zrobic" << endl;
		}
	} while (true);
	if (hp <= 0) {
		plot_17(odpowiedz, hp, ac, attack_bonus, potion, gold, chamber,corridor,mace,sickened);
	}
	else {
		plot_21(odpowiedz, hp, ac, attack_bonus, potion, gold, chamber,corridor,mace,sickened);
	}
}
void plot_13(string &odpowiedz,int &hp,int &ac, int &attack_bonus,int &potion, int & gold,bool & chamber, bool & corridor,bool &mace,bool &sickened){
	cout << "W konci, z desperackim pchnieciem, przedzierasz sie przez obrone goblina i twoje ostrze przebija jego klatce \
piersiowa. Goblin ostatni raz warczy z bolu i flustracji, wtedy zamyka bulwiaste oczy i upada na ziemie, martwy. Przegladasz \
brudna sakiewke, w ktorej znajdujesz 7 sztuk zlota oraz mala szklana buteleczke z napisem \"uzdrowic\". To musi byc \
mikstura uzdrawjajaca" << endl;
	gold += 7;
	potion++;
	cout << "Rozgladasz sie do okola i widzisz ze reszta komnaty jest pusta, ale sa dwa korytarze biegnace w glab lochu" << endl;
	do {
		cout << "Wybierz korytarz ktorym podazysz(wschod/zachod) " << endl;
		cout << "wschodni korytarz jest pelen pajeczyn, wyglada jakby go nikt od dawna nie uzywal" << endl;
		cout << "zachodni korytarz cuchnie sianem i plesnia, ale nie widac pajaczyn" << endl;
		if (potion > 0)cout << "Mozesz tagze uzyc mikstury uzdrawiajacej (ulecz)"<<endl;
		cin >> odpowiedz;
		to_Upper(odpowiedz);
		if (potion>0&& odpowiedz.compare("ulecz") == 0) {
			potion--;
			hp = min(hp + 8, 12);
			cout << "Wracasz do zdrowia masz" << hp << "punktow zyci" << endl;
			continue;
		}
		if (odpowiedz.compare("wschod") == 0) {
			plot_18(odpowiedz, hp, ac, attack_bonus, potion, gold,chamber,corridor,mace,sickened);
			break;
		}
		else if (odpowiedz.compare("zachod") == 0) {
			plot_4(odpowiedz, hp, ac, attack_bonus, potion, gold,chamber,corridor,mace,sickened);
			break;
		}
		else {
			cout << "nie wiem co zrobic" << endl;
		}
	} while (true);


}
void plot_14(string &odpowiedz,int &hp,int &ac, int &attack_bonus,int &potion, int & gold,bool & chamber, bool & corridor,bool &mace,bool &sickened){
	cout << "Opuszczasz pomieszczenie, kierujesz sie spowrotem do komnaty z martwym goblinem. Jedyna droga jaka pozostala\
jest na wschod, w dol korytarzem wypelnionym pajeczynami" << endl;
	plot_18(odpowiedz, hp, ac, attack_bonus, potion, gold, chamber, corridor,mace,sickened);
}
void plot_15(string &odpowiedz,int &hp,int &ac, int &attack_bonus,int &potion, int & gold,bool & chamber, bool & corridor,bool &mace,bool &sickened){
	cout << "Pamietajac ostrzezenie chlopca, zostawiasz miecz w pochwie, i wyciagasz blawe z torby. Najwyzszy czas by \
dac temu szkieletowi lekcje" << endl;
	cout << "blawa z latwoscia rozczaskuje kosci szkieleta" << endl;
	if (sickened)cout << "Jestes chory" << endl;
	int szkielet_hp = 14;
	fight("Bohater", hp, attack_bonus+1, 8, 3, ac, potion, "Skielet", szkielet_hp, 4, 8, 0, 17, sickened);
	if (hp <= 0) {
		plot_17(odpowiedz, hp, ac, attack_bonus, potion, gold, chamber, corridor, mace, sickened);
	}
	else {
		plot_23(odpowiedz, hp, ac, attack_bonus, potion, gold, chamber, corridor, mace, sickened);
	}
}
void plot_16(string &odpowiedz,int &hp,int &ac, int &attack_bonus,int &potion, int & gold,bool & chamber, bool & corridor,bool &mace,bool &sickened){
	cout << "Wracasz do komnaty wieziennej z zelazna klatka" << endl;
	if(mace)plot_14(odpowiedz, hp, ac, attack_bonus, potion, gold, chamber, corridor, mace,sickened);
	else {
		do {
			cout << "Co zrobisz ? " << endl;
			cout << "Wezmiesz klucz z haka (klucz)" << endl;
			cout << "Obudzisz chlopca by z nim porozmawiac (chlopiec)" << endl;
			cout << "Zignorujesz chlopca i opuscisz pomieszczenie (wyjdz)" << endl;
			if (potion > 0)cout << "Mozesz tagze uzyc mikstury uzdrawiajacej (ulecz)"<<endl;
			cin >> odpowiedz;
			to_Upper(odpowiedz);
			if (potion>0 && odpowiedz.compare("ulecz") == 0) {
				potion--;
				hp = min(hp + 8, 12);
				cout << "Wracasz do zdrowia masz" << hp << "punktow zyci" << endl;
				continue;
			}
			if (odpowiedz.compare("klucz") == 0) {
				plot_11(odpowiedz, hp, ac, attack_bonus, potion, gold, chamber, corridor, mace,sickened);
				break;
			}
			else if (odpowiedz.compare("chlopiec") == 0) {
				plot_22(odpowiedz, hp, ac, attack_bonus, potion, gold, chamber, corridor, mace,sickened);
				break;
			}
			else if (odpowiedz.compare("wyjdz") == 0) {
				plot_14(odpowiedz, hp, ac, attack_bonus, potion, gold, chamber, corridor, mace,sickened);
				break;
			}
			else {
				cout << "nie wiem co zrobic" << endl;
			}
		} while (true);

	}
}
void plot_17(string &odpowiedz,int &hp,int &ac, int &attack_bonus,int &potion, int & gold,bool & chamber, bool & corridor,bool &mace,bool &sickened){
	cout << "Umierasz na skutek zadanych ci ran. Swiat powoli staje sie czarny, twoje ostatnie mysli sa o przyjaciolach i \
rodzinach z miasta. Zalujesz z nie byles w stanie ich ochronic ..." << endl;
}
void plot_18(string &odpowiedz,int &hp,int &ac, int &attack_bonus,int &potion, int & gold,bool & chamber, bool & corridor,bool &mace,bool &sickened){
	cout << " Uzywasz pochdni by spalic pajeczyne, ostroznie podozasz w zdluz korytarza. Po okolo 30 m, korytarz skreca na \
poludnie i po kolejnych 20 m wkraczasz do wielkiej komnaty" << endl;
	if (chamber) {
		plot_8(odpowiedz, hp, ac, attack_bonus, potion, gold, chamber,corridor,mace,sickened);
	}
	else {
		chamber = true;
		plot_12(odpowiedz, hp, ac, attack_bonus, potion, gold, chamber,corridor,mace,sickened);
	}
}
void plot_19(string &odpowiedz,int &hp,int &ac, int &attack_bonus,int &potion, int & gold,bool & chamber, bool & corridor,bool &mace,bool &sickened){
	cout <<"Nagle orietujesz sie co cie tak niepokoilo, zatrzymujesz sie w pol kroku. Wlasnie tam gdzie mialos wlosnie\
 stanac przylega do kamiennej podlogi zulty grzyb. Slyszales chistorie o takich rzeczach wczesniej, zolta plesni rosnie\
 u ciemnych jaskiniach i jest niegrozna puki sie jej nie przeszkadza, wtedzy wypuszcza miliony zarodnikow, ktore powoduje\
dusznosci oraz chorobe Nieszczesliwych Wedrowcow. Cofasz stope i okrazasz ostroznie plesn,szerokim lukiem. Katastrofa \
zarzegnana, kierujesz sie do pekniecia na koncu pomieszczenia. Okazuje sie ze to rzeczywisznie przejscie.Dostrzegasz \
migotliwe swiatlo, w akompaniamencie grzechotania sluchych kosci  "<< endl;
	plot_5(odpowiedz, hp, ac, attack_bonus, potion, gold, chamber, corridor, mace, sickened);
}
void plot_20(string &odpowiedz,int &hp,int &ac, int &attack_bonus,int &potion, int & gold,bool & chamber, bool & corridor,bool &mace,bool &sickened){
		cout << "Chwytasz dlugi mecz swejo ojca, stajesz na przeciw szkieleta, ogtow do walki" << endl;
		cout << "Miecz nie jest zbyt efektywny" << endl;
		if(sickened)cout << "Jestes chory" << endl;
		int szkielet_hp = 14;
		fight("Bohater", hp, attack_bonus, 8, -3, ac, potion, "Skielet", szkielet_hp, 4, 8, 0, 17, sickened);
		if (hp <= 0) {
			plot_17(odpowiedz, hp, ac, attack_bonus, potion, gold, chamber, corridor, mace, sickened);
		}
		else {
			plot_23(odpowiedz, hp, ac, attack_bonus, potion, gold, chamber, corridor, mace, sickened);
		}
	}
void plot_21(string &odpowiedz,int &hp,int &ac, int &attack_bonus,int &potion, int & gold,bool & chamber, bool & corridor,bool &mace,bool &sickened){
	cout << "Ogien cie troche poparzyl, ale udalo ci sie przytrwac. Konczysz zbierac monety z podlogi, cale 9\
zlotych monet. Wszystko co pozostalo to kamienna rzezba i schody prowadzace w dol. Slyszales ze lochy sa tym \
niebezpieczniejsze im glebiej sie zapuszczasz." << endl;
	do {
		cout << "Gdzie chcialbys sie udac w glab lochu (w dol) lub wrocic by zbadac druga drage (wroc) " << endl;
		if (potion > 0)cout << "Mozesz tagze uzyc mikstury uzdrawiajacej (ulecz)"<<endl;
		cin >> odpowiedz;
		to_Upper(odpowiedz);
		if (potion>0 && odpowiedz.compare("ulecz") == 0) {
			potion--;
			hp = min(hp + 8, 12);
			cout << "Wracasz do zdrowia masz" << hp << "punktow zyci" << endl;
			continue;
		}
		if (odpowiedz.compare("w dol") == 0) {
			plot_10(odpowiedz, hp, ac, attack_bonus, potion, gold, chamber,corridor,mace,sickened);
			break;
		}
		else if (odpowiedz.compare("wroc") == 0) {
			plot_2(odpowiedz, hp, ac, attack_bonus, potion, gold, chamber,corridor,mace,sickened);
			break;
		}
		else {
			cout << "nie wiem co zrobic" << endl;
		}
	} while (true);
}
void plot_22(string &odpowiedz,int &hp,int &ac, int &attack_bonus,int &potion, int & gold,bool & chamber, bool & corridor,bool &mace,bool &sickened){
	cout << "Wolasz chlopca i jego oczy powoli sie otwieraja.\"Dzieki bogom\"Wola przez przez popekane i zakwrawione usta\
\"Pracowalem na polu kiedy wpadlem w zasadzke tego goblina. Mysle za on bezdie mnie chcial zjesc. Prosze pozwol mi z stad \
wyjsc! Poprostu chce do domu\"" << endl;
	do {
		cout << "Co zrobisz ? " << endl;
		cout << "Uzyj klucza by uwolnic chlopca (uwolnij)" << endl;
		cout << "Zignorujesz chlopca i opuscisz pomieszczenie (wyjdz)" << endl;
		if (potion > 0)cout << "Mozesz tagze uzyc mikstury uzdrawiajacej (ulecz)"<<endl;
		cin >> odpowiedz;
		to_Upper(odpowiedz);
		if (potion>0 && odpowiedz.compare("ulecz") == 0) {
			potion--;
			hp = min(hp + 8, 12);
			cout << "Wracasz do zdrowia masz" << hp << "punktow zyci" << endl;
			continue;
		}
		if (odpowiedz.compare("uwolnij") == 0) {
			plot_6(odpowiedz, hp, ac, attack_bonus, potion, gold, chamber, corridor,mace,sickened);
			break;
		}
		else if (odpowiedz.compare("wyjdz") == 0) {
			plot_14(odpowiedz, hp, ac, attack_bonus, potion, gold, chamber, corridor,mace,sickened);
			break;
		}
		else {
			cout << "nie wiem co zrobic" << endl;
		}
	} while (true);
}
void plot_23(string &odpowiedz,int &hp,int &ac, int &attack_bonus,int &potion, int & gold,bool & chamber, bool & corridor,bool &mace,bool &sickened){
	cout<<"Z twoim ostatnim zamachem twoja bronia, kosci szkileta pekaja i krusza sie. Kosci i zbroia padaja na podloge\
 jak kukielka z docietymi sznurkami, na twoich oczach, starozytny korpus zmienia sie w pyl i rdze az pozostal tylko\
delikatnie polyskujacy miecz. Pokonales nieumarlego wladce lochu. \n Rozgladasz sie po pomieszczeniu ze zlotym tronem\
i decydujesz sie wziasc ze soba magiczny miecz , 6 diamentow i 6 rubinow ze zlotego tronu, zanim opuscisz loch na \
dobre i udasz sie spowrotem do miasta \n  Mieszkancy miasta wiwatuja gdy przemierzasz ulice z swiecacym mieczem przypetym\
do pasa. Stojac na przeciwko ratusza opowiadasz burmistrzowi i mieszkanca o swoim heroicznym zwyciestwie, po czym \
otrzymujesz swoja nagrode sakwe ze 100 sztukami zlota - wiecej niz wydziales przez cale swoje zycie. Co wiecej lokalny \
kupiec kupil od ciebie diamenty - 100 sztuk zlota z sztuke  - oraz rubiny - 100 sztuk zlota z sztuke. \n Z pieniedzmi \
z nagrody i sprzedarzy krysztalow masz wiecej niz trzeba na zakup lepszej zbroi, i byc moze nawet 1 albo 2 magicznych\
 mikstur. Zaczynasz myslec ze zycie poszukiwacza przygod  oferuje wiele niespodzianek."<<endl;
}

int main() {
	srand(time(NULL));
	string odpowiedz;
	int count = 0;
	int hit_point = 12;
	int armor_class = 16;
	int attack_bonus = 5;
	int potion = 0;
	int gold = 0;
	bool chamber = false;
	bool corridor = false;
	bool mace = false;
	bool sickened = false;
	cout << "Witaj bohaterze czy jesteœ rozpoczaæ przygode (Tak/Nie)"<< endl;
	do {
		cin >> odpowiedz;
		to_Upper(odpowiedz);
		if (odpowiedz.compare("tak") == 0  ) {
			plot_1(odpowiedz,hit_point,armor_class,attack_bonus,potion,gold,chamber,corridor,mace,sickened);
			break;
		}
		else if (odpowiedz.compare("nie") == 0) {
			cout << "Wroc gdy bedziesz gotow podjac wyzwanie";
			break;
		}
		else {
			if (count == 5) {
				cout << "Widac nie mam juz dla ciebie nadziej. Pozostaj ci tylko zostanie wioskowym glupkiem" << endl;
				break;
			}
			cout << "Przemyœl swoja odpowiedz. Odpowiedz tak lub nie. \n Czy jesteœ gotowy na przygodê. " << endl;
			count++;
		}
	} while (true);
	cin >> odpowiedz;
	return 0;
}
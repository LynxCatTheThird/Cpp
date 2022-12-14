// https://github.com/Hotsotse/Hang-man
#include <iostream>
#include <string>
#include <random>
using namespace std;

int random(int a, int b){
	thread_local mt19937 eng{random_device{}()};
	uniform_int_distribution<int> dist(a, b);
	return dist(eng);
}

string randomWord_countries() {
	string words[] = {
		"Afghanistan",
		"Albania",
		"Algeria",
		"Andorra",
		"Angola",
		"Argentina",
		"Armenia",
		"Aruba",
		"Australia",
		"Austria",
		"Azerbaijan",
		"Bahamas",
		"Bahrain",
		"Bangladesh",
		"Barbados",
		"Belarus",
		"Belgium",
		"Belize",
		"Benin",
		"Bermuda",
		"Bhutan",
		"Bolivia",
		"Bosnia",
		"Botswana",
		"Brazil",
		"Bulgaria",
		"Burundi",
		"Cambodia",
		"Cameroon",
		"Canada",
		"Chad",
		"Chile",
		"China",
		"Colombia",
		"Comoros",
		"Croatia",
		"Cuba",
		"Curacao",
		"Cyprus",
		"Denmark",
		"Djibouti",
		"Dominica",
		"Ecuador",
		"Egypt",
		"Eritrea",
		"Estonia",
		"Ethiopia",
		"Fiji",
		"Finland",
		"France",
		"Gabon",
		"Gambia",
		"Georgia",
		"Germany",
		"Ghana",
		"Gibraltar",
		"Greece",
		"Greenland",
		"Grenada",
		"Guam",
		"Guatemala",
		"Guinea",
		"Guyana",
		"Haiti",
		"Honduras",
		"Hungary",
		"Iceland",
		"India",
		"Indonesia",
		"Iran",
		"Iraq",
		"Ireland",
		"Israel",
		"Italy",
		"Jamaica",
		"Japan",
		"Jordan",
		"Kazakhstan",
		"Kenya",
		"Kiribati",
		"Kosovo",
		"Kuwait",
		"Latvia",
		"Lebanon",
		"Lesotho",
		"Liberia",
		"Libya",
		"Liechtenstein",
		"Lithuania",
		"Luxembourg",
		"Macedonia",
		"Madagascar",
		"Malawi",
		"Malaysia",
		"Maldives",
		"Mali",
		"Malta",
		"Mauritania",
		"Mauritius",
		"Mexico",
		"Moldova",
		"Monaco",
		"Mongolia",
		"Montenegro",
		"Morocco",
		"Mozambique",
		"Myanmar",
		"Namibia",
		"Nauru",
		"Nepal",
		"Netherlands",
		"Nicaragua",
		"Niger",
		"Nigeria",
		"Norway",
		"Oman",
		"Qatar",
		"Pakistan",
		"Palau",
		"Panama",
		"Paraguay",
		"Peru",
		"Philippines",
		"Poland",
		"Portugal",
		"Romania",
		"Russia",
		"Rwanda",
		"Samoa",
		"Senegal",
		"Serbia",
		"Seychelles",
		"Singapore",
		"Slovenia",
		"Somalia",
		"Spain",
		"Grenadines",
		"SudanR",
		"Suriname",
		"Swaziland",
		"Sweden",
		"Switzerland",
		"Tajikistan",
		"Tanzania",
		"Thailand",
		"Togo",
		"Tonga",
		"Tunisia",
		"Turkey",
		"Turkmenistan",
		"Tuvalu",
		"Uganda",
		"Ukraine",
		"UK",
		"US",
		"Uruguay",
		"Uzbekistan",
		"Vanuatu",
		"Venezuela",
		"Vietnam",
		"Yemen",
		"Zambia",
		"Zimbabwe",
		"Asia",
		"Europe",
		"Africa",
		"Antarctica",
		"Australia",
		"America"
	};
	return words[random(0, 170)];
}

string randomWord_chem(){
	string words[] = {
		"Hydrogen",
		"Helium",
		"Lithium",
		"Beryllium",
		"Boron",
		"Carbon",
		"Nitrogen",
		"Oxygen",
		"Fluorine",
		"Neon",
		"Sodium",
		"Magnesium",
		"Aluminium",
		"Silicon",
		"Phosphorus",
		"Sulphur",
		"Chlorine",
		"Argon",
		"Potassium",
		"Calcium",
		"Scandium",
		"Titanium",
		"Vanadium",
		"Chromium",
		"Manganese",
		"Iron",
		"Cobalt",
		"Nickel",
		"Copper",
		"Zinc",
		"Gallium",
		"Germanium",
		"Arsenic",
		"Selenium",
		"Bromine",
		"Krypton",
		"Rubidium",
		"Strontium",
		"Yttrium",
		"Zirconium",
		"Niobium",
		"Molybdenum",
		"Technetium",
		"Ruthenium",
		"Rhodium",
		"Palladium",
		"Silver",
		"Cadmium",
		"Indium",
		"Tin",
		"Antimony",
		"Tellurium",
		"Iodine",
		"Xenon",
		"Cesium",
		"Barium",
		"Lanthanum",
		"Cerium",
		"Praseodymium",
		"Neodymium",
		"Promethium",
		"Samarium",
		"Europium",
		"Gadolinium",
		"Terbium",
		"Dysprosium",
		"Holmium",
		"Erbium",
		"Thulium",
		"Ytterbium",
		"Lutetium",
		"Hafnium",
		"Tantalum",
		"Tungsten",
		"Rhenium",
		"Osmium",
		"Iridium",
		"Platinum",
		"Gold",
		"Mercury",
		"Thallium",
		"Lead",
		"Bismuth",
		"Polonium",
		"Astatine",
		"Radon",
		"Francium",
		"Radium",
		"Actinium",
		"Thorium",
		"Protactinium",
		"Uranium",
		"Neptunium",
		"Plutonium",
		"Americium",
		"Curium",
		"Berkelium",
		"Californium",
		"Einsteinium",
		"Fermium",
		"Mendelevium",
		"Nobelium",
		"Lawrencium",
		"Rutherfordium",
		"Dubnium",
		"Seaborgium",
		"Bohrium",
		"Hassium",
		"Meitnerium",
		"Darmstadtium",
		"Roentgenium",
		"Copernicium",
		"Flerovium",
		"Nihonium",
		"Moscovium",
		"Tennessine",
		"Oganesson",
		"Livermorium"
	};
	return words[random(0, 117)];
}

string randomWord_animal_easy(){
	string words[] = {
		"ant",
		"bat",
		"bear",
		"cat",
		"crow",
		"cow",
		"chick",
		"camel",
		"deer",
		"dog",
		"duck",
		"eagle",
		"fox",
		"frog",
		"fly",
		"goose",
		"goat",
		"hen",
		"horse",
		"kitty",
		"lion",
		"pig",
		"swan",
		"snack"
		"whale",
		"zebra"
	};
	return words[random(0, 25)];
}

string randomWord_animal_difficult(){
	string words[] = {
		"anteater",
		"butterfly",
		"bullfrog",
		"chicken",
		"canary",
		"dolphin",
		"donkey",
		"drangon",
		"drangonfly"
		"elephant",
		"firefly",
		"giraffe",
		"kitten",
		"kingfisher",
		"parrot",
		"kangaroo",
		"monkey",
		"turkey"
	};
	return words[random(0, 17)];
}

string randomWord_things_easy(){
	string words[] = {
		"bus",
		"cap",
		"cup",
		"car",
		"sofa",
		"door",
		"desk",
		"chair",
		"tape",
		"glove",
		"wallet"
	};
	return words[random(0, 10)];
}

string randomWord_things_difficult(){
	string words[] = {
		"furniture",
		"bookshell",
		"window",
		"battery",
		"flashlight",
		"telephone",
		"television",
		"bookmark"
	};
	return words[random(0, 7)];
}

int letterFill(char guess, string secretword, string &guessword){
	//guess-->???????????????
	//secretword-->????????????
	//guessword-->????????????
	int matches=0;//????????????
	int len = secretword.length();
	
	for (int i = 0; i < len; i++)
	{
		// ?????????????????????????????????????????????????????????
		if (guess == guessword[i]) return 0;
		
		// ?????????????????????????????????????????????
		if (guess == secretword[i]){
			guessword[i] = guess;
			matches++;
		}
	}
	return matches;
}

int main(){
	system("color 0f");// ????????????
	int tries = 6;// ???????????????????????????
	int choose;// ???????????????
	string word;// ?????????????????????
	cout << "???????????? Hangman ???\n?????????????????????????????????\n1. ??????-??????    2. ?????????    3. ??????-??????\n4. ??????-??????    5. ?????????    6. ??????-??????\n???????????????--->" ;
	cin>>choose;
	if(choose == 1){
		word = randomWord_animal_easy();// ????????????
	}else if(choose == 2){
		word = randomWord_chem();
		cout<<"????????????????????????????????????"<<endl;
	}else if(choose == 3){
		word = randomWord_things_easy();
	}else if(choose == 4){
		word = randomWord_animal_difficult();
	}else if(choose == 5){
		word = randomWord_countries();
		cout<<"????????????????????????????????????"<<endl;
	}else if(choose == 6){
		word = randomWord_things_difficult();
	}else {
		cout<<"???????????????\n???????????????????????????(?????????)???";
		return 0;
	}
	string unknown(word.length(), '_');// ??????????????????????????????
	cout << "?????????????????????????????????????????? " << word.length() << " ????????????" << endl;
	while (tries > 0){
		cout << unknown << endl;
		char letter; // ?????????????????????
		cin >> letter;	
		if (letterFill(letter, word, unknown) == 0){
			cout << "??????????????????????????????????????? " << letter << " ???????????????" << endl;
			tries--;
		}
		else {
			cout << "????????????" << endl;
		}
		
		cout << "??????????????????????????? " << tries << " ????????????" << endl;
		
		if (word == unknown)
		{
			system("cls");
			system("color 0a");
			cout << word << endl;
			cout << "??????????????????";
			return 0;
		}
	}
	system("cls");
	system("color 04");
	cout << endl << "??????????????????????????????????????????" << endl;
	cout << "???????????????" << word << endl;
	return 0;
}

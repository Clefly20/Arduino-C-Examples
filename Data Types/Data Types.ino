

void setup() {
Serial.begin(9600);
}

void loop() {
  
String situation = "Merhaba Dünya";  // Yazı türleri
Serial.println(situation);

bool situation1 = true;     //True / False Durumu 1 - 0
Serial.println(situation1);

char situation2 = 'A';    //Harf
Serial.println(situation2);

char* situation3 = "Apple"; //Ekstra Harf
Serial.println(situation8);

byte situation4 = 100;    //0 - 255 arası sayılar
Serial.println(situation4);

int situation5 = 15987;    //-32768 - 32768 arası sayılar
Serial.println(situation5);

long situation6 = 100;    //-2,147,483,648 - 2,147,483,648 arası sayılar
Serial.println(situation6);

float situation7 = 3.14;    //Bölme değerli sayılar
Serial.println(situation7);


delay(10000);  // 10 saniye bekleme süresi
}

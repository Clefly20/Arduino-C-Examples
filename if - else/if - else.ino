void setup() {
Serial.begin(9600); //Seri iletişimi başlatıyoruz
}

void loop() {
int a = 40;
int b = 50;

if(a > b) {
Serial.println(String(a)+" "+String(b)+" dan büyük"); //a b den büyük ise

}
else {
Serial.println(String(b)+" "+String(a)+" dan büyük"); //b a dan büyük ise

};


delay(1000); // 1 saniye bekleme süresi veriyoruz

}

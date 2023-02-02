

void setup() {
  Serial.begin(9600); //Serial iletişimi başlatıyoruz

  delay(2000); //2 saniye bekliyoruz

  Serial.println("Komutlar (Selam,Nasılsın)");
}

void loop() {

  if (Serial.available()) {    //Eğer Serial Aktifse
    String command;
    command = Serial.readStringUntil('\n');  //Serial.read ı komuta eşitle
    command.trim();                          //Fazladan karakterleri sil


    if (command.equals("Selam")) {       //Eğer komut Selam a eşitse
    Serial.println("Merhaba");
    }

    else if (command.equals("Nasılsın")) { //Eğer komut Nasılsın a eşitse
    Serial.println("Iyiyim");
    }

    else {                              //Hiçbir komuta eşit değilse
      Serial.println("Yanlış komut");
    }
    Serial.print("Komutunuz: ");
    Serial.println(command);            //En son giren komutu yazdır
  }
}

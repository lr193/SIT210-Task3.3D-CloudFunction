int led = D7;

void messegeReceived(const char *event, const char *data){

    String temp = String(data);

    Serial.println(temp);
    
    if (temp == "wave"){
    
        digitalWrite(led,HIGH);
        delay(1000);
        digitalWrite(led,LOW);
        delay(100);
        
        digitalWrite(led,HIGH);
        delay(1000);
        digitalWrite(led,LOW);
        delay(100);
        
        digitalWrite(led,HIGH);
        delay(1000);
        digitalWrite(led,LOW);
        // delay(100);
    }
    else if ( temp == "pat"){
        
        digitalWrite(led,HIGH);
        delay(200);
        digitalWrite(led,LOW);
        delay(100);
        
        digitalWrite(led,HIGH);
        delay(200);
        digitalWrite(led,LOW);
        delay(100);
        
        digitalWrite(led,HIGH);
        delay(200);
        digitalWrite(led,LOW);
        // delay(100);
    }
    
}

void setup(){

    Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", messegeReceived , ALL_DEVICES);

    Serial.begin(9600);
    pinMode(led,OUTPUT);    
}

void loop() {

}


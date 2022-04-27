
// Adapted from Simone Eloquent Arduino Blog

#include "Mic.h"
#include "Audio_own_data.h"
#include <cstdarg>

#define SAMP 64
#define GAIN (1.0f/50)
#define THRESHSOUND 1000

float fea[SAMP];
Mic mic;

Eloquent::ML::Port::Classifier rfm; //random forest 

void setup() {
  Serial.begin(115200);
  PDM.onReceive(onAud);
  mic.begin();
  delay(3000);
}

void loop() {
  if (sampleRecordsOfAudio()) {
    for (int i = 0; i < SAMP; i++) {
      }
     delay(200);
    Serial.println(rfm.predict(fea)); //predict with your new features and print the outcome
  }
  delay(200);

}
void onAud() {
  mic.update();
}
bool sampleRecordsOfAudio() {
  if (mic.hasData() && mic.data() > THRESHSOUND) {
    for (int i = 0; i < SAMP; i++) {
      while (!mic.hasData())
        delay(1);
        fea[i] = mic.pop() * GAIN;
    }
    return true;
  }

  return false;
}

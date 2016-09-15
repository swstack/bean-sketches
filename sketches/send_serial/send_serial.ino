#define START_FRAME 0x77
#define COMMAND_PATTERN_1 0
#define COMMAND_PATTERN_2 1
#define COMMAND_PATTERN_3 2


void setup() {
  Serial.begin();
}

void handleCommand(int command) {
  switch (command) {
    case COMMAND_PATTERN_1:
      break;
    case COMMAND_PATTERN_2:
      break;
    case COMMAND_PATTERN_3:
      break;
    default:
      break;
  }
}

void loop() {
  char buffer[2] = {0, 0};
  size_t bytesRead = Serial.readBytes(buffer, 2);

  if (bytesRead == 2) {
    if (buffer[0] == START_FRAME) {
      handleCommand(buffer[1]);
    }
  }

  Bean.sleep(5000);
}

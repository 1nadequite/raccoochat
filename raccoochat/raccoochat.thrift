namespace cpp raccoochat
namespace py raccoochat

const map<string, string> MAP_COMMANDS = {
  '/users': 'returns all users that are online.',
  '/last': 'returns last five messages',
  '/exit': 'sing out from the chat'
  '.{username}': 'send a private message for {username}'
}

struct User {
  1: i32 userId;
  2: i32 allMessageIndex;
  3: i32 privateMessageIndex;
}

struct SimpleMessage {
  1: string time;
  2: string userName;
  3: string textMessage;
}

exception InvalidValueException {
  1: i32 errorCode;
  2: string errorMessage;
}

service RaccooChat {
  i32 getMaxUserName();
  bool findUser(1: string name);
  bool validateName(1: string name);
  bool checkPassword(1: string name, 2: string password);
  bool connectUser(1: string name, 2: string password);
  void disconnectUser(1: string name);
  map<string, string> getAllOnlineUsers();
  list<SimpleMessage> getNewMessages(1: string name);
  list<SimpleMessage> getNewPrivateMessages(1: string name);
  list<SimpleMessage> getLastFiveMessages();
  void addMessage(1: SimpleMessage msg);
  void addPrivateMessage(1: SimpleMessage msg, 2: string name);
}

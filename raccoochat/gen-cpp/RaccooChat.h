/**
 * Autogenerated by Thrift Compiler (0.10.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef RaccooChat_H
#define RaccooChat_H

#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>
#include "raccoochat_types.h"

namespace raccoochat {

#ifdef _WIN32
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

class RaccooChatIf {
 public:
  virtual ~RaccooChatIf() {}
  virtual bool findUser(const std::string& name) = 0;
  virtual bool connectUser(const std::string& name) = 0;
  virtual void disconnectUser(const std::string& name) = 0;
  virtual void getAllOnlineUsers(std::map<std::string, User> & _return) = 0;
  virtual void getNewMessages(std::vector<SimpleMessage> & _return, const std::string& name) = 0;
  virtual void getNewPrivateMessages(std::vector<SimpleMessage> & _return, const std::string& name) = 0;
  virtual void getLastFiveMessages(std::vector<SimpleMessage> & _return) = 0;
  virtual void addMessage(const SimpleMessage& msg) = 0;
  virtual void addPrivateMessage(const SimpleMessage& msg, const std::string& name) = 0;
};

class RaccooChatIfFactory {
 public:
  typedef RaccooChatIf Handler;

  virtual ~RaccooChatIfFactory() {}

  virtual RaccooChatIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(RaccooChatIf* /* handler */) = 0;
};

class RaccooChatIfSingletonFactory : virtual public RaccooChatIfFactory {
 public:
  RaccooChatIfSingletonFactory(const boost::shared_ptr<RaccooChatIf>& iface) : iface_(iface) {}
  virtual ~RaccooChatIfSingletonFactory() {}

  virtual RaccooChatIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(RaccooChatIf* /* handler */) {}

 protected:
  boost::shared_ptr<RaccooChatIf> iface_;
};

class RaccooChatNull : virtual public RaccooChatIf {
 public:
  virtual ~RaccooChatNull() {}
  bool findUser(const std::string& /* name */) {
    bool _return = false;
    return _return;
  }
  bool connectUser(const std::string& /* name */) {
    bool _return = false;
    return _return;
  }
  void disconnectUser(const std::string& /* name */) {
    return;
  }
  void getAllOnlineUsers(std::map<std::string, User> & /* _return */) {
    return;
  }
  void getNewMessages(std::vector<SimpleMessage> & /* _return */, const std::string& /* name */) {
    return;
  }
  void getNewPrivateMessages(std::vector<SimpleMessage> & /* _return */, const std::string& /* name */) {
    return;
  }
  void getLastFiveMessages(std::vector<SimpleMessage> & /* _return */) {
    return;
  }
  void addMessage(const SimpleMessage& /* msg */) {
    return;
  }
  void addPrivateMessage(const SimpleMessage& /* msg */, const std::string& /* name */) {
    return;
  }
};

typedef struct _RaccooChat_findUser_args__isset {
  _RaccooChat_findUser_args__isset() : name(false) {}
  bool name :1;
} _RaccooChat_findUser_args__isset;

class RaccooChat_findUser_args {
 public:

  RaccooChat_findUser_args(const RaccooChat_findUser_args&);
  RaccooChat_findUser_args& operator=(const RaccooChat_findUser_args&);
  RaccooChat_findUser_args() : name() {
  }

  virtual ~RaccooChat_findUser_args() throw();
  std::string name;

  _RaccooChat_findUser_args__isset __isset;

  void __set_name(const std::string& val);

  bool operator == (const RaccooChat_findUser_args & rhs) const
  {
    if (!(name == rhs.name))
      return false;
    return true;
  }
  bool operator != (const RaccooChat_findUser_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RaccooChat_findUser_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class RaccooChat_findUser_pargs {
 public:


  virtual ~RaccooChat_findUser_pargs() throw();
  const std::string* name;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _RaccooChat_findUser_result__isset {
  _RaccooChat_findUser_result__isset() : success(false) {}
  bool success :1;
} _RaccooChat_findUser_result__isset;

class RaccooChat_findUser_result {
 public:

  RaccooChat_findUser_result(const RaccooChat_findUser_result&);
  RaccooChat_findUser_result& operator=(const RaccooChat_findUser_result&);
  RaccooChat_findUser_result() : success(0) {
  }

  virtual ~RaccooChat_findUser_result() throw();
  bool success;

  _RaccooChat_findUser_result__isset __isset;

  void __set_success(const bool val);

  bool operator == (const RaccooChat_findUser_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const RaccooChat_findUser_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RaccooChat_findUser_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _RaccooChat_findUser_presult__isset {
  _RaccooChat_findUser_presult__isset() : success(false) {}
  bool success :1;
} _RaccooChat_findUser_presult__isset;

class RaccooChat_findUser_presult {
 public:


  virtual ~RaccooChat_findUser_presult() throw();
  bool* success;

  _RaccooChat_findUser_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _RaccooChat_connectUser_args__isset {
  _RaccooChat_connectUser_args__isset() : name(false) {}
  bool name :1;
} _RaccooChat_connectUser_args__isset;

class RaccooChat_connectUser_args {
 public:

  RaccooChat_connectUser_args(const RaccooChat_connectUser_args&);
  RaccooChat_connectUser_args& operator=(const RaccooChat_connectUser_args&);
  RaccooChat_connectUser_args() : name() {
  }

  virtual ~RaccooChat_connectUser_args() throw();
  std::string name;

  _RaccooChat_connectUser_args__isset __isset;

  void __set_name(const std::string& val);

  bool operator == (const RaccooChat_connectUser_args & rhs) const
  {
    if (!(name == rhs.name))
      return false;
    return true;
  }
  bool operator != (const RaccooChat_connectUser_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RaccooChat_connectUser_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class RaccooChat_connectUser_pargs {
 public:


  virtual ~RaccooChat_connectUser_pargs() throw();
  const std::string* name;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _RaccooChat_connectUser_result__isset {
  _RaccooChat_connectUser_result__isset() : success(false) {}
  bool success :1;
} _RaccooChat_connectUser_result__isset;

class RaccooChat_connectUser_result {
 public:

  RaccooChat_connectUser_result(const RaccooChat_connectUser_result&);
  RaccooChat_connectUser_result& operator=(const RaccooChat_connectUser_result&);
  RaccooChat_connectUser_result() : success(0) {
  }

  virtual ~RaccooChat_connectUser_result() throw();
  bool success;

  _RaccooChat_connectUser_result__isset __isset;

  void __set_success(const bool val);

  bool operator == (const RaccooChat_connectUser_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const RaccooChat_connectUser_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RaccooChat_connectUser_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _RaccooChat_connectUser_presult__isset {
  _RaccooChat_connectUser_presult__isset() : success(false) {}
  bool success :1;
} _RaccooChat_connectUser_presult__isset;

class RaccooChat_connectUser_presult {
 public:


  virtual ~RaccooChat_connectUser_presult() throw();
  bool* success;

  _RaccooChat_connectUser_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _RaccooChat_disconnectUser_args__isset {
  _RaccooChat_disconnectUser_args__isset() : name(false) {}
  bool name :1;
} _RaccooChat_disconnectUser_args__isset;

class RaccooChat_disconnectUser_args {
 public:

  RaccooChat_disconnectUser_args(const RaccooChat_disconnectUser_args&);
  RaccooChat_disconnectUser_args& operator=(const RaccooChat_disconnectUser_args&);
  RaccooChat_disconnectUser_args() : name() {
  }

  virtual ~RaccooChat_disconnectUser_args() throw();
  std::string name;

  _RaccooChat_disconnectUser_args__isset __isset;

  void __set_name(const std::string& val);

  bool operator == (const RaccooChat_disconnectUser_args & rhs) const
  {
    if (!(name == rhs.name))
      return false;
    return true;
  }
  bool operator != (const RaccooChat_disconnectUser_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RaccooChat_disconnectUser_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class RaccooChat_disconnectUser_pargs {
 public:


  virtual ~RaccooChat_disconnectUser_pargs() throw();
  const std::string* name;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class RaccooChat_disconnectUser_result {
 public:

  RaccooChat_disconnectUser_result(const RaccooChat_disconnectUser_result&);
  RaccooChat_disconnectUser_result& operator=(const RaccooChat_disconnectUser_result&);
  RaccooChat_disconnectUser_result() {
  }

  virtual ~RaccooChat_disconnectUser_result() throw();

  bool operator == (const RaccooChat_disconnectUser_result & /* rhs */) const
  {
    return true;
  }
  bool operator != (const RaccooChat_disconnectUser_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RaccooChat_disconnectUser_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class RaccooChat_disconnectUser_presult {
 public:


  virtual ~RaccooChat_disconnectUser_presult() throw();

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};


class RaccooChat_getAllOnlineUsers_args {
 public:

  RaccooChat_getAllOnlineUsers_args(const RaccooChat_getAllOnlineUsers_args&);
  RaccooChat_getAllOnlineUsers_args& operator=(const RaccooChat_getAllOnlineUsers_args&);
  RaccooChat_getAllOnlineUsers_args() {
  }

  virtual ~RaccooChat_getAllOnlineUsers_args() throw();

  bool operator == (const RaccooChat_getAllOnlineUsers_args & /* rhs */) const
  {
    return true;
  }
  bool operator != (const RaccooChat_getAllOnlineUsers_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RaccooChat_getAllOnlineUsers_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class RaccooChat_getAllOnlineUsers_pargs {
 public:


  virtual ~RaccooChat_getAllOnlineUsers_pargs() throw();

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _RaccooChat_getAllOnlineUsers_result__isset {
  _RaccooChat_getAllOnlineUsers_result__isset() : success(false) {}
  bool success :1;
} _RaccooChat_getAllOnlineUsers_result__isset;

class RaccooChat_getAllOnlineUsers_result {
 public:

  RaccooChat_getAllOnlineUsers_result(const RaccooChat_getAllOnlineUsers_result&);
  RaccooChat_getAllOnlineUsers_result& operator=(const RaccooChat_getAllOnlineUsers_result&);
  RaccooChat_getAllOnlineUsers_result() {
  }

  virtual ~RaccooChat_getAllOnlineUsers_result() throw();
  std::map<std::string, User>  success;

  _RaccooChat_getAllOnlineUsers_result__isset __isset;

  void __set_success(const std::map<std::string, User> & val);

  bool operator == (const RaccooChat_getAllOnlineUsers_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const RaccooChat_getAllOnlineUsers_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RaccooChat_getAllOnlineUsers_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _RaccooChat_getAllOnlineUsers_presult__isset {
  _RaccooChat_getAllOnlineUsers_presult__isset() : success(false) {}
  bool success :1;
} _RaccooChat_getAllOnlineUsers_presult__isset;

class RaccooChat_getAllOnlineUsers_presult {
 public:


  virtual ~RaccooChat_getAllOnlineUsers_presult() throw();
  std::map<std::string, User> * success;

  _RaccooChat_getAllOnlineUsers_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _RaccooChat_getNewMessages_args__isset {
  _RaccooChat_getNewMessages_args__isset() : name(false) {}
  bool name :1;
} _RaccooChat_getNewMessages_args__isset;

class RaccooChat_getNewMessages_args {
 public:

  RaccooChat_getNewMessages_args(const RaccooChat_getNewMessages_args&);
  RaccooChat_getNewMessages_args& operator=(const RaccooChat_getNewMessages_args&);
  RaccooChat_getNewMessages_args() : name() {
  }

  virtual ~RaccooChat_getNewMessages_args() throw();
  std::string name;

  _RaccooChat_getNewMessages_args__isset __isset;

  void __set_name(const std::string& val);

  bool operator == (const RaccooChat_getNewMessages_args & rhs) const
  {
    if (!(name == rhs.name))
      return false;
    return true;
  }
  bool operator != (const RaccooChat_getNewMessages_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RaccooChat_getNewMessages_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class RaccooChat_getNewMessages_pargs {
 public:


  virtual ~RaccooChat_getNewMessages_pargs() throw();
  const std::string* name;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _RaccooChat_getNewMessages_result__isset {
  _RaccooChat_getNewMessages_result__isset() : success(false) {}
  bool success :1;
} _RaccooChat_getNewMessages_result__isset;

class RaccooChat_getNewMessages_result {
 public:

  RaccooChat_getNewMessages_result(const RaccooChat_getNewMessages_result&);
  RaccooChat_getNewMessages_result& operator=(const RaccooChat_getNewMessages_result&);
  RaccooChat_getNewMessages_result() {
  }

  virtual ~RaccooChat_getNewMessages_result() throw();
  std::vector<SimpleMessage>  success;

  _RaccooChat_getNewMessages_result__isset __isset;

  void __set_success(const std::vector<SimpleMessage> & val);

  bool operator == (const RaccooChat_getNewMessages_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const RaccooChat_getNewMessages_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RaccooChat_getNewMessages_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _RaccooChat_getNewMessages_presult__isset {
  _RaccooChat_getNewMessages_presult__isset() : success(false) {}
  bool success :1;
} _RaccooChat_getNewMessages_presult__isset;

class RaccooChat_getNewMessages_presult {
 public:


  virtual ~RaccooChat_getNewMessages_presult() throw();
  std::vector<SimpleMessage> * success;

  _RaccooChat_getNewMessages_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _RaccooChat_getNewPrivateMessages_args__isset {
  _RaccooChat_getNewPrivateMessages_args__isset() : name(false) {}
  bool name :1;
} _RaccooChat_getNewPrivateMessages_args__isset;

class RaccooChat_getNewPrivateMessages_args {
 public:

  RaccooChat_getNewPrivateMessages_args(const RaccooChat_getNewPrivateMessages_args&);
  RaccooChat_getNewPrivateMessages_args& operator=(const RaccooChat_getNewPrivateMessages_args&);
  RaccooChat_getNewPrivateMessages_args() : name() {
  }

  virtual ~RaccooChat_getNewPrivateMessages_args() throw();
  std::string name;

  _RaccooChat_getNewPrivateMessages_args__isset __isset;

  void __set_name(const std::string& val);

  bool operator == (const RaccooChat_getNewPrivateMessages_args & rhs) const
  {
    if (!(name == rhs.name))
      return false;
    return true;
  }
  bool operator != (const RaccooChat_getNewPrivateMessages_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RaccooChat_getNewPrivateMessages_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class RaccooChat_getNewPrivateMessages_pargs {
 public:


  virtual ~RaccooChat_getNewPrivateMessages_pargs() throw();
  const std::string* name;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _RaccooChat_getNewPrivateMessages_result__isset {
  _RaccooChat_getNewPrivateMessages_result__isset() : success(false) {}
  bool success :1;
} _RaccooChat_getNewPrivateMessages_result__isset;

class RaccooChat_getNewPrivateMessages_result {
 public:

  RaccooChat_getNewPrivateMessages_result(const RaccooChat_getNewPrivateMessages_result&);
  RaccooChat_getNewPrivateMessages_result& operator=(const RaccooChat_getNewPrivateMessages_result&);
  RaccooChat_getNewPrivateMessages_result() {
  }

  virtual ~RaccooChat_getNewPrivateMessages_result() throw();
  std::vector<SimpleMessage>  success;

  _RaccooChat_getNewPrivateMessages_result__isset __isset;

  void __set_success(const std::vector<SimpleMessage> & val);

  bool operator == (const RaccooChat_getNewPrivateMessages_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const RaccooChat_getNewPrivateMessages_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RaccooChat_getNewPrivateMessages_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _RaccooChat_getNewPrivateMessages_presult__isset {
  _RaccooChat_getNewPrivateMessages_presult__isset() : success(false) {}
  bool success :1;
} _RaccooChat_getNewPrivateMessages_presult__isset;

class RaccooChat_getNewPrivateMessages_presult {
 public:


  virtual ~RaccooChat_getNewPrivateMessages_presult() throw();
  std::vector<SimpleMessage> * success;

  _RaccooChat_getNewPrivateMessages_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};


class RaccooChat_getLastFiveMessages_args {
 public:

  RaccooChat_getLastFiveMessages_args(const RaccooChat_getLastFiveMessages_args&);
  RaccooChat_getLastFiveMessages_args& operator=(const RaccooChat_getLastFiveMessages_args&);
  RaccooChat_getLastFiveMessages_args() {
  }

  virtual ~RaccooChat_getLastFiveMessages_args() throw();

  bool operator == (const RaccooChat_getLastFiveMessages_args & /* rhs */) const
  {
    return true;
  }
  bool operator != (const RaccooChat_getLastFiveMessages_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RaccooChat_getLastFiveMessages_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class RaccooChat_getLastFiveMessages_pargs {
 public:


  virtual ~RaccooChat_getLastFiveMessages_pargs() throw();

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _RaccooChat_getLastFiveMessages_result__isset {
  _RaccooChat_getLastFiveMessages_result__isset() : success(false) {}
  bool success :1;
} _RaccooChat_getLastFiveMessages_result__isset;

class RaccooChat_getLastFiveMessages_result {
 public:

  RaccooChat_getLastFiveMessages_result(const RaccooChat_getLastFiveMessages_result&);
  RaccooChat_getLastFiveMessages_result& operator=(const RaccooChat_getLastFiveMessages_result&);
  RaccooChat_getLastFiveMessages_result() {
  }

  virtual ~RaccooChat_getLastFiveMessages_result() throw();
  std::vector<SimpleMessage>  success;

  _RaccooChat_getLastFiveMessages_result__isset __isset;

  void __set_success(const std::vector<SimpleMessage> & val);

  bool operator == (const RaccooChat_getLastFiveMessages_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const RaccooChat_getLastFiveMessages_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RaccooChat_getLastFiveMessages_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _RaccooChat_getLastFiveMessages_presult__isset {
  _RaccooChat_getLastFiveMessages_presult__isset() : success(false) {}
  bool success :1;
} _RaccooChat_getLastFiveMessages_presult__isset;

class RaccooChat_getLastFiveMessages_presult {
 public:


  virtual ~RaccooChat_getLastFiveMessages_presult() throw();
  std::vector<SimpleMessage> * success;

  _RaccooChat_getLastFiveMessages_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _RaccooChat_addMessage_args__isset {
  _RaccooChat_addMessage_args__isset() : msg(false) {}
  bool msg :1;
} _RaccooChat_addMessage_args__isset;

class RaccooChat_addMessage_args {
 public:

  RaccooChat_addMessage_args(const RaccooChat_addMessage_args&);
  RaccooChat_addMessage_args& operator=(const RaccooChat_addMessage_args&);
  RaccooChat_addMessage_args() {
  }

  virtual ~RaccooChat_addMessage_args() throw();
  SimpleMessage msg;

  _RaccooChat_addMessage_args__isset __isset;

  void __set_msg(const SimpleMessage& val);

  bool operator == (const RaccooChat_addMessage_args & rhs) const
  {
    if (!(msg == rhs.msg))
      return false;
    return true;
  }
  bool operator != (const RaccooChat_addMessage_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RaccooChat_addMessage_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class RaccooChat_addMessage_pargs {
 public:


  virtual ~RaccooChat_addMessage_pargs() throw();
  const SimpleMessage* msg;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class RaccooChat_addMessage_result {
 public:

  RaccooChat_addMessage_result(const RaccooChat_addMessage_result&);
  RaccooChat_addMessage_result& operator=(const RaccooChat_addMessage_result&);
  RaccooChat_addMessage_result() {
  }

  virtual ~RaccooChat_addMessage_result() throw();

  bool operator == (const RaccooChat_addMessage_result & /* rhs */) const
  {
    return true;
  }
  bool operator != (const RaccooChat_addMessage_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RaccooChat_addMessage_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class RaccooChat_addMessage_presult {
 public:


  virtual ~RaccooChat_addMessage_presult() throw();

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _RaccooChat_addPrivateMessage_args__isset {
  _RaccooChat_addPrivateMessage_args__isset() : msg(false), name(false) {}
  bool msg :1;
  bool name :1;
} _RaccooChat_addPrivateMessage_args__isset;

class RaccooChat_addPrivateMessage_args {
 public:

  RaccooChat_addPrivateMessage_args(const RaccooChat_addPrivateMessage_args&);
  RaccooChat_addPrivateMessage_args& operator=(const RaccooChat_addPrivateMessage_args&);
  RaccooChat_addPrivateMessage_args() : name() {
  }

  virtual ~RaccooChat_addPrivateMessage_args() throw();
  SimpleMessage msg;
  std::string name;

  _RaccooChat_addPrivateMessage_args__isset __isset;

  void __set_msg(const SimpleMessage& val);

  void __set_name(const std::string& val);

  bool operator == (const RaccooChat_addPrivateMessage_args & rhs) const
  {
    if (!(msg == rhs.msg))
      return false;
    if (!(name == rhs.name))
      return false;
    return true;
  }
  bool operator != (const RaccooChat_addPrivateMessage_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RaccooChat_addPrivateMessage_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class RaccooChat_addPrivateMessage_pargs {
 public:


  virtual ~RaccooChat_addPrivateMessage_pargs() throw();
  const SimpleMessage* msg;
  const std::string* name;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class RaccooChat_addPrivateMessage_result {
 public:

  RaccooChat_addPrivateMessage_result(const RaccooChat_addPrivateMessage_result&);
  RaccooChat_addPrivateMessage_result& operator=(const RaccooChat_addPrivateMessage_result&);
  RaccooChat_addPrivateMessage_result() {
  }

  virtual ~RaccooChat_addPrivateMessage_result() throw();

  bool operator == (const RaccooChat_addPrivateMessage_result & /* rhs */) const
  {
    return true;
  }
  bool operator != (const RaccooChat_addPrivateMessage_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RaccooChat_addPrivateMessage_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class RaccooChat_addPrivateMessage_presult {
 public:


  virtual ~RaccooChat_addPrivateMessage_presult() throw();

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class RaccooChatClient : virtual public RaccooChatIf {
 public:
  RaccooChatClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  RaccooChatClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  bool findUser(const std::string& name);
  void send_findUser(const std::string& name);
  bool recv_findUser();
  bool connectUser(const std::string& name);
  void send_connectUser(const std::string& name);
  bool recv_connectUser();
  void disconnectUser(const std::string& name);
  void send_disconnectUser(const std::string& name);
  void recv_disconnectUser();
  void getAllOnlineUsers(std::map<std::string, User> & _return);
  void send_getAllOnlineUsers();
  void recv_getAllOnlineUsers(std::map<std::string, User> & _return);
  void getNewMessages(std::vector<SimpleMessage> & _return, const std::string& name);
  void send_getNewMessages(const std::string& name);
  void recv_getNewMessages(std::vector<SimpleMessage> & _return);
  void getNewPrivateMessages(std::vector<SimpleMessage> & _return, const std::string& name);
  void send_getNewPrivateMessages(const std::string& name);
  void recv_getNewPrivateMessages(std::vector<SimpleMessage> & _return);
  void getLastFiveMessages(std::vector<SimpleMessage> & _return);
  void send_getLastFiveMessages();
  void recv_getLastFiveMessages(std::vector<SimpleMessage> & _return);
  void addMessage(const SimpleMessage& msg);
  void send_addMessage(const SimpleMessage& msg);
  void recv_addMessage();
  void addPrivateMessage(const SimpleMessage& msg, const std::string& name);
  void send_addPrivateMessage(const SimpleMessage& msg, const std::string& name);
  void recv_addPrivateMessage();
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class RaccooChatProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  boost::shared_ptr<RaccooChatIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (RaccooChatProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_findUser(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_connectUser(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_disconnectUser(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_getAllOnlineUsers(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_getNewMessages(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_getNewPrivateMessages(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_getLastFiveMessages(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_addMessage(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_addPrivateMessage(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  RaccooChatProcessor(boost::shared_ptr<RaccooChatIf> iface) :
    iface_(iface) {
    processMap_["findUser"] = &RaccooChatProcessor::process_findUser;
    processMap_["connectUser"] = &RaccooChatProcessor::process_connectUser;
    processMap_["disconnectUser"] = &RaccooChatProcessor::process_disconnectUser;
    processMap_["getAllOnlineUsers"] = &RaccooChatProcessor::process_getAllOnlineUsers;
    processMap_["getNewMessages"] = &RaccooChatProcessor::process_getNewMessages;
    processMap_["getNewPrivateMessages"] = &RaccooChatProcessor::process_getNewPrivateMessages;
    processMap_["getLastFiveMessages"] = &RaccooChatProcessor::process_getLastFiveMessages;
    processMap_["addMessage"] = &RaccooChatProcessor::process_addMessage;
    processMap_["addPrivateMessage"] = &RaccooChatProcessor::process_addPrivateMessage;
  }

  virtual ~RaccooChatProcessor() {}
};

class RaccooChatProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  RaccooChatProcessorFactory(const ::boost::shared_ptr< RaccooChatIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::boost::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::boost::shared_ptr< RaccooChatIfFactory > handlerFactory_;
};

class RaccooChatMultiface : virtual public RaccooChatIf {
 public:
  RaccooChatMultiface(std::vector<boost::shared_ptr<RaccooChatIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~RaccooChatMultiface() {}
 protected:
  std::vector<boost::shared_ptr<RaccooChatIf> > ifaces_;
  RaccooChatMultiface() {}
  void add(boost::shared_ptr<RaccooChatIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  bool findUser(const std::string& name) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->findUser(name);
    }
    return ifaces_[i]->findUser(name);
  }

  bool connectUser(const std::string& name) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->connectUser(name);
    }
    return ifaces_[i]->connectUser(name);
  }

  void disconnectUser(const std::string& name) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->disconnectUser(name);
    }
    ifaces_[i]->disconnectUser(name);
  }

  void getAllOnlineUsers(std::map<std::string, User> & _return) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->getAllOnlineUsers(_return);
    }
    ifaces_[i]->getAllOnlineUsers(_return);
    return;
  }

  void getNewMessages(std::vector<SimpleMessage> & _return, const std::string& name) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->getNewMessages(_return, name);
    }
    ifaces_[i]->getNewMessages(_return, name);
    return;
  }

  void getNewPrivateMessages(std::vector<SimpleMessage> & _return, const std::string& name) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->getNewPrivateMessages(_return, name);
    }
    ifaces_[i]->getNewPrivateMessages(_return, name);
    return;
  }

  void getLastFiveMessages(std::vector<SimpleMessage> & _return) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->getLastFiveMessages(_return);
    }
    ifaces_[i]->getLastFiveMessages(_return);
    return;
  }

  void addMessage(const SimpleMessage& msg) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->addMessage(msg);
    }
    ifaces_[i]->addMessage(msg);
  }

  void addPrivateMessage(const SimpleMessage& msg, const std::string& name) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->addPrivateMessage(msg, name);
    }
    ifaces_[i]->addPrivateMessage(msg, name);
  }

};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
class RaccooChatConcurrentClient : virtual public RaccooChatIf {
 public:
  RaccooChatConcurrentClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  RaccooChatConcurrentClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  bool findUser(const std::string& name);
  int32_t send_findUser(const std::string& name);
  bool recv_findUser(const int32_t seqid);
  bool connectUser(const std::string& name);
  int32_t send_connectUser(const std::string& name);
  bool recv_connectUser(const int32_t seqid);
  void disconnectUser(const std::string& name);
  int32_t send_disconnectUser(const std::string& name);
  void recv_disconnectUser(const int32_t seqid);
  void getAllOnlineUsers(std::map<std::string, User> & _return);
  int32_t send_getAllOnlineUsers();
  void recv_getAllOnlineUsers(std::map<std::string, User> & _return, const int32_t seqid);
  void getNewMessages(std::vector<SimpleMessage> & _return, const std::string& name);
  int32_t send_getNewMessages(const std::string& name);
  void recv_getNewMessages(std::vector<SimpleMessage> & _return, const int32_t seqid);
  void getNewPrivateMessages(std::vector<SimpleMessage> & _return, const std::string& name);
  int32_t send_getNewPrivateMessages(const std::string& name);
  void recv_getNewPrivateMessages(std::vector<SimpleMessage> & _return, const int32_t seqid);
  void getLastFiveMessages(std::vector<SimpleMessage> & _return);
  int32_t send_getLastFiveMessages();
  void recv_getLastFiveMessages(std::vector<SimpleMessage> & _return, const int32_t seqid);
  void addMessage(const SimpleMessage& msg);
  int32_t send_addMessage(const SimpleMessage& msg);
  void recv_addMessage(const int32_t seqid);
  void addPrivateMessage(const SimpleMessage& msg, const std::string& name);
  int32_t send_addPrivateMessage(const SimpleMessage& msg, const std::string& name);
  void recv_addPrivateMessage(const int32_t seqid);
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
  ::apache::thrift::async::TConcurrentClientSyncInfo sync_;
};

#ifdef _WIN32
  #pragma warning( pop )
#endif

} // namespace

#endif

/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef proxy_TYPES_H
#define proxy_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>



namespace accumulo {

struct PartialKey {
  enum type {
    ROW = 0,
    ROW_COLFAM = 1,
    ROW_COLFAM_COLQUAL = 2,
    ROW_COLFAM_COLQUAL_COLVIS = 3,
    ROW_COLFAM_COLQUAL_COLVIS_TIME = 4,
    ROW_COLFAM_COLQUAL_COLVIS_TIME_DEL = 5
  };
};

extern const std::map<int, const char*> _PartialKey_VALUES_TO_NAMES;

struct TablePermission {
  enum type {
    READ = 2,
    WRITE = 3,
    BULK_IMPORT = 4,
    ALTER_TABLE = 5,
    GRANT = 6,
    DROP_TABLE = 7
  };
};

extern const std::map<int, const char*> _TablePermission_VALUES_TO_NAMES;

struct SystemPermission {
  enum type {
    GRANT = 0,
    CREATE_TABLE = 1,
    DROP_TABLE = 2,
    ALTER_TABLE = 3,
    CREATE_USER = 4,
    DROP_USER = 5,
    ALTER_USER = 6,
    SYSTEM = 7
  };
};

extern const std::map<int, const char*> _SystemPermission_VALUES_TO_NAMES;

struct ScanType {
  enum type {
    SINGLE = 0,
    BATCH = 1
  };
};

extern const std::map<int, const char*> _ScanType_VALUES_TO_NAMES;

struct ScanState {
  enum type {
    IDLE = 0,
    RUNNING = 1,
    QUEUED = 2
  };
};

extern const std::map<int, const char*> _ScanState_VALUES_TO_NAMES;

struct CompactionType {
  enum type {
    MINOR = 0,
    MERGE = 1,
    MAJOR = 2,
    FULL = 3
  };
};

extern const std::map<int, const char*> _CompactionType_VALUES_TO_NAMES;

struct CompactionReason {
  enum type {
    USER = 0,
    SYSTEM = 1,
    CHOP = 2,
    IDLE = 3,
    CLOSE = 4
  };
};

extern const std::map<int, const char*> _CompactionReason_VALUES_TO_NAMES;

struct IteratorScope {
  enum type {
    MINC = 0,
    MAJC = 1,
    SCAN = 2
  };
};

extern const std::map<int, const char*> _IteratorScope_VALUES_TO_NAMES;

struct TimeType {
  enum type {
    LOGICAL = 0,
    MILLIS = 1
  };
};

extern const std::map<int, const char*> _TimeType_VALUES_TO_NAMES;

typedef struct _Key__isset {
  _Key__isset() : row(false), colFamily(false), colQualifier(false), colVisibility(false), timestamp(false) {}
  bool row;
  bool colFamily;
  bool colQualifier;
  bool colVisibility;
  bool timestamp;
} _Key__isset;

class Key {
 public:

  static const char* ascii_fingerprint; // = "91151A432E03F5E8564877B5194B48E2";
  static const uint8_t binary_fingerprint[16]; // = {0x91,0x15,0x1A,0x43,0x2E,0x03,0xF5,0xE8,0x56,0x48,0x77,0xB5,0x19,0x4B,0x48,0xE2};

  Key() : row(), colFamily(), colQualifier(), colVisibility(), timestamp(0) {
  }

  virtual ~Key() throw() {}

  std::string row;
  std::string colFamily;
  std::string colQualifier;
  std::string colVisibility;
  int64_t timestamp;

  _Key__isset __isset;

  void __set_row(const std::string& val) {
    row = val;
  }

  void __set_colFamily(const std::string& val) {
    colFamily = val;
  }

  void __set_colQualifier(const std::string& val) {
    colQualifier = val;
  }

  void __set_colVisibility(const std::string& val) {
    colVisibility = val;
  }

  void __set_timestamp(const int64_t val) {
    timestamp = val;
    __isset.timestamp = true;
  }

  bool operator == (const Key & rhs) const
  {
    if (!(row == rhs.row))
      return false;
    if (!(colFamily == rhs.colFamily))
      return false;
    if (!(colQualifier == rhs.colQualifier))
      return false;
    if (!(colVisibility == rhs.colVisibility))
      return false;
    if (__isset.timestamp != rhs.__isset.timestamp)
      return false;
    else if (__isset.timestamp && !(timestamp == rhs.timestamp))
      return false;
    return true;
  }
  bool operator != (const Key &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Key & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(Key &a, Key &b);

typedef struct _ColumnUpdate__isset {
  _ColumnUpdate__isset() : colFamily(false), colQualifier(false), colVisibility(false), timestamp(false), value(false), deleteCell(false) {}
  bool colFamily;
  bool colQualifier;
  bool colVisibility;
  bool timestamp;
  bool value;
  bool deleteCell;
} _ColumnUpdate__isset;

class ColumnUpdate {
 public:

  static const char* ascii_fingerprint; // = "65CC1863F7DDC1DE75B9EAF9E2DC0D1F";
  static const uint8_t binary_fingerprint[16]; // = {0x65,0xCC,0x18,0x63,0xF7,0xDD,0xC1,0xDE,0x75,0xB9,0xEA,0xF9,0xE2,0xDC,0x0D,0x1F};

  ColumnUpdate() : colFamily(), colQualifier(), colVisibility(), timestamp(0), value(), deleteCell(0) {
  }

  virtual ~ColumnUpdate() throw() {}

  std::string colFamily;
  std::string colQualifier;
  std::string colVisibility;
  int64_t timestamp;
  std::string value;
  bool deleteCell;

  _ColumnUpdate__isset __isset;

  void __set_colFamily(const std::string& val) {
    colFamily = val;
  }

  void __set_colQualifier(const std::string& val) {
    colQualifier = val;
  }

  void __set_colVisibility(const std::string& val) {
    colVisibility = val;
    __isset.colVisibility = true;
  }

  void __set_timestamp(const int64_t val) {
    timestamp = val;
    __isset.timestamp = true;
  }

  void __set_value(const std::string& val) {
    value = val;
    __isset.value = true;
  }

  void __set_deleteCell(const bool val) {
    deleteCell = val;
    __isset.deleteCell = true;
  }

  bool operator == (const ColumnUpdate & rhs) const
  {
    if (!(colFamily == rhs.colFamily))
      return false;
    if (!(colQualifier == rhs.colQualifier))
      return false;
    if (__isset.colVisibility != rhs.__isset.colVisibility)
      return false;
    else if (__isset.colVisibility && !(colVisibility == rhs.colVisibility))
      return false;
    if (__isset.timestamp != rhs.__isset.timestamp)
      return false;
    else if (__isset.timestamp && !(timestamp == rhs.timestamp))
      return false;
    if (__isset.value != rhs.__isset.value)
      return false;
    else if (__isset.value && !(value == rhs.value))
      return false;
    if (__isset.deleteCell != rhs.__isset.deleteCell)
      return false;
    else if (__isset.deleteCell && !(deleteCell == rhs.deleteCell))
      return false;
    return true;
  }
  bool operator != (const ColumnUpdate &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ColumnUpdate & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(ColumnUpdate &a, ColumnUpdate &b);

typedef struct _KeyValue__isset {
  _KeyValue__isset() : key(false), value(false) {}
  bool key;
  bool value;
} _KeyValue__isset;

class KeyValue {
 public:

  static const char* ascii_fingerprint; // = "0D0CA44F233F983E00E94228C31ABBD4";
  static const uint8_t binary_fingerprint[16]; // = {0x0D,0x0C,0xA4,0x4F,0x23,0x3F,0x98,0x3E,0x00,0xE9,0x42,0x28,0xC3,0x1A,0xBB,0xD4};

  KeyValue() : value() {
  }

  virtual ~KeyValue() throw() {}

  Key key;
  std::string value;

  _KeyValue__isset __isset;

  void __set_key(const Key& val) {
    key = val;
  }

  void __set_value(const std::string& val) {
    value = val;
  }

  bool operator == (const KeyValue & rhs) const
  {
    if (!(key == rhs.key))
      return false;
    if (!(value == rhs.value))
      return false;
    return true;
  }
  bool operator != (const KeyValue &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const KeyValue & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(KeyValue &a, KeyValue &b);

typedef struct _ScanResult__isset {
  _ScanResult__isset() : results(false), more(false) {}
  bool results;
  bool more;
} _ScanResult__isset;

class ScanResult {
 public:

  static const char* ascii_fingerprint; // = "684A3FCA76EA202FE071A17F8B510E7A";
  static const uint8_t binary_fingerprint[16]; // = {0x68,0x4A,0x3F,0xCA,0x76,0xEA,0x20,0x2F,0xE0,0x71,0xA1,0x7F,0x8B,0x51,0x0E,0x7A};

  ScanResult() : more(0) {
  }

  virtual ~ScanResult() throw() {}

  std::vector<KeyValue>  results;
  bool more;

  _ScanResult__isset __isset;

  void __set_results(const std::vector<KeyValue> & val) {
    results = val;
  }

  void __set_more(const bool val) {
    more = val;
  }

  bool operator == (const ScanResult & rhs) const
  {
    if (!(results == rhs.results))
      return false;
    if (!(more == rhs.more))
      return false;
    return true;
  }
  bool operator != (const ScanResult &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ScanResult & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(ScanResult &a, ScanResult &b);

typedef struct _Range__isset {
  _Range__isset() : start(false), startInclusive(false), stop(false), stopInclusive(false) {}
  bool start;
  bool startInclusive;
  bool stop;
  bool stopInclusive;
} _Range__isset;

class Range {
 public:

  static const char* ascii_fingerprint; // = "84C5BA8DB718E60BFBF3F83867647B45";
  static const uint8_t binary_fingerprint[16]; // = {0x84,0xC5,0xBA,0x8D,0xB7,0x18,0xE6,0x0B,0xFB,0xF3,0xF8,0x38,0x67,0x64,0x7B,0x45};

  Range() : startInclusive(0), stopInclusive(0) {
  }

  virtual ~Range() throw() {}

  Key start;
  bool startInclusive;
  Key stop;
  bool stopInclusive;

  _Range__isset __isset;

  void __set_start(const Key& val) {
    start = val;
  }

  void __set_startInclusive(const bool val) {
    startInclusive = val;
  }

  void __set_stop(const Key& val) {
    stop = val;
  }

  void __set_stopInclusive(const bool val) {
    stopInclusive = val;
  }

  bool operator == (const Range & rhs) const
  {
    if (!(start == rhs.start))
      return false;
    if (!(startInclusive == rhs.startInclusive))
      return false;
    if (!(stop == rhs.stop))
      return false;
    if (!(stopInclusive == rhs.stopInclusive))
      return false;
    return true;
  }
  bool operator != (const Range &rhs) const {
    return !(*this == rhs);
  }

  // CHANGE HERE
  bool operator < (const Range & ) const {
	return true;
  }

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(Range &a, Range &b);

typedef struct _ScanColumn__isset {
  _ScanColumn__isset() : colFamily(false), colQualifier(false) {}
  bool colFamily;
  bool colQualifier;
} _ScanColumn__isset;

class ScanColumn {
 public:

  static const char* ascii_fingerprint; // = "5B708A954C550ECA9C1A49D3C5CAFAB9";
  static const uint8_t binary_fingerprint[16]; // = {0x5B,0x70,0x8A,0x95,0x4C,0x55,0x0E,0xCA,0x9C,0x1A,0x49,0xD3,0xC5,0xCA,0xFA,0xB9};

  ScanColumn() : colFamily(), colQualifier() {
  }

  virtual ~ScanColumn() throw() {}

  std::string colFamily;
  std::string colQualifier;

  _ScanColumn__isset __isset;

  void __set_colFamily(const std::string& val) {
    colFamily = val;
  }

  void __set_colQualifier(const std::string& val) {
    colQualifier = val;
    __isset.colQualifier = true;
  }

  bool operator == (const ScanColumn & rhs) const
  {
    if (!(colFamily == rhs.colFamily))
      return false;
    if (__isset.colQualifier != rhs.__isset.colQualifier)
      return false;
    else if (__isset.colQualifier && !(colQualifier == rhs.colQualifier))
      return false;
    return true;
  }
  bool operator != (const ScanColumn &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ScanColumn & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(ScanColumn &a, ScanColumn &b);

typedef struct _IteratorSetting__isset {
  _IteratorSetting__isset() : priority(false), name(false), iteratorClass(false), properties(false) {}
  bool priority;
  bool name;
  bool iteratorClass;
  bool properties;
} _IteratorSetting__isset;

class IteratorSetting {
 public:

  static const char* ascii_fingerprint; // = "985C857916964E43205EAC92A157CB4E";
  static const uint8_t binary_fingerprint[16]; // = {0x98,0x5C,0x85,0x79,0x16,0x96,0x4E,0x43,0x20,0x5E,0xAC,0x92,0xA1,0x57,0xCB,0x4E};

  IteratorSetting() : priority(0), name(), iteratorClass() {
  }

  virtual ~IteratorSetting() throw() {}

  int32_t priority;
  std::string name;
  std::string iteratorClass;
  std::map<std::string, std::string>  properties;

  _IteratorSetting__isset __isset;

  void __set_priority(const int32_t val) {
    priority = val;
  }

  void __set_name(const std::string& val) {
    name = val;
  }

  void __set_iteratorClass(const std::string& val) {
    iteratorClass = val;
  }

  void __set_properties(const std::map<std::string, std::string> & val) {
    properties = val;
  }

  bool operator == (const IteratorSetting & rhs) const
  {
    if (!(priority == rhs.priority))
      return false;
    if (!(name == rhs.name))
      return false;
    if (!(iteratorClass == rhs.iteratorClass))
      return false;
    if (!(properties == rhs.properties))
      return false;
    return true;
  }
  bool operator != (const IteratorSetting &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const IteratorSetting & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(IteratorSetting &a, IteratorSetting &b);

typedef struct _ScanOptions__isset {
  _ScanOptions__isset() : authorizations(false), range(false), columns(false), iterators(false), bufferSize(false) {}
  bool authorizations;
  bool range;
  bool columns;
  bool iterators;
  bool bufferSize;
} _ScanOptions__isset;

class ScanOptions {
 public:

  static const char* ascii_fingerprint; // = "3D87D0CD05FA62E15880C4D2C595907C";
  static const uint8_t binary_fingerprint[16]; // = {0x3D,0x87,0xD0,0xCD,0x05,0xFA,0x62,0xE1,0x58,0x80,0xC4,0xD2,0xC5,0x95,0x90,0x7C};

  ScanOptions() : bufferSize(0) {
  }

  virtual ~ScanOptions() throw() {}

  std::set<std::string>  authorizations;
  Range range;
  std::vector<ScanColumn>  columns;
  std::vector<IteratorSetting>  iterators;
  int32_t bufferSize;

  _ScanOptions__isset __isset;

  void __set_authorizations(const std::set<std::string> & val) {
    authorizations = val;
    __isset.authorizations = true;
  }

  void __set_range(const Range& val) {
    range = val;
    __isset.range = true;
  }

  void __set_columns(const std::vector<ScanColumn> & val) {
    columns = val;
    __isset.columns = true;
  }

  void __set_iterators(const std::vector<IteratorSetting> & val) {
    iterators = val;
    __isset.iterators = true;
  }

  void __set_bufferSize(const int32_t val) {
    bufferSize = val;
    __isset.bufferSize = true;
  }

  bool operator == (const ScanOptions & rhs) const
  {
    if (__isset.authorizations != rhs.__isset.authorizations)
      return false;
    else if (__isset.authorizations && !(authorizations == rhs.authorizations))
      return false;
    if (__isset.range != rhs.__isset.range)
      return false;
    else if (__isset.range && !(range == rhs.range))
      return false;
    if (__isset.columns != rhs.__isset.columns)
      return false;
    else if (__isset.columns && !(columns == rhs.columns))
      return false;
    if (__isset.iterators != rhs.__isset.iterators)
      return false;
    else if (__isset.iterators && !(iterators == rhs.iterators))
      return false;
    if (__isset.bufferSize != rhs.__isset.bufferSize)
      return false;
    else if (__isset.bufferSize && !(bufferSize == rhs.bufferSize))
      return false;
    return true;
  }
  bool operator != (const ScanOptions &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ScanOptions & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(ScanOptions &a, ScanOptions &b);

typedef struct _BatchScanOptions__isset {
  _BatchScanOptions__isset() : authorizations(false), ranges(false), columns(false), iterators(false), threads(false) {}
  bool authorizations;
  bool ranges;
  bool columns;
  bool iterators;
  bool threads;
} _BatchScanOptions__isset;

class BatchScanOptions {
 public:

  static const char* ascii_fingerprint; // = "6ADFA1FBE31B1220D2C103284E002308";
  static const uint8_t binary_fingerprint[16]; // = {0x6A,0xDF,0xA1,0xFB,0xE3,0x1B,0x12,0x20,0xD2,0xC1,0x03,0x28,0x4E,0x00,0x23,0x08};

  BatchScanOptions() : threads(0) {
  }

  virtual ~BatchScanOptions() throw() {}

  std::set<std::string>  authorizations;
  std::vector<Range>  ranges;
  std::vector<ScanColumn>  columns;
  std::vector<IteratorSetting>  iterators;
  int32_t threads;

  _BatchScanOptions__isset __isset;

  void __set_authorizations(const std::set<std::string> & val) {
    authorizations = val;
    __isset.authorizations = true;
  }

  void __set_ranges(const std::vector<Range> & val) {
    ranges = val;
    __isset.ranges = true;
  }

  void __set_columns(const std::vector<ScanColumn> & val) {
    columns = val;
    __isset.columns = true;
  }

  void __set_iterators(const std::vector<IteratorSetting> & val) {
    iterators = val;
    __isset.iterators = true;
  }

  void __set_threads(const int32_t val) {
    threads = val;
    __isset.threads = true;
  }

  bool operator == (const BatchScanOptions & rhs) const
  {
    if (__isset.authorizations != rhs.__isset.authorizations)
      return false;
    else if (__isset.authorizations && !(authorizations == rhs.authorizations))
      return false;
    if (__isset.ranges != rhs.__isset.ranges)
      return false;
    else if (__isset.ranges && !(ranges == rhs.ranges))
      return false;
    if (__isset.columns != rhs.__isset.columns)
      return false;
    else if (__isset.columns && !(columns == rhs.columns))
      return false;
    if (__isset.iterators != rhs.__isset.iterators)
      return false;
    else if (__isset.iterators && !(iterators == rhs.iterators))
      return false;
    if (__isset.threads != rhs.__isset.threads)
      return false;
    else if (__isset.threads && !(threads == rhs.threads))
      return false;
    return true;
  }
  bool operator != (const BatchScanOptions &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const BatchScanOptions & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(BatchScanOptions &a, BatchScanOptions &b);

typedef struct _KeyValueAndPeek__isset {
  _KeyValueAndPeek__isset() : keyValue(false), hasNext(false) {}
  bool keyValue;
  bool hasNext;
} _KeyValueAndPeek__isset;

class KeyValueAndPeek {
 public:

  static const char* ascii_fingerprint; // = "CBBC6AB9C7EA5E5E748C13F970862FAB";
  static const uint8_t binary_fingerprint[16]; // = {0xCB,0xBC,0x6A,0xB9,0xC7,0xEA,0x5E,0x5E,0x74,0x8C,0x13,0xF9,0x70,0x86,0x2F,0xAB};

  KeyValueAndPeek() : hasNext(0) {
  }

  virtual ~KeyValueAndPeek() throw() {}

  KeyValue keyValue;
  bool hasNext;

  _KeyValueAndPeek__isset __isset;

  void __set_keyValue(const KeyValue& val) {
    keyValue = val;
  }

  void __set_hasNext(const bool val) {
    hasNext = val;
  }

  bool operator == (const KeyValueAndPeek & rhs) const
  {
    if (!(keyValue == rhs.keyValue))
      return false;
    if (!(hasNext == rhs.hasNext))
      return false;
    return true;
  }
  bool operator != (const KeyValueAndPeek &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const KeyValueAndPeek & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(KeyValueAndPeek &a, KeyValueAndPeek &b);

typedef struct _KeyExtent__isset {
  _KeyExtent__isset() : tableId(false), endRow(false), prevEndRow(false) {}
  bool tableId;
  bool endRow;
  bool prevEndRow;
} _KeyExtent__isset;

class KeyExtent {
 public:

  static const char* ascii_fingerprint; // = "AB879940BD15B6B25691265F7384B271";
  static const uint8_t binary_fingerprint[16]; // = {0xAB,0x87,0x99,0x40,0xBD,0x15,0xB6,0xB2,0x56,0x91,0x26,0x5F,0x73,0x84,0xB2,0x71};

  KeyExtent() : tableId(), endRow(), prevEndRow() {
  }

  virtual ~KeyExtent() throw() {}

  std::string tableId;
  std::string endRow;
  std::string prevEndRow;

  _KeyExtent__isset __isset;

  void __set_tableId(const std::string& val) {
    tableId = val;
  }

  void __set_endRow(const std::string& val) {
    endRow = val;
  }

  void __set_prevEndRow(const std::string& val) {
    prevEndRow = val;
  }

  bool operator == (const KeyExtent & rhs) const
  {
    if (!(tableId == rhs.tableId))
      return false;
    if (!(endRow == rhs.endRow))
      return false;
    if (!(prevEndRow == rhs.prevEndRow))
      return false;
    return true;
  }
  bool operator != (const KeyExtent &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const KeyExtent & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(KeyExtent &a, KeyExtent &b);

typedef struct _Column__isset {
  _Column__isset() : colFamily(false), colQualifier(false), colVisibility(false) {}
  bool colFamily;
  bool colQualifier;
  bool colVisibility;
} _Column__isset;

class Column {
 public:

  static const char* ascii_fingerprint; // = "AB879940BD15B6B25691265F7384B271";
  static const uint8_t binary_fingerprint[16]; // = {0xAB,0x87,0x99,0x40,0xBD,0x15,0xB6,0xB2,0x56,0x91,0x26,0x5F,0x73,0x84,0xB2,0x71};

  Column() : colFamily(), colQualifier(), colVisibility() {
  }

  virtual ~Column() throw() {}

  std::string colFamily;
  std::string colQualifier;
  std::string colVisibility;

  _Column__isset __isset;

  void __set_colFamily(const std::string& val) {
    colFamily = val;
  }

  void __set_colQualifier(const std::string& val) {
    colQualifier = val;
  }

  void __set_colVisibility(const std::string& val) {
    colVisibility = val;
  }

  bool operator == (const Column & rhs) const
  {
    if (!(colFamily == rhs.colFamily))
      return false;
    if (!(colQualifier == rhs.colQualifier))
      return false;
    if (!(colVisibility == rhs.colVisibility))
      return false;
    return true;
  }
  bool operator != (const Column &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Column & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(Column &a, Column &b);

typedef struct _ActiveScan__isset {
  _ActiveScan__isset() : client(false), user(false), table(false), age(false), idleTime(false), type(false), state(false), extent(false), columns(false), iterators(false), authorizations(false) {}
  bool client;
  bool user;
  bool table;
  bool age;
  bool idleTime;
  bool type;
  bool state;
  bool extent;
  bool columns;
  bool iterators;
  bool authorizations;
} _ActiveScan__isset;

class ActiveScan {
 public:

  static const char* ascii_fingerprint; // = "1B97541CB4E900A054266BBBEE61D004";
  static const uint8_t binary_fingerprint[16]; // = {0x1B,0x97,0x54,0x1C,0xB4,0xE9,0x00,0xA0,0x54,0x26,0x6B,0xBB,0xEE,0x61,0xD0,0x04};

  ActiveScan() : client(), user(), table(), age(0), idleTime(0), type((ScanType::type)0), state((ScanState::type)0) {
  }

  virtual ~ActiveScan() throw() {}

  std::string client;
  std::string user;
  std::string table;
  int64_t age;
  int64_t idleTime;
  ScanType::type type;
  ScanState::type state;
  KeyExtent extent;
  std::vector<Column>  columns;
  std::vector<IteratorSetting>  iterators;
  std::vector<std::string>  authorizations;

  _ActiveScan__isset __isset;

  void __set_client(const std::string& val) {
    client = val;
  }

  void __set_user(const std::string& val) {
    user = val;
  }

  void __set_table(const std::string& val) {
    table = val;
  }

  void __set_age(const int64_t val) {
    age = val;
  }

  void __set_idleTime(const int64_t val) {
    idleTime = val;
  }

  void __set_type(const ScanType::type val) {
    type = val;
  }

  void __set_state(const ScanState::type val) {
    state = val;
  }

  void __set_extent(const KeyExtent& val) {
    extent = val;
  }

  void __set_columns(const std::vector<Column> & val) {
    columns = val;
  }

  void __set_iterators(const std::vector<IteratorSetting> & val) {
    iterators = val;
  }

  void __set_authorizations(const std::vector<std::string> & val) {
    authorizations = val;
  }

  bool operator == (const ActiveScan & rhs) const
  {
    if (!(client == rhs.client))
      return false;
    if (!(user == rhs.user))
      return false;
    if (!(table == rhs.table))
      return false;
    if (!(age == rhs.age))
      return false;
    if (!(idleTime == rhs.idleTime))
      return false;
    if (!(type == rhs.type))
      return false;
    if (!(state == rhs.state))
      return false;
    if (!(extent == rhs.extent))
      return false;
    if (!(columns == rhs.columns))
      return false;
    if (!(iterators == rhs.iterators))
      return false;
    if (!(authorizations == rhs.authorizations))
      return false;
    return true;
  }
  bool operator != (const ActiveScan &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ActiveScan & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(ActiveScan &a, ActiveScan &b);

typedef struct _ActiveCompaction__isset {
  _ActiveCompaction__isset() : extent(false), age(false), inputFiles(false), outputFile(false), type(false), reason(false), localityGroup(false), entriesRead(false), entriesWritten(false), iterators(false) {}
  bool extent;
  bool age;
  bool inputFiles;
  bool outputFile;
  bool type;
  bool reason;
  bool localityGroup;
  bool entriesRead;
  bool entriesWritten;
  bool iterators;
} _ActiveCompaction__isset;

class ActiveCompaction {
 public:

  static const char* ascii_fingerprint; // = "2BB155CC901109464666B6C7E6A8C1A6";
  static const uint8_t binary_fingerprint[16]; // = {0x2B,0xB1,0x55,0xCC,0x90,0x11,0x09,0x46,0x46,0x66,0xB6,0xC7,0xE6,0xA8,0xC1,0xA6};

  ActiveCompaction() : age(0), outputFile(), type((CompactionType::type)0), reason((CompactionReason::type)0), localityGroup(), entriesRead(0), entriesWritten(0) {
  }

  virtual ~ActiveCompaction() throw() {}

  KeyExtent extent;
  int64_t age;
  std::vector<std::string>  inputFiles;
  std::string outputFile;
  CompactionType::type type;
  CompactionReason::type reason;
  std::string localityGroup;
  int64_t entriesRead;
  int64_t entriesWritten;
  std::vector<IteratorSetting>  iterators;

  _ActiveCompaction__isset __isset;

  void __set_extent(const KeyExtent& val) {
    extent = val;
  }

  void __set_age(const int64_t val) {
    age = val;
  }

  void __set_inputFiles(const std::vector<std::string> & val) {
    inputFiles = val;
  }

  void __set_outputFile(const std::string& val) {
    outputFile = val;
  }

  void __set_type(const CompactionType::type val) {
    type = val;
  }

  void __set_reason(const CompactionReason::type val) {
    reason = val;
  }

  void __set_localityGroup(const std::string& val) {
    localityGroup = val;
  }

  void __set_entriesRead(const int64_t val) {
    entriesRead = val;
  }

  void __set_entriesWritten(const int64_t val) {
    entriesWritten = val;
  }

  void __set_iterators(const std::vector<IteratorSetting> & val) {
    iterators = val;
  }

  bool operator == (const ActiveCompaction & rhs) const
  {
    if (!(extent == rhs.extent))
      return false;
    if (!(age == rhs.age))
      return false;
    if (!(inputFiles == rhs.inputFiles))
      return false;
    if (!(outputFile == rhs.outputFile))
      return false;
    if (!(type == rhs.type))
      return false;
    if (!(reason == rhs.reason))
      return false;
    if (!(localityGroup == rhs.localityGroup))
      return false;
    if (!(entriesRead == rhs.entriesRead))
      return false;
    if (!(entriesWritten == rhs.entriesWritten))
      return false;
    if (!(iterators == rhs.iterators))
      return false;
    return true;
  }
  bool operator != (const ActiveCompaction &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ActiveCompaction & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(ActiveCompaction &a, ActiveCompaction &b);

typedef struct _WriterOptions__isset {
  _WriterOptions__isset() : maxMemory(false), latencyMs(false), timeoutMs(false), threads(false) {}
  bool maxMemory;
  bool latencyMs;
  bool timeoutMs;
  bool threads;
} _WriterOptions__isset;

class WriterOptions {
 public:

  static const char* ascii_fingerprint; // = "D6FB71C9973666B9F6B5C20D5B7B19EF";
  static const uint8_t binary_fingerprint[16]; // = {0xD6,0xFB,0x71,0xC9,0x97,0x36,0x66,0xB9,0xF6,0xB5,0xC2,0x0D,0x5B,0x7B,0x19,0xEF};

  WriterOptions() : maxMemory(0), latencyMs(0), timeoutMs(0), threads(0) {
  }

  virtual ~WriterOptions() throw() {}

  int64_t maxMemory;
  int64_t latencyMs;
  int64_t timeoutMs;
  int32_t threads;

  _WriterOptions__isset __isset;

  void __set_maxMemory(const int64_t val) {
    maxMemory = val;
  }

  void __set_latencyMs(const int64_t val) {
    latencyMs = val;
  }

  void __set_timeoutMs(const int64_t val) {
    timeoutMs = val;
  }

  void __set_threads(const int32_t val) {
    threads = val;
  }

  bool operator == (const WriterOptions & rhs) const
  {
    if (!(maxMemory == rhs.maxMemory))
      return false;
    if (!(latencyMs == rhs.latencyMs))
      return false;
    if (!(timeoutMs == rhs.timeoutMs))
      return false;
    if (!(threads == rhs.threads))
      return false;
    return true;
  }
  bool operator != (const WriterOptions &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const WriterOptions & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(WriterOptions &a, WriterOptions &b);

typedef struct _UnknownScanner__isset {
  _UnknownScanner__isset() : msg(false) {}
  bool msg;
} _UnknownScanner__isset;

class UnknownScanner : public ::apache::thrift::TException {
 public:

  static const char* ascii_fingerprint; // = "EFB929595D312AC8F305D5A794CFEDA1";
  static const uint8_t binary_fingerprint[16]; // = {0xEF,0xB9,0x29,0x59,0x5D,0x31,0x2A,0xC8,0xF3,0x05,0xD5,0xA7,0x94,0xCF,0xED,0xA1};

  UnknownScanner() : msg() {
  }

  virtual ~UnknownScanner() throw() {}

  std::string msg;

  _UnknownScanner__isset __isset;

  void __set_msg(const std::string& val) {
    msg = val;
  }

  bool operator == (const UnknownScanner & rhs) const
  {
    if (!(msg == rhs.msg))
      return false;
    return true;
  }
  bool operator != (const UnknownScanner &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const UnknownScanner & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(UnknownScanner &a, UnknownScanner &b);

typedef struct _UnknownWriter__isset {
  _UnknownWriter__isset() : msg(false) {}
  bool msg;
} _UnknownWriter__isset;

class UnknownWriter : public ::apache::thrift::TException {
 public:

  static const char* ascii_fingerprint; // = "EFB929595D312AC8F305D5A794CFEDA1";
  static const uint8_t binary_fingerprint[16]; // = {0xEF,0xB9,0x29,0x59,0x5D,0x31,0x2A,0xC8,0xF3,0x05,0xD5,0xA7,0x94,0xCF,0xED,0xA1};

  UnknownWriter() : msg() {
  }

  virtual ~UnknownWriter() throw() {}

  std::string msg;

  _UnknownWriter__isset __isset;

  void __set_msg(const std::string& val) {
    msg = val;
  }

  bool operator == (const UnknownWriter & rhs) const
  {
    if (!(msg == rhs.msg))
      return false;
    return true;
  }
  bool operator != (const UnknownWriter &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const UnknownWriter & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(UnknownWriter &a, UnknownWriter &b);

typedef struct _NoMoreEntriesException__isset {
  _NoMoreEntriesException__isset() : msg(false) {}
  bool msg;
} _NoMoreEntriesException__isset;

class NoMoreEntriesException : public ::apache::thrift::TException {
 public:

  static const char* ascii_fingerprint; // = "EFB929595D312AC8F305D5A794CFEDA1";
  static const uint8_t binary_fingerprint[16]; // = {0xEF,0xB9,0x29,0x59,0x5D,0x31,0x2A,0xC8,0xF3,0x05,0xD5,0xA7,0x94,0xCF,0xED,0xA1};

  NoMoreEntriesException() : msg() {
  }

  virtual ~NoMoreEntriesException() throw() {}

  std::string msg;

  _NoMoreEntriesException__isset __isset;

  void __set_msg(const std::string& val) {
    msg = val;
  }

  bool operator == (const NoMoreEntriesException & rhs) const
  {
    if (!(msg == rhs.msg))
      return false;
    return true;
  }
  bool operator != (const NoMoreEntriesException &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const NoMoreEntriesException & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(NoMoreEntriesException &a, NoMoreEntriesException &b);

typedef struct _AccumuloException__isset {
  _AccumuloException__isset() : msg(false) {}
  bool msg;
} _AccumuloException__isset;

class AccumuloException : public ::apache::thrift::TException {
 public:

  static const char* ascii_fingerprint; // = "EFB929595D312AC8F305D5A794CFEDA1";
  static const uint8_t binary_fingerprint[16]; // = {0xEF,0xB9,0x29,0x59,0x5D,0x31,0x2A,0xC8,0xF3,0x05,0xD5,0xA7,0x94,0xCF,0xED,0xA1};

  AccumuloException() : msg() {
  }

  virtual ~AccumuloException() throw() {}

  std::string msg;

  _AccumuloException__isset __isset;

  void __set_msg(const std::string& val) {
    msg = val;
  }

  bool operator == (const AccumuloException & rhs) const
  {
    if (!(msg == rhs.msg))
      return false;
    return true;
  }
  bool operator != (const AccumuloException &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const AccumuloException & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(AccumuloException &a, AccumuloException &b);

typedef struct _AccumuloSecurityException__isset {
  _AccumuloSecurityException__isset() : msg(false) {}
  bool msg;
} _AccumuloSecurityException__isset;

class AccumuloSecurityException : public ::apache::thrift::TException {
 public:

  static const char* ascii_fingerprint; // = "EFB929595D312AC8F305D5A794CFEDA1";
  static const uint8_t binary_fingerprint[16]; // = {0xEF,0xB9,0x29,0x59,0x5D,0x31,0x2A,0xC8,0xF3,0x05,0xD5,0xA7,0x94,0xCF,0xED,0xA1};

  AccumuloSecurityException() : msg() {
  }

  virtual ~AccumuloSecurityException() throw() {}

  std::string msg;

  _AccumuloSecurityException__isset __isset;

  void __set_msg(const std::string& val) {
    msg = val;
  }

  bool operator == (const AccumuloSecurityException & rhs) const
  {
    if (!(msg == rhs.msg))
      return false;
    return true;
  }
  bool operator != (const AccumuloSecurityException &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const AccumuloSecurityException & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(AccumuloSecurityException &a, AccumuloSecurityException &b);

typedef struct _TableNotFoundException__isset {
  _TableNotFoundException__isset() : msg(false) {}
  bool msg;
} _TableNotFoundException__isset;

class TableNotFoundException : public ::apache::thrift::TException {
 public:

  static const char* ascii_fingerprint; // = "EFB929595D312AC8F305D5A794CFEDA1";
  static const uint8_t binary_fingerprint[16]; // = {0xEF,0xB9,0x29,0x59,0x5D,0x31,0x2A,0xC8,0xF3,0x05,0xD5,0xA7,0x94,0xCF,0xED,0xA1};

  TableNotFoundException() : msg() {
  }

  virtual ~TableNotFoundException() throw() {}

  std::string msg;

  _TableNotFoundException__isset __isset;

  void __set_msg(const std::string& val) {
    msg = val;
  }

  bool operator == (const TableNotFoundException & rhs) const
  {
    if (!(msg == rhs.msg))
      return false;
    return true;
  }
  bool operator != (const TableNotFoundException &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TableNotFoundException & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(TableNotFoundException &a, TableNotFoundException &b);

typedef struct _TableExistsException__isset {
  _TableExistsException__isset() : msg(false) {}
  bool msg;
} _TableExistsException__isset;

class TableExistsException : public ::apache::thrift::TException {
 public:

  static const char* ascii_fingerprint; // = "EFB929595D312AC8F305D5A794CFEDA1";
  static const uint8_t binary_fingerprint[16]; // = {0xEF,0xB9,0x29,0x59,0x5D,0x31,0x2A,0xC8,0xF3,0x05,0xD5,0xA7,0x94,0xCF,0xED,0xA1};

  TableExistsException() : msg() {
  }

  virtual ~TableExistsException() throw() {}

  std::string msg;

  _TableExistsException__isset __isset;

  void __set_msg(const std::string& val) {
    msg = val;
  }

  bool operator == (const TableExistsException & rhs) const
  {
    if (!(msg == rhs.msg))
      return false;
    return true;
  }
  bool operator != (const TableExistsException &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TableExistsException & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(TableExistsException &a, TableExistsException &b);

} // namespace

#endif

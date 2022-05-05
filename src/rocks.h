#ifndef _ROCKS_H_
#define _ROCKS_H_
#include <rocksdb/db.h>
#include <rocksdb/options.h>
#include <rocksdb/table.h>
#include <rocksdb/utilities/backupable_db.h>

class Storage {
 public:
  Storage() {}
  ~Storage();
  /*int Open(bool read_only);
  int Open();
  int OpenForReadOnly();
  void CloseDB() {}
  void EmptyDB();
  void InitTableOptions(rocksdb::BlockBasedTableOptions* table_options);
  void InitOptions(rocksdb::Options* options);
  int SetOption(const std::string& key, const std::string& value);
  int SetDBOption(const std::string& key, const std::string& value);
  int CreateColumnFamilies(const rocksdb::Options& options);
  int CreateBackup();
  int DestroyBackup();
  int RestoreFromBackup();
  int RestoreFromCheckpoint();

  int WriteBatch(std::string&& raw_batch);
  rocksdb::SequenceNumber LatestSeq();
  rocksdb::Status Write(const rocksdb::WriteOptions& options,
                        rocksdb::WriteBatch* updates);
  rocksdb::Status Delete(const rocksdb::WriteOptions& options,
                         rocksdb::ColumnFamilyHandle* cf_handle,
                         const rocksdb::Slice& key);

  rocksdb::Status Compact(const rocksdb::Slice* begin,
                          const rocksdb::Slice* end);
  rocksdb::DB* GetDB();

  Storage(const Storage&) = delete;
  Storage& operator=(const Storage&) = delete;
  */
};
#endif
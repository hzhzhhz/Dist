#ifndef _CLUSTER_H_
#define _CLUSTER_H_
#include <string>
#include <map>
#include <vector>
#include <set>

using std::set;
using std::vector;
using std::string;
using std::map;
struct Consistent{
public:
    int32_t Add(const string& key){
        if(members.find(key)!=members.end()){
            return 0;
        }
        members[key]=true;
        for(int i=0;i<replicate;++i){
            int32_t h=Hash(key);
            slots[h]=key;
            sort_.insert(h);
        }
        return 0;
    }
    int32_t Hash(string str){
        return 0;
    }
private:
    map<int32_t,string>slots;
    map<string,bool>members;
    int replicate;
    set<int32_t>sort_;
};

#endif
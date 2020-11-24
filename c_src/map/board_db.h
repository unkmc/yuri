#pragma once

struct board_data {
  int id, level, gmlevel, path, clan, special, sort;
  char name[64], yname[64], script;
};

struct bn_data {
  int id;
  char name[255];
};
extern struct DBMap* board_db;
extern struct DBMap* bn_db;
struct board_data* boarddb_search(int);
struct board_data* boarddb_searchexist(int);
struct bn_data* bn_search(int);
struct bn_data* bn_searchexist(int);
char* bn_name(int);
int boarddb_level(int);
char* boarddb_name(int);
char* boarddb_yname(int);
int boarddb_path(int);
int boarddb_gmlevel(int);
int boarddb_clan(int);
int boarddb_sort(int);
unsigned int boarddb_id(char* str);
char boarddb_script(int);
int bn_read();

int boarddb_read();
int boarddb_term();
int boarddb_init();
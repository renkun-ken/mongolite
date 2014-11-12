#include <Rinternals.h>
#include <bson.h>
#include <mongoc.h>

SEXP mkStringUTF8(const char* str);
SEXP mkRaw(const unsigned char *buf, int len);
bson_t* r2bson(SEXP ptr);
mongoc_collection_t* r2col(SEXP ptr);
mongoc_cursor_t* r2cursor(SEXP ptr);
SEXP bson2r(bson_t* b);
SEXP col2r(mongoc_collection_t *col);
SEXP cursor2r(mongoc_cursor_t* c);
void fin_bson(SEXP ptr);
void fin_cursor(SEXP ptr);
void fin_mongo(SEXP ptr);
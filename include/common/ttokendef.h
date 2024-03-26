/*
 * Copyright (c) 2019 TAOS Data, Inc. <jhtao@taosdata.com>
 *
 * This program is free software: you can use, redistribute, and/or modify
 * it under the terms of the GNU Affero General Public License, version 3
 * or later ("AGPL"), as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _TD_COMMON_TOKEN_H_
#define _TD_COMMON_TOKEN_H_


#define TK_OR                               1
#define TK_AND                              2
#define TK_UNION                            3
#define TK_ALL                              4
#define TK_MINUS                            5
#define TK_EXCEPT                           6
#define TK_INTERSECT                        7
#define TK_NK_BITAND                        8
#define TK_NK_BITOR                         9
#define TK_NK_LSHIFT                       10
#define TK_NK_RSHIFT                       11
#define TK_NK_PLUS                         12
#define TK_NK_MINUS                        13
#define TK_NK_STAR                         14
#define TK_NK_SLASH                        15
#define TK_NK_REM                          16
#define TK_NK_CONCAT                       17
#define TK_CREATE                          18
#define TK_ACCOUNT                         19
#define TK_NK_ID                           20
#define TK_PASS                            21
#define TK_NK_STRING                       22
#define TK_ALTER                           23
#define TK_PPS                             24
#define TK_TSERIES                         25
#define TK_STORAGE                         26
#define TK_STREAMS                         27
#define TK_QTIME                           28
#define TK_DBS                             29
#define TK_USERS                           30
#define TK_CONNS                           31
#define TK_STATE                           32
#define TK_NK_COMMA                        33
#define TK_HOST                            34
#define TK_USER                            35
#define TK_ENABLE                          36
#define TK_NK_INTEGER                      37
#define TK_SYSINFO                         38
#define TK_ADD                             39
#define TK_DROP                            40
#define TK_GRANT                           41
#define TK_ON                              42
#define TK_TO                              43
#define TK_REVOKE                          44
#define TK_FROM                            45
#define TK_SUBSCRIBE                       46
#define TK_READ                            47
#define TK_WRITE                           48
#define TK_NK_DOT                          49
#define TK_WITH                            50
#define TK_ENCRYPT_KEY                      51
#define TK_DNODE                            52
#define TK_PORT                             53
#define TK_DNODES                           54
#define TK_RESTORE                          55
#define TK_NK_IPTOKEN                       56
#define TK_FORCE                            57
#define TK_UNSAFE                           58
#define TK_CLUSTER                          59
#define TK_LOCAL                            60
#define TK_QNODE                            61
#define TK_BNODE                            62
#define TK_SNODE                            63
#define TK_MNODE                            64
#define TK_VNODE                            65
#define TK_DATABASE                         66
#define TK_USE                              67
#define TK_FLUSH                            68
#define TK_TRIM                             69
#define TK_COMPACT                          70
#define TK_IF                               71
#define TK_NOT                              72
#define TK_EXISTS                           73
#define TK_BUFFER                           74
#define TK_CACHEMODEL                       75
#define TK_CACHESIZE                        76
#define TK_COMP                             77
#define TK_DURATION                         78
#define TK_NK_VARIABLE                      79
#define TK_MAXROWS                          80
#define TK_MINROWS                          81
#define TK_KEEP                             82
#define TK_PAGES                            83
#define TK_PAGESIZE                         84
#define TK_TSDB_PAGESIZE                    85
#define TK_PRECISION                        86
#define TK_REPLICA                          87
#define TK_VGROUPS                          88
#define TK_SINGLE_STABLE                    89
#define TK_RETENTIONS                       90
#define TK_SCHEMALESS                       91
#define TK_WAL_LEVEL                        92
#define TK_WAL_FSYNC_PERIOD                 93
#define TK_WAL_RETENTION_PERIOD             94
#define TK_WAL_RETENTION_SIZE               95
#define TK_WAL_ROLL_PERIOD                  96
#define TK_WAL_SEGMENT_SIZE                 97
#define TK_STT_TRIGGER                      98
#define TK_TABLE_PREFIX                     99
#define TK_TABLE_SUFFIX                     100
#define TK_KEEP_TIME_OFFSET                 101
#define TK_ENCRYPT_ALGORITHM                102
#define TK_NK_COLON                         103
#define TK_BWLIMIT                          104
#define TK_START                            105
#define TK_TIMESTAMP                        106
#define TK_END                              107
#define TK_TABLE                            108
#define TK_NK_LP                            109
#define TK_NK_RP                            110
#define TK_STABLE                           111
#define TK_COLUMN                           112
#define TK_MODIFY                           113
#define TK_RENAME                           114
#define TK_TAG                              115
#define TK_SET                              116
#define TK_NK_EQ                            117
#define TK_USING                            118
#define TK_TAGS                             119
#define TK_BOOL                             120
#define TK_TINYINT                          121
#define TK_SMALLINT                         122
#define TK_INT                              123
#define TK_INTEGER                          124
#define TK_BIGINT                           125
#define TK_FLOAT                            126
#define TK_DOUBLE                           127
#define TK_BINARY                           128
#define TK_NCHAR                            129
#define TK_UNSIGNED                         130
#define TK_JSON                             131
#define TK_VARCHAR                          132
#define TK_MEDIUMBLOB                       133
#define TK_BLOB                             134
#define TK_VARBINARY                        135
#define TK_GEOMETRY                         136
#define TK_DECIMAL                          137
#define TK_COMMENT                          138
#define TK_MAX_DELAY                        139
#define TK_WATERMARK                        140
#define TK_ROLLUP                           141
#define TK_TTL                              142
#define TK_SMA                              143
#define TK_DELETE_MARK                      144
#define TK_FIRST                            145
#define TK_LAST                             146
#define TK_SHOW                             147
#define TK_PRIVILEGES                       148
#define TK_DATABASES                        149
#define TK_TABLES                           150
#define TK_STABLES                          151
#define TK_MNODES                           152
#define TK_QNODES                           153
#define TK_ARBGROUPS                        154
#define TK_FUNCTIONS                        155
#define TK_INDEXES                          156
#define TK_ACCOUNTS                         157
#define TK_APPS                             158
#define TK_CONNECTIONS                      159
#define TK_LICENCES                         160
#define TK_GRANTS                           161
#define TK_FULL                             162
#define TK_LOGS                             163
#define TK_MACHINES                         164
#define TK_ENCRYPTIONS                      165
#define TK_QUERIES                          166
#define TK_SCORES                           167
#define TK_TOPICS                           168
#define TK_VARIABLES                        169
#define TK_BNODES                           170
#define TK_SNODES                           171
#define TK_TRANSACTIONS                     172
#define TK_DISTRIBUTED                      173
#define TK_CONSUMERS                        174
#define TK_SUBSCRIPTIONS                    175
#define TK_VNODES                           176
#define TK_ALIVE                            177
#define TK_VIEWS                            178
#define TK_VIEW                             179
#define TK_COMPACTS                         180
#define TK_NORMAL                           181
#define TK_CHILD                            182
#define TK_LIKE                             183
#define TK_TBNAME                           184
#define TK_QTAGS                            185
#define TK_AS                               186
#define TK_SYSTEM                           187
#define TK_INDEX                            188
#define TK_FUNCTION                         189
#define TK_INTERVAL                         190
#define TK_COUNT                            191
#define TK_LAST_ROW                         192
#define TK_META                             193
#define TK_ONLY                             194
#define TK_TOPIC                            195
#define TK_CONSUMER                         196
#define TK_GROUP                            197
#define TK_DESC                             198
#define TK_DESCRIBE                         199
#define TK_RESET                            200
#define TK_QUERY                            201
#define TK_CACHE                            202
#define TK_EXPLAIN                          203
#define TK_ANALYZE                          204
#define TK_VERBOSE                          205
#define TK_NK_BOOL                          206
#define TK_RATIO                            207
#define TK_NK_FLOAT                         208
#define TK_OUTPUTTYPE                       209
#define TK_AGGREGATE                        210
#define TK_BUFSIZE                          211
#define TK_LANGUAGE                         212
#define TK_REPLACE                          213
#define TK_STREAM                           214
#define TK_INTO                             215
#define TK_PAUSE                            216
#define TK_RESUME                           217
#define TK_TRIGGER                          218
#define TK_AT_ONCE                          219
#define TK_WINDOW_CLOSE                     220
#define TK_IGNORE                           221
#define TK_EXPIRED                          222
#define TK_FILL_HISTORY                     223
#define TK_UPDATE                           224
#define TK_SUBTABLE                         225
#define TK_UNTREATED                        226
#define TK_KILL                             227
#define TK_CONNECTION                       228
#define TK_TRANSACTION                      229
#define TK_BALANCE                          230
#define TK_VGROUP                           231
#define TK_LEADER                           232
#define TK_MERGE                            233
#define TK_REDISTRIBUTE                     234
#define TK_SPLIT                            235
#define TK_DELETE                           236
#define TK_INSERT                           237
#define TK_NK_BIN                           238
#define TK_NK_HEX                           239
#define TK_NULL                             240
#define TK_NK_QUESTION                      241
#define TK_NK_ALIAS                         242
#define TK_NK_ARROW                         243
#define TK_ROWTS                            244
#define TK_QSTART                           245
#define TK_QEND                             246
#define TK_QDURATION                        247
#define TK_WSTART                           248
#define TK_WEND                             249
#define TK_WDURATION                        250
#define TK_IROWTS                           251
#define TK_ISFILLED                         252
#define TK_CAST                             253
#define TK_NOW                              254
#define TK_TODAY                            255
#define TK_TIMEZONE                         256
#define TK_CLIENT_VERSION                   257
#define TK_SERVER_VERSION                   258
#define TK_SERVER_STATUS                    259
#define TK_CURRENT_USER                     260
#define TK_CASE                             261
#define TK_WHEN                             262
#define TK_THEN                             263
#define TK_ELSE                             264
#define TK_BETWEEN                          265
#define TK_IS                               266
#define TK_NK_LT                            267
#define TK_NK_GT                            268
#define TK_NK_LE                            269
#define TK_NK_GE                            270
#define TK_NK_NE                            271
#define TK_MATCH                            272
#define TK_NMATCH                           273
#define TK_CONTAINS                         274
#define TK_IN                               275
#define TK_JOIN                             276
#define TK_INNER                            277
#define TK_SELECT                           278
#define TK_NK_HINT                          279
#define TK_DISTINCT                         280
#define TK_WHERE                            281
#define TK_PARTITION                        282
#define TK_BY                               283
#define TK_SESSION                          284
#define TK_STATE_WINDOW                     285
#define TK_EVENT_WINDOW                     286
#define TK_COUNT_WINDOW                     287
#define TK_SLIDING                          288
#define TK_FILL                             289
#define TK_VALUE                            290
#define TK_VALUE_F                          291
#define TK_NONE                             292
#define TK_PREV                             293
#define TK_NULL_F                           294
#define TK_LINEAR                           295
#define TK_NEXT                             296
#define TK_HAVING                           297
#define TK_RANGE                            298
#define TK_EVERY                            299
#define TK_ORDER                            300
#define TK_SLIMIT                           301
#define TK_SOFFSET                          302
#define TK_LIMIT                            303
#define TK_OFFSET                           304
#define TK_ASC                              305
#define TK_NULLS                            306
#define TK_ABORT                            307
#define TK_AFTER                            308
#define TK_ATTACH                           309
#define TK_BEFORE                           310
#define TK_BEGIN                            311
#define TK_BITAND                           312
#define TK_BITNOT                           313
#define TK_BITOR                            314
#define TK_BLOCKS                           315
#define TK_CHANGE                           316
#define TK_COMMA                            317
#define TK_CONCAT                           318
#define TK_CONFLICT                         319
#define TK_COPY                             320
#define TK_DEFERRED                         321
#define TK_DELIMITERS                       322
#define TK_DETACH                           323
#define TK_DIVIDE                           324
#define TK_DOT                              325
#define TK_EACH                             326
#define TK_FAIL                             327
#define TK_FILE                             328
#define TK_FOR                              329
#define TK_GLOB                             330
#define TK_ID                               331
#define TK_IMMEDIATE                        332
#define TK_IMPORT                           333
#define TK_INITIALLY                        334
#define TK_INSTEAD                          335
#define TK_ISNULL                           336
#define TK_KEY                              337
#define TK_MODULES                          338
#define TK_NK_BITNOT                        339
#define TK_NK_SEMI                          340
#define TK_NOTNULL                          341
#define TK_OF                               342
#define TK_PLUS                             343
#define TK_PRIVILEGE                        344
#define TK_RAISE                            345
#define TK_RESTRICT                         346
#define TK_ROW                              347
#define TK_SEMI                             348
#define TK_STAR                             349
#define TK_STATEMENT                        350
#define TK_STRICT                           351
#define TK_STRING                           352
#define TK_TIMES                            353
#define TK_VALUES                           354
#define TK_VARIABLE                         355
#define TK_WAL                              356

#define TK_NK_SPACE         600
#define TK_NK_COMMENT       601
#define TK_NK_ILLEGAL       602
// #define TK_NK_HEX           603  // hex number  0x123
#define TK_NK_OCT           604  // oct number
// #define TK_NK_BIN           605  // bin format data 0b111
#define TK_BATCH_SCAN       606
#define TK_NO_BATCH_SCAN    607
#define TK_SORT_FOR_GROUP   608
#define TK_PARTITION_FIRST  609
#define TK_PARA_TABLES_SORT  610
#define TK_SMALLDATA_TS_SORT 611

#define TK_NK_NIL 65535

#endif /*_TD_COMMON_TOKEN_H_*/

#ifndef MY_DEFINE_H
#define MY_DEFINE_H

#include <QDebug>

#define KEYBOARD_X 660
#define KEYBOARD_Y 240
#define ICON 64
#define DB_PATH "/home/link/aip-server/aip.db"

#define W_ROW 50
#define W_COL 6

#define W_MAIN  0x00
#define W_HOME  0x00
#define W_SYST  0x01
#define W_MODL  0x02
#define W_DATA  0x03
#define W_TEST  0x04
#define W_CONF  0x05
#define W_COLR  0x06
#define W_HELP  0x07
#define W_HIDE  0x08

#define W_INIT  0x09
#define W_EXIT  0x10
#define W_ERROR 0x11

#define MAX_CLIENT 1000
//存储文件路径和文件名的结构体
struct openFileStruct
{
    QString filePath;
    QString fileName;
};

struct clientInfo   //客户端信息
{
    bool isFree;
    bool isInit;
    QString ID;
    QString IP;
    QString NO;
    QString MAC;
    QString PORT;
    QString TIME;
    QString VERSION;
    QString PARAM;
    int heart;
};

const quint8 sendtype_file = 0;    //发送类型是文件
const quint8 sendtype_start_test = 10;    //发送类型是开始测试
const quint8 sendtype_msg = 20;    //发送类型是消息
const quint8 sendtype_heart = 30;

const quint8 type_msg      = 55;
const quint8 type_reply    = 56;

const quint8 type_reboot   = 0;
const quint8 type_ip       = 1;
const quint8 type_No       = 2;
const quint8 type_mac      = 3;
const quint8 type_test     = 4;
const quint8 type_heart    = 5;
const quint8 type_state    = 6;
const quint8 type_version  = 7;
const quint8 type_config   = 8;

const quint8 state_upper   = 0;
const quint8 state_lower   = 1;
const quint8 state_error   = 2;
const quint8 state_test    = 3;
const quint8 state_config  = 4;


const quint16 filetype_list = 0;    //文件类型为列表
const quint16 filetype_wavfile = 1;    //文件类型为wav文件
const quint16 filetype_result = 2;    //文件类型为wav文件

const QString receive_path = "/home/link";
const QString temp_Path = "/home/link";

const QString testtype_keyword = "1";

const QString clientStatus[7] =    //客户端状态
    {QObject::tr("Unconnected"),QObject::tr("HostLookup"),QObject::tr("Connecting"),
        QObject::tr("Connected"),QObject::tr("Bound"),QObject::tr("Listening"),QObject::tr("Closing")};

#endif // MY_DEFINE_H

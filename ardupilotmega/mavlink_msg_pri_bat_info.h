#pragma once
// MESSAGE PRI_BAT_INFO PACKING

#define MAVLINK_MSG_ID_PRI_BAT_INFO 227


typedef struct __mavlink_pri_bat_info_t {
 uint64_t time_usec; /*< [us] Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.*/
 float bat_1; /*< [V]  AstroX BMS battery 1 Voltage*/
 float bat_2; /*< [V]  AstroX BMS battery 2 Voltage*/
 float current_1; /*< [mA] AstroX BMS battery 1 Current*/
 float current_2; /*< [mA] AstroX BMS battery 2 Current*/
 float temp_1; /*< [C] AstroX BMS battery 1 Temperature*/
 float temp_2; /*< [C] AstroX BMS battery 2 Temperature*/
 float soc; /*< [%] state of charge, percentage.*/
 uint32_t fault_1; /*<  AstroX BMS battery 1 fault Message*/
 uint32_t fault_2; /*<  AstroX BMS battery 2 fault Message*/
} mavlink_pri_bat_info_t;

#define MAVLINK_MSG_ID_PRI_BAT_INFO_LEN 44
#define MAVLINK_MSG_ID_PRI_BAT_INFO_MIN_LEN 44
#define MAVLINK_MSG_ID_227_LEN 44
#define MAVLINK_MSG_ID_227_MIN_LEN 44

#define MAVLINK_MSG_ID_PRI_BAT_INFO_CRC 112
#define MAVLINK_MSG_ID_227_CRC 112



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_PRI_BAT_INFO { \
    227, \
    "PRI_BAT_INFO", \
    10, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_pri_bat_info_t, time_usec) }, \
         { "bat_1", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_pri_bat_info_t, bat_1) }, \
         { "bat_2", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_pri_bat_info_t, bat_2) }, \
         { "current_1", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_pri_bat_info_t, current_1) }, \
         { "current_2", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_pri_bat_info_t, current_2) }, \
         { "temp_1", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_pri_bat_info_t, temp_1) }, \
         { "temp_2", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_pri_bat_info_t, temp_2) }, \
         { "soc", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_pri_bat_info_t, soc) }, \
         { "fault_1", NULL, MAVLINK_TYPE_UINT32_T, 0, 36, offsetof(mavlink_pri_bat_info_t, fault_1) }, \
         { "fault_2", NULL, MAVLINK_TYPE_UINT32_T, 0, 40, offsetof(mavlink_pri_bat_info_t, fault_2) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_PRI_BAT_INFO { \
    "PRI_BAT_INFO", \
    10, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_pri_bat_info_t, time_usec) }, \
         { "bat_1", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_pri_bat_info_t, bat_1) }, \
         { "bat_2", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_pri_bat_info_t, bat_2) }, \
         { "current_1", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_pri_bat_info_t, current_1) }, \
         { "current_2", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_pri_bat_info_t, current_2) }, \
         { "temp_1", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_pri_bat_info_t, temp_1) }, \
         { "temp_2", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_pri_bat_info_t, temp_2) }, \
         { "soc", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_pri_bat_info_t, soc) }, \
         { "fault_1", NULL, MAVLINK_TYPE_UINT32_T, 0, 36, offsetof(mavlink_pri_bat_info_t, fault_1) }, \
         { "fault_2", NULL, MAVLINK_TYPE_UINT32_T, 0, 40, offsetof(mavlink_pri_bat_info_t, fault_2) }, \
         } \
}
#endif

/**
 * @brief Pack a pri_bat_info message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
 * @param bat_1 [V]  AstroX BMS battery 1 Voltage
 * @param bat_2 [V]  AstroX BMS battery 2 Voltage
 * @param current_1 [mA] AstroX BMS battery 1 Current
 * @param current_2 [mA] AstroX BMS battery 2 Current
 * @param temp_1 [C] AstroX BMS battery 1 Temperature
 * @param temp_2 [C] AstroX BMS battery 2 Temperature
 * @param soc [%] state of charge, percentage.
 * @param fault_1  AstroX BMS battery 1 fault Message
 * @param fault_2  AstroX BMS battery 2 fault Message
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_pri_bat_info_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, float bat_1, float bat_2, float current_1, float current_2, float temp_1, float temp_2, float soc, uint32_t fault_1, uint32_t fault_2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PRI_BAT_INFO_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, bat_1);
    _mav_put_float(buf, 12, bat_2);
    _mav_put_float(buf, 16, current_1);
    _mav_put_float(buf, 20, current_2);
    _mav_put_float(buf, 24, temp_1);
    _mav_put_float(buf, 28, temp_2);
    _mav_put_float(buf, 32, soc);
    _mav_put_uint32_t(buf, 36, fault_1);
    _mav_put_uint32_t(buf, 40, fault_2);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PRI_BAT_INFO_LEN);
#else
    mavlink_pri_bat_info_t packet;
    packet.time_usec = time_usec;
    packet.bat_1 = bat_1;
    packet.bat_2 = bat_2;
    packet.current_1 = current_1;
    packet.current_2 = current_2;
    packet.temp_1 = temp_1;
    packet.temp_2 = temp_2;
    packet.soc = soc;
    packet.fault_1 = fault_1;
    packet.fault_2 = fault_2;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PRI_BAT_INFO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PRI_BAT_INFO;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PRI_BAT_INFO_MIN_LEN, MAVLINK_MSG_ID_PRI_BAT_INFO_LEN, MAVLINK_MSG_ID_PRI_BAT_INFO_CRC);
}

/**
 * @brief Pack a pri_bat_info message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec [us] Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
 * @param bat_1 [V]  AstroX BMS battery 1 Voltage
 * @param bat_2 [V]  AstroX BMS battery 2 Voltage
 * @param current_1 [mA] AstroX BMS battery 1 Current
 * @param current_2 [mA] AstroX BMS battery 2 Current
 * @param temp_1 [C] AstroX BMS battery 1 Temperature
 * @param temp_2 [C] AstroX BMS battery 2 Temperature
 * @param soc [%] state of charge, percentage.
 * @param fault_1  AstroX BMS battery 1 fault Message
 * @param fault_2  AstroX BMS battery 2 fault Message
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_pri_bat_info_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,float bat_1,float bat_2,float current_1,float current_2,float temp_1,float temp_2,float soc,uint32_t fault_1,uint32_t fault_2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PRI_BAT_INFO_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, bat_1);
    _mav_put_float(buf, 12, bat_2);
    _mav_put_float(buf, 16, current_1);
    _mav_put_float(buf, 20, current_2);
    _mav_put_float(buf, 24, temp_1);
    _mav_put_float(buf, 28, temp_2);
    _mav_put_float(buf, 32, soc);
    _mav_put_uint32_t(buf, 36, fault_1);
    _mav_put_uint32_t(buf, 40, fault_2);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PRI_BAT_INFO_LEN);
#else
    mavlink_pri_bat_info_t packet;
    packet.time_usec = time_usec;
    packet.bat_1 = bat_1;
    packet.bat_2 = bat_2;
    packet.current_1 = current_1;
    packet.current_2 = current_2;
    packet.temp_1 = temp_1;
    packet.temp_2 = temp_2;
    packet.soc = soc;
    packet.fault_1 = fault_1;
    packet.fault_2 = fault_2;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PRI_BAT_INFO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PRI_BAT_INFO;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_PRI_BAT_INFO_MIN_LEN, MAVLINK_MSG_ID_PRI_BAT_INFO_LEN, MAVLINK_MSG_ID_PRI_BAT_INFO_CRC);
}

/**
 * @brief Encode a pri_bat_info struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param pri_bat_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_pri_bat_info_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_pri_bat_info_t* pri_bat_info)
{
    return mavlink_msg_pri_bat_info_pack(system_id, component_id, msg, pri_bat_info->time_usec, pri_bat_info->bat_1, pri_bat_info->bat_2, pri_bat_info->current_1, pri_bat_info->current_2, pri_bat_info->temp_1, pri_bat_info->temp_2, pri_bat_info->soc, pri_bat_info->fault_1, pri_bat_info->fault_2);
}

/**
 * @brief Encode a pri_bat_info struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param pri_bat_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_pri_bat_info_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_pri_bat_info_t* pri_bat_info)
{
    return mavlink_msg_pri_bat_info_pack_chan(system_id, component_id, chan, msg, pri_bat_info->time_usec, pri_bat_info->bat_1, pri_bat_info->bat_2, pri_bat_info->current_1, pri_bat_info->current_2, pri_bat_info->temp_1, pri_bat_info->temp_2, pri_bat_info->soc, pri_bat_info->fault_1, pri_bat_info->fault_2);
}

/**
 * @brief Send a pri_bat_info message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec [us] Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
 * @param bat_1 [V]  AstroX BMS battery 1 Voltage
 * @param bat_2 [V]  AstroX BMS battery 2 Voltage
 * @param current_1 [mA] AstroX BMS battery 1 Current
 * @param current_2 [mA] AstroX BMS battery 2 Current
 * @param temp_1 [C] AstroX BMS battery 1 Temperature
 * @param temp_2 [C] AstroX BMS battery 2 Temperature
 * @param soc [%] state of charge, percentage.
 * @param fault_1  AstroX BMS battery 1 fault Message
 * @param fault_2  AstroX BMS battery 2 fault Message
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_pri_bat_info_send(mavlink_channel_t chan, uint64_t time_usec, float bat_1, float bat_2, float current_1, float current_2, float temp_1, float temp_2, float soc, uint32_t fault_1, uint32_t fault_2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PRI_BAT_INFO_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, bat_1);
    _mav_put_float(buf, 12, bat_2);
    _mav_put_float(buf, 16, current_1);
    _mav_put_float(buf, 20, current_2);
    _mav_put_float(buf, 24, temp_1);
    _mav_put_float(buf, 28, temp_2);
    _mav_put_float(buf, 32, soc);
    _mav_put_uint32_t(buf, 36, fault_1);
    _mav_put_uint32_t(buf, 40, fault_2);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PRI_BAT_INFO, buf, MAVLINK_MSG_ID_PRI_BAT_INFO_MIN_LEN, MAVLINK_MSG_ID_PRI_BAT_INFO_LEN, MAVLINK_MSG_ID_PRI_BAT_INFO_CRC);
#else
    mavlink_pri_bat_info_t packet;
    packet.time_usec = time_usec;
    packet.bat_1 = bat_1;
    packet.bat_2 = bat_2;
    packet.current_1 = current_1;
    packet.current_2 = current_2;
    packet.temp_1 = temp_1;
    packet.temp_2 = temp_2;
    packet.soc = soc;
    packet.fault_1 = fault_1;
    packet.fault_2 = fault_2;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PRI_BAT_INFO, (const char *)&packet, MAVLINK_MSG_ID_PRI_BAT_INFO_MIN_LEN, MAVLINK_MSG_ID_PRI_BAT_INFO_LEN, MAVLINK_MSG_ID_PRI_BAT_INFO_CRC);
#endif
}

/**
 * @brief Send a pri_bat_info message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_pri_bat_info_send_struct(mavlink_channel_t chan, const mavlink_pri_bat_info_t* pri_bat_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_pri_bat_info_send(chan, pri_bat_info->time_usec, pri_bat_info->bat_1, pri_bat_info->bat_2, pri_bat_info->current_1, pri_bat_info->current_2, pri_bat_info->temp_1, pri_bat_info->temp_2, pri_bat_info->soc, pri_bat_info->fault_1, pri_bat_info->fault_2);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PRI_BAT_INFO, (const char *)pri_bat_info, MAVLINK_MSG_ID_PRI_BAT_INFO_MIN_LEN, MAVLINK_MSG_ID_PRI_BAT_INFO_LEN, MAVLINK_MSG_ID_PRI_BAT_INFO_CRC);
#endif
}

#if MAVLINK_MSG_ID_PRI_BAT_INFO_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_pri_bat_info_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, float bat_1, float bat_2, float current_1, float current_2, float temp_1, float temp_2, float soc, uint32_t fault_1, uint32_t fault_2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, bat_1);
    _mav_put_float(buf, 12, bat_2);
    _mav_put_float(buf, 16, current_1);
    _mav_put_float(buf, 20, current_2);
    _mav_put_float(buf, 24, temp_1);
    _mav_put_float(buf, 28, temp_2);
    _mav_put_float(buf, 32, soc);
    _mav_put_uint32_t(buf, 36, fault_1);
    _mav_put_uint32_t(buf, 40, fault_2);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PRI_BAT_INFO, buf, MAVLINK_MSG_ID_PRI_BAT_INFO_MIN_LEN, MAVLINK_MSG_ID_PRI_BAT_INFO_LEN, MAVLINK_MSG_ID_PRI_BAT_INFO_CRC);
#else
    mavlink_pri_bat_info_t *packet = (mavlink_pri_bat_info_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->bat_1 = bat_1;
    packet->bat_2 = bat_2;
    packet->current_1 = current_1;
    packet->current_2 = current_2;
    packet->temp_1 = temp_1;
    packet->temp_2 = temp_2;
    packet->soc = soc;
    packet->fault_1 = fault_1;
    packet->fault_2 = fault_2;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PRI_BAT_INFO, (const char *)packet, MAVLINK_MSG_ID_PRI_BAT_INFO_MIN_LEN, MAVLINK_MSG_ID_PRI_BAT_INFO_LEN, MAVLINK_MSG_ID_PRI_BAT_INFO_CRC);
#endif
}
#endif

#endif

// MESSAGE PRI_BAT_INFO UNPACKING


/**
 * @brief Get field time_usec from pri_bat_info message
 *
 * @return [us] Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
 */
static inline uint64_t mavlink_msg_pri_bat_info_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field bat_1 from pri_bat_info message
 *
 * @return [V]  AstroX BMS battery 1 Voltage
 */
static inline float mavlink_msg_pri_bat_info_get_bat_1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field bat_2 from pri_bat_info message
 *
 * @return [V]  AstroX BMS battery 2 Voltage
 */
static inline float mavlink_msg_pri_bat_info_get_bat_2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field current_1 from pri_bat_info message
 *
 * @return [mA] AstroX BMS battery 1 Current
 */
static inline float mavlink_msg_pri_bat_info_get_current_1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field current_2 from pri_bat_info message
 *
 * @return [mA] AstroX BMS battery 2 Current
 */
static inline float mavlink_msg_pri_bat_info_get_current_2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field temp_1 from pri_bat_info message
 *
 * @return [C] AstroX BMS battery 1 Temperature
 */
static inline float mavlink_msg_pri_bat_info_get_temp_1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field temp_2 from pri_bat_info message
 *
 * @return [C] AstroX BMS battery 2 Temperature
 */
static inline float mavlink_msg_pri_bat_info_get_temp_2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field soc from pri_bat_info message
 *
 * @return [%] state of charge, percentage.
 */
static inline float mavlink_msg_pri_bat_info_get_soc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field fault_1 from pri_bat_info message
 *
 * @return  AstroX BMS battery 1 fault Message
 */
static inline uint32_t mavlink_msg_pri_bat_info_get_fault_1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  36);
}

/**
 * @brief Get field fault_2 from pri_bat_info message
 *
 * @return  AstroX BMS battery 2 fault Message
 */
static inline uint32_t mavlink_msg_pri_bat_info_get_fault_2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  40);
}

/**
 * @brief Decode a pri_bat_info message into a struct
 *
 * @param msg The message to decode
 * @param pri_bat_info C-struct to decode the message contents into
 */
static inline void mavlink_msg_pri_bat_info_decode(const mavlink_message_t* msg, mavlink_pri_bat_info_t* pri_bat_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    pri_bat_info->time_usec = mavlink_msg_pri_bat_info_get_time_usec(msg);
    pri_bat_info->bat_1 = mavlink_msg_pri_bat_info_get_bat_1(msg);
    pri_bat_info->bat_2 = mavlink_msg_pri_bat_info_get_bat_2(msg);
    pri_bat_info->current_1 = mavlink_msg_pri_bat_info_get_current_1(msg);
    pri_bat_info->current_2 = mavlink_msg_pri_bat_info_get_current_2(msg);
    pri_bat_info->temp_1 = mavlink_msg_pri_bat_info_get_temp_1(msg);
    pri_bat_info->temp_2 = mavlink_msg_pri_bat_info_get_temp_2(msg);
    pri_bat_info->soc = mavlink_msg_pri_bat_info_get_soc(msg);
    pri_bat_info->fault_1 = mavlink_msg_pri_bat_info_get_fault_1(msg);
    pri_bat_info->fault_2 = mavlink_msg_pri_bat_info_get_fault_2(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_PRI_BAT_INFO_LEN? msg->len : MAVLINK_MSG_ID_PRI_BAT_INFO_LEN;
        memset(pri_bat_info, 0, MAVLINK_MSG_ID_PRI_BAT_INFO_LEN);
    memcpy(pri_bat_info, _MAV_PAYLOAD(msg), len);
#endif
}

#ifndef PROTO_H_
#define PROTO_H_

#include <stdint.h>

typedef struct udp_t {
    uint32_t sport;
    uint32_t dport;
    uint8_t zero;
    uint8_t proto;
    uint16_t datalen;
} udp_t;

typedef struct icmp_t {
    uint8_t type;
    uint8_t code;
    uint16_t checksum;
    uint16_t ident;
    uint16_t seq;
    uint32_t tinit;
    uint16_t trecv;
    uint16_t tsend;
} icmp_t;

typedef struct arp_t {
    uint16_t hwtype;
    uint16_t proto;
    uint8_t hwlen;
    uint8_t protolen;
    uint16_t opcode;
    uint8_t from[6];
    uint8_t fromip[4];
    uint8_t to[6];
    uint8_t toip[4];
} arp_t;

#endif


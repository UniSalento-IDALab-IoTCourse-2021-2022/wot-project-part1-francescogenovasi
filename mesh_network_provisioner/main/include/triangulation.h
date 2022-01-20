#ifndef MESH_NETWORK_PROVISIONER_TRIANGULATION_H
#define MESH_NETWORK_PROVISIONER_TRIANGULATION_H
#include <stdlib.h>
#include <string.h>
#include "mqtt.h"

typedef struct {
    float x;
    float y;
    uint8_t uuid[16];
    float distance;
}device_node_t;

static device_node_t fixed_nodes[3] = {{.x=14.0,.y=14,.uuid={0xdd, 0xdd, 0x08, 0x3a, 0xf2, 0xac, 0xf3, 0x4e, 0x00,0x00,0x00,0x00, 0x00,0x0,0x00,0x00}, .distance=0},
                           {.x=16.0,.y=2.0,.uuid={0xdd, 0xdd, 0x3c, 0x61, 0x05, 0x3e, 0x95, 0x2a, 0x00,0x00,0x00,0x00, 0x00,0x0,0x00,0x00}, .distance=0},
                           {.x=2.0,.y=2.0,.uuid={0xdd, 0xdd, 0x9c, 0x9c, 0x1f, 0xe9, 0xcb, 0xbe, 0x00,0x00,0x00,0x00, 0x00,0x0,0x00,0x00}, .distance=0}};

void update_distance(uint8_t *uuid,float d);
void estimate_position();

#endif //MESH_NETWORK_PROVISIONER_TRIANGULATION_H

/*
 * Copyright (c) 2016 Chun-Ying Huang
 *
 * This file is part of GamingAnywhere (GA).
 *
 * GA is free software; you can redistribute it and/or modify it
 * under the terms of the 3-clause BSD License as published by the
 * Free Software Foundation: http://directory.fsf.org/wiki/License:BSD_3Clause
 *
 * GA is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * You should have received a copy of the 3-clause BSD License along with GA;
 * if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef __BITRATEADAPTATION_H__
#define __BITRATEADAPTATION_H__

#define BBR_BITRATE_MINIMUM 50
#define BBR_BITRATE_MAXIMUM 30000

#define BBR_CYCLE_DELAY 500000 // Value in microseconds

void bbr_update(
    unsigned int ssrc, 
    unsigned int seq, 
    struct timeval rcvtv, 
    unsigned int timestamp, 
    unsigned int pktsize
    );

void * bitrateadaptation_thread(void *param);

#endif
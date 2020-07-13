//
//  ReadAudio.c
//  ffmpeg_mac
//
//  Created by konglee on 2020/7/14.
//  Copyright © 2020 konglee. All rights reserved.
//

#include "ReadAudio.h"

void ffmpegTestReadAudio() {
    
    AVFormatContext *fmt_ctx = NULL;
    
    AVDictionary *options = NULL;
    
    /// [[ video device] : [audio device]]
    char *devicename = ":0";
    
    // 1. register audio device
    avdevice_register_all();
    
    // 2. get format
    AVInputFormat *iFormate = av_find_input_format("avfoundation");
    int ret = avformat_open_input(&fmt_ctx, devicename, iFormate, &options);
    if (ret < 0) {
        // error
        char error[1024];
        av_strerror(ret, error, sizeof(error));
        printf(stderr, "Failed to open Audio device, [%d]%s\n", ret, error);
        return;
    }
    
    
    av_log_set_level(AV_LOG_DEBUG);
    av_log(NULL, AV_LOG_DEBUG, __func__);
    av_log(NULL, AV_LOG_DEBUG, "\n");
}

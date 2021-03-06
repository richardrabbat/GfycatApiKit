//
//  GfycatMedia.h
//  GfycatApiKit
//
//  Created by Yin Zhu on 1/23/17.
//  Copyright 2017 Gfycat
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//
#import <UIKit/UIKit.h>
#import "GfycatModel.h"

@interface GfycatMedia : GfycatModel <NSCopying, NSSecureCoding, NSObject>

/**
 *  The average color value of the Media in HEX format.  e.g. "#010202"
 */
@property (nonatomic, readonly, copy) NSString *averageColor;

/**
 *  Date of creation of the Media.
 */
@property (nonatomic, readonly) NSDate *createDate;

/**
 *  Caption written by creator of the Media
 */
@property (nonatomic, readonly, copy) NSString *caption;

/**
 *  Number of dislikes on the Media
 */
@property (nonatomic, readonly) NSInteger dislikes;

/**
 *  Original framerate of the Media
 */
@property (nonatomic, readonly) NSInteger frameRate;

/**
 *  Name of the Media
 */
@property (nonatomic, readonly, copy) NSString *gfyName;

/**
 *  Serial number of the Media
 */
@property (nonatomic, readonly) NSInteger gfyNumber;

/**
 *  URL of Gfycat Media
 */
@property (nonatomic, readonly) NSURL *gfyUrl;

/**
 *  Size in bytes of the original GIF representation of the Media
 */
@property (nonatomic, readonly) NSInteger gifSize;

/**
 *  URL of original GIF representation of the Media
 */
@property (nonatomic, readonly) NSURL *gifUrl;

/**
 *  URL of max 100 pixels wide GIF representation of the Media
 */
@property (nonatomic, readonly) NSURL *gif100Url;

/**
 *  URL of max 1MB file GIF representation of the Media
 */
@property (nonatomic, readonly) NSURL *gif1MbUrl;

/**
 *  URL of max 2MB file GIF representation of the Media
 */
@property (nonatomic, readonly) NSURL *gif2MbUrl;

/**
 *  URL of max 5MB file GIF representation of the Media
 */
@property (nonatomic, readonly) NSURL *gif5MbUrl;

/**
 *  Categories of the Media
 */
@property (nonatomic, readonly) NSArray<NSString *> *categories;

/**
 *  Number of likes on the Media
 */
@property (nonatomic, readonly) NSInteger likes;

/**
 *  MD5 checksum of the Media
 */
@property (nonatomic, readonly, copy) NSString *md5;

/**
 *  Size in bytes of the original MP4 representation of the Media
 */
@property (nonatomic, readonly) NSInteger mpgSize;

/**
 *  URL of original MP4 representation of the Media
 */
@property (nonatomic, readonly) NSURL *mpgUrl;

/**
 *  URL of 320 max pixel wide MP4 representation of the Media
 */
@property (nonatomic, readonly) NSURL *mpg320Url;

/**
 *  URL of 640 max pixel wide MP4 representation of the Media
 */
@property (nonatomic, readonly) NSURL *mpg640Url;

/**
 *  URL of MJPG representation of the Media
 */
@property (nonatomic, readonly) NSURL *mjpgUrl;

/**
 *  If the Media is NSFW
 */
@property (nonatomic, readonly, getter=isNsfw) BOOL nsfw;

/**
 *  Original total number of frames of the Media
 */
@property (nonatomic, readonly) NSInteger numberOfFrames;

/**
 *  URL of JPG representation of the Media
 */
@property (nonatomic, readonly) NSURL *posterUrl;

/**
 *  If the Media is published
 */
@property (nonatomic, readonly, getter=isPublished) BOOL published;

/**
 *  Media was sourced from GIF or Video  // TODO - make enum.  1 = video 8 = GIF
 */
@property (nonatomic, readonly) NSInteger sourceType;

/**
 *  Source URL of the Media
 */
@property (nonatomic, readonly) NSURL *sourceUrl;

/**
 *  Size, in pixels of the original media
 */
@property (nonatomic) CGSize size;

/**
 *  Tags on the Media
 */
@property (nonatomic, readonly) NSArray<NSString *> *tags;

/**
 *  URL of 100 max pixel wide JPG representation of the Media
 */
@property (nonatomic, readonly) NSURL *thumbnail100Url;

/**
 *  URL of 320 max pixel wide JPG representation of the Media
 */
@property (nonatomic, readonly) NSURL *thumbnail320Url;

/**
 *  URL of 640 max pixel wide JPG representation of the Media
 */
@property (nonatomic, readonly) NSURL *thumbnail640Url;

/**
 *  Title of the Media
 */
@property (nonatomic, readonly, copy) NSString *title;

/**
 *  Username of the creator of the Media
 */
@property (nonatomic, readonly, copy) NSString *userName;

/**
 *  Number of views of the Media
 */
@property (nonatomic, readonly) NSInteger views;

/**
 *  Size in bytes of the original WEBM representation of the Media
 */
@property (nonatomic, readonly) NSInteger webmSize;

/**
 *  URL of original WEBM representation of the Media
 */
@property (nonatomic, readonly) NSURL *webmUrl;

/**
 *  URL of original WEBP representation of the Media
 */
@property (nonatomic, readonly) NSURL *webpUrl;

@end

@interface GfycatMediaCollection : NSObject <NSCopying, NSSecureCoding>

/**
 *  An array of GfycatMedia objects.
 */
@property (nonatomic, readonly) NSArray<GfycatMedia *> *array;

/**
 *  Wraps existing Media array
 *  @param array Media array
 */
- (instancetype)initWithArray:(NSArray<GfycatMedia *> *)array;

/**
 *  Initializes a new instance.
 *  @param info JSON dictionary
 */
- (instancetype)initWithInfo:(NSDictionary *)info;

@end

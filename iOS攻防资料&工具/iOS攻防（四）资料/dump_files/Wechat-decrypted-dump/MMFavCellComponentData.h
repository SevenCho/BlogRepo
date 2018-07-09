//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMComponentData.h"

@class MMFavHeadComponentData, MMFavNameComponentData, MMFavTagComponentData, MMFavThumbComponentData, MMFavUrlComponentData, MMFavVoiceComponentData, NSArray;

@interface MMFavCellComponentData : MMComponentData
{
    MMFavHeadComponentData *m_headComData;
    MMFavTagComponentData *m_tagComData;
    MMFavNameComponentData *m_nameComData;
    MMFavThumbComponentData *m_thumbComData;
    MMFavUrlComponentData *m_urlComData;
    NSArray *m_imgComDataArr;
    MMFavVoiceComponentData *m_voiceComData;
    int _favType;
}

@property(nonatomic) int favType; // @synthesize favType=_favType;
@property(retain, nonatomic) MMFavVoiceComponentData *m_voiceComData; // @synthesize m_voiceComData;
@property(retain, nonatomic) NSArray *m_imgComDataArr; // @synthesize m_imgComDataArr;
@property(retain, nonatomic) MMFavUrlComponentData *m_urlComData; // @synthesize m_urlComData;
@property(retain, nonatomic) MMFavThumbComponentData *m_thumbComData; // @synthesize m_thumbComData;
@property(retain, nonatomic) MMFavNameComponentData *m_nameComData; // @synthesize m_nameComData;
@property(retain, nonatomic) MMFavTagComponentData *m_tagComData; // @synthesize m_tagComData;
@property(retain, nonatomic) MMFavHeadComponentData *m_headComData; // @synthesize m_headComData;
- (void).cxx_destruct;

@end


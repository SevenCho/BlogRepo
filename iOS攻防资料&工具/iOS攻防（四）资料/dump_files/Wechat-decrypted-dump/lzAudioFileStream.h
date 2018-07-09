//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KSAudioFileProtocol.h"

@class KSAudioDataProvider, NSArray, NSData, NSMutableArray, NSMutableData, NSString;

@interface lzAudioFileStream : NSObject <KSAudioFileProtocol>
{
    BOOL _bEof;
    BOOL _readyToProducePackets;
    BOOL _disContinuous;
    BOOL _isOpened;
    BOOL _needCalculateByProcessedPackets;
    KSAudioDataProvider *_audioDataProvider;
    struct OpaqueAudioFileStreamID *_fileStreamID;
    unsigned long _averageBytesPerSecond;
    unsigned long _maxPacketSize;
    struct OpaqueAudioConverter *_audioConverter;
    unsigned long _outputSizePerPacket;
    NSArray *_audioFileTypes;
    unsigned long _audioDataBitRate;
    NSMutableArray *_audioPackets;
    NSMutableData *_inputData;
    struct AudioStreamPacketDescription *_inputDesc;
    long long _fileReadOffset;
    double _fileDurion;
    long long _curPacketOffset;
    unsigned long long _audioDataOffset;
    unsigned long long _audioDataByteCount;
    unsigned long long _audioDataPacketCount;
    unsigned long long _processedPacketsCount;
    unsigned long long _processedPacketsSizeTotal;
    double _packetDuraion;
    struct AudioStreamBasicDescription _fileFormat;
}

@property(nonatomic) double packetDuraion; // @synthesize packetDuraion=_packetDuraion;
@property(nonatomic) BOOL needCalculateByProcessedPackets; // @synthesize needCalculateByProcessedPackets=_needCalculateByProcessedPackets;
@property(nonatomic) unsigned long long processedPacketsSizeTotal; // @synthesize processedPacketsSizeTotal=_processedPacketsSizeTotal;
@property(nonatomic) unsigned long long processedPacketsCount; // @synthesize processedPacketsCount=_processedPacketsCount;
@property(nonatomic) BOOL isOpened; // @synthesize isOpened=_isOpened;
@property(nonatomic) struct AudioStreamPacketDescription *inputDesc; // @synthesize inputDesc=_inputDesc;
@property(retain, nonatomic) NSMutableData *inputData; // @synthesize inputData=_inputData;
@property(nonatomic) BOOL disContinuous; // @synthesize disContinuous=_disContinuous;
@property(nonatomic) BOOL readyToProducePackets; // @synthesize readyToProducePackets=_readyToProducePackets;
@property(retain, nonatomic) NSMutableArray *audioPackets; // @synthesize audioPackets=_audioPackets;
@property(nonatomic) unsigned long audioDataBitRate; // @synthesize audioDataBitRate=_audioDataBitRate;
@property(nonatomic) unsigned long long audioDataPacketCount; // @synthesize audioDataPacketCount=_audioDataPacketCount;
@property(nonatomic) unsigned long long audioDataByteCount; // @synthesize audioDataByteCount=_audioDataByteCount;
@property(nonatomic) unsigned long long audioDataOffset; // @synthesize audioDataOffset=_audioDataOffset;
@property(retain, nonatomic) NSArray *audioFileTypes; // @synthesize audioFileTypes=_audioFileTypes;
@property(nonatomic) unsigned long outputSizePerPacket; // @synthesize outputSizePerPacket=_outputSizePerPacket;
@property(nonatomic) struct OpaqueAudioConverter *audioConverter; // @synthesize audioConverter=_audioConverter;
@property(nonatomic) long long curPacketOffset; // @synthesize curPacketOffset=_curPacketOffset;
@property(nonatomic) BOOL bEof; // @synthesize bEof=_bEof;
@property(nonatomic) unsigned long maxPacketSize; // @synthesize maxPacketSize=_maxPacketSize;
@property(nonatomic) unsigned long averageBytesPerSecond; // @synthesize averageBytesPerSecond=_averageBytesPerSecond;
@property(nonatomic) double fileDurion; // @synthesize fileDurion=_fileDurion;
@property(nonatomic) long long fileReadOffset; // @synthesize fileReadOffset=_fileReadOffset;
@property(nonatomic) struct AudioStreamBasicDescription fileFormat; // @synthesize fileFormat=_fileFormat;
@property(nonatomic) struct OpaqueAudioFileStreamID *fileStreamID; // @synthesize fileStreamID=_fileStreamID;
@property(retain, nonatomic) KSAudioDataProvider *audioDataProvider; // @synthesize audioDataProvider=_audioDataProvider;
- (void).cxx_destruct;
- (id)guessAudioFileType;
- (long)checkAudioPacketsToRead;
- (long)converter:(unsigned int *)arg1 bufferList:(struct AudioBufferList *)arg2 des:(struct AudioStreamPacketDescription **)arg3;
- (BOOL)createLPCMAudioConvertor:(struct AudioStreamBasicDescription *)arg1 error:(id *)arg2;
- (void)handleAudioPackets:(const void *)arg1 numberBytes:(unsigned long)arg2 numberPackets:(unsigned long)arg3 packetDescriptions:(struct AudioStreamPacketDescription *)arg4;
- (void)dealWithFormatList:(struct OpaqueAudioFileStreamID *)arg1;
- (void)dealWithDataFormat;
- (void)handlePropertyChangeForFileStream:(struct OpaqueAudioFileStreamID *)arg1 fileStreamPropertyID:(unsigned long)arg2 ioFlags:(unsigned int *)arg3;
- (BOOL)readPCMPacket:(struct AudioStreamBasicDescription *)arg1 buffer:(void *)arg2 bytes:(unsigned int *)arg3 packets:(unsigned int *)arg4 err:(id *)arg5;
- (long)readPacket:(void *)arg1 bytes:(unsigned int *)arg2 packets:(unsigned int *)arg3 des:(struct AudioStreamPacketDescription *)arg4;
- (BOOL)seekPacketPos:(double)arg1;
- (BOOL)canProducePackets:(id *)arg1;
- (BOOL)isFileReadyToParsing;
- (BOOL)open:(id *)arg1;
- (void)close;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) unsigned long databytesPerSecond;
@property(readonly, nonatomic) long long lastReadingPos;
@property(readonly, nonatomic) BOOL isEof;
- (struct AudioStreamBasicDescription *)outputDes;
- (id)initWithDataProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(retain, nonatomic) NSData *magicCookie;
@property(readonly) Class superclass;

@end


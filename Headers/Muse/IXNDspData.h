// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from muse_file.djinni

#import <Foundation/Foundation.h>

/**
 * Data struct corresponds to DSP message in Muse protobuf schema.
 * This message is very generic and allows you to save custom messages.
 */

@interface IXNDspData : NSObject
- (id)initWithDspData:(IXNDspData *)dspData;
- (id)initWithType:(NSString *)type floatArray:(NSArray *)floatArray intArray:(NSArray *)intArray version:(NSString *)version;

/** Type of your message */
@property (nonatomic, readonly) NSString *type;

/** array of floating point data */
@property (nonatomic, readonly) NSArray *floatArray;

/** array of integer data */
@property (nonatomic, readonly) NSArray *intArray;

/** version of your message format */
@property (nonatomic, readonly) NSString *version;

@end
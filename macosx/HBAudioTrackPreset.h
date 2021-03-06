/*  HBAudioTrackPreset.h $

 This file is part of the HandBrake source code.
 Homepage: <http://handbrake.fr/>.
 It may be used under the terms of the GNU General Public License. */

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 *  HBAudioTrackPreset
 *  a KVO enabled class used in the Audio Defaults panels,
 *  automatically validates the values.
 */
@interface HBAudioTrackPreset : NSObject <NSSecureCoding, NSCopying>

- (instancetype)initWithContainer:(int)container;
- (void)containerChanged:(int)container;

/**
 *  track properties.
 */
@property (nonatomic, readwrite) int encoder;
@property (nonatomic, readwrite) int mixdown;
@property (nonatomic, readwrite) int sampleRate;
@property (nonatomic, readwrite) int bitRate;

@property (nonatomic, readwrite) double gain;
@property (nonatomic, readwrite) double drc;

/**
 *  Arrays of possible options for the track properties.
 */
@property (nonatomic, readonly) NSArray *encoders;
@property (nonatomic, readonly) NSArray *mixdowns;
@property (nonatomic, readonly) NSArray *samplerates;
@property (nonatomic, readonly) NSArray *bitrates;

@end

NS_ASSUME_NONNULL_END

/**
 *  A series of value trasformers to bridge the libhb enums
 *  to the textual rapresentations used in the interface.
 */
@interface HBEncoderTrasformer : NSValueTransformer
@end

@interface HBMixdownTrasformer : NSValueTransformer
@end

@interface HBSampleRateTrasformer : NSValueTransformer
@end

@interface HBIntegerTrasformer : NSValueTransformer
@end
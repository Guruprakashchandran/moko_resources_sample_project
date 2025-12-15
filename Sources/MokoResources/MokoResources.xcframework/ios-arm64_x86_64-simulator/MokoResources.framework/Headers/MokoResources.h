#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class MokoResourcesAssetResource, MokoResourcesColor, MokoResourcesColorCompanion, MokoResourcesColorDescCompanion, MokoResourcesColorResource, MokoResourcesCompositionStringDesc, MokoResourcesFileResource, MokoResourcesFontResource, MokoResourcesImageDescCompanion, MokoResourcesImageDescResource, MokoResourcesImageDescUrl, MokoResourcesImageResource, MokoResourcesKotlinArray<T>, MokoResourcesKotlinException, MokoResourcesKotlinThrowable, MokoResourcesPluralFormattedStringDesc, MokoResourcesPluralStringDesc, MokoResourcesPluralsResource, MokoResourcesRawStringDesc, MokoResourcesResourceFormattedStringDesc, MokoResourcesResourcePlatformDetails, MokoResourcesResourceStringDesc, MokoResourcesSharedRes, MokoResourcesSharedResStrings, MokoResourcesStringDescCompanion, MokoResourcesStringDescLocaleType, MokoResourcesStringDescLocaleTypeSystem, MokoResourcesStringResource, MokoResourcesUtils, NSBundle, NSData, NSError, NSLocale, NSURL, UIColor, UIFont, UIImage;

@protocol MokoResourcesColorDesc, MokoResourcesImageDesc, MokoResourcesKotlinIterator, MokoResourcesResourceContainer, MokoResourcesStringDesc;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface MokoResourcesBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface MokoResourcesBase (MokoResourcesBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface MokoResourcesMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface MokoResourcesMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorMokoResourcesKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface MokoResourcesNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface MokoResourcesByte : MokoResourcesNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface MokoResourcesUByte : MokoResourcesNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface MokoResourcesShort : MokoResourcesNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface MokoResourcesUShort : MokoResourcesNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface MokoResourcesInt : MokoResourcesNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface MokoResourcesUInt : MokoResourcesNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface MokoResourcesLong : MokoResourcesNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface MokoResourcesULong : MokoResourcesNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface MokoResourcesFloat : MokoResourcesNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface MokoResourcesDouble : MokoResourcesNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface MokoResourcesBoolean : MokoResourcesNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharedRes")))
@interface MokoResourcesSharedRes : MokoResourcesBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sharedRes __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MokoResourcesSharedRes *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("ResourceContainer")))
@protocol MokoResourcesResourceContainer
@required
- (NSArray<id> *)values __attribute__((swift_name("values()")));
@property (readonly) MokoResourcesResourcePlatformDetails *__platformDetails __attribute__((swift_name("__platformDetails")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharedRes.strings")))
@interface MokoResourcesSharedResStrings : MokoResourcesBase <MokoResourcesResourceContainer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)strings __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MokoResourcesSharedResStrings *shared __attribute__((swift_name("shared")));
- (NSArray<MokoResourcesStringResource *> *)values __attribute__((swift_name("values()")));
@property (readonly) MokoResourcesResourcePlatformDetails *__platformDetails __attribute__((swift_name("__platformDetails")));
@property (readonly) MokoResourcesStringResource *app_name __attribute__((swift_name("app_name")));
@property (readonly) MokoResourcesStringResource *greeting __attribute__((swift_name("greeting")));
@property (readonly) MokoResourcesStringResource *welcome_message __attribute__((swift_name("welcome_message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MokoStrings")))
@interface MokoResourcesMokoStrings : MokoResourcesBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)getId:(MokoResourcesStringResource *)id __attribute__((swift_name("get(id:)")));
- (NSString *)getId:(MokoResourcesStringResource *)id args:(MokoResourcesKotlinArray<id> *)args __attribute__((swift_name("get(id:args:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Color")))
@interface MokoResourcesColor : MokoResourcesBase
- (instancetype)initWithColorRGBA:(int64_t)colorRGBA __attribute__((swift_name("init(colorRGBA:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithRed:(int32_t)red green:(int32_t)green blue:(int32_t)blue alpha:(int32_t)alpha __attribute__((swift_name("init(red:green:blue:alpha:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MokoResourcesColorCompanion *companion __attribute__((swift_name("companion")));
- (MokoResourcesColor *)doCopyRed:(int32_t)red green:(int32_t)green blue:(int32_t)blue alpha:(int32_t)alpha __attribute__((swift_name("doCopy(red:green:blue:alpha:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t alpha __attribute__((swift_name("alpha")));
@property (readonly) int64_t argb __attribute__((swift_name("argb")));
@property (readonly) int32_t blue __attribute__((swift_name("blue")));
@property (readonly) int32_t green __attribute__((swift_name("green")));
@property (readonly) int32_t red __attribute__((swift_name("red")));
@property (readonly) int64_t rgba __attribute__((swift_name("rgba")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Color.Companion")))
@interface MokoResourcesColorCompanion : MokoResourcesBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MokoResourcesColorCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("FileResource")))
@interface MokoResourcesFileResource : MokoResourcesBase
- (instancetype)initWithFileName:(NSString *)fileName extension:(NSString *)extension bundle:(NSBundle *)bundle __attribute__((swift_name("init(fileName:extension:bundle:)"))) __attribute__((objc_designated_initializer));
- (NSString *)readText __attribute__((swift_name("readText()")));
@property (readonly) NSBundle *bundle __attribute__((swift_name("bundle")));
@property (readonly) NSString *extension __attribute__((swift_name("extension")));
@property (readonly) NSString *fileName __attribute__((swift_name("fileName")));
@property (readonly) NSString *path __attribute__((swift_name("path")));
@property (readonly) NSURL *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AssetResource")))
@interface MokoResourcesAssetResource : MokoResourcesFileResource
- (instancetype)initWithOriginalPath:(NSString *)originalPath fileName:(NSString *)fileName extension:(NSString *)extension bundle:(NSBundle *)bundle __attribute__((swift_name("init(originalPath:fileName:extension:bundle:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithFileName:(NSString *)fileName extension:(NSString *)extension bundle:(NSBundle *)bundle __attribute__((swift_name("init(fileName:extension:bundle:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
@property (readonly) NSString *originalPath __attribute__((swift_name("originalPath")));
@property (readonly) NSString *path __attribute__((swift_name("path")));
@property (readonly) NSURL *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ColorResource")))
@interface MokoResourcesColorResource : MokoResourcesBase
- (instancetype)initWithName:(NSString *)name bundle:(NSBundle *)bundle __attribute__((swift_name("init(name:bundle:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSBundle *bundle __attribute__((swift_name("bundle")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FontResource")))
@interface MokoResourcesFontResource : MokoResourcesBase
- (instancetype)initWithFontName:(NSString *)fontName bundle:(NSBundle *)bundle __attribute__((swift_name("init(fontName:bundle:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of ObjCErrorException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)registerFontAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("registerFont()")));
@property (readonly) NSBundle *bundle __attribute__((swift_name("bundle")));
@property (readonly) NSData *data __attribute__((swift_name("data")));
@property (readonly) NSString *filePath __attribute__((swift_name("filePath")));
@property (readonly) NSString *fontName __attribute__((swift_name("fontName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageResource")))
@interface MokoResourcesImageResource : MokoResourcesBase
- (instancetype)initWithAssetImageName:(NSString *)assetImageName bundle:(NSBundle *)bundle __attribute__((swift_name("init(assetImageName:bundle:)"))) __attribute__((objc_designated_initializer));
- (MokoResourcesImageResource *)doCopyAssetImageName:(NSString *)assetImageName bundle:(NSBundle *)bundle __attribute__((swift_name("doCopy(assetImageName:bundle:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (UIImage * _Nullable)toUIImage __attribute__((swift_name("toUIImage()")));
@property (readonly) NSString *assetImageName __attribute__((swift_name("assetImageName")));
@property (readonly) NSBundle *bundle __attribute__((swift_name("bundle")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PluralsResource")))
@interface MokoResourcesPluralsResource : MokoResourcesBase
- (instancetype)initWithResourceId:(NSString *)resourceId bundle:(NSBundle *)bundle __attribute__((swift_name("init(resourceId:bundle:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSBundle *bundle __attribute__((swift_name("bundle")));
@property (readonly) NSString *resourceId __attribute__((swift_name("resourceId")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface MokoResourcesKotlinThrowable : MokoResourcesBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MokoResourcesKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MokoResourcesKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (MokoResourcesKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MokoResourcesKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface MokoResourcesKotlinException : MokoResourcesKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MokoResourcesKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MokoResourcesKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReadFileTextException")))
@interface MokoResourcesReadFileTextException : MokoResourcesKotlinException
- (instancetype)initWithFileResource:(MokoResourcesFileResource *)fileResource info:(NSString *)info __attribute__((swift_name("init(fileResource:info:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithFileResource:(MokoResourcesFileResource *)fileResource error:(NSError *)error __attribute__((swift_name("init(fileResource:error:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(MokoResourcesKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MokoResourcesKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) MokoResourcesFileResource *fileResource __attribute__((swift_name("fileResource")));
@property (readonly) NSString *info __attribute__((swift_name("info")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResourcePlatformDetails")))
@interface MokoResourcesResourcePlatformDetails : MokoResourcesBase
- (instancetype)initWithNsBundle:(NSBundle *)nsBundle __attribute__((swift_name("init(nsBundle:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSBundle *nsBundle __attribute__((swift_name("nsBundle")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StringResource")))
@interface MokoResourcesStringResource : MokoResourcesBase
- (instancetype)initWithResourceId:(NSString *)resourceId bundle:(NSBundle *)bundle __attribute__((swift_name("init(resourceId:bundle:)"))) __attribute__((objc_designated_initializer));
- (MokoResourcesStringResource *)doCopyResourceId:(NSString *)resourceId bundle:(NSBundle *)bundle __attribute__((swift_name("doCopy(resourceId:bundle:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSBundle *bundle __attribute__((swift_name("bundle")));
@property (readonly) NSString *resourceId __attribute__((swift_name("resourceId")));
@end

__attribute__((swift_name("StringDesc")))
@protocol MokoResourcesStringDesc
@required
- (NSString *)localized __attribute__((swift_name("localized()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CompositionStringDesc")))
@interface MokoResourcesCompositionStringDesc : MokoResourcesBase <MokoResourcesStringDesc>
- (instancetype)initWithArgs:(id)args separator:(NSString * _Nullable)separator __attribute__((swift_name("init(args:separator:)"))) __attribute__((objc_designated_initializer));
- (MokoResourcesCompositionStringDesc *)doCopyArgs:(id)args separator:(NSString * _Nullable)separator __attribute__((swift_name("doCopy(args:separator:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)localized __attribute__((swift_name("localized()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id args __attribute__((swift_name("args")));
@property (readonly) NSString * _Nullable separator __attribute__((swift_name("separator")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PluralFormattedStringDesc")))
@interface MokoResourcesPluralFormattedStringDesc : MokoResourcesBase <MokoResourcesStringDesc>
- (instancetype)initWithPluralsRes:(MokoResourcesPluralsResource *)pluralsRes number:(int32_t)number args:(NSArray<id> *)args __attribute__((swift_name("init(pluralsRes:number:args:)"))) __attribute__((objc_designated_initializer));
- (MokoResourcesPluralFormattedStringDesc *)doCopyPluralsRes:(MokoResourcesPluralsResource *)pluralsRes number:(int32_t)number args:(NSArray<id> *)args __attribute__((swift_name("doCopy(pluralsRes:number:args:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)localized __attribute__((swift_name("localized()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<id> *args __attribute__((swift_name("args")));
@property (readonly) int32_t number __attribute__((swift_name("number")));
@property (readonly) MokoResourcesPluralsResource *pluralsRes __attribute__((swift_name("pluralsRes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PluralStringDesc")))
@interface MokoResourcesPluralStringDesc : MokoResourcesBase <MokoResourcesStringDesc>
- (instancetype)initWithPluralsRes:(MokoResourcesPluralsResource *)pluralsRes number:(int32_t)number __attribute__((swift_name("init(pluralsRes:number:)"))) __attribute__((objc_designated_initializer));
- (MokoResourcesPluralStringDesc *)doCopyPluralsRes:(MokoResourcesPluralsResource *)pluralsRes number:(int32_t)number __attribute__((swift_name("doCopy(pluralsRes:number:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)localized __attribute__((swift_name("localized()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t number __attribute__((swift_name("number")));
@property (readonly) MokoResourcesPluralsResource *pluralsRes __attribute__((swift_name("pluralsRes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RawStringDesc")))
@interface MokoResourcesRawStringDesc : MokoResourcesBase <MokoResourcesStringDesc>
- (instancetype)initWithString:(NSString *)string __attribute__((swift_name("init(string:)"))) __attribute__((objc_designated_initializer));
- (MokoResourcesRawStringDesc *)doCopyString:(NSString *)string __attribute__((swift_name("doCopy(string:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)localized __attribute__((swift_name("localized()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *string __attribute__((swift_name("string")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResourceFormattedStringDesc")))
@interface MokoResourcesResourceFormattedStringDesc : MokoResourcesBase <MokoResourcesStringDesc>
- (instancetype)initWithStringRes:(MokoResourcesStringResource *)stringRes args:(NSArray<id> *)args __attribute__((swift_name("init(stringRes:args:)"))) __attribute__((objc_designated_initializer));
- (MokoResourcesResourceFormattedStringDesc *)doCopyStringRes:(MokoResourcesStringResource *)stringRes args:(NSArray<id> *)args __attribute__((swift_name("doCopy(stringRes:args:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)localized __attribute__((swift_name("localized()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<id> *args __attribute__((swift_name("args")));
@property (readonly) MokoResourcesStringResource *stringRes __attribute__((swift_name("stringRes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResourceStringDesc")))
@interface MokoResourcesResourceStringDesc : MokoResourcesBase <MokoResourcesStringDesc>
- (instancetype)initWithStringRes:(MokoResourcesStringResource *)stringRes __attribute__((swift_name("init(stringRes:)"))) __attribute__((objc_designated_initializer));
- (MokoResourcesResourceStringDesc *)doCopyStringRes:(MokoResourcesStringResource *)stringRes __attribute__((swift_name("doCopy(stringRes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)localized __attribute__((swift_name("localized()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MokoResourcesStringResource *stringRes __attribute__((swift_name("stringRes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StringDescCompanion")))
@interface MokoResourcesStringDescCompanion : MokoResourcesBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MokoResourcesStringDescCompanion *shared __attribute__((swift_name("shared")));
@property MokoResourcesStringDescLocaleType *localeType __attribute__((swift_name("localeType")));
@end

__attribute__((swift_name("StringDescLocaleType")))
@interface MokoResourcesStringDescLocaleType : MokoResourcesBase
- (NSBundle *)getLocaleBundleRootBundle:(NSBundle *)rootBundle __attribute__((swift_name("getLocaleBundle(rootBundle:)")));
@property (readonly) NSLocale *locale __attribute__((swift_name("locale")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StringDescLocaleType.Custom")))
@interface MokoResourcesStringDescLocaleTypeCustom : MokoResourcesStringDescLocaleType
- (instancetype)initWithLocale:(NSString *)locale __attribute__((swift_name("init(locale:)"))) __attribute__((objc_designated_initializer));
- (NSBundle *)getLocaleBundleRootBundle:(NSBundle *)rootBundle __attribute__((swift_name("getLocaleBundle(rootBundle:)")));
@property (readonly) NSLocale *locale __attribute__((swift_name("locale")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StringDescLocaleType.System")))
@interface MokoResourcesStringDescLocaleTypeSystem : MokoResourcesStringDescLocaleType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)system __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MokoResourcesStringDescLocaleTypeSystem *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSBundle *)getLocaleBundleRootBundle:(NSBundle *)rootBundle __attribute__((swift_name("getLocaleBundle(rootBundle:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSLocale *locale __attribute__((swift_name("locale")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Utils")))
@interface MokoResourcesUtils : MokoResourcesBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)utils __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MokoResourcesUtils *shared __attribute__((swift_name("shared")));
- (NSString *)localizedStringStringRes:(MokoResourcesStringResource *)stringRes __attribute__((swift_name("localizedString(stringRes:)")));
- (MokoResourcesKotlinArray<id> *)processArgsArgs:(NSArray<id> *)args __attribute__((swift_name("processArgs(args:)")));
- (NSString *)stringWithFormatFormat:(NSString *)format args:(MokoResourcesKotlinArray<id> *)args __attribute__((swift_name("stringWithFormat(format:args:)")));
@property (readonly) NSString *BASE_LOCALIZATION __attribute__((swift_name("BASE_LOCALIZATION")));
@end

__attribute__((swift_name("ColorDesc")))
@protocol MokoResourcesColorDesc
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ColorDescCompanion")))
@interface MokoResourcesColorDescCompanion : MokoResourcesBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MokoResourcesColorDescCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ColorDescResource")))
@interface MokoResourcesColorDescResource : MokoResourcesBase <MokoResourcesColorDesc>
- (instancetype)initWithResource:(MokoResourcesColorResource *)resource __attribute__((swift_name("init(resource:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MokoResourcesColorResource *resource __attribute__((swift_name("resource")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ColorDescSingle")))
@interface MokoResourcesColorDescSingle : MokoResourcesBase <MokoResourcesColorDesc>
- (instancetype)initWithColor:(MokoResourcesColor *)color __attribute__((swift_name("init(color:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MokoResourcesColor *color __attribute__((swift_name("color")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ColorDescThemed")))
@interface MokoResourcesColorDescThemed : MokoResourcesBase <MokoResourcesColorDesc>
- (instancetype)initWithLightColor:(MokoResourcesColor *)lightColor darkColor:(MokoResourcesColor *)darkColor __attribute__((swift_name("init(lightColor:darkColor:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MokoResourcesColor *darkColor __attribute__((swift_name("darkColor")));
@property (readonly) MokoResourcesColor *lightColor __attribute__((swift_name("lightColor")));
@end

__attribute__((swift_name("ImageDesc")))
@protocol MokoResourcesImageDesc
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageDescCompanion")))
@interface MokoResourcesImageDescCompanion : MokoResourcesBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MokoResourcesImageDescCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageDescResource")))
@interface MokoResourcesImageDescResource : MokoResourcesBase <MokoResourcesImageDesc>
- (instancetype)initWithResource:(MokoResourcesImageResource *)resource __attribute__((swift_name("init(resource:)"))) __attribute__((objc_designated_initializer));
- (MokoResourcesImageDescResource *)doCopyResource:(MokoResourcesImageResource *)resource __attribute__((swift_name("doCopy(resource:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MokoResourcesImageResource *resource __attribute__((swift_name("resource")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageDescUrl")))
@interface MokoResourcesImageDescUrl : MokoResourcesBase <MokoResourcesImageDesc>
- (instancetype)initWithUrl:(NSString *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (MokoResourcesImageDescUrl *)doCopyUrl:(NSString *)url __attribute__((swift_name("doCopy(url:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end

@interface MokoResourcesColor (Extensions)
- (id<MokoResourcesColorDesc>)asColorDesc __attribute__((swift_name("asColorDesc()")));
- (UIColor *)toUIColor __attribute__((swift_name("toUIColor()")));
@end

@interface MokoResourcesColorCompanion (Extensions)
- (MokoResourcesColor *)parseColorColorHEX:(NSString *)colorHEX __attribute__((swift_name("parseColor(colorHEX:)")));
@end

@interface MokoResourcesColorResource (Extensions)
- (id<MokoResourcesColorDesc>)asColorDesc __attribute__((swift_name("asColorDesc()")));
- (UIColor *)getUIColor __attribute__((swift_name("getUIColor()")));
@end

@interface MokoResourcesFontResource (Extensions)
- (UIFont *)uiFontWithSize:(double)withSize __attribute__((swift_name("uiFont(withSize:)")));
@end

@interface MokoResourcesImageResource (Extensions)
- (id<MokoResourcesImageDesc>)asImageDesc __attribute__((swift_name("asImageDesc()")));
@end

@interface MokoResourcesPluralsResource (Extensions)
- (MokoResourcesPluralStringDesc *)descNumber:(int32_t)number __attribute__((swift_name("desc(number:)")));
- (MokoResourcesPluralFormattedStringDesc *)formatNumber:(int32_t)number args:(MokoResourcesKotlinArray<id> *)args __attribute__((swift_name("format(number:args:)")));
- (MokoResourcesPluralFormattedStringDesc *)formatNumber:(int32_t)number args_:(NSArray<id> *)args __attribute__((swift_name("format(number:args_:)")));
@end

@interface MokoResourcesStringResource (Extensions)
- (MokoResourcesResourceStringDesc *)desc __attribute__((swift_name("desc()")));
- (MokoResourcesResourceFormattedStringDesc *)formatArgs:(MokoResourcesKotlinArray<id> *)args __attribute__((swift_name("format(args:)")));
- (MokoResourcesResourceFormattedStringDesc *)formatArgs_:(NSArray<id> *)args __attribute__((swift_name("format(args_:)")));
@end

@interface MokoResourcesStringDescCompanion (Extensions)
- (MokoResourcesCompositionStringDesc *)CompositionArgs:(id)args separator:(NSString * _Nullable)separator __attribute__((swift_name("Composition(args:separator:)")));
- (MokoResourcesPluralStringDesc *)PluralPluralsRes:(MokoResourcesPluralsResource *)pluralsRes number:(int32_t)number __attribute__((swift_name("Plural(pluralsRes:number:)")));
- (MokoResourcesPluralFormattedStringDesc *)PluralFormattedPluralsRes:(MokoResourcesPluralsResource *)pluralsRes number:(int32_t)number args:(MokoResourcesKotlinArray<id> *)args __attribute__((swift_name("PluralFormatted(pluralsRes:number:args:)")));
- (MokoResourcesPluralFormattedStringDesc *)PluralFormattedPluralsRes:(MokoResourcesPluralsResource *)pluralsRes number:(int32_t)number args_:(NSArray<id> *)args __attribute__((swift_name("PluralFormatted(pluralsRes:number:args_:)")));
- (MokoResourcesRawStringDesc *)RawString:(NSString *)string __attribute__((swift_name("Raw(string:)")));
- (MokoResourcesResourceStringDesc *)ResourceStringRes:(MokoResourcesStringResource *)stringRes __attribute__((swift_name("Resource(stringRes:)")));
- (MokoResourcesResourceFormattedStringDesc *)ResourceFormattedStringRes:(MokoResourcesStringResource *)stringRes args:(MokoResourcesKotlinArray<id> *)args __attribute__((swift_name("ResourceFormatted(stringRes:args:)")));
- (MokoResourcesResourceFormattedStringDesc *)ResourceFormattedStringRes:(MokoResourcesStringResource *)stringRes args_:(NSArray<id> *)args __attribute__((swift_name("ResourceFormatted(stringRes:args_:)")));
@end

@interface MokoResourcesColorDescCompanion (Extensions)
- (id<MokoResourcesColorDesc>)ResourceResource:(MokoResourcesColorResource *)resource __attribute__((swift_name("Resource(resource:)")));
- (id<MokoResourcesColorDesc>)SingleColor:(MokoResourcesColor *)color __attribute__((swift_name("Single(color:)")));
- (id<MokoResourcesColorDesc>)ThemedLightColor:(MokoResourcesColor *)lightColor darkColor:(MokoResourcesColor *)darkColor __attribute__((swift_name("Themed(lightColor:darkColor:)")));
@end

@interface MokoResourcesImageDescCompanion (Extensions)
- (id<MokoResourcesImageDesc>)ResourceResource:(MokoResourcesImageResource *)resource __attribute__((swift_name("Resource(resource:)")));
- (id<MokoResourcesImageDesc>)UrlUrl:(NSString *)url __attribute__((swift_name("Url(url:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ColorDescExtKt")))
@interface MokoResourcesColorDescExtKt : MokoResourcesBase
+ (UIColor *)getUIColor:(id<MokoResourcesColorDesc>)receiver __attribute__((swift_name("getUIColor(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageDescUrlKt")))
@interface MokoResourcesImageDescUrlKt : MokoResourcesBase
+ (id<MokoResourcesImageDesc>)asImageUrl:(NSString *)receiver __attribute__((swift_name("asImageUrl(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NSBundleExtKt")))
@interface MokoResourcesNSBundleExtKt : MokoResourcesBase
+ (NSBundle *)loadableBundle:(Class)receiver identifier:(NSString *)identifier __attribute__((swift_name("loadableBundle(_:identifier:)")));
@property (class) BOOL isBundleSearchLogEnabled __attribute__((swift_name("isBundleSearchLogEnabled")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform_iosKt")))
@interface MokoResourcesPlatform_iosKt : MokoResourcesBase
+ (NSString *)platform __attribute__((swift_name("platform()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResourceContainerExtKt")))
@interface MokoResourcesResourceContainerExtKt : MokoResourcesBase
+ (MokoResourcesAssetResource * _Nullable)getAssetByFilePath:(id<MokoResourcesResourceContainer>)receiver filePath:(NSString *)filePath __attribute__((swift_name("getAssetByFilePath(_:filePath:)")));
+ (MokoResourcesImageResource * _Nullable)getImageByFileName:(id<MokoResourcesResourceContainer>)receiver fileName:(NSString *)fileName __attribute__((swift_name("getImageByFileName(_:fileName:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StringDescKt")))
@interface MokoResourcesStringDescKt : MokoResourcesBase
+ (MokoResourcesRawStringDesc *)desc:(NSString *)receiver __attribute__((swift_name("desc(_:)")));
+ (id<MokoResourcesStringDesc>)joinToStringDesc:(id)receiver separator:(NSString *)separator __attribute__((swift_name("joinToStringDesc(_:separator:)")));
+ (id<MokoResourcesStringDesc>)plus:(id<MokoResourcesStringDesc>)receiver other:(id<MokoResourcesStringDesc>)other __attribute__((swift_name("plus(_:other:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface MokoResourcesKotlinArray<T> : MokoResourcesBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(MokoResourcesInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<MokoResourcesKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinObjCErrorException")))
@interface MokoResourcesKotlinObjCErrorException : MokoResourcesKotlinException
- (instancetype)initWithMessage:(NSString * _Nullable)message error:(id)error __attribute__((swift_name("init(message:error:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(MokoResourcesKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MokoResourcesKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol MokoResourcesKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END

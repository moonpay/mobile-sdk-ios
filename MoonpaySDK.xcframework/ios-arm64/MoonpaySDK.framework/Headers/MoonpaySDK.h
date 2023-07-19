#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class MSDKMoonpayEnvironment, MSDKMoonpayOptions, MSDKMoonpayLogger, MSDKMoonpayFlow, MSDKKotlinEnumCompanion, MSDKKotlinEnum<E>, MSDKMoonpayDebugCompanion, MSDKMoonpayDebug, MSDKKotlinArray<T>, MSDKMoonpayRenderingAndroid, MSDKMoonpayRenderingiOS, MSDKEnvironment, MSDKMessagingErrorOptions, MSDKMessagingErrorCode, MSDKKotlinThrowable, MSDKKotlinException, MSDKMoonpayErrorPayloadCompanion, MSDKMoonpayHandshakePayloadCompanion, MSDKMoonpayMessageType, MSDKMoonpayRejectMessageCompanion, MSDKMoonpayRequestMessageCompanion, MSDKMoonpayResolveMessageCompanion, NSObject, MSDKKotlinRuntimeException, MSDKKotlinIllegalStateException;

@protocol MSDKKotlinComparable, MSDKMoonpayCallbackInterface, MSDKMoonpayMessageCallback, MSDKMoonpayErrorPayload, MSDKMoonpayNormalPayload, MSDKMoonpayHandshakePayload, MSDKMoonpayMessageBase, MSDKMoonpayHandshakeResolvePayload, MSDKMoonpayRequestMessage, MSDKKotlinIterator;

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
@interface MSDKBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface MSDKBase (MSDKBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface MSDKMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface MSDKMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorMSDKKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface MSDKNumber : NSNumber
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
@interface MSDKByte : MSDKNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface MSDKUByte : MSDKNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface MSDKShort : MSDKNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface MSDKUShort : MSDKNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface MSDKInt : MSDKNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface MSDKUInt : MSDKNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface MSDKLong : MSDKNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface MSDKULong : MSDKNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface MSDKFloat : MSDKNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface MSDKDouble : MSDKNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface MSDKBoolean : MSDKNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("Environment")))
@interface MSDKEnvironment : MSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)getBaseURL __attribute__((swift_name("getBaseURL()")));
- (NSString *)getFullURL __attribute__((swift_name("getFullURL()")));
- (void)doInitApiKey:(NSString *)apiKey environment:(MSDKMoonpayEnvironment *)environment properties:(NSDictionary<MSDKMoonpayOptions *, id> * _Nullable)properties logger:(MSDKMoonpayLogger *)logger flow:(MSDKMoonpayFlow *)flow __attribute__((swift_name("doInit(apiKey:environment:properties:logger:flow:)")));
- (void)setSignatureSignature:(NSString *)signature __attribute__((swift_name("setSignature(signature:)")));
@property NSString *mAPIKey __attribute__((swift_name("mAPIKey")));
@property MSDKMoonpayEnvironment *mConfigEnvironment __attribute__((swift_name("mConfigEnvironment")));
@property MSDKMoonpayFlow *mFlow __attribute__((swift_name("mFlow")));
@property MSDKMoonpayLogger *mLogger __attribute__((swift_name("mLogger")));
@property NSDictionary<MSDKMoonpayOptions *, id> * _Nullable mProperties __attribute__((swift_name("mProperties")));
@property NSString *mSignature __attribute__((swift_name("mSignature")));
@end

__attribute__((swift_name("MoonpayCallbackInterface")))
@protocol MSDKMoonpayCallbackInterface
@required
- (void)hasLoadedWeb __attribute__((swift_name("hasLoadedWeb()")));
- (void)receivedMessageMessage:(id)message __attribute__((swift_name("receivedMessage(message:)")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol MSDKKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface MSDKKotlinEnum<E> : MSDKBase <MSDKKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MSDKKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoonpayDebug")))
@interface MSDKMoonpayDebug : MSDKKotlinEnum<MSDKMoonpayDebug *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MSDKMoonpayDebugCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) MSDKMoonpayDebug *none __attribute__((swift_name("none")));
@property (class, readonly) MSDKMoonpayDebug *info __attribute__((swift_name("info")));
@property (class, readonly) MSDKMoonpayDebug *warning __attribute__((swift_name("warning")));
@property (class, readonly) MSDKMoonpayDebug *error __attribute__((swift_name("error")));
+ (MSDKKotlinArray<MSDKMoonpayDebug *> *)values __attribute__((swift_name("values()")));
- (NSString *)stringValue __attribute__((swift_name("stringValue()")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoonpayDebug.Companion")))
@interface MSDKMoonpayDebugCompanion : MSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MSDKMoonpayDebugCompanion *shared __attribute__((swift_name("shared")));
- (MSDKMoonpayDebug *)fromIntValue:(int32_t)value __attribute__((swift_name("fromInt(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoonpayEnvironment")))
@interface MSDKMoonpayEnvironment : MSDKKotlinEnum<MSDKMoonpayEnvironment *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MSDKMoonpayEnvironment *production __attribute__((swift_name("production")));
@property (class, readonly) MSDKMoonpayEnvironment *sandbox __attribute__((swift_name("sandbox")));
+ (MSDKKotlinArray<MSDKMoonpayEnvironment *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoonpayFlow")))
@interface MSDKMoonpayFlow : MSDKKotlinEnum<MSDKMoonpayFlow *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MSDKMoonpayFlow *buy __attribute__((swift_name("buy")));
@property (class, readonly) MSDKMoonpayFlow *sell __attribute__((swift_name("sell")));
@property (class, readonly) MSDKMoonpayFlow *swaps __attribute__((swift_name("swaps")));
+ (MSDKKotlinArray<MSDKMoonpayFlow *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoonpayLogger")))
@interface MSDKMoonpayLogger : MSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addLogString:(NSString *)string level:(MSDKMoonpayDebug *)level __attribute__((swift_name("addLog(string:level:)")));
- (void)doInitDebugLevel:(MSDKMoonpayDebug *)debugLevel __attribute__((swift_name("doInit(debugLevel:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoonpayOptions")))
@interface MSDKMoonpayOptions : MSDKKotlinEnum<MSDKMoonpayOptions *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MSDKMoonpayOptions *currencycode __attribute__((swift_name("currencycode")));
@property (class, readonly) MSDKMoonpayOptions *defaultcurrencycode __attribute__((swift_name("defaultcurrencycode")));
@property (class, readonly) MSDKMoonpayOptions *walletaddress __attribute__((swift_name("walletaddress")));
@property (class, readonly) MSDKMoonpayOptions *walletaddresstag __attribute__((swift_name("walletaddresstag")));
@property (class, readonly) MSDKMoonpayOptions *walletaddresses __attribute__((swift_name("walletaddresses")));
@property (class, readonly) MSDKMoonpayOptions *colorcode __attribute__((swift_name("colorcode")));
@property (class, readonly) MSDKMoonpayOptions *theme __attribute__((swift_name("theme")));
@property (class, readonly) MSDKMoonpayOptions *themeid __attribute__((swift_name("themeid")));
@property (class, readonly) MSDKMoonpayOptions *language __attribute__((swift_name("language")));
@property (class, readonly) MSDKMoonpayOptions *basecurrencycode __attribute__((swift_name("basecurrencycode")));
@property (class, readonly) MSDKMoonpayOptions *basecurrencyamount __attribute__((swift_name("basecurrencyamount")));
@property (class, readonly) MSDKMoonpayOptions *quotecurrencyamount __attribute__((swift_name("quotecurrencyamount")));
@property (class, readonly) MSDKMoonpayOptions *lockamount __attribute__((swift_name("lockamount")));
@property (class, readonly) MSDKMoonpayOptions *email __attribute__((swift_name("email")));
@property (class, readonly) MSDKMoonpayOptions *externaltransactionid __attribute__((swift_name("externaltransactionid")));
@property (class, readonly) MSDKMoonpayOptions *externalcustomerid __attribute__((swift_name("externalcustomerid")));
@property (class, readonly) MSDKMoonpayOptions *paymentmethod __attribute__((swift_name("paymentmethod")));
@property (class, readonly) MSDKMoonpayOptions *redirecturl __attribute__((swift_name("redirecturl")));
@property (class, readonly) MSDKMoonpayOptions *showallcurrencies __attribute__((swift_name("showallcurrencies")));
@property (class, readonly) MSDKMoonpayOptions *showonlycurrencies __attribute__((swift_name("showonlycurrencies")));
@property (class, readonly) MSDKMoonpayOptions *showwalletaddressform __attribute__((swift_name("showwalletaddressform")));
@property (class, readonly) MSDKMoonpayOptions *unsupportedregionredirecturl __attribute__((swift_name("unsupportedregionredirecturl")));
@property (class, readonly) MSDKMoonpayOptions *skipunsupportedregionscreen __attribute__((swift_name("skipunsupportedregionscreen")));
+ (MSDKKotlinArray<MSDKMoonpayOptions *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoonpayRenderingAndroid")))
@interface MSDKMoonpayRenderingAndroid : MSDKKotlinEnum<MSDKMoonpayRenderingAndroid *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MSDKMoonpayRenderingAndroid *fullbrowser __attribute__((swift_name("fullbrowser")));
@property (class, readonly) MSDKMoonpayRenderingAndroid *chromecustomtabs __attribute__((swift_name("chromecustomtabs")));
@property (class, readonly) MSDKMoonpayRenderingAndroid *trustedactivity __attribute__((swift_name("trustedactivity")));
@property (class, readonly) MSDKMoonpayRenderingAndroid *webviewoverlay __attribute__((swift_name("webviewoverlay")));
@property (class, readonly) MSDKMoonpayRenderingAndroid *webviewdrawer __attribute__((swift_name("webviewdrawer")));
@property (class, readonly) MSDKMoonpayRenderingAndroid *webviewbottomsheet __attribute__((swift_name("webviewbottomsheet")));
+ (MSDKKotlinArray<MSDKMoonpayRenderingAndroid *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoonpayRenderingiOS")))
@interface MSDKMoonpayRenderingiOS : MSDKKotlinEnum<MSDKMoonpayRenderingiOS *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MSDKMoonpayRenderingiOS *fullbrowser __attribute__((swift_name("fullbrowser")));
@property (class, readonly) MSDKMoonpayRenderingiOS *sfsafariviewcontroller __attribute__((swift_name("sfsafariviewcontroller")));
@property (class, readonly) MSDKMoonpayRenderingiOS *webviewoverlay __attribute__((swift_name("webviewoverlay")));
@property (class, readonly) MSDKMoonpayRenderingiOS *webviewdrawer __attribute__((swift_name("webviewdrawer")));
@property (class, readonly) MSDKMoonpayRenderingiOS *webviewbottomsheet __attribute__((swift_name("webviewbottomsheet")));
+ (MSDKKotlinArray<MSDKMoonpayRenderingiOS *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoonpaySDK")))
@interface MSDKMoonpaySDK : MSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)initializeApiKey:(NSString *)apiKey debugLevel:(MSDKMoonpayDebug *)debugLevel flow:(MSDKMoonpayFlow *)flow environment:(MSDKMoonpayEnvironment *)environment properties:(NSDictionary<MSDKMoonpayOptions *, id> * _Nullable)properties rendering:(MSDKMoonpayRenderingiOS *)rendering delegate:(id<MSDKMoonpayCallbackInterface> _Nullable)delegate __attribute__((swift_name("initialize(apiKey:debugLevel:flow:environment:properties:rendering:delegate:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)initializeCommunicationCallbackInterface:(id<MSDKMoonpayMessageCallback>)callbackInterface completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("initializeCommunication(callbackInterface:completionHandler:)")));
- (void)postMessageMessage:(NSString *)message action:(NSString *)action __attribute__((swift_name("postMessage(message:action:)")));
- (void)show __attribute__((swift_name("show()")));
- (void)updateSignatureSignature:(NSString *)signature __attribute__((swift_name("updateSignature(signature:)")));
- (NSString *)urlForSignature __attribute__((swift_name("urlForSignature()")));
@end

__attribute__((unavailable("Kotlin subclass of Objective-C class can't be imported")))
__attribute__((swift_name("WebView")))
@interface MSDKWebView : NSObject
@end

__attribute__((unavailable("Kotlin subclass of Objective-C class can't be imported")))
__attribute__((swift_name("WebViewPost")))
@interface MSDKWebViewPost : NSObject
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("iOSEnvironment")))
@interface MSDKiOSEnvironment : MSDKEnvironment
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)getFullURL __attribute__((swift_name("getFullURL()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppProtocol")))
@interface MSDKAppProtocol : MSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSArray<MSDKInt *> *versions __attribute__((swift_name("versions")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessagingError")))
@interface MSDKMessagingError : MSDKBase
- (instancetype)initWithMessage:(NSString * _Nullable)message options:(MSDKMessagingErrorOptions * _Nullable)options __attribute__((swift_name("init(message:options:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property (readonly) MSDKMessagingErrorOptions * _Nullable options __attribute__((swift_name("options")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessagingErrorCode")))
@interface MSDKMessagingErrorCode : MSDKKotlinEnum<MSDKMessagingErrorCode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MSDKMessagingErrorCode *noownwindow __attribute__((swift_name("noownwindow")));
@property (class, readonly) MSDKMessagingErrorCode *notargetwindow __attribute__((swift_name("notargetwindow")));
@property (class, readonly) MSDKMessagingErrorCode *notiniframe __attribute__((swift_name("notiniframe")));
@property (class, readonly) MSDKMessagingErrorCode *nopostmessageinterface __attribute__((swift_name("nopostmessageinterface")));
@property (class, readonly) MSDKMessagingErrorCode *nomessagingenvironment __attribute__((swift_name("nomessagingenvironment")));
@property (class, readonly) MSDKMessagingErrorCode *protocolversionnotsupported __attribute__((swift_name("protocolversionnotsupported")));
@property (class, readonly) MSDKMessagingErrorCode *notimplemented __attribute__((swift_name("notimplemented")));
@property (class, readonly) MSDKMessagingErrorCode *dontinitialiseparent __attribute__((swift_name("dontinitialiseparent")));
@property (class, readonly) MSDKMessagingErrorCode *unsupportedprotocolversion __attribute__((swift_name("unsupportedprotocolversion")));
@property (class, readonly) MSDKMessagingErrorCode *unsupportedappprotocolversion __attribute__((swift_name("unsupportedappprotocolversion")));
@property (class, readonly) MSDKMessagingErrorCode *novalidtargetorigin __attribute__((swift_name("novalidtargetorigin")));
@property (class, readonly) MSDKMessagingErrorCode *defaultcode __attribute__((swift_name("defaultcode")));
+ (MSDKKotlinArray<MSDKMessagingErrorCode *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface MSDKKotlinThrowable : MSDKBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (MSDKKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MSDKKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface MSDKKotlinException : MSDKKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessagingErrorOptions")))
@interface MSDKMessagingErrorOptions : MSDKKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(MSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property MSDKMessagingErrorCode *code __attribute__((swift_name("code")));
@end

__attribute__((swift_name("MoonpayErrorPayload")))
@protocol MSDKMoonpayErrorPayload
@required
@property MSDKMessagingErrorCode *code __attribute__((swift_name("code")));
@property NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoonpayErrorPayloadCompanion")))
@interface MSDKMoonpayErrorPayloadCompanion : MSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MSDKMoonpayErrorPayloadCompanion *shared __attribute__((swift_name("shared")));
- (id<MSDKMoonpayErrorPayload>)invokeMessage:(NSString *)message code:(MSDKMessagingErrorCode *)code __attribute__((swift_name("invoke(message:code:)")));
@end

__attribute__((swift_name("MoonpayNormalPayload")))
@protocol MSDKMoonpayNormalPayload
@required
- (NSString *)toJSON __attribute__((swift_name("toJSON()")));
@property id obj __attribute__((swift_name("obj")));
@property NSString *response __attribute__((swift_name("response")));
@end

__attribute__((swift_name("MoonpayHandshakePayload")))
@protocol MSDKMoonpayHandshakePayload <MSDKMoonpayNormalPayload>
@required
@property NSArray<MSDKInt *> *supportedAppVersions __attribute__((swift_name("supportedAppVersions")));
@property NSArray<MSDKInt *> *supportedVersions __attribute__((swift_name("supportedVersions")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoonpayHandshakePayloadCompanion")))
@interface MSDKMoonpayHandshakePayloadCompanion : MSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MSDKMoonpayHandshakePayloadCompanion *shared __attribute__((swift_name("shared")));
- (id<MSDKMoonpayHandshakePayload>)invokeSupportedVersions:(NSArray<MSDKInt *> *)supportedVersions supportedAppVersions:(NSArray<MSDKInt *> *)supportedAppVersions __attribute__((swift_name("invoke(supportedVersions:supportedAppVersions:)")));
@end

__attribute__((swift_name("MoonpayMessageBase")))
@protocol MSDKMoonpayMessageBase
@required
- (NSString *)toJSON __attribute__((swift_name("toJSON()")));
@property NSString *appName __attribute__((swift_name("appName")));
@property NSString *correlationId __attribute__((swift_name("correlationId")));
@property BOOL moonpaySdk __attribute__((swift_name("moonpaySdk")));
@property MSDKMoonpayMessageType *type __attribute__((swift_name("type")));
@property int32_t version __attribute__((swift_name("version")));
@end

__attribute__((swift_name("MoonpayHandshakeRequestMessage")))
@protocol MSDKMoonpayHandshakeRequestMessage <MSDKMoonpayMessageBase>
@required
@property NSString *action __attribute__((swift_name("action")));
@property id<MSDKMoonpayHandshakePayload> _Nullable payload __attribute__((swift_name("payload")));
@end

__attribute__((swift_name("MoonpayHandshakeResolveMessage")))
@protocol MSDKMoonpayHandshakeResolveMessage <MSDKMoonpayMessageBase>
@required
@property id<MSDKMoonpayHandshakeResolvePayload> payload __attribute__((swift_name("payload")));
@end

__attribute__((swift_name("MoonpayHandshakeResolvePayload")))
@protocol MSDKMoonpayHandshakeResolvePayload <MSDKMoonpayNormalPayload>
@required
@property int32_t appVersion __attribute__((swift_name("appVersion")));
@property int32_t version __attribute__((swift_name("version")));
@end

__attribute__((swift_name("MoonpayMessageCallback")))
@protocol MSDKMoonpayMessageCallback
@required
- (void)receivedMessageMessage_:(NSString *)message __attribute__((swift_name("receivedMessage(message_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoonpayMessageType")))
@interface MSDKMoonpayMessageType : MSDKKotlinEnum<MSDKMoonpayMessageType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MSDKMoonpayMessageType *request __attribute__((swift_name("request")));
@property (class, readonly) MSDKMoonpayMessageType *resolve __attribute__((swift_name("resolve")));
@property (class, readonly) MSDKMoonpayMessageType *reject __attribute__((swift_name("reject")));
+ (MSDKKotlinArray<MSDKMoonpayMessageType *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("MoonpayRejectMessage")))
@protocol MSDKMoonpayRejectMessage <MSDKMoonpayMessageBase>
@required
@property id<MSDKMoonpayErrorPayload> payload __attribute__((swift_name("payload")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoonpayRejectMessageCompanion")))
@interface MSDKMoonpayRejectMessageCompanion : MSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MSDKMoonpayRejectMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MSDKMoonpayRequestMessage>)invokeAppName:(NSString *)appName action:(NSString *)action correlationId:(NSString *)correlationId version:(int32_t)version payload:(id<MSDKMoonpayNormalPayload>)payload __attribute__((swift_name("invoke(appName:action:correlationId:version:payload:)")));
@end

__attribute__((swift_name("MoonpayRequestMessage")))
@protocol MSDKMoonpayRequestMessage <MSDKMoonpayMessageBase>
@required
@property NSString *action __attribute__((swift_name("action")));
@property id<MSDKMoonpayNormalPayload> payload __attribute__((swift_name("payload")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoonpayRequestMessageCompanion")))
@interface MSDKMoonpayRequestMessageCompanion : MSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MSDKMoonpayRequestMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MSDKMoonpayRequestMessage>)invokeAppName:(NSString *)appName action:(NSString *)action correlationId:(NSString *)correlationId version:(int32_t)version payload:(id<MSDKMoonpayNormalPayload>)payload __attribute__((swift_name("invoke(appName:action:correlationId:version:payload:)")));
@end

__attribute__((swift_name("MoonpayResolveMessage")))
@protocol MSDKMoonpayResolveMessage <MSDKMoonpayMessageBase>
@required
@property id<MSDKMoonpayNormalPayload> _Nullable payload __attribute__((swift_name("payload")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoonpayResolveMessageCompanion")))
@interface MSDKMoonpayResolveMessageCompanion : MSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MSDKMoonpayResolveMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MSDKMoonpayRequestMessage>)invokeAppName:(NSString *)appName action:(NSString *)action correlationId:(NSString *)correlationId version:(int32_t)version payload:(id<MSDKMoonpayNormalPayload>)payload __attribute__((swift_name("invoke(appName:action:correlationId:version:payload:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMessenger")))
@interface MSDKPostMessenger : MSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)initializeCommunicationCompletion:(id<MSDKMoonpayMessageCallback>)completion completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("initializeCommunication(completion:completionHandler:)")));
- (void)retrievedMessageMessage:(id _Nullable)message __attribute__((swift_name("retrievedMessage(message:)")));
- (void)setupPostMessengerLogger:(MSDKMoonpayLogger *)logger postMessageClient:(NSObject *)postMessageClient __attribute__((swift_name("setupPostMessenger(logger:postMessageClient:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMessengerConsts")))
@interface MSDKPostMessengerConsts : MSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString *PostMessengerMode __attribute__((swift_name("PostMessengerMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMessengerConstsKt")))
@interface MSDKPostMessengerConstsKt : MSDKBase
@property (class) NSArray<MSDKInt *> *AppProtocolVersion __attribute__((swift_name("AppProtocolVersion")));
@property (class, readonly) NSArray<MSDKInt *> *SUPPORTED_PROTOCOL_VERSIONS __attribute__((swift_name("SUPPORTED_PROTOCOL_VERSIONS")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageTypesKt")))
@interface MSDKMessageTypesKt : MSDKBase
+ (BOOL)isMoonpayHandshakeRequestMessageMessage:(id<MSDKMoonpayMessageBase>)message __attribute__((swift_name("isMoonpayHandshakeRequestMessage(message:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageErrorKt")))
@interface MSDKMessageErrorKt : MSDKBase
+ (MSDKMessagingErrorOptions *)setupErrorOptionsCode:(MSDKMessagingErrorCode *)code __attribute__((swift_name("setupErrorOptions(code:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface MSDKKotlinEnumCompanion : MSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MSDKKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface MSDKKotlinArray<T> : MSDKBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(MSDKInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<MSDKKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface MSDKKotlinRuntimeException : MSDKKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface MSDKKotlinIllegalStateException : MSDKKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface MSDKKotlinCancellationException : MSDKKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol MSDKKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END

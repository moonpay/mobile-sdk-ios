#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class MSDKAppProtocol, MSDKAppProtocolProps, MSDKWidgetFlowCompanion, MSDKWidgetFlow, MSDKBuyFlowCompanion, MSDKCryptoCurrencyCompanion, MSDKCryptoCurrency, MSDKKotlinThrowable, MSDKFiatCurrencyCompanion, MSDKFiatCurrency, MSDKLegacyFlowCompanion, MSDKLegacyWidgetQueryParamsCompanion, MSDKKotlinArray<T>, MSDKLogger, MSDKKotlinException, MSDKMessagingErrorCode, MSDKKotlinEnumCompanion, MSDKKotlinEnum<E>, MSDKMoonPayCoreSdkConfig, MSDKMoonPayConfigWithOptions<T>, MSDKMoonPayEnvironmentWithOptions<T>, MSDKMoonPayCoreSdkConfigCompanion, MSDKWidgetEnvironment, MSDKBuyFlow, MSDKOnrampWidgetQueryParams, MSDKRampsHandlers, MSDKMoonPayCoreSdkBuyConfigCompanion, MSDKMoonPayCoreSdkBuyConfig, MSDKMoonPaySdkPlatform, MSDKMoonPayCoreSdkEnvironmentCompanion, MSDKMoonPayCoreSdkEnvironment, MSDKLegacyFlow, MSDKLegacyWidgetQueryParams, MSDKMoonPayCoreSdkLegacyConfigCompanion, MSDKMoonPayCoreSdkLegacyConfig, MSDKSellFlow, MSDKOfframpWidgetQueryParams, MSDKMoonPayCoreSdkSellConfigCompanion, MSDKMoonPayCoreSdkSellConfig, MSDKSwapFlow, MSDKSwapWidgetQueryParams, MSDKMoonPayCoreSdkSwapConfigCompanion, MSDKMoonPayCoreSdkSwapConfig, MSDKMoonpayResolvePayload, MSDKMoonPayRenderingOption, MSDKMoonPayRenderingOptionAndroid, MSDKMoonPayRenderingOptionAndroidChromeCustomTabs, MSDKMoonPayRenderingOptionAndroidFullBrowser, MSDKMoonPayRenderingOptionAndroidTrustedActivity, MSDKMoonPayRenderingOptionAndroidWebViewBottomSheet, MSDKMoonPayRenderingOptionAndroidWebViewDrawer, MSDKMoonPayRenderingOptionAndroidWebViewOverlay, MSDKMoonPayRenderingOptioniOS, MSDKMoonPayRenderingOptioniOSFullBrowser, MSDKMoonPayRenderingOptioniOSSafariOverlay, MSDKMoonPayRenderingOptioniOSWebViewBottomSheet, MSDKMoonPayRenderingOptioniOSWebViewOverlay, MSDKMoonPaySdkPlatformCompanion, MSDKMoonPayCoreSdk, MSDKMoonpayMessageCompanion, MSDKMoonpayMessageType, MSDKMoonpayMessage, MSDKMoonpayRequestMessageType, MSDKMoonpayHandshakeRequestPayload, MSDKMoonpayHandshakeRequestMessage, MSDKMoonpayPayload, MSDKMoonpayRequestPayloadType, MSDKMoonpayResponseMessage, MSDKMoonpayResolveMessageType, MSDKMoonpayHandshakeResolvePayload, MSDKMoonpayHandshakeResolveMessage, MSDKMoonpayResolvePayloadType, MSDKMoonpayRejectMessageType, MSDKMoonpayRejectPayload, MSDKMoonpayRejectMessage, MSDKMoonpayRejectPayloadType, MSDKMoonpayRequestPayload, MSDKMoonpayRequestMessage, MSDKMoonpayResolveMessage, MSDKOfframpWidgetQueryParamsCompanion, MSDKOnAuthTokenPropsCompanion, MSDKOnAuthTokenProps, MSDKOnInitiateDepositPropsCompanion, MSDKOnInitiateDepositProps, MSDKOnInitiateDepositReplyPropsCompanion, MSDKOnInitiateDepositReplyProps, MSDKOnLoginPropsCompanion, MSDKOnLoginProps, MSDKOnrampWidgetQueryParamsCompanion, MSDKPostMessengerMode, MSDKMoonPayHandler, NSObject, MSDKSendMessageParams, MSDKRampsSwapHandlersCompanion, MSDKRampsSwapHandlers, MSDKRampsHandlersCompanion, MSDKSellFlowCompanion, MSDKSwapFlowCompanion, MSDKSwapWidgetQueryParamsCompanion, MSDKWalletAddress, MSDKWidgetEnvironmentCompanion, MSDKWidgetUrlCompanion, MSDKKotlinCancellationException, MSDKKotlinRuntimeException, MSDKKotlinIllegalStateException, MSDKKotlinx_serialization_coreSerializersModule, MSDKKotlinx_serialization_coreSerialKind, MSDKKotlinNothing, MSDKKotlinUnit;

@protocol MSDKWidgetQueryParams, MSDKKotlinx_serialization_coreKSerializer, MSDKKotlinCoroutineContext, MSDKKotlinx_coroutines_coreCoroutineScope, MSDKKotlinx_coroutines_coreCompletableDeferred, MSDKLoggerLikeInstance, MSDKKotlinComparable, MSDKAdvancedWidgetQueryParams, MSDKKotlinx_serialization_coreEncoder, MSDKKotlinx_serialization_coreSerialDescriptor, MSDKKotlinx_serialization_coreSerializationStrategy, MSDKKotlinx_serialization_coreDecoder, MSDKKotlinx_serialization_coreDeserializationStrategy, MSDKKotlinCoroutineContextElement, MSDKKotlinCoroutineContextKey, MSDKKotlinx_coroutines_coreSelectClause1, MSDKKotlinx_coroutines_coreChildHandle, MSDKKotlinx_coroutines_coreChildJob, MSDKKotlinx_coroutines_coreDisposableHandle, MSDKKotlinx_coroutines_coreJob, MSDKKotlinSequence, MSDKKotlinx_coroutines_coreSelectClause0, MSDKKotlinx_coroutines_coreDeferred, MSDKKotlinIterator, MSDKKotlinx_serialization_coreCompositeEncoder, MSDKKotlinAnnotation, MSDKKotlinx_serialization_coreCompositeDecoder, MSDKKotlinx_coroutines_coreSelectInstance, MSDKKotlinx_coroutines_coreSelectClause, MSDKKotlinx_coroutines_coreParentJob, MSDKKotlinx_serialization_coreSerializersModuleCollector, MSDKKotlinKClass, MSDKKotlinKDeclarationContainer, MSDKKotlinKAnnotatedElement, MSDKKotlinKClassifier;

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

__attribute__((unavailable("Kotlin subclass of Objective-C class can't be imported")))
__attribute__((swift_name("PostMessageClient")))
@interface MSDKPostMessageClient : NSObject
@end

__attribute__((swift_name("WidgetQueryParams")))
@protocol MSDKWidgetQueryParams
@required
- (NSDictionary<NSString *, NSString *> *)toMap __attribute__((swift_name("toMap()")));
@end

__attribute__((swift_name("AdvancedWidgetQueryParams")))
@protocol MSDKAdvancedWidgetQueryParams <MSDKWidgetQueryParams>
@required
@property NSString *apiKey __attribute__((swift_name("apiKey")));
@property NSString * _Nullable baseCurrencyAmount __attribute__((swift_name("baseCurrencyAmount")));
@property NSString * _Nullable baseCurrencyCode __attribute__((swift_name("baseCurrencyCode")));
@property NSString * _Nullable colorCode __attribute__((swift_name("colorCode")));
@property NSString * _Nullable currencyCode __attribute__((swift_name("currencyCode")));
@property NSString * _Nullable defaultCurrencyCode __attribute__((swift_name("defaultCurrencyCode")));
@property NSString * _Nullable email __attribute__((swift_name("email")));
@property NSString * _Nullable externalCustomerId __attribute__((swift_name("externalCustomerId")));
@property NSString * _Nullable externalTransactionId __attribute__((swift_name("externalTransactionId")));
@property NSString * _Nullable language __attribute__((swift_name("language")));
@property NSString * _Nullable lockAmount __attribute__((swift_name("lockAmount")));
@property NSString * _Nullable paymentMethod __attribute__((swift_name("paymentMethod")));
@property NSString * _Nullable quoteCurrencyAmount __attribute__((swift_name("quoteCurrencyAmount")));
@property NSString * _Nullable redirectURL __attribute__((swift_name("redirectURL")));
@property NSString * _Nullable showAllCurrencies __attribute__((swift_name("showAllCurrencies")));
@property NSString * _Nullable showOnlyCurrencies __attribute__((swift_name("showOnlyCurrencies")));
@property NSString * _Nullable showWalletAddressForm __attribute__((swift_name("showWalletAddressForm")));
@property NSString * _Nullable signature __attribute__((swift_name("signature")));
@property NSString * _Nullable skipUnsupportedRegionScreen __attribute__((swift_name("skipUnsupportedRegionScreen")));
@property NSString * _Nullable theme __attribute__((swift_name("theme")));
@property NSString * _Nullable themeId __attribute__((swift_name("themeId")));
@property NSString * _Nullable unsupportedRegionRedirectUrl __attribute__((swift_name("unsupportedRegionRedirectUrl")));
@property NSString * _Nullable walletAddress __attribute__((swift_name("walletAddress")));
@property NSString * _Nullable walletAddressTag __attribute__((swift_name("walletAddressTag")));
@property NSString * _Nullable walletAddressTags __attribute__((swift_name("walletAddressTags")));
@property NSString * _Nullable walletAddresses __attribute__((swift_name("walletAddresses")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppProtocol")))
@interface MSDKAppProtocol : MSDKBase
- (instancetype)initWithVersions:(NSArray<MSDKFloat *> *)versions name:(NSString *)name __attribute__((swift_name("init(versions:name:)"))) __attribute__((objc_designated_initializer));
- (MSDKAppProtocol *)doCopyVersions:(NSArray<MSDKFloat *> *)versions name:(NSString *)name __attribute__((swift_name("doCopy(versions:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSArray<MSDKFloat *> *versions __attribute__((swift_name("versions")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppProtocolProps")))
@interface MSDKAppProtocolProps : MSDKBase
- (instancetype)initWithAppProtocolVersion:(float)appProtocolVersion __attribute__((swift_name("init(appProtocolVersion:)"))) __attribute__((objc_designated_initializer));
- (MSDKAppProtocolProps *)doCopyAppProtocolVersion:(float)appProtocolVersion __attribute__((swift_name("doCopy(appProtocolVersion:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float appProtocolVersion __attribute__((swift_name("appProtocolVersion")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("WidgetFlow")))
@interface MSDKWidgetFlow : MSDKBase
@property (class, readonly, getter=companion) MSDKWidgetFlowCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BuyFlow")))
@interface MSDKBuyFlow : MSDKWidgetFlow
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MSDKBuyFlowCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BuyFlow.Companion")))
@interface MSDKBuyFlowCompanion : MSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MSDKBuyFlowCompanion *shared __attribute__((swift_name("shared")));
- (id<MSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CryptoCurrency")))
@interface MSDKCryptoCurrency : MSDKBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name code:(NSString *)code contractAddress:(NSString * _Nullable)contractAddress chainId:(NSString * _Nullable)chainId coinType:(NSString * _Nullable)coinType networkCode:(NSString * _Nullable)networkCode __attribute__((swift_name("init(id:name:code:contractAddress:chainId:coinType:networkCode:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MSDKCryptoCurrencyCompanion *companion __attribute__((swift_name("companion")));
- (MSDKCryptoCurrency *)doCopyId:(NSString *)id name:(NSString *)name code:(NSString *)code contractAddress:(NSString * _Nullable)contractAddress chainId:(NSString * _Nullable)chainId coinType:(NSString * _Nullable)coinType networkCode:(NSString * _Nullable)networkCode __attribute__((swift_name("doCopy(id:name:code:contractAddress:chainId:coinType:networkCode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable chainId __attribute__((swift_name("chainId")));
@property (readonly) NSString *code __attribute__((swift_name("code")));
@property (readonly) NSString * _Nullable coinType __attribute__((swift_name("coinType")));
@property (readonly) NSString * _Nullable contractAddress __attribute__((swift_name("contractAddress")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable networkCode __attribute__((swift_name("networkCode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CryptoCurrency.Companion")))
@interface MSDKCryptoCurrencyCompanion : MSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MSDKCryptoCurrencyCompanion *shared __attribute__((swift_name("shared")));
- (id<MSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol MSDKKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<MSDKKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeferredMap")))
@interface MSDKDeferredMap : MSDKBase <MSDKKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<MSDKKotlinx_coroutines_coreCompletableDeferred>)addCorrelationId:(NSString *)correlationId timeout:(MSDKLong * _Nullable)timeout __attribute__((swift_name("add(correlationId:timeout:)")));
- (id<MSDKKotlinx_coroutines_coreCompletableDeferred>)addCorrelationId:(NSString *)correlationId timeout:(MSDKLong * _Nullable)timeout __attribute__((swift_name("add(correlationId:timeout:)")));
- (void)cancelAll __attribute__((swift_name("cancelAll()")));
- (id<MSDKKotlinx_coroutines_coreCompletableDeferred> _Nullable)getCorrelationId:(NSString *)correlationId __attribute__((swift_name("get(correlationId:)")));
- (id<MSDKKotlinx_coroutines_coreCompletableDeferred> _Nullable)getCorrelationId:(NSString *)correlationId __attribute__((swift_name("get(correlationId:)")));
- (BOOL)hasCorrelationId:(NSString *)correlationId __attribute__((swift_name("has(correlationId:)")));
- (void)rejectCorrelationId:(NSString *)correlationId exception:(MSDKKotlinThrowable *)exception __attribute__((swift_name("reject(correlationId:exception:)")));
- (void)resolveCorrelationId:(NSString *)correlationId value:(id _Nullable)value __attribute__((swift_name("resolve(correlationId:value:)")));
@property (readonly) id<MSDKKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FiatCurrency")))
@interface MSDKFiatCurrency : MSDKBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name code:(NSString *)code __attribute__((swift_name("init(id:name:code:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MSDKFiatCurrencyCompanion *companion __attribute__((swift_name("companion")));
- (MSDKFiatCurrency *)doCopyId:(NSString *)id name:(NSString *)name code:(NSString *)code __attribute__((swift_name("doCopy(id:name:code:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *code __attribute__((swift_name("code")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FiatCurrency.Companion")))
@interface MSDKFiatCurrencyCompanion : MSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MSDKFiatCurrencyCompanion *shared __attribute__((swift_name("shared")));
- (id<MSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LegacyFlow")))
@interface MSDKLegacyFlow : MSDKWidgetFlow
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MSDKLegacyFlowCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LegacyFlow.Companion")))
@interface MSDKLegacyFlowCompanion : MSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MSDKLegacyFlowCompanion *shared __attribute__((swift_name("shared")));
- (id<MSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LegacyWidgetQueryParams")))
@interface MSDKLegacyWidgetQueryParams : MSDKBase <MSDKWidgetQueryParams>
- (instancetype)initWithUrl:(NSString *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MSDKLegacyWidgetQueryParamsCompanion *companion __attribute__((swift_name("companion")));
- (NSDictionary<NSString *, NSString *> *)toMap __attribute__((swift_name("toMap()")));
@property NSString *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LegacyWidgetQueryParams.Companion")))
@interface MSDKLegacyWidgetQueryParamsCompanion : MSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MSDKLegacyWidgetQueryParamsCompanion *shared __attribute__((swift_name("shared")));
- (id<MSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Logger")))
@interface MSDKLogger : MSDKBase
- (instancetype)initWithLogger:(id<MSDKLoggerLikeInstance>)logger prefix:(MSDKKotlinArray<NSString *> *)prefix __attribute__((swift_name("init(logger:prefix:)"))) __attribute__((objc_designated_initializer));
- (void)errorData:(MSDKKotlinArray<id> *)data __attribute__((swift_name("error(data:)")));
- (void)infoData:(MSDKKotlinArray<id> *)data __attribute__((swift_name("info(data:)")));
- (MSDKLogger *)logIfCondition:(BOOL)condition __attribute__((swift_name("logIf(condition:)")));
- (void)warnData:(MSDKKotlinArray<id> *)data __attribute__((swift_name("warn(data:)")));
@end

__attribute__((swift_name("LoggerLikeInstance")))
@protocol MSDKLoggerLikeInstance
@required
- (void)errorData:(MSDKKotlinArray<id> *)data __attribute__((swift_name("error(data:)")));
- (void)infoData:(MSDKKotlinArray<id> *)data __attribute__((swift_name("info(data:)")));
- (void)warnData:(MSDKKotlinArray<id> *)data __attribute__((swift_name("warn(data:)")));
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
__attribute__((swift_name("MessagingError")))
@interface MSDKMessagingError : MSDKKotlinException
- (instancetype)initWithMessage:(NSString * _Nullable)message code:(MSDKMessagingErrorCode *)code __attribute__((swift_name("init(message:code:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(MSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) MSDKMessagingErrorCode *code __attribute__((swift_name("code")));
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
@property (class, readonly) MSDKMessagingErrorCode *deferredvaluetimedout __attribute__((swift_name("deferredvaluetimedout")));
@property (class, readonly) MSDKMessagingErrorCode *deferredvaluewrongtype __attribute__((swift_name("deferredvaluewrongtype")));
@property (class, readonly) MSDKMessagingErrorCode *nohandlerforaction __attribute__((swift_name("nohandlerforaction")));
@property (class, readonly) MSDKMessagingErrorCode *errorhandlingaction __attribute__((swift_name("errorhandlingaction")));
@property (class, readonly) MSDKMessagingErrorCode *unknownmessagetype __attribute__((swift_name("unknownmessagetype")));
@property (class, readonly) MSDKMessagingErrorCode *unknownerror __attribute__((swift_name("unknownerror")));
+ (MSDKKotlinArray<MSDKMessagingErrorCode *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoonPayConfigWithOptions")))
@interface MSDKMoonPayConfigWithOptions<T> : MSDKBase
- (instancetype)initWithConfig:(MSDKMoonPayCoreSdkConfig *)config options:(T _Nullable)options __attribute__((swift_name("init(config:options:)"))) __attribute__((objc_designated_initializer));
- (MSDKMoonPayConfigWithOptions<T> *)doCopyConfig:(MSDKMoonPayCoreSdkConfig *)config options:(T _Nullable)options __attribute__((swift_name("doCopy(config:options:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MSDKMoonPayCoreSdkConfig *config __attribute__((swift_name("config")));
@property (readonly) T _Nullable options __attribute__((swift_name("options")));
@end

__attribute__((swift_name("MoonPayCoreSdk")))
@interface MSDKMoonPayCoreSdk : MSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)close __attribute__((swift_name("close()")));
- (NSString *)generateUrlForSigningConfig:(MSDKMoonPayCoreSdkConfig *)config props:(id _Nullable)props __attribute__((swift_name("generateUrlForSigning(config:props:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (MSDKMoonPayConfigWithOptions<id> *)getConfigOptions:(id _Nullable)options __attribute__((swift_name("getConfig(options:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (MSDKMoonPayEnvironmentWithOptions<id> *)getSdkEnvironmentConfig:(MSDKMoonPayCoreSdkConfig *)config options:(id _Nullable)options __attribute__((swift_name("getSdkEnvironment(config:options:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)doInitConfigConfig:(MSDKMoonPayCoreSdkConfig *)config __attribute__((swift_name("doInitConfig(config:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)registerPostMessageHandlers __attribute__((swift_name("registerPostMessageHandlers()")));
- (void)updateSignatureSignature:(NSString *)signature __attribute__((swift_name("updateSignature(signature:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("MoonPayCoreSdkConfig")))
@interface MSDKMoonPayCoreSdkConfig : MSDKBase
@property (class, readonly, getter=companion) MSDKMoonPayCoreSdkConfigCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoonPayCoreSdkBuyConfig")))
@interface MSDKMoonPayCoreSdkBuyConfig : MSDKMoonPayCoreSdkConfig
- (instancetype)initWithDebug:(MSDKBoolean * _Nullable)debug environment:(MSDKWidgetEnvironment *)environment flow:(MSDKBuyFlow *)flow params:(MSDKOnrampWidgetQueryParams *)params handlers:(MSDKRampsHandlers * _Nullable)handlers __attribute__((swift_name("init(debug:environment:flow:params:handlers:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MSDKMoonPayCoreSdkBuyConfigCompanion *companion __attribute__((swift_name("companion")));
- (MSDKMoonPayCoreSdkBuyConfig *)doCopyDebug:(MSDKBoolean * _Nullable)debug environment:(MSDKWidgetEnvironment *)environment flow:(MSDKBuyFlow *)flow params:(MSDKOnrampWidgetQueryParams *)params handlers:(MSDKRampsHandlers * _Nullable)handlers __attribute__((swift_name("doCopy(debug:environment:flow:params:handlers:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property MSDKBoolean * _Nullable debug __attribute__((swift_name("debug")));
@property MSDKWidgetEnvironment *environment __attribute__((swift_name("environment")));
@property MSDKBuyFlow *flow __attribute__((swift_name("flow")));
@property MSDKRampsHandlers * _Nullable handlers __attribute__((swift_name("handlers")));
@property MSDKOnrampWidgetQueryParams *params __attribute__((swift_name("params")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoonPayCoreSdkBuyConfig.Companion")))
@interface MSDKMoonPayCoreSdkBuyConfigCompanion : MSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MSDKMoonPayCoreSdkBuyConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<MSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoonPayCoreSdkConfig.Companion")))
@interface MSDKMoonPayCoreSdkConfigCompanion : MSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MSDKMoonPayCoreSdkConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<MSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<MSDKKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(MSDKKotlinArray<id<MSDKKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoonPayCoreSdkEnvironment")))
@interface MSDKMoonPayCoreSdkEnvironment : MSDKBase
- (instancetype)initWithVersion:(float)version flow:(MSDKWidgetFlow *)flow environment:(MSDKWidgetEnvironment *)environment platform:(MSDKMoonPaySdkPlatform *)platform __attribute__((swift_name("init(version:flow:environment:platform:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MSDKMoonPayCoreSdkEnvironmentCompanion *companion __attribute__((swift_name("companion")));
- (MSDKMoonPayCoreSdkEnvironment *)doCopyVersion:(float)version flow:(MSDKWidgetFlow *)flow environment:(MSDKWidgetEnvironment *)environment platform:(MSDKMoonPaySdkPlatform *)platform __attribute__((swift_name("doCopy(version:flow:environment:platform:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MSDKWidgetEnvironment *environment __attribute__((swift_name("environment")));
@property (readonly) MSDKWidgetFlow *flow __attribute__((swift_name("flow")));
@property (readonly) MSDKMoonPaySdkPlatform *platform __attribute__((swift_name("platform")));
@property (readonly) float version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoonPayCoreSdkEnvironment.Companion")))
@interface MSDKMoonPayCoreSdkEnvironmentCompanion : MSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MSDKMoonPayCoreSdkEnvironmentCompanion *shared __attribute__((swift_name("shared")));
- (id<MSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoonPayCoreSdkLegacyConfig")))
@interface MSDKMoonPayCoreSdkLegacyConfig : MSDKMoonPayCoreSdkConfig
- (instancetype)initWithDebug:(MSDKBoolean * _Nullable)debug environment:(MSDKWidgetEnvironment *)environment flow:(MSDKLegacyFlow *)flow params:(MSDKLegacyWidgetQueryParams *)params handlers:(MSDKRampsHandlers * _Nullable)handlers __attribute__((swift_name("init(debug:environment:flow:params:handlers:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MSDKMoonPayCoreSdkLegacyConfigCompanion *companion __attribute__((swift_name("companion")));
- (MSDKMoonPayCoreSdkLegacyConfig *)doCopyDebug:(MSDKBoolean * _Nullable)debug environment:(MSDKWidgetEnvironment *)environment flow:(MSDKLegacyFlow *)flow params:(MSDKLegacyWidgetQueryParams *)params handlers:(MSDKRampsHandlers * _Nullable)handlers __attribute__((swift_name("doCopy(debug:environment:flow:params:handlers:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property MSDKBoolean * _Nullable debug __attribute__((swift_name("debug")));
@property MSDKWidgetEnvironment *environment __attribute__((swift_name("environment")));
@property MSDKLegacyFlow *flow __attribute__((swift_name("flow")));
@property MSDKRampsHandlers * _Nullable handlers __attribute__((swift_name("handlers")));
@property MSDKLegacyWidgetQueryParams *params __attribute__((swift_name("params")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoonPayCoreSdkLegacyConfig.Companion")))
@interface MSDKMoonPayCoreSdkLegacyConfigCompanion : MSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MSDKMoonPayCoreSdkLegacyConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<MSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoonPayCoreSdkSellConfig")))
@interface MSDKMoonPayCoreSdkSellConfig : MSDKMoonPayCoreSdkConfig
- (instancetype)initWithDebug:(MSDKBoolean * _Nullable)debug environment:(MSDKWidgetEnvironment *)environment flow:(MSDKSellFlow *)flow params:(MSDKOfframpWidgetQueryParams *)params handlers:(MSDKRampsHandlers * _Nullable)handlers __attribute__((swift_name("init(debug:environment:flow:params:handlers:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MSDKMoonPayCoreSdkSellConfigCompanion *companion __attribute__((swift_name("companion")));
- (MSDKMoonPayCoreSdkSellConfig *)doCopyDebug:(MSDKBoolean * _Nullable)debug environment:(MSDKWidgetEnvironment *)environment flow:(MSDKSellFlow *)flow params:(MSDKOfframpWidgetQueryParams *)params handlers:(MSDKRampsHandlers * _Nullable)handlers __attribute__((swift_name("doCopy(debug:environment:flow:params:handlers:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property MSDKBoolean * _Nullable debug __attribute__((swift_name("debug")));
@property MSDKWidgetEnvironment *environment __attribute__((swift_name("environment")));
@property MSDKSellFlow *flow __attribute__((swift_name("flow")));
@property MSDKRampsHandlers * _Nullable handlers __attribute__((swift_name("handlers")));
@property MSDKOfframpWidgetQueryParams *params __attribute__((swift_name("params")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoonPayCoreSdkSellConfig.Companion")))
@interface MSDKMoonPayCoreSdkSellConfigCompanion : MSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MSDKMoonPayCoreSdkSellConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<MSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoonPayCoreSdkSwapConfig")))
@interface MSDKMoonPayCoreSdkSwapConfig : MSDKMoonPayCoreSdkConfig
- (instancetype)initWithDebug:(MSDKBoolean * _Nullable)debug environment:(MSDKWidgetEnvironment *)environment flow:(MSDKSwapFlow *)flow params:(MSDKSwapWidgetQueryParams *)params handlers:(MSDKRampsHandlers * _Nullable)handlers __attribute__((swift_name("init(debug:environment:flow:params:handlers:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MSDKMoonPayCoreSdkSwapConfigCompanion *companion __attribute__((swift_name("companion")));
- (MSDKMoonPayCoreSdkSwapConfig *)doCopyDebug:(MSDKBoolean * _Nullable)debug environment:(MSDKWidgetEnvironment *)environment flow:(MSDKSwapFlow *)flow params:(MSDKSwapWidgetQueryParams *)params handlers:(MSDKRampsHandlers * _Nullable)handlers __attribute__((swift_name("doCopy(debug:environment:flow:params:handlers:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property MSDKBoolean * _Nullable debug __attribute__((swift_name("debug")));
@property MSDKWidgetEnvironment *environment __attribute__((swift_name("environment")));
@property MSDKSwapFlow *flow __attribute__((swift_name("flow")));
@property MSDKRampsHandlers * _Nullable handlers __attribute__((swift_name("handlers")));
@property MSDKSwapWidgetQueryParams *params __attribute__((swift_name("params")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoonPayCoreSdkSwapConfig.Companion")))
@interface MSDKMoonPayCoreSdkSwapConfigCompanion : MSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MSDKMoonPayCoreSdkSwapConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<MSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoonPayEnvironmentWithOptions")))
@interface MSDKMoonPayEnvironmentWithOptions<T> : MSDKBase
- (instancetype)initWithEnvironment:(MSDKMoonPayCoreSdkEnvironment *)environment options:(T _Nullable)options __attribute__((swift_name("init(environment:options:)"))) __attribute__((objc_designated_initializer));
- (MSDKMoonPayEnvironmentWithOptions<T> *)doCopyEnvironment:(MSDKMoonPayCoreSdkEnvironment *)environment options:(T _Nullable)options __attribute__((swift_name("doCopy(environment:options:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MSDKMoonPayCoreSdkEnvironment *environment __attribute__((swift_name("environment")));
@property (readonly) T _Nullable options __attribute__((swift_name("options")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoonPayHandler")))
@interface MSDKMoonPayHandler : MSDKBase
- (instancetype)initWithActionHandler:(MSDKMoonpayResolvePayload *(^)(NSDictionary<NSString *, id> *))actionHandler __attribute__((swift_name("init(actionHandler:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MSDKMoonpayResolvePayload *(^handle)(NSDictionary<NSString *, id> *) __attribute__((swift_name("handle")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoonPayLogger")))
@interface MSDKMoonPayLogger : MSDKBase <MSDKLoggerLikeInstance>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)errorData:(MSDKKotlinArray<id> *)data __attribute__((swift_name("error(data:)")));
- (void)infoData:(MSDKKotlinArray<id> *)data __attribute__((swift_name("info(data:)")));
- (void)warnData:(MSDKKotlinArray<id> *)data __attribute__((swift_name("warn(data:)")));
@end

__attribute__((swift_name("MoonPayRenderingOption")))
@interface MSDKMoonPayRenderingOption : MSDKBase
@end

__attribute__((swift_name("MoonPayRenderingOptionAndroid")))
@interface MSDKMoonPayRenderingOptionAndroid : MSDKMoonPayRenderingOption
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoonPayRenderingOptionAndroid.ChromeCustomTabs")))
@interface MSDKMoonPayRenderingOptionAndroidChromeCustomTabs : MSDKMoonPayRenderingOptionAndroid
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chromeCustomTabs __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MSDKMoonPayRenderingOptionAndroidChromeCustomTabs *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoonPayRenderingOptionAndroid.FullBrowser")))
@interface MSDKMoonPayRenderingOptionAndroidFullBrowser : MSDKMoonPayRenderingOptionAndroid
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fullBrowser __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MSDKMoonPayRenderingOptionAndroidFullBrowser *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoonPayRenderingOptionAndroid.TrustedActivity")))
@interface MSDKMoonPayRenderingOptionAndroidTrustedActivity : MSDKMoonPayRenderingOptionAndroid
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)trustedActivity __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MSDKMoonPayRenderingOptionAndroidTrustedActivity *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoonPayRenderingOptionAndroid.WebViewBottomSheet")))
@interface MSDKMoonPayRenderingOptionAndroidWebViewBottomSheet : MSDKMoonPayRenderingOptionAndroid
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)webViewBottomSheet __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MSDKMoonPayRenderingOptionAndroidWebViewBottomSheet *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoonPayRenderingOptionAndroid.WebViewDrawer")))
@interface MSDKMoonPayRenderingOptionAndroidWebViewDrawer : MSDKMoonPayRenderingOptionAndroid
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)webViewDrawer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MSDKMoonPayRenderingOptionAndroidWebViewDrawer *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoonPayRenderingOptionAndroid.WebViewOverlay")))
@interface MSDKMoonPayRenderingOptionAndroidWebViewOverlay : MSDKMoonPayRenderingOptionAndroid
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)webViewOverlay __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MSDKMoonPayRenderingOptionAndroidWebViewOverlay *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("MoonPayRenderingOptioniOS")))
@interface MSDKMoonPayRenderingOptioniOS : MSDKMoonPayRenderingOption
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoonPayRenderingOptioniOS.FullBrowser")))
@interface MSDKMoonPayRenderingOptioniOSFullBrowser : MSDKMoonPayRenderingOptioniOS
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fullBrowser __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MSDKMoonPayRenderingOptioniOSFullBrowser *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoonPayRenderingOptioniOS.SafariOverlay")))
@interface MSDKMoonPayRenderingOptioniOSSafariOverlay : MSDKMoonPayRenderingOptioniOS
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)safariOverlay __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MSDKMoonPayRenderingOptioniOSSafariOverlay *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoonPayRenderingOptioniOS.WebViewBottomSheet")))
@interface MSDKMoonPayRenderingOptioniOSWebViewBottomSheet : MSDKMoonPayRenderingOptioniOS
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)webViewBottomSheet __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MSDKMoonPayRenderingOptioniOSWebViewBottomSheet *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoonPayRenderingOptioniOS.WebViewOverlay")))
@interface MSDKMoonPayRenderingOptioniOSWebViewOverlay : MSDKMoonPayRenderingOptioniOS
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)webViewOverlay __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MSDKMoonPayRenderingOptioniOSWebViewOverlay *shared __attribute__((swift_name("shared")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoonPaySdkPlatform")))
@interface MSDKMoonPaySdkPlatform : MSDKKotlinEnum<MSDKMoonPaySdkPlatform *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MSDKMoonPaySdkPlatformCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) MSDKMoonPaySdkPlatform *android __attribute__((swift_name("android")));
@property (class, readonly) MSDKMoonPaySdkPlatform *ios __attribute__((swift_name("ios")));
+ (MSDKKotlinArray<MSDKMoonPaySdkPlatform *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoonPaySdkPlatform.Companion")))
@interface MSDKMoonPaySdkPlatformCompanion : MSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MSDKMoonPaySdkPlatformCompanion *shared __attribute__((swift_name("shared")));
- (id<MSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<MSDKKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(MSDKKotlinArray<id<MSDKKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoonPayiOSSdk")))
@interface MSDKMoonPayiOSSdk : MSDKMoonPayCoreSdk
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)close __attribute__((swift_name("close()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (MSDKMoonPayConfigWithOptions<id> *)getConfigOptions:(id _Nullable)options __attribute__((swift_name("getConfig(options:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (MSDKMoonPayEnvironmentWithOptions<id> *)getSdkEnvironmentConfig:(MSDKMoonPayCoreSdkConfig *)config options:(id _Nullable)options __attribute__((swift_name("getSdkEnvironment(config:options:)")));
- (void)doInitConfig:(MSDKMoonPayCoreSdkConfig *)config __attribute__((swift_name("doInit(config:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)registerPostMessageHandlers __attribute__((swift_name("registerPostMessageHandlers()")));
- (void)showMode:(MSDKMoonPayRenderingOptioniOS *)mode __attribute__((swift_name("show(mode:)")));
@end

__attribute__((swift_name("MoonpayCallbackInterface")))
@protocol MSDKMoonpayCallbackInterface
@required
- (void)hasLoadedWeb __attribute__((swift_name("hasLoadedWeb()")));
- (void)receivedMessageMessage:(id)message __attribute__((swift_name("receivedMessage(message:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("MoonpayMessage")))
@interface MSDKMoonpayMessage : MSDKBase
@property (class, readonly, getter=companion) MSDKMoonpayMessageCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *appName __attribute__((swift_name("appName")));
@property (readonly) NSString *correlationId __attribute__((swift_name("correlationId")));
@property (readonly) BOOL moonpaySdk __attribute__((swift_name("moonpaySdk")));
@property (readonly) MSDKMoonpayMessageType *type __attribute__((swift_name("type")));
@property (readonly) float version __attribute__((swift_name("version")));
@end

__attribute__((swift_name("MoonpayRequestMessageType")))
@interface MSDKMoonpayRequestMessageType : MSDKMoonpayMessage
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoonpayHandshakeRequestMessage")))
@interface MSDKMoonpayHandshakeRequestMessage : MSDKMoonpayRequestMessageType
- (instancetype)initWithAppName:(NSString *)appName correlationId:(NSString *)correlationId moonpaySdk:(BOOL)moonpaySdk version:(float)version payload:(MSDKMoonpayHandshakeRequestPayload *)payload __attribute__((swift_name("init(appName:correlationId:moonpaySdk:version:payload:)"))) __attribute__((objc_designated_initializer));
- (MSDKMoonpayHandshakeRequestMessage *)doCopyAppName:(NSString *)appName correlationId:(NSString *)correlationId moonpaySdk:(BOOL)moonpaySdk version:(float)version payload:(MSDKMoonpayHandshakeRequestPayload *)payload __attribute__((swift_name("doCopy(appName:correlationId:moonpaySdk:version:payload:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *action __attribute__((swift_name("action")));
@property (readonly) NSString *appName __attribute__((swift_name("appName")));
@property (readonly) NSString *correlationId __attribute__((swift_name("correlationId")));
@property (readonly) BOOL moonpaySdk __attribute__((swift_name("moonpaySdk")));
@property (readonly) MSDKMoonpayHandshakeRequestPayload *payload __attribute__((swift_name("payload")));
@property (readonly) MSDKMoonpayMessageType *type __attribute__((swift_name("type")));
@property (readonly) float version __attribute__((swift_name("version")));
@end

__attribute__((swift_name("MoonpayPayload")))
@interface MSDKMoonpayPayload : MSDKBase
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@end

__attribute__((swift_name("MoonpayRequestPayloadType")))
@interface MSDKMoonpayRequestPayloadType : MSDKMoonpayPayload
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoonpayHandshakeRequestPayload")))
@interface MSDKMoonpayHandshakeRequestPayload : MSDKMoonpayRequestPayloadType
- (instancetype)initWithSupportedVersions:(NSArray<MSDKFloat *> *)supportedVersions supportedAppVersions:(NSArray<MSDKFloat *> *)supportedAppVersions __attribute__((swift_name("init(supportedVersions:supportedAppVersions:)"))) __attribute__((objc_designated_initializer));
- (MSDKMoonpayHandshakeRequestPayload *)doCopySupportedVersions:(NSArray<MSDKFloat *> *)supportedVersions supportedAppVersions:(NSArray<MSDKFloat *> *)supportedAppVersions __attribute__((swift_name("doCopy(supportedVersions:supportedAppVersions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<MSDKFloat *> *supportedAppVersions __attribute__((swift_name("supportedAppVersions")));
@property (readonly) NSArray<MSDKFloat *> *supportedVersions __attribute__((swift_name("supportedVersions")));
@end

__attribute__((swift_name("MoonpayResponseMessage")))
@interface MSDKMoonpayResponseMessage : MSDKMoonpayMessage
@end

__attribute__((swift_name("MoonpayResolveMessageType")))
@interface MSDKMoonpayResolveMessageType : MSDKMoonpayResponseMessage
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoonpayHandshakeResolveMessage")))
@interface MSDKMoonpayHandshakeResolveMessage : MSDKMoonpayResolveMessageType
- (instancetype)initWithAppName:(NSString *)appName correlationId:(NSString *)correlationId moonpaySdk:(BOOL)moonpaySdk version:(float)version payload:(MSDKMoonpayHandshakeResolvePayload *)payload __attribute__((swift_name("init(appName:correlationId:moonpaySdk:version:payload:)"))) __attribute__((objc_designated_initializer));
- (MSDKMoonpayHandshakeResolveMessage *)doCopyAppName:(NSString *)appName correlationId:(NSString *)correlationId moonpaySdk:(BOOL)moonpaySdk version:(float)version payload:(MSDKMoonpayHandshakeResolvePayload *)payload __attribute__((swift_name("doCopy(appName:correlationId:moonpaySdk:version:payload:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *appName __attribute__((swift_name("appName")));
@property (readonly) NSString *correlationId __attribute__((swift_name("correlationId")));
@property (readonly) BOOL moonpaySdk __attribute__((swift_name("moonpaySdk")));
@property (readonly) MSDKMoonpayHandshakeResolvePayload *payload __attribute__((swift_name("payload")));
@property (readonly) MSDKMoonpayMessageType *type __attribute__((swift_name("type")));
@property (readonly) float version __attribute__((swift_name("version")));
@end

__attribute__((swift_name("MoonpayResolvePayloadType")))
@interface MSDKMoonpayResolvePayloadType : MSDKMoonpayPayload
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoonpayHandshakeResolvePayload")))
@interface MSDKMoonpayHandshakeResolvePayload : MSDKMoonpayResolvePayloadType
- (instancetype)initWithVersion:(float)version appVersion:(float)appVersion __attribute__((swift_name("init(version:appVersion:)"))) __attribute__((objc_designated_initializer));
- (MSDKMoonpayHandshakeResolvePayload *)doCopyVersion:(float)version appVersion:(float)appVersion __attribute__((swift_name("doCopy(version:appVersion:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float appVersion __attribute__((swift_name("appVersion")));
@property (readonly) float version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoonpayMessage.Companion")))
@interface MSDKMoonpayMessageCompanion : MSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MSDKMoonpayMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<MSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<MSDKKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(MSDKKotlinArray<id<MSDKKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
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

__attribute__((swift_name("MoonpayRejectMessageType")))
@interface MSDKMoonpayRejectMessageType : MSDKMoonpayResponseMessage
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoonpayRejectMessage")))
@interface MSDKMoonpayRejectMessage : MSDKMoonpayRejectMessageType
- (instancetype)initWithAppName:(NSString *)appName correlationId:(NSString *)correlationId moonpaySdk:(BOOL)moonpaySdk version:(float)version payload:(MSDKMoonpayRejectPayload *)payload __attribute__((swift_name("init(appName:correlationId:moonpaySdk:version:payload:)"))) __attribute__((objc_designated_initializer));
- (MSDKMoonpayRejectMessage *)doCopyAppName:(NSString *)appName correlationId:(NSString *)correlationId moonpaySdk:(BOOL)moonpaySdk version:(float)version payload:(MSDKMoonpayRejectPayload *)payload __attribute__((swift_name("doCopy(appName:correlationId:moonpaySdk:version:payload:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *appName __attribute__((swift_name("appName")));
@property (readonly) NSString *correlationId __attribute__((swift_name("correlationId")));
@property (readonly) BOOL moonpaySdk __attribute__((swift_name("moonpaySdk")));
@property (readonly) MSDKMoonpayRejectPayload *payload __attribute__((swift_name("payload")));
@property (readonly) MSDKMoonpayMessageType *type __attribute__((swift_name("type")));
@property (readonly) float version __attribute__((swift_name("version")));
@end

__attribute__((swift_name("MoonpayRejectPayloadType")))
@interface MSDKMoonpayRejectPayloadType : MSDKMoonpayPayload
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoonpayRejectPayload")))
@interface MSDKMoonpayRejectPayload : MSDKMoonpayRejectPayloadType
- (instancetype)initWithMessage:(NSString *)message code:(MSDKMessagingErrorCode * _Nullable)code __attribute__((swift_name("init(message:code:)"))) __attribute__((objc_designated_initializer));
- (MSDKMoonpayRejectPayload *)doCopyMessage:(NSString *)message code:(MSDKMessagingErrorCode * _Nullable)code __attribute__((swift_name("doCopy(message:code:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MSDKMessagingErrorCode * _Nullable code __attribute__((swift_name("code")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoonpayRequestMessage")))
@interface MSDKMoonpayRequestMessage : MSDKMoonpayRequestMessageType
- (instancetype)initWithAppName:(NSString *)appName correlationId:(NSString *)correlationId moonpaySdk:(BOOL)moonpaySdk version:(float)version action:(NSString *)action payload:(MSDKMoonpayRequestPayload *)payload __attribute__((swift_name("init(appName:correlationId:moonpaySdk:version:action:payload:)"))) __attribute__((objc_designated_initializer));
- (MSDKMoonpayRequestMessage *)doCopyAppName:(NSString *)appName correlationId:(NSString *)correlationId moonpaySdk:(BOOL)moonpaySdk version:(float)version action:(NSString *)action payload:(MSDKMoonpayRequestPayload *)payload __attribute__((swift_name("doCopy(appName:correlationId:moonpaySdk:version:action:payload:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *action __attribute__((swift_name("action")));
@property (readonly) NSString *appName __attribute__((swift_name("appName")));
@property (readonly) NSString *correlationId __attribute__((swift_name("correlationId")));
@property (readonly) BOOL moonpaySdk __attribute__((swift_name("moonpaySdk")));
@property (readonly) MSDKMoonpayRequestPayload *payload __attribute__((swift_name("payload")));
@property (readonly) MSDKMoonpayMessageType *type __attribute__((swift_name("type")));
@property (readonly) float version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoonpayRequestPayload")))
@interface MSDKMoonpayRequestPayload : MSDKMoonpayRequestPayloadType
- (instancetype)initWithData:(NSDictionary<NSString *, id> *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (MSDKMoonpayRequestPayload *)doCopyData:(NSDictionary<NSString *, id> *)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)doInitData:(NSDictionary<NSString *, id> *)data __attribute__((swift_name("doInit(data:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSDictionary<NSString *, id> *data __attribute__((swift_name("data")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoonpayResolveMessage")))
@interface MSDKMoonpayResolveMessage : MSDKMoonpayResolveMessageType
- (instancetype)initWithAppName:(NSString *)appName correlationId:(NSString *)correlationId moonpaySdk:(BOOL)moonpaySdk version:(float)version payload:(MSDKMoonpayResolvePayload *)payload __attribute__((swift_name("init(appName:correlationId:moonpaySdk:version:payload:)"))) __attribute__((objc_designated_initializer));
- (MSDKMoonpayResolveMessage *)doCopyAppName:(NSString *)appName correlationId:(NSString *)correlationId moonpaySdk:(BOOL)moonpaySdk version:(float)version payload:(MSDKMoonpayResolvePayload *)payload __attribute__((swift_name("doCopy(appName:correlationId:moonpaySdk:version:payload:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *appName __attribute__((swift_name("appName")));
@property (readonly) NSString *correlationId __attribute__((swift_name("correlationId")));
@property (readonly) BOOL moonpaySdk __attribute__((swift_name("moonpaySdk")));
@property (readonly) MSDKMoonpayResolvePayload *payload __attribute__((swift_name("payload")));
@property (readonly) MSDKMoonpayMessageType *type __attribute__((swift_name("type")));
@property (readonly) float version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoonpayResolvePayload")))
@interface MSDKMoonpayResolvePayload : MSDKMoonpayResolvePayloadType
- (instancetype)initWithData:(NSDictionary<NSString *, id> *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (MSDKMoonpayResolvePayload *)doCopyData:(NSDictionary<NSString *, id> *)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)doInitData:(NSDictionary<NSString *, id> *)data __attribute__((swift_name("doInit(data:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSDictionary<NSString *, id> *data __attribute__((swift_name("data")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OfframpWidgetQueryParams")))
@interface MSDKOfframpWidgetQueryParams : MSDKBase <MSDKAdvancedWidgetQueryParams>
- (instancetype)initWithApiKey:(NSString *)apiKey currencyCode:(NSString * _Nullable)currencyCode defaultCurrencyCode:(NSString * _Nullable)defaultCurrencyCode walletAddress:(NSString * _Nullable)walletAddress walletAddressTag:(NSString * _Nullable)walletAddressTag walletAddresses:(NSString * _Nullable)walletAddresses walletAddressTags:(NSString * _Nullable)walletAddressTags colorCode:(NSString * _Nullable)colorCode theme:(NSString * _Nullable)theme themeId:(NSString * _Nullable)themeId language:(NSString * _Nullable)language signature:(NSString * _Nullable)signature baseCurrencyCode:(NSString * _Nullable)baseCurrencyCode baseCurrencyAmount:(NSString * _Nullable)baseCurrencyAmount quoteCurrencyAmount:(NSString * _Nullable)quoteCurrencyAmount lockAmount:(NSString * _Nullable)lockAmount email:(NSString * _Nullable)email externalTransactionId:(NSString * _Nullable)externalTransactionId externalCustomerId:(NSString * _Nullable)externalCustomerId paymentMethod:(NSString * _Nullable)paymentMethod redirectURL:(NSString * _Nullable)redirectURL showAllCurrencies:(NSString * _Nullable)showAllCurrencies showOnlyCurrencies:(NSString * _Nullable)showOnlyCurrencies showWalletAddressForm:(NSString * _Nullable)showWalletAddressForm unsupportedRegionRedirectUrl:(NSString * _Nullable)unsupportedRegionRedirectUrl skipUnsupportedRegionScreen:(NSString * _Nullable)skipUnsupportedRegionScreen __attribute__((swift_name("init(apiKey:currencyCode:defaultCurrencyCode:walletAddress:walletAddressTag:walletAddresses:walletAddressTags:colorCode:theme:themeId:language:signature:baseCurrencyCode:baseCurrencyAmount:quoteCurrencyAmount:lockAmount:email:externalTransactionId:externalCustomerId:paymentMethod:redirectURL:showAllCurrencies:showOnlyCurrencies:showWalletAddressForm:unsupportedRegionRedirectUrl:skipUnsupportedRegionScreen:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MSDKOfframpWidgetQueryParamsCompanion *companion __attribute__((swift_name("companion")));
- (MSDKOfframpWidgetQueryParams *)doCopyApiKey:(NSString *)apiKey currencyCode:(NSString * _Nullable)currencyCode defaultCurrencyCode:(NSString * _Nullable)defaultCurrencyCode walletAddress:(NSString * _Nullable)walletAddress walletAddressTag:(NSString * _Nullable)walletAddressTag walletAddresses:(NSString * _Nullable)walletAddresses walletAddressTags:(NSString * _Nullable)walletAddressTags colorCode:(NSString * _Nullable)colorCode theme:(NSString * _Nullable)theme themeId:(NSString * _Nullable)themeId language:(NSString * _Nullable)language signature:(NSString * _Nullable)signature baseCurrencyCode:(NSString * _Nullable)baseCurrencyCode baseCurrencyAmount:(NSString * _Nullable)baseCurrencyAmount quoteCurrencyAmount:(NSString * _Nullable)quoteCurrencyAmount lockAmount:(NSString * _Nullable)lockAmount email:(NSString * _Nullable)email externalTransactionId:(NSString * _Nullable)externalTransactionId externalCustomerId:(NSString * _Nullable)externalCustomerId paymentMethod:(NSString * _Nullable)paymentMethod redirectURL:(NSString * _Nullable)redirectURL showAllCurrencies:(NSString * _Nullable)showAllCurrencies showOnlyCurrencies:(NSString * _Nullable)showOnlyCurrencies showWalletAddressForm:(NSString * _Nullable)showWalletAddressForm unsupportedRegionRedirectUrl:(NSString * _Nullable)unsupportedRegionRedirectUrl skipUnsupportedRegionScreen:(NSString * _Nullable)skipUnsupportedRegionScreen __attribute__((swift_name("doCopy(apiKey:currencyCode:defaultCurrencyCode:walletAddress:walletAddressTag:walletAddresses:walletAddressTags:colorCode:theme:themeId:language:signature:baseCurrencyCode:baseCurrencyAmount:quoteCurrencyAmount:lockAmount:email:externalTransactionId:externalCustomerId:paymentMethod:redirectURL:showAllCurrencies:showOnlyCurrencies:showWalletAddressForm:unsupportedRegionRedirectUrl:skipUnsupportedRegionScreen:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *apiKey __attribute__((swift_name("apiKey")));
@property NSString * _Nullable baseCurrencyAmount __attribute__((swift_name("baseCurrencyAmount")));
@property NSString * _Nullable baseCurrencyCode __attribute__((swift_name("baseCurrencyCode")));
@property NSString * _Nullable colorCode __attribute__((swift_name("colorCode")));
@property NSString * _Nullable currencyCode __attribute__((swift_name("currencyCode")));
@property NSString * _Nullable defaultCurrencyCode __attribute__((swift_name("defaultCurrencyCode")));
@property NSString * _Nullable email __attribute__((swift_name("email")));
@property NSString * _Nullable externalCustomerId __attribute__((swift_name("externalCustomerId")));
@property NSString * _Nullable externalTransactionId __attribute__((swift_name("externalTransactionId")));
@property NSString * _Nullable language __attribute__((swift_name("language")));
@property NSString * _Nullable lockAmount __attribute__((swift_name("lockAmount")));
@property NSString * _Nullable paymentMethod __attribute__((swift_name("paymentMethod")));
@property NSString * _Nullable quoteCurrencyAmount __attribute__((swift_name("quoteCurrencyAmount")));
@property NSString * _Nullable redirectURL __attribute__((swift_name("redirectURL")));
@property NSString * _Nullable showAllCurrencies __attribute__((swift_name("showAllCurrencies")));
@property NSString * _Nullable showOnlyCurrencies __attribute__((swift_name("showOnlyCurrencies")));
@property NSString * _Nullable showWalletAddressForm __attribute__((swift_name("showWalletAddressForm")));
@property NSString * _Nullable signature __attribute__((swift_name("signature")));
@property NSString * _Nullable skipUnsupportedRegionScreen __attribute__((swift_name("skipUnsupportedRegionScreen")));
@property NSString * _Nullable theme __attribute__((swift_name("theme")));
@property NSString * _Nullable themeId __attribute__((swift_name("themeId")));
@property NSString * _Nullable unsupportedRegionRedirectUrl __attribute__((swift_name("unsupportedRegionRedirectUrl")));
@property NSString * _Nullable walletAddress __attribute__((swift_name("walletAddress")));
@property NSString * _Nullable walletAddressTag __attribute__((swift_name("walletAddressTag")));
@property NSString * _Nullable walletAddressTags __attribute__((swift_name("walletAddressTags")));
@property NSString * _Nullable walletAddresses __attribute__((swift_name("walletAddresses")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OfframpWidgetQueryParams.Companion")))
@interface MSDKOfframpWidgetQueryParamsCompanion : MSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MSDKOfframpWidgetQueryParamsCompanion *shared __attribute__((swift_name("shared")));
- (id<MSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnAuthTokenProps")))
@interface MSDKOnAuthTokenProps : MSDKBase
- (instancetype)initWithToken:(NSString *)token csrfToken:(NSString *)csrfToken __attribute__((swift_name("init(token:csrfToken:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MSDKOnAuthTokenPropsCompanion *companion __attribute__((swift_name("companion")));
- (MSDKOnAuthTokenProps *)doCopyToken:(NSString *)token csrfToken:(NSString *)csrfToken __attribute__((swift_name("doCopy(token:csrfToken:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *csrfToken __attribute__((swift_name("csrfToken")));
@property (readonly) NSString *token __attribute__((swift_name("token")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnAuthTokenProps.Companion")))
@interface MSDKOnAuthTokenPropsCompanion : MSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MSDKOnAuthTokenPropsCompanion *shared __attribute__((swift_name("shared")));
- (id<MSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnInitiateDepositProps")))
@interface MSDKOnInitiateDepositProps : MSDKBase
- (instancetype)initWithTransactionId:(NSString *)transactionId cryptoCurrency:(MSDKCryptoCurrency *)cryptoCurrency fiatCurrency:(MSDKFiatCurrency *)fiatCurrency cryptoCurrencyAmount:(NSString *)cryptoCurrencyAmount cryptoCurrencyAmountSmalledDenomincation:(NSString *)cryptoCurrencyAmountSmalledDenomincation fiatCurrencyAmount:(NSString * _Nullable)fiatCurrencyAmount depositWalletAddress:(NSString *)depositWalletAddress __attribute__((swift_name("init(transactionId:cryptoCurrency:fiatCurrency:cryptoCurrencyAmount:cryptoCurrencyAmountSmalledDenomincation:fiatCurrencyAmount:depositWalletAddress:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MSDKOnInitiateDepositPropsCompanion *companion __attribute__((swift_name("companion")));
- (MSDKOnInitiateDepositProps *)doCopyTransactionId:(NSString *)transactionId cryptoCurrency:(MSDKCryptoCurrency *)cryptoCurrency fiatCurrency:(MSDKFiatCurrency *)fiatCurrency cryptoCurrencyAmount:(NSString *)cryptoCurrencyAmount cryptoCurrencyAmountSmalledDenomincation:(NSString *)cryptoCurrencyAmountSmalledDenomincation fiatCurrencyAmount:(NSString * _Nullable)fiatCurrencyAmount depositWalletAddress:(NSString *)depositWalletAddress __attribute__((swift_name("doCopy(transactionId:cryptoCurrency:fiatCurrency:cryptoCurrencyAmount:cryptoCurrencyAmountSmalledDenomincation:fiatCurrencyAmount:depositWalletAddress:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MSDKCryptoCurrency *cryptoCurrency __attribute__((swift_name("cryptoCurrency")));
@property (readonly) NSString *cryptoCurrencyAmount __attribute__((swift_name("cryptoCurrencyAmount")));
@property (readonly) NSString *cryptoCurrencyAmountSmalledDenomincation __attribute__((swift_name("cryptoCurrencyAmountSmalledDenomincation")));
@property (readonly) NSString *depositWalletAddress __attribute__((swift_name("depositWalletAddress")));
@property (readonly) MSDKFiatCurrency *fiatCurrency __attribute__((swift_name("fiatCurrency")));
@property (readonly) NSString * _Nullable fiatCurrencyAmount __attribute__((swift_name("fiatCurrencyAmount")));
@property (readonly) NSString *transactionId __attribute__((swift_name("transactionId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnInitiateDepositProps.Companion")))
@interface MSDKOnInitiateDepositPropsCompanion : MSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MSDKOnInitiateDepositPropsCompanion *shared __attribute__((swift_name("shared")));
- (id<MSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnInitiateDepositReplyProps")))
@interface MSDKOnInitiateDepositReplyProps : MSDKBase
- (instancetype)initWithDepositId:(NSString *)depositId __attribute__((swift_name("init(depositId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MSDKOnInitiateDepositReplyPropsCompanion *companion __attribute__((swift_name("companion")));
- (MSDKOnInitiateDepositReplyProps *)doCopyDepositId:(NSString *)depositId __attribute__((swift_name("doCopy(depositId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)doInitDepositId:(NSString *)depositId __attribute__((swift_name("doInit(depositId:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *depositId __attribute__((swift_name("depositId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnInitiateDepositReplyProps.Companion")))
@interface MSDKOnInitiateDepositReplyPropsCompanion : MSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MSDKOnInitiateDepositReplyPropsCompanion *shared __attribute__((swift_name("shared")));
- (id<MSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnLoginProps")))
@interface MSDKOnLoginProps : MSDKBase
- (instancetype)initWithIsRefresh:(BOOL)isRefresh __attribute__((swift_name("init(isRefresh:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MSDKOnLoginPropsCompanion *companion __attribute__((swift_name("companion")));
- (MSDKOnLoginProps *)doCopyIsRefresh:(BOOL)isRefresh __attribute__((swift_name("doCopy(isRefresh:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isRefresh __attribute__((swift_name("isRefresh")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnLoginProps.Companion")))
@interface MSDKOnLoginPropsCompanion : MSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MSDKOnLoginPropsCompanion *shared __attribute__((swift_name("shared")));
- (id<MSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnrampWidgetQueryParams")))
@interface MSDKOnrampWidgetQueryParams : MSDKBase <MSDKAdvancedWidgetQueryParams>
- (instancetype)initWithApiKey:(NSString *)apiKey currencyCode:(NSString * _Nullable)currencyCode defaultCurrencyCode:(NSString * _Nullable)defaultCurrencyCode walletAddress:(NSString * _Nullable)walletAddress walletAddressTag:(NSString * _Nullable)walletAddressTag walletAddresses:(NSString * _Nullable)walletAddresses walletAddressTags:(NSString * _Nullable)walletAddressTags colorCode:(NSString * _Nullable)colorCode theme:(NSString * _Nullable)theme themeId:(NSString * _Nullable)themeId language:(NSString * _Nullable)language signature:(NSString * _Nullable)signature baseCurrencyCode:(NSString * _Nullable)baseCurrencyCode baseCurrencyAmount:(NSString * _Nullable)baseCurrencyAmount quoteCurrencyAmount:(NSString * _Nullable)quoteCurrencyAmount lockAmount:(NSString * _Nullable)lockAmount email:(NSString * _Nullable)email externalTransactionId:(NSString * _Nullable)externalTransactionId externalCustomerId:(NSString * _Nullable)externalCustomerId paymentMethod:(NSString * _Nullable)paymentMethod redirectURL:(NSString * _Nullable)redirectURL showAllCurrencies:(NSString * _Nullable)showAllCurrencies showOnlyCurrencies:(NSString * _Nullable)showOnlyCurrencies showWalletAddressForm:(NSString * _Nullable)showWalletAddressForm unsupportedRegionRedirectUrl:(NSString * _Nullable)unsupportedRegionRedirectUrl skipUnsupportedRegionScreen:(NSString * _Nullable)skipUnsupportedRegionScreen __attribute__((swift_name("init(apiKey:currencyCode:defaultCurrencyCode:walletAddress:walletAddressTag:walletAddresses:walletAddressTags:colorCode:theme:themeId:language:signature:baseCurrencyCode:baseCurrencyAmount:quoteCurrencyAmount:lockAmount:email:externalTransactionId:externalCustomerId:paymentMethod:redirectURL:showAllCurrencies:showOnlyCurrencies:showWalletAddressForm:unsupportedRegionRedirectUrl:skipUnsupportedRegionScreen:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MSDKOnrampWidgetQueryParamsCompanion *companion __attribute__((swift_name("companion")));
- (MSDKOnrampWidgetQueryParams *)doCopyApiKey:(NSString *)apiKey currencyCode:(NSString * _Nullable)currencyCode defaultCurrencyCode:(NSString * _Nullable)defaultCurrencyCode walletAddress:(NSString * _Nullable)walletAddress walletAddressTag:(NSString * _Nullable)walletAddressTag walletAddresses:(NSString * _Nullable)walletAddresses walletAddressTags:(NSString * _Nullable)walletAddressTags colorCode:(NSString * _Nullable)colorCode theme:(NSString * _Nullable)theme themeId:(NSString * _Nullable)themeId language:(NSString * _Nullable)language signature:(NSString * _Nullable)signature baseCurrencyCode:(NSString * _Nullable)baseCurrencyCode baseCurrencyAmount:(NSString * _Nullable)baseCurrencyAmount quoteCurrencyAmount:(NSString * _Nullable)quoteCurrencyAmount lockAmount:(NSString * _Nullable)lockAmount email:(NSString * _Nullable)email externalTransactionId:(NSString * _Nullable)externalTransactionId externalCustomerId:(NSString * _Nullable)externalCustomerId paymentMethod:(NSString * _Nullable)paymentMethod redirectURL:(NSString * _Nullable)redirectURL showAllCurrencies:(NSString * _Nullable)showAllCurrencies showOnlyCurrencies:(NSString * _Nullable)showOnlyCurrencies showWalletAddressForm:(NSString * _Nullable)showWalletAddressForm unsupportedRegionRedirectUrl:(NSString * _Nullable)unsupportedRegionRedirectUrl skipUnsupportedRegionScreen:(NSString * _Nullable)skipUnsupportedRegionScreen __attribute__((swift_name("doCopy(apiKey:currencyCode:defaultCurrencyCode:walletAddress:walletAddressTag:walletAddresses:walletAddressTags:colorCode:theme:themeId:language:signature:baseCurrencyCode:baseCurrencyAmount:quoteCurrencyAmount:lockAmount:email:externalTransactionId:externalCustomerId:paymentMethod:redirectURL:showAllCurrencies:showOnlyCurrencies:showWalletAddressForm:unsupportedRegionRedirectUrl:skipUnsupportedRegionScreen:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *apiKey __attribute__((swift_name("apiKey")));
@property NSString * _Nullable baseCurrencyAmount __attribute__((swift_name("baseCurrencyAmount")));
@property NSString * _Nullable baseCurrencyCode __attribute__((swift_name("baseCurrencyCode")));
@property NSString * _Nullable colorCode __attribute__((swift_name("colorCode")));
@property NSString * _Nullable currencyCode __attribute__((swift_name("currencyCode")));
@property NSString * _Nullable defaultCurrencyCode __attribute__((swift_name("defaultCurrencyCode")));
@property NSString * _Nullable email __attribute__((swift_name("email")));
@property NSString * _Nullable externalCustomerId __attribute__((swift_name("externalCustomerId")));
@property NSString * _Nullable externalTransactionId __attribute__((swift_name("externalTransactionId")));
@property NSString * _Nullable language __attribute__((swift_name("language")));
@property NSString * _Nullable lockAmount __attribute__((swift_name("lockAmount")));
@property NSString * _Nullable paymentMethod __attribute__((swift_name("paymentMethod")));
@property NSString * _Nullable quoteCurrencyAmount __attribute__((swift_name("quoteCurrencyAmount")));
@property NSString * _Nullable redirectURL __attribute__((swift_name("redirectURL")));
@property NSString * _Nullable showAllCurrencies __attribute__((swift_name("showAllCurrencies")));
@property NSString * _Nullable showOnlyCurrencies __attribute__((swift_name("showOnlyCurrencies")));
@property NSString * _Nullable showWalletAddressForm __attribute__((swift_name("showWalletAddressForm")));
@property NSString * _Nullable signature __attribute__((swift_name("signature")));
@property NSString * _Nullable skipUnsupportedRegionScreen __attribute__((swift_name("skipUnsupportedRegionScreen")));
@property NSString * _Nullable theme __attribute__((swift_name("theme")));
@property NSString * _Nullable themeId __attribute__((swift_name("themeId")));
@property NSString * _Nullable unsupportedRegionRedirectUrl __attribute__((swift_name("unsupportedRegionRedirectUrl")));
@property NSString * _Nullable walletAddress __attribute__((swift_name("walletAddress")));
@property NSString * _Nullable walletAddressTag __attribute__((swift_name("walletAddressTag")));
@property NSString * _Nullable walletAddressTags __attribute__((swift_name("walletAddressTags")));
@property NSString * _Nullable walletAddresses __attribute__((swift_name("walletAddresses")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnrampWidgetQueryParams.Companion")))
@interface MSDKOnrampWidgetQueryParamsCompanion : MSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MSDKOnrampWidgetQueryParamsCompanion *shared __attribute__((swift_name("shared")));
- (id<MSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMessenger")))
@interface MSDKPostMessenger : MSDKBase
- (instancetype)initWithAppProtocol:(MSDKAppProtocol *)appProtocol mode:(MSDKPostMessengerMode *)mode requestActionHandlers:(NSDictionary<MSDKFloat *, NSDictionary<NSString *, MSDKMoonPayHandler *> *> * _Nullable)requestActionHandlers verbose:(BOOL)verbose postMessageClient:(NSObject *)postMessageClient __attribute__((swift_name("init(appProtocol:mode:requestActionHandlers:verbose:postMessageClient:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)initializeCommunicationWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("initializeCommunication(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendMessageParams:(MSDKSendMessageParams *)params completionHandler:(void (^)(id<MSDKKotlinx_coroutines_coreCompletableDeferred> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("sendMessage(params:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendMessageParams:(MSDKSendMessageParams *)params completionHandler:(void (^)(id<MSDKKotlinx_coroutines_coreCompletableDeferred> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("sendMessage(params:completionHandler:)")));
- (void)shutdown __attribute__((swift_name("shutdown()")));
@property void (^ _Nullable onReady)(MSDKAppProtocolProps *) __attribute__((swift_name("onReady")));
@property (readonly) NSObject *postMessageClient __attribute__((swift_name("postMessageClient")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMessengerConsts")))
@interface MSDKPostMessengerConsts : MSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString *PostMessengerMode __attribute__((swift_name("PostMessengerMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMessengerMode")))
@interface MSDKPostMessengerMode : MSDKKotlinEnum<MSDKPostMessengerMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MSDKPostMessengerMode *parent __attribute__((swift_name("parent")));
@property (class, readonly) MSDKPostMessengerMode *child __attribute__((swift_name("child")));
+ (MSDKKotlinArray<MSDKPostMessengerMode *> *)values __attribute__((swift_name("values()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("RampsSwapHandlers")))
@interface MSDKRampsSwapHandlers : MSDKBase
- (instancetype)initWithOnAuthToken:(void (^ _Nullable)(MSDKOnAuthTokenProps *))onAuthToken onSwapsCustomerSetupComplete:(void (^ _Nullable)(void))onSwapsCustomerSetupComplete __attribute__((swift_name("init(onAuthToken:onSwapsCustomerSetupComplete:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MSDKRampsSwapHandlersCompanion *companion __attribute__((swift_name("companion")));
@property void (^ _Nullable onAuthToken)(MSDKOnAuthTokenProps *) __attribute__((swift_name("onAuthToken")));
@property void (^ _Nullable onSwapsCustomerSetupComplete)(void) __attribute__((swift_name("onSwapsCustomerSetupComplete")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RampsHandlers")))
@interface MSDKRampsHandlers : MSDKRampsSwapHandlers
- (instancetype)initWithOnAuthToken:(void (^ _Nullable)(MSDKOnAuthTokenProps *))onAuthToken onSwapsCustomerSetupComplete:(void (^ _Nullable)(void))onSwapsCustomerSetupComplete onUnsupportedRegion:(void (^ _Nullable)(void))onUnsupportedRegion onKmsWalletCreated:(void (^ _Nullable)(void))onKmsWalletCreated onLogin:(void (^ _Nullable)(MSDKOnLoginProps *))onLogin onInitiateDeposit:(MSDKOnInitiateDepositReplyProps *(^ _Nullable)(MSDKOnInitiateDepositProps *))onInitiateDeposit __attribute__((swift_name("init(onAuthToken:onSwapsCustomerSetupComplete:onUnsupportedRegion:onKmsWalletCreated:onLogin:onInitiateDeposit:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithOnAuthToken:(void (^ _Nullable)(MSDKOnAuthTokenProps *))onAuthToken onSwapsCustomerSetupComplete:(void (^ _Nullable)(void))onSwapsCustomerSetupComplete __attribute__((swift_name("init(onAuthToken:onSwapsCustomerSetupComplete:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MSDKRampsHandlersCompanion *companion __attribute__((swift_name("companion")));
@property MSDKOnInitiateDepositReplyProps *(^ _Nullable onInitiateDeposit)(MSDKOnInitiateDepositProps *) __attribute__((swift_name("onInitiateDeposit")));
@property void (^ _Nullable onKmsWalletCreated)(void) __attribute__((swift_name("onKmsWalletCreated")));
@property void (^ _Nullable onLogin)(MSDKOnLoginProps *) __attribute__((swift_name("onLogin")));
@property void (^ _Nullable onUnsupportedRegion)(void) __attribute__((swift_name("onUnsupportedRegion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RampsHandlers.Companion")))
@interface MSDKRampsHandlersCompanion : MSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MSDKRampsHandlersCompanion *shared __attribute__((swift_name("shared")));
- (id<MSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RampsSwapHandlers.Companion")))
@interface MSDKRampsSwapHandlersCompanion : MSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MSDKRampsSwapHandlersCompanion *shared __attribute__((swift_name("shared")));
- (id<MSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellFlow")))
@interface MSDKSellFlow : MSDKWidgetFlow
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MSDKSellFlowCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SellFlow.Companion")))
@interface MSDKSellFlowCompanion : MSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MSDKSellFlowCompanion *shared __attribute__((swift_name("shared")));
- (id<MSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SendMessageParams")))
@interface MSDKSendMessageParams : MSDKBase
- (instancetype)initWithAction:(NSString *)action payload:(MSDKMoonpayRequestPayloadType *)payload timeout:(MSDKLong * _Nullable)timeout __attribute__((swift_name("init(action:payload:timeout:)"))) __attribute__((objc_designated_initializer));
- (MSDKSendMessageParams *)doCopyAction:(NSString *)action payload:(MSDKMoonpayRequestPayloadType *)payload timeout:(MSDKLong * _Nullable)timeout __attribute__((swift_name("doCopy(action:payload:timeout:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *action __attribute__((swift_name("action")));
@property (readonly) MSDKMoonpayRequestPayloadType *payload __attribute__((swift_name("payload")));
@property (readonly) MSDKLong * _Nullable timeout __attribute__((swift_name("timeout")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SwapFlow")))
@interface MSDKSwapFlow : MSDKWidgetFlow
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MSDKSwapFlowCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SwapFlow.Companion")))
@interface MSDKSwapFlowCompanion : MSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MSDKSwapFlowCompanion *shared __attribute__((swift_name("shared")));
- (id<MSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SwapWidgetQueryParams")))
@interface MSDKSwapWidgetQueryParams : MSDKBase <MSDKWidgetQueryParams>
- (instancetype)initWithApiKey:(NSString *)apiKey amount:(NSString *)amount amountCurrencyCode:(NSString *)amountCurrencyCode theme:(NSString * _Nullable)theme themeId:(NSString *)themeId __attribute__((swift_name("init(apiKey:amount:amountCurrencyCode:theme:themeId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MSDKSwapWidgetQueryParamsCompanion *companion __attribute__((swift_name("companion")));
- (NSDictionary<NSString *, NSString *> *)toMap __attribute__((swift_name("toMap()")));
@property NSString *amount __attribute__((swift_name("amount")));
@property NSString *amountCurrencyCode __attribute__((swift_name("amountCurrencyCode")));
@property NSString *apiKey __attribute__((swift_name("apiKey")));
@property NSString * _Nullable theme __attribute__((swift_name("theme")));
@property NSString *themeId __attribute__((swift_name("themeId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SwapWidgetQueryParams.Companion")))
@interface MSDKSwapWidgetQueryParamsCompanion : MSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MSDKSwapWidgetQueryParamsCompanion *shared __attribute__((swift_name("shared")));
- (id<MSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Validator")))
@interface MSDKValidator : MSDKBase
- (instancetype)initWithLogger:(MSDKLogger *)logger __attribute__((swift_name("init(logger:)"))) __attribute__((objc_designated_initializer));
- (void)validateBuyConfigConfig:(MSDKMoonPayCoreSdkBuyConfig *)config __attribute__((swift_name("validateBuyConfig(config:)")));
- (void)validateLegacyConfigConfig:(MSDKMoonPayCoreSdkLegacyConfig *)config __attribute__((swift_name("validateLegacyConfig(config:)")));
- (void)validateMoonPayCoreSdkConfigConfig:(MSDKMoonPayCoreSdkConfig * _Nullable)config __attribute__((swift_name("validateMoonPayCoreSdkConfig(config:)")));
- (void)validateSellConfigConfig:(MSDKMoonPayCoreSdkSellConfig *)config __attribute__((swift_name("validateSellConfig(config:)")));
- (void)validateSwapConfigConfig:(MSDKMoonPayCoreSdkSwapConfig *)config __attribute__((swift_name("validateSwapConfig(config:)")));
- (void)warnMissingParamParamName:(NSString *)paramName condition:(BOOL)condition __attribute__((swift_name("warnMissingParam(paramName:condition:)")));
@property (readonly) MSDKLogger *logger __attribute__((swift_name("logger")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WalletAddress")))
@interface MSDKWalletAddress : MSDKBase
- (instancetype)initWithWalletAddress:(NSString *)walletAddress __attribute__((swift_name("init(walletAddress:)"))) __attribute__((objc_designated_initializer));
- (MSDKWalletAddress *)doCopyWalletAddress:(NSString *)walletAddress __attribute__((swift_name("doCopy(walletAddress:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *walletAddress __attribute__((swift_name("walletAddress")));
@end

__attribute__((unavailable("Kotlin subclass of Objective-C class can't be imported")))
__attribute__((swift_name("WebView")))
@interface MSDKWebView : NSObject
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WidgetEnvironment")))
@interface MSDKWidgetEnvironment : MSDKKotlinEnum<MSDKWidgetEnvironment *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MSDKWidgetEnvironmentCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) MSDKWidgetEnvironment *production __attribute__((swift_name("production")));
@property (class, readonly) MSDKWidgetEnvironment *sandbox __attribute__((swift_name("sandbox")));
+ (MSDKKotlinArray<MSDKWidgetEnvironment *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WidgetEnvironment.Companion")))
@interface MSDKWidgetEnvironmentCompanion : MSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MSDKWidgetEnvironmentCompanion *shared __attribute__((swift_name("shared")));
- (id<MSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<MSDKKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(MSDKKotlinArray<id<MSDKKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WidgetFlow.Companion")))
@interface MSDKWidgetFlowCompanion : MSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MSDKWidgetFlowCompanion *shared __attribute__((swift_name("shared")));
- (id<MSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<MSDKKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(MSDKKotlinArray<id<MSDKKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((swift_name("WidgetPostMessengerHandlers")))
@protocol MSDKWidgetPostMessengerHandlers
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WidgetUrl")))
@interface MSDKWidgetUrl : MSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MSDKWidgetUrlCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WidgetUrl.Companion")))
@interface MSDKWidgetUrlCompanion : MSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MSDKWidgetUrlCompanion *shared __attribute__((swift_name("shared")));
- (NSString *)generateWidgetUrlConfig:(MSDKMoonPayCoreSdkConfig *)config omitSignature:(BOOL)omitSignature sdkEnvironment:(MSDKMoonPayCoreSdkEnvironment *)sdkEnvironment __attribute__((swift_name("generateWidgetUrl(config:omitSignature:sdkEnvironment:)")));
@end

__attribute__((swift_name("WithLoggerLikeInstance")))
@protocol MSDKWithLoggerLikeInstance
@required
@property MSDKLogger * _Nullable logger __attribute__((swift_name("logger")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageTypesKt")))
@interface MSDKMessageTypesKt : MSDKBase
+ (BOOL)isMoonpayHandshakeRequestMessageMessage:(MSDKMoonpayMessage *)message __attribute__((swift_name("isMoonpayHandshakeRequestMessage(message:)")));
@property (class, readonly) NSString *HandshakeAction __attribute__((swift_name("HandshakeAction")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoggerKt")))
@interface MSDKLoggerKt : MSDKBase
@property (class, readonly) void (^NOOP)(void) __attribute__((swift_name("NOOP")));
@property (class, readonly) id<MSDKLoggerLikeInstance> noopLogger __attribute__((swift_name("noopLogger")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RampsKt")))
@interface MSDKRampsKt : MSDKBase
@property (class, readonly) MSDKAppProtocol *RampsAppProtocol __attribute__((swift_name("RampsAppProtocol")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMessengerConstsKt")))
@interface MSDKPostMessengerConstsKt : MSDKBase
@property (class, readonly) NSArray<MSDKFloat *> *SUPPORTED_PROTOCOL_VERSIONS __attribute__((swift_name("SUPPORTED_PROTOCOL_VERSIONS")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WidgetUrlKt")))
@interface MSDKWidgetUrlKt : MSDKBase
@property (class, readonly) NSDictionary<MSDKWidgetEnvironment *, NSDictionary<NSString *, NSString *> *> *moonPayHostnames __attribute__((swift_name("moonPayHostnames")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol MSDKKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<MSDKKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MSDKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol MSDKKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<MSDKKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<MSDKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol MSDKKotlinx_serialization_coreKSerializer <MSDKKotlinx_serialization_coreSerializationStrategy, MSDKKotlinx_serialization_coreDeserializationStrategy>
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol MSDKKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<MSDKKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<MSDKKotlinCoroutineContextElement> _Nullable)getKey:(id<MSDKKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<MSDKKotlinCoroutineContext>)minusKeyKey:(id<MSDKKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<MSDKKotlinCoroutineContext>)plusContext:(id<MSDKKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol MSDKKotlinCoroutineContextElement <MSDKKotlinCoroutineContext>
@required
@property (readonly) id<MSDKKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol MSDKKotlinx_coroutines_coreJob <MSDKKotlinCoroutineContextElement>
@required
- (id<MSDKKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<MSDKKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(MSDKKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (MSDKKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<MSDKKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(MSDKKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<MSDKKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(MSDKKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<MSDKKotlinx_coroutines_coreJob>)plusOther:(id<MSDKKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<MSDKKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<MSDKKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
@property (readonly) id<MSDKKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDeferred")))
@protocol MSDKKotlinx_coroutines_coreDeferred <MSDKKotlinx_coroutines_coreJob>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("await(completionHandler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (id _Nullable)getCompleted __attribute__((swift_name("getCompleted()")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (MSDKKotlinThrowable * _Nullable)getCompletionExceptionOrNull __attribute__((swift_name("getCompletionExceptionOrNull()")));
@property (readonly) id<MSDKKotlinx_coroutines_coreSelectClause1> onAwait __attribute__((swift_name("onAwait")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCompletableDeferred")))
@protocol MSDKKotlinx_coroutines_coreCompletableDeferred <MSDKKotlinx_coroutines_coreDeferred>
@required
- (BOOL)completeValue:(id _Nullable)value __attribute__((swift_name("complete(value:)")));
- (BOOL)completeExceptionallyException:(MSDKKotlinThrowable *)exception __attribute__((swift_name("completeExceptionally(exception:)")));
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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface MSDKKotlinEnumCompanion : MSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MSDKKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
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

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol MSDKKotlinx_serialization_coreEncoder
@required
- (id<MSDKKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<MSDKKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<MSDKKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<MSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<MSDKKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<MSDKKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<MSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<MSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<MSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) MSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol MSDKKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<MSDKKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MSDKKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<MSDKKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) MSDKKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol MSDKKotlinx_serialization_coreDecoder
@required
- (id<MSDKKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<MSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<MSDKKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<MSDKKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<MSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (MSDKKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<MSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<MSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) MSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol MSDKKotlinCoroutineContextKey
@required
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause")))
@protocol MSDKKotlinx_coroutines_coreSelectClause
@required
@property (readonly) id clauseObject __attribute__((swift_name("clauseObject")));
@property (readonly) MSDKKotlinUnit *(^(^ _Nullable onCancellationConstructor)(id<MSDKKotlinx_coroutines_coreSelectInstance>, id _Nullable, id _Nullable))(MSDKKotlinThrowable *) __attribute__((swift_name("onCancellationConstructor")));
@property (readonly) id _Nullable (^processResFunc)(id, id _Nullable, id _Nullable) __attribute__((swift_name("processResFunc")));
@property (readonly) void (^regFunc)(id, id<MSDKKotlinx_coroutines_coreSelectInstance>, id _Nullable) __attribute__((swift_name("regFunc")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause1")))
@protocol MSDKKotlinx_coroutines_coreSelectClause1 <MSDKKotlinx_coroutines_coreSelectClause>
@required
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol MSDKKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol MSDKKotlinx_coroutines_coreChildHandle <MSDKKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(MSDKKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@property (readonly) id<MSDKKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol MSDKKotlinx_coroutines_coreChildJob <MSDKKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<MSDKKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol MSDKKotlinSequence
@required
- (id<MSDKKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol MSDKKotlinx_coroutines_coreSelectClause0 <MSDKKotlinx_coroutines_coreSelectClause>
@required
@end

__attribute__((swift_name("KotlinIterator")))
@protocol MSDKKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol MSDKKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<MSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<MSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<MSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<MSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<MSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<MSDKKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<MSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<MSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<MSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<MSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<MSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<MSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<MSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<MSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<MSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) MSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface MSDKKotlinx_serialization_coreSerializersModule : MSDKBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<MSDKKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MSDKKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<MSDKKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<MSDKKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MSDKKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<MSDKKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MSDKKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<MSDKKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol MSDKKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface MSDKKotlinx_serialization_coreSerialKind : MSDKBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol MSDKKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<MSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<MSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<MSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<MSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<MSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<MSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<MSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<MSDKKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<MSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<MSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<MSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<MSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<MSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<MSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<MSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<MSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) MSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface MSDKKotlinNothing : MSDKBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface MSDKKotlinUnit : MSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MSDKKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol MSDKKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnCompletionDisposableHandle:(id<MSDKKotlinx_coroutines_coreDisposableHandle>)disposableHandle __attribute__((swift_name("disposeOnCompletion(disposableHandle:)")));
- (void)selectInRegistrationPhaseInternalResult:(id _Nullable)internalResult __attribute__((swift_name("selectInRegistrationPhase(internalResult:)")));
- (BOOL)trySelectClauseObject:(id)clauseObject result:(id _Nullable)result __attribute__((swift_name("trySelect(clauseObject:result:)")));
@property (readonly) id<MSDKKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol MSDKKotlinx_coroutines_coreParentJob <MSDKKotlinx_coroutines_coreJob>
@required
- (MSDKKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol MSDKKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<MSDKKotlinKClass>)kClass provider:(id<MSDKKotlinx_serialization_coreKSerializer> (^)(NSArray<id<MSDKKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<MSDKKotlinKClass>)kClass serializer:(id<MSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<MSDKKotlinKClass>)baseClass actualClass:(id<MSDKKotlinKClass>)actualClass actualSerializer:(id<MSDKKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<MSDKKotlinKClass>)baseClass defaultDeserializerProvider:(id<MSDKKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<MSDKKotlinKClass>)baseClass defaultDeserializerProvider:(id<MSDKKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<MSDKKotlinKClass>)baseClass defaultSerializerProvider:(id<MSDKKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol MSDKKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol MSDKKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol MSDKKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol MSDKKotlinKClass <MSDKKotlinKDeclarationContainer, MSDKKotlinKAnnotatedElement, MSDKKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END

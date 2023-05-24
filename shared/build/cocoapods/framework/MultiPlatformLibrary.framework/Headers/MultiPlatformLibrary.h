#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class MPLKotlinx_coroutines_coreCoroutineDispatcher, MPLCFlow<T>, MPLCStateFlow<T>, MPLEventsDispatcher<ListenerType>, MPLLoginPemisosModelCompanion, MPLLoginPemisosModel, MPLLoginRequestModelCompanion, MPLLoginRequestModel, MPLKotlinArray<T>, MPLLoginResponseModelCompanion, MPLLoginResponseModel, MPLViewModel, MPLCMutableStateFlow<T>, MPLLoginViewModelActionLoginError, MPLLoginViewModelActionLoginSuccess, UIView, UIColor, UIControl, UITextView, UIButton, UIImage, UISwitch, UILabel, UITextField, NSNotificationCenter, MPLKotlinThrowable, MPLKotlinException, MPLKotlinRuntimeException, MPLKotlinIllegalStateException, MPLKotlinAbstractCoroutineContextElement, MPLKotlinx_coroutines_coreCoroutineDispatcherKey, MPLKotlinAbstractCoroutineContextKey<B, E>, MPLKotlinx_serialization_coreSerializersModule, MPLKotlinx_serialization_coreSerialKind, MPLKotlinNothing;

@protocol MPLKotlinx_coroutines_coreFlowCollector, MPLKotlinx_coroutines_coreFlow, MPLDisposableHandle, MPLKotlinx_coroutines_coreCoroutineScope, MPLKotlinx_coroutines_coreSharedFlow, MPLKotlinx_coroutines_coreStateFlow, MPLKotlinx_coroutines_coreMutableSharedFlow, MPLKotlinx_coroutines_coreMutableStateFlow, MPLKotlinx_coroutines_coreDisposableHandle, MPLPlatform, MPLKotlinx_serialization_coreKSerializer, MPLLoginViewModelAction, MPLKotlinCoroutineContext, MPLKotlinCoroutineContextKey, MPLKotlinCoroutineContextElement, MPLKotlinContinuation, MPLKotlinContinuationInterceptor, MPLKotlinx_coroutines_coreRunnable, MPLKotlinx_serialization_coreEncoder, MPLKotlinx_serialization_coreSerialDescriptor, MPLKotlinx_serialization_coreSerializationStrategy, MPLKotlinx_serialization_coreDecoder, MPLKotlinx_serialization_coreDeserializationStrategy, MPLKotlinIterator, MPLKotlinx_serialization_coreCompositeEncoder, MPLKotlinAnnotation, MPLKotlinx_serialization_coreCompositeDecoder, MPLKotlinx_serialization_coreSerializersModuleCollector, MPLKotlinKClass, MPLKotlinKDeclarationContainer, MPLKotlinKAnnotatedElement, MPLKotlinKClassifier;

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
@interface MPLBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface MPLBase (MPLBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface MPLMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface MPLMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorMPLKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface MPLNumber : NSNumber
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
@interface MPLByte : MPLNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface MPLUByte : MPLNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface MPLShort : MPLNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface MPLUShort : MPLNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface MPLInt : MPLNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface MPLUInt : MPLNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface MPLLong : MPLNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface MPLULong : MPLNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface MPLFloat : MPLNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface MPLDouble : MPLNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface MPLBoolean : MPLNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol MPLKotlinx_coroutines_coreFlow
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<MPLKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((swift_name("CFlow")))
@interface MPLCFlow<T> : MPLBase <MPLKotlinx_coroutines_coreFlow>
- (instancetype)initWithFlow:(id<MPLKotlinx_coroutines_coreFlow>)flow __attribute__((swift_name("init(flow:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<MPLKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
- (id<MPLDisposableHandle>)subscribeOnCollect:(void (^)(T _Nullable))onCollect __attribute__((swift_name("subscribe(onCollect:)")));
- (id<MPLDisposableHandle>)subscribeCoroutineScope:(id<MPLKotlinx_coroutines_coreCoroutineScope>)coroutineScope dispatcher:(MPLKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher onCollect:(void (^)(T _Nullable))onCollect __attribute__((swift_name("subscribe(coroutineScope:dispatcher:onCollect:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSharedFlow")))
@protocol MPLKotlinx_coroutines_coreSharedFlow <MPLKotlinx_coroutines_coreFlow>
@required
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreStateFlow")))
@protocol MPLKotlinx_coroutines_coreStateFlow <MPLKotlinx_coroutines_coreSharedFlow>
@required
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("CStateFlow")))
@interface MPLCStateFlow<T> : MPLCFlow<T> <MPLKotlinx_coroutines_coreStateFlow>
- (instancetype)initWithFlow:(id<MPLKotlinx_coroutines_coreStateFlow>)flow __attribute__((swift_name("init(flow:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<MPLKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) T _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol MPLKotlinx_coroutines_coreFlowCollector
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreMutableSharedFlow")))
@protocol MPLKotlinx_coroutines_coreMutableSharedFlow <MPLKotlinx_coroutines_coreSharedFlow, MPLKotlinx_coroutines_coreFlowCollector>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(id _Nullable)value __attribute__((swift_name("tryEmit(value:)")));
@property (readonly) id<MPLKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreMutableStateFlow")))
@protocol MPLKotlinx_coroutines_coreMutableStateFlow <MPLKotlinx_coroutines_coreStateFlow, MPLKotlinx_coroutines_coreMutableSharedFlow>
@required
- (BOOL)compareAndSetExpect:(id _Nullable)expect update:(id _Nullable)update __attribute__((swift_name("compareAndSet(expect:update:)")));
- (void)setValue:(id _Nullable)value __attribute__((swift_name("setValue(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CMutableStateFlow")))
@interface MPLCMutableStateFlow<T> : MPLCStateFlow<T> <MPLKotlinx_coroutines_coreMutableStateFlow>
- (instancetype)initWithFlow:(id<MPLKotlinx_coroutines_coreMutableStateFlow>)flow __attribute__((swift_name("init(flow:)"))) __attribute__((objc_designated_initializer));
- (BOOL)compareAndSetExpect:(T _Nullable)expect update:(T _Nullable)update __attribute__((swift_name("compareAndSet(expect:update:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(T _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(T _Nullable)value __attribute__((swift_name("tryEmit(value:)")));
@property (readonly) id<MPLKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
@property T _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol MPLKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end

__attribute__((swift_name("DisposableHandle")))
@protocol MPLDisposableHandle <MPLKotlinx_coroutines_coreDisposableHandle>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventsDispatcher")))
@interface MPLEventsDispatcher<ListenerType> : MPLBase
- (instancetype)initWithListener:(ListenerType)listener __attribute__((swift_name("init(listener:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)dispatchEventBlock:(void (^)(ListenerType))block __attribute__((swift_name("dispatchEvent(block:)")));
@property ListenerType _Nullable listener __attribute__((swift_name("listener")));
@end

__attribute__((swift_name("EventsDispatcherOwner")))
@protocol MPLEventsDispatcherOwner
@required
@property (readonly) MPLEventsDispatcher<id> *eventsDispatcher __attribute__((swift_name("eventsDispatcher")));
@end

__attribute__((swift_name("ViewModel")))
@interface MPLViewModel : MPLBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)onCleared __attribute__((swift_name("onCleared()")));
@property (readonly) id<MPLKotlinx_coroutines_coreCoroutineScope> viewModelScope __attribute__((swift_name("viewModelScope")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Greeting")))
@interface MPLGreeting : MPLBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)greet __attribute__((swift_name("greet()")));
@end

__attribute__((swift_name("Platform")))
@protocol MPLPlatform
@required
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSPlatform")))
@interface MPLIOSPlatform : MPLBase <MPLPlatform>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginPemisosModel")))
@interface MPLLoginPemisosModel : MPLBase
- (instancetype)initWithId:(MPLInt * _Nullable)id detalle:(NSString * _Nullable)detalle __attribute__((swift_name("init(id:detalle:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPLLoginPemisosModelCompanion *companion __attribute__((swift_name("companion")));
- (MPLLoginPemisosModel *)doCopyId:(MPLInt * _Nullable)id detalle:(NSString * _Nullable)detalle __attribute__((swift_name("doCopy(id:detalle:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable detalle __attribute__((swift_name("detalle")));
@property (readonly) MPLInt * _Nullable id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginPemisosModel.Companion")))
@interface MPLLoginPemisosModelCompanion : MPLBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPLLoginPemisosModelCompanion *shared __attribute__((swift_name("shared")));
- (id<MPLKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginRequestModel")))
@interface MPLLoginRequestModel : MPLBase
- (instancetype)initWithUsuario:(NSString *)usuario password:(NSString *)password __attribute__((swift_name("init(usuario:password:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPLLoginRequestModelCompanion *companion __attribute__((swift_name("companion")));
- (MPLLoginRequestModel *)doCopyUsuario:(NSString *)usuario password:(NSString *)password __attribute__((swift_name("doCopy(usuario:password:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *password __attribute__((swift_name("password")));
@property (readonly) NSString *usuario __attribute__((swift_name("usuario")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginRequestModel.Companion")))
@interface MPLLoginRequestModelCompanion : MPLBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPLLoginRequestModelCompanion *shared __attribute__((swift_name("shared")));
- (id<MPLKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginResponseModel")))
@interface MPLLoginResponseModel : MPLBase
- (instancetype)initWithUsuario:(NSString * _Nullable)usuario nombre:(NSString * _Nullable)nombre rol:(NSString * _Nullable)rol area:(NSString * _Nullable)area constructora:(NSString * _Nullable)constructora token:(NSString * _Nullable)token pemisos:(MPLKotlinArray<MPLLoginPemisosModel *> * _Nullable)pemisos __attribute__((swift_name("init(usuario:nombre:rol:area:constructora:token:pemisos:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPLLoginResponseModelCompanion *companion __attribute__((swift_name("companion")));
- (MPLLoginResponseModel *)doCopyUsuario:(NSString * _Nullable)usuario nombre:(NSString * _Nullable)nombre rol:(NSString * _Nullable)rol area:(NSString * _Nullable)area constructora:(NSString * _Nullable)constructora token:(NSString * _Nullable)token pemisos:(MPLKotlinArray<MPLLoginPemisosModel *> * _Nullable)pemisos __attribute__((swift_name("doCopy(usuario:nombre:rol:area:constructora:token:pemisos:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable area __attribute__((swift_name("area")));
@property (readonly) NSString * _Nullable constructora __attribute__((swift_name("constructora")));
@property (readonly) NSString * _Nullable nombre __attribute__((swift_name("nombre")));
@property (readonly) MPLKotlinArray<MPLLoginPemisosModel *> * _Nullable pemisos __attribute__((swift_name("pemisos")));
@property (readonly) NSString * _Nullable rol __attribute__((swift_name("rol")));
@property (readonly) NSString * _Nullable token __attribute__((swift_name("token")));
@property (readonly) NSString * _Nullable usuario __attribute__((swift_name("usuario")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginResponseModel.Companion")))
@interface MPLLoginResponseModelCompanion : MPLBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPLLoginResponseModelCompanion *shared __attribute__((swift_name("shared")));
- (id<MPLKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginViewModel")))
@interface MPLLoginViewModel : MPLViewModel
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)onLoginPressed __attribute__((swift_name("onLoginPressed()")));
@property (readonly) MPLCFlow<id<MPLLoginViewModelAction>> *actions __attribute__((swift_name("actions")));
@property (readonly) MPLCMutableStateFlow<NSString *> *email __attribute__((swift_name("email")));
@property (readonly) MPLCStateFlow<MPLBoolean *> *isButtonEnabled __attribute__((swift_name("isButtonEnabled")));
@property (readonly) MPLCStateFlow<MPLBoolean *> *isLoading __attribute__((swift_name("isLoading")));
@property (readonly) MPLCMutableStateFlow<NSString *> *password __attribute__((swift_name("password")));
@end

__attribute__((swift_name("LoginViewModelAction")))
@protocol MPLLoginViewModelAction
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginViewModelActionLoginError")))
@interface MPLLoginViewModelActionLoginError : MPLBase <MPLLoginViewModelAction>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)loginError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPLLoginViewModelActionLoginError *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginViewModelActionLoginSuccess")))
@interface MPLLoginViewModelActionLoginSuccess : MPLBase <MPLLoginViewModelAction>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)loginSuccess __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPLLoginViewModelActionLoginSuccess *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Api")))
@interface MPLApi : MPLBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString *login __attribute__((swift_name("login")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkQuery")))
@interface MPLNetworkQuery : MPLBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)ktorGestUrl:(NSString *)url successful:(void (^)(NSString *))successful error:(void (^)(NSString *))error completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("ktorGest(url:successful:error:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)ktorPostUrl:(NSString *)url body:(NSString *)body successful:(void (^)(NSString *))successful error:(void (^)(NSString *))error completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("ktorPost(url:body:successful:error:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DisposableHandleKt")))
@interface MPLDisposableHandleKt : MPLBase
+ (id<MPLDisposableHandle>)DisposableHandleBlock:(void (^)(void))block __attribute__((swift_name("DisposableHandle(block:)")));
+ (id<MPLDisposableHandle>)plus:(id<MPLDisposableHandle>)receiver other:(id<MPLDisposableHandle>)other __attribute__((swift_name("plus(_:other:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CFlowKt")))
@interface MPLCFlowKt : MPLBase
+ (MPLCFlow<id> *)cFlow:(id<MPLKotlinx_coroutines_coreFlow>)receiver __attribute__((swift_name("cFlow(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CMutableStateFlowKt")))
@interface MPLCMutableStateFlowKt : MPLBase
+ (MPLCMutableStateFlow<id> *)cMutableStateFlow:(id<MPLKotlinx_coroutines_coreMutableStateFlow>)receiver __attribute__((swift_name("cMutableStateFlow(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CStateFlowKt")))
@interface MPLCStateFlowKt : MPLBase
+ (MPLCStateFlow<id> *)cStateFlow:(id<MPLKotlinx_coroutines_coreStateFlow>)receiver __attribute__((swift_name("cStateFlow(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BindingBaseKt")))
@interface MPLBindingBaseKt : MPLBase
+ (id<MPLDisposableHandle>)bind:(id)receiver flow:(MPLCStateFlow<id> *)flow setter:(void (^)(id, id _Nullable))setter __attribute__((swift_name("bind(_:flow:setter:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UIViewBindingsKt")))
@interface MPLUIViewBindingsKt : MPLBase
+ (id<MPLDisposableHandle>)bindBackgroundColor:(UIView *)receiver flow:(MPLCStateFlow<MPLBoolean *> *)flow trueColor:(UIColor *)trueColor falseColor:(UIColor *)falseColor __attribute__((swift_name("bindBackgroundColor(_:flow:trueColor:falseColor:)")));
+ (id<MPLDisposableHandle>)bindFocus:(UIView *)receiver flow:(MPLCStateFlow<MPLBoolean *> *)flow __attribute__((swift_name("bindFocus(_:flow:)")));
+ (id<MPLDisposableHandle>)bindHidden:(UIView *)receiver flow:(MPLCStateFlow<MPLBoolean *> *)flow __attribute__((swift_name("bindHidden(_:flow:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UIControlBindingsKt")))
@interface MPLUIControlBindingsKt : MPLBase
+ (id<MPLDisposableHandle>)bindEnabled:(UIControl *)receiver flow:(MPLCStateFlow<MPLBoolean *> *)flow __attribute__((swift_name("bindEnabled(_:flow:)")));
+ (id<MPLDisposableHandle>)bindFocusTwoWay:(UIControl *)receiver flow:(MPLCMutableStateFlow<MPLBoolean *> *)flow __attribute__((swift_name("bindFocusTwoWay(_:flow:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UITextViewBindingsKt")))
@interface MPLUITextViewBindingsKt : MPLBase
+ (id<MPLDisposableHandle>)bindFocusTwoWay:(UITextView *)receiver flow:(MPLCMutableStateFlow<MPLBoolean *> *)flow __attribute__((swift_name("bindFocusTwoWay(_:flow:)")));
+ (id<MPLDisposableHandle>)bindText:(UITextView *)receiver flow:(MPLCStateFlow<NSString *> *)flow __attribute__((swift_name("bindText(_:flow:)")));
+ (id<MPLDisposableHandle>)bindTextTwoWay:(UITextView *)receiver flow:(MPLCMutableStateFlow<NSString *> *)flow __attribute__((swift_name("bindTextTwoWay(_:flow:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UIButtonBindingsKt")))
@interface MPLUIButtonBindingsKt : MPLBase
+ (id<MPLDisposableHandle>)bindImage:(UIButton *)receiver flow:(MPLCStateFlow<MPLBoolean *> *)flow trueImage:(UIImage *)trueImage falseImage:(UIImage *)falseImage __attribute__((swift_name("bindImage(_:flow:trueImage:falseImage:)")));
+ (id<MPLDisposableHandle>)bindTitle:(UIButton *)receiver flow:(MPLCStateFlow<NSString *> *)flow __attribute__((swift_name("bindTitle(_:flow:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UISwitchBindingsKt")))
@interface MPLUISwitchBindingsKt : MPLBase
+ (id<MPLDisposableHandle>)bindSwitchOn:(UISwitch *)receiver flow:(MPLCStateFlow<MPLBoolean *> *)flow __attribute__((swift_name("bindSwitchOn(_:flow:)")));
+ (id<MPLDisposableHandle>)bindSwitchOnTwoWay:(UISwitch *)receiver flow:(MPLCMutableStateFlow<MPLBoolean *> *)flow __attribute__((swift_name("bindSwitchOnTwoWay(_:flow:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UILabelBindingsKt")))
@interface MPLUILabelBindingsKt : MPLBase
+ (id<MPLDisposableHandle>)bindText:(UILabel *)receiver flow:(MPLCStateFlow<NSString *> *)flow __attribute__((swift_name("bindText(_:flow:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UITextFieldBindingsKt")))
@interface MPLUITextFieldBindingsKt : MPLBase
+ (id<MPLDisposableHandle>)bindText:(UITextField *)receiver flow:(MPLCStateFlow<NSString *> *)flow __attribute__((swift_name("bindText(_:flow:)")));
+ (id<MPLDisposableHandle>)bindTextTwoWay:(UITextField *)receiver flow:(MPLCMutableStateFlow<NSString *> *)flow __attribute__((swift_name("bindTextTwoWay(_:flow:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UIControlExtKt")))
@interface MPLUIControlExtKt : MPLBase
+ (id<MPLDisposableHandle>)setEventHandler:(UIControl *)receiver event:(uint64_t)event lambda:(void (^)(UIControl *))lambda __attribute__((swift_name("setEventHandler(_:event:lambda:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NSNotificationCenterExtKt")))
@interface MPLNSNotificationCenterExtKt : MPLBase
+ (id<MPLDisposableHandle>)setEventHandler:(NSNotificationCenter *)receiver notification:(NSString * _Nullable)notification ref:(id)ref lambda:(void (^)(id))lambda __attribute__((swift_name("setEventHandler(_:notification:ref:lambda:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformKt")))
@interface MPLPlatformKt : MPLBase
+ (id<MPLPlatform>)getPlatform __attribute__((swift_name("getPlatform()")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface MPLKotlinThrowable : MPLBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MPLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MPLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (MPLKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MPLKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface MPLKotlinException : MPLKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MPLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MPLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface MPLKotlinRuntimeException : MPLKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MPLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MPLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface MPLKotlinIllegalStateException : MPLKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MPLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MPLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface MPLKotlinCancellationException : MPLKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MPLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MPLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol MPLKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<MPLKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol MPLKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<MPLKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<MPLKotlinCoroutineContextElement> _Nullable)getKey:(id<MPLKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<MPLKotlinCoroutineContext>)minusKeyKey:(id<MPLKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<MPLKotlinCoroutineContext>)plusContext:(id<MPLKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol MPLKotlinCoroutineContextElement <MPLKotlinCoroutineContext>
@required
@property (readonly) id<MPLKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface MPLKotlinAbstractCoroutineContextElement : MPLBase <MPLKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<MPLKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<MPLKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol MPLKotlinContinuationInterceptor <MPLKotlinCoroutineContextElement>
@required
- (id<MPLKotlinContinuation>)interceptContinuationContinuation:(id<MPLKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<MPLKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface MPLKotlinx_coroutines_coreCoroutineDispatcher : MPLKotlinAbstractCoroutineContextElement <MPLKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<MPLKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MPLKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<MPLKotlinCoroutineContext>)context block:(id<MPLKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<MPLKotlinCoroutineContext>)context block:(id<MPLKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<MPLKotlinContinuation>)interceptContinuationContinuation:(id<MPLKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<MPLKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (MPLKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (MPLKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(MPLKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<MPLKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol MPLKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<MPLKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MPLKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol MPLKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<MPLKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<MPLKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol MPLKotlinx_serialization_coreKSerializer <MPLKotlinx_serialization_coreSerializationStrategy, MPLKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface MPLKotlinArray<T> : MPLBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(MPLInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<MPLKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol MPLKotlinCoroutineContextKey
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol MPLKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<MPLKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface MPLKotlinAbstractCoroutineContextKey<B, E> : MPLBase <MPLKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<MPLKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<MPLKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface MPLKotlinx_coroutines_coreCoroutineDispatcherKey : MPLKotlinAbstractCoroutineContextKey<id<MPLKotlinContinuationInterceptor>, MPLKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<MPLKotlinCoroutineContextKey>)baseKey safeCast:(id<MPLKotlinCoroutineContextElement> _Nullable (^)(id<MPLKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPLKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol MPLKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol MPLKotlinx_serialization_coreEncoder
@required
- (id<MPLKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<MPLKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<MPLKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<MPLKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<MPLKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<MPLKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<MPLKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
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
- (void)encodeNullableSerializableValueSerializer:(id<MPLKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<MPLKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) MPLKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol MPLKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<MPLKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MPLKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

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
@property (readonly) NSArray<id<MPLKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

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
@property (readonly) MPLKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol MPLKotlinx_serialization_coreDecoder
@required
- (id<MPLKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<MPLKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<MPLKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<MPLKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<MPLKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
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
- (MPLKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<MPLKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<MPLKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) MPLKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol MPLKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol MPLKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<MPLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<MPLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<MPLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<MPLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<MPLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<MPLKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<MPLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<MPLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<MPLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<MPLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MPLKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<MPLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MPLKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<MPLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<MPLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<MPLKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<MPLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) MPLKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface MPLKotlinx_serialization_coreSerializersModule : MPLBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<MPLKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MPLKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<MPLKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<MPLKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MPLKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<MPLKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MPLKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<MPLKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol MPLKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface MPLKotlinx_serialization_coreSerialKind : MPLBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol MPLKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<MPLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<MPLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<MPLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<MPLKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<MPLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<MPLKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<MPLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<MPLKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<MPLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<MPLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<MPLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<MPLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MPLKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<MPLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MPLKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<MPLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<MPLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<MPLKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) MPLKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface MPLKotlinNothing : MPLBase
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol MPLKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<MPLKotlinKClass>)kClass provider:(id<MPLKotlinx_serialization_coreKSerializer> (^)(NSArray<id<MPLKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<MPLKotlinKClass>)kClass serializer:(id<MPLKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<MPLKotlinKClass>)baseClass actualClass:(id<MPLKotlinKClass>)actualClass actualSerializer:(id<MPLKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<MPLKotlinKClass>)baseClass defaultDeserializerProvider:(id<MPLKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<MPLKotlinKClass>)baseClass defaultDeserializerProvider:(id<MPLKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<MPLKotlinKClass>)baseClass defaultSerializerProvider:(id<MPLKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol MPLKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol MPLKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol MPLKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol MPLKotlinKClass <MPLKotlinKDeclarationContainer, MPLKotlinKAnnotatedElement, MPLKotlinKClassifier>
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

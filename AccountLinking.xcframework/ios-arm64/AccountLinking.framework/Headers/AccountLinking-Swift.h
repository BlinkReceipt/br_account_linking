#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 6.1 effective-5.10 (swiftlang-6.1.0.110.21 clang-1700.0.13.3)
#ifndef ACCOUNTLINKING_SWIFT_H
#define ACCOUNTLINKING_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wnon-modular-include-in-framework-module"
#if defined(__arm64e__) && __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-macro-identifier"
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
# ifndef __ptrauth_swift_class_method_pointer
#  define __ptrauth_swift_class_method_pointer(x)
# endif
#pragma clang diagnostic pop
#endif
#pragma clang diagnostic pop
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef unsigned char char8_t;
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...) 
# endif
#endif
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA 
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA 
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA 
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif
#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif
#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER 
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility) 
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if !defined(SWIFT_C_INLINE_THUNK)
# if __has_attribute(always_inline)
# if __has_attribute(nodebug)
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline)) __attribute__((nodebug))
# else
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline))
# endif
# else
#  define SWIFT_C_INLINE_THUNK inline
# endif
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"
#pragma clang diagnostic ignored "-Wunsafe-buffer-usage"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="AccountLinking",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)

enum Retailer : NSInteger;
@class NSString;
SWIFT_CLASS("_TtC14AccountLinking7Account")
@interface Account : NSObject
@property (nonatomic) enum Retailer retailer;
@property (nonatomic, copy) NSString * _Nonnull username;
@property (nonatomic, copy) NSString * _Nonnull password;
@property (nonatomic, copy) NSString * _Nonnull countryCode;
@property (nonatomic) BOOL returnLatestOrdersOnly;
@property (nonatomic) BOOL webviewAuthEnabled;
- (nonnull instancetype)initWithRetailer:(enum Retailer)retailer username:(NSString * _Nonnull)username password:(NSString * _Nonnull)password countryCode:(NSString * _Nonnull)countryCode OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class NSData;
@class UIViewController;
@class NSError;
SWIFT_CLASS("_TtC14AccountLinking21AccountLinkingManager")
@interface AccountLinkingManager : NSObject
@property (nonatomic, copy) NSString * _Nullable identifier;
@property (nonatomic, copy) NSString * _Nullable identifier1;
@property (nonatomic, copy) NSString * _Nonnull identifier2;
@property (nonatomic, copy) NSString * _Nonnull identifier3;
@property (nonatomic, copy) NSString * _Nonnull identifier4;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) AccountLinkingManager * _Nonnull shared;)
+ (AccountLinkingManager * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, copy) void (^ _Nullable analytics)(id _Nonnull);
@property (nonatomic, copy) void (^ _Nullable logMessage)(NSString * _Nonnull);
@property (nonatomic, copy) void (^ _Nullable logs)(id _Nonnull);
@property (nonatomic, copy) void (^ _Nullable displayDebugView)(id _Nullable);
@property (nonatomic, readonly, copy) NSString * _Nonnull version;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
/// Reset the stored history of orders for provided retailer
/// \param retailer A retailer for which to remove the cached orders
///
- (void)resetOrdersHistoryForRetailer:(enum Retailer)retailer;
/// Reset the stored history of orders for provided retailer
/// \param guid An account id for which to remove the cached orders
///
- (void)resetOrdersHistoryForAccount:(NSString * _Nonnull)guid;
/// Clears any user’s related data for a retailer
/// \param retailer A retailer for which to remove the user’s data
///
- (void)removeUserDataForRetailer:(enum Retailer)retailer completion:(void (^ _Nonnull)(void))completion;
/// Update retailer’s config file
/// \param data Configuration data object
///
- (void)updateConfiguration:(NSData * _Nullable)data;
- (void)cancelSessionWithIdentifier:(NSString * _Nonnull)identifier;
/// It validates stored credentials for retailer
/// <ul>
///   <li>
///     return:
///     An error if not able to authenticate with provided credentials
///   </li>
/// </ul>
/// \param account A user <code>Account</code> object
///
/// \param completion A callback to get results or provide additional user input if required
///
- (NSString * _Nonnull)verifyAccount:(Account * _Nonnull)account metadata:(void (^ _Nonnull)(NSDictionary<NSString *, id> * _Nullable))metadata completion:(void (^ _Nonnull)(NSString * _Nonnull, UIViewController * _Nullable, NSError * _Nullable))completion SWIFT_WARN_UNUSED_RESULT;
/// It fetches new orders for the specific time range for a retailer
/// <ul>
///   <li>
///     return:
///     A list with orders if available, otherwise empty.
///   </li>
/// </ul>
/// \param account A user <code>Account</code> object
///
/// \param dayCutoff Epox timestamp in seconds in the past from currnet day.
///
/// \param completion A callback to get results or provide additional user input if required
///
- (NSString * _Nonnull)grabNewOrders:(Account * _Nonnull)account dayCutoff:(double)dayCutoff metadata:(void (^ _Nonnull)(NSDictionary<NSString *, id> * _Nullable))metadata completion:(void (^ _Nonnull)(NSArray<NSDictionary *> * _Nonnull, NSInteger, NSString * _Nonnull, UIViewController * _Nullable, NSError * _Nullable))completion SWIFT_WARN_UNUSED_RESULT;
@end

@class NSCoder;
@class NSBundle;
SWIFT_CLASS("_TtC14AccountLinking27AuthorizationViewController")
@interface AuthorizationViewController : UIViewController
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder SWIFT_UNAVAILABLE;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
- (void)viewDidDisappear:(BOOL)animated;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end

typedef SWIFT_ENUM(NSInteger, Retailer, open) {
  RetailerTarget = 1,
  RetailerCostco = 2,
  RetailerCvs = 3,
  RetailerDollarGeneral = 4,
  RetailerDollarTree = 5,
  RetailerKroger = 6,
  RetailerPublix = 7,
  RetailerSafeway = 8,
  RetailerSamsClub = 9,
  RetailerWalgreens = 10,
  RetailerWalmart = 11,
  RetailerStaples = 12,
  RetailerHomeDepot = 15,
  RetailerLowes = 16,
  RetailerAcmeMarkets = 17,
  RetailerMeijer = 19,
  RetailerAlbertsons = 20,
  RetailerShopRite = 22,
  RetailerJewelOsco = 23,
  RetailerFood4Less = 31,
  RetailerHarrisTeeter = 33,
  RetailerRalphs = 40,
  RetailerHeb = 44,
  RetailerBjsWholesale = 45,
  RetailerWegmans = 52,
  RetailerFredMeyer = 53,
  RetailerSprouts = 54,
  RetailerHyVee = 56,
  RetailerVons = 63,
  RetailerFoodLion = 142,
  RetailerRiteAid = 143,
  RetailerGiantEagle = 144,
  RetailerFamilyDollar = 165,
  RetailerSephora = 171,
  RetailerBestBuy = 177,
  RetailerCostcoCA = 5718,
  RetailerWalmartCA = 5849,
  RetailerMarshalls = 5917,
  RetailerTjMaxx = 5921,
  RetailerKohls = 5929,
  RetailerAsda = 6036,
  RetailerSainsburysUK = 6048,
  RetailerTesco = 6051,
  RetailerCarrefourES = 6059,
  RetailerBedBathAndBeyond = 6074,
  RetailerStaplesCA = 6127,
  RetailerDicksSportingGoods = 6162,
  RetailerGap = 6457,
  RetailerStarbucks = 6677,
  RetailerMacys = 6802,
  RetailerColes = 7610,
  RetailerDominosPizza = 8366,
  RetailerTacoBell = 8598,
  RetailerAmazonBeta = 8643,
  RetailerWoolworths = 8646,
  RetailerInstacart = 8652,
  RetailerUlta = 8662,
  RetailerNike = 8712,
  RetailerShipt = 9016,
  RetailerUberEats = 9137,
  RetailerThriveMarket = 9416,
  RetailerChewy = 9947,
  RetailerSeamless = 10068,
  RetailerAmazonUKBeta = 10078,
  RetailerGrubhub = 10208,
  RetailerDoordash = 10241,
  RetailerDrizly = 10934,
  RetailerAmazonCABeta = 12099,
  RetailerAmazonESBeta = 12686,
  RetailerAmazonDEBeta = 12687,
  RetailerAmazonFRBeta = 12688,
  RetailerSheinES = 12691,
  RetailerPcExpress = 12749,
  RetailerTemuUK = 12819,
  RetailerSheinUK = 12848,
  RetailerAliexpressUK = 12849,
  RetailerUberEatsUK = 12850,
  RetailerTemuUS = 12881,
  RetailerShein = 12882,
  RetailerAmazonAUBeta = 12948,
  RetailerAliexpressUS = 13246,
  RetailerPostmates = 19671,
};

#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#if defined(__cplusplus)
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif

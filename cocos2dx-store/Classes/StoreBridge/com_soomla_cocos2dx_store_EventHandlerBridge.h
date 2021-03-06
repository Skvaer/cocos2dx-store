/*
 * Copyright (C) 2012 Soomla Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_soomla_cocos2dx_store_EventHandlerBridge */

#ifndef _Included_com_soomla_cocos2dx_store_EventHandlerBridge
#define _Included_com_soomla_cocos2dx_store_EventHandlerBridge
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_soomla_cocos2dx_store_EventHandlerBridge
 * Method:    marketPurchase
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_soomla_cocos2dx_store_EventHandlerBridge_marketPurchase
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_soomla_cocos2dx_store_EventHandlerBridge
 * Method:    marketRefund
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_soomla_cocos2dx_store_EventHandlerBridge_marketRefund
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_soomla_cocos2dx_store_EventHandlerBridge
 * Method:    virtualGoodPurchased
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_soomla_cocos2dx_store_EventHandlerBridge_virtualGoodPurchased
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_soomla_cocos2dx_store_EventHandlerBridge
 * Method:    virtualGoodEquipped
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_soomla_cocos2dx_store_EventHandlerBridge_virtualGoodEquipped
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_soomla_cocos2dx_store_EventHandlerBridge
 * Method:    virtualGoodUnequipped
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_soomla_cocos2dx_store_EventHandlerBridge_virtualGoodUnequipped
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_soomla_cocos2dx_store_EventHandlerBridge
 * Method:    billingSupported
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_soomla_cocos2dx_store_EventHandlerBridge_billingSupported
  (JNIEnv *, jobject);

/*
 * Class:     com_soomla_cocos2dx_store_EventHandlerBridge
 * Method:    billingNotSupported
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_soomla_cocos2dx_store_EventHandlerBridge_billingNotSupported
  (JNIEnv *, jobject);

/*
 * Class:     com_soomla_cocos2dx_store_EventHandlerBridge
 * Method:    marketPurchaseProcessStarted
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_soomla_cocos2dx_store_EventHandlerBridge_marketPurchaseProcessStarted
  (JNIEnv *, jobject, jstring);
 
/*
 * Class:     com_soomla_cocos2dx_store_EventHandlerBridge
 * Method:    marketPurchaseCancelled
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_soomla_cocos2dx_store_EventHandlerBridge_marketPurchaseCancelled
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_soomla_cocos2dx_store_EventHandlerBridge
 * Method:    goodsPurchaseProcessStarted
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_soomla_cocos2dx_store_EventHandlerBridge_goodsPurchaseProcessStarted
  (JNIEnv *, jobject);

/*
 * Class:     com_soomla_cocos2dx_store_EventHandlerBridge
 * Method:    closingStore
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_soomla_cocos2dx_store_EventHandlerBridge_closingStore
  (JNIEnv *, jobject);

/*
 * Class:     com_soomla_cocos2dx_store_EventHandlerBridge
 * Method:    unexpectedErrorInStore
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_soomla_cocos2dx_store_EventHandlerBridge_unexpectedErrorInStore
  (JNIEnv *, jobject);

/*
 * Class:     com_soomla_cocos2dx_store_EventHandlerBridge
 * Method:    openingStore
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_soomla_cocos2dx_store_EventHandlerBridge_openingStore
  (JNIEnv *, jobject);
 
/*
 * Class:     com_soomla_cocos2dx_store_EventHandlerBridge
 * Method:    currencyBalanceChanged
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_soomla_cocos2dx_store_EventHandlerBridge_currencyBalanceChanged
  (JNIEnv *, jobject, jstring itemId, jint balance);
 
/*
 * Class:     com_soomla_cocos2dx_store_EventHandlerBridge
 * Method:    goodBalanceChanged
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_soomla_cocos2dx_store_EventHandlerBridge_goodBalanceChanged
  (JNIEnv *, jobject, jstring itemId, jint balance);

#ifdef __cplusplus
}
#endif
#endif

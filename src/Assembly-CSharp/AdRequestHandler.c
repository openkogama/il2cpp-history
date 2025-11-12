
/* Void GetGoldAdAvailable(Action`1[Boolean]) */

void Assembly-CSharp.dll::AdRequestHandler::AdRequestHandler_GetGoldAdAvailable
               (Action_1_Boolean_ *OnAdAvailable,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<bool,_System::String>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AdRequestHandler__GoldAdAvailable_bool__System__String_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AdRequestHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BrowserComm__ToJavaScript);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_requestGoldVideoAd);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__AdRequestHandler->static_fields->OnGoldAdAvailableCallback = OnAdAvailable;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&TypeInfo__AdRequestHandler->static_fields->OnGoldAdAvailableCallback
                   >> 0xc);
    puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar3 = *puVar2;
      LOCK();
      uVar4 = *puVar2;
      if (uVar3 == uVar4) {
        *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (uVar3 != uVar4);
  }
  pOVar5 = (Object__Class *)FUN_?(TypeInfo__System__Action<bool,_System::String>);
  FUN_?(pOVar5,0,MethodInfo__AdRequestHandler__GoldAdAvailable_bool__System__String_);
  if (*(int *)&(TypeInfo__BrowserComm__ToJavaScript->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar6 = StringLiteral_requestGoldVideoAd;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BrowserComm,pOVar5,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BrowserComm__Callback);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_BrowserComm::Callback>__Add_int__BrowserComm__Callback_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BrowserComm__ToJavaScript);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Would_have_sent_function__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_callbackId);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___to_JSBridge_with_callback__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
    FUN_?();
  }
  str0 = StringLiteral_Would_have_sent_function__;
  pSVar7 = StringLiteral___to_JSBridge_with_callback__;
  if (TypeInfo__BrowserComm->static_fields->enableExternalCall != 0) {
    if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
      FUN_?();
    }
    this = TypeInfo__BrowserComm->static_fields->callbacks;
    if (*(int *)&(TypeInfo__BrowserComm__ToJavaScript->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__BrowserComm__ToJavaScript);
    }
    key = TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter;
    pOVar8 = (Object *)FUN_?(TypeInfo__BrowserComm__Callback);
    bVar9 = iRam_? != 0;
    pOVar8[1].klass = pOVar5;
    if (bVar9) {
      uVar1 = (uint)((ulonglong)(pOVar8 + 1) >> 0xc);
      in_R9 = (ulonglong)(uVar1 & 0x3f);
      puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar3 = *puVar2;
        LOCK();
        uVar4 = *puVar2;
        if (uVar3 == uVar4) {
          *puVar2 = uVar3 | 1L << in_R9;
        }
        UNLOCK();
      } while (uVar3 != uVar4);
    }
    if (this != (Dictionary_2_System_Int32_BrowserComm_Callback_ *)0x0) {
      uVar10 = CONCAT71((int7)(in_R9 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryInsert
                ((Dictionary_2_System_Int32_System_Object_ *)this,key,pOVar8,
                 (InsertionBehavior__Enum)uVar10,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_BrowserComm::Callback>__Add_int__BrowserComm__Callback_
                 ->klass->rgctx_data[0x22].method);
      this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)FUN_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      aiStackX_20[0] = TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter;
      pOVar8 = (Object *)FUN_?(uRam_?,aiStackX_20);
      if (this_00 !=
          (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
           *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)this_00,
                   (Object *)StringLiteral_callbackId,pOVar8,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar10 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
          FUN_?();
        }
        pSVar7 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_SerializeObject
                           ((Object *)this_00,(MethodInfo *)0x0);
        pSVar6 = BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ToNameSpace
                           (pSVar6,(MethodInfo *)0x0);
        args = (Object__Array *)FUN_?(TypeInfo__System__Object,1);
        if (args != (Object__Array *)0x0) {
          if ((pSVar7 != (String *)0x0) &&
             (lVar11 = FUN_?(pSVar7,(args->klass->_0).element_class), lVar11 == 0)) {
            uVar10 = FUN_?();
            FUN_?(uVar10,0);
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          FUN_?(args,0);
          pSVar6 = JSBridge::JSBridge_BuildInvocationForArguments(pSVar6,args,(MethodInfo *)0x0);
          JSBridge::JSBridge_DoKGMEval(pSVar6,(MethodInfo *)0x0);
          TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter =
               TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter + 1;
          return;
        }
      }
    }
    FUN_?();
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if (pOVar5 == (Object__Class *)0x0) {
    str3 = (String *)0x0;
  }
  else {
    pIVar13 = (pOVar5->_0).image;
    str3 = (String *)(*(code *)pIVar13[5].name)(pOVar5,pIVar13[5].nameNoExt);
  }
  pSVar6 = mscorlib.dll::System::String::String_Concat_6(str0,pSVar6,pSVar7,str3,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar6,(MethodInfo *)0x0);
  return;
}


/* Void GetHealthAdAvailable(Action`1[Boolean]) */

void Assembly-CSharp.dll::AdRequestHandler::AdRequestHandler_GetHealthAdAvailable
               (Action_1_Boolean_ *OnAdAvailable,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<bool,_System::String>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AdRequestHandler__HealthAdAvailable_bool__System__String_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AdRequestHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BrowserComm__ToJavaScript);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_requestVideoAd);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__AdRequestHandler->static_fields->OnHealthAdAvailableCallback = OnAdAvailable;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)TypeInfo__AdRequestHandler->static_fields >> 0xc);
    puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar3 = *puVar2;
      LOCK();
      uVar4 = *puVar2;
      if (uVar3 == uVar4) {
        *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (uVar3 != uVar4);
  }
  pOVar5 = (Object__Class *)FUN_?(TypeInfo__System__Action<bool,_System::String>);
  FUN_?(pOVar5,0,MethodInfo__AdRequestHandler__HealthAdAvailable_bool__System__String_);
  if (*(int *)&(TypeInfo__BrowserComm__ToJavaScript->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar6 = StringLiteral_requestVideoAd;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BrowserComm,pOVar5,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BrowserComm__Callback);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_BrowserComm::Callback>__Add_int__BrowserComm__Callback_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BrowserComm__ToJavaScript);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Would_have_sent_function__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_callbackId);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___to_JSBridge_with_callback__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
    FUN_?();
  }
  str0 = StringLiteral_Would_have_sent_function__;
  pSVar7 = StringLiteral___to_JSBridge_with_callback__;
  if (TypeInfo__BrowserComm->static_fields->enableExternalCall != 0) {
    if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
      FUN_?();
    }
    this = TypeInfo__BrowserComm->static_fields->callbacks;
    if (*(int *)&(TypeInfo__BrowserComm__ToJavaScript->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__BrowserComm__ToJavaScript);
    }
    key = TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter;
    pOVar8 = (Object *)FUN_?(TypeInfo__BrowserComm__Callback);
    bVar9 = iRam_? != 0;
    pOVar8[1].klass = pOVar5;
    if (bVar9) {
      uVar1 = (uint)((ulonglong)(pOVar8 + 1) >> 0xc);
      in_R9 = (ulonglong)(uVar1 & 0x3f);
      puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar3 = *puVar2;
        LOCK();
        uVar4 = *puVar2;
        if (uVar3 == uVar4) {
          *puVar2 = uVar3 | 1L << in_R9;
        }
        UNLOCK();
      } while (uVar3 != uVar4);
    }
    if (this != (Dictionary_2_System_Int32_BrowserComm_Callback_ *)0x0) {
      uVar10 = CONCAT71((int7)(in_R9 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryInsert
                ((Dictionary_2_System_Int32_System_Object_ *)this,key,pOVar8,
                 (InsertionBehavior__Enum)uVar10,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_BrowserComm::Callback>__Add_int__BrowserComm__Callback_
                 ->klass->rgctx_data[0x22].method);
      this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)FUN_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      aiStackX_20[0] = TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter;
      pOVar8 = (Object *)FUN_?(uRam_?,aiStackX_20);
      if (this_00 !=
          (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
           *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)this_00,
                   (Object *)StringLiteral_callbackId,pOVar8,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar10 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
          FUN_?();
        }
        pSVar7 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_SerializeObject
                           ((Object *)this_00,(MethodInfo *)0x0);
        pSVar6 = BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ToNameSpace
                           (pSVar6,(MethodInfo *)0x0);
        args = (Object__Array *)FUN_?(TypeInfo__System__Object,1);
        if (args != (Object__Array *)0x0) {
          if ((pSVar7 != (String *)0x0) &&
             (lVar11 = FUN_?(pSVar7,(args->klass->_0).element_class), lVar11 == 0)) {
            uVar10 = FUN_?();
            FUN_?(uVar10,0);
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          FUN_?(args,0);
          pSVar6 = JSBridge::JSBridge_BuildInvocationForArguments(pSVar6,args,(MethodInfo *)0x0);
          JSBridge::JSBridge_DoKGMEval(pSVar6,(MethodInfo *)0x0);
          TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter =
               TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter + 1;
          return;
        }
      }
    }
    FUN_?();
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if (pOVar5 == (Object__Class *)0x0) {
    str3 = (String *)0x0;
  }
  else {
    pIVar13 = (pOVar5->_0).image;
    str3 = (String *)(*(code *)pIVar13[5].name)(pOVar5,pIVar13[5].nameNoExt);
  }
  pSVar6 = mscorlib.dll::System::String::String_Concat_6(str0,pSVar6,pSVar7,str3,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar6,(MethodInfo *)0x0);
  return;
}


/* Void GoldAdAvailable(Boolean, String) */

void Assembly-CSharp.dll::AdRequestHandler::AdRequestHandler_GoldAdAvailable
               (bool success,String *availableJsonString,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AdRequestHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  AdRequestHandler__Available_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<AdRequestHandler::Available>_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Ad_not_available);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (success == 0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_Ad_not_available,(MethodInfo *)0x0);
  }
  else {
    if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar1 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                       (availableJsonString,
                        AdRequestHandler__Available_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<AdRequestHandler::Available>_System__String_
                       );
    if (TypeInfo__AdRequestHandler->static_fields->OnGoldAdAvailableCallback !=
        (Action_1_Boolean_ *)0x0) {
      pAVar2 = TypeInfo__AdRequestHandler->static_fields->OnGoldAdAvailableCallback;
      if (pOVar1 == (Object *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (*(pAVar2->fields)._._.invoke_impl)
                ((pAVar2->fields)._._.method_code,*(undefined1 *)&pOVar1[1].klass,
                 (pAVar2->fields)._._.method);
      TypeInfo__AdRequestHandler->static_fields->OnGoldAdAvailableCallback =
           (Action_1_Boolean_ *)0x0;
      if (iRam_? != 0) {
        uVar4 = (uint)((ulonglong)
                       &TypeInfo__AdRequestHandler->static_fields->OnGoldAdAvailableCallback >> 0xc)
        ;
        puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar6 = *puVar5;
          LOCK();
          uVar7 = *puVar5;
          if (uVar6 == uVar7) {
            *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (uVar6 != uVar7);
        return;
      }
    }
  }
  return;
}


/* Void HealthAdAvailable(Boolean, String) */

void Assembly-CSharp.dll::AdRequestHandler::AdRequestHandler_HealthAdAvailable
               (bool success,String *availableJsonString,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AdRequestHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  AdRequestHandler__Available_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<AdRequestHandler::Available>_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Ad_not_available);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (success == 0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_Ad_not_available,(MethodInfo *)0x0);
  }
  else {
    if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar1 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                       (availableJsonString,
                        AdRequestHandler__Available_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<AdRequestHandler::Available>_System__String_
                       );
    if ((pOVar1 == (Object *)0x0) ||
       (pAVar2 = TypeInfo__AdRequestHandler->static_fields->OnHealthAdAvailableCallback,
       pAVar2 == (Action_1_Boolean_ *)0x0)) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (*(pAVar2->fields)._._.invoke_impl)
              ((pAVar2->fields)._._.method_code,*(undefined1 *)&pOVar1[1].klass,
               (pAVar2->fields)._._.method);
    TypeInfo__AdRequestHandler->static_fields->OnHealthAdAvailableCallback =
         (Action_1_Boolean_ *)0x0;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)TypeInfo__AdRequestHandler->static_fields >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
      return;
    }
  }
  return;
}


/* Void ShowGoldVideoAd(Action`1[Boolean]) */

void Assembly-CSharp.dll::AdRequestHandler::AdRequestHandler_ShowGoldVideoAd
               (Action_1_Boolean_ *OnAdShown,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<bool,_System::String>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AdRequestHandler__ShowGoldVideoAdCallback_bool__System__String_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AdRequestHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BrowserComm__ToJavaScript);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_showGoldVideoAd);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__AdRequestHandler->static_fields->OnGoldAdShownCallback = OnAdShown;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&TypeInfo__AdRequestHandler->static_fields->OnGoldAdShownCallback >>
                   0xc);
    puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar3 = *puVar2;
      LOCK();
      uVar4 = *puVar2;
      if (uVar3 == uVar4) {
        *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (uVar3 != uVar4);
  }
  pOVar5 = (Object__Class *)FUN_?(TypeInfo__System__Action<bool,_System::String>);
  FUN_?(pOVar5,0,MethodInfo__AdRequestHandler__ShowGoldVideoAdCallback_bool__System__String_
               );
  if (*(int *)&(TypeInfo__BrowserComm__ToJavaScript->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar6 = StringLiteral_showGoldVideoAd;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BrowserComm,pOVar5,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BrowserComm__Callback);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_BrowserComm::Callback>__Add_int__BrowserComm__Callback_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BrowserComm__ToJavaScript);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Would_have_sent_function__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_callbackId);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___to_JSBridge_with_callback__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
    FUN_?();
  }
  str0 = StringLiteral_Would_have_sent_function__;
  pSVar7 = StringLiteral___to_JSBridge_with_callback__;
  if (TypeInfo__BrowserComm->static_fields->enableExternalCall != 0) {
    if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
      FUN_?();
    }
    this = TypeInfo__BrowserComm->static_fields->callbacks;
    if (*(int *)&(TypeInfo__BrowserComm__ToJavaScript->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__BrowserComm__ToJavaScript);
    }
    key = TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter;
    pOVar8 = (Object *)FUN_?(TypeInfo__BrowserComm__Callback);
    bVar9 = iRam_? != 0;
    pOVar8[1].klass = pOVar5;
    if (bVar9) {
      uVar1 = (uint)((ulonglong)(pOVar8 + 1) >> 0xc);
      in_R9 = (ulonglong)(uVar1 & 0x3f);
      puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar3 = *puVar2;
        LOCK();
        uVar4 = *puVar2;
        if (uVar3 == uVar4) {
          *puVar2 = uVar3 | 1L << in_R9;
        }
        UNLOCK();
      } while (uVar3 != uVar4);
    }
    if (this != (Dictionary_2_System_Int32_BrowserComm_Callback_ *)0x0) {
      uVar10 = CONCAT71((int7)(in_R9 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryInsert
                ((Dictionary_2_System_Int32_System_Object_ *)this,key,pOVar8,
                 (InsertionBehavior__Enum)uVar10,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_BrowserComm::Callback>__Add_int__BrowserComm__Callback_
                 ->klass->rgctx_data[0x22].method);
      this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)FUN_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      aiStackX_20[0] = TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter;
      pOVar8 = (Object *)FUN_?(uRam_?,aiStackX_20);
      if (this_00 !=
          (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
           *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)this_00,
                   (Object *)StringLiteral_callbackId,pOVar8,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar10 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
          FUN_?();
        }
        pSVar7 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_SerializeObject
                           ((Object *)this_00,(MethodInfo *)0x0);
        pSVar6 = BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ToNameSpace
                           (pSVar6,(MethodInfo *)0x0);
        args = (Object__Array *)FUN_?(TypeInfo__System__Object,1);
        if (args != (Object__Array *)0x0) {
          if ((pSVar7 != (String *)0x0) &&
             (lVar11 = FUN_?(pSVar7,(args->klass->_0).element_class), lVar11 == 0)) {
            uVar10 = FUN_?();
            FUN_?(uVar10,0);
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          FUN_?(args,0);
          pSVar6 = JSBridge::JSBridge_BuildInvocationForArguments(pSVar6,args,(MethodInfo *)0x0);
          JSBridge::JSBridge_DoKGMEval(pSVar6,(MethodInfo *)0x0);
          TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter =
               TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter + 1;
          return;
        }
      }
    }
    FUN_?();
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if (pOVar5 == (Object__Class *)0x0) {
    str3 = (String *)0x0;
  }
  else {
    pIVar13 = (pOVar5->_0).image;
    str3 = (String *)(*(code *)pIVar13[5].name)(pOVar5,pIVar13[5].nameNoExt);
  }
  pSVar6 = mscorlib.dll::System::String::String_Concat_6(str0,pSVar6,pSVar7,str3,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar6,(MethodInfo *)0x0);
  return;
}


/* Void ShowGoldVideoAdCallback(Boolean, String) */

void Assembly-CSharp.dll::AdRequestHandler::AdRequestHandler_ShowGoldVideoAdCallback
               (bool success,String *showVideoJsonString,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AdRequestHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  AdRequestHandler__ShouldReward_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<AdRequestHandler::ShouldReward>_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Ad_not_shown);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_User_did_not_finish_watching_ad);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (success == 0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_Ad_not_shown,(MethodInfo *)0x0);
  }
  else {
    if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar1 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                       (showVideoJsonString,
                        AdRequestHandler__ShouldReward_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<AdRequestHandler::ShouldReward>_System__String_
                       );
    if (pOVar1 == (Object *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(char *)&pOVar1[1].klass == '\0') {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar3 = StringLiteral_User_did_not_finish_watching_ad;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__ILogger);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pIVar4 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
      if (pIVar4 == (ILogger_1 *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar4,3,pSVar3);
      return;
    }
    if (TypeInfo__AdRequestHandler->static_fields->OnGoldAdShownCallback != (Action_1_Boolean_ *)0x0
       ) {
      pAVar5 = TypeInfo__AdRequestHandler->static_fields->OnGoldAdShownCallback;
      (*(pAVar5->fields)._._.invoke_impl)
                ((pAVar5->fields)._._.method_code,*(undefined1 *)&pOVar1[1].klass,
                 (pAVar5->fields)._._.method);
      TypeInfo__AdRequestHandler->static_fields->OnGoldAdShownCallback = (Action_1_Boolean_ *)0x0;
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&TypeInfo__AdRequestHandler->static_fields->OnGoldAdShownCallback
                      >> 0xc);
        puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar8 = *puVar7;
          LOCK();
          uVar9 = *puVar7;
          if (uVar8 == uVar9) {
            *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (uVar8 != uVar9);
      }
      return;
    }
  }
  return;
}


/* Void ShowHealthVideoAd(Action`1[Boolean]) */

void Assembly-CSharp.dll::AdRequestHandler::AdRequestHandler_ShowHealthVideoAd
               (Action_1_Boolean_ *OnAdShown,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<bool,_System::String>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AdRequestHandler__ShowHealthVideoAdCallback_bool__System__String_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AdRequestHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BrowserComm__ToJavaScript);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_showVideoAd);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__AdRequestHandler->static_fields->OnHealthAdShownCallback = OnAdShown;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&TypeInfo__AdRequestHandler->static_fields->OnHealthAdShownCallback
                   >> 0xc);
    puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar3 = *puVar2;
      LOCK();
      uVar4 = *puVar2;
      if (uVar3 == uVar4) {
        *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (uVar3 != uVar4);
  }
  pOVar5 = (Object__Class *)FUN_?(TypeInfo__System__Action<bool,_System::String>);
  FUN_?(pOVar5,0,
                MethodInfo__AdRequestHandler__ShowHealthVideoAdCallback_bool__System__String_);
  if (*(int *)&(TypeInfo__BrowserComm__ToJavaScript->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar6 = StringLiteral_showVideoAd;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BrowserComm,pOVar5,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BrowserComm__Callback);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_BrowserComm::Callback>__Add_int__BrowserComm__Callback_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BrowserComm__ToJavaScript);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Would_have_sent_function__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_callbackId);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___to_JSBridge_with_callback__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
    FUN_?();
  }
  str0 = StringLiteral_Would_have_sent_function__;
  pSVar7 = StringLiteral___to_JSBridge_with_callback__;
  if (TypeInfo__BrowserComm->static_fields->enableExternalCall != 0) {
    if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
      FUN_?();
    }
    this = TypeInfo__BrowserComm->static_fields->callbacks;
    if (*(int *)&(TypeInfo__BrowserComm__ToJavaScript->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__BrowserComm__ToJavaScript);
    }
    key = TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter;
    pOVar8 = (Object *)FUN_?(TypeInfo__BrowserComm__Callback);
    bVar9 = iRam_? != 0;
    pOVar8[1].klass = pOVar5;
    if (bVar9) {
      uVar1 = (uint)((ulonglong)(pOVar8 + 1) >> 0xc);
      in_R9 = (ulonglong)(uVar1 & 0x3f);
      puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar3 = *puVar2;
        LOCK();
        uVar4 = *puVar2;
        if (uVar3 == uVar4) {
          *puVar2 = uVar3 | 1L << in_R9;
        }
        UNLOCK();
      } while (uVar3 != uVar4);
    }
    if (this != (Dictionary_2_System_Int32_BrowserComm_Callback_ *)0x0) {
      uVar10 = CONCAT71((int7)(in_R9 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryInsert
                ((Dictionary_2_System_Int32_System_Object_ *)this,key,pOVar8,
                 (InsertionBehavior__Enum)uVar10,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_BrowserComm::Callback>__Add_int__BrowserComm__Callback_
                 ->klass->rgctx_data[0x22].method);
      this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)FUN_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      aiStackX_20[0] = TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter;
      pOVar8 = (Object *)FUN_?(uRam_?,aiStackX_20);
      if (this_00 !=
          (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
           *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)this_00,
                   (Object *)StringLiteral_callbackId,pOVar8,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar10 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
          FUN_?();
        }
        pSVar7 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_SerializeObject
                           ((Object *)this_00,(MethodInfo *)0x0);
        pSVar6 = BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ToNameSpace
                           (pSVar6,(MethodInfo *)0x0);
        args = (Object__Array *)FUN_?(TypeInfo__System__Object,1);
        if (args != (Object__Array *)0x0) {
          if ((pSVar7 != (String *)0x0) &&
             (lVar11 = FUN_?(pSVar7,(args->klass->_0).element_class), lVar11 == 0)) {
            uVar10 = FUN_?();
            FUN_?(uVar10,0);
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          FUN_?(args,0);
          pSVar6 = JSBridge::JSBridge_BuildInvocationForArguments(pSVar6,args,(MethodInfo *)0x0);
          JSBridge::JSBridge_DoKGMEval(pSVar6,(MethodInfo *)0x0);
          TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter =
               TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter + 1;
          return;
        }
      }
    }
    FUN_?();
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if (pOVar5 == (Object__Class *)0x0) {
    str3 = (String *)0x0;
  }
  else {
    pIVar13 = (pOVar5->_0).image;
    str3 = (String *)(*(code *)pIVar13[5].name)(pOVar5,pIVar13[5].nameNoExt);
  }
  pSVar6 = mscorlib.dll::System::String::String_Concat_6(str0,pSVar6,pSVar7,str3,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar6,(MethodInfo *)0x0);
  return;
}


/* Void ShowHealthVideoAdCallback(Boolean, String) */

void Assembly-CSharp.dll::AdRequestHandler::AdRequestHandler_ShowHealthVideoAdCallback
               (bool success,String *showVideoJsonString,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AdRequestHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  AdRequestHandler__ShouldReward_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<AdRequestHandler::ShouldReward>_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Ad_not_shown);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_User_did_not_finish_watching_ad);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (success == 0) {
    pSVar1 = StringLiteral_Ad_not_shown;
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
      pSVar1 = StringLiteral_Ad_not_shown;
    }
UnityEngine_CoreModule_dll_UnityEngine_Debug_Debug_2_Log:
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar2 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar2 == (ILogger_1 *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar2,3,pSVar1);
    return;
  }
  if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar4 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                     (showVideoJsonString,
                      AdRequestHandler__ShouldReward_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<AdRequestHandler::ShouldReward>_System__String_
                     );
  if (pOVar4 != (Object *)0x0) {
    if (*(char *)&pOVar4[1].klass == '\0') {
      pSVar1 = StringLiteral_User_did_not_finish_watching_ad;
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
        pSVar1 = StringLiteral_User_did_not_finish_watching_ad;
      }
      goto UnityEngine_CoreModule_dll_UnityEngine_Debug_Debug_2_Log;
    }
    pAVar5 = TypeInfo__AdRequestHandler->static_fields->OnHealthAdShownCallback;
    if (pAVar5 != (Action_1_Boolean_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pAVar5->fields)._._.invoke_impl)
                ((pAVar5->fields)._._.method_code,*(undefined1 *)&pOVar4[1].klass,
                 (pAVar5->fields)._._.method);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


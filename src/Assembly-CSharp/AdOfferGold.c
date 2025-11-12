
/* Void Initialize() */

void Assembly-CSharp.dll::AdOfferGold::AdOfferGold_Initialize(AdOfferGold *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<bool>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AdOfferGold__RewardAvailable_bool_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (Action_1_Boolean_ *)FUN_?(TypeInfo__System__Action<bool>);
  FUN_?(pAVar1,this,MethodInfo__AdOfferGold__RewardAvailable_bool_);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<bool,_System::String>,0);
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
  TypeInfo__AdRequestHandler->static_fields->OnGoldAdAvailableCallback = pAVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&TypeInfo__AdRequestHandler->static_fields->OnGoldAdAvailableCallback
                   >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  pOVar6 = (Object__Class *)FUN_?(TypeInfo__System__Action<bool,_System::String>);
  FUN_?(pOVar6,0,MethodInfo__AdRequestHandler__GoldAdAvailable_bool__System__String_);
  if (*(int *)&(TypeInfo__BrowserComm__ToJavaScript->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar7 = StringLiteral_requestGoldVideoAd;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BrowserComm,pOVar6,0);
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
  pSVar8 = StringLiteral___to_JSBridge_with_callback__;
  if (TypeInfo__BrowserComm->static_fields->enableExternalCall != 0) {
    if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
      FUN_?();
    }
    this_00 = TypeInfo__BrowserComm->static_fields->callbacks;
    if (*(int *)&(TypeInfo__BrowserComm__ToJavaScript->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__BrowserComm__ToJavaScript);
    }
    key = TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter;
    pOVar9 = (Object *)FUN_?(TypeInfo__BrowserComm__Callback);
    bVar10 = iRam_? != 0;
    pOVar9[1].klass = pOVar6;
    if (bVar10) {
      uVar2 = (uint)((ulonglong)(pOVar9 + 1) >> 0xc);
      in_R9 = (ulonglong)(uVar2 & 0x3f);
      puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar4 = *puVar3;
        LOCK();
        uVar5 = *puVar3;
        if (uVar4 == uVar5) {
          *puVar3 = uVar4 | 1L << in_R9;
        }
        UNLOCK();
      } while (uVar4 != uVar5);
    }
    if (this_00 != (Dictionary_2_System_Int32_BrowserComm_Callback_ *)0x0) {
      uVar11 = CONCAT71((int7)(in_R9 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryInsert
                ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,pOVar9,
                 (InsertionBehavior__Enum)uVar11,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_BrowserComm::Callback>__Add_int__BrowserComm__Callback_
                 ->klass->rgctx_data[0x22].method);
      this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)FUN_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      aiStackX_20[0] = TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter;
      pOVar9 = (Object *)FUN_?(uRam_?,aiStackX_20);
      if (this_01 !=
          (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
           *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)this_01,
                   (Object *)StringLiteral_callbackId,pOVar9,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar11 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
          FUN_?();
        }
        pSVar8 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_SerializeObject
                           ((Object *)this_01,(MethodInfo *)0x0);
        pSVar7 = BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ToNameSpace
                            (pSVar7,(MethodInfo *)0x0);
        args = (Object__Array *)FUN_?(TypeInfo__System__Object,1);
        if (args != (Object__Array *)0x0) {
          if ((pSVar8 != (String *)0x0) &&
             (lVar12 = FUN_?(pSVar8,(args->klass->_0).element_class), lVar12 == 0)) {
            uVar11 = FUN_?();
            FUN_?(uVar11,0);
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          FUN_?(args,0);
          pSVar7 = JSBridge::JSBridge_BuildInvocationForArguments(pSVar7,args,(MethodInfo *)0x0);
          JSBridge::JSBridge_DoKGMEval(pSVar7,(MethodInfo *)0x0);
          TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter =
               TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter + 1;
          return;
        }
      }
    }
    FUN_?();
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  if (pOVar6 == (Object__Class *)0x0) {
    str3 = (String *)0x0;
  }
  else {
    pIVar14 = (pOVar6->_0).image;
    str3 = (String *)(*(code *)pIVar14[5].name)(pOVar6,pIVar14[5].nameNoExt);
  }
  pSVar7 = mscorlib.dll::System::String::String_Concat_6
                      (str0,pSVar7,pSVar8,str3,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar7,(MethodInfo *)0x0);
  return;
}


/* Void OnClick() */

void Assembly-CSharp.dll::AdOfferGold::AdOfferGold_OnClick(AdOfferGold *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<bool>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AdOfferGold__OnTryClickGoldAd_bool_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_01 == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (this_01,0,(MethodInfo *)0x0);
  pAVar2 = (Action_1_Boolean_ *)FUN_?(TypeInfo__System__Action<bool>);
  FUN_?(pAVar2,this,MethodInfo__AdOfferGold__OnTryClickGoldAd_bool_);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<bool,_System::String>,0);
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
  TypeInfo__AdRequestHandler->static_fields->OnGoldAdAvailableCallback = pAVar2;
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&TypeInfo__AdRequestHandler->static_fields->OnGoldAdAvailableCallback
                   >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  pOVar7 = (Object__Class *)FUN_?(TypeInfo__System__Action<bool,_System::String>);
  FUN_?(pOVar7,0,MethodInfo__AdRequestHandler__GoldAdAvailable_bool__System__String_);
  if (*(int *)&(TypeInfo__BrowserComm__ToJavaScript->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar8 = StringLiteral_requestGoldVideoAd;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BrowserComm,pOVar7,0);
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
  pSVar9 = StringLiteral___to_JSBridge_with_callback__;
  if (TypeInfo__BrowserComm->static_fields->enableExternalCall != 0) {
    if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
      FUN_?();
    }
    this_00 = TypeInfo__BrowserComm->static_fields->callbacks;
    if (*(int *)&(TypeInfo__BrowserComm__ToJavaScript->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__BrowserComm__ToJavaScript);
    }
    key = TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter;
    pOVar10 = (Object *)FUN_?(TypeInfo__BrowserComm__Callback);
    bVar11 = iRam_? != 0;
    pOVar10[1].klass = pOVar7;
    if (bVar11) {
      uVar3 = (uint)((ulonglong)(pOVar10 + 1) >> 0xc);
      in_R9 = (ulonglong)(uVar3 & 0x3f);
      puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << in_R9;
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    if (this_00 != (Dictionary_2_System_Int32_BrowserComm_Callback_ *)0x0) {
      uVar12 = CONCAT71((int7)(in_R9 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryInsert
                ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,pOVar10,
                 (InsertionBehavior__Enum)uVar12,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_BrowserComm::Callback>__Add_int__BrowserComm__Callback_
                 ->klass->rgctx_data[0x22].method);
      this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)FUN_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (this_02,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      aiStackX_20[0] = TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter;
      pOVar10 = (Object *)FUN_?(uRam_?,aiStackX_20);
      if (this_02 !=
          (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
           *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)this_02,
                   (Object *)StringLiteral_callbackId,pOVar10,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar12 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
          FUN_?();
        }
        pSVar9 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_SerializeObject
                           ((Object *)this_02,(MethodInfo *)0x0);
        pSVar8 = BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ToNameSpace
                            (pSVar8,(MethodInfo *)0x0);
        args = (Object__Array *)FUN_?(TypeInfo__System__Object,1);
        if (args != (Object__Array *)0x0) {
          if ((pSVar9 != (String *)0x0) &&
             (lVar13 = FUN_?(pSVar9,(args->klass->_0).element_class), lVar13 == 0)) {
            uVar12 = FUN_?();
            FUN_?(uVar12,0);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          FUN_?(args,0);
          pSVar8 = JSBridge::JSBridge_BuildInvocationForArguments(pSVar8,args,(MethodInfo *)0x0);
          JSBridge::JSBridge_DoKGMEval(pSVar8,(MethodInfo *)0x0);
          TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter =
               TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter + 1;
          return;
        }
      }
    }
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (pOVar7 == (Object__Class *)0x0) {
    str3 = (String *)0x0;
  }
  else {
    pIVar14 = (pOVar7->_0).image;
    str3 = (String *)(*(code *)pIVar14[5].name)(pOVar7,pIVar14[5].nameNoExt);
  }
  pSVar8 = mscorlib.dll::System::String::String_Concat_6
                      (str0,pSVar8,pSVar9,str3,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar8,(MethodInfo *)0x0);
  return;
}


/* Void OnShownGoldAd(Boolean) */

void Assembly-CSharp.dll::AdOfferGold::AdOfferGold_OnShownGoldAd
               (bool shouldReward,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&System__Object__MethodInfo__System__Array__Empty<System::Object>______);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BrowserComm__ToJavaScript);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Not_implemented);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_refreshCredentials);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_State_notification__This_should_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Thank_you_for_watching__Enjoy_yo);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (shouldReward == 0) {
    return;
  }
  args = (Object__Array *)
         System.Core.dll::System::Linq::Enumerable::Enumerable_Empty_2
                   (System__Object__MethodInfo__System__Array__Empty<System::Object>______);
  if (*(int *)&(TypeInfo__BrowserComm__ToJavaScript->_1).field_0x1c == 0) {
    FUN_?();
  }
  BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall
            (StringLiteral_refreshCredentials,args,(MethodInfo *)0x0);
  pSVar1 = TM::TM__(StringLiteral_Thank_you_for_watching__Enjoy_yo,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
    FUN_?();
  }
  NotificationController::NotificationController_PushNotification
            (pSVar1,(Sprite *)0x0,5,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
            ((Object *)StringLiteral_State_notification__This_should_,(MethodInfo *)0x0);
  pSVar1 = StringLiteral_Not_implemented;
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
  if (pIVar2 != (ILogger_1 *)0x0) {
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar2,0,pSVar1);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnTryClickGoldAd(Boolean) */

void Assembly-CSharp.dll::AdOfferGold::AdOfferGold_OnTryClickGoldAd
               (AdOfferGold *this,bool available,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<bool>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AdOfferGold__OnShownGoldAd_bool_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (available == 0) {
    return;
  }
  pAVar1 = (Action_1_Boolean_ *)FUN_?(TypeInfo__System__Action<bool>);
  FUN_?(pAVar1,0,MethodInfo__AdOfferGold__OnShownGoldAd_bool_);
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
  TypeInfo__AdRequestHandler->static_fields->OnGoldAdShownCallback = pAVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&TypeInfo__AdRequestHandler->static_fields->OnGoldAdShownCallback >>
                   0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  pOVar6 = (Object__Class *)FUN_?(TypeInfo__System__Action<bool,_System::String>);
  FUN_?(pOVar6,0,MethodInfo__AdRequestHandler__ShowGoldVideoAdCallback_bool__System__String_
               );
  if (*(int *)&(TypeInfo__BrowserComm__ToJavaScript->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar7 = StringLiteral_showGoldVideoAd;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BrowserComm,pOVar6,0);
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
  pSVar8 = StringLiteral___to_JSBridge_with_callback__;
  if (TypeInfo__BrowserComm->static_fields->enableExternalCall != 0) {
    if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
      FUN_?();
    }
    this_00 = TypeInfo__BrowserComm->static_fields->callbacks;
    if (*(int *)&(TypeInfo__BrowserComm__ToJavaScript->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__BrowserComm__ToJavaScript);
    }
    key = TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter;
    pOVar9 = (Object *)FUN_?(TypeInfo__BrowserComm__Callback);
    bVar10 = iRam_? != 0;
    pOVar9[1].klass = pOVar6;
    if (bVar10) {
      uVar2 = (uint)((ulonglong)(pOVar9 + 1) >> 0xc);
      in_R9 = (ulonglong)(uVar2 & 0x3f);
      puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar4 = *puVar3;
        LOCK();
        uVar5 = *puVar3;
        if (uVar4 == uVar5) {
          *puVar3 = uVar4 | 1L << in_R9;
        }
        UNLOCK();
      } while (uVar4 != uVar5);
    }
    if (this_00 != (Dictionary_2_System_Int32_BrowserComm_Callback_ *)0x0) {
      uVar11 = CONCAT71((int7)(in_R9 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryInsert
                ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,pOVar9,
                 (InsertionBehavior__Enum)uVar11,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_BrowserComm::Callback>__Add_int__BrowserComm__Callback_
                 ->klass->rgctx_data[0x22].method);
      this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)FUN_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      aiStackX_20[0] = TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter;
      pOVar9 = (Object *)FUN_?(uRam_?,aiStackX_20);
      if (this_01 !=
          (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
           *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)this_01,
                   (Object *)StringLiteral_callbackId,pOVar9,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar11 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
          FUN_?();
        }
        pSVar8 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_SerializeObject
                           ((Object *)this_01,(MethodInfo *)0x0);
        pSVar7 = BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ToNameSpace
                            (pSVar7,(MethodInfo *)0x0);
        args = (Object__Array *)FUN_?(TypeInfo__System__Object,1);
        if (args != (Object__Array *)0x0) {
          if ((pSVar8 != (String *)0x0) &&
             (lVar12 = FUN_?(pSVar8,(args->klass->_0).element_class), lVar12 == 0)) {
            uVar11 = FUN_?();
            FUN_?(uVar11,0);
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          FUN_?(args,0);
          pSVar7 = JSBridge::JSBridge_BuildInvocationForArguments(pSVar7,args,(MethodInfo *)0x0);
          JSBridge::JSBridge_DoKGMEval(pSVar7,(MethodInfo *)0x0);
          TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter =
               TypeInfo__BrowserComm__ToJavaScript->static_fields->callbackIdCounter + 1;
          return;
        }
      }
    }
    FUN_?();
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  if (pOVar6 == (Object__Class *)0x0) {
    str3 = (String *)0x0;
  }
  else {
    pIVar14 = (pOVar6->_0).image;
    str3 = (String *)(*(code *)pIVar14[5].name)(pOVar6,pIVar14[5].nameNoExt);
  }
  pSVar7 = mscorlib.dll::System::String::String_Concat_6
                      (str0,pSVar7,pSVar8,str3,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar7,(MethodInfo *)0x0);
  return;
}


/* Void RewardAvailable(Boolean) */

void Assembly-CSharp.dll::AdOfferGold::AdOfferGold_RewardAvailable
               (AdOfferGold *this,bool available,MethodInfo *method)

{
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                  ((Component *)this,(MethodInfo *)0x0);
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                  ,available,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (obj->fields)._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,available);
  return;
}


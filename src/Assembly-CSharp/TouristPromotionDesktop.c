
/* Void KogamaRedirect() */

void Assembly-CSharp.dll::TouristPromotionDesktop::TouristPromotionDesktop_KogamaRedirect
               (TouristPromotionDesktop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__StatHatWrapper);
    func_?(&StringLiteral_TouristPromotion_Kogama_Redirect);
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((this_01 == (MVNetworkGame *)0x0) ||
     (this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0),
     this_02 == (MVLocalPlayer *)0x0)) goto code_?;
  bVar1 = MVPlayer::MVPlayer_get_IsTourist((MVPlayer *)this_02,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (this_00 == (GameSessionData *)0x0) goto code_?;
  bVar1 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
          VerticalVirtualizationController`1[System::Object]::
          VerticalVirtualizationController_1_System_Object__get_alwaysRebindOnRefresh
                    ((VerticalVirtualizationController_1_System_Object_ *)this_00,(MethodInfo *)0x0)
  ;
  if (bVar1 == 0) {
code_?:
    if (cRam_? == '\0') {
      func_?(&
                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                     );
      func_?(&
                      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                     );
      func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      func_?(&
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
      func_?(&TypeInfo__UnityEngine__Object);
      func_?(&
                      MethodInfo__TouristPromotionDesktop____c__DisplayClass11_0___ShowGoToKogamaPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     );
      func_?(&TypeInfo__TouristPromotionDesktop____c__DisplayClass11_0);
      cRam_? = '\x01';
    }
    value = (Object *)func_?(TypeInfo__TouristPromotionDesktop____c__DisplayClass11_0);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    pGVar2 = (this->fields).goToKogamaPopupPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pOVar3 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pGVar2,
                        UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
    if (value != (Object *)0x0) {
      value[1].klass = pOVar3;
      func_?(value + 1,pOVar3);
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      callbackFunction =
           (ExecuteEvents_EventFunction_1_System_Object_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                 MethodInfo__TouristPromotionDesktop____c__DisplayClass11_0___ShowGoToKogamaPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar2,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      return;
    }
  }
  else {
    pEVar4 = (this->fields).embeddedPlayerConfig;
    if (pEVar4 == (EmbeddedPlayerConfig *)0x0) goto code_?;
    pEVar5 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                       ((EmbeddedSiteConfigData *)&stack0xffffffe8,pEVar4,(MethodInfo *)0x0);
    if (pEVar5->allowsRedirectToWebpage == 0) {
      pEVar4 = (this->fields).embeddedPlayerConfig;
      if (pEVar4 == (EmbeddedPlayerConfig *)0x0) goto code_?;
      pEVar5 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                         ((EmbeddedSiteConfigData *)&stack0xffffffe8,pEVar4,(MethodInfo *)0x0);
      if (pEVar5->allowsOpenInNewTab == 0) goto code_?;
    }
    if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__StatHatWrapper);
    }
    StatHatWrapper::StatHatWrapper_Count
              (StringLiteral_TouristPromotion_Kogama_Redirect,1,(MethodInfo *)0x0);
    pEVar4 = (this->fields).embeddedPlayerConfig;
    if (pEVar4 != (EmbeddedPlayerConfig *)0x0) {
      pEVar5 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                         ((EmbeddedSiteConfigData *)&stack0xffffffe8,pEVar4,(MethodInfo *)0x0);
      BrowserCommGotoRequests::BrowserCommGotoRequests_GotoMainpage
                (pEVar5->allowsRedirectToWebpage == 0,0,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnContinueClicked() */

void Assembly-CSharp.dll::TouristPromotionDesktop::TouristPromotionDesktop_OnContinueClicked
               (TouristPromotionDesktop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__StatHatWrapper);
    func_?(&StringLiteral_TouristPromotion_Kogama_Continue);
    cRam_? = '\x01';
  }
  if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__StatHatWrapper);
  }
  StatHatWrapper::StatHatWrapper_Count
            (StringLiteral_TouristPromotion_Kogama_Continue,1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<ITouristAdController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ITouristAdController>_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__TouristPromotion____c___OnContinueClicked_b__12_0_ITouristAdController__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__TouristPromotion____c___OnContinueClicked_b__12_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__TouristPromotion____c);
    func_?(&StringLiteral_TouristPromotion___OnContinueCli);
    cRam_? = '\x01';
  }
  if (*(char *)&in_stack_1[3].klass == '\0') {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       (in_stack_1,(MethodInfo *)0x0);
    if ((TypeInfo__TouristPromotion____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    callbackFunction = TypeInfo__TouristPromotion____c->static_fields->__9__12_1;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if ((TypeInfo__TouristPromotion____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pTVar3 = TypeInfo__TouristPromotion____c->static_fields->__9;
      callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)pTVar3,
                 MethodInfo__TouristPromotion____c___OnContinueClicked_b__12_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__TouristPromotion____c->static_fields->__9__12_1 = callbackFunction;
      func_?(&TypeInfo__TouristPromotion____c->static_fields->__9__12_1,callbackFunction);
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar2,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    return;
  }
  pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     (in_stack_1,(MethodInfo *)0x0);
  if ((TypeInfo__TouristPromotion____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  callbackFunction_00 = TypeInfo__TouristPromotion____c->static_fields->__9__12_0;
  if (callbackFunction_00 == (ExecuteEvents_EventFunction_1_ITouristAdController_ *)0x0) {
    if ((TypeInfo__TouristPromotion____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar3 = TypeInfo__TouristPromotion____c->static_fields->__9;
    callbackFunction_00 = (ExecuteEvents_EventFunction_1_ITouristAdController_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,(Object *)pTVar3,
               MethodInfo__TouristPromotion____c___OnContinueClicked_b__12_0_ITouristAdController__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__TouristPromotion____c->static_fields->__9__12_0 = callbackFunction_00;
    func_?(&TypeInfo__TouristPromotion____c->static_fields->__9__12_0,callbackFunction_00);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar2,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<ITouristAdController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ITouristAdController>_
            );
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::TouristPromotionDesktop::TouristPromotionDesktop_OnDestroy
               (TouristPromotionDesktop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<IWinningCondition>);
    func_?(&
                    MethodInfo__TouristPromotionDesktop__OnWinningConditionFulfilled_IWinningCondition_
                   );
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 == (MVNetworkGame *)0x0) {
    func_?();
  }
  else {
    pAVar2 = (pMVar1->fields).OnWinningConditionFulfilled;
    this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?(TypeInfo__System__Action<IWinningCondition>);
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_00,(Object *)this,
               MethodInfo__TouristPromotionDesktop__OnWinningConditionFulfilled_IWinningCondition_,
               (MethodInfo *)0x0);
    pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    unaff_EDI = TypeInfo__System__Action<IWinningCondition>;
    if (pDVar3 == (Delegate *)0x0) {
      (pMVar1->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
      pAStack4 = (Action_1_IWinningCondition___Class *)0x0;
code_?:
      func_?();
      return;
    }
    pAStack4 = TypeInfo__System__Action<IWinningCondition>;
    pAVar2 = (Action_1_IWinningCondition_ *)func_?();
    if (pAVar2 != (Action_1_IWinningCondition_ *)0x0) {
      (pMVar1->fields).OnWinningConditionFulfilled = pAVar2;
      unaff_EDI = TypeInfo__System__Action<IWinningCondition>;
      pAStack4 = TypeInfo__System__Action<IWinningCondition>;
      pAStack4 = (Action_1_IWinningCondition___Class *)func_?();
      if (pAStack4 != (Action_1_IWinningCondition___Class *)0x0) goto code_?;
    }
  }
  pAStack4 = unaff_EDI;
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ShowGoToKogamaPopup() */

void Assembly-CSharp.dll::TouristPromotionDesktop::TouristPromotionDesktop_ShowGoToKogamaPopup
               (TouristPromotionDesktop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__TouristPromotionDesktop____c__DisplayClass11_0___ShowGoToKogamaPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__TouristPromotionDesktop____c__DisplayClass11_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__TouristPromotionDesktop____c__DisplayClass11_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  pGVar1 = (this->fields).goToKogamaPopupPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pOVar2 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pGVar1,
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
  if (value != (Object *)0x0) {
    value[1].klass = pOVar2;
    func_?(value + 1,pOVar2);
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
               MethodInfo__TouristPromotionDesktop____c__DisplayClass11_0___ShowGoToKogamaPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SignupCallback() */

void Assembly-CSharp.dll::TouristPromotionDesktop::TouristPromotionDesktop_SignupCallback
               (TouristPromotionDesktop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__EmbeddedSite);
    func_?(&TypeInfo__StatHatWrapper);
    func_?(&StringLiteral_TouristPromotion_Kogama_Signup);
    func_?(&StringLiteral_Signup_not_permitted_for_site_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__StatHatWrapper);
  }
  StatHatWrapper::StatHatWrapper_Count
            (StringLiteral_TouristPromotion_Kogama_Signup,1,(MethodInfo *)0x0);
  this_00 = (this->fields).embeddedPlayerConfig;
  if (this_00 == (EmbeddedPlayerConfig *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pEVar2 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                     ((EmbeddedSiteConfigData *)&stack0xffffffe8,this_00,(MethodInfo *)0x0);
  if (pEVar2->allowsModals != 0) {
    BrowserCommGotoRequests::BrowserCommGotoRequests_GotoSignup(0,1,(MethodInfo *)0x0);
    return;
  }
  if (pEVar2->allowsOpenInNewTab == 0) {
    if (pEVar2->allowsRedirectToWebpage == 0) {
      this = (TouristPromotionDesktop *)pEVar2->siteEnum;
      message = (Object *)func_?(TypeInfo__EmbeddedSite,&this);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(message,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Signup_not_permitted_for_site_,(MethodInfo *)0x0);
      return;
    }
    BrowserCommGotoRequests::BrowserCommGotoRequests_GotoSignup(0,0,(MethodInfo *)0x0);
    return;
  }
  BrowserCommGotoRequests::BrowserCommGotoRequests_GotoSignup(1,0,(MethodInfo *)0x0);
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::TouristPromotionDesktop::TouristPromotionDesktop_Start
               (TouristPromotionDesktop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<IWinningCondition>);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__TouristPromotionDesktop__OnWinningConditionFulfilled_IWinningCondition_
                   );
    func_?(&TypeInfo__System__Uri);
    func_?(&StringLiteral_Referrer__);
    func_?(&StringLiteral_www_);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).embeddedPlayerConfig;
  if (this_00 == (EmbeddedPlayerConfig *)0x0) {
code_?:
    func_?();
  }
  else {
    pEVar1 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                       ((EmbeddedSiteConfigData *)&stack0xffffffd4,this_00,(MethodInfo *)0x0);
    (this->fields)._.embedded = pEVar1->siteEnum != 0;
    TouristPromotion::TouristPromotion_Start((TouristPromotion *)this,(MethodInfo *)0x0);
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    pAVar3 = (pMVar2->fields).OnWinningConditionFulfilled;
    this_01 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?();
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_01,(Object *)this,
               MethodInfo__TouristPromotionDesktop__OnWinningConditionFulfilled_IWinningCondition_,
               (MethodInfo *)0x0);
    pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar3,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pDVar4 == (Delegate *)0x0) {
      (pMVar2->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
code_?:
      func_?();
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pGVar5 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar5 != (GameSessionData *)0x0) {
        pSVar6 = mscorlib.dll::System::String::String_Concat_3
                            (StringLiteral_Referrer__,(pGVar5->fields).referrer,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)pSVar6,(MethodInfo *)0x0);
        pGVar7 = (this->fields).redirectButton;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pGVar5 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
        if ((pGVar5 != (GameSessionData *)0x0) && (pGVar7 != (GameObject *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar7,(pGVar5->fields).embedded,(MethodInfo *)0x0);
          pGVar7 = (this->fields).signupButton;
          if (pGVar7 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar7,1,(MethodInfo *)0x0);
            pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar2 != (MVNetworkGame *)0x0) {
              pSVar6 = (pMVar2->fields)._KogamaMainpageURL_k__BackingField;
              this_02 = (Uri *)func_?();
              System.dll::System::Uri::Uri__ctor(this_02,pSVar6,(MethodInfo *)0x0);
              pTVar8 = (this->fields).redirectButtonURLText;
              if ((((this_02 != (Uri *)0x0) &&
                   (pSVar6 = System.dll::System::Uri::Uri_get_Host(this_02,(MethodInfo *)0x0),
                   pSVar6 != (String *)0x0)) &&
                  (pSVar6 = mscorlib.dll::System::String::String_Replace_1
                                       (pSVar6,StringLiteral_www_,::StringLiteral__,
                                        (MethodInfo *)0x0), pSVar6 != (String *)0x0)) &&
                 (mscorlib.dll::System::String::String_ToUpper(pSVar6,(MethodInfo *)0x0),
                 pTVar8 != (Text *)0x0)) {
                (*(code *)(pTVar8->klass->vtable).set_text.method)();
                return;
              }
            }
          }
        }
      }
      goto code_?;
    }
    pAVar3 = (Action_1_IWinningCondition_ *)func_?();
    if (pAVar3 == (Action_1_IWinningCondition_ *)0x0) goto code_?;
    (pMVar2->fields).OnWinningConditionFulfilled = pAVar3;
    iVar9 = func_?();
    if (iVar9 != 0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


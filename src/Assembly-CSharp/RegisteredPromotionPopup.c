
/* IEnumerator FadeOutAndPopPromotion() */

IEnumerator *
Assembly-CSharp.dll::RegisteredPromotionPopup::RegisteredPromotionPopup_FadeOutAndPopPromotion
          (RegisteredPromotionPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RegisteredPromotionPopup___FadeOutAndPopPromotion_d__17);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RegisteredPromotionPopup___FadeOutAndPopPromotion_d__17;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 2,this);
  return (IEnumerator *)value;
}


/* Void Initialize(Boolean, Boolean) */

void Assembly-CSharp.dll::RegisteredPromotionPopup::RegisteredPromotionPopup_Initialize
               (RegisteredPromotionPopup *this,bool isEmbeddedPromotion,bool withAd,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<IWinningCondition>);
    func_?(&
                    MethodInfo__RegisteredPromotionPopup__OnWinningConditionFulfilled_IWinningCondition_
                   );
    func_?(&TypeInfo__System__Uri);
    func_?(&StringLiteral_www_);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  (this->fields).withAd = withAd;
  if (isEmbeddedPromotion == 0) {
code_?:
    pIVar1 = (this->fields).adIcon;
    if (pIVar1 != (Image *)0x0) {
      this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pIVar1,(MethodInfo *)0x0);
      if (this_03 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_03,withAd,(MethodInfo *)0x0);
        return;
      }
    }
code_?:
    func_?();
  }
  else {
    pTVar2 = (this->fields).looksData;
    if (pTVar2 == (TouristPromotionLooksData *)0x0) goto code_?;
    TouristPromotionLooksData::TouristPromotionLooksData_RandomizePromotion
              (pTVar2,1,(MethodInfo *)0x0);
    pTVar2 = (this->fields).looksData;
    pTVar3 = (this->fields).promotionHeader;
    if (pTVar2 == (TouristPromotionLooksData *)0x0) goto code_?;
    TouristPromotionLooksData::TouristPromotionLooksData_GetPromotionText(pTVar2,(MethodInfo *)0x0);
    if (pTVar3 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar3->klass->vtable).set_text.method)(pTVar3);
    pTVar2 = (this->fields).looksData;
    if (pTVar2 == (TouristPromotionLooksData *)0x0) goto code_?;
    pIVar1 = TouristPromotionLooksData::TouristPromotionLooksData_GetPromotionImage
                       (pTVar2,(MethodInfo *)0x0);
    if (pIVar1 == (Image *)0x0) goto code_?;
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pIVar1,(MethodInfo *)0x0);
    if (this_00 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (this_00,(Transform *)(this->fields).promotionImageParent,0,(MethodInfo *)0x0);
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar4 == (MVNetworkGame *)0x0) goto code_?;
    pAVar5 = (pMVar4->fields).OnWinningConditionFulfilled;
    this_01 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?();
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_01,(Object *)this,
               MethodInfo__RegisteredPromotionPopup__OnWinningConditionFulfilled_IWinningCondition_,
               (MethodInfo *)0x0);
    pDVar6 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar5,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pDVar6 == (Delegate *)0x0) {
      (pMVar4->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
code_?:
      func_?();
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar4 != (MVNetworkGame *)0x0) {
        pSVar7 = (pMVar4->fields)._KogamaMainpageURL_k__BackingField;
        this_02 = (Uri *)func_?();
        System.dll::System::Uri::Uri__ctor(this_02,pSVar7,(MethodInfo *)0x0);
        pTVar3 = (this->fields).redirectButtonURLText;
        if (this_02 != (Uri *)0x0) {
          pSVar7 = System.dll::System::Uri::Uri_get_Host(this_02,(MethodInfo *)0x0);
          if (pSVar7 != (String *)0x0) {
            pSVar7 = mscorlib.dll::System::String::String_Replace_1
                               (pSVar7,StringLiteral_www_,::StringLiteral__,(MethodInfo *)0x0);
            if (pSVar7 != (String *)0x0) {
              mscorlib.dll::System::String::String_ToUpper(pSVar7,(MethodInfo *)0x0);
              if (pTVar3 != (Text *)0x0) {
                (*(code *)(pTVar3->klass->vtable).set_text.method)(pTVar3);
                goto code_?;
              }
            }
          }
        }
      }
      goto code_?;
    }
    pAVar5 = (Action_1_IWinningCondition_ *)func_?();
    if (pAVar5 == (Action_1_IWinningCondition_ *)0x0) goto code_?;
    (pMVar4->fields).OnWinningConditionFulfilled = pAVar5;
    iVar8 = func_?();
    if (iVar8 != 0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void KogamaRedirect() */

void Assembly-CSharp.dll::RegisteredPromotionPopup::RegisteredPromotionPopup_KogamaRedirect
               (RegisteredPromotionPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  this_00 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (this_00 != (GameSessionData *)0x0) {
    bVar1 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
            VerticalVirtualizationController`1[System::Object]::
            VerticalVirtualizationController_1_System_Object__get_alwaysRebindOnRefresh
                      ((VerticalVirtualizationController_1_System_Object_ *)this_00,
                       (MethodInfo *)0x0);
    if (bVar1 != 0) {
      BrowserCommGotoRequests::BrowserCommGotoRequests_GotoMainpage(1,0,(MethodInfo *)0x0);
      return;
    }
    if (cRam_? == '\0') {
      func_?();
      func_?(&
                      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                     );
      func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      func_?(&
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
      func_?(&TypeInfo__UnityEngine__Object);
      func_?(&
                      MethodInfo__RegisteredPromotionPopup____c__DisplayClass19_0___ShowGoToKogamaPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     );
      in_stack_2 = &TypeInfo__RegisteredPromotionPopup____c__DisplayClass19_0;
      func_?();
      cRam_? = '\x01';
    }
    value = (Object *)func_?(TypeInfo__RegisteredPromotionPopup____c__DisplayClass19_0);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              (value,ExceptionArgument__Enum_obj,(MethodInfo *)in_stack_2);
    pGVar3 = (this->fields).goToKogamaPopupPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pOVar4 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pGVar3,
                        UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
    if (value != (Object *)0x0) {
      value[1].klass = pOVar4;
      func_?(value + 1,pOVar4);
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      callbackFunction =
           (ExecuteEvents_EventFunction_1_System_Object_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                 MethodInfo__RegisteredPromotionPopup____c__DisplayClass19_0___ShowGoToKogamaPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar3,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnContinueClicked() */

void Assembly-CSharp.dll::RegisteredPromotionPopup::RegisteredPromotionPopup_OnContinueClicked
               (RegisteredPromotionPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RegisteredPromotionPopup___FadeOutAndPopPromotion_d__17);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RegisteredPromotionPopup___FadeOutAndPopPromotion_d__17;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
  func_?(value + 2,this);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
            ((MonoBehaviour *)this,(IEnumerator *)value,(MethodInfo *)0x0);
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::RegisteredPromotionPopup::RegisteredPromotionPopup_OnDestroy
               (RegisteredPromotionPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<IWinningCondition>);
    func_?(&
                    MethodInfo__RegisteredPromotionPopup__OnWinningConditionFulfilled_IWinningCondition_
                   );
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 != 0) {
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 == (MVNetworkGame *)0x0) {
      func_?();
      goto code_?;
    }
    pAVar3 = (pMVar2->fields).OnWinningConditionFulfilled;
    this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?(TypeInfo__System__Action<IWinningCondition>);
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_00,(Object *)this,
               MethodInfo__RegisteredPromotionPopup__OnWinningConditionFulfilled_IWinningCondition_,
               (MethodInfo *)0x0);
    unaff_ESI = mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)pAVar3,(Delegate *)this_00,(MethodInfo *)0x0);
    unaff_EDI = TypeInfo__System__Action<IWinningCondition>;
    if (unaff_ESI == (Delegate *)0x0) {
      (pMVar2->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
      pAStack4 = (Action_1_IWinningCondition___Class *)0x0;
    }
    else {
      pAStack4 = TypeInfo__System__Action<IWinningCondition>;
      pDStack5 = unaff_ESI;
      pAVar3 = (Action_1_IWinningCondition_ *)func_?();
      if (pAVar3 == (Action_1_IWinningCondition_ *)0x0) {
code_?:
        pDStack5 = unaff_ESI;
        pAStack4 = unaff_EDI;
        func_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      (pMVar2->fields).OnWinningConditionFulfilled = pAVar3;
      unaff_EDI = TypeInfo__System__Action<IWinningCondition>;
      pAStack4 = TypeInfo__System__Action<IWinningCondition>;
      pDStack5 = unaff_ESI;
      pAStack4 = (Action_1_IWinningCondition___Class *)func_?();
      if (pAStack4 == (Action_1_IWinningCondition___Class *)0x0) goto code_?;
    }
    pDStack5 = (Delegate *)&(pMVar2->fields).OnWinningConditionFulfilled;
    func_?();
  }
  return;
}


/* Void OnViewAdClicked() */

void Assembly-CSharp.dll::RegisteredPromotionPopup::RegisteredPromotionPopup_OnViewAdClicked
               (RegisteredPromotionPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IRegisterPromotionAdController>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IRegisterPromotionAdController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IRegisterPromotionAdController>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__RegisteredPromotionPopup____c___OnViewAdClicked_b__16_0_IRegisterPromotionAdController__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__RegisteredPromotionPopup____c);
    func_?(&StringLiteral_Showing_Ad);
    cRam_? = '\x01';
  }
  if ((this->fields).withAd == 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__RegisteredPromotionPopup___FadeOutAndPopPromotion_d__17);
      cRam_? = '\x01';
    }
    method_00 = TypeInfo__RegisteredPromotionPopup___FadeOutAndPopPromotion_d__17;
    value = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    value[1].klass = (Object__Class *)0x0;
    value[2].klass = (Object__Class *)this;
    func_?(value + 2,this);
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
              ((MonoBehaviour *)this,(IEnumerator *)value,(MethodInfo *)0x0);
    return;
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_Showing_Ad,(MethodInfo *)0x0);
  this_00 = (this->fields).continueButton;
  (this->fields).waitingForAd = 1;
  if (this_00 != (Button *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
              ((Selectable *)this_00,0,(MethodInfo *)0x0);
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this->fields).startTime = fVar1;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__RegisteredPromotionPopup____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    callbackFunction = TypeInfo__RegisteredPromotionPopup____c->static_fields->__9__16_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IRegisterPromotionAdController_ *)0x0) {
      if ((TypeInfo__RegisteredPromotionPopup____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      object = TypeInfo__RegisteredPromotionPopup____c->static_fields->__9;
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IRegisterPromotionAdController_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__RegisteredPromotionPopup____c___OnViewAdClicked_b__16_0_IRegisterPromotionAdController__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__RegisteredPromotionPopup____c->static_fields->__9__16_0 = callbackFunction;
      func_?();
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IRegisterPromotionAdController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IRegisterPromotionAdController>_
              );
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ShowGoToKogamaPopup() */

void Assembly-CSharp.dll::RegisteredPromotionPopup::RegisteredPromotionPopup_ShowGoToKogamaPopup
               (RegisteredPromotionPopup *this,MethodInfo *method)

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
                    MethodInfo__RegisteredPromotionPopup____c__DisplayClass19_0___ShowGoToKogamaPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__RegisteredPromotionPopup____c__DisplayClass19_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RegisteredPromotionPopup____c__DisplayClass19_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
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
               MethodInfo__RegisteredPromotionPopup____c__DisplayClass19_0___ShowGoToKogamaPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
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


/* Void Update() */

void Assembly-CSharp.dll::RegisteredPromotionPopup::RegisteredPromotionPopup_Update
               (RegisteredPromotionPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Show_Ad_timeout__try_again);
    cRam_? = '\x01';
  }
  if ((this->fields).waitingForAd != 0) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if ((this->fields).timeoutDelay <= fVar1 - (this->fields).startTime) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_Show_Ad_timeout__try_again,(MethodInfo *)0x0);
      this_00 = (this->fields).continueButton;
      if (this_00 == (Button *)0x0) {
        func_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                ((Selectable *)this_00,1,(MethodInfo *)0x0);
      (this->fields).waitingForAd = 0;
    }
  }
  return;
}


/* Void <FadeOutAndPopPromotion>b__17_0(Single) */

void Assembly-CSharp.dll::RegisteredPromotionPopup::
     RegisteredPromotionPopup__FadeOutAndPopPromotion_b__17_0
               (RegisteredPromotionPopup *this,float t,MethodInfo *method)

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
                    MethodInfo__RegisteredPromotionPopup____c___FadeOutAndPopPromotion_b__17_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__RegisteredPromotionPopup____c);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).canvasGroup;
  if (this_00 != (CanvasGroup *)0x0) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (this_00,t,(MethodInfo *)0x0);
    if (t == _UNK_?) {
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if (pGVar1 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__RegisteredPromotionPopup____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      callbackFunction = TypeInfo__RegisteredPromotionPopup____c->static_fields->__9__17_1;
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if ((TypeInfo__RegisteredPromotionPopup____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        object = TypeInfo__RegisteredPromotionPopup____c->static_fields->__9;
        callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__RegisteredPromotionPopup____c___FadeOutAndPopPromotion_b__17_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__RegisteredPromotionPopup____c->static_fields->__9__17_1 = callbackFunction;
        func_?();
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar1,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
    }
    return;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* RegisteredPromotionPopup() */

void Assembly-CSharp.dll::RegisteredPromotionPopup::RegisteredPromotionPopup__ctor
               (RegisteredPromotionPopup *this,MethodInfo *method)

{
  (this->fields).timeoutDelay = 20.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


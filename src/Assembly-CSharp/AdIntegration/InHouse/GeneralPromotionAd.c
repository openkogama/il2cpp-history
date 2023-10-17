
/* Void ActionButtonCallback() */

void Assembly-CSharp.dll::AdIntegration::InHouse::GeneralPromotionAd::
     GeneralPromotionAd_ActionButtonCallback(GeneralPromotionAd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__BrowserCommGotoRequests__GotoEliteUpgrade_bool__bool_);
    func_?(&MethodInfo__BrowserCommGotoRequests__GotoPurchaseGold_bool__bool_);
    func_?(&MethodInfo__BrowserCommGotoRequests__GotoSignup_bool__bool_);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<bool,_bool>);
    func_?(&StringLiteral_InHouseAd_Kogama_Elite);
    func_?(&StringLiteral_InHouseAd_Kogama_Gold);
    func_?(&StringLiteral_InHouseAd_Kogama_Signup);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).promotionActionType;
  if (iVar1 == 0) {
    pUVar2 = (UnityAction_2_System_Boolean_System_Boolean_ *)
             func_?(TypeInfo__UnityEngine__Events__UnityAction<bool,_bool>);
    if (pUVar2 != (UnityAction_2_System_Boolean_System_Boolean_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Boolean,System::
      Boolean]::UnityAction_2_System_Boolean_System_Boolean___ctor
                (pUVar2,(Object *)0x0,
                 MethodInfo__BrowserCommGotoRequests__GotoPurchaseGold_bool__bool_,(MethodInfo *)0x0
                );
      GeneralPromotionAd_PerformAction
                (this,StringLiteral_InHouseAd_Kogama_Gold,pUVar2,(MethodInfo *)0x0);
      return;
    }
  }
  else if (iVar1 == 1) {
    pUVar2 = (UnityAction_2_System_Boolean_System_Boolean_ *)
             func_?(TypeInfo__UnityEngine__Events__UnityAction<bool,_bool>);
    if (pUVar2 != (UnityAction_2_System_Boolean_System_Boolean_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Boolean,System::
      Boolean]::UnityAction_2_System_Boolean_System_Boolean___ctor
                (pUVar2,(Object *)0x0,
                 MethodInfo__BrowserCommGotoRequests__GotoEliteUpgrade_bool__bool_,(MethodInfo *)0x0
                );
      GeneralPromotionAd_PerformAction
                (this,StringLiteral_InHouseAd_Kogama_Elite,pUVar2,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    pUVar2 = (UnityAction_2_System_Boolean_System_Boolean_ *)
             func_?(TypeInfo__UnityEngine__Events__UnityAction<bool,_bool>);
    if (pUVar2 != (UnityAction_2_System_Boolean_System_Boolean_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Boolean,System::
      Boolean]::UnityAction_2_System_Boolean_System_Boolean___ctor
                (pUVar2,(Object *)0x0,MethodInfo__BrowserCommGotoRequests__GotoSignup_bool__bool_,
                 (MethodInfo *)0x0);
      GeneralPromotionAd_PerformAction
                (this,StringLiteral_InHouseAd_Kogama_Signup,pUVar2,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ActivateContinueButton() */

void Assembly-CSharp.dll::AdIntegration::InHouse::GeneralPromotionAd::
     GeneralPromotionAd_ActivateContinueButton(GeneralPromotionAd *this,MethodInfo *method)

{
  pSVar1 = (this->fields).startContinueText;
  pTVar2 = (this->fields).continueText;
  (this->fields).finishedWaiting = 1;
  if (pSVar1 == (String *)0x0) {
    if (pTVar2 == (Text *)0x0) goto code_?;
    pSVar1 = (String *)
             (*(pTVar2->klass->vtable).get_text.methodPtr)
                       (pTVar2,(pTVar2->klass->vtable).get_text.method);
    (this->fields).startContinueText = pSVar1;
    func_?(&(this->fields).startContinueText,pSVar1);
  }
  else if (pTVar2 == (Text *)0x0) goto code_?;
  (*(pTVar2->klass->vtable).set_text.methodPtr)
            (pTVar2,pSVar1,(pTVar2->klass->vtable).set_text.method);
  this_00 = (this->fields).continueButton;
  if (this_00 != (Button *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
              ((Selectable *)this_00,1,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* IEnumerator FadeOutAndPop() */

IEnumerator *
Assembly-CSharp.dll::AdIntegration::InHouse::GeneralPromotionAd::GeneralPromotionAd_FadeOutAndPop
          (GeneralPromotionAd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AdIntegration__InHouse__GeneralPromotionAd___FadeOutAndPop_d__37);
    cRam_? = '\x01';
  }
  value = (Object *)
          func_?(TypeInfo__AdIntegration__InHouse__GeneralPromotionAd___FadeOutAndPop_d__37
                         );
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_ESI);
    value[1].klass = (Object__Class *)0x0;
    value[2].klass = (Object__Class *)this;
    func_?(value + 2,this);
    return (IEnumerator *)value;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Void Initialize(PromotionLooksData, GeneralPromotionType, Boolean) */

void Assembly-CSharp.dll::AdIntegration::InHouse::GeneralPromotionAd::GeneralPromotionAd_Initialize
               (GeneralPromotionAd *this,PromotionLooksData *promotionLooksData,
               GeneralPromotionType__Enum type,bool showWhyText,MethodInfo *method)

{
  (this->fields).generalPromotionType = type;
  if (promotionLooksData != (PromotionLooksData *)0x0) {
    PromotionLooksData::PromotionLooksData_RandomizePromotion
              (promotionLooksData,(this->fields).embeddedSiteConfigData.siteEnum != 0,
               (MethodInfo *)0x0);
    pOVar1 = (Object_1__Class *)(this->fields).promotionHeader;
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List<AdIntegration::InHouse::PromotionLooksData::LooksData>__get_Item_int_
                     );
      cRam_? = '\x01';
    }
    pLVar2 = (promotionLooksData->fields).promotionData;
    if (pLVar2 != (List_1_AdIntegration_InHouse_PromotionLooksData_LooksData_ *)0x0) {
      pPVar3 = mscorlib.dll::System::Collections::Generic::List`1[AdIntegration::InHouse::
               PromotionLooksData+LooksData]::
               List_1_AdIntegration_InHouse_PromotionLooksData_LooksData__get_Item
                         (&PStack_4,pLVar2,(promotionLooksData->fields).promotionIndex,
                          MethodInfo__System__Collections__Generic__List<AdIntegration::InHouse::PromotionLooksData::LooksData>__get_Item_int_
                         );
      pIVar5 = (Image *)TM::TM__(pPVar3->promotionText,(MethodInfo *)0x0);
      if (pOVar1 != (Object_1__Class *)0x0) {
        pIVar6 = (pOVar1->_0).image;
        PStack_4.promotionText = (String *)pIVar6[0x12].name;
        auStack_7._8_4_ = &UNK_?;
        pOStack_8 = pOVar1;
        PStack_4.promotionImage = pIVar5;
        (**(code **)&pIVar6[0x11].dynamic)();
        if (cRam_? == '\0') {
          func_?(&
                          MethodInfo__System__Collections__Generic__List<AdIntegration::InHouse::PromotionLooksData::LooksData>__get_Item_int_
                         );
          func_?(&
                          UnityEngine__UI__Image_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Image>_UnityEngine__UI__Image_
                         );
          func_?(&TypeInfo__UnityEngine__Object);
          cRam_? = '\x01';
        }
        pLVar2 = (promotionLooksData->fields).promotionData;
        if (pLVar2 != (List_1_AdIntegration_InHouse_PromotionLooksData_LooksData_ *)0x0) {
          pPVar3 = mscorlib.dll::System::Collections::Generic::List`1[AdIntegration::InHouse::
                   PromotionLooksData+LooksData]::
                   List_1_AdIntegration_InHouse_PromotionLooksData_LooksData__get_Item
                             ((PromotionLooksData_LooksData *)auStack_7,pLVar2,
                              (promotionLooksData->fields).promotionIndex,
                              MethodInfo__System__Collections__Generic__List<AdIntegration::InHouse::PromotionLooksData::LooksData>__get_Item_int_
                             );
          PStack_4.promotionImage = pPVar3->promotionImage;
          PStack_4.promotionText = pPVar3->promotionText;
          PStack_4.validOnKogamaPortal = pPVar3->validOnKogamaPortal;
          PStack_4.validOnAnonymousExternalPortal = pPVar3->validOnAnonymousExternalPortal;
          PStack_4._10_2_ = *(undefined2 *)&pPVar3->field_0xa;
          PStack_4.promotionActionType = pPVar3->promotionActionType;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            pOStack_8 = TypeInfo__UnityEngine__Object;
            auStack_7._8_4_ = &UNK_?;
            func_?();
          }
          this_00 = (Component *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                              ((Object *)PStack_4.promotionImage,
                               UnityEngine__UI__Image_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Image>_UnityEngine__UI__Image_
                              );
          if ((this_00 != (Component *)0x0) &&
             (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  (this_00,(MethodInfo *)0x0), this_01 != (Transform *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                      (this_01,(Transform *)(this->fields).promotionImageParent,0,(MethodInfo *)0x0)
            ;
            if (cRam_? == '\0') {
              func_?(&
                              MethodInfo__System__Collections__Generic__List<AdIntegration::InHouse::PromotionLooksData::LooksData>__get_Item_int_
                             );
              cRam_? = '\x01';
            }
            pLVar2 = (promotionLooksData->fields).promotionData;
            if (pLVar2 != (List_1_AdIntegration_InHouse_PromotionLooksData_LooksData_ *)0x0) {
              pPVar3 = mscorlib.dll::System::Collections::Generic::List`1[AdIntegration::InHouse::
                       PromotionLooksData+LooksData]::
                       List_1_AdIntegration_InHouse_PromotionLooksData_LooksData__get_Item
                                 ((PromotionLooksData_LooksData *)auStack_7,pLVar2,
                                  (promotionLooksData->fields).promotionIndex,
                                  MethodInfo__System__Collections__Generic__List<AdIntegration::InHouse::PromotionLooksData::LooksData>__get_Item_int_
                                 );
              pTVar9 = (this->fields).actionText;
              bVar10 = cRam_? == '\0';
              iVar11 = pPVar3->promotionActionType;
              (this->fields).promotionActionType = iVar11;
              if (bVar10) {
                pOStack_8 = (Object_1__Class *)&StringLiteral_JOIN_THE_ELITE;
                auStack_7._8_4_ = &UNK_?;
                func_?();
                auStack_7._8_4_ = &StringLiteral_SIGN_UP;
                auStack_7._4_4_ = &UNK_?;
                func_?();
                auStack_7._4_4_ = &StringLiteral_BUY_GOLD;
                auStack_7._0_4_ = &UNK_?;
                func_?();
                cRam_? = '\x01';
              }
              pSVar12 = StringLiteral_BUY_GOLD;
              if ((iVar11 != 0) && (pSVar12 = StringLiteral_JOIN_THE_ELITE, iVar11 != 1)) {
                pSVar12 = StringLiteral_SIGN_UP;
              }
              pSVar12 = TM::TM__(pSVar12,(MethodInfo *)0x0);
              if (pTVar9 != (Text *)0x0) {
                (*(pTVar9->klass->vtable).set_text.methodPtr)
                          (pTVar9,pSVar12,(pTVar9->klass->vtable).set_text.method);
                pTVar9 = (this->fields).whySeeingThisText;
                if ((pTVar9 != (Text *)0x0) &&
                   (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject((Component *)pTVar9,(MethodInfo *)0x0),
                   this_02 != (GameObject *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (this_02,showWhyText,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void InitializeWithAd(GeneralPromotionInitWithAd) */

void Assembly-CSharp.dll::AdIntegration::InHouse::GeneralPromotionAd::
     GeneralPromotionAd_InitializeWithAd
               (GeneralPromotionAd *this,GeneralPromotionInitWithAd initWithAd,MethodInfo *method)

{
  GeneralPromotionAd_Initialize
            (this,initWithAd.looksData,GeneralPromotionType__Enum_WithAd,initWithAd.showWhyText,
             (MethodInfo *)0x0);
  (this->fields).promotionShowsAd = initWithAd.hasAd;
  GeneralPromotionAd_ActivateContinueButton(this,(MethodInfo *)0x0);
  this_00 = (this->fields).continueAdIcon;
  if (this_00 != (Image *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,(this->fields).promotionShowsAd,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void InitializeWithTimer(GeneralPromotionInitTimer) */

void Assembly-CSharp.dll::AdIntegration::InHouse::GeneralPromotionAd::
     GeneralPromotionAd_InitializeWithTimer
               (GeneralPromotionAd *this,GeneralPromotionInitTimer initTimer,MethodInfo *method)

{
  GeneralPromotionAd_Initialize
            (this,initTimer.looksData,GeneralPromotionType__Enum_BlockedWithTimer,
             initTimer.showWhyText,(MethodInfo *)0x0);
  (this->fields).secondsToWait = (float)initTimer.timeoutSuccessDelay;
  return;
}


/* Void KogamaRedirect() */

void Assembly-CSharp.dll::AdIntegration::InHouse::GeneralPromotionAd::
     GeneralPromotionAd_KogamaRedirect(GeneralPromotionAd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__StatHatWrapper);
    func_?(&StringLiteral_InHouseAd_Kogama_Elite);
    func_?(&StringLiteral_InHouseAd_Kogama_Redirect);
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVLocalPlayer *)0x0) {
      bVar1 = MVPlayer::MVPlayer_get_IsTourist((MVPlayer *)this_01,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        if (cRam_? == '\0') {
          GeneralPromotionAd_ShowGoToKogamaPopup((GeneralPromotionAd *)0x0,(MethodInfo *)0x0);
          return;
        }
        if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        StatHatWrapper::StatHatWrapper_Count
                  (StringLiteral_InHouseAd_Kogama_Redirect,1,(MethodInfo *)0x0);
        BrowserCommGotoRequests::BrowserCommGotoRequests_GotoMainpage
                  (cRam_? == '\0',0,(MethodInfo *)0x0);
        return;
      }
      if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar2 = StringLiteral_InHouseAd_Kogama_Elite;
      StatHatWrapper::StatHatWrapper_Count(StringLiteral_InHouseAd_Kogama_Elite,1,(MethodInfo *)0x0)
      ;
      if (*(char *)&pSVar2[7].klass == '\0') {
        if (cRam_? == '\0') {
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        value = (Object *)func_?();
        if (value != (Object *)0x0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    (value,ExceptionArgument__Enum_obj,unaff_EDI);
          original = in_stack_3[2].fields._.m_CachedPtr;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pOVar4 = (Object__Class *)
                   UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                             (original,
                              UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                             );
          value[1].klass = pOVar4;
          func_?();
          root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (in_stack_3,(MethodInfo *)0x0);
          callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
          if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                       MethodInfo__AdIntegration__InHouse__GeneralPromotionAd____c__DisplayClass32_0___ShowGoToKogamaPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (root,(BaseEventData *)0x0,callbackFunction,
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
      BrowserCommGotoRequests::BrowserCommGotoRequests_GotoEliteUpgrade(1,0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnContinueClicked() */

void Assembly-CSharp.dll::AdIntegration::InHouse::GeneralPromotionAd::
     GeneralPromotionAd_OnContinueClicked(GeneralPromotionAd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ITouristAdController>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<ITouristAdController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ITouristAdController>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__AdIntegration__InHouse__GeneralPromotionAd____c___OnContinueClicked_b__35_0_ITouristAdController__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AdIntegration__InHouse__GeneralPromotionAd____c);
    cRam_? = '\x01';
  }
  if (((this->fields).generalPromotionType == 0) && ((this->fields).promotionShowsAd != 0)) {
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__AdIntegration__InHouse__GeneralPromotionAd____c->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?(TypeInfo__AdIntegration__InHouse__GeneralPromotionAd____c);
    }
    callbackFunction =
         TypeInfo__AdIntegration__InHouse__GeneralPromotionAd____c->static_fields->__9__35_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_ITouristAdController_ *)0x0) {
      if ((TypeInfo__AdIntegration__InHouse__GeneralPromotionAd____c->_1).cctor_finished_or_no_cctor
          == 0) {
        func_?(TypeInfo__AdIntegration__InHouse__GeneralPromotionAd____c);
      }
      object = TypeInfo__AdIntegration__InHouse__GeneralPromotionAd____c->static_fields->__9;
      callbackFunction =
           (ExecuteEvents_EventFunction_1_ITouristAdController_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ITouristAdController>
                          );
      if (callbackFunction == (ExecuteEvents_EventFunction_1_ITouristAdController_ *)0x0) {
        func_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__AdIntegration__InHouse__GeneralPromotionAd____c___OnContinueClicked_b__35_0_ITouristAdController__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__AdIntegration__InHouse__GeneralPromotionAd____c->static_fields->__9__35_0 =
           callbackFunction;
      func_?(&TypeInfo__AdIntegration__InHouse__GeneralPromotionAd____c->static_fields->
                       __9__35_0,callbackFunction);
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<ITouristAdController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ITouristAdController>_
              );
    return;
  }
  if ((this->fields).popped == 0) {
    bVar2 = cRam_? == '\0';
    (this->fields).popped = 1;
    if (bVar2) {
      func_?(&TypeInfo__AdIntegration__InHouse__GeneralPromotionAd___FadeOutAndPop_d__37);
      cRam_? = '\x01';
    }
    value = (Object *)
            func_?(
                           TypeInfo__AdIntegration__InHouse__GeneralPromotionAd___FadeOutAndPop_d__37
                           );
    if (value == (Object *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value[1].klass = (Object__Class *)0x0;
    value[2].klass = (Object__Class *)this;
    func_?(value + 2,this);
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
              ((MonoBehaviour *)this,(IEnumerator *)value,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::AdIntegration::InHouse::GeneralPromotionAd::GeneralPromotionAd_OnDestroy
               (GeneralPromotionAd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<IWinningCondition>);
    func_?(&
                    MethodInfo__AdIntegration__InHouse__GeneralPromotionAd__OnWinningConditionFulfilled_IWinningCondition_
                   );
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    unaff_EBX = (Action_1_IWinningCondition___Class *)(pMVar1->fields).OnWinningConditionFulfilled;
    this_00 = (Action_1_Object_ *)func_?(TypeInfo__System__Action<IWinningCondition>);
    unaff_EDI = (Delegate *)0x0;
    if (this_00 != (Action_1_Object_ *)0x0) {
      mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                (this_00,(Object *)0x0,
                 MethodInfo__AdIntegration__InHouse__GeneralPromotionAd__OnWinningConditionFulfilled_IWinningCondition_
                 ,(MethodInfo *)0x0);
      unaff_EDI = mscorlib.dll::System::Delegate::Delegate_Remove
                            ((Delegate *)unaff_EBX,(Delegate *)this_00,(MethodInfo *)0x0);
      unaff_EBX = TypeInfo__System__Action<IWinningCondition>;
      if (unaff_EDI == (Delegate *)0x0) {
        (pMVar1->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
        pDStack2 = (Delegate *)&(pMVar1->fields).OnWinningConditionFulfilled;
        pAStack3 = (Action_1_IWinningCondition___Class *)unaff_EDI;
        func_?();
        return;
      }
      pAStack3 = TypeInfo__System__Action<IWinningCondition>;
      pDStack2 = unaff_EDI;
      pAVar4 = (Action_1_IWinningCondition_ *)func_?();
      if (pAVar4 != (Action_1_IWinningCondition_ *)0x0) {
        (pMVar1->fields).OnWinningConditionFulfilled = pAVar4;
        unaff_EBX = TypeInfo__System__Action<IWinningCondition>;
        pAStack3 = TypeInfo__System__Action<IWinningCondition>;
        pDStack2 = unaff_EDI;
        pAStack3 = (Action_1_IWinningCondition___Class *)func_?();
        if (pAStack3 != (Action_1_IWinningCondition___Class *)0x0) {
          pDStack2 = (Delegate *)&(pMVar1->fields).OnWinningConditionFulfilled;
          func_?();
          return;
        }
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  pDStack2 = unaff_EDI;
  pAStack3 = unaff_EBX;
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnWinningConditionFulfilled(IWinningCondition) */

void Assembly-CSharp.dll::AdIntegration::InHouse::GeneralPromotionAd::
     GeneralPromotionAd_OnWinningConditionFulfilled
               (IWinningCondition *winningCondition,MethodInfo *method)

{
  MVGameControllerDesktop::MVGameControllerDesktop_CursorLock(0,0,(MethodInfo *)0x0);
  return;
}


/* Void PerformAction(String, UnityAction`2[System.Boolean,System.Boolean]) */

void Assembly-CSharp.dll::AdIntegration::InHouse::GeneralPromotionAd::
     GeneralPromotionAd_PerformAction
               (GeneralPromotionAd *this,String *statKey,
               UnityAction_2_System_Boolean_System_Boolean_ *action,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__EmbeddedSite);
    func_?(&TypeInfo__StatHatWrapper);
    func_?(&StringLiteral_action_not_permitted_for_site_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__StatHatWrapper);
  }
  StatHatWrapper::StatHatWrapper_Count(statKey,1,(MethodInfo *)0x0);
  if ((this->fields).embeddedSiteConfigData.allowsModals == 0) {
    if ((this->fields).embeddedSiteConfigData.allowsOpenInNewTab == 0) {
      if ((this->fields).embeddedSiteConfigData.allowsRedirectToWebpage == 0) {
        message = (Object *)func_?(TypeInfo__EmbeddedSite);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log(message,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)StringLiteral_action_not_permitted_for_site_,(MethodInfo *)0x0);
        return;
      }
      if (action != (UnityAction_2_System_Boolean_System_Boolean_ *)0x0) {
        (*(action->fields)._._.invoke_impl)((action->fields)._._.method_code,0);
        return;
      }
    }
    else if (action != (UnityAction_2_System_Boolean_System_Boolean_ *)0x0) {
      (*(action->fields)._._.invoke_impl)((action->fields)._._.method_code,1);
      return;
    }
  }
  else if (action != (UnityAction_2_System_Boolean_System_Boolean_ *)0x0) {
    (*(action->fields)._._.invoke_impl)((action->fields)._._.method_code,0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Pop() */

void Assembly-CSharp.dll::AdIntegration::InHouse::GeneralPromotionAd::GeneralPromotionAd_Pop
               (GeneralPromotionAd *this,MethodInfo *method)

{
  if ((this->fields).popped == 0) {
    bVar1 = cRam_? == '\0';
    (this->fields).popped = 1;
    if (bVar1) {
      func_?(&TypeInfo__AdIntegration__InHouse__GeneralPromotionAd___FadeOutAndPop_d__37);
      cRam_? = '\x01';
    }
    value = (Object *)
            func_?(
                           TypeInfo__AdIntegration__InHouse__GeneralPromotionAd___FadeOutAndPop_d__37
                           );
    if (value == (Object *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value[1].klass = (Object__Class *)0x0;
    value[2].klass = (Object__Class *)this;
    func_?(value + 2,this);
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
              ((MonoBehaviour *)this,(IEnumerator *)value,(MethodInfo *)0x0);
  }
  return;
}


/* Void ShowGoToKogamaPopup() */

void Assembly-CSharp.dll::AdIntegration::InHouse::GeneralPromotionAd::
     GeneralPromotionAd_ShowGoToKogamaPopup(GeneralPromotionAd *this,MethodInfo *method)

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
                    MethodInfo__AdIntegration__InHouse__GeneralPromotionAd____c__DisplayClass32_0___ShowGoToKogamaPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AdIntegration__InHouse__GeneralPromotionAd____c__DisplayClass32_0);
    cRam_? = '\x01';
  }
  value = (Object *)
          func_?(
                         TypeInfo__AdIntegration__InHouse__GeneralPromotionAd____c__DisplayClass32_0
                         );
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    pGVar1 = (this->fields).goToKogamaPopupPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pOVar2 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pGVar1,
                        UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
    value[1].klass = pOVar2;
    func_?(value + 1,pOVar2);
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                 MethodInfo__AdIntegration__InHouse__GeneralPromotionAd____c__DisplayClass32_0___ShowGoToKogamaPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar1,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::AdIntegration::InHouse::GeneralPromotionAd::GeneralPromotionAd_Start
               (GeneralPromotionAd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<IWinningCondition>);
    func_?(&
                    MethodInfo__AdIntegration__InHouse__GeneralPromotionAd__OnWinningConditionFulfilled_IWinningCondition_
                   );
    func_?(&TypeInfo__StatHatWrapper);
    func_?(&TypeInfo__System__Uri);
    func_?(&StringLiteral_InHouseAd_Kogama);
    func_?(&StringLiteral_www_);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__StatHatWrapper);
  }
  StatHatWrapper::StatHatWrapper_Count(StringLiteral_InHouseAd_Kogama,1,(MethodInfo *)0x0);
  this_00 = (this->fields).embeddedPlayerConfig;
  if (this_00 != (EmbeddedPlayerConfig *)0x0) {
    pEVar1 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                        ((EmbeddedSiteConfigData *)&stack0xffffffe8,this_00,(MethodInfo *)0x0);
    iVar2 = pEVar1->siteEnum;
    bVar3 = pEVar1->showTouristPromotion;
    bVar4 = pEVar1->allowsOpenInNewTab;
    bVar5 = pEVar1->allowsRedirectToWebpage;
    bVar6 = pEVar1->allowsModals;
    bVar7 = pEVar1->integratedSdk;
    bVar8 = pEVar1->allowsFallbackAds;
    bVar9 = pEVar1->showPlayButtonAd;
    bVar10 = pEVar1->hideGoldShop;
    bVar11 = pEVar1->allowInHouseAds;
    bVar12 = pEVar1->removeFullscreenButton;
    uVar13 = *(undefined2 *)&pEVar1->field_0x12;
    (this->fields).embeddedSiteConfigData.sites = pEVar1->sites;
    (this->fields).embeddedSiteConfigData.siteEnum = iVar2;
    (this->fields).embeddedSiteConfigData.showTouristPromotion = bVar3;
    (this->fields).embeddedSiteConfigData.allowsOpenInNewTab = bVar4;
    (this->fields).embeddedSiteConfigData.allowsRedirectToWebpage = bVar5;
    (this->fields).embeddedSiteConfigData.allowsModals = bVar6;
    (this->fields).embeddedSiteConfigData.integratedSdk = bVar7;
    (this->fields).embeddedSiteConfigData.allowsFallbackAds = bVar8;
    (this->fields).embeddedSiteConfigData.showPlayButtonAd = bVar9;
    (this->fields).embeddedSiteConfigData.hideGoldShop = bVar10;
    (this->fields).embeddedSiteConfigData.allowInHouseAds = bVar11;
    (this->fields).embeddedSiteConfigData.removeFullscreenButton = bVar12;
    *(undefined2 *)&(this->fields).embeddedSiteConfigData.field_0x12 = uVar13;
    func_?();
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pGVar14 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar14 != (GameSessionData *)0x0) {
      bVar3 = System.dll::System::Collections::Generic::SortedList`2[TKey,TValue]+ValueList[System
               ::Single,System::Object]::
               SortedList_2_TKey_TValue_ValueList_System_Single_System_Object__get_IsReadOnly
                         ((SortedList_2_TKey_TValue_ValueList_System_Single_System_Object_ *)pGVar14,
                          (MethodInfo *)0x0);
      if (bVar3 == 0) {
        bVar3 = 0;
      }
      else {
        bVar3 = 1;
        if ((this->fields).embeddedSiteConfigData.allowsRedirectToWebpage == 0) {
          bVar3 = (this->fields).embeddedSiteConfigData.allowsOpenInNewTab;
        }
      }
      (this->fields).redirectAllowed = bVar3 != 0;
      pMVar15 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar15 != (MVNetworkGame *)0x0) {
        pAVar16 = (pMVar15->fields).OnWinningConditionFulfilled;
        this_01 = (Action_1_Object_ *)func_?();
        if (this_01 != (Action_1_Object_ *)0x0) {
          mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                    (this_01,(Object *)0x0,
                     MethodInfo__AdIntegration__InHouse__GeneralPromotionAd__OnWinningConditionFulfilled_IWinningCondition_
                     ,(MethodInfo *)0x0);
          pDVar17 = mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pAVar16,(Delegate *)this_01,(MethodInfo *)0x0);
          if (pDVar17 == (Delegate *)0x0) {
            (pMVar15->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
          }
          else {
            pAVar16 = (Action_1_IWinningCondition_ *)func_?();
            if (pAVar16 == (Action_1_IWinningCondition_ *)0x0) goto code_?;
            (pMVar15->fields).OnWinningConditionFulfilled = pAVar16;
            iVar18 = func_?();
            if (iVar18 == 0) goto code_?;
          }
          func_?();
          pGVar19 = (this->fields).redirectButton;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pGVar14 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
          if ((pGVar14 != (GameSessionData *)0x0) && (pGVar19 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar19,(pGVar14->fields).embedded,(MethodInfo *)0x0);
            pMVar15 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar15 != (MVNetworkGame *)0x0) {
              pSVar20 = (pMVar15->fields)._KogamaMainpageURL_k__BackingField;
              this_02 = (Uri *)func_?();
              if (this_02 != (Uri *)0x0) {
                System.dll::System::Uri::Uri__ctor(this_02,pSVar20,(MethodInfo *)0x0);
                pTVar21 = (this->fields).redirectButtonURLText;
                pSVar20 = System.dll::System::Uri::Uri_get_Host(this_02,(MethodInfo *)0x0);
                if (pSVar20 != (String *)0x0) {
                  pSVar20 = mscorlib.dll::System::String::String_Replace_1
                                      (pSVar20,StringLiteral_www_,::StringLiteral__,
                                       (MethodInfo *)0x0);
                  if (pSVar20 != (String *)0x0) {
                    mscorlib.dll::System::String::String_ToUpper(pSVar20,(MethodInfo *)0x0);
                    if (pTVar21 != (Text *)0x0) {
                      (*(pTVar21->klass->vtable).set_text.methodPtr)(pTVar21);
                      pGVar19 = (this->fields).actionButton;
                      if (((this->fields).embeddedSiteConfigData.allowsRedirectToWebpage == 0) &&
                         ((this->fields).embeddedSiteConfigData.allowsOpenInNewTab == 0)) {
                        bVar3 = (this->fields).embeddedSiteConfigData.allowsModals;
                      }
                      else {
                        bVar3 = 1;
                      }
                      if (pGVar19 != (GameObject *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                  (pGVar19,bVar3 != 0,(MethodInfo *)0x0);
                        fVar22 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                           ((MethodInfo *)0x0);
                        (this->fields).startTime = fVar22;
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AdIntegration::InHouse::GeneralPromotionAd::GeneralPromotionAd_Update
               (GeneralPromotionAd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    func_?();
    cRam_? = '\x01';
  }
  if ((this->fields).finishedWaiting == 0) {
    fStack_1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    fStack_1 = fStack_1 - (this->fields).startTime;
    if (fStack_1 < (this->fields).secondsToWait) {
      fVar2 = (this->fields).secondsToWait;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Math);
        cRam_? = '\x01';
      }
      fVar2 = fVar2 - fStack_1;
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Math);
      }
      uStack_3 = (double)fVar2;
      fVar4 = (float10)func_?(uStack_3);
      pTVar5 = (this->fields).continueText;
      uStack_3 = (double)CONCAT44((int)fVar4,SUB84((double)fVar4,0));
      str0 = GeneralPromotionAd_get_StartContinueText(this,(MethodInfo *)0x0);
      str2 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)((int)&uStack_3 + 4),(MethodInfo *)0x0);
      mscorlib.dll::System::String::String_Concat_5
                (str0,::StringLiteral___,str2,::StringLiteral__,(MethodInfo *)0x0);
      if (pTVar5 != (Text *)0x0) {
        pTVar6 = pTVar5->klass;
        pMStack7 = (pTVar6->vtable).set_text.method;
        (*(pTVar6->vtable).set_text.methodPtr)();
        return;
      }
      func_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    GeneralPromotionAd_ActivateContinueButton(this,(MethodInfo *)0x0);
  }
  return;
}


/* Void <FadeOutAndPop>b__37_0(Single) */

void Assembly-CSharp.dll::AdIntegration::InHouse::GeneralPromotionAd::
     GeneralPromotionAd__FadeOutAndPop_b__37_0(GeneralPromotionAd *this,float t,MethodInfo *method)

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
                    MethodInfo__AdIntegration__InHouse__GeneralPromotionAd____c___FadeOutAndPop_b__37_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AdIntegration__InHouse__GeneralPromotionAd____c);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).canvasGroup;
  if (this_00 != (CanvasGroup *)0x0) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (this_00,t,(MethodInfo *)0x0);
    if (t == _UNK_?) {
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (this_01 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
      if ((TypeInfo__AdIntegration__InHouse__GeneralPromotionAd____c->_1).cctor_finished_or_no_cctor
          == 0) {
        func_?();
      }
      callbackFunction =
           TypeInfo__AdIntegration__InHouse__GeneralPromotionAd____c->static_fields->__9__37_1;
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if ((TypeInfo__AdIntegration__InHouse__GeneralPromotionAd____c->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        object = TypeInfo__AdIntegration__InHouse__GeneralPromotionAd____c->static_fields->__9;
        callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
        if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0)
        goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__AdIntegration__InHouse__GeneralPromotionAd____c___FadeOutAndPop_b__37_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__AdIntegration__InHouse__GeneralPromotionAd____c->static_fields->__9__37_1 =
             callbackFunction;
        func_?();
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (this_01,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
    }
    return;
  }
code_?:
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* GeneralPromotionAd() */

void Assembly-CSharp.dll::AdIntegration::InHouse::GeneralPromotionAd::GeneralPromotionAd__ctor
               (GeneralPromotionAd *this,MethodInfo *method)

{
  (this->fields).generalPromotionType = 1;
  (this->fields).secondsToWait = 20.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* String get_StartContinueText() */

String * Assembly-CSharp.dll::AdIntegration::InHouse::GeneralPromotionAd::
         GeneralPromotionAd_get_StartContinueText(GeneralPromotionAd *this,MethodInfo *method)

{
  pSVar1 = (this->fields).startContinueText;
  if (pSVar1 == (String *)0x0) {
    pTVar2 = (this->fields).continueText;
    if (pTVar2 == (Text *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      pSVar1 = (String *)(*pcVar3)();
      return pSVar1;
    }
    pSVar1 = (String *)
             (*(pTVar2->klass->vtable).get_text.methodPtr)
                       (pTVar2,(pTVar2->klass->vtable).get_text.method);
    (this->fields).startContinueText = pSVar1;
    func_?(&(this->fields).startContinueText,pSVar1);
  }
  return pSVar1;
}


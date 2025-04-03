
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
  if (iVar1 != 0) {
    if (iVar1 != 1) {
      pUVar2 = (UnityAction_2_System_Int32_System_Int32_ *)
               func_?(TypeInfo__UnityEngine__Events__UnityAction<bool,_bool>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
      UnityAction_2_System_Int32_System_Int32___ctor
                (pUVar2,(Object *)0x0,MethodInfo__BrowserCommGotoRequests__GotoSignup_bool__bool_,
                 (MethodInfo *)0x0);
      GeneralPromotionAd_PerformAction
                (this,StringLiteral_InHouseAd_Kogama_Signup,
                 (UnityAction_2_System_Boolean_System_Boolean_ *)pUVar2,(MethodInfo *)0x0);
      return;
    }
    pUVar2 = (UnityAction_2_System_Int32_System_Int32_ *)
             func_?(TypeInfo__UnityEngine__Events__UnityAction<bool,_bool>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
    UnityAction_2_System_Int32_System_Int32___ctor
              (pUVar2,(Object *)0x0,
               MethodInfo__BrowserCommGotoRequests__GotoEliteUpgrade_bool__bool_,(MethodInfo *)0x0);
    GeneralPromotionAd_PerformAction
              (this,StringLiteral_InHouseAd_Kogama_Elite,
               (UnityAction_2_System_Boolean_System_Boolean_ *)pUVar2,(MethodInfo *)0x0);
    return;
  }
  pUVar2 = (UnityAction_2_System_Int32_System_Int32_ *)
           func_?(TypeInfo__UnityEngine__Events__UnityAction<bool,_bool>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
  UnityAction_2_System_Int32_System_Int32___ctor
            (pUVar2,(Object *)0x0,MethodInfo__BrowserCommGotoRequests__GotoPurchaseGold_bool__bool_,
             (MethodInfo *)0x0);
  GeneralPromotionAd_PerformAction
            (this,StringLiteral_InHouseAd_Kogama_Gold,
             (UnityAction_2_System_Boolean_System_Boolean_ *)pUVar2,(MethodInfo *)0x0);
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
             (*(code *)(pTVar2->klass->vtable).get_text.method)
                       (pTVar2,(pTVar2->klass->vtable).set_text.methodPtr);
    ppSVar3 = &(this->fields).startContinueText;
    *ppSVar3 = pSVar1;
    func_?(ppSVar3,pSVar1);
  }
  else if (pTVar2 == (Text *)0x0) goto code_?;
  (*(code *)(pTVar2->klass->vtable).set_text.method)
            (pTVar2,pSVar1,(pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
  this_00 = (this->fields).continueButton;
  if (this_00 != (Button *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
              ((Selectable *)this_00,1,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  method_00 = TypeInfo__AdIntegration__InHouse__GeneralPromotionAd___FadeOutAndPop_d__37;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
  func_?(value + 2,this);
  return (IEnumerator *)value;
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
      pVVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
               VisualTreeAsset+AssetEntry]::
               List_1_UnityEngine_UIElements_VisualTreeAsset_AssetEntry__get_Item
                         (&VStack_4,
                          (List_1_UnityEngine_UIElements_VisualTreeAsset_AssetEntry_ *)pLVar2,
                          (promotionLooksData->fields).promotionIndex,
                          MethodInfo__System__Collections__Generic__List<AdIntegration::InHouse::PromotionLooksData::LooksData>__get_Item_int_
                         );
      pSVar5 = TM::TM__(pVVar3->typeFullName,(MethodInfo *)0x0);
      if (pOVar1 != (Object_1__Class *)0x0) {
        pIVar6 = (pOVar1->_0).image;
        VStack_4.typeFullName = (String *)pIVar6[0x12].nameNoExt;
        VStack_7.asset = (Object_1 *)&UNK_?;
        VStack_7.m_CachedType = (Type *)pOVar1;
        VStack_4.path = pSVar5;
        (*(code *)pIVar6[0x12].name)();
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
          pVVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                   VisualTreeAsset+AssetEntry]::
                   List_1_UnityEngine_UIElements_VisualTreeAsset_AssetEntry__get_Item
                             (&VStack_7,
                              (List_1_UnityEngine_UIElements_VisualTreeAsset_AssetEntry_ *)pLVar2,
                              (promotionLooksData->fields).promotionIndex,
                              MethodInfo__System__Collections__Generic__List<AdIntegration::InHouse::PromotionLooksData::LooksData>__get_Item_int_
                             );
          VStack_4.path = pVVar3->path;
          VStack_4.typeFullName = pVVar3->typeFullName;
          VStack_4.asset = pVVar3->asset;
          VStack_4.m_CachedType = pVVar3->m_CachedType;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            VStack_7.m_CachedType = (Type *)TypeInfo__UnityEngine__Object;
            VStack_7.asset = (Object_1 *)&UNK_?;
            func_?();
          }
          this_00 = (Component *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                              ((Object *)VStack_4.path,
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
              pVVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                       VisualTreeAsset+AssetEntry]::
                       List_1_UnityEngine_UIElements_VisualTreeAsset_AssetEntry__get_Item
                                 (&VStack_7,
                                  (List_1_UnityEngine_UIElements_VisualTreeAsset_AssetEntry_ *)
                                  pLVar2,(promotionLooksData->fields).promotionIndex,
                                  MethodInfo__System__Collections__Generic__List<AdIntegration::InHouse::PromotionLooksData::LooksData>__get_Item_int_
                                 );
              pTVar8 = (this->fields).actionText;
              bVar9 = cRam_? == '\0';
              pTVar10 = pVVar3->m_CachedType;
              (this->fields).promotionActionType = (int32_t)pTVar10;
              if (bVar9) {
                VStack_7.m_CachedType = (Type *)&StringLiteral_JOIN_THE_ELITE;
                VStack_7.asset = (Object_1 *)&UNK_?;
                func_?();
                VStack_7.asset = (Object_1 *)&StringLiteral_SIGN_UP;
                VStack_7.typeFullName = (String *)&UNK_?;
                func_?();
                VStack_7.typeFullName = (String *)&StringLiteral_BUY_GOLD;
                VStack_7.path = (String *)&UNK_?;
                func_?();
                cRam_? = '\x01';
              }
              pSVar5 = StringLiteral_BUY_GOLD;
              if ((pTVar10 != (Type *)0x0) &&
                 (pSVar5 = StringLiteral_JOIN_THE_ELITE, pTVar10 != (Type *)0x1)) {
                pSVar5 = StringLiteral_SIGN_UP;
              }
              pSVar5 = TM::TM__(pSVar5,(MethodInfo *)0x0);
              if (pTVar8 != (Text *)0x0) {
                (*(code *)(pTVar8->klass->vtable).set_text.method)
                          (pTVar8,pSVar5,
                           (pTVar8->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
                pTVar8 = (this->fields).whySeeingThisText;
                if ((pTVar8 != (Text *)0x0) &&
                   (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject((Component *)pTVar8,(MethodInfo *)0x0),
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
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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
      if (*(char *)&pSVar2[7].monitor == '\0') {
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
        method_00 = TypeInfo__AdIntegration__InHouse__GeneralPromotionAd____c__DisplayClass32_0;
        value = (Object *)func_?();
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
        original = in_stack_3[3].klass;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pOVar4 = (Object__Class *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                           ((Object *)original,
                            UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                           );
        if (value != (Object *)0x0) {
          value[1].klass = pOVar4;
          func_?();
          root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (in_stack_3,(MethodInfo *)0x0);
          callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                     MethodInfo__AdIntegration__InHouse__GeneralPromotionAd____c__DisplayClass32_0___ShowGoToKogamaPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (root,(BaseEventData *)0x0,callbackFunction,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          return;
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
    bVar1 = cRam_? == '\0';
    (this->fields).popped = 1;
    if (bVar1) {
      func_?(&TypeInfo__AdIntegration__InHouse__GeneralPromotionAd___FadeOutAndPop_d__37);
      cRam_? = '\x01';
    }
    method_00 = TypeInfo__AdIntegration__InHouse__GeneralPromotionAd___FadeOutAndPop_d__37;
    value = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
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
  if (pMVar1 == (MVNetworkGame *)0x0) {
    func_?();
  }
  else {
    pAVar2 = (pMVar1->fields).OnWinningConditionFulfilled;
    ppAVar3 = &(pMVar1->fields).OnWinningConditionFulfilled;
    this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?(TypeInfo__System__Action<IWinningCondition>);
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_00,(Object *)0x0,
               MethodInfo__AdIntegration__InHouse__GeneralPromotionAd__OnWinningConditionFulfilled_IWinningCondition_
               ,(MethodInfo *)0x0);
    unaff_ESI = mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    unaff_EDI = TypeInfo__System__Action<IWinningCondition>;
    if (unaff_ESI == (Delegate *)0x0) {
      *ppAVar3 = (Action_1_IWinningCondition_ *)0x0;
      pDStack4 = (Delegate *)ppAVar3;
      pAStack5 = (Action_1_IWinningCondition___Class *)unaff_ESI;
      func_?();
      return;
    }
    pAStack5 = TypeInfo__System__Action<IWinningCondition>;
    pDStack4 = unaff_ESI;
    pAVar2 = (Action_1_IWinningCondition_ *)func_?();
    if (pAVar2 != (Action_1_IWinningCondition_ *)0x0) {
      *ppAVar3 = pAVar2;
      unaff_EDI = TypeInfo__System__Action<IWinningCondition>;
      pAStack5 = TypeInfo__System__Action<IWinningCondition>;
      pDStack4 = unaff_ESI;
      pAStack5 = (Action_1_IWinningCondition___Class *)func_?();
      if (pAStack5 != (Action_1_IWinningCondition___Class *)0x0) {
        pDStack4 = (Delegate *)ppAVar3;
        func_?();
        return;
      }
    }
  }
  pDStack4 = unaff_ESI;
  pAStack5 = unaff_EDI;
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(message,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
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
    method_00 = TypeInfo__AdIntegration__InHouse__GeneralPromotionAd___FadeOutAndPop_d__37;
    value = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
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
  method_00 = TypeInfo__AdIntegration__InHouse__GeneralPromotionAd____c__DisplayClass32_0;
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
               MethodInfo__AdIntegration__InHouse__GeneralPromotionAd____c__DisplayClass32_0___ShowGoToKogamaPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
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
  if (this_00 == (EmbeddedPlayerConfig *)0x0) {
code_?:
    func_?();
  }
  else {
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
    bVar13 = pEVar1->hideSignUp;
    bVar14 = pEVar1->noPlayButtonVideoIcon;
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
    (this->fields).embeddedSiteConfigData.hideSignUp = bVar13;
    (this->fields).embeddedSiteConfigData.noPlayButtonVideoIcon = bVar14;
    func_?();
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pGVar15 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar15 == (GameSessionData *)0x0) goto code_?;
    bVar3 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
             VerticalVirtualizationController`1[System::Object]::
             VerticalVirtualizationController_1_System_Object__get_alwaysRebindOnRefresh
                       ((VerticalVirtualizationController_1_System_Object_ *)pGVar15,
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
    pMVar16 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar16 == (MVNetworkGame *)0x0) goto code_?;
    a = (pMVar16->fields).OnWinningConditionFulfilled;
    this_01 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?();
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_01,(Object *)0x0,
               MethodInfo__AdIntegration__InHouse__GeneralPromotionAd__OnWinningConditionFulfilled_IWinningCondition_
               ,(MethodInfo *)0x0);
    pDVar17 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)a,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pDVar17 == (Delegate *)0x0) {
      (pMVar16->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
code_?:
      func_?();
      pGVar18 = (this->fields).redirectButton;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pGVar15 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if ((pGVar15 != (GameSessionData *)0x0) && (pGVar18 != (GameObject *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar18,(pGVar15->fields).embedded,(MethodInfo *)0x0);
        pMVar16 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar16 != (MVNetworkGame *)0x0) {
          pSVar19 = (pMVar16->fields)._KogamaMainpageURL_k__BackingField;
          this_02 = (Uri *)func_?();
          System.dll::System::Uri::Uri__ctor(this_02,pSVar19,(MethodInfo *)0x0);
          pTVar20 = (this->fields).redirectButtonURLText;
          if (this_02 != (Uri *)0x0) {
            pSVar19 = System.dll::System::Uri::Uri_get_Host(this_02,(MethodInfo *)0x0);
            if (pSVar19 != (String *)0x0) {
              pSVar19 = mscorlib.dll::System::String::String_Replace_1
                                  (pSVar19,StringLiteral_www_,::StringLiteral__,(MethodInfo *)0x0);
              if (pSVar19 != (String *)0x0) {
                mscorlib.dll::System::String::String_ToUpper(pSVar19,(MethodInfo *)0x0);
                if (pTVar20 != (Text *)0x0) {
                  (*(code *)(pTVar20->klass->vtable).set_text.method)(pTVar20);
                  pGVar18 = (this->fields).actionButton;
                  if (((this->fields).embeddedSiteConfigData.allowsRedirectToWebpage == 0) &&
                     ((this->fields).embeddedSiteConfigData.allowsOpenInNewTab == 0)) {
                    bVar3 = (this->fields).embeddedSiteConfigData.allowsModals;
                  }
                  else {
                    bVar3 = 1;
                  }
                  if (pGVar18 != (GameObject *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar18,bVar3 != 0,(MethodInfo *)0x0);
                    fVar21 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                       ((MethodInfo *)0x0);
                    (this->fields).startTime = fVar21;
                    return;
                  }
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
    iVar22 = func_?();
    if (iVar22 == 0) goto code_?;
    _UNK_? = iVar22;
    iVar22 = func_?();
    if (iVar22 != 0) goto code_?;
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
    func_?(&::StringLiteral___);
    cRam_? = '\x01';
  }
  if ((this->fields).finishedWaiting != 0) {
    return;
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar2 = (this->fields).secondsToWait;
  pTStack_3 = (Text *)(fVar1 - (this->fields).startTime);
  if (fVar2 <= (float)pTStack_3) {
    GeneralPromotionAd_ActivateContinueButton(this,(MethodInfo *)0x0);
    return;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  fVar2 = fVar2 - (float)pTStack_3;
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  uStack_4 = (double)fVar2;
  fVar5 = (float10)func_?(uStack_4);
  pTVar6 = (this->fields).continueText;
  ppSVar7 = &(this->fields).startContinueText;
  str0 = *ppSVar7;
  uStack_4._0_4_ = SUB84((double)fVar5,0);
  uStack_4 = (double)CONCAT44((int)fVar5,(undefined4)uStack_4);
  if (str0 == (String *)0x0) {
    if (pTVar6 == (Text *)0x0) goto code_?;
    str0 = (String *)(*(code *)(pTVar6->klass->vtable).get_text.method)(pTVar6);
    *ppSVar7 = str0;
    func_?(ppSVar7,str0);
  }
  str2 = mscorlib.dll::System::Int32::Int32_ToString
                   ((Int32 *)((int)&uStack_4 + 4),(MethodInfo *)0x0);
  mscorlib.dll::System::String::String_Concat_5
            (str0,::StringLiteral___,str2,::StringLiteral__,(MethodInfo *)0x0);
  if (pTVar6 != (Text *)0x0) {
    uStack_4 = (double)CONCAT44(&UNK_?,(undefined4)uStack_4);
    pTStack_3 = pTVar6;
    (*(code *)(pTVar6->klass->vtable).set_text.method)();
    return;
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
  ppSVar2 = &(this->fields).startContinueText;
  if (pSVar1 == (String *)0x0) {
    pTVar3 = (this->fields).continueText;
    if (pTVar3 == (Text *)0x0) {
      func_?();
      pcVar4 = (code *)swi(3);
      pSVar1 = (String *)(*pcVar4)();
      return pSVar1;
    }
    pSVar1 = (String *)
             (*(code *)(pTVar3->klass->vtable).get_text.method)
                       (pTVar3,(pTVar3->klass->vtable).set_text.methodPtr);
    *ppSVar2 = pSVar1;
    func_?(ppSVar2,pSVar1);
  }
  return pSVar1;
}


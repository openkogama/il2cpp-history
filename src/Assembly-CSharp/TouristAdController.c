
/* Void Initialize() */

void Assembly-CSharp.dll::TouristAdController::TouristAdController_Initialize
               (TouristAdController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
                   );
    func_?(&
                    TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>
                   );
    func_?(&MethodInfo__TouristAdController__OnChangeMode_MV__Common__SpawnRoleModeType_);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)this,1,(MethodInfo *)0x0);
  pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if (pSVar1 != (SpawnRoleDataMediator *)0x0) {
    this_00 = (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
              (pSVar1->fields).spawnRoleMode;
    value = (SpawnRoleVariable_1_T_SubDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *
            )func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              ((UnityAction_1_System_Int32Enum_ *)value,unaff_EDI,
               MethodInfo__TouristAdController__OnChangeMode_MV__Common__SpawnRoleModeType_,
               (MethodInfo *)0x0);
    if (this_00 != (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleVariable`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__add_OnChange
                (this_00,value,
                 MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
                );
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void InterstitialAdResult(InterstitialAdResult) */

void Assembly-CSharp.dll::TouristAdController::TouristAdController_InterstitialAdResult
               (TouristAdController *this,InterstitialAdResult__Enum obj,MethodInfo *method)

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
                    MethodInfo__TouristAdController____c___InterstitialAdResult_b__19_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__TouristAdController____c);
    func_?(&StringLiteral_TouristAdController___Interstiti);
    cRam_? = '\x01';
  }
  (this->fields).timer = 0.0;
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__TouristAdController____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__TouristAdController____c);
  }
  callbackFunction = TypeInfo__TouristAdController____c->static_fields->__9__19_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__TouristAdController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__TouristAdController____c);
    }
    object = TypeInfo__TouristAdController____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__TouristAdController____c___InterstitialAdResult_b__19_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__TouristAdController____c->static_fields->__9__19_0 = callbackFunction;
    func_?(&TypeInfo__TouristAdController____c->static_fields->__9__19_0,callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  return;
}


/* Void OnChangeMode(SpawnRoleModeType) */

void Assembly-CSharp.dll::TouristAdController::TouristAdController_OnChangeMode
               (TouristAdController *this,SpawnRoleModeType__Enum type,MethodInfo *method)

{
  if (type == SpawnRoleModeType__Enum_Dead) {
    (this->fields).eligibleForPromotion = 1;
  }
  return;
}


/* Void OnPromotionPopped() */

void Assembly-CSharp.dll::TouristAdController::TouristAdController_OnPromotionPopped
               (TouristAdController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_TouristAdController___OnPromotio);
    cRam_? = '\x01';
  }
  pUVar1 = (this->fields).onPromotionWasPopped;
  if (pUVar1 != (UnityAction_2_System_Boolean_System_Boolean_ *)0x0) {
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,1,(this->fields).withAd,(pUVar1->fields)._._.method)
    ;
  }
  return;
}


/* Void ShowAd() */

void Assembly-CSharp.dll::TouristAdController::TouristAdController_ShowAd
               (TouristAdController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>)
    ;
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    func_?(&
                    MethodInfo__TouristAdController__InterstitialAdResult_Assets__Scripts__AdIntegration__InterstitialAdResult_
                   );
    func_?(&StringLiteral_TouristAdController___ShowAd___);
    cRam_? = '\x01';
  }
  pIVar1 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
  if (pIVar1 != (IAdManager *)0x0) {
    pTVar2 = mscorlib.dll::System::Object::Object_GetType((Object *)pIVar1,(MethodInfo *)0x0);
    str0 = StringLiteral_TouristAdController___ShowAd___;
    if (pTVar2 == (Type *)0x0) {
      str1 = (String *)0x0;
    }
    else {
      str1 = (String *)
             (*(code *)(pTVar2->klass->vtable).ToString.method)
                       (pTVar2,(pTVar2->klass->vtable).GetCustomAttributes.methodPtr);
    }
    mscorlib.dll::System::String::String_Concat_3(str0,str1,(MethodInfo *)0x0);
    pIVar1 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
    this_00 = (UnityAction_1_System_Int32Enum_ *)
              func_?(
                             TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_00,(Object *)this,
               MethodInfo__TouristAdController__InterstitialAdResult_Assets__Scripts__AdIntegration__InterstitialAdResult_
               ,(MethodInfo *)0x0);
    if (pIVar1 != (IAdManager *)0x0) {
      func_?(7,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,pIVar1,this_00,3);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ShowAdWithoutPromotion(InterstitialAdResult) */

void Assembly-CSharp.dll::TouristAdController::TouristAdController_ShowAdWithoutPromotion
               (TouristAdController *this,InterstitialAdResult__Enum obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_TouristAdController___ShowAdWith);
    cRam_? = '\x01';
  }
  pUVar1 = (this->fields).onPromotionWasPopped;
  (this->fields).timer = 0.0;
  if (pUVar1 != (UnityAction_2_System_Boolean_System_Boolean_ *)0x0) {
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,0,(this->fields).withAd,(pUVar1->fields)._._.method)
    ;
  }
  return;
}


/* Void ShowPromotion(UnityAction`2[System.Boolean,System.Boolean]) */

void Assembly-CSharp.dll::TouristAdController::TouristAdController_ShowPromotion
               (TouristAdController *this,UnityAction_2_System_Boolean_System_Boolean_ *onPop,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>)
    ;
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    func_?(&
                    AdIntegration__InHouse__GeneralPromotionAd_MethodInfo__UnityEngine__Object__Instantiate<AdIntegration::InHouse::GeneralPromotionAd>_AdIntegration__InHouse__GeneralPromotionAd_
                   );
    func_?(&
                    TouristPromotion_MethodInfo__UnityEngine__Object__Instantiate<TouristPromotion>_TouristPromotion_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__TouristAdController__ShowAdWithoutPromotion_Assets__Scripts__AdIntegration__InterstitialAdResult_
                   );
    func_?(&
                    MethodInfo__TouristAdController____c__DisplayClass16_0___ShowPromotion_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__TouristAdController____c__DisplayClass16_0);
    func_?(&
                    MethodInfo__TouristAdController____c__DisplayClass16_1___ShowPromotion_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__TouristAdController____c__DisplayClass16_1);
    cRam_? = '\x01';
  }
  original_00 = (TouristPromotion *)0x0;
  (this->fields).onPromotionWasPopped = onPop;
  (this->fields).eligibleForPromotion = 0;
  func_?(&(this->fields).onPromotionWasPopped);
  bVar1 = MVClientSettings::MVClientSettings_get_InterstitialsAdsEnabled((MethodInfo *)0x0);
  if ((bVar1 == 0) || ((this->fields).timer < (this->fields).timeBeforeAdShown)) {
    bVar1 = 0;
  }
  else {
    pIVar2 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
    if (pIVar2 == (IAdManager *)0x0) goto code_?;
    onPop = (UnityAction_2_System_Boolean_System_Boolean_ *)0x5;
    bVar1 = func_?(5,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,pIVar2);
  }
  (this->fields).withAd = bVar1;
  bVar1 = MVClientSettings::MVClientSettings_get_ShowTouristPromotion((MethodInfo *)0x0);
  if (bVar1 != 0) {
    this_00 = (this->fields).embeddedPlayerConfig;
    if (this_00 == (EmbeddedPlayerConfig *)0x0) goto code_?;
    pEVar3 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                       ((EmbeddedSiteConfigData *)&pLStack_4,this_00,(MethodInfo *)0x0);
    if (pEVar3->showTouristPromotion != 0) {
      x = (this->fields).touristPromotionExternalEvaluator;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        onPop = (UnityAction_2_System_Boolean_System_Boolean_ *)
                (this->fields).touristPromotionExternalEvaluator;
        if (onPop == (UnityAction_2_System_Boolean_System_Boolean_ *)0x0) goto code_?;
        bVar1 = TouristPromotionExternalEvaluator::
                TouristPromotionExternalEvaluator_TryGetExternalPromotion
                          ((TouristPromotionExternalEvaluator *)onPop,
                           (TouristPromotion **)&stack0xfffffff8,(MethodInfo *)0x0);
        if (bVar1 != 0) {
          pTStack_5 = TypeInfo__TouristAdController____c__DisplayClass16_0;
          pOVar6 = (Object *)func_?();
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    (pOVar6,ExceptionArgument__Enum_obj,(MethodInfo *)onPop);
          if (pOVar6 != (Object *)0x0) {
            pOVar6[1].monitor = (MonitorData *)this;
            func_?(&pOVar6[1].monitor,this);
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            pOVar7 = (Object__Class *)
                     UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                               ((Object *)original_00,
                                TouristPromotion_MethodInfo__UnityEngine__Object__Instantiate<TouristPromotion>_TouristPromotion_
                               );
            pOVar6[1].klass = pOVar7;
            func_?(pOVar6 + 1,pOVar7);
            pOVar7 = pOVar6[1].klass;
            if (pOVar7 == (Object__Class *)0x0) goto code_?;
            bVar1 = (this->fields).withAd;
            *(bool *)&(pOVar7->_0).castClass = bVar1;
            this_01 = (pOVar7->_0).element_class;
            if (this_01 == (Il2CppClass *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      ((GameObject *)this_01,bVar1,(MethodInfo *)0x0);
            root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this,(MethodInfo *)0x0);
            callbackFunction =
                 (ExecuteEvents_EventFunction_1_System_Object_ *)
                 func_?(
                                TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,pOVar6,
                       MethodInfo__TouristAdController____c__DisplayClass16_0___ShowPromotion_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            goto code_?;
          }
          goto code_?;
        }
      }
      pOVar6 = (Object *)func_?(TypeInfo__TouristAdController____c__DisplayClass16_1);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (pOVar6,ExceptionArgument__Enum_obj,(MethodInfo *)onPop);
      if (pOVar6 != (Object *)0x0) {
        pOVar6[1].monitor = (MonitorData *)this;
        func_?(&pOVar6[1].monitor,this);
        original = (this->fields).generalPromotionPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pOVar7 = (Object__Class *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                           ((Object *)original,
                            AdIntegration__InHouse__GeneralPromotionAd_MethodInfo__UnityEngine__Object__Instantiate<AdIntegration::InHouse::GeneralPromotionAd>_AdIntegration__InHouse__GeneralPromotionAd_
                           );
        pOVar6[1].klass = pOVar7;
        func_?(pOVar6 + 1,pOVar7);
        pPVar8 = (this->fields).touristLooksData;
        uVar9 = ZEXT48(pPVar8);
        func_?(&stack0xfffffff0,pPVar8);
        if (pOVar6[1].klass != (Object__Class *)0x0) {
          uVar10 = (undefined4)
                   (CONCAT26((short)(uVar9 >> 0x30),
                             CONCAT15(1,CONCAT14((this->fields).withAd,(PromotionLooksData *)uVar9))
                            ) >> 0x20);
          initWithAd.hasAd = (char)uVar10;
          initWithAd.showWhyText = (char)((uint)uVar10 >> 8);
          initWithAd._6_2_ = (short)((uint)uVar10 >> 0x10);
          initWithAd.looksData = (PromotionLooksData *)uVar9;
          AdIntegration::InHouse::GeneralPromotionAd::GeneralPromotionAd_InitializeWithAd
                    ((GeneralPromotionAd *)pOVar6[1].klass,initWithAd,(MethodInfo *)0x0);
          root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
          callbackFunction =
               (ExecuteEvents_EventFunction_1_System_Object_ *)
               func_?(
                              TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                              );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,pOVar6,
                     MethodInfo__TouristAdController____c__DisplayClass16_1___ShowPromotion_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
code_?:
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
      }
      goto code_?;
    }
  }
  if ((this->fields).withAd == 0) {
    if (cRam_? == '\0') {
      func_?(&StringLiteral_TouristAdController___OnPromotio);
      cRam_? = '\x01';
    }
    pUVar11 = (this->fields).onPromotionWasPopped;
    if (pUVar11 == (UnityAction_2_System_Boolean_System_Boolean_ *)0x0) {
      return;
    }
    (*(pUVar11->fields)._._.invoke_impl)
              ((pUVar11->fields)._._.method_code,1,(this->fields).withAd,(pUVar11->fields)._._.method)
    ;
    return;
  }
  pIVar2 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
  this_02 = (UnityAction_1_System_Int32Enum_ *)
            func_?(
                           TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
  UnityAction_1_System_Int32Enum___ctor
            (this_02,(Object *)this,
             MethodInfo__TouristAdController__ShowAdWithoutPromotion_Assets__Scripts__AdIntegration__InterstitialAdResult_
             ,(MethodInfo *)0x0);
  if (pIVar2 != (IAdManager *)0x0) {
    func_?(7,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,pIVar2,this_02,0xd);
    return;
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::TouristAdController::TouristAdController_Update
               (TouristAdController *this,MethodInfo *method)

{
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
  if (MVar1 == MVJoinState__Enum_Playing) {
    fVar2 = (this->fields).timer;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (this->fields).timer = fVar3 + fVar2;
  }
  return;
}


/* TouristAdController() */

void Assembly-CSharp.dll::TouristAdController::TouristAdController__ctor
               (TouristAdController *this,MethodInfo *method)

{
  (this->fields).timeBeforeAdShown = 180.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* Boolean get_IsPromotionAvailable() */

bool Assembly-CSharp.dll::TouristAdController::TouristAdController_get_IsPromotionAvailable
               (TouristAdController *this,MethodInfo *method)

{
  pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if ((pSVar1 != (SpawnRoleDataMediator *)0x0) &&
     (this_00 = (pSVar1->fields).SpawnRoleModeTypeWrapper,
     this_00 != (SpawnRoleModeTypeWrapper *)0x0)) {
    bVar2 = SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_IsInMode
                      (this_00,SpawnRoleModeType__Enum_Playing,(MethodInfo *)0x0);
    bVar3 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
    this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_01 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_get_IsPlaying(this_01,(MethodInfo *)0x0);
      MVar4 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
      this_02 = (this->fields).embeddedPlayerConfig;
      if (this_02 != (EmbeddedPlayerConfig *)0x0) {
        pEVar5 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                           ((EmbeddedSiteConfigData *)&stack0xffffffe4,this_02,(MethodInfo *)0x0);
        bVar6 = 0;
        if (MVar4 == MVJoinState__Enum_Playing) {
          bVar6 = bVar2 ^ 1;
        }
        return bVar6 & pEVar5->showTouristPromotion & (byte)((uint)this_02 >> 0x18) &
               (byte)((uint)this_02 >> 0x10) & bVar3;
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  bVar2 = (*pcVar7)();
  return bVar2;
}


/* Boolean get_ReadyForAd() */

bool Assembly-CSharp.dll::TouristAdController::TouristAdController_get_ReadyForAd
               (TouristAdController *this,MethodInfo *method)

{
  bVar1 = MVClientSettings::MVClientSettings_get_InterstitialsAdsEnabled((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return 0;
  }
  return (this->fields).timeBeforeAdShown <= (this->fields).timer;
}


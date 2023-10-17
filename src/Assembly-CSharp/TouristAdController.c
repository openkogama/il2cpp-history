
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
    this_00 = (SpawnRoleVariable_1_UnityEngine_Vector3_ *)(pSVar1->fields).spawnRoleMode;
    value = (SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *)func_?();
    if (value != (SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                ((UnityAction_1_System_Int32Enum_ *)value,unaff_ESI,
                 MethodInfo__TouristAdController__OnChangeMode_MV__Common__SpawnRoleModeType_,
                 (MethodInfo *)0x0);
      if (this_00 != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0) {
        Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
        SpawnRoleVariable`1[UnityEngine::Vector3]::
        SpawnRoleVariable_1_UnityEngine_Vector3__add_OnChange
                  (this_00,value,
                   MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
                  );
        return;
      }
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
                    MethodInfo__TouristAdController____c___InterstitialAdResult_b__20_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
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
  callbackFunction = TypeInfo__TouristAdController____c->static_fields->__9__20_0;
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
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__TouristAdController____c___InterstitialAdResult_b__20_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__TouristAdController____c->static_fields->__9__20_0 = callbackFunction;
    func_?(&TypeInfo__TouristAdController____c->static_fields->__9__20_0,callbackFunction);
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
             (*(pTVar2->klass->vtable).ToString.methodPtr)
                       (pTVar2,(pTVar2->klass->vtable).ToString.method);
    }
    mscorlib.dll::System::String::String_Concat_3(str0,str1,(MethodInfo *)0x0);
    pIVar1 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
    this_00 = (UnityAction_1_System_Int32Enum_ *)
              func_?(
                             TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>
                             );
    if (this_00 != (UnityAction_1_System_Int32Enum_ *)0x0) {
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
  pTStack_1 = (TouristPromotion *)0x0;
  (this->fields).onPromotionWasPopped = onPop;
  (this->fields).eligibleForPromotion = 0;
  func_?(&(this->fields).onPromotionWasPopped,onPop);
  bVar2 = MVClientSettings::MVClientSettings_get_InterstitialsAdsEnabled((MethodInfo *)0x0);
  if ((bVar2 == 0) || ((this->fields).timer < (this->fields).timeBeforeAdShown)) {
    bVar2 = 0;
  }
  else {
    pIVar3 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
    if (pIVar3 == (IAdManager *)0x0) goto code_?;
    bVar2 = func_?(5,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,pIVar3);
  }
  (this->fields).withAd = bVar2;
  bVar2 = MVClientSettings::MVClientSettings_get_ShowTouristPromotion((MethodInfo *)0x0);
  if (bVar2 != 0) {
    this_00 = (this->fields).embeddedPlayerConfig;
    if (this_00 == (EmbeddedPlayerConfig *)0x0) goto code_?;
    pEVar4 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                       ((EmbeddedSiteConfigData *)&stack0xffffffdc,this_00,(MethodInfo *)0x0);
    if (pEVar4->showTouristPromotion != 0) {
      pTVar5 = (this->fields).touristPromotionExternalEvaluator;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pTVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar2 == 0) {
code_?:
        value = (Object *)func_?(TypeInfo__TouristAdController____c__DisplayClass16_1);
        if (value == (Object *)0x0) goto code_?;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  (value,ExceptionArgument__Enum_obj,unaff_EBX);
        value[1].monitor = (MonitorData *)this;
        func_?(&value[1].monitor,this);
        original = (this->fields).generalPromotionPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pOVar6 = (Object__Class *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)original,
                             AdIntegration__InHouse__GeneralPromotionAd_MethodInfo__UnityEngine__Object__Instantiate<AdIntegration::InHouse::GeneralPromotionAd>_AdIntegration__InHouse__GeneralPromotionAd_
                            );
        value[1].klass = pOVar6;
        func_?(value + 1);
        pPVar7 = (this->fields).touristLooksData;
        uStack_8 = ZEXT48(pPVar7);
        func_?(&uStack_8,pPVar7);
        uVar9 = uStack_8;
        uStack_8._6_2_ = SUB82(uVar9,6);
        uStack_8._0_6_ =
             CONCAT15(1,CONCAT14((this->fields).withAd,(PromotionLooksData *)uStack_8));
        uVar10 = uStack_8;
        if (value[1].klass == (Object__Class *)0x0) goto code_?;
        initWithAd.hasAd = uStack_8._4_1_;
        initWithAd.showWhyText = uStack_8._5_1_;
        initWithAd._6_2_ = uStack_8._6_2_;
        initWithAd.looksData = (PromotionLooksData *)uStack_8;
        uStack_8 = uVar10;
        AdIntegration::InHouse::GeneralPromotionAd::GeneralPromotionAd_InitializeWithAd
                  ((GeneralPromotionAd *)value[1].klass,initWithAd,(MethodInfo *)0x0);
        pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        callbackFunction =
             (ExecuteEvents_EventFunction_1_System_Object_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
        method_1 = 
        MethodInfo__TouristAdController____c__DisplayClass16_1___ShowPromotion_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
        ;
      }
      else {
        pTVar5 = (this->fields).touristPromotionExternalEvaluator;
        if (pTVar5 == (TouristPromotionExternalEvaluator *)0x0) goto code_?;
        bVar2 = TouristPromotionExternalEvaluator::
                TouristPromotionExternalEvaluator_TryGetExternalPromotion
                          (pTVar5,&pTStack_1,(MethodInfo *)0x0);
        if (bVar2 == 0) goto code_?;
        value = (Object *)func_?();
        if (value == (Object *)0x0) goto code_?;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  (value,ExceptionArgument__Enum_obj,unaff_EBX);
        value[1].monitor = (MonitorData *)this;
        func_?(&value[1].monitor,this);
        original_00 = pTStack_1;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pOVar6 = (Object__Class *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)original_00,
                             TouristPromotion_MethodInfo__UnityEngine__Object__Instantiate<TouristPromotion>_TouristPromotion_
                            );
        value[1].klass = pOVar6;
        func_?(value + 1);
        pOVar6 = value[1].klass;
        if (pOVar6 == (Object__Class *)0x0) goto code_?;
        bVar2 = (this->fields).withAd;
        *(bool *)&(pOVar6->_0).element_class = bVar2;
        pGVar11 = *(GameObject **)&(pOVar6->_0).this_arg.attrs;
        if (pGVar11 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar11,bVar2,(MethodInfo *)0x0);
        pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        callbackFunction =
             (ExecuteEvents_EventFunction_1_System_Object_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
        method_1 = 
        MethodInfo__TouristAdController____c__DisplayClass16_0___ShowPromotion_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
        ;
      }
      if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,method_1,
                   (MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar11,(BaseEventData *)0x0,callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        return;
      }
      goto code_?;
    }
  }
  if ((this->fields).withAd == 0) {
    if (cRam_? == '\0') {
      func_?(&StringLiteral_TouristAdController___OnPromotio);
      cRam_? = '\x01';
    }
    pUVar12 = (this->fields).onPromotionWasPopped;
    if (pUVar12 == (UnityAction_2_System_Boolean_System_Boolean_ *)0x0) {
      return;
    }
    (*(pUVar12->fields)._._.invoke_impl)
              ((pUVar12->fields)._._.method_code,1,(this->fields).withAd,(pUVar12->fields)._._.method)
    ;
    return;
  }
  pIVar3 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
  this_01 = (UnityAction_1_System_Int32Enum_ *)
            func_?(
                           TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>
                           );
  if ((this_01 != (UnityAction_1_System_Int32Enum_ *)0x0) &&
     (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (this_01,(Object *)this,
                 MethodInfo__TouristAdController__ShowAdWithoutPromotion_Assets__Scripts__AdIntegration__InterstitialAdResult_
                 ,(MethodInfo *)0x0), pIVar3 != (IAdManager *)0x0)) {
    func_?(7,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,pIVar3,this_01,0xd);
    return;
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Boolean TouristPromotionAllowed() */

bool Assembly-CSharp.dll::TouristAdController::TouristAdController_TouristPromotionAllowed
               (MethodInfo *method)

{
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
  if (bVar1 != 0) {
    this = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this == (MVNetworkGame *)0x0) {
      uVar2 = func_?(&stack0xfffffffc);
      func_?(uVar2);
      pcVar3 = (code *)swi(3);
      bVar1 = (*pcVar3)();
      return bVar1;
    }
    bVar1 = MVNetworkGame::MVNetworkGame_get_IsPlaying(this,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      MVar4 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
      return MVar4 == MVJoinState__Enum_Playing;
    }
  }
  return 0;
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
    if (bVar2 == 0) {
      bVar2 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
      if (bVar2 != 0) {
        this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (this_01 == (MVNetworkGame *)0x0) goto code_?;
        bVar2 = MVNetworkGame::MVNetworkGame_get_IsPlaying(this_01,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          MVar3 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
          if (MVar3 == MVJoinState__Enum_Playing) {
            return UNK_?;
          }
        }
      }
    }
    return 0;
  }
code_?:
  uVar4 = func_?(&stack0xfffffff4);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  bVar2 = (*pcVar5)();
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


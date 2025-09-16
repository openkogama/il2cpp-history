
/* Void Initialize() */

void Assembly-CSharp.dll::RegisteredPromotionController::RegisteredPromotionController_Initialize
               (RegisteredPromotionController *this,MethodInfo *method)

{
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)this,1,(MethodInfo *)0x0);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pEVar2 = (pMVar1->fields)._EliteSettings_k__BackingField,
     pEVar2 != (ElitePromotionSettings *)0x0)) {
    (this->fields).joinTheElitePromoInterval =
         (float)(pEVar2->fields)._ElitePromotionInterval_k__BackingField;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pGVar3 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar3 != (GameSessionData *)0x0) {
      (this->fields).embedded = (pGVar3->fields).embedded;
      bVar4 = MVClientSettings::MVClientSettings_get_IsSubscriber((MethodInfo *)0x0);
      (this->fields).subscriber = bVar4;
      fVar5 = (this->fields).playFromKogamaPromoInterval;
      fVar6 = (this->fields).joinTheElitePromoInterval;
      if (fVar6 <= fVar5) {
        fVar5 = fVar6;
      }
      this_00 = (this->fields).embeddedPlayerConfig;
      (this->fields).timeBeforeShownPromotion = fVar5;
      if (this_00 != (EmbeddedPlayerConfig *)0x0) {
        pEVar7 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                           ((EmbeddedSiteConfigData *)&pLStack_8,this_00,(MethodInfo *)0x0);
        (this->fields).showTouristPromotion = pEVar7->showTouristPromotion;
        return;
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void InterstitialAdResult(InterstitialAdResult) */

void Assembly-CSharp.dll::RegisteredPromotionController::
     RegisteredPromotionController_InterstitialAdResult
               (RegisteredPromotionController *this,InterstitialAdResult__Enum obj,
               MethodInfo *method)

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
                    MethodInfo__RegisteredPromotionController____c___InterstitialAdResult_b__17_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__RegisteredPromotionController____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__RegisteredPromotionController____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RegisteredPromotionController____c);
  }
  callbackFunction = TypeInfo__RegisteredPromotionController____c->static_fields->__9__17_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__RegisteredPromotionController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RegisteredPromotionController____c);
    }
    object = TypeInfo__RegisteredPromotionController____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__RegisteredPromotionController____c___InterstitialAdResult_b__17_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__RegisteredPromotionController____c->static_fields->__9__17_0 = callbackFunction;
    func_?(&TypeInfo__RegisteredPromotionController____c->static_fields->__9__17_0,
                    callbackFunction);
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


/* Void OnPromotionPop() */

void Assembly-CSharp.dll::RegisteredPromotionController::
     RegisteredPromotionController_OnPromotionPop
               (RegisteredPromotionController *this,MethodInfo *method)

{
  pUVar1 = (this->fields).onPromotionWasPopped;
  if (pUVar1 != (UnityAction_2_System_Boolean_System_Boolean_ *)0x0) {
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,1,1,(pUVar1->fields)._._.method);
  }
  return;
}


/* Void PushPromotionSlide(RegisteredPromotionPopup, Boolean) */

void Assembly-CSharp.dll::RegisteredPromotionController::
     RegisteredPromotionController_PushPromotionSlide
               (RegisteredPromotionController *this,RegisteredPromotionPopup *popupPrefab,
               bool isEmbeddedPromotion,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    func_?(&
                    RegisteredPromotionPopup_MethodInfo__UnityEngine__Object__Instantiate<RegisteredPromotionPopup>_RegisteredPromotionPopup_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__RegisteredPromotionController____c__DisplayClass20_0___PushPromotionSlide_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__RegisteredPromotionController____c__DisplayClass20_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RegisteredPromotionController____c__DisplayClass20_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].monitor = (MonitorData *)this;
    func_?(&value[1].monitor,this);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pOVar1 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)popupPrefab,
                        RegisteredPromotionPopup_MethodInfo__UnityEngine__Object__Instantiate<RegisteredPromotionPopup>_RegisteredPromotionPopup_
                       );
    value[1].klass = pOVar1;
    func_?(value + 1,pOVar1);
    pOVar1 = value[1].klass;
    pIVar2 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
    if (pIVar2 != (IAdManager *)0x0) {
      withAd = func_?(5,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,pIVar2);
      if (pOVar1 != (Object__Class *)0x0) {
        RegisteredPromotionPopup::RegisteredPromotionPopup_Initialize
                  ((RegisteredPromotionPopup *)pOVar1,isEmbeddedPromotion,withAd,(MethodInfo *)0x0);
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
        callbackFunction =
             (ExecuteEvents_EventFunction_1_System_Object_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                   MethodInfo__RegisteredPromotionController____c__DisplayClass20_0___PushPromotionSlide_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (root,(BaseEventData *)0x0,callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        (this->fields).timer = 0.0;
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ShowPromotion(UnityAction`2[System.Boolean,System.Boolean]) */

void Assembly-CSharp.dll::RegisteredPromotionController::RegisteredPromotionController_ShowPromotion
               (RegisteredPromotionController *this,
               UnityAction_2_System_Boolean_System_Boolean_ *onPop,MethodInfo *method)

{
  (this->fields).onPromotionWasPopped = onPop;
  func_?(&(this->fields).onPromotionWasPopped,onPop);
  if ((this->fields).embedded != 0) {
    if ((this->fields).subscriber != 0) goto code_?;
    fVar1 = (this->fields).timer;
    pfVar2 = &(this->fields).playFromKogamaPromoInterval;
    if (*pfVar2 <= fVar1 && fVar1 != *pfVar2) {
      RegisteredPromotionController_PushPromotionSlide
                (this,(this->fields).registeredPromotionPopupPrefab,1,(MethodInfo *)0x0);
      return;
    }
  }
  if (((this->fields).subscriber == 0) &&
     (fVar1 = (this->fields).timer, pfVar2 = &(this->fields).joinTheElitePromoInterval,
     *pfVar2 <= fVar1 && fVar1 != *pfVar2)) {
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar3 == (MVNetworkGame *)0x0) ||
       (pEVar4 = (pMVar3->fields)._EliteSettings_k__BackingField,
       pEVar4 == (ElitePromotionSettings *)0x0)) {
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((pEVar4->fields)._ElitePromotionEnabled_k__BackingField != 0) {
      RegisteredPromotionController_PushPromotionSlide
                (this,(this->fields).registeredElitePromotionPopupPrefab,0,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  pUVar6 = (this->fields).onPromotionWasPopped;
  if (pUVar6 != (UnityAction_2_System_Boolean_System_Boolean_ *)0x0) {
    (*(pUVar6->fields)._._.invoke_impl)
              ((pUVar6->fields)._._.method_code,0,0,(pUVar6->fields)._._.method);
  }
  return;
}


/* Void ShowRegisteredPromotionAd() */

void Assembly-CSharp.dll::RegisteredPromotionController::
     RegisteredPromotionController_ShowRegisteredPromotionAd
               (RegisteredPromotionController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>)
    ;
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    func_?(&
                    MethodInfo__RegisteredPromotionController__InterstitialAdResult_Assets__Scripts__AdIntegration__InterstitialAdResult_
                   );
    cRam_? = '\x01';
  }
  bVar1 = (this->fields).embedded;
  pIVar2 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
  this_00 = (UnityAction_1_System_Int32Enum_ *)
            func_?(
                           TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
  UnityAction_1_System_Int32Enum___ctor
            (this_00,(Object *)this,
             MethodInfo__RegisteredPromotionController__InterstitialAdResult_Assets__Scripts__AdIntegration__InterstitialAdResult_
             ,(MethodInfo *)0x0);
  cVar3 = (bVar1 == 0) + '\t';
  if (pIVar2 == (IAdManager *)0x0) {
    func_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pIVar5 = pIVar2->klass;
  uVar6 = 0;
  uVar7._0_1_ = (pIVar5->_1).rank;
  uVar7._1_1_ = (pIVar5->_1).minimumAlignment;
  if (uVar7 != 0) {
    do {
      if (pIVar5->interfaceOffsets[uVar6].interfaceType ==
          (Il2CppClass *)TypeInfo__Assets__Scripts__AdIntegration__IAdManager) {
        ppMVar8 = &(&(pIVar2->klass->vtable).RequestInterstitial)
                   [pIVar2->klass->interfaceOffsets[uVar6].offset].method;
        goto code_?;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar7);
  }
  ppMVar8 = (MethodInfo **)
            func_?(pIVar2,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,7);
code_?:
  (*(code *)*ppMVar8)(pIVar2,cVar3,cVar3,ppMVar8[1]);
  return;
}


/* Void ShowRegisteredPromotionPopup() */

void Assembly-CSharp.dll::RegisteredPromotionController::
     RegisteredPromotionController_ShowRegisteredPromotionPopup
               (RegisteredPromotionController *this,MethodInfo *method)

{
  if ((this->fields).embedded != 0) {
    if ((this->fields).subscriber != 0) goto code_?;
    fVar1 = (this->fields).timer;
    pfVar2 = &(this->fields).playFromKogamaPromoInterval;
    if (*pfVar2 <= fVar1 && fVar1 != *pfVar2) {
      RegisteredPromotionController_PushPromotionSlide
                (this,(this->fields).registeredPromotionPopupPrefab,1,(MethodInfo *)0x0);
      return;
    }
  }
  if (((this->fields).subscriber == 0) &&
     (fVar1 = (this->fields).timer, pfVar2 = &(this->fields).joinTheElitePromoInterval,
     *pfVar2 <= fVar1 && fVar1 != *pfVar2)) {
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar3 == (MVNetworkGame *)0x0) ||
       (pEVar4 = (pMVar3->fields)._EliteSettings_k__BackingField,
       pEVar4 == (ElitePromotionSettings *)0x0)) {
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((pEVar4->fields)._ElitePromotionEnabled_k__BackingField != 0) {
      RegisteredPromotionController_PushPromotionSlide
                (this,(this->fields).registeredElitePromotionPopupPrefab,0,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  pUVar6 = (this->fields).onPromotionWasPopped;
  if (pUVar6 != (UnityAction_2_System_Boolean_System_Boolean_ *)0x0) {
    (*(pUVar6->fields)._._.invoke_impl)
              ((pUVar6->fields)._._.method_code,0,0,(pUVar6->fields)._._.method);
  }
  return;
}


/* RegisteredPromotionController() */

void Assembly-CSharp.dll::RegisteredPromotionController::RegisteredPromotionController__ctor
               (RegisteredPromotionController *this,MethodInfo *method)

{
  (this->fields).playFromKogamaPromoInterval = 60.0;
  (this->fields).joinTheElitePromoInterval = 180.0;
  (this->fields).timeBeforeShownPromotion = 180.0;
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

bool Assembly-CSharp.dll::RegisteredPromotionController::
     RegisteredPromotionController_get_IsPromotionAvailable
               (RegisteredPromotionController *this,MethodInfo *method)

{
  if ((this->fields).embedded != 0) {
    if ((this->fields).showTouristPromotion == 0) {
      return 0;
    }
    if ((this->fields).embedded != 0) goto code_?;
  }
  if ((this->fields).subscriber != 0) {
    return 0;
  }
code_?:
  return (this->fields).timeBeforeShownPromotion <= (this->fields).timer;
}


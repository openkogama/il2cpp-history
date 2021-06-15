
/* Void Initialize() */

void Assembly-CSharp.dll::RegisteredPromotionController::RegisteredPromotionController_Initialize
               (RegisteredPromotionController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)this,1,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (PrefabPool *)0x0) {
    this_01 = PrefabPool::PrefabPool_get_MVCheckpointPrefab(this_00,(MethodInfo *)0x0);
    if (this_01 != (ObjectPrefab *)0x0) {
      pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                          (MethodInfo *)0x0);
      (this->fields).joinTheElitePromoInterval = (float)(int)pOVar1;
      pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
      if (pGVar2 != (GameSessionData *)0x0) {
        (this->fields).embedded = (pGVar2->fields).embedded;
        if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
          func_?();
        }
        bVar3 = MVClientSettings::MVClientSettings_IsSubscriber((MethodInfo *)0x0);
        fVar4 = (this->fields).playFromKogamaPromoInterval;
        b = (this->fields).joinTheElitePromoInterval;
        (this->fields).subscriber = bVar3;
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          func_?();
        }
        fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Min(fVar4,b,(MethodInfo *)0x0)
        ;
        (this->fields).timeBeforeShownPromotion = fVar4;
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void InterstitialAdResult(InterstitialAdResult) */

void Assembly-CSharp.dll::RegisteredPromotionController::
     RegisteredPromotionController_InterstitialAdResult
               (RegisteredPromotionController *this,InterstitialAdResult__Enum obj,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__RegisteredPromotionController->static_fields->__f__am_cache0 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__RegisteredPromotionController___InterstitialAdResult_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__RegisteredPromotionController->static_fields->__f__am_cache0 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)this_00;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__RegisteredPromotionController->static_fields->__f__am_cache0;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  return;
}


/* Void OnPromotionPop() */

void Assembly-CSharp.dll::RegisteredPromotionController::
     RegisteredPromotionController_OnPromotionPop
               (RegisteredPromotionController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Action_2_Int32_Boolean_ *)(this->fields).onPromotionWasPopped;
  if (this_00 != (Action_2_Int32_Boolean_ *)0x0) {
    System.Core.dll::System::Action`2[Int32,Boolean]::Action_2_Int32_Boolean__Invoke
              (this_00,1,1,
               MethodInfo__UnityEngine__Events__UnityAction<bool,_bool>__Invoke_bool__bool_);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RegisteredPromotionController___PushPromotionSlide_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).state = (int32_t)this;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    this_01 = (RegisteredPromotionPopup *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                        ((XpBoostParticlePreviewer *)popupPrefab,
                         RegisteredPromotionPopup_MethodInfo__UnityEngine__Object__Instantiate<RegisteredPromotionPopup>_RegisteredPromotionPopup_
                        );
    (this_00->fields)._._._._.m_CachedPtr = this_01;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pIVar1 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
    if (pIVar1 != (IAdManager *)0x0) {
      withAd = func_?(5,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,pIVar1);
      if (this_01 != (RegisteredPromotionPopup *)0x0) {
        RegisteredPromotionPopup::RegisteredPromotionPopup_Initialize
                  (this_01,isEmbeddedPromotion,withAd,(MethodInfo *)0x0);
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
        this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?(
                                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                    );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_02,(Object *)this_00,
                   MethodInfo__RegisteredPromotionController___PushPromotionSlide_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                  );
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (root,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_02,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        (this->fields).timer = 0.0;
        return;
      }
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ShowPromotion(UnityAction`2[System.Boolean,System.Boolean]) */

void Assembly-CSharp.dll::RegisteredPromotionController::RegisteredPromotionController_ShowPromotion
               (RegisteredPromotionController *this,
               UnityAction_2_System_Boolean_System_Boolean_ *onPop,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).onPromotionWasPopped = onPop;
  if (bVar1) {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).embedded != 0) {
    if ((this->fields).subscriber != 0) goto code_?;
    fVar2 = (this->fields).timer;
    pfVar3 = &(this->fields).playFromKogamaPromoInterval;
    if (*pfVar3 <= fVar2 && fVar2 != *pfVar3) {
      RegisteredPromotionController_PushPromotionSlide
                (this,(this->fields).registeredPromotionPopupPrefab,1,(MethodInfo *)0x0);
      return;
    }
  }
  if (((this->fields).subscriber == 0) &&
     (fVar2 = (this->fields).timer, pfVar3 = &(this->fields).joinTheElitePromoInterval,
     *pfVar3 <= fVar2 && fVar2 != *pfVar3)) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_01 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_01 != (PrefabPool *)0x0) {
      this_02 = PrefabPool::PrefabPool_get_MVCheckpointPrefab(this_01,(MethodInfo *)0x0);
      if (this_02 != (ObjectPrefab *)0x0) {
        bVar4 = SubscribableVariableBase`1[System::Boolean]::
                SubscribableVariableBase_1_System_Boolean__get_Value
                          ((SubscribableVariableBase_1_System_Boolean_ *)this_02,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          RegisteredPromotionController_PushPromotionSlide
                    (this,(this->fields).registeredElitePromotionPopupPrefab,0,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
    }
    func_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
code_?:
  this_00 = (Action_2_Int32_Boolean_ *)(this->fields).onPromotionWasPopped;
  if (this_00 != (Action_2_Int32_Boolean_ *)0x0) {
    System.Core.dll::System::Action`2[Int32,Boolean]::Action_2_Int32_Boolean__Invoke
              (this_00,0,0,
               MethodInfo__UnityEngine__Events__UnityAction<bool,_bool>__Invoke_bool__bool_);
  }
  return;
}


/* Void ShowRegisteredPromotionAd() */

void Assembly-CSharp.dll::RegisteredPromotionController::
     RegisteredPromotionController_ShowRegisteredPromotionAd
               (RegisteredPromotionController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  cVar1 = ((this->fields).embedded == 0) + '\t';
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pIVar2 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(
                           TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__RegisteredPromotionController__InterstitialAdResult_Assets__Scripts__AdIntegration__InterstitialAdResult_
             ,
             MethodInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>__Action_System__Object__void__
            );
  if (pIVar2 == (IAdManager *)0x0) {
    func_?(0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar4 = pIVar2->klass;
  uVar5 = 0;
  uVar6._0_1_ = (pIVar4->_1).rank;
  uVar6._1_1_ = (pIVar4->_1).minimumAlignment;
  if (uVar6 != 0) {
    do {
      if (pIVar4->interfaceOffsets[uVar5].interfaceType ==
          (Il2CppClass *)TypeInfo__Assets__Scripts__AdIntegration__IAdManager) {
        ppMVar7 = &(&(pIVar4->vtable).RequestInterstitial)[pIVar4->interfaceOffsets[uVar5].offset].
                   method;
        goto code_?;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
  }
  ppMVar7 = (MethodInfo **)
            func_?(pIVar2,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,7,0);
code_?:
  (*(code *)*ppMVar7)(pIVar2,cVar1,cVar1,ppMVar7[1]);
  return;
}


/* Void ShowRegisteredPromotionPopup() */

void Assembly-CSharp.dll::RegisteredPromotionController::
     RegisteredPromotionController_ShowRegisteredPromotionPopup
               (RegisteredPromotionController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
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
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_01 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_01 != (PrefabPool *)0x0) {
      this_02 = PrefabPool::PrefabPool_get_MVCheckpointPrefab(this_01,(MethodInfo *)0x0);
      if (this_02 != (ObjectPrefab *)0x0) {
        bVar3 = SubscribableVariableBase`1[System::Boolean]::
                SubscribableVariableBase_1_System_Boolean__get_Value
                          ((SubscribableVariableBase_1_System_Boolean_ *)this_02,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          RegisteredPromotionController_PushPromotionSlide
                    (this,(this->fields).registeredElitePromotionPopupPrefab,0,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
    }
    func_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
code_?:
  this_00 = (Action_2_Int32_Boolean_ *)(this->fields).onPromotionWasPopped;
  if (this_00 != (Action_2_Int32_Boolean_ *)0x0) {
    System.Core.dll::System::Action`2[Int32,Boolean]::Action_2_Int32_Boolean__Invoke
              (this_00,0,0,
               MethodInfo__UnityEngine__Events__UnityAction<bool,_bool>__Invoke_bool__bool_);
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::RegisteredPromotionController::RegisteredPromotionController_Update
               (RegisteredPromotionController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
  if (MVar1 == MVJoinState__Enum_Playing) {
    fVar2 = (this->fields).timer;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (this->fields).timer = fVar3 + fVar2;
  }
  return;
}


/* Void <InterstitialAdResult>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::RegisteredPromotionController::
     RegisteredPromotionController__InterstitialAdResult_m__0
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* Boolean get_IsPromotionAvailable() */

bool Assembly-CSharp.dll::RegisteredPromotionController::
     RegisteredPromotionController_get_IsPromotionAvailable
               (RegisteredPromotionController *this,MethodInfo *method)

{
  return (this->fields).timeBeforeShownPromotion <= (this->fields).timer;
}


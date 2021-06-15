
/* Void KogamaRedirect() */

void Assembly-CSharp.dll::TouristPromotionDesktop::TouristPromotionDesktop_KogamaRedirect
               (TouristPromotionDesktop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((this_00 == (MVNetworkGame *)0x0) ||
     (this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0),
     this_01 == (MVLocalPlayer *)0x0)) goto code_?;
  bVar1 = MVPlayer::MVPlayer_get_IsTourist((MVPlayer *)this_01,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
  if (this_02 == (GameSessionData *)0x0) goto code_?;
  bVar1 = mscorlib.dll::System::Collections::ObjectModel::ReadOnlyCollection`1[VoxelHit]::
          ReadOnlyCollection_1_VoxelHit__System_Collections_IList_get_IsReadOnly
                    ((ReadOnlyCollection_1_VoxelHit_ *)this_02,(MethodInfo *)0x0);
  if (bVar1 == 0) {
code_?:
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_03 = (ScaleAnimationBase *)
              func_?(TypeInfo__TouristPromotionDesktop___ShowGoToKogamaPopup_c__AnonStorey0
                             );
    ScaleAnimationBase::ScaleAnimationBase_Play(this_03,0.0,unaff_EDI);
    pXVar2 = (XpBoostParticlePreviewer *)(this->fields).goToKogamaPopupPrefab;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pXVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       (pXVar2,
                        UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
    if (this_03 != (ScaleAnimationBase *)0x0) {
      (this_03->fields)._._._._.m_CachedPtr = pXVar2;
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
      this_04 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(
                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                  );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_04,(Object *)this_03,
                 MethodInfo__TouristPromotionDesktop___ShowGoToKogamaPopup_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
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
                (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_04,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      return;
    }
  }
  else {
    pEVar3 = (this->fields).embeddedPlayerConfig;
    if (pEVar3 == (EmbeddedPlayerConfig *)0x0) goto code_?;
    pEVar4 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                       ((EmbeddedSiteConfigData *)&stack0xffffffec,pEVar3,(MethodInfo *)0x0);
    if (pEVar4->allowsRedirectToWebpage == 0) {
      pEVar3 = (this->fields).embeddedPlayerConfig;
      if (pEVar3 == (EmbeddedPlayerConfig *)0x0) goto code_?;
      pEVar4 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                         ((EmbeddedSiteConfigData *)&stack0xffffffec,pEVar3,(MethodInfo *)0x0);
      if (pEVar4->allowsOpenInNewTab == 0) goto code_?;
    }
    if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__StatHatWrapper);
    }
    StatHatWrapper::StatHatWrapper_Count
              (StringLiteral_TouristPromotion_Kogama_Redirect,1,(MethodInfo *)0x0);
    pEVar3 = (this->fields).embeddedPlayerConfig;
    if (pEVar3 != (EmbeddedPlayerConfig *)0x0) {
      pEVar4 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                         ((EmbeddedSiteConfigData *)&stack0xffffffec,pEVar3,(MethodInfo *)0x0);
      BrowserCommGotoRequests::BrowserCommGotoRequests_GotoMainpage
                (pEVar4->allowsRedirectToWebpage == 0,0,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnContinueClicked() */

void Assembly-CSharp.dll::TouristPromotionDesktop::TouristPromotionDesktop_OnContinueClicked
               (TouristPromotionDesktop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__StatHatWrapper);
  }
  StatHatWrapper::StatHatWrapper_Count
            (StringLiteral_TouristPromotion_Kogama_Continue,1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    this = _UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  bVar1 = (this->fields)._.promotionShowsAd;
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (TypeInfo__TouristPromotion->static_fields->__f__am_cache1 ==
        (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)0x0,
                 MethodInfo__TouristPromotion___OnContinueClicked_m__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      TypeInfo__TouristPromotion->static_fields->__f__am_cache1 =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar2;
    }
    pEVar3 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
             TypeInfo__TouristPromotion->static_fields->__f__am_cache1;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,pEVar3,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    return;
  }
  if (TypeInfo__TouristPromotion->static_fields->__f__am_cache0 ==
      (ExecuteEvents_EventFunction_1_ITouristAdController_ *)0x0) {
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)0x0,
               MethodInfo__TouristPromotion___OnContinueClicked_m__0_ITouristAdController__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ITouristAdController>__EventFunction_System__Object__void__
              );
    TypeInfo__TouristPromotion->static_fields->__f__am_cache0 =
         (ExecuteEvents_EventFunction_1_ITouristAdController_ *)pUVar2;
  }
  pEVar3 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
           TypeInfo__TouristPromotion->static_fields->__f__am_cache0;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,pEVar3,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<ITouristAdController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ITouristAdController>_
            );
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::TouristPromotionDesktop::TouristPromotionDesktop_OnDestroy
               (TouristPromotionDesktop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pAVar2 = (pMVar1->fields).OnWinningConditionFulfilled;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action<IWinningCondition>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,
               MethodInfo__TouristPromotionDesktop__OnWinningConditionFulfilled_IWinningCondition_,
               MethodInfo__System__Action<IWinningCondition>__Action_System__Object__void__);
    pAStack3 =
         (Action_1_IWinningCondition_ *)
         mscorlib.dll::System::Delegate::Delegate_Remove
                   ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    pAVar2 = (Action_1_IWinningCondition_ *)0x0;
    if (pAStack3 != (Action_1_IWinningCondition_ *)0x0) {
      if (pAStack3->klass == TypeInfo__System__Action<IWinningCondition>) {
        pAVar2 = pAStack3;
      }
      pAStack4 = TypeInfo__System__Action<IWinningCondition>;
      if (pAVar2 == (Action_1_IWinningCondition_ *)0x0) goto code_?;
    }
    (pMVar1->fields).OnWinningConditionFulfilled = pAVar2;
    return;
  }
  func_?(0);
  pAStack3 = extraout_ECX;
  pAStack4 = extraout_EDX;
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnWinningConditionFulfilled(IWinningCondition) */

void Assembly-CSharp.dll::TouristPromotionDesktop::
     TouristPromotionDesktop_OnWinningConditionFulfilled
               (TouristPromotionDesktop *this,IWinningCondition *winningCondition,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = MVGameControllerDesktop::MVGameControllerDesktop_get_LockCursorManager((MethodInfo *)0x0)
  ;
  if (pIVar1 != (ILockCursorManager *)0x0) {
    func_?(3,TypeInfo__ILockCursorManager,pIVar1);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ShowGoToKogamaPopup() */

void Assembly-CSharp.dll::TouristPromotionDesktop::TouristPromotionDesktop_ShowGoToKogamaPopup
               (TouristPromotionDesktop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__TouristPromotionDesktop___ShowGoToKogamaPopup_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  pXVar1 = (XpBoostParticlePreviewer *)(this->fields).goToKogamaPopupPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     (pXVar1,
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = pXVar1;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this_00,
               MethodInfo__TouristPromotionDesktop___ShowGoToKogamaPopup_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SignupCallback() */

void Assembly-CSharp.dll::TouristPromotionDesktop::TouristPromotionDesktop_SignupCallback
               (TouristPromotionDesktop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
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
                     ((EmbeddedSiteConfigData *)&stack0xffffffec,this_00,(MethodInfo *)0x0);
  if (pEVar2->allowsModals != 0) {
    BrowserCommGotoRequests::BrowserCommGotoRequests_GotoSignup(0,1,(MethodInfo *)0x0);
    return;
  }
  if (pEVar2->allowsOpenInNewTab == 0) {
    if (pEVar2->allowsRedirectToWebpage == 0) {
      message = (Object *)func_?();
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log(message,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).embeddedPlayerConfig;
  if (this_00 != (EmbeddedPlayerConfig *)0x0) {
    pEVar1 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                       ((EmbeddedSiteConfigData *)&stack0xffffffec,this_00,(MethodInfo *)0x0);
    (this->fields)._.embedded = pEVar1->siteEnum != 0;
    TouristPromotion::TouristPromotion_Start((TouristPromotion *)this,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 != (MVNetworkGame *)0x0) {
      pAVar3 = (pMVar2->fields).OnWinningConditionFulfilled;
      pSVar4 = (String__Class *)TypeInfo__System__Action<IWinningCondition>;
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)this,
                 MethodInfo__TouristPromotionDesktop__OnWinningConditionFulfilled_IWinningCondition_
                 ,MethodInfo__System__Action<IWinningCondition>__Action_System__Object__void__);
      pAVar5 = (Action_1_IWinningCondition_ *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar3,(Delegate *)this_01,(MethodInfo *)0x0);
      pAVar3 = (Action_1_IWinningCondition_ *)0x0;
      if (pAVar5 != (Action_1_IWinningCondition_ *)0x0) {
        if (pAVar5->klass == TypeInfo__System__Action<IWinningCondition>) {
          pAVar3 = pAVar5;
        }
        if (pAVar3 == (Action_1_IWinningCondition_ *)0x0) goto code_?;
      }
      (pMVar2->fields).OnWinningConditionFulfilled = pAVar3;
      pGVar6 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
      if (pGVar6 != (GameSessionData *)0x0) {
        pSVar7 = (pGVar6->fields).referrer;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          pSVar4 = TypeInfo__System__String;
          func_?();
        }
        pSVar7 = mscorlib.dll::System::String::String_Concat_2
                            (StringLiteral_Referrer__,pSVar7,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)pSVar7,(MethodInfo *)0x0);
        pGVar8 = (this->fields).redirectButton;
        pGVar6 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
        if ((pGVar6 != (GameSessionData *)0x0) && (pGVar8 != (GameObject *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar8,(pGVar6->fields).embedded,(MethodInfo *)0x0);
          pGVar8 = (this->fields).signupButton;
          if (((bool)((uint)pSVar4 >> 0x10) != 0) ||
             (bVar9 = (bool)((uint)pSVar4 >> 0x18), (bool)((uint)pSVar4 >> 8) != 0)) {
            bVar9 = 1;
          }
          if (pGVar8 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar8,bVar9 != 0,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?();
            }
            this_02 = (PrefabPool *)
                      MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (this_02 != (PrefabPool *)0x0) {
              uriString = PrefabPool::PrefabPool_get_MVCameraSettingsPrefab
                                    (this_02,(MethodInfo *)0x0);
              this_03 = (Uri *)func_?();
              System.dll::System::Uri::Uri__ctor(this_03,(String *)uriString,(MethodInfo *)0x0);
              pTVar10 = (this->fields).redirectButtonURLText;
              if (this_03 != (Uri *)0x0) {
                pSVar7 = System.dll::System::Uri::Uri_get_Host(this_03,(MethodInfo *)0x0);
                if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0)
                   && ((TypeInfo__System__String->_1).cctor_started == 0)) {
                  func_?();
                }
                if (pSVar7 != (String *)0x0) {
                  pSVar7 = mscorlib.dll::System::String::String_Replace_1
                                      (pSVar7,StringLiteral_www_,
                                       TypeInfo__System__String->static_fields->Empty,
                                       (MethodInfo *)0x0);
                  if (pSVar7 != (String *)0x0) {
                    mscorlib.dll::System::String::String_ToUpper(pSVar7,(MethodInfo *)0x0);
                    if (pTVar10 != (Text *)0x0) {
                      pTVar11 = pTVar10->klass;
                      pIStack12 = (pTVar11->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
                      (*(code *)(pTVar11->vtable).set_text.method)();
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
  func_?();
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}



/* IEnumerator FadeOutAndPopPromotion() */

IEnumerator *
Assembly-CSharp.dll::RegisteredPromotionPopup::RegisteredPromotionPopup_FadeOutAndPopPromotion
          (RegisteredPromotionPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RegisteredPromotionPopup___FadeOutAndPopPromotion_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = this;
    return (IEnumerator *)this_00;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Void Initialize(Boolean, Boolean) */

void Assembly-CSharp.dll::RegisteredPromotionPopup::RegisteredPromotionPopup_Initialize
               (RegisteredPromotionPopup *this,bool isEmbeddedPromotion,bool withAd,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).withAd = withAd;
  if (isEmbeddedPromotion == 0) {
code_?:
    pIVar1 = (this->fields).adIcon;
    if (pIVar1 != (Image *)0x0) {
      this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)pIVar1,(MethodInfo *)0x0);
      if (this_04 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_04,withAd,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    pTVar2 = (this->fields).looksData;
    if (pTVar2 != (TouristPromotionLooksData *)0x0) {
      TouristPromotionLooksData::TouristPromotionLooksData_RandomizePromotion_1
                (pTVar2,1,(MethodInfo *)0x0);
      pTVar2 = (this->fields).looksData;
      pTVar3 = (this->fields).promotionHeader;
      if (pTVar2 != (TouristPromotionLooksData *)0x0) {
        TouristPromotionLooksData::TouristPromotionLooksData_GetPromotionText
                  (pTVar2,(MethodInfo *)0x0);
        if (pTVar3 != (Text *)0x0) {
          (*(code *)(pTVar3->klass->vtable).set_text.method)(pTVar3);
          pTVar2 = (this->fields).looksData;
          if (pTVar2 != (TouristPromotionLooksData *)0x0) {
            pIVar1 = TouristPromotionLooksData::TouristPromotionLooksData_GetPromotionImage
                               (pTVar2,(MethodInfo *)0x0);
            if (pIVar1 != (Image *)0x0) {
              this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_get_transform((Component_1 *)pIVar1,(MethodInfo *)0x0);
              if (this_00 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                          (this_00,(Transform *)(this->fields).promotionImageParent,0,
                           (MethodInfo *)0x0);
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  func_?();
                }
                pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (pMVar4 != (MVNetworkGame *)0x0) {
                  pAVar5 = (pMVar4->fields).OnWinningConditionFulfilled;
                  this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                             *)func_?();
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                  SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                            (this_01,(Object *)this,
                             MethodInfo__RegisteredPromotionPopup__OnWinningConditionFulfilled_IWinningCondition_
                             ,
                             MethodInfo__System__Action<IWinningCondition>__Action_System__Object__void__
                            );
                  pAVar6 = (Action_1_IWinningCondition_ *)
                           mscorlib.dll::System::Delegate::Delegate_Combine
                                     ((Delegate *)pAVar5,(Delegate *)this_01,(MethodInfo *)0x0);
                  pAVar5 = (Action_1_IWinningCondition_ *)0x0;
                  if (pAVar6 != (Action_1_IWinningCondition_ *)0x0) {
                    if (pAVar6->klass == TypeInfo__System__Action<IWinningCondition>) {
                      pAVar5 = pAVar6;
                    }
                    if (pAVar5 == (Action_1_IWinningCondition_ *)0x0) goto code_?;
                  }
                  (pMVar4->fields).OnWinningConditionFulfilled = pAVar5;
                  this_02 = (PrefabPool *)
                            MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                  if (this_02 != (PrefabPool *)0x0) {
                    uriString = PrefabPool::PrefabPool_get_MVCameraSettingsPrefab
                                          (this_02,(MethodInfo *)0x0);
                    this_03 = (Uri *)func_?();
                    System.dll::System::Uri::Uri__ctor
                              (this_03,(String *)uriString,(MethodInfo *)0x0);
                    pTVar3 = (this->fields).redirectButtonURLText;
                    if (this_03 != (Uri *)0x0) {
                      pSVar7 = System.dll::System::Uri::Uri_get_Host(this_03,(MethodInfo *)0x0);
                      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000)
                           != 0) && ((TypeInfo__System__String->_1).cctor_started == 0)) {
                        func_?();
                      }
                      if (pSVar7 != (String *)0x0) {
                        pSVar7 = mscorlib.dll::System::String::String_Replace_1
                                           (pSVar7,StringLiteral_www_,
                                            TypeInfo__System__String->static_fields->Empty,
                                            (MethodInfo *)0x0);
                        if (pSVar7 != (String *)0x0) {
                          mscorlib.dll::System::String::String_ToUpper(pSVar7,(MethodInfo *)0x0);
                          if (pTVar3 != (Text *)0x0) {
                            (*(code *)(pTVar3->klass->vtable).set_text.method)();
                            goto code_?;
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
    }
  }
  func_?();
  pAVar6 = extraout_ECX;
code_?:
  func_?(pAVar6);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void KogamaRedirect() */

void Assembly-CSharp.dll::RegisteredPromotionPopup::RegisteredPromotionPopup_KogamaRedirect
               (RegisteredPromotionPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
  if (this_00 != (GameSessionData *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::ObjectModel::ReadOnlyCollection`1[VoxelHit]::
            ReadOnlyCollection_1_VoxelHit__System_Collections_IList_get_IsReadOnly
                      ((ReadOnlyCollection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      BrowserCommGotoRequests::BrowserCommGotoRequests_GotoMainpage(1,0,(MethodInfo *)0x0);
      return;
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this_01 = (ScaleAnimationBase *)
              func_?(
                             TypeInfo__RegisteredPromotionPopup___ShowGoToKogamaPopup_c__AnonStorey1
                             );
    ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,in_stack_2);
    pXVar3 = (XpBoostParticlePreviewer *)unaff_EBX[2].monitor;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pXVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       (pXVar3,
                        UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
    if (this_01 != (ScaleAnimationBase *)0x0) {
      (this_01->fields)._._._._.m_CachedPtr = pXVar3;
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       (unaff_EBX,(MethodInfo *)0x0);
      this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(
                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                  );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_02,(Object *)this_01,
                 MethodInfo__RegisteredPromotionPopup___ShowGoToKogamaPopup_c__AnonStorey1____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
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
                (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_02,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      return;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnContinueClicked() */

void Assembly-CSharp.dll::RegisteredPromotionPopup::RegisteredPromotionPopup_OnContinueClicked
               (RegisteredPromotionPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RegisteredPromotionPopup___FadeOutAndPopPromotion_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = this;
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
              ((MonoBehaviour *)this,(IEnumerator *)this_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::RegisteredPromotionPopup::RegisteredPromotionPopup_OnDestroy
               (RegisteredPromotionPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 == (MVNetworkGame *)0x0) {
      func_?(0);
      pAStack3 = extraout_ECX;
      pAStack4 = extraout_EDX;
code_?:
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pAVar6 = (pMVar2->fields).OnWinningConditionFulfilled;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action<IWinningCondition>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,
               MethodInfo__RegisteredPromotionPopup__OnWinningConditionFulfilled_IWinningCondition_,
               MethodInfo__System__Action<IWinningCondition>__Action_System__Object__void__);
    pAStack3 =
         (Action_1_IWinningCondition_ *)
         mscorlib.dll::System::Delegate::Delegate_Remove
                   ((Delegate *)pAVar6,(Delegate *)this_00,(MethodInfo *)0x0);
    pAVar6 = (Action_1_IWinningCondition_ *)0x0;
    if (pAStack3 != (Action_1_IWinningCondition_ *)0x0) {
      if (pAStack3->klass == TypeInfo__System__Action<IWinningCondition>) {
        pAVar6 = pAStack3;
      }
      pAStack4 = TypeInfo__System__Action<IWinningCondition>;
      if (pAVar6 == (Action_1_IWinningCondition_ *)0x0) goto code_?;
    }
    (pMVar2->fields).OnWinningConditionFulfilled = pAVar6;
  }
  return;
}


/* Void OnViewAdClicked() */

void Assembly-CSharp.dll::RegisteredPromotionPopup::RegisteredPromotionPopup_OnViewAdClicked
               (RegisteredPromotionPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).withAd == 0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    method_00 = TypeInfo__RegisteredPromotionPopup___FadeOutAndPopPromotion_c__Iterator0;
    this_02 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(this_02,0.0,(MethodInfo *)method_00);
    if (this_02 != (ScaleAnimationBase *)0x0) {
      (this_02->fields)._._._._.m_CachedPtr = this;
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                ((MonoBehaviour *)this,(IEnumerator *)this_02,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_Showing_Ad,(MethodInfo *)0x0);
    this_00 = (this->fields).continueButton;
    (this->fields).waitingForAd = 1;
    if (this_00 != (Button *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                ((Selectable *)this_00,0,(MethodInfo *)0x0);
      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields).startTime = fVar1;
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
      if (TypeInfo__RegisteredPromotionPopup->static_fields->__f__am_cache0 ==
          (ExecuteEvents_EventFunction_1_IRegisterPromotionAdController_ *)0x0) {
        this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_01,(Object *)0x0,
                   MethodInfo__RegisteredPromotionPopup___OnViewAdClicked_m__0_IRegisterPromotionAdController__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IRegisterPromotionAdController>__EventFunction_System__Object__void__
                  );
        TypeInfo__RegisteredPromotionPopup->static_fields->__f__am_cache0 =
             (ExecuteEvents_EventFunction_1_IRegisterPromotionAdController_ *)this_01;
      }
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
           TypeInfo__RegisteredPromotionPopup->static_fields->__f__am_cache0;
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IRegisterPromotionAdController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IRegisterPromotionAdController>_
                );
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnWinningConditionFulfilled(IWinningCondition) */

void Assembly-CSharp.dll::RegisteredPromotionPopup::
     RegisteredPromotionPopup_OnWinningConditionFulfilled
               (RegisteredPromotionPopup *this,IWinningCondition *winningCondition,
               MethodInfo *method)

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

void Assembly-CSharp.dll::RegisteredPromotionPopup::RegisteredPromotionPopup_ShowGoToKogamaPopup
               (RegisteredPromotionPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RegisteredPromotionPopup___ShowGoToKogamaPopup_c__AnonStorey1;
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
               MethodInfo__RegisteredPromotionPopup___ShowGoToKogamaPopup_c__AnonStorey1____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
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


/* Void Update() */

void Assembly-CSharp.dll::RegisteredPromotionPopup::RegisteredPromotionPopup_Update
               (RegisteredPromotionPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).waitingForAd != 0) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if ((this->fields).timeoutDelay <= fVar1 - (this->fields).startTime) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
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


/* Void <OnViewAdClicked>m__0(IRegisterPromotionAdController, BaseEventData) */

void Assembly-CSharp.dll::RegisteredPromotionPopup::RegisteredPromotionPopup__OnViewAdClicked_m__0
               (IRegisterPromotionAdController *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IRegisterPromotionAdController *)0x0) {
    func_?(0,TypeInfo__IRegisterPromotionAdController,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* RegisteredPromotionPopup() */

void Assembly-CSharp.dll::RegisteredPromotionPopup::RegisteredPromotionPopup__ctor
               (RegisteredPromotionPopup *this,MethodInfo *method)

{
  (this->fields).timeoutDelay = 20.0;
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


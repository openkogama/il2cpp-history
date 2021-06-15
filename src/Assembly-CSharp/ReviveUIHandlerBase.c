
/* Void Initialize(UnityAction) */

void Assembly-CSharp.dll::ReviveUIHandlerBase::ReviveUIHandlerBase_Initialize
               (ReviveUIHandlerBase *this,UnityAction *onContinueClicked,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (HoverCraftMotor *)(this->fields).continueButton;
  if (this_00 != (HoverCraftMotor *)0x0) {
    this_03 = (UnityEvent *)
              HoverCraftMotor::HoverCraftMotor_get_VehicleCamera(this_00,(MethodInfo *)0x0);
    if (this_03 != (UnityEvent *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                (this_03,onContinueClicked,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if (pGVar1 != (GameEventManager *)0x0) {
        this_01 = (pGVar1->fields).AvatarCommandsPlayMode;
        this_04 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_04,(Object *)this,MethodInfo__ReviveUIHandlerBase__ReviveTimeElapsed__,
                   (MethodInfo *)0x0);
        if (this_01 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
          GameEventManager+AvatarCommandsPlayModeManager::
          GameEventManager_AvatarCommandsPlayModeManager_add_OnReviveTimeElapsed
                    (this_01,(Action *)this_04,(MethodInfo *)0x0);
          this_05 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
          if (this_05 != (MVLocalPlayer *)0x0) {
            fVar2 = MVLocalPlayer::MVLocalPlayer_get_ReviveTimeout(this_05,(MethodInfo *)0x0);
            (this->fields).duration = fVar2;
            fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                              ((MethodInfo *)0x0);
            (this->fields).started = fVar2;
            this_02 = (this->fields).adIcon;
            MVar3 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
            if (this_02 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (this_02,MVar3 != MVGameMode__Enum_Edit,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::ReviveUIHandlerBase::ReviveUIHandlerBase_OnDestroy
               (ReviveUIHandlerBase *this,MethodInfo *method)

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
  if (bVar1 == 0) {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar2 != (MVNetworkGame *)0x0) {
    pAVar3 = (pMVar2->fields).OnWinningConditionFulfilled;
    pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__System__Action<IWinningCondition>);
    if (this != (ReviveUIHandlerBase *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar4,(Object *)this,(this->klass->vtable).OnDestroy.methodPtr,
                 MethodInfo__System__Action<IWinningCondition>__Action_System__Object__void__);
      pAVar5 = (Action_1_IWinningCondition_ *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar3,(Delegate *)pUVar4,(MethodInfo *)0x0);
      pAVar3 = (Action_1_IWinningCondition_ *)0x0;
      if (pAVar5 != (Action_1_IWinningCondition_ *)0x0) {
        if (pAVar5->klass == TypeInfo__System__Action<IWinningCondition>) {
          pAVar3 = pAVar5;
        }
        pAVar6 = TypeInfo__System__Action<IWinningCondition>;
        if (pAVar3 == (Action_1_IWinningCondition_ *)0x0) goto code_?;
      }
      (pMVar2->fields).OnWinningConditionFulfilled = pAVar3;
      pGVar7 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if (pGVar7 != (GameEventManager *)0x0) {
        this_00 = (pGVar7->fields).AvatarCommandsPlayMode;
        pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(TypeInfo__System__Action);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar4,(Object *)this,MethodInfo__ReviveUIHandlerBase__ReviveTimeElapsed__,
                   (MethodInfo *)0x0);
        if (this_00 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
          GameEventManager+AvatarCommandsPlayModeManager::
          GameEventManager_AvatarCommandsPlayModeManager_remove_OnReviveTimeElapsed
                    (this_00,(Action *)pUVar4,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pAVar5 = extraout_ECX;
  pAVar6 = extraout_EDX;
code_?:
  func_?(pAVar5,pAVar6);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnWatchAdClicked() */

void Assembly-CSharp.dll::ReviveUIHandlerBase::ReviveUIHandlerBase_OnWatchAdClicked
               (ReviveUIHandlerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ReviveUIHandlerBase___OnWatchAdClicked_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).state = (int32_t)this;
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_REVIVE_STARTED,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame *)0x0) {
      pAVar2 = (pMVar1->fields).OnWinningConditionFulfilled;
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__Action<IWinningCondition>);
      if (this != (ReviveUIHandlerBase *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)this,(this->klass->vtable).OnDestroy.methodPtr,
                   MethodInfo__System__Action<IWinningCondition>__Action_System__Object__void__);
        pAVar4 = (Action_1_IWinningCondition_ *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pAVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
        pAVar2 = (Action_1_IWinningCondition_ *)0x0;
        if (pAVar4 != (Action_1_IWinningCondition_ *)0x0) {
          if (pAVar4->klass == TypeInfo__System__Action<IWinningCondition>) {
            pAVar2 = pAVar4;
          }
          pAVar5 = TypeInfo__System__Action<IWinningCondition>;
          if (pAVar2 == (Action_1_IWinningCondition_ *)0x0) goto code_?;
        }
        (pMVar1->fields).OnWinningConditionFulfilled = pAVar2;
        (this->fields).watchAdClicked = 1;
        pIVar6 = MVGameControllerDesktop::MVGameControllerDesktop_get_LockCursorManager
                           ((MethodInfo *)0x0);
        if (pIVar6 != (ILockCursorManager *)0x0) {
          func_?(3,TypeInfo__ILockCursorManager,pIVar6,0);
          pXVar7 = (XpBoostParticlePreviewer *)(this->fields).continuePopup;
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          pXVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                             (pXVar7,
                              ContinueButtonLockCursor_MethodInfo__UnityEngine__Object__Instantiate<ContinueButtonLockCursor>_ContinueButtonLockCursor_
                             );
          (this_00->fields)._._._._.m_CachedPtr = pXVar7;
          pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(TypeInfo__System__Action);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar3,(Object *)this,(this->klass->vtable).Initialize.methodPtr,
                     (MethodInfo *)0x0);
          if (pXVar7 != (XpBoostParticlePreviewer *)0x0) {
            ContinueButtonLockCursor::ContinueButtonLockCursor_Initialize
                      ((ContinueButtonLockCursor *)pXVar7,(Action *)pUVar3,(MethodInfo *)0x0);
            root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)this,(MethodInfo *)0x0);
            pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?(
                                       TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                       );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar3,(Object *)this_00,
                       MethodInfo__ReviveUIHandlerBase___OnWatchAdClicked_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,
                       MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                      );
            if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                        methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy_63
                      (root,(BaseEventData *)0x0,
                       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar3,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            pIVar8 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
            if (pIVar8 != (IEditModeUI *)0x0) {
              (*(code *)(this->klass->vtable).__unknown_1.method)();
              return;
            }
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?();
            }
            pIVar9 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
            pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar3,(Object *)this,(this->klass->vtable).__unknown_2.methodPtr,
                       MethodInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>__Action_System__Object__void__
                      );
            uVar10 = (*(code *)(this->klass->vtable).__unknown.method)();
            if (pIVar9 != (IAdManager *)0x0) {
              pIVar11 = pIVar9->klass;
              uVar12 = 0;
              uVar13._0_1_ = (pIVar11->_1).rank;
              uVar13._1_1_ = (pIVar11->_1).minimumAlignment;
              if (uVar13 != 0) {
                do {
                  if (pIVar11->interfaceOffsets[uVar12].interfaceType ==
                      (Il2CppClass *)TypeInfo__Assets__Scripts__AdIntegration__IAdManager) {
                    ppMVar14 = &(&(pIVar9->klass->vtable).RequestRewardedAd)
                                [pIVar11->interfaceOffsets[uVar12].offset].method;
                    goto code_?;
                  }
                  uVar12 = uVar12 + 1;
                } while (uVar12 < uVar13);
              }
              ppMVar14 = (MethodInfo **)
                         func_?(pIVar9,
                                         TypeInfo__Assets__Scripts__AdIntegration__IAdManager,6);
code_?:
              (*(code *)*ppMVar14)(pIVar9,pUVar3,uVar10,ppMVar14[1]);
              return;
            }
          }
        }
      }
    }
  }
  func_?(0);
  pAVar4 = extraout_ECX;
  pAVar5 = extraout_EDX;
code_?:
  func_?(pAVar4,pAVar5);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void ReviveTimeElapsed() */

void Assembly-CSharp.dll::ReviveUIHandlerBase::ReviveUIHandlerBase_ReviveTimeElapsed
               (ReviveUIHandlerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if (pGVar1 != (GameEventManager *)0x0) {
    this_00 = (pGVar1->fields).AvatarCommandsPlayMode;
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this,MethodInfo__ReviveUIHandlerBase__ReviveTimeElapsed__,
               (MethodInfo *)0x0);
    if (this_00 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
      GameEventManager+AvatarCommandsPlayModeManager::
      GameEventManager_AvatarCommandsPlayModeManager_remove_OnReviveTimeElapsed
                (this_00,(Action *)this_01,(MethodInfo *)0x0);
      if ((this->fields).watchAdClicked == 0) {
        (*(code *)(this->klass->vtable).__unknown_1.method)();
      }
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RoundEnded(IWinningCondition) */

void Assembly-CSharp.dll::ReviveUIHandlerBase::ReviveUIHandlerBase_RoundEnded
               (ReviveUIHandlerBase *this,IWinningCondition *condition,MethodInfo *method)

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
    if (this != (ReviveUIHandlerBase *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_00,(Object *)this,(this->klass->vtable).OnDestroy.methodPtr,
                 MethodInfo__System__Action<IWinningCondition>__Action_System__Object__void__);
      pAStack3 =
           (Action_1_IWinningCondition_ *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
      pAVar2 = (Action_1_IWinningCondition_ *)0x0;
      if (pAStack3 == (Action_1_IWinningCondition_ *)0x0) {
code_?:
        (pMVar1->fields).OnWinningConditionFulfilled = pAVar2;
        return;
      }
      if (pAStack3->klass == TypeInfo__System__Action<IWinningCondition>) {
        pAVar2 = pAStack3;
      }
      pAStack4 = TypeInfo__System__Action<IWinningCondition>;
      if (pAVar2 != (Action_1_IWinningCondition_ *)0x0) goto code_?;
      goto code_?;
    }
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


/* Void Update() */

void Assembly-CSharp.dll::ReviveUIHandlerBase::ReviveUIHandlerBase_Update
               (ReviveUIHandlerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (fVar1 - (this->fields).started < (this->fields).duration) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    pIVar2 = (this->fields).timerFill;
    if (pIVar2 != (Image *)0x0) {
      value = _UNK_? - (fVar1 - (this->fields).started) / (this->fields).duration;
      UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                (pIVar2,value,(MethodInfo *)0x0);
      fVar1 = (this->fields).duration;
      pTVar3 = (this->fields).timerText;
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                (fVar1 * value,(MethodInfo *)0x0);
      uVar4 = func_?();
      if (pTVar3 != (Text *)0x0) {
        (*(code *)(pTVar3->klass->vtable).set_text.method)
                  (pTVar3,uVar4,(pTVar3->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
        return;
      }
    }
  }
  else {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pGVar5 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if ((pGVar5 != (GameEventManager *)0x0) &&
       (this_00 = (pGVar5->fields).AvatarCommandsPlayMode,
       this_00 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
      GameEventManager+AvatarCommandsPlayModeManager::
      GameEventManager_AvatarCommandsPlayModeManager_ReviveTimeElapsed(this_00,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)this,0,(MethodInfo *)0x0);
      pIVar2 = (this->fields).timerFill;
      if (pIVar2 != (Image *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                  (pIVar2,0.0,(MethodInfo *)0x0);
        pTStack6 = (this->fields).timerText;
        if (pTStack6 != (Text *)0x0) {
          pIStack7 =
               (pTStack6->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
          pSStack8 = StringLiteral__0;
          (*(code *)(pTStack6->klass->vtable).set_text.method)();
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


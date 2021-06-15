
/* Void CreatePlayButton() */

void Assembly-CSharp.dll::WinningConditionBriefing::WinningConditionBriefing_CreatePlayButton
               (WinningConditionBriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).DesktopPlayButtonPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pPVar1 = (PlayButton *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)pPVar1,
                      PlayButton_MethodInfo__UnityEngine__Object__Instantiate<PlayButton>_PlayButton_
                     );
  (this->fields).desktopPlayButton = pPVar1;
  if (pPVar1 != (PlayButton *)0x0) {
    pAVar2 = (pPVar1->fields).OnPlayButtonPressed;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,MethodInfo__WinningConditionBriefing__OnPlayPressed__,
               (MethodInfo *)0x0);
    pAVar3 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    pAVar2 = (Action *)0x0;
    if (pAVar3 != (Action *)0x0) {
      if (pAVar3->klass == TypeInfo__System__Action) {
        pAVar2 = pAVar3;
      }
      pAVar4 = TypeInfo__System__Action;
      if (pAVar2 == (Action *)0x0) goto code_?;
    }
    (pPVar1->fields).OnPlayButtonPressed = pAVar2;
    pPVar1 = (this->fields).desktopPlayButton;
    if (pPVar1 != (PlayButton *)0x0) {
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)pPVar1,(MethodInfo *)0x0);
      (this->fields).playButton = this_01;
      if (this_01 != (GameObject *)0x0) {
        this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (this_01,(MethodInfo *)0x0);
        parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)this,(MethodInfo *)0x0);
        if (this_02 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (this_02,parent,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pAVar3 = extraout_ECX;
  pAVar4 = extraout_EDX;
code_?:
  func_?(pAVar3,pAVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* IEnumerator FixAspectRatioDelay() */

IEnumerator *
Assembly-CSharp.dll::WinningConditionBriefing::WinningConditionBriefing_FixAspectRatioDelay
          (WinningConditionBriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__WinningConditionBriefing___FixAspectRatioDelay_c__Iterator0;
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


/* Int32 GetHighScore(WinningConditionType) */

int32_t Assembly-CSharp.dll::WinningConditionBriefing::WinningConditionBriefing_GetHighScore
                  (WinningConditionBriefing *this,WinningConditionType__Enum winningConditionType,
                  MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffc4;
  puVar5 = &stack0xffffffc4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  uStack_6 = 0;
  func_?();
  if (winningConditionType == WinningConditionType__Enum_Flag) {
    winningConditionType = WinningConditionType__Enum_Kill;
  }
  else {
    winningConditionType =
         CONCAT31(winningConditionType._1_3_,
                  (winningConditionType != WinningConditionType__Enum_TimeAttackFlag) + -1) &
         0xffffff08;
  }
  pGStack_7 = (GameStatCounterManager *)0x0;
  puStack_8 = (undefined4 *)&stack0xffffffc4;
  puStack_4 = &stack0xffffffc4;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (puStack_8 = (undefined4 *)&stack0xffffffc4, puStack_4 = &stack0xffffffc4,
     (TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    puStack_8 = (undefined4 *)&stack0xffffffc4;
    puStack_4 = &stack0xffffffc4;
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((this_00 != (MVAvatar *)0x0) &&
     (this_01 = MVAvatar::MVAvatar_get_Shield(this_00,(MethodInfo *)0x0),
     this_01 != (MVRuntimeDataVariableClampedFloat *)0x0)) {
    pIVar9 = MVPlayerContainer::MVPlayerContainer_GetEnumerator
                       ((MVPlayerContainer *)this_01,(MethodInfo *)0x0);
    uStack_1 = 0;
    oldScore = (GameStatCounterManager *)0x0;
    pIStack_10 = pIVar9;
    while (pIVar9 != (IEnumerator_1_KeyValuePair_2_System_Int32_MVPlayer_ *)0x0) {
      cVar11 = func_?(1,TypeInfo__System__Collections__IEnumerator);
      if (cVar11 == '\0') {
        *puStack_8 = 0xa9;
        uStack_1 = 0xffffffff;
        if (pIVar9 != (IEnumerator_1_KeyValuePair_2_System_Int32_MVPlayer_ *)0x0) {
          func_?(0,TypeInfo__System__IDisposable);
        }
        *unaff_FS_OFFSET = uStack_3;
        return (int32_t)oldScore;
      }
      method_00 = (MethodInfo *)&UNK_?;
      uStack_6 = func_?(0,
                                  TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<int,_MVPlayer>_>
                                 );
      iVar12 = func_?(&uStack_6);
      if (iVar12 != 0) {
        this_02 = (NamedThemeAttribute_1_UnityEngine_Color_ *)func_?(&uStack_6);
        if (this_02 == (NamedThemeAttribute_1_UnityEngine_Color_ *)0x0) break;
        pSStack_13 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                     NamedThemeAttribute_1_UnityEngine_Color__get_Name(this_02,method_00);
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (this_03 == (MVNetworkGame *)0x0) break;
        unaff_ESI = (GameStatCounterManager *)
                    DayNightCycle::DayNightCycle_get_CurrentStarsParam
                              ((DayNightCycle *)this_03,(MethodInfo *)0x0);
        this_04 = (KogamaSettingNumericBase_1_System_Single_ *)func_?();
        if ((this_04 == (KogamaSettingNumericBase_1_System_Single_ *)0x0) ||
           (in_stack_14 =
                 (MethodInfo *)
                 MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                 KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                 KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                           (this_04,in_stack_14), unaff_ESI == (GameStatCounterManager *)0x0))
        break;
        unaff_ESI = (GameStatCounterManager *)
                    MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                              (unaff_ESI,winningConditionType,(MVTeam__Enum)in_stack_14,
                               (int32_t)pSStack_13,in_stack_15);
        bVar16 = WinningConditionControl::WinningConditionControl_IsNewScoreBetter
                          ((int32_t)unaff_ESI,(int32_t)oldScore,winningConditionType,
                           (MethodInfo *)0x0);
        if (bVar16 != 0) {
          oldScore = unaff_ESI;
          pGStack_7 = unaff_ESI;
        }
      }
    }
  }
  func_?();
  func_?(unaff_ESI,0);
  pcVar17 = (code *)swi(3);
  iVar18 = (*pcVar17)();
  return iVar18;
}


/* Void Initialize(WinningConditionType) */

void Assembly-CSharp.dll::WinningConditionBriefing::WinningConditionBriefing_Initialize
               (WinningConditionBriefing *this,WinningConditionType__Enum winConType,
               MethodInfo *method)

{
  (this->fields).winConType = winConType;
  this_00 = (JumpState_OnWallJumpDelegate *)(this->fields).initializeCallback;
  (this->fields).isInitialized = 1;
  if (this_00 != (JumpState_OnWallJumpDelegate *)0x0) {
    JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke(this_00,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).DesktopPlayButtonPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pPVar1 = (PlayButton *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)pPVar1,
                      PlayButton_MethodInfo__UnityEngine__Object__Instantiate<PlayButton>_PlayButton_
                     );
  (this->fields).desktopPlayButton = pPVar1;
  if (pPVar1 != (PlayButton *)0x0) {
    pAVar2 = (pPVar1->fields).OnPlayButtonPressed;
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this,MethodInfo__WinningConditionBriefing__OnPlayPressed__,
               (MethodInfo *)0x0);
    pAVar3 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar2,(Delegate *)this_01,(MethodInfo *)0x0);
    pAVar2 = (Action *)0x0;
    if (pAVar3 != (Action *)0x0) {
      if (pAVar3->klass == TypeInfo__System__Action) {
        pAVar2 = pAVar3;
      }
      if (pAVar2 == (Action *)0x0) goto code_?;
    }
    (pPVar1->fields).OnPlayButtonPressed = pAVar2;
    pPVar1 = (this->fields).desktopPlayButton;
    if (pPVar1 != (PlayButton *)0x0) {
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)pPVar1,(MethodInfo *)0x0);
      (this->fields).playButton = this_02;
      if (this_02 != (GameObject *)0x0) {
        this_03 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (this_02,(MethodInfo *)0x0);
        parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)this,(MethodInfo *)0x0);
        if (this_03 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (this_03,parent,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pAVar3 = extraout_ECX;
code_?:
  func_?(pAVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::WinningConditionBriefing::WinningConditionBriefing_OnDestroy
               (WinningConditionBriefing *this,MethodInfo *method)

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
      func_?();
    }
    pIVar2 = MVGameControllerBase::MVGameControllerBase_get_PlayModeUI((MethodInfo *)0x0);
    if (pIVar2 != (IPlayModeUI *)0x0) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pIVar2 = MVGameControllerBase::MVGameControllerBase_get_PlayModeUI((MethodInfo *)0x0);
      if (pIVar2 == (IPlayModeUI *)0x0) {
code_?:
        func_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      cVar4 = func_?();
      if (cVar4 == '\0') {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                            ((MethodInfo *)0x0);
        if (this_00 == (MainCameraManager *)0x0) goto code_?;
        MainCameraManager::MainCameraManager_set_CamMaskMode
                  (this_00,MaskMode__Enum_Default,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


/* Void OnPlayPressed() */

void Assembly-CSharp.dll::WinningConditionBriefing::WinningConditionBriefing_OnPlayPressed
               (WinningConditionBriefing *this,MethodInfo *method)

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
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                        ((DayNightCycle *)this_00,(MethodInfo *)0x0);
    if (this_01 != (SkyParam *)0x0) {
      bVar1 = MVTeamManager::MVTeamManager_TeamHasSpawnRoles
                        ((MVTeamManager *)this_01,(this->fields)._.selectedTeam,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        pPVar2 = (this->fields).desktopPlayButton;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)pPVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar1 != 0) {
          pPVar2 = (this->fields).desktopPlayButton;
          if (pPVar2 == (PlayButton *)0x0) goto code_?;
          PlayButton::PlayButton_Play(pPVar2,(MethodInfo *)0x0);
        }
        pPVar3 = (this->fields).androidPlayButton;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)pPVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar1 != 0) {
          pPVar3 = (this->fields).androidPlayButton;
          if (pPVar3 == (PlayButtonMobile *)0x0) goto code_?;
          PlayButtonMobile::PlayButtonMobile_Play(pPVar3,(MethodInfo *)0x0);
        }
        return;
      }
      pMVar4 = (MethodInfo *)&UNK_?;
      this_02 = (ScaleAnimationBase *)func_?();
      ScaleAnimationBase::ScaleAnimationBase_Play(this_02,0.0,pMVar4);
      pMVar4 = (MethodInfo *)
               UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if (TypeInfo__WinningConditionBriefing->static_fields->__f__am_cache0 ==
          (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        pMVar4 = 
        MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
        ;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar5,(Object *)0x0,
                   MethodInfo__WinningConditionBriefing___OnPlayPressed_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                  );
        TypeInfo__WinningConditionBriefing->static_fields->__f__am_cache0 =
             (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar5;
      }
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
           TypeInfo__WinningConditionBriefing->static_fields->__f__am_cache0;
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                ((GameObject *)pMVar4,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pSVar6 = (this->fields)._.spawnRoleMenuPrefab;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar6 = (SpawnRoleMenu *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                         ((XpBoostParticlePreviewer *)pSVar6,
                          SpawnRoleMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleMenu>_SpawnRoleMenu_
                         );
      if ((this_02 != (ScaleAnimationBase *)0x0) &&
         ((this_02->fields)._._._._.m_CachedPtr = pSVar6, pSVar6 != (SpawnRoleMenu *)0x0)) {
        SpawnRoleMenu::SpawnRoleMenu_Initialize
                  (pSVar6,(this->fields)._.selectedTeam,(MethodInfo *)0x0);
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
        pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar5,(Object *)this_02,
                   MethodInfo__WinningConditionBriefing___OnPlayPressed_c__AnonStorey1____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                  );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar5
                   ,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetupBriefing() */

void Assembly-CSharp.dll::WinningConditionBriefing::WinningConditionBriefing_SetupBriefing
               (WinningConditionBriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  statType = in_stack_1 & 0xffffff00;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_01 != (MainCameraManager *)0x0) {
    MainCameraManager::MainCameraManager_set_CamMaskMode
              (this_01,MaskMode__Enum_SkyBoxOnly,(MethodInfo *)0x0);
    pAVar2 = (this->fields).initializeCallback;
    this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_02,(Object *)this,MethodInfo__WinningConditionBriefing__SetupBriefing__,
               (MethodInfo *)0x0);
    pAVar3 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar2,(Delegate *)this_02,(MethodInfo *)0x0);
    pAVar2 = (Action *)0x0;
    if (pAVar3 != (Action *)0x0) {
      if (pAVar3->klass == TypeInfo__System__Action) {
        pAVar2 = pAVar3;
      }
      if (pAVar2 == (Action *)0x0) {
        func_?(pAVar3,TypeInfo__System__Action);
        goto code_?;
      }
    }
    (this->fields).initializeCallback = pAVar2;
    pLVar4 = (this->fields).winningConditionMapping;
    iVar5 = 0;
    while (pLVar4 != (List_1_WinningConditionBriefing_WinningConditionBriefingDef_ *)0x0) {
      pOVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar4,
                           MethodInfo__System__Collections__Generic__List<WinningConditionBriefing::WinningConditionBriefingDef>__get_Count__
                          );
      if ((int)pOVar6 <= iVar5) {
code_?:
        piVar7 = &(this->fields).winConType;
        piVar8 = (int *)func_?(TypeInfo__WinningConditionType,piVar7);
        if (piVar8 == (int *)0x0) break;
        pSVar9 = (String *)(**(code **)(*piVar8 + 0xd8))(piVar8,*(undefined4 *)(*piVar8 + 0xdc))
        ;
        piVar10 = (int32_t *)func_?(piVar8);
        *piVar7 = *piVar10;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        pSVar9 = mscorlib.dll::System::String::String_Concat_2
                            (StringLiteral_winConType__,pSVar9,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)pSVar9,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)StringLiteral_WinningConditionData_is_null__bu,(MethodInfo *)0x0);
code_?:
        key = (this->fields).winConType;
        if (key != WinningConditionType__Enum_None) {
          this_00 = (this->fields).headerMap;
          pTVar11 = (this->fields).winningConditionHeader;
          if ((this_00 == (Dictionary_2_WinningConditionType_System_String_ *)0x0) ||
             (pOVar6 = mscorlib.dll::System::Collections::Generic::
                        Dictionary`2[WinningConditionType,System::Object]::
                        Dictionary_2_WinningConditionType_System_Object__get_Item
                                  ((Dictionary_2_WinningConditionType_System_Object_ *)this_00,key,
                                   MethodInfo__System__Collections__Generic__Dictionary<WinningConditionType,_System::String>__get_Item_WinningConditionType_
                                  ), pTVar11 == (Text *)0x0)) break;
          (*(code *)(pTVar11->klass->vtable).set_text.method)
                    (pTVar11,pOVar6,
                     (pTVar11->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
          bVar12 = WinningConditionControl::WinningConditionControl_TryGetPrioritizedStat
                            ((GameStatCounterType__Enum *)&stack0xfffffff0,(MethodInfo *)0x0);
          if (bVar12 != 0) {
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVGameControllerBase);
            }
            pMVar13 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar13 == (MVNetworkGame *)0x0) ||
               (this_03 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                                    ((DayNightCycle *)pMVar13,(MethodInfo *)0x0),
               this_03 == (SkyParam *)0x0)) break;
            iVar14 = MVTeamManager::MVTeamManager_TeamCount
                               ((MVTeamManager *)this_03,(MethodInfo *)0x0);
            if (iVar14 < 2) {
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?(TypeInfo__MVGameControllerBase);
              }
              pMVar13 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (pMVar13 == (MVNetworkGame *)0x0) break;
              pGVar15 = (GameStatCounterManager *)
                        DayNightCycle::DayNightCycle_get_CurrentStarsParam
                                  ((DayNightCycle *)pMVar13,(MethodInfo *)0x0);
              pMVar13 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar13 == (MVNetworkGame *)0x0) ||
                 (pMVar16 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar13,(MethodInfo *)0x0),
                 pMVar16 == (MVLocalPlayer *)0x0)) break;
              pIVar17 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                        KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                        KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                                  ((KogamaSettingNumericBase_1_System_Single_ *)pMVar16,
                                   (MethodInfo *)0x0);
              pMVar13 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar13 == (MVNetworkGame *)0x0) ||
                 ((pMVar16 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar13,(MethodInfo *)0x0)
                  , pMVar16 == (MVLocalPlayer *)0x0 ||
                  (pSVar9 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                             NamedThemeAttribute_1_UnityEngine_Color__get_Name
                                       ((NamedThemeAttribute_1_UnityEngine_Color_ *)pMVar16,
                                        (MethodInfo *)0x0), pGVar15 == (GameStatCounterManager *)0x0
                  )))) break;
              MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                        (pGVar15,statType,(MVTeam__Enum)pIVar17,(int32_t)pSVar9,(MethodInfo *)0x0);
            }
            else {
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?(TypeInfo__MVGameControllerBase);
              }
              pMVar13 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (pMVar13 == (MVNetworkGame *)0x0) break;
              pGVar15 = (GameStatCounterManager *)
                        DayNightCycle::DayNightCycle_get_CurrentStarsParam
                                  ((DayNightCycle *)pMVar13,(MethodInfo *)0x0);
              pMVar13 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (((pMVar13 == (MVNetworkGame *)0x0) ||
                  (pMVar16 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar13,(MethodInfo *)0x0)
                  , pMVar16 == (MVLocalPlayer *)0x0)) ||
                 (pIVar17 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                            KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                            KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                                      ((KogamaSettingNumericBase_1_System_Single_ *)pMVar16,
                                       (MethodInfo *)0x0), pGVar15 == (GameStatCounterManager *)0x0)
                 ) break;
              MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetTeamCount
                        (pGVar15,statType,(MVTeam__Enum)pIVar17,(MethodInfo *)0x0);
            }
            iVar14 = WinningConditionControl::WinningConditionControl_GetPrioritizedStatLimit
                               (statType,(MethodInfo *)0x0);
            if ((iVar14 == 0) &&
               ((iVar5 = (this->fields).winConType, iVar5 == 1 || (iVar5 == 5)))) {
              pGVar18 = (this->fields).progressableWinningConditionPresent;
              if (pGVar18 == (GameObject *)0x0) break;
              iVar14 = 0;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar18,0,(MethodInfo *)0x0);
              pGVar18 = (this->fields).reachTheFlagPresent;
              if (pGVar18 == (GameObject *)0x0) break;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar18,1,(MethodInfo *)0x0);
              pTVar11 = (this->fields).flagScoreText;
              iVar19 = WinningConditionBriefing_GetHighScore
                                 (this,(this->fields).winConType,(MethodInfo *)0x0);
              puVar20 = &UNK_?;
              WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                        (iVar19,GameStatCounterType__Enum_Flag,(MethodInfo *)0x0);
              if (pTVar11 == (Text *)0x0) break;
              func_?();
            }
            else {
              pGVar18 = (this->fields).reachTheFlagPresent;
              if (pGVar18 == (GameObject *)0x0) break;
              iVar14 = 0;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar18,0,(MethodInfo *)0x0);
              pGVar18 = (this->fields).progressableWinningConditionPresent;
              if (pGVar18 == (GameObject *)0x0) break;
              puVar20 = &UNK_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar18,1,(MethodInfo *)0x0);
            }
            pTVar11 = (this->fields).scoreLimit;
            uVar21 = func_?();
            if (pTVar11 == (Text *)0x0) break;
            (*(code *)(pTVar11->klass->vtable).set_text.method)
                      (pTVar11,uVar21,
                       (pTVar11->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
            pPVar22 = (this->fields).scoreProgressBar;
            if (pPVar22 == (ProgressBar *)0x0) break;
            ProgressBar::ProgressBar_set_Progress
                      (pPVar22,(float)iVar14 / (float)(int)puVar20,(MethodInfo *)0x0);
            pTVar11 = (this->fields).scoreText;
            pSVar9 = WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                                (iVar14,statType,(MethodInfo *)0x0);
            if (pTVar11 == (Text *)0x0) break;
            (*(code *)(pTVar11->klass->vtable).set_text.method)
                      (pTVar11,pSVar9,
                       (pTVar11->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
          }
          pSVar23 = (this->fields).scoreBoardController;
          if ((pSVar23 == (ScoreBoardController *)0x0) ||
             (this_04 = ScoreBoardController::ScoreBoardController_GetInstantiatedScoreboard
                                  (pSVar23,(this->fields).winConType,(MethodInfo *)0x0),
             this_04 == (ScoreBoardBase *)0x0)) break;
          pTVar24 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                              ((Component_1 *)this_04,(MethodInfo *)0x0);
          pSVar23 = (this->fields).scoreBoardController;
          if ((pSVar23 == (ScoreBoardController *)0x0) ||
             (pTVar25 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_get_transform((Component_1 *)pSVar23,(MethodInfo *)0x0),
             pTVar24 == (Transform *)0x0)) break;
          puVar20 = &UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (pTVar24,pTVar25,0,(MethodInfo *)0x0);
          pTVar24 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                              ((Component_1 *)this_04,(MethodInfo *)0x0);
          if (pTVar24 == (Transform *)0x0) break;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsFirstSibling
                    (pTVar24,(MethodInfo *)0x0);
          (*(code *)(this_04->klass->vtable).Initialize.method)();
          if (puVar20 == (undefined *)0x0) break;
          pXVar26 = *(XpBoostParticlePreviewer **)(puVar20 + 0x10);
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          pIVar27 = (Image *)UnityEngine.CoreModule.dll::UnityEngine::Object::
                             Object_1_Instantiate_251
                                       (pXVar26,
                                        UnityEngine__UI__Image_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Image>_UnityEngine__UI__Image_
                                       );
          (this->fields).winConImage = pIVar27;
          if (pIVar27 == (Image *)0x0) break;
          pTVar24 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                              ((Component_1 *)pIVar27,(MethodInfo *)0x0);
          pGVar18 = (this->fields).winningConditionImageBackground;
          if ((pGVar18 == (GameObject *)0x0) ||
             (pTVar25 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar18,(MethodInfo *)0x0),
             pTVar24 == (Transform *)0x0)) break;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (pTVar24,pTVar25,0,(MethodInfo *)0x0);
          pXVar26 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                              (*(XpBoostParticlePreviewer **)(puVar20 + 0xc),
                               UnityEngine__UI__Image_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Image>_UnityEngine__UI__Image_
                              );
          if (pXVar26 == (XpBoostParticlePreviewer *)0x0) break;
          pTVar24 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                              ((Component_1 *)pXVar26,(MethodInfo *)0x0);
          pGVar18 = (this->fields).scoreGameObject;
          if ((pGVar18 == (GameObject *)0x0) ||
             (pTVar25 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar18,(MethodInfo *)0x0),
             pTVar24 == (Transform *)0x0)) break;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (pTVar24,pTVar25,0,(MethodInfo *)0x0);
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        this_05 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (this_05 == (MVWorldObjectClientManager *)0x0) break;
        this_06 = MVWorldObjectClientManager::
                  MVWorldObjectClientManager_GetSingletonWorldObjectRef_2
                            (this_05,
                             WorldObjectClientRef<MVRoundCube>_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObjectRef<MVRoundCube>__
                            );
        if (this_06 != (WorldObjectClientRef_1_MVRoundCube_ *)0x0) {
          pPVar22 = (this->fields).roundTimeProgressBar;
          if ((pPVar22 == (ProgressBar *)0x0) ||
             (pGVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_get_gameObject((Component_1 *)pPVar22,(MethodInfo *)0x0),
             pGVar18 == (GameObject *)0x0)) break;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar18,1,(MethodInfo *)0x0);
          pPVar22 = (this->fields).roundTimeProgressBar;
          pMVar28 = WorldObjectClientRef`1[MVRoundCube]::
                    WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                              (this_06,
                               MethodInfo__WorldObjectClientRef<MVRoundCube>__get_WorldObjectClient__
                              );
          if (pMVar28 == (MVRoundCube *)0x0) break;
          iVar14 = MVRoundCube::MVRoundCube_GetTimeLeft(pMVar28,(MethodInfo *)0x0);
          pMVar28 = WorldObjectClientRef`1[MVRoundCube]::
                    WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                              (this_06,
                               MethodInfo__WorldObjectClientRef<MVRoundCube>__get_WorldObjectClient__
                              );
          if ((pMVar28 == (MVRoundCube *)0x0) ||
             (iVar19 = MVRoundCube::MVRoundCube_get_DurationInMilliseconds
                                 (pMVar28,(MethodInfo *)0x0), pPVar22 == (ProgressBar *)0x0)) break;
          ProgressBar::ProgressBar_set_Progress
                    (pPVar22,(float)iVar14 / (float)iVar19,(MethodInfo *)0x0);
          pTVar11 = (this->fields).roundTimeText;
          pMVar28 = WorldObjectClientRef`1[MVRoundCube]::
                    WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                              (this_06,
                               MethodInfo__WorldObjectClientRef<MVRoundCube>__get_WorldObjectClient__
                              );
          this_07 = WorldObjectClientRef`1[MVRoundCube]::
                    WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                              (this_06,
                               MethodInfo__WorldObjectClientRef<MVRoundCube>__get_WorldObjectClient__
                              );
          if ((this_07 == (MVRoundCube *)0x0) ||
             ((iVar14 = MVRoundCube::MVRoundCube_GetTimeLeft(this_07,(MethodInfo *)0x0),
              pMVar28 == (MVRoundCube *)0x0 ||
              (pSVar9 = MVRoundCube::MVRoundCube_MakeTimeIntoText(pMVar28,iVar14,(MethodInfo *)0x0)
              , pTVar11 == (Text *)0x0)))) break;
          (*(code *)(pTVar11->klass->vtable).set_text.method)
                    (pTVar11,pSVar9,
                     (pTVar11->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
          pIVar27 = (this->fields).roundTimeIconPrefab;
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          pXVar26 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                              ((XpBoostParticlePreviewer *)pIVar27,
                               UnityEngine__UI__Image_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Image>_UnityEngine__UI__Image_
                              );
          if (pXVar26 == (XpBoostParticlePreviewer *)0x0) break;
          pTVar24 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                              ((Component_1 *)pXVar26,(MethodInfo *)0x0);
          pPVar22 = (this->fields).roundTimeProgressBar;
          if ((pPVar22 == (ProgressBar *)0x0) ||
             (pTVar25 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_get_transform((Component_1 *)pPVar22,(MethodInfo *)0x0),
             pTVar24 == (Transform *)0x0)) break;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (pTVar24,pTVar25,0,(MethodInfo *)0x0);
        }
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines
                  ((MonoBehaviour *)this,(MethodInfo *)0x0);
        routine = WinningConditionBriefing_FixAspectRatioDelay(this,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                  ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
        return;
      }
      pLVar4 = (this->fields).winningConditionMapping;
      pIVar29 = (IEventSystemHandler__Class *)(this->fields).winConType;
      if ((pLVar4 == (List_1_WinningConditionBriefing_WinningConditionBriefingDef_ *)0x0) ||
         (pIVar30 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                    IEventSystemHandler]::
                    List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                              ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar4,iVar5
                               ,
                               MethodInfo__System__Collections__Generic__List<WinningConditionBriefing::WinningConditionBriefingDef>__get_Item_int_
                              ), pIVar30 == (IEventSystemHandler *)0x0)) break;
      pLVar4 = (this->fields).winningConditionMapping;
      if (pIVar29 == pIVar30[1].klass) {
        if (pLVar4 != (List_1_WinningConditionBriefing_WinningConditionBriefingDef_ *)0x0) {
          pIVar30 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                    IEventSystemHandler]::
                    List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                              ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar4,iVar5
                               ,
                               MethodInfo__System__Collections__Generic__List<WinningConditionBriefing::WinningConditionBriefingDef>__get_Item_int_
                              );
          if (pIVar30 == (IEventSystemHandler *)0x0) goto code_?;
          goto code_?;
        }
        break;
      }
      iVar5 = iVar5 + 1;
    }
  }
code_?:
  func_?(0);
  pcVar31 = (code *)swi(3);
  (*pcVar31)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::WinningConditionBriefing::WinningConditionBriefing_Start
               (WinningConditionBriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  LobbyFlowMenu::LobbyFlowMenu_Start((LobbyFlowMenu *)this,(MethodInfo *)0x0);
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
  iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  fVar3 = (float)iVar2;
  fVar4 = 0.0;
  func_?(&stack0xfffffff4,(float)iVar1);
  bVar5 = (this->fields).isInitialized;
  (this->fields).screensize.x = fVar3;
  (this->fields).screensize.y = fVar4;
  if (bVar5 != 0) {
    WinningConditionBriefing_SetupBriefing(this,(MethodInfo *)0x0);
    return;
  }
  pAVar6 = (this->fields).initializeCallback;
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,MethodInfo__WinningConditionBriefing__SetupBriefing__,
             (MethodInfo *)0x0);
  pAStack7 =
       (Action *)
       mscorlib.dll::System::Delegate::Delegate_Combine
                 ((Delegate *)pAVar6,(Delegate *)this_00,(MethodInfo *)0x0);
  pAVar6 = (Action *)0x0;
  if (pAStack7 != (Action *)0x0) {
    if (pAStack7->klass == TypeInfo__System__Action) {
      pAVar6 = pAStack7;
    }
    if (pAVar6 == (Action *)0x0) {
      pAStack8 = TypeInfo__System__Action;
      func_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  (this->fields).initializeCallback = pAVar6;
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::WinningConditionBriefing::WinningConditionBriefing_Update
               (WinningConditionBriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).screensize.x;
  iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
  if ((fVar1 != (float)iVar2) ||
     (fVar1 = (this->fields).screensize.y,
     iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0),
     fVar1 != (float)iVar2)) {
    iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
    iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
    uVar4 = (ulonglong)(uint)(float)iVar3;
    func_?(&stack0xfffffff4,(float)iVar2);
    (this->fields).screensize.x = (float)uVar4;
    (this->fields).screensize.y = (float)(uVar4 >> 0x20);
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines
              ((MonoBehaviour *)this,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this_01 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,in_stack_5);
    if (this_01 == (ScaleAnimationBase *)0x0) goto code_?;
    (this_01->fields)._._._._.m_CachedPtr = this;
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
              ((MonoBehaviour *)this,(IEnumerator *)this_01,(MethodInfo *)0x0);
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_02 != (MVWorldObjectClientManager *)0x0) {
    this_03 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObjectRef_2
                        (this_02,
                         WorldObjectClientRef<MVRoundCube>_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObjectRef<MVRoundCube>__
                        );
    if (this_03 == (WorldObjectClientRef_1_MVRoundCube_ *)0x0) {
      return;
    }
    this_00 = (this->fields).roundTimeProgressBar;
    pMVar6 = WorldObjectClientRef`1[MVRoundCube]::
             WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                       (this_03,
                        MethodInfo__WorldObjectClientRef<MVRoundCube>__get_WorldObjectClient__);
    if (pMVar6 != (MVRoundCube *)0x0) {
      iVar2 = MVRoundCube::MVRoundCube_GetTimeLeft(pMVar6,(MethodInfo *)0x0);
      pMVar6 = WorldObjectClientRef`1[MVRoundCube]::
               WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                         (this_03,
                          MethodInfo__WorldObjectClientRef<MVRoundCube>__get_WorldObjectClient__);
      if ((pMVar6 != (MVRoundCube *)0x0) &&
         (iVar3 = MVRoundCube::MVRoundCube_get_DurationInMilliseconds(pMVar6,(MethodInfo *)0x0),
         this_00 != (ProgressBar *)0x0)) {
        ProgressBar::ProgressBar_set_Progress(this_00,(float)iVar2 / (float)iVar3,(MethodInfo *)0x0)
        ;
        pTVar7 = (this->fields).roundTimeText;
        pMVar6 = WorldObjectClientRef`1[MVRoundCube]::
                 WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                           (this_03,
                            MethodInfo__WorldObjectClientRef<MVRoundCube>__get_WorldObjectClient__);
        this_04 = WorldObjectClientRef`1[MVRoundCube]::
                  WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                            (this_03,
                             MethodInfo__WorldObjectClientRef<MVRoundCube>__get_WorldObjectClient__)
        ;
        if ((this_04 != (MVRoundCube *)0x0) &&
           ((iVar2 = MVRoundCube::MVRoundCube_GetTimeLeft(this_04,(MethodInfo *)0x0),
            pMVar6 != (MVRoundCube *)0x0 &&
            (MVRoundCube::MVRoundCube_MakeTimeIntoText(pMVar6,iVar2,(MethodInfo *)0x0),
            pTVar7 != (Text *)0x0)))) {
          (*(code *)(pTVar7->klass->vtable).set_text.method)();
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void <OnPlayPressed>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::WinningConditionBriefing::WinningConditionBriefing__OnPlayPressed_m__0
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


/* WinningConditionBriefing() */

void Assembly-CSharp.dll::WinningConditionBriefing::WinningConditionBriefing__ctor
               (WinningConditionBriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_WinningConditionType_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<WinningConditionType,_System::String>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
             MethodInfo__System__Collections__Generic__Dictionary<WinningConditionType,_System::String>__Dictionary__
            );
  pSVar1 = TM::TM__(StringLiteral_REACH_THE_FLAG_,(MethodInfo *)0x0);
  if (this_01 != (Dictionary_2_WinningConditionType_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::Object]::
    Dictionary_2_WinningConditionType_System_Object__Add
              (this_01,WinningConditionType__Enum_Flag,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<WinningConditionType,_System::String>__Add_WinningConditionType__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_FIND_ALL_THE_STARS_,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::Object]::
    Dictionary_2_WinningConditionType_System_Object__Add
              (this_01,WinningConditionType__Enum_Collectible,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<WinningConditionType,_System::String>__Add_WinningConditionType__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_ELIMINATE_YOUR_ENEMIES_,(MethodInfo *)0x0);
    pMVar2 = 
    MethodInfo__System__Collections__Generic__Dictionary<WinningConditionType,_System::String>__Add_WinningConditionType__System__String_
    ;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::Object]::
    Dictionary_2_WinningConditionType_System_Object__Add
              (this_01,WinningConditionType__Enum_Kill,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<WinningConditionType,_System::String>__Add_WinningConditionType__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_ELIMINATE_THE_OCULI_,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::Object]::
    Dictionary_2_WinningConditionType_System_Object__Add
              (this_01,WinningConditionType__Enum_Oculus,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<WinningConditionType,_System::String>__Add_WinningConditionType__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_REACH_THE_FLAG_,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::Object]::
    Dictionary_2_WinningConditionType_System_Object__Add
              (this_01,WinningConditionType__Enum_TimeAttackFlag,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<WinningConditionType,_System::String>__Add_WinningConditionType__System__String_
              );
    *(Dictionary_2_WinningConditionType_System_Object_ **)&pMVar2[2].flags = this_01;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    in_stack_3[1].klass = (Canvas__Class *)0x2;
    pLStack4 = TypeInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>
    ;
    this_00 = (Canvas__Class *)func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              ((List_1_UnityEngine_Vector4_ *)this_00,
               MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__List__
              );
    in_stack_3[3].klass = this_00;
    UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor(in_stack_3,(MethodInfo *)0x0)
    ;
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


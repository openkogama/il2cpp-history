
/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESWaitForBuildModeAvatar::ESWaitForBuildModeAvatar_Enter
               (ESWaitForBuildModeAvatar *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = (MVLocalPlayerBuilder *)
           MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (pMVar1 != (MVLocalPlayerBuilder *)0x0) {
    pMVar2 = (MVLocalPlayer__Class *)pMVar1->klass;
    bVar3 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
    bVar4 = (pMVar2->_1).naturalAligment;
    if ((bVar4 < bVar3) ||
       ((pMVar2->_1).typeHierarchy[bVar3 - 1] != (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    pMVar6 = (MVLocalPlayerBuilder *)0x0;
    if (bVar5) {
      pMVar6 = pMVar1;
    }
    if (pMVar6 == (MVLocalPlayerBuilder *)0x0) goto code_?;
    if ((bVar4 < bVar3) ||
       ((pMVar2->_1).typeHierarchy[bVar3 - 1] != (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    pMVar6 = (MVLocalPlayerBuilder *)0x0;
    if (bVar5) {
      pMVar6 = pMVar1;
    }
    if (pMVar6 == (MVLocalPlayerBuilder *)0x0) goto code_?;
    MVLocalPlayerBuilder::MVLocalPlayerBuilder_get_EnterPlayStateData
              ((MVLocalPlayerBuilder_EnterPlayStateDataStruct *)&stack0xffffffdc,pMVar6,
               (MethodInfo *)0x0);
    pMVar7 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (pMVar7 != (MVLocalPlayer *)0x0) {
      pSVar8 = (SpawnRolesManager *)
               UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
               TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
               TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                         ((TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)pMVar7,(MethodInfo *)0x0)
      ;
      if (pSVar8 != (SpawnRolesManager *)0x0) {
        SpawnRolesManager::SpawnRolesManager_get_SpawnRoleId(pSVar8,(MethodInfo *)0x0);
        pMVar7 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        if (pMVar7 != (MVLocalPlayer *)0x0) {
          puVar9 = &UNK_?;
          pIVar10 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                   KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                   KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                             ((KogamaSettingNumericBase_1_System_Single_ *)pMVar7,(MethodInfo *)0x0)
          ;
          iVar11 = 0;
          uVar12 = CONCAT44(puVar9,pIVar10);
          pMVar1 = (MVLocalPlayerBuilder *)
                   MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
          if (pMVar1 != (MVLocalPlayerBuilder *)0x0) {
            pMVar2 = (MVLocalPlayer__Class *)pMVar1->klass;
            bVar3 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
            bVar4 = (pMVar2->_1).naturalAligment;
            if ((bVar4 < bVar3) ||
               ((pMVar2->_1).typeHierarchy[bVar3 - 1] !=
                (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            pMVar6 = (MVLocalPlayerBuilder *)0x0;
            if (bVar5) {
              pMVar6 = pMVar1;
            }
            if (pMVar6 == (MVLocalPlayerBuilder *)0x0) goto code_?;
            if ((bVar4 < bVar3) ||
               ((pMVar2->_1).typeHierarchy[bVar3 - 1] !=
                (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            pMVar6 = (MVLocalPlayerBuilder *)0x0;
            if (bVar5) {
              pMVar6 = pMVar1;
            }
            if (pMVar6 == (MVLocalPlayerBuilder *)0x0) goto code_?;
            value.previousSpawnRoleId = iVar11;
            value.selectedTeam = (int)uVar12;
            value.selectedSpawnRoleCreator = (int)((ulonglong)uVar12 >> 0x20);
            MVLocalPlayerBuilder::MVLocalPlayerBuilder_set_EnterPlayStateData
                      (pMVar6,value,(MethodInfo *)0x0);
            (this->fields).defaultBuildModeSpawnRoleReady = 0;
            pMVar7 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
            if (pMVar7 != (MVLocalPlayer *)0x0) {
              pSVar8 = (SpawnRolesManager *)
                       UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                       TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
                       TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                                 ((TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)pMVar7,
                                  (MethodInfo *)0x0);
              this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                         *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (this_00,(Object *)this,
                         MethodInfo__ESWaitForBuildModeAvatar__SpawnRolesManagerOnOnSpawnRoleActivated_int_
                         ,MethodInfo__System__Action<int>__Action_System__Object__void__);
              if (pSVar8 != (SpawnRolesManager *)0x0) {
                SpawnRolesManager::SpawnRolesManager_add_OnSpawnRoleActivated
                          (pSVar8,(Action_1_Int32_ *)this_00,(MethodInfo *)0x0);
                pMVar1 = (MVLocalPlayerBuilder *)
                         MVGameControllerBase::MVGameControllerBase_get_LocalPlayer
                                   ((MethodInfo *)0x0);
                if (pMVar1 != (MVLocalPlayerBuilder *)0x0) {
                  pMVar2 = (MVLocalPlayer__Class *)pMVar1->klass;
                  bVar3 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
                  bVar4 = (pMVar2->_1).naturalAligment;
                  if ((bVar4 < bVar3) ||
                     ((pMVar2->_1).typeHierarchy[bVar3 - 1] !=
                      (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
                    bVar5 = false;
                  }
                  else {
                    bVar5 = true;
                  }
                  pMVar6 = (MVLocalPlayerBuilder *)0x0;
                  if (bVar5) {
                    pMVar6 = pMVar1;
                  }
                  if (pMVar6 != (MVLocalPlayerBuilder *)0x0) {
                    if ((bVar4 < bVar3) ||
                       ((pMVar2->_1).typeHierarchy[bVar3 - 1] !=
                        (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
                      bVar5 = false;
                    }
                    else {
                      bVar5 = true;
                    }
                    pMVar6 = (MVLocalPlayerBuilder *)0x0;
                    if (bVar5) {
                      pMVar6 = pMVar1;
                    }
                    if (pMVar6 != (MVLocalPlayerBuilder *)0x0) {
                      MVLocalPlayerBuilder::MVLocalPlayerBuilder_SetToBuildModeSpawnRole
                                (pMVar6,(MethodInfo *)0x0);
                      return;
                    }
                  }
                  goto code_?;
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


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::ESWaitForBuildModeAvatar::ESWaitForBuildModeAvatar_Execute
               (ESWaitForBuildModeAvatar *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).defaultBuildModeSpawnRoleReady != 0) {
    this = (ESWaitForBuildModeAvatar *)0x2f;
    value = (Object *)func_?(TypeInfo__EditorEvent,&this);
    if (e == (EditorStateMachine *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FSMEntity::FSMEntity_set_Event((FSMEntity *)e,value,(MethodInfo *)0x0);
  }
  return;
}


/* Void Exit(EditorStateMachine) */

void Assembly-CSharp.dll::ESWaitForBuildModeAvatar::ESWaitForBuildModeAvatar_Exit
               (ESWaitForBuildModeAvatar *this,EditorStateMachine *esm,MethodInfo *method)

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
  if ((pGVar1 != (GameEventManager *)0x0) &&
     (this_00 = (ShowingAdsPopup *)(pGVar1->fields).AvatarCommandsBuildMode,
     this_00 != (ShowingAdsPopup *)0x0)) {
    ShowingAdsPopup::ShowingAdsPopup_OnSkip(this_00,(MethodInfo *)0x0);
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar2 != (MVWorldObjectClientManager *)0x0) {
      this_01 = (MoveableController *)
                System.Core.dll::System::Linq::
                Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::Generic::
                KeyValuePair`2[System::Object,System::Object],System::Object]::
                Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                          ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                            *)pMVar2,(MethodInfo *)0x0);
      if (this_01 != (MoveableController *)0x0) {
        MoveableController::MoveableController_ResetMoveables(this_01,(MethodInfo *)0x0);
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar2 != (MVWorldObjectClientManager *)0x0) {
          pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                             (pMVar2,(MethodInfo *)0x0);
          if (pMVar3 != (MVGroup *)0x0) {
            (*(code *)(pMVar3->klass->vtable).PlayModeInitialize.method)();
            pIVar4 = MVGameControllerDesktop::MVGameControllerDesktop_get_LockCursorManager
                               ((MethodInfo *)0x0);
            if (pIVar4 != (ILockCursorManager *)0x0) {
              func_?();
              this_02 = (AvatarUIHandlerRemote *)
                        MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                  ((MethodInfo *)0x0);
              if (this_02 != (AvatarUIHandlerRemote *)0x0) {
                pSVar5 = AvatarUIHandlerRemote::AvatarUIHandlerRemote_get_ShieldBar
                                   (this_02,(MethodInfo *)0x0);
                if (pSVar5 != (ShieldBar *)0x0) {
                  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                    func_?();
                  }
                  this_03 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                      ((MethodInfo *)0x0);
                  if (this_03 == (MainCameraManager *)0x0) goto code_?;
                  MainCameraManager::MainCameraManager_set_CamMaskMode
                            (this_03,MaskMode__Enum_Default,(MethodInfo *)0x0);
                }
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  func_?();
                }
                this_04 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (this_04 != (MVNetworkGame *)0x0) {
                  this_05 = (MVGameCoinManager *)
                            TierOnDeathProgress+<DoTierProgress>c__Iterator0::
                            TierOnDeathProgress_DoTierProgress_c_Iterator0_System_Collections_IEnumerator_get_Current
                                      ((TierOnDeathProgress_DoTierProgress_c_Iterator0 *)this_04,
                                       (MethodInfo *)0x0);
                  if (this_05 != (MVGameCoinManager *)0x0) {
                    bVar6 = MVGameCoinManager::MVGameCoinManager_get_BoostEnabled
                                      (this_05,(MethodInfo *)0x0);
                    if (bVar6 != 0) {
                      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr &
                           0x2000000) != 0) &&
                         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                        func_?();
                      }
                      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                                ((Object *)StringLiteral_Game_coints__Probably_do_this_di,
                                 (MethodInfo *)0x0);
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_set_visible
                              (1,(MethodInfo *)0x0);
                    if (this_04 != (MVNetworkGame *)0x0) {
                      root = (this_04->fields)._ItemCategories_k__BackingField;
                      if (TypeInfo__ESWaitForBuildModeAvatar->static_fields->__f__am_cache0 ==
                          (ExecuteEvents_EventFunction_1_IEditModeController_ *)0x0) {
                        this_06 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                   *)func_?();
                        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                        SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                  (this_06,(Object *)0x0,
                                   MethodInfo__ESWaitForBuildModeAvatar___Exit_m__0_UnityEngine__EventSystems__IEditModeController__UnityEngine__EventSystems__BaseEventData_
                                   ,
                                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>__EventFunction_System__Object__void__
                                  );
                        TypeInfo__ESWaitForBuildModeAvatar->static_fields->__f__am_cache0 =
                             (ExecuteEvents_EventFunction_1_IEditModeController_ *)this_06;
                      }
                      callbackFunction =
                           (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
                           TypeInfo__ESWaitForBuildModeAvatar->static_fields->__f__am_cache0;
                      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).
                                  Equals.methodPtr & 0x2000000) != 0) &&
                         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started ==
                          0)) {
                        func_?();
                      }
                      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                      ExecuteEvents_ExecuteHierarchy_63
                                ((GameObject *)root,(BaseEventData *)0x0,callbackFunction,
                                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IEditModeController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>_
                                );
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
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SpawnRolesManagerOnOnSpawnRoleActivated(Int32) */

void Assembly-CSharp.dll::ESWaitForBuildModeAvatar::
     ESWaitForBuildModeAvatar_SpawnRolesManagerOnOnSpawnRoleActivated
               (ESWaitForBuildModeAvatar *this,int32_t spawnRoleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (this_00 == (MVLocalPlayer *)0x0) {
code_?:
    func_?(0);
  }
  else {
    this_01 = (SpawnRolesManager *)
              UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
              TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
              TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                        ((TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)this_00,(MethodInfo *)0x0)
    ;
    this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action<int>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_02,(Object *)this,
               MethodInfo__ESWaitForBuildModeAvatar__SpawnRolesManagerOnOnSpawnRoleActivated_int_,
               MethodInfo__System__Action<int>__Action_System__Object__void__);
    if (this_01 == (SpawnRolesManager *)0x0) goto code_?;
    SpawnRolesManager::SpawnRolesManager_remove_OnSpawnRoleActivated
              (this_01,(Action_1_Int32_ *)this_02,(MethodInfo *)0x0);
    pMVar1 = (MVLocalPlayerBuilder *)
             MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (pMVar1 == (MVLocalPlayerBuilder *)0x0) goto code_?;
    pMVar2 = (MVLocalPlayer__Class *)pMVar1->klass;
    bVar3 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
    bVar4 = (pMVar2->_1).naturalAligment;
    if ((bVar4 < bVar3) ||
       ((pMVar2->_1).typeHierarchy[bVar3 - 1] != (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    pMVar6 = (MVLocalPlayerBuilder *)0x0;
    if (bVar5) {
      pMVar6 = pMVar1;
    }
    pMVar7 = TypeInfo__MVLocalPlayerBuilder;
    if (pMVar6 == (MVLocalPlayerBuilder *)0x0) goto code_?;
    if ((bVar4 < bVar3) ||
       ((pMVar2->_1).typeHierarchy[bVar3 - 1] != (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    pMVar6 = (MVLocalPlayerBuilder *)0x0;
    if (bVar5) {
      pMVar6 = pMVar1;
    }
    if (pMVar6 == (MVLocalPlayerBuilder *)0x0) goto code_?;
    iVar8 = MVLocalPlayerBuilder::MVLocalPlayerBuilder_get_BuildModeSpawnRoleId
                      (pMVar6,(MethodInfo *)0x0);
    if (iVar8 == spawnRoleId) {
      (this->fields).defaultBuildModeSpawnRoleReady = 1;
      return;
    }
  }
  this_03 = (IsolatedStorageException *)func_?();
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(this_03,StringLiteral_Unexpected_spawnrole,(MethodInfo *)0x0);
  func_?();
  pMVar1 = extraout_ECX;
  pMVar7 = extraout_EDX;
code_?:
  func_?(pMVar1,pMVar7);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void <Exit>m__0(IEditModeController, BaseEventData) */

void Assembly-CSharp.dll::ESWaitForBuildModeAvatar::ESWaitForBuildModeAvatar__Exit_m__0
               (IEditModeController *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IEditModeController *)0x0) {
    func_?(3,TypeInfo__UnityEngine__EventSystems__IEditModeController,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


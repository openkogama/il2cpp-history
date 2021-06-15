
/* Void EndDebriefingEarly() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefing::TimeAttackFlagDebriefing_EndDebriefingEarly
               (TimeAttackFlagDebriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_isActiveAndEnabled
                    ((Behaviour *)this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pFVar2 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl((MethodInfo *)0x0);
  if (pFVar2 != (FlagDebriefingControl *)0x0) {
    ShowingAdsPopup::ShowingAdsPopup_OnSkip((ShowingAdsPopup *)pFVar2,(MethodInfo *)0x0);
    pIVar3 = MVGameControllerDesktop::MVGameControllerDesktop_get_LockCursorManager
                        ((MethodInfo *)0x0);
    if (pIVar3 != (ILockCursorManager *)0x0) {
      func_?();
      pIVar4 = MVGameControllerBase::MVGameControllerBase_get_PlayModeUI((MethodInfo *)0x0);
      if (pIVar4 != (IPlayModeUI *)0x0) {
        func_?();
        (this->fields).isDebriefingOn = 0;
        (this->fields).isWaitingForStart = 0;
        this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            ((Component_1 *)this,(MethodInfo *)0x0);
        if (this_02 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_02,0,(MethodInfo *)0x0);
          fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0)
          ;
          this_01 = (this->fields).scoreBoardCanvasGroup;
          (this->fields).countdownEndTime = fVar5;
          if (this_01 != (CanvasGroup *)0x0) {
            UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                      (this_01,0.0,(MethodInfo *)0x0);
            pFVar2 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                               ((MethodInfo *)0x0);
            if (pFVar2 != (FlagDebriefingControl *)0x0) {
              FlagDebriefingControl::FlagDebriefingControl_EndFlagCountDown
                        (pFVar2,(MethodInfo *)0x0);
              pGVar6 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                  ((MethodInfo *)0x0);
              if ((pGVar6 != (GameEventManager *)0x0) &&
                 ((pGVar6->fields).AvatarCommandsPlayMode !=
                  (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
                iVar7 = *(int *)(in_stack_8 + 0x14);
                if (iVar7 == 0) {
                  return;
                }
                uStack9 = 0;
                if (*(JumpState_OnWallJumpDelegate **)(iVar7 + 0x2c) !=
                    (JumpState_OnWallJumpDelegate *)0x0) {
                  JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke
                            (*(JumpState_OnWallJumpDelegate **)(iVar7 + 0x2c),(MethodInfo *)0x0);
                }
                this_00 = *(MethodInfo **)(iVar7 + 0x14);
                pcVar10 = *(code **)(iVar7 + 8);
                piVar11 = *(int **)(iVar7 + 0x10);
                method_01 = this_00;
                if (this_00->flags == 0xffff) {
                  func_?();
                }
                cVar12 = func_?();
                if (cVar12 == '\0') {
                  if ((char)this_00->iflags == '\0') {
                    (*pcVar10)();
                    return;
                  }
                }
                else if ((this_00->flags != 0xffff) &&
                        (((piVar11 == (int *)0x0 || ((*(uint *)(*piVar11 + 0xa0) & 0x100) == 0)) &&
                         (*(int *)(iVar7 + 0xc) != 0)))) {
                  cVar12 = func_?();
                  if (cVar12 != '\0') {
                    return;
                  }
                  method_00 = this_00;
                  cVar12 = func_?();
                  mscorlib.dll::System::Collections::Generic::
                  KeyValuePair`2[WinningConditionType,System::Object]::
                  KeyValuePair_2_WinningConditionType_System_Object__get_Value
                            ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_00,method_00
                            );
                  cVar13 = func_?();
                  if (cVar12 == '\0') {
                    if (cVar13 != '\0') {
                      mscorlib.dll::System::Collections::Generic::
                      KeyValuePair`2[WinningConditionType,System::Object]::
                      KeyValuePair_2_WinningConditionType_System_Object__get_Value
                                ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_00,
                                 method_01);
                      func_?();
                      return;
                    }
                    (**(code **)(*piVar11 + 0xc0 + (uint)this_00->flags * 8))();
                    return;
                  }
                  if (cVar13 == '\0') {
                    puVar14 = (undefined4 *)func_?();
                    (*(code *)*puVar14)(piVar11);
                    return;
                  }
                  iStack15 = *piVar11;
                  uVar16 = 0;
                  if (*(ushort *)(iStack15 + 0xb6) != 0) {
                    do {
                      if (*(char **)(*(int *)(iStack15 + 0x58) + (uint)uVar16 * 8) ==
                          this_00->name) goto code_?;
                      uVar16 = uVar16 + 1;
                    } while (uVar16 < *(ushort *)(iStack15 + 0xb6));
                  }
                  func_?();
code_?:
                  puVar14 = (undefined4 *)func_?();
                  (*(code *)*puVar14)(piVar11);
                  return;
                }
                (*pcVar10)(piVar11);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void ExitDebriefing() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefing::TimeAttackFlagDebriefing_ExitDebriefing
               (TimeAttackFlagDebriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).canvasGroup;
  if (this_00 == (CanvasGroup *)0x0) goto code_?;
  UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
            (this_00,0.0,(MethodInfo *)0x0);
  (this->fields).isWaitingForStart = 1;
  (this->fields).isExitingDebriefing = 0;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).waitStartTime = fVar1;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((this_01 == (MVNetworkGame *)0x0) ||
     (this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0),
     this_02 == (MVLocalPlayer *)0x0)) goto code_?;
  MVPlayer::MVPlayer_ResetCheckpoint((MVPlayer *)this_02,(MethodInfo *)0x0);
  this_03 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl((MethodInfo *)0x0);
  if (this_03 == (FlagDebriefingControl *)0x0) goto code_?;
  ShowingAdsPopup::ShowingAdsPopup_OnSkip((ShowingAdsPopup *)this_03,(MethodInfo *)0x0);
  iVar2 = (this->fields).previousAvatarModeType;
  if (iVar2 != 4) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    MVar3 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    if (MVar3 == MVGameMode__Enum_Edit) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      MVar3 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
      if (MVar3 == MVGameMode__Enum_Edit) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pIVar4 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
        if (pIVar4 == (IEditModeUI *)0x0) goto code_?;
        cVar5 = func_?();
      }
      else {
        cVar5 = '\0';
      }
      if (cVar5 != '\0') goto code_?;
    }
    else {
code_?:
      pIVar6 = MVGameControllerDesktop::MVGameControllerDesktop_get_LockCursorManager
                          ((MethodInfo *)0x0);
      if (pIVar6 == (ILockCursorManager *)0x0) goto code_?;
      func_?();
    }
    iVar2 = (this->fields).previousAvatarModeType;
  }
  if (iVar2 == 1) {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pGVar7 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if ((pGVar7 != (GameEventManager *)0x0) &&
     ((pGVar7->fields).AvatarCommandsPlayMode !=
      (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
    iVar2 = *(int *)(in_stack_8 + 0x14);
    if (iVar2 == 0) {
      return;
    }
    uStack9 = 0;
    if (*(JumpState_OnWallJumpDelegate **)(iVar2 + 0x2c) != (JumpState_OnWallJumpDelegate *)0x0) {
      JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke
                (*(JumpState_OnWallJumpDelegate **)(iVar2 + 0x2c),(MethodInfo *)0x0);
    }
    method_00 = *(KeyValuePair_2_WinningConditionType_System_Object_ **)(iVar2 + 0x14);
    pcVar10 = *(code **)(iVar2 + 8);
    piVar11 = *(int **)(iVar2 + 0x10);
    if ((short)method_00[5].key == -1) {
      func_?();
    }
    cVar5 = func_?();
    if (cVar5 == '\0') {
      if (*(char *)((int)&method_00[5].key + 2) == '\0') {
        (*pcVar10)();
        return;
      }
    }
    else if (((short)method_00[5].key != -1) &&
            (((piVar11 == (int *)0x0 || ((*(uint *)(*piVar11 + 0xa0) & 0x100) == 0)) &&
             (*(int *)(iVar2 + 0xc) != 0)))) {
      cVar5 = func_?();
      if (cVar5 != '\0') {
        return;
      }
      cVar5 = func_?();
      mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System::
      Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                (method_00,(MethodInfo *)method_00);
      cVar12 = func_?();
      if (cVar5 == '\0') {
        if (cVar12 != '\0') {
          mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System::
          Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                    (method_00,(MethodInfo *)method_00);
          func_?();
          return;
        }
        (**(code **)(*piVar11 + 0xc0 + (uint)(ushort)method_00[5].key * 8))();
        return;
      }
      if (cVar12 == '\0') {
        puVar13 = (undefined4 *)func_?();
        (*(code *)*puVar13)();
        return;
      }
      uVar14 = 0;
      uVar15 = *(ushort *)(*piVar11 + 0xb6);
      if (uVar15 != 0) {
        do {
          if (*(Object **)(*(int *)(*piVar11 + 0x58) + (uint)uVar14 * 8) == method_00[1].value)
          goto code_?;
          uVar14 = uVar14 + 1;
        } while (uVar14 < uVar15);
      }
      func_?();
code_?:
      puVar13 = (undefined4 *)func_?();
      (*(code *)*puVar13)();
      return;
    }
    (*pcVar10)();
    return;
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* String GetDebriefingText(Int32, Boolean) */

String * Assembly-CSharp.dll::TimeAttackFlagDebriefing::TimeAttackFlagDebriefing_GetDebriefingText
                   (TimeAttackFlagDebriefing *this,int32_t captureTime,bool isBestTime,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (isBestTime == 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame *)0x0) {
      this_00 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar1 != (MVNetworkGame *)0x0) {
        this_01 = (GameStatCounterManager *)
                  DayNightCycle::DayNightCycle_get_CurrentStarsParam
                            ((DayNightCycle *)pMVar1,(MethodInfo *)0x0);
        if (this_00 != (MVLocalPlayer *)0x0) {
          team = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                 KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                 KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                           ((KogamaSettingNumericBase_1_System_Single_ *)this_00,(MethodInfo *)0x0);
          pSVar2 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                   NamedThemeAttribute_1_UnityEngine_Color__get_Name
                             ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_00,(MethodInfo *)0x0)
          ;
          if (this_01 != (GameStatCounterManager *)0x0) {
            oldScore = MVWorldObject.dll::GameStatCounterManager::
                       GameStatCounterManager_GetActorCount
                                 (this_01,GameStatCounterType__Enum_TimeAttackFlag,
                                  (MVTeam__Enum)team,(int32_t)pSVar2,(MethodInfo *)0x0);
            bVar3 = WinningConditionControl::WinningConditionControl_IsNewScoreBetter
                              (8,oldScore,GameStatCounterType__Enum_TimeAttackFlag,(MethodInfo *)0x0
                              );
            if (bVar3 == 0) {
              if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__System__String->_1).cctor_started == 0)) {
                func_?();
              }
              return TypeInfo__System__String->static_fields->Empty;
            }
            pSVar2 = TM::TM__(StringLiteral_Your_Best_Time,(MethodInfo *)0x0);
            return pSVar2;
          }
        }
      }
    }
    func_?();
    pcVar4 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar4)();
    return pSVar2;
  }
  pSVar2 = TM::TM__(StringLiteral_Best_Time_,(MethodInfo *)0x0);
  return pSVar2;
}


/* Int32 GetTopPlayerScore() */

int32_t Assembly-CSharp.dll::TimeAttackFlagDebriefing::TimeAttackFlagDebriefing_GetTopPlayerScore
                  (TimeAttackFlagDebriefing *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffc8;
  puVar5 = &stack0xffffffc8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  uStack_6 = 0;
  func_?();
  pIStack_7 = (IEnumerator_1_KeyValuePair_2_System_Int32_MVPlayer___Class *)0x0;
  puStack_8 = (undefined4 *)&stack0xffffffc8;
  puStack_4 = &stack0xffffffc8;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (puStack_8 = (undefined4 *)&stack0xffffffc8, puStack_4 = &stack0xffffffc8,
     (TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    puStack_8 = (undefined4 *)&stack0xffffffc8;
    puStack_4 = &stack0xffffffc8;
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((this_00 != (MVAvatar *)0x0) &&
     (this_01 = MVAvatar::MVAvatar_get_Shield(this_00,(MethodInfo *)0x0),
     this_01 != (MVRuntimeDataVariableClampedFloat *)0x0)) {
    pIVar9 = MVPlayerContainer::MVPlayerContainer_GetEnumerator
                       ((MVPlayerContainer *)this_01,(MethodInfo *)0x0);
    uStack_1 = 0;
    pIVar10 = (IEnumerator_1_KeyValuePair_2_System_Int32_MVPlayer___Class *)0x0;
    pIStack_11 = pIVar9;
    while (pIVar9 != (IEnumerator_1_KeyValuePair_2_System_Int32_MVPlayer_ *)0x0) {
      method_00 = (MethodInfo *)&UNK_?;
      cVar12 = func_?(1,TypeInfo__System__Collections__IEnumerator);
      unaff_ESI = 
      TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<int,_MVPlayer>_>
      ;
      if (cVar12 == '\0') {
        *puStack_8 = 0x89;
        uStack_1 = 0xffffffff;
        if (pIVar9 != (IEnumerator_1_KeyValuePair_2_System_Int32_MVPlayer_ *)0x0) {
          func_?(0,TypeInfo__System__IDisposable);
        }
        *unaff_FS_OFFSET = uStack_3;
        return (int32_t)pIVar10;
      }
      pIVar10 = pIVar9->klass;
      uVar13 = 0;
      uVar14._0_1_ = (pIVar10->_1).rank;
      uVar14._1_1_ = (pIVar10->_1).minimumAlignment;
      if (uVar14 != 0) {
        do {
          if (pIVar10->interfaceOffsets[uVar13].interfaceType ==
              (Il2CppClass *)
              TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<int,_MVPlayer>_>
             ) {
            ppMVar15 = &(&pIVar9->klass->vtable)[pIVar10->interfaceOffsets[uVar13].offset].get_Current
                       .method;
            goto code_?;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar14);
      }
      method_00 = (MethodInfo *)&UNK_?;
      ppMVar15 = (MethodInfo **)
                func_?(pIVar9,
                                TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<int,_MVPlayer>_>
                               );
code_?:
      uStack_6 = (*(code *)*ppMVar15)(pIVar9);
      iVar16 = func_?(&uStack_6);
      pIVar10 = pIStack_7;
      if (iVar16 != 0) {
        this_02 = (NamedThemeAttribute_1_UnityEngine_Color_ *)func_?(&uStack_6);
        if (this_02 == (NamedThemeAttribute_1_UnityEngine_Color_ *)0x0) break;
        actorNumber = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                      NamedThemeAttribute_1_UnityEngine_Color__get_Name(this_02,method_00);
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (this_03 == (MVNetworkGame *)0x0) break;
        unaff_ESI = (IEnumerator_1_KeyValuePair_2_System_Int32_MVPlayer___Class *)
                    DayNightCycle::DayNightCycle_get_CurrentStarsParam
                              ((DayNightCycle *)this_03,(MethodInfo *)0x0);
        this_04 = (KogamaSettingNumericBase_1_System_Single_ *)func_?();
        if ((this_04 == (KogamaSettingNumericBase_1_System_Single_ *)0x0) ||
           (in_stack_17 =
                 (MethodInfo *)
                 MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                 KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                 KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                           (this_04,in_stack_17),
           unaff_ESI == (IEnumerator_1_KeyValuePair_2_System_Int32_MVPlayer___Class *)0x0)) break;
        unaff_ESI = (IEnumerator_1_KeyValuePair_2_System_Int32_MVPlayer___Class *)
                    MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                              ((GameStatCounterManager *)unaff_ESI,
                               GameStatCounterType__Enum_TimeAttackFlag,
                               (MVTeam__Enum)in_stack_17,(int32_t)actorNumber,
                               in_stack_18);
        pIVar10 = pIStack_7;
        bVar19 = WinningConditionControl::WinningConditionControl_IsNewScoreBetter
                          ((int32_t)unaff_ESI,(int32_t)pIStack_7,
                           GameStatCounterType__Enum_TimeAttackFlag,(MethodInfo *)0x0);
        if (bVar19 != 0) {
          pIVar10 = unaff_ESI;
          pIStack_7 = unaff_ESI;
        }
      }
    }
  }
  func_?();
  func_?(unaff_ESI,0);
  pcVar20 = (code *)swi(3);
  iVar21 = (*pcVar20)();
  return iVar21;
}


/* Void HandleScoreBoardVisibility(Int32) */

void Assembly-CSharp.dll::TimeAttackFlagDebriefing::
     TimeAttackFlagDebriefing_HandleScoreBoardVisibility
               (TimeAttackFlagDebriefing *this,int32_t score,MethodInfo *method)

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
    this_00 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                        ((DayNightCycle *)pMVar1,(MethodInfo *)0x0);
    if (this_00 != (SkyParam *)0x0) {
      this_01 = MVTeamManager::MVTeamManager_GetTeamList((MVTeamManager *)this_00,(MethodInfo *)0x0)
      ;
      if (this_01 != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
        pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                            MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                           );
        if ((int)pOVar2 < 2) {
          pCVar3 = (Component_1 *)(this_01->fields)._size;
          if (pCVar3 == (Component_1 *)0x0) goto code_?;
          pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             (pCVar3,(MethodInfo *)0x0);
          if (pGVar4 == (GameObject *)0x0) goto code_?;
          bVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                            (pGVar4,(MethodInfo *)0x0);
          if (bVar5 == 0) {
            pCVar3 = (Component_1 *)(this_01->fields)._size;
            if (pCVar3 == (Component_1 *)0x0) goto code_?;
            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               (pCVar3,(MethodInfo *)0x0);
            if (pGVar4 == (GameObject *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar4,1,(MethodInfo *)0x0);
          }
          pCVar3 = (Component_1 *)(this_01->fields)._version;
          if (pCVar3 == (Component_1 *)0x0) goto code_?;
          pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             (pCVar3,(MethodInfo *)0x0);
          if (pGVar4 == (GameObject *)0x0) goto code_?;
          bVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                            (pGVar4,(MethodInfo *)0x0);
          if (bVar5 != 0) {
            pCVar3 = (Component_1 *)(this_01->fields)._version;
            if (pCVar3 == (Component_1 *)0x0) goto code_?;
            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               (pCVar3,(MethodInfo *)0x0);
            if (pGVar4 == (GameObject *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar4,0,(MethodInfo *)0x0);
          }
          piVar6 = (int *)(this_01->fields)._size;
          if (piVar6 == (int *)0x0) goto code_?;
          (**(code **)(*piVar6 + 0xf0))();
          piVar6 = (int *)(this_01->fields)._size;
        }
        else {
          pCVar3 = (Component_1 *)(this_01->fields)._version;
          if (pCVar3 == (Component_1 *)0x0) goto code_?;
          pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             (pCVar3,(MethodInfo *)0x0);
          if (pGVar4 == (GameObject *)0x0) goto code_?;
          bVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                            (pGVar4,(MethodInfo *)0x0);
          if (bVar5 == 0) {
            pCVar3 = (Component_1 *)(this_01->fields)._version;
            if (pCVar3 == (Component_1 *)0x0) goto code_?;
            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               (pCVar3,(MethodInfo *)0x0);
            if (pGVar4 == (GameObject *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar4,1,(MethodInfo *)0x0);
          }
          pCVar3 = (Component_1 *)(this_01->fields)._size;
          if (pCVar3 == (Component_1 *)0x0) goto code_?;
          pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             (pCVar3,(MethodInfo *)0x0);
          if (pGVar4 == (GameObject *)0x0) goto code_?;
          bVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                            (pGVar4,(MethodInfo *)0x0);
          if (bVar5 != 0) {
            pCVar3 = (Component_1 *)(this_01->fields)._size;
            if (pCVar3 == (Component_1 *)0x0) goto code_?;
            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               (pCVar3,(MethodInfo *)0x0);
            if (pGVar4 == (GameObject *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar4,0,(MethodInfo *)0x0);
          }
          piVar6 = (int *)(this_01->fields)._version;
          if (piVar6 == (int *)0x0) goto code_?;
          (**(code **)(*piVar6 + 0xf0))();
          piVar6 = (int *)(this_01->fields)._version;
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar1 != (MVNetworkGame *)0x0) {
          this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
          if (this_02 != (MVLocalPlayer *)0x0) {
            ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
            NamedThemeAttribute_1_UnityEngine_Color__get_Name
                      ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_02,(MethodInfo *)0x0);
            if (piVar6 != (int *)0x0) {
              (**(code **)(*piVar6 + 0xe0))();
              return;
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


/* Void Initialize(Int32) */

void Assembly-CSharp.dll::TimeAttackFlagDebriefing::TimeAttackFlagDebriefing_Initialize
               (TimeAttackFlagDebriefing *this,int32_t captureTime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).canvasGroup;
  (this->fields).isExitingDebriefing = 0;
  (this->fields).isDebriefingOn = 1;
  if (pCVar1 != (CanvasGroup *)0x0) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (pCVar1,1.0,(MethodInfo *)0x0);
    pCVar1 = (this->fields).scoreBoardCanvasGroup;
    if (pCVar1 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (pCVar1,1.0,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pIVar2 = MVGameControllerBase::MVGameControllerBase_get_PlayModeUI((MethodInfo *)0x0);
      if (pIVar2 != (IPlayModeUI *)0x0) {
        func_?();
        pSVar3 = (this->fields).scoreBoardSingle;
        if (pSVar3 != (ScoreBoardSingleBase *)0x0) {
          (*(code *)(pSVar3->klass->vtable).Initialize.method)();
          pSVar4 = (this->fields).scoreBoardTeam;
          if (pSVar4 != (ScoreBoardTeamBase *)0x0) {
            (*(code *)(pSVar4->klass->vtable).Initialize.method)();
            pLVar5 = (this->fields).localPlayerScore;
            if (pLVar5 != (LocalPlayerScore *)0x0) {
              LocalPlayerScore::LocalPlayerScore_Initialize(pLVar5,(MethodInfo *)0x0);
              this_00 = (this->fields).playButton;
              if (this_00 != (Button *)0x0) {
                UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                          ((Selectable *)this_00,1,(MethodInfo *)0x0);
                oldScore = TimeAttackFlagDebriefing_GetTopPlayerScore(this,(MethodInfo *)0x0);
                value = WinningConditionControl::WinningConditionControl_IsNewScoreBetter
                                  (8,oldScore,GameStatCounterType__Enum_TimeAttackFlag,
                                   (MethodInfo *)0x0);
                TimeAttackFlagDebriefing_HandleScoreBoardVisibility(this,8,(MethodInfo *)0x0);
                pLVar5 = (this->fields).localPlayerScore;
                if (pLVar5 != (LocalPlayerScore *)0x0) {
                  LocalPlayerScore::LocalPlayerScore_Activate(pLVar5,(MethodInfo *)0x0);
                  this_01 = (this->fields).sunshineObject;
                  if (this_01 != (GameObject *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (this_01,value,(MethodInfo *)0x0);
                    this_03 = (Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_
                               *)MVGameControllerBase::
                                 MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                                           ((MethodInfo *)0x0);
                    if (this_03 !=
                        (Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_
                         *)0x0) {
                      this_04 = (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_
                                 *)System.Core.dll::System::Linq::
                                   Enumerable+<CreateGroupByIterator>c__Iterator5`2[System::
                                   Object,System::Object]::
                                   Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                                             (this_03,(MethodInfo *)0x0);
                      if (this_04 !=
                          (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_
                           *)0x0) {
                        this_05 = (ReviveState *)
                                  mscorlib.dll::System::Collections::Generic::
                                  Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System
                                  ::Object]::
                                  Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__get_Count
                                            (this_04,
                                             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<ReviveState>__get_Value__
                                            );
                        if (this_05 != (ReviveState *)0x0) {
                          ReviveState::ReviveState_ResetSafePostions(this_05,(MethodInfo *)0x0);
                          pGVar6 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                             ((MethodInfo *)0x0);
                          if ((pGVar6 != (GameEventManager *)0x0) &&
                             (this_02 = (pGVar6->fields).AvatarCommandsPlayMode,
                             this_02 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
                            GameEventManager+AvatarCommandsPlayModeManager::
                            GameEventManager_AvatarCommandsPlayModeManager_SetIntermediateDebriefing
                                      (this_02,WinningConditionType__Enum_TimeAttackFlag,
                                       (MethodInfo *)0x0);
                            captureTime._0_1_ = (bool)this_02;
                            TimeAttackFlagDebriefing_SendNotification
                                      (this,8,(bool)captureTime,(MethodInfo *)0x0);
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
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void InitializeCountDown() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefing::TimeAttackFlagDebriefing_InitializeCountDown
               (TimeAttackFlagDebriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).isDebriefingOn != 0) {
    return;
  }
  (this->fields).isDebriefingOn = 1;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pIVar1 = MVGameControllerBase::MVGameControllerBase_get_PlayModeUI((MethodInfo *)0x0);
  if (pIVar1 != (IPlayModeUI *)0x0) {
    func_?(4,TypeInfo__IPlayModeUI,pIVar1,0);
    pCVar2 = (this->fields).canvasGroup;
    if (pCVar2 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (pCVar2,0.0,(MethodInfo *)0x0);
      pCVar2 = (this->fields).scoreBoardCanvasGroup;
      if (pCVar2 != (CanvasGroup *)0x0) {
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (pCVar2,1.0,(MethodInfo *)0x0);
        pSVar3 = (this->fields).scoreBoardSingle;
        if (pSVar3 != (ScoreBoardSingleBase *)0x0) {
          (*(code *)(pSVar3->klass->vtable).Initialize.method)
                    (pSVar3,8,(pSVar3->klass->vtable).ReSortScoreBoard.methodPtr);
          pSVar4 = (this->fields).scoreBoardTeam;
          if (pSVar4 != (ScoreBoardTeamBase *)0x0) {
            (*(code *)(pSVar4->klass->vtable).Initialize.method)
                      (pSVar4,8,(pSVar4->klass->vtable).ReSortScoreBoard.methodPtr);
            pLVar5 = (this->fields).localPlayerScore;
            if (pLVar5 != (LocalPlayerScore *)0x0) {
              LocalPlayerScore::LocalPlayerScore_Initialize(pLVar5,(MethodInfo *)0x0);
              pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (pMVar6 != (MVNetworkGame *)0x0) {
                this_00 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar6,(MethodInfo *)0x0);
                pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if ((pMVar6 != (MVNetworkGame *)0x0) &&
                   (this_01 = (GameStatCounterManager *)
                              DayNightCycle::DayNightCycle_get_CurrentStarsParam
                                        ((DayNightCycle *)pMVar6,(MethodInfo *)0x0),
                   this_00 != (MVLocalPlayer *)0x0)) {
                  team = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                         KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                         KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                                   ((KogamaSettingNumericBase_1_System_Single_ *)this_00,
                                    (MethodInfo *)0x0);
                  pSVar7 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                           NamedThemeAttribute_1_UnityEngine_Color__get_Name
                                     ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_00,
                                      (MethodInfo *)0x0);
                  if (this_01 != (GameStatCounterManager *)0x0) {
                    score = MVWorldObject.dll::GameStatCounterManager::
                            GameStatCounterManager_GetActorCount
                                      (this_01,GameStatCounterType__Enum_TimeAttackFlag,
                                       (MVTeam__Enum)team,(int32_t)pSVar7,(MethodInfo *)0x0);
                    TimeAttackFlagDebriefing_HandleScoreBoardVisibility
                              (this,score,(MethodInfo *)0x0);
                    pLVar5 = (this->fields).localPlayerScore;
                    if (pLVar5 != (LocalPlayerScore *)0x0) {
                      LocalPlayerScore::LocalPlayerScore_Activate(pLVar5,(MethodInfo *)0x0);
                      (this->fields).isWaitingForStart = 1;
                      fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                         ((MethodInfo *)0x0);
                      bVar9 = cRam_? == '\0';
                      (this->fields).waitStartTime = fVar8 - _UNK_?;
                      if (bVar9) {
                        func_?();
                        cRam_? = '\x01';
                      }
                      data = (Dictionary_2_System_Object_System_Object_ *)func_?();
                      System.Core.dll::System::Collections::Generic::
                      HashSet`1[AvatarModifierPackage+AvatarModifier]::
                      HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                                ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)data,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                                );
                      pSVar7 = (String *)func_?(TypeInfo__System__Byte);
                      value = (CrossPlatformInputManager_VirtualButton *)
                              func_?(TypeInfo__System__Boolean,&stack0xfffffffb);
                      if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        String,UnityStandardAssets::CrossPlatformInput::
                        CrossPlatformInputManager+VirtualButton]::
                        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                                  ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                                    *)data,pSVar7,value,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                                  );
                        if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr &
                             0x2000000) != 0) &&
                           ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
                          func_?();
                        }
                        NotificationController::NotificationController_PushNotification_2
                                  (NotificationType__Enum_TimeAttackFlagCountDown,data,
                                   NotificationLifetime__Enum_High,(MethodInfo *)0x0);
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
  }
  func_?(0);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void LockCursor() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefing::TimeAttackFlagDebriefing_LockCursor
               (TimeAttackFlagDebriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar1 == MVGameMode__Enum_Edit) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    if (MVar1 == MVGameMode__Enum_Edit) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pIVar2 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
      if (pIVar2 == (IEditModeUI *)0x0) goto code_?;
      cVar3 = func_?(1);
    }
    else {
      cVar3 = '\0';
    }
    if (cVar3 == '\0') {
      return;
    }
  }
  pIVar4 = MVGameControllerDesktop::MVGameControllerDesktop_get_LockCursorManager((MethodInfo *)0x0)
  ;
  if (pIVar4 != (ILockCursorManager *)0x0) {
    func_?(3,TypeInfo__ILockCursorManager);
    return;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnAvatarStateChanged(SpawnRoleModeType) */

void Assembly-CSharp.dll::TimeAttackFlagDebriefing::TimeAttackFlagDebriefing_OnAvatarStateChanged
               (TimeAttackFlagDebriefing *this,SpawnRoleModeType__Enum mode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = GameStatCounterType__Enum_None;
  if ((this->fields).isWaitingForStart == 0) {
    fVar2 = (this->fields).countdownEndTime + _UNK_?;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (fVar2 <= fVar3) {
      WinningConditionControl::WinningConditionControl_TryGetPrioritizedStat
                ((GameStatCounterType__Enum *)&stack0xfffffffb,(MethodInfo *)0x0);
      if (((((this->fields).isDebriefingOn == 0) &&
           (uVar1 == GameStatCounterType__Enum_TimeAttackFlag)) &&
          (mode == SpawnRoleModeType__Enum_Playing)) &&
         ((iVar4 = (this->fields).previousAvatarModeType, iVar4 == 4 || (iVar4 == 2)))) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pPVar5 = (PrefabPool *)
                 MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        if (pPVar5 == (PrefabPool *)0x0) {
code_?:
          func_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pPVar5 = (PrefabPool *)PrefabPool::PrefabPool_get_MVBatteryPrefab(pPVar5,(MethodInfo *)0x0);
        if (pPVar5 == (PrefabPool *)0x0) goto code_?;
        this_00 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                            (pPVar5,(MethodInfo *)0x0);
        if (this_00 == (ObjectiveArrow *)0x0) goto code_?;
        iVar7 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__get_Count
                          ((Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_
                            *)this_00,
                           MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<LastRespawnType>__get_Value__
                          );
        if (iVar7 == 2) {
          this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              ((Component_1 *)this,(MethodInfo *)0x0);
          if (this_01 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_01,1,(MethodInfo *)0x0);
          (this->fields).shouldStartFlagCountdown = 1;
        }
      }
      (this->fields).previousAvatarModeType = mode;
    }
  }
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefing::TimeAttackFlagDebriefing_OnDestroy
               (TimeAttackFlagDebriefing *this,MethodInfo *method)

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
  pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if (pSVar2 != (SpawnRoleDataMediator *)0x0) {
    this_00 = (pSVar2->fields).SpawnRoleModeTypeWrapper;
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,
               MethodInfo__TimeAttackFlagDebriefing__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_
               ,
               MethodInfo__System__Action<MV::Common::SpawnRoleModeType>__Action_System__Object__void__
              );
    if (this_00 != (SpawnRoleModeTypeWrapper *)0x0) {
      SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_remove_OnChange
                (this_00,(Action_1_MV_Common_SpawnRoleModeType_ *)pUVar3,(MethodInfo *)0x0);
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar4 != (MVNetworkGame *)0x0) &&
         (pGVar5 = (pMVar4->fields).GameEventManager, pGVar5 != (GameEventManager *)0x0)) {
        this_01 = (pGVar5->fields).AvatarCommandsBuildMode;
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)this,MethodInfo__TimeAttackFlagDebriefing__OnLeavePlayMode__,
                   (MethodInfo *)0x0);
        if (this_01 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
          GameEventManager+AvatarCommandsBuildModeManager::
          GameEventManager_AvatarCommandsBuildModeManager_remove_OnSetToEditMode
                    (this_01,(Action *)pUVar3,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnPressPlay() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefing::TimeAttackFlagDebriefing_OnPressPlay
               (TimeAttackFlagDebriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).isExitingDebriefing = 1;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    this_02 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
               *)InventoryItemPreviewer::InventoryItemPreviewer_get_PreviewGameObject
                           ((InventoryItemPreviewer *)this_01,(MethodInfo *)0x0);
    if (this_02 !=
        (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
         *)0x0) {
      pOVar1 = System.dll::System::Collections::Generic::
               SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
               Single,System::Object]::
               SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                         (this_02,(MethodInfo *)0x0);
      if (pOVar1 == (Object *)0x2) {
        this_00 = (this->fields).playButton;
        if (this_00 == (Button *)0x0) goto code_?;
        UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                  ((Selectable *)this_00,0,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnRoundEnd() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefing::TimeAttackFlagDebriefing_OnRoundEnd
               (TimeAttackFlagDebriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_isActiveAndEnabled
                    ((Behaviour *)this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pFVar2 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl((MethodInfo *)0x0);
  if (pFVar2 != (FlagDebriefingControl *)0x0) {
    ShowingAdsPopup::ShowingAdsPopup_OnSkip((ShowingAdsPopup *)pFVar2,(MethodInfo *)0x0);
    (this->fields).isDebriefingOn = 0;
    (this->fields).isWaitingForStart = 0;
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)this,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      this_00 = (this->fields).scoreBoardCanvasGroup;
      (this->fields).countdownEndTime = fVar3;
      if (this_00 != (CanvasGroup *)0x0) {
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (this_00,0.0,(MethodInfo *)0x0);
        pFVar2 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                           ((MethodInfo *)0x0);
        if (pFVar2 != (FlagDebriefingControl *)0x0) {
          FlagDebriefingControl::FlagDebriefingControl_EndFlagCountDown(pFVar2,(MethodInfo *)0x0);
          (this->fields).previousAvatarModeType = 4;
          return;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SendCountDownNotification() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefing::
     TimeAttackFlagDebriefing_SendCountDownNotification
               (TimeAttackFlagDebriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  data = (Dictionary_2_System_Object_System_Object_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                        );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)data,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  key = (String *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
  value = (CrossPlatformInputManager_VirtualButton *)
          func_?(TypeInfo__System__Boolean,&stack0xfffffffa);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)data,key,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
      func_?();
    }
    NotificationController::NotificationController_PushNotification_2
              (NotificationType__Enum_TimeAttackFlagCountDown,data,NotificationLifetime__Enum_High,
               (MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SendNotification(Int32, Boolean) */

void Assembly-CSharp.dll::TimeAttackFlagDebriefing::TimeAttackFlagDebriefing_SendNotification
               (TimeAttackFlagDebriefing *this,int32_t captureTime,bool isBestTime,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  data = (Dictionary_2_System_Object_System_Object_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                        );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)data,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  pMVar1 = (MVNetworkGame *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (isBestTime == 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    this_00 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 == (MVNetworkGame *)0x0) ||
       (this_01 = (GameStatCounterManager *)
                  DayNightCycle::DayNightCycle_get_CurrentStarsParam
                            ((DayNightCycle *)pMVar1,(MethodInfo *)0x0),
       this_00 == (MVLocalPlayer *)0x0)) goto code_?;
    MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
    KogamaSettingNumericBase`1[System::Single]::
    KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
              ((KogamaSettingNumericBase_1_System_Single_ *)this_00,(MethodInfo *)0x0);
    pSVar2 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
             NamedThemeAttribute_1_UnityEngine_Color__get_Name
                       ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_00,(MethodInfo *)0x0);
    if (this_01 == (GameStatCounterManager *)0x0) goto code_?;
    oldScore = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                         (this_01,GameStatCounterType__Enum_TimeAttackFlag,(MVTeam__Enum)pSVar2,
                          (int32_t)pSVar2,(MethodInfo *)0x0);
    bVar3 = WinningConditionControl::WinningConditionControl_IsNewScoreBetter
                      ((int32_t)pSVar2,oldScore,GameStatCounterType__Enum_TimeAttackFlag,
                       (MethodInfo *)0x0);
    if (bVar3 == 0) {
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pCVar4 = (CrossPlatformInputManager_VirtualButton *)
               TypeInfo__System__String->static_fields->Empty;
    }
    else {
      pCVar4 = (CrossPlatformInputManager_VirtualButton *)
               TM::TM__(StringLiteral_Your_Best_Time,(MethodInfo *)0x0);
    }
  }
  else {
    pCVar4 = (CrossPlatformInputManager_VirtualButton *)
             TM::TM__(StringLiteral_Best_Time_,(MethodInfo *)0x0);
  }
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)data,(String *)pMVar1,pCVar4,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pSVar2 = (String *)func_?(TypeInfo__System__Byte);
    pCVar4 = (CrossPlatformInputManager_VirtualButton *)
             func_?(TypeInfo__System__Int32,&stack0xfffffff0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)data,pSVar2,pCVar4,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pSVar2 = (String *)func_?(TypeInfo__System__Byte,&stack0xfffffff9);
    pCVar4 = (CrossPlatformInputManager_VirtualButton *)
             func_?(TypeInfo__System__Boolean,&stack0xfffffff8);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)data,pSVar2,pCVar4,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
      func_?();
    }
    NotificationController::NotificationController_PushNotification_2
              (NotificationType__Enum_TimeAttackFlagDebriefing,data,NotificationLifetime__Enum_High,
               (MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefing::TimeAttackFlagDebriefing_Start
               (TimeAttackFlagDebriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if (pSVar1 != (SpawnRoleDataMediator *)0x0) {
    pSVar2 = (pSVar1->fields).SpawnRoleModeTypeWrapper;
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,
               MethodInfo__TimeAttackFlagDebriefing__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_
               ,
               MethodInfo__System__Action<MV::Common::SpawnRoleModeType>__Action_System__Object__void__
              );
    if (pSVar2 != (SpawnRoleModeTypeWrapper *)0x0) {
      SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_add_OnChange
                (pSVar2,(Action_1_MV_Common_SpawnRoleModeType_ *)pUVar3,(MethodInfo *)0x0);
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar4 != (MVNetworkGame *)0x0) &&
         (pGVar5 = (pMVar4->fields).GameEventManager, pGVar5 != (GameEventManager *)0x0)) {
        this_00 = (pGVar5->fields).AvatarCommandsBuildMode;
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(TypeInfo__System__Action);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)this,MethodInfo__TimeAttackFlagDebriefing__OnLeavePlayMode__,
                   (MethodInfo *)0x0);
        if (this_00 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
          GameEventManager+AvatarCommandsBuildModeManager::
          GameEventManager_AvatarCommandsBuildModeManager_add_OnSetToEditMode
                    (this_00,(Action *)pUVar3,(MethodInfo *)0x0);
          pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                             ((MethodInfo *)0x0);
          if ((pSVar1 != (SpawnRoleDataMediator *)0x0) &&
             (pSVar2 = (pSVar1->fields).SpawnRoleModeTypeWrapper,
             pSVar2 != (SpawnRoleModeTypeWrapper *)0x0)) {
            bVar6 = SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_IsInMode
                              (pSVar2,SpawnRoleModeType__Enum_Hidden,(MethodInfo *)0x0);
            if (bVar6 == 0) {
              (this->fields).previousAvatarModeType = 1;
            }
            this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                                ((Component_1 *)this,(MethodInfo *)0x0);
            if (this_01 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (this_01,0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefing::TimeAttackFlagDebriefing_Update
               (TimeAttackFlagDebriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).isWaitingForStart == 0) {
    TimeAttackFlagDebriefing_UpdateButton(this,(MethodInfo *)0x0);
  }
  else {
    fVar1 = (this->fields).waitStartTime + _UNK_?;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (fVar1 < fVar2) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (this_02 == (MVNetworkGame *)0x0) goto code_?;
      this_03 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                 *)InventoryItemPreviewer::InventoryItemPreviewer_get_PreviewGameObject
                             ((InventoryItemPreviewer *)this_02,(MethodInfo *)0x0);
      if (this_03 ==
          (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
           *)0x0) goto code_?;
      pOVar3 = System.dll::System::Collections::Generic::
               SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
               Single,System::Object]::
               SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                         (this_03,(MethodInfo *)0x0);
      if (pOVar3 != (Object *)0x2) {
        (this->fields).isDebriefingOn = 0;
        (this->fields).isWaitingForStart = 0;
        this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            ((Component_1 *)this,(MethodInfo *)0x0);
        if (this_04 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_04,0,(MethodInfo *)0x0);
        fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        this_00 = (this->fields).scoreBoardCanvasGroup;
        (this->fields).countdownEndTime = fVar1;
        if (this_00 == (CanvasGroup *)0x0) goto code_?;
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (this_00,0.0,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pFVar4 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                           ((MethodInfo *)0x0);
        if (pFVar4 == (FlagDebriefingControl *)0x0) goto code_?;
        FlagDebriefingControl::FlagDebriefingControl_EndFlagCountDown(pFVar4,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)StringLiteral_Count_down,(MethodInfo *)0x0);
        pGVar5 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
        if ((pGVar5 == (GameEventManager *)0x0) ||
           (this_01 = (SpawnRoleDataMediator *)(pGVar5->fields).AvatarCommandsPlayMode,
           this_01 == (SpawnRoleDataMediator *)0x0)) goto code_?;
        Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::SpawnRoleDataMediator
        ::SpawnRoleDataMediator_SpawnRoleDataReceiverOnOnSuicide(this_01,(MethodInfo *)0x0);
        pIVar6 = MVGameControllerDesktop::MVGameControllerDesktop_get_LockCursorManager
                           ((MethodInfo *)0x0);
        if (pIVar6 == (ILockCursorManager *)0x0) goto code_?;
        cVar7 = func_?(2,TypeInfo__ILockCursorManager,pIVar6);
        if (cVar7 == '\0') {
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          pIVar8 = MVGameControllerBase::MVGameControllerBase_get_PlayModeUI((MethodInfo *)0x0);
          if (pIVar8 == (IPlayModeUI *)0x0) goto code_?;
          uVar9 = 1;
        }
        else {
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          pIVar8 = MVGameControllerBase::MVGameControllerBase_get_PlayModeUI((MethodInfo *)0x0);
          if (pIVar8 == (IPlayModeUI *)0x0) goto code_?;
          uVar9 = 0;
        }
        func_?(4,TypeInfo__IPlayModeUI,pIVar8,uVar9);
      }
    }
  }
  if ((this->fields).shouldStartFlagCountdown != 0) {
    (this->fields).shouldStartFlagCountdown = 0;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pFVar4 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl((MethodInfo *)0x0)
    ;
    if (pFVar4 == (FlagDebriefingControl *)0x0) {
code_?:
      func_?(0);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    FlagDebriefingControl::FlagDebriefingControl_StartFlagCountDown(pFVar4,(MethodInfo *)0x0);
  }
  return;
}


/* Void UpdateButton() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefing::TimeAttackFlagDebriefing_UpdateButton
               (TimeAttackFlagDebriefing *this,MethodInfo *method)

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
  if ((pMVar1 == (MVNetworkGame *)0x0) ||
     (this_00 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                 *)InventoryItemPreviewer::InventoryItemPreviewer_get_PreviewGameObject
                             ((InventoryItemPreviewer *)pMVar1,(MethodInfo *)0x0),
     this_00 ==
     (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
      *)0x0)) goto code_?;
  pOVar2 = System.dll::System::Collections::Generic::
           SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
           Single,System::Object]::
           SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                     (this_00,(MethodInfo *)0x0);
  bVar3 = (bool)this_00;
  pIVar4 = (this->fields).countdownFill;
  if (pOVar2 == (Object *)0x2) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar1 == (MVNetworkGame *)0x0) ||
        (this_01 = (MVNetworkGameStateListener *)
                   InventoryItemPreviewer::InventoryItemPreviewer_get_PreviewGameObject
                             ((InventoryItemPreviewer *)pMVar1,(MethodInfo *)0x0),
        this_01 == (MVNetworkGameStateListener *)0x0)) ||
       (value = MVNetworkGameStateListener::MVNetworkGameStateListener_get_CountdownInPercentage
                          (this_01,(MethodInfo *)0x0), pIVar4 == (Image *)0x0))
    goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount(pIVar4,value,(MethodInfo *)0x0)
    ;
    pIVar4 = (this->fields).countdownFill;
    if ((pIVar4 == (Image *)0x0) ||
       (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pIVar4,(MethodInfo *)0x0), pGVar5 == (GameObject *)0x0))
    goto code_?;
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar5,(MethodInfo *)0x0);
    if (bVar3 != 0) goto code_?;
    pIVar4 = (this->fields).countdownFill;
    if ((pIVar4 == (Image *)0x0) ||
       (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pIVar4,(MethodInfo *)0x0), pGVar5 == (GameObject *)0x0))
    goto code_?;
    method_00 = (MethodInfo *)0x0;
    bVar3 = 1;
  }
  else {
    if (pIVar4 == (Image *)0x0) {
code_?:
      func_?(0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    method_00 = (MethodInfo *)&UNK_?;
    pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)pIVar4,(MethodInfo *)0x0);
    if (pGVar5 == (GameObject *)0x0) goto code_?;
    bVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar5,(MethodInfo *)0x0);
    if (bVar7 == 0) goto code_?;
    pIVar4 = (this->fields).countdownFill;
    if ((pIVar4 == (Image *)0x0) ||
       (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pIVar4,(MethodInfo *)0x0), pGVar5 == (GameObject *)0x0))
    goto code_?;
  }
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar5,bVar3,method_00);
code_?:
  if ((pOVar2 != (Object *)0x2) && ((this->fields).isExitingDebriefing != 0)) {
    TimeAttackFlagDebriefing_ExitDebriefing(this,(MethodInfo *)0x0);
  }
  return;
}


/* TimeAttackFlagDebriefing() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefing::TimeAttackFlagDebriefing__ctor
               (TimeAttackFlagDebriefing *this,MethodInfo *method)

{
  (this->fields).previousAvatarModeType = 4;
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


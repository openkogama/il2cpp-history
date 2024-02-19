
/* Void EndDebriefingEarly() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefing::TimeAttackFlagDebriefing_EndDebriefingEarly
               (TimeAttackFlagDebriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IPlayModeUI);
    cRam_? = '\x01';
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_isActiveAndEnabled
                    ((Behaviour *)this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pFVar2 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl((MethodInfo *)0x0);
  if (pFVar2 != (FlagDebriefingControl *)0x0) {
    if ((pFVar2->fields).OnFlagDebriefingEnd != (Action *)0x0) {
      pAVar3 = (pFVar2->fields).OnFlagDebriefingEnd;
      (*(pAVar3->fields)._._.invoke_impl)((pAVar3->fields)._._.method_code);
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pIVar4 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
    if (pIVar4 != (IPlayModeUI *)0x0) {
      func_?(4,TypeInfo__IPlayModeUI,pIVar4);
      (this->fields).isDebriefingOn = 0;
      (this->fields).isWaitingForStart = 0;
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (this_01 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_01,0,(MethodInfo *)0x0);
        fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        this_00 = (this->fields).scoreBoardCanvasGroup;
        (this->fields).countdownEndTime = fVar5;
        if (this_00 != (CanvasGroup *)0x0) {
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                    (this_00,0.0,(MethodInfo *)0x0);
          pFVar2 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                             ((MethodInfo *)0x0);
          if (pFVar2 != (FlagDebriefingControl *)0x0) {
            fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                              ((MethodInfo *)0x0);
            (pFVar2->fields).IsInFlagDebriefing = 0;
            (pFVar2->fields).RunStartTime = fVar5;
            if ((pFVar2->fields).OnFlagCountDownEnd != (Action *)0x0) {
              pAVar3 = (pFVar2->fields).OnFlagCountDownEnd;
              (*(pAVar3->fields)._._.invoke_impl)
                        ((pAVar3->fields)._._.method_code,(pAVar3->fields)._._.method);
            }
            pGVar6 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                               ((MethodInfo *)0x0);
            if ((pGVar6 != (GameEventManager *)0x0) &&
               ((pGVar6->fields).AvatarCommandsPlayMode !=
                (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
              if (*(int *)(in_stack_7 + 0x14) != 0) {
                (**(code **)(*(int *)(in_stack_7 + 0x14) + 0xc))();
              }
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void ExitDebriefing() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefing::TimeAttackFlagDebriefing_ExitDebriefing
               (TimeAttackFlagDebriefing *this,MethodInfo *method)

{
  this_00 = (this->fields).canvasGroup;
  if (this_00 != (CanvasGroup *)0x0) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (this_00,0.0,(MethodInfo *)0x0);
    (this->fields).isWaitingForStart = 1;
    (this->fields).isExitingDebriefing = 0;
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this->fields).waitStartTime = fVar1;
    this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_01 != (MVNetworkGame *)0x0) {
      this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
      if (this_02 != (MVLocalPlayer *)0x0) {
        mscorlib.dll::System::Collections::Generic::Stack`1[T]+Enumerator[System::Dynamic::
        BindingRestrictions+TestBuilder+AndNode]::
        Stack_1_T_Enumerator_System_Dynamic_BindingRestrictions_TestBuilder_AndNode__Dispose
                  ((Stack_1_T_Enumerator_System_Dynamic_BindingRestrictions_TestBuilder_AndNode_ *)
                   this_02,(MethodInfo *)0x0);
        pFVar2 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                           ((MethodInfo *)0x0);
        if (pFVar2 != (FlagDebriefingControl *)0x0) {
          if ((pFVar2->fields).OnFlagDebriefingEnd != (Action *)0x0) {
            pAVar3 = (pFVar2->fields).OnFlagDebriefingEnd;
            puStack4 = (pAVar3->fields)._._.method;
            (*(pAVar3->fields)._._.invoke_impl)();
          }
          if ((this->fields).previousAvatarModeType == 1) {
            return;
          }
          pGVar5 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                             ((MethodInfo *)0x0);
          if ((pGVar5 != (GameEventManager *)0x0) &&
             ((pGVar5->fields).AvatarCommandsPlayMode !=
              (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
            uStack6 = 0;
            if (*(int *)(in_stack_7 + 0x14) != 0) {
              uStack8 = *(undefined4 *)(*(int *)(in_stack_7 + 0x14) + 0x14);
              (**(code **)(*(int *)(in_stack_7 + 0x14) + 0xc))();
            }
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* String GetDebriefingText(Int32, Boolean) */

String * Assembly-CSharp.dll::TimeAttackFlagDebriefing::TimeAttackFlagDebriefing_GetDebriefingText
                   (TimeAttackFlagDebriefing *this,int32_t captureTime,bool isBestTime,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Your_Best_Time);
    func_?(&StringLiteral_Best_Time_);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if (isBestTime == 0) {
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame *)0x0) {
      pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar1 != (MVNetworkGame *)0x0) && (pMVar2 != (MVLocalPlayer *)0x0)) &&
         (this_00 = (pMVar1->fields).gameStatCounterManager,
         this_00 != (GameStatCounterManager *)0x0)) {
        oldScore = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                             (this_00,GameStatCounterType__Enum_TimeAttackFlag,
                              (pMVar2->fields)._._Team_k__BackingField,
                              (pMVar2->fields)._._ActorNr_k__BackingField,(MethodInfo *)0x0);
        bVar3 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_IsNewScoreBetter
                          (captureTime,oldScore,GameStatCounterType__Enum_TimeAttackFlag,
                           (MethodInfo *)0x0);
        if (bVar3 == 0) {
          return ::StringLiteral__;
        }
        pSVar4 = TM::TM__(StringLiteral_Your_Best_Time,(MethodInfo *)0x0);
        return pSVar4;
      }
    }
    func_?();
    pcVar5 = (code *)swi(3);
    pSVar4 = (String *)(*pcVar5)();
    return pSVar4;
  }
  pSVar4 = TM::TM__(StringLiteral_Best_Time_,(MethodInfo *)0x0);
  return pSVar4;
}


/* Int32 GetTopPlayerScore() */

int32_t Assembly-CSharp.dll::TimeAttackFlagDebriefing::TimeAttackFlagDebriefing_GetTopPlayerScore
                  (TimeAttackFlagDebriefing *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                   );
    cRam_? = '\x01';
  }
  pOStack_4 = (Object__Class *)0x0;
  pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar5 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar5->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    this_02 = (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(this_00,(MethodInfo *)0x0);
    if (this_02 !=
        (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      pDVar6 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
               StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                           *)&stack0xffffffcc,this_02,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                         );
      uStack_1 = 1;
      iVar7 = 0;
      team = pDVar6->_currentValue;
      while( true ) {
        do {
          pOVar8 = team;
          bVar9 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                  UInt32,System::Object]::
                  Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                            ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                              *)&pOStack_4,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                            );
          if (bVar9 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                      ((Object *)&pOStack_4,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                       ,in_stack_10);
            *unaff_FS_OFFSET = uStack_3;
            return iVar7;
          }
          team = (Object *)0x0;
        } while (pOVar8 == (Object *)0x0);
        iVar11 = (int32_t)pOVar8[6].klass;
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar5 == (MVNetworkGame *)0x0) break;
        this_01 = (pMVar5->fields).gameStatCounterManager;
        if (this_01 == (GameStatCounterManager *)0x0) break;
        in_stack_10 = (MethodInfo *)0x0;
        team = (Object *)pOVar8[9].klass;
        iVar11 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                          (this_01,GameStatCounterType__Enum_TimeAttackFlag,(MVTeam__Enum)team,iVar11
                           ,(MethodInfo *)0x0);
        iVar12 = 8;
        bVar9 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_IsNewScoreBetter
                          (iVar11,iVar7,GameStatCounterType__Enum_TimeAttackFlag,(MethodInfo *)0x0);
        if (bVar9 != 0) {
          iVar7 = iVar12;
        }
      }
    }
  }
  func_?();
  func_?();
  pcVar13 = (code *)swi(3);
  iVar7 = (*pcVar13)();
  return iVar7;
}


/* Void HandleScoreBoardVisibility(Int32) */

void Assembly-CSharp.dll::TimeAttackFlagDebriefing::
     TimeAttackFlagDebriefing_HandleScoreBoardVisibility
               (TimeAttackFlagDebriefing *this,int32_t score,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                   );
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields).teamManager, this_00 != (MVTeamManager *)0x0)) {
    pLVar2 = MVTeamManager::MVTeamManager_GetTeamList(this_00,(MethodInfo *)0x0);
    if (pLVar2 != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
      if ((pLVar2->fields)._size < 2) {
        if (*(Component **)(unaff_ESI + 0x10) == (Component *)0x0) goto code_?;
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (*(Component **)(unaff_ESI + 0x10),(MethodInfo *)0x0);
        if (pGVar3 == (GameObject *)0x0) goto code_?;
        bVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                          (pGVar3,(MethodInfo *)0x0);
        if (bVar4 == 0) {
          if (*(Component **)(unaff_ESI + 0x10) == (Component *)0x0) goto code_?;
          pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             (*(Component **)(unaff_ESI + 0x10),(MethodInfo *)0x0);
          if (pGVar3 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar3,1,(MethodInfo *)0x0);
        }
        if (*(Component **)(unaff_ESI + 0x14) == (Component *)0x0) goto code_?;
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (*(Component **)(unaff_ESI + 0x14),(MethodInfo *)0x0);
        if (pGVar3 == (GameObject *)0x0) goto code_?;
        bVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                          (pGVar3,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          if (*(Component **)(unaff_ESI + 0x14) == (Component *)0x0) goto code_?;
          pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             (*(Component **)(unaff_ESI + 0x14),(MethodInfo *)0x0);
          if (pGVar3 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar3,0,(MethodInfo *)0x0);
        }
        if (*(int **)(unaff_ESI + 0x10) == (int *)0x0) goto code_?;
        (**(code **)(**(int **)(unaff_ESI + 0x10) + 0xf0))();
        piVar5 = *(int **)(unaff_ESI + 0x10);
      }
      else {
        if (*(Component **)(unaff_ESI + 0x14) == (Component *)0x0) goto code_?;
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (*(Component **)(unaff_ESI + 0x14),(MethodInfo *)0x0);
        if (pGVar3 == (GameObject *)0x0) goto code_?;
        bVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                          (pGVar3,(MethodInfo *)0x0);
        if (bVar4 == 0) {
          if (*(Component **)(unaff_ESI + 0x14) == (Component *)0x0) goto code_?;
          pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             (*(Component **)(unaff_ESI + 0x14),(MethodInfo *)0x0);
          if (pGVar3 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar3,1,(MethodInfo *)0x0);
        }
        if (*(Component **)(unaff_ESI + 0x10) == (Component *)0x0) goto code_?;
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (*(Component **)(unaff_ESI + 0x10),(MethodInfo *)0x0);
        if (pGVar3 == (GameObject *)0x0) goto code_?;
        bVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                          (pGVar3,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          if (*(Component **)(unaff_ESI + 0x10) == (Component *)0x0) goto code_?;
          pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             (*(Component **)(unaff_ESI + 0x10),(MethodInfo *)0x0);
          if (pGVar3 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar3,0,(MethodInfo *)0x0);
        }
        if (*(int **)(unaff_ESI + 0x14) == (int *)0x0) goto code_?;
        (**(code **)(**(int **)(unaff_ESI + 0x14) + 0xf0))();
        piVar5 = *(int **)(unaff_ESI + 0x14);
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar1 != (MVNetworkGame *)0x0) {
        pMVar6 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
        if ((pMVar6 != (MVLocalPlayer *)0x0) && (piVar5 != (int *)0x0)) {
          (**(code **)(*piVar5 + 0xe0))();
          return;
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
    func_?(&TypeInfo__IPlayModeUI);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<ReviveState>__get_Value__
                   );
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
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField !=
          (IPlayModeUI *)0x0) {
        func_?(4);
        pSVar2 = (this->fields).scoreBoardSingle;
        if (pSVar2 != (ScoreBoardSingleBase *)0x0) {
          (*(code *)(pSVar2->klass->vtable).Initialize.method)();
          pSVar3 = (this->fields).scoreBoardTeam;
          if (pSVar3 != (ScoreBoardTeamBase *)0x0) {
            pSVar4 = pSVar3->klass;
            newScore = (pSVar4->vtable).ReSortScoreBoard.methodPtr;
            (*(code *)(pSVar4->vtable).Initialize.method)();
            pLVar5 = (this->fields).localPlayerScore;
            if (pLVar5 != (LocalPlayerScore *)0x0) {
              LocalPlayerScore::LocalPlayerScore_Initialize(pLVar5,(MethodInfo *)0x0);
              this_00 = (this->fields).playButton;
              if (this_00 != (Button *)0x0) {
                UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                          ((Selectable *)this_00,1,(MethodInfo *)0x0);
                oldScore = TimeAttackFlagDebriefing_GetTopPlayerScore(this,(MethodInfo *)0x0);
                value = MVWorldObject.dll::GameStatCounterManager::
                        GameStatCounterManager_IsNewScoreBetter
                                  ((int32_t)newScore,oldScore,
                                   GameStatCounterType__Enum_TimeAttackFlag,(MethodInfo *)0x0);
                TimeAttackFlagDebriefing_HandleScoreBoardVisibility
                          (this,(int32_t)newScore,(MethodInfo *)0x0);
                pLVar5 = (this->fields).localPlayerScore;
                if (pLVar5 != (LocalPlayerScore *)0x0) {
                  LocalPlayerScore::LocalPlayerScore_Activate(pLVar5,(MethodInfo *)0x0);
                  this_01 = (this->fields).sunshineObject;
                  if (this_01 != (GameObject *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (this_01,value,(MethodInfo *)0x0);
                    pSVar6 = MVGameControllerBase::
                             MVGameControllerBase_get_SpawnRoleDataMediatorLocal((MethodInfo *)0x0);
                    if ((pSVar6 != (SpawnRoleDataMediator *)0x0) &&
                       (this_02 = (WebCompletionSource_1_System_Object_ *)
                                  (pSVar6->fields).reviveState,
                       this_02 != (WebCompletionSource_1_System_Object_ *)0x0)) {
                      this_04 = System.dll::System::Net::WebCompletionSource`1[System::Object]::
                                WebCompletionSource_1_System_Object__get_Task
                                          (this_02,
                                           MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<ReviveState>__get_Value__
                                          );
                      if (this_04 != (Task *)0x0) {
                        ReviveState::ReviveState_ResetSafePostions
                                  ((ReviveState *)this_04,(MethodInfo *)0x0);
                        pGVar7 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                           ((MethodInfo *)0x0);
                        if ((pGVar7 != (GameEventManager *)0x0) &&
                           (this_03 = (pGVar7->fields).AvatarCommandsPlayMode,
                           this_03 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
                          GameEventManager+AvatarCommandsPlayModeManager::
                          GameEventManager_AvatarCommandsPlayModeManager_SetIntermediateDebriefing
                                    (this_03,WinningConditionType__Enum_TimeAttackFlag,
                                     (MethodInfo *)0x0);
                          TimeAttackFlagDebriefing_SendNotification
                                    (this,(int32_t)newScore,5,(MethodInfo *)0x0);
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
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void InitializeCountDown() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefing::TimeAttackFlagDebriefing_InitializeCountDown
               (TimeAttackFlagDebriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IPlayModeUI);
    cRam_? = '\x01';
  }
  this_01 = this;
  if ((this->fields).isDebriefingOn != 0) {
    return;
  }
  (this->fields).isDebriefingOn = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pIVar1 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
  if (pIVar1 != (IPlayModeUI *)0x0) {
    func_?(4,TypeInfo__IPlayModeUI,pIVar1,0);
    pCVar2 = (this_01->fields).canvasGroup;
    if (pCVar2 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (pCVar2,0.0,(MethodInfo *)0x0);
      pCVar2 = (this_01->fields).scoreBoardCanvasGroup;
      if (pCVar2 != (CanvasGroup *)0x0) {
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (pCVar2,1.0,(MethodInfo *)0x0);
        pSVar3 = (this_01->fields).scoreBoardSingle;
        if (pSVar3 != (ScoreBoardSingleBase *)0x0) {
          (*(code *)(pSVar3->klass->vtable).Initialize.method)
                    (pSVar3,8,(pSVar3->klass->vtable).ReSortScoreBoard.methodPtr);
          pSVar4 = (this_01->fields).scoreBoardTeam;
          if (pSVar4 != (ScoreBoardTeamBase *)0x0) {
            (*(code *)(pSVar4->klass->vtable).Initialize.method)
                      (pSVar4,8,(pSVar4->klass->vtable).ReSortScoreBoard.methodPtr);
            pLVar5 = (this_01->fields).localPlayerScore;
            if (pLVar5 != (LocalPlayerScore *)0x0) {
              LocalPlayerScore::LocalPlayerScore_Initialize(pLVar5,(MethodInfo *)0x0);
              pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (pMVar6 != (MVNetworkGame *)0x0) {
                pMVar7 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar6,(MethodInfo *)0x0);
                pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (((pMVar6 != (MVNetworkGame *)0x0) && (pMVar7 != (MVLocalPlayer *)0x0)) &&
                   (this_00 = (pMVar6->fields).gameStatCounterManager,
                   this_00 != (GameStatCounterManager *)0x0)) {
                  score = MVWorldObject.dll::GameStatCounterManager::
                          GameStatCounterManager_GetActorCount
                                    (this_00,GameStatCounterType__Enum_TimeAttackFlag,
                                     (pMVar7->fields)._._Team_k__BackingField,
                                     (pMVar7->fields)._._ActorNr_k__BackingField,(MethodInfo *)0x0);
                  TimeAttackFlagDebriefing_HandleScoreBoardVisibility
                            (this_01,score,(MethodInfo *)0x0);
                  pLVar5 = (this_01->fields).localPlayerScore;
                  if (pLVar5 != (LocalPlayerScore *)0x0) {
                    LocalPlayerScore::LocalPlayerScore_Activate(pLVar5,(MethodInfo *)0x0);
                    (this_01->fields).isWaitingForStart = 1;
                    fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                       ((MethodInfo *)0x0);
                    bVar9 = cRam_? == '\0';
                    (this_01->fields).waitStartTime = fVar8 - _UNK_?;
                    if (bVar9) {
                      func_?();
                      func_?(&TypeInfo__System__Byte);
                      func_?(&
                                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                                     );
                      func_?(&
                                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                                     );
                      func_?(&
                                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                     );
                      func_?(&TypeInfo__NotificationController);
                      cRam_? = '\x01';
                    }
                    this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                               *)func_?();
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                              (this_02,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                              );
                    this = (TimeAttackFlagDebriefing *)CONCAT13(0x12,this._0_3_);
                    key = (Object *)func_?(TypeInfo__System__Byte,(int)&this + 3);
                    value = (Object *)func_?(TypeInfo__System__Boolean,&stack0xfffffffb);
                    if (this_02 !=
                        (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                         *)0x0) {
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__Add
                                ((Dictionary_2_System_Object_System_Object_ *)this_02,key,value,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                                );
                      if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
                        this = (TimeAttackFlagDebriefing *)TypeInfo__NotificationController;
                        func_?();
                      }
                      this = (TimeAttackFlagDebriefing *)0x0;
                      NotificationController::NotificationController_PushNotification_2
                                (NotificationType__Enum_TimeAttackFlagCountDown,
                                 (Dictionary_2_System_Object_System_Object_ *)this_02,
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
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnAvatarStateChanged(SpawnRoleModeType) */

void Assembly-CSharp.dll::TimeAttackFlagDebriefing::TimeAttackFlagDebriefing_OnAvatarStateChanged
               (TimeAttackFlagDebriefing *this,SpawnRoleModeType__Enum mode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<LastRespawnType>__get_Value__
                   );
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
         (((this->fields).previousAvatarModeType == 4 ||
          ((this->fields).previousAvatarModeType == 2)))) {
        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        if ((pMVar4 == (MVLocalPlayer *)0x0) ||
           ((pSVar5 = (pMVar4->fields).spawnRoleDataMediator, pSVar5 == (SpawnRoleDataMediator *)0x0
            || (this_00 = (WebCompletionSource_1_System_Object_ *)(pSVar5->fields).lastRespawnType,
               this_00 == (WebCompletionSource_1_System_Object_ *)0x0)))) {
code_?:
          func_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar7 = System.dll::System::Net::WebCompletionSource`1[System::Object]::
                 WebCompletionSource_1_System_Object__get_Task
                           (this_00,
                            MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<LastRespawnType>__get_Value__
                           );
        if (pTVar7 == (Task *)0x2) {
          this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this,(MethodInfo *)0x0);
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
    func_?(&TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
    func_?(&TypeInfo__System__Action);
    func_?(&
                    MethodInfo__TimeAttackFlagDebriefing__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_
                   );
    func_?(&MethodInfo__TimeAttackFlagDebriefing__OnLeavePlayMode__);
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if (pSVar2 != (SpawnRoleDataMediator *)0x0) {
    this_00 = (pSVar2->fields).SpawnRoleModeTypeWrapper;
    this_02 = (UnityAction_1_System_Int32Enum_ *)
              func_?(TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_02,(Object *)this,
               MethodInfo__TimeAttackFlagDebriefing__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_
               ,(MethodInfo *)0x0);
    if (this_00 != (SpawnRoleModeTypeWrapper *)0x0) {
      SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_remove_OnChange
                (this_00,(Action_1_MV_Common_SpawnRoleModeType_ *)this_02,(MethodInfo *)0x0);
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar3 != (MVNetworkGame *)0x0) &&
         (pGVar4 = (pMVar3->fields).GameEventManager, pGVar4 != (GameEventManager *)0x0)) {
        this_01 = (pGVar4->fields).AvatarCommandsBuildMode;
        this_03 = (NavMesh_OnNavMeshPreUpdate *)func_?();
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_03,(Object *)this,MethodInfo__TimeAttackFlagDebriefing__OnLeavePlayMode__,
                   (MethodInfo *)0x0);
        if (this_01 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
          GameEventManager+AvatarCommandsBuildModeManager::
          GameEventManager_AvatarCommandsBuildModeManager_remove_OnSetToEditMode
                    (this_01,(Action *)this_03,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnPressPlay() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefing::TimeAttackFlagDebriefing_OnPressPlay
               (TimeAttackFlagDebriefing *this,MethodInfo *method)

{
  (this->fields).isExitingDebriefing = 1;
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pMVar2 = (pMVar1->fields)._NetworkGameStateListener_k__BackingField,
     pMVar2 != (MVNetworkGameStateListener *)0x0)) {
    if ((pMVar2->fields).currentGameState == 2) {
      this_00 = (this->fields).playButton;
      if (this_00 == (Button *)0x0) goto code_?;
      UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                ((Selectable *)this_00,0,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnRoundEnd() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefing::TimeAttackFlagDebriefing_OnRoundEnd
               (TimeAttackFlagDebriefing *this,MethodInfo *method)

{
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_isActiveAndEnabled
                    ((Behaviour *)this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pFVar2 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl((MethodInfo *)0x0);
  if (pFVar2 != (FlagDebriefingControl *)0x0) {
    if ((pFVar2->fields).OnFlagDebriefingEnd != (Action *)0x0) {
      pAVar3 = (pFVar2->fields).OnFlagDebriefingEnd;
      (*(pAVar3->fields)._._.invoke_impl)((pAVar3->fields)._._.method_code);
    }
    (this->fields).isDebriefingOn = 0;
    (this->fields).isWaitingForStart = 0;
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
      fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      this_00 = (this->fields).scoreBoardCanvasGroup;
      (this->fields).countdownEndTime = fVar4;
      if (this_00 != (CanvasGroup *)0x0) {
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (this_00,0.0,(MethodInfo *)0x0);
        pFVar2 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                           ((MethodInfo *)0x0);
        if (pFVar2 != (FlagDebriefingControl *)0x0) {
          fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
          (pFVar2->fields).IsInFlagDebriefing = 0;
          (pFVar2->fields).RunStartTime = fVar4;
          if ((pFVar2->fields).OnFlagCountDownEnd != (Action *)0x0) {
            pAVar3 = (pFVar2->fields).OnFlagCountDownEnd;
            pvStack5 = (pAVar3->fields)._._.method;
            (*(pAVar3->fields)._._.invoke_impl)();
          }
          (this->fields).previousAvatarModeType = 4;
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


/* Void SendCountDownNotification() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefing::
     TimeAttackFlagDebriefing_SendCountDownNotification
               (TimeAttackFlagDebriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__NotificationController);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  key = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
  value = (Object *)func_?(TypeInfo__System__Boolean,&stack0xfffffffa);
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,key,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    NotificationController::NotificationController_PushNotification_2
              (NotificationType__Enum_TimeAttackFlagCountDown,
               (Dictionary_2_System_Object_System_Object_ *)this_00,NotificationLifetime__Enum_High,
               (MethodInfo *)0x0);
    return;
  }
  func_?();
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
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__NotificationController);
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  pOVar1 = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Your_Best_Time);
    func_?(&StringLiteral_Best_Time_);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if (isBestTime == 0) {
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0);
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar2 == (MVNetworkGame *)0x0) || (pMVar3 == (MVLocalPlayer *)0x0)) ||
       (this_00 = (pMVar2->fields).gameStatCounterManager, this_00 == (GameStatCounterManager *)0x0)
       ) goto code_?;
    oldScore = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                         (this_00,GameStatCounterType__Enum_TimeAttackFlag,
                          (pMVar3->fields)._._Team_k__BackingField,
                          (pMVar3->fields)._._ActorNr_k__BackingField,(MethodInfo *)0x0);
    pOVar1 = (Object *)0x8;
    bVar4 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_IsNewScoreBetter
                      (captureTime,oldScore,GameStatCounterType__Enum_TimeAttackFlag,
                       (MethodInfo *)0x0);
    value = ::StringLiteral__;
    if (bVar4 != 0) {
      value = TM::TM__(StringLiteral_Your_Best_Time,(MethodInfo *)0x0);
    }
  }
  else {
    value = TM::TM__(StringLiteral_Best_Time_,(MethodInfo *)0x0);
  }
  if (this_01 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar1,(Object *)value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar1 = (Object *)func_?(TypeInfo__System__Byte);
    pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar1,pOVar5,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar1 = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffff9);
    pOVar5 = (Object *)func_?(TypeInfo__System__Boolean,&stack0xfffffff8);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar1,pOVar5,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    NotificationController::NotificationController_PushNotification_2
              (NotificationType__Enum_TimeAttackFlagDebriefing,
               (Dictionary_2_System_Object_System_Object_ *)this_01,NotificationLifetime__Enum_High,
               (MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefing::TimeAttackFlagDebriefing_Start
               (TimeAttackFlagDebriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
    func_?(&TypeInfo__System__Action);
    func_?(&
                    MethodInfo__TimeAttackFlagDebriefing__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_
                   );
    func_?(&MethodInfo__TimeAttackFlagDebriefing__OnLeavePlayMode__);
    cRam_? = '\x01';
  }
  pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if (pSVar1 != (SpawnRoleDataMediator *)0x0) {
    pSVar2 = (pSVar1->fields).SpawnRoleModeTypeWrapper;
    this_01 = (UnityAction_1_System_Int32Enum_ *)
              func_?(TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_01,(Object *)this,
               MethodInfo__TimeAttackFlagDebriefing__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_
               ,(MethodInfo *)0x0);
    if (pSVar2 != (SpawnRoleModeTypeWrapper *)0x0) {
      SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_add_OnChange
                (pSVar2,(Action_1_MV_Common_SpawnRoleModeType_ *)this_01,(MethodInfo *)0x0);
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar3 != (MVNetworkGame *)0x0) &&
         (pGVar4 = (pMVar3->fields).GameEventManager, pGVar4 != (GameEventManager *)0x0)) {
        this_00 = (pGVar4->fields).AvatarCommandsBuildMode;
        this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_02,(Object *)this,MethodInfo__TimeAttackFlagDebriefing__OnLeavePlayMode__,
                   (MethodInfo *)0x0);
        if (this_00 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
          GameEventManager+AvatarCommandsBuildModeManager::
          GameEventManager_AvatarCommandsBuildModeManager_add_OnSetToEditMode
                    (this_00,(Action *)this_02,(MethodInfo *)0x0);
          pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                             ((MethodInfo *)0x0);
          if ((pSVar1 != (SpawnRoleDataMediator *)0x0) &&
             (pSVar2 = (pSVar1->fields).SpawnRoleModeTypeWrapper,
             pSVar2 != (SpawnRoleModeTypeWrapper *)0x0)) {
            bVar5 = SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_IsInMode
                              (pSVar2,SpawnRoleModeType__Enum_Hidden,(MethodInfo *)0x0);
            if (bVar5 == 0) {
              (this->fields).previousAvatarModeType = 1;
            }
            this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this,(MethodInfo *)0x0);
            if (this_03 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (this_03,0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefing::TimeAttackFlagDebriefing_Update
               (TimeAttackFlagDebriefing *this,MethodInfo *method)

{
  pTVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IPlayModeUI);
    cRam_? = '\x01';
  }
  if ((this->fields).isWaitingForStart == 0) {
    TimeAttackFlagDebriefing_UpdateButton(this,(MethodInfo *)0x0);
  }
  else {
    fVar2 = (this->fields).waitStartTime + _UNK_?;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (fVar2 < fVar3) {
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar4 == (MVNetworkGame *)0x0) ||
         (pMVar5 = (pMVar4->fields)._NetworkGameStateListener_k__BackingField,
         pMVar5 == (MVNetworkGameStateListener *)0x0)) goto code_?;
      if ((pMVar5->fields).currentGameState != 2) {
        (this->fields).isDebriefingOn = 0;
        (this->fields).isWaitingForStart = 0;
        this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        if (this_02 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_02,0,(MethodInfo *)0x0);
        fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        this_00 = (this->fields).scoreBoardCanvasGroup;
        (this->fields).countdownEndTime = fVar2;
        if (this_00 == (CanvasGroup *)0x0) goto code_?;
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (this_00,0.0,(MethodInfo *)0x0);
        pFVar6 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                           ((MethodInfo *)0x0);
        if (pFVar6 == (FlagDebriefingControl *)0x0) goto code_?;
        fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        (pFVar6->fields).IsInFlagDebriefing = 0;
        (pFVar6->fields).RunStartTime = fVar2;
        if ((pFVar6->fields).OnFlagCountDownEnd != (Action *)0x0) {
          (*(((pFVar6->fields).OnFlagCountDownEnd)->fields)._._.invoke_impl)();
        }
        pGVar7 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
        if ((pGVar7 == (GameEventManager *)0x0) ||
           (this_01 = (pGVar7->fields).AvatarCommandsPlayMode,
           this_01 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) goto code_?;
        GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd__RegisterAdEvents_m__9
                  ((RewardedAd *)this_01,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?(&TypeInfo__MVGameControllerBase);
          cRam_? = '\x01';
        }
        pIVar8 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__MVGameControllerBase);
          cRam_? = '\x01';
        }
        if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
          bVar9 = MVGameControllerDesktop::MVGameControllerDesktop_get_IsCursorLock
                            ((MethodInfo *)0x0);
          this._1_3_ = (undefined3)((uint)this_00 >> 8);
          this = (TimeAttackFlagDebriefing *)(CONCAT31(this._1_3_,bVar9) ^ 1);
        }
        else {
          this = (TimeAttackFlagDebriefing *)((uint)this_00 & 0xffffff00);
        }
        if (pIVar8 == (IPlayModeUI *)0x0) goto code_?;
        func_?(4,TypeInfo__IPlayModeUI,pIVar8,this);
      }
    }
  }
  if ((pTVar1->fields).shouldStartFlagCountdown != 0) {
    (pTVar1->fields).shouldStartFlagCountdown = 0;
    pFVar6 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl((MethodInfo *)0x0)
    ;
    if (pFVar6 == (FlagDebriefingControl *)0x0) {
code_?:
      func_?();
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if ((pFVar6->fields).OnFlagCountDown != (Action *)0x0) {
      pAVar11 = (pFVar6->fields).OnFlagCountDown;
      (*(pAVar11->fields)._._.invoke_impl)
                ((pAVar11->fields)._._.method_code,(pAVar11->fields)._._.method);
    }
    (pFVar6->fields).IsInFlagDebriefing = 1;
  }
  return;
}


/* Void UpdateButton() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefing::TimeAttackFlagDebriefing_UpdateButton
               (TimeAttackFlagDebriefing *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pMVar2 = (pMVar1->fields)._NetworkGameStateListener_k__BackingField,
     pMVar2 != (MVNetworkGameStateListener *)0x0)) {
    pIVar3 = (this->fields).countdownFill;
    if ((pMVar2->fields).currentGameState == 2) {
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar1 != (MVNetworkGame *)0x0) &&
          (pMVar2 = (pMVar1->fields)._NetworkGameStateListener_k__BackingField,
          pMVar2 != (MVNetworkGameStateListener *)0x0)) &&
         (fVar4 = MVNetworkGameStateListener::MVNetworkGameStateListener_get_CountdownInPercentage
                            (pMVar2,(MethodInfo *)0x0), pIVar3 != (Image *)0x0)) {
        UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                  (pIVar3,fVar4,(MethodInfo *)0x0);
        pIVar3 = (this->fields).countdownFill;
        if ((pIVar3 != (Image *)0x0) &&
           (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pIVar3,(MethodInfo *)0x0), pGVar5 != (GameObject *)0x0)
           ) {
          bVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                            (pGVar5,(MethodInfo *)0x0);
          if (bVar6 != 0) {
            return;
          }
          pIVar3 = (this->fields).countdownFill;
          if ((pIVar3 != (Image *)0x0) &&
             (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pIVar3,(MethodInfo *)0x0),
             pGVar5 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar5,1,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    else if ((pIVar3 != (Image *)0x0) &&
            (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pIVar3,(MethodInfo *)0x0), pGVar5 != (GameObject *)0x0
            )) {
      bVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (pGVar5,(MethodInfo *)0x0);
      if (bVar6 != 0) {
        pIVar3 = (this->fields).countdownFill;
        if ((pIVar3 == (Image *)0x0) ||
           (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pIVar3,(MethodInfo *)0x0), pGVar5 == (GameObject *)0x0)
           ) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar5,0,(MethodInfo *)0x0);
      }
      if ((this->fields).isExitingDebriefing == 0) {
        return;
      }
      this_00 = (this->fields).canvasGroup;
      if (this_00 != (CanvasGroup *)0x0) {
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (this_00,0.0,(MethodInfo *)0x0);
        (this->fields).isWaitingForStart = 1;
        (this->fields).isExitingDebriefing = 0;
        fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        (this->fields).waitStartTime = fVar4;
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar1 != (MVNetworkGame *)0x0) &&
           (this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
           this_02 != (MVLocalPlayer *)0x0)) {
          mscorlib.dll::System::Collections::Generic::Stack`1[T]+Enumerator[System::Dynamic::
          BindingRestrictions+TestBuilder+AndNode]::
          Stack_1_T_Enumerator_System_Dynamic_BindingRestrictions_TestBuilder_AndNode__Dispose
                    ((Stack_1_T_Enumerator_System_Dynamic_BindingRestrictions_TestBuilder_AndNode_ *
                     )this_02,(MethodInfo *)0x0);
          pFVar7 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                             ((MethodInfo *)0x0);
          if (pFVar7 != (FlagDebriefingControl *)0x0) {
            if ((pFVar7->fields).OnFlagDebriefingEnd != (Action *)0x0) {
              (*(((pFVar7->fields).OnFlagDebriefingEnd)->fields)._._.invoke_impl)();
            }
            if ((this->fields).previousAvatarModeType != 1) {
              pGVar8 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                 ((MethodInfo *)0x0);
              if ((pGVar8 == (GameEventManager *)0x0) ||
                 (this_01 = (pGVar8->fields).AvatarCommandsPlayMode,
                 this_01 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0))
              goto code_?;
              GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedAd::
              RewardedAd__RegisterAdEvents_m__9((RewardedAd *)this_01,(MethodInfo *)0x0);
            }
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* TimeAttackFlagDebriefing() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefing::TimeAttackFlagDebriefing__ctor
               (TimeAttackFlagDebriefing *this,MethodInfo *method)

{
  (this->fields).previousAvatarModeType = 4;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}



/* Void Initialize(TeamData, UnityAction`1[MV.WorldObject.MVTeam]) */

void Assembly-CSharp.dll::TeamSelectButton::TeamSelectButton_Initialize
               (TeamSelectButton *this,TeamData *teamData,
               UnityAction_1_MV_WorldObject_MVTeam_ *OnTeamSelected,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVPlayer>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).teamData = teamData;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&(this->fields).teamData >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  iVar6 = iRam_?;
  (this->fields).OnTeamSelected = OnTeamSelected;
  if (iVar6 != 0) {
    uVar1 = (uint)((ulonglong)&(this->fields).OnTeamSelected >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  pIVar7 = (this->fields).buttonImage;
  if (teamData != (TeamData *)0x0) {
    team = (teamData->fields).team;
    if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
      FUN_?();
    }
    pCVar8 = Styles::Styles_GetTeamColor((Color *)auStack_9,team,0,(MethodInfo *)0x0);
    if (pIVar7 != (Image *)0x0) {
      auStack_9 = *(undefined1 (*) [8])pCVar8;
      pDStack_10 = *(Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ **)&pCVar8->b
      ;
      (*(pIVar7->klass->vtable).set_color.methodPtr)
                (pIVar7,auStack_9,(pIVar7->klass->vtable).set_color.method);
      pTVar11 = (this->fields).teamName;
      if (pTVar11 != (Text *)0x0) {
        (*(pTVar11->klass->vtable).set_text.methodPtr)(pTVar11,(teamData->fields).representedName);
        pTVar11 = (this->fields).playerCountText;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar12 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar12 != (MVGameControllerBase *)0x0) &&
            (pMVar13 = (pMVar12->fields).game, pMVar13 != (MVNetworkGame *)0x0)) &&
           (this_00 = (pMVar13->fields).teamManager, this_00 != (MVTeamManager *)0x0)) {
          value = MVTeamManager::MVTeamManager_GetNoOfPlayersInTeamWithoutLocalPlayer
                            (this_00,(teamData->fields).team,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__Number);
            LOCK();
            UNLOCK();
            FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
               field_0x135 & 1) == 0) {
            FUN_?();
          }
          if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
            FUN_?();
          }
          auStack_9 = (undefined1  [8])0x0;
          pDStack_10 = (Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)0x0;
          mscorlib.dll::System::Number::Number_FormatInt32
                    (value,(ReadOnlySpan_1_Char_ *)auStack_9,(IFormatProvider *)0x0,
                     (MethodInfo *)0x0);
          if (pTVar11 != (Text *)0x0) {
            (*(pTVar11->klass->vtable).set_text.methodPtr)(pTVar11);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar12 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if (((pMVar12 != (MVGameControllerBase *)0x0) &&
                (pMVar13 = (pMVar12->fields).game, pMVar13 != (MVNetworkGame *)0x0)) &&
               (this_01 = (pMVar13->fields)._Friends_k__BackingField, this_01 != (FriendList *)0x0))
            {
              pDVar14 = (Dictionary_2_System_UInt32_System_Object_ *)
                        FriendList::FriendList_GetOnlineFriends(this_01,(MethodInfo *)0x0);
              iVar6 = 0;
              if (pDVar14 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
                if (iRam_? != 0) {
                  uVar1 = (uint)((ulonglong)&pDStack_15 >> 0xc);
                  lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
                  do {
                    uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
                    puVar4 = (ulonglong *)(lVar2 + 0xADDR);
                    LOCK();
                    bVar5 = uVar3 == *puVar4;
                    if (bVar5) {
                      *puVar4 = uVar3 | 1L << (ulonglong)(uVar1 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar5);
                }
                uStack_16 = (ulonglong)(uint)(pDVar14->fields)._version;
                uStack_17 = 2;
                uStack_18 = 0;
                uStack_19 = 0;
                DStack_20._version = (undefined4)uStack_16;
                DStack_20._index = uStack_16._4_4_;
                DStack_20._current.key = 0;
                DStack_20._current._4_4_ = 0;
                DStack_20._current.value = (Object *)0x0;
                DStack_20._getEnumeratorRetType = 2;
                DStack_20._36_4_ = 0;
                auStack_9 = (undefined1  [8])0x0;
                pDStack_10 = &DStack_20;
                pDStack_15 = pDVar14;
                DStack_20._dictionary = pDVar14;
                while (bVar21 = mscorlib.dll::System::Collections::Generic::
                               Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                               Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                                         (&DStack_20,
                                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                                         ), bVar21 != 0) {
                  if (DStack_20._current.value == (Object *)0x0) goto code_?;
                  if (*(int *)((longlong)&DStack_20._current.value[8].klass + 4) ==
                      (teamData->fields).team) {
                    iVar6 = iVar6 + 1;
                  }
                }
                pTVar11 = (this->fields).friendCountText;
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__System__Number);
                  LOCK();
                  UNLOCK();
                  FUN_?(&
                                MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass
                     ->field_0x135 & 1) == 0) {
                  FUN_?();
                }
                if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                  FUN_?();
                }
                auStack_9 = (undefined1  [8])0x0;
                pDStack_10 = (Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)0x0
                ;
                pSVar22 = mscorlib.dll::System::Number::Number_FormatInt32
                                    (iVar6,(ReadOnlySpan_1_Char_ *)auStack_9,
                                     (IFormatProvider *)0x0,(MethodInfo *)0x0);
                if (pTVar11 != (Text *)0x0) {
                  (*(pTVar11->klass->vtable).set_text.methodPtr)
                            (pTVar11,pSVar22,(pTVar11->klass->vtable).set_text.method);
                  if (iVar6 == 0) {
                    obj = (this->fields).friendIcon;
                    if (obj == (GameObject *)0x0) goto code_?;
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pvVar23 = (obj->fields)._.m_CachedPtr;
                    if (pvVar23 == (void *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                      pcVar24 = (code *)swi(3);
                      (*pcVar24)();
                      return;
                    }
                    pcVar24 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar24 = (code *)FUN_?(&UNK_?), pcVar24 == (code *)0x0)) {
                      uVar25 = func_?(&UNK_?);
                      FUN_?(uVar25,0);
                      pcVar24 = (code *)swi(3);
                      (*pcVar24)();
                      return;
                    }
                    pcRam_? = pcVar24;
                    (*pcRam_?)(pvVar23,0);
                  }
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* Void OnPointerDown(PointerEventData) */

void Assembly-CSharp.dll::TeamSelectButton::TeamSelectButton_OnPointerDown
               (TeamSelectButton *this,PointerEventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (eventData != (PointerEventData *)0x0) {
    if ((eventData->fields)._button_k__BackingField != 0) {
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
         (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
        (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) &&
       ((pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar3,(MethodInfo *)0x0),
        pMVar4 != (MVLocalPlayer *)0x0 &&
        (pTVar5 = (this->fields).teamData, pTVar5 != (TeamData *)0x0)))) {
      if ((pMVar4->fields)._._Team_k__BackingField != (pTVar5->fields).team) {
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (((pMVar2 == (MVNetworkGame *)0x0) ||
            (pTVar5 = (this->fields).teamData, pTVar5 == (TeamData *)0x0)) ||
           (this_00 = (pMVar2->fields).teamManager, this_00 == (MVTeamManager *)0x0))
        goto code_?;
        bVar6 = MVTeamManager::MVTeamManager_TeamHasSpawnRoles
                          (this_00,(pTVar5->fields).team,(MethodInfo *)0x0);
        if (bVar6 == 0) {
          this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          pTVar5 = (this->fields).teamData;
          if ((pTVar5 == (TeamData *)0x0) || (this_02 == (MVNetworkGame_OperationRequests *)0x0))
          goto code_?;
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetTeam
                    (this_02,(pTVar5->fields).team,(MethodInfo *)0x0);
          pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
          this_01 = (pMVar2->fields).gameStatCounterManager;
          pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (((pMVar2 == (MVNetworkGame *)0x0) ||
              (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 == (MVPlayerContainer *)0x0)) ||
             (pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                  (pMVar3,(MethodInfo *)0x0), pMVar4 == (MVLocalPlayer *)0x0))
          goto code_?;
          actorNr = (pMVar4->fields)._._ActorNr_k__BackingField;
          pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (((pMVar2 == (MVNetworkGame *)0x0) ||
              (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 == (MVPlayerContainer *)0x0)) ||
             ((pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                   (pMVar3,(MethodInfo *)0x0), pMVar4 == (MVLocalPlayer *)0x0 ||
              (this_01 == (GameStatCounterManager *)0x0)))) goto code_?;
          team = (pMVar4->fields)._._Team_k__BackingField;
          method_00 = (MethodInfo *)(ulonglong)team;
          MVWorldObject.dll::GameStatCounterManager::
          GameStatCounterManager_RemoveTeamScoreOnActorLeave(this_01,actorNr,team,(MethodInfo *)0x0)
          ;
          pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (((pMVar2 == (MVNetworkGame *)0x0) ||
              (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 == (MVPlayerContainer *)0x0)) ||
             (pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                  (pMVar3,(MethodInfo *)0x0), pMVar4 == (MVLocalPlayer *)0x0))
          goto code_?;
          (pMVar4->fields)._.checkpointWOID = -1;
          pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar2 == (MVNetworkGame *)0x0) ||
             (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 == (MVPlayerContainer *)0x0))
          goto code_?;
          player = (MVPlayer *)0x0;
          pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar3,(MethodInfo *)0x0);
          pTVar5 = (this->fields).teamData;
          if ((pTVar5 == (TeamData *)0x0) || (pMVar4 == (MVLocalPlayer *)0x0))
          goto code_?;
          (pMVar4->fields)._._Team_k__BackingField = (pTVar5->fields).team;
          MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,method_00);
          if ((((extraout_RAX == 0) || (*(longlong *)(extraout_RAX + 200) == 0)) ||
              (lVar7 = *(longlong *)(*(longlong *)(extraout_RAX + 200) + 0x38), lVar7 == 0)) ||
             (lVar7 = *(longlong *)(lVar7 + 0x10), lVar7 == 0)) goto code_?;
          if (*(int *)(lVar7 + 0x10) == 4) {
            pGVar8 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                ((MethodInfo *)0x0);
            if ((pGVar8 == (GameEventManager *)0x0) ||
               (pGVar9 = (pGVar8->fields).AvatarCommandsPlayMode,
               pGVar9 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0))
            goto code_?;
            if ((pGVar9->fields).OnSetToSpawnPoint != (Action *)0x0) {
              pAVar10 = (pGVar9->fields).OnSetToSpawnPoint;
              (*(pAVar10->fields)._._.invoke_impl)
                        ((pAVar10->fields)._._.method_code,(pAVar10->fields)._._.method);
            }
          }
        }
      }
      pTVar5 = (this->fields).teamData;
      if ((pTVar5 != (TeamData *)0x0) &&
         (pUVar11 = (this->fields).OnTeamSelected,
         pUVar11 != (UnityAction_1_MV_WorldObject_MVTeam_ *)0x0)) {
        (*(pUVar11->fields)._._.invoke_impl)
                  ((pUVar11->fields)._._.method_code,(pTVar5->fields).team,
                   (pUVar11->fields)._._.method);
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void StartPlaying() */

void Assembly-CSharp.dll::TeamSelectButton::TeamSelectButton_StartPlaying
               (TeamSelectButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IPlayModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Inequality_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FirstTimePressPlayController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__FirstTimePressPlayController->static_fields->haveBeenPressed == 0) {
    FirstTimePressPlayController::FirstTimePressPlayController_OnFirstTimePlayIsPressed
              ((MethodInfo *)0x0);
  }
  player = (ILockCursorManager__Class *)(ulonglong)bRam_?;
  if (bRam_? == 0) {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    player = (ILockCursorManager__Class *)CONCAT71((int7)((ulonglong)player >> 8),1);
    bRam_? = 1;
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__ILockCursorManager);
      LOCK();
      UNLOCK();
      player = (ILockCursorManager__Class *)(ulonglong)bRam_?;
      cRam_? = '\x01';
    }
    if ((char)player == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      bRam_? = 1;
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
      pMVar1 = MVGameControllerDesktop::MVGameControllerDesktop_get_Instance((MethodInfo *)0x0);
      if ((pMVar1 == (MVGameControllerDesktop *)0x0) ||
         (in_R8 = (MethodInfo *)(pMVar1->fields).lockCursorManager, in_R8 == (MethodInfo *)0x0))
      goto code_?;
      player = TypeInfo__ILockCursorManager;
      FUN_?();
    }
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)player,in_R8);
    if (((extraout_RAX == 0) || (*(longlong *)(extraout_RAX + 200) == 0)) ||
       (MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)player,in_R8),
       extraout_RAX_00 == 0)) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((*(longlong *)(extraout_RAX_00 + 0x90) == 0) ||
       (this_00 = *(Dictionary_2_System_Int32Enum_System_Int32Enum_ **)
                   (*(longlong *)(extraout_RAX_00 + 0x90) + 0x10),
       this_00 == (Dictionary_2_System_Int32Enum_System_Int32Enum_ *)0x0))
    goto code_?;
    method_00 = 
    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
    ;
    IVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Int32Enum]::Dictionary_2_System_Int32Enum_System_Int32Enum__get_Item
                      (this_00,0,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                      );
    player_00 = (IPlayModeUI__Class *)(ulonglong)IVar2;
    bVar3 = FUN_?();
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    method_00 = (MethodInfo *)
                TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
    if (method_00 == (MethodInfo *)0x0) goto code_?;
    player_00 = TypeInfo__IPlayModeUI;
    FUN_?();
    pSVar4 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                       ((MethodInfo *)0x0);
    if ((pSVar4 == (SpawnRoleDataMediator *)0x0) ||
       (pSVar5 = (pSVar4->fields).SpawnRoleModeTypeWrapper,
       pSVar5 == (SpawnRoleModeTypeWrapper *)0x0)) goto code_?;
    if (cRam_? == '\0') {
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pSVar6 = (pSVar5->fields).spawnRoleType;
    if ((pSVar6 == (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) ||
       (pSVar7 = (pSVar6->fields).subscribableVariable,
       pSVar7 == (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0))
    goto code_?;
    bVar3 = (byte)(pSVar7->fields)._.value & 4;
  }
  if (bVar3 != 0) {
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)player_00,method_00);
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)player_00,method_00);
    if ((this_02 == (MVLocalPlayer *)0x0) ||
       (existingAvatarWoId =
             MVLocalPlayer::MVLocalPlayer_get_DefaultSpawnRoleId(this_02,(MethodInfo *)0x0),
       this_01 == (MVLocalPlayer *)0x0)) {
code_?:
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    MVLocalPlayer::MVLocalPlayer_SetActiveSpawnRole(this_01,existingAvatarWoId,(MethodInfo *)0x0);
  }
  return;
}


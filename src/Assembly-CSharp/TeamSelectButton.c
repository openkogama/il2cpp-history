
/* Void Initialize(TeamData, UnityAction`1[MV.WorldObject.MVTeam]) */

void Assembly-CSharp.dll::TeamSelectButton::TeamSelectButton_Initialize
               (TeamSelectButton *this,TeamData *teamData,
               UnityAction_1_MV_WorldObject_MVTeam_ *OnTeamSelected,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa4;
  puVar5 = &stack0xffffffa4;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVPlayer>__get_Value__
                   );
    func_?(&TypeInfo__Styles);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  ppTVar6 = &(this->fields).teamData;
  *ppTVar6 = teamData;
  func_?(ppTVar6,teamData);
  ppUVar7 = &(this->fields).OnTeamSelected;
  *ppUVar7 = OnTeamSelected;
  func_?(ppUVar7,OnTeamSelected);
  pIVar8 = (this->fields).buttonImage;
  if (teamData != (TeamData *)0x0) {
    team = (teamData->fields).team;
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Styles);
    }
    pCVar9 = Styles::Styles_GetTeamColor((Color *)(auStack_10 + 8),team,0,(MethodInfo *)0x0);
    if (pIVar8 != (Image *)0x0) {
      DStack_11._dictionary =
           (Dictionary_2_System_UInt32_System_Object_ *)
           (pIVar8->klass->vtable).get_raycastTarget.methodPtr;
      (*(code *)(pIVar8->klass->vtable).set_color.method)(pIVar8,pCVar9->r);
      pTVar12 = (this->fields).teamName;
      if (pTVar12 != (Text *)0x0) {
        (*(code *)(pTVar12->klass->vtable).set_text.method)
                  (pTVar12,(teamData->fields).representedName,
                   (pTVar12->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
        pTVar12 = (this->fields).playerCountText;
        pMVar13 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar13 != (MVNetworkGame *)0x0) &&
           (this_00 = (pMVar13->fields).teamManager, this_00 != (MVTeamManager *)0x0)) {
          IStack_14.m_value =
               MVTeamManager::MVTeamManager_GetNoOfPlayersInTeam
                         (this_00,(teamData->fields).team,(MethodInfo *)0x0);
          pSVar15 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_14,(MethodInfo *)0x0);
          if (pTVar12 != (Text *)0x0) {
            method_00 = (MethodInfo *)&UNK_?;
            (*(code *)(pTVar12->klass->vtable).set_text.method)
                      (pTVar12,pSVar15,
                       (pTVar12->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
            pMVar13 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar13 != (MVNetworkGame *)0x0) &&
               (this_01 = (pMVar13->fields)._Friends_k__BackingField, this_01 != (FriendList *)0x0))
            {
              this_03 = (Dictionary_2_System_UInt32_System_Object_ *)
                        FriendList::FriendList_GetOnlineFriends(this_01,(MethodInfo *)0x0);
              IStack_16.m_value = 0;
              if (this_03 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
                pDVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          UInt32,System::Object]::
                          Dictionary_2_System_UInt32_System_Object__GetEnumerator
                                    ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_
                                      *)auStack_10,this_03,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__GetEnumerator__
                                    );
                DStack_11._dictionary = pDVar17->_dictionary;
                DStack_11._version = pDVar17->_version;
                DStack_11._index = pDVar17->_index;
                DStack_11._current.key = (pDVar17->_current).key;
                DStack_11._16_8_ = *(undefined8 *)&(pDVar17->_current).value;
                pOStack_18 = (Object *)0x0;
                uStack_1 = 1;
                pDStack_19 = &DStack_11;
                while( true ) {
                  bVar20 = mscorlib.dll::System::Collections::Generic::
                          Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                          Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                                    (&DStack_11,
                                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                                    );
                  if (bVar20 == 0) break;
                  if (DStack_11._current.value == (Object *)0x0) goto code_?;
                  if (DStack_11._current.value[9].klass == (Object__Class *)(teamData->fields).team)
                  {
                    IStack_16.m_value = IStack_16.m_value + 1;
                  }
                }
                uStack_1 = 0xffffffff;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                          ((Object *)&DStack_11,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                           ,method_00);
                uStack_1 = 0xffffffff;
                pTVar12 = (this->fields).friendCountText;
                pSVar15 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_16,(MethodInfo *)0x0);
                if (pTVar12 != (Text *)0x0) {
                  (*(code *)(pTVar12->klass->vtable).set_text.method)
                            (pTVar12,pSVar15,
                             (pTVar12->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
                  if (IStack_16.m_value == 0) {
                    this_02 = (this->fields).friendIcon;
                    if (this_02 == (GameObject *)0x0) goto code_?;
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (this_02,0,(MethodInfo *)0x0);
                  }
                  *unaff_FS_OFFSET = uStack_3;
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
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void OnPointerDown(PointerEventData) */

void Assembly-CSharp.dll::TeamSelectButton::TeamSelectButton_OnPointerDown
               (TeamSelectButton *this,PointerEventData *eventData,MethodInfo *method)

{
  if (eventData != (PointerEventData *)0x0) {
    if ((eventData->fields)._button_k__BackingField != 0) {
      return;
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar1 != (MVNetworkGame *)0x0) &&
        (pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
        pMVar2 != (MVLocalPlayer *)0x0)) && (*(int *)(unaff_ESI + 0x24) != 0)) {
      if ((pMVar2->fields)._._Team_k__BackingField != *(int *)(*(int *)(unaff_ESI + 0x24) + 8)) {
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (((pMVar1 == (MVNetworkGame *)0x0) || (*(int *)(unaff_ESI + 0x24) == 0)) ||
           (this_00 = (pMVar1->fields).teamManager, this_00 == (MVTeamManager *)0x0))
        goto code_?;
        bVar3 = MVTeamManager::MVTeamManager_TeamHasSpawnRoles
                          (this_00,*(MVTeam__Enum *)(*(int *)(unaff_ESI + 0x24) + 8),
                           (MethodInfo *)0x0);
        if (bVar3 == 0) {
          this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          if ((*(int *)(unaff_ESI + 0x24) == 0) ||
             (this_02 == (MVNetworkGame_OperationRequests *)0x0)) goto code_?;
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetTeam
                    (this_02,*(MVTeam__Enum *)(*(int *)(unaff_ESI + 0x24) + 8),(MethodInfo *)0x0);
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
          this_01 = (pMVar1->fields).gameStatCounterManager;
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar1 == (MVNetworkGame *)0x0) ||
             (pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
             pMVar2 == (MVLocalPlayer *)0x0)) goto code_?;
          actorNr = (pMVar2->fields)._._ActorNr_k__BackingField;
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar1 == (MVNetworkGame *)0x0) ||
             ((pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
              pMVar2 == (MVLocalPlayer *)0x0 || (this_01 == (GameStatCounterManager *)0x0))))
          goto code_?;
          MVWorldObject.dll::GameStatCounterManager::
          GameStatCounterManager_RemoveTeamScoreOnActorLeave
                    (this_01,actorNr,(pMVar2->fields)._._Team_k__BackingField,(MethodInfo *)0x0);
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar1 == (MVNetworkGame *)0x0) ||
             (pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
             pMVar2 == (MVLocalPlayer *)0x0)) goto code_?;
          mscorlib.dll::System::Collections::Generic::Stack`1[T]+Enumerator[System::Dynamic::
          BindingRestrictions+TestBuilder+AndNode]::
          Stack_1_T_Enumerator_System_Dynamic_BindingRestrictions_TestBuilder_AndNode__Dispose
                    ((Stack_1_T_Enumerator_System_Dynamic_BindingRestrictions_TestBuilder_AndNode_ *
                     )pMVar2,(MethodInfo *)0x0);
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
          pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
          if ((*(int *)(unaff_ESI + 0x24) == 0) || (pMVar2 == (MVLocalPlayer *)0x0))
          goto code_?;
          (pMVar2->fields)._._Team_k__BackingField = *(int32_t *)(*(int *)(unaff_ESI + 0x24) + 8);
        }
      }
      if ((*(int *)(unaff_ESI + 0x24) != 0) && (iVar4 = *(int *)(unaff_ESI + 0x28), iVar4 != 0)) {
        (**(code **)(iVar4 + 0xc))
                  (*(undefined4 *)(iVar4 + 0x20),*(undefined4 *)(*(int *)(unaff_ESI + 0x24) + 8));
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void StartPlaying() */

void Assembly-CSharp.dll::TeamSelectButton::TeamSelectButton_StartPlaying
               (TeamSelectButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IPlayModeUI);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Inequality_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__int_
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__FirstTimePressPlayController);
    cRam_? = '\x01';
  }
  if (TypeInfo__FirstTimePressPlayController->static_fields->haveBeenPressed == 0) {
    FirstTimePressPlayController::FirstTimePressPlayController_OnFirstTimePlayIsPressed
              ((MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    MVGameControllerDesktop::MVGameControllerDesktop_CursorLock(1,0,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if ((pMVar1 == (MVLocalPlayer *)0x0) ||
       (pSVar2 = (pMVar1->fields).spawnRoleDataMediator, pSVar2 == (SpawnRoleDataMediator *)0x0))
    goto code_?;
    a = (SpawnRoleVariable_1_System_Int32_ *)(pSVar2->fields).woId;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (pMVar1 == (MVLocalPlayer *)0x0) goto code_?;
    iVar3 = MVLocalPlayer::MVLocalPlayer_get_DefaultSpawnRoleId(pMVar1,(MethodInfo *)0x0);
    bVar4 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
            SpawnRoleVariable`1[System::Int32]::SpawnRoleVariable_1_System_Int32__op_Inequality_1
                      (a,iVar3,
                       MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Inequality_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__int_
                      );
  }
  else {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField ==
        (IPlayModeUI *)0x0) goto code_?;
    func_?();
    pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                       ((MethodInfo *)0x0);
    if ((pSVar2 == (SpawnRoleDataMediator *)0x0) ||
       (this_00 = (pSVar2->fields).SpawnRoleModeTypeWrapper,
       this_00 == (SpawnRoleModeTypeWrapper *)0x0)) goto code_?;
    bVar4 = SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_IsInMode
                      (this_00,SpawnRoleModeType__Enum_Hidden,(MethodInfo *)0x0);
  }
  if (bVar4 == 0) {
    return;
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  this_01 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if ((this_01 != (MVLocalPlayer *)0x0) &&
     (iVar3 = MVLocalPlayer::MVLocalPlayer_get_DefaultSpawnRoleId(this_01,(MethodInfo *)0x0),
     pMVar1 != (MVLocalPlayer *)0x0)) {
    MVLocalPlayer::MVLocalPlayer_SetActiveSpawnRole(pMVar1,iVar3,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


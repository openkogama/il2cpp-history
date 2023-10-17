
/* MVCheckpoint GetCheckpoint() */

MVCheckpoint *
Assembly-CSharp.dll::MVPlayer::MVPlayer_GetCheckpoint(MVPlayer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVCheckpoint);
    cRam_? = '\x01';
  }
  if ((this->fields).checkpointWOID != -1) {
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar1 == (MVWorldObjectClientManager *)0x0) {
code_?:
      func_?();
      pcVar2 = (code *)swi(3);
      pMVar3 = (MVCheckpoint *)(*pcVar2)();
      return pMVar3;
    }
    bVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_IsType
                      (pMVar1,(this->fields).checkpointWOID,WorldObjectType__Enum_CheckPoint,
                       (MethodInfo *)0x0);
    if (bVar4 == 0) {
      (this->fields).checkpointWOID = -1;
    }
    else {
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar1 == (MVWorldObjectClientManager *)0x0) goto code_?;
      pMVar3 = (MVCheckpoint *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (pMVar1,(this->fields).checkpointWOID,(MethodInfo *)0x0);
      if (pMVar3 != (MVCheckpoint *)0x0) {
        if (((TypeInfo__MVCheckpoint->_1).typeHierarchyDepth <=
             (pMVar3->klass->_1).typeHierarchyDepth) &&
           ((MVCheckpoint__Class *)
            (pMVar3->klass->_1).typeHierarchy[(TypeInfo__MVCheckpoint->_1).typeHierarchyDepth - 1]
            == TypeInfo__MVCheckpoint)) {
          return pMVar3;
        }
        return (MVCheckpoint *)0x0;
      }
    }
  }
  return (MVCheckpoint *)0x0;
}


/* Int32 GetGameStat(GameStatCounterType) */

int32_t Assembly-CSharp.dll::MVPlayer::MVPlayer_GetGameStat
                  (MVPlayer *this,GameStatCounterType__Enum gameStatCounterType,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    this_00 = (pMVar1->fields).gameStatCounterManager;
    if (this_00 != (GameStatCounterManager *)0x0) {
      iVar2 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                        (this_00,gameStatCounterType,(this->fields)._Team_k__BackingField,
                         (this->fields)._ActorNr_k__BackingField,(MethodInfo *)0x0);
      return iVar2;
    }
  }
  uVar3 = func_?(&stack0xfffffff4);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  iVar2 = (*pcVar4)();
  return iVar2;
}


/* Boolean IsOnSameTeam(MVPlayer) */

bool Assembly-CSharp.dll::MVPlayer::MVPlayer_IsOnSameTeam
               (MVPlayer *this,MVPlayer *other,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields).teamManager, this_00 != (MVTeamManager *)0x0)) {
    iVar2 = MVTeamManager::MVTeamManager_TeamCount(this_00,(MethodInfo *)0x0);
    if (iVar2 < 2) {
      return 0;
    }
    if (other != (MVPlayer *)0x0) {
      return (this->fields)._Team_k__BackingField == (other->fields)._Team_k__BackingField;
    }
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean IsOnSameTeam(MVWorldObjectClient) */

bool Assembly-CSharp.dll::MVPlayer::MVPlayer_IsOnSameTeam_1
               (MVPlayer *this,MVWorldObjectClient *wo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ITeamInteractorNPC);
    cRam_? = '\x01';
  }
  pOStack_1 = (Object *)0x0;
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar2->fields).teamManager, this_00 != (MVTeamManager *)0x0)) {
    iVar3 = MVTeamManager::MVTeamManager_TeamCount(this_00,(MethodInfo *)0x0);
    if (iVar3 < 2) {
      return 0;
    }
    piVar4 = (int *)func_?(wo,TypeInfo__ITeamInteractorNPC);
    if (wo != (MVWorldObjectClient *)0x0) {
      if (((wo->fields)._.ownerActorNr == 0) && (piVar4 != (int *)0x0)) {
        uVar5 = 0;
        iVar3 = (this->fields)._Team_k__BackingField;
        uVar6 = *(ushort *)(*piVar4 + 0xb2);
        if (uVar6 != 0) {
          do {
            if (*(ITeamInteractorNPC__Class **)(*(int *)(*piVar4 + 0x58) + (uint)uVar5 * 8) ==
                TypeInfo__ITeamInteractorNPC) {
              puVar7 = (undefined4 *)
                       (*(int *)(*(int *)(*piVar4 + 0x58) + 4 + (uint)uVar5 * 8) * 8 + 0xbc +
                       *piVar4);
              goto code_?;
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar6);
        }
        puVar7 = (undefined4 *)func_?(piVar4,TypeInfo__ITeamInteractorNPC,0);
code_?:
        bVar8 = (*(code *)*puVar7)(piVar4,iVar3,puVar7[1]);
        return bVar8;
      }
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar2 != (MVNetworkGame *)0x0) {
        pMVar9 = (pMVar2->fields).playerContainer;
        key = (Object *)(wo->fields)._.ownerActorNr;
        if (pMVar9 != (MVPlayerContainer *)0x0) {
          if (cRam_? == '\0') {
            func_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__TryGetValue_int__MVPlayer__
                           );
            cRam_? = '\x01';
          }
          this_01 = (Dictionary_2_System_Object_System_Object_ *)(pMVar9->fields).players;
          if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                              (this_01,key,&pOStack_1,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__TryGetValue_int__MVPlayer__
                              );
            if (bVar8 == 0) {
              return (this->fields)._ActorNr_k__BackingField == (wo->fields)._.ownerActorNr;
            }
            if (pOStack_1 != (Object *)0x0) {
              return (Object__Class *)(this->fields)._Team_k__BackingField == pOStack_1[9].klass;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  bVar8 = (*pcVar10)();
  return bVar8;
}


/* Boolean IsOnTeam(MVTeam) */

bool Assembly-CSharp.dll::MVPlayer::MVPlayer_IsOnTeam
               (MVPlayer *this,MVTeam__Enum otherTeam,MethodInfo *method)

{
  return (this->fields)._Team_k__BackingField == otherTeam;
}


/* Void NotifyAvatarCreated(Int32) */

void Assembly-CSharp.dll::MVPlayer::MVPlayer_NotifyAvatarCreated
               (MVPlayer *this,int32_t id,MethodInfo *method)

{
  pSVar1 = (this->fields).spawnRolesManager;
  pSStack_2 = pSVar1;
  if ((pSVar1 != (SpawnRolesManager *)0x0) &&
     (pSVar3 = (pSVar1->fields).spawnRolesRuntimeData, pSVar3 != (SpawnRolesRuntimeData *)0x0)) {
    if (id != (pSVar3->fields).activeSpawnRole) {
      return;
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((this_00 != (MVNetworkGame *)0x0) &&
        (this_01 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                             (this_00,(MethodInfo *)0x0),
        this_01 != (MVWorldObjectClientManager *)0x0)) &&
       (pIVar4 = (ISpawnRoleChangeHandler__Class *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_01,id,(MethodInfo *)0x0),
       pIVar4 != (ISpawnRoleChangeHandler__Class *)0x0)) {
      pMVar5 = (MVWorldObject__Class *)(pIVar4->_0).image;
      pMStack_6 = (MethodInfo *)&pIStack_7;
      pMStack_8 = (pMVar5->vtable).get_Position.method;
      pIStack_7 = pIVar4;
      puVar9 = (undefined8 *)(*(pMVar5->vtable).get_Position.methodPtr)();
      uStack_10 = *puVar9;
      uStack_11 = *(undefined4 *)(puVar9 + 1);
      pMVar5 = (MVWorldObject__Class *)(pIVar4->_0).image;
      piVar12 = (int *)(*(pMVar5->vtable).get_Rotation.methodPtr)
                                (&pMStack_6,pIVar4,(pMVar5->vtable).get_Rotation.method);
      pMStack_6 = (MethodInfo *)*piVar12;
      pIStack_7 = (ISpawnRoleChangeHandler__Class *)piVar12[1];
      pIStack_13 = (ISpawnRoleChangeHandler__Class *)piVar12[3];
      if (cRam_? == '\0') {
        pMStack_8 = (MethodInfo *)&TypeInfo__ISpawnRoleChangeHandler;
        func_?();
        cRam_? = '\x01';
      }
      pSVar3 = (pSVar1->fields).spawnRolesRuntimeData;
      if (pSVar3 != (SpawnRolesRuntimeData *)0x0) {
        iStack_14 = (pSVar3->fields).activeSpawnRole;
        (((pSVar1->fields).spawnRolesRuntimeData)->fields).activeSpawnRole = id;
        pMStack_15 = (MethodInfo *)(pSVar1->fields).spawnRoleChangeHandler;
        if (pMStack_15 != (MethodInfo *)0x0) {
          pIVar4 = (ISpawnRoleChangeHandler__Class *)pMStack_15->methodPointer;
          uVar16 = 0;
          uStack_17 = 0;
          uVar18 = (pIVar4->_1).interface_offsets_count;
          if (uVar18 != 0) {
            do {
              pSVar1 = pSStack_2;
              if (pIVar4->interfaceOffsets[uVar16].interfaceType ==
                  (Il2CppClass *)TypeInfo__ISpawnRoleChangeHandler) {
                pVVar19 = &(&pIVar4->vtable)[pIVar4->interfaceOffsets[uVar16].offset].
                           ActivateSpawnRole;
                goto code_?;
              }
              uVar16 = uVar16 + 1;
            } while (uVar16 < uVar18);
          }
          pMStack_8 = (MethodInfo *)0x0;
          pIStack_7 = TypeInfo__ISpawnRoleChangeHandler;
          pMStack_6 = pMStack_15;
          pVVar19 = (VirtualInvokeData *)func_?();
code_?:
          pIVar4 = pIStack_7;
          pMVar20 = pMStack_6;
          pMStack_6 = pVVar19->method;
          pIStack_7 = pIStack_13;
          pMStack_8 = pMStack_6;
          (*pVVar19->methodPtr)(pMStack_15,iStack_14,id,uStack_10,uStack_11,pMVar20,pIVar4);
          if ((pSVar1->fields).OnSpawnRoleActivated == (Action_1_Int32_ *)0x0) {
            return;
          }
          pAVar21 = (pSVar1->fields).OnSpawnRoleActivated;
          pMStack_8 = (pAVar21->fields)._._.method;
          pIStack_7 = (ISpawnRoleChangeHandler__Class *)id;
          pMStack_6 = (pAVar21->fields)._._.method_code;
          (*(pAVar21->fields)._._.invoke_impl)();
          return;
        }
      }
    }
  }
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Void SetCheckpoint(Int32) */

void Assembly-CSharp.dll::MVPlayer::MVPlayer_SetCheckpoint
               (MVPlayer *this,int32_t woid,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__NotificationController);
    func_?(&StringLiteral_Reached_new_checkpoint_);
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    bVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_IsType
                      (this_00,woid,WorldObjectType__Enum_CheckPoint,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      (this->fields).checkpointWOID = woid;
      if ((this->fields).OnCheckpointReached != (UnityAction *)0x0) {
        (*(((this->fields).OnCheckpointReached)->fields)._._.invoke_impl)();
      }
      text = TM::TM__(StringLiteral_Reached_new_checkpoint_,(MethodInfo *)0x0);
      if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      NotificationController::NotificationController_PushNotification
                (text,(Sprite *)0x0,5,(MethodInfo *)0x0);
    }
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetReady() */

void Assembly-CSharp.dll::MVPlayer::MVPlayer_SetReady(MVPlayer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Player_already_ready);
    cRam_? = '\x01';
  }
  if ((this->fields).playerState == 1) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_Player_already_ready,(MethodInfo *)0x0);
    if ((this->fields).playerState == 1) {
      return;
    }
  }
  (this->fields).playerState = 1;
  if ((this->fields).OnResume != (UnityAction *)0x0) {
    pUVar1 = (this->fields).OnResume;
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,(pUVar1->fields)._._.method);
  }
  return;
}


/* Void SetupSpawnRoleManager(ISpawnRoleChangeHandler, SpawnRolesRuntimeData) */

void Assembly-CSharp.dll::MVPlayer::MVPlayer_SetupSpawnRoleManager
               (MVPlayer *this,ISpawnRoleChangeHandler *spawnRoleChangeHandler,
               SpawnRolesRuntimeData *spawnRolesRuntimeData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SpawnRolesManager);
    cRam_? = '\x01';
  }
  value = (SpawnRolesManager *)func_?(TypeInfo__SpawnRolesManager);
  if (value != (SpawnRolesManager *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    (value->fields).spawnRolesRuntimeData = spawnRolesRuntimeData;
    func_?(&value->fields,spawnRolesRuntimeData);
    (value->fields).spawnRoleChangeHandler = spawnRoleChangeHandler;
    func_?(&(value->fields).spawnRoleChangeHandler,spawnRoleChangeHandler);
    (this->fields).spawnRolesManager = value;
    func_?(&(this->fields).spawnRolesManager,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* MVPlayer(Int32, Int32, String, BuildTarget, UserProfileData, Boolean, Boolean) */

void Assembly-CSharp.dll::MVPlayer::MVPlayer__ctor
               (MVPlayer *this,int32_t actorNumber,int32_t profileID,String *regionCode,
               BuildTarget__Enum buildTarget,UserProfileData *userProfileData,bool isReady,
               bool observer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__Subscription__SubscriptionRulesWrapper);
    func_?(&StringLiteral_Tourist);
    cRam_? = '\x01';
  }
  (this->fields).checkpointWOID = -1;
  (this->fields).level = 1;
  (this->fields)._Team_k__BackingField = 5;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields)._ActorNr_k__BackingField = actorNumber;
  (this->fields)._BuildTarget_k__BackingField = (undefined1)buildTarget;
  (this->fields)._ProfileID_k__BackingField = profileID;
  (this->fields)._UserProfileData_k__BackingField = userProfileData;
  func_?(&(this->fields)._UserProfileData_k__BackingField,userProfileData);
  if ((userProfileData != (UserProfileData *)0x0) &&
     (pSVar1 = (userProfileData->fields).SubscriptionData, pSVar1 != (SubscriptionData *)0x0)) {
    subscriptionType = (pSVar1->fields).SubscriptionType;
    this_01 = (SubscriptionRulesWrapper *)
              func_?(TypeInfo__MV__WorldObject__Subscription__SubscriptionRulesWrapper);
    if (this_01 != (SubscriptionRulesWrapper *)0x0) {
      MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
      SubscriptionRulesWrapper__ctor(this_01,subscriptionType,(MethodInfo *)0x0);
      (this->fields)._SubscriptionRules_k__BackingField = this_01;
      func_?(&(this->fields)._SubscriptionRules_k__BackingField,this_01);
      if (profileID < 1) {
        pSVar2 = TM::TM__(StringLiteral_Tourist,(MethodInfo *)0x0);
        pUVar3 = (this->fields)._UserProfileData_k__BackingField;
        if ((pUVar3 == (UserProfileData *)0x0) ||
           (this_00 = (pUVar3->fields).UserName, this_00 == (String *)0x0)) goto code_?;
        pSVar2 = mscorlib.dll::System::String::String_Replace_1
                           (this_00,StringLiteral_Tourist,pSVar2,(MethodInfo *)0x0);
        (pUVar3->fields).UserName = pSVar2;
        func_?(&(pUVar3->fields).UserName,pSVar2);
      }
      (this->fields)._RegionCode_k__BackingField = regionCode;
      func_?(&(this->fields)._RegionCode_k__BackingField,regionCode);
      if (isReady == 0) {
        if (((observer != 0) && ((this->fields).playerState != 3)) &&
           ((this->fields).playerState = 3, (this->fields).OnObserve != (UnityAction *)0x0)) {
          pUVar4 = (this->fields).OnObserve;
          (*(pUVar4->fields)._._.invoke_impl)
                    ((pUVar4->fields)._._.method_code,(pUVar4->fields)._._.method);
        }
      }
      else if (((this->fields).playerState != 1) &&
              ((this->fields).playerState = 1, (this->fields).OnResume != (UnityAction *)0x0)) {
        pUVar4 = (this->fields).OnResume;
        (*(pUVar4->fields)._._.invoke_impl)
                  ((pUVar4->fields)._._.method_code,(pUVar4->fields)._._.method);
        return;
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* MVPlayer(Int32, Int32, Int32, String, BuildTarget, UserProfileData, Boolean, Boolean,
   PlayerPlanetDataRemote) */

void Assembly-CSharp.dll::MVPlayer::MVPlayer__ctor_1
               (MVPlayer *this,int32_t actorNumber,int32_t profileID,int32_t level,
               String *regionCode,BuildTarget__Enum buildTarget,UserProfileData *userProfileData,
               bool isReady,bool observer,PlayerPlanetDataRemote *playerPlanetDataRemote,
               MethodInfo *method)

{
  MVPlayer__ctor(this,actorNumber,profileID,regionCode,buildTarget,userProfileData,isReady,observer,
                 (MethodInfo *)0x0);
  iVar1 = (this->fields).level;
  (this->fields).level = level;
  if ((iVar1 != level) && ((this->fields).OnLevelChanged != (UnityAction_1_System_Int32_ *)0x0)) {
    (*(((this->fields).OnLevelChanged)->fields)._._.invoke_impl)();
  }
  (this->fields).playerPlanetDataRemote = playerPlanetDataRemote;
  func_?();
  return;
}


/* Boolean get_IsPlayerStateInWorld() */

bool Assembly-CSharp.dll::MVPlayer::MVPlayer_get_IsPlayerStateInWorld
               (MVPlayer *this,MethodInfo *method)

{
  if ((this->fields).playerState == 1) {
    return 1;
  }
  return (this->fields).playerState == 2;
}


/* Boolean get_IsReady() */

bool Assembly-CSharp.dll::MVPlayer::MVPlayer_get_IsReady(MVPlayer *this,MethodInfo *method)

{
  return (this->fields).playerState == 1;
}


/* Boolean get_IsSubscriber() */

bool Assembly-CSharp.dll::MVPlayer::MVPlayer_get_IsSubscriber(MVPlayer *this,MethodInfo *method)

{
  this_00 = (this->fields)._SubscriptionRules_k__BackingField;
  if (this_00 != (SubscriptionRulesWrapper *)0x0) {
    bVar1 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
            SubscriptionRulesWrapper_HasBenefit
                      (this_00,SubscriptionBenefit__Enum_XPBoost,(MethodInfo *)0x0);
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Boolean get_IsTourist() */

bool Assembly-CSharp.dll::MVPlayer::MVPlayer_get_IsTourist(MVPlayer *this,MethodInfo *method)

{
  return (this->fields)._ProfileID_k__BackingField == 0;
}


/* Int32 get_WoId() */

int32_t Assembly-CSharp.dll::MVPlayer::MVPlayer_get_WoId(MVPlayer *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pSVar2 = (this->fields).spawnRolesManager;
  if ((pSVar2 != (SpawnRolesManager *)0x0) &&
     (pSVar3 = (pSVar2->fields).spawnRolesRuntimeData, pSVar3 != (SpawnRolesRuntimeData *)0x0)) {
    return (pSVar3->fields).activeSpawnRole;
  }
  uVar4 = func_?(auStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  iVar7 = (*pcVar6)();
  return iVar7;
}


/* Void set_Level(Int32) */

void Assembly-CSharp.dll::MVPlayer::MVPlayer_set_Level
               (MVPlayer *this,int32_t value,MethodInfo *method)

{
  iVar1 = (this->fields).level;
  (this->fields).level = value;
  if ((iVar1 != value) && ((this->fields).OnLevelChanged != (UnityAction_1_System_Int32_ *)0x0)) {
    pUVar2 = (this->fields).OnLevelChanged;
    (*(pUVar2->fields)._._.invoke_impl)
              ((pUVar2->fields)._._.method_code,value,(pUVar2->fields)._._.method);
  }
  return;
}


/* Void set_PlayerState(PlayerGameState) */

void Assembly-CSharp.dll::MVPlayer::MVPlayer_set_PlayerState
               (MVPlayer *this,PlayerGameState__Enum value,MethodInfo *method)

{
  if ((undefined1)value != (this->fields).playerState) {
    (this->fields).playerState = (undefined1)value;
    if ((undefined1)value == PlayerGameState__Enum_Paused) {
      if ((this->fields).OnPause != (UnityAction *)0x0) {
        pUVar1 = (this->fields).OnPause;
        (*(pUVar1->fields)._._.invoke_impl)
                  ((pUVar1->fields)._._.method_code,(pUVar1->fields)._._.method);
        return;
      }
    }
    else if ((undefined1)value == PlayerGameState__Enum_Normal) {
      if ((this->fields).OnResume != (UnityAction *)0x0) {
        pUVar1 = (this->fields).OnResume;
        (*(pUVar1->fields)._._.invoke_impl)
                  ((pUVar1->fields)._._.method_code,(pUVar1->fields)._._.method);
        return;
      }
    }
    else if (((undefined1)value == PlayerGameState__Enum_Observer) &&
            ((this->fields).OnObserve != (UnityAction *)0x0)) {
      pUVar1 = (this->fields).OnObserve;
      (*(pUVar1->fields)._._.invoke_impl)
                ((pUVar1->fields)._._.method_code,(pUVar1->fields)._._.method);
    }
  }
  return;
}


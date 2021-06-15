
/* MVCheckpoint GetCheckpoint() */

MVCheckpoint *
Assembly-CSharp.dll::MVPlayer::MVPlayer_GetCheckpoint(MVPlayer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).checkpointWOID == -1) {
    return (MVCheckpoint *)0x0;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    bVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_IsType
                      (pMVar1,(this->fields).checkpointWOID,WorldObjectType__Enum_CheckPoint,
                       (MethodInfo *)0x0);
    if (bVar2 == 0) {
      (this->fields).checkpointWOID = -1;
      return (MVCheckpoint *)0x0;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                (pMVar1,(this->fields).checkpointWOID,(MethodInfo *)0x0);
      pMVar3 = (MVCheckpoint *)func_?();
      return pMVar3;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pMVar3 = (MVCheckpoint *)(*pcVar4)();
  return pMVar3;
}


/* Int32 GetGameStat(GameStatCounterType) */

int32_t Assembly-CSharp.dll::MVPlayer::MVPlayer_GetGameStat
                  (MVPlayer *this,GameStatCounterType__Enum gameStatCounterType,MethodInfo *method)

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
    this_01 = (GameStatCounterManager *)
              DayNightCycle::DayNightCycle_get_CurrentStarsParam
                        ((DayNightCycle *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameStatCounterManager *)0x0) {
      iVar1 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                        (this_01,gameStatCounterType,(this->fields).team,
                         (this->fields)._ActorNr_k__BackingField,(MethodInfo *)0x0);
      return iVar1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  iVar1 = (*pcVar2)();
  return iVar1;
}


/* Boolean IsOnSameTeam(MVPlayer) */

bool Assembly-CSharp.dll::MVPlayer::MVPlayer_IsOnSameTeam
               (MVPlayer *this,MVPlayer *other,MethodInfo *method)

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
      iVar1 = MVTeamManager::MVTeamManager_TeamCount((MVTeamManager *)this_01,(MethodInfo *)0x0);
      if (iVar1 < 2) {
        return 0;
      }
      if (other != (MVPlayer *)0x0) {
        return iRam_? == (other->fields).team;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean IsOnSameTeam(MVWorldObjectClient) */

bool Assembly-CSharp.dll::MVPlayer::MVPlayer_IsOnSameTeam_1
               (MVPlayer *this,MVWorldObjectClient *wo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIStack_1 = (ITeamInteractorNPC__Class *)0x0;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    this_02 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                        ((DayNightCycle *)this_01,(MethodInfo *)0x0);
    if (this_02 != (SkyParam *)0x0) {
      iVar2 = MVTeamManager::MVTeamManager_TeamCount((MVTeamManager *)this_02,(MethodInfo *)0x0);
      if (iVar2 < 2) {
        return 0;
      }
      pIStack_1 = TypeInfo__ITeamInteractorNPC;
      piVar3 = (int *)func_?(wo);
      if (wo != (MVWorldObjectClient *)0x0) {
        pOVar4 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                 TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                 TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                           ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)wo,(MethodInfo *)0x0);
        if ((pOVar4 == (Object *)0x0) && (piVar3 != (int *)0x0)) {
          iVar2 = (this->fields).team;
          uVar5 = *(ushort *)(*piVar3 + 0xb6);
          uVar6 = 0;
          if (uVar5 != 0) {
            iVar7 = *(int *)(*piVar3 + 0x58);
            do {
              if (*(ITeamInteractorNPC__Class **)(iVar7 + (uint)uVar6 * 8) ==
                  TypeInfo__ITeamInteractorNPC) {
                puVar8 = (undefined4 *)
                         (*piVar3 + (*(int *)(iVar7 + 4 + (uint)uVar6 * 8) + 0x18) * 8);
                goto code_?;
              }
              uVar6 = uVar6 + 1;
            } while (uVar6 < uVar5);
          }
          puVar8 = (undefined4 *)func_?(piVar3,TypeInfo__ITeamInteractorNPC,0);
code_?:
          bVar9 = (*(code *)*puVar8)(piVar3,iVar2,puVar8[1]);
          return bVar9;
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        this_03 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0)
        ;
        if (this_03 != (MVAvatar *)0x0) {
          pMVar10 = MVAvatar::MVAvatar_get_Shield(this_03,(MethodInfo *)0x0);
          pOVar4 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                   TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                   TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                             ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)wo,(MethodInfo *)0x0)
          ;
          if (pMVar10 != (MVRuntimeDataVariableClampedFloat *)0x0) {
            if (cRam_? == '\0') {
              func_?(_UNK_?);
              cRam_? = '\x01';
            }
            this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)(pMVar10->fields)._._.variableId;
            if (this_00 !=
                (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)0x0) {
              bVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                      Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__TryGetValue
                                (this_00,(int32_t)pOVar4,(TerrainUtility_TerrainMap **)&pIStack_1,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__TryGetValue_int__MVPlayer__
                                );
              if (bVar9 == 0) {
                pOVar4 = (Object *)(this->fields)._ActorNr_k__BackingField;
                pOVar11 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                          TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                          TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                                    ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)wo,
                                     (MethodInfo *)0x0);
                return pOVar4 == pOVar11;
              }
              if (pIStack_1 != (ITeamInteractorNPC__Class *)0x0) {
                iVar7._0_2_ = (pIStack_1->_0).byval_arg.attrs;
                iVar7._2_1_ = (pIStack_1->_0).byval_arg.type;
                iVar7._3_1_ = (pIStack_1->_0).byval_arg.field_0x7;
                return (this->fields).team == iVar7;
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar12 = (code *)swi(3);
  bVar9 = (*pcVar12)();
  return bVar9;
}


/* Void NotifyAvatarCreated(Int32) */

void Assembly-CSharp.dll::MVPlayer::MVPlayer_NotifyAvatarCreated
               (MVPlayer *this,int32_t id,MethodInfo *method)

{
  pSVar1 = (this->fields).spawnRolesManager;
  if (pSVar1 == (SpawnRolesManager *)0x0) {
    pIStack_2 = (ISpawnRoleChangeHandler__Class *)0x0;
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar4 = (pSVar1->fields).spawnRolesRuntimeData;
  if (pSVar4 != (SpawnRolesRuntimeData *)0x0) {
    if (id != (pSVar4->fields).activeSpawnRole) {
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((this_01 != (MVNetworkGame *)0x0) &&
        (this_02 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                             (this_01,(MethodInfo *)0x0),
        this_02 != (MVWorldObjectClientManager *)0x0)) &&
       (pMVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_02,id,(MethodInfo *)0x0), pMVar5 != (MVWorldObject *)0x0)) {
      ppMStack_6 = &pMStack_7;
      pIStack_8 = (pMVar5->klass->vtable).set_Position.methodPtr;
      pMStack_7 = pMVar5;
      puVar9 = (undefined8 *)(*(code *)(pMVar5->klass->vtable).get_Position.method)();
      uStack_10 = *puVar9;
      puStack_11 = *(undefined **)(puVar9 + 1);
      puVar12 = (undefined4 *)
               (*(code *)(pMVar5->klass->vtable).get_Rotation.method)
                         (&ppMStack_6,pMVar5,(pMVar5->klass->vtable).set_Rotation.methodPtr);
      ppMStack_6 = (MVWorldObject **)*puVar12;
      pMStack_7 = (MVWorldObject *)puVar12[1];
      pIStack_8 = (Il2CppMethodPointer)puVar12[2];
      uStack_13 = puVar12[3];
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pSVar4 = (pSVar1->fields).spawnRolesRuntimeData;
      if (pSVar4 != (SpawnRolesRuntimeData *)0x0) {
        iStack_14 = (pSVar4->fields).activeSpawnRole;
        (pSVar4->fields).activeSpawnRole = id;
        pIVar15 = (pSVar1->fields).spawnRoleChangeHandler;
        if (pIVar15 != (ISpawnRoleChangeHandler *)0x0) {
          pIStack_2 = pIVar15->klass;
          uVar16 = 0;
          uVar17._0_1_ = (pIStack_2->_1).rank;
          uVar17._1_1_ = (pIStack_2->_1).minimumAlignment;
          if (uVar17 != 0) {
            do {
              if (pIStack_2->interfaceOffsets[uVar16].interfaceType ==
                  (Il2CppClass *)TypeInfo__ISpawnRoleChangeHandler) {
                ppMVar18 = &(&pIStack_2->vtable)[pIStack_2->interfaceOffsets[uVar16].offset].
                            ActivateSpawnRole.method;
                goto code_?;
              }
              uVar16 = uVar16 + 1;
            } while (uVar16 < uVar17);
          }
          ppMVar18 = (MethodInfo **)func_?(pIVar15,TypeInfo__ISpawnRoleChangeHandler,0);
code_?:
          (*(code *)*ppMVar18)
                    (pIVar15,iStack_14,id,uStack_10,puStack_11,ppMStack_6,pMStack_7,pIStack_8,
                     uStack_13,ppMVar18[1]);
          this_00 = (Action_1_UIPushOption_ *)(pSVar1->fields).OnSpawnRoleActivated;
          if (this_00 == (Action_1_UIPushOption_ *)0x0) {
            return;
          }
          mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                    (this_00,id,MethodInfo__System__Action<int>__Invoke_int_);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ResetCheckpoint() */

void Assembly-CSharp.dll::MVPlayer::MVPlayer_ResetCheckpoint(MVPlayer *this,MethodInfo *method)

{
  (this->fields).checkpointWOID = -1;
  return;
}


/* Void SetCheckpoint(Int32) */

void Assembly-CSharp.dll::MVPlayer::MVPlayer_SetCheckpoint
               (MVPlayer *this,int32_t woid,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_01 != (MVWorldObjectClientManager *)0x0) {
    bVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_IsType
                      (this_01,woid,WorldObjectType__Enum_CheckPoint,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      (this->fields).checkpointWOID = woid;
      this_00 = (AvatarMotor_OnActiveBounceDelegate *)(this->fields).OnCheckpointReached;
      if (this_00 != (AvatarMotor_OnActiveBounceDelegate *)0x0) {
        AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
                  (this_00,(MethodInfo *)0x0);
      }
      text = TM::TM__(StringLiteral_Reached_new_checkpoint_,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
        func_?();
      }
      NotificationController::NotificationController_PushNotification
                (text,(Sprite *)0x0,5,(MethodInfo *)0x0);
    }
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetReady() */

void Assembly-CSharp.dll::MVPlayer::MVPlayer_SetReady(MVPlayer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields)._IsReady_k__BackingField != 0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_Player_already_ready,(MethodInfo *)0x0);
  }
  (this->fields)._IsReady_k__BackingField = 1;
  return;
}


/* Void SetupSpawnRoleManager(ISpawnRoleChangeHandler, SpawnRolesRuntimeData) */

void Assembly-CSharp.dll::MVPlayer::MVPlayer_SetupSpawnRoleManager
               (MVPlayer *this,ISpawnRoleChangeHandler *spawnRoleChangeHandler,
               SpawnRolesRuntimeData *spawnRolesRuntimeData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (SpawnRolesManager *)func_?(TypeInfo__SpawnRolesManager);
  SpawnRolesManager::SpawnRolesManager__ctor
            (this_00,spawnRoleChangeHandler,spawnRolesRuntimeData,(MethodInfo *)0x0);
  (this->fields).spawnRolesManager = this_00;
  return;
}


/* MVPlayer(Int32, Int32, String, BuildTarget, UserProfileData, Boolean) */

void Assembly-CSharp.dll::MVPlayer::MVPlayer__ctor
               (MVPlayer *this,int32_t actorNumber,int32_t profileID,String *regionCode,
               BuildTarget__Enum buildTarget,UserProfileData *userProfileData,bool isReady,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).checkpointWOID = -1;
  (this->fields).level = 1;
  (this->fields).team = 5;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields)._ActorNr_k__BackingField = actorNumber;
  (this->fields)._ProfileID_k__BackingField = profileID;
  (this->fields)._BuildTarget_k__BackingField = (undefined1)buildTarget;
  (this->fields)._UserProfileData_k__BackingField = userProfileData;
  if (userProfileData != (UserProfileData *)0x0) {
    pSVar1 = (userProfileData->fields).SubscriptionData;
    if (pSVar1 != (SubscriptionData *)0x0) {
      subscriptionType = (pSVar1->fields).SubscriptionType;
      this_01 = (SubscriptionRulesWrapper *)
                func_?(TypeInfo__MV__WorldObject__Subscription__SubscriptionRulesWrapper);
      MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
      SubscriptionRulesWrapper__ctor(this_01,subscriptionType,(MethodInfo *)0x0);
      (this->fields)._SubscriptionRules_k__BackingField = this_01;
      if (0 < profileID) {
code_?:
        (this->fields)._RegionCode_k__BackingField = regionCode;
        (this->fields)._IsReady_k__BackingField = isReady;
        return;
      }
      pSVar2 = TM::TM__(StringLiteral_Tourist,(MethodInfo *)0x0);
      pUVar3 = (this->fields)._UserProfileData_k__BackingField;
      if ((pUVar3 != (UserProfileData *)0x0) &&
         (this_00 = (pUVar3->fields).UserName, this_00 != (String *)0x0)) {
        pSVar2 = mscorlib.dll::System::String::String_Replace_1
                           (this_00,StringLiteral_Tourist,pSVar2,(MethodInfo *)0x0);
        if (pUVar3 != (UserProfileData *)0x0) {
          (pUVar3->fields).UserName = pSVar2;
          goto code_?;
        }
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* MVPlayer(Int32, Int32, Int32, String, BuildTarget, UserProfileData, Boolean,
   PlayerPlanetDataRemote) */

void Assembly-CSharp.dll::MVPlayer::MVPlayer__ctor_1
               (MVPlayer *this,int32_t actorNumber,int32_t profileID,int32_t level,
               String *regionCode,BuildTarget__Enum buildTarget,UserProfileData *userProfileData,
               bool isReady,PlayerPlanetDataRemote *playerPlanetDataRemote,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).checkpointWOID = -1;
  (this->fields).level = 1;
  (this->fields).team = 5;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EBX);
  (this->fields)._ActorNr_k__BackingField = actorNumber;
  (this->fields)._ProfileID_k__BackingField = profileID;
  (this->fields)._BuildTarget_k__BackingField = (undefined1)buildTarget;
  (this->fields)._UserProfileData_k__BackingField = userProfileData;
  if (userProfileData != (UserProfileData *)0x0) {
    pSVar1 = (userProfileData->fields).SubscriptionData;
    if (pSVar1 != (SubscriptionData *)0x0) {
      subscriptionType = (pSVar1->fields).SubscriptionType;
      this_02 = (SubscriptionRulesWrapper *)
                func_?(TypeInfo__MV__WorldObject__Subscription__SubscriptionRulesWrapper);
      MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
      SubscriptionRulesWrapper__ctor(this_02,subscriptionType,(MethodInfo *)0x0);
      (this->fields)._SubscriptionRules_k__BackingField = this_02;
      if (0 < profileID) {
code_?:
        bVar2 = cRam_? == '\0';
        (this->fields)._RegionCode_k__BackingField = regionCode;
        (this->fields)._IsReady_k__BackingField = isReady;
        if (bVar2) {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        iVar3 = (this->fields).level;
        (this->fields).level = level;
        if ((iVar3 != level) &&
           (this_01 = (Action_1_UIPushOption_ *)(this->fields).OnLevelChanged,
           this_01 != (Action_1_UIPushOption_ *)0x0)) {
          mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                    (this_01,level,MethodInfo__UnityEngine__Events__UnityAction<int>__Invoke_int_);
        }
        (this->fields).playerPlanetDataRemote = playerPlanetDataRemote;
        return;
      }
      pSVar4 = TM::TM__(StringLiteral_Tourist,(MethodInfo *)0x0);
      pUVar5 = (this->fields)._UserProfileData_k__BackingField;
      if ((pUVar5 != (UserProfileData *)0x0) &&
         (this_00 = (pUVar5->fields).UserName, this_00 != (String *)0x0)) {
        pSVar4 = mscorlib.dll::System::String::String_Replace_1
                           (this_00,StringLiteral_Tourist,pSVar4,(MethodInfo *)0x0);
        if (pUVar5 != (UserProfileData *)0x0) {
          (pUVar5->fields).UserName = pSVar4;
          goto code_?;
        }
      }
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Boolean get_IsReady() */

bool Assembly-CSharp.dll::MVPlayer::MVPlayer_get_IsReady(MVPlayer *this,MethodInfo *method)

{
  return (this->fields)._IsReady_k__BackingField;
}


/* Boolean get_IsTourist() */

bool Assembly-CSharp.dll::MVPlayer::MVPlayer_get_IsTourist(MVPlayer *this,MethodInfo *method)

{
  return (this->fields)._ProfileID_k__BackingField == 0;
}


/* Int32 get_WoId() */

int32_t Assembly-CSharp.dll::MVPlayer::MVPlayer_get_WoId(MVPlayer *this,MethodInfo *method)

{
  pSVar1 = (this->fields).spawnRolesManager;
  if (pSVar1 == (SpawnRolesManager *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    iVar3 = (*pcVar2)();
    return iVar3;
  }
  pSVar4 = (pSVar1->fields).spawnRolesRuntimeData;
  if (pSVar4 != (SpawnRolesRuntimeData *)0x0) {
    return (pSVar4->fields).activeSpawnRole;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Void set_IsReady(Boolean) */

void Assembly-CSharp.dll::MVPlayer::MVPlayer_set_IsReady
               (MVPlayer *this,bool value,MethodInfo *method)

{
  (this->fields)._IsReady_k__BackingField = value;
  return;
}


/* Void set_Level(Int32) */

void Assembly-CSharp.dll::MVPlayer::MVPlayer_set_Level
               (MVPlayer *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).level;
  (this->fields).level = value;
  if ((iVar1 != value) &&
     (this_00 = (Action_1_UIPushOption_ *)(this->fields).OnLevelChanged,
     this_00 != (Action_1_UIPushOption_ *)0x0)) {
    mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
              (this_00,value,MethodInfo__UnityEngine__Events__UnityAction<int>__Invoke_int_);
  }
  return;
}


/* Void set_SubscriptionRules(SubscriptionRulesWrapper) */

void Assembly-CSharp.dll::MVPlayer::MVPlayer_set_SubscriptionRules
               (MVPlayer *this,SubscriptionRulesWrapper *value,MethodInfo *method)

{
  (this->fields)._SubscriptionRules_k__BackingField = value;
  return;
}


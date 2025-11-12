
/* MVCheckpoint GetCheckpoint() */

MVCheckpoint *
Assembly-CSharp.dll::MVPlayer::MVPlayer_GetCheckpoint(MVPlayer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).checkpointWOID == -1) {
    return (MVCheckpoint *)0x0;
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
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      pMVar3 = (MVCheckpoint *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                         (pMVar1,(this->fields).checkpointWOID,(MethodInfo *)0x0);
      pMVar4 = (MVCheckpoint *)0x0;
      if (pMVar3 != (MVCheckpoint *)0x0) {
        bVar5 = (TypeInfo__MVCheckpoint->_1).naturalAligment;
        if (((pMVar3->klass->_1).naturalAligment < bVar5) ||
           (bVar6 = true,
           (MVCheckpoint__Class *)(pMVar3->klass->_1).typeHierarchy[(ulonglong)bVar5 - 1] !=
           TypeInfo__MVCheckpoint)) {
          bVar6 = false;
        }
        if (bVar6) {
          pMVar4 = pMVar3;
        }
      }
      return pMVar4;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  pMVar4 = (MVCheckpoint *)(*pcVar7)();
  return pMVar4;
}


/* Int32 GetGameStat(GameStatCounterType) */

int32_t Assembly-CSharp.dll::MVPlayer::MVPlayer_GetGameStat
                  (MVPlayer *this,GameStatCounterType__Enum gameStatCounterType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar2->fields).gameStatCounterManager, this_00 != (GameStatCounterManager *)0x0))
  {
    iVar3 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                      (this_00,gameStatCounterType & 0xff,(this->fields)._Team_k__BackingField,
                       (this->fields)._ActorNr_k__BackingField,(MethodInfo *)0x0);
    return iVar3;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  iVar3 = (*pcVar4)();
  return iVar3;
}


/* Boolean IsOnSameTeam(MVPlayer) */

bool Assembly-CSharp.dll::MVPlayer::MVPlayer_IsOnSameTeam
               (MVPlayer *this,MVPlayer *other,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pMVar3 = (pMVar2->fields).teamManager, pMVar3 != (MVTeamManager *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Count__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar4 = (pMVar3->fields).teams;
    if (pDVar4 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) {
      if ((pDVar4->fields)._count - (pDVar4->fields)._freeCount < 2) {
        return 0;
      }
      if (other != (MVPlayer *)0x0) {
        return (this->fields)._Team_k__BackingField == (other->fields)._Team_k__BackingField;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean IsOnSameTeam(MVWorldObjectClient) */

bool Assembly-CSharp.dll::MVPlayer::MVPlayer_IsOnSameTeam_1
               (MVPlayer *this,MVWorldObjectClient *wo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ITeamInteractorNPC);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOStackX_20 = (Object *)0x0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pMVar3 = (pMVar2->fields).teamManager, pMVar3 != (MVTeamManager *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Count__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar4 = (pMVar3->fields).teams;
    if (pDVar4 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) {
      if ((pDVar4->fields)._count - (pDVar4->fields)._freeCount < 2) {
        return 0;
      }
      lVar5 = FUN_?(wo,TypeInfo__ITeamInteractorNPC);
      if (wo != (MVWorldObjectClient *)0x0) {
        if (((wo->fields)._.ownerActorNr == 0) && (lVar5 != 0)) {
          bVar6 = FUN_?(0,TypeInfo__ITeamInteractorNPC,lVar5,
                                (this->fields)._Team_k__BackingField);
          return bVar6;
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((pMVar1 != (MVGameControllerBase *)0x0) &&
           (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
          pMVar7 = (pMVar2->fields).playerContainer;
          key = (wo->fields)._.ownerActorNr;
          if (pMVar7 != (MVPlayerContainer *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__TryGetValue_int__MVPlayer__
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            this_00 = (pMVar7->fields).players;
            if (this_00 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
              bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__TryGetValue
                                ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,
                                 &pOStackX_20,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__TryGetValue_int__MVPlayer__
                                );
              if (bVar6 == 0) {
                return (this->fields)._ActorNr_k__BackingField == (wo->fields)._.ownerActorNr;
              }
              if (pOStackX_20 != (Object *)0x0) {
                return (this->fields)._Team_k__BackingField ==
                       *(int *)((longlong)&pOStackX_20[8].klass + 4);
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  bVar6 = (*pcVar8)();
  return bVar6;
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
  this_00 = (this->fields).spawnRolesManager;
  if ((this_00 != (SpawnRolesManager *)0x0) &&
     (pSVar1 = (this_00->fields).spawnRolesRuntimeData, pSVar1 != (SpawnRolesRuntimeData *)0x0)) {
    if (id != (pSVar1->fields).activeSpawnRole) {
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar2 != (MVGameControllerBase *)0x0) &&
         (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
        ((pMVar3->fields).worldNetwork != (WorldNetwork *)0x0)) &&
       ((this_01 = (MVWorldObjectClientManager *)
                   (((pMVar3->fields).worldNetwork)->fields)._.worldObjectClientManager,
        this_01 != (MVWorldObjectClientManager *)0x0 &&
        (pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                            (this_01,id,(MethodInfo *)0x0), pMVar4 != (MVWorldObjectClient *)0x0))))
    {
      puVar5 = (undefined8 *)
               (*(pMVar4->klass->vtable).get_Position.methodPtr)
                         (&VStack_6,pMVar4,(pMVar4->klass->vtable).get_Position.method);
      uVar7 = *puVar5;
      fVar8 = *(float *)(puVar5 + 1);
      puVar5 = (undefined8 *)
               (*(pMVar4->klass->vtable).get_Rotation.methodPtr)
                         (&QStack_9,pMVar4,(pMVar4->klass->vtable).get_Rotation.method);
      QStack_9._0_8_ = *puVar5;
      QStack_9._8_8_ = puVar5[1];
      VStack_6._0_8_ = uVar7;
      VStack_6.z = fVar8;
      SpawnRolesManager::SpawnRolesManager_ActivateSpawnRole
                (this_00,id,&VStack_6,&QStack_9,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void SetCheckpoint(Int32) */

void Assembly-CSharp.dll::MVPlayer::MVPlayer_SetCheckpoint
               (MVPlayer *this,int32_t woid,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    bVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_IsType
                      (this_00,woid,WorldObjectType__Enum_CheckPoint,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      (this->fields).checkpointWOID = woid;
      if ((this->fields).OnCheckpointReached != (UnityAction *)0x0) {
        pUVar2 = (this->fields).OnCheckpointReached;
        (*(pUVar2->fields)._._.invoke_impl)((pUVar2->fields)._._.method_code);
      }
      text = TM::TM__(StringLiteral_Reached_new_checkpoint_,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
        FUN_?();
      }
      NotificationController::NotificationController_PushNotification
                (text,(Sprite *)0x0,5,(MethodInfo *)0x0);
    }
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetReady() */

void Assembly-CSharp.dll::MVPlayer::MVPlayer_SetReady(MVPlayer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Player_already_ready);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).playerState == 1) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Player_already_ready,(MethodInfo *)0x0);
    if ((this->fields).playerState == 1) {
      return;
    }
  }
  (this->fields).playerState = 1;
  if ((this->fields).OnResume == (UnityAction *)0x0) {
    return;
  }
  pUVar1 = (this->fields).OnResume;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pUVar1->fields)._._.invoke_impl)((pUVar1->fields)._._.method_code,(pUVar1->fields)._._.method);
  return;
}


/* Void SetupSpawnRoleManager(ISpawnRoleChangeHandler, SpawnRolesRuntimeData) */

void Assembly-CSharp.dll::MVPlayer::MVPlayer_SetupSpawnRoleManager
               (MVPlayer *this,ISpawnRoleChangeHandler *spawnRoleChangeHandler,
               SpawnRolesRuntimeData *spawnRolesRuntimeData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SpawnRolesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (SpawnRolesManager *)FUN_?(TypeInfo__SpawnRolesManager);
  iVar2 = iRam_?;
  (pSVar1->fields).spawnRolesRuntimeData = spawnRolesRuntimeData;
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)&pSVar1->fields >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar2 = iRam_?;
    } while (!bVar7);
  }
  (pSVar1->fields).spawnRoleChangeHandler = spawnRoleChangeHandler;
  iVar8 = 0;
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)&(pSVar1->fields).spawnRoleChangeHandler >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar8 = iRam_?;
    } while (!bVar7);
  }
  (this->fields).spawnRolesManager = pSVar1;
  if (iVar8 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).spawnRolesManager >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  return;
}


/* MVPlayer(Int32, Int32, String, BuildTarget, UserProfileData, Boolean, Boolean) */

void Assembly-CSharp.dll::MVPlayer::MVPlayer__ctor
               (MVPlayer *this,int32_t actorNumber,int32_t profileID,String *regionCode,
               BuildTarget__Enum buildTarget,UserProfileData *userProfileData,bool isReady,
               bool observer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  System__String_MethodInfo__Extensions__GetTypedValueOrDefault<System::String,_System::String>_System__Collections__Generic__Dictionary<System::String,_System::String>__System__String__System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVLocalPlayerTourist);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Text__RegularExpressions__Regex);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__Subscription__SubscriptionRulesWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___________A_Z__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Tourist);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields)._BuildTarget_k__BackingField = (undefined1)buildTarget;
  (this->fields)._UserProfileData_k__BackingField = userProfileData;
  (this->fields).checkpointWOID = -1;
  (this->fields).level = 1;
  (this->fields)._Team_k__BackingField = 5;
  (this->fields)._ActorNr_k__BackingField = actorNumber;
  (this->fields)._ProfileID_k__BackingField = profileID;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._UserProfileData_k__BackingField >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if ((userProfileData != (UserProfileData *)0x0) &&
     (pSVar6 = (userProfileData->fields).SubscriptionData, pSVar6 != (SubscriptionData *)0x0)) {
    subscriptionType = (pSVar6->fields).SubscriptionType;
    this_00 = (SubscriptionRulesWrapper *)
              FUN_?(TypeInfo__MV__WorldObject__Subscription__SubscriptionRulesWrapper);
    MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
    SubscriptionRulesWrapper__ctor(this_00,subscriptionType,(MethodInfo *)0x0);
    bVar1 = iRam_? != 0;
    (this->fields)._SubscriptionRules_k__BackingField = this_00;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields)._SubscriptionRules_k__BackingField >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    if (0 < profileID) {
code_?:
      bVar1 = iRam_? != 0;
      (this->fields)._RegionCode_k__BackingField = regionCode;
      if (bVar1) {
        uVar2 = (uint)((ulonglong)&(this->fields)._RegionCode_k__BackingField >> 0xc);
        lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
          puVar5 = (ulonglong *)(lVar3 + 0xADDR);
          LOCK();
          bVar1 = uVar4 == *puVar5;
          if (bVar1) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      if (isReady == 0) {
        if (observer == 0) {
          return;
        }
        if ((this->fields).playerState == 3) {
          return;
        }
        (this->fields).playerState = 3;
        if ((this->fields).OnObserve == (UnityAction *)0x0) {
          return;
        }
        pUVar7 = (this->fields).OnObserve;
      }
      else {
        if ((this->fields).playerState == 1) {
          return;
        }
        (this->fields).playerState = 1;
        if ((this->fields).OnResume == (UnityAction *)0x0) {
          return;
        }
        pUVar7 = (this->fields).OnResume;
      }
      (*(pUVar7->fields)._._.invoke_impl)
                ((pUVar7->fields)._._.method_code,(pUVar7->fields)._._.method);
      return;
    }
    pUVar8 = (this->fields)._UserProfileData_k__BackingField;
    if (pUVar8 != (UserProfileData *)0x0) {
      pSVar9 = (pUVar8->fields).UserName;
      if (*(int *)&(TypeInfo__System__Text__RegularExpressions__Regex->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar10 = StringLiteral___________A_Z__;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Text__RegularExpressions__Regex);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__System__Text__RegularExpressions__Regex->_1).field_0x1c == 0) {
        FUN_?();
      }
      matchTimeout._ticks =
           (TypeInfo__System__Text__RegularExpressions__Regex->static_fields->s_defaultMatchTimeout)
           ._ticks;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Text__RegularExpressions__Regex);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_01 = (Regex *)FUN_?(TypeInfo__System__Text__RegularExpressions__Regex);
      System.dll::System::Text::RegularExpressions::Regex::Regex__ctor_3
                (this_01,pSVar10,RegexOptions__Enum_None,matchTimeout,1,(MethodInfo *)0x0);
      if (this_01 != (Regex *)0x0) {
        if (pSVar9 == (String *)0x0) {
          uVar11 = func_?(&TypeInfo__System__ArgumentNullException);
          this_02 = (ArgumentNullException *)func_?(uVar11);
          pSVar9 = (String *)func_?(&StringLiteral_input);
          mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
                    (this_02,pSVar9,(MethodInfo *)0x0);
          uVar11 = func_?(&
                                       MethodInfo__System__Text__RegularExpressions__Regex__Split_System__String_
                                      );
          FUN_?(this_02,uVar11);
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        if (((this_01->fields).roptions & 0x40) == 0) {
          startat = 0;
        }
        else {
          startat = (pSVar9->fields)._stringLength;
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Text__RegularExpressions__Regex);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__System__Text__RegularExpressions__Regex->_1).field_0x1c == 0) {
          FUN_?();
        }
        pSVar13 = System.dll::System::Text::RegularExpressions::Regex::Regex_Split_4
                           (this_01,pSVar9,0,startat,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__MVLocalPlayerTourist->_1).field_0x1c == 0) {
          FUN_?();
        }
        hashtable = TypeInfo__MVLocalPlayerTourist->static_fields->Adjectives;
        if (pSVar13 != (String__Array *)0x0) {
          if ((int)pSVar13->max_length != 0) {
            pSVar9 = pSVar13->vector[0];
            pSVar10 = TM::TM__(StringLiteral_Tourist,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
              FUN_?();
            }
            pSVar9 = (String *)
                     Extensions::Extensions_GetTypedValueOrDefault
                               ((Dictionary_2_System_Object_System_Object_ *)hashtable,
                                (Object *)pSVar9,(Object *)pSVar10,
                                System__String_MethodInfo__Extensions__GetTypedValueOrDefault<System::String,_System::String>_System__Collections__Generic__Dictionary<System::String,_System::String>__System__String__System__String_
                               );
            if (1 < (uint)pSVar13->max_length) {
              pSVar10 = (String *)
                       Extensions::Extensions_GetTypedValueOrDefault
                                 ((Dictionary_2_System_Object_System_Object_ *)
                                  TypeInfo__MVLocalPlayerTourist->static_fields->Nouns,
                                  (Object *)pSVar13->vector[1],(Object *)::StringLiteral__,
                                  System__String_MethodInfo__Extensions__GetTypedValueOrDefault<System::String,_System::String>_System__Collections__Generic__Dictionary<System::String,_System::String>__System__String__System__String_
                                 );
              pUVar8 = (this->fields)._UserProfileData_k__BackingField;
              pSVar9 = mscorlib.dll::System::String::String_Concat_4
                                 (pSVar9,pSVar10,(MethodInfo *)0x0);
              if (pUVar8 != (UserProfileData *)0x0) {
                bVar1 = iRam_? != 0;
                (pUVar8->fields).UserName = pSVar9;
                if (bVar1) {
                  uVar2 = (uint)((ulonglong)&(pUVar8->fields).UserName >> 0xc);
                  lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                  do {
                    uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
                    puVar5 = (ulonglong *)(lVar3 + 0xADDR);
                    LOCK();
                    bVar1 = uVar4 == *puVar5;
                    if (bVar1) {
                      *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar1);
                }
                goto code_?;
              }
              goto code_?;
            }
          }
          FUN_?();
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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
  MVPlayer__ctor(this,actorNumber,profileID,regionCode,
                 CONCAT31((int3)((uint)in_stack_1 >> 8),(undefined1)buildTarget),
                 userProfileData,isReady,observer,(MethodInfo *)0x0);
  iVar2 = (this->fields).level;
  (this->fields).level = level;
  if ((iVar2 != level) && ((this->fields).OnLevelChanged != (UnityAction_1_System_Int32_ *)0x0)) {
    pUVar3 = (this->fields).OnLevelChanged;
    (*(pUVar3->fields)._._.invoke_impl)
              ((pUVar3->fields)._._.method_code,level,(pUVar3->fields)._._.method);
  }
  bVar4 = iRam_? != 0;
  (this->fields).playerPlanetDataRemote = playerPlanetDataRemote;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields).playerPlanetDataRemote >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
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
  pSVar1 = (this->fields)._SubscriptionRules_k__BackingField;
  if (pSVar1 == (SubscriptionRulesWrapper *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  pSVar4 = (pSVar1->fields).subscriptionBase;
  if (pSVar4 != (SubscriptionBase *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__ContainsKey_MV__WorldObject__Subscription__SubscriptionBenefit_
                    ,1,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)(pSVar4->fields).benefits;
    if (this_00 != (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0) {
      iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine
              ::Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                        (this_00,1,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__ContainsKey_MV__WorldObject__Subscription__SubscriptionBenefit_
                         ->klass->rgctx_data[0x21].method);
      return (byte)((uint)iVar5 >> 0x1f) ^ 1;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
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
  if ((pSVar1 != (SpawnRolesManager *)0x0) &&
     (pSVar2 = (pSVar1->fields).spawnRolesRuntimeData, pSVar2 != (SpawnRolesRuntimeData *)0x0)) {
    return (pSVar2->fields).activeSpawnRole;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* Void set_Level(Int32) */

void Assembly-CSharp.dll::MVPlayer::MVPlayer_set_Level
               (MVPlayer *this,int32_t value,MethodInfo *method)

{
  iVar1 = (this->fields).level;
  (this->fields).level = value;
  if ((iVar1 != value) && ((this->fields).OnLevelChanged != (UnityAction_1_System_Int32_ *)0x0)) {
    pUVar2 = (this->fields).OnLevelChanged;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pUVar2->fields)._._.invoke_impl)
              ((pUVar2->fields)._._.method_code,value,(pUVar2->fields)._._.method);
    return;
  }
  return;
}


/* Void set_PlayerState(PlayerGameState) */

void Assembly-CSharp.dll::MVPlayer::MVPlayer_set_PlayerState
               (MVPlayer *this,PlayerGameState__Enum value,MethodInfo *method)

{
  uVar1 = (uint8_t)value;
  if (uVar1 != (this->fields).playerState) {
    (this->fields).playerState = uVar1;
    if (uVar1 == 2) {
      if ((this->fields).OnPause != (UnityAction *)0x0) {
        pUVar2 = (this->fields).OnPause;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pUVar2->fields)._._.invoke_impl)
                  ((pUVar2->fields)._._.method_code,(pUVar2->fields)._._.method);
        return;
      }
    }
    else if (uVar1 == 1) {
      if ((this->fields).OnResume != (UnityAction *)0x0) {
        pUVar2 = (this->fields).OnResume;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pUVar2->fields)._._.invoke_impl)
                  ((pUVar2->fields)._._.method_code,(pUVar2->fields)._._.method);
        return;
      }
    }
    else if ((uVar1 == 3) && ((this->fields).OnObserve != (UnityAction *)0x0)) {
      pUVar2 = (this->fields).OnObserve;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pUVar2->fields)._._.invoke_impl)
                ((pUVar2->fields)._._.method_code,(pUVar2->fields)._._.method);
      return;
    }
  }
  return;
}



/* Int32 CalculateCurrentTime(Int32) */

int32_t Assembly-CSharp.dll::CurrentProgressNotification::
        CurrentProgressNotification_CalculateCurrentTime
                  (CurrentProgressNotification *this,int32_t startTime,MethodInfo *method)

{
  if ((this->fields).currentDisplayedStatType == 8) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    pFVar2 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl((MethodInfo *)0x0)
    ;
    if (pFVar2 != (FlagDebriefingControl *)0x0) {
      iVar3 = CurrentProgressNotification_ConvertSecondsToMilliSeconds
                        (this,fVar1 - (pFVar2->fields).RunStartTime,(MethodInfo *)0x0);
      return iVar3;
    }
  }
  else {
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame *)0x0) {
      iVar3 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0);
      return iVar3 - startTime;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  iVar3 = (*pcVar4)();
  return iVar3;
}


/* Int32 ConvertSecondsToMilliSeconds(Single) */

int32_t Assembly-CSharp.dll::CurrentProgressNotification::
        CurrentProgressNotification_ConvertSecondsToMilliSeconds
                  (CurrentProgressNotification *this,float seconds,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fVar1 = seconds * _UNK_?;
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  fVar2 = (float10)func_?((double)fVar1);
  return (int)fVar2;
}


/* Int32 GetScoreLeftToWin(GameStatCounterType, Int32) */

int32_t Assembly-CSharp.dll::CurrentProgressNotification::
        CurrentProgressNotification_GetScoreLeftToWin
                  (GameStatCounterType__Enum counterType,int32_t scoreCount,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    ppMStack_1 = &
                 KillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<KillLimitClient>__
    ;
    func_?();
    func_?(&
                    OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__
                   );
    cRam_? = '\x01';
  }
  switch(counterType & 0xff) {
  case GameStatCounterType__Enum_Kill:
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    this = (pMVar2->fields)._WinningConditionManager_k__BackingField;
    method_00 = 
    KillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<KillLimitClient>__
    ;
    break;
  case GameStatCounterType__Enum_Flag:
  case GameStatCounterType__Enum_TimeAttackFlag:
    return scoreCount;
  case GameStatCounterType__Enum_Collectible:
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    this = (pMVar2->fields)._WinningConditionManager_k__BackingField;
    method_00 = 
    AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
    ;
    break;
  default:
    return 0;
  case GameStatCounterType__Enum_OculusKill:
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    this = (pMVar2->fields)._WinningConditionManager_k__BackingField;
    method_00 = 
    OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__
    ;
  }
  if (this != (WinningConditionManager *)0x0) {
    pOVar3 = MVWorldObject.dll::WinningConditionManager::
             WinningConditionManager_GetSingletonWinnerConditionByType(this,method_00);
    pOVar4 = (Object__Class *)0x0;
    if (pOVar3 != (Object *)0x0) {
      pOVar4 = pOVar3[2].klass;
    }
    return (int)pOVar4 - scoreCount;
  }
code_?:
  uVar5 = func_?(&ppMStack_1);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  iVar7 = (*pcVar6)();
  return iVar7;
}


/* Int32 GetStartTime() */

int32_t Assembly-CSharp.dll::CurrentProgressNotification::CurrentProgressNotification_GetStartTime
                  (CurrentProgressNotification *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pMVar2 = (pMVar1->fields)._NetworkGameStateListener_k__BackingField,
     pMVar2 != (MVNetworkGameStateListener *)0x0)) {
    if ((pMVar2->fields).startTime < (this->fields).avatarStartTime) {
      return (this->fields).avatarStartTime;
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 != (MVNetworkGame *)0x0) &&
       (pMVar2 = (pMVar1->fields)._NetworkGameStateListener_k__BackingField,
       pMVar2 != (MVNetworkGameStateListener *)0x0)) {
      return (pMVar2->fields).startTime;
    }
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::CurrentProgressNotification::CurrentProgressNotification_Initialize
               (CurrentProgressNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__CurrentProgressNotification__DestroyNotification__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                   );
    func_?(&StringLiteral_YOU_HAVE);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  uStack_1 = (undefined *)((uint)uStack_1 & 0xffffff);
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 == (MVNetworkGame *)0x0) ||
     (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
     pMVar3 == (MVLocalPlayer *)0x0)) goto code_?;
  (this->fields).avatarStartTime = (pMVar3->fields).joinTime;
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 == (MVNetworkGame *)0x0) ||
     (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
     pMVar3 == (MVLocalPlayer *)0x0)) goto code_?;
  unaff_EBX = (NavMesh_OnNavMeshPreUpdate *)(pMVar3->fields)._._ActorNr_k__BackingField;
  puVar4 = &UNK_?;
  WinningConditionControl::WinningConditionControl_TryGetPrioritizedStat
            ((GameStatCounterType__Enum *)((int)&uStack_1 + 3),(MethodInfo *)0x0);
  (this->fields).currentDisplayedStatType = uStack_1._3_1_;
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 == (MVNetworkGame *)0x0) ||
     (this_03 = (pMVar2->fields).teamManager, this_03 == (MVTeamManager *)0x0))
  goto code_?;
  pLVar5 = MVTeamManager::MVTeamManager_GetTeamList(this_03,(MethodInfo *)0x0);
  if (pLVar5 == (List_1_MV_WorldObject_MVTeam_ *)0x0) goto code_?;
  if ((pLVar5->fields)._size < 2) {
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    unaff_EDI = (Text *)(pMVar2->fields).gameStatCounterManager;
    uVar6 = (undefined1)((uint)uStack_1 >> 0x18);
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar2 == (MVNetworkGame *)0x0) ||
        (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
        pMVar3 == (MVLocalPlayer *)0x0)) || (unaff_EDI == (Text *)0x0)) goto code_?;
    unaff_EDI = (Text *)MVWorldObject.dll::GameStatCounterManager::
                        GameStatCounterManager_GetActorCount
                                  ((GameStatCounterManager *)unaff_EDI,
                                   CONCAT31((undefined3)uStack_1,uVar6),
                                   (pMVar3->fields)._._Team_k__BackingField,(int32_t)unaff_EBX,
                                   (MethodInfo *)0x0);
  }
  else {
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    unaff_EDI = (Text *)(pMVar2->fields).gameStatCounterManager;
    uVar6 = (undefined1)((uint)uStack_1 >> 0x18);
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar2 == (MVNetworkGame *)0x0) ||
        (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
        pMVar3 == (MVLocalPlayer *)0x0)) || (unaff_EDI == (Text *)0x0)) goto code_?;
    unaff_EDI = (Text *)MVWorldObject.dll::GameStatCounterManager::
                        GameStatCounterManager_GetTeamCount
                                  ((GameStatCounterManager *)unaff_EDI,
                                   CONCAT31((undefined3)uStack_1,uVar6),
                                   (pMVar3->fields)._._Team_k__BackingField,(MethodInfo *)0x0);
  }
  uVar7 = SUB43(this_03,0);
  bVar8 = uStack_1._3_1_;
  if (cRam_? == '\0') {
    func_?(&
                    AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
                   );
    func_?(&
                    KillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<KillLimitClient>__
                   );
    func_?(&
                    OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__
                   );
    cRam_? = '\x01';
  }
  unaff_EBX = (NavMesh_OnNavMeshPreUpdate *)0x0;
  if (bVar8 - 1 < 8) {
    (**(code **)(&UNK_? + (bVar8 - 1) * 4))();
    return;
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 == (MVNetworkGame *)0x0) ||
     (this_00 = (pMVar2->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0))
  goto code_?;
  bVar9 = MVPlayerContainer::MVPlayerContainer_TryGetValue
                    (this_00,(int32_t)puVar4,(MVPlayer **)&stack0xffffffec,(MethodInfo *)0x0);
  if (bVar9 == 0) {
    return;
  }
  pTVar10 = (this->fields).currentProgressText;
  (this->fields)._.timeSinceStart = 0.0;
  if (uStack_1._3_1_ == '\x02') {
    if (pTVar10 == (Text *)0x0) goto code_?;
    (*(pTVar10->klass->vtable).set_text.methodPtr)
              (pTVar10,::StringLiteral__,(pTVar10->klass->vtable).set_text.method);
    unaff_EDI = (this->fields).scoreText;
    iVar11 = CurrentProgressNotification_GetStartTime(this,(MethodInfo *)0x0);
    if ((this->fields).currentDisplayedStatType == 8) {
      fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pFVar13 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                         ((MethodInfo *)0x0);
      if (pFVar13 == (FlagDebriefingControl *)0x0) goto code_?;
      iVar14 = CurrentProgressNotification_ConvertSecondsToMilliSeconds
                         (this,fVar12 - (pFVar13->fields).RunStartTime,(MethodInfo *)0x0);
    }
    else {
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
      iVar14 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(pMVar2,(MethodInfo *)0x0);
      iVar14 = iVar14 - iVar11;
    }
    pSVar15 = WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                       (iVar14,GameStatCounterType__Enum_Flag,(MethodInfo *)0x0);
    pTVar10 = unaff_EDI;
code_?:
    unaff_EDI = (Text *)0x0;
    if (pTVar10 == (Text *)0x0) goto code_?;
    (*(pTVar10->klass->vtable).set_text.methodPtr)
              (pTVar10,pSVar15,(pTVar10->klass->vtable).set_text.method);
    (this->fields).shouldShowCurrentTime = 1;
  }
  else {
    if (uStack_1._3_1_ == '\b') {
      if (pTVar10 == (Text *)0x0) goto code_?;
      (*(pTVar10->klass->vtable).set_text.methodPtr)
                (pTVar10,::StringLiteral__,(pTVar10->klass->vtable).set_text.method);
      unaff_EDI = (this->fields).scoreText;
      fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pFVar13 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                         ((MethodInfo *)0x0);
      if (pFVar13 == (FlagDebriefingControl *)0x0) goto code_?;
      iVar11 = CurrentProgressNotification_ConvertSecondsToMilliSeconds
                         (this,fVar12 - (pFVar13->fields).RunStartTime,(MethodInfo *)0x0);
      pSVar15 = WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                         (iVar11,GameStatCounterType__Enum_TimeAttackFlag,(MethodInfo *)0x0);
      pTVar10 = unaff_EDI;
      goto code_?;
    }
    if (pTVar10 == (Text *)0x0) goto code_?;
    (*(pTVar10->klass->vtable).set_text.methodPtr)
              (pTVar10,StringLiteral_YOU_HAVE,(pTVar10->klass->vtable).set_text.method);
    pTVar10 = (this->fields).scoreText;
    pSVar15 = WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                       (0,CONCAT31(uVar7,uStack_1._3_1_),(MethodInfo *)0x0);
    unaff_EDI = (Text *)0x0;
    if (pTVar10 == (Text *)0x0) goto code_?;
    (*(pTVar10->klass->vtable).set_text.methodPtr)
              (pTVar10,pSVar15,(pTVar10->klass->vtable).set_text.method);
    (this->fields).shouldShowCurrentTime = 0;
  }
  unaff_EDI = (Text *)(this->fields).fader;
  if (unaff_EDI != (Text *)0x0) {
    *(EventHandler_1_OnCounterTypeChangedArgs_ **)&(unaff_EDI->fields)._._.m_SkipLayoutUpdate =
         (EventHandler_1_OnCounterTypeChangedArgs_ *)(unaff_EDI->fields)._._.m_Color.g;
    this_01 = (List_1_GameStatCounterType_ *)(unaff_EDI->fields)._._.m_Material;
    *(undefined1 *)&(unaff_EDI->fields)._._.m_Color.b = 1;
    if (this_01 != (List_1_GameStatCounterType_ *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                ((CanvasGroup *)this_01,0.0,(MethodInfo *)0x0);
      (unaff_EDI->fields)._._.m_Color.a = 0.0;
      puVar4 = (undefined *)((uint)uStack_1 & 0xff000000);
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Count__
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
                       );
        cRam_? = '\x01';
      }
      pLVar16 = (this->fields).winningConditionImages;
      unaff_EDI = (Text *)0x0;
      if (pLVar16 != (List_1_CurrentProgressNotification_WinninConditionImage_ *)0x0) {
        while (cVar17 = (char)((uint)puVar4 >> 0x18), (int)unaff_EDI < (pLVar16->fields)._size) {
          pLVar18 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                   (this->fields).winningConditionImages;
          if ((pLVar18 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
             || (RVar19 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                          RegularExpressions::RegexCharClass+SingleRange]::
                          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                    (pLVar18,(int32_t)unaff_EDI,
                                     MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
                                    ), RVar19 == (RegexCharClass_SingleRange)0x0))
          goto code_?;
          pLVar18 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                   (this->fields).winningConditionImages;
          if (*(char *)((int)RVar19 + 8) == cVar17) {
            if (((pLVar18 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0
                 ) || (RVar19 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                                RegularExpressions::RegexCharClass+SingleRange]::
                                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                          (pLVar18,(int32_t)unaff_EDI,
                                           MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
                                          ), RVar19 == (RegexCharClass_SingleRange)0x0)) ||
               (*(Component **)((int)RVar19 + 0xc) == (Component *)0x0)) goto code_?;
            this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (*(Component **)((int)RVar19 + 0xc),(MethodInfo *)0x0);
            if (this_02 == (GameObject *)0x0) goto code_?;
            bVar9 = 1;
          }
          else {
            if (((pLVar18 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0
                 ) || (RVar19 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                                RegularExpressions::RegexCharClass+SingleRange]::
                                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                          (pLVar18,(int32_t)unaff_EDI,
                                           MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
                                          ), RVar19 == (RegexCharClass_SingleRange)0x0)) ||
               (*(Component **)((int)RVar19 + 0xc) == (Component *)0x0)) goto code_?;
            this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (*(Component **)((int)RVar19 + 0xc),(MethodInfo *)0x0);
            if (this_02 == (GameObject *)0x0) goto code_?;
            bVar9 = 0;
          }
          puVar4 = &UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_02,bVar9,(MethodInfo *)0x0);
          pLVar16 = (this->fields).winningConditionImages;
          unaff_EDI = (Text *)((int)&unaff_EDI->klass + 1);
          if (pLVar16 == (List_1_CurrentProgressNotification_WinninConditionImage_ *)0x0)
          goto code_?;
        }
        cVar17 = uStack_1._3_1_;
        if (cRam_? == '\0') {
          func_?(&StringLiteral_S);
          func_?(&StringLiteral_KILL);
          func_?(&StringLiteral_STAR);
          func_?(&StringLiteral__LEFT_);
          func_?(&::StringLiteral__);
          func_?(&StringLiteral_CURRENT_TIME);
          cRam_? = '\x01';
        }
        if ((cVar17 == '\x01') ||
           ((pSVar15 = StringLiteral_STAR, cVar17 != '\x03' &&
            (pSVar15 = ::StringLiteral__, cVar17 == '\x06')))) {
          pSVar15 = StringLiteral_KILL;
        }
        pSVar15 = mscorlib.dll::System::String::String_Concat_3
                           (pSVar15,StringLiteral__LEFT_,(MethodInfo *)0x0);
        if ((cVar17 == '\x02') || (cVar17 == '\b')) {
          pSVar15 = StringLiteral_CURRENT_TIME;
        }
        pTVar10 = (this->fields).warningText;
        if (pTVar10 != (Text *)0x0) {
          (*(pTVar10->klass->vtable).set_text.methodPtr)
                    (pTVar10,pSVar15,(pTVar10->klass->vtable).set_text.method);
          pTVar10 = (Text *)(this->fields).fader;
          unaff_EDI = pTVar10;
          if (pTVar10 != (Text *)0x0) {
            a = (Delegate *)(pTVar10->fields)._._.m_RaycastPadding.y;
            unaff_EBX = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
            if (unaff_EBX != (NavMesh_OnNavMeshPreUpdate *)0x0) {
              UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
              NavMesh_OnNavMeshPreUpdate__ctor
                        (unaff_EBX,(Object *)this,
                         MethodInfo__CurrentProgressNotification__DestroyNotification__,
                         (MethodInfo *)0x0);
              unaff_EDI = (Text *)mscorlib.dll::System::Delegate::Delegate_Combine
                                            (a,(Delegate *)unaff_EBX,(MethodInfo *)0x0);
              uVar20 = CONCAT44(TypeInfo__System__Action,pTVar10);
              goto code_?;
            }
          }
        }
      }
    }
  }
code_?:
  while( true ) {
    uVar20 = func_?();
    if (extraout_ECX == 0) {
      uRam_? = 0;
      *(char *)&unaff_EBX[-0xdb338d].monitor =
           *(char *)&unaff_EBX[-0xdb338d].monitor + (char)unaff_EDI;
    }
    else if ((int)((ulonglong)uVar20 >> 0x20) <= (int)unaff_EDI->klass) {
      in(0x97);
      in(0x97);
      if (extraout_ECX == 0) {
        return;
      }
      pcVar21 = (code *)swi(3);
      (*pcVar21)();
      return;
    }
code_?:
    pTVar10 = (Text *)uVar20;
    if (unaff_EDI == (Text *)0x0) break;
    pTVar22 = (Text *)0x0;
    if (unaff_EDI->klass == (Text__Class *)((ulonglong)uVar20 >> 0x20)) {
      pTVar22 = unaff_EDI;
    }
    if (pTVar22 != (Text *)0x0) {
      (pTVar10->fields)._._.m_RaycastPadding.y = (float)pTVar22;
      pTVar22 = (Text *)0x0;
      if (unaff_EDI->klass == (Text__Class *)TypeInfo__System__Action) {
        pTVar22 = unaff_EDI;
      }
      if (pTVar22 != (Text *)0x0) {
        func_?();
        return;
      }
    }
    func_?();
    unaff_EDI = pTVar10;
  }
  (pTVar10->fields)._._.m_RaycastPadding.y = 0.0;
  func_?();
  return;
}


/* Void SelectWinningConditionImage(GameStatCounterType, MVPlayer) */

void Assembly-CSharp.dll::CurrentProgressNotification::
     CurrentProgressNotification_SelectWinningConditionImage
               (CurrentProgressNotification *this,GameStatCounterType__Enum winningConditionType,
               MVPlayer *player,MethodInfo *method)

{
  pCVar1 = this;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  index = 0;
  pLVar2 = (this->fields).winningConditionImages;
  if (pLVar2 != (List_1_CurrentProgressNotification_WinninConditionImage_ *)0x0) {
    while( true ) {
      if ((pLVar2->fields)._size <= index) {
        return;
      }
      pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (pCVar1->fields).winningConditionImages;
      if ((pLVar3 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar3,index,
                             MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
                            ), RVar4 == (RegexCharClass_SingleRange)0x0)) break;
      pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (pCVar1->fields).winningConditionImages;
      if (*(char *)((int)RVar4 + 8) == (undefined1)winningConditionType) {
        if ((((pLVar3 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
             || (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                         RegularExpressions::RegexCharClass+SingleRange]::
                         List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                   (pLVar3,index,
                                    MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
                                   ), RVar4 == (RegexCharClass_SingleRange)0x0)) ||
            (*(Component **)((int)RVar4 + 0xc) == (Component *)0x0)) ||
           (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (*(Component **)((int)RVar4 + 0xc),(MethodInfo *)0x0),
           this_00 == (GameObject *)0x0)) break;
        this._0_1_ = 1;
      }
      else {
        if (((pLVar3 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
            (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                               (pLVar3,index,
                                MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
                               ), RVar4 == (RegexCharClass_SingleRange)0x0)) ||
           ((*(Component **)((int)RVar4 + 0xc) == (Component *)0x0 ||
            (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 (*(Component **)((int)RVar4 + 0xc),(MethodInfo *)0x0),
            this_00 == (GameObject *)0x0)))) break;
        this._0_1_ = 0;
      }
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,(bool)this,(MethodInfo *)0x0);
      pLVar2 = (pCVar1->fields).winningConditionImages;
      index = index + 1;
      if (pLVar2 == (List_1_CurrentProgressNotification_WinninConditionImage_ *)0x0) break;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetWarningText(GameStatCounterType, Int32) */

void Assembly-CSharp.dll::CurrentProgressNotification::CurrentProgressNotification_SetWarningText
               (CurrentProgressNotification *this,GameStatCounterType__Enum winningConditionType,
               int32_t scoreLeft,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_S);
    func_?(&StringLiteral_KILL);
    func_?(&StringLiteral_STAR);
    func_?(&StringLiteral__LEFT_);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_CURRENT_TIME);
    cRam_? = '\x01';
  }
  if (((undefined1)winningConditionType == GameStatCounterType__Enum_Kill) ||
     ((str0 = StringLiteral_STAR,
      (undefined1)winningConditionType != GameStatCounterType__Enum_Collectible &&
      (str0 = ::StringLiteral__,
      (undefined1)winningConditionType == GameStatCounterType__Enum_OculusKill)))) {
    str0 = StringLiteral_KILL;
  }
  if (1 < scoreLeft) {
    str0 = mscorlib.dll::System::String::String_Concat_3(str0,StringLiteral_S,(MethodInfo *)0x0);
  }
  mscorlib.dll::System::String::String_Concat_3(str0,StringLiteral__LEFT_,(MethodInfo *)0x0);
  pTVar1 = (this->fields).warningText;
  if (pTVar1 == (Text *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (*(pTVar1->klass->vtable).set_text.methodPtr)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::CurrentProgressNotification::CurrentProgressNotification_Update
               (CurrentProgressNotification *this,MethodInfo *method)

{
  Notification::Notification_Update((Notification *)this,(MethodInfo *)0x0);
  if ((this->fields).shouldShowCurrentTime == 0) {
    return;
  }
  pTVar1 = (this->fields).scoreText;
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 != (MVNetworkGame *)0x0) &&
     (pMVar3 = (pMVar2->fields)._NetworkGameStateListener_k__BackingField,
     pMVar3 != (MVNetworkGameStateListener *)0x0)) {
    if ((pMVar3->fields).startTime < (this->fields).avatarStartTime) {
      iVar4 = (this->fields).avatarStartTime;
    }
    else {
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar2 == (MVNetworkGame *)0x0) ||
         (pMVar3 = (pMVar2->fields)._NetworkGameStateListener_k__BackingField,
         pMVar3 == (MVNetworkGameStateListener *)0x0)) goto code_?;
      iVar4 = (pMVar3->fields).startTime;
    }
    iVar4 = CurrentProgressNotification_CalculateCurrentTime(this,iVar4,(MethodInfo *)0x0);
    pSStack5 =
         WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                   (iVar4,GameStatCounterType__Enum_Flag,(MethodInfo *)0x0);
    if (pTVar1 != (Text *)0x0) {
      pMStack6 = (pTVar1->klass->vtable).set_text.method;
      pTStack7 = pTVar1;
      (*(pTVar1->klass->vtable).set_text.methodPtr)();
      return;
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


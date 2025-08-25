
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
      fVar1 = (fVar1 - (pFVar2->fields).RunStartTime) * _UNK_?;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      fVar3 = (float10)func_?((double)fVar1);
      return (int)fVar3;
    }
  }
  else {
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame *)0x0) {
      iVar4 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0);
      return iVar4 - startTime;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  iVar4 = (*pcVar5)();
  return iVar4;
}


/* Int32 ConvertSecondsToMilliSeconds(Single) */

int32_t Assembly-CSharp.dll::CurrentProgressNotification::
        CurrentProgressNotification_ConvertSecondsToMilliSeconds
                  (CurrentProgressNotification *this,float seconds,MethodInfo *method)

{
  fVar1 = seconds * _UNK_?;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
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
  pCVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__CurrentProgressNotification__DestroyNotification__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                   );
    func_?(&StringLiteral_YOU_HAVE);
    bStack_2 = 0x46;
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  uVar3 = 0;
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar4 == (MVNetworkGame *)0x0) ||
     (pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0),
     pMVar5 == (MVLocalPlayer *)0x0)) goto code_?;
  (this->fields).avatarStartTime = (pMVar5->fields).joinTime;
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar4 == (MVNetworkGame *)0x0) ||
     (pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0),
     pMVar5 == (MVLocalPlayer *)0x0)) goto code_?;
  unaff_EDI = (Action__Class *)(pMVar5->fields)._._ActorNr_k__BackingField;
  WinningConditionControl::WinningConditionControl_TryGetPrioritizedStat
            ((GameStatCounterType__Enum *)unaff_EDI,(MethodInfo *)0x0);
  (this->fields).currentDisplayedStatType = uVar3;
  uVar6 = 0x1046d4cd00000000;
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar4 == (MVNetworkGame *)0x0) ||
     (this_03 = (pMVar4->fields).teamManager, this_03 == (MVTeamManager *)0x0))
  goto code_?;
  pLVar7 = MVTeamManager::MVTeamManager_GetTeamList(this_03,(MethodInfo *)0x0);
  uVar8 = (undefined1)((uint)this_03 >> 0x18);
  if (pLVar7 == (List_1_MV_WorldObject_MVTeam_ *)0x0) goto code_?;
  this = (CurrentProgressNotification *)0x0;
  if ((pLVar7->fields)._size < 2) {
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar4 == (MVNetworkGame *)0x0) goto code_?;
    pAVar9 = (Action__Class *)(pMVar4->fields).gameStatCounterManager;
    data = (Dictionary_2_System_Object_System_Object_ *)0x0;
    pDStack_10 = (Dictionary_2_System_Object_System_Object_ *)CONCAT31(0x1046d4,uVar8);
    this = (CurrentProgressNotification *)&UNK_?;
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    unaff_ESI = pAVar9;
    if (pMVar4 == (MVNetworkGame *)0x0) goto code_?;
    this = (CurrentProgressNotification *)&UNK_?;
    pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0);
    data = (Dictionary_2_System_Object_System_Object_ *)pMVar4;
    if ((pMVar5 == (MVLocalPlayer *)0x0) || (pAVar9 == (Action__Class *)0x0))
    goto code_?;
    data = pDStack_10;
    unaff_ESI = (Action__Class *)
                MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                          ((GameStatCounterManager *)pAVar9,(GameStatCounterType__Enum)pDStack_10,
                           (pMVar5->fields)._._Team_k__BackingField,(int32_t)unaff_EDI,
                           (MethodInfo *)0x0);
    this = (CurrentProgressNotification *)pAVar9;
  }
  else {
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar4 == (MVNetworkGame *)0x0) goto code_?;
    pAVar9 = (Action__Class *)(pMVar4->fields).gameStatCounterManager;
    data = (Dictionary_2_System_Object_System_Object_ *)0x0;
    pDStack_10 = (Dictionary_2_System_Object_System_Object_ *)CONCAT31(0x1046d4,uVar8);
    this = (CurrentProgressNotification *)&UNK_?;
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    unaff_ESI = pAVar9;
    if (pMVar4 == (MVNetworkGame *)0x0) goto code_?;
    this = (CurrentProgressNotification *)&UNK_?;
    pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0);
    data = (Dictionary_2_System_Object_System_Object_ *)pMVar4;
    if ((pMVar5 == (MVLocalPlayer *)0x0) || (pAVar9 == (Action__Class *)0x0))
    goto code_?;
    this = (CurrentProgressNotification *)&UNK_?;
    unaff_ESI = (Action__Class *)
                MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetTeamCount
                          ((GameStatCounterManager *)pAVar9,(GameStatCounterType__Enum)pDStack_10,
                           (pMVar5->fields)._._Team_k__BackingField,(MethodInfo *)0x0);
    data = (Dictionary_2_System_Object_System_Object_ *)pAVar9;
  }
  iVar11 = (uint)CONCAT11(uVar8,uVar8) << 0x10;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    uVar8 = (undefined1)((uint)iVar11 >> 0x10);
    cRam_? = '\x01';
  }
  cVar12 = (char)((uint)iVar11 >> 0x18);
  unaff_EDI = (Action__Class *)0x0;
  switch(uVar8) {
  case 1:
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar4 == (MVNetworkGame *)0x0) goto code_?;
    this_00 = (pMVar4->fields)._WinningConditionManager_k__BackingField;
    method_00 = 
    KillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<KillLimitClient>__
    ;
    break;
  case 2:
  case 8:
    unaff_EDI = unaff_ESI;
    goto code_?;
  case 3:
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar4 == (MVNetworkGame *)0x0) goto code_?;
    this_00 = (pMVar4->fields)._WinningConditionManager_k__BackingField;
    method_00 = 
    AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
    ;
    break;
  default:
    goto code_?;
  case 6:
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar4 == (MVNetworkGame *)0x0) goto code_?;
    this_00 = (pMVar4->fields)._WinningConditionManager_k__BackingField;
    method_00 = 
    OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__
    ;
  }
  if (this_00 == (WinningConditionManager *)0x0) goto code_?;
  pOVar13 = MVWorldObject.dll::WinningConditionManager::
            WinningConditionManager_GetSingletonWinnerConditionByType(this_00,method_00);
  pOVar14 = (Object__Class *)0x0;
  if (pOVar13 != (Object *)0x0) {
    pOVar14 = pOVar13[2].klass;
  }
  unaff_EDI = (Action__Class *)((int)pOVar14 - (int)unaff_ESI);
code_?:
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar4 == (MVNetworkGame *)0x0) ||
     (this_01 = (pMVar4->fields).playerContainer, this_01 == (MVPlayerContainer *)0x0))
  goto code_?;
  bVar15 = MVPlayerContainer::MVPlayerContainer_TryGetValue
                     (this_01,(int32_t)((ulonglong)uVar6 >> 0x20),(MVPlayer **)&stack0xfffffff0,
                      (MethodInfo *)0x0);
  if (bVar15 == 0) {
    return;
  }
  Notification::Notification_Initialize((Notification *)pCVar1,data,(MethodInfo *)0x0);
  pTVar16 = (pCVar1->fields).currentProgressText;
  if (cVar12 == '\x02') {
    if (pTVar16 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar16->klass->vtable).set_text.method)();
    pAVar9 = (Action__Class *)(pCVar1->fields).scoreText;
    iVar17 = CurrentProgressNotification_GetStartTime(pCVar1,(MethodInfo *)0x0);
    unaff_ESI = pAVar9;
    if ((pCVar1->fields).currentDisplayedStatType == 8) {
      UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pFVar18 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                          ((MethodInfo *)0x0);
      if (pFVar18 == (FlagDebriefingControl *)0x0) goto code_?;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      fVar19 = (float10)func_?();
      iVar20 = (int32_t)fVar19;
    }
    else {
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar4 == (MVNetworkGame *)0x0) goto code_?;
      iVar20 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(pMVar4,(MethodInfo *)0x0);
      iVar20 = iVar20 - iVar17;
    }
    WinningConditionControl::WinningConditionControl_MakeIntoScoreText
              (iVar20,GameStatCounterType__Enum_Flag,(MethodInfo *)0x0);
code_?:
    unaff_ESI = (Action__Class *)0x0;
    if (pAVar9 == (Action__Class *)0x0) goto code_?;
    (*(code *)((Delegate__Class *)(pAVar9->_0).image)[2].vtable.Clone.method)();
    (pCVar1->fields).shouldShowCurrentTime = 1;
  }
  else {
    if (cVar12 == '\b') {
      if (pTVar16 == (Text *)0x0) goto code_?;
      (*(code *)(pTVar16->klass->vtable).set_text.method)();
      pAVar9 = (Action__Class *)(pCVar1->fields).scoreText;
      fVar21 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pFVar18 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                          ((MethodInfo *)0x0);
      unaff_ESI = pAVar9;
      if (pFVar18 == (FlagDebriefingControl *)0x0) goto code_?;
      iVar17 = CurrentProgressNotification_ConvertSecondsToMilliSeconds
                         (pCVar1,fVar21 - (pFVar18->fields).RunStartTime,(MethodInfo *)0x0);
      WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                (iVar17,GameStatCounterType__Enum_TimeAttackFlag,(MethodInfo *)0x0);
      goto code_?;
    }
    if (pTVar16 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar16->klass->vtable).set_text.method)();
    pTVar16 = (pCVar1->fields).scoreText;
    WinningConditionControl::WinningConditionControl_MakeIntoScoreText
              ((int32_t)unaff_EDI,CONCAT31((int3)((ulonglong)uVar6 >> 0x28),cVar12),
               (MethodInfo *)0x0);
    unaff_ESI = (Action__Class *)0x0;
    if (pTVar16 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar16->klass->vtable).set_text.method)();
    (pCVar1->fields).shouldShowCurrentTime = 0;
  }
  unaff_ESI = (Action__Class *)(pCVar1->fields).fader;
  if (unaff_ESI != (Action__Class *)0x0) {
    (unaff_ESI->_0).castClass = (Il2CppClass *)(unaff_ESI->_0).this_arg.data;
    this_02 = (List_1_GameStatCounterType_ *)(unaff_ESI->_0).byval_arg.data.typeHandle;
    *(undefined1 *)&(unaff_ESI->_0).this_arg.attrs = 1;
    if (this_02 != (List_1_GameStatCounterType_ *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                ((CanvasGroup *)this_02,0.0,(MethodInfo *)0x0);
      (unaff_ESI->_0).element_class = (Il2CppClass *)0x0;
      iVar11 = (uint)CONCAT11(cVar12,cVar12) << 0x10;
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      pLVar22 = (pCVar1->fields).winningConditionImages;
      unaff_ESI = (Action__Class *)0x0;
      if (pLVar22 != (List_1_CurrentProgressNotification_WinninConditionImage_ *)0x0) {
        while ((int)unaff_ESI < (pLVar22->fields)._size) {
          pLVar23 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                   (pCVar1->fields).winningConditionImages;
          if ((pLVar23 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
             || (RVar24 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                          RegularExpressions::RegexCharClass+SingleRange]::
                          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                    (pLVar23,(int32_t)unaff_ESI,
                                     MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
                                    ), RVar24 == (RegexCharClass_SingleRange)0x0))
          goto code_?;
          pLVar23 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                   (pCVar1->fields).winningConditionImages;
          if (*(char *)((int)RVar24 + 8) == (char)((uint)iVar11 >> 0x10)) {
            if ((((pLVar23 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                             0x0) ||
                 (RVar24 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                           RegularExpressions::RegexCharClass+SingleRange]::
                           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                     (pLVar23,(int32_t)unaff_ESI,
                                      MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
                                     ), RVar24 == (RegexCharClass_SingleRange)0x0)) ||
                (*(Component **)((int)RVar24 + 0xc) == (Component *)0x0)) ||
               (pGVar25 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject
                                    (*(Component **)((int)RVar24 + 0xc),(MethodInfo *)0x0),
               pGVar25 == (GameObject *)0x0)) goto code_?;
            pDStack_10._0_1_ = 1;
          }
          else {
            if (((pLVar23 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0
                 ) || (RVar24 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                                RegularExpressions::RegexCharClass+SingleRange]::
                                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                          (pLVar23,(int32_t)unaff_ESI,
                                           MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
                                          ), RVar24 == (RegexCharClass_SingleRange)0x0)) ||
               ((*(Component **)((int)RVar24 + 0xc) == (Component *)0x0 ||
                (pGVar25 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_gameObject
                                     (*(Component **)((int)RVar24 + 0xc),(MethodInfo *)0x0),
                pGVar25 == (GameObject *)0x0)))) goto code_?;
            pDStack_10._0_1_ = 0;
          }
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar25,(bool)pDStack_10,(MethodInfo *)0x0);
          pLVar22 = (pCVar1->fields).winningConditionImages;
          unaff_ESI = (Action__Class *)((int)&(unaff_ESI->_0).image + 1);
          if (pLVar22 == (List_1_CurrentProgressNotification_WinninConditionImage_ *)0x0)
          goto code_?;
        }
        cVar12 = (char)((uint)iVar11 >> 0x18);
        if (cRam_? == '\0') {
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        if ((cVar12 == '\x01') ||
           ((str0 = StringLiteral_STAR, cVar12 != '\x03' &&
            (str0 = ::StringLiteral__, cVar12 == '\x06')))) {
          str0 = StringLiteral_KILL;
        }
        if (1 < (int)unaff_EDI) {
          str0 = mscorlib.dll::System::String::String_Concat_3
                           (str0,StringLiteral_S,(MethodInfo *)0x0);
        }
        mscorlib.dll::System::String::String_Concat_3(str0,StringLiteral__LEFT_,(MethodInfo *)0x0);
        pTVar16 = (pCVar1->fields).warningText;
        if (pTVar16 != (Text *)0x0) {
          (*(code *)(pTVar16->klass->vtable).set_text.method)();
          pNVar26 = (pCVar1->fields).fader;
          if (pNVar26 != (NotificationFade *)0x0) {
            unaff_EDI = (Action__Class *)(pNVar26->fields).OnFinished;
            unaff_ESI = (Action__Class *)func_?();
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      ((NavMesh_OnNavMeshPreUpdate *)unaff_ESI,(Object *)pCVar1,
                       MethodInfo__CurrentProgressNotification__DestroyNotification__,
                       (MethodInfo *)0x0);
            pAVar27 = (Action *)
                      mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)unaff_EDI,(Delegate *)unaff_ESI,(MethodInfo *)0x0);
            if (pAVar27 == (Action *)0x0) {
              (pNVar26->fields).OnFinished = (Action *)0x0;
              func_?();
              return;
            }
            pAVar28 = (Action *)0x0;
            if (pAVar27->klass == TypeInfo__System__Action) {
              pAVar28 = pAVar27;
            }
            if (pAVar28 != (Action *)0x0) {
              (pNVar26->fields).OnFinished = pAVar28;
              pAVar28 = (Action *)0x0;
              if (pAVar27->klass == TypeInfo__System__Action) {
                pAVar28 = pAVar27;
              }
              unaff_ESI = TypeInfo__System__Action;
              if (pAVar28 != (Action *)0x0) {
                func_?();
                return;
              }
              goto code_?;
            }
            func_?();
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  pCVar1 = this;
  func_?();
  bVar29 = CARRY1(in_stack_30,extraout_CL) ||
           CARRY1(in_stack_30 + extraout_CL,CARRY4((uint)unaff_ESI,extraout_EDX));
  pbVar31 = (byte *)((int)&unaff_EDI[-0x630344]._1.typeHierarchy + 2);
  bVar32 = *pbVar31;
  bVar33 = *pbVar31;
  *pbVar31 = bVar33 + extraout_CL + bVar29;
  pcVar34 = (char *)((int)&unaff_EDI[-0x64c425].vtable.GetInvocationList.method + 2);
  *pcVar34 = *pcVar34 + extraout_CL +
            (CARRY1(bStack_2,extraout_AH) ||
            CARRY1(bStack_2 + extraout_AH,
                   CARRY1(bVar32,extraout_CL) || CARRY1(bVar33 + extraout_CL,bVar29)));
  in((short)extraout_EDX);
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  iVar11 = 0;
  pLVar22 = (this->fields).winningConditionImages;
  if (pLVar22 != (List_1_CurrentProgressNotification_WinninConditionImage_ *)0x0) {
    while( true ) {
      if ((pLVar22->fields)._size <= iVar11) {
        return;
      }
      pLVar23 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (pCVar1->fields).winningConditionImages;
      if ((pLVar23 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar24 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                             (pLVar23,iVar11,
                              MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
                             ), RVar24 == (RegexCharClass_SingleRange)0x0)) break;
      pLVar23 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (pCVar1->fields).winningConditionImages;
      if (*(char *)((int)RVar24 + 8) == (char)data) {
        if ((((pLVar23 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
             || (RVar24 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                          RegularExpressions::RegexCharClass+SingleRange]::
                          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                    (pLVar23,iVar11,
                                     MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
                                    ), RVar24 == (RegexCharClass_SingleRange)0x0)) ||
            (*(Component **)((int)RVar24 + 0xc) == (Component *)0x0)) ||
           (pGVar25 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (*(Component **)((int)RVar24 + 0xc),(MethodInfo *)0x0),
           pGVar25 == (GameObject *)0x0)) break;
        this._0_1_ = 1;
      }
      else {
        if (((pLVar23 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
            (RVar24 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                      RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                (pLVar23,iVar11,
                                 MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
                                ), RVar24 == (RegexCharClass_SingleRange)0x0)) ||
           ((*(Component **)((int)RVar24 + 0xc) == (Component *)0x0 ||
            (pGVar25 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 (*(Component **)((int)RVar24 + 0xc),(MethodInfo *)0x0),
            pGVar25 == (GameObject *)0x0)))) break;
        this._0_1_ = 0;
      }
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar25,(bool)this,(MethodInfo *)0x0);
      pLVar22 = (pCVar1->fields).winningConditionImages;
      iVar11 = iVar11 + 1;
      if (pLVar22 == (List_1_CurrentProgressNotification_WinninConditionImage_ *)0x0) break;
    }
  }
  func_?();
  pcVar35 = (code *)swi(3);
  (*pcVar35)();
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
  (*(code *)(pTVar1->klass->vtable).set_text.method)();
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
      pIStack6 = (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
      pTStack7 = pTVar1;
      (*(code *)(pTVar1->klass->vtable).set_text.method)();
      return;
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


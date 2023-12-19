
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
  method_00 = (String **)unaff_ESI;
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  uVar3 = 0;
  uVar4 = 1;
  if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
  pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0);
  uVar3 = 0;
  uVar4 = 1;
  if (pMVar5 == (MVLocalPlayer *)0x0) goto code_?;
  (this->fields).avatarStartTime = (pMVar5->fields).joinTime;
  method_00 = (String **)&UNK_?;
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  uVar3 = 0;
  uVar4 = 1;
  unaff_EBX = this;
  if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
  method_00 = (String **)&UNK_?;
  pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0);
  uVar3 = 0;
  uVar4 = 1;
  if (pMVar5 == (MVLocalPlayer *)0x0) goto code_?;
  unaff_EDI = (Delegate *)(pMVar5->fields)._._ActorNr_k__BackingField;
  puVar6 = &UNK_?;
  WinningConditionControl::WinningConditionControl_TryGetPrioritizedStat
            ((GameStatCounterType__Enum *)((int)&uStack_1 + 3),(MethodInfo *)0x0);
  in_stack_7 = (MethodInfo *)0x0;
  (this->fields).currentDisplayedStatType = uStack_1._3_1_;
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  uVar3 = 0;
  uVar4 = 1;
  if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
  this_03 = (pMVar2->fields).teamManager;
  uVar3 = 0;
  uVar4 = 1;
  if (this_03 == (MVTeamManager *)0x0) goto code_?;
  pLVar8 = MVTeamManager::MVTeamManager_GetTeamList(this_03,(MethodInfo *)0x0);
  uVar3 = 0;
  uVar4 = 1;
  if (pLVar8 == (List_1_MV_WorldObject_MVTeam_ *)0x0) goto code_?;
  if ((pLVar8->fields)._size < 2) {
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    uVar3 = 0;
    uVar4 = 1;
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    unaff_ESI = (Action__Class *)(pMVar2->fields).gameStatCounterManager;
    data = (Dictionary_2_System_Object_System_Object_ *)
           CONCAT31((int3)((uint)in_stack_7 >> 8),uStack_1._3_1_);
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    uVar3 = 0;
    uVar4 = 1;
    in_stack_7 = (MethodInfo *)data;
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0);
    uVar3 = 0;
    uVar4 = 1;
    in_stack_7 = (MethodInfo *)data;
    if (pMVar5 == (MVLocalPlayer *)0x0) goto code_?;
    uVar3 = 0;
    uVar4 = 1;
    if (unaff_ESI == (Action__Class *)0x0) goto code_?;
    pAVar9 = (Action__Class *)
              MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                        ((GameStatCounterManager *)unaff_ESI,(GameStatCounterType__Enum)data,
                         (pMVar5->fields)._._Team_k__BackingField,(int32_t)unaff_EDI,
                         (MethodInfo *)0x0);
  }
  else {
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    uVar3 = 0;
    uVar4 = 1;
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    unaff_ESI = (Action__Class *)(pMVar2->fields).gameStatCounterManager;
    in_stack_7 = (MethodInfo *)CONCAT31((int3)((uint)in_stack_7 >> 8),uStack_1._3_1_);
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    uVar3 = 0;
    uVar4 = 1;
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0);
    uVar3 = 0;
    uVar4 = 1;
    if (pMVar5 == (MVLocalPlayer *)0x0) goto code_?;
    uVar3 = 0;
    uVar4 = 1;
    if (unaff_ESI == (Action__Class *)0x0) goto code_?;
    pAVar9 = (Action__Class *)
              MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetTeamCount
                        ((GameStatCounterManager *)unaff_ESI,
                         (GameStatCounterType__Enum)in_stack_7,
                         (pMVar5->fields)._._Team_k__BackingField,(MethodInfo *)0x0);
    data = (Dictionary_2_System_Object_System_Object_ *)unaff_ESI;
  }
  uVar10 = SUB43(this_03,0);
  bVar11 = uStack_1._3_1_;
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
  unaff_EDI = (Delegate *)0x0;
  if (bVar11 - 1 < 8) {
    (**(code **)(&UNK_? + (bVar11 - 1) * 4))();
    return;
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  uVar3 = 0;
  uVar4 = 1;
  unaff_ESI = pAVar9;
  if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
  this_00 = (pMVar2->fields).playerContainer;
  uVar3 = 0;
  uVar4 = 1;
  if (this_00 == (MVPlayerContainer *)0x0) goto code_?;
  bVar12 = MVPlayerContainer::MVPlayerContainer_TryGetValue
                     (this_00,(int32_t)puVar6,(MVPlayer **)&stack0xffffffec,(MethodInfo *)0x0);
  if (bVar12 == 0) {
    return;
  }
  Notification::Notification_Initialize((Notification *)this,data,(MethodInfo *)0x0);
  pTVar13 = (this->fields).currentProgressText;
  if (uStack_1._3_1_ == '\x02') {
    uVar3 = 0;
    uVar4 = 1;
    if (pTVar13 == (Text *)0x0) goto code_?;
    method_00 = (String **)::StringLiteral__;
    (*(code *)(pTVar13->klass->vtable).set_text.method)
              (pTVar13,::StringLiteral__,
               (pTVar13->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    unaff_ESI = (Action__Class *)(this->fields).scoreText;
    iVar14 = CurrentProgressNotification_GetStartTime(this,(MethodInfo *)0x0);
    if ((this->fields).currentDisplayedStatType == 8) {
      fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pFVar16 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                          ((MethodInfo *)0x0);
      uVar3 = 0;
      uVar4 = 1;
      if (pFVar16 == (FlagDebriefingControl *)0x0) goto code_?;
      method_00 = (String **)(fVar15 - (pFVar16->fields).RunStartTime);
      iVar17 = CurrentProgressNotification_ConvertSecondsToMilliSeconds
                         (this,(float)method_00,(MethodInfo *)0x0);
    }
    else {
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      uVar3 = 0;
      uVar4 = 1;
      if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
      method_00 = (String **)0x0;
      iVar17 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(pMVar2,(MethodInfo *)0x0);
      iVar17 = iVar17 - iVar14;
    }
    in_stack_7 = (MethodInfo *)0x0;
    ppMVar18 = (MethodInfo **)
               WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                         (iVar17,GameStatCounterType__Enum_Flag,(MethodInfo *)0x0);
    pAVar9 = unaff_ESI;
code_?:
    uVar3 = 0;
    uVar4 = 1;
    unaff_ESI = (Action__Class *)0x0;
    if (pAVar9 == (Action__Class *)0x0) goto code_?;
    pGVar19 = (GameStatCounterManager__Class *)(pAVar9->_0).image;
    (*(code *)pGVar19[3]._0.namespaze)(pAVar9,ppMVar18,pGVar19[3]._0.byval_arg.data.dummy);
    (this->fields).shouldShowCurrentTime = 1;
  }
  else {
    if (uStack_1._3_1_ == '\b') {
      uVar3 = 0;
      uVar4 = 1;
      if (pTVar13 == (Text *)0x0) goto code_?;
      method_00 = (String **)::StringLiteral__;
      (*(code *)(pTVar13->klass->vtable).set_text.method)
                (pTVar13,::StringLiteral__,
                 (pTVar13->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      unaff_ESI = (Action__Class *)(this->fields).scoreText;
      fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pFVar16 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                          ((MethodInfo *)0x0);
      uVar3 = 0;
      uVar4 = 1;
      if (pFVar16 == (FlagDebriefingControl *)0x0) goto code_?;
      iVar14 = CurrentProgressNotification_ConvertSecondsToMilliSeconds
                         (this,fVar15 - (pFVar16->fields).RunStartTime,(MethodInfo *)0x0);
      ppMVar18 = (MethodInfo **)
                 WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                           (iVar14,GameStatCounterType__Enum_TimeAttackFlag,(MethodInfo *)0x0);
      pAVar9 = unaff_ESI;
      goto code_?;
    }
    uVar3 = 0;
    uVar4 = 1;
    if (pTVar13 == (Text *)0x0) goto code_?;
    method_00 = (String **)StringLiteral_YOU_HAVE;
    (*(code *)(pTVar13->klass->vtable).set_text.method)
              (pTVar13,StringLiteral_YOU_HAVE,
               (pTVar13->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pTVar13 = (this->fields).scoreText;
    ppMVar18 = (MethodInfo **)
               WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                         (0,CONCAT31(uVar10,uStack_1._3_1_),(MethodInfo *)0x0);
    uVar3 = 0;
    uVar4 = 1;
    unaff_ESI = (Action__Class *)0x0;
    if (pTVar13 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar13->klass->vtable).set_text.method)
              (pTVar13,ppMVar18,(pTVar13->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    (this->fields).shouldShowCurrentTime = 0;
  }
  unaff_ESI = (Action__Class *)(this->fields).fader;
  uVar3 = 0;
  uVar4 = 1;
  method_00 = (String **)ppMVar18;
  if (unaff_ESI != (Action__Class *)0x0) {
    (unaff_ESI->_0).castClass = (Il2CppClass *)(unaff_ESI->_0).this_arg.data;
    this_01 = (List_1_GameStatCounterType_ *)(unaff_ESI->_0).byval_arg.data.typeHandle;
    *(undefined1 *)&(unaff_ESI->_0).this_arg.attrs = 1;
    uVar3 = 0;
    uVar4 = 1;
    if (this_01 != (List_1_GameStatCounterType_ *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                ((CanvasGroup *)this_01,0.0,(MethodInfo *)0x0);
      (unaff_ESI->_0).element_class = (Il2CppClass *)0x0;
      puVar6 = (undefined *)((uint)uStack_1 & 0xff000000);
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Count__
                       );
        ppMVar18 = &
                   MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
        ;
        func_?();
        cRam_? = '\x01';
      }
      pLVar20 = (this->fields).winningConditionImages;
      unaff_ESI = (Action__Class *)0x0;
      method_00 = (String **)ppMVar18;
      puVar21 = uStack_1;
      while( true ) {
        uVar4 = 1;
        uVar3 = 0;
        uStack_1 = puVar21;
        if (pLVar20 == (List_1_CurrentProgressNotification_WinninConditionImage_ *)0x0) break;
        cVar22 = (char)((uint)puVar6 >> 0x18);
        if ((pLVar20->fields)._size <= (int)unaff_ESI) {
          uStack_1._3_1_ = (uint8_t)((uint)puVar21 >> 0x18);
          cVar22 = uStack_1._3_1_;
          if (cRam_? == '\0') {
            func_?(&StringLiteral_S);
            method_00 = &StringLiteral_KILL;
            func_?();
            func_?(&StringLiteral_STAR);
            func_?(&StringLiteral__LEFT_);
            func_?(&::StringLiteral__);
            func_?(&StringLiteral_CURRENT_TIME);
            cRam_? = '\x01';
            puVar21 = uStack_1;
          }
          uStack_1 = puVar21;
          if ((cVar22 == '\x01') ||
             ((str0 = StringLiteral_STAR, cVar22 != '\x03' &&
              (str0 = ::StringLiteral__, cVar22 == '\x06')))) {
            str0 = StringLiteral_KILL;
          }
          pAVar9 = (Action__Class *)
                    mscorlib.dll::System::String::String_Concat_3
                              (str0,StringLiteral__LEFT_,(MethodInfo *)0x0);
          if ((cVar22 == '\x02') || (cVar22 == '\b')) {
            pAVar9 = (Action__Class *)StringLiteral_CURRENT_TIME;
          }
          pTVar13 = (this->fields).warningText;
          uVar3 = 0;
          uVar4 = pTVar13 == (Text *)0x0;
          if (!(bool)uVar4) {
            (*(code *)(pTVar13->klass->vtable).set_text.method)
                      (pTVar13,pAVar9,
                       (pTVar13->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
            in_stack_7 = (MethodInfo *)(this->fields).fader;
            uVar3 = 0;
            uVar4 = in_stack_7 == (MethodInfo *)0x0;
            method_00 = (String **)pAVar9;
            if (!(bool)uVar4) {
              unaff_EDI = *(Delegate **)&in_stack_7->slot;
              unaff_ESI = (Action__Class *)func_?(TypeInfo__System__Action);
              UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
              NavMesh_OnNavMeshPreUpdate__ctor
                        ((NavMesh_OnNavMeshPreUpdate *)unaff_ESI,(Object *)this,
                         MethodInfo__CurrentProgressNotification__DestroyNotification__,
                         (MethodInfo *)0x0);
              method_00 = (String **)0x0;
              goto code_?;
            }
          }
          break;
        }
        pLVar23 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).winningConditionImages;
        uVar3 = 0;
        uVar4 = 1;
        if (pLVar23 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
        break;
        method_00 = (String **)unaff_ESI;
        RVar24 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                           (pLVar23,(int32_t)unaff_ESI,
                            MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
                           );
        uVar3 = 0;
        uVar4 = 1;
        if (RVar24 == (RegexCharClass_SingleRange)0x0) break;
        pLVar23 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).winningConditionImages;
        if (*(char *)((int)RVar24 + 8) == cVar22) {
          uVar3 = 0;
          uVar4 = 1;
          if (pLVar23 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
          break;
          in_stack_7 =
               MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
          ;
          RVar24 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                             (pLVar23,(int32_t)unaff_ESI,
                              MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
                             );
          uVar3 = 0;
          uVar4 = 1;
          if (RVar24 == (RegexCharClass_SingleRange)0x0) break;
          uVar3 = 0;
          uVar4 = 1;
          if (*(Component **)((int)RVar24 + 0xc) == (Component *)0x0) break;
          this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              (*(Component **)((int)RVar24 + 0xc),(MethodInfo *)0x0);
          uVar3 = 0;
          uVar4 = 1;
          if (this_02 == (GameObject *)0x0) break;
          in_stack_7 = (MethodInfo *)CONCAT31((int3)((uint)in_stack_7 >> 8),1);
        }
        else {
          uVar3 = 0;
          uVar4 = 1;
          if (pLVar23 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
          break;
          in_stack_7 =
               MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
          ;
          RVar24 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                             (pLVar23,(int32_t)unaff_ESI,
                              MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
                             );
          uVar3 = 0;
          uVar4 = 1;
          if (RVar24 == (RegexCharClass_SingleRange)0x0) break;
          uVar3 = 0;
          uVar4 = 1;
          if (*(Component **)((int)RVar24 + 0xc) == (Component *)0x0) break;
          this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              (*(Component **)((int)RVar24 + 0xc),(MethodInfo *)0x0);
          uVar3 = 0;
          uVar4 = 1;
          if (this_02 == (GameObject *)0x0) break;
          in_stack_7 = (MethodInfo *)((uint)in_stack_7 & 0xffffff00);
        }
        puVar6 = &UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_02,(bool)in_stack_7,(MethodInfo *)0x0);
        pLVar20 = (this->fields).winningConditionImages;
        unaff_ESI = (Action__Class *)((int)&(unaff_ESI->_0).image + 1);
        puVar21 = uStack_1;
      }
    }
  }
code_?:
  do {
    func_?();
    while( true ) {
      uVar25 = func_?();
      iVar26 = (int)((ulonglong)uVar25 >> 0x20);
      if ((bool)uVar3 || (bool)uVar4) {
        bVar11 = *(byte *)&unaff_EBX->klass;
        bVar27 = (byte)uVar25;
        bVar28 = *(char *)&unaff_EBX->klass + bVar27;
        *(byte *)&unaff_EBX->klass = bVar28 + uVar3;
        cVar22 = *(char *)&unaff_EBX->klass;
        cVar29 = *(char *)&unaff_EBX->klass;
        uVar4 = *(undefined1 *)&unaff_EBX->klass;
        LOCK();
        bVar30 = *(byte *)(iVar26 + 0x11);
        *(byte *)(iVar26 + 0x11) = bVar27;
        UNLOCK();
        LOCK();
        cVar31 = *(char *)(iVar26 + 0x11);
        *(char *)(iVar26 + 0x11) = bVar30 + 0x86;
        UNLOCK();
        *(char *)&unaff_EBX->klass =
             *(char *)&unaff_EBX->klass + cVar31 +
             (0xfaefbd79 <
             CONCAT22((short)((ulonglong)uVar25 >> 0x10),
                      CONCAT11((cVar22 < '\0') << 7 | (cVar29 == '\0') << 6 | in_AF << 4 |
                               ((POPCOUNT(uVar4) & 1U) == 0) << 2 | 2U |
                               (CARRY1(bVar11,bVar27) || CARRY1(bVar28,uVar3)),bVar30)));
        LOCK();
        *(char *)(iVar26 + 0x12) = cVar31;
        UNLOCK();
        pcVar32 = (code *)swi(3);
        (*pcVar32)();
        return;
      }
code_?:
      pDVar33 = mscorlib.dll::System::Delegate::Delegate_Combine
                          (unaff_EDI,(Delegate *)unaff_ESI,(MethodInfo *)method_00);
      if (pDVar33 == (Delegate *)0x0) {
        in_stack_7->slot = 0;
        in_stack_7->parameters_count = 0;
        in_stack_7->field_0x2f = 0;
        func_?();
        return;
      }
      pDVar34 = (Delegate *)0x0;
      if ((Action__Class *)pDVar33->klass == TypeInfo__System__Action) {
        pDVar34 = pDVar33;
      }
      uVar3 = 0;
      uVar4 = pDVar34 == (Delegate *)0x0;
      if ((bool)uVar4) break;
      *(Delegate **)&in_stack_7->slot = pDVar34;
      pDVar34 = (Delegate *)0x0;
      if ((Action__Class *)pDVar33->klass == TypeInfo__System__Action) {
        pDVar34 = pDVar33;
      }
      uVar3 = 0;
      uVar4 = pDVar34 == (Delegate *)0x0;
      unaff_ESI = TypeInfo__System__Action;
      if (!(bool)uVar4) {
        func_?();
        return;
      }
    }
    func_?();
  } while( true );
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



/* Int32 CalculateCurrentTime(Int32) */

int32_t Assembly-CSharp.dll::CurrentProgressNotification::
        CurrentProgressNotification_CalculateCurrentTime
                  (CurrentProgressNotification *this,int32_t startTime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).currentDisplayedStatType == 8) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pFVar2 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl((MethodInfo *)0x0)
    ;
    if (pFVar2 != (FlagDebriefingControl *)0x0) {
      puVar3 = (undefined *)(pFVar2->fields).RunStartTime;
      if (cRam_? == '\0') {
        puVar3 = &UNK_?;
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Mathf);
      }
      iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                        ((fVar1 - (float)puVar3) * _UNK_?,(MethodInfo *)0x0);
      return iVar4;
    }
  }
  else {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame *)0x0) {
      iVar4 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0);
      return iVar4 - startTime;
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  iVar4 = (*pcVar5)();
  return iVar4;
}


/* Int32 ConvertSecondsToMilliSeconds(Single) */

int32_t Assembly-CSharp.dll::CurrentProgressNotification::
        CurrentProgressNotification_ConvertSecondsToMilliSeconds
                  (CurrentProgressNotification *this,float seconds,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                    (seconds * _UNK_?,(MethodInfo *)0x0);
  return iVar1;
}


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Int32 GetScoreLeftToWin(GameStatCounterType, Int32) */

int32_t Assembly-CSharp.dll::CurrentProgressNotification::
        CurrentProgressNotification_GetScoreLeftToWin
                  (GameStatCounterType__Enum counterType,int32_t scoreCount,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  switch(counterType & 0xff) {
  case GameStatCounterType__Enum_Kill:
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pPVar1 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    cVar2 = pPVar1 == (PrefabPool *)0x0;
    if (!(bool)cVar2) {
      this_00 = (WinningConditionManager *)
                PrefabPool::PrefabPool_get_MVSoundEmitterPrefab(pPVar1,(MethodInfo *)0x0);
      cVar2 = this_00 == (WinningConditionManager *)0x0;
      if (!(bool)cVar2) {
        counterType = (GameStatCounterType__Enum)
                      KillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<KillLimitClient>__
        ;
code_?:
        this = MVWorldObject.dll::WinningConditionManager::
               WinningConditionManager_GetSingletonWinnerConditionByType_6
                         (this_00,(MethodInfo *)counterType);
        pOVar3 = (Object *)0x0;
        if (this != (TimeAttackFlagReachedClient *)0x0) {
          pOVar3 = System.dll::System::Collections::Generic::
                    SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                    ::Single,System::Object]::
                    SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                              ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                                *)this,(MethodInfo *)0x0);
          scoreCount = (int32_t)this;
        }
        return (int)pOVar3 - scoreCount;
      }
    }
    break;
  case GameStatCounterType__Enum_Flag:
  case GameStatCounterType__Enum_TimeAttackFlag:
    return scoreCount;
  case GameStatCounterType__Enum_Collectible:
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pPVar1 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    cVar2 = pPVar1 == (PrefabPool *)0x0;
    if (!(bool)cVar2) {
      this_00 = (WinningConditionManager *)
                PrefabPool::PrefabPool_get_MVSoundEmitterPrefab(pPVar1,(MethodInfo *)0x0);
      cVar2 = this_00 == (WinningConditionManager *)0x0;
      if (!(bool)cVar2) {
        counterType = (GameStatCounterType__Enum)
                      AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
        ;
        goto code_?;
      }
    }
    break;
  default:
    return 0;
  case GameStatCounterType__Enum_OculusKill:
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pPVar1 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    cVar2 = pPVar1 == (PrefabPool *)0x0;
    if (!(bool)cVar2) {
      this_00 = (WinningConditionManager *)
                PrefabPool::PrefabPool_get_MVSoundEmitterPrefab(pPVar1,(MethodInfo *)0x0);
      cVar2 = this_00 == (WinningConditionManager *)0x0;
      if (!(bool)cVar2) {
        counterType = (GameStatCounterType__Enum)
                      OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__
        ;
        goto code_?;
      }
    }
  }
  uVar4 = func_?();
  pcVar5 = (char *)(extraout_ECX + -1);
  bVar6 = (byte)uVar4;
  if (pcVar5 == (char *)0x0 || cVar2 != '\0') {
    pbVar7 = (byte *)(extraout_ECX + -0x21);
    bVar8 = *pbVar7;
    *pbVar7 = *pbVar7 + bVar6;
    bVar9 = (byte)((ulonglong)uVar4 >> 8);
    bVar10 = (byte)((ulonglong)uVar4 >> 0x28);
    bVar11 = bVar10 + bVar9;
    bVar12 = CARRY1(bVar10,bVar9) || CARRY1(bVar11,CARRY1(bVar8,bVar6));
    uVar13 = (undefined2)((ulonglong)uVar4 >> 0x30);
    uVar14 = (undefined1)((ulonglong)uVar4 >> 0x20);
    bVar11 = bVar11 + CARRY1(bVar8,bVar6);
    if (extraout_ECX == 2 || bVar11 == 0) {
      bVar15 = CARRY1(bVar11,bVar9) || CARRY1(bVar11 + bVar9,bVar12);
      cVar2 = bVar11 + bVar9 + bVar12;
      pbVar7 = (byte *)CONCAT22(uVar13,CONCAT11(cVar2,uVar14));
      if (extraout_ECX != 3 && cVar2 != '\0') {
        *pbVar7 = *pbVar7 + bVar6;
        bVar6 = *pbVar7;
        pMVar16 = (MVGameControllerBase__Class *)uVar4;
        goto code_?;
      }
      pbVar7 = pbVar7 + -0x19efbb20;
      bVar6 = *pbVar7;
      bVar8 = *pbVar7;
      *pbVar7 = bVar8 + bVar9 + bVar15;
      bVar12 = *pbVar7 == 0;
      if (extraout_ECX == 4 || bVar12) {
        if (extraout_ECX == 5 ||
            (byte)(unaff_BL + bVar9 + (CARRY1(bVar6,bVar9) || CARRY1(bVar8 + bVar9,bVar15))) ==
            '\0') {
          pcVar17 = (code *)swi(3);
          iVar18 = (*pcVar17)();
          return iVar18;
        }
        goto code_?;
      }
      goto code_?;
    }
    if (0x73 < *(byte *)(unaff_EDI + 0x2000000)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pVVar19 = &((MVGameControllerBase__Class *)uVar4)[-1].vtable.InitWebGL;
    pVVar19->methodPtr =
         (Il2CppMethodPointer)((uint)pVVar19->methodPtr | CONCAT22(uVar13,CONCAT11(bVar11,uVar14)));
code_?:
    pMVar20 = (MVNetworkGame *)in(0xff);
  }
  else {
    *pcVar5 = *pcVar5 + bVar6;
    bVar6 = *(byte *)((int)&(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr + 3) & 2;
    pMVar16 = TypeInfo__MVGameControllerBase;
code_?:
    if (bVar6 != 0) {
      bVar12 = (pMVar16->_1).cctor_started == 0;
code_?:
      if (bVar12) {
        func_?();
      }
    }
    pMVar20 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  }
  if ((pMVar20 != (MVNetworkGame *)0x0) &&
     (pCVar21 = (Collection_1_VoxelHit_ *)
               InventoryItemPreviewer::InventoryItemPreviewer_get_PreviewGameObject
                         ((InventoryItemPreviewer *)pMVar20,(MethodInfo *)0x0),
     pCVar21 != (Collection_1_VoxelHit_ *)0x0)) {
    pIVar22 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
              Collection_1_VoxelHit__get_Items(pCVar21,(MethodInfo *)0x0);
    pIVar23 = _UNK_?;
    if ((int)_UNK_? <= (int)pIVar22) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar20 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar20 == (MVNetworkGame *)0x0) ||
         (pCVar21 = (Collection_1_VoxelHit_ *)
                   InventoryItemPreviewer::InventoryItemPreviewer_get_PreviewGameObject
                             ((InventoryItemPreviewer *)pMVar20,(MethodInfo *)0x0),
         pCVar21 == (Collection_1_VoxelHit_ *)0x0)) goto code_?;
      pIVar23 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                Collection_1_VoxelHit__get_Items(pCVar21,(MethodInfo *)0x0);
    }
    return (int32_t)pIVar23;
  }
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  iVar18 = (*pcVar17)();
  return iVar18;
}


/* Int32 GetStartTime() */

int32_t Assembly-CSharp.dll::CurrentProgressNotification::CurrentProgressNotification_GetStartTime
                  (CurrentProgressNotification *this,MethodInfo *method)

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
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pCVar2 = (Collection_1_VoxelHit_ *)
               InventoryItemPreviewer::InventoryItemPreviewer_get_PreviewGameObject
                         ((InventoryItemPreviewer *)pMVar1,(MethodInfo *)0x0),
     pCVar2 != (Collection_1_VoxelHit_ *)0x0)) {
    pIVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items(pCVar2,(MethodInfo *)0x0);
    if ((int)pIVar3 < iRam_?) {
      return iRam_?;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 != (MVNetworkGame *)0x0) &&
       (pCVar2 = (Collection_1_VoxelHit_ *)
                 InventoryItemPreviewer::InventoryItemPreviewer_get_PreviewGameObject
                           ((InventoryItemPreviewer *)pMVar1,(MethodInfo *)0x0),
       pCVar2 != (Collection_1_VoxelHit_ *)0x0)) {
      pIVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items(pCVar2,(MethodInfo *)0x0);
      return (int32_t)pIVar3;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::CurrentProgressNotification::CurrentProgressNotification_Initialize
               (CurrentProgressNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDStack_1 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 == (MVNetworkGame *)0x0) ||
     (this_00 = (PrefabPool *)MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0)
     , this_00 == (PrefabPool *)0x0)) goto code_?;
  pOVar3 = PrefabPool::PrefabPool_get_MVCheckpointPrefab(this_00,(MethodInfo *)0x0);
  (this->fields).avatarStartTime = (int32_t)pOVar3;
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
  pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0);
  if (pMVar4 == (MVLocalPlayer *)0x0) goto code_?;
  pSVar5 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
           NamedThemeAttribute_1_UnityEngine_Color__get_Name
                     ((NamedThemeAttribute_1_UnityEngine_Color_ *)pMVar4,(MethodInfo *)0x0);
  pLVar6 = (Link__Array *)&stack0xfffffff7;
  WinningConditionControl::WinningConditionControl_TryGetPrioritizedStat
            ((GameStatCounterType__Enum *)pLVar6,(MethodInfo *)0x0);
  pOVar7 = (Object__Array *)0x0;
  (this->fields).currentDisplayedStatType = (char)((uint)pLVar6 >> 0x18);
  uVar8 = 0x10;
  pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((pMVar9 == (MVNetworkGame *)0x0) ||
      (this_01 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                           ((DayNightCycle *)pMVar9,(MethodInfo *)0x0), this_01 == (SkyParam *)0x0))
     || (this_02 = MVTeamManager::MVTeamManager_GetTeamList
                             ((MVTeamManager *)this_01,(MethodInfo *)0x0),
        this_02 == (List_1_MV_WorldObject_MVTeam_ *)0x0)) goto code_?;
  pOVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
           Serialization::JsonProperty]::
           Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                     ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_02,
                      MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                     );
  if ((int)pOVar10 < 2) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar9 == (MVNetworkGame *)0x0) goto code_?;
    pGVar11 = (GameStatCounterManager *)
             DayNightCycle::DayNightCycle_get_CurrentStarsParam
                       ((DayNightCycle *)pMVar9,(MethodInfo *)0x0);
    pMVar12 = (MonitorData *)CONCAT31((int3)((uint)pMVar2 >> 8),uVar8);
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar2 == (MVNetworkGame *)0x0) ||
        (pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
        pMVar4 == (MVLocalPlayer *)0x0)) ||
       (pIVar13 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                  KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                  KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                            ((KogamaSettingNumericBase_1_System_Single_ *)pMVar4,(MethodInfo *)0x0),
       pGVar11 == (GameStatCounterManager *)0x0)) goto code_?;
    iVar14 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                       (pGVar11,(GameStatCounterType__Enum)pMVar12,(MVTeam__Enum)pIVar13,
                        (int32_t)pSVar5,(MethodInfo *)0x0);
  }
  else {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar9 == (MVNetworkGame *)0x0) goto code_?;
    pGVar11 = (GameStatCounterManager *)
             DayNightCycle::DayNightCycle_get_CurrentStarsParam
                       ((DayNightCycle *)pMVar9,(MethodInfo *)0x0);
    pMVar12 = (MonitorData *)CONCAT31((int3)((uint)pMVar2 >> 8),uVar8);
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar2 == (MVNetworkGame *)0x0) ||
        (pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
        pMVar4 == (MVLocalPlayer *)0x0)) ||
       (pIVar13 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                  KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                  KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                            ((KogamaSettingNumericBase_1_System_Single_ *)pMVar4,(MethodInfo *)0x0),
       pGVar11 == (GameStatCounterManager *)0x0)) goto code_?;
    iVar14 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetTeamCount
                       (pGVar11,(GameStatCounterType__Enum)pMVar12,(MVTeam__Enum)pIVar13,
                        (MethodInfo *)0x0);
  }
  pLVar6 = (Link__Array *)0x0;
  pMVar12 = (MonitorData *)
            CurrentProgressNotification_GetScoreLeftToWin
                      ((int)pOVar7 << 8,iVar14,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_03 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((this_03 == (MVAvatar *)0x0) ||
     (this_04 = MVAvatar::MVAvatar_get_Shield(this_03,(MethodInfo *)0x0),
     this_04 == (MVRuntimeDataVariableClampedFloat *)0x0)) goto code_?;
  bVar15 = MVPlayerContainer::MVPlayerContainer_TryGetValue
                    ((MVPlayerContainer *)this_04,(int32_t)pSVar5,(MVPlayer **)&pDStack_1,
                     (MethodInfo *)0x0);
  if (bVar15 == 0) {
    return;
  }
  Notification::Notification_Initialize
            ((Notification *)this,(Dictionary_2_System_Object_System_Object_ *)&pDStack_1,
             (MethodInfo *)0x0);
  uVar8 = (undefined1)((uint)pLVar6 >> 0x18);
  pTVar16 = (this->fields).currentProgressText;
  if (uVar8 == GameStatCounterType__Enum_Flag) {
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    if (pTVar16 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar16->klass->vtable).set_text.method)
              (pTVar16,TypeInfo__System__String->static_fields->Empty,
               (pTVar16->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pTVar16 = (this->fields).scoreText;
    iVar14 = CurrentProgressNotification_GetStartTime(this,(MethodInfo *)0x0);
    iVar14 = CurrentProgressNotification_CalculateCurrentTime(this,iVar14,(MethodInfo *)0x0);
    pSVar5 = WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                       (iVar14,GameStatCounterType__Enum_Flag,(MethodInfo *)0x0);
code_?:
    if (pTVar16 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar16->klass->vtable).set_text.method)
              (pTVar16,pSVar5,(pTVar16->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    (this->fields).shouldShowCurrentTime = 1;
  }
  else {
    if (uVar8 == GameStatCounterType__Enum_TimeAttackFlag) {
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      if (pTVar16 == (Text *)0x0) goto code_?;
      (*(code *)(pTVar16->klass->vtable).set_text.method)
                (pTVar16,TypeInfo__System__String->static_fields->Empty,
                 (pTVar16->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      pTVar16 = (this->fields).scoreText;
      pIVar17 = (Int32__Array *)
                UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pFVar18 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                          ((MethodInfo *)0x0);
      if (pFVar18 == (FlagDebriefingControl *)0x0) goto code_?;
      iVar14 = CurrentProgressNotification_ConvertSecondsToMilliSeconds
                         (this,(float)pIVar17 - (pFVar18->fields).RunStartTime,(MethodInfo *)0x0);
      pSVar5 = WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                         (iVar14,GameStatCounterType__Enum_TimeAttackFlag,(MethodInfo *)0x0);
      goto code_?;
    }
    if (pTVar16 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar16->klass->vtable).set_text.method)();
    pTVar16 = (this->fields).scoreText;
    pSVar5 = WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                       ((int32_t)pMVar12,CONCAT31((int3)pOVar7,(char)((uint)pLVar6 >> 0x18)),
                        (MethodInfo *)0x0);
    if (pTVar16 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar16->klass->vtable).set_text.method)
              (pTVar16,pSVar5,(pTVar16->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    (this->fields).shouldShowCurrentTime = 0;
  }
  pNVar19 = (this->fields).fader;
  if (pNVar19 != (NotificationFade *)0x0) {
    NotificationFade::NotificationFade_Activate(pNVar19,(MethodInfo *)0x0);
    pOVar7 = (Object__Array *)((uint)pLVar6 & 0xff000000);
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pLVar20 = (this->fields).winningConditionImages;
    index = 0;
    if (pLVar20 != (List_1_CurrentProgressNotification_WinninConditionImage_ *)0x0) {
      while (pOVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                      ::Serialization::JsonProperty]::
                      Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar20
                                 ,
                                 MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Count__
                                ), index < (int)pOVar10) {
        pLVar20 = (this->fields).winningConditionImages;
        if ((pLVar20 == (List_1_CurrentProgressNotification_WinninConditionImage_ *)0x0) ||
           (pIVar21 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                      IEventSystemHandler]::
                      List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar20,
                                 index,
                                 MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
                                ), pIVar21 == (IEventSystemHandler *)0x0)) goto code_?;
        pLVar20 = (this->fields).winningConditionImages;
        if (*(char *)&pIVar21[1].klass == (char)((uint)pOVar7 >> 0x18)) {
          if ((((pLVar20 == (List_1_CurrentProgressNotification_WinninConditionImage_ *)0x0) ||
               (pIVar21 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                          EventSystems::IEventSystemHandler]::
                          List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                    ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar20
                                     ,index,
                                     MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
                                    ), pIVar21 == (IEventSystemHandler *)0x0)) ||
              ((Component_1 *)pIVar21[1].monitor == (Component_1 *)0x0)) ||
             (this_05 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_get_gameObject
                                  ((Component_1 *)pIVar21[1].monitor,(MethodInfo *)0x0),
             this_05 == (GameObject *)0x0)) goto code_?;
          bVar15 = 1;
        }
        else {
          if (((pLVar20 == (List_1_CurrentProgressNotification_WinninConditionImage_ *)0x0) ||
              (pIVar21 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                         EventSystems::IEventSystemHandler]::
                         List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                   ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar20,
                                    index,
                                    MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
                                   ), pIVar21 == (IEventSystemHandler *)0x0)) ||
             (((Component_1 *)pIVar21[1].monitor == (Component_1 *)0x0 ||
              (this_05 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_1_get_gameObject
                                   ((Component_1 *)pIVar21[1].monitor,(MethodInfo *)0x0),
              this_05 == (GameObject *)0x0)))) goto code_?;
          bVar15 = 0;
        }
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_05,bVar15,(MethodInfo *)0x0);
        pLVar20 = (this->fields).winningConditionImages;
        index = index + 1;
        if (pLVar20 == (List_1_CurrentProgressNotification_WinninConditionImage_ *)0x0)
        goto code_?;
      }
      cVar22 = (char)((uint)pLVar6 >> 0x18);
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar5 = StringLiteral_STAR;
      if ((cVar22 != '\x03') &&
         ((cVar22 == '\x01' ||
          (pSVar5 = TypeInfo__System__String->static_fields->Empty, cVar22 == '\x06')))) {
        pSVar5 = StringLiteral_KILL;
      }
      if (1 < (int)pMVar12) {
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        pSVar5 = mscorlib.dll::System::String::String_Concat_2
                           (pSVar5,StringLiteral_S,(MethodInfo *)0x0);
      }
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar5 = mscorlib.dll::System::String::String_Concat_2
                         (pSVar5,StringLiteral__LEFT_,(MethodInfo *)0x0);
      if ((cVar22 == '\x02') || (cVar22 == '\b')) {
        pSVar5 = StringLiteral_CURRENT_TIME;
      }
      pTVar16 = (this->fields).warningText;
      if (pTVar16 != (Text *)0x0) {
        (*(code *)(pTVar16->klass->vtable).set_text.method)
                  (pTVar16,pSVar5,
                   (pTVar16->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
        pNVar19 = (this->fields).fader;
        if (pNVar19 != (NotificationFade *)0x0) {
          pAVar23 = (pNVar19->fields).OnFinished;
          this_06 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?(TypeInfo__System__Action);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (this_06,(Object *)this,
                     MethodInfo__CurrentProgressNotification__DestroyNotification__,
                     (MethodInfo *)0x0);
          pAVar24 = (Action *)
                    mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pAVar23,(Delegate *)this_06,(MethodInfo *)0x0);
          pAVar23 = (Action *)0x0;
          if (pAVar24 != (Action *)0x0) {
            if (pAVar24->klass == TypeInfo__System__Action) {
              pAVar23 = pAVar24;
            }
            if (pAVar23 == (Action *)0x0) {
              func_?();
              goto code_?;
            }
          }
          (pNVar19->fields).OnFinished = pAVar23;
          return;
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = 0;
  pLVar2 = (this->fields).winningConditionImages;
  if (pLVar2 != (List_1_CurrentProgressNotification_WinninConditionImage_ *)0x0) {
    while( true ) {
      pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                          MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Count__
                         );
      if ((int)pOVar3 <= index) {
        return;
      }
      pLVar2 = (pCVar1->fields).winningConditionImages;
      if ((pLVar2 == (List_1_CurrentProgressNotification_WinninConditionImage_ *)0x0) ||
         (pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,index,
                              MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
                             ), pIVar4 == (IEventSystemHandler *)0x0)) break;
      pLVar2 = (pCVar1->fields).winningConditionImages;
      if (*(undefined1 *)&pIVar4[1].klass == (undefined1)winningConditionType) {
        if ((((pLVar2 == (List_1_CurrentProgressNotification_WinninConditionImage_ *)0x0) ||
             (pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                       ::IEventSystemHandler]::
                       List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                 ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,
                                  index,
                                  MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
                                 ), pIVar4 == (IEventSystemHandler *)0x0)) ||
            ((Component_1 *)pIVar4[1].monitor == (Component_1 *)0x0)) ||
           (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                                ((Component_1 *)pIVar4[1].monitor,(MethodInfo *)0x0),
           this_00 == (GameObject *)0x0)) break;
        this._0_1_ = 1;
      }
      else {
        if (((pLVar2 == (List_1_CurrentProgressNotification_WinninConditionImage_ *)0x0) ||
            (pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                      IEventSystemHandler]::
                      List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,
                                 index,
                                 MethodInfo__System__Collections__Generic__List<CurrentProgressNotification::WinninConditionImage>__get_Item_int_
                                ), pIVar4 == (IEventSystemHandler *)0x0)) ||
           (((Component_1 *)pIVar4[1].monitor == (Component_1 *)0x0 ||
            (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject
                                 ((Component_1 *)pIVar4[1].monitor,(MethodInfo *)0x0),
            this_00 == (GameObject *)0x0)))) break;
        this._0_1_ = 0;
      }
      winningConditionType = (GameStatCounterType__Enum)&UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,(bool)this,(MethodInfo *)0x0);
      pLVar2 = (pCVar1->fields).winningConditionImages;
      index = index + 1;
      if (pLVar2 == (List_1_CurrentProgressNotification_WinninConditionImage_ *)0x0) break;
    }
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  str0 = StringLiteral_STAR;
  if (((undefined1)winningConditionType != GameStatCounterType__Enum_Collectible) &&
     (((undefined1)winningConditionType == GameStatCounterType__Enum_Kill ||
      (str0 = TypeInfo__System__String->static_fields->Empty,
      (undefined1)winningConditionType == GameStatCounterType__Enum_OculusKill)))) {
    str0 = StringLiteral_KILL;
  }
  if (1 < scoreLeft) {
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    str0 = mscorlib.dll::System::String::String_Concat_2(str0,StringLiteral_S,(MethodInfo *)0x0);
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  mscorlib.dll::System::String::String_Concat_2(str0,StringLiteral__LEFT_,(MethodInfo *)0x0);
  pTVar1 = (this->fields).warningText;
  if (pTVar1 == (Text *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (*(code *)(pTVar1->klass->vtable).set_text.method)(pTVar1);
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::CurrentProgressNotification::CurrentProgressNotification_Update
               (CurrentProgressNotification *this,MethodInfo *method)

{
  Notification::Notification_Update((Notification *)this,(MethodInfo *)0x0);
  if ((this->fields).shouldShowCurrentTime != 0) {
    pTVar1 = (this->fields).scoreText;
    iVar2 = CurrentProgressNotification_GetStartTime(this,(MethodInfo *)0x0);
    iVar2 = CurrentProgressNotification_CalculateCurrentTime(this,iVar2,(MethodInfo *)0x0);
    pSStack3 =
         WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                   (iVar2,GameStatCounterType__Enum_Flag,(MethodInfo *)0x0);
    if (pTVar1 == (Text *)0x0) {
      pIStack4 = (Il2CppMethodPointer)0x0;
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pIStack4 = (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
    pTStack6 = pTVar1;
    (*(code *)(pTVar1->klass->vtable).set_text.method)();
  }
  return;
}


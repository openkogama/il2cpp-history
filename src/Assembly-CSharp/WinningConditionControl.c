
/* Int32 GetPrioritizedStatLimit(GameStatCounterType) */

int32_t Assembly-CSharp.dll::WinningConditionControl::
        WinningConditionControl_GetPrioritizedStatLimit
                  (GameStatCounterType__Enum gameStatType,MethodInfo *method)

{
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
  switch(gameStatType & 0xff) {
  case GameStatCounterType__Enum_Kill:
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar1 != (MVNetworkGame *)0x0) &&
        (pWVar2 = (pMVar1->fields)._WinningConditionManager_k__BackingField,
        pWVar2 != (WinningConditionManager *)0x0)) &&
       (pOVar3 = MVWorldObject.dll::WinningConditionManager::
                 WinningConditionManager_GetSingletonWinnerConditionByType
                           (pWVar2,
                            KillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<KillLimitClient>__
                           ), pOVar3 != (Object *)0x0)) {
      return (int32_t)pOVar3[2].klass;
    }
    break;
  default:
    return 0;
  case GameStatCounterType__Enum_Collectible:
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar1 != (MVNetworkGame *)0x0) &&
        (pWVar2 = (pMVar1->fields)._WinningConditionManager_k__BackingField,
        pWVar2 != (WinningConditionManager *)0x0)) &&
       (pOVar3 = MVWorldObject.dll::WinningConditionManager::
                 WinningConditionManager_GetSingletonWinnerConditionByType
                           (pWVar2,
                            AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
                           ), pOVar3 != (Object *)0x0)) {
      return (int32_t)pOVar3[2].klass;
    }
    break;
  case GameStatCounterType__Enum_OculusKill:
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar1 != (MVNetworkGame *)0x0) &&
        (pWVar2 = (pMVar1->fields)._WinningConditionManager_k__BackingField,
        pWVar2 != (WinningConditionManager *)0x0)) &&
       (pOVar3 = MVWorldObject.dll::WinningConditionManager::
                 WinningConditionManager_GetSingletonWinnerConditionByType
                           (pWVar2,
                            OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__
                           ), pOVar3 != (Object *)0x0)) {
      return (int32_t)pOVar3[2].klass;
    }
  }
  uVar4 = func_?(&stack0xfffffffc);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* String MakeIntoScoreText(Int32, GameStatCounterType) */

String * Assembly-CSharp.dll::WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                   (int32_t score,GameStatCounterType__Enum statType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__String);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral______);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral__0);
    cRam_? = '\x01';
  }
  pSVar1 = ::StringLiteral__;
  switch(statType & 0xff) {
  default:
    pSVar1 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&score,(MethodInfo *)0x0);
    return pSVar1;
  case GameStatCounterType__Enum_Flag:
  case GameStatCounterType__Enum_TimeAttackFlag:
    break;
  }
  if (score == 0) {
    return StringLiteral______;
  }
  IVar2.m_value =
       (int32_t)((float)(score + (int)((float)score / _UNK_?) * -1000) / _UNK_?);
  score = (int32_t)((float)score / _UNK_?);
  IVar3.m_value = score % 0x3c;
  iVar4 = func_?((float)score / _UNK_?,0);
  if (0x3b < iVar4) {
    func_?((float)iVar4 / _UNK_?,0);
    pSVar5 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&stack0xffffffec,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_4
                       (pSVar1,pSVar5,::StringLiteral__,(MethodInfo *)0x0);
  }
  pSVar5 = ::StringLiteral__;
  if (IVar2.m_value < 10) {
    pSVar5 = mscorlib.dll::System::String::String_Concat_3
                       (::StringLiteral__,StringLiteral__0,(MethodInfo *)0x0);
  }
  pSVar6 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&stack0xfffffff4,(MethodInfo *)0x0);
  pSVar6 = mscorlib.dll::System::String::String_Concat_3(pSVar5,pSVar6,(MethodInfo *)0x0);
  pSVar5 = ::StringLiteral__;
  if (IVar3.m_value < 10) {
    pSVar6 = StringLiteral__0;
    pSVar5 = mscorlib.dll::System::String::String_Concat_3
                       (::StringLiteral__,StringLiteral__0,(MethodInfo *)0x0);
  }
  pSVar7 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&stack0xfffffff0,(MethodInfo *)0x0);
  IVar2.m_value = 0;
  pSVar7 = mscorlib.dll::System::String::String_Concat_3(pSVar5,pSVar7,(MethodInfo *)0x0);
  pSVar5 = ::StringLiteral__;
  if (IVar2.m_value < 10) {
    method = (MethodInfo *)0x0;
    statType = (GameStatCounterType__Enum)StringLiteral__0;
    score = (int32_t)::StringLiteral__;
    pSVar5 = mscorlib.dll::System::String::String_Concat_3
                       (::StringLiteral__,StringLiteral__0,(MethodInfo *)0x0);
  }
  str1 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
  method = (MethodInfo *)&UNK_?;
  statType = (GameStatCounterType__Enum)
             mscorlib.dll::System::String::String_Concat_3(pSVar5,str1,(MethodInfo *)0x0);
  values = (String__Array *)func_?();
  cVar8 = '\0';
  if (values != (String__Array *)0x0) {
    uStack9 = 0;
    pSStack10 = pSVar1;
    func_?();
    puStack11 = (undefined *)statType;
    uStack12 = 1;
    func_?();
    pSStack13 = ::StringLiteral__;
    func_?();
    method = (MethodInfo *)&UNK_?;
    func_?();
    method = (MethodInfo *)::StringLiteral__;
    statType = GameStatCounterType__Enum_Time_1;
    score = (int32_t)&UNK_?;
    func_?();
    score = (int32_t)pSVar6;
    func_?();
    pSVar1 = mscorlib.dll::System::String::String_Concat_6(values,(MethodInfo *)0x0);
    return pSVar1;
  }
  func_?();
  pbVar14 = (byte *)in(0x28);
  *(char *)(extraout_EDX + -0x1b) = *(char *)(extraout_EDX + -0x1b) + extraout_CH + cVar8;
  bVar15 = *pbVar14;
  bVar16 = (byte)extraout_EDX;
  *pbVar14 = *pbVar14 - bVar16;
  pbVar14 = (byte *)in(0x28);
  pbVar14[-0x1b] = pbVar14[-0x1b] + (char)pSVar7 + (bVar15 < bVar16);
  bVar15 = *pbVar14;
  *pbVar14 = *pbVar14 - bVar16;
  pbVar14 = (byte *)in(0x28);
  pbVar14[-0x1b] = pbVar14[-0x1b] + (char)pSVar7 + (bVar15 < bVar16);
  bVar15 = *pbVar14;
  *pbVar14 = *pbVar14 - bVar16;
  pcVar17 = (char *)in(0x28);
  *(char *)(extraout_EDX + -0x1b) = *(char *)(extraout_EDX + -0x1b) + extraout_CH + (bVar15 < bVar16)
  ;
  *pcVar17 = *pcVar17 - bVar16;
  pcVar18 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar18)();
  return pSVar1;
}


/* Boolean TryGetPrioritizedStat(GameStatCounterType ByRef) */

bool Assembly-CSharp.dll::WinningConditionControl::WinningConditionControl_TryGetPrioritizedStat
               (GameStatCounterType__Enum *statType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
                   );
    func_?(&
                    FlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<FlagReachedClient>__
                   );
    func_?(&
                    KillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<KillLimitClient>__
                   );
    func_?(&
                    OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__
                   );
    func_?(&
                    TimeAttackFlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<TimeAttackFlagReachedClient>__
                   );
    cRam_? = '\x01';
  }
  *(undefined1 *)statType = GameStatCounterType__Enum_None;
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pWVar2 = (pMVar1->fields)._WinningConditionManager_k__BackingField,
     pWVar2 != (WinningConditionManager *)0x0)) {
    pOVar3 = MVWorldObject.dll::WinningConditionManager::
             WinningConditionManager_GetSingletonWinnerConditionByType
                       (pWVar2,
                        FlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<FlagReachedClient>__
                       );
    if (pOVar3 != (Object *)0x0) {
      *(undefined1 *)statType = GameStatCounterType__Enum_Flag;
      return 1;
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 != (MVNetworkGame *)0x0) &&
       (pWVar2 = (pMVar1->fields)._WinningConditionManager_k__BackingField,
       pWVar2 != (WinningConditionManager *)0x0)) {
      pOVar3 = MVWorldObject.dll::WinningConditionManager::
               WinningConditionManager_GetSingletonWinnerConditionByType
                         (pWVar2,
                          TimeAttackFlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<TimeAttackFlagReachedClient>__
                         );
      if (pOVar3 != (Object *)0x0) {
        *(undefined1 *)statType = GameStatCounterType__Enum_TimeAttackFlag;
        return 1;
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 != (MVNetworkGame *)0x0) &&
         (pWVar2 = (pMVar1->fields)._WinningConditionManager_k__BackingField,
         pWVar2 != (WinningConditionManager *)0x0)) {
        pOVar3 = MVWorldObject.dll::WinningConditionManager::
                 WinningConditionManager_GetSingletonWinnerConditionByType
                           (pWVar2,
                            AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
                           );
        if (pOVar3 != (Object *)0x0) {
          *(undefined1 *)statType = GameStatCounterType__Enum_Collectible;
          return 1;
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar1 != (MVNetworkGame *)0x0) &&
           (pWVar2 = (pMVar1->fields)._WinningConditionManager_k__BackingField,
           pWVar2 != (WinningConditionManager *)0x0)) {
          pOVar3 = MVWorldObject.dll::WinningConditionManager::
                   WinningConditionManager_GetSingletonWinnerConditionByType
                             (pWVar2,
                              KillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<KillLimitClient>__
                             );
          if (pOVar3 != (Object *)0x0) {
            *(undefined1 *)statType = GameStatCounterType__Enum_Kill;
            return 1;
          }
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar1 != (MVNetworkGame *)0x0) &&
             (pWVar2 = (pMVar1->fields)._WinningConditionManager_k__BackingField,
             pWVar2 != (WinningConditionManager *)0x0)) {
            pOVar3 = MVWorldObject.dll::WinningConditionManager::
                     WinningConditionManager_GetSingletonWinnerConditionByType
                               (pWVar2,
                                OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__
                               );
            if (pOVar3 == (Object *)0x0) {
              return 0;
            }
            *(undefined1 *)statType = GameStatCounterType__Enum_OculusKill;
            return 1;
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Boolean TryGetPrioritizedWinCondition(WinningConditionType ByRef) */

bool Assembly-CSharp.dll::WinningConditionControl::
     WinningConditionControl_TryGetPrioritizedWinCondition
               (WinningConditionType__Enum *condition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
                   );
    func_?(&
                    FlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<FlagReachedClient>__
                   );
    func_?(&
                    KillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<KillLimitClient>__
                   );
    func_?(&
                    OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__
                   );
    func_?(&
                    TimeAttackFlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<TimeAttackFlagReachedClient>__
                   );
    cRam_? = '\x01';
  }
  *condition = WinningConditionType__Enum_None;
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pWVar2 = (pMVar1->fields)._WinningConditionManager_k__BackingField,
     pWVar2 != (WinningConditionManager *)0x0)) {
    pOVar3 = MVWorldObject.dll::WinningConditionManager::
             WinningConditionManager_GetSingletonWinnerConditionByType
                       (pWVar2,
                        FlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<FlagReachedClient>__
                       );
    if (pOVar3 != (Object *)0x0) {
      *condition = WinningConditionType__Enum_Flag;
      return 1;
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 != (MVNetworkGame *)0x0) &&
       (pWVar2 = (pMVar1->fields)._WinningConditionManager_k__BackingField,
       pWVar2 != (WinningConditionManager *)0x0)) {
      pOVar3 = MVWorldObject.dll::WinningConditionManager::
               WinningConditionManager_GetSingletonWinnerConditionByType
                         (pWVar2,
                          TimeAttackFlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<TimeAttackFlagReachedClient>__
                         );
      if (pOVar3 != (Object *)0x0) {
        *condition = WinningConditionType__Enum_TimeAttackFlag;
        return 1;
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 != (MVNetworkGame *)0x0) &&
         (pWVar2 = (pMVar1->fields)._WinningConditionManager_k__BackingField,
         pWVar2 != (WinningConditionManager *)0x0)) {
        pOVar3 = MVWorldObject.dll::WinningConditionManager::
                 WinningConditionManager_GetSingletonWinnerConditionByType
                           (pWVar2,
                            AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
                           );
        if (pOVar3 != (Object *)0x0) {
          *condition = WinningConditionType__Enum_Collectible;
          return 1;
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar1 != (MVNetworkGame *)0x0) &&
           (pWVar2 = (pMVar1->fields)._WinningConditionManager_k__BackingField,
           pWVar2 != (WinningConditionManager *)0x0)) {
          pOVar3 = MVWorldObject.dll::WinningConditionManager::
                   WinningConditionManager_GetSingletonWinnerConditionByType
                             (pWVar2,
                              KillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<KillLimitClient>__
                             );
          if (pOVar3 != (Object *)0x0) {
            *condition = WinningConditionType__Enum_Kill;
            return 1;
          }
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar1 != (MVNetworkGame *)0x0) &&
             (pWVar2 = (pMVar1->fields)._WinningConditionManager_k__BackingField,
             pWVar2 != (WinningConditionManager *)0x0)) {
            pOVar3 = MVWorldObject.dll::WinningConditionManager::
                     WinningConditionManager_GetSingletonWinnerConditionByType
                               (pWVar2,
                                OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__
                               );
            if (pOVar3 == (Object *)0x0) {
              return 0;
            }
            *condition = WinningConditionType__Enum_Oculus;
            return 1;
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}



/* Int32 GetPrioritizedStatLimit(GameStatCounterType) */

int32_t Assembly-CSharp.dll::WinningConditionControl::
        WinningConditionControl_GetPrioritizedStatLimit
                  (GameStatCounterType__Enum gameStatType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  switch(gameStatType & 0xff) {
  case GameStatCounterType__Enum_Kill:
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pPVar1 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pPVar1 == (PrefabPool *)0x0) ||
       (this = (WinningConditionManager *)
               PrefabPool::PrefabPool_get_MVSoundEmitterPrefab(pPVar1,(MethodInfo *)0x0),
       this == (WinningConditionManager *)0x0)) goto code_?;
    gameStatType = (GameStatCounterType__Enum)
                   KillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<KillLimitClient>__
    ;
    break;
  default:
    return 0;
  case GameStatCounterType__Enum_Collectible:
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pPVar1 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pPVar1 == (PrefabPool *)0x0) ||
       (this = (WinningConditionManager *)
               PrefabPool::PrefabPool_get_MVSoundEmitterPrefab(pPVar1,(MethodInfo *)0x0),
       this == (WinningConditionManager *)0x0)) goto code_?;
    gameStatType = (GameStatCounterType__Enum)
                   AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
    ;
    break;
  case GameStatCounterType__Enum_OculusKill:
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pPVar1 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pPVar1 == (PrefabPool *)0x0) ||
       (this = (WinningConditionManager *)
               PrefabPool::PrefabPool_get_MVSoundEmitterPrefab(pPVar1,(MethodInfo *)0x0),
       this == (WinningConditionManager *)0x0)) goto code_?;
    gameStatType = (GameStatCounterType__Enum)
                   OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__
    ;
  }
  pTVar2 = MVWorldObject.dll::WinningConditionManager::
           WinningConditionManager_GetSingletonWinnerConditionByType_6
                     (this,(MethodInfo *)gameStatType);
  if (pTVar2 != (TimeAttackFlagReachedClient *)0x0) {
    return *(int32_t *)(in_stack_3 + 0x10);
  }
code_?:
  uStack4 = 0;
  uVar5 = func_?();
  bVar6 = (byte)((ulonglong)uVar5 >> 0x20);
  bVar7 = *(byte *)uVar5;
  pbVar8 = unaff_EDI + 1;
  bVar9 = CARRY1(*pbVar8,unaff_BL) || CARRY1(*pbVar8 + unaff_BL,*unaff_ESI < *unaff_EDI);
  *pbVar8 = *pbVar8 + unaff_BL + (*unaff_ESI < *unaff_EDI);
  pbVar8 = (byte *)((int)*(undefined6 *)
                          CONCAT31((int3)(CONCAT22((short)((ulonglong)uVar5 >> 0x30),
                                                   CONCAT11(0xc3,bVar6)) >> 8),bVar6 ^ bVar7) +
                   -0x59efcd3c);
  bVar7 = *pbVar8;
  bVar10 = (byte)((ulonglong)uVar5 >> 8);
  bVar6 = *pbVar8;
  *pbVar8 = bVar6 + bVar10 + bVar9;
  *(char *)(extraout_ECX + -0x3c) =
       *(char *)(extraout_ECX + -0x3c) + bVar10 +
       (CARRY1(bVar7,bVar10) || CARRY1(bVar6 + bVar10,bVar9));
  pcVar11 = (code *)swi(3);
  iVar12 = (*pcVar11)();
  return iVar12;
}


/* Boolean IsNewScoreBetter(Int32, Int32, GameStatCounterType) */

bool Assembly-CSharp.dll::WinningConditionControl::WinningConditionControl_IsNewScoreBetter
               (int32_t newScore,int32_t oldScore,GameStatCounterType__Enum statType,
               MethodInfo *method)

{
  switch(statType & 0xff) {
  case GameStatCounterType__Enum_Kill:
  case GameStatCounterType__Enum_Collectible:
  case GameStatCounterType__Enum_OculusKill:
    if (oldScore < newScore) {
      return 1;
    }
    break;
  case GameStatCounterType__Enum_Flag:
  case GameStatCounterType__Enum_TimeAttackFlag:
    if (oldScore < 0) {
      return 1;
    }
    if (0 < newScore) {
      if (newScore < oldScore) {
        return 1;
      }
      if (oldScore == 0) {
        return 1;
      }
    }
  }
  return 0;
}


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* String MakeIntoScoreText(Int32, GameStatCounterType) */

String * Assembly-CSharp.dll::WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                   (int32_t score,GameStatCounterType__Enum statType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  switch(statType & 0xff) {
  default:
    pSVar1 = (String *)func_?(&score,0);
    return pSVar1;
  case GameStatCounterType__Enum_Flag:
  case GameStatCounterType__Enum_TimeAttackFlag:
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
  }
  pSVar1 = TypeInfo__System__String->static_fields->Empty;
  if (score == 0) {
    return StringLiteral______;
  }
  iVar2 = (int)((float)score / _UNK_?);
  iVar3 = (int)((float)(score + (int)((float)score / _UNK_?) * 1000) / _UNK_?);
  iVar4 = iVar2 % 0x3c;
  score = iVar2;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                     ((float)iVar2 / _UNK_?,(MethodInfo *)0x0);
  if (0x3b < iVar2) {
    iVar5 = iVar2;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    statType = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                         ((float)iVar2 / _UNK_?,(MethodInfo *)0x0);
    iVar2 = (int)((ulonglong)((longlong)iVar5 * 0x77777777) >> 0x20) - iVar5;
    iVar2 = iVar5 + ((iVar2 >> 5) - (iVar2 >> 0x1f)) * 0x3c;
    arg1 = (Object *)func_?(TypeInfo__System__Int32,&statType);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar1 = mscorlib.dll::System::String::String_Concat_1
                       ((Object *)pSVar1,arg1,(Object *)::StringLiteral__,(MethodInfo *)0x0);
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar6 = TypeInfo__System__String->static_fields->Empty;
  if (iVar3 < 10) {
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar6 = mscorlib.dll::System::String::String_Concat_2
                       (pSVar6,StringLiteral__0,(MethodInfo *)0x0);
  }
  str1 = (String *)func_?(&stack0xfffffff4,0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  mscorlib.dll::System::String::String_Concat_2(pSVar6,str1,(MethodInfo *)0x0);
  pSVar6 = TypeInfo__System__String->static_fields->Empty;
  if (iVar4 < 10) {
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar6 = mscorlib.dll::System::String::String_Concat_2
                       (pSVar6,StringLiteral__0,(MethodInfo *)0x0);
  }
  pSVar7 = (String *)func_?(&stack0xfffffff0,0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  puVar8 = &UNK_?;
  mscorlib.dll::System::String::String_Concat_2(pSVar6,pSVar7,(MethodInfo *)0x0);
  pSVar6 = TypeInfo__System__String->static_fields->Empty;
  if (iVar2 < 10) {
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar6 = mscorlib.dll::System::String::String_Concat_2
                       (pSVar6,StringLiteral__0,(MethodInfo *)0x0);
  }
  pSVar7 = (String *)func_?();
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  mscorlib.dll::System::String::String_Concat_2(pSVar6,pSVar7,(MethodInfo *)0x0);
  values = (String__Array *)func_?();
  bVar9 = (POPCOUNT((uint)values & 0xff) & 1U) == 0;
  if (values == (String__Array *)0x0) {
    score = 0;
    pSVar6 = (String *)func_?();
    if (bVar9) goto code_?;
    bVar10 = extraout_DL ^ *(byte *)&pSVar6->klass ^ *(byte *)&pSVar6->klass;
    if ((POPCOUNT(bVar10) & 1U) == 0) {
      puVar8 = &pSVar1[0x56a57c].fields.field_0x6;
      *puVar8 = *puVar8 | extraout_CL;
      goto code_?;
    }
    bVar10 = bVar10 ^ *(byte *)&pSVar6->klass;
    if ((POPCOUNT(bVar10) & 1U) != 0) {
      bVar10 = bVar10 ^ *(byte *)&pSVar6->klass;
      if ((POPCOUNT(bVar10) & 1U) != 0) {
        bVar10 = bVar10 ^ *(byte *)&pSVar6->klass;
        if ((POPCOUNT(bVar10) & 1U) == 0) {
          cRam_? = cRam_? + bVar10;
          *(char *)&pSVar1[0x5e5f08c].monitor = *(char *)&pSVar1[0x5e5f08c].monitor + (char)pSVar6;
          return pSVar6;
        }
        if ((POPCOUNT(bVar10 ^ *(byte *)&pSVar6->klass) & 1U) != 0) {
          if (cRam_? == '\0') {
            func_?(_UNK_?,in_ES);
            cRam_? = '\x01';
          }
          *puVar8 = 0;
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase,0);
          }
          pPVar11 = (PrefabPool *)
                   MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pPVar11 != (PrefabPool *)0x0) &&
             (pWVar12 = (WinningConditionManager *)
                       PrefabPool::PrefabPool_get_MVSoundEmitterPrefab(pPVar11,(MethodInfo *)0x0),
             pWVar12 != (WinningConditionManager *)0x0)) {
            pTVar13 = MVWorldObject.dll::WinningConditionManager::
                     WinningConditionManager_GetSingletonWinnerConditionByType_6
                               (pWVar12,
                                FlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<FlagReachedClient>__
                               );
            if (pTVar13 != (TimeAttackFlagReachedClient *)0x0) {
              *puVar8 = 2;
              return (String *)CONCAT31((int3)((uint)pTVar13 >> 8),1);
            }
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVGameControllerBase);
            }
            pPVar11 = (PrefabPool *)
                     MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pPVar11 != (PrefabPool *)0x0) &&
               (pWVar12 = (WinningConditionManager *)
                         PrefabPool::PrefabPool_get_MVSoundEmitterPrefab(pPVar11,(MethodInfo *)0x0),
               pWVar12 != (WinningConditionManager *)0x0)) {
              pTVar13 = MVWorldObject.dll::WinningConditionManager::
                       WinningConditionManager_GetSingletonWinnerConditionByType_6
                                 (pWVar12,
                                  TimeAttackFlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<TimeAttackFlagReachedClient>__
                                 );
              if (pTVar13 != (TimeAttackFlagReachedClient *)0x0) {
                *puVar8 = 8;
                return (String *)CONCAT31((int3)((uint)pTVar13 >> 8),1);
              }
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?();
              }
              pPVar11 = (PrefabPool *)
                       MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pPVar11 != (PrefabPool *)0x0) &&
                 (pWVar12 = (WinningConditionManager *)
                           PrefabPool::PrefabPool_get_MVSoundEmitterPrefab(pPVar11,(MethodInfo *)0x0)
                 , pWVar12 != (WinningConditionManager *)0x0)) {
                score = (int32_t)
                        AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
                ;
                pTVar13 = MVWorldObject.dll::WinningConditionManager::
                         WinningConditionManager_GetSingletonWinnerConditionByType_6
                                   (pWVar12,
                                    AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
                                   );
                if (pTVar13 != (TimeAttackFlagReachedClient *)0x0) {
                  *puVar8 = 3;
                  return (String *)CONCAT31((int3)((uint)pTVar13 >> 8),1);
                }
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  method = (MethodInfo *)TypeInfo__MVGameControllerBase;
                  statType = (GameStatCounterType__Enum)&UNK_?;
                  func_?();
                }
                method = (MethodInfo *)0x0;
                statType = (GameStatCounterType__Enum)&UNK_?;
                pPVar11 = (PrefabPool *)
                         MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (pPVar11 != (PrefabPool *)0x0) {
                  statType = (GameStatCounterType__Enum)&UNK_?;
                  method = (MethodInfo *)pPVar11;
                  pWVar12 = (WinningConditionManager *)
                           PrefabPool::PrefabPool_get_MVSoundEmitterPrefab(pPVar11,(MethodInfo *)0x0)
                  ;
                  if (pWVar12 != (WinningConditionManager *)0x0) {
                    pTVar13 = MVWorldObject.dll::WinningConditionManager::
                             WinningConditionManager_GetSingletonWinnerConditionByType_6
                                       (pWVar12,
                                        KillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<KillLimitClient>__
                                       );
                    if (pTVar13 != (TimeAttackFlagReachedClient *)0x0) {
                      *puVar8 = 1;
                      return (String *)CONCAT31((int3)((uint)pTVar13 >> 8),1);
                    }
                    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr &
                         0x2000000) != 0) &&
                       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                      func_?();
                    }
                    pPVar11 = (PrefabPool *)
                             MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                    if ((pPVar11 != (PrefabPool *)0x0) &&
                       (pWVar12 = (WinningConditionManager *)
                                 PrefabPool::PrefabPool_get_MVSoundEmitterPrefab
                                           (pPVar11,(MethodInfo *)0x0),
                       pWVar12 != (WinningConditionManager *)0x0)) {
                      pTVar13 = MVWorldObject.dll::WinningConditionManager::
                               WinningConditionManager_GetSingletonWinnerConditionByType_6
                                         (pWVar12,
                                          OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__
                                         );
                      if (pTVar13 != (TimeAttackFlagReachedClient *)0x0) {
                        *puVar8 = 6;
                        return (String *)CONCAT31((int3)((uint)pTVar13 >> 8),1);
                      }
                      return (String *)0x0;
                    }
                  }
                }
              }
            }
          }
          func_?();
          pcVar14 = (code *)swi(3);
          pSVar1 = (String *)(*pcVar14)();
          return pSVar1;
        }
      }
      goto code_?;
    }
  }
  else {
    score = (int32_t)pSVar1;
    func_?();
    score = (int32_t)pSVar1;
    func_?();
    func_?();
    func_?();
    func_?();
    puVar15 = &UNK_?;
    func_?();
    func_?(values,puVar15);
    str1 = (String *)0x3;
    func_?(3,puVar15);
    func_?(values,::StringLiteral__);
    func_?(4,::StringLiteral__);
code_?:
    func_?(values,str1);
  }
  str1 = (String *)0x5;
code_?:
  func_?(str1);
  pSVar1 = mscorlib.dll::System::String::String_Concat_6(values,(MethodInfo *)0x0);
  return pSVar1;
}


/* Boolean TryGetPrioritizedStat(GameStatCounterType ByRef) */

bool Assembly-CSharp.dll::WinningConditionControl::WinningConditionControl_TryGetPrioritizedStat
               (GameStatCounterType__Enum *statType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  *(undefined1 *)statType = GameStatCounterType__Enum_None;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pPVar1 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pPVar1 != (PrefabPool *)0x0) {
    pWVar2 = (WinningConditionManager *)
             PrefabPool::PrefabPool_get_MVSoundEmitterPrefab(pPVar1,(MethodInfo *)0x0);
    if (pWVar2 != (WinningConditionManager *)0x0) {
      pTVar3 = MVWorldObject.dll::WinningConditionManager::
               WinningConditionManager_GetSingletonWinnerConditionByType_6
                         (pWVar2,
                          FlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<FlagReachedClient>__
                         );
      if (pTVar3 != (TimeAttackFlagReachedClient *)0x0) {
        *(undefined1 *)statType = GameStatCounterType__Enum_Flag;
        return 1;
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pPVar1 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pPVar1 != (PrefabPool *)0x0) {
        pWVar2 = (WinningConditionManager *)
                 PrefabPool::PrefabPool_get_MVSoundEmitterPrefab(pPVar1,(MethodInfo *)0x0);
        if (pWVar2 != (WinningConditionManager *)0x0) {
          pTVar3 = MVWorldObject.dll::WinningConditionManager::
                   WinningConditionManager_GetSingletonWinnerConditionByType_6
                             (pWVar2,
                              TimeAttackFlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<TimeAttackFlagReachedClient>__
                             );
          if (pTVar3 != (TimeAttackFlagReachedClient *)0x0) {
            *(undefined1 *)statType = GameStatCounterType__Enum_TimeAttackFlag;
            return 1;
          }
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          pPVar1 = (PrefabPool *)
                   MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pPVar1 != (PrefabPool *)0x0) {
            pWVar2 = (WinningConditionManager *)
                     PrefabPool::PrefabPool_get_MVSoundEmitterPrefab(pPVar1,(MethodInfo *)0x0);
            if (pWVar2 != (WinningConditionManager *)0x0) {
              pTVar3 = MVWorldObject.dll::WinningConditionManager::
                       WinningConditionManager_GetSingletonWinnerConditionByType_6
                                 (pWVar2,
                                  AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
                                 );
              if (pTVar3 != (TimeAttackFlagReachedClient *)0x0) {
                *(undefined1 *)statType = GameStatCounterType__Enum_Collectible;
                return 1;
              }
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?();
              }
              pPVar1 = (PrefabPool *)
                       MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (pPVar1 != (PrefabPool *)0x0) {
                pWVar2 = (WinningConditionManager *)
                         PrefabPool::PrefabPool_get_MVSoundEmitterPrefab(pPVar1,(MethodInfo *)0x0);
                if (pWVar2 != (WinningConditionManager *)0x0) {
                  pTVar3 = MVWorldObject.dll::WinningConditionManager::
                           WinningConditionManager_GetSingletonWinnerConditionByType_6
                                     (pWVar2,
                                      KillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<KillLimitClient>__
                                     );
                  if (pTVar3 != (TimeAttackFlagReachedClient *)0x0) {
                    *(undefined1 *)statType = GameStatCounterType__Enum_Kill;
                    return 1;
                  }
                  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                    func_?();
                  }
                  pPVar1 = (PrefabPool *)
                           MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                  if (pPVar1 != (PrefabPool *)0x0) {
                    pWVar2 = (WinningConditionManager *)
                             PrefabPool::PrefabPool_get_MVSoundEmitterPrefab
                                       (pPVar1,(MethodInfo *)0x0);
                    if (pWVar2 != (WinningConditionManager *)0x0) {
                      pTVar3 = MVWorldObject.dll::WinningConditionManager::
                               WinningConditionManager_GetSingletonWinnerConditionByType_6
                                         (pWVar2,
                                          OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__
                                         );
                      if (pTVar3 == (TimeAttackFlagReachedClient *)0x0) {
                        return 0;
                      }
                      *(undefined1 *)statType = GameStatCounterType__Enum_OculusKill;
                      return 1;
                    }
                  }
                }
              }
            }
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  *condition = WinningConditionType__Enum_None;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pPVar1 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pPVar1 != (PrefabPool *)0x0) {
    pWVar2 = (WinningConditionManager *)
             PrefabPool::PrefabPool_get_MVSoundEmitterPrefab(pPVar1,(MethodInfo *)0x0);
    if (pWVar2 != (WinningConditionManager *)0x0) {
      pTVar3 = MVWorldObject.dll::WinningConditionManager::
               WinningConditionManager_GetSingletonWinnerConditionByType_6
                         (pWVar2,
                          FlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<FlagReachedClient>__
                         );
      if (pTVar3 != (TimeAttackFlagReachedClient *)0x0) {
        *condition = WinningConditionType__Enum_Flag;
        return 1;
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pPVar1 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pPVar1 != (PrefabPool *)0x0) {
        pWVar2 = (WinningConditionManager *)
                 PrefabPool::PrefabPool_get_MVSoundEmitterPrefab(pPVar1,(MethodInfo *)0x0);
        if (pWVar2 != (WinningConditionManager *)0x0) {
          pTVar3 = MVWorldObject.dll::WinningConditionManager::
                   WinningConditionManager_GetSingletonWinnerConditionByType_6
                             (pWVar2,
                              TimeAttackFlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<TimeAttackFlagReachedClient>__
                             );
          if (pTVar3 != (TimeAttackFlagReachedClient *)0x0) {
            *condition = WinningConditionType__Enum_TimeAttackFlag;
            return 1;
          }
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          pPVar1 = (PrefabPool *)
                   MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pPVar1 != (PrefabPool *)0x0) {
            pWVar2 = (WinningConditionManager *)
                     PrefabPool::PrefabPool_get_MVSoundEmitterPrefab(pPVar1,(MethodInfo *)0x0);
            if (pWVar2 != (WinningConditionManager *)0x0) {
              pTVar3 = MVWorldObject.dll::WinningConditionManager::
                       WinningConditionManager_GetSingletonWinnerConditionByType_6
                                 (pWVar2,
                                  AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
                                 );
              if (pTVar3 != (TimeAttackFlagReachedClient *)0x0) {
                *condition = WinningConditionType__Enum_Collectible;
                return 1;
              }
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?();
              }
              pPVar1 = (PrefabPool *)
                       MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (pPVar1 != (PrefabPool *)0x0) {
                pWVar2 = (WinningConditionManager *)
                         PrefabPool::PrefabPool_get_MVSoundEmitterPrefab(pPVar1,(MethodInfo *)0x0);
                if (pWVar2 != (WinningConditionManager *)0x0) {
                  pTVar3 = MVWorldObject.dll::WinningConditionManager::
                           WinningConditionManager_GetSingletonWinnerConditionByType_6
                                     (pWVar2,
                                      KillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<KillLimitClient>__
                                     );
                  if (pTVar3 != (TimeAttackFlagReachedClient *)0x0) {
                    *condition = WinningConditionType__Enum_Kill;
                    return 1;
                  }
                  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                    func_?();
                  }
                  pPVar1 = (PrefabPool *)
                           MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                  if (pPVar1 != (PrefabPool *)0x0) {
                    pWVar2 = (WinningConditionManager *)
                             PrefabPool::PrefabPool_get_MVSoundEmitterPrefab
                                       (pPVar1,(MethodInfo *)0x0);
                    if (pWVar2 != (WinningConditionManager *)0x0) {
                      pTVar3 = MVWorldObject.dll::WinningConditionManager::
                               WinningConditionManager_GetSingletonWinnerConditionByType_6
                                         (pWVar2,
                                          OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__
                                         );
                      if (pTVar3 == (TimeAttackFlagReachedClient *)0x0) {
                        return 0;
                      }
                      *condition = WinningConditionType__Enum_Oculus;
                      return 1;
                    }
                  }
                }
              }
            }
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



/* Int32 GetPrioritizedStatLimit(GameStatCounterType) */

int32_t Assembly-CSharp.dll::WinningConditionControl::WinningConditionControl_GetPrioritizedStatLimit(GameStatCounterType__Enum gameStatType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__);
    LOCK();
    UNLOCK();
    FUN_?(&KillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<KillLimitClient>__);
    LOCK();
    UNLOCK();
    FUN_?(&OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  switch(gameStatType & 0xff) {
  case GameStatCounterType__Enum_Kill:
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 == (MVNetworkGame *)0x0) || (this = (pMVar1->fields)._WinningConditionManager_k__BackingField, method_00 = KillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<KillLimitClient>__, this == (WinningConditionManager *)0x0)) goto code_?;
    goto code_?;
  default:
    return 0;
  case GameStatCounterType__Enum_Collectible:
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    this = (pMVar1->fields)._WinningConditionManager_k__BackingField;
    method_00 = AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__;
    break;
  case GameStatCounterType__Enum_OculusKill:
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    this = (pMVar1->fields)._WinningConditionManager_k__BackingField;
    method_00 = OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__;
  }
  if (this != (WinningConditionManager *)0x0) {
code_?:
    pOVar2 = MVWorldObject.dll::WinningConditionManager::WinningConditionManager_GetSingletonWinnerConditionByType(this,method_00);
    if (pOVar2 != (Object *)0x0) {
      return *(int32_t *)&pOVar2[1].monitor;
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* Boolean IsWinConditionPresent(WinningConditionType) */

bool Assembly-CSharp.dll::WinningConditionControl::WinningConditionControl_IsWinConditionPresent(WinningConditionType__Enum condition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__);
    LOCK();
    UNLOCK();
    FUN_?(&FlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<FlagReachedClient>__);
    LOCK();
    UNLOCK();
    FUN_?(&KillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<KillLimitClient>__);
    LOCK();
    UNLOCK();
    FUN_?(&OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__);
    LOCK();
    UNLOCK();
    FUN_?(&TimeAttackFlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<TimeAttackFlagReachedClient>__);
    LOCK();
    UNLOCK();
    FUN_?(&TimeLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<TimeLimitClient>__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  switch(condition) {
  case WinningConditionType__Enum_Collectible:
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 != (MVNetworkGame *)0x0) && (pWVar2 = (pMVar1->fields)._WinningConditionManager_k__BackingField, pWVar2 != (WinningConditionManager *)0x0)) {
      pOVar3 = MVWorldObject.dll::WinningConditionManager::WinningConditionManager_GetSingletonWinnerConditionByType(pWVar2,AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__);
      return pOVar3 != (Object *)0x0;
    }
    break;
  case WinningConditionType__Enum_Flag:
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 != (MVNetworkGame *)0x0) && (pWVar2 = (pMVar1->fields)._WinningConditionManager_k__BackingField, pWVar2 != (WinningConditionManager *)0x0)) {
      pOVar3 = MVWorldObject.dll::WinningConditionManager::WinningConditionManager_GetSingletonWinnerConditionByType(pWVar2,FlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<FlagReachedClient>__);
      return pOVar3 != (Object *)0x0;
    }
    break;
  case WinningConditionType__Enum_Kill:
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 != (MVNetworkGame *)0x0) && (pWVar2 = (pMVar1->fields)._WinningConditionManager_k__BackingField, pWVar2 != (WinningConditionManager *)0x0)) {
      pOVar3 = MVWorldObject.dll::WinningConditionManager::WinningConditionManager_GetSingletonWinnerConditionByType(pWVar2,KillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<KillLimitClient>__);
      return pOVar3 != (Object *)0x0;
    }
    break;
  case WinningConditionType__Enum_Oculus:
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 != (MVNetworkGame *)0x0) && (pWVar2 = (pMVar1->fields)._WinningConditionManager_k__BackingField, pWVar2 != (WinningConditionManager *)0x0)) {
      pOVar3 = MVWorldObject.dll::WinningConditionManager::WinningConditionManager_GetSingletonWinnerConditionByType(pWVar2,OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__);
      return pOVar3 != (Object *)0x0;
    }
    break;
  case WinningConditionType__Enum_Time_1:
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 != (MVNetworkGame *)0x0) && (pWVar2 = (pMVar1->fields)._WinningConditionManager_k__BackingField, pWVar2 != (WinningConditionManager *)0x0)) {
      pOVar3 = MVWorldObject.dll::WinningConditionManager::WinningConditionManager_GetSingletonWinnerConditionByType(pWVar2,TimeLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<TimeLimitClient>__);
      return pOVar3 != (Object *)0x0;
    }
    break;
  case WinningConditionType__Enum_TimeAttackFlag:
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 != (MVNetworkGame *)0x0) && (pWVar2 = (pMVar1->fields)._WinningConditionManager_k__BackingField, pWVar2 != (WinningConditionManager *)0x0)) {
      pOVar3 = MVWorldObject.dll::WinningConditionManager::WinningConditionManager_GetSingletonWinnerConditionByType(pWVar2,TimeAttackFlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<TimeAttackFlagReachedClient>__);
      return pOVar3 != (Object *)0x0;
    }
    break;
  default:
    return 0;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* String MakeIntoScoreText(Int32, GameStatCounterType) */

String * Assembly-CSharp.dll::WinningConditionControl::WinningConditionControl_MakeIntoScoreText(int32_t score,GameStatCounterType__Enum statType,MethodInfo *method)

{
  aIStackX_8[0].m_value = score;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral______);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = ::StringLiteral__;
  switch(statType & 0xff) {
  default:
    pSVar1 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_8,(MethodInfo *)0x0);
    return pSVar1;
  case GameStatCounterType__Enum_Flag:
  case GameStatCounterType__Enum_TimeAttackFlag:
    break;
  }
  if (score == 0) {
    return StringLiteral______;
  }
  iVar2 = (int)((float)(score + (int)((float)score / 1000.0) * -1000) / 10.0);
  iVar3 = (int)((float)score / 1000.0) % 0x3c;
  IStack_4.m_value = iVar2;
  aIStack_5[0].m_value = iVar3;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
    FUN_?();
  }
  dVar6 = (double)func_?((double)((float)(int)((float)score / 1000.0) / 60.0));
  iVar7 = (int)dVar6;
  aIStackX_10[0].m_value = iVar7;
  if (0x3b < iVar7) {
    aIStackX_20[0].m_value = FUN_?((float)iVar7 / 60.0);
    iVar8 = (int)((ulonglong)((longlong)iVar7 * 0x77777777) >> 0x20) - iVar7;
    iVar7 = iVar7 + ((iVar8 >> 5) - (iVar8 >> 0x1f)) * 0x3c;
    aIStackX_10[0].m_value = iVar7;
    pSVar9 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_20,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_5(pSVar1,pSVar9,::StringLiteral__,(MethodInfo *)0x0);
  }
  pSVar9 = ::StringLiteral__;
  if (iVar2 < 10) {
    pSVar9 = mscorlib.dll::System::String::String_Concat_4(::StringLiteral__,StringLiteral__0,(MethodInfo *)0x0);
  }
  pSVar10 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_4,(MethodInfo *)0x0);
  mscorlib.dll::System::String::String_Concat_4(pSVar9,pSVar10,(MethodInfo *)0x0);
  pSVar9 = ::StringLiteral__;
  if (iVar3 < 10) {
    pSVar9 = mscorlib.dll::System::String::String_Concat_4(::StringLiteral__,StringLiteral__0,(MethodInfo *)0x0);
  }
  pSVar10 = mscorlib.dll::System::Int32::Int32_ToString(aIStack_5,(MethodInfo *)0x0);
  pSVar10 = mscorlib.dll::System::String::String_Concat_4(pSVar9,pSVar10,(MethodInfo *)0x0);
  pSVar9 = ::StringLiteral__;
  if (iVar7 < 10) {
    pSVar9 = mscorlib.dll::System::String::String_Concat_4(::StringLiteral__,StringLiteral__0,(MethodInfo *)0x0);
  }
  str1 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
  pSVar9 = mscorlib.dll::System::String::String_Concat_4(pSVar9,str1,(MethodInfo *)0x0);
  lVar11 = FUN_?(TypeInfo__System__String,6);
  if (lVar11 == 0) {
    FUN_?();
    pcVar12 = (code *)swi(3);
    pSVar1 = (String *)(*pcVar12)();
    return pSVar1;
  }
  FUN_?(lVar11,0,pSVar1);
  FUN_?(lVar11,1,pSVar9);
  FUN_?(lVar11,2,::StringLiteral__);
  FUN_?(lVar11,3,pSVar10);
  FUN_?(lVar11,4,::StringLiteral__);
  FUN_?(lVar11,5);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__String,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (lVar11 == 0) {
    uVar13 = func_?(&TypeInfo__System__ArgumentNullException);
    this = (ArgumentNullException *)func_?(uVar13);
    pSVar1 = (String *)func_?(&StringLiteral_values);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1(this,pSVar1,(MethodInfo *)0x0);
    uVar13 = func_?(&MethodInfo__System__String__Concat_System__String____);
    FUN_?(this,uVar13);
    pcVar12 = (code *)swi(3);
    pSVar1 = (String *)(*pcVar12)();
    return pSVar1;
  }
  if (*(int *)(lVar11 + 0x18) < 2) {
    if (*(longlong *)(lVar11 + 0x18) == 0) {
      return (String *)**(undefined8 **)(lRam_? + 0xb8);
    }
    if (*(int *)(lVar11 + 0x18) == 0) {
code_?:
      FUN_?();
      pcVar12 = (code *)swi(3);
      pSVar1 = (String *)(*pcVar12)();
      return pSVar1;
    }
    if (*(String **)(lVar11 + 0x20) != (String *)0x0) {
      return *(String **)(lVar11 + 0x20);
    }
  }
  else {
    plVar14 = (longlong *)(lVar11 + 0x20);
    values = (String__Array *)0x0;
    pSVar15 = values;
    pSVar16 = values;
    while (uVar17 = (uint)pSVar15, (int)uVar17 < (int)*(uint *)(lVar11 + 0x18)) {
      if (*(uint *)(lVar11 + 0x18) <= uVar17) goto code_?;
      if (*plVar14 != 0) {
        pSVar16 = (String__Array *)((longlong)pSVar16->vector + (longlong)*(int *)(*plVar14 + 0x10) + -0x20);
      }
      plVar14 = plVar14 + 1;
      pSVar15 = (String__Array *)(ulonglong)(uVar17 + 1);
    }
    if (0x7fffffff < (longlong)pSVar16) {
      uVar13 = func_?(&TypeInfo__System__OutOfMemoryException);
      this_01 = (OutOfMemoryException *)func_?(uVar13);
      mscorlib.dll::System::OutOfMemoryException::OutOfMemoryException__ctor(this_01,(MethodInfo *)0x0);
      uVar13 = func_?(&MethodInfo__System__String__Concat_System__String____);
      FUN_?(this_01,uVar13);
      pcVar12 = (code *)swi(3);
      pSVar1 = (String *)(*pcVar12)();
      return pSVar1;
    }
    iVar3 = (int)pSVar16;
    if (iVar3 != 0) {
      pSVar1 = (String *)FUN_?((ulonglong)pSVar16 & 0xffffffff);
      plVar14 = (longlong *)(lVar11 + 0x20);
      pSVar15 = values;
      pSVar16 = values;
code_?:
      do {
        iVar2 = (int)pSVar15;
        uVar17 = (uint)pSVar16;
        if (*(int *)(lVar11 + 0x18) <= (int)uVar17) {
code_?:
          if (iVar2 == iVar3) {
            return pSVar1;
          }
          lVar11 = FUN_?(lVar11);
          pSVar18 = TypeInfo__System__String;
          if ((lVar11 != 0) && (values = (String__Array *)FUN_?(lVar11), values == (String__Array *)0x0)) {
            FUN_?(lVar11,pSVar18);
            pcVar12 = (code *)swi(3);
            pSVar1 = (String *)(*pcVar12)();
            return pSVar1;
          }
          pSVar1 = mscorlib.dll::System::String::String_Concat_7(values,(MethodInfo *)0x0);
          return pSVar1;
        }
        if (*(uint *)(lVar11 + 0x18) <= uVar17) goto code_?;
        lVar19 = *plVar14;
        if ((lVar19 == 0) || (*(int *)(lVar19 + 0x10) == 0)) {
code_?:
          pSVar16 = (String__Array *)(ulonglong)(uVar17 + 1);
          plVar14 = plVar14 + 1;
          goto code_?;
        }
        iVar7 = *(int *)(lVar19 + 0x10);
        if (iVar3 - iVar2 < iVar7) {
          iVar2 = -1;
          goto code_?;
        }
        if (pSVar1 == (String *)0x0) {
          FUN_?();
          pcVar12 = (code *)swi(3);
          pSVar1 = (String *)(*pcVar12)();
          return pSVar1;
        }
        if ((pSVar1->fields)._stringLength - iVar2 < iVar7) {
          uVar13 = func_?(&TypeInfo__System__IndexOutOfRangeException);
          this_00 = (IndexOutOfRangeException *)func_?(uVar13);
          mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor(this_00,(MethodInfo *)0x0);
          uVar13 = func_?(&MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_);
          FUN_?(this_00,uVar13);
          pcVar12 = (code *)swi(3);
          pSVar1 = (String *)(*pcVar12)();
          return pSVar1;
        }
        src = (uint8_t *)(lVar19 + 0x14);
        dest = &(pSVar1->fields)._firstChar + iVar2;
        uVar20 = (ulonglong)(uint)(iVar7 * 2);
        if (((ulonglong)((longlong)dest - (longlong)src) < uVar20) || ((ulonglong)((longlong)src - (longlong)dest) < uVar20)) {
          FUN_?(dest,src,uVar20);
          pSVar15 = (String__Array *)(ulonglong)(uint)(iVar2 + iVar7);
          goto code_?;
        }
        mscorlib.dll::System::Buffer::Buffer_Memcpy_1((uint8_t *)dest,src,iVar7 * 2,(MethodInfo *)0x0);
        pSVar15 = (String__Array *)(ulonglong)(uint)(iVar2 + iVar7);
        pSVar16 = (String__Array *)(ulonglong)(uVar17 + 1);
        plVar14 = plVar14 + 1;
      } while( true );
    }
  }
  return (String *)**(undefined8 **)(lRam_? + 0xb8);
}


/* Boolean TryGetPrioritizedStat(GameStatCounterType ByRef) */

bool Assembly-CSharp.dll::WinningConditionControl::WinningConditionControl_TryGetPrioritizedStat(GameStatCounterType__Enum *statType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__);
    LOCK();
    UNLOCK();
    FUN_?(&FlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<FlagReachedClient>__);
    LOCK();
    UNLOCK();
    FUN_?(&KillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<KillLimitClient>__);
    LOCK();
    UNLOCK();
    FUN_?(&OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__);
    LOCK();
    UNLOCK();
    FUN_?(&TimeAttackFlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<TimeAttackFlagReachedClient>__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  *(undefined1 *)statType = GameStatCounterType__Enum_None;
  if (bVar1) {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar2 != (MVGameControllerBase *)0x0) && (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) && (pWVar4 = (pMVar3->fields)._WinningConditionManager_k__BackingField, pWVar4 != (WinningConditionManager *)0x0)) {
    pOVar5 = MVWorldObject.dll::WinningConditionManager::WinningConditionManager_GetSingletonWinnerConditionByType(pWVar4,FlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<FlagReachedClient>__);
    if (pOVar5 != (Object *)0x0) {
      *(undefined1 *)statType = GameStatCounterType__Enum_Flag;
      return 1;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar2 != (MVGameControllerBase *)0x0) && (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) && (pWVar4 = (pMVar3->fields)._WinningConditionManager_k__BackingField, pWVar4 != (WinningConditionManager *)0x0)) {
      pOVar5 = MVWorldObject.dll::WinningConditionManager::WinningConditionManager_GetSingletonWinnerConditionByType(pWVar4,TimeAttackFlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<TimeAttackFlagReachedClient>__);
      if (pOVar5 != (Object *)0x0) {
        *(undefined1 *)statType = GameStatCounterType__Enum_TimeAttackFlag;
        return 1;
      }
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar3 != (MVNetworkGame *)0x0) && (pWVar4 = (pMVar3->fields)._WinningConditionManager_k__BackingField, pWVar4 != (WinningConditionManager *)0x0)) {
        pOVar5 = MVWorldObject.dll::WinningConditionManager::WinningConditionManager_GetSingletonWinnerConditionByType(pWVar4,AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__);
        if (pOVar5 != (Object *)0x0) {
          *(undefined1 *)statType = GameStatCounterType__Enum_Collectible;
          return 1;
        }
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar3 != (MVNetworkGame *)0x0) && (pWVar4 = (pMVar3->fields)._WinningConditionManager_k__BackingField, pWVar4 != (WinningConditionManager *)0x0)) {
          pOVar5 = MVWorldObject.dll::WinningConditionManager::WinningConditionManager_GetSingletonWinnerConditionByType(pWVar4,KillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<KillLimitClient>__);
          if (pOVar5 != (Object *)0x0) {
            *(undefined1 *)statType = GameStatCounterType__Enum_Kill;
            return 1;
          }
          pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar3 != (MVNetworkGame *)0x0) && (pWVar4 = (pMVar3->fields)._WinningConditionManager_k__BackingField, pWVar4 != (WinningConditionManager *)0x0)) {
            pOVar5 = MVWorldObject.dll::WinningConditionManager::WinningConditionManager_GetSingletonWinnerConditionByType(pWVar4,OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__);
            if (pOVar5 == (Object *)0x0) {
              return 0;
            }
            *(undefined1 *)statType = GameStatCounterType__Enum_OculusKill;
            return 1;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* Boolean TryGetPrioritizedWinCondition(WinningConditionType ByRef) */

bool Assembly-CSharp.dll::WinningConditionControl::WinningConditionControl_TryGetPrioritizedWinCondition(WinningConditionType__Enum *condition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__);
    LOCK();
    UNLOCK();
    FUN_?(&FlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<FlagReachedClient>__);
    LOCK();
    UNLOCK();
    FUN_?(&KillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<KillLimitClient>__);
    LOCK();
    UNLOCK();
    FUN_?(&OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__);
    LOCK();
    UNLOCK();
    FUN_?(&TimeAttackFlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<TimeAttackFlagReachedClient>__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  *condition = WinningConditionType__Enum_None;
  if (bVar1) {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar2 != (MVGameControllerBase *)0x0) && (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) && (pWVar4 = (pMVar3->fields)._WinningConditionManager_k__BackingField, pWVar4 != (WinningConditionManager *)0x0)) {
    pOVar5 = MVWorldObject.dll::WinningConditionManager::WinningConditionManager_GetSingletonWinnerConditionByType(pWVar4,FlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<FlagReachedClient>__);
    if (pOVar5 != (Object *)0x0) {
      *condition = WinningConditionType__Enum_Flag;
      return 1;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar2 != (MVGameControllerBase *)0x0) && (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) && (pWVar4 = (pMVar3->fields)._WinningConditionManager_k__BackingField, pWVar4 != (WinningConditionManager *)0x0)) {
      pOVar5 = MVWorldObject.dll::WinningConditionManager::WinningConditionManager_GetSingletonWinnerConditionByType(pWVar4,TimeAttackFlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<TimeAttackFlagReachedClient>__);
      if (pOVar5 != (Object *)0x0) {
        *condition = WinningConditionType__Enum_TimeAttackFlag;
        return 1;
      }
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar3 != (MVNetworkGame *)0x0) && (pWVar4 = (pMVar3->fields)._WinningConditionManager_k__BackingField, pWVar4 != (WinningConditionManager *)0x0)) {
        pOVar5 = MVWorldObject.dll::WinningConditionManager::WinningConditionManager_GetSingletonWinnerConditionByType(pWVar4,AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__);
        if (pOVar5 != (Object *)0x0) {
          *condition = WinningConditionType__Enum_Collectible;
          return 1;
        }
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar3 != (MVNetworkGame *)0x0) && (pWVar4 = (pMVar3->fields)._WinningConditionManager_k__BackingField, pWVar4 != (WinningConditionManager *)0x0)) {
          pOVar5 = MVWorldObject.dll::WinningConditionManager::WinningConditionManager_GetSingletonWinnerConditionByType(pWVar4,KillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<KillLimitClient>__);
          if (pOVar5 != (Object *)0x0) {
            *condition = WinningConditionType__Enum_Kill;
            return 1;
          }
          pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar3 != (MVNetworkGame *)0x0) && (pWVar4 = (pMVar3->fields)._WinningConditionManager_k__BackingField, pWVar4 != (WinningConditionManager *)0x0)) {
            pOVar5 = MVWorldObject.dll::WinningConditionManager::WinningConditionManager_GetSingletonWinnerConditionByType(pWVar4,OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__);
            if (pOVar5 == (Object *)0x0) {
              return 0;
            }
            *condition = WinningConditionType__Enum_Oculus;
            return 1;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


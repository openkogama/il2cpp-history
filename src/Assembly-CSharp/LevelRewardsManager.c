
/* Void AddClaimedLevelRewards(Dictionary`2[System.Int32,System.Int32]) */

void Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager_AddClaimedLevelRewards
               (LevelRewardsManager *this,Dictionary_2_System_Int32_System_Int32_ *levelRewards,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_int>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_int>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__KeyValuePair<int,_int>__get_Key__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__KeyValuePair<int,_int>__get_Value__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (levelRewards == (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
    FUN_?();
  }
  else {
    uVar1 = 0;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&uStack_3 >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    ppDStack_7 = (Dictionary_2_System_Int32_System_Int32_ **)
                  (ulonglong)(uint)(levelRewards->fields)._version;
    uStack_8 = 2;
    uStack_9 = 0;
    uStack_10 = (ulonglong)ppDStack_7;
    uStack_11 = 0;
    uStack_12 = 2;
    uStack_3 = 0;
    ppDStack_7 = &pDStack_13;
    pDStack_13 = levelRewards;
    while( true ) {
      do {
        cVar14 = FUN_?(&pDStack_13,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_int>__MoveNext__
                             );
        uVar15 = uStack_11;
        if (cVar14 == '\0') {
          if ((this->fields).OnRewardsReturned != (Action *)0x0) {
            pAVar16 = (this->fields).OnRewardsReturned;
            (*(pAVar16->fields)._._.invoke_impl)
                      ((pAVar16->fields)._._.method_code,(pAVar16->fields)._._.method);
          }
          return;
        }
        this_00 = (Dictionary_2_System_Int32_System_Single_ *)(this->fields).unseenLevelRewards;
        if (this_00 == (Dictionary_2_System_Int32_System_Single_ *)0x0) goto code_?;
        key = (int32_t)uStack_11;
        iVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Single]::Dictionary_2_System_Int32_System_Single__FindEntry
                          (this_00,key,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                           ->klass->rgctx_data[0x21].method);
      } while (-1 < iVar17);
      this_01 = (this->fields).unseenLevelRewards;
      if (this_01 == (Dictionary_2_System_Int32_System_Int32_ *)0x0) break;
      uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),2);
      iStackX_14 = (int32_t)((ulonglong)uVar15 >> 0x20);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
      Dictionary_2_System_Int32_System_Int32__TryInsert
                (this_01,key,iStackX_14,(InsertionBehavior__Enum)uVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_->
                 klass->rgctx_data[0x22].method);
    }
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void ClearRewards() */

void Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager_ClearRewards
               (LevelRewardsManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Clear__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).unseenLevelRewards;
  if (pDVar1 != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
    length = (pDVar1->fields)._count;
    if (0 < length) {
      pIVar2 = (pDVar1->fields)._buckets;
      if (pIVar2 == (Int32__Array *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pDVar1->fields)._buckets,0,(int32_t)pIVar2->max_length,(MethodInfo *)0x0)
      ;
      (pDVar1->fields)._count = 0;
      (pDVar1->fields)._freeCount = 0;
      (pDVar1->fields)._freeList = -1;
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pDVar1->fields)._entries,0,length,(MethodInfo *)0x0);
    }
    piVar4 = &(pDVar1->fields)._version;
    *piVar4 = *piVar4 + 1;
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetNextLevelReward(Int32, Int32) */

void Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager_SetNextLevelReward
               (LevelRewardsManager *this,int32_t level,int32_t gold,MethodInfo *method)

{
  aIStackX_10[0].m_value = level;
  aIStackX_18[0].m_value = gold;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_int>__KeyValuePair_int__int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___Gold_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Next_level_reward__Level_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
  str3 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_18,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_6
                     (StringLiteral_Next_level_reward__Level_,pSVar1,StringLiteral___Gold_,str3,
                      (MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  KVar2.value = gold;
  KVar2.key = level;
  (this->fields)._NextReward_k__BackingField = KVar2;
  return;
}


/* LevelRewardsManager() */

void Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager__ctor
               (LevelRewardsManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32_System_Int32_ *)
           FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
  FUN_?(pDVar1,MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__)
  ;
  bVar2 = iRam_? != 0;
  (this->fields).unseenLevelRewards = pDVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return;
}



/* Int32 GetTotalGamePointAmount() */

int32_t Assembly-CSharp.dll::GamePointAmountManager::GamePointAmountManager_GetTotalGamePointAmount
                  (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Values__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_int>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_int>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePointAmountManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_int>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = 0;
  if (*(int *)&(TypeInfo__GamePointAmountManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__GamePointAmountManager);
  }
  pDVar2 = TypeInfo__GamePointAmountManager->static_fields->gamePointRewardWorldObjects;
  if ((pDVar2 == (Dictionary_2_System_Int32_System_Int32_ *)0x0) ||
     (lVar3 = FUN_?(pDVar2,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Values__
                           ), lVar3 == 0)) {
    FUN_?();
    puVar4 = puStack_5;
code_?:
    puStack_5 = puVar4;
    FUN_?();
    puVar4 = puStack_5;
    uVar6 = uStack_7;
code_?:
    uStack_7 = uVar6;
    puStack_5 = puVar4;
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
    puVar4 = puStack_5;
  }
  else {
    lVar3 = *(longlong *)(lVar3 + 0x10);
    puStack_5 = (undefined4 *)0x0;
    uStack_8 = 0;
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)&uStack_9 >> 0xc);
      puVar10 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar11 = *puVar10;
        LOCK();
        uVar12 = *puVar10;
        if (uVar11 == uVar12) {
          *puVar10 = uVar11 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (uVar11 != uVar12);
    }
    if (lVar3 == 0) {
      uStack_9 = lVar3;
      FUN_?();
      pcVar13 = (code *)swi(3);
      iVar14 = (*pcVar13)();
      return iVar14;
    }
    iStack_15 = *(int *)(lVar3 + 0x2c);
    puStack_5._0_4_ = 0;
    uStack_8 = 0;
    uStack_9._0_4_ = (undefined4)lVar3;
    uStack_9._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
    uStack_16 = (undefined4)uStack_9;
    uStack_17 = uStack_9._4_4_;
    uStack_18 = 0;
    uStack_9 = 0;
    while (puVar4 = &uStack_16, uStack_7 = (uint)puStack_5, lVar3 != 0) {
      puStack_5 = &uStack_16;
      if (iStack_15 != *(int *)(lVar3 + 0x2c)) goto code_?;
      do {
        if (lVar3 == 0) goto code_?;
        if (*(uint *)(lVar3 + 0x20) <= uStack_7) {
          return iVar1;
        }
        lVar19 = *(longlong *)(lVar3 + 0x18);
        lVar20 = (longlong)(int)uStack_7;
        puStack_5._0_4_ = uStack_7 + 1;
        uVar6 = (uint)puStack_5;
        if (lVar19 == 0) goto code_?;
        bVar21 = *(uint *)(lVar19 + 0x18) <= uStack_7;
        uStack_7 = (uint)puStack_5;
        if (bVar21) goto code_?;
      } while (*(int *)(lVar19 + (lVar20 + 2) * 0x10) < 0);
      uVar6 = *(uint *)(lVar19 + 0x2c + lVar20 * 0x10);
      uStack_18 = (ulonglong)uVar6;
      iVar1 = iVar1 + uVar6;
    }
  }
  puStack_5 = puVar4;
  FUN_?();
  FUN_?();
  pcVar13 = (code *)swi(3);
  iVar14 = (*pcVar13)();
  return iVar14;
}


/* Void UpdateRewardData(Int32, Int32) */

void Assembly-CSharp.dll::GamePointAmountManager::GamePointAmountManager_UpdateRewardData
               (int32_t woid,int32_t gamePointRewardAmount,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_int>__set_Item_int__int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePointAmountManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__GamePointAmountManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__GamePointAmountManager);
  }
  this = (Dictionary_2_System_Int32_System_Single_ *)
         TypeInfo__GamePointAmountManager->static_fields->gamePointRewardWorldObjects;
  if (this != (Dictionary_2_System_Int32_System_Single_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__FindEntry
                      (this,woid,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      if (*(int *)&(TypeInfo__GamePointAmountManager->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__GamePointAmountManager);
      }
      pDVar2 = TypeInfo__GamePointAmountManager->static_fields->gamePointRewardWorldObjects;
      if (pDVar2 == (Dictionary_2_System_Int32_System_Int32_ *)0x0) goto code_?;
      in_R9D = CONCAT31((int3)(in_R9D >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
      Dictionary_2_System_Int32_System_Int32__TryInsert
                (pDVar2,woid,gamePointRewardAmount,in_R9D,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_->
                 klass->rgctx_data[0x22].method);
    }
    if (*(int *)&(TypeInfo__GamePointAmountManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__GamePointAmountManager);
    }
    pDVar2 = TypeInfo__GamePointAmountManager->static_fields->gamePointRewardWorldObjects;
    if (pDVar2 != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
      Dictionary_2_System_Int32_System_Int32__TryInsert
                (pDVar2,woid,gamePointRewardAmount,CONCAT31((int3)(in_R9D >> 8),1),
                 MethodInfo__System__Collections__Generic__Dictionary<int,_int>__set_Item_int__int_
                 ->klass->rgctx_data[0x22].method);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* GamePointAmountManager() */

void Assembly-CSharp.dll::GamePointAmountManager::GamePointAmountManager__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePointAmountManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32_System_Int32_ *)
           FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
  FUN_?(pDVar1,MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__)
  ;
  bVar2 = iRam_? != 0;
  TypeInfo__GamePointAmountManager->static_fields->gamePointRewardWorldObjects = pDVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)TypeInfo__GamePointAmountManager->static_fields >> 0xc);
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


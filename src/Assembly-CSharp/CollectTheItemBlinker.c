
/* Void Awake() */

void Assembly-CSharp.dll::CollectTheItemBlinker::CollectTheItemBlinker_Awake
               (CollectTheItemBlinker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Blinker);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Add_BlinkType__Blinker_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            FUN_?(TypeInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Dictionary__)
  ;
  pMVar1 = (this->fields)._.blinkMaterial;
  uVar2._0_4_ = (this->fields).dropOffCollectedItemColor.r;
  uVar2._4_4_ = (this->fields).dropOffCollectedItemColor.g;
  uVar3._0_4_ = (this->fields).dropOffCollectedItemColor.b;
  uVar3._4_4_ = (this->fields).dropOffCollectedItemColor.a;
  pBVar4 = (Blinker *)FUN_?(TypeInfo__Blinker);
  pCVar5 = aCStack_6;
  aCStack_6[0]._0_8_ = uVar2;
  aCStack_6[0]._8_8_ = uVar3;
  Blinker::Blinker__ctor
            (pBVar4,TypeRef__System__Activator__T._0_4_,pMVar1,pCVar5,(MethodInfo *)0x0);
  if (this_00 == (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,6,(Object *)pBVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pCVar5 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Add_BlinkType__Blinker_
             ->klass->rgctx_data[0x22].method);
  pMVar1 = (this->fields)._.blinkMaterial;
  uVar8._0_4_ = (this->fields).DespawnColor.r;
  uVar8._4_4_ = (this->fields).DespawnColor.g;
  uVar9._0_4_ = (this->fields).DespawnColor.b;
  uVar9._4_4_ = (this->fields).DespawnColor.a;
  pBVar4 = (Blinker *)FUN_?(TypeInfo__Blinker);
  pCVar5 = aCStack_6;
  aCStack_6[0]._0_8_ = uVar8;
  aCStack_6[0]._8_8_ = uVar9;
  Blinker::Blinker__ctor
            (pBVar4,TypeRef__System__Activator__T._0_4_,pMVar1,pCVar5,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,5,(Object *)pBVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pCVar5 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Add_BlinkType__Blinker_
             ->klass->rgctx_data[0x22].method);
  bVar10 = iRam_? != 0;
  (this->fields)._.blinkers = (Dictionary_2_BlinkType_Blinker_ *)this_00;
  if (bVar10) {
    uVar11 = (uint)((ulonglong)&(this->fields)._.blinkers >> 0xc);
    uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
    do {
      uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
      puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
      LOCK();
      bVar10 = uVar13 == *puVar14;
      if (bVar10) {
        *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
  }
  return;
}


/* Void DeactivateBlinking() */

void Assembly-CSharp.dll::CollectTheItemBlinker::CollectTheItemBlinker_DeactivateBlinking
               (CollectTheItemBlinker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Keys__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<BlinkType,_Blinker>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<BlinkType,_Blinker>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<BlinkType,_Blinker>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<BlinkType,_Blinker>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )(this->fields)._.blinkers;
  if ((this_00 ==
       (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
     || (pDVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  TypeConverterRegistry+ConverterKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Keys
                            (this_00,
                             MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Keys__
                            ),
        pDVar1 == (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_3 = (pDVar1->fields)._dictionary;
  puStack_4 = (undefined4 *)0x0;
  uStack_5 = 0;
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&uStack_3 >> 0xc);
    uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
    do {
      uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
      puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
      LOCK();
      bVar10 = uVar8 == *puVar9;
      if (bVar10) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
  }
  if (uStack_3 ==
      (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
  {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iStack_11 = (uStack_3->fields)._version;
  uStack_5 = 0;
  uStack_3._4_4_ = (undefined4)((ulonglong)uStack_3 >> 0x20);
  uStack_12 = (undefined4)uStack_3;
  uStack_13 = uStack_3._4_4_;
  uStack_14 = 0;
  uStack_15 = 0;
  uStack_3 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)0x0;
  puStack_4 = &uStack_12;
  do {
    lVar16 = CONCAT44(uStack_13,uStack_12);
    if (lVar16 == 0) {
code_?:
      FUN_?();
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (iStack_11 != *(int *)(lVar16 + 0x2c)) {
code_?:
      mscorlib.dll::System::ThrowHelper::
      ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
                ((MethodInfo *)0x0);
      goto code_?;
    }
    do {
      if (lVar16 == 0) goto code_?;
      if (*(uint *)(lVar16 + 0x20) <= uStack_14) {
        return;
      }
      lVar17 = *(longlong *)(lVar16 + 0x18);
      lVar18 = (longlong)(int)uStack_14;
      uVar6 = uStack_14 + 1;
      if (lVar17 == 0) goto code_?;
      if (*(uint *)(lVar17 + 0x18) <= uStack_14) {
        uStack_14 = uVar6;
        FUN_?();
        goto code_?;
      }
      uStack_14 = uVar6;
    } while (*(int *)(lVar17 + 0x20 + lVar18 * 0x18) < 0);
    key = *(Int32Enum__Enum *)(lVar17 + 0x28 + lVar18 * 0x18);
    uStack_15 = CONCAT44(uStack_15._4_4_,key);
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Item_BlinkType_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_01 = (this->fields)._.blinkers;
    if (this_01 == (Dictionary_2_BlinkType_Blinker_ *)0x0) {
code_?:
      FUN_?();
      uVar6 = uStack_14;
code_?:
      uStack_14 = uVar6;
      FUN_?();
code_?:
      FUN_?();
      goto code_?;
    }
    pOVar19 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,key,
                        MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Item_BlinkType_
                       );
    if (pOVar19 == (Object *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    pOVar19[1].monitor = (MonitorData *)0x0;
  } while( true );
}


/* Void OnBlinkingActivated(Boolean, BlinkType) */

void Assembly-CSharp.dll::CollectTheItemBlinker::CollectTheItemBlinker_OnBlinkingActivated
               (CollectTheItemBlinker *this,bool shouldBlink,BlinkType__Enum type,MethodInfo *method
               )

{
  uVar1 = TypeRef__System__Activator__T._0_4_;
  if (shouldBlink == 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Item_BlinkType_
                  ,type,CONCAT44(in_register_00000084,type),0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.blinkers;
  if ((this_00 != (Dictionary_2_BlinkType_Blinker_ *)0x0) &&
     (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,type,
                          MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Item_BlinkType_
                         ), pOVar2 != (Object *)0x0)) {
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    uVar5 = (*pcRam_?)();
    *(undefined4 *)((longlong)&pOVar2[1].monitor + 4) = uVar1;
    *(undefined4 *)&pOVar2[1].monitor = uVar5;
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


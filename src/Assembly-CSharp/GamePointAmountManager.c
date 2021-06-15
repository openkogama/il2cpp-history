
/* Int32 GetTotalGamePointAmount() */

int32_t Assembly-CSharp.dll::GamePointAmountManager::GamePointAmountManager_GetTotalGamePointAmount
                  (MethodInfo *method)

{
  pSStack_1 = (SerializationInfo *)0xffffffff;
  pIStack_2 = (IEqualityComparer_1_WinningConditionType_ *)&DAT_?;
  iStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int32_t)&iStack_3;
  puStack_4 = &stack0xffffffac;
  puVar5 = &stack0xffffffac;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pWStack_6 = (WinningConditionType__Enum__Array *)0x0;
  pDStack_7 = (Dictionary_2_WinningConditionType_System_Object___Class *)0x0;
  pMStack_8 = (MonitorData *)0x0;
  pIStack_9 = (Int32__Array *)0x0;
  pLStack_10 = (Link__Array *)0x0;
  func_?();
  iVar11 = 0;
  iStack_12 = 0;
  puStack_13 = (undefined4 *)&stack0xffffffac;
  puStack_4 = &stack0xffffffac;
  if ((((uint)(TypeInfo__GamePointAmountManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (puStack_13 = (undefined4 *)&stack0xffffffac, puStack_4 = &stack0xffffffac,
     (TypeInfo__GamePointAmountManager->_1).cctor_started == 0)) {
    puStack_13 = (undefined4 *)&stack0xffffffac;
    puStack_4 = &stack0xffffffac;
    func_?(TypeInfo__GamePointAmountManager);
  }
  this = TypeInfo__GamePointAmountManager->static_fields->gamePointRewardWorldObjects;
  if ((this != (Dictionary_2_System_Int32_System_Int32_ *)0x0) &&
     (this_00 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
                ::Object]::Dictionary_2_WinningConditionType_System_Object__get_Values
                          ((Dictionary_2_WinningConditionType_System_Object_ *)this,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Values__
                          ),
     this_00 != (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0)
     ) {
    pDVar14 = mscorlib.dll::System::Collections::Generic::
             Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
             Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                       (&DStack_15,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_int>__GetEnumerator__
                       );
    pDStack_7 = (Dictionary_2_WinningConditionType_System_Object___Class *)
                 (pDVar14->host_enumerator).dictionary;
    pMStack_8 = (MonitorData *)(pDVar14->host_enumerator).next;
    pIStack_9 = (Int32__Array *)(pDVar14->host_enumerator).stamp;
    pLStack_10 = (Link__Array *)(pDVar14->host_enumerator).current.key;
    pWStack_6 = (WinningConditionType__Enum__Array *)(pDVar14->host_enumerator).current.value;
    pSStack_1 = (SerializationInfo *)0x0;
    while( true ) {
      DStack_15.host_enumerator.next =
           (int32_t)
           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_int>__MoveNext__
      ;
      DStack_15.host_enumerator.dictionary =
           (Dictionary_2_WinningConditionType_System_Object_ *)&pDStack_7;
      cVar16 = func_?();
      if (cVar16 == '\0') break;
      DStack_15.host_enumerator.next =
           (int32_t)
           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_int>__get_Current__
      ;
      DStack_15.host_enumerator.dictionary =
           (Dictionary_2_WinningConditionType_System_Object_ *)&pDStack_7;
      iVar17 = func_?();
      iVar11 = iVar11 + iVar17;
      iStack_12 = iVar11;
    }
    *puStack_13 = 0x42;
    pSStack_1 = (SerializationInfo *)0xffffffff;
    DStack_15.host_enumerator.next =
         (int32_t)
         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_int>__Dispose__
    ;
    DStack_15.host_enumerator.dictionary =
         (Dictionary_2_WinningConditionType_System_Object_ *)&pDStack_7;
    func_?();
    *unaff_FS_OFFSET = iStack_3;
    return iVar11;
  }
  func_?(0);
  DStack_15.host_enumerator.next = 0;
  DStack_15.host_enumerator.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)0x0;
  func_?();
  pcVar18 = (code *)swi(3);
  iVar19 = (*pcVar18)();
  return iVar19;
}


/* Void UpdateRewardData(Int32, Int32) */

void Assembly-CSharp.dll::GamePointAmountManager::GamePointAmountManager_UpdateRewardData
               (int32_t woid,int32_t gamePointRewardAmount,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePointAmountManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePointAmountManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePointAmountManager);
  }
  pDVar1 = TypeInfo__GamePointAmountManager->static_fields->gamePointRewardWorldObjects;
  if (pDVar1 != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
            Dictionary_2_System_Int32_System_Int32__ContainsKey
                      (pDVar1,woid,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                      );
    if (bVar2 == 0) {
      if ((((uint)(TypeInfo__GamePointAmountManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePointAmountManager->_1).cctor_started == 0)) {
        func_?();
      }
      pDVar1 = TypeInfo__GamePointAmountManager->static_fields->gamePointRewardWorldObjects;
      if (pDVar1 == (Dictionary_2_System_Int32_System_Int32_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
      Dictionary_2_System_Int32_System_Int32__Add
                (pDVar1,woid,gamePointRewardAmount,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
    }
    if ((((uint)(TypeInfo__GamePointAmountManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePointAmountManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePointAmountManager);
    }
    pDVar1 = TypeInfo__GamePointAmountManager->static_fields->gamePointRewardWorldObjects;
    if (pDVar1 != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
      Dictionary_2_System_Int32_System_Int32__set_Item
                (pDVar1,woid,gamePointRewardAmount,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_int>__set_Item_int__int_)
      ;
      return;
    }
  }
code_?:
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* GamePointAmountManager() */

void Assembly-CSharp.dll::GamePointAmountManager::GamePointAmountManager__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Int32_System_Int32_ *)
         func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this,
             MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
  TypeInfo__GamePointAmountManager->static_fields->gamePointRewardWorldObjects = this;
  return;
}



/* Void Awake() */

void Assembly-CSharp.dll::CollectTheItemBlinker::CollectTheItemBlinker_Awake
               (CollectTheItemBlinker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_BlinkType_System_Object_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Dictionary__)
  ;
  uVar1 = (this->fields).dropOffCollectedItemColor.r;
  uVar2 = (this->fields).dropOffCollectedItemColor.g;
  uVar3 = (this->fields).dropOffCollectedItemColor.b;
  color_00.b = (float)uVar3;
  color_00.g = (float)uVar2;
  color_00.r = (float)uVar1;
  fVar4 = (this->fields).dropOffCollectedItemColor.a;
  pMVar5 = (this->fields)._.blinkMaterial;
  pBVar6 = (Blinker *)func_?();
  color_00.a = fVar4;
  Blinker::Blinker__ctor(pBVar6,2.0,pMVar5,color_00,(MethodInfo *)0x0);
  if (this_00 != (Dictionary_2_BlinkType_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[BlinkType,System::Object]::
    Dictionary_2_BlinkType_System_Object__Add
              (this_00,BlinkType__Enum_DropOffCollectedItem,(Object *)pBVar6,
               MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Add_BlinkType__Blinker_
              );
    pMVar5 = (this->fields)._.blinkMaterial;
    uVar7 = (this->fields).DespawnColor.r;
    uVar8 = (this->fields).DespawnColor.g;
    uVar9 = (this->fields).DespawnColor.b;
    color.b = (float)uVar9;
    color.g = (float)uVar8;
    color.r = (float)uVar7;
    fVar4 = (this->fields).DespawnColor.a;
    pBVar6 = (Blinker *)func_?();
    color.a = fVar4;
    Blinker::Blinker__ctor(pBVar6,2.0,pMVar5,color,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[BlinkType,System::Object]::
    Dictionary_2_BlinkType_System_Object__Add
              (this_00,BlinkType__Enum_AboutToExpire,(Object *)pBVar6,
               MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Add_BlinkType__Blinker_
              );
    (this_00->fields).emptySlot = (int32_t)this_00;
    return;
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void DeactivateBlinking() */

void Assembly-CSharp.dll::CollectTheItemBlinker::CollectTheItemBlinker_DeactivateBlinking
               (CollectTheItemBlinker *this,MethodInfo *method)

{
  pIStack_1 = (IEqualityComparer_1_WinningConditionType_ *)0xffffffff;
  puStack_2 = &DAT_?;
  iStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int32_t)&iStack_3;
  puStack_4 = &stack0xffffffb0;
  puVar5 = &stack0xffffffb0;
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
  this_00 = (this->fields)._.blinkers;
  puStack_11 = (undefined4 *)&stack0xffffffb0;
  puStack_4 = &stack0xffffffb0;
  if ((this_00 != (Dictionary_2_BlinkType_Blinker_ *)0x0) &&
     (puStack_11 = (undefined4 *)&stack0xffffffb0, puStack_4 = &stack0xffffffb0,
     this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
               ::Object]::Dictionary_2_WinningConditionType_System_Object__get_Keys
                         ((Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Keys__
                         ),
     this_01 != (Dictionary_2_TKey_TValue_KeyCollection_WinningConditionType_System_Object_ *)0x0))
  {
    pDVar12 = mscorlib.dll::System::Collections::Generic::
             Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
             Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                       (&DStack_13,
                        (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_
                         *)this_01,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<BlinkType,_Blinker>__GetEnumerator__
                       );
    pDStack_7 = (Dictionary_2_WinningConditionType_System_Object___Class *)
                 (pDVar12->host_enumerator).dictionary;
    pMStack_8 = (MonitorData *)(pDVar12->host_enumerator).next;
    pIStack_9 = (Int32__Array *)(pDVar12->host_enumerator).stamp;
    pLStack_10 = (Link__Array *)(pDVar12->host_enumerator).current.key;
    pWStack_6 = (WinningConditionType__Enum__Array *)(pDVar12->host_enumerator).current.value;
    pIStack_1 = (IEqualityComparer_1_WinningConditionType_ *)0x0;
    while( true ) {
      DStack_13.host_enumerator.next =
           (int32_t)
           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<BlinkType,_Blinker>__MoveNext__
      ;
      DStack_13.host_enumerator.dictionary =
           (Dictionary_2_WinningConditionType_System_Object_ *)&pDStack_7;
      cVar14 = func_?();
      if (cVar14 == '\0') break;
      DStack_13.host_enumerator.next =
           (int32_t)
           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<BlinkType,_Blinker>__get_Current__
      ;
      DStack_13.host_enumerator.dictionary =
           (Dictionary_2_WinningConditionType_System_Object_ *)&pDStack_7;
      type = func_?();
      BlinkerBase::BlinkerBase_StopBlinking((BlinkerBase *)this,type,(MethodInfo *)0x0);
    }
    *puStack_11 = 0x44;
    pIStack_1 = (IEqualityComparer_1_WinningConditionType_ *)0xffffffff;
    DStack_13.host_enumerator.next =
         (int32_t)
         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<BlinkType,_Blinker>__Dispose__
    ;
    DStack_13.host_enumerator.dictionary =
         (Dictionary_2_WinningConditionType_System_Object_ *)&pDStack_7;
    func_?();
    *unaff_FS_OFFSET = iStack_3;
    return;
  }
  func_?(0);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void OnBlinkingActivated(Boolean, BlinkType) */

void Assembly-CSharp.dll::CollectTheItemBlinker::CollectTheItemBlinker_OnBlinkingActivated
               (CollectTheItemBlinker *this,bool shouldBlink,BlinkType__Enum type,MethodInfo *method
               )

{
  if (shouldBlink != 0) {
    BlinkerBase::BlinkerBase_StartBlinking((BlinkerBase *)this,type,2.0,(MethodInfo *)0x0);
  }
  return;
}


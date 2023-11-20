
/* Void Awake() */

void Assembly-CSharp.dll::CollectTheItemBlinker::CollectTheItemBlinker_Awake
               (CollectTheItemBlinker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            func_?();
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_00,
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
  if (this_00 != (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,6,(Object *)pBVar6,
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
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,5,(Object *)pBVar6,
               MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Add_BlinkType__Blinker_
              );
    (this_00->fields)._comparer = (IEqualityComparer_1_System_Int32Enum_ *)this_00;
    func_?();
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
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Keys__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<BlinkType,_Blinker>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<BlinkType,_Blinker>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<BlinkType,_Blinker>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<BlinkType,_Blinker>__GetEnumerator__
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields)._.blinkers;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
              StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
              Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                        (this_00,
                         MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Keys__
                        );
    if (this_01 !=
        (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      mscorlib.dll::System::Collections::Generic::
      Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
      StyleSheetCache+SheetHandleKey,System::Object]::
      Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                  *)&stack0xffffffd8,
                 (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                  *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<BlinkType,_Blinker>__GetEnumerator__
                );
      uStack_1 = 1;
      while( true ) {
        bVar4 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                UInt32,System::Object]::
                Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                            *)&stack0xffffffc8,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<BlinkType,_Blinker>__MoveNext__
                          );
        if (bVar4 == 0) break;
        BlinkerBase::BlinkerBase_StopBlinking
                  ((BlinkerBase *)this,BlinkType__Enum_Damage,(MethodInfo *)0x0);
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)&stack0xffffffc8,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<BlinkType,_Blinker>__Dispose__
                 ,in_stack_5);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
  uVar6 = func_?();
  func_?(uVar6);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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


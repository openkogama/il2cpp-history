
/* Void Awake() */

void Assembly-CSharp.dll::CollectTheItemBlinker::CollectTheItemBlinker_Awake
               (CollectTheItemBlinker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)func_?();
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Dictionary__
              );
    CVar1 = (this->fields).dropOffCollectedItemColor;
    pMVar2 = (this->fields)._.blinkMaterial;
    pBVar3 = (Blinker *)func_?();
    if (pBVar3 != (Blinker *)0x0) {
      Blinker::Blinker__ctor(pBVar3,2.0,pMVar2,CVar1,(MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_00,(Object *)0x6,(Object *)pBVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Add_BlinkType__Blinker_
                );
      CVar1 = (this->fields).DespawnColor;
      pMVar2 = (this->fields)._.blinkMaterial;
      pBVar3 = (Blinker *)func_?();
      if (pBVar3 != (Blinker *)0x0) {
        Blinker::Blinker__ctor(pBVar3,2.0,pMVar2,CVar1,(MethodInfo *)0x0);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (this_00,(Object *)0x5,(Object *)pBVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Add_BlinkType__Blinker_
                  );
        (this->fields)._.blinkers = (Dictionary_2_BlinkType_Blinker_ *)this_00;
        func_?();
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
            (this->fields)._.blinkers;
  if (this_00 !=
      (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0) {
    this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
              RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
              Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Keys
                        (this_00,
                         MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Keys__
                        );
    if (this_01 !=
        (Dictionary_2_TKey_TValue_KeyCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
         *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+ValueCollection[System::
      Text::RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                  *)&stack0xffffffd8,
                 (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                  *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<BlinkType,_Blinker>__GetEnumerator__
                );
      uStack_1 = 1;
      while( true ) {
        bVar4 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                Int32Enum,System::Single]::
                Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single__MoveNext
                          ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single_
                            *)&stack0xffffffc8,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<BlinkType,_Blinker>__MoveNext__
                          );
        if (bVar4 == 0) break;
        BlinkerBase::BlinkerBase_StopBlinking
                  ((BlinkerBase *)this,BlinkType__Enum_Damage,(MethodInfo *)0x0);
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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


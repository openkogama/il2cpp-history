
/* Int32 GetTotalGamePointAmount() */

int32_t Assembly-CSharp.dll::GamePointAmountManager::GamePointAmountManager_GetTotalGamePointAmount
                  (MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Values__);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_int>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_int>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_int>__get_Current__
                   );
    func_?(&TypeInfo__GamePointAmountManager);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_int>__GetEnumerator__
                   );
    cRam_? = '\x01';
  }
  iVar4 = 0;
  if ((TypeInfo__GamePointAmountManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__GamePointAmountManager);
  }
  this = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
          *)TypeInfo__GamePointAmountManager->static_fields->gamePointRewardWorldObjects;
  if (this != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0) {
    this_00 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
              StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
              Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                        (this,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Values__
                        );
    if (this_00 !=
        (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      pDVar5 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
               StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                           *)&stack0xffffffd4,this_00,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_int>__GetEnumerator__
                         );
      pOVar6 = pDVar5->_currentValue;
      uStack_1 = 1;
      while( true ) {
        bVar7 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                UInt32,System::Int32]::
                Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Int32__MoveNext
                          ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Int32_
                            *)&stack0xffffffc4,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_int>__MoveNext__
                          );
        if (bVar7 == 0) break;
        iVar4 = (int)&pOVar6->klass + iVar4;
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&stack0xffffffc4,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_int>__Dispose__
                 ,in_stack_8);
      *unaff_FS_OFFSET = uStack_3;
      return iVar4;
    }
  }
  uVar9 = func_?();
  func_?(uVar9);
  pcVar10 = (code *)swi(3);
  iVar11 = (*pcVar10)();
  return iVar11;
}


/* Void UpdateRewardData(Int32, Int32) */

void Assembly-CSharp.dll::GamePointAmountManager::GamePointAmountManager_UpdateRewardData
               (int32_t woid,int32_t gamePointRewardAmount,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_int>__set_Item_int__int_
                   );
    func_?(&TypeInfo__GamePointAmountManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__GamePointAmountManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__GamePointAmountManager);
  }
  this = (Dictionary_2_System_Int32_System_Single_ *)
         TypeInfo__GamePointAmountManager->static_fields->gamePointRewardWorldObjects;
  if (this != (Dictionary_2_System_Int32_System_Single_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      (this,woid,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      if ((TypeInfo__GamePointAmountManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar2 = TypeInfo__GamePointAmountManager->static_fields->gamePointRewardWorldObjects;
      if (pDVar2 == (Dictionary_2_System_Int32_System_Int32_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
      Dictionary_2_System_Int32_System_Int32__Add
                (pDVar2,woid,gamePointRewardAmount,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
    }
    if ((TypeInfo__GamePointAmountManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__GamePointAmountManager);
    }
    pDVar2 = TypeInfo__GamePointAmountManager->static_fields->gamePointRewardWorldObjects;
    if (pDVar2 != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
      Dictionary_2_System_Int32_System_Int32__set_Item
                (pDVar2,woid,gamePointRewardAmount,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_int>__set_Item_int__int_)
      ;
      return;
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* GamePointAmountManager() */

void Assembly-CSharp.dll::GamePointAmountManager::GamePointAmountManager__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
    func_?(&TypeInfo__GamePointAmountManager);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
         func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this,MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
  TypeInfo__GamePointAmountManager->static_fields->gamePointRewardWorldObjects =
       (Dictionary_2_System_Int32_System_Int32_ *)this;
  func_?(TypeInfo__GamePointAmountManager->static_fields,this);
  return;
}


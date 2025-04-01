
/* Void AddWinnerCondition(WinningCondition) */

void MVWorldObject.dll::WinningConditionGroup::WinningConditionGroup_AddWinnerCondition
               (WinningConditionGroup *this,WinningCondition *winnerCondition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__Add_int__IWinningCondition_
                   );
    func_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    cRam_? = '\x01';
  }
  if (winnerCondition != (WinningCondition *)0x0) {
    this_00 = (this->fields).winnerConditions;
    if (this_00 != (Dictionary_2_System_Int32_IWinningCondition_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__Add
                ((Dictionary_2_System_Int32_System_Object_ *)this_00,(winnerCondition->fields).id,
                 (Object *)winnerCondition,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__Add_int__IWinningCondition_
                );
      this_01 = (EventHandler_1_Object_ *)
                func_?(TypeInfo__System__EventHandler<System::EventArgs>);
      mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                (this_01,(Object *)this,this->klass[1]._0.image,(MethodInfo *)0x0);
      WinningCondition::WinningCondition_add_OnWinningConditionChanged
                (winnerCondition,(EventHandler_1_EventArgs_ *)this_01,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void RemoveWinnerCondition(Int32) */

void MVWorldObject.dll::WinningConditionGroup::WinningConditionGroup_RemoveWinnerCondition
               (WinningConditionGroup *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__Remove_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__get_Item_int_
                   );
    func_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    func_?(&TypeInfo__IWinningCondition);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).winnerConditions;
  if (pDVar1 != (Dictionary_2_System_Int32_IWinningCondition_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
             ::Dictionary_2_System_Int32_System_Object__get_Item
                       ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,id,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__get_Item_int_
                       );
    this_00 = (EventHandler_1_Object_ *)
              func_?(TypeInfo__System__EventHandler<System::EventArgs>);
    mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
              (this_00,(Object *)this,this->klass[1]._0.image,(MethodInfo *)0x0);
    if (pOVar2 != (Object *)0x0) {
      pOVar3 = pOVar2->klass;
      uVar4 = 0;
      uVar5._0_1_ = (pOVar3->_1).rank;
      uVar5._1_1_ = (pOVar3->_1).minimumAlignment;
      if (uVar5 != 0) {
        do {
          if (pOVar3->interfaceOffsets[uVar4].interfaceType ==
              (Il2CppClass *)TypeInfo__IWinningCondition) {
            ppMVar6 = &(&(pOVar3->vtable).GetHashCode)[pOVar3->interfaceOffsets[uVar4].offset].
                       method;
            goto code_?;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar5);
      }
      ppMVar6 = (MethodInfo **)func_?(pOVar2,TypeInfo__IWinningCondition,2);
code_?:
      (*(code *)*ppMVar6)(pOVar2,this_00,ppMVar6[1]);
      pDVar1 = (this->fields).winnerConditions;
      if (pDVar1 != (Dictionary_2_System_Int32_IWinningCondition_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Remove
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,id,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__Remove_int_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Boolean Traverse(Func`2[IWinningCondition,Boolean]) */

bool MVWorldObject.dll::WinningConditionGroup::WinningConditionGroup_Traverse
               (WinningConditionGroup *this,Func_2_IWinningCondition_Boolean_ *callBack,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffac;
  puVar5 = &stack0xffffffac;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__get_Values__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_IWinningCondition>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_IWinningCondition>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_IWinningCondition>__get_Current__
                   );
    func_?(&TypeInfo__IWinningCondition);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_IWinningCondition>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  if (callBack != (Func_2_IWinningCondition_Boolean_ *)0x0) {
    cVar6 = (*(callBack->fields)._._.invoke_impl)
                      ((callBack->fields)._._.method_code,this,(callBack->fields)._._.method);
    if (cVar6 != '\0') {
code_?:
      *unaff_FS_OFFSET = uStack_3;
      return 1;
    }
    this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)(this->fields).winnerConditions;
    if (this_00 !=
        (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                          (this_00,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__get_Values__
                          );
      if (this_01 !=
          (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
           *)0x0) {
        pDVar7 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
                 StyleSheetCache+SheetHandleKey,System::Object]::
                 Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                           (&DStack_8,this_01,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_IWinningCondition>__GetEnumerator__
                           );
        DStack_8._currentValue = (Object *)&DStack_9;
        DStack_9._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)pDVar7->_dictionary;
        DStack_9._index = pDVar7->_index;
        DStack_9._version = pDVar7->_version;
        DStack_9._currentValue = pDVar7->_currentValue;
        DStack_8._version = 0;
        uStack_1 = 1;
        do {
          bVar10 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                  UInt32,System::Object]::
                  Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                            (&DStack_9,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_IWinningCondition>__MoveNext__
                            );
          pOVar11 = DStack_9._currentValue;
          if (bVar10 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)&DStack_9,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_IWinningCondition>__Dispose__
                       ,unaff_EDI);
            *unaff_FS_OFFSET = uStack_3;
            return 0;
          }
          pOStack_12 = DStack_9._currentValue;
          if (DStack_9._currentValue == (Object *)0x0) goto code_?;
          pOStack_13 = (DStack_9._currentValue)->klass;
          uVar14 = 0;
          uStack_15 = 0;
          uVar16._0_1_ = (pOStack_13->_1).rank;
          uVar16._1_1_ = (pOStack_13->_1).minimumAlignment;
          uStack_17 = (uint)uVar16;
          if (uVar16 != 0) {
            do {
              if (pOStack_13->interfaceOffsets[uVar14].interfaceType ==
                  (Il2CppClass *)TypeInfo__IWinningCondition) {
                ppvVar18 = &(DStack_9._currentValue)->klass[1]._0.gc_desc +
                          (DStack_9._currentValue)->klass->interfaceOffsets[uVar14].offset * 2;
                goto code_?;
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 < uVar16);
          }
          ppvVar18 = (void **)func_?(DStack_9._currentValue,TypeInfo__IWinningCondition,4);
code_?:
          method_00 = callBack;
          cVar6 = (**ppvVar18)(pOVar11,callBack,ppvVar18[1]);
        } while (cVar6 == '\0');
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&DStack_9,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_IWinningCondition>__Dispose__
                   ,(MethodInfo *)method_00);
        goto code_?;
      }
    }
  }
code_?:
  func_?();
  pcVar19 = (code *)swi(3);
  bVar10 = (*pcVar19)();
  return bVar10;
}


/* WinningConditionGroup(WinningCondition, Int32, GameStatCounterManager, Int32, Boolean,
   GameStatCounterType, WinningConditionPresentStyle) */

void MVWorldObject.dll::WinningConditionGroup::WinningConditionGroup__ctor
               (WinningConditionGroup *this,WinningCondition *parent,int32_t id,
               GameStatCounterManager *gameCounterManager,int32_t limit,bool isBriefingNode,
               GameStatCounterType__Enum gameStatCounterType,
               WinningConditionPresentStyle__Enum winningConditionPresentStyle,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__Dictionary__
            );
  ppDVar1 = &(this->fields).winnerConditions;
  *ppDVar1 = (Dictionary_2_System_Int32_IWinningCondition_ *)this_00;
  func_?(ppDVar1,this_00);
  WinningCondition::WinningCondition__ctor
            ((WinningCondition *)this,parent,id,gameCounterManager,limit,isBriefingNode,
             gameStatCounterType,winningConditionPresentStyle,(MethodInfo *)0x0);
  return;
}


/* Int32 get_Length() */

int32_t MVWorldObject.dll::WinningConditionGroup::WinningConditionGroup_get_Length
                  (WinningConditionGroup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields).winnerConditions;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
            StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
            Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                      (this_00,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__get_Count__
                      );
    return iVar1;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  iVar1 = (*pcVar4)();
  return iVar1;
}


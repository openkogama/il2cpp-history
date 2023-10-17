
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
    this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).winnerConditions;
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_00,(Object *)(winnerCondition->fields).id,(Object *)winnerCondition,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__Add_int__IWinningCondition_
                );
      this_01 = (UnityAction_2_System_Object_System_Object_ *)
                func_?(TypeInfo__System__EventHandler<System::EventArgs>);
      if (this_01 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (this_01,(Object *)this,(this->klass->vtable).__unknown.method,(MethodInfo *)0x0);
        WinningCondition::WinningCondition_add_OnWinningConditionChanged
                  (winnerCondition,(EventHandler_1_EventArgs_ *)this_01,(MethodInfo *)0x0);
        return;
      }
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
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,id,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__get_Item_int_
                       );
    this_00 = (UnityAction_2_System_Object_System_Object_ *)
              func_?(TypeInfo__System__EventHandler<System::EventArgs>);
    if (this_00 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_00,(Object *)this,(this->klass->vtable).__unknown.method,(MethodInfo *)0x0);
      if (pOVar2 != (Object *)0x0) {
        uVar3 = 0;
        uVar4 = (pOVar2->klass->_1).interface_offsets_count;
        if (uVar4 != 0) {
          do {
            if (pOVar2->klass->interfaceOffsets[uVar3].interfaceType ==
                (Il2CppClass *)TypeInfo__IWinningCondition) {
              ppIVar5 = &pOVar2->klass[1]._0.image +
                        pOVar2->klass->interfaceOffsets[uVar3].offset * 2;
              goto code_?;
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < uVar4);
        }
        ppIVar5 = (Il2CppImage **)func_?(pOVar2,TypeInfo__IWinningCondition,4);
code_?:
        (*(code *)*ppIVar5)(pOVar2,this_00,ppIVar5[1]);
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
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
  DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_6._index = 0;
  DStack_6._version = 0;
  DStack_6._currentValue = (Object *)0x0;
  if (callBack != (Func_2_IWinningCondition_Boolean_ *)0x0) {
    cVar7 = (*(callBack->fields)._._.invoke_impl)
                      ((callBack->fields)._._.method_code,this,(callBack->fields)._._.method);
    if (cVar7 != '\0') {
code_?:
      *unaff_FS_OFFSET = uStack_3;
      return 1;
    }
    this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *
              )(this->fields).winnerConditions;
    if (this_00 !=
        (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0)
    {
      this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Values
                          (this_00,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__get_Values__
                          );
      if (this_01 !=
          (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
           *)0x0) {
        pDVar8 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
                 Regex+CachedCodeEntryKey,System::Object]::
                 Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                           (&DStack_9,this_01,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_IWinningCondition>__GetEnumerator__
                           );
        DStack_9._currentValue = (Object *)&DStack_6;
        DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar8->_dictionary;
        DStack_6._index = pDVar8->_index;
        DStack_6._version = pDVar8->_version;
        DStack_6._currentValue = pDVar8->_currentValue;
        DStack_9._version = 0;
        uStack_1 = 1;
        do {
          bVar10 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                  Object,System::Object]::
                  Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                            (&DStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_IWinningCondition>__MoveNext__
                            );
          pOVar11 = DStack_6._currentValue;
          if (bVar10 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)&DStack_6,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_IWinningCondition>__Dispose__
                       ,unaff_EDI);
            *unaff_FS_OFFSET = uStack_3;
            return 0;
          }
          pOStack_12 = DStack_6._currentValue;
          if (DStack_6._currentValue == (Object *)0x0) goto code_?;
          pOStack_13 = (DStack_6._currentValue)->klass;
          uVar14 = 0;
          uStack_15 = 0;
          uVar16 = (pOStack_13->_1).interface_offsets_count;
          uStack_17 = (uint)uVar16;
          if (uVar16 != 0) {
            do {
              if (pOStack_13->interfaceOffsets[uVar14].interfaceType ==
                  (Il2CppClass *)TypeInfo__IWinningCondition) {
                pIVar18 = &(DStack_6._currentValue)->klass[1]._0.byval_arg +
                         (DStack_6._currentValue)->klass->interfaceOffsets[uVar14].offset;
                goto code_?;
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 < uVar16);
          }
          pIVar18 = (Il2CppType *)
                   func_?(DStack_6._currentValue,TypeInfo__IWinningCondition,6);
code_?:
          uVar19._0_2_ = pIVar18->attrs;
          uVar19._2_1_ = pIVar18->type;
          uVar19._3_1_ = pIVar18->field_0x7;
          method_00 = callBack;
          cVar7 = (*(code *)pIVar18->data)(pOVar11,callBack,uVar19);
        } while (cVar7 == '\0');
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)&DStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_IWinningCondition>__Dispose__
                   ,(MethodInfo *)method_00);
        goto code_?;
      }
    }
  }
code_?:
  func_?();
  pcVar20 = (code *)swi(3);
  bVar10 = (*pcVar20)();
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
  this_00 = (Dictionary_2_System_Int32_IWinningCondition_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>
                           );
  if (this_00 != (Dictionary_2_System_Int32_IWinningCondition_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__Dictionary__
              );
    (this->fields).winnerConditions = this_00;
    func_?(&(this->fields).winnerConditions,this_00);
    WinningCondition::WinningCondition__ctor
              ((WinningCondition *)this,parent,id,gameCounterManager,limit,isBriefingNode,
               gameStatCounterType,winningConditionPresentStyle,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
  this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
            (this->fields).winnerConditions;
  if (this_00 !=
      (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
            RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
            Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
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


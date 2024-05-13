
/* Void AddLogicObjectToUpdate(Int32, IInputSignalReceiver) */

void MVWorldObject.dll::LogicObjectManager::LogicObjectManager_AddLogicObjectToUpdate
               (LogicObjectManager *this,int32_t worldObjectID,
               IInputSignalReceiver *logicWorldObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_System_Object_ *)(this->fields).logicWorldObjects;
  if (this_00 != (Dictionary_2_System_Int32_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              (this_00,worldObjectID,(Object *)logicWorldObject,
               MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__Add_int__IInputSignalReceiver_
              );
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ClearDebugIds() */

void MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ClearDebugIds
               (LogicObjectManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
            (this->fields).updatedIds;
  if (this_00 != (HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Clear
              (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
    return;
  }
  uVar1 = func_?(&puStack_2);
  func_?(uVar1);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void DebugAddId(Int32) */

void MVWorldObject.dll::LogicObjectManager::LogicObjectManager_DebugAddId
               (LogicObjectManager *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_System_Int32Enum_ *)(this->fields).updatedIds;
  if (this_00 != (HashSet_1_System_Int32Enum_ *)0x0) {
    bVar1 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
            HashSet_1_System_Int32Enum__Contains
                      (this_00,id,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    if (bVar1 != 0) goto code_?;
    this_01 = (this->fields).updatedIds;
    if (this_01 != (HashSet_1_System_Int32_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
      HashSet_1_System_Int32__System_Collections_Generic_ICollection_T__Add
                (this_01,id,MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
      return;
    }
  }
  func_?();
code_?:
  uVar2 = func_?();
  this_02 = (Exception *)func_?(uVar2);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Id_already_evaluated__This_is_a_);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_02,message,method_00);
  func_?();
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean DoesLinkExist(MVWorldObject, Int32) */

bool MVWorldObject.dll::LogicObjectManager::LogicObjectManager_DoesLinkExist
               (MVWorldObject *outputWo,int32_t inputWOID,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  if ((outputWo != (MVWorldObject *)0x0) &&
     (this = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (outputWo->fields).outputLinkRefs,
     this != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_8,this,
                        MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__GetEnumerator__
                       );
    LStack_6._list = (List_1_System_Object_ *)pLVar7->_list;
    LStack_6._index = pLVar7->_index;
    LStack_6._version = pLVar7->_version;
    LStack_6._current = *(Object **)&pLVar7->_current;
    LStack_8._version = 0;
    uStack_1 = 1;
    LStack_8._current = (RegexCharClass_SingleRange)&LStack_6;
    while( true ) {
      bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_6,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                        );
      if (bVar9 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&LStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return 0;
      }
      if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0) break;
      if (*(int *)((int)LStack_6._current + 0x10) == inputWOID) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&LStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return 1;
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  bVar9 = (*pcVar10)();
  return bVar9;
}


/* Void RemoveLogicObjectFromUpdate(Int32) */

void MVWorldObject.dll::LogicObjectManager::LogicObjectManager_RemoveLogicObjectFromUpdate
               (LogicObjectManager *this,int32_t worldObjectID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__Remove_int_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).logicWorldObjects;
  if (this_00 != (Dictionary_2_System_Int32_IInputSignalReceiver_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)this_00,worldObjectID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__ContainsKey_int_
                      );
    if (bVar1 != 0) {
      this_01 = (Dictionary_2_System_Int32_System_Object_ *)(this->fields).logicWorldObjects;
      if (this_01 == (Dictionary_2_System_Int32_System_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__Remove
                (this_01,worldObjectID,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__Remove_int_
                );
    }
    return;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Reset() */

void MVWorldObject.dll::LogicObjectManager::LogicObjectManager_Reset
               (LogicObjectManager *this,MethodInfo *method)

{
  (this->fields)._TimeStamp_k__BackingField = 0;
  return;
}


/* Int32 ResetChunk(Int32, IWorldObjectManager) */

int32_t MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetChunk
                  (int32_t woID,IWorldObjectManager *worldObjectManager,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    cRam_? = '\x01';
  }
  this = (HashSet_1_System_Int32_ *)
         func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
  HashSet_1_System_Int32___ctor
            (this,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  LogicObjectManager_ResetNode(woID,this,worldObjectManager,(MethodInfo *)0x0);
  if (this != (HashSet_1_System_Int32_ *)0x0) {
    return (this->fields)._count;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  iVar2 = (*pcVar1)();
  return iVar2;
}


/* Void ResetNode(Int32, HashSet`1[System.Int32], IWorldObjectManager) */

void MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetNode
               (int32_t woID,HashSet_1_System_Int32_ *resetNodes,
               IWorldObjectManager *worldObjectManager,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb4;
  puVar5 = &stack0xffffffb4;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    func_?(&TypeInfo__IInputSignalReceiver);
    in_stack_6 = &TypeInfo__ILogicWorldObject;
    func_?();
    func_?(&TypeInfo__MV__WorldObject__IWorldObjectManager);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_7._list = (List_1_System_Object_ *)0x0;
  LStack_7._index = 0;
  LStack_7._version = 0;
  LStack_7._current = (Object *)0x0;
  if (resetNodes != (HashSet_1_System_Int32_ *)0x0) {
    bVar8 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
            HashSet_1_System_Int32Enum__Contains
                      ((HashSet_1_System_Int32Enum_ *)resetNodes,woID,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    if (bVar8 != 0) {
code_?:
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    if (worldObjectManager != (IWorldObjectManager *)0x0) {
      method_00 = TypeInfo__MV__WorldObject__IWorldObjectManager;
      piVar9 = (int *)func_?(0);
      LStack_10._current = (RegexCharClass_SingleRange)TypeInfo__ILogicWorldObject;
      piStack_11 = piVar9;
      if (piVar9 != (int *)0x0) {
        iVar12 = func_?(piVar9,TypeInfo__ILogicWorldObject);
        if (iVar12 != 0) {
          LStack_10._current = (RegexCharClass_SingleRange)TypeInfo__ILogicWorldObject;
          iVar12 = func_?(piVar9,TypeInfo__ILogicWorldObject);
          if (iVar12 != 0) {
            iVar12 = func_?(0,TypeInfo__ILogicWorldObject,iVar12);
            if (iVar12 != 0) {
              func_?(3,TypeInfo__IInputSignalReceiver,iVar12);
              (**(code **)(*piVar9 + 0x150))(piVar9,*(undefined4 *)(*piVar9 + 0x154));
              System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
              HashSet_1_System_Int32__System_Collections_Generic_ICollection_T__Add
                        (resetNodes,woID,
                         MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
              if ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)piVar9[7] !=
                  (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
                pLVar13 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                         RegularExpressions::RegexCharClass+SingleRange]::
                         List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                                   (&LStack_10,
                                    (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                     *)piVar9[7],
                                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__GetEnumerator__
                                   );
                LStack_7._list = (List_1_System_Object_ *)pLVar13->_list;
                LStack_7._index = pLVar13->_index;
                LStack_7._version = pLVar13->_version;
                LStack_7._current = *(Object **)&pLVar13->_current;
                LStack_10._version = 0;
                uStack_1 = 1;
                LStack_10._current = (RegexCharClass_SingleRange)&LStack_7;
                while( true ) {
                  bVar8 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                          Object]::List_1_T_Enumerator_System_Object__MoveNext
                                    (&LStack_7,
                                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                                    );
                  if (bVar8 == 0) break;
                  if ((RegexCharClass_SingleRange)LStack_7._current ==
                      (RegexCharClass_SingleRange)0x0) goto code_?;
                  LogicObjectManager_ResetNode
                            (*(int32_t *)((int)LStack_7._current + 0xc),resetNodes,
                             worldObjectManager,(MethodInfo *)0x0);
                }
                uStack_1 = 0xffffffff;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                          ((Object *)&LStack_7,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__Dispose__
                           ,(MethodInfo *)in_stack_6);
                uStack_1 = 0xffffffff;
                if ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                    piStack_11[6] !=
                    (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
                  pLVar13 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                           RegularExpressions::RegexCharClass+SingleRange]::
                           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                                     (&LStack_10,
                                      (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                       *)piStack_11[6],
                                      MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__GetEnumerator__
                                     );
                  LStack_7._list = (List_1_System_Object_ *)pLVar13->_list;
                  LStack_7._index = pLVar13->_index;
                  LStack_7._version = pLVar13->_version;
                  LStack_7._current = *(Object **)&pLVar13->_current;
                  LStack_10._version = 0;
                  uStack_1 = 4;
                  LStack_10._current = (RegexCharClass_SingleRange)&LStack_7;
                  while( true ) {
                    bVar8 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System
                            ::Object]::List_1_T_Enumerator_System_Object__MoveNext
                                      (&LStack_7,
                                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                                      );
                    if (bVar8 == 0) break;
                    if ((RegexCharClass_SingleRange)LStack_7._current ==
                        (RegexCharClass_SingleRange)0x0) goto code_?;
                    LogicObjectManager_ResetNode
                              (*(int32_t *)((int)LStack_7._current + 0x10),resetNodes,
                               worldObjectManager,(MethodInfo *)0x0);
                  }
                  uStack_1 = 0xffffffff;
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                            ((Object *)&LStack_7,
                             (ExceptionArgument__Enum)
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__Dispose__
                             ,(MethodInfo *)method_00);
                  goto code_?;
                }
              }
            }
            goto code_?;
          }
        }
        func_?(piVar9,LStack_10._current);
      }
    }
  }
code_?:
  uVar14 = func_?();
  uVar14 = func_?(uVar14);
  func_?(uVar14);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* String ToString() */

String * MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ToString
                   (LogicObjectManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?(&StringLiteral_logicWorldObjects_Count__0__);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields).logicWorldObjects;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
              StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
              Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                        (this_00,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__get_Values__
                        );
    if (this_01 !=
        (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      mscorlib.dll::System::Collections::Generic::
      Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
      StyleSheetCache+SheetHandleKey,System::Object]::
      Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                (this_01,
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_IInputSignalReceiver>__get_Count__
                );
      arg0 = (Object *)func_?();
      pSVar1 = mscorlib.dll::System::String::String_Format
                         (StringLiteral_logicWorldObjects_Count__0__,arg0,(MethodInfo *)0x0);
      return pSVar1;
    }
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar3)();
  return pSVar1;
}


/* Void Update() */

void MVWorldObject.dll::LogicObjectManager::LogicObjectManager_Update
               (LogicObjectManager *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa8;
  puVar5 = &stack0xffffffa8;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__get_Values__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_IInputSignalReceiver>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_IInputSignalReceiver>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_IInputSignalReceiver>__get_Current__
                   );
    func_?(&TypeInfo__IInputSignalReceiver);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_IInputSignalReceiver>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_6._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  DStack_6._index = 0;
  DStack_6._version = 0;
  DStack_6._currentValue = (Object *)0x0;
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields).logicWorldObjects;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    this_02 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
              StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
              Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                        (this_00,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__get_Values__
                        );
    if (this_02 !=
        (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      method_00 = (MethodInfo *)&UNK_?;
      pDVar7 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
               StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                         (&DStack_8,this_02,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_IInputSignalReceiver>__GetEnumerator__
                         );
      DStack_8._currentValue = (Object *)&DStack_6;
      DStack_6._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)pDVar7->_dictionary;
      DStack_6._index = pDVar7->_index;
      DStack_6._version = pDVar7->_version;
      DStack_6._currentValue = pDVar7->_currentValue;
      DStack_8._version = 0;
      uStack_1 = 1;
code_?:
      bVar9 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
              UInt32,System::Object]::
              Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                        (&DStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_IInputSignalReceiver>__MoveNext__
                        );
      pOVar10 = DStack_6._currentValue;
      if (bVar9 != 0) {
        pOStack_11 = DStack_6._currentValue;
        if (DStack_6._currentValue == (Object *)0x0) goto code_?;
        pOStack_12 = (DStack_6._currentValue)->klass;
        uVar13 = 0;
        uStack_14 = 0;
        uVar15._0_1_ = (pOStack_12->_1).rank;
        uVar15._1_1_ = (pOStack_12->_1).minimumAlignment;
        uStack_16 = (uint)uVar15;
        if (uVar15 != 0) {
          do {
            if (pOStack_12->interfaceOffsets[uVar13].interfaceType ==
                (Il2CppClass *)TypeInfo__IInputSignalReceiver) {
              ppMVar17 = &(&((DStack_6._currentValue)->klass->vtable).GetHashCode)
                          [(DStack_6._currentValue)->klass->interfaceOffsets[uVar13].offset].method
              ;
              goto code_?;
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 < uVar15);
        }
        ppMVar17 = (MethodInfo **)
                   func_?(DStack_6._currentValue,TypeInfo__IInputSignalReceiver,2);
code_?:
        uVar18 = (*(code *)*ppMVar17)(pOVar10,ppMVar17[1]);
        uVar15 = 0;
        pMStack_19 = (MethodInfo *)CONCAT31(pMStack_19._1_3_,uVar18);
        pOStack_12 = pOVar10->klass;
        uStack_16 = 0;
        sVar20._0_1_ = (pOStack_12->_1).rank;
        sVar20._1_1_ = (pOStack_12->_1).minimumAlignment;
        if (sVar20 != 0) {
          do {
            if (pOStack_12->interfaceOffsets[uVar15].interfaceType ==
                (Il2CppClass *)TypeInfo__IInputSignalReceiver) {
              pOVar21 = pOStack_11->klass;
              iVar22 = pOVar21->interfaceOffsets[uVar15].offset;
              method_00 = pMStack_19;
              (*(code *)(&(pOVar21->vtable).Equals)[iVar22].method)
                        (pOStack_11,pMStack_19,(&(pOVar21->vtable).Finalize)[iVar22].methodPtr);
              goto code_?;
            }
            uVar15 = uVar15 + 1;
            uVar13._0_1_ = (pOStack_11->klass->_1).rank;
            uVar13._1_1_ = (pOStack_11->klass->_1).minimumAlignment;
            pOVar10 = pOStack_11;
          } while (uVar15 < uVar13);
        }
        puVar23 = (undefined4 *)func_?(pOVar10,TypeInfo__IInputSignalReceiver,0);
        method_00 = pMStack_19;
        (*(code *)*puVar23)(pOVar10,pMStack_19,puVar23[1]);
        goto code_?;
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)&DStack_6,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_IInputSignalReceiver>__Dispose__
                 ,method_00);
      uStack_1 = 0xffffffff;
      piVar24 = &(this->fields)._TimeStamp_k__BackingField;
      *piVar24 = *piVar24 + 100;
      if ((this->fields).trackLoops != 0) {
        if (cRam_? == '\0') {
          func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
          cRam_? = '\x01';
        }
        this_01 = (HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                  (this->fields).updatedIds;
        if (this_01 == (HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0)
        goto code_?;
        System.Core.dll::System::Collections::Generic::HashSet`1[Unity::IL2CPP::Metadata::
        __Il2CppFullySharedGenericType]::
        HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Clear
                  (this_01,MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
      }
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
code_?:
  func_?();
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* LogicObjectManager+ValidateLinkStatus ValidateLink(Int32, Int32, IWorldObjectManager, Boolean,
   LogicObjectManager+ReportSeverity ByRef) */

LogicObjectManager_ValidateLinkStatus__Enum
MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ValidateLink
          (int32_t linkOutputWoId,int32_t linkInputWoId,IWorldObjectManager *worldObjectManager,
          bool validateLoops,LogicObjectManager_ReportSeverity__Enum *reportSeverity,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__IWorldObjectManager);
    cRam_? = '\x01';
  }
  pMStack_1 = (MVWorldObject *)0x0;
  piVar2 = (int *)0x0;
  if (linkInputWoId < 1) {
    *reportSeverity = LogicObjectManager_ReportSeverity__Enum_Error;
    return LogicObjectManager_ValidateLinkStatus__Enum_InputObjectIdIsZeroOrLess;
  }
  if (linkOutputWoId < 1) {
    *reportSeverity = LogicObjectManager_ReportSeverity__Enum_Error;
    return LogicObjectManager_ValidateLinkStatus__Enum_OutputObjectIdIsZeroOrLess;
  }
  if (worldObjectManager != (IWorldObjectManager *)0x0) {
    cVar3 = func_?(1,TypeInfo__MV__WorldObject__IWorldObjectManager,worldObjectManager,
                            linkOutputWoId,&pMStack_1);
    cVar4 = func_?(1,TypeInfo__MV__WorldObject__IWorldObjectManager,worldObjectManager,
                            linkInputWoId,&stack0xfffffff0);
    if (cVar3 == '\0') {
      *reportSeverity = LogicObjectManager_ReportSeverity__Enum_Info;
      if (cVar4 != '\0') {
        return LogicObjectManager_ValidateLinkStatus__Enum_OutputObjectIsNull;
      }
      return LogicObjectManager_ValidateLinkStatus__Enum_BothInputAndOutputIsNull;
    }
    if (cVar4 == '\0') {
      *reportSeverity = LogicObjectManager_ReportSeverity__Enum_Info;
      return LogicObjectManager_ValidateLinkStatus__Enum_InputObjectIsNull;
    }
    if (piVar2 != (int *)0x0) {
      cVar3 = (**(code **)(*piVar2 + 0x138))(piVar2,*(undefined4 *)(*piVar2 + 0x13c));
      if (cVar3 == '\0') {
        *reportSeverity = LogicObjectManager_ReportSeverity__Enum_Error;
        return LogicObjectManager_ValidateLinkStatus__Enum_InputObjectDoesNotHaveConnector;
      }
      if (pMStack_1 != (MVWorldObject *)0x0) {
        cVar3 = func_?(0xe,pMStack_1);
        if (cVar3 == '\0') {
          *reportSeverity = LogicObjectManager_ReportSeverity__Enum_Error;
          return LogicObjectManager_ValidateLinkStatus__Enum_OutputObjectDoesNotHaveConnector;
        }
        bStack_5 = LogicObjectManager_DoesLinkExist(pMStack_1,linkInputWoId,(MethodInfo *)0x0);
        if (bStack_5 == 0) {
          if (validateLoops != 0) {
            LogicObjectManager_ValidateLink_1
                      (linkOutputWoId,linkInputWoId,worldObjectManager,&bStack_5,(MethodInfo *)0x0);
            if (bStack_5 != 0) {
              *reportSeverity = LogicObjectManager_ReportSeverity__Enum_Error;
              return LogicObjectManager_ValidateLinkStatus__Enum_LoopDetected;
            }
          }
          *reportSeverity = LogicObjectManager_ReportSeverity__Enum_Info;
          return LogicObjectManager_ValidateLinkStatus__Enum_Ok;
        }
        *reportSeverity = LogicObjectManager_ReportSeverity__Enum_Info;
        return LogicObjectManager_ValidateLinkStatus__Enum_LinkAlreadyExists;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  LVar7 = (*pcVar6)();
  return LVar7;
}


/* Void ValidateLink(Int32, Int32, IWorldObjectManager, Boolean ByRef) */

void MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ValidateLink_1
               (int32_t woIdFrom,int32_t woIdTo,IWorldObjectManager *worldObjectManager,
               bool *loopDetected,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__get_Current__
                   );
    func_?(&TypeInfo__MV__WorldObject__IWorldObjectManager);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  if (woIdFrom == woIdTo) {
    *loopDetected = 1;
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  if (worldObjectManager != (IWorldObjectManager *)0x0) {
    iVar7 = func_?(0,TypeInfo__MV__WorldObject__IWorldObjectManager,worldObjectManager,
                            woIdTo);
    if ((iVar7 != 0) &&
       (*(List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ **)(iVar7 + 0x18) !=
        (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)) {
      pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         (&LStack_9,
                          *(List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ **)
                           (iVar7 + 0x18),
                          MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__GetEnumerator__
                         );
      LStack_6._list = (List_1_System_Object_ *)pLVar8->_list;
      LStack_6._index = pLVar8->_index;
      LStack_6._version = pLVar8->_version;
      LStack_6._current = *(Object **)&pLVar8->_current;
      LStack_9._version = 0;
      uStack_1 = 1;
      LStack_9._current = (RegexCharClass_SingleRange)&LStack_6;
      do {
        bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_6,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                          );
        if (bVar10 == 0) break;
        if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0)
        goto code_?;
        LogicObjectManager_ValidateLink_1
                  (woIdFrom,*(int32_t *)((int)LStack_6._current + 0x10),worldObjectManager,
                   loopDetected,(MethodInfo *)0x0);
      } while (*loopDetected == 0);
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)&LStack_6,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__Dispose__
                 ,unaff_EDI);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
code_?:
  uVar11 = func_?();
  func_?(uVar11);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* LogicObjectManager+ValidateObjectLinkStatus ValidateObjectLink(ObjectLink, IWorldObjectManager,
   LogicObjectManager+ReportSeverity ByRef) */

LogicObjectManager_ValidateObjectLinkStatus__Enum
MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ValidateObjectLink
          (ObjectLink *objectLink,IWorldObjectManager *worldObjectManager,
          LogicObjectManager_ReportSeverity__Enum *reportSeverity,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__IWorldObjectManager);
    cRam_? = '\x01';
  }
  pMStack_1 = (MVWorldObject *)0x0;
  pMStack_2 = (MVWorldObject *)0x0;
  if (objectLink != (ObjectLink *)0x0) {
    if ((objectLink->fields).objectConnectorWOID < 1) {
      *reportSeverity = LogicObjectManager_ReportSeverity__Enum_Error;
      return LogicObjectManager_ValidateObjectLinkStatus__Enum_ObjectConnectorWOIDIsZeroOrLess;
    }
    if ((objectLink->fields).objectWOID < 1) {
      *reportSeverity = LogicObjectManager_ReportSeverity__Enum_Error;
      return LogicObjectManager_ValidateObjectLinkStatus__Enum_ObjectWOIDIsZeroOrLess;
    }
    if (worldObjectManager != (IWorldObjectManager *)0x0) {
      cVar3 = func_?(1,TypeInfo__MV__WorldObject__IWorldObjectManager,worldObjectManager,
                              (objectLink->fields).objectConnectorWOID,&pMStack_1);
      cVar4 = func_?(1,TypeInfo__MV__WorldObject__IWorldObjectManager,worldObjectManager,
                              (objectLink->fields).objectWOID,&pMStack_2);
      if (cVar3 == '\0') {
        *reportSeverity = LogicObjectManager_ReportSeverity__Enum_Info;
        if (cVar4 != '\0') {
          return LogicObjectManager_ValidateObjectLinkStatus__Enum_ObjectConnector;
        }
        return 
        LogicObjectManager_ValidateObjectLinkStatus__Enum_BothObjectConnectorAndObjectWOIsNull;
      }
      if (cVar4 == '\0') {
        *reportSeverity = LogicObjectManager_ReportSeverity__Enum_Info;
        return LogicObjectManager_ValidateObjectLinkStatus__Enum_ObjectWO;
      }
      if (pMStack_1 != (MVWorldObject *)0x0) {
        cVar3 = (*(code *)(pMStack_1->klass->vtable).get_HasObjectConnector.method)
                          (pMStack_1,(pMStack_1->klass->vtable).OnInputStateChanged.methodPtr);
        if (cVar3 == '\0') {
          *reportSeverity = LogicObjectManager_ReportSeverity__Enum_Error;
          return 
          LogicObjectManager_ValidateObjectLinkStatus__Enum_ObjectConnectorHasNoObjectConnector;
        }
        if (pMStack_1 != (MVWorldObject *)0x0) {
          iVar5 = MV::WorldObject::MVWorldObject::MVWorldObject_GetIndexOfObjectLink
                            (pMStack_1,objectLink,(MethodInfo *)0x0);
          if (iVar5 != -1) {
            *reportSeverity = LogicObjectManager_ReportSeverity__Enum_Info;
            return 
            LogicObjectManager_ValidateObjectLinkStatus__Enum_ObjectConnectorContainsLinkAlready;
          }
          if (pMStack_2 != (MVWorldObject *)0x0) {
            iVar5 = MV::WorldObject::MVWorldObject::MVWorldObject_GetIndexOfObjectLink
                              (pMStack_2,objectLink,(MethodInfo *)0x0);
            *reportSeverity = LogicObjectManager_ReportSeverity__Enum_Info;
            if (iVar5 != -1) {
              return LogicObjectManager_ValidateObjectLinkStatus__Enum_ObjectWOContainsLinkAlready;
            }
            return LogicObjectManager_ValidateObjectLinkStatus__Enum_Ok;
          }
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  LVar7 = (*pcVar6)();
  return LVar7;
}


/* LogicObjectManager(Int32, Boolean) */

void MVWorldObject.dll::LogicObjectManager::LogicObjectManager__ctor
               (LogicObjectManager *this,int32_t timeStamp,bool trackLoops,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__Dictionary__
            );
  (this->fields).logicWorldObjects = (Dictionary_2_System_Int32_IInputSignalReceiver_ *)this_00;
  func_?(&this->fields,this_00);
  this_01 = (HashSet_1_System_Int32_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
  HashSet_1_System_Int32___ctor
            (this_01,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  method_00 = (MethodInfo *)&(this->fields).updatedIds;
  (this->fields).updatedIds = this_01;
  func_?(method_00,this_01);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  (this->fields).trackLoops = trackLoops;
  (this->fields)._TimeStamp_k__BackingField = timeStamp;
  return;
}


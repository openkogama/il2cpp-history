
/* Void AddRuntimeDataVariables(Int32) */

void Assembly-CSharp.dll::RuntimeVariableNetworkManager::
     RuntimeVariableNetworkManager_AddRuntimeDataVariables
               (RuntimeVariableNetworkManager *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_System_Int32Enum_ *)(this->fields).runtimeDataVariables;
  if (this_00 != (HashSet_1_System_Int32Enum_ *)0x0) {
    bVar1 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
            HashSet_1_System_Int32Enum__Contains
                      (this_00,woID,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    if (bVar1 != 0) goto code_?;
    this_01 = (this->fields).runtimeDataVariables;
    if (this_01 != (HashSet_1_System_Int32_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
      HashSet_1_System_Int32__System_Collections_Generic_ICollection_T__Add
                (this_01,woID,MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
      return;
    }
  }
  func_?();
code_?:
  uVar2 = func_?();
  this_02 = (Exception *)func_?(uVar2);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_RuntimeDataVariables_allready_ex);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_02,message,method_00);
  func_?();
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean ContainsRuntimeVariables(Int32) */

bool Assembly-CSharp.dll::RuntimeVariableNetworkManager::
     RuntimeVariableNetworkManager_ContainsRuntimeVariables
               (RuntimeVariableNetworkManager *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_System_Int32Enum_ *)(this->fields).runtimeDataVariables;
  if (this_00 != (HashSet_1_System_Int32Enum_ *)0x0) {
    bVar1 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
            HashSet_1_System_Int32Enum__Contains
                      (this_00,woID,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Void RemoveRuntimeDataVariables(Int32) */

void Assembly-CSharp.dll::RuntimeVariableNetworkManager::
     RuntimeVariableNetworkManager_RemoveRuntimeDataVariables
               (RuntimeVariableNetworkManager *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_);
    cRam_? = '\x01';
  }
  pHVar1 = (HashSet_1_System_Int32Enum_ *)(this->fields).runtimeDataVariables;
  if (pHVar1 != (HashSet_1_System_Int32Enum_ *)0x0) {
    bVar2 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
            HashSet_1_System_Int32Enum__Contains
                      (pHVar1,woID,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    if (bVar2 == 0) goto code_?;
    pHVar1 = (HashSet_1_System_Int32Enum_ *)(this->fields).runtimeDataVariables;
    if (pHVar1 != (HashSet_1_System_Int32Enum_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
      HashSet_1_System_Int32Enum__Remove
                (pHVar1,woID,MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_);
      return;
    }
  }
  func_?();
code_?:
  uVar3 = func_?();
  this_00 = (Exception *)func_?(uVar3);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_wo_Id_not_found);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,method_00);
  func_?();
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SendRuntimeData() */

void Assembly-CSharp.dll::RuntimeVariableNetworkManager::
     RuntimeVariableNetworkManager_SendRuntimeData
               (RuntimeVariableNetworkManager *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa0;
  puVar5 = &stack0xffffffa0;
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_);
    in_stack_6 = &MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    func_?();
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Clear__);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_7._list = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0;
  LStack_7._index = 0;
  LStack_7._version = 0;
  LStack_7._current.First = 0;
  LStack_7._current.Last = 0;
  method_00 = (MethodInfo *)(this->fields).runtimeDataVariables;
  if (method_00 != (MethodInfo *)0x0) {
    pHVar8 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
             HashSet_1_System_UInt32__GetEnumerator
                       ((HashSet_1_T_Enumerator_System_UInt32_ *)&LStack_9,
                        (HashSet_1_System_UInt32_ *)method_00,
                        MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    pMVar10 = (MethodInfo *)pHVar8->_current;
    LStack_9._version = 0;
    uStack_1 = 1;
    LStack_9._current = (RegexCharClass_SingleRange)&stack0xffffffac;
    while( true ) {
      bVar11 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::UInt32]
              ::HashSet_1_T_Enumerator_System_UInt32__MoveNext
                        ((HashSet_1_T_Enumerator_System_UInt32_ *)&stack0xffffffac,
                         MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                        );
      if (bVar11 == 0) break;
      pMStack_12 = pMVar10;
      pMVar13 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar13 == (MVWorldObjectClientManager *)0x0) goto code_?;
      if (cRam_? == '\0') {
        in_stack_6 =
             &
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
        ;
        func_?();
        cRam_? = '\x01';
      }
      this_00 = (pMVar13->fields).worldObjects;
      pOStack_14 = (Object *)0x0;
      if (this_00 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryGetValue
                ((Dictionary_2_System_Int32_System_Object_ *)this_00,(int32_t)pMStack_12,&pOStack_14
                 ,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                );
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      pOVar15 = pOStack_14;
      if (pOStack_14 == (Object *)0x0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_Attempt_to_update_world_object__,(MethodInfo *)0x0);
        pLVar16 = (this->fields).removeList;
        if (pLVar16 == (List_1_System_Int32_ *)0x0) goto code_?;
        method_00 = pMStack_12;
        func_?(pLVar16,pMStack_12,
                        MethodInfo__System__Collections__Generic__List<int>__Add_int_);
      }
      else {
        if (pOStack_14[0x1a].klass == (Object__Class *)0x0) goto code_?;
        method_00 = (MethodInfo *)0x0;
        pMStack_12 = (MethodInfo *)
                     MVRuntimeDataVariables::MVRuntimeDataVariables_Send
                               ((MVRuntimeDataVariables *)pOStack_14[0x1a].klass,0,(MethodInfo *)0x0
                               );
        if (pMStack_12 == (MethodInfo *)0x0) goto code_?;
        iVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                 StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                 Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                           ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                             *)pMStack_12,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Count__
                           );
        if (0 < iVar17) {
          this_03 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          if (this_03 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
          MVNetworkGame+OperationRequests::
          MVNetworkGame_OperationRequests_UpdateWorldObjectRunTimeData
                    (this_03,(int32_t)pOVar15[1].klass,
                     (Dictionary_2_System_Object_System_Object_ *)pMStack_12,(MethodInfo *)0x0);
        }
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&stack0xffffffac,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__,
               (MethodInfo *)in_stack_6);
    uStack_1 = 0xffffffff;
    this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).removeList;
    if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      pLVar18 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                          (&LStack_9,this_01,
                           MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
      LStack_7._list = pLVar18->_list;
      LStack_7._index = pLVar18->_index;
      LStack_7._version = pLVar18->_version;
      LStack_7._current = pLVar18->_current;
      LStack_9._version = 0;
      uStack_1 = 4;
      LStack_9._current = (RegexCharClass_SingleRange)&LStack_7;
      while( true ) {
        bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Text::
                RegularExpressions::RegexCharClass+SingleRange]::
                List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                          (&LStack_7,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                          );
        if (bVar11 == 0) break;
        this_02 = (HashSet_1_System_Int32Enum_ *)(this->fields).runtimeDataVariables;
        if (this_02 == (HashSet_1_System_Int32Enum_ *)0x0) goto code_?;
        System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
        HashSet_1_System_Int32Enum__Remove
                  (this_02,(Int32Enum__Enum)LStack_7._current,
                   MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_);
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)&LStack_7,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__,
                 method_00);
      uStack_1 = 0xffffffff;
      pLVar16 = (this->fields).removeList;
      if (pLVar16 != (List_1_System_Int32_ *)0x0) {
        piVar19 = &(pLVar16->fields)._version;
        *piVar19 = *piVar19 + 1;
        (pLVar16->fields)._size = 0;
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
  }
code_?:
  uVar20 = func_?();
  uVar20 = func_?(uVar20);
  func_?(uVar20);
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Boolean SendRuntimeData(MVWorldObjectClient, Boolean) */

bool Assembly-CSharp.dll::RuntimeVariableNetworkManager::
     RuntimeVariableNetworkManager_SendRuntimeData_1
               (RuntimeVariableNetworkManager *this,MVWorldObjectClient *wo,bool immediateSend,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Count__
                   );
    func_?(&StringLiteral_Attempt_to_update_world_object__);
    cRam_? = '\x01';
  }
  if (wo == (MVWorldObjectClient *)0x0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Attempt_to_update_world_object__,(MethodInfo *)0x0);
    return 1;
  }
  this_00 = (wo->fields).runtimeDataVariables;
  if (this_00 != (MVRuntimeDataVariables *)0x0) {
    this_01 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)MVRuntimeDataVariables::MVRuntimeDataVariables_Send
                           (this_00,immediateSend,(MethodInfo *)0x0);
    if (this_01 !=
        (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
              StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
              Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                        (this_01,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Count__
                        );
      if (0 < iVar1) {
        this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        if (this_02 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
        MVNetworkGame+OperationRequests::
        MVNetworkGame_OperationRequests_UpdateWorldObjectRunTimeData
                  (this_02,(wo->fields)._.id,(Dictionary_2_System_Object_System_Object_ *)this_01,
                   (MethodInfo *)0x0);
      }
      return 0;
    }
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* RuntimeVariableNetworkManager() */

void Assembly-CSharp.dll::RuntimeVariableNetworkManager::RuntimeVariableNetworkManager__ctor
               (RuntimeVariableNetworkManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<int>);
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_System_Int32_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
  HashSet_1_System_Int32___ctor
            (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  (this->fields).runtimeDataVariables = this_00;
  func_?(&this->fields,this_00);
  this_01 = (List_1_System_Int32_ *)
            func_?(TypeInfo__System__Collections__Generic__List<int>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<int>__List__);
  method_00 = (MethodInfo *)&(this->fields).removeList;
  *(List_1_System_Int32_ **)method_00 = this_01;
  func_?(method_00,this_01);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


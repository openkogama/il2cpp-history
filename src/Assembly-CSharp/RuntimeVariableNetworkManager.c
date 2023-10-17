
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
  this_00 = (this->fields).runtimeDataVariables;
  if (this_00 != (HashSet_1_System_Int32_ *)0x0) {
    bVar1 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
            HashSet_1_System_Int32__Contains
                      (this_00,woID,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    if (bVar1 != 0) goto code_?;
    this_01 = (HashSet_1_System_Object_ *)(this->fields).runtimeDataVariables;
    if (this_01 != (HashSet_1_System_Object_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
      HashSet_1_System_Object__Add
                (this_01,(Object *)woID,
                 MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
      return;
    }
  }
  func_?();
code_?:
  uVar2 = func_?();
  this_02 = (Exception *)func_?(uVar2);
  func_?(this_02);
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
  this_00 = (this->fields).runtimeDataVariables;
  if (this_00 != (HashSet_1_System_Int32_ *)0x0) {
    bVar1 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
            HashSet_1_System_Int32__Contains
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
  pHVar1 = (this->fields).runtimeDataVariables;
  if (pHVar1 != (HashSet_1_System_Int32_ *)0x0) {
    bVar2 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
            HashSet_1_System_Int32__Contains
                      (pHVar1,woID,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    if (bVar2 == 0) goto code_?;
    pHVar1 = (this->fields).runtimeDataVariables;
    if (pHVar1 != (HashSet_1_System_Int32_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
      HashSet_1_System_Int32__Remove
                (pHVar1,woID,MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_);
      return;
    }
  }
  func_?();
code_?:
  uVar3 = func_?();
  this_00 = (Exception *)func_?(uVar3);
  func_?(this_00);
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
  HStack_7._set = (HashSet_1_System_Int32_ *)0x0;
  HStack_7._index = 0;
  HStack_7._version = 0;
  HStack_7._current = 0;
  method_00 = (MethodInfo *)(this->fields).runtimeDataVariables;
  if (method_00 != (MethodInfo *)0x0) {
    pHVar8 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
             HashSet_1_System_Object__GetEnumerator
                       ((HashSet_1_T_Enumerator_System_Object_ *)&LStack_9,
                        (HashSet_1_System_Object_ *)method_00,
                        MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    HStack_7._set = (HashSet_1_System_Int32_ *)pHVar8->_set;
    HStack_7._index = pHVar8->_index;
    HStack_7._version = pHVar8->_version;
    HStack_7._current = (int32_t)pHVar8->_current;
    LStack_9._version = 0;
    uStack_1 = 1;
    LStack_9._current = (RegexCharClass_SingleRange)&HStack_7;
    while( true ) {
      bVar10 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::Int32]
              ::HashSet_1_T_Enumerator_System_Int32__MoveNext
                        (&HStack_7,
                         MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                        );
      iVar11 = HStack_7._current;
      if (bVar10 == 0) break;
      pMStack_12 = (MethodInfo *)HStack_7._current;
      this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_03 == (MVWorldObjectClientManager *)0x0) goto code_?;
      in_stack_6 = (MethodInfo **)0x0;
      pMVar13 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_03,iVar11,(MethodInfo *)0x0);
      pMStack_14 = pMVar13;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Debug);
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Count__
                       );
        func_?(&StringLiteral_Attempt_to_update_world_object__);
        cRam_? = '\x01';
      }
      if (pMVar13 == (MVWorldObject *)0x0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)StringLiteral_Attempt_to_update_world_object__,(MethodInfo *)0x0);
        pLVar15 = (this->fields).removeList;
        if (pLVar15 == (List_1_System_Int32_ *)0x0) goto code_?;
        method_00 = pMStack_12;
        func_?(pLVar15,pMStack_12,
                        MethodInfo__System__Collections__Generic__List<int>__Add_int_);
      }
      else {
        this_00 = pMVar13[1].fields.OnInputLinkChanged;
        if (this_00 == (Action_1_System_Collections_Generic_List_1_MV_WorldObject_Link_ *)0x0)
        goto code_?;
        method_00 = (MethodInfo *)0x0;
        this_04 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                   *)MVRuntimeDataVariables::MVRuntimeDataVariables_Send
                               ((MVRuntimeDataVariables *)this_00,0,(MethodInfo *)0x0);
        if (this_04 ==
            (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
            0x0) goto code_?;
        iVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
                          (this_04,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Count__
                          );
        if (0 < iVar11) {
          this_05 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          if (this_05 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
          MVNetworkGame+OperationRequests::
          MVNetworkGame_OperationRequests_UpdateWorldObjectRunTimeData
                    (this_05,(pMStack_14->fields).id,
                     (Dictionary_2_System_Object_System_Object_ *)this_04,(MethodInfo *)0x0);
        }
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)&HStack_7,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__,
               (MethodInfo *)in_stack_6);
    uStack_1 = 0xffffffff;
    this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).removeList;
    if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      pLVar16 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         (&LStack_9,this_01,
                          MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
      item = pLVar16->_current;
      LStack_9._version = 0;
      uStack_1 = 4;
      LStack_9._current = (RegexCharClass_SingleRange)&stack0xffffffac;
      while( true ) {
        bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Text::
                RegularExpressions::RegexCharClass+SingleRange]::
                List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                          ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                            *)&stack0xffffffac,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                          );
        if (bVar10 == 0) break;
        this_02 = (this->fields).runtimeDataVariables;
        if (this_02 == (HashSet_1_System_Int32_ *)0x0) goto code_?;
        System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
        HashSet_1_System_Int32__Remove
                  (this_02,(int32_t)item,
                   MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_);
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&stack0xffffffac,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__,
                 method_00);
      uStack_1 = 0xffffffff;
      pLVar15 = (this->fields).removeList;
      if (pLVar15 != (List_1_System_Int32_ *)0x0) {
        piVar17 = &(pLVar15->fields)._version;
        *piVar17 = *piVar17 + 1;
        (pLVar15->fields)._size = 0;
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
  }
code_?:
  uVar18 = func_?();
  uVar18 = func_?(uVar18);
  func_?(uVar18);
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
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
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_Attempt_to_update_world_object__,(MethodInfo *)0x0);
    return 1;
  }
  this_00 = (wo->fields).runtimeDataVariables;
  if (this_00 != (MVRuntimeDataVariables *)0x0) {
    this_01 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *
              )MVRuntimeDataVariables::MVRuntimeDataVariables_Send
                         (this_00,immediateSend,(MethodInfo *)0x0);
    if (this_01 !=
        (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0)
    {
      iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
              RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
              Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
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
  this_00 = (HashSet_1_UnityEngine_Vector3_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  if (this_00 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
    HashSet_1_UnityEngine_Vector3___ctor
              (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    (this->fields).runtimeDataVariables = (HashSet_1_System_Int32_ *)this_00;
    func_?(&this->fields,this_00);
    this_01 = (List_1_System_Int32_ *)
              func_?(TypeInfo__System__Collections__Generic__List<int>);
    if (this_01 != (List_1_System_Int32_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__List<int>__List__);
      method_00 = (MethodInfo *)&(this->fields).removeList;
      (this->fields).removeList = this_01;
      func_?(method_00,this_01);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)this,ExceptionArgument__Enum_obj,method_00);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


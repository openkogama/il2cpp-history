
/* Void CreateGroup(EditorStateMachine) */

void Assembly-CSharp.dll::ESWaitForGroup::ESWaitForGroup_CreateGroup
               (ESWaitForGroup *this,EditorStateMachine *e,MethodInfo *method)

{
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&
                    MethodInfo__ESWaitForGroup__WOCM_InitializedGameQueryData_System__Object__InitializedGameQueryDataEventArgs_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                   );
    func_?(&TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__Add_UnityEngine__Transform_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__List__)
    ;
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Transform>);
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  transforms = (List_1_UnityEngine_Transform_ *)
               func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Transform>)
  ;
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)transforms,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__List__);
  if ((e != (EditorStateMachine *)0x0) &&
     (this_00 = EditorStateMachine::EditorStateMachine_get_SelectedWOs(e,(MethodInfo *)0x0),
     this_00 != (HashSet_1_MVWorldObjectClient_ *)0x0)) {
    pHVar1 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
             HashSet_1_System_UInt32__GetEnumerator
                       ((HashSet_1_T_Enumerator_System_UInt32_ *)&stack0xffffffb0,
                        (HashSet_1_System_UInt32_ *)this_00,
                        MethodInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>__GetEnumerator__
                       );
    method_00 = (MethodInfo *)pHVar1->_version;
    pOVar2 = (Object *)pHVar1->_current;
    while (bVar3 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                   Object]::HashSet_1_T_Enumerator_System_Object__MoveNext
                             ((HashSet_1_T_Enumerator_System_Object_ *)&stack0xffffffc0,
                              MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                             ), bVar3 != 0) {
      if ((pOVar2 == (Object *)0x0) || (transforms == (List_1_UnityEngine_Transform_ *)0x0))
      goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)transforms,(Object *)pOVar2[0x12].klass,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__Add_UnityEngine__Transform_
                );
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&stack0xffffffc0,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__Dispose__
               ,method_00);
    if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pVVar4 = SharedCubeFunctions::SharedCubeFunctions_GetWorldCenter
                       ((Vector3 *)&stack0xffffffdc,transforms,(MethodInfo *)0x0);
    fVar5 = pVVar4->z;
    pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar6 != (MVNetworkGame *)0x0) &&
       (pWVar7 = (pMVar6->fields).worldNetwork, pWVar7 != (WorldNetwork *)0x0)) {
      a = (pWVar7->fields)._.InitializedGameQueryData;
      this_01 = (EventHandler_1_Object_ *)func_?();
      mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                (this_01,(Object *)this,
                 MethodInfo__ESWaitForGroup__WOCM_InitializedGameQueryData_System__Object__InitializedGameQueryDataEventArgs_
                 ,(MethodInfo *)0x0);
      pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)a,(Delegate *)this_01,(MethodInfo *)0x0);
      if (pDVar8 == (Delegate *)0x0) {
        (pWVar7->fields)._.InitializedGameQueryData =
             (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0;
      }
      else {
        pEVar9 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)func_?();
        if (pEVar9 == (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
          func_?();
          goto code_?;
        }
        (pWVar7->fields)._.InitializedGameQueryData = pEVar9;
        iVar10 = func_?();
        if (iVar10 == 0) goto code_?;
      }
      func_?();
      this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      groupId = EditorStateMachine::EditorStateMachine_get_ParentGroupID(e,(MethodInfo *)0x0);
      pDVar11 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      this_03 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::StyleComplexSelector+PseudoStateData]::
      Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                (this_03,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pQVar12 = TypeInfo__UnityEngine__Quaternion->static_fields;
      pHVar13 = (HashSet_1_System_UInt32_ *)(pQVar12->identityQuaternion).x;
      fVar14 = (pQVar12->identityQuaternion).y;
      fVar15 = (pQVar12->identityQuaternion).z;
      fVar16 = (pQVar12->identityQuaternion).w;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (this_02 != (MVNetworkGame_OperationRequests *)0x0) {
        position.y = 1.4013e-45;
        position.x = (float)a;
        position.z = fVar5;
        rotation.y = fVar14;
        rotation.x = (float)pHVar13;
        rotation.z = fVar15;
        rotation.w = fVar16;
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_RequestBuiltInItem
                  (this_02,BuiltInItem__Enum_Group,groupId,
                   (Dictionary_2_System_Object_System_Object_ *)this_03,position,rotation,
                   TypeInfo__UnityEngine__Vector3->static_fields->oneVector,1,1,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pDVar11;
        return;
      }
    }
  }
code_?:
  func_?();
  func_?();
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESWaitForGroup::ESWaitForGroup_Enter
               (ESWaitForGroup *this,EditorStateMachine *e,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__ESWaitForGroup__WOCM_OnHierarchyLockedResponse_System__Object__OnHierarchyLockedEventArgs_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                   );
    func_?(&TypeInfo__System__EventHandler<OnHierarchyLockedEventArgs>);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__get_Count__);
    func_?(&TypeInfo__System__Collections__Generic__List<int>);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  if (e == (EditorStateMachine *)0x0) {
code_?:
    uVar6 = func_?();
    func_?(uVar6);
  }
  else {
    (e->fields)._.lockState = 1;
    iVar7 = MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id
                      ((MVJetPack_LocalObjectsJetPack *)e,(MethodInfo *)0x0);
    if (iVar7 == 0) goto code_?;
    if (*(int *)(iVar7 + 0x10) == 0) {
code_?:
      (e->fields)._.lockState = 0;
      FSMEntity::FSMEntity_PopState((FSMEntity *)e,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    iVar7 = MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id
                      ((MVJetPack_LocalObjectsJetPack *)e,(MethodInfo *)0x0);
    if (iVar7 == 0) goto code_?;
    if (*(int *)(iVar7 + 0x10) == 1) goto code_?;
    pLVar8 = (List_1_System_Int32_ *)func_?();
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar8,
               MethodInfo__System__Collections__Generic__List<int>__List__);
    (this->fields).lockList = pLVar8;
    func_?();
    (this->fields).state = 0;
    pEStack_9 = (EventHandler_1_OnHierarchyLockedEventArgs___Class *)
                 MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pEStack_9 == (EventHandler_1_OnHierarchyLockedEventArgs___Class *)0x0)
    goto code_?;
    pDVar10 = (Delegate *)(pEStack_9->_0).fields;
    this_00 = (EventHandler_1_Object_ *)
              func_?(TypeInfo__System__EventHandler<OnHierarchyLockedEventArgs>);
    mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__ESWaitForGroup__WOCM_OnHierarchyLockedResponse_System__Object__OnHierarchyLockedEventArgs_
               ,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)0x0;
    pDVar10 = mscorlib.dll::System::Delegate::Delegate_Combine
                        (pDVar10,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar10 == (Delegate *)0x0) {
      (pEStack_9->_0).fields = (FieldInfo *)0x0;
code_?:
      func_?();
      this_01 = (HashSet_1_System_UInt32_ *)
                MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id
                          ((MVJetPack_LocalObjectsJetPack *)e,(MethodInfo *)0x0);
      if (this_01 != (HashSet_1_System_UInt32_ *)0x0) {
        pHVar11 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
                  HashSet_1_System_UInt32__GetEnumerator
                            (&HStack_12,this_01,
                             MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__
                            );
        item = pHVar11->_current;
        HStack_12._version = 0;
        uStack_1 = 1;
        HStack_12._current = (uint32_t)&stack0xffffffc4;
        while( true ) {
          bVar13 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                  UInt32]::HashSet_1_T_Enumerator_System_UInt32__MoveNext
                            ((HashSet_1_T_Enumerator_System_UInt32_ *)&stack0xffffffc4,
                             MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                            );
          pMVar14 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
          if (bVar13 == 0) break;
          pLVar8 = (this->fields).lockList;
          if (pLVar8 == (List_1_System_Int32_ *)0x0) goto code_?;
          piVar15 = &(pLVar8->fields)._version;
          *piVar15 = *piVar15 + 1;
          pIVar16 = (pLVar8->fields)._items;
          uVar17 = (pLVar8->fields)._size;
          if (pIVar16 == (Int32__Array *)0x0) goto code_?;
          if (uVar17 < pIVar16->max_length) {
            (pLVar8->fields)._size = uVar17 + 1;
            if (pIVar16->max_length <= uVar17) {
              func_?();
              goto code_?;
            }
            pIVar16->vector[uVar17] = item;
          }
          else {
            mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
            List_1_System_Int32__AddWithResize(pLVar8,item,pMVar14->klass->rgctx_data[0xe].method);
          }
          method_00 = (MethodInfo *)
                      MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                ((MethodInfo *)0x0);
          if (method_00 == (MethodInfo *)0x0) goto code_?;
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_LockHierarchy
                    ((MVNetworkGame_OperationRequests *)method_00,item,1,(MethodInfo *)0x0);
        }
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&stack0xffffffc4,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                   ,method_00);
        uStack_1 = 0xffffffff;
        pLVar8 = (this->fields).lockList;
        if (pLVar8 != (List_1_System_Int32_ *)0x0) {
          (this->fields).lockCount = (pLVar8->fields)._size;
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
      goto code_?;
    }
    pFVar18 = (FieldInfo *)func_?();
    if (pFVar18 == (FieldInfo *)0x0) goto code_?;
    (pEStack_9->_0).fields = pFVar18;
    pEStack_9 = TypeInfo__System__EventHandler<OnHierarchyLockedEventArgs>;
    iVar19 = func_?();
    if (iVar19 != 0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::ESWaitForGroup::ESWaitForGroup_Execute
               (ESWaitForGroup *this,EditorStateMachine *e,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__ESWaitForGroup__WOCM_OnTransferWosResponse_System__Object__OnTransferWosResponseEventArgs_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__get_Current__
                   );
    func_?(&TypeInfo__System__EventHandler<OnTransferWosResponseEventArgs>);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__ToArray__);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current.First = 0;
  LStack_6._current.Last = 0;
  RVar7 = (RegexCharClass_SingleRange)this;
  if ((this->fields).abort != 0) {
    if (e != (EditorStateMachine *)0x0) {
      (e->fields)._.lockState = 0;
      FSMEntity::FSMEntity_PopState((FSMEntity *)e,(MethodInfo *)0x0);
      goto code_?;
    }
    goto code_?;
  }
  iVar8 = (this->fields).state;
  if (iVar8 == 0) {
    if ((this->fields).responseReceived != 0) {
      ESWaitForGroup_CreateGroup(this,e,(MethodInfo *)0x0);
      (this->fields).state = 1;
      (this->fields).responseReceived = 0;
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
code_?:
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  if (iVar8 != 1) {
    if ((iVar8 != 2) || ((this->fields).responseReceived == 0)) goto code_?;
    unaff_EDI.First = 0;
    unaff_EDI.Last = 0;
    if (e != (EditorStateMachine *)0x0) {
      EditorStateMachine::EditorStateMachine_SelectWO
                (e,(this->fields).createGroupId,0,1,(MethodInfo *)0x0);
      (e->fields)._.lockState = 0;
      FSMEntity::FSMEntity_PopState((FSMEntity *)e,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    goto code_?;
  }
  if ((this->fields).responseReceived == 0) goto code_?;
  RVar9 = (RegexCharClass_SingleRange)
          MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  e = (EditorStateMachine *)RVar9;
  if (RVar9 == (RegexCharClass_SingleRange)0x0) {
code_?:
    uVar10 = func_?();
    func_?(uVar10);
    RVar9 = RVar7;
  }
  else {
    a = *(Delegate **)((int)RVar9 + 0x44);
    this_02 = (EventHandler_1_Object_ *)func_?();
    mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
              (this_02,(Object *)this,
               MethodInfo__ESWaitForGroup__WOCM_OnTransferWosResponse_System__Object__OnTransferWosResponseEventArgs_
               ,(MethodInfo *)0x0);
    unaff_EDI = (RegexCharClass_SingleRange)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          (a,(Delegate *)this_02,(MethodInfo *)0x0);
    RVar7 = (RegexCharClass_SingleRange)
            TypeInfo__System__EventHandler<OnTransferWosResponseEventArgs>;
    if (unaff_EDI == (RegexCharClass_SingleRange)0x0) {
      *(EventInfo **)((int)RVar9 + 0x44) = (EventInfo *)0x0;
      LStack_11._list = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0;
code_?:
      LStack_6._current = (RegexCharClass_SingleRange)((int)RVar9 + 0x44);
      LStack_6._version = (int32_t)&UNK_?;
      func_?();
      RVar7 = (RegexCharClass_SingleRange)
              MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      e = (EditorStateMachine *)(this->fields).createGroupId;
      this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                 *)(this->fields).lockList;
      unaff_EDI = (RegexCharClass_SingleRange)this;
      if (this_00 !=
          (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
           *)0x0) {
        worldObjects = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                       Internal::MultiColumnCollectionHeader+ViewState+ColumnState]::
                       List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                                 (this_00,
                                  MethodInfo__System__Collections__Generic__List<int>__ToArray__);
        if (RVar7 != (RegexCharClass_SingleRange)0x0) {
          MVNetworkGame+OperationRequests::
          MVNetworkGame_OperationRequests_TransferWorldObjectsToGroup
                    ((MVNetworkGame_OperationRequests *)RVar7,(int32_t)e,
                     (Int32__Array *)worldObjects,(MethodInfo *)0x0);
          this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                    (this->fields).lockList;
          if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
            pLVar12 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                               (&LStack_11,this_01,
                                MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__
                               );
            LStack_6._list = pLVar12->_list;
            LStack_6._index = pLVar12->_index;
            LStack_6._version = pLVar12->_version;
            LStack_6._current = pLVar12->_current;
            LStack_11._version = 0;
            uStack_1 = 1;
            LStack_11._current = (RegexCharClass_SingleRange)&LStack_6;
            while( true ) {
              bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Text
                      ::RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                                (&LStack_6,
                                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                                );
              RVar9 = LStack_6._current;
              RVar7 = (RegexCharClass_SingleRange)&LStack_6;
              if (bVar13 == 0) break;
              e = (EditorStateMachine *)LStack_6._current;
              pMVar14 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                 ((MethodInfo *)0x0);
              if (pMVar14 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
              a = (Delegate *)0x0;
              MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_LockHierarchy
                        (pMVar14,(int32_t)RVar9,0,(MethodInfo *)0x0);
            }
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)&LStack_6,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__
                       ,(MethodInfo *)a);
            uStack_1 = 0xffffffff;
            pMVar14 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                               ((MethodInfo *)0x0);
            if (pMVar14 != (MVNetworkGame_OperationRequests *)0x0) {
              MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TransferOwnership
                        (pMVar14,(this->fields).createGroupId,0,(Transform *)0x0,(MethodInfo *)0x0);
              (this->fields).state = 2;
              (this->fields).responseReceived = 0;
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
          }
        }
      }
      goto code_?;
    }
    LStack_11._list =
         (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
         TypeInfo__System__EventHandler<OnTransferWosResponseEventArgs>;
    LStack_6._version = (int32_t)&UNK_?;
    LStack_6._current = unaff_EDI;
    pEVar15 = (EventInfo *)func_?();
    if (pEVar15 == (EventInfo *)0x0) goto code_?;
    *(EventInfo **)((int)RVar9 + 0x44) = pEVar15;
    LStack_11._list =
         (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
         TypeInfo__System__EventHandler<OnTransferWosResponseEventArgs>;
    e = (EditorStateMachine *)TypeInfo__System__EventHandler<OnTransferWosResponseEventArgs>;
    LStack_6._version = (int32_t)&UNK_?;
    LStack_6._current = unaff_EDI;
    LStack_11._list =
         (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)func_?();
    if (LStack_11._list != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
    goto code_?;
  }
  LStack_11._list = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)e;
  LStack_6._version = (int32_t)&UNK_?;
  LStack_6._current = unaff_EDI;
  func_?();
  RVar7 = RVar9;
code_?:
  LStack_6._version = (int32_t)&UNK_?;
  LStack_6._current = unaff_EDI;
  LStack_11._list = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)RVar7;
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void WOCM_InitializedGameQueryData(Object, InitializedGameQueryDataEventArgs) */

void Assembly-CSharp.dll::ESWaitForGroup::ESWaitForGroup_WOCM_InitializedGameQueryData
               (ESWaitForGroup *this,Object *sender,InitializedGameQueryDataEventArgs *e,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__ESWaitForGroup__WOCM_InitializedGameQueryData_System__Object__InitializedGameQueryDataEventArgs_
                   );
    func_?(&TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    func_?(&StringLiteral_Received_group);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((pMVar1 != (MVNetworkGame *)0x0) &&
      (pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
      pMVar2 != (MVLocalPlayer *)0x0)) && (e != (InitializedGameQueryDataEventArgs *)0x0)) {
    if ((pMVar2->fields)._._ActorNr_k__BackingField != (e->fields).InstigatorActorNumber) {
      return;
    }
    (this->fields).responseReceived = 1;
    pMVar3 = (e->fields).RootWO;
    if (pMVar3 != (MVWorldObjectClient *)0x0) {
      (this->fields).createGroupId = (pMVar3->fields)._.id;
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 != (MVNetworkGame *)0x0) &&
         (pWVar4 = (pMVar1->fields).worldNetwork, pWVar4 != (WorldNetwork *)0x0)) {
        pEVar5 = (pWVar4->fields)._.InitializedGameQueryData;
        this_00 = (EventHandler_1_Object_ *)
                  func_?(TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>)
        ;
        mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                  (this_00,(Object *)unaff_ESI,
                   MethodInfo__ESWaitForGroup__WOCM_InitializedGameQueryData_System__Object__InitializedGameQueryDataEventArgs_
                   ,(MethodInfo *)0x0);
        unaff_ESI = mscorlib.dll::System::Delegate::Delegate_Remove
                              ((Delegate *)pEVar5,(Delegate *)this_00,(MethodInfo *)0x0);
        unaff_EDI = TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>;
        if (unaff_ESI == (Delegate *)0x0) {
          (pWVar4->fields)._.InitializedGameQueryData =
               (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0;
          pEStack6 = (EventHandler_1_InitializedGameQueryDataEventArgs___Class *)0x0;
code_?:
          pDStack7 = (Delegate *)&(pWVar4->fields)._.InitializedGameQueryData;
          func_?();
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)StringLiteral_Received_group,(MethodInfo *)0x0);
          return;
        }
        pEStack6 = TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>;
        pDStack7 = unaff_ESI;
        pEVar5 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)func_?();
        if (pEVar5 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
          (pWVar4->fields)._.InitializedGameQueryData = pEVar5;
          unaff_EDI = TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>;
          pEStack6 = TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>;
          pDStack7 = unaff_ESI;
          pEStack6 =
               (EventHandler_1_InitializedGameQueryDataEventArgs___Class *)func_?();
          if (pEStack6 != (EventHandler_1_InitializedGameQueryDataEventArgs___Class *)0x0)
          goto code_?;
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  pDStack7 = unaff_ESI;
  pEStack6 = unaff_EDI;
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void WOCM_OnHierarchyLockedResponse(Object, OnHierarchyLockedEventArgs) */

void Assembly-CSharp.dll::ESWaitForGroup::ESWaitForGroup_WOCM_OnHierarchyLockedResponse
               (ESWaitForGroup *this,Object *sender,OnHierarchyLockedEventArgs *e,MethodInfo *method
               )

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__ESWaitForGroup__WOCM_OnHierarchyLockedResponse_System__Object__OnHierarchyLockedEventArgs_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__get_Current__
                   );
    func_?(&TypeInfo__System__EventHandler<OnHierarchyLockedEventArgs>);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
    func_?(&StringLiteral_WOCM_OnHierarchyLockedResponse);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current.First = 0;
  LStack_6._current.Last = 0;
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_WOCM_OnHierarchyLockedResponse,(MethodInfo *)0x0);
  if (e == (OnHierarchyLockedEventArgs *)0x0) {
code_?:
    func_?();
    func_?();
  }
  else {
    if ((e->fields).success == 0) {
      method_00 = (MethodInfo *)(this->fields).lockList;
      if (method_00 != (MethodInfo *)0x0) {
        pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                           (&LStack_8,
                            (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                            method_00,
                            MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
        unaff_ESI = (RegexCharClass_SingleRange)&LStack_6;
        LStack_6._list = pLVar7->_list;
        LStack_6._index = pLVar7->_index;
        LStack_6._version = pLVar7->_version;
        LStack_6._current = pLVar7->_current;
        LStack_8._version = 0;
        uStack_1 = 1;
        LStack_8._current = unaff_ESI;
        while (bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Text
                       ::RegularExpressions::RegexCharClass+SingleRange]::
                       List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                                 (&LStack_6,
                                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                                 ), RVar10 = LStack_6._current, bVar9 != 0) {
          this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          unaff_EDI = RVar10;
          if (this_00 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
          method_00 = (MethodInfo *)0x0;
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_LockHierarchy
                    (this_00,(int32_t)RVar10,0,(MethodInfo *)0x0);
        }
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)unaff_ESI,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__,
                   method_00);
        uStack_1 = 0xffffffff;
        (this->fields).abort = 1;
        e = (OnHierarchyLockedEventArgs *)
            MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if ((MVWorldObjectClientManager *)e != (MVWorldObjectClientManager *)0x0) {
          pEVar11 = (((MVWorldObjectClientManager *)e)->fields).OnHierarchyLockedResponse;
          pEVar12 = (EventHandler_1_Object_ *)func_?();
          mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                    (pEVar12,(Object *)this,
                     MethodInfo__ESWaitForGroup__WOCM_OnHierarchyLockedResponse_System__Object__OnHierarchyLockedEventArgs_
                     ,(MethodInfo *)0x0);
          unaff_EDI = (RegexCharClass_SingleRange)
                      mscorlib.dll::System::Delegate::Delegate_Remove
                                ((Delegate *)pEVar11,(Delegate *)pEVar12,(MethodInfo *)0x0);
          if (unaff_EDI != (RegexCharClass_SingleRange)0x0) goto code_?;
code_?:
          LStack_8._version = 0;
          e[4].klass = (OnHierarchyLockedEventArgs__Class *)0x0;
          unaff_ESI = (RegexCharClass_SingleRange)e;
code_?:
          LStack_8._index = (int)unaff_ESI + 0x40;
          LStack_8._list =
               (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)&UNK_?;
          func_?();
code_?:
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
      goto code_?;
    }
    piVar13 = &(this->fields).lockCount;
    *piVar13 = *piVar13 + -1;
    if (*piVar13 != 0) goto code_?;
    (this->fields).responseReceived = 1;
    e = (OnHierarchyLockedEventArgs *)
        MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((MVWorldObjectClientManager *)e == (MVWorldObjectClientManager *)0x0) goto code_?;
    pEVar11 = (((MVWorldObjectClientManager *)e)->fields).OnHierarchyLockedResponse;
    pEVar12 = (EventHandler_1_Object_ *)func_?();
    mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
              (pEVar12,(Object *)this,
               MethodInfo__ESWaitForGroup__WOCM_OnHierarchyLockedResponse_System__Object__OnHierarchyLockedEventArgs_
               ,(MethodInfo *)0x0);
    unaff_EDI = (RegexCharClass_SingleRange)
                mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)pEVar11,(Delegate *)pEVar12,(MethodInfo *)0x0);
    if (unaff_EDI == (RegexCharClass_SingleRange)0x0) goto code_?;
code_?:
    unaff_ESI = (RegexCharClass_SingleRange)e;
    RVar10 = (RegexCharClass_SingleRange)TypeInfo__System__EventHandler<OnHierarchyLockedEventArgs>;
    LStack_8._version = (int32_t)TypeInfo__System__EventHandler<OnHierarchyLockedEventArgs>;
    LStack_8._list =
         (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)&UNK_?;
    LStack_8._index = (int32_t)unaff_EDI;
    pOVar14 = (OnHierarchyLockedEventArgs__Class *)func_?();
    if (pOVar14 == (OnHierarchyLockedEventArgs__Class *)0x0) goto code_?;
    e[4].klass = pOVar14;
    LStack_8._version = (int32_t)TypeInfo__System__EventHandler<OnHierarchyLockedEventArgs>;
    e = (OnHierarchyLockedEventArgs *)TypeInfo__System__EventHandler<OnHierarchyLockedEventArgs>;
    LStack_8._list =
         (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)&UNK_?;
    LStack_8._index = (int32_t)unaff_EDI;
    LStack_8._version = func_?();
    if (LStack_8._version != 0) goto code_?;
  }
  LStack_8._version = (int32_t)e;
  LStack_8._list =
       (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)&UNK_?;
  LStack_8._index = (int32_t)unaff_EDI;
  func_?();
  RVar10 = unaff_ESI;
code_?:
  LStack_8._list =
       (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)&UNK_?;
  LStack_8._index = (int32_t)unaff_EDI;
  LStack_8._version = (int32_t)RVar10;
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void WOCM_OnTransferWosResponse(Object, OnTransferWosResponseEventArgs) */

void Assembly-CSharp.dll::ESWaitForGroup::ESWaitForGroup_WOCM_OnTransferWosResponse
               (ESWaitForGroup *this,Object *sender,OnTransferWosResponseEventArgs *e,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__ESWaitForGroup__WOCM_OnTransferWosResponse_System__Object__OnTransferWosResponseEventArgs_
                   );
    func_?(&TypeInfo__System__EventHandler<OnTransferWosResponseEventArgs>);
    cRam_? = '\x01';
  }
  (this->fields).responseReceived = 1;
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 == (MVWorldObjectClientManager *)0x0) {
    func_?();
  }
  else {
    pEVar2 = (pMVar1->fields).OnTransferWosResponse;
    this_00 = (EventHandler_1_Object_ *)
              func_?(TypeInfo__System__EventHandler<OnTransferWosResponseEventArgs>);
    mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__ESWaitForGroup__WOCM_OnTransferWosResponse_System__Object__OnTransferWosResponseEventArgs_
               ,(MethodInfo *)0x0);
    pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pEVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar3 == (Delegate *)0x0) {
      (pMVar1->fields).OnTransferWosResponse = (EventHandler_1_OnTransferWosResponseEventArgs_ *)0x0
      ;
      func_?();
      return;
    }
    pEVar2 = (EventHandler_1_OnTransferWosResponseEventArgs_ *)func_?();
    if (pEVar2 != (EventHandler_1_OnTransferWosResponseEventArgs_ *)0x0) {
      (pMVar1->fields).OnTransferWosResponse = pEVar2;
      iVar4 = func_?();
      if (iVar4 != 0) {
        func_?();
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* ESWaitForGroup() */

void Assembly-CSharp.dll::ESWaitForGroup::ESWaitForGroup__ctor
               (ESWaitForGroup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<int>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Int32_ *)
            func_?(TypeInfo__System__Collections__Generic__List<int>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<int>__List__);
  (this->fields).lockList = this_00;
  func_?(&(this->fields).lockList,this_00);
  (this->fields).createGroupId = -1;
  ESStateBase::ESStateBase__ctor((ESStateBase *)this,(MethodInfo *)0x0);
  return;
}


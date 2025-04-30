
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
  if (e != (EditorStateMachine *)0x0) {
    this_00 = EditorStateMachine::EditorStateMachine_get_SelectedWOs(e,(MethodInfo *)0x0);
    if (this_00 != (HashSet_1_MVWorldObjectClient_ *)0x0) {
      pHVar1 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
               HashSet_1_System_UInt32__GetEnumerator
                         ((HashSet_1_T_Enumerator_System_UInt32_ *)&stack0xffffffb0,
                          (HashSet_1_System_UInt32_ *)this_00,
                          MethodInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>__GetEnumerator__
                         );
      method_00 = (MethodInfo *)pHVar1->_version;
      pOVar2 = (Object *)pHVar1->_current;
      while( true ) {
        bVar3 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                Object]::HashSet_1_T_Enumerator_System_Object__MoveNext
                          ((HashSet_1_T_Enumerator_System_Object_ *)&stack0xffffffc0,
                           MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                          );
        if (bVar3 == 0) break;
        if ((pOVar2 == (Object *)0x0) || (transforms == (List_1_UnityEngine_Transform_ *)0x0))
        goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
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
      if (pMVar6 != (MVNetworkGame *)0x0) {
        pWVar7 = (pMVar6->fields).worldNetwork;
        if (pWVar7 != (WorldNetwork *)0x0) {
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
          this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          groupId = EditorStateMachine::EditorStateMachine_get_ParentGroupID(e,(MethodInfo *)0x0);
          pDVar11 = 
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
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
                       TypeInfo__UnityEngine__Vector3->static_fields->oneVector,1,1,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = pDVar11;
            return;
          }
        }
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
  puStack_4 = &stack0xffffffb4;
  puVar5 = &stack0xffffffb4;
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
    ppLStack_9 = &(this->fields).lockList;
    *ppLStack_9 = pLVar8;
    func_?();
    (this->fields).state = 0;
    pEStack_10 = (EventHandler_1_OnHierarchyLockedEventArgs___Class *)
                 MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pEStack_10 == (EventHandler_1_OnHierarchyLockedEventArgs___Class *)0x0)
    goto code_?;
    pDVar11 = (Delegate *)(pEStack_10->_0).fields;
    this_00 = (EventHandler_1_Object_ *)
              func_?(TypeInfo__System__EventHandler<OnHierarchyLockedEventArgs>);
    mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__ESWaitForGroup__WOCM_OnHierarchyLockedResponse_System__Object__OnHierarchyLockedEventArgs_
               ,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)0x0;
    pDVar11 = mscorlib.dll::System::Delegate::Delegate_Combine
                       (pDVar11,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar11 == (Delegate *)0x0) {
      (pEStack_10->_0).fields = (FieldInfo *)0x0;
code_?:
      func_?();
      this_01 = (HashSet_1_System_UInt32_ *)
                MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id
                          ((MVJetPack_LocalObjectsJetPack *)e,(MethodInfo *)0x0);
      if (this_01 != (HashSet_1_System_UInt32_ *)0x0) {
        pHVar12 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
                  HashSet_1_System_UInt32__GetEnumerator
                            (&HStack_13,this_01,
                             MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__
                            );
        item = pHVar12->_current;
        HStack_13._version = 0;
        uStack_1 = 1;
        HStack_13._current = (uint32_t)&stack0xffffffc0;
        while( true ) {
          bVar14 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                  UInt32]::HashSet_1_T_Enumerator_System_UInt32__MoveNext
                            ((HashSet_1_T_Enumerator_System_UInt32_ *)&stack0xffffffc0,
                             MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                            );
          pMVar15 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
          if (bVar14 == 0) break;
          pLVar8 = *ppLStack_9;
          if (pLVar8 == (List_1_System_Int32_ *)0x0) goto code_?;
          piVar16 = &(pLVar8->fields)._version;
          *piVar16 = *piVar16 + 1;
          pcVar17 = (char *)(pLVar8->fields)._size;
          pEStack_10 = (EventHandler_1_OnHierarchyLockedEventArgs___Class *)(pLVar8->fields)._items;
          if (pEStack_10 == (EventHandler_1_OnHierarchyLockedEventArgs___Class *)0x0)
          goto code_?;
          if (pcVar17 < (pEStack_10->_0).namespaze) {
            (pLVar8->fields)._size = (int32_t)(pcVar17 + 1);
            if ((pEStack_10->_0).namespaze <= pcVar17) {
              func_?();
              goto code_?;
            }
            (&(pEStack_10->_0).byval_arg.data)[(int)pcVar17].__klassIndex = item;
          }
          else {
            mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
            List_1_System_Int32__AddWithResize(pLVar8,item,pMVar15->klass->rgctx_data[0xe].method);
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
                  ((Object *)&stack0xffffffc0,
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
    (pEStack_10->_0).fields = pFVar18;
    pEStack_10 = TypeInfo__System__EventHandler<OnHierarchyLockedEventArgs>;
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
  RVar6 = (RegexCharClass_SingleRange)this;
  if ((this->fields).abort != 0) {
    if (e != (EditorStateMachine *)0x0) {
      (e->fields)._.lockState = 0;
      FSMEntity::FSMEntity_PopState((FSMEntity *)e,(MethodInfo *)0x0);
      goto code_?;
    }
    goto code_?;
  }
  iVar7 = (this->fields).state;
  if (iVar7 == 0) {
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
  if (iVar7 != 1) {
    if ((iVar7 != 2) || ((this->fields).responseReceived == 0)) goto code_?;
    unaff_EDI = (EventHandler_1_OnTransferWosResponseEventArgs___Class *)0x0;
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
  pMVar8 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  e = (EditorStateMachine *)pMVar8;
  if (pMVar8 == (MVWorldObjectClientManager *)0x0) {
code_?:
    uVar9 = func_?();
    func_?(uVar9);
  }
  else {
    a = (pMVar8->fields).OnTransferWosResponse;
    this_02 = (EventHandler_1_Object_ *)func_?();
    mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
              (this_02,(Object *)this,
               MethodInfo__ESWaitForGroup__WOCM_OnTransferWosResponse_System__Object__OnTransferWosResponseEventArgs_
               ,(MethodInfo *)0x0);
    RVar6 = (RegexCharClass_SingleRange)
            mscorlib.dll::System::Delegate::Delegate_Combine
                      ((Delegate *)a,(Delegate *)this_02,(MethodInfo *)0x0);
    unaff_EDI = TypeInfo__System__EventHandler<OnTransferWosResponseEventArgs>;
    if (RVar6 == (RegexCharClass_SingleRange)0x0) {
      (pMVar8->fields).OnTransferWosResponse = (EventHandler_1_OnTransferWosResponseEventArgs_ *)0x0
      ;
      LStack_10._list = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0;
code_?:
      LStack_11._current = (RegexCharClass_SingleRange)&(pMVar8->fields).OnTransferWosResponse;
      LStack_11._version = (int32_t)&UNK_?;
      func_?();
      RVar6 = (RegexCharClass_SingleRange)
              MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      e = (EditorStateMachine *)(this->fields).createGroupId;
      this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                 *)(this->fields).lockList;
      unaff_EDI = (EventHandler_1_OnTransferWosResponseEventArgs___Class *)this;
      if (this_00 !=
          (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
           *)0x0) {
        worldObjects = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                       Internal::MultiColumnCollectionHeader+ViewState+ColumnState]::
                       List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                                 (this_00,
                                  MethodInfo__System__Collections__Generic__List<int>__ToArray__);
        if (RVar6 != (RegexCharClass_SingleRange)0x0) {
          MVNetworkGame+OperationRequests::
          MVNetworkGame_OperationRequests_TransferWorldObjectsToGroup
                    ((MVNetworkGame_OperationRequests *)RVar6,(int32_t)e,
                     (Int32__Array *)worldObjects,(MethodInfo *)0x0);
          this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                    (this->fields).lockList;
          if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
            pLVar12 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                               (&LStack_10,this_01,
                                MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__
                               );
            LStack_11._list = pLVar12->_list;
            LStack_11._index = pLVar12->_index;
            LStack_11._version = pLVar12->_version;
            LStack_11._current = pLVar12->_current;
            LStack_10._version = 0;
            uStack_1 = 1;
            LStack_10._current = (RegexCharClass_SingleRange)&LStack_11;
            while( true ) {
              bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Text
                      ::RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                                (&LStack_11,
                                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                                );
              worldObjectID = LStack_11._current;
              RVar6 = (RegexCharClass_SingleRange)&LStack_11;
              if (bVar13 == 0) break;
              e = (EditorStateMachine *)LStack_11._current;
              pMVar14 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                 ((MethodInfo *)0x0);
              if (pMVar14 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
              a = (EventHandler_1_OnTransferWosResponseEventArgs_ *)0x0;
              MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_LockHierarchy
                        (pMVar14,(int32_t)worldObjectID,0,(MethodInfo *)0x0);
            }
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)&LStack_11,
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
    LStack_10._list =
         (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
         TypeInfo__System__EventHandler<OnTransferWosResponseEventArgs>;
    LStack_11._version = (int32_t)&UNK_?;
    LStack_11._current = RVar6;
    pEVar15 = (EventHandler_1_OnTransferWosResponseEventArgs_ *)func_?();
    if (pEVar15 == (EventHandler_1_OnTransferWosResponseEventArgs_ *)0x0) goto code_?;
    unaff_EDI = (EventHandler_1_OnTransferWosResponseEventArgs___Class *)
                &(pMVar8->fields).OnTransferWosResponse;
    *(EventHandler_1_OnTransferWosResponseEventArgs_ **)unaff_EDI = pEVar15;
    LStack_10._list =
         (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
         TypeInfo__System__EventHandler<OnTransferWosResponseEventArgs>;
    e = (EditorStateMachine *)TypeInfo__System__EventHandler<OnTransferWosResponseEventArgs>;
    LStack_11._version = (int32_t)&UNK_?;
    LStack_11._current = RVar6;
    LStack_10._list =
         (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)func_?();
    if (LStack_10._list != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
    goto code_?;
  }
  LStack_10._list = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)e;
  LStack_11._version = (int32_t)&UNK_?;
  LStack_11._current = RVar6;
  func_?();
code_?:
  LStack_11._version = (int32_t)&UNK_?;
  LStack_11._current = RVar6;
  LStack_10._list = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)unaff_EDI;
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
        ppEVar6 = &(pWVar4->fields)._.InitializedGameQueryData;
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
          *ppEVar6 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0;
          pEStack7 = (EventHandler_1_InitializedGameQueryDataEventArgs___Class *)0x0;
code_?:
          pDStack8 = (Delegate *)ppEVar6;
          func_?();
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)StringLiteral_Received_group,(MethodInfo *)0x0);
          return;
        }
        pEStack7 = TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>;
        pDStack8 = unaff_ESI;
        pEVar5 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)func_?();
        if (pEVar5 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
          *ppEVar6 = pEVar5;
          unaff_EDI = TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>;
          pEStack7 = TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>;
          pDStack8 = unaff_ESI;
          pEStack7 =
               (EventHandler_1_InitializedGameQueryDataEventArgs___Class *)func_?();
          if (pEStack7 != (EventHandler_1_InitializedGameQueryDataEventArgs___Class *)0x0)
          goto code_?;
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  pDStack8 = unaff_ESI;
  pEStack7 = unaff_EDI;
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
    if ((e->fields).success != 0) {
      piVar6 = &(this->fields).lockCount;
      *piVar6 = *piVar6 + -1;
      if (*piVar6 != 0) goto code_?;
      (this->fields).responseReceived = 1;
      e = (OnHierarchyLockedEventArgs *)
          MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if ((MVWorldObjectClientManager *)e != (MVWorldObjectClientManager *)0x0) {
        pEVar7 = (((MVWorldObjectClientManager *)e)->fields).OnHierarchyLockedResponse;
        pEVar8 = (EventHandler_1_Object_ *)func_?();
        mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                  (pEVar8,(Object *)this,
                   MethodInfo__ESWaitForGroup__WOCM_OnHierarchyLockedResponse_System__Object__OnHierarchyLockedEventArgs_
                   ,(MethodInfo *)0x0);
        unaff_ESI = (RegexCharClass_SingleRange)
                    mscorlib.dll::System::Delegate::Delegate_Remove
                              ((Delegate *)pEVar7,(Delegate *)pEVar8,(MethodInfo *)0x0);
        unaff_EDI = (RegexCharClass_SingleRange)
                    TypeInfo__System__EventHandler<OnHierarchyLockedEventArgs>;
        if (unaff_ESI == (RegexCharClass_SingleRange)0x0) goto code_?;
        LStack_9._version = (int32_t)TypeInfo__System__EventHandler<OnHierarchyLockedEventArgs>;
        LStack_9._list =
             (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)&UNK_?;
        LStack_9._index = (int32_t)unaff_ESI;
        pEVar7 = (EventHandler_1_OnHierarchyLockedEventArgs_ *)func_?();
        if (pEVar7 == (EventHandler_1_OnHierarchyLockedEventArgs_ *)0x0) goto code_?;
        unaff_EDI = (RegexCharClass_SingleRange)
                    &(((MVWorldObjectClientManager *)e)->fields).OnHierarchyLockedResponse;
        *(EventHandler_1_OnHierarchyLockedEventArgs_ **)unaff_EDI = pEVar7;
        pEVar10 = TypeInfo__System__EventHandler<OnHierarchyLockedEventArgs>;
        LStack_9._version = (int32_t)TypeInfo__System__EventHandler<OnHierarchyLockedEventArgs>;
        e = (OnHierarchyLockedEventArgs *)TypeInfo__System__EventHandler<OnHierarchyLockedEventArgs>
        ;
        LStack_9._list =
             (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)&UNK_?;
        LStack_9._index = (int32_t)unaff_ESI;
        LStack_9._version = func_?();
        if (LStack_9._version != 0) goto code_?;
        LStack_9._version = (int32_t)pEVar10;
        LStack_9._list =
             (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)&UNK_?;
        LStack_9._index = (int32_t)unaff_ESI;
        func_?();
      }
      goto code_?;
    }
    method_00 = (MethodInfo *)(this->fields).lockList;
    if (method_00 == (MethodInfo *)0x0) goto code_?;
    pLVar11 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_9,
                        (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                        method_00,
                        MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
    unaff_ESI = (RegexCharClass_SingleRange)&LStack_12;
    LStack_12._list = pLVar11->_list;
    LStack_12._index = pLVar11->_index;
    LStack_12._version = pLVar11->_version;
    LStack_12._current = pLVar11->_current;
    LStack_9._version = 0;
    uStack_1 = 1;
    LStack_9._current = unaff_ESI;
    while( true ) {
      bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Text::
              RegularExpressions::RegexCharClass+SingleRange]::
              List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                        (&LStack_12,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                        );
      worldObjectID = LStack_12._current;
      if (bVar13 == 0) break;
      this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      unaff_EDI = worldObjectID;
      if (this_00 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
      method_00 = (MethodInfo *)0x0;
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_LockHierarchy
                (this_00,(int32_t)worldObjectID,0,(MethodInfo *)0x0);
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
    if ((MVWorldObjectClientManager *)e == (MVWorldObjectClientManager *)0x0) goto code_?;
    pEVar7 = (((MVWorldObjectClientManager *)e)->fields).OnHierarchyLockedResponse;
    pEVar8 = (EventHandler_1_Object_ *)func_?();
    mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
              (pEVar8,(Object *)this,
               MethodInfo__ESWaitForGroup__WOCM_OnHierarchyLockedResponse_System__Object__OnHierarchyLockedEventArgs_
               ,(MethodInfo *)0x0);
    unaff_ESI = (RegexCharClass_SingleRange)
                mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)pEVar7,(Delegate *)pEVar8,(MethodInfo *)0x0);
    unaff_EDI = (RegexCharClass_SingleRange)
                TypeInfo__System__EventHandler<OnHierarchyLockedEventArgs>;
    if (unaff_ESI == (RegexCharClass_SingleRange)0x0) {
code_?:
      unaff_EDI = (RegexCharClass_SingleRange)(e + 4);
      LStack_9._version = 0;
      ((OnHierarchyLockedEventArgs *)unaff_EDI)->klass = (OnHierarchyLockedEventArgs__Class *)0x0;
code_?:
      LStack_9._list =
           (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)&UNK_?;
      LStack_9._index = (int32_t)unaff_EDI;
      func_?();
code_?:
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    LStack_9._version = (int32_t)TypeInfo__System__EventHandler<OnHierarchyLockedEventArgs>;
    LStack_9._list =
         (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)&UNK_?;
    LStack_9._index = (int32_t)unaff_ESI;
    pEVar7 = (EventHandler_1_OnHierarchyLockedEventArgs_ *)func_?();
    if (pEVar7 == (EventHandler_1_OnHierarchyLockedEventArgs_ *)0x0) goto code_?;
    unaff_EDI = (RegexCharClass_SingleRange)
                &(((MVWorldObjectClientManager *)e)->fields).OnHierarchyLockedResponse;
    *(EventHandler_1_OnHierarchyLockedEventArgs_ **)unaff_EDI = pEVar7;
    LStack_9._version = (int32_t)TypeInfo__System__EventHandler<OnHierarchyLockedEventArgs>;
    e = (OnHierarchyLockedEventArgs *)TypeInfo__System__EventHandler<OnHierarchyLockedEventArgs>;
    LStack_9._list =
         (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)&UNK_?;
    LStack_9._index = (int32_t)unaff_ESI;
    LStack_9._version = func_?();
    if (LStack_9._version != 0) goto code_?;
  }
  LStack_9._version = (int32_t)e;
  LStack_9._list =
       (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)&UNK_?;
  LStack_9._index = (int32_t)unaff_ESI;
  func_?();
code_?:
  LStack_9._list =
       (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)&UNK_?;
  LStack_9._index = (int32_t)unaff_ESI;
  LStack_9._version = (int32_t)unaff_EDI;
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
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
    ppEVar3 = &(pMVar1->fields).OnTransferWosResponse;
    this_00 = (EventHandler_1_Object_ *)
              func_?(TypeInfo__System__EventHandler<OnTransferWosResponseEventArgs>);
    mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__ESWaitForGroup__WOCM_OnTransferWosResponse_System__Object__OnTransferWosResponseEventArgs_
               ,(MethodInfo *)0x0);
    pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pEVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar4 == (Delegate *)0x0) {
      *ppEVar3 = (EventHandler_1_OnTransferWosResponseEventArgs_ *)0x0;
      func_?();
      return;
    }
    pEVar2 = (EventHandler_1_OnTransferWosResponseEventArgs_ *)func_?();
    if (pEVar2 != (EventHandler_1_OnTransferWosResponseEventArgs_ *)0x0) {
      *ppEVar3 = pEVar2;
      iVar5 = func_?();
      if (iVar5 != 0) {
        func_?();
        return;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
  ppLVar1 = &(this->fields).lockList;
  *ppLVar1 = this_00;
  func_?(ppLVar1,this_00);
  (this->fields).createGroupId = -1;
  ESStateBase::ESStateBase__ctor((ESStateBase *)this,(MethodInfo *)0x0);
  return;
}


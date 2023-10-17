
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
  if (((transforms == (List_1_UnityEngine_Transform_ *)0x0) ||
      (mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
       LowLevelList_1_System_Object___ctor
                 ((LowLevelList_1_System_Object_ *)transforms,
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__List__),
      e == (EditorStateMachine *)0x0)) ||
     (this_00 = EditorStateMachine::EditorStateMachine_get_SelectedWOs(e,(MethodInfo *)0x0),
     this_00 == (HashSet_1_MVWorldObjectClient_ *)0x0)) goto code_?;
  pHVar1 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
           HashSet_1_System_Object__GetEnumerator
                     ((HashSet_1_T_Enumerator_System_Object_ *)&stack0xffffffb0,
                      (HashSet_1_System_Object_ *)this_00,
                      MethodInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>__GetEnumerator__
                     );
  method_00 = (MethodInfo *)pHVar1->_version;
  pOVar2 = pHVar1->_current;
  while (bVar3 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                 Object]::HashSet_1_T_Enumerator_System_Object__MoveNext
                           ((HashSet_1_T_Enumerator_System_Object_ *)&stack0xffffffc0,
                            MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                           ), bVar3 != 0) {
    if (pOVar2 == (Object *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)transforms,(Object *)pOVar2[0x12].klass,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__Add_UnityEngine__Transform_
              );
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
  if ((pMVar6 == (MVNetworkGame *)0x0) ||
     (pWVar7 = (pMVar6->fields).worldNetwork, pWVar7 == (WorldNetwork *)0x0)) goto code_?;
  pEVar8 = (pWVar7->fields)._.InitializedGameQueryData;
  this_01 = (UnityAction_2_System_Object_System_Object_ *)func_?();
  if (this_01 == (UnityAction_2_System_Object_System_Object_ *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (this_01,(Object *)this,
             MethodInfo__ESWaitForGroup__WOCM_InitializedGameQueryData_System__Object__InitializedGameQueryDataEventArgs_
             ,(MethodInfo *)0x0);
  pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pEVar8,(Delegate *)this_01,(MethodInfo *)0x0);
  if (pDVar9 == (Delegate *)0x0) {
    (pWVar7->fields)._.InitializedGameQueryData =
         (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0;
code_?:
    func_?();
    this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    groupId = EditorStateMachine::EditorStateMachine_get_ParentGroupID(e,(MethodInfo *)0x0);
    pDVar10 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    customData = (Dictionary_2_System_Object_System_Object_ *)func_?();
    if (customData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pDVar11 = customData;
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)customData,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pQVar12 = TypeInfo__UnityEngine__Quaternion->static_fields;
      pHVar13 = (HashSet_1_System_Object_ *)(pQVar12->identityQuaternion).x;
      fVar14 = (pQVar12->identityQuaternion).y;
      fVar15 = (pQVar12->identityQuaternion).z;
      pOVar2 = (Object *)(pQVar12->identityQuaternion).w;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (this_02 != (MVNetworkGame_OperationRequests *)0x0) {
        position.y = 1.4013e-45;
        position.x = (float)pDVar11;
        position.z = fVar5;
        rotation.y = fVar14;
        rotation.x = (float)pHVar13;
        rotation.z = fVar15;
        rotation.w = (float)pOVar2;
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_RequestBuiltInItem
                  (this_02,BuiltInItem__Enum_Group,groupId,customData,position,rotation,
                   TypeInfo__UnityEngine__Vector3->static_fields->oneVector,1,1,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pDVar10;
        return;
      }
    }
  }
  else {
    pEVar8 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)func_?();
    if (pEVar8 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
      (pWVar7->fields)._.InitializedGameQueryData = pEVar8;
      iVar16 = func_?();
      if (iVar16 != 0) goto code_?;
    }
    func_?();
  }
code_?:
  func_?();
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESWaitForGroup::ESWaitForGroup_Enter
               (ESWaitForGroup *this,EditorStateMachine *e,MethodInfo *method)

{
  pDStack_1 = (DelegateData *)0xffffffff;
  pMStack_2 = (MethodInfo_1 *)&DAT_?;
  pMStack_3 = (MethodInfo_1 *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pMStack_3;
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
  if (e != (EditorStateMachine *)0x0) {
    (e->fields)._.lockState = 1;
    iVar6 = MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id
                      ((MVJetPack_LocalObjectsJetPack *)e,(MethodInfo *)0x0);
    if (iVar6 != 0) {
      if (*(int *)(iVar6 + 0x10) == 0) {
code_?:
        (e->fields)._.lockState = 0;
        FSMEntity::FSMEntity_PopState((FSMEntity *)e,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pMStack_3;
        return;
      }
      iVar6 = MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id
                        ((MVJetPack_LocalObjectsJetPack *)e,(MethodInfo *)0x0);
      if (iVar6 != 0) {
        if (*(int *)(iVar6 + 0x10) == 1) goto code_?;
        pLVar7 = (List_1_System_Int32_ *)func_?();
        if (pLVar7 != (List_1_System_Int32_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
          LowLevelList_1_System_Object___ctor
                    ((LowLevelList_1_System_Object_ *)pLVar7,
                     MethodInfo__System__Collections__Generic__List<int>__List__);
          (this->fields).lockList = pLVar7;
          func_?(&(this->fields).lockList,pLVar7);
          (this->fields).state = 0;
          pMVar8 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (pMVar8 != (MVWorldObjectClientManager *)0x0) {
            pEVar9 = (pMVar8->fields).OnHierarchyLockedResponse;
            HStack_10._current =
                 (Object *)
                 func_?(TypeInfo__System__EventHandler<OnHierarchyLockedEventArgs>);
            if ((UnityAction_2_System_Object_System_Object_ *)HStack_10._current !=
                (UnityAction_2_System_Object_System_Object_ *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        ((UnityAction_2_System_Object_System_Object_ *)HStack_10._current,
                         (Object *)this,
                         MethodInfo__ESWaitForGroup__WOCM_OnHierarchyLockedResponse_System__Object__OnHierarchyLockedEventArgs_
                         ,(MethodInfo *)0x0);
              pUVar11 = (UnityAction_2_System_Object_System_Object_ *)
                        mscorlib.dll::System::Delegate::Delegate_Combine
                                  ((Delegate *)pEVar9,(Delegate *)HStack_10._current,
                                   (MethodInfo *)0x0);
              pUVar12 = (UnityAction_2_System_Object_System_Object_ *)HStack_10._current;
              HStack_10._current = (Object *)pUVar11;
              if (pUVar11 == (UnityAction_2_System_Object_System_Object_ *)0x0) {
                (pMVar8->fields).OnHierarchyLockedResponse =
                     (EventHandler_1_OnHierarchyLockedEventArgs_ *)0x0;
              }
              else {
                pEVar9 = (EventHandler_1_OnHierarchyLockedEventArgs_ *)func_?();
                if (pEVar9 == (EventHandler_1_OnHierarchyLockedEventArgs_ *)0x0)
                goto code_?;
                (pMVar8->fields).OnHierarchyLockedResponse = pEVar9;
                iVar13 = func_?();
                if (iVar13 == 0) goto code_?;
              }
              func_?();
              this_00 = (HashSet_1_System_Object_ *)
                        MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id
                                  ((MVJetPack_LocalObjectsJetPack *)e,(MethodInfo *)0x0);
              if (this_00 != (HashSet_1_System_Object_ *)0x0) {
                pHVar14 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
                          HashSet_1_System_Object__GetEnumerator
                                    (&HStack_10,this_00,
                                     MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__
                                    );
                worldObjectID = pHVar14->_current;
                HStack_10._version = 0;
                pDStack_1 = (DelegateData *)0x1;
                HStack_10._current = (Object *)&stack0xffffffc4;
                while (bVar15 = System.Core.dll::System::Collections::Generic::
                               HashSet`1[T]+Enumerator[System::Int32]::
                               HashSet_1_T_Enumerator_System_Int32__MoveNext
                                         ((HashSet_1_T_Enumerator_System_Int32_ *)&stack0xffffffc4,
                                          MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                                         ),
                      pMVar16 = MethodInfo__System__Collections__Generic__List<int>__Add_int_,
                      bVar15 != 0) {
                  pLVar7 = (this->fields).lockList;
                  if (pLVar7 == (List_1_System_Int32_ *)0x0) goto code_?;
                  piVar17 = &(pLVar7->fields)._version;
                  *piVar17 = *piVar17 + 1;
                  pIVar18 = (pLVar7->fields)._items;
                  uVar19 = (pLVar7->fields)._size;
                  if (pIVar18 == (Int32__Array *)0x0) goto code_?;
                  if (uVar19 < pIVar18->max_length) {
                    (pLVar7->fields)._size = uVar19 + 1;
                    if (pIVar18->max_length <= uVar19) {
                      func_?();
                      goto code_?;
                    }
                    pIVar18->vector[uVar19] = (int32_t)worldObjectID;
                  }
                  else {
                    (*(pMVar16->klass->rgctx_data[0xb].method)->virtualMethodPointer)
                              (pLVar7,worldObjectID,pMVar16->klass->rgctx_data[0xb].rgctxDataDummy);
                  }
                  this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                      ((MethodInfo *)0x0);
                  if (this_01 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
                  MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_LockHierarchy
                            (this_01,(int32_t)worldObjectID,1,(MethodInfo *)0x0);
                }
                pDStack_1 = (DelegateData *)0xffffffff;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                          ((Object *)&stack0xffffffc4,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                           ,(MethodInfo *)pUVar12);
                pDStack_1 = (DelegateData *)0xffffffff;
                pLVar7 = (this->fields).lockList;
                if (pLVar7 != (List_1_System_Int32_ *)0x0) {
                  (this->fields).lockCount = (pLVar7->fields)._size;
                  *unaff_FS_OFFSET = pMStack_3;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  uVar20 = func_?();
  func_?(uVar20);
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,(ExceptionArgument__Enum)e,(MethodInfo *)0x0);
  if ((this->fields).abort == 0) {
    iVar7 = (this->fields).state;
    if (iVar7 == 0) {
      if ((this->fields).responseReceived == 0) goto code_?;
      ESWaitForGroup_CreateGroup(this,e,(MethodInfo *)0x0);
      (this->fields).state = 1;
code_?:
      (this->fields).responseReceived = 0;
code_?:
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    if (iVar7 == 1) {
      if ((this->fields).responseReceived == 0) goto code_?;
      pMVar8 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar8 != (MVWorldObjectClientManager *)0x0) {
        LStack_9._current = (RegexCharClass_SingleRange)(pMVar8->fields).OnTransferWosResponse;
        this_02 = (UnityAction_2_System_Object_System_Object_ *)func_?();
        e._0_2_ = 0;
        e._2_2_ = 0;
        if (this_02 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (this_02,(Object *)this,
                     MethodInfo__ESWaitForGroup__WOCM_OnTransferWosResponse_System__Object__OnTransferWosResponseEventArgs_
                     ,(MethodInfo *)0x0);
          method_00 = LStack_9._current;
          e = (EditorStateMachine *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)LStack_9._current,(Delegate *)this_02,(MethodInfo *)0x0);
          LStack_9._current =
               (RegexCharClass_SingleRange)
               TypeInfo__System__EventHandler<OnTransferWosResponseEventArgs>;
          if ((RegexCharClass_SingleRange)e == (RegexCharClass_SingleRange)0x0) {
            LStack_9._index = 0;
            (pMVar8->fields).OnTransferWosResponse =
                 (EventHandler_1_OnTransferWosResponseEventArgs_ *)0x0;
          }
          else {
            LStack_9._index =
                 (int32_t)TypeInfo__System__EventHandler<OnTransferWosResponseEventArgs>;
            LStack_9._list = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)e
            ;
            pEVar10 = (EventHandler_1_OnTransferWosResponseEventArgs_ *)func_?();
            if (pEVar10 == (EventHandler_1_OnTransferWosResponseEventArgs_ *)0x0)
            goto code_?;
            (pMVar8->fields).OnTransferWosResponse = pEVar10;
            LStack_9._index =
                 (int32_t)TypeInfo__System__EventHandler<OnTransferWosResponseEventArgs>;
            LStack_9._current =
                 (RegexCharClass_SingleRange)
                 TypeInfo__System__EventHandler<OnTransferWosResponseEventArgs>;
            LStack_9._list = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)e
            ;
            LStack_9._index = func_?();
            if (LStack_9._index == 0) goto code_?;
          }
          LStack_9._list =
               (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               &(pMVar8->fields).OnTransferWosResponse;
          func_?();
          e = (EditorStateMachine *)
              MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
          groupId = (this->fields).createGroupId;
          this_00 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                    (this->fields).lockList;
          if ((this_00 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) &&
             (worldObjects = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                             UnitySynchronizationContext+WorkRequest]::
                             List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__ToArray
                                       (this_00,
                                        MethodInfo__System__Collections__Generic__List<int>__ToArray__
                                       ),
             (RegexCharClass_SingleRange)e != (RegexCharClass_SingleRange)0x0)) {
            MVNetworkGame+OperationRequests::
            MVNetworkGame_OperationRequests_TransferWorldObjectsToGroup
                      ((MVNetworkGame_OperationRequests *)e,groupId,(Int32__Array *)worldObjects,
                       (MethodInfo *)0x0);
            this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                      (this->fields).lockList;
            if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
            {
              pLVar11 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                       RegularExpressions::RegexCharClass+SingleRange]::
                       List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                                 (&LStack_9,this_01,
                                  MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__
                                 );
              e = (EditorStateMachine *)&LStack_6;
              LStack_6._list = pLVar11->_list;
              LStack_6._index = pLVar11->_index;
              LStack_6._version = pLVar11->_version;
              LStack_6._current = pLVar11->_current;
              LStack_9._version = 0;
              uStack_1 = 1;
              LStack_9._current = (RegexCharClass_SingleRange)e;
              while (bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System
                             ::Text::RegularExpressions::RegexCharClass+SingleRange]::
                             List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                                       (&LStack_6,
                                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                                       ), worldObjectID = LStack_6._current, bVar12 != 0) {
                pMVar13 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                   ((MethodInfo *)0x0);
                if (pMVar13 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
                method_00.First = 0;
                method_00.Last = 0;
                MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_LockHierarchy
                          (pMVar13,(int32_t)worldObjectID,0,(MethodInfo *)0x0);
              }
              uStack_1 = 0xffffffff;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                        ((Object *)e,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__
                         ,(MethodInfo *)method_00);
              uStack_1 = 0xffffffff;
              pMVar13 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                 ((MethodInfo *)0x0);
              if (pMVar13 != (MVNetworkGame_OperationRequests *)0x0) {
                MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TransferOwnership
                          (pMVar13,(this->fields).createGroupId,0,(Transform *)0x0,(MethodInfo *)0x0)
                ;
                (this->fields).state = 2;
                goto code_?;
              }
            }
          }
        }
      }
    }
    else {
      if ((iVar7 != 2) || ((this->fields).responseReceived == 0)) goto code_?;
      if (e != (EditorStateMachine *)0x0) {
        EditorStateMachine::EditorStateMachine_SelectWO
                  (e,(this->fields).createGroupId,0,1,(MethodInfo *)0x0);
        (e->fields)._.lockState = 0;
        FSMEntity::FSMEntity_PopState((FSMEntity *)e,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
  }
  else if (e != (EditorStateMachine *)0x0) {
    (e->fields)._.lockState = 0;
    FSMEntity::FSMEntity_PopState((FSMEntity *)e,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
code_?:
  func_?();
  func_?();
code_?:
  LStack_9._index._0_2_ = LStack_9._current.First;
  LStack_9._index._2_2_ = LStack_9._current.Last;
  LStack_9._list = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)e;
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
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
        this_00 = (UnityAction_2_System_Object_System_Object_ *)func_?();
        if (this_00 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (this_00,(Object *)this,
                     MethodInfo__ESWaitForGroup__WOCM_InitializedGameQueryData_System__Object__InitializedGameQueryDataEventArgs_
                     ,(MethodInfo *)0x0);
          pDVar6 = mscorlib.dll::System::Delegate::Delegate_Remove
                             ((Delegate *)pEVar5,(Delegate *)this_00,(MethodInfo *)0x0);
          if (pDVar6 == (Delegate *)0x0) {
            (pWVar4->fields)._.InitializedGameQueryData =
                 (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0;
code_?:
            func_?();
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                      ((Object *)StringLiteral_Received_group,(MethodInfo *)0x0);
            return;
          }
          pEVar5 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)func_?();
          if (pEVar5 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
            (pWVar4->fields)._.InitializedGameQueryData = pEVar5;
            iVar7 = func_?();
            if (iVar7 != 0) goto code_?;
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
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
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_WOCM_OnHierarchyLockedResponse,(MethodInfo *)0x0);
  if (e != (OnHierarchyLockedEventArgs *)0x0) {
    unaff_EDI = (RegexCharClass_SingleRange)this;
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
        LStack_6._list = pLVar7->_list;
        LStack_6._index = pLVar7->_index;
        LStack_6._version = pLVar7->_version;
        LStack_6._current = pLVar7->_current;
        LStack_8._version = 0;
        uStack_1 = 1;
        LStack_8._current = (RegexCharClass_SingleRange)&LStack_6;
        while (bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Text
                       ::RegularExpressions::RegexCharClass+SingleRange]::
                       List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                                 (&LStack_6,
                                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                                 ), unaff_EDI = LStack_6._current, bVar9 != 0) {
          this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          if (this_00 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
          method_00 = (MethodInfo *)0x0;
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_LockHierarchy
                    (this_00,(int32_t)unaff_EDI,0,(MethodInfo *)0x0);
        }
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)&LStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__,
                   method_00);
        uStack_1 = 0xffffffff;
        (this->fields).abort = 1;
        pMVar10 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        unaff_EDI = (RegexCharClass_SingleRange)this;
        if (pMVar10 != (MVWorldObjectClientManager *)0x0) {
          LStack_8._current =
               (RegexCharClass_SingleRange)(pMVar10->fields).OnHierarchyLockedResponse;
          e = (OnHierarchyLockedEventArgs *)func_?();
          if ((UnityAction_2_System_Object_System_Object_ *)e !=
              (UnityAction_2_System_Object_System_Object_ *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)e,(Object *)this,
                       MethodInfo__ESWaitForGroup__WOCM_OnHierarchyLockedResponse_System__Object__OnHierarchyLockedEventArgs_
                       ,(MethodInfo *)0x0);
            unaff_EDI = (RegexCharClass_SingleRange)
                        mscorlib.dll::System::Delegate::Delegate_Remove
                                  ((Delegate *)LStack_8._current,(Delegate *)e,(MethodInfo *)0x0);
            if (unaff_EDI != (RegexCharClass_SingleRange)0x0) goto code_?;
code_?:
            (pMVar10->fields).OnHierarchyLockedResponse =
                 (EventHandler_1_OnHierarchyLockedEventArgs_ *)0x0;
            LStack_8._index = 0;
code_?:
            LStack_8._list =
                 (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 &(pMVar10->fields).OnHierarchyLockedResponse;
            func_?();
code_?:
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
    else {
      piVar11 = &(this->fields).lockCount;
      *piVar11 = *piVar11 + -1;
      if (*piVar11 != 0) goto code_?;
      (this->fields).responseReceived = 1;
      pMVar10 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar10 != (MVWorldObjectClientManager *)0x0) {
        LStack_8._current = (RegexCharClass_SingleRange)(pMVar10->fields).OnHierarchyLockedResponse;
        e = (OnHierarchyLockedEventArgs *)func_?();
        if ((UnityAction_2_System_Object_System_Object_ *)e !=
            (UnityAction_2_System_Object_System_Object_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)e,(Object *)this,
                     MethodInfo__ESWaitForGroup__WOCM_OnHierarchyLockedResponse_System__Object__OnHierarchyLockedEventArgs_
                     ,(MethodInfo *)0x0);
          unaff_EDI = (RegexCharClass_SingleRange)
                      mscorlib.dll::System::Delegate::Delegate_Remove
                                ((Delegate *)LStack_8._current,(Delegate *)e,(MethodInfo *)0x0);
          if (unaff_EDI == (RegexCharClass_SingleRange)0x0) goto code_?;
code_?:
          e = (OnHierarchyLockedEventArgs *)
              TypeInfo__System__EventHandler<OnHierarchyLockedEventArgs>;
          LStack_8._index = (int32_t)TypeInfo__System__EventHandler<OnHierarchyLockedEventArgs>;
          LStack_8._list =
               (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)unaff_EDI;
          pEVar12 = (EventHandler_1_OnHierarchyLockedEventArgs_ *)func_?();
          if (pEVar12 == (EventHandler_1_OnHierarchyLockedEventArgs_ *)0x0) goto code_?;
          (pMVar10->fields).OnHierarchyLockedResponse = pEVar12;
          LStack_8._index = (int32_t)TypeInfo__System__EventHandler<OnHierarchyLockedEventArgs>;
          e = (OnHierarchyLockedEventArgs *)
              TypeInfo__System__EventHandler<OnHierarchyLockedEventArgs>;
          LStack_8._list =
               (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)unaff_EDI;
          LStack_8._index = func_?();
          if (LStack_8._index == 0) goto code_?;
          goto code_?;
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
code_?:
  LStack_8._index = (int32_t)e;
  LStack_8._list = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)unaff_EDI;
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
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
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    pEVar2 = (pMVar1->fields).OnTransferWosResponse;
    this_00 = (UnityAction_2_System_Object_System_Object_ *)
              func_?(TypeInfo__System__EventHandler<OnTransferWosResponseEventArgs>);
    if (this_00 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__ESWaitForGroup__WOCM_OnTransferWosResponse_System__Object__OnTransferWosResponseEventArgs_
                 ,(MethodInfo *)0x0);
      pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pEVar2,(Delegate *)this_00,(MethodInfo *)0x0);
      if (pDVar3 == (Delegate *)0x0) {
        (pMVar1->fields).OnTransferWosResponse =
             (EventHandler_1_OnTransferWosResponseEventArgs_ *)0x0;
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
      goto code_?;
    }
  }
  func_?();
code_?:
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
  if (this_00 != (List_1_System_Int32_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<int>__List__);
    (this->fields).lockList = this_00;
    func_?(&(this->fields).lockList,this_00);
    (this->fields).createGroupId = -1;
    ESStateBase::ESStateBase__ctor((ESStateBase *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


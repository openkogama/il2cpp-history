
/* Void CreateGroup(EditorStateMachine) */

void Assembly-CSharp.dll::ESWaitForGroup::ESWaitForGroup_CreateGroup
               (ESWaitForGroup *this,EditorStateMachine *e,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa0;
  puVar5 = &stack0xffffffa0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  customData = (List_1_UnityEngine_Vector4___Class *)0x0;
  func_?();
  puStack_6 = (undefined4 *)&stack0xffffffa0;
  puStack_4 = &stack0xffffffa0;
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Transform>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__List__)
  ;
  pLStack_7 = this_00;
  if (((e != (EditorStateMachine *)0x0) &&
      (pSVar8 = (e->fields).selectionController, pSVar8 != (SelectionController *)0x0)) &&
     (this_01 = SelectionController::SelectionController_get_SelectedWOs(pSVar8,(MethodInfo *)0x0),
     this_01 != (HashSet_1_MVWorldObjectClient_ *)0x0)) {
    System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::MetaData::
    FirstTimeEvent]::HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent__GetEnumerator
              ((HashSet_1_T_Enumerator_MV_WorldObject_MetaData_FirstTimeEvent_ *)auStack_9,
               (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)this_01,
               MethodInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>__GetEnumerator__
              );
    uStack_1 = 0;
    while (cVar10 = func_?(), cVar10 != '\0') {
      this_02 = (PrefabPool *)
                mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                           &stack0xffffffac,
                           MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                          );
      if ((this_02 == (PrefabPool *)0x0) ||
         (item = PrefabPool::PrefabPool_get_MVPointLightPrefab(this_02,(MethodInfo *)0x0),
         this_00 == (List_1_UnityEngine_Vector4_ *)0x0)) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)item,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__Add_UnityEngine__Transform_
                );
    }
    *puStack_6 = 0x4a;
    uStack_1 = 0xffffffff;
    func_?(&stack0xffffffac,
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                   );
    if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
      func_?(TypeInfo__SharedCubeFunctions);
    }
    pVVar11 = SharedCubeFunctions::SharedCubeFunctions_GetWorldCenter
                       ((Vector3 *)(auStack_9 + 4),(List_1_UnityEngine_Transform_ *)this_00,
                        (MethodInfo *)0x0);
    uStack_12._0_4_ = pVVar11->x;
    uStack_12._4_4_ = pVVar11->y;
    puStack_6 = (undefined4 *)pVVar11->z;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((this_03 != (MVNetworkGame *)0x0) &&
       (pLStack_7 = (List_1_UnityEngine_Vector4_ *)
                     CloudyTheme::CloudyTheme_get_Identifier
                               ((CloudyTheme *)this_03,(MethodInfo *)0x0),
       pLStack_7 != (List_1_UnityEngine_Vector4_ *)0x0)) {
      customData = pLStack_7[1].klass;
      this_04 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_04,(Object *)this,
                 MethodInfo__ESWaitForGroup__WOCM_InitializedGameQueryData_System__Object__InitializedGameQueryDataEventArgs_
                 ,
                 MethodInfo__System__EventHandler<InitializedGameQueryDataEventArgs>__EventHandler_System__Object__void__
                );
      pLVar13 = (List_1_UnityEngine_Vector4___Class *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)customData,(Delegate *)this_04,(MethodInfo *)0x0);
      pLVar14 = (List_1_UnityEngine_Vector4___Class *)0x0;
      if (pLVar13 != (List_1_UnityEngine_Vector4___Class *)0x0) {
        if ((EventHandler_1_InitializedGameQueryDataEventArgs___Class *)(pLVar13->_0).image ==
            TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>) {
          pLVar14 = pLVar13;
        }
        if (pLVar14 == (List_1_UnityEngine_Vector4___Class *)0x0) {
          func_?();
          goto code_?;
        }
      }
      pLStack_7[1].klass = pLVar14;
      this_05 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if ((e != (EditorStateMachine *)0x0) &&
         (pSVar8 = (e->fields).selectionController, pSVar8 != (SelectionController *)0x0)) {
        groupId = SelectionController::SelectionController_get_ParentGroupID
                            (pSVar8,(MethodInfo *)0x0);
        customData = (List_1_UnityEngine_Vector4___Class *)func_?();
        System.Core.dll::System::Collections::Generic::
        HashSet`1[AvatarModifierPackage+AvatarModifier]::
        HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                  ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)customData,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Quaternion);
        }
        pQVar15 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                           ((Quaternion *)auStack_9,(MethodInfo *)0x0);
        auStack_9._0_4_ = pQVar15->x;
        auStack_9._4_4_ = pQVar15->y;
        fStack_16 = pQVar15->z;
        fStack_17 = pQVar15->w;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                           (&VStack_18,(MethodInfo *)0x0);
        if (this_05 != (MVNetworkGame_OperationRequests *)0x0) {
          position.z = (float)puStack_6;
          position.x = (float)(undefined4)uStack_12;
          position.y = (float)uStack_12._4_4_;
          rotation.y = (float)auStack_9._4_4_;
          rotation.x = (float)auStack_9._0_4_;
          rotation.z = fStack_16;
          rotation.w = fStack_17;
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_RequestBuiltInItem
                    (this_05,BuiltInItem__Enum_Group,groupId,
                     (Dictionary_2_System_Object_System_Object_ *)customData,position,rotation,
                     *pVVar11,1,1,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
  }
code_?:
  func_?();
  func_?(customData,0,0);
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if (e != (EditorStateMachine *)0x0) {
    pSVar4 = (e->fields).selectionController;
    (e->fields)._.lockState = 1;
    if ((pSVar4 != (SelectionController *)0x0) &&
       (pEVar5 = (Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                  *)mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                    Collection_1_VoxelHit__get_Items
                              ((Collection_1_VoxelHit_ *)pSVar4,(MethodInfo *)0x0),
       pEVar5 != (Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                  *)0x0)) {
      JVar6 = System.Core.dll::System::Linq::
              Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
              JsonSchemaType]::
              Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                        (pEVar5,MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__)
      ;
      if (JVar6 == JsonSchemaType__Enum_None) {
code_?:
        (e->fields)._.lockState = 0;
        FSMEntity::FSMEntity_PopState((FSMEntity *)e,(MethodInfo *)0x0);
code_?:
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      pSVar4 = (e->fields).selectionController;
      if ((pSVar4 != (SelectionController *)0x0) &&
         (pEVar5 = (Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                    *)mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                      Collection_1_VoxelHit__get_Items
                                ((Collection_1_VoxelHit_ *)pSVar4,(MethodInfo *)0x0),
         pEVar5 != (Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                    *)0x0)) {
        JVar6 = System.Core.dll::System::Linq::
                Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
                JsonSchemaType]::
                Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                          (pEVar5,
                           MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__);
        if (JVar6 == JsonSchemaType__Enum_String) goto code_?;
        this_02 = (List_1_UnityEngine_Vector4_ *)func_?();
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
        List_1_UnityEngine_Vector4___ctor
                  (this_02,MethodInfo__System__Collections__Generic__List<int>__List__);
        (this->fields).lockList = (List_1_System_Int32_ *)this_02;
        (this->fields).state = 0;
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar7 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar7 != (MVWorldObjectClientManager *)0x0) {
          pEVar8 = (pMVar7->fields).OnHierarchyLockedResponse;
          method_00 = (MethodInfo *)&UNK_?;
          this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (this_03,(Object *)this,
                     MethodInfo__ESWaitForGroup__WOCM_OnHierarchyLockedResponse_System__Object__OnHierarchyLockedEventArgs_
                     ,
                     MethodInfo__System__EventHandler<OnHierarchyLockedEventArgs>__EventHandler_System__Object__void__
                    );
          pEVar9 = (EventHandler_1_OnHierarchyLockedEventArgs_ *)
                   mscorlib.dll::System::Delegate::Delegate_Combine
                             ((Delegate *)pEVar8,(Delegate *)this_03,(MethodInfo *)0x0);
          pEVar8 = (EventHandler_1_OnHierarchyLockedEventArgs_ *)0x0;
          if (pEVar9 != (EventHandler_1_OnHierarchyLockedEventArgs_ *)0x0) {
            if (pEVar9->klass == TypeInfo__System__EventHandler<OnHierarchyLockedEventArgs>) {
              pEVar8 = pEVar9;
            }
            if (pEVar8 == (EventHandler_1_OnHierarchyLockedEventArgs_ *)0x0) goto code_?;
          }
          (pMVar7->fields).OnHierarchyLockedResponse = pEVar8;
          pSVar4 = (e->fields).selectionController;
          if ((pSVar4 != (SelectionController *)0x0) &&
             (this_04 = (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)
                        mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                        Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)pSVar4,method_00)
             , this_04 != (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0)) {
            System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::MetaData::
            FirstTimeEvent]::HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent__GetEnumerator
                      ((HashSet_1_T_Enumerator_MV_WorldObject_MetaData_FirstTimeEvent_ *)
                       &stack0xffffffc0,this_04,
                       MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
            uStack_1 = 0;
            while (cVar10 = func_?(), cVar10 != '\0') {
              pOVar11 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                       ::Serialization::JsonProperty]::
                       Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                 ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                  &stack0xffffffd0,
                                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                                 );
              this_00 = (List_1_UIPushOption_ *)(this->fields).lockList;
              if (this_00 == (List_1_UIPushOption_ *)0x0) goto code_?;
              mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
              List_1_UIPushOption__Add
                        (this_00,(UIPushOption__Enum)pOVar11,
                         MethodInfo__System__Collections__Generic__List<int>__Add_int_);
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?();
              }
              this_05 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                  ((MethodInfo *)0x0);
              if (this_05 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
              MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_LockHierarchy
                        (this_05,(int32_t)pOVar11,1,(MethodInfo *)0x0);
            }
            uStack_1 = 0xffffffff;
            func_?(&stack0xffffffd0,
                            MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                           );
            this_01 = (this->fields).lockList;
            if (this_01 != (List_1_System_Int32_ *)0x0) {
              pOVar11 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                       ::Serialization::JsonProperty]::
                       Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                 ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                  this_01,
                                  MethodInfo__System__Collections__Generic__List<int>__get_Count__);
              (this->fields).lockCount = (int32_t)pOVar11;
              goto code_?;
            }
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
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_6.monitor = (MonitorData *)0x0;
  CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_6.fields.syncRoot = (Object *)0x0;
  func_?();
  if ((this->fields).abort != 0) {
    puStack_7 = (undefined4 *)&stack0xffffffb8;
    puStack_4 = &stack0xffffffb8;
    if (e != (EditorStateMachine *)0x0) {
      (e->fields)._.lockState = 0;
      puStack_7 = (undefined4 *)&stack0xffffffb8;
      puStack_4 = &stack0xffffffb8;
      FSMEntity::FSMEntity_PopState((FSMEntity *)e,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    goto code_?;
  }
  iVar8 = (this->fields).state;
  if (iVar8 == 0) {
    if ((this->fields).responseReceived == 0) goto code_?;
    puStack_7 = (undefined4 *)&stack0xffffffb8;
    puStack_4 = &stack0xffffffb8;
    ESWaitForGroup_CreateGroup(this,e,(MethodInfo *)0x0);
    (this->fields).state = 1;
  }
  else {
    if (iVar8 != 1) {
      if ((iVar8 == 2) && ((this->fields).responseReceived != 0)) {
        puStack_7 = (undefined4 *)&stack0xffffffb8;
        puStack_4 = &stack0xffffffb8;
        if ((e != (EditorStateMachine *)0x0) &&
           (this_02 = (e->fields).selectionController, puStack_7 = (undefined4 *)&stack0xffffffb8,
           puStack_4 = &stack0xffffffb8, this_02 != (SelectionController *)0x0)) {
          puStack_7 = (undefined4 *)&stack0xffffffb8;
          puStack_4 = &stack0xffffffb8;
          SelectionController::SelectionController_SelectWO
                    (this_02,(this->fields).createGroupId,0,1,(MethodInfo *)0x0);
          (e->fields)._.lockState = 0;
          FSMEntity::FSMEntity_PopState((FSMEntity *)e,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
    if ((this->fields).responseReceived == 0) goto code_?;
    puStack_7 = (undefined4 *)&stack0xffffffb8;
    puStack_4 = &stack0xffffffb8;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       (puStack_7 = (undefined4 *)&stack0xffffffb8, puStack_4 = &stack0xffffffb8,
       (TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      puStack_7 = (undefined4 *)&stack0xffffffb8;
      puStack_4 = &stack0xffffffb8;
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar9 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar9 == (MVWorldObjectClientManager *)0x0) {
code_?:
      func_?(0);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pEVar11 = (pMVar9->fields).OnTransferWosResponse;
    this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    method_00 = (MethodInfo *)&UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_03,(Object *)this,
               MethodInfo__ESWaitForGroup__WOCM_OnTransferWosResponse_System__Object__OnTransferWosResponseEventArgs_
               ,
               MethodInfo__System__EventHandler<OnTransferWosResponseEventArgs>__EventHandler_System__Object__void__
              );
    pDVar12 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pEVar11,(Delegate *)this_03,(MethodInfo *)0x0);
    pEVar11 = (EventHandler_1_OnTransferWosResponseEventArgs_ *)
             func_?(pDVar12,TypeInfo__System__EventHandler<OnTransferWosResponseEventArgs>);
    (pMVar9->fields).OnTransferWosResponse = pEVar11;
    pMVar13 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    groupId = (this->fields).createGroupId;
    this_00 = (List_1_VoxelHit_ *)(this->fields).lockList;
    if ((this_00 == (List_1_VoxelHit_ *)0x0) ||
       (worldObjects = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
                       List_1_VoxelHit__ToArray
                                 (this_00,
                                  MethodInfo__System__Collections__Generic__List<int>__ToArray__),
       pMVar13 == (MVNetworkGame_OperationRequests *)0x0)) goto code_?;
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TransferWorldObjectsToGroup
              (pMVar13,groupId,(Int32__Array *)worldObjects,method_00);
    this_01 = (List_1_UnityEngine_Color32_ *)(this->fields).lockList;
    if (this_01 == (List_1_UnityEngine_Color32_ *)0x0) goto code_?;
    pLVar14 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_15,this_01,
                        MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
    CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar14->l;
    CStack_6.monitor = (MonitorData *)pLVar14->next;
    CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar14->ver;
    CStack_6.fields.syncRoot = (Object *)(pLVar14->current).rgba;
    uStack_1 = 0;
    while (cVar16 = func_?(), cVar16 != '\0') {
      worldObjectID =
           mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
           Serialization::JsonProperty]::
           Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                     (&CStack_6,
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__get_Current__
                     );
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pMVar13 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (pMVar13 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_LockHierarchy
                (pMVar13,(int32_t)worldObjectID,0,(MethodInfo *)0x0);
    }
    *puStack_7 = 0xf6;
    uStack_1 = 0xffffffff;
    func_?(&CStack_6,
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__)
    ;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar13 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (pMVar13 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TransferOwnership
              (pMVar13,(this->fields).createGroupId,0,(Transform *)0x0,(MethodInfo *)0x0);
    (this->fields).state = 2;
  }
  (this->fields).responseReceived = 0;
code_?:
  *unaff_FS_OFFSET = uStack_3;
  return;
}


/* Void WOCM_InitializedGameQueryData(Object, InitializedGameQueryDataEventArgs) */

void Assembly-CSharp.dll::ESWaitForGroup::ESWaitForGroup_WOCM_InitializedGameQueryData
               (ESWaitForGroup *this,Object *sender,InitializedGameQueryDataEventArgs *e,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((pMVar1 != (MVNetworkGame *)0x0) &&
      (this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
      this_01 != (MVLocalPlayer *)0x0)) &&
     (pSVar2 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
               NamedThemeAttribute_1_UnityEngine_Color__get_Name
                         ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_01,(MethodInfo *)0x0),
     e != (InitializedGameQueryDataEventArgs *)0x0)) {
    if (pSVar2 != (String *)(e->fields).InstigatorActorNumber) {
      return;
    }
    (this->fields).responseReceived = 1;
    this_00 = (e->fields).RootWO;
    if (this_00 != (MVWorldObjectClient *)0x0) {
      pIVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0)
      ;
      (this->fields).createGroupId = (int32_t)pIVar3;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 != (MVNetworkGame *)0x0) &&
         (pSVar2 = CloudyTheme::CloudyTheme_get_Identifier((CloudyTheme *)pMVar1,(MethodInfo *)0x0),
         pSVar2 != (String *)0x0)) {
        pDVar4 = (Delegate *)pSVar2[1].monitor;
        this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_02,(Object *)this,
                   MethodInfo__ESWaitForGroup__WOCM_InitializedGameQueryData_System__Object__InitializedGameQueryDataEventArgs_
                   ,
                   MethodInfo__System__EventHandler<InitializedGameQueryDataEventArgs>__EventHandler_System__Object__void__
                  );
        pDVar5 = mscorlib.dll::System::Delegate::Delegate_Remove
                           (pDVar4,(Delegate *)this_02,(MethodInfo *)0x0);
        pDVar4 = (Delegate *)0x0;
        if (pDVar5 == (Delegate *)0x0) {
code_?:
          pSVar2[1].monitor = (MonitorData *)pDVar4;
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                    ((Object *)StringLiteral_Received_group,(MethodInfo *)0x0);
          return;
        }
        if ((EventHandler_1_InitializedGameQueryDataEventArgs___Class *)pDVar5->klass ==
            TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>) {
          pDVar4 = pDVar5;
        }
        if (pDVar4 != (Delegate *)0x0) goto code_?;
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6.klass = (List_1_UnityEngine_Color32___Class *)0x0;
  LStack_6.monitor = (MonitorData *)0x0;
  LStack_6.fields._items = (Color32__Array *)0x0;
  LStack_6.fields._size = 0;
  func_?();
  puStack_7 = (undefined4 *)&stack0xffffffb8;
  puStack_4 = &stack0xffffffb8;
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (puStack_7 = (undefined4 *)&stack0xffffffb8, puStack_4 = &stack0xffffffb8,
     (TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    puStack_7 = (undefined4 *)&stack0xffffffb8;
    puStack_4 = &stack0xffffffb8;
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_WOCM_OnHierarchyLockedResponse,(MethodInfo *)0x0);
  if (e == (OnHierarchyLockedEventArgs *)0x0) goto code_?;
  if ((e->fields).success == 0) {
    this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).lockList;
    if (this_00 == (List_1_UnityEngine_Color32_ *)0x0) goto code_?;
    pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_9,this_00,
                        MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
    LStack_6.klass = (List_1_UnityEngine_Color32___Class *)pLVar8->l;
    LStack_6.monitor = (MonitorData *)pLVar8->next;
    LStack_6.fields._items = (Color32__Array *)pLVar8->ver;
    LStack_6.fields._size = (pLVar8->current).rgba;
    uStack_1 = 0;
    while( true ) {
      auStack_9._4_4_ =
           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__;
      auStack_9._0_4_ = &LStack_6;
      cVar10 = func_?();
      if (cVar10 == '\0') break;
      worldObjectID =
           mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
           Serialization::JsonProperty]::
           Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                     ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)&LStack_6,
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__get_Current__
                     );
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_01 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_LockHierarchy
                (this_01,(int32_t)worldObjectID,0,(MethodInfo *)0x0);
    }
    *puStack_7 = 0x6c;
    uStack_1 = 0xffffffff;
    func_?(&LStack_6,
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__)
    ;
    (this->fields).abort = 1;
    if (((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) {
      uVar11 = (TypeInfo__MVGameControllerBase->_1).cctor_started;
      goto code_?;
    }
  }
  else {
    piVar12 = &(this->fields).lockCount;
    *piVar12 = *piVar12 + -1;
    if (*piVar12 != 0) goto code_?;
    (this->fields).responseReceived = 1;
    if (((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) {
      uVar11 = (TypeInfo__MVGameControllerBase->_1).cctor_started;
code_?:
      if (uVar11 == 0) {
        func_?(TypeInfo__MVGameControllerBase);
      }
    }
  }
  pMVar13 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar13 == (MVWorldObjectClientManager *)0x0) {
code_?:
    func_?();
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pEVar15 = (pMVar13->fields).OnHierarchyLockedResponse;
  this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_02,(Object *)this,
             MethodInfo__ESWaitForGroup__WOCM_OnHierarchyLockedResponse_System__Object__OnHierarchyLockedEventArgs_
             ,
             MethodInfo__System__EventHandler<OnHierarchyLockedEventArgs>__EventHandler_System__Object__void__
            );
  auStack_9._12_4_ =
       mscorlib.dll::System::Delegate::Delegate_Remove
                 ((Delegate *)pEVar15,(Delegate *)this_02,(MethodInfo *)0x0);
  LStack_6.klass =
       (List_1_UnityEngine_Color32___Class *)
       TypeInfo__System__EventHandler<OnHierarchyLockedEventArgs>;
  pEVar15 = (EventHandler_1_OnHierarchyLockedEventArgs_ *)0x0;
  if ((EventHandler_1_OnHierarchyLockedEventArgs_ *)auStack_9._12_4_ !=
      (EventHandler_1_OnHierarchyLockedEventArgs_ *)0x0) {
    if (((EventHandler_1_OnHierarchyLockedEventArgs_ *)auStack_9._12_4_)->klass ==
        TypeInfo__System__EventHandler<OnHierarchyLockedEventArgs>) {
      pEVar15 = (EventHandler_1_OnHierarchyLockedEventArgs_ *)auStack_9._12_4_;
    }
    if (pEVar15 == (EventHandler_1_OnHierarchyLockedEventArgs_ *)0x0) {
      auStack_9._8_4_ = &UNK_?;
      func_?();
      goto code_?;
    }
  }
  (pMVar13->fields).OnHierarchyLockedResponse = pEVar15;
code_?:
  *unaff_FS_OFFSET = uStack_3;
  return;
}


/* Void WOCM_OnTransferWosResponse(Object, OnTransferWosResponseEventArgs) */

void Assembly-CSharp.dll::ESWaitForGroup::ESWaitForGroup_WOCM_OnTransferWosResponse
               (ESWaitForGroup *this,Object *sender,OnTransferWosResponseEventArgs *e,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).responseReceived = 1;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    pEVar2 = (pMVar1->fields).OnTransferWosResponse;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__EventHandler<OnTransferWosResponseEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,
               MethodInfo__ESWaitForGroup__WOCM_OnTransferWosResponse_System__Object__OnTransferWosResponseEventArgs_
               ,
               MethodInfo__System__EventHandler<OnTransferWosResponseEventArgs>__EventHandler_System__Object__void__
              );
    pEVar3 = (EventHandler_1_OnTransferWosResponseEventArgs_ *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pEVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    pEVar2 = (EventHandler_1_OnTransferWosResponseEventArgs_ *)0x0;
    if (pEVar3 != (EventHandler_1_OnTransferWosResponseEventArgs_ *)0x0) {
      if (pEVar3->klass == TypeInfo__System__EventHandler<OnTransferWosResponseEventArgs>) {
        pEVar2 = pEVar3;
      }
      pEStack4 = TypeInfo__System__EventHandler<OnTransferWosResponseEventArgs>;
      if (pEVar2 == (EventHandler_1_OnTransferWosResponseEventArgs_ *)0x0) goto code_?;
    }
    (pMVar1->fields).OnTransferWosResponse = pEVar2;
    return;
  }
  func_?(0);
  pEStack4 = extraout_EDX;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<int>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_01,MethodInfo__System__Collections__Generic__List<int>__List__);
  (this->fields).lockList = (List_1_System_Int32_ *)this_01;
  (this->fields).createGroupId = -1;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pWVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                     ((MethodInfo *)0x0);
  (in_stack_2->fields).state = (int32_t)pWVar1;
  ScaleAnimationBase::ScaleAnimationBase_Play(in_stack_2,0.0,unaff_EDI);
  if ((((uint)(TypeInfo__LoggerManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__LoggerManager->_1).cctor_started == 0)) {
    func_?();
  }
  this_00 = LoggerManager::LoggerManager_get_Instance((MethodInfo *)0x0);
  type = mscorlib.dll::System::Object::Object_GetType((Object *)in_stack_2,(MethodInfo *)0x0)
  ;
  if (this_00 != (LoggerManager *)0x0) {
    pIVar3 = LoggerManager::LoggerManager_GetLogger(this_00,type,(MethodInfo *)0x0);
    (in_stack_2->fields).originalScale.x = (float)pIVar3;
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


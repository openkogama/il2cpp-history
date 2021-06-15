
/* Void DeSelectAll() */

void Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_DeSelectAll
               (EditorStateMachine *this,MethodInfo *method)

{
  object = (this->fields).selectionController;
  if (object == (SelectionController *)0x0) {
    uStack_1 = 0;
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_1 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xffffffb4;
  puVar6 = &stack0xffffffb4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar6 = puStack_5;
  }
  puStack_5 = puVar6;
  CStack_7.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_7.monitor = (MonitorData *)0x0;
  CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_7.fields.syncRoot = (Object *)0x0;
  func_?();
  this_00 = (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)(object->fields).selectedIDs;
  puStack_8 = (undefined4 *)&stack0xffffffb4;
  puStack_5 = &stack0xffffffb4;
  if (this_00 != (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0) {
    puStack_8 = (undefined4 *)&stack0xffffffb4;
    puStack_5 = &stack0xffffffb4;
    pHVar9 = System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::MetaData::
             FirstTimeEvent]::HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent__GetEnumerator
                       (&HStack_10,this_00,
                        MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    CStack_7.klass =
         (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pHVar9->hashset;
    CStack_7.monitor = (MonitorData *)pHVar9->next;
    CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pHVar9->stamp;
    CStack_7.fields.syncRoot = (Object *)pHVar9->current;
    uStack_1 = 0;
    while( true ) {
      HStack_10.hashset =
           (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)
           MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__;
      cVar11 = func_?();
      if (cVar11 == '\0') break;
      id = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
           Serialization::JsonProperty]::
           Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                     (&CStack_7,
                      MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                     );
      pOStack_12 = id;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pMVar13 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if ((pMVar13 == (MVWorldObjectClientManager *)0x0) ||
         (pMVar14 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                             (pMVar13,(int32_t)id,(MethodInfo *)0x0), pMVar14 == (MVWorldObject *)0x0)
         ) goto code_?;
      (*pMVar14->klass[1].vtable.IsSingletonObject.methodPtr)();
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar13 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      HStack_10.hashset =
           (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)
           TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>;
      unaff_EDI = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (unaff_EDI,(Object *)object,
                 MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
                 ,
                 MethodInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>__Action_System__Object__void__
                );
      if (pMVar13 == (MVWorldObjectClientManager *)0x0) goto code_?;
      MVWorldObjectClientManager::MVWorldObjectClientManager_UnsubscribeWODestroyedEvent
                (pMVar13,(int32_t)pOStack_12,
                 (Action_2_Object_WorldObjectDestroyedEventArgs_ *)unaff_EDI,(MethodInfo *)0x0);
    }
    unaff_EDI = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)0x0;
    *puStack_8 = 0x61;
    uStack_1 = 0xffffffff;
    func_?(&CStack_7,
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                   );
    this_01 = (HashSet_1_UnityEngine_Vector3_ *)(object->fields).selectedIDs;
    if (this_01 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
      HashSet_1_UnityEngine_Vector3__Clear
                (this_01,MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
      *unaff_FS_OFFSET = uStack_4;
      return;
    }
  }
code_?:
  func_?(0);
  func_?(unaff_EDI,0,0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void DeSelectAllExcept(Int32) */

void Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_DeSelectAllExcept
               (EditorStateMachine *this,int32_t id,MethodInfo *method)

{
  this_03 = (this->fields).selectionController;
  if (this_03 == (SelectionController *)0x0) {
    uStack_1 = 0;
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_1 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xffffffac;
  puVar6 = &stack0xffffffac;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar6 = puStack_5;
  }
  puStack_5 = puVar6;
  CStack_7.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_7.monitor = (MonitorData *)0x0;
  CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_7.fields.syncRoot = (Object *)0x0;
  func_?();
  method_00 = TypeInfo__SelectionController___DeSelectAllExcept_c__AnonStorey0;
  puStack_8 = (undefined4 *)&stack0xffffffac;
  puStack_5 = &stack0xffffffac;
  this_04 = (ScaleAnimationBase *)func_?();
  pSStack_9 = this_04;
  ScaleAnimationBase::ScaleAnimationBase_Play(this_04,0.0,(MethodInfo *)method_00);
  pSStack_10 = this_04;
  if (this_04 != (ScaleAnimationBase *)0x0) {
    (this_04->fields)._._._._.m_CachedPtr = (void *)id;
    this_00 = (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)(this_03->fields).selectedIDs;
    if (this_00 != (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)0x0) {
      bVar11 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds::Api::
              NativeAdType]::HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                        (this_00,id,
                         MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
      if (bVar11 == 0) {
        SelectionController::SelectionController_DeSelectAll(this_03,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_4;
        return;
      }
      this_01 = (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)(this_03->fields).selectedIDs;
      if (this_01 != (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0) {
        pHVar12 = System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::MetaData
                 ::FirstTimeEvent]::HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent__GetEnumerator
                           ((HashSet_1_T_Enumerator_MV_WorldObject_MetaData_FirstTimeEvent_ *)
                            &stack0xffffffb8,this_01,
                            MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__)
        ;
        CStack_7.monitor = (MonitorData *)pHVar12->next;
        CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pHVar12->stamp
        ;
        CStack_7.fields.syncRoot = (Object *)pHVar12->current;
        uStack_1 = 0;
        while( true ) {
          CStack_7.klass =
               (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)
               MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__;
          cVar13 = func_?();
          if (cVar13 == '\0') break;
          this_04 = (ScaleAnimationBase *)
                    mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                    Serialization::JsonProperty]::
                    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                              (&CStack_7,
                               MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                              );
          pSStack_14 = this_04;
          if (this_04 != (pSStack_9->fields)._._._._.m_CachedPtr) {
            this_05 = SelectionController::SelectionController_get_WOCM(this_03,(MethodInfo *)0x0);
            if ((this_05 == (MVWorldObjectClientManager *)0x0) ||
               (pMVar15 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                   (this_05,(int32_t)this_04,(MethodInfo *)id),
               pMVar15 == (MVWorldObject *)0x0)) goto code_?;
            func_?();
            id = (int32_t)SelectionController::SelectionController_get_WOCM
                                    (this_03,(MethodInfo *)0x0);
            pUVar16 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar16,(Object *)this_03,
                       MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
                       ,
                       MethodInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>__Action_System__Object__void__
                      );
            this_04 = (ScaleAnimationBase *)0x0;
            if ((MVWorldObjectClientManager *)id == (MVWorldObjectClientManager *)0x0)
            goto code_?;
            MVWorldObjectClientManager::MVWorldObjectClientManager_UnsubscribeWODestroyedEvent
                      ((MVWorldObjectClientManager *)id,(int32_t)pSStack_14,
                       (Action_2_Object_WorldObjectDestroyedEventArgs_ *)pUVar16,(MethodInfo *)0x0);
          }
        }
        *puStack_8 = 0x9b;
        uStack_1 = 0xffffffff;
        func_?(&CStack_7,
                        MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                       );
        this_02 = (this_03->fields).selectedIDs;
        pUVar16 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(TypeInfo__System__Predicate<int>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar16,(Object *)pSStack_9,
                   MethodInfo__SelectionController___DeSelectAllExcept_c__AnonStorey0____m__0_int_,
                   MethodInfo__System__Predicate<int>__Predicate_System__Object__void__);
        this_04 = (ScaleAnimationBase *)0x0;
        if (this_02 != (HashSet_1_System_Int32_ *)0x0) {
          System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
          HashSet_1_System_Int32__RemoveWhere
                    (this_02,(Predicate_1_Int32_ *)pUVar16,
                     MethodInfo__System__Collections__Generic__HashSet<int>__RemoveWhere_System__Predicate<int>_
                    );
          *unaff_FS_OFFSET = uStack_4;
          return;
        }
      }
    }
  }
code_?:
  func_?();
  func_?(this_04,0,0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void DeSelectWorldObject(MVWorldObjectClient) */

void Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_DeSelectWorldObject
               (EditorStateMachine *this,MVWorldObjectClient *wo,MethodInfo *method)

{
  object = (this->fields).selectionController;
  if (object == (SelectionController *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (wo != (MVWorldObjectClient *)0x0) {
    (*(code *)(wo->klass->vtable).DeSelect.method)(wo,(wo->klass->vtable).AddPreviewBox.methodPtr);
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)wo,(MethodInfo *)0x0);
    this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_02,(Object *)object,
               MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
               ,
               MethodInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>__Action_System__Object__void__
              );
    if (this_01 != (MVWorldObjectClientManager *)0x0) {
      MVWorldObjectClientManager::MVWorldObjectClientManager_UnsubscribeWODestroyedEvent
                (this_01,(int32_t)pIVar2,(Action_2_Object_WorldObjectDestroyedEventArgs_ *)this_02,
                 (MethodInfo *)0x0);
      this_00 = (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)(object->fields).selectedIDs;
      pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)wo,(MethodInfo *)0x0);
      if (this_00 != (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0) {
        System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::MetaData::
        FirstTimeEvent]::HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent__Remove
                  (this_00,(FirstTimeEvent__Enum)pIVar2,
                   MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_);
        return;
      }
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void EnterGroup(MVGroup) */

void Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_EnterGroup
               (EditorStateMachine *this,MVGroup *group,MethodInfo *method)

{
  this_00 = (this->fields).selectionController;
  if (this_00 != (SelectionController *)0x0) {
    SelectionController::SelectionController_DeSelectAll(this_00,(MethodInfo *)0x0);
    SelectionController::SelectionController_PushWOParents
              (this_00,(MVWorldObjectClient *)group,1,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Int32 ExitGroup() */

int32_t Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_ExitGroup
                  (EditorStateMachine *this,MethodInfo *method)

{
  this_00 = (this->fields).selectionController;
  if (this_00 == (SelectionController *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  SelectionController::SelectionController_DeSelectAll(this_00,(MethodInfo *)0x0);
  pSVar3 = (this_00->fields).parentGroups;
  if (pSVar3 != (Stack_1_System_Int32_ *)0x0) {
    pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pSVar3,
                        MethodInfo__System__Collections__Generic__Stack<int>__get_Count__);
    if ((int)pOVar4 < 2) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_Trying_to_exit_root_group_,(MethodInfo *)0x0);
      pSVar3 = (this_00->fields).parentGroups;
      if (pSVar3 != (Stack_1_System_Int32_ *)0x0) {
        iVar2 = System.dll::System::Collections::Generic::Stack`1[System::Int32]::
                Stack_1_System_Int32__Peek
                          (pSVar3,MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
        return iVar2;
      }
    }
    else {
      pSVar3 = (this_00->fields).parentGroups;
      if (pSVar3 != (Stack_1_System_Int32_ *)0x0) {
        iVar2 = System.dll::System::Collections::Generic::Stack`1[System::Int32]::
                Stack_1_System_Int32__Pop
                          (pSVar3,MethodInfo__System__Collections__Generic__Stack<int>__Pop__);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_02,(Object *)this_00,
                   MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
                   ,
                   MethodInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>__Action_System__Object__void__
                  );
        if (this_01 != (MVWorldObjectClientManager *)0x0) {
          MVWorldObjectClientManager::MVWorldObjectClientManager_UnsubscribeWODestroyedEvent
                    (this_01,iVar2,(Action_2_Object_WorldObjectDestroyedEventArgs_ *)0x0,
                     (MethodInfo *)0x0);
          return iVar2;
        }
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  iVar2 = (*pcVar1)();
  return iVar2;
}


/* Int32 ExitGroupToRoot() */

int32_t Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_ExitGroupToRoot
                  (EditorStateMachine *this,MethodInfo *method)

{
  this_00 = (this->fields).selectionController;
  if (this_00 == (SelectionController *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  SelectionController::SelectionController_DeSelectAll(this_00,(MethodInfo *)0x0);
  pSVar3 = (this_00->fields).parentGroups;
  do {
    if (pSVar3 == (Stack_1_System_Int32_ *)0x0) {
code_?:
      func_?(0);
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
    pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pSVar3,
                        MethodInfo__System__Collections__Generic__Stack<int>__get_Count__);
    pSVar3 = (this_00->fields).parentGroups;
    if ((int)pOVar4 < 2) {
      if (pSVar3 != (Stack_1_System_Int32_ *)0x0) {
        iVar2 = System.dll::System::Collections::Generic::Stack`1[System::Int32]::
                Stack_1_System_Int32__Peek
                          (pSVar3,MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
        return iVar2;
      }
      goto code_?;
    }
    if (pSVar3 == (Stack_1_System_Int32_ *)0x0) goto code_?;
    System.dll::System::Collections::Generic::Stack`1[System::Int32]::Stack_1_System_Int32__Pop
              (pSVar3,MethodInfo__System__Collections__Generic__Stack<int>__Pop__);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    woID = TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>;
    this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_02,(Object *)this_00,
               MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
               ,
               MethodInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>__Action_System__Object__void__
              );
    if (this_01 == (MVWorldObjectClientManager *)0x0) goto code_?;
    MVWorldObjectClientManager::MVWorldObjectClientManager_UnsubscribeWODestroyedEvent
              (this_01,(int32_t)woID,(Action_2_Object_WorldObjectDestroyedEventArgs_ *)this_02,
               (MethodInfo *)0x0);
    pSVar3 = (this_00->fields).parentGroups;
  } while( true );
}


/* Boolean IsSelected(Int32) */

bool Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_IsSelected
               (EditorStateMachine *this,int32_t id,MethodInfo *method)

{
  this_01 = (this->fields).selectionController;
  if (this_01 == (SelectionController *)0x0) {
    uStack_1 = 0;
    func_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  uStack_1 = 0xffffffff;
  puStack_4 = &DAT_?;
  uStack_5 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_5;
  puStack_6 = &stack0xffffffac;
  puVar7 = &stack0xffffffac;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar7 = puStack_6;
  }
  puStack_6 = puVar7;
  uStack_8 = 0;
  uStack_9 = 0;
  iStack_10 = 0;
  CStack_11.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_11.monitor = (MonitorData *)0x0;
  CStack_11.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_11.fields.syncRoot = (Object *)0x0;
  func_?();
  uStack_12 = 0xffffffff;
  this_00 = (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)(this_01->fields).selectedIDs;
  if (this_00 == (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0) {
    puStack_13 = &stack0xffffffac;
    puStack_6 = &stack0xffffffac;
    func_?(0);
  }
  else {
    puStack_13 = &stack0xffffffac;
    puStack_6 = &stack0xffffffac;
    pHVar14 = System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::MetaData::
             FirstTimeEvent]::HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent__GetEnumerator
                       (&HStack_15,this_00,
                        MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    CStack_11.klass =
         (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pHVar14->hashset;
    CStack_11.monitor = (MonitorData *)pHVar14->next;
    CStack_11.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pHVar14->stamp;
    CStack_11.fields.syncRoot = (Object *)pHVar14->current;
    uStack_1 = 0;
    do {
      cVar16 = func_?();
      if (cVar16 == '\0') goto code_?;
      parentId = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           (&CStack_11,
                            MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                           );
    } while (((Object *)id != parentId) &&
            (bVar3 = SelectionController::SelectionController_IsChildOf
                               (this_01,id,(int32_t)parentId,(MethodInfo *)0x0), bVar3 == 0));
    uStack_8 = 1;
code_?:
    uStack_1 = 0xffffffff;
    func_?();
    if (iStack_10 == 0) {
      *unaff_FS_OFFSET = uStack_5;
      return 0;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* WorldObjectClientRef Select(Boolean, Int32) */

WorldObjectClientRef *
Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_Select
          (EditorStateMachine *this,bool addToSelection,int32_t layerMask,MethodInfo *method)

{
  this_00 = (this->fields).selectionController;
  if (this_00 != (SelectionController *)0x0) {
    pWVar1 = SelectionController::SelectionController_Select
                       (this_00,addToSelection,1,layerMask,(MethodInfo *)0x0);
    return pWVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pWVar1 = (WorldObjectClientRef *)(*pcVar2)();
  return pWVar1;
}


/* WorldObjectClientRef SelectWO(Int32, Boolean, Boolean) */

WorldObjectClientRef *
Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_SelectWO
          (EditorStateMachine *this,int32_t id,bool addToSelection,bool showVisuals,
          MethodInfo *method)

{
  this_01 = (this->fields).selectionController;
  if (this_01 == (SelectionController *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    pWVar2 = (WorldObjectClientRef *)(*pcVar1)();
    return pWVar2;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar3 == (MVWorldObjectClientManager *)0x0) goto code_?;
  this_02 = (MVWorldObjectClient *)
            MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                      (pMVar3,id,(MethodInfo *)0x0);
  if (addToSelection == 0) {
    SelectionController::SelectionController_DeSelectAllExcept(this_01,id,(MethodInfo *)0x0);
  }
  if (this_02 == (MVWorldObjectClient *)0x0) goto code_?;
  pOVar4 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
           TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
           TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                     ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this_02,(MethodInfo *)0x0);
  if (pOVar4 != (Object *)0x0) {
    pSVar5 = (String *)
             UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
             TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
             TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                       ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this_02,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((this_03 == (MVNetworkGame *)0x0) ||
       (this_04 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_03,(MethodInfo *)0x0),
       this_04 == (MVLocalPlayer *)0x0)) goto code_?;
    pSVar6 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
             NamedThemeAttribute_1_UnityEngine_Color__get_Name
                       ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_04,(MethodInfo *)0x0);
    if (pSVar5 != pSVar6) {
      pOVar4 = (Object *)func_?();
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar5 = mscorlib.dll::System::String::String_Concat_1
                         ((Object *)StringLiteral_Trying_to_select_WO_,pOVar4,
                          (Object *)StringLiteral__that_is_owned_by_another_acotr,(MethodInfo *)0x0)
      ;
      goto code_?;
    }
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pSVar7 = (this_01->fields).parentGroups;
  if (pSVar7 == (Stack_1_System_Int32_ *)0x0) goto code_?;
  parentId = System.dll::System::Collections::Generic::Stack`1[System::Int32]::
             Stack_1_System_Int32__Peek
                       (pSVar7,MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
  bVar8 = MVGroup::MVGroup_IsDescendant(parentId,id,(MethodInfo *)0x0);
  if ((bVar8 != 0) ||
     (bVar8 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                        (this_02,InteractionFlags__Enum_DirectlySelectable,(MethodInfo *)0x0),
     bVar8 != 0)) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pSVar7 = (this_01->fields).parentGroups;
    if (pSVar7 != (Stack_1_System_Int32_ *)0x0) {
      pOVar4 = (Object *)
               System.dll::System::Collections::Generic::Stack`1[System::Int32]::
               Stack_1_System_Int32__Peek
                         (pSVar7,MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
      pOVar9 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_02,
                           (MethodInfo *)0x0);
      if (pOVar4 != pOVar9) {
        SelectionController::SelectionController_PushWOParents(this_01,this_02,0,(MethodInfo *)0x0);
      }
      this_00 = (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)(this_01->fields).selectedIDs;
      item = (UnityWebRequest *)
             mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_02,(MethodInfo *)0x0);
      if (this_00 != (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
        System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
        UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
                  (this_00,item,MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        pIVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                  Collection_1_VoxelHit__get_Items
                            ((Collection_1_VoxelHit_ *)this_02,(MethodInfo *)0x0);
        this_05 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_05,(Object *)this_01,
                   MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
                   ,
                   MethodInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>__Action_System__Object__void__
                  );
        if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
          MVWorldObjectClientManager::MVWorldObjectClientManager_SubscribeWODestroyedEvent
                    (pMVar3,(int32_t)pIVar10,
                     (Action_2_Object_WorldObjectDestroyedEventArgs_ *)this_05,(MethodInfo *)0x0);
          if (showVisuals == 0) {
            (*(code *)(this_02->klass->vtable).Select.method)();
          }
          else {
            UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_blue
                      ((Color *)&stack0xffffffe4,(MethodInfo *)0x0);
            (*(code *)(this_02->klass->vtable).Select_1.method)();
          }
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          pIVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                    Collection_1_VoxelHit__get_Items
                              ((Collection_1_VoxelHit_ *)this_02,(MethodInfo *)0x0);
          if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
            pWVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRef
                               (pMVar3,(int32_t)pIVar10,(MethodInfo *)0x0);
            return pWVar2;
          }
        }
      }
    }
    goto code_?;
  }
  args = (Object__Array *)func_?();
  if (args == (Object__Array *)0x0) goto code_?;
  if ((StringLiteral_Trying_to_select_WO_ == (String *)0x0) ||
     (iVar11 = func_?(), iVar11 != 0)) {
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)StringLiteral_Trying_to_select_WO_;
    pOVar4 = (Object *)func_?();
    if ((pOVar4 != (Object *)0x0) && (iVar11 = func_?(), iVar11 == 0)) goto code_?;
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar4;
    if ((StringLiteral__outside_the_parent_group_ != (String *)0x0) &&
       (iVar11 = func_?(), iVar11 == 0)) goto code_?;
    if (args->max_length < 3) goto code_?;
    args->vector[2] = (Object *)StringLiteral__outside_the_parent_group_;
    SelectionController::SelectionController_get_ParentGroupID(this_01,(MethodInfo *)0x0);
    pOVar4 = (Object *)func_?();
    if ((pOVar4 != (Object *)0x0) && (iVar11 = func_?(), iVar11 == 0)) goto code_?;
    if (3 < args->max_length) {
      args->vector[3] = pOVar4;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar5 = mscorlib.dll::System::String::String_Concat_5(args,(MethodInfo *)0x0);
code_?:
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)pSVar5,(MethodInfo *)0x0);
      pWVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                         ((MethodInfo *)0x0);
      return pWVar2;
    }
  }
  else {
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
  }
  func_?();
  func_?();
code_?:
  func_?();
  pcVar1 = (code *)swi(3);
  pWVar2 = (WorldObjectClientRef *)(*pcVar1)();
  return pWVar2;
}


/* WorldObjectClientRef Select(VoxelHit, Boolean) */

WorldObjectClientRef *
Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_Select_1
          (EditorStateMachine *this,VoxelHit hit,bool addToSelection,MethodInfo *method)

{
  this_00 = (this->fields).selectionController;
  if (this_00 != (SelectionController *)0x0) {
    pWVar1 = SelectionController::SelectionController_Select_1(this_00,hit,1,0,unaff_EBP);
    return pWVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pWVar1 = (WorldObjectClientRef *)(*pcVar2)();
  return pWVar1;
}


/* Void Update() */

void Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_Update
               (EditorStateMachine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._.currentState;
  if (pIVar1 != (IState *)0x0) {
    func_?(1,TypeInfo__IState,pIVar1,this);
  }
  return;
}


/* EditorStateMachine(GameObject) */

void Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine__ctor
               (EditorStateMachine *this,GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  (this->fields)._.data = this_00;
  (this->fields)._.clearStack = 1;
  method_00 = TypeInfo__System__Collections__Generic__Stack<EditorEvent>;
  this_01 = (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)func_?();
  UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
  TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
  TweenRunner_1_T_Start_c_Iterator0_FloatTween___ctor
            (this_01,MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Stack__);
  (this->fields)._.stateStack = (Stack_1_EditorEvent_ *)this_01;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  (this->fields).gameObject = gameObject;
  this_02 = (CubeModelingStateMachine *)func_?(TypeInfo__CubeModelingStateMachine);
  CubeModelingStateMachine::CubeModelingStateMachine__ctor(this_02,gameObject,(MethodInfo *)0x0);
  (this->fields).cubeModelingStateMachine = this_02;
  this_03 = (MVNetworkSelector *)func_?(TypeInfo__MVNetworkSelector);
  MVNetworkSelector::MVNetworkSelector__ctor(this_03,this,(MethodInfo *)0x0);
  (this->fields).networkSelector = this_03;
  pSStack1 = TypeInfo__SelectionController;
  this_04 = (SelectionController *)func_?();
  SelectionController::SelectionController__ctor(this_04,(MethodInfo *)0x0);
  (this->fields).selectionController = this_04;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  (this->fields).weCamera = pMVar2;
  (this->fields)._GridMode_k__BackingField = 1;
  return;
}


/* EditorStateMachine(GameObject, Vector3) */

void Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine__ctor_1
               (EditorStateMachine *this,GameObject *gameObject,Vector3 avatarEditModeCenterPos,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  EditorStateMachine__ctor(this,gameObject,(MethodInfo *)0x0);
  this_00 = (CEEditorStateTransitionTableUUI *)
            func_?(TypeInfo__CEEditorStateTransitionTableUUI);
  CEEditorStateTransitionTableUUI::CEEditorStateTransitionTableUUI__ctor
            (this_00,avatarEditModeCenterPos,(MethodInfo *)0x0);
  (this->fields)._.transitionTable = (StateTransitionTable *)this_00;
  return;
}


/* EditorStateMachine(GameObject, ContextMenuController, GizmoController) */

void Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine__ctor_2
               (EditorStateMachine *this,GameObject *gameObject,
               ContextMenuController *contextMenuController,GizmoController *gizmoController,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  EditorStateMachine__ctor(this,gameObject,(MethodInfo *)0x0);
  this_00 = (EditorStateTransitionTable3D *)func_?(TypeInfo__EditorStateTransitionTable3D);
  EditorStateTransitionTable3D::EditorStateTransitionTable3D__ctor
            (this_00,contextMenuController,gizmoController,(MethodInfo *)0x0);
  (this->fields)._.transitionTable = (StateTransitionTable *)this_00;
  return;
}


/* EditorEvent get_CurEvent() */

EditorEvent__Enum
Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_get_CurEvent
          (EditorStateMachine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = (this->fields)._.curEvent;
  if (pOVar1 == (Object *)0x0) {
    func_?(0);
    pOVar1 = extraout_ECX;
    pEVar2 = extraout_EDX;
  }
  else {
    pEVar2 = TypeInfo__EditorEvent;
    if ((pOVar1->klass->_0).element_class == (TypeInfo__EditorEvent->_0).element_class) {
      pEVar3 = (EditorEvent__Enum *)func_?(pOVar1);
      return *pEVar3;
    }
  }
  func_?(pOVar1,pEVar2);
  pcVar4 = (code *)swi(3);
  EVar5 = (*pcVar4)();
  return EVar5;
}


/* Boolean get_GridMode() */

bool Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_get_GridMode
               (EditorStateMachine *this,MethodInfo *method)

{
  return (this->fields)._GridMode_k__BackingField;
}


/* EditorEvent get_NextEvent() */

EditorEvent__Enum
Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_get_NextEvent
          (EditorStateMachine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = (this->fields)._.nextEvent;
  if (pOVar1 == (Object *)0x0) {
    func_?(0);
    pOVar1 = extraout_ECX;
    pEVar2 = extraout_EDX;
  }
  else {
    pEVar2 = TypeInfo__EditorEvent;
    if ((pOVar1->klass->_0).element_class == (TypeInfo__EditorEvent->_0).element_class) {
      pEVar3 = (EditorEvent__Enum *)func_?(pOVar1);
      return *pEVar3;
    }
  }
  func_?(pOVar1,pEVar2);
  pcVar4 = (code *)swi(3);
  EVar5 = (*pcVar4)();
  return EVar5;
}


/* MVGroup get_ParentGroup() */

MVGroup * Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_get_ParentGroup
                    (EditorStateMachine *this,MethodInfo *method)

{
  pSVar1 = (this->fields).selectionController;
  if (pSVar1 == (SelectionController *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    pMVar3 = (MVGroup *)(*pcVar2)();
    return pMVar3;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = (MVGroup__Class *)MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0)
  ;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (pSVar1->fields).parentGroups;
  if (this_00 != (Stack_1_System_Int32_ *)0x0) {
    id = System.dll::System::Collections::Generic::Stack`1[System::Int32]::
         Stack_1_System_Int32__Peek
                   (this_00,MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
    if (this_01 != (MVGroup__Class *)0x0) {
      pMVar3 = (MVGroup *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         ((MVWorldObjectClientManager *)this_01,id,(MethodInfo *)0x0);
      if (pMVar3 == (MVGroup *)0x0) {
        return (MVGroup *)0x0;
      }
      bVar4 = (TypeInfo__MVGroup->_1).naturalAligment;
      if (((pMVar3->klass->_1).naturalAligment < bVar4) ||
         ((MVGroup__Class *)(pMVar3->klass->_1).typeHierarchy[bVar4 - 1] != TypeInfo__MVGroup)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      pMVar6 = (MVGroup *)0x0;
      if (bVar5) {
        pMVar6 = pMVar3;
      }
      this_01 = TypeInfo__MVGroup;
      if (pMVar6 != (MVGroup *)0x0) {
        return pMVar6;
      }
      goto code_?;
    }
  }
  func_?(0);
code_?:
  pMStack7 = this_01;
  func_?();
  pcVar2 = (code *)swi(3);
  pMVar3 = (MVGroup *)(*pcVar2)();
  return pMVar3;
}


/* Int32 get_ParentGroupID() */

int32_t Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_get_ParentGroupID
                  (EditorStateMachine *this,MethodInfo *method)

{
  pSVar1 = (this->fields).selectionController;
  if (pSVar1 == (SelectionController *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    iVar3 = (*pcVar2)();
    return iVar3;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (pSVar1->fields).parentGroups;
  if (this_00 != (Stack_1_System_Int32_ *)0x0) {
    iVar3 = System.dll::System::Collections::Generic::Stack`1[System::Int32]::
            Stack_1_System_Int32__Peek
                      (this_00,MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
    return iVar3;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Boolean get_ParentGroupIsRoot() */

bool Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot
               (EditorStateMachine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).selectionController;
  if (this_00 != (SelectionController *)0x0) {
    pIVar1 = (IList_1_VoxelHit_ *)
             SelectionController::SelectionController_get_ParentGroupID(this_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_01 != (MVWorldObjectClientManager *)0x0) {
      this_02 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                          (this_01,(MethodInfo *)0x0);
      if (this_02 != (MVGroup *)0x0) {
        pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items
                           ((Collection_1_VoxelHit_ *)this_02,(MethodInfo *)0x0);
        return pIVar1 == pIVar2;
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* EditorEvent get_PrevEvent() */

EditorEvent__Enum
Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_get_PrevEvent
          (EditorStateMachine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = (this->fields)._.prevEvent;
  if (pOVar1 == (Object *)0x0) {
    func_?(0);
    pOVar1 = extraout_ECX;
    pEVar2 = extraout_EDX;
  }
  else {
    pEVar2 = TypeInfo__EditorEvent;
    if ((pOVar1->klass->_0).element_class == (TypeInfo__EditorEvent->_0).element_class) {
      pEVar3 = (EditorEvent__Enum *)func_?(pOVar1);
      return *pEVar3;
    }
  }
  func_?(pOVar1,pEVar2);
  pcVar4 = (code *)swi(3);
  EVar5 = (*pcVar4)();
  return EVar5;
}


/* HashSet`1[MVWorldObjectClient] get_SelectedWOs() */

HashSet_1_MVWorldObjectClient_ *
Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_get_SelectedWOs
          (EditorStateMachine *this,MethodInfo *method)

{
  pSVar1 = (this->fields).selectionController;
  if (pSVar1 == (SelectionController *)0x0) {
    pSStack_2 = (SerializationInfo *)0x0;
    func_?();
    pcVar3 = (code *)swi(3);
    pHVar4 = (HashSet_1_MVWorldObjectClient_ *)(*pcVar3)();
    return pHVar4;
  }
  pSStack_2 = (SerializationInfo *)0xffffffff;
  pIStack_5 = (IEqualityComparer_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)&DAT_?;
  iStack_6 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int32_t)&iStack_6;
  puStack_7 = &stack0xffffffb4;
  puVar8 = &stack0xffffffb4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar8 = puStack_7;
  }
  puStack_7 = puVar8;
  CStack_9.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_9.monitor = (MonitorData *)0x0;
  CStack_9.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_9.fields.syncRoot = (Object *)0x0;
  func_?();
  puStack_10 = (undefined4 *)&stack0xffffffb4;
  puStack_7 = &stack0xffffffb4;
  this_01 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>__HashSet__);
  this_00 = (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)(pSVar1->fields).selectedIDs;
  pHStack_11 = this_01;
  if (this_00 != (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0) {
    pHVar12 = System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::MetaData::
             FirstTimeEvent]::HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent__GetEnumerator
                       (&HStack_13,this_00,
                        MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    CStack_9.klass =
         (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pHVar12->hashset;
    CStack_9.monitor = (MonitorData *)pHVar12->next;
    CStack_9.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pHVar12->stamp;
    CStack_9.fields.syncRoot = (Object *)pHVar12->current;
    pSStack_2 = (SerializationInfo *)0x0;
    while( true ) {
      HStack_13.next =
           (int32_t)
           MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__;
      HStack_13.hashset = (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)&CStack_9;
      cVar14 = func_?();
      if (cVar14 == '\0') {
        *puStack_10 = 0x51;
        pSStack_2 = (SerializationInfo *)0xffffffff;
        func_?(&CStack_9,
                        MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                       );
        *unaff_FS_OFFSET = iStack_6;
        return (HashSet_1_MVWorldObjectClient_ *)this_01;
      }
      unaff_EDI = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            (&CStack_9,
                             MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                            );
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if ((this_02 == (MVWorldObjectClientManager *)0x0) ||
         (item = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_02,(int32_t)unaff_EDI,(MethodInfo *)0x0),
         this_01 == (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)0x0)) break;
      System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
      UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
                ((HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,
                 (UnityWebRequest *)item,
                 MethodInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>__Add_MVWorldObjectClient_
                );
    }
  }
  func_?(0);
  func_?(unaff_EDI,0,0);
  pcVar3 = (code *)swi(3);
  pHVar4 = (HashSet_1_MVWorldObjectClient_ *)(*pcVar3)();
  return pHVar4;
}


/* MVWorldObjectClient get_SingleSelectedWO() */

MVWorldObjectClient *
Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_get_SingleSelectedWO
          (EditorStateMachine *this,MethodInfo *method)

{
  pSVar1 = (this->fields).selectionController;
  if (pSVar1 == (SelectionController *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    pMVar3 = (MVWorldObjectClient *)(*pcVar2)();
    return pMVar3;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pHVar4 = (pSVar1->fields).selectedIDs;
  if (pHVar4 != (HashSet_1_System_Int32_ *)0x0) {
    JVar5 = System.Core.dll::System::Linq::
            Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
            JsonSchemaType]::
            Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                      ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                        *)pHVar4,MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__
                      );
    if (JVar5 == JsonSchemaType__Enum_String) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      id = System.Core.dll::System::Linq::Enumerable::Enumerable_First_6
                     ((IEnumerable_1_System_Int32_ *)(pSVar1->fields).selectedIDs,
                      int_MethodInfo__System__Linq__Enumerable__First<int>_System__Collections__Generic__IEnumerable<int>_
                     );
      if (this_00 != (MVWorldObjectClientManager *)0x0) {
        pMVar3 = (MVWorldObjectClient *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_00,id,(MethodInfo *)0x0);
        return pMVar3;
      }
    }
    else {
      pHVar4 = (pSVar1->fields).selectedIDs;
      if (pHVar4 != (HashSet_1_System_Int32_ *)0x0) {
        JVar5 = System.Core.dll::System::Linq::
                Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
                JsonSchemaType]::
                Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                          ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                            *)pHVar4,
                           MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__);
        if (0 < (int)JVar5) {
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                    ((Object *)StringLiteral_Trying_to_access_single_selected,(MethodInfo *)0x0);
        }
        return (MVWorldObjectClient *)0x0;
      }
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pMVar3 = (MVWorldObjectClient *)(*pcVar2)();
  return pMVar3;
}


/* Void set_GridMode(Boolean) */

void Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_set_GridMode
               (EditorStateMachine *this,bool value,MethodInfo *method)

{
  (this->fields)._GridMode_k__BackingField = value;
  return;
}


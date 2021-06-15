
/* Void DeSelectAll() */

void Assembly-CSharp.dll::SelectionController::SelectionController_DeSelectAll
               (SelectionController *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb4;
  puVar5 = &stack0xffffffb4;
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
  this_00 = (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)(this->fields).selectedIDs;
  puStack_7 = (undefined4 *)&stack0xffffffb4;
  puStack_4 = &stack0xffffffb4;
  if (this_00 != (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0) {
    puStack_7 = (undefined4 *)&stack0xffffffb4;
    puStack_4 = &stack0xffffffb4;
    pHVar8 = System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::MetaData::
             FirstTimeEvent]::HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent__GetEnumerator
                       (&HStack_9,this_00,
                        MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    CStack_6.klass =
         (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pHVar8->hashset;
    CStack_6.monitor = (MonitorData *)pHVar8->next;
    CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pHVar8->stamp;
    CStack_6.fields.syncRoot = (Object *)pHVar8->current;
    uStack_1 = 0;
    while( true ) {
      HStack_9.hashset =
           (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)
           MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__;
      cVar10 = func_?();
      if (cVar10 == '\0') break;
      id = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
           Serialization::JsonProperty]::
           Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                     (&CStack_6,
                      MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                     );
      pOStack_11 = id;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pMVar12 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if ((pMVar12 == (MVWorldObjectClientManager *)0x0) ||
         (pMVar13 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                             (pMVar12,(int32_t)id,(MethodInfo *)0x0), pMVar13 == (MVWorldObject *)0x0)
         ) goto code_?;
      (*pMVar13->klass[1].vtable.IsSingletonObject.methodPtr)();
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar12 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      HStack_9.hashset =
           (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)
           TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>;
      unaff_EDI = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (unaff_EDI,(Object *)this,
                 MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
                 ,
                 MethodInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>__Action_System__Object__void__
                );
      if (pMVar12 == (MVWorldObjectClientManager *)0x0) goto code_?;
      MVWorldObjectClientManager::MVWorldObjectClientManager_UnsubscribeWODestroyedEvent
                (pMVar12,(int32_t)pOStack_11,
                 (Action_2_Object_WorldObjectDestroyedEventArgs_ *)unaff_EDI,(MethodInfo *)0x0);
    }
    unaff_EDI = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)0x0;
    *puStack_7 = 0x61;
    uStack_1 = 0xffffffff;
    func_?(&CStack_6,
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                   );
    this_01 = (HashSet_1_UnityEngine_Vector3_ *)(this->fields).selectedIDs;
    if (this_01 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
      HashSet_1_UnityEngine_Vector3__Clear
                (this_01,MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
code_?:
  func_?(0);
  func_?(unaff_EDI,0,0);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void DeSelectAllExcept(Int32) */

void Assembly-CSharp.dll::SelectionController::SelectionController_DeSelectAllExcept
               (SelectionController *this,int32_t id,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffac;
  puVar5 = &stack0xffffffac;
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
  method_00 = TypeInfo__SelectionController___DeSelectAllExcept_c__AnonStorey0;
  puStack_7 = (undefined4 *)&stack0xffffffac;
  puStack_4 = &stack0xffffffac;
  this_03 = (ScaleAnimationBase *)func_?();
  pSStack_8 = this_03;
  ScaleAnimationBase::ScaleAnimationBase_Play(this_03,0.0,(MethodInfo *)method_00);
  pSStack_9 = this_03;
  if (this_03 != (ScaleAnimationBase *)0x0) {
    (this_03->fields)._._._._.m_CachedPtr = (void *)id;
    this_00 = (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)(this->fields).selectedIDs;
    if (this_00 != (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)0x0) {
      bVar10 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds::Api::
              NativeAdType]::HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                        (this_00,id,
                         MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
      if (bVar10 == 0) {
        SelectionController_DeSelectAll(this,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      this_01 = (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)(this->fields).selectedIDs;
      if (this_01 != (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0) {
        pHVar11 = System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::MetaData
                 ::FirstTimeEvent]::HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent__GetEnumerator
                           ((HashSet_1_T_Enumerator_MV_WorldObject_MetaData_FirstTimeEvent_ *)
                            &stack0xffffffb8,this_01,
                            MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__)
        ;
        CStack_6.monitor = (MonitorData *)pHVar11->next;
        CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pHVar11->stamp
        ;
        CStack_6.fields.syncRoot = (Object *)pHVar11->current;
        uStack_1 = 0;
        while( true ) {
          CStack_6.klass =
               (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)
               MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__;
          cVar12 = func_?();
          if (cVar12 == '\0') break;
          this_03 = (ScaleAnimationBase *)
                    mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                    Serialization::JsonProperty]::
                    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                              (&CStack_6,
                               MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                              );
          pSStack_13 = this_03;
          if (this_03 != (pSStack_8->fields)._._._._.m_CachedPtr) {
            this_04 = SelectionController_get_WOCM(this,(MethodInfo *)0x0);
            if ((this_04 == (MVWorldObjectClientManager *)0x0) ||
               (pMVar14 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                   (this_04,(int32_t)this_03,(MethodInfo *)id),
               pMVar14 == (MVWorldObject *)0x0)) goto code_?;
            func_?();
            id = (int32_t)SelectionController_get_WOCM(this,(MethodInfo *)0x0);
            pUVar15 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar15,(Object *)this,
                       MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
                       ,
                       MethodInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>__Action_System__Object__void__
                      );
            this_03 = (ScaleAnimationBase *)0x0;
            if ((MVWorldObjectClientManager *)id == (MVWorldObjectClientManager *)0x0)
            goto code_?;
            MVWorldObjectClientManager::MVWorldObjectClientManager_UnsubscribeWODestroyedEvent
                      ((MVWorldObjectClientManager *)id,(int32_t)pSStack_13,
                       (Action_2_Object_WorldObjectDestroyedEventArgs_ *)pUVar15,(MethodInfo *)0x0);
          }
        }
        *puStack_7 = 0x9b;
        uStack_1 = 0xffffffff;
        func_?(&CStack_6,
                        MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                       );
        this_02 = (this->fields).selectedIDs;
        pUVar15 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(TypeInfo__System__Predicate<int>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar15,(Object *)pSStack_8,
                   MethodInfo__SelectionController___DeSelectAllExcept_c__AnonStorey0____m__0_int_,
                   MethodInfo__System__Predicate<int>__Predicate_System__Object__void__);
        this_03 = (ScaleAnimationBase *)0x0;
        if (this_02 != (HashSet_1_System_Int32_ *)0x0) {
          System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
          HashSet_1_System_Int32__RemoveWhere
                    (this_02,(Predicate_1_Int32_ *)pUVar15,
                     MethodInfo__System__Collections__Generic__HashSet<int>__RemoveWhere_System__Predicate<int>_
                    );
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
  }
code_?:
  func_?();
  func_?(this_03,0,0);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void DeSelectWorldObject(MVWorldObjectClient) */

void Assembly-CSharp.dll::SelectionController::SelectionController_DeSelectWorldObject
               (SelectionController *this,MVWorldObjectClient *wo,MethodInfo *method)

{
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
    pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)wo,(MethodInfo *)0x0);
    this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_02,(Object *)this,
               MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
               ,
               MethodInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>__Action_System__Object__void__
              );
    if (this_01 != (MVWorldObjectClientManager *)0x0) {
      MVWorldObjectClientManager::MVWorldObjectClientManager_UnsubscribeWODestroyedEvent
                (this_01,(int32_t)pIVar1,(Action_2_Object_WorldObjectDestroyedEventArgs_ *)this_02,
                 (MethodInfo *)0x0);
      this_00 = (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)(this->fields).selectedIDs;
      pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)wo,(MethodInfo *)0x0);
      if (this_00 != (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0) {
        System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::MetaData::
        FirstTimeEvent]::HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent__Remove
                  (this_00,(FirstTimeEvent__Enum)pIVar1,
                   MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_);
        return;
      }
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void EnterGroup(MVGroup) */

void Assembly-CSharp.dll::SelectionController::SelectionController_EnterGroup
               (SelectionController *this,MVGroup *group,MethodInfo *method)

{
  SelectionController_DeSelectAll(this,(MethodInfo *)0x0);
  SelectionController_PushWOParents(this,(MVWorldObjectClient *)group,1,(MethodInfo *)0x0);
  return;
}


/* Int32 ExitGroup() */

int32_t Assembly-CSharp.dll::SelectionController::SelectionController_ExitGroup
                  (SelectionController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  SelectionController_DeSelectAll(this,(MethodInfo *)0x0);
  pSVar1 = (this->fields).parentGroups;
  if (pSVar1 != (Stack_1_System_Int32_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pSVar1,
                        MethodInfo__System__Collections__Generic__Stack<int>__get_Count__);
    if ((int)pOVar2 < 2) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_Trying_to_exit_root_group_,(MethodInfo *)0x0);
      pSVar1 = (this->fields).parentGroups;
      if (pSVar1 != (Stack_1_System_Int32_ *)0x0) {
        iVar3 = System.dll::System::Collections::Generic::Stack`1[System::Int32]::
                Stack_1_System_Int32__Peek
                          (pSVar1,MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
        return iVar3;
      }
    }
    else {
      pSVar1 = (this->fields).parentGroups;
      if (pSVar1 != (Stack_1_System_Int32_ *)0x0) {
        iVar3 = System.dll::System::Collections::Generic::Stack`1[System::Int32]::
                Stack_1_System_Int32__Pop
                          (pSVar1,MethodInfo__System__Collections__Generic__Stack<int>__Pop__);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_01,(Object *)this,
                   MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
                   ,
                   MethodInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>__Action_System__Object__void__
                  );
        if (this_00 != (MVWorldObjectClientManager *)0x0) {
          MVWorldObjectClientManager::MVWorldObjectClientManager_UnsubscribeWODestroyedEvent
                    (this_00,iVar3,(Action_2_Object_WorldObjectDestroyedEventArgs_ *)0x0,
                     (MethodInfo *)0x0);
          return iVar3;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  iVar3 = (*pcVar4)();
  return iVar3;
}


/* Int32 ExitGroupToRoot() */

int32_t Assembly-CSharp.dll::SelectionController::SelectionController_ExitGroupToRoot
                  (SelectionController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  SelectionController_DeSelectAll(this,(MethodInfo *)0x0);
  pSVar1 = (this->fields).parentGroups;
  do {
    if (pSVar1 == (Stack_1_System_Int32_ *)0x0) {
code_?:
      func_?(0);
      pcVar2 = (code *)swi(3);
      iVar3 = (*pcVar2)();
      return iVar3;
    }
    pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pSVar1,
                        MethodInfo__System__Collections__Generic__Stack<int>__get_Count__);
    pSVar1 = (this->fields).parentGroups;
    if ((int)pOVar4 < 2) {
      if (pSVar1 != (Stack_1_System_Int32_ *)0x0) {
        iVar3 = System.dll::System::Collections::Generic::Stack`1[System::Int32]::
                Stack_1_System_Int32__Peek
                          (pSVar1,MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
        return iVar3;
      }
      goto code_?;
    }
    if (pSVar1 == (Stack_1_System_Int32_ *)0x0) goto code_?;
    System.dll::System::Collections::Generic::Stack`1[System::Int32]::Stack_1_System_Int32__Pop
              (pSVar1,MethodInfo__System__Collections__Generic__Stack<int>__Pop__);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    woID = TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>;
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this,
               MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
               ,
               MethodInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>__Action_System__Object__void__
              );
    if (this_00 == (MVWorldObjectClientManager *)0x0) goto code_?;
    MVWorldObjectClientManager::MVWorldObjectClientManager_UnsubscribeWODestroyedEvent
              (this_00,(int32_t)woID,(Action_2_Object_WorldObjectDestroyedEventArgs_ *)this_01,
               (MethodInfo *)0x0);
    pSVar1 = (this->fields).parentGroups;
  } while( true );
}


/* Boolean IsChildOf(Int32, Int32) */

bool Assembly-CSharp.dll::SelectionController::SelectionController_IsChildOf
               (SelectionController *this,int32_t childId,int32_t parentId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    child = (MVWorldObjectClient *)
            MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                      (pMVar1,childId,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      parent = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (pMVar1,parentId,(MethodInfo *)0x0);
      bVar2 = SelectionController_IsChildOf_1
                        ((SelectionController *)parent,child,(MVWorldObjectClient *)parent,
                         (MethodInfo *)0x0);
      return bVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Boolean IsChildOf(MVWorldObjectClient, MVWorldObjectClient) */

bool Assembly-CSharp.dll::SelectionController::SelectionController_IsChildOf_1
               (SelectionController *this,MVWorldObjectClient *child,MVWorldObjectClient *parent,
               MethodInfo *method)

{
  if (child != (MVWorldObjectClient *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)child,
                        (MethodInfo *)0x0);
    if (pOVar1 == (Object *)0xffffffff) {
      return 0;
    }
    pIVar2 = (IList_1_VoxelHit_ *)
             mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)child,
                        (MethodInfo *)0x0);
    if (parent != (MVWorldObjectClient *)0x0) {
      pIVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)parent,(MethodInfo *)0x0);
      if (pIVar2 == pIVar3) {
        return 1;
      }
      this_00 = SelectionController_get_WOCM(this,(MethodInfo *)0x0);
      pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)child,
                          (MethodInfo *)0x0);
      if (this_00 != (MVWorldObjectClientManager *)0x0) {
        child_00 = (MVWorldObjectClient *)
                   MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                             (this_00,(int32_t)pOVar1,(MethodInfo *)0x0);
        bVar4 = SelectionController_IsChildOf_1(this,child_00,parent,(MethodInfo *)0x0);
        return bVar4;
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Boolean IsSelected(Int32) */

bool Assembly-CSharp.dll::SelectionController::SelectionController_IsSelected
               (SelectionController *this,int32_t id,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffac;
  puVar5 = &stack0xffffffac;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  uStack_6 = 0;
  uStack_7 = 0;
  iStack_8 = 0;
  CStack_9.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_9.monitor = (MonitorData *)0x0;
  CStack_9.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_9.fields.syncRoot = (Object *)0x0;
  func_?();
  uStack_10 = 0xffffffff;
  this_00 = (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)(this->fields).selectedIDs;
  if (this_00 == (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0) {
    puStack_11 = &stack0xffffffac;
    puStack_4 = &stack0xffffffac;
    func_?(0);
  }
  else {
    puStack_11 = &stack0xffffffac;
    puStack_4 = &stack0xffffffac;
    pHVar12 = System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::MetaData::
             FirstTimeEvent]::HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent__GetEnumerator
                       (&HStack_13,this_00,
                        MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    CStack_9.klass =
         (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pHVar12->hashset;
    CStack_9.monitor = (MonitorData *)pHVar12->next;
    CStack_9.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pHVar12->stamp;
    CStack_9.fields.syncRoot = (Object *)pHVar12->current;
    uStack_1 = 0;
    do {
      cVar14 = func_?();
      if (cVar14 == '\0') goto code_?;
      parentId = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           (&CStack_9,
                            MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                           );
    } while (((Object *)id != parentId) &&
            (bVar15 = SelectionController_IsChildOf(this,id,(int32_t)parentId,(MethodInfo *)0x0),
            bVar15 == 0));
    uStack_6 = 1;
code_?:
    uStack_1 = 0xffffffff;
    func_?();
    if (iStack_8 == 0) {
      *unaff_FS_OFFSET = uStack_3;
      return 0;
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  bVar15 = (*pcVar16)();
  return bVar15;
}


/* Void PushWOParents(MVWorldObjectClient, Boolean) */

void Assembly-CSharp.dll::SelectionController::SelectionController_PushWOParents
               (SelectionController *this,MVWorldObjectClient *wo,bool addAsParent,
               MethodInfo *method)

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
  pSVar4 = (this->fields).parentGroups;
  while (pSVar4 != (Stack_1_System_Int32_ *)0x0) {
    pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pSVar4,
                        MethodInfo__System__Collections__Generic__Stack<int>__get_Count__);
    if ((int)pOVar5 < 2) {
      method_00 = TypeInfo__System__Collections__Generic__Queue<int>;
      this_01 = (Queue_1_SmoothPhysicsMovement_Package_ *)func_?();
      System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
      Queue_1_SmoothPhysicsMovement_Package___ctor
                (this_01,MethodInfo__System__Collections__Generic__Queue<int>__Queue__);
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pMVar6 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (((wo != (MVWorldObjectClient *)0x0) &&
          (pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                    Serialization::JsonProperty]::
                    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                              ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)wo,
                               (MethodInfo *)0x0), pMVar6 != (MVWorldObjectClientManager *)0x0)) &&
         (this_02 = (MVWorldObjectClient *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar6,(int32_t)pOVar5,(MethodInfo *)method_00),
         this_02 != (MVWorldObjectClient *)0x0)) goto code_?;
      break;
    }
    pSVar4 = (this->fields).parentGroups;
    if (pSVar4 == (Stack_1_System_Int32_ *)0x0) break;
    System.dll::System::Collections::Generic::Stack`1[System::Int32]::Stack_1_System_Int32__Pop
              (pSVar4,MethodInfo__System__Collections__Generic__Stack<int>__Pop__);
    pSVar4 = (this->fields).parentGroups;
  }
code_?:
  func_?(0);
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
code_?:
  pIVar8 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_02,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar6 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((pMVar6 == (MVWorldObjectClientManager *)0x0) ||
     (this_03 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                          (pMVar6,(MethodInfo *)0x0), this_03 == (MVGroup *)0x0))
  goto code_?;
  pIVar9 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items
                     ((Collection_1_VoxelHit_ *)this_03,(MethodInfo *)method_00);
  if (pIVar8 == pIVar9) {
    if (this_01 != (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
    goto code_?;
  }
  if (this_02 == (MVWorldObjectClient *)0x0) goto code_?;
  method_00 = (Queue_1_System_Int32___Class *)0x40;
  bVar10 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                    (this_02,InteractionFlags__Enum_DontPushGroupToSelectionStack,(MethodInfo *)0x0)
  ;
  if (bVar10 == 0) {
    pSVar11 = (SmoothPhysicsMovement_Package *)
              mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
              Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_02,(MethodInfo *)0x0);
    if (this_01 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
    System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
    Queue_1_SmoothPhysicsMovement_Package__Enqueue
              (this_01,pSVar11,MethodInfo__System__Collections__Generic__Queue<int>__Enqueue_int_);
  }
  pMVar6 = SelectionController_get_WOCM(this,(MethodInfo *)0x0);
  pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
           Serialization::JsonProperty]::
           Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                     ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_02,
                      (MethodInfo *)0x0);
  if ((pMVar6 == (MVWorldObjectClientManager *)0x0) ||
     (this_02 = (MVWorldObjectClient *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (pMVar6,(int32_t)pOVar5,(MethodInfo *)0x0),
     this_02 == (MVWorldObjectClient *)0x0)) goto code_?;
  goto code_?;
code_?:
  pIVar12 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
            KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
            KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                      ((KogamaSettingNumericBase_1_System_Single_ *)this_01,
                       MethodInfo__System__Collections__Generic__Queue<int>__get_Count__);
  if (pIVar12 == (IKogamaSetting *)0x0) goto code_?;
  pSVar13 = (Stack_1_ShortcutManager_ShortcutKey_ *)(this->fields).parentGroups;
  pSVar11 = System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
            Queue_1_SmoothPhysicsMovement_Package__Dequeue
                      (this_01,MethodInfo__System__Collections__Generic__Queue<int>__Dequeue__);
  if (pSVar13 == (Stack_1_ShortcutManager_ShortcutKey_ *)0x0) goto code_?;
  System.dll::System::Collections::Generic::Stack`1[ShortcutManager+ShortcutKey]::
  Stack_1_ShortcutManager_ShortcutKey__Push
            (pSVar13,(ShortcutManager_ShortcutKey *)pSVar11,
             MethodInfo__System__Collections__Generic__Stack<int>__Push_int_);
  goto code_?;
code_?:
  if (addAsParent != 0) {
    pSVar13 = (Stack_1_ShortcutManager_ShortcutKey_ *)(this->fields).parentGroups;
    t = (ShortcutManager_ShortcutKey *)
        mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
        Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)wo,(MethodInfo *)0x0);
    if (pSVar13 == (Stack_1_ShortcutManager_ShortcutKey_ *)0x0) goto code_?;
    System.dll::System::Collections::Generic::Stack`1[ShortcutManager+ShortcutKey]::
    Stack_1_ShortcutManager_ShortcutKey__Push
              (pSVar13,t,MethodInfo__System__Collections__Generic__Stack<int>__Push_int_);
  }
  this_00 = (Stack_1_EditorEvent_ *)(this->fields).parentGroups;
  if (this_00 != (Stack_1_EditorEvent_ *)0x0) {
    System.dll::System::Collections::Generic::Stack`1[EditorEvent]::
    Stack_1_EditorEvent__GetEnumerator
              ((Stack_1_T_Enumerator_EditorEvent_ *)&stack0xffffffc8,this_00,
               MethodInfo__System__Collections__Generic__Stack<int>__GetEnumerator__);
    uStack_1 = 0;
    while( true ) {
      cVar14 = func_?();
      if (cVar14 == '\0') {
        uStack_1 = 0xffffffff;
        func_?();
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      woID = func_?();
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar6 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      this_04 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_04,(Object *)this,
                 MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
                 ,
                 MethodInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>__Action_System__Object__void__
                );
      if (pMVar6 == (MVWorldObjectClientManager *)0x0) break;
      MVWorldObjectClientManager::MVWorldObjectClientManager_SubscribeWODestroyedEvent
                (pMVar6,woID,(Action_2_Object_WorldObjectDestroyedEventArgs_ *)this_04,
                 (MethodInfo *)0x0);
    }
  }
  goto code_?;
}


/* WorldObjectClientRef Select(Boolean, Boolean, Int32) */

WorldObjectClientRef *
Assembly-CSharp.dll::SelectionController::SelectionController_Select
          (SelectionController *this,bool addToSelection,bool showVisuals,int32_t layerMask,
          MethodInfo *method)

{
  func_?(&stack0xffffffb4,0,0x48);
  bVar1 = EditModeObjectPicker::EditModeObjectPicker_Pick
                    ((VoxelHit *)&stack0xffffffb4,(HashSet_1_System_Int32_ *)0x0,layerMask,
                     (MethodInfo *)0x0);
  if (bVar1 != 0) {
    hit.point.y = in_stack_2;
    hit.point.x = in_stack_3;
    hit.point.z = in_stack_4;
    hit.normal.x = (float)in_stack_5;
    hit.normal.y = fStack_6;
    hit.normal.z = (float)IStack_7._0_4_;
    hit.cubePos._0_4_ = stack0xffffffd0;
    hit._28_4_ = iStack_8;
    hit.face = uStack_9;
    hit._36_4_ = iStack_10;
    hit.woId = (int32_t)pCStack_11;
    hit.cube = (Cube *)fStack_12;
    hit.distance = (float)pCStack_13;
    hit.collider = (Collider *)pTStack_14;
    hit.transform = (Transform *)uStack_15;
    hit._60_4_ = (int)iStack_16;
    hit.interactionFlags._0_4_ = (float)((ulonglong)iStack_16 >> 0x20);
    hit.interactionFlags._4_4_ = _addToSelection;
    pWVar17 = SelectionController_Select_1(this,hit,showVisuals,0,in_stack_5);
    return pWVar17;
  }
  return (WorldObjectClientRef *)0x0;
}


/* Boolean SelectParent(Boolean) */

bool Assembly-CSharp.dll::SelectionController::SelectionController_SelectParent
               (SelectionController *this,bool showVisuals,MethodInfo *method)

{
  SelectionController_DeSelectAll(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).parentGroups;
  if (pSVar1 != (Stack_1_System_Int32_ *)0x0) {
    pIVar2 = (IList_1_VoxelHit_ *)
             System.dll::System::Collections::Generic::Stack`1[System::Int32]::
             Stack_1_System_Int32__Peek
                       (pSVar1,MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_00 != (MVWorldObjectClientManager *)0x0) {
      this_01 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                          (this_00,(MethodInfo *)0x0);
      if (this_01 != (MVGroup *)0x0) {
        pIVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items
                           ((Collection_1_VoxelHit_ *)this_01,(MethodInfo *)0x0);
        if (pIVar2 == pIVar3) {
          return 0;
        }
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        pSVar1 = (this->fields).parentGroups;
        if (pSVar1 != (Stack_1_System_Int32_ *)0x0) {
          id = System.dll::System::Collections::Generic::Stack`1[System::Int32]::
               Stack_1_System_Int32__Peek
                         (pSVar1,MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
          pWVar4 = SelectionController_SelectWO(this,id,0,showVisuals,(MethodInfo *)0x0);
          return pWVar4 != (WorldObjectClientRef *)0x0;
        }
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* WorldObjectClientRef SelectWO(Int32, Boolean, Boolean) */

WorldObjectClientRef *
Assembly-CSharp.dll::SelectionController::SelectionController_SelectWO
          (SelectionController *this,int32_t id,bool addToSelection,bool showVisuals,
          MethodInfo *method)

{
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
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 == (MVWorldObjectClientManager *)0x0) goto code_?;
  this_01 = (MVWorldObjectClient *)
            MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                      (pMVar1,id,(MethodInfo *)0x0);
  if (addToSelection == 0) {
    SelectionController_DeSelectAllExcept(this,id,(MethodInfo *)0x0);
  }
  if (this_01 == (MVWorldObjectClient *)0x0) goto code_?;
  pOVar2 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
           TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
           TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                     ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this_01,(MethodInfo *)0x0);
  if (pOVar2 != (Object *)0x0) {
    pSVar3 = (String *)
             UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
             TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
             TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                       ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this_01,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((this_02 == (MVNetworkGame *)0x0) ||
       (this_03 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_02,(MethodInfo *)0x0),
       this_03 == (MVLocalPlayer *)0x0)) goto code_?;
    pSVar4 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
             NamedThemeAttribute_1_UnityEngine_Color__get_Name
                       ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_03,(MethodInfo *)0x0);
    if (pSVar3 != pSVar4) {
      pOVar2 = (Object *)func_?();
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar3 = mscorlib.dll::System::String::String_Concat_1
                         ((Object *)StringLiteral_Trying_to_select_WO_,pOVar2,
                          (Object *)StringLiteral__that_is_owned_by_another_acotr,(MethodInfo *)0x0)
      ;
      goto code_?;
    }
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pSVar5 = (this->fields).parentGroups;
  if (pSVar5 == (Stack_1_System_Int32_ *)0x0) goto code_?;
  parentId = System.dll::System::Collections::Generic::Stack`1[System::Int32]::
             Stack_1_System_Int32__Peek
                       (pSVar5,MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
  bVar6 = MVGroup::MVGroup_IsDescendant(parentId,id,(MethodInfo *)0x0);
  if ((bVar6 != 0) ||
     (bVar6 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                        (this_01,InteractionFlags__Enum_DirectlySelectable,(MethodInfo *)0x0),
     bVar6 != 0)) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pSVar5 = (this->fields).parentGroups;
    if (pSVar5 != (Stack_1_System_Int32_ *)0x0) {
      pOVar2 = (Object *)
               System.dll::System::Collections::Generic::Stack`1[System::Int32]::
               Stack_1_System_Int32__Peek
                         (pSVar5,MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
      pOVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                           (MethodInfo *)0x0);
      if (pOVar2 != pOVar7) {
        SelectionController_PushWOParents(this,this_01,0,(MethodInfo *)0x0);
      }
      this_00 = (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)(this->fields).selectedIDs;
      item = (UnityWebRequest *)
             mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_01,(MethodInfo *)0x0);
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
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        pIVar8 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                  Collection_1_VoxelHit__get_Items
                            ((Collection_1_VoxelHit_ *)this_01,(MethodInfo *)0x0);
        this_04 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_04,(Object *)this,
                   MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
                   ,
                   MethodInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>__Action_System__Object__void__
                  );
        if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
          MVWorldObjectClientManager::MVWorldObjectClientManager_SubscribeWODestroyedEvent
                    (pMVar1,(int32_t)pIVar8,
                     (Action_2_Object_WorldObjectDestroyedEventArgs_ *)this_04,(MethodInfo *)0x0);
          if (showVisuals == 0) {
            (*(code *)(this_01->klass->vtable).Select.method)();
          }
          else {
            UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_blue
                      ((Color *)&stack0xffffffe4,(MethodInfo *)0x0);
            (*(code *)(this_01->klass->vtable).Select_1.method)();
          }
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          pIVar8 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                    Collection_1_VoxelHit__get_Items
                              ((Collection_1_VoxelHit_ *)this_01,(MethodInfo *)0x0);
          if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
            pWVar9 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRef
                               (pMVar1,(int32_t)pIVar8,(MethodInfo *)0x0);
            return pWVar9;
          }
        }
      }
    }
    goto code_?;
  }
  args = (Object__Array *)func_?();
  if (args == (Object__Array *)0x0) goto code_?;
  if ((StringLiteral_Trying_to_select_WO_ == (String *)0x0) ||
     (iVar10 = func_?(), iVar10 != 0)) {
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)StringLiteral_Trying_to_select_WO_;
    pOVar2 = (Object *)func_?();
    if ((pOVar2 != (Object *)0x0) && (iVar10 = func_?(), iVar10 == 0)) goto code_?;
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar2;
    if ((StringLiteral__outside_the_parent_group_ != (String *)0x0) &&
       (iVar10 = func_?(), iVar10 == 0)) goto code_?;
    if (args->max_length < 3) goto code_?;
    args->vector[2] = (Object *)StringLiteral__outside_the_parent_group_;
    SelectionController_get_ParentGroupID(this,(MethodInfo *)0x0);
    pOVar2 = (Object *)func_?();
    if ((pOVar2 != (Object *)0x0) && (iVar10 = func_?(), iVar10 == 0)) goto code_?;
    if (3 < args->max_length) {
      args->vector[3] = pOVar2;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar3 = mscorlib.dll::System::String::String_Concat_5(args,(MethodInfo *)0x0);
code_?:
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)pSVar3,(MethodInfo *)0x0);
      pWVar9 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                         ((MethodInfo *)0x0);
      return pWVar9;
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
  pcVar11 = (code *)swi(3);
  pWVar9 = (WorldObjectClientRef *)(*pcVar11)();
  return pWVar9;
}


/* WorldObjectClientRef Select(VoxelHit, Boolean, Boolean) */

WorldObjectClientRef *
Assembly-CSharp.dll::SelectionController::SelectionController_Select_1
          (SelectionController *this,VoxelHit hit,bool addToSelection,bool showVisuals,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((hit._60_4_ & 1) == 0) {
    pWVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                       ((MethodInfo *)0x0);
    return pWVar1;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_02 != (MVWorldObjectClientManager *)0x0) {
    this_03 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (this_02,hit._36_4_,(MethodInfo *)0x0);
    if ((hit._60_4_ & 0x10) == 0) {
      this_00 = (Stack_1_EditorEvent_ *)(this->fields).parentGroups;
      if ((this_03 == (MVWorldObject *)0x0) ||
         (t = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
              Serialization::JsonProperty]::
              Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                        ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_03,
                         (MethodInfo *)0x0), this_00 == (Stack_1_EditorEvent_ *)0x0))
      goto code_?;
      bVar2 = System.dll::System::Collections::Generic::Stack`1[EditorEvent]::
              Stack_1_EditorEvent__Contains
                        (this_00,(EditorEvent__Enum)t,
                         MethodInfo__System__Collections__Generic__Stack<int>__Contains_int_);
      if ((bVar2 != 0) || ((hit._60_4_ & 8) != 0)) {
        pIVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items
                           ((Collection_1_VoxelHit_ *)this_03,(MethodInfo *)0x0);
        pWVar1 = SelectionController_SelectWO
                           (this,(int32_t)pIVar3,hit.interactionFlags._4_1_,addToSelection,
                            (MethodInfo *)0x0);
        return pWVar1;
      }
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this_01 = (this->fields).parentGroups;
    if ((this_01 != (Stack_1_System_Int32_ *)0x0) &&
       (iVar4 = System.dll::System::Collections::Generic::Stack`1[System::Int32]::
                Stack_1_System_Int32__Peek
                          (this_01,MethodInfo__System__Collections__Generic__Stack<int>__Peek__),
       this_03 != (MVWorldObject *)0x0)) {
      pIVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_03,(MethodInfo *)0x0)
      ;
      iVar4 = MVGroup::MVGroup_GetGroupAbove
                        (iVar4,(int32_t)pIVar3,InteractionFlags__Enum_DirectlySelectable,
                         (MethodInfo *)0x0);
      if (iVar4 != -1) {
        pWVar1 = SelectionController_SelectWO
                           (this,iVar4,hit.interactionFlags._4_1_,addToSelection,(MethodInfo *)0x0);
        return pWVar1;
      }
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_Could_not_find_appropriate_group,(MethodInfo *)0x0);
      pWVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                         ((MethodInfo *)0x0);
      return pWVar1;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  pWVar1 = (WorldObjectClientRef *)(*pcVar5)();
  return pWVar1;
}


/* Void WOCM_WorldObjectDestroyedHandler(Object, WorldObjectDestroyedEventArgs) */

void Assembly-CSharp.dll::SelectionController::SelectionController_WOCM_WorldObjectDestroyedHandler
               (SelectionController *this,Object *sender,WorldObjectDestroyedEventArgs *e,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = false;
  if ((e != (WorldObjectDestroyedEventArgs *)0x0) &&
     (this_00 = (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)(this->fields).selectedIDs,
     this_00 != (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)0x0)) {
    bVar2 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds::Api::
            NativeAdType]::HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                      (this_00,(e->fields).WordObjectID,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    if (bVar2 != 0) {
      this_01 = (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)(this->fields).selectedIDs;
      bVar1 = true;
      if (this_01 == (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0)
      goto code_?;
      System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::MetaData::
      FirstTimeEvent]::HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent__Remove
                (this_01,(e->fields).WordObjectID,
                 MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_);
    }
    this_02 = (Stack_1_EditorEvent_ *)(this->fields).parentGroups;
    if (this_02 != (Stack_1_EditorEvent_ *)0x0) {
      bVar2 = System.dll::System::Collections::Generic::Stack`1[EditorEvent]::
              Stack_1_EditorEvent__Contains
                        (this_02,(e->fields).WordObjectID,
                         MethodInfo__System__Collections__Generic__Stack<int>__Contains_int_);
      if (bVar2 == 0) {
        if (!bVar1) {
          return;
        }
      }
      else {
        do {
          this_03 = (this->fields).parentGroups;
          iVar3 = (e->fields).WordObjectID;
          if (this_03 == (Stack_1_System_Int32_ *)0x0) goto code_?;
          iVar4 = System.dll::System::Collections::Generic::Stack`1[System::Int32]::
                  Stack_1_System_Int32__Pop
                            (this_03,MethodInfo__System__Collections__Generic__Stack<int>__Pop__);
        } while (iVar3 != iVar4);
      }
      this_04 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)
                (this->fields).SelectedWorldObjectDeleted;
      if (this_04 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
        mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
        EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
                  (this_04,(Object *)this,(InitializedGameQueryDataEventArgs *)e,
                   MethodInfo__System__EventHandler<WorldObjectDestroyedEventArgs>__Invoke_System__Object__WorldObjectDestroyedEventArgs_
                  );
        return;
      }
    }
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* SelectionController() */

void Assembly-CSharp.dll::SelectionController::SelectionController__ctor
               (SelectionController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_01,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  (this->fields).selectedIDs = (HashSet_1_System_Int32_ *)this_01;
  this_02 = (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)
            func_?(TypeInfo__System__Collections__Generic__Stack<int>);
  UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
  TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
  TweenRunner_1_T_Start_c_Iterator0_FloatTween___ctor
            (this_02,MethodInfo__System__Collections__Generic__Stack<int>__Stack__);
  (this->fields).parentGroups = (Stack_1_System_Int32_ *)this_02;
  if (TypeInfo__SelectionController->static_fields->__f__am_cache0 ==
      (EventHandler_1_WorldObjectDestroyedEventArgs_ *)0x0) {
    this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_03,(Object *)0x0,
               MethodInfo__SelectionController___SelectedWorldObjectDeleted_m__0_System__Object__WorldObjectDestroyedEventArgs_
               ,
               MethodInfo__System__EventHandler<WorldObjectDestroyedEventArgs>__EventHandler_System__Object__void__
              );
    TypeInfo__SelectionController->static_fields->__f__am_cache0 =
         (EventHandler_1_WorldObjectDestroyedEventArgs_ *)this_03;
  }
  (this->fields).SelectedWorldObjectDeleted =
       TypeInfo__SelectionController->static_fields->__f__am_cache0;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,(MethodInfo *)this);
  this_00 = (Stack_1_ShortcutManager_ShortcutKey_ *)(this->fields).parentGroups;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_04 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_04 != (MVWorldObjectClientManager *)0x0) {
    this_05 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                        (this_04,(MethodInfo *)0x0);
    if (this_05 != (MVGroup *)0x0) {
      t = (ShortcutManager_ShortcutKey *)
          mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
          Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_05,(MethodInfo *)0x0);
      if (this_00 != (Stack_1_ShortcutManager_ShortcutKey_ *)0x0) {
        System.dll::System::Collections::Generic::Stack`1[ShortcutManager+ShortcutKey]::
        Stack_1_ShortcutManager_ShortcutKey__Push
                  (this_00,t,MethodInfo__System__Collections__Generic__Stack<int>__Push_int_);
        return;
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void add_SelectedWorldObjectDeleted(EventHandler`1[WorldObjectDestroyedEventArgs]) */

void Assembly-CSharp.dll::SelectionController::SelectionController_add_SelectedWorldObjectDeleted
               (SelectionController *this,EventHandler_1_WorldObjectDestroyedEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).SelectedWorldObjectDeleted;
  a = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_WorldObjectDestroyedEventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<WorldObjectDestroyedEventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<WorldObjectDestroyedEventArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_WorldObjectDestroyedEventArgs_ *)func_?(ppEVar1,pDVar3,a);
    bVar6 = pEVar5 == a;
    a = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* MVGroup get_ParentGroup() */

MVGroup * Assembly-CSharp.dll::SelectionController::SelectionController_get_ParentGroup
                    (SelectionController *this,MethodInfo *method)

{
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
  this_00 = (this->fields).parentGroups;
  if (this_00 != (Stack_1_System_Int32_ *)0x0) {
    id = System.dll::System::Collections::Generic::Stack`1[System::Int32]::
         Stack_1_System_Int32__Peek
                   (this_00,MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
    if (this_01 != (MVGroup__Class *)0x0) {
      pMVar1 = (MVGroup *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         ((MVWorldObjectClientManager *)this_01,id,(MethodInfo *)0x0);
      if (pMVar1 == (MVGroup *)0x0) {
        return (MVGroup *)0x0;
      }
      bVar2 = (TypeInfo__MVGroup->_1).naturalAligment;
      if (((pMVar1->klass->_1).naturalAligment < bVar2) ||
         ((MVGroup__Class *)(pMVar1->klass->_1).typeHierarchy[bVar2 - 1] != TypeInfo__MVGroup)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      pMVar4 = (MVGroup *)0x0;
      if (bVar3) {
        pMVar4 = pMVar1;
      }
      this_01 = TypeInfo__MVGroup;
      if (pMVar4 != (MVGroup *)0x0) {
        return pMVar4;
      }
      goto code_?;
    }
  }
  func_?(0);
code_?:
  pMStack5 = this_01;
  func_?();
  pcVar6 = (code *)swi(3);
  pMVar1 = (MVGroup *)(*pcVar6)();
  return pMVar1;
}


/* Int32 get_ParentGroupID() */

int32_t Assembly-CSharp.dll::SelectionController::SelectionController_get_ParentGroupID
                  (SelectionController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).parentGroups;
  if (this_00 != (Stack_1_System_Int32_ *)0x0) {
    iVar1 = System.dll::System::Collections::Generic::Stack`1[System::Int32]::
            Stack_1_System_Int32__Peek
                      (this_00,MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
    return iVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  iVar1 = (*pcVar2)();
  return iVar1;
}


/* HashSet`1[MVWorldObjectClient] get_SelectedWOs() */

HashSet_1_MVWorldObjectClient_ *
Assembly-CSharp.dll::SelectionController::SelectionController_get_SelectedWOs
          (SelectionController *this,MethodInfo *method)

{
  pSStack_1 = (SerializationInfo *)0xffffffff;
  pIStack_2 = (IEqualityComparer_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)&DAT_?;
  iStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int32_t)&iStack_3;
  puStack_4 = &stack0xffffffb4;
  puVar5 = &stack0xffffffb4;
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
  puStack_7 = (undefined4 *)&stack0xffffffb4;
  puStack_4 = &stack0xffffffb4;
  this_01 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>__HashSet__);
  this_00 = (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)(this->fields).selectedIDs;
  pHStack_8 = this_01;
  if (this_00 != (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0) {
    pHVar9 = System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::MetaData::
             FirstTimeEvent]::HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent__GetEnumerator
                       (&HStack_10,this_00,
                        MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    CStack_6.klass =
         (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pHVar9->hashset;
    CStack_6.monitor = (MonitorData *)pHVar9->next;
    CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pHVar9->stamp;
    CStack_6.fields.syncRoot = (Object *)pHVar9->current;
    pSStack_1 = (SerializationInfo *)0x0;
    while( true ) {
      HStack_10.next =
           (int32_t)
           MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__;
      HStack_10.hashset = (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)&CStack_6;
      cVar11 = func_?();
      if (cVar11 == '\0') {
        *puStack_7 = 0x51;
        pSStack_1 = (SerializationInfo *)0xffffffff;
        func_?(&CStack_6,
                        MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                       );
        *unaff_FS_OFFSET = iStack_3;
        return (HashSet_1_MVWorldObjectClient_ *)this_01;
      }
      unaff_EDI = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            (&CStack_6,
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
  pcVar12 = (code *)swi(3);
  pHVar13 = (HashSet_1_MVWorldObjectClient_ *)(*pcVar12)();
  return pHVar13;
}


/* MVWorldObjectClient get_SingleSelectedWO() */

MVWorldObjectClient *
Assembly-CSharp.dll::SelectionController::SelectionController_get_SingleSelectedWO
          (SelectionController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pHVar1 = (this->fields).selectedIDs;
  if (pHVar1 != (HashSet_1_System_Int32_ *)0x0) {
    JVar2 = System.Core.dll::System::Linq::
            Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
            JsonSchemaType]::
            Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                      ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                        *)pHVar1,MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__
                      );
    if (JVar2 == JsonSchemaType__Enum_String) {
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
                     ((IEnumerable_1_System_Int32_ *)(this->fields).selectedIDs,
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
      pHVar1 = (this->fields).selectedIDs;
      if (pHVar1 != (HashSet_1_System_Int32_ *)0x0) {
        JVar2 = System.Core.dll::System::Linq::
                Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
                JsonSchemaType]::
                Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                          ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                            *)pHVar1,
                           MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__);
        if (0 < (int)JVar2) {
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
  pcVar4 = (code *)swi(3);
  pMVar3 = (MVWorldObjectClient *)(*pcVar4)();
  return pMVar3;
}


/* MVWorldObjectClientManager get_WOCM() */

MVWorldObjectClientManager *
Assembly-CSharp.dll::SelectionController::SelectionController_get_WOCM
          (SelectionController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  return pMVar1;
}


/* Void remove_SelectedWorldObjectDeleted(EventHandler`1[WorldObjectDestroyedEventArgs]) */

void Assembly-CSharp.dll::SelectionController::SelectionController_remove_SelectedWorldObjectDeleted
               (SelectionController *this,EventHandler_1_WorldObjectDestroyedEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).SelectedWorldObjectDeleted;
  source = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_WorldObjectDestroyedEventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<WorldObjectDestroyedEventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<WorldObjectDestroyedEventArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_WorldObjectDestroyedEventArgs_ *)func_?(ppEVar1,pDVar3,source)
    ;
    bVar6 = pEVar5 == source;
    source = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


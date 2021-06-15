
/* Boolean CanRequestOwnerShip(Int32) */

bool Assembly-CSharp.dll::MVNetworkSelector::MVNetworkSelector_CanRequestOwnerShip
               (MVNetworkSelector *this,int32_t id,MethodInfo *method)

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
  bVar4 = MVNetworkSelector_OwnershipTest(id,(MethodInfo *)0x0);
  if (bVar4 == 0) {
code_?:
    *unaff_FS_OFFSET = uStack_3;
    return 0;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 == (MVWorldObjectClientManager *)0x0) {
code_?:
    func_?();
    pcVar5 = (code *)swi(3);
    bVar4 = (*pcVar5)();
    return bVar4;
  }
  pMVar6 = (MVGroup *)
           MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                     (this_00,id,(MethodInfo *)0x0);
  if (pMVar6 != (MVGroup *)0x0) {
    bVar7 = (TypeInfo__MVGroup->_1).naturalAligment;
    if (((pMVar6->klass->_1).naturalAligment < bVar7) ||
       ((MVGroup__Class *)(pMVar6->klass->_1).typeHierarchy[bVar7 - 1] != TypeInfo__MVGroup)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    this_01 = (MVGroup *)0x0;
    if (bVar8) {
      this_01 = pMVar6;
    }
    if (this_01 != (MVGroup *)0x0) {
      this_02 = (List_1_UnityEngine_Color32_ *)
                MVGroup::MVGroup_get_Children(this_01,(MethodInfo *)0x0);
      if (this_02 == (List_1_UnityEngine_Color32_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
      List_1_UnityEngine_Color32__GetEnumerator
                ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffbc,this_02,
                 MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                );
      uStack_1 = 0;
      do {
        cVar9 = func_?();
        if (cVar9 == '\0') {
          iVar10 = 0x74;
          goto code_?;
        }
        this_03 = (Collection_1_VoxelHit_ *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                             &stack0xffffffcc,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                            );
        if (this_03 == (Collection_1_VoxelHit_ *)0x0) goto code_?;
        id_00 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                Collection_1_VoxelHit__get_Items(this_03,(MethodInfo *)0x0);
        bVar4 = MVNetworkSelector_CanRequestOwnerShip(this,(int32_t)id_00,(MethodInfo *)0x0);
      } while (bVar4 != 0);
      iVar10 = 0x76;
code_?:
      uStack_1 = 0xffffffff;
      func_?();
      if (iVar10 == 0x76) goto code_?;
    }
  }
  *unaff_FS_OFFSET = uStack_3;
  return 1;
}


/* Boolean CanRequestOwnership(HashSet`1[System.Int32]) */

bool Assembly-CSharp.dll::MVNetworkSelector::MVNetworkSelector_CanRequestOwnership
               (HashSet_1_System_Int32_ *selectionSet,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb0;
  puVar5 = &stack0xffffffb0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  iStack_6 = 0;
  CStack_7.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_7.monitor = (MonitorData *)0x0;
  CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_7.fields.syncRoot = (Object *)0x0;
  func_?();
  uStack_8 = 0xffffffff;
  if (selectionSet == (HashSet_1_System_Int32_ *)0x0) {
    puStack_9 = &stack0xffffffb0;
    puStack_4 = &stack0xffffffb0;
    func_?(0);
  }
  else {
    puStack_9 = &stack0xffffffb0;
    puStack_4 = &stack0xffffffb0;
    pHVar10 = System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::MetaData::
             FirstTimeEvent]::HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent__GetEnumerator
                       (&HStack_11,(HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)selectionSet
                        ,MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    CStack_7.klass =
         (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pHVar10->hashset;
    CStack_7.monitor = (MonitorData *)pHVar10->next;
    CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pHVar10->stamp;
    CStack_7.fields.syncRoot = (Object *)pHVar10->current;
    uStack_1 = 0;
    do {
      cVar12 = func_?();
      if (cVar12 == '\0') break;
      id = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
           Serialization::JsonProperty]::
           Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                     (&CStack_7,
                      MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                     );
      bVar13 = MVNetworkSelector_OwnershipTest((int32_t)id,(MethodInfo *)0x0);
    } while (bVar13 != 0);
    uStack_1 = 0xffffffff;
    puVar14 = &UNK_?;
    func_?();
    if (iStack_6 == 0) {
      if (puVar14 == (undefined *)0x47) {
        *unaff_FS_OFFSET = uStack_3;
        return 0;
      }
      *unaff_FS_OFFSET = uStack_3;
      return 1;
    }
  }
  func_?();
  pcVar15 = (code *)swi(3);
  bVar13 = (*pcVar15)();
  return bVar13;
}


/* Void Instance_OnWorldObjectTransferOwnershipResponse(Object,
   OnTransferOwnershipResponseEventArgs) */

void Assembly-CSharp.dll::MVNetworkSelector::
     MVNetworkSelector_Instance_OnWorldObjectTransferOwnershipResponse
               (MVNetworkSelector *this,Object *sender,OnTransferOwnershipResponseEventArgs *e,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (e != (OnTransferOwnershipResponseEventArgs *)0x0) {
    if ((e->fields).ownerActorNr == 0) {
      return;
    }
    if ((e->fields).success != 0) {
      return;
    }
    this_00 = (Queue_1_SmoothPhysicsMovement_Package_ *)(this->fields).pendingRequestedOwnershipIds;
    if (this_00 != (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) {
      System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
      Queue_1_SmoothPhysicsMovement_Package__Dequeue
                (this_00,MethodInfo__System__Collections__Generic__Queue<int>__Dequeue__);
      this_01 = (this->fields).pendingRequestedOwnershipIds;
      if (this_01 != (Queue_1_System_Int32_ *)0x0) {
        pIVar1 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                 KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                 KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                           ((KogamaSettingNumericBase_1_System_Single_ *)this_01,
                            MethodInfo__System__Collections__Generic__Queue<int>__get_Count__);
        if (pIVar1 == (IKogamaSetting *)0x0) {
          this_02 = (this->fields).esm;
          value = (Object *)func_?();
          if (this_02 == (EditorStateMachine *)0x0) goto code_?;
          FSMEntity::FSMEntity_set_Event((FSMEntity *)this_02,value,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
code_?:
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean OwnershipTest(Int32) */

bool Assembly-CSharp.dll::MVNetworkSelector::MVNetworkSelector_OwnershipTest
               (int32_t id,MethodInfo *method)

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
  this = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this != (MVWorldObjectClientManager *)0x0) {
    this_00 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (this,id,(MethodInfo *)0x0);
    if ((this_00 == (MVWorldObject *)0x0) ||
       (pOVar1 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                 TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                 TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                           ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this_00,
                            (MethodInfo *)0x0), pOVar1 == (Object *)0x0)) {
      return 1;
    }
    pOVar1 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
             TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
             TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                       ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((this_01 != (MVNetworkGame *)0x0) &&
       (pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0),
       pMVar2 != (MVLocalPlayer *)0x0)) {
      if (pOVar1 == (Object *)(pMVar2->fields)._._ActorNr_k__BackingField) {
        return 1;
      }
      return 0;
    }
  }
  uStack3 = 0;
  func_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Boolean RequestOwnership(HashSet`1[System.Int32]) */

bool Assembly-CSharp.dll::MVNetworkSelector::MVNetworkSelector_RequestOwnership
               (MVNetworkSelector *this,HashSet_1_System_Int32_ *selectionSet,MethodInfo *method)

{
  pIStack_1 = (IEqualityComparer_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0xffffffff;
  puStack_2 = &DAT_?;
  iStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int32_t)&iStack_3;
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
  puStack_7 = (undefined4 *)&stack0xffffffb8;
  puStack_4 = &stack0xffffffb8;
  bVar8 = MVNetworkSelector_CanRequestOwnership(selectionSet,(MethodInfo *)0x0);
  if (bVar8 != 0) {
    if (selectionSet == (HashSet_1_System_Int32_ *)0x0) {
      func_?();
      pcVar9 = (code *)swi(3);
      bVar8 = (*pcVar9)();
      return bVar8;
    }
    pHVar10 = System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::MetaData::
             FirstTimeEvent]::HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent__GetEnumerator
                       (&HStack_11,(HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)selectionSet
                        ,MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    CStack_6.klass =
         (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pHVar10->hashset;
    CStack_6.monitor = (MonitorData *)pHVar10->next;
    CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pHVar10->stamp;
    CStack_6.fields.syncRoot = (Object *)pHVar10->current;
    pIStack_1 = (IEqualityComparer_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0;
    while( true ) {
      HStack_11.next =
           (int32_t)
           MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__;
      HStack_11.hashset = (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)&CStack_6;
      cVar12 = func_?();
      if (cVar12 == '\0') break;
      id = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
           Serialization::JsonProperty]::
           Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                     (&CStack_6,
                      MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                     );
      MVNetworkSelector_RequestOwnership_1(this,(int32_t)id,(MethodInfo *)0x0);
    }
    *puStack_7 = 0x47;
    pIStack_1 = (IEqualityComparer_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0xffffffff;
    func_?(&CStack_6,
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                   );
    *unaff_FS_OFFSET = iStack_3;
    return 1;
  }
  *unaff_FS_OFFSET = iStack_3;
  return 0;
}


/* Void RequestOwnership(Int32) */

void Assembly-CSharp.dll::MVNetworkSelector::MVNetworkSelector_RequestOwnership_1
               (MVNetworkSelector *this,int32_t id,MethodInfo *method)

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
  pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                     (pMVar1,id,(MethodInfo *)0x0);
  if (pMVar2 != (MVWorldObject *)0x0) {
    pOVar3 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
             TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
             TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                       ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)pMVar2,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar4 == (MVNetworkGame *)0x0) goto code_?;
    this = (MVNetworkSelector *)&UNK_?;
    pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0);
    if (pMVar5 == (MVLocalPlayer *)0x0) goto code_?;
    if (pOVar3 == (Object *)(pMVar5->fields)._._ActorNr_k__BackingField) {
      return;
    }
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((pMVar1 != (MVWorldObjectClientManager *)0x0) &&
     (pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (pMVar1,id,(MethodInfo *)0x0), pMVar2 != (MVWorldObject *)0x0)) {
    pOVar3 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
             TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
             TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                       ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)pMVar2,(MethodInfo *)0x0);
    if (pOVar3 != (Object *)0x0) {
      return;
    }
    this_00 = (Queue_1_SmoothPhysicsMovement_Package_ *)(this->fields).pendingRequestedOwnershipIds;
    if (this_00 != (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) {
      System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
      Queue_1_SmoothPhysicsMovement_Package__Enqueue
                (this_00,(SmoothPhysicsMovement_Package *)id,
                 MethodInfo__System__Collections__Generic__Queue<int>__Enqueue_int_);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar4 != (MVNetworkGame *)0x0) &&
          (pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0),
          pMVar5 != (MVLocalPlayer *)0x0)) && (this_01 != (MVNetworkGame_OperationRequests *)0x0)) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TransferOwnership
                  (this_01,id,(pMVar5->fields)._._ActorNr_k__BackingField,(Transform *)0x0,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void RequestReleaseOwnership(HashSet`1[System.Int32]) */

void Assembly-CSharp.dll::MVNetworkSelector::MVNetworkSelector_RequestReleaseOwnership
               (MVNetworkSelector *this,HashSet_1_System_Int32_ *selectionSet,MethodInfo *method)

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
  if (selectionSet != (HashSet_1_System_Int32_ *)0x0) {
    pHVar4 = System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::MetaData::
             FirstTimeEvent]::HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent__GetEnumerator
                       ((HashSet_1_T_Enumerator_MV_WorldObject_MetaData_FirstTimeEvent_ *)
                        &stack0xffffffc4,
                        (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)selectionSet,
                        MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    method_00 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pHVar4->hashset;
    uStack_1 = 0;
    while( true ) {
      pMVar5 = MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__;
      cVar6 = func_?();
      if (cVar6 == '\0') {
        pMVar5->methodPointer = (Il2CppMethodPointer)0x39;
        uStack_1 = 0xffffffff;
        func_?(&stack0xffffffd4,
                        MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                       );
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      id = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
           Serialization::JsonProperty]::
           Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                     ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)&stack0xffffffd4,
                      MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                     );
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
      this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_00 == (MVWorldObjectClientManager *)0x0) break;
      this_01 = (PrefabPool *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (this_00,(int32_t)id,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        unaff_ESI = (MethodInfo *)&UNK_?;
        func_?();
      }
      this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((this_02 == (MVNetworkGame *)0x0) ||
         (this_03 = (TransformNetworkManager *)
                    UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                    TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                    TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                              ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this_02,
                               (MethodInfo *)0x0), this_03 == (TransformNetworkManager *)0x0))
      break;
      TransformNetworkManager::TransformNetworkManager_RemoveNetworkObject
                (this_03,(int32_t)id,unaff_ESI);
      this_04 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if ((this_01 == (PrefabPool *)0x0) ||
         (t = PrefabPool::PrefabPool_get_MVPointLightPrefab(this_01,in_stack_7),
         this_04 == (MVNetworkGame_OperationRequests *)0x0)) break;
      in_stack_7 = (MethodInfo *)0x0;
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TransferOwnership
                (this_04,(int32_t)id,0,(Transform *)t,(MethodInfo *)method_00);
    }
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void RequestReleaseOwnership(Int32) */

void Assembly-CSharp.dll::MVNetworkSelector::MVNetworkSelector_RequestReleaseOwnership_1
               (int32_t id,MethodInfo *method)

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
  this = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this != (MVWorldObjectClientManager *)0x0) {
    this_00 = (PrefabPool *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (this,id,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_01 != (MVNetworkGame *)0x0) {
      this_02 = (TransformNetworkManager *)
                UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                          ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this_01,
                           (MethodInfo *)0x0);
      if (this_02 != (TransformNetworkManager *)0x0) {
        TransformNetworkManager::TransformNetworkManager_RemoveNetworkObject
                  (this_02,id,(MethodInfo *)0x0);
        this_03 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        if (this_00 != (PrefabPool *)0x0) {
          t = PrefabPool::PrefabPool_get_MVPointLightPrefab(this_00,(MethodInfo *)0x0);
          if (this_03 != (MVNetworkGame_OperationRequests *)0x0) {
            MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TransferOwnership
                      (this_03,id,0,(Transform *)t,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* MVNetworkSelector(EditorStateMachine) */

void Assembly-CSharp.dll::MVNetworkSelector::MVNetworkSelector__ctor
               (MVNetworkSelector *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__System__Collections__Generic__Queue<int>;
  this_00 = (Queue_1_SmoothPhysicsMovement_Package_ *)func_?();
  System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
  Queue_1_SmoothPhysicsMovement_Package___ctor
            (this_00,MethodInfo__System__Collections__Generic__Queue<int>__Queue__);
  (this->fields).pendingRequestedOwnershipIds = (Queue_1_System_Int32_ *)this_00;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  bVar1 = cRam_? == '\0';
  (this->fields).esm = esm;
  if (bVar1) {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar2 != (MVWorldObjectClientManager *)0x0) {
    pEVar3 = (pMVar2->fields).OnWorldObjectTransferOwnershipResponse;
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,unaff_EDI,
               MethodInfo__MVNetworkSelector__Instance_OnWorldObjectTransferOwnershipResponse_System__Object__OnTransferOwnershipResponseEventArgs_
               ,
               MethodInfo__System__EventHandler<OnTransferOwnershipResponseEventArgs>__EventHandler_System__Object__void__
              );
    pEStack4 =
         (EventHandler_1_OnTransferOwnershipResponseEventArgs_ *)
         mscorlib.dll::System::Delegate::Delegate_Combine
                   ((Delegate *)pEVar3,(Delegate *)this_01,(MethodInfo *)0x0);
    pEVar3 = (EventHandler_1_OnTransferOwnershipResponseEventArgs_ *)0x0;
    if (pEStack4 != (EventHandler_1_OnTransferOwnershipResponseEventArgs_ *)0x0) {
      if (pEStack4->klass ==
          TypeInfo__System__EventHandler<OnTransferOwnershipResponseEventArgs>) {
        pEVar3 = pEStack4;
      }
      pEStack5 = TypeInfo__System__EventHandler<OnTransferOwnershipResponseEventArgs>;
      if (pEVar3 == (EventHandler_1_OnTransferOwnershipResponseEventArgs_ *)0x0)
      goto code_?;
    }
    (pMVar2->fields).OnWorldObjectTransferOwnershipResponse = pEVar3;
    return;
  }
  func_?();
  pEStack4 = extraout_ECX;
  pEStack5 = extraout_EDX;
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* MVWorldObjectClientManager get_WOCM() */

MVWorldObjectClientManager *
Assembly-CSharp.dll::MVNetworkSelector::MVNetworkSelector_get_WOCM(MethodInfo *method)

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


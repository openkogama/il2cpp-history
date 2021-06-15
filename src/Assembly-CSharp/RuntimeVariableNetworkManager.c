
/* Void AddRuntimeDataVariables(Int32) */

void Assembly-CSharp.dll::RuntimeVariableNetworkManager::
     RuntimeVariableNetworkManager_AddRuntimeDataVariables
               (RuntimeVariableNetworkManager *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)(this->fields).runtimeDataVariables;
  if (this_00 != (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)0x0) {
    bVar1 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds::Api::
            NativeAdType]::HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                      (this_00,woID,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    if (bVar1 != 0) goto code_?;
    this_01 = (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)
              (this->fields).runtimeDataVariables;
    if (this_01 != (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
      UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
                (this_01,(UnityWebRequest *)woID,
                 MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
      return;
    }
  }
  func_?();
code_?:
  this_02 = (IsolatedStorageException *)func_?();
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1
            (this_02,StringLiteral_RuntimeDataVariables_allready_ex,(MethodInfo *)0x0);
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean ContainsRuntimeVariables(Int32) */

bool Assembly-CSharp.dll::RuntimeVariableNetworkManager::
     RuntimeVariableNetworkManager_ContainsRuntimeVariables
               (RuntimeVariableNetworkManager *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)(this->fields).runtimeDataVariables;
  if (this_00 != (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)0x0) {
    bVar1 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds::Api::
            NativeAdType]::HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                      (this_00,woID,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    return bVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Void RemoveRuntimeDataVariables(Int32) */

void Assembly-CSharp.dll::RuntimeVariableNetworkManager::
     RuntimeVariableNetworkManager_RemoveRuntimeDataVariables
               (RuntimeVariableNetworkManager *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)(this->fields).runtimeDataVariables;
  if (this_00 != (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)0x0) {
    bVar1 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds::Api::
            NativeAdType]::HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                      (this_00,woID,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    if (bVar1 == 0) goto code_?;
    this_01 = (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)
              (this->fields).runtimeDataVariables;
    if (this_01 != (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::MetaData::
      FirstTimeEvent]::HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent__Remove
                (this_01,woID,MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_);
      return;
    }
  }
  func_?();
code_?:
  this_02 = (IsolatedStorageException *)func_?();
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(this_02,StringLiteral_wo_Id_not_found,(MethodInfo *)0x0);
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
  puStack_4 = &stack0xffffff9c;
  puVar5 = &stack0xffffff9c;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pOStack_6 = (Object *)0x0;
  CStack_7.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_7.monitor = (MonitorData *)0x0;
  CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_7.fields.syncRoot = (Object *)0x0;
  CStack_8.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_8.monitor = (MonitorData *)0x0;
  CStack_8.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_8.fields.syncRoot = (Object *)0x0;
  func_?();
  uStack_9 = 0xffffffff;
  pHVar10 = (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)(this->fields).runtimeDataVariables;
  piStack_11 = (int *)&stack0xffffff9c;
  puStack_4 = &stack0xffffff9c;
  if (pHVar10 == (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0) {
code_?:
    pOVar12 = (Object *)func_?(0);
  }
  else {
    piStack_11 = (int *)&stack0xffffff9c;
    puStack_4 = &stack0xffffff9c;
    pHVar13 = System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::MetaData::
             FirstTimeEvent]::HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent__GetEnumerator
                       ((HashSet_1_T_Enumerator_MV_WorldObject_MetaData_FirstTimeEvent_ *)
                        &pHStack_14,pHVar10,
                        MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    CStack_7.klass =
         (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pHVar13->hashset;
    CStack_7.monitor = (MonitorData *)pHVar13->next;
    CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pHVar13->stamp;
    CStack_7.fields.syncRoot = (Object *)pHVar13->current;
    uStack_1 = 0;
    while (cVar15 = func_?(&CStack_7,
                                   MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                                  ), cVar15 != '\0') {
      unaff_EDI = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            (&CStack_7,
                             MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                            );
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_03 == (MVWorldObjectClientManager *)0x0) goto code_?;
      wo = (MVWorldObjectClient *)
           MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                     (this_03,(int32_t)unaff_EDI,(MethodInfo *)0x0);
      bVar16 = RuntimeVariableNetworkManager_SendRuntimeData_1(this,wo,0,(MethodInfo *)0x0);
      if (bVar16 != 0) {
        this_00 = (List_1_UIPushOption_ *)(this->fields).removeList;
        if (this_00 == (List_1_UIPushOption_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  (this_00,(UIPushOption__Enum)unaff_EDI,
                   MethodInfo__System__Collections__Generic__List<int>__Add_int_);
      }
    }
    pOVar17 = (Object *)0x0;
    *piStack_11 = 0x5d;
    uStack_1 = 0xffffffff;
    func_?(&CStack_7,
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                   );
    pOVar12 = pOStack_6;
    unaff_EDI = pOVar17;
    if (pOStack_6 == (Object *)0x0) {
      if (*piStack_11 == 0x5d) {
        pOVar17 = (Object *)0xffffffff;
      }
      this_01 = (List_1_UnityEngine_Color32_ *)(this->fields).removeList;
      unaff_EDI = pOVar17;
      if (this_01 != (List_1_UnityEngine_Color32_ *)0x0) {
        pLVar18 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                 List_1_UnityEngine_Color32__GetEnumerator
                           ((List_1_T_Enumerator_UnityEngine_Color32_ *)&pHStack_14,this_01,
                            MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
        CStack_8.klass =
             (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar18->l;
        CStack_8.monitor = (MonitorData *)pLVar18->next;
        CStack_8.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar18->ver;
        CStack_8.fields.syncRoot = (Object *)(pLVar18->current).rgba;
        uStack_1 = 2;
        while (cVar15 = func_?(), unaff_EDI = pOStack_6, cVar15 != '\0') {
          pOVar12 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             (&CStack_8,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__get_Current__
                             );
          pHVar10 = (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)
                   (this->fields).runtimeDataVariables;
          unaff_EDI = pOVar17;
          if (pHVar10 == (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0)
          goto code_?;
          System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::MetaData::
          FirstTimeEvent]::HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent__Remove
                    (pHVar10,(FirstTimeEvent__Enum)pOVar12,
                     MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_);
        }
        piStack_11[(int)((int)&pOVar17->klass + 1)] = 0xa3;
        uStack_1 = 0xffffffff;
        func_?(&CStack_8,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__
                       );
        if (unaff_EDI != (Object *)0x0) goto code_?;
        this_02 = (List_1_UnityEngine_UIVertex_ *)(this->fields).removeList;
        if (this_02 != (List_1_UnityEngine_UIVertex_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
          List_1_UnityEngine_UIVertex__Clear
                    (this_02,MethodInfo__System__Collections__Generic__List<int>__Clear__);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
      goto code_?;
    }
  }
  func_?(pOVar12,0,0);
code_?:
  func_?(unaff_EDI,0,0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (wo == (MVWorldObjectClient *)0x0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_Attempt_to_update_world_object__,(MethodInfo *)0x0);
    return 1;
  }
  this_00 = PrefabPool::PrefabPool_get_MVTimeTriggerPrefab((PrefabPool *)wo,(MethodInfo *)0x0);
  if (this_00 != (ObjectPrefab *)0x0) {
    worldObjectRunTimeData =
         MVRuntimeDataVariables::MVRuntimeDataVariables_Send
                   ((MVRuntimeDataVariables *)this_00,immediateSend,(MethodInfo *)0x0);
    if (worldObjectRunTimeData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pOVar1 = System.Core.dll::System::Linq::
               Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::Generic::
               KeyValuePair`2[System::Object,System::Object],System::Object]::
               Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                         ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                           *)worldObjectRunTimeData,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Count__
                         );
      if (0 < (int)pOVar1) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        worldObjectID =
             mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)wo,(MethodInfo *)0x0);
        if (this_01 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
        MVNetworkGame+OperationRequests::
        MVNetworkGame_OperationRequests_UpdateWorldObjectRunTimeData
                  (this_01,(int32_t)worldObjectID,worldObjectRunTimeData,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  (this->fields).runtimeDataVariables = (HashSet_1_System_Int32_ *)this_00;
  method_00 = TypeInfo__System__Collections__Generic__List<int>;
  this_01 = (List_1_UnityEngine_Vector4_ *)func_?();
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_01,MethodInfo__System__Collections__Generic__List<int>__List__);
  (this->fields).removeList = (List_1_System_Int32_ *)this_01;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  return;
}



/* Void CloneWorldObjectTree(MVWorldObjectClient, Boolean, Boolean, Boolean) */

void Assembly-CSharp.dll::MVWorldObjectClientManager::
     MVWorldObjectClientManager_CloneWorldObjectTree
               (MVWorldObjectClientManager *this,MVWorldObjectClient *root,bool localOwner,
               bool setAsPreviewItem,bool cloneToRootGroup,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (pMVar1 == (MVNetworkGame_OperationRequests *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_CreateBasicCloneData
            ((MVNetworkGame_OperationRequests *)root,_localOwner,setAsPreviewItem,cloneToRootGroup,0
             ,(MethodInfo *)0x0);
  piVar3 = (int *)(root->fields)._.itemId;
  if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
    func_?();
  }
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x110))(piVar3,0x21);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean Contains(Int32) */

bool Assembly-CSharp.dll::MVWorldObjectClientManager::MVWorldObjectClientManager_Contains
               (MVWorldObjectClientManager *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).worldObjects;
  if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,woID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                      );
    return bVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Void GetAllWoIds(Int32, HashSet`1[System.Int32]) */

void Assembly-CSharp.dll::MVWorldObjectClientManager::MVWorldObjectClientManager_GetAllWoIds
               (MVWorldObjectClientManager *this,int32_t id,HashSet_1_System_Int32_ *ids,
               MethodInfo *method)

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
  CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_6.monitor = (MonitorData *)0x0;
  CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_6.fields.syncRoot = (Object *)0x0;
  func_?();
  puStack_7 = (undefined4 *)&stack0xffffffb0;
  puStack_4 = &stack0xffffffb0;
  if (cRam_? == '\0') {
    puStack_7 = (undefined4 *)&stack0xffffffb0;
    puStack_4 = &stack0xffffffb0;
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMStack_8 = (MVGroup *)0x0;
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).worldObjects;
  if (this_00 ==
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
code_?:
    pMVar9 = (MethodInfo *)0x0;
  }
  else {
    pMVar9 = 
    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
    ;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Experimental
    ::TerrainAPI::TerrainUtility+TerrainMap]::
    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__TryGetValue
              (this_00,id,(TerrainUtility_TerrainMap **)&pMStack_8,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
              );
    unaff_EDI = pMStack_8;
    if (pMStack_8 != (MVGroup *)0x0) {
      item = (UnityWebRequest *)
             mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items
                       ((Collection_1_VoxelHit_ *)pMStack_8,(MethodInfo *)0x0);
      if (ids == (HashSet_1_System_Int32_ *)0x0) goto code_?;
      System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
      UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
                ((HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)ids,item,
                 MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
      pTVar10 = mscorlib.dll::System::Object::Object_GetType((Object *)unaff_EDI,(MethodInfo *)0x0);
      handle = TypeRef__MVGroup;
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        CStack_6.fields.syncRoot = (Object *)TypeInfo__System__Type;
        CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)&UNK_?
        ;
        func_?();
      }
      pTVar11 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
      if (pTVar10 != pTVar11) goto code_?;
      pMVar12 = unaff_EDI->klass;
      bStack_13 = (TypeInfo__MVGroup->_1).naturalAligment;
      if ((pMVar12->_1).naturalAligment < bStack_13) {
code_?:
        bVar14 = false;
      }
      else {
        bVar14 = true;
        if ((MVGroup__Class *)(pMVar12->_1).typeHierarchy[bStack_13 - 1] != TypeInfo__MVGroup)
        goto code_?;
      }
      pMVar15 = (MVGroup *)0x0;
      if (bVar14) {
        pMVar15 = unaff_EDI;
      }
      if (pMVar15 == (MVGroup *)0x0) goto code_?;
      if (((pMVar12->_1).naturalAligment < bStack_13) ||
         ((MVGroup__Class *)(pMVar12->_1).typeHierarchy[bStack_13 - 1] != TypeInfo__MVGroup)) {
        bVar14 = false;
      }
      else {
        bVar14 = true;
      }
      pMVar15 = (MVGroup *)0x0;
      if (bVar14) {
        pMVar15 = unaff_EDI;
      }
      if (pMVar15 == (MVGroup *)0x0) goto code_?;
      this_01 = (List_1_UnityEngine_Color32_ *)
                MVGroup::MVGroup_get_Children(pMVar15,(MethodInfo *)0x0);
      if (this_01 != (List_1_UnityEngine_Color32_ *)0x0) {
        pLVar16 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                 List_1_UnityEngine_Color32__GetEnumerator
                           ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffbc,this_01,
                            MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                           );
        CStack_6.klass =
             (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar16->l;
        CStack_6.monitor = (MonitorData *)pLVar16->next;
        CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar16->ver;
        CStack_6.fields.syncRoot = (Object *)(pLVar16->current).rgba;
        uStack_1 = 0;
        while (cVar17 = func_?(), cVar17 != '\0') {
          this_02 = (Collection_1_VoxelHit_ *)
                    mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                    Serialization::JsonProperty]::
                    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                              (&CStack_6,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                              );
          pMVar9 = (MethodInfo *)0x0;
          if (this_02 == (Collection_1_VoxelHit_ *)0x0) goto code_?;
          id_00 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                  Collection_1_VoxelHit__get_Items(this_02,(MethodInfo *)0x0);
          MVWorldObjectClientManager_GetAllWoIds(this,(int32_t)id_00,ids,(MethodInfo *)0x0);
        }
        *puStack_7 = 0x74;
        uStack_1 = 0xffffffff;
        func_?(&CStack_6,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                       );
code_?:
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      goto code_?;
    }
  }
code_?:
  func_?(pMVar9);
code_?:
  func_?(unaff_EDI);
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* List`1[MVWorldObjectClient] GetBlueprintWorldObjectsByType(Type) */

List_1_MVWorldObjectClient_ *
Assembly-CSharp.dll::MVWorldObjectClientManager::
MVWorldObjectClientManager_GetBlueprintWorldObjectsByType
          (MVWorldObjectClientManager *this,Type *type,MethodInfo *method)

{
  item = (TerrainUtility_TerrainMap *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puVar1 = (undefined4 *)&stack0xffffffb4;
  func_?();
  this_02 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_02,MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
  this_00 = (this->fields).worldObjectMapping;
  if (this_00 == (MVWorldObjectClientManager_WorldObjectMapping *)0x0) {
code_?:
    func_?();
    func_?(unaff_ESI,0);
    pcVar2 = (code *)swi(3);
    pLVar3 = (List_1_MVWorldObjectClient_ *)(*pcVar2)();
    return pLVar3;
  }
  this_03 = (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)
            MVWorldObjectClientManager+WorldObjectMapping::
            MVWorldObjectClientManager_WorldObjectMapping_GetWorldObjectTypeSet
                      (this_00,WorldObjectType__Enum_Blueprint,(MethodInfo *)0x0);
  if (this_03 != (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0) {
    pHVar4 = System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::MetaData::
             FirstTimeEvent]::HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent__GetEnumerator
                       ((HashSet_1_T_Enumerator_MV_WorldObject_MetaData_FirstTimeEvent_ *)
                        &stack0xffffffc0,this_03,
                        MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    method_00 = (MethodInfo *)pHVar4->next;
    method_01 = (MethodInfo *)pHVar4->current;
    while (cVar5 = func_?(), cVar5 != '\0') {
      unaff_ESI = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                             &stack0xffffffd0,
                             MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                            );
      this_01 = (this->fields).worldObjects;
      if (this_01 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) goto code_?;
      bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__ContainsKey
                        ((Dictionary_2_System_Int32_System_Object_ *)this_01,(int32_t)unaff_ESI,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                        );
      if (bVar6 == 0) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)StringLiteral_WorldObjectTypeSet_contains_id_w,(MethodInfo *)0x0);
      }
      else {
        pDVar7 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)(this->fields).worldObjects;
        if (((pDVar7 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                         *)0x0) ||
            (this_04 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                       Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                 (pDVar7,(int32_t)unaff_ESI,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                                 ), this_04 == (TerrainUtility_TerrainMap *)0x0)) ||
           (o = mscorlib.dll::System::Object::Object_GetType((Object *)this_04,method_00),
           type == (Type *)0x0)) goto code_?;
        method_00 = (MethodInfo *)type;
        bVar6 = mscorlib.dll::System::Type::Type_Equals_1(type,o,method_01);
        if (bVar6 != 0) {
          pDVar7 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)(this->fields).worldObjects;
          if (pDVar7 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                         *)0x0) goto code_?;
          method_01 = (MethodInfo *)&UNK_?;
          item = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                 ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                 Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                           (pDVar7,(int32_t)unaff_ESI,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                           );
          if (this_02 == (List_1_UnityEngine_Vector4_ *)0x0) goto code_?;
          puVar1 = (undefined4 *)&UNK_?;
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                    ((List_1_UIPushOption_ *)this_02,(UIPushOption__Enum)item,
                     MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                    );
        }
      }
    }
    *puVar1 = 0xa0;
    func_?(&stack0xffffffd0);
  }
  *unaff_FS_OFFSET = item;
  return (List_1_MVWorldObjectClient_ *)this_02;
}


/* MVRigidBody GetEnabledMonoBehaviourHighestInHierarchy[MVRigidBody](GameObject) */

MVRigidBody *
Assembly-CSharp.dll::MVWorldObjectClientManager::
MVWorldObjectClientManager_GetEnabledMonoBehaviourHighestInHierarchy_1
          (GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (gameObject != (GameObject *)0x0) {
    pMVar1 = (MVRigidBody *)(*(code *)(*method->parameters)->data)(gameObject,*method->parameters);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      if (pMVar1 == (MVRigidBody *)0x0) goto code_?;
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                        ((Behaviour *)pMVar1,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        return pMVar1;
      }
    }
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (gameObject,(MethodInfo *)0x0);
    if (pTVar3 != (Transform *)0x0) {
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                         (pTVar3,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)pTVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        if ((method->parameters[1][0x17].type & 1) == 0) {
          func_?(method->parameters[1]);
        }
        return (MVRigidBody *)0x0;
      }
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (gameObject,(MethodInfo *)0x0);
      if (pTVar3 != (Transform *)0x0) {
        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                           (pTVar3,(MethodInfo *)0x0);
        if (pTVar3 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                    ((Component_1 *)pTVar3,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pMVar1 = (MVRigidBody *)(*(code *)method->parameters[2]->data)();
          return pMVar1;
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  pMVar1 = (MVRigidBody *)(*pcVar4)();
  return pMVar1;
}


/* MVWorldObjectClient GetMVObject(Transform) */

MVWorldObjectClient *
Assembly-CSharp.dll::MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
          (Transform *t,MethodInfo *method)

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
  pTVar2 = t;
  if (((t != (Transform *)0x0) &&
      (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)t,(MethodInfo *)0x0), this_01 != (GameObject *)0x0)) &&
     (key = (undefined *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                      ((Object_1 *)this_01,(MethodInfo *)0x0),
     pMVar1 != (MVWorldObjectClientManager *)0x0)) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pMVar3 = (pMVar1->fields).worldObjectMapping;
    t = (Transform *)0x0;
    if (pMVar3 != (MVWorldObjectClientManager_WorldObjectMapping *)0x0) {
      if (cRam_? == '\0') {
        key = &UNK_?;
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      this = (pMVar3->fields).gameObjectIdToWorldObjectIdMap;
      if (this != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
        bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Int32]::Dictionary_2_System_Int32_System_Int32__TryGetValue
                          (this,(int32_t)key,(int32_t *)&t,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_int>__TryGetValue_int__System__Int32__
                          );
        if (bVar4 != 0) {
          this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)(pMVar1->fields).worldObjects;
          if (this_00 ==
              (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)0x0) goto code_?;
          pMVar5 = (MVWorldObjectClient *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                   Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                             (this_00,(int32_t)t,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                             );
          if (pMVar5 != (MVWorldObjectClient *)0x0) {
            return pMVar5;
          }
        }
        x = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                      (pTVar2,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          method = (MethodInfo *)TypeInfo__UnityEngine__Object;
          t = (Transform *)&UNK_?;
          func_?();
        }
        method = (MethodInfo *)0x0;
        t = (Transform *)0x0;
        bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar4 == 0) {
          return (MVWorldObjectClient *)0x0;
        }
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                           (pTVar2,(MethodInfo *)0x0);
        pMVar5 = MVWorldObjectClientManager_GetMVObject(pTVar2,(MethodInfo *)0x0);
        return pMVar5;
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  pMVar5 = (MVWorldObjectClient *)(*pcVar6)();
  return pMVar5;
}


/* MVWorldObjectClient GetSingletonWorldObjectByType(WorldObjectType) */

MVWorldObjectClient *
Assembly-CSharp.dll::MVWorldObjectClientManager::
MVWorldObjectClientManager_GetSingletonWorldObjectByType
          (MVWorldObjectClientManager *this,WorldObjectType__Enum worldObjectType,MethodInfo *method
          )

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  WVar1 = worldObjectType;
  this_00 = MVWorldObjectClientManager_GetWorldObjectsByType(this,worldObjectType,(MethodInfo *)0x0)
  ;
  if (this_00 == (List_1_MVWorldObjectClient_ *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    pMVar3 = (MVWorldObjectClient *)(*pcVar2)();
    return pMVar3;
  }
  pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
           Serialization::JsonProperty]::
           Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                     ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                      MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                     );
  if (1 < (int)pOVar4) {
    worldObjectType = WVar1;
    pOVar4 = (Object *)func_?();
    mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::Serialization::
    JsonProperty]::
    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
              ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
               MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__);
    arg1 = (Object *)func_?(TypeInfo__System__Int32);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      worldObjectType = (WorldObjectType__Enum)TypeInfo__System__String;
      func_?();
    }
    worldObjectType = WorldObjectType__Enum_PlayModeAvatar;
    pSVar5 = mscorlib.dll::System::String::String_Format_1
                       (StringLiteral_WorldObjectType__0__is_not_a_sin,pOVar4,arg1,(MethodInfo *)0x0
                       );
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)pSVar5,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)0x0;
  }
  pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
           Serialization::JsonProperty]::
           Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                     ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                      MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                     );
  if (pOVar4 != (Object *)0x0) {
    worldObjectType =
         (WorldObjectType__Enum)
         MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_;
    pMVar3 = (MVWorldObjectClient *)
             mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
             IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                       ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,0,
                        MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                       );
    return pMVar3;
  }
  worldObjectType = (WorldObjectType__Enum)&worldObjectType;
  pOVar4 = (Object *)func_?();
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    worldObjectType = (WorldObjectType__Enum)TypeInfo__System__String;
    func_?();
  }
  worldObjectType = WorldObjectType__Enum_PlayModeAvatar;
  pSVar5 = mscorlib.dll::System::String::String_Format
                     (StringLiteral_Singleton_of_worldObject_of_type,pOVar4,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?();
  }
  method = (MethodInfo *)&UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
            ((Object *)pSVar5,(MethodInfo *)0x0);
  return (MVWorldObjectClient *)0x0;
}


/* WorldObjectClientRef`1[MVRoundCube] GetSingletonWorldObjectRef[MVRoundCube]() */

WorldObjectClientRef_1_MVRoundCube_ *
Assembly-CSharp.dll::MVWorldObjectClientManager::
MVWorldObjectClientManager_GetSingletonWorldObjectRef_2
          (MVWorldObjectClientManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).worldObjectMapping;
  worldObjectType = WorldObjectType__Enum_Battery;
  handle.value = *method->parameters;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  type = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager_WorldObjectMapping *)0x0) {
    bVar1 = MVWorldObjectClientManager+WorldObjectMapping::
            MVWorldObjectClientManager_WorldObjectMapping_TryGetWorldObjectTypeFromObjectType
                      (this_00,type,(WorldObjectType__Enum *)&stack0xfffffff8,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      this_01 = MVWorldObjectClientManager_GetSingletonWorldObjectByType
                          (this,worldObjectType,(MethodInfo *)0x0);
      if (this_01 != (MVWorldObjectClient *)0x0) {
        mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
        Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_01,(MethodInfo *)0x0);
        pIVar2 = method->parameters[1];
        if ((pIVar2[0x17].type & 1) == 0) {
          pIStack3 = pIVar2;
          func_?();
        }
        pIStack3 = pIVar2;
        pWVar4 = (WorldObjectClientRef_1_MVRoundCube_ *)func_?();
        pIStack5 = method->parameters[2];
        (*(code *)pIStack5->data)();
        return pWVar4;
      }
    }
    return (WorldObjectClientRef_1_MVRoundCube_ *)0x0;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pWVar4 = (WorldObjectClientRef_1_MVRoundCube_ *)(*pcVar6)();
  return pWVar4;
}


/* MVRoundCube GetSingletonWorldObject[MVRoundCube]() */

MVRoundCube *
Assembly-CSharp.dll::MVWorldObjectClientManager::
MVWorldObjectClientManager_GetSingletonWorldObject_4
          (MVWorldObjectClientManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  worldObjectType = WorldObjectType__Enum_Battery;
  this_00 = (this->fields).worldObjectMapping;
  handle.value = *method->parameters;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  type = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager_WorldObjectMapping *)0x0) {
    bVar1 = MVWorldObjectClientManager+WorldObjectMapping::
            MVWorldObjectClientManager_WorldObjectMapping_TryGetWorldObjectTypeFromObjectType
                      (this_00,type,(WorldObjectType__Enum *)&stack0xfffffff8,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      if ((method->parameters[1][0x17].type & 1) == 0) {
        func_?();
      }
    }
    else {
      pMVar2 = MVWorldObjectClientManager_GetSingletonWorldObjectByType
                         (this,worldObjectType,(MethodInfo *)0x0);
      handle.value = method->parameters[1];
      pIStack3 = handle.value;
      if (pMVar2 != (MVWorldObjectClient *)0x0) {
        if ((((Il2CppType *)((int)handle.value + 0xb8))->type & 1) == 0) {
          func_?();
        }
        pIStack3 = handle.value;
        pMVar4 = (MVRoundCube *)func_?();
        if (pMVar4 != (MVRoundCube *)0x0) {
          return pMVar4;
        }
        goto code_?;
      }
      if ((((Il2CppType *)((int)handle.value + 0xb8))->type & 1) == 0) {
        func_?();
        return (MVRoundCube *)0x0;
      }
    }
    return (MVRoundCube *)0x0;
  }
  func_?();
code_?:
  pIStack3 = handle.value;
  func_?();
  pcVar5 = (code *)swi(3);
  pMVar4 = (MVRoundCube *)(*pcVar5)();
  return pMVar4;
}


/* WorldObjectType GetSpawnPointTypeForNoneTeam() */

WorldObjectType__Enum
Assembly-CSharp.dll::MVWorldObjectClientManager::
MVWorldObjectClientManager_GetSpawnPointTypeForNoneTeam
          (MVWorldObjectClientManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = MVWorldObjectClientManager_GetWorldObjectsByType
                     (this,WorldObjectType__Enum_SpawnPointBlue,(MethodInfo *)0x0);
  if (pLVar1 != (List_1_MVWorldObjectClient_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                       );
    if (0 < (int)pOVar2) {
      return WorldObjectType__Enum_SpawnPointBlue;
    }
    pLVar1 = MVWorldObjectClientManager_GetWorldObjectsByType
                       (this,WorldObjectType__Enum_SpawnPointRed,(MethodInfo *)0x0);
    if (pLVar1 != (List_1_MVWorldObjectClient_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                          MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                         );
      if (0 < (int)pOVar2) {
        return WorldObjectType__Enum_SpawnPointRed;
      }
      pLVar1 = MVWorldObjectClientManager_GetWorldObjectsByType
                         (this,WorldObjectType__Enum_SpawnPointGreen,(MethodInfo *)0x0);
      if (pLVar1 != (List_1_MVWorldObjectClient_ *)0x0) {
        pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                            MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                           );
        if (0 < (int)pOVar2) {
          return WorldObjectType__Enum_SpawnPointGreen;
        }
        pLVar1 = MVWorldObjectClientManager_GetWorldObjectsByType
                           (this,WorldObjectType__Enum_SpawnPointYellow,(MethodInfo *)0x0);
        if (pLVar1 != (List_1_MVWorldObjectClient_ *)0x0) {
          pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                              MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                             );
          WVar3 = WorldObjectType__Enum_SpawnPointYellow;
          if ((int)pOVar2 < 1) {
            WVar3 = WorldObjectType__Enum_SpawnPoint;
          }
          return WVar3;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  WVar3 = (*pcVar4)();
  return WVar3;
}


/* Boolean GetUnmodifiedWorldObject(KoGaMaPackageClient, Int32 ByRef) */

bool Assembly-CSharp.dll::MVWorldObjectClientManager::
     MVWorldObjectClientManager_GetUnmodifiedWorldObject
               (MVWorldObjectClientManager *this,KoGaMaPackageClient *koGaMaPackageClient,
               int32_t *worldObjectId,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bStack_4 = 0;
  func_?();
  if ((koGaMaPackageClient != (KoGaMaPackageClient *)0x0) &&
     (this_06 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)(koGaMaPackageClient->fields).worldObjects,
     this_06 !=
     (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)0x0
     )) {
    this_01 = (Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_ *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
              Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                        (this_06,(koGaMaPackageClient->fields).worldObjectRoot,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                        );
    this_00 = (this->fields).worldObjects;
    if ((this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) &&
       (this_02 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[WinningConditionType,System::Object]::
                  Dictionary_2_WinningConditionType_System_Object__get_Values
                            ((Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                            ),
       this_02 !=
       (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0)) {
      mscorlib.dll::System::Collections::Generic::
      Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
      Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                  *)&stack0xffffffa8,this_02,
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                );
      uStack_1 = 0;
      do {
        do {
          do {
            do {
              cVar5 = func_?();
              if (cVar5 == '\0') {
                iVar6 = 0xcd;
                goto code_?;
              }
              this_03 = (Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_
                         *)func_?();
              if (this_03 ==
                  (Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_ *)0x0
                 ) goto code_?;
              pOVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                       ::Serialization::JsonProperty]::
                       Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                 ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                  this_03,in_stack_8);
            } while (pOVar7 != (Object *)(this->fields).rootGroupId);
            in_stack_8 = (MethodInfo *)&UNK_?;
            pOVar7 = System.dll::System::Collections::Generic::
                     SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                     ::Single,System::Object]::
                     SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                               ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                                 *)this_03,(MethodInfo *)0x0);
            if (this_01 ==
                (Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_ *)0x0)
            goto code_?;
            pOVar9 = System.dll::System::Collections::Generic::
                     SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                     ::Single,System::Object]::
                     SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                               ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                                 *)this_01,(MethodInfo *)this_06);
          } while (pOVar7 != pOVar9);
          this_06 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)&UNK_?;
          pOVar7 = System.Core.dll::System::Linq::
                   Enumerable+<CreateGroupByIterator>c__Iterator5`2[System::Object,System::Object]::
                   Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                             (this_03,(MethodInfo *)0x0);
          pOVar9 = System.Core.dll::System::Linq::
                   Enumerable+<CreateGroupByIterator>c__Iterator5`2[System::Object,System::Object]::
                   Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                             (this_01,(MethodInfo *)0x0);
        } while ((pOVar7 != pOVar9) ||
                (method_00 = this_01, cVar5 = func_?(0x2b), cVar5 == '\0'));
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        this_04 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (this_04 == (MVNetworkGame *)0x0) goto code_?;
        this_06 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)&UNK_?;
        this_05 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_04,(MethodInfo *)0x0);
        if (this_05 == (MVLocalPlayer *)0x0) goto code_?;
        pOVar7 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                 TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                 TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                           ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this_05,
                            (MethodInfo *)method_00);
      } while (pOVar7 != (Object *)0x0);
      pOVar7 = (Object *)func_?();
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      message = mscorlib.dll::System::String::String_Concat
                          ((Object *)StringLiteral_InsertedByProfileID_,pOVar7,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)message,(MethodInfo *)0x0);
      pIVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_03,(MethodInfo *)0x0)
      ;
      bStack_4 = 1;
      *worldObjectId = (int32_t)pIVar10;
      iVar6 = 0xcf;
code_?:
      uStack_1 = 0xffffffff;
      func_?();
      if (iVar6 != 0xcf) {
        *unaff_FS_OFFSET = uStack_3;
        return 0;
      }
      *unaff_FS_OFFSET = uStack_3;
      return bStack_4;
    }
  }
code_?:
  func_?(0);
  func_?();
  pcVar11 = (code *)swi(3);
  bVar12 = (*pcVar11)();
  return bVar12;
}


/* MVWorldObjectClient GetValidSpawnPoint() */

MVWorldObjectClient *
Assembly-CSharp.dll::MVWorldObjectClientManager::MVWorldObjectClientManager_GetValidSpawnPoint
          (MVWorldObjectClientManager *this,MethodInfo *method)

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
  if (pMVar1 != (MVNetworkGame *)0x0) {
    this_00 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                        ((DayNightCycle *)pMVar1,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame *)0x0) {
      this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
      if (this_01 != (MVLocalPlayer *)0x0) {
        team = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
               KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
               KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                         ((KogamaSettingNumericBase_1_System_Single_ *)this_01,(MethodInfo *)0x0);
        if (this_00 != (SkyParam *)0x0) {
          this_02 = MVTeamManager::MVTeamManager_GetOnlySpawnPointsForTeam
                              ((MVTeamManager *)this_00,(MVTeam__Enum)team,(MethodInfo *)0x0);
          if (this_02 != (List_1_MVWorldObjectClient_ *)0x0) {
            pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_02,
                                MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                               );
            if ((int)pOVar2 < 1) {
              if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
                 && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                        ((Object *)StringLiteral_No_valid_SpawnPoint_on_planet___,(MethodInfo *)0x0)
              ;
              return (MVWorldObjectClient *)0x0;
            }
            pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_02,
                                MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                               );
            index = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
                              (0,(int32_t)pOVar2,(MethodInfo *)0x0);
            pMVar3 = (MVWorldObjectClient *)
                     mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_02,
                                index,
                                MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                               );
            return pMVar3;
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pMVar3 = (MVWorldObjectClient *)(*pcVar4)();
  return pMVar3;
}


/* Int32 GetWoIDHighestInHierarchyWithComponent[Rigidbody](Int32) */

int32_t Assembly-CSharp.dll::MVWorldObjectClientManager::
        MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent_2
                  (MVWorldObjectClientManager *this,int32_t woId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  do {
    if (((this == (MVWorldObjectClientManager *)0x0) ||
        (this_00 = (DayNightCycle *)
                   MVWorldObjectClientManager_GetWorldObject(this,woId,(MethodInfo *)0x0),
        this_00 == (DayNightCycle *)0x0)) ||
       (pCVar1 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(this_00,(MethodInfo *)0x0),
       pCVar1 == (CelestialParam *)0x0)) {
      func_?(0);
      pcVar2 = (code *)swi(3);
      iVar3 = (*pcVar2)();
      return iVar3;
    }
    x = (Object_1 *)(*(code *)(*method->parameters)->data)(pCVar1,*method->parameters);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      (x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      pCVar1 = (CelestialParam *)
               mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0)
      ;
    }
    woId = (int32_t)mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                    Serialization::JsonProperty]::
                    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                              ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                               (MethodInfo *)0x0);
  } while ((Object *)woId != (Object *)0xffffffff);
  return (int32_t)pCVar1;
}


/* Int32 GetWoIDWithLocalOwnerHighestInHierarchy(Int32) */

int32_t Assembly-CSharp.dll::MVWorldObjectClientManager::
        MVWorldObjectClientManager_GetWoIDWithLocalOwnerHighestInHierarchy
                  (MVWorldObjectClientManager *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (IList_1_VoxelHit_ *)0xffffffff;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
    if (this_02 != (MVLocalPlayer *)0x0) {
      ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
      NamedThemeAttribute_1_UnityEngine_Color__get_Name
                ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_02,(MethodInfo *)0x0);
      while( true ) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)(this->fields).worldObjects;
        if (this_00 ==
            (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)0x0) break;
        value = (Object *)&stack0xfffffff8;
        this_03 = (Object__Class *)
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
        ;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
        Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__TryGetValue
                  (this_00,woID,(TerrainUtility_TerrainMap **)value,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                  );
        if (this_03 == (Object__Class *)0x0) break;
        pOVar2 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                 TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                 TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                           ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this_03,
                            (MethodInfo *)0x0);
        if (pOVar2 == value) {
          pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                   Collection_1_VoxelHit__get_Items
                             ((Collection_1_VoxelHit_ *)this_03,(MethodInfo *)0x0);
        }
        woID = (int32_t)mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                        Json::Serialization::JsonProperty]::
                        Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                  ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                   this_03,(MethodInfo *)0x0);
        if ((Object *)woID == (Object *)0xffffffff) {
          return (int32_t)pIVar1;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* MVWorldObject GetWorldObject(Int32) */

MVWorldObject *
Assembly-CSharp.dll::MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
          (MVWorldObjectClientManager *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMStack_1 = (MVWorldObject *)0x0;
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).worldObjects;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Experimental
    ::TerrainAPI::TerrainUtility+TerrainMap]::
    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__TryGetValue
              (this_00,id,(TerrainUtility_TerrainMap **)&pMStack_1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
              );
    return pMStack_1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pMVar3 = (MVWorldObject *)(*pcVar2)();
  return pMVar3;
}


/* MVWorldObjectClient GetWorldObjectByGoId(Int32) */

MVWorldObjectClient *
Assembly-CSharp.dll::MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectByGoId
          (MVWorldObjectClientManager *this,int32_t goId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  key = 0;
  pMVar1 = (this->fields).worldObjectMapping;
  if (pMVar1 != (MVWorldObjectClientManager_WorldObjectMapping *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_00 = (pMVar1->fields).gameObjectIdToWorldObjectIdMap;
    if (this_00 != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]
              ::Dictionary_2_System_Int32_System_Int32__TryGetValue
                        (this_00,goId,(int32_t *)&stack0xfffffff8,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_int>__TryGetValue_int__System__Int32__
                        );
      if (bVar2 == 0) {
        return (MVWorldObjectClient *)0x0;
      }
      this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)(this->fields).worldObjects;
      if (this_01 !=
          (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
           *)0x0) {
        pMVar3 = (MVWorldObjectClient *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                 ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                 Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                           (this_01,key,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                           );
        return pMVar3;
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  pMVar3 = (MVWorldObjectClient *)(*pcVar4)();
  return pMVar3;
}


/* WorldObjectClientRef GetWorldObjectClientRef(Int32) */

WorldObjectClientRef *
Assembly-CSharp.dll::MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRef
          (MVWorldObjectClientManager *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (WorldObjectClientRef *)
            func_?(TypeInfo__MVWorldObjectClientManager__WOCMWorldObjectClientRef);
  WorldObjectClientRef::WorldObjectClientRef__ctor(this_00,id,(MethodInfo *)0x0);
  return this_00;
}


/* WorldObjectClientRef GetWorldObjectClientRefNullRef() */

WorldObjectClientRef *
Assembly-CSharp.dll::MVWorldObjectClientManager::
MVWorldObjectClientManager_GetWorldObjectClientRefNullRef(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (WorldObjectClientRef *)
         func_?(TypeInfo__MVWorldObjectClientManager__WOCMWorldObjectClientRef);
  WorldObjectClientRef::WorldObjectClientRef__ctor(this,-1,(MethodInfo *)0x0);
  return this;
}


/* WorldObjectClientRef`1[MVWorldObjectClient] GetWorldObjectClientRefNullRefTyped() */

WorldObjectClientRef_1_MVWorldObjectClient_ *
Assembly-CSharp.dll::MVWorldObjectClientManager::
MVWorldObjectClientManager_GetWorldObjectClientRefNullRefTyped(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (ReadOnlyCollection_1_UnityEngine_Vector2_ *)
         func_?(
                        TypeInfo__MVWorldObjectClientManager__WOCMWorldObjectClientRef<MVWorldObjectClient>
                        );
  mscorlib.dll::System::Collections::ObjectModel::ReadOnlyCollection`1[UnityEngine::Vector2]::
  ReadOnlyCollection_1_UnityEngine_Vector2__System_Collections_Generic_IList_T__get_Item
            (this,-1,
             MethodInfo__MVWorldObjectClientManager__WOCMWorldObjectClientRef<MVWorldObjectClient>__WOCMWorldObjectClientRef_int_
            );
  return (WorldObjectClientRef_1_MVWorldObjectClient_ *)this;
}


/* WorldObjectClientRef`1[ThemeWorldObject] GetWorldObjectClientRef[ThemeWorldObject](Int32) */

WorldObjectClientRef_1_ThemeWorldObject_ *
Assembly-CSharp.dll::MVWorldObjectClientManager::
MVWorldObjectClientManager_GetWorldObjectClientRef_2
          (MVWorldObjectClientManager *this,int32_t id,MethodInfo *method)

{
  pIVar1 = *method->parameters;
  if ((pIVar1[0x17].type & 1) == 0) {
    func_?(pIVar1);
  }
  pWVar2 = (WorldObjectClientRef_1_ThemeWorldObject_ *)func_?(pIVar1);
  (*(code *)method->parameters[1]->data)(pWVar2,id,method->parameters[1]);
  return pWVar2;
}


/* MVWorldObjectClient GetWorldObjectClientRoot(Int32) */

MVWorldObjectClient *
Assembly-CSharp.dll::MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRoot
          (MVWorldObjectClientManager *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (MVWorldObjectClient *)0x0;
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).worldObjects;
  if (this_00 ==
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    pMVar2 = (MethodInfo *)0x0;
  }
  else {
    pMVar2 = 
    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
    ;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Experimental
    ::TerrainAPI::TerrainUtility+TerrainMap]::
    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__TryGetValue
              (this_00,id,(TerrainUtility_TerrainMap **)&stack0xfffffff8,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
              );
    if (pMVar1 != (MVWorldObjectClient *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pMVar1,
                          (MethodInfo *)0x0);
      if (pOVar3 == (Object *)0xffffffff) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)StringLiteral_Group_id_is__1__This_is_the_worl,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)0x0;
      }
      pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pMVar1,
                          (MethodInfo *)0x0);
      if (pOVar3 != (Object *)(this->fields).rootGroupId) {
        pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pMVar1,
                            (MethodInfo *)0x0);
        pMVar1 = MVWorldObjectClientManager_GetWorldObjectClientRoot
                           (this,(int32_t)pOVar3,(MethodInfo *)0x0);
        return pMVar1;
      }
      return pMVar1;
    }
  }
  func_?(pMVar2);
  pcVar4 = (code *)swi(3);
  pMVar1 = (MVWorldObjectClient *)(*pcVar4)();
  return pMVar1;
}


/* MVWorldObjectClient GetWorldObjectClientWhere(Func`2[MVWorldObjectClient,Boolean]) */

MVWorldObjectClient *
Assembly-CSharp.dll::MVWorldObjectClientManager::
MVWorldObjectClientManager_GetWorldObjectClientWhere
          (MVWorldObjectClientManager *this,Func_2_MVWorldObjectClient_Boolean_ *predicate,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).worldObjects;
  if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    source = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__get_Values
                       ((Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                       );
    pMVar1 = (MVWorldObjectClient *)
             System.Core.dll::System::Linq::Enumerable::Enumerable_SingleOrDefault_6
                       ((IEnumerable_1_Newtonsoft_Json_Utilities_EnumValue_1_System_UInt64_ *)source
                        ,(Func_2_Newtonsoft_Json_Utilities_EnumValue_1_System_UInt64_Boolean_ *)
                         predicate,
                        MVWorldObjectClient_MethodInfo__System__Linq__Enumerable__FirstOrDefault<MVWorldObjectClient>_System__Collections__Generic__IEnumerable<MVWorldObjectClient>__System__Func<MVWorldObjectClient,_bool>_
                       );
    return pMVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pMVar1 = (MVWorldObjectClient *)(*pcVar2)();
  return pMVar1;
}


/* MVBody GetWorldObjectClient[MVBody](Int32) */

MVBody * Assembly-CSharp.dll::MVWorldObjectClientManager::
         MVWorldObjectClientManager_GetWorldObjectClient_2
                   (MVWorldObjectClientManager *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTStack_1 = (TerrainUtility_TerrainMap *)0x0;
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).worldObjects;
  if (this_00 ==
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    func_?(0);
  }
  else {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Experimental
    ::TerrainAPI::TerrainUtility+TerrainMap]::
    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__TryGetValue
              (this_00,id,&pTStack_1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
              );
    unaff_EDI = pTStack_1;
    if (((*method->parameters)[0x17].type & 1) == 0) {
      func_?();
    }
    if (unaff_EDI == (TerrainUtility_TerrainMap *)0x0) {
      return (MVBody *)0x0;
    }
    pTStack_1 = unaff_EDI;
    pMVar2 = (MVBody *)func_?();
    if (pMVar2 != (MVBody *)0x0) {
      return pMVar2;
    }
  }
  pTStack_1 = unaff_EDI;
  func_?();
  pcVar3 = (code *)swi(3);
  pMVar2 = (MVBody *)(*pcVar3)();
  return pMVar2;
}


/* IEnumerable`1[MVWorldObjectClient]
   GetWorldObjectClientsWhere(Func`2[MVWorldObjectClient,Boolean]) */

IEnumerable_1_MVWorldObjectClient_ *
Assembly-CSharp.dll::MVWorldObjectClientManager::
MVWorldObjectClientManager_GetWorldObjectClientsWhere
          (MVWorldObjectClientManager *this,Func_2_MVWorldObjectClient_Boolean_ *predicate,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).worldObjects;
  if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    source = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__get_Values
                       ((Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                       );
    pIVar1 = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_17
                       ((IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)source,
                        (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_
                         *)predicate,
                        System__Collections__Generic__IEnumerable<MVWorldObjectClient>_MethodInfo__System__Linq__Enumerable__Where<MVWorldObjectClient>_System__Collections__Generic__IEnumerable<MVWorldObjectClient>__System__Func<MVWorldObjectClient,_bool>_
                       );
    return (IEnumerable_1_MVWorldObjectClient_ *)pIVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pIVar3 = (IEnumerable_1_MVWorldObjectClient_ *)(*pcVar2)();
  return pIVar3;
}


/* List`1[MVWorldObjectClient] GetWorldObjectsByType(WorldObjectType) */

List_1_MVWorldObjectClient_ *
Assembly-CSharp.dll::MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
          (MVWorldObjectClientManager *this,WorldObjectType__Enum type,MethodInfo *method)

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
  this_03 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_03,MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
  this_00 = (this->fields).worldObjectMapping;
  if (this_00 == (MVWorldObjectClientManager_WorldObjectMapping *)0x0) {
code_?:
    func_?();
    func_?(unaff_EDI,0);
    pcVar4 = (code *)swi(3);
    pLVar5 = (List_1_MVWorldObjectClient_ *)(*pcVar4)();
    return pLVar5;
  }
  this_04 = (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)
            MVWorldObjectClientManager+WorldObjectMapping::
            MVWorldObjectClientManager_WorldObjectMapping_GetWorldObjectTypeSet
                      (this_00,type,(MethodInfo *)0x0);
  if (this_04 != (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::MetaData::
    FirstTimeEvent]::HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent__GetEnumerator
              ((HashSet_1_T_Enumerator_MV_WorldObject_MetaData_FirstTimeEvent_ *)&stack0xffffffc0,
               this_04,MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    uStack_1 = 0;
    while (cVar6 = func_?(), cVar6 != '\0') {
      unaff_EDI = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                             &stack0xffffffd0,
                             MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                            );
      this_01 = (this->fields).worldObjects;
      if (this_01 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) goto code_?;
      bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__ContainsKey
                        ((Dictionary_2_System_Int32_System_Object_ *)this_01,(int32_t)unaff_EDI,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                        );
      if (bVar7 == 0) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)StringLiteral_WorldObjectTypeSet_contains_id_w,(MethodInfo *)0x0);
      }
      else {
        this_02 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)(this->fields).worldObjects;
        if ((this_02 ==
             (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)0x0) ||
           (item = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                   Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                             (this_02,(int32_t)unaff_EDI,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                             ), this_03 == (List_1_UnityEngine_Vector4_ *)0x0))
        goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)this_03,(UIPushOption__Enum)item,
                   MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                  );
      }
    }
    uStack_1 = 0xffffffff;
    func_?(&stack0xffffffd0);
  }
  *unaff_FS_OFFSET = uStack_3;
  return (List_1_MVWorldObjectClient_ *)this_03;
}


/* Boolean IsType(Int32, WorldObjectType) */

bool Assembly-CSharp.dll::MVWorldObjectClientManager::MVWorldObjectClientManager_IsType
               (MVWorldObjectClientManager *this,int32_t woID,WorldObjectType__Enum worldObjectType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).worldObjects;
  if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,woID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_Failed_to_get_worldObject,(MethodInfo *)0x0);
      return 0;
    }
    this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)(this->fields).worldObjects;
    if (this_01 !=
        (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
        0x0) {
      this_02 = (Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
                Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                          (this_01,woID,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                          );
      if (this_02 !=
          (Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_ *)0x0) {
        pOVar2 = System.Core.dll::System::Linq::
                 Enumerable+<CreateGroupByIterator>c__Iterator5`2[System::Object,System::Object]::
                 Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                           (this_02,(MethodInfo *)0x0);
        return pOVar2 == (Object *)0x0;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Void SubscribeWOCreatedEvent(Type, Action`2[Object,WorldObjectCreatedEventArgs]) */

void Assembly-CSharp.dll::MVWorldObjectClientManager::
     MVWorldObjectClientManager_SubscribeWOCreatedEvent
               (MVWorldObjectClientManager *this,Type *type,
               Action_2_Object_WorldObjectCreatedEventArgs_ *woCreatedEventHandler,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).woCreatedEventSubscribers;
  if (pDVar1 != (Dictionary_2_System_Type_System_Action_2_Object_WorldObjectCreatedEventArgs_ *)0x0)
  {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityEngine::
            Sprite]::Dictionary_2_System_String_UnityEngine_Sprite__TryGetValue
                      ((Dictionary_2_System_String_UnityEngine_Sprite_ *)pDVar1,(String *)type,
                       (Sprite **)&stack0xfffffff8,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>__TryGetValue_System__Type__System__Action<System::Object,_WorldObjectCreatedEventArgs>__
                      );
    pDVar1 = (this->fields).woCreatedEventSubscribers;
    if (bVar2 == 0) {
      if (pDVar1 != (Dictionary_2_System_Type_System_Action_2_Object_WorldObjectCreatedEventArgs_ *)
                    0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
        Dictionary_2_System_String_Theme__set_Item
                  ((Dictionary_2_System_String_Theme_ *)pDVar1,(String *)type,
                   (Theme *)woCreatedEventHandler,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>__set_Item_System__Type__System__Action<System::Object,_WorldObjectCreatedEventArgs>_
                  );
        return;
      }
    }
    else if (pDVar1 != (Dictionary_2_System_Type_System_Action_2_Object_WorldObjectCreatedEventArgs_
                        *)0x0) {
      pDVar3 = (Delegate *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)pDVar1,type,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>__get_Item_System__Type_
                         );
      pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                         (pDVar3,(Delegate *)woCreatedEventHandler,(MethodInfo *)0x0);
      pDVar3 = (Delegate *)0x0;
      if (pDVar4 == (Delegate *)0x0) {
code_?:
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
        Dictionary_2_System_String_Theme__set_Item
                  ((Dictionary_2_System_String_Theme_ *)pDVar1,(String *)type,(Theme *)pDVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>__set_Item_System__Type__System__Action<System::Object,_WorldObjectCreatedEventArgs>_
                  );
        return;
      }
      if ((Action_2_Object_WorldObjectCreatedEventArgs___Class *)pDVar4->klass ==
          TypeInfo__System__Action<System::Object,_WorldObjectCreatedEventArgs>) {
        pDVar3 = pDVar4;
      }
      if (pDVar3 != (Delegate *)0x0) goto code_?;
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


/* Void SubscribeWODestroyedEvent(Int32, Action`2[Object,WorldObjectDestroyedEventArgs]) */

void Assembly-CSharp.dll::MVWorldObjectClientManager::
     MVWorldObjectClientManager_SubscribeWODestroyedEvent
               (MVWorldObjectClientManager *this,int32_t woID,
               Action_2_Object_WorldObjectDestroyedEventArgs_ *woDestroyedEventHandler,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
            *)(this->fields).worldObjects;
  if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
            Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__TryGetValue
                      (pDVar1,woID,(TerrainUtility_TerrainMap **)&stack0xfffffff8,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                      );
    if (bVar2 == 0) {
      return;
    }
    pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)(this->fields).woDestroyedEventSubscribers;
    if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
              Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__TryGetValue
                        (pDVar1,woID,(TerrainUtility_TerrainMap **)&stack0xfffffff4,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__TryGetValue_int__System__Action<System::Object,_WorldObjectDestroyedEventArgs>__
                        );
      pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)(this->fields).woDestroyedEventSubscribers;
      if (bVar2 == 0) {
        if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
          Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
          Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__set_Item
                    (pDVar1,woID,(TerrainUtility_TerrainMap *)woDestroyedEventHandler,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__set_Item_int__System__Action<System::Object,_WorldObjectDestroyedEventArgs>_
                    );
          return;
        }
      }
      else if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                          *)0x0) {
        pDVar3 = (Delegate *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                 ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                 Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                           (pDVar1,woID,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__get_Item_int_
                           );
        pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                           (pDVar3,(Delegate *)woDestroyedEventHandler,(MethodInfo *)0x0);
        pDVar3 = (Delegate *)0x0;
        if (pDVar4 == (Delegate *)0x0) {
code_?:
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
          Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
          Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__set_Item
                    (pDVar1,woID,(TerrainUtility_TerrainMap *)pDVar3,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__set_Item_int__System__Action<System::Object,_WorldObjectDestroyedEventArgs>_
                    );
          return;
        }
        if ((Action_2_Object_WorldObjectDestroyedEventArgs___Class *)pDVar4->klass ==
            TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>) {
          pDVar3 = pDVar4;
        }
        if (pDVar3 != (Delegate *)0x0) goto code_?;
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean TryGetWorldObject(Int32, MVWorldObject ByRef) */

bool Assembly-CSharp.dll::MVWorldObjectClientManager::MVWorldObjectClientManager_TryGetWorldObject
               (MVWorldObjectClientManager *this,int32_t id,MVWorldObject **worldObject,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMStack_1 = (MVWorldObject *)0x0;
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).worldObjects;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
            Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__TryGetValue
                      (this_00,id,(TerrainUtility_TerrainMap **)&pMStack_1,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                      );
    *worldObject = pMStack_1;
    return bVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Boolean UnregisterWorldObject(Int32) */

bool Assembly-CSharp.dll::MVWorldObjectClientManager::
     MVWorldObjectClientManager_UnregisterWorldObject
               (MVWorldObjectClientManager *this,int32_t worldObjectId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).worldObjects;
  if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,worldObjectId,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_trying_to_unregister_none_existi,(MethodInfo *)0x0);
      return 0;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UnregisterWorldObject
                (this_01,worldObjectId,(MethodInfo *)0x0);
      return 1;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Void UnsubscribeWOCreatedEvent(Type, Action`2[Object,WorldObjectCreatedEventArgs]) */

void Assembly-CSharp.dll::MVWorldObjectClientManager::
     MVWorldObjectClientManager_UnsubscribeWOCreatedEvent
               (MVWorldObjectClientManager *this,Type *type,
               Action_2_Object_WorldObjectCreatedEventArgs_ *woCreatedEventHandler,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDStack_1 = (Delegate *)0x0;
  this_00 = (this->fields).woCreatedEventSubscribers;
  if (this_00 == (Dictionary_2_System_Type_System_Action_2_Object_WorldObjectCreatedEventArgs_ *)0x0
     ) {
code_?:
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityEngine::
          Sprite]::Dictionary_2_System_String_UnityEngine_Sprite__TryGetValue
                    ((Dictionary_2_System_String_UnityEngine_Sprite_ *)this_00,(String *)type,
                     (Sprite **)&pDStack_1,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>__TryGetValue_System__Type__System__Action<System::Object,_WorldObjectCreatedEventArgs>__
                    );
  pDVar4 = pDStack_1;
  if (bVar3 != 0) {
    pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                       (pDVar4,(Delegate *)woCreatedEventHandler,(MethodInfo *)0x0);
    if (pDVar4 != (Delegate *)0x0) {
      pDVar5 = (Delegate *)0x0;
      if ((Action_2_Object_WorldObjectCreatedEventArgs___Class *)pDVar4->klass ==
          TypeInfo__System__Action<System::Object,_WorldObjectCreatedEventArgs>) {
        pDVar5 = pDVar4;
      }
      if (pDVar5 == (Delegate *)0x0) {
        func_?();
        goto code_?;
      }
    }
  }
  return;
}


/* Void UnsubscribeWODestroyedEvent(Int32, Action`2[Object,WorldObjectDestroyedEventArgs]) */

void Assembly-CSharp.dll::MVWorldObjectClientManager::
     MVWorldObjectClientManager_UnsubscribeWODestroyedEvent
               (MVWorldObjectClientManager *this,int32_t woID,
               Action_2_Object_WorldObjectDestroyedEventArgs_ *woDestroyedEventHandler,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (Delegate *)0x0;
  pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
            *)(this->fields).woDestroyedEventSubscribers;
  if (pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)0x0) {
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
            Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__TryGetValue
                      (pDVar2,woID,(TerrainUtility_TerrainMap **)&stack0xfffffff8,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__TryGetValue_int__System__Action<System::Object,_WorldObjectDestroyedEventArgs>__
                      );
    if (bVar3 == 0) {
      return;
    }
    if ((pDVar1 == (Delegate *)0x0) ||
       (pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                           (pDVar1,(Delegate *)woDestroyedEventHandler,(MethodInfo *)0x0),
       pDVar1 == (Delegate *)0x0)) {
      pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)(this->fields).woDestroyedEventSubscribers;
      if (pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
        Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                  (pDVar2,woID,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__Remove_int_
                  );
        return;
      }
    }
    else {
      value = (Delegate *)0x0;
      if ((Action_2_Object_WorldObjectDestroyedEventArgs___Class *)pDVar1->klass ==
          TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>) {
        value = pDVar1;
      }
      if (value == (Delegate *)0x0) goto code_?;
      pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)(this->fields).woDestroyedEventSubscribers;
      if (pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
        Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__set_Item
                  (pDVar2,woID,(TerrainUtility_TerrainMap *)value,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__set_Item_int__System__Action<System::Object,_WorldObjectDestroyedEventArgs>_
                  );
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateWorldBounds(Bounds) */

void Assembly-CSharp.dll::MVWorldObjectClientManager::MVWorldObjectClientManager_UpdateWorldBounds
               (MVWorldObjectClientManager *this,Bounds bounds,MethodInfo *method)

{
  puVar1 = (undefined8 *)func_?(&stack0xffffffe4,&bounds,0);
  pBVar2 = &(this->fields).worldBounds;
  fVar3 = *(float *)(puVar1 + 1);
  VStack_4.y = (float)*puVar1;
  VStack_4.z = (float)((ulonglong)*puVar1 >> 0x20);
  pVVar5 = (Vector3 *)func_?(&stack0xffffffe4,pBVar2,0);
  min0.y = VStack_4.z;
  min0.x = VStack_4.y;
  min0.z = fVar3;
  pVVar5 = MathFunctions::MathFunctions_GetMinVector(&VStack_4,min0,*pVVar5,(MethodInfo *)0x0);
  uVar6 = pVVar5->y;
  fVar3 = pVVar5->z;
  puVar1 = (undefined8 *)func_?(&stack0xffffffd8,&bounds,0);
  fVar7 = *(float *)(puVar1 + 1);
  VStack_4.y = (float)*puVar1;
  VStack_4.z = (float)((ulonglong)*puVar1 >> 0x20);
  pVVar5 = (Vector3 *)func_?(&stack0xffffffd8,pBVar2,0);
  max0.y = VStack_4.z;
  max0.x = VStack_4.y;
  max0.z = fVar7;
  MathFunctions::MathFunctions_GetMaxVector
            ((Vector3 *)&stack0xffffffd8,max0,*pVVar5,(MethodInfo *)0x0);
  bounds.m_Center.x = 0.0;
  VStack_4.x = 0.0;
  VStack_4.y = (float)uVar6;
  VStack_4.z = fVar3;
  func_?();
  return;
}


/* Int32 get_Count() */

int32_t Assembly-CSharp.dll::MVWorldObjectClientManager::MVWorldObjectClientManager_get_Count
                  (MVWorldObjectClientManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).worldObjects;
  if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    pOVar1 = System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System
             ::Collections::Generic::KeyValuePair`2[System::Object,System::Object],System::Object]::
             Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                       ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                         *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Count__
                       );
    return (int32_t)pOVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* MVGroup get_RootGroup() */

MVGroup * Assembly-CSharp.dll::MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                    (MVWorldObjectClientManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).worldObjects;
  if (this_00 ==
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    func_?(0);
    pMVar1 = extraout_EDX;
  }
  else {
    pMVar1 = (MVGroup *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
             Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
             Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                       (this_00,(this->fields).rootGroupId,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                       );
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
    if (pMVar4 != (MVGroup *)0x0) {
      return pMVar4;
    }
  }
  func_?(pMVar1);
  pcVar5 = (code *)swi(3);
  pMVar1 = (MVGroup *)(*pcVar5)();
  return pMVar1;
}


/* Bounds get_WorldBounds() */

Bounds * Assembly-CSharp.dll::MVWorldObjectClientManager::MVWorldObjectClientManager_get_WorldBounds
                   (Bounds *__return_storage_ptr__,MVWorldObjectClientManager *this,
                   MethodInfo *method)

{
  fVar1 = (this->fields).worldBounds.m_Center.y;
  fVar2 = (this->fields).worldBounds.m_Center.z;
  fVar3 = (this->fields).worldBounds.m_Extents.x;
  (__return_storage_ptr__->m_Center).x = (this->fields).worldBounds.m_Center.x;
  (__return_storage_ptr__->m_Center).y = fVar1;
  (__return_storage_ptr__->m_Center).z = fVar2;
  (__return_storage_ptr__->m_Extents).x = fVar3;
  fVar1 = (this->fields).worldBounds.m_Extents.z;
  (__return_storage_ptr__->m_Extents).y = (this->fields).worldBounds.m_Extents.y;
  (__return_storage_ptr__->m_Extents).z = fVar1;
  return __return_storage_ptr__;
}


/* Void set_RootGroup(MVGroup) */

void Assembly-CSharp.dll::MVWorldObjectClientManager::MVWorldObjectClientManager_set_RootGroup
               (MVWorldObjectClientManager *this,MVGroup *value,MethodInfo *method)

{
  if (value != (MVGroup *)0x0) {
    pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)value,(MethodInfo *)0x0);
    (this->fields).rootGroupId = (int32_t)pIVar1;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


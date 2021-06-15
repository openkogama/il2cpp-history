
/* Void AddPrototype(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVWorldInventory::MVWorldInventory_AddPrototype
               (MVWorldInventory *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = (RuntimePrototypeCubeModel__Class *)((uint)uStack_1 & 0xffffff);
  pTVar2 = (Type *)func_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,
                                   (int)&uStack_1 + 3);
  if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    func_?(0);
  }
  else {
    pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)data,pTVar2,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar4 = CONCAT44(TypeInfo__System__Int32,pPVar3);
    if (pPVar3 == (Pool *)0x0) goto code_?;
    if ((pPVar3->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    func_?(pPVar3);
    uStack_1._0_3_ = CONCAT12(1,(undefined2)uStack_1);
    pTVar2 = (Type *)func_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,
                                     (int)&uStack_1 + 2);
    pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)data,pTVar2,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar4 = CONCAT44(TypeInfo__System__Single,pPVar3);
    if (pPVar3 == (Pool *)0x0) goto code_?;
    if ((pPVar3->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
    goto code_?;
    pfVar5 = (float *)func_?(pPVar3);
    scale = *pfVar5;
    uStack_1._0_2_ = CONCAT11(3,(undefined1)uStack_1);
    pTVar2 = (Type *)func_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,
                                     (int)&uStack_1 + 1);
    pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)data,pTVar2,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar4 = CONCAT44(TypeInfo__System__Int32,pPVar3);
    if (pPVar3 == (Pool *)0x0) goto code_?;
    if ((pPVar3->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    func_?(pPVar3);
    uStack_1 = (RuntimePrototypeCubeModel__Class *)CONCAT31(uStack_1._1_3_,2);
    pTVar2 = (Type *)func_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,&uStack_1);
    pRVar6 = unaff_EDI;
    unaff_EDI = (RuntimePrototypeCubeModel__Class *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                Dictionary_2_System_Type_Pool__get_Item
                          ((Dictionary_2_System_Type_Pool_ *)data,pTVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    unaff_EBX = (RuntimePrototypeCubeModel__Class *)TypeInfo__System__Byte;
    if (unaff_EDI == (RuntimePrototypeCubeModel__Class *)0x0) {
      data_00 = (Byte__Array *)0x0;
code_?:
      unaff_EBX = pRVar6;
      uStack_1 = TypeInfo__RuntimePrototypeCubeModel;
      authorProfileId = &UNK_?;
      unaff_EDI = (RuntimePrototypeCubeModel__Class *)func_?();
      RuntimePrototypeCubeModel::RuntimePrototypeCubeModel__ctor_1
                ((RuntimePrototypeCubeModel *)unaff_EDI,(int32_t)unaff_EBX,(int32_t)authorProfileId,
                 scale,data_00,(MethodInfo *)0x0);
      this_00 = (this->fields).runtimePrototypes;
      if (this_00 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Add
                  ((Dictionary_2_System_Int32_System_Object_ *)this_00,(int32_t)unaff_EBX,
                   (Object *)unaff_EDI,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Add_int__RuntimePrototypeCubeModel_
                  );
        this_01 = (this->fields).OnWorldInventoryChange;
        if (this_01 != (MVWorldInventory_OnWorldInventoryChangeDelegate *)0x0) {
          MVWorldInventory+OnWorldInventoryChangeDelegate::
          MVWorldInventory_OnWorldInventoryChangeDelegate_Invoke(this_01,this,(MethodInfo *)0x0);
        }
        return;
      }
      goto code_?;
    }
    uStack_1 = (RuntimePrototypeCubeModel__Class *)TypeInfo__System__Byte;
    pRVar6 = (RuntimePrototypeCubeModel__Class *)&UNK_?;
    data_00 = (Byte__Array *)func_?(unaff_EDI);
    if (data_00 != (Byte__Array *)0x0) goto code_?;
  }
  uStack_1 = unaff_EBX;
  uVar4 = func_?(unaff_EDI);
code_?:
  func_?(uVar4);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void AddRuntimePrototypeToDirty(RuntimePrototypeCubeModel) */

void Assembly-CSharp.dll::MVWorldInventory::MVWorldInventory_AddRuntimePrototypeToDirty
               (MVWorldInventory *this,RuntimePrototypeCubeModel *rpcm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).dirtyRPCM;
  if (this_00 != (List_1_RuntimePrototypeCubeModel_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)rpcm,
               MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__Add_RuntimePrototypeCubeModel_
              );
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* RuntimePrototypeCubeModel CreatePendingPrototype(Int32) */

RuntimePrototypeCubeModel *
Assembly-CSharp.dll::MVWorldInventory::MVWorldInventory_CreatePendingPrototype
          (MVWorldInventory *this,int32_t prototypeId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).runtimePrototypes;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    pRVar1 = (RuntimePrototypeCubeModel *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
             Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
             Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                       (this_00,prototypeId,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                       );
    if (pRVar1 != (RuntimePrototypeCubeModel *)0x0) {
      pRVar1 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CloneGeometry
                         (pRVar1,1,(MethodInfo *)0x0);
      if (pRVar1 != (RuntimePrototypeCubeModel *)0x0) {
        RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_set_PrototypeState
                  (pRVar1,PrototypeState__Enum_Pending,(MethodInfo *)0x0);
        return pRVar1;
      }
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pRVar1 = (RuntimePrototypeCubeModel *)(*pcVar2)();
  return pRVar1;
}


/* Void GenerateAllDirty(Int32 ByRef) */

void Assembly-CSharp.dll::MVWorldInventory::MVWorldInventory_GenerateAllDirty
               (MVWorldInventory *this,int32_t *counter,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).dirtyRPCM;
  if (pLVar1 != (List_1_RuntimePrototypeCubeModel_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__get_Count__
                       );
    index = (undefined1 *)((int)&pOVar2[-1].monitor + 3);
    do {
      if ((int)index < 0) {
        return;
      }
      pLVar1 = (this->fields).dirtyRPCM;
      if ((pLVar1 == (List_1_RuntimePrototypeCubeModel_ *)0x0) ||
         (this_00 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                     *)mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                       ::IEventSystemHandler]::
                       List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                 ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                                  (int32_t)index,
                                  MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__get_Item_int_
                                 ),
         this_00 ==
         (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
          *)0x0)) break;
      pOVar2 = System.dll::System::Collections::Generic::
               SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
               Single,System::Object]::
               SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                         (this_00,(MethodInfo *)0x0);
      if (pOVar2 == (Object *)0x3) {
        pLVar1 = (this->fields).dirtyRPCM;
        if ((pLVar1 == (List_1_RuntimePrototypeCubeModel_ *)0x0) ||
           (this_01 = (RuntimePrototypeCubeModel *)
                      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                      IEventSystemHandler]::
                      List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                                 (int32_t)index,
                                 MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__get_Item_int_
                                ), this_01 == (RuntimePrototypeCubeModel *)0x0)) break;
        bVar3 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_MeshGenerateDirtyChunksAll
                          (this_01,counter,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          pLVar1 = (this->fields).dirtyRPCM;
          if (pLVar1 == (List_1_RuntimePrototypeCubeModel_ *)0x0) break;
          mscorlib.dll::System::Collections::Generic::List`1[MVPlayer]::List_1_MVPlayer__RemoveAt
                    ((List_1_MVPlayer_ *)pLVar1,(int32_t)index,
                     MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__RemoveAt_int_
                    );
        }
      }
      index = index + -1;
    } while( true );
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean GenerateDirty(MeshGeneratePriority, Int32 ByRef) */

bool Assembly-CSharp.dll::MVWorldInventory::MVWorldInventory_GenerateDirty
               (MVWorldInventory *this,MeshGeneratePriority__Enum priority,int32_t *counter,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).dirtyRPCM;
  if (pLVar1 != (List_1_RuntimePrototypeCubeModel_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__get_Count__
                       );
    index = (undefined1 *)((int)&pOVar2[-1].monitor + 3);
    do {
      if ((int)index < 0) {
        return 1;
      }
      pLVar1 = (this->fields).dirtyRPCM;
      if ((pLVar1 == (List_1_RuntimePrototypeCubeModel_ *)0x0) ||
         (this_00 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                     *)mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                       ::IEventSystemHandler]::
                       List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                 ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                                  (int32_t)index,
                                  MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__get_Item_int_
                                 ),
         this_00 ==
         (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
          *)0x0)) break;
      pOVar2 = System.dll::System::Collections::Generic::
               SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
               Single,System::Object]::
               SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                         (this_00,(MethodInfo *)0x0);
      if (pOVar2 == (Object *)priority) {
        pLVar1 = (this->fields).dirtyRPCM;
        if ((pLVar1 == (List_1_RuntimePrototypeCubeModel_ *)0x0) ||
           (this_01 = (RuntimePrototypeCubeModel *)
                      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                      IEventSystemHandler]::
                      List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                                 (int32_t)index,
                                 MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__get_Item_int_
                                ), this_01 == (RuntimePrototypeCubeModel *)0x0)) break;
        priority = (MeshGeneratePriority__Enum)&UNK_?;
        bVar3 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_MeshGenerateDirtyChunks
                          (this_01,counter,(MethodInfo *)0x0);
        if (bVar3 == 0) {
          return 0;
        }
        pLVar1 = (this->fields).dirtyRPCM;
        if (pLVar1 == (List_1_RuntimePrototypeCubeModel_ *)0x0) break;
        mscorlib.dll::System::Collections::Generic::List`1[MVPlayer]::List_1_MVPlayer__RemoveAt
                  ((List_1_MVPlayer_ *)pLVar1,(int32_t)index,
                   MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__RemoveAt_int_
                  );
      }
      index = index + -1;
    } while( true );
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Void LateUpdate() */

void Assembly-CSharp.dll::MVWorldInventory::MVWorldInventory_LateUpdate
               (MVWorldInventory *this,MethodInfo *method)

{
  puStack_1 = (undefined *)0x1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields).dirtyRPCM;
  if (pLVar2 != (List_1_RuntimePrototypeCubeModel_ *)0x0) {
    index = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
            Serialization::JsonProperty]::
            Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                      ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                       MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__get_Count__
                      );
    while( true ) {
      do {
        do {
          index = (Object *)((int)&index[-1].monitor + 3);
          if ((int)index < 0) {
            bVar3 = MVWorldInventory_GenerateDirty
                              (this,MeshGeneratePriority__Enum_Medium,(int32_t *)&puStack_1,
                               (MethodInfo *)0x0);
            if (bVar3 != 0) {
              MVWorldInventory_GenerateDirty
                        (this,MeshGeneratePriority__Enum_Low,(int32_t *)&puStack_1,(MethodInfo *)0x0
                        );
            }
            return;
          }
          pLVar2 = (this->fields).dirtyRPCM;
          if ((pLVar2 == (List_1_RuntimePrototypeCubeModel_ *)0x0) ||
             (this_00 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                         *)mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                           EventSystems::IEventSystemHandler]::
                           List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                     ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2
                                      ,(int32_t)index,
                                      MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__get_Item_int_
                                     ),
             this_00 ==
             (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
              *)0x0)) goto code_?;
          pOVar4 = System.dll::System::Collections::Generic::
                   SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                   ::Single,System::Object]::
                   SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                             (this_00,(MethodInfo *)0x0);
        } while (pOVar4 != (Object *)0x3);
        pLVar2 = (this->fields).dirtyRPCM;
        if ((pLVar2 == (List_1_RuntimePrototypeCubeModel_ *)0x0) ||
           (this_01 = (RuntimePrototypeCubeModel *)
                      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                      IEventSystemHandler]::
                      List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,
                                 (int32_t)index,
                                 MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__get_Item_int_
                                ), this_01 == (RuntimePrototypeCubeModel *)0x0))
        goto code_?;
        bVar3 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_MeshGenerateDirtyChunksAll
                          (this_01,(int32_t *)&puStack_1,(MethodInfo *)0x0);
      } while (bVar3 == 0);
      pLVar2 = (this->fields).dirtyRPCM;
      if (pLVar2 == (List_1_RuntimePrototypeCubeModel_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[MVPlayer]::List_1_MVPlayer__RemoveAt
                ((List_1_MVPlayer_ *)pLVar2,(int32_t)index,
                 MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__RemoveAt_int_
                );
    }
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void NotifyWorldInventoryChange() */

void Assembly-CSharp.dll::MVWorldInventory::MVWorldInventory_NotifyWorldInventoryChange
               (MVWorldInventory *this,MethodInfo *method)

{
  this_00 = (this->fields).OnWorldInventoryChange;
  if (this_00 != (MVWorldInventory_OnWorldInventoryChangeDelegate *)0x0) {
    MVWorldInventory+OnWorldInventoryChangeDelegate::
    MVWorldInventory_OnWorldInventoryChangeDelegate_Invoke(this_00,this,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnReplaceWoPrototype(Int32, Int32) */

void Assembly-CSharp.dll::MVWorldInventory::MVWorldInventory_OnReplaceWoPrototype
               (MVWorldInventory *this,int32_t woId,int32_t worldInventoryId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = woId;
  pMVar2 = this;
  pDVar3 = (this->fields).pendingRuntimePrototypes;
  if (pDVar3 != (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0) {
    bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Int32,PendingPrototypeData]::Dictionary_2_System_Int32_PendingPrototypeData__ContainsKey
                      (pDVar3,woId,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__ContainsKey_int_
                      );
    if (bVar4 == 0) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar5 != (MVWorldObjectClientManager *)0x0) {
        pPVar6 = (PrefabPool *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (pMVar5,iVar1,(MethodInfo *)0x0);
        if (pPVar6 != (PrefabPool *)0x0) {
          bVar7 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
          if (((((MVWorldObject__Class *)pPVar6->klass)->_1).naturalAligment < bVar7) ||
             ((MVCubeModelInstance__Class *)
              (((MVWorldObject__Class *)pPVar6->klass)->_1).typeHierarchy[bVar7 - 1] !=
              TypeInfo__MVCubeModelInstance)) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          this_03 = (PrefabPool *)0x0;
          if (bVar8) {
            this_03 = pPVar6;
          }
          if (this_03 == (PrefabPool *)0x0) {
            func_?(pPVar6);
          }
          else {
            key_00 = (MVWorldInventory *)
                     MVCubeModelBase::MVCubeModelBase_get_Pid
                               ((MVCubeModelBase *)this_03,(MethodInfo *)0x0);
            this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)(pMVar2->fields).runtimePrototypes;
            if (this_00 !=
                (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)0x0) {
              woId = (int32_t)
                     MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
              ;
              this = key_00;
              pRVar9 = (RuntimePrototypeCubeModel *)
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                  (this_00,(int32_t)key_00,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                                  );
              if (pRVar9 != (RuntimePrototypeCubeModel *)0x0) {
                method = (MethodInfo *)0x0;
                woId = (int32_t)&UNK_?;
                worldInventoryId = (int32_t)pRVar9;
                pRVar9 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CloneGeometry
                                    (pRVar9,0,(MethodInfo *)0x0);
                if (pRVar9 != (RuntimePrototypeCubeModel *)0x0) {
                  RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_set_PrototypeId
                            (pRVar9,worldInventoryId,(MethodInfo *)0x0);
                  RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_set_PrototypeState
                            (pRVar9,PrototypeState__Enum_Registered,(MethodInfo *)0x0);
                  iVar1 = worldInventoryId;
                  pDVar10 = (pMVar2->fields).runtimePrototypes;
                  if (pDVar10 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__Add
                              ((Dictionary_2_System_Int32_System_Object_ *)pDVar10,worldInventoryId,
                               (Object *)pRVar9,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Add_int__RuntimePrototypeCubeModel_
                              );
                    this_01 = (RuntimePrototypeCubeModel *)
                              ThemeWorldObject::ThemeWorldObject_get_Visualization
                                        ((ThemeWorldObject *)this_03,(MethodInfo *)0x0);
                    if (this_01 != (RuntimePrototypeCubeModel *)0x0) {
                      RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveInstance
                                (this_01,woId,(MethodInfo *)0x0);
                      MVCubeModelBase::MVCubeModelBase_set_PrototypeCubeModel
                                ((MVCubeModelBase *)this_03,pRVar9,(MethodInfo *)0x0);
                      RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CreateInstance
                                (pRVar9,(MVCubeModelBase *)this_03,(MethodInfo *)0x0);
                      this_02 = (Dictionary_2_System_String_Theme_ *)
                                PrefabPool::PrefabPool_get_MVBatteryPrefab
                                          (this_03,(MethodInfo *)0x0);
                      this = (MVWorldInventory *)iVar1;
                      pTVar11 = (Theme *)func_?();
                      if (this_02 != (Dictionary_2_System_String_Theme_ *)0x0) {
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        String,Theme]::Dictionary_2_System_String_Theme__set_Item
                                  (this_02,StringLiteral_protoTypeID,pTVar11,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                  );
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      pDVar3 = (pMVar2->fields).pendingRuntimePrototypes;
      if (pDVar3 != (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0) {
        PVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                 Int32,PendingPrototypeData]::
                 Dictionary_2_System_Int32_PendingPrototypeData__get_Item
                           (pDVar3,iVar1,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__get_Item_int_
                           );
        key = worldInventoryId;
        if (PVar12.pendingRuntimePrototype != (RuntimePrototypeCubeModel *)0x0) {
          RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_set_PrototypeId
                    (PVar12.pendingRuntimePrototype,worldInventoryId,(MethodInfo *)0x0);
          pDVar10 = (pMVar2->fields).runtimePrototypes;
          if (pDVar10 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
            woId = (int32_t)
                   MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__ContainsKey_int_
            ;
            this = (MVWorldInventory *)key;
            bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__ContainsKey
                              ((Dictionary_2_System_Int32_System_Object_ *)pDVar10,key,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__ContainsKey_int_
                              );
            if (bVar4 == 0) {
              woId = (int32_t)(pMVar2->fields).runtimePrototypes;
              pDVar3 = (pMVar2->fields).pendingRuntimePrototypes;
              if (pDVar3 == (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0)
              goto code_?;
              method = (MethodInfo *)iVar1;
              woId = (int32_t)&UNK_?;
              worldInventoryId = (int32_t)pDVar3;
              PVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Int32,PendingPrototypeData]::
                       Dictionary_2_System_Int32_PendingPrototypeData__get_Item
                                 (pDVar3,iVar1,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__get_Item_int_
                                 );
              if (woId == 0) goto code_?;
              method = (MethodInfo *)&UNK_?;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__Add
                        ((Dictionary_2_System_Int32_System_Object_ *)woId,key,
                         (Object *)PVar12.pendingRuntimePrototype,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Add_int__RuntimePrototypeCubeModel_
                        );
              pDVar3 = (pMVar2->fields).pendingRuntimePrototypes;
              if (pDVar3 == (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0)
              goto code_?;
              PVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Int32,PendingPrototypeData]::
                       Dictionary_2_System_Int32_PendingPrototypeData__get_Item
                                 (pDVar3,iVar1,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__get_Item_int_
                                 );
              if (PVar12.pendingRuntimePrototype == (RuntimePrototypeCubeModel *)0x0)
              goto code_?;
              RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_set_PrototypeState
                        (PVar12.pendingRuntimePrototype,PrototypeState__Enum_Registered,
                         (MethodInfo *)0x0);
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?();
              }
              pMVar5 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
              if (pMVar5 == (MVWorldObjectClientManager *)0x0) goto code_?;
              pMVar13 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  (pMVar5,iVar1,(MethodInfo *)0x0);
              pPVar6 = (PrefabPool *)func_?(pMVar13,TypeInfo__MVCubeModelInstance);
              if (pPVar6 == (PrefabPool *)0x0) goto code_?;
              woId = (int32_t)PrefabPool::PrefabPool_get_MVBatteryPrefab(pPVar6,(MethodInfo *)0x0);
              this = (MVWorldInventory *)key;
              pTVar11 = (Theme *)func_?(TypeInfo__System__Int32,&this);
              if (woId == 0) goto code_?;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
              Dictionary_2_System_String_Theme__set_Item
                        ((Dictionary_2_System_String_Theme_ *)woId,StringLiteral_protoTypeID,pTVar11
                         ,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                        );
            }
            else {
              if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
                 && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                method = (MethodInfo *)&UNK_?;
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                        ((Object *)StringLiteral_Pending_runtime_prototype_allrea,(MethodInfo *)0x0)
              ;
            }
            pDVar3 = (pMVar2->fields).pendingRuntimePrototypes;
            if (pDVar3 != (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Int32,PendingPrototypeData]::Dictionary_2_System_Int32_PendingPrototypeData__Remove
                        (pDVar3,iVar1,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__Remove_int_
                        );
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void OnUpdatePrototypeEvent(Int32, Byte[]) */

void Assembly-CSharp.dll::MVWorldInventory::MVWorldInventory_OnUpdatePrototypeEvent
               (MVWorldInventory *this,int32_t worldInventoryID,Byte__Array *worldInventoryData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).runtimePrototypes;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    this_01 = (RuntimePrototypeCubeModel *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
              Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                        (this_00,worldInventoryID,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                        );
    this_02 = (BytePacker *)func_?(TypeInfo__MV__WorldObject__BytePacker);
    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
              (this_02,worldInventoryData,(MethodInfo *)0x0);
    if (this_01 != (RuntimePrototypeCubeModel *)0x0) {
      RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_UpdatePrototype
                (this_01,this_02,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void RemovePrototype(Int32) */

void Assembly-CSharp.dll::MVWorldInventory::MVWorldInventory_RemovePrototype
               (MVWorldInventory *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).runtimePrototypes;
  if (this_00 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,id,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Failed_to_remove_runtime_prototy,(MethodInfo *)0x0);
      return;
    }
    pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)(this->fields).runtimePrototypes;
    if (pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)0x0) {
      this_02 = (RuntimePrototypeCubeModel *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
                Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                          (pDVar2,id,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                          );
      if (this_02 != (RuntimePrototypeCubeModel *)0x0) {
        RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_Destroy(this_02,(MethodInfo *)0x0);
        pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)(this->fields).runtimePrototypes;
        if (pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
          Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
          Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                    (pDVar2,id,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Remove_int_
                    );
          this_01 = (this->fields).OnWorldInventoryChange;
          if (this_01 != (MVWorldInventory_OnWorldInventoryChangeDelegate *)0x0) {
            MVWorldInventory+OnWorldInventoryChangeDelegate::
            MVWorldInventory_OnWorldInventoryChangeDelegate_Invoke(this_01,this,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ReplaceWithPendingRuntimePrototype(Int32) */

void Assembly-CSharp.dll::MVWorldInventory::MVWorldInventory_ReplaceWithPendingRuntimePrototype
               (MVWorldInventory *this,int32_t woId,MethodInfo *method)

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
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)(pMVar1->fields).worldObjects;
    pMVar2 = (MVCubeModelBase *)0x0;
    if (this_00 !=
        (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
        0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
      Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
      Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__TryGetValue
                (this_00,woId,(TerrainUtility_TerrainMap **)&stack0xfffffff8,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                );
      unaff_EDI = TypeInfo__MVCubeModelInstance;
      if (pMVar2 != (MVCubeModelBase *)0x0) {
        bVar3 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
        if (((pMVar2->klass->_1).naturalAligment < bVar3) ||
           ((MVCubeModelInstance__Class *)(pMVar2->klass->_1).typeHierarchy[bVar3 - 1] !=
            TypeInfo__MVCubeModelInstance)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        this_04 = (MVCubeModelBase *)0x0;
        if (bVar4) {
          this_04 = pMVar2;
        }
        if (this_04 == (MVCubeModelBase *)0x0) goto code_?;
        this_01 = (RuntimePrototypeCubeModel *)
                  ThemeWorldObject::ThemeWorldObject_get_Visualization
                            ((ThemeWorldObject *)this_04,(MethodInfo *)0x0);
        unaff_EDI = (MVCubeModelInstance__Class *)
                    MVCubeModelBase::MVCubeModelBase_get_Pid(this_04,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          this = _UNK_?;
          func_?();
          cRam_? = '\x01';
        }
        this_05 = (MVCubeModelInstance__Class *)(this->fields).runtimePrototypes;
        if (this_05 != (MVCubeModelInstance__Class *)0x0) {
          this_02 = (RuntimePrototypeCubeModel *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                              ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                *)this_05,(int32_t)unaff_EDI,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                              );
          if (this_02 != (RuntimePrototypeCubeModel *)0x0) {
            unaff_EDI = (MVCubeModelInstance__Class *)
                        RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CloneGeometry
                                  (this_02,1,(MethodInfo *)0x0);
            if (unaff_EDI != (MVCubeModelInstance__Class *)0x0) {
              this_06 = (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0;
              value.pendingRuntimePrototype = (RuntimePrototypeCubeModel *)unaff_EDI;
              value.prevPrototypeId = (int32_t)&UNK_?;
              RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_set_PrototypeState
                        ((RuntimePrototypeCubeModel *)unaff_EDI,PrototypeState__Enum_Pending,
                         (MethodInfo *)0x0);
              if (this_01 != (RuntimePrototypeCubeModel *)0x0) {
                this_03 = (DeltaCubes *)
                          AddDotsToTruncatedText+<Start>c__Iterator0::
                          AddDotsToTruncatedText_Start_c_Iterator0_System_Collections_IEnumerator_get_Current
                                    ((AddDotsToTruncatedText_Start_c_Iterator0 *)this_01,
                                     (MethodInfo *)0x0);
                if (this_03 != (DeltaCubes *)0x0) {
                  DeltaCubes::DeltaCubes_Clear(this_03,(MethodInfo *)0x0);
                  RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveInstance
                            (this_01,0xADDR,(MethodInfo *)0x0);
                  MVCubeModelBase::MVCubeModelBase_set_PrototypeCubeModel
                            (this_04,(RuntimePrototypeCubeModel *)unaff_EDI,(MethodInfo *)0x0);
                  RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CreateInstance
                            ((RuntimePrototypeCubeModel *)unaff_EDI,this_04,(MethodInfo *)0x0);
                  key = MVCubeModelBase::MVCubeModelBase_get_Pid(this_04,(MethodInfo *)0x0);
                  unaff_EDI = this_05;
                  func_?();
                  if (this_06 != (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0) {
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32,PendingPrototypeData]::Dictionary_2_System_Int32_PendingPrototypeData__Add
                              (this_06,key,value,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__Add_int__PendingPrototypeData_
                              );
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pMVar2 = extraout_EDX;
code_?:
  func_?(pMVar2,unaff_EDI);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void RequestWoMakeUniquePrototype(Int32) */

void Assembly-CSharp.dll::MVWorldInventory::MVWorldInventory_RequestWoMakeUniquePrototype
               (MVWorldInventory *this,int32_t woId,MethodInfo *method)

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
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)(pMVar1->fields).worldObjects;
    pMVar3 = (MVCubeModelBase *)0x0;
    if (pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
      Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
      Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__TryGetValue
                (pDVar2,woId,(TerrainUtility_TerrainMap **)&stack0xfffffff8,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                );
      if (pMVar3 == (MVCubeModelBase *)0x0) {
        this_01 = (MVCubeModelBase *)0x0;
      }
      else {
        bVar4 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
        if (((pMVar3->klass->_1).naturalAligment < bVar4) ||
           ((MVCubeModelInstance__Class *)(pMVar3->klass->_1).typeHierarchy[bVar4 - 1] !=
            TypeInfo__MVCubeModelInstance)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        this_01 = (MVCubeModelBase *)0x0;
        if (bVar5) {
          this_01 = pMVar3;
        }
        if (this_01 == (MVCubeModelBase *)0x0) goto code_?;
      }
      pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)(this->fields).runtimePrototypes;
      if (this_01 != (MVCubeModelBase *)0x0) {
        iVar6 = MVCubeModelBase::MVCubeModelBase_get_Pid(this_01,(MethodInfo *)0x0);
        if (pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)0x0) {
          this_02 = (RuntimePrototypeCubeModel *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                              (pDVar2,iVar6,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                              );
          if (this_02 != (RuntimePrototypeCubeModel *)0x0) {
            iVar6 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_get_InstancesCount
                              (this_02,(MethodInfo *)0x0);
            if (iVar6 == 1) {
              if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
                 && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                        ((Object *)StringLiteral_The_cubemodel_is_allready_unique,(MethodInfo *)0x0)
              ;
              return;
            }
            this_00 = (this->fields).pendingRuntimePrototypes;
            if (this_00 != (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0) {
              bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32,PendingPrototypeData]::
                      Dictionary_2_System_Int32_PendingPrototypeData__ContainsKey
                                (this_00,woId,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__ContainsKey_int_
                                );
              if (bVar7 != 0) {
                if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) !=
                     0) && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                          ((Object *)StringLiteral_allready_pending_,(MethodInfo *)0x0);
                return;
              }
              MVWorldInventory_ReplaceWithPendingRuntimePrototype(this,woId,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?();
              }
              this_03 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                  ((MethodInfo *)0x0);
              if (this_03 != (MVNetworkGame_OperationRequests *)0x0) {
                MVNetworkGame+OperationRequests::
                MVNetworkGame_OperationRequests_RequestWoUniquePrototype
                          (this_03,woId,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void UnpendRuntimePrototype(Int32) */

void Assembly-CSharp.dll::MVWorldInventory::MVWorldInventory_UnpendRuntimePrototype
               (MVWorldInventory *this,int32_t woId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).pendingRuntimePrototypes;
  if (pDVar1 != (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Int32,PendingPrototypeData]::Dictionary_2_System_Int32_PendingPrototypeData__ContainsKey
                      (pDVar1,woId,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__ContainsKey_int_
                      );
    if (bVar2 == 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_Trying_to_unpend_runtime_prototy,(MethodInfo *)0x0);
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_02 != (MVWorldObjectClientManager *)0x0) {
      pMVar3 = (MVCubeModelBase *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_02,woId,(MethodInfo *)0x0);
      if (pMVar3 == (MVCubeModelBase *)0x0) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)StringLiteral_Trying_to_unpend_non_existing_cu,(MethodInfo *)0x0);
        goto code_?;
      }
      bVar4 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
      if (((pMVar3->klass->_1).naturalAligment < bVar4) ||
         ((MVCubeModelInstance__Class *)(pMVar3->klass->_1).typeHierarchy[bVar4 - 1] !=
          TypeInfo__MVCubeModelInstance)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      this_03 = (MVCubeModelBase *)0x0;
      if (bVar5) {
        this_03 = pMVar3;
      }
      if (this_03 == (MVCubeModelBase *)0x0) goto code_?;
      this_00 = (this->fields).runtimePrototypes;
      pDVar1 = (this->fields).pendingRuntimePrototypes;
      if (pDVar1 != (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0) {
        PVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Int32,PendingPrototypeData]::
                Dictionary_2_System_Int32_PendingPrototypeData__get_Item
                          (pDVar1,woId,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__get_Item_int_
                          );
        if (this_00 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
          bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__ContainsKey
                            ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                             PVar6.prevPrototypeId,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__ContainsKey_int_
                            );
          if (bVar2 == 0) {
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                      ((Object *)StringLiteral_Trying_to_unpend_but_prev_protot,(MethodInfo *)0x0);
code_?:
            pDVar1 = (this->fields).pendingRuntimePrototypes;
            if (pDVar1 != (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Int32,PendingPrototypeData]::Dictionary_2_System_Int32_PendingPrototypeData__Remove
                        (pDVar1,woId,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__Remove_int_
                        );
              return;
            }
          }
          else {
            this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)(this->fields).runtimePrototypes;
            pDVar1 = (this->fields).pendingRuntimePrototypes;
            if (pDVar1 != (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0) {
              PVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32,PendingPrototypeData]::
                      Dictionary_2_System_Int32_PendingPrototypeData__get_Item
                                (pDVar1,woId,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__get_Item_int_
                                );
              if (this_01 !=
                  (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)0x0) {
                pRVar7 = (RuntimePrototypeCubeModel *)
                         mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                         Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                   (this_01,PVar6.prevPrototypeId,
                                    MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                                   );
                MVCubeModelBase::MVCubeModelBase_set_PrototypeCubeModel
                          (this_03,pRVar7,(MethodInfo *)0x0);
                pRVar7 = (RuntimePrototypeCubeModel *)
                         ThemeWorldObject::ThemeWorldObject_get_Visualization
                                   ((ThemeWorldObject *)this_03,(MethodInfo *)0x0);
                if (pRVar7 != (RuntimePrototypeCubeModel *)0x0) {
                  RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CreateInstance
                            (pRVar7,this_03,(MethodInfo *)0x0);
                  goto code_?;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pMVar3 = extraout_EDX;
code_?:
  func_?(pMVar3);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* MVWorldInventory() */

void Assembly-CSharp.dll::MVWorldInventory::MVWorldInventory__ctor
               (MVWorldInventory *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Dictionary__
            );
  (this->fields).runtimePrototypes = this_00;
  this_01 = (Dictionary_2_System_Int32_PendingPrototypeData_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
             MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__Dictionary__
            );
  (this->fields).pendingRuntimePrototypes = this_01;
  method_00 = TypeInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>;
  this_02 = (List_1_UnityEngine_Vector4_ *)func_?();
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_02,
             MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__List__);
  (this->fields).dirtyRPCM = (List_1_RuntimePrototypeCubeModel_ *)this_02;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  return;
}


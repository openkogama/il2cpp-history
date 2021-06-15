
/* Void AddToGameObjectIDMap(MVWorldObjectClient) */

void Assembly-CSharp.dll::MVWorldObjectClientManager+WorldObjectMapping::
     MVWorldObjectClientManager_WorldObjectMapping_AddToGameObjectIDMap
               (MVWorldObjectClientManager_WorldObjectMapping *this,MVWorldObjectClient *wo,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).gameObjectIdToWorldObjectIdMap;
  if ((wo != (MVWorldObjectClient *)0x0) &&
     (pGVar2 = (wo->fields).gameObject, pGVar2 != (GameObject *)0x0)) {
    iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                      ((Object_1 *)pGVar2,(MethodInfo *)0x0);
    if (pDVar1 != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
      bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]
              ::Dictionary_2_System_Int32_System_Int32__ContainsKey
                        (pDVar1,iVar3,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                        );
      if (bVar4 != 0) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)StringLiteral_Key_already_in_gameObjectsWorldO,(MethodInfo *)0x0);
        return;
      }
      pGVar2 = (wo->fields).gameObject;
      pDVar1 = (this->fields).gameObjectIdToWorldObjectIdMap;
      if (pGVar2 != (GameObject *)0x0) {
        iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                          ((Object_1 *)pGVar2,(MethodInfo *)0x0);
        value = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)wo,(MethodInfo *)0x0);
        if (pDVar1 != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
          Dictionary_2_System_Int32_System_Int32__Add
                    (pDVar1,iVar3,(int32_t)value,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
          return;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void AddWorldObjectToTypeSet(MVWorldObjectClient) */

void Assembly-CSharp.dll::MVWorldObjectClientManager+WorldObjectMapping::
     MVWorldObjectClientManager_WorldObjectMapping_AddWorldObjectToTypeSet
               (MVWorldObjectClientManager_WorldObjectMapping *this,MVWorldObjectClient *wo,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).worldObjectTypeSets;
  if (wo != (MVWorldObjectClient *)0x0) {
    pOVar2 = System.Core.dll::System::Linq::Enumerable+<CreateGroupByIterator>c__Iterator5`2[System
             ::Object,System::Object]::
             Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                       ((Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_
                         *)wo,(MethodInfo *)0x0);
    if (pDVar1 != (Dictionary_2_MV_WorldObject_WorldObjectType_HashSet_1_System_Int32_ *)0x0) {
      bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
              WorldObjectType,System::Object]::
              Dictionary_2_MV_WorldObject_WorldObjectType_System_Object__ContainsKey
                        ((Dictionary_2_MV_WorldObject_WorldObjectType_System_Object_ *)pDVar1,
                         (WorldObjectType__Enum)pOVar2,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__ContainsKey_MV__WorldObject__WorldObjectType_
                        );
      if (bVar3 == 0) {
        pDVar1 = (this->fields).worldObjectTypeSets;
        System.Core.dll::System::Linq::Enumerable+<CreateGroupByIterator>c__Iterator5`2[System::
        Object,System::Object]::
        Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                  ((Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_ *)wo
                   ,(MethodInfo *)0x0);
        this_00 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
        System.Core.dll::System::Collections::Generic::
        HashSet`1[AvatarModifierPackage+AvatarModifier]::
        HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                  (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
        if (pDVar1 == (Dictionary_2_MV_WorldObject_WorldObjectType_HashSet_1_System_Int32_ *)0x0)
        goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
        WorldObjectType,System::Object]::
        Dictionary_2_MV_WorldObject_WorldObjectType_System_Object__Add
                  ((Dictionary_2_MV_WorldObject_WorldObjectType_System_Object_ *)pDVar1,
                   (WorldObjectType__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__Add_MV__WorldObject__WorldObjectType__System__Collections__Generic__HashSet<int>_
                   ,(Object *)this_00,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__Add_MV__WorldObject__WorldObjectType__System__Collections__Generic__HashSet<int>_
                  );
        key = mscorlib.dll::System::Object::Object_GetType((Object *)wo,(MethodInfo *)0x0);
        pOVar2 = System.Core.dll::System::Linq::
                 Enumerable+<CreateGroupByIterator>c__Iterator5`2[System::Object,System::Object]::
                 Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                           ((Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_
                             *)wo,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pDVar4 = (this->fields).typeWorldObjectTypeMap;
        if (pDVar4 == (Dictionary_2_System_Type_MV_WorldObject_WorldObjectType_ *)0x0)
        goto code_?;
        bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,MV::
                WorldObject::WorldObjectType]::
                Dictionary_2_System_Object_MV_WorldObject_WorldObjectType__ContainsKey
                          ((Dictionary_2_System_Object_MV_WorldObject_WorldObjectType_ *)pDVar4,
                           (Object *)key,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__ContainsKey_System__Type_
                          );
        if (bVar3 == 0) {
          pDVar4 = (this->fields).typeWorldObjectTypeMap;
          if (pDVar4 == (Dictionary_2_System_Type_MV_WorldObject_WorldObjectType_ *)0x0)
          goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,MV::WorldObject::
          WorldObjectType]::Dictionary_2_System_Object_MV_WorldObject_WorldObjectType__Add
                    ((Dictionary_2_System_Object_MV_WorldObject_WorldObjectType_ *)pDVar4,
                     (Object *)key,(WorldObjectType__Enum)pOVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__Add_System__Type__MV__WorldObject__WorldObjectType_
                    );
        }
        else {
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                    ((Object *)StringLiteral_Type_already_contained_in_typeWo,(MethodInfo *)0x0);
        }
      }
      pDVar1 = (this->fields).worldObjectTypeSets;
      pOVar2 = System.Core.dll::System::Linq::
               Enumerable+<CreateGroupByIterator>c__Iterator5`2[System::Object,System::Object]::
               Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                         ((Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_
                           *)wo,(MethodInfo *)0x0);
      if (pDVar1 != (Dictionary_2_MV_WorldObject_WorldObjectType_HashSet_1_System_Int32_ *)0x0) {
        this_01 = (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                  WorldObjectType,System::Object]::
                  Dictionary_2_MV_WorldObject_WorldObjectType_System_Object__get_Item
                            ((Dictionary_2_MV_WorldObject_WorldObjectType_System_Object_ *)pDVar1,
                             (WorldObjectType__Enum)pOVar2,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__WorldObjectType_
                            );
        item = (UnityWebRequest *)
               mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)wo,(MethodInfo *)0x0);
        if (this_01 != (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
          System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
          UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
                    (this_01,item,MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pGVar5 = (wo->fields).gameObject;
          pDVar6 = (this->fields).gameObjectIdToWorldObjectIdMap;
          if (pGVar5 != (GameObject *)0x0) {
            iVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                              ((Object_1 *)pGVar5,(MethodInfo *)0x0);
            if (pDVar6 != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
              bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Int32]::Dictionary_2_System_Int32_System_Int32__ContainsKey
                                (pDVar6,iVar7,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                                );
              if (bVar3 != 0) {
                if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) !=
                     0) && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                          ((Object *)StringLiteral_Key_already_in_gameObjectsWorldO,
                           (MethodInfo *)0x0);
                return;
              }
              pGVar5 = (wo->fields).gameObject;
              pDVar6 = (this->fields).gameObjectIdToWorldObjectIdMap;
              if (pGVar5 != (GameObject *)0x0) {
                iVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                                  ((Object_1 *)pGVar5,(MethodInfo *)0x0);
                value = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                        Collection_1_VoxelHit__get_Items
                                  ((Collection_1_VoxelHit_ *)wo,(MethodInfo *)0x0);
                if (pDVar6 != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Int32]::Dictionary_2_System_Int32_System_Int32__Add
                            (pDVar6,iVar7,(int32_t)value,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_
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
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void AddWorldObjectToTypeWorldObjectTypeMap(Type, WorldObjectType) */

void Assembly-CSharp.dll::MVWorldObjectClientManager+WorldObjectMapping::
     MVWorldObjectClientManager_WorldObjectMapping_AddWorldObjectToTypeWorldObjectTypeMap
               (MVWorldObjectClientManager_WorldObjectMapping *this,Type *type,
               WorldObjectType__Enum worldObjectType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).typeWorldObjectTypeMap;
  if (pDVar1 != (Dictionary_2_System_Type_MV_WorldObject_WorldObjectType_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,MV::WorldObject
            ::WorldObjectType]::
            Dictionary_2_System_Object_MV_WorldObject_WorldObjectType__ContainsKey
                      ((Dictionary_2_System_Object_MV_WorldObject_WorldObjectType_ *)pDVar1,
                       (Object *)type,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__ContainsKey_System__Type_
                      );
    if (bVar2 != 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Type_already_contained_in_typeWo,(MethodInfo *)0x0);
      return;
    }
    pDVar1 = (this->fields).typeWorldObjectTypeMap;
    if (pDVar1 != (Dictionary_2_System_Type_MV_WorldObject_WorldObjectType_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,MV::WorldObject::
      WorldObjectType]::Dictionary_2_System_Object_MV_WorldObject_WorldObjectType__Add
                ((Dictionary_2_System_Object_MV_WorldObject_WorldObjectType_ *)pDVar1,(Object *)type
                 ,worldObjectType,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__Add_System__Type__MV__WorldObject__WorldObjectType_
                );
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* HashSet`1[System.Int32] GetWorldObjectTypeSet(WorldObjectType) */

HashSet_1_System_Int32_ *
Assembly-CSharp.dll::MVWorldObjectClientManager+WorldObjectMapping::
MVWorldObjectClientManager_WorldObjectMapping_GetWorldObjectTypeSet
          (MVWorldObjectClientManager_WorldObjectMapping *this,WorldObjectType__Enum worldObjectType
          ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).worldObjectTypeSets;
  if (pDVar1 != (Dictionary_2_MV_WorldObject_WorldObjectType_HashSet_1_System_Int32_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            WorldObjectType,System::Object]::
            Dictionary_2_MV_WorldObject_WorldObjectType_System_Object__ContainsKey
                      ((Dictionary_2_MV_WorldObject_WorldObjectType_System_Object_ *)pDVar1,
                       worldObjectType,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__ContainsKey_MV__WorldObject__WorldObjectType_
                      );
    if (bVar2 == 0) {
      return (HashSet_1_System_Int32_ *)0x0;
    }
    pDVar1 = (this->fields).worldObjectTypeSets;
    if (pDVar1 != (Dictionary_2_MV_WorldObject_WorldObjectType_HashSet_1_System_Int32_ *)0x0) {
      pHVar3 = (HashSet_1_System_Int32_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
               WorldObjectType,System::Object]::
               Dictionary_2_MV_WorldObject_WorldObjectType_System_Object__get_Item
                         ((Dictionary_2_MV_WorldObject_WorldObjectType_System_Object_ *)pDVar1,
                          worldObjectType,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__WorldObjectType_
                         );
      return pHVar3;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pHVar3 = (HashSet_1_System_Int32_ *)(*pcVar4)();
  return pHVar3;
}


/* Void RemoveWorldObjectFromTypeSet(MVWorldObjectClient) */

void Assembly-CSharp.dll::MVWorldObjectClientManager+WorldObjectMapping::
     MVWorldObjectClientManager_WorldObjectMapping_RemoveWorldObjectFromTypeSet
               (MVWorldObjectClientManager_WorldObjectMapping *this,MVWorldObjectClient *wo,
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
              ((Object *)StringLiteral_RemoveFromTypeSet_failed__World_,(MethodInfo *)0x0);
    return;
  }
  pDVar1 = (this->fields).worldObjectTypeSets;
  pOVar2 = System.Core.dll::System::Linq::Enumerable+<CreateGroupByIterator>c__Iterator5`2[System::
           Object,System::Object]::
           Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                     ((Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_ *
                      )wo,(MethodInfo *)0x0);
  if (pDVar1 != (Dictionary_2_MV_WorldObject_WorldObjectType_HashSet_1_System_Int32_ *)0x0) {
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            WorldObjectType,System::Object]::
            Dictionary_2_MV_WorldObject_WorldObjectType_System_Object__ContainsKey
                      ((Dictionary_2_MV_WorldObject_WorldObjectType_System_Object_ *)pDVar1,
                       (WorldObjectType__Enum)pOVar2,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__ContainsKey_MV__WorldObject__WorldObjectType_
                      );
    if (bVar3 == 0) {
      System.Core.dll::System::Linq::Enumerable+<CreateGroupByIterator>c__Iterator5`2[System::
      Object,System::Object]::
      Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                ((Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_ *)wo,
                 (MethodInfo *)0x0);
      piVar4 = (int *)func_?();
      if (piVar4 != (int *)0x0) {
        pSVar5 = (String *)(**(code **)(*piVar4 + 0xd8))();
        func_?();
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        pSVar5 = mscorlib.dll::System::String::String_Concat_2
                           (StringLiteral_RemoveFromTypeSet_failed__There_,pSVar5,(MethodInfo *)0x0)
        ;
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)pSVar5,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      pDVar1 = (this->fields).worldObjectTypeSets;
      pOVar2 = System.Core.dll::System::Linq::
               Enumerable+<CreateGroupByIterator>c__Iterator5`2[System::Object,System::Object]::
               Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                         ((Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_
                           *)wo,(MethodInfo *)0x0);
      if (pDVar1 != (Dictionary_2_MV_WorldObject_WorldObjectType_HashSet_1_System_Int32_ *)0x0) {
        this_02 = (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                  WorldObjectType,System::Object]::
                  Dictionary_2_MV_WorldObject_WorldObjectType_System_Object__get_Item
                            ((Dictionary_2_MV_WorldObject_WorldObjectType_System_Object_ *)pDVar1,
                             (WorldObjectType__Enum)pOVar2,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__WorldObjectType_
                            );
        pIVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)wo,(MethodInfo *)0x0);
        if (this_02 != (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)0x0) {
          bVar3 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds::Api::
                  NativeAdType]::HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                            (this_02,(NativeAdType__Enum)pIVar6,
                             MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
          if (bVar3 == 0) {
            System.Core.dll::System::Linq::Enumerable+<CreateGroupByIterator>c__Iterator5`2[System::
            Object,System::Object]::
            Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                      ((Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_
                        *)wo,(MethodInfo *)0x0);
            pOVar2 = (Object *)func_?();
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?();
            }
            pSVar5 = mscorlib.dll::System::String::String_Concat
                               ((Object *)StringLiteral_Could_not_find_wo_for_type_,pOVar2,
                                (MethodInfo *)0x0);
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                      ((Object *)pSVar5,(MethodInfo *)0x0);
          }
          pDVar1 = (this->fields).worldObjectTypeSets;
          pOVar2 = System.Core.dll::System::Linq::
                   Enumerable+<CreateGroupByIterator>c__Iterator5`2[System::Object,System::Object]::
                   Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                             ((Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_
                               *)wo,(MethodInfo *)0x0);
          if (pDVar1 != (Dictionary_2_MV_WorldObject_WorldObjectType_HashSet_1_System_Int32_ *)0x0)
          {
            this_03 = (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                      WorldObjectType,System::Object]::
                      Dictionary_2_MV_WorldObject_WorldObjectType_System_Object__get_Item
                                ((Dictionary_2_MV_WorldObject_WorldObjectType_System_Object_ *)
                                 pDVar1,(WorldObjectType__Enum)pOVar2,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__WorldObjectType_
                                );
            pIVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                     Collection_1_VoxelHit__get_Items
                               ((Collection_1_VoxelHit_ *)wo,(MethodInfo *)0x0);
            if (this_03 != (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0) {
              System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::MetaData::
              FirstTimeEvent]::HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent__Remove
                        (this_03,(FirstTimeEvent__Enum)pIVar6,
                         MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_);
              pDVar1 = (this->fields).worldObjectTypeSets;
              pOVar2 = System.Core.dll::System::Linq::
                       Enumerable+<CreateGroupByIterator>c__Iterator5`2[System::Object,System::
                       Object]::
                       Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                                 ((Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_
                                   *)wo,(MethodInfo *)0x0);
              if (pDVar1 != (Dictionary_2_MV_WorldObject_WorldObjectType_HashSet_1_System_Int32_ *)
                            0x0) {
                this_04 = (Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                           *)mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::
                             WorldObject::WorldObjectType,System::Object]::
                             Dictionary_2_MV_WorldObject_WorldObjectType_System_Object__get_Item
                                       ((Dictionary_2_MV_WorldObject_WorldObjectType_System_Object_
                                         *)pDVar1,(WorldObjectType__Enum)pOVar2,
                                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__WorldObjectType_
                                       );
                if (this_04 !=
                    (Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                     *)0x0) {
                  JVar7 = System.Core.dll::System::Linq::
                          Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
                          JsonSchemaType]::
                          Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                                    (this_04,
                                     MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__
                                    );
                  if ((int)JVar7 < 1) {
                    pDVar1 = (this->fields).worldObjectTypeSets;
                    pOVar2 = System.Core.dll::System::Linq::
                             Enumerable+<CreateGroupByIterator>c__Iterator5`2[System::Object,System
                             ::Object]::
                             Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                                       ((Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_
                                         *)wo,(MethodInfo *)0x0);
                    if (pDVar1 == (Dictionary_2_MV_WorldObject_WorldObjectType_HashSet_1_System_Int32_
                                   *)0x0) goto code_?;
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                    WorldObjectType,System::Object]::
                    Dictionary_2_MV_WorldObject_WorldObjectType_System_Object__Remove
                              ((Dictionary_2_MV_WorldObject_WorldObjectType_System_Object_ *)pDVar1,
                               (WorldObjectType__Enum)pOVar2,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__Remove_MV__WorldObject__WorldObjectType_
                              );
                    key = mscorlib.dll::System::Object::Object_GetType
                                    ((Object *)wo,(MethodInfo *)0x0);
                    if (cRam_? == '\0') {
                      func_?();
                      cRam_? = '\x01';
                    }
                    pDVar8 = (this->fields).typeWorldObjectTypeMap;
                    if (pDVar8 == (Dictionary_2_System_Type_MV_WorldObject_WorldObjectType_ *)0x0)
                    goto code_?;
                    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Object,MV::WorldObject::WorldObjectType]::
                            Dictionary_2_System_Object_MV_WorldObject_WorldObjectType__ContainsKey
                                      ((Dictionary_2_System_Object_MV_WorldObject_WorldObjectType_ *
                                       )pDVar8,(Object *)key,
                                       MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__ContainsKey_System__Type_
                                      );
                    if (bVar3 == 0) {
                      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr &
                           0x2000000) != 0) &&
                         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                        func_?();
                      }
                      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                                ((Object *)StringLiteral_Type_not_contained_in_typeWorldO,
                                 (MethodInfo *)0x0);
                    }
                    else {
                      pDVar8 = (this->fields).typeWorldObjectTypeMap;
                      if (pDVar8 == (Dictionary_2_System_Type_MV_WorldObject_WorldObjectType_ *)0x0)
                      goto code_?;
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,MV::
                      WorldObject::WorldObjectType]::
                      Dictionary_2_System_Object_MV_WorldObject_WorldObjectType__Remove
                                ((Dictionary_2_System_Object_MV_WorldObject_WorldObjectType_ *)
                                 pDVar8,(Object *)key,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__Remove_System__Type_
                                );
                    }
                  }
                  this_00 = (wo->fields).gameObject;
                  this_01 = (this->fields).gameObjectIdToWorldObjectIdMap;
                  if (this_00 != (GameObject *)0x0) {
                    key_00 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                                       ((Object_1 *)this_00,(MethodInfo *)0x0);
                    if (this_01 != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Int32]::Dictionary_2_System_Int32_System_Int32__Remove
                                (this_01,key_00,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Remove_int_
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
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void RemoveWorldObjectFromTypeWorldObjectTypeMap(Type) */

void Assembly-CSharp.dll::MVWorldObjectClientManager+WorldObjectMapping::
     MVWorldObjectClientManager_WorldObjectMapping_RemoveWorldObjectFromTypeWorldObjectTypeMap
               (MVWorldObjectClientManager_WorldObjectMapping *this,Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).typeWorldObjectTypeMap;
  if (pDVar1 != (Dictionary_2_System_Type_MV_WorldObject_WorldObjectType_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,MV::WorldObject
            ::WorldObjectType]::
            Dictionary_2_System_Object_MV_WorldObject_WorldObjectType__ContainsKey
                      ((Dictionary_2_System_Object_MV_WorldObject_WorldObjectType_ *)pDVar1,
                       (Object *)type,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__ContainsKey_System__Type_
                      );
    if (bVar2 == 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Type_not_contained_in_typeWorldO,(MethodInfo *)0x0);
      return;
    }
    pDVar1 = (this->fields).typeWorldObjectTypeMap;
    if (pDVar1 != (Dictionary_2_System_Type_MV_WorldObject_WorldObjectType_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,MV::WorldObject::
      WorldObjectType]::Dictionary_2_System_Object_MV_WorldObject_WorldObjectType__Remove
                ((Dictionary_2_System_Object_MV_WorldObject_WorldObjectType_ *)pDVar1,(Object *)type
                 ,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__Remove_System__Type_
                );
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean TryGetWorldObjectIDFromGameObjectID(Int32, Int32 ByRef) */

bool Assembly-CSharp.dll::MVWorldObjectClientManager+WorldObjectMapping::
     MVWorldObjectClientManager_WorldObjectMapping_TryGetWorldObjectIDFromGameObjectID
               (MVWorldObjectClientManager_WorldObjectMapping *this,int32_t goId,int32_t *woID,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).gameObjectIdToWorldObjectIdMap;
  if (this_00 != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
            Dictionary_2_System_Int32_System_Int32__TryGetValue
                      (this_00,goId,woID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_int>__TryGetValue_int__System__Int32__
                      );
    return bVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Boolean TryGetWorldObjectTypeFromObjectType(Type, WorldObjectType ByRef) */

bool Assembly-CSharp.dll::MVWorldObjectClientManager+WorldObjectMapping::
     MVWorldObjectClientManager_WorldObjectMapping_TryGetWorldObjectTypeFromObjectType
               (MVWorldObjectClientManager_WorldObjectMapping *this,Type *type,
               WorldObjectType__Enum *worldObjectType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).typeWorldObjectTypeMap;
  if (pDVar1 != (Dictionary_2_System_Type_MV_WorldObject_WorldObjectType_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,MV::WorldObject
            ::WorldObjectType]::
            Dictionary_2_System_Object_MV_WorldObject_WorldObjectType__ContainsKey
                      ((Dictionary_2_System_Object_MV_WorldObject_WorldObjectType_ *)pDVar1,
                       (Object *)type,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__ContainsKey_System__Type_
                      );
    if (bVar2 == 0) {
      return 0;
    }
    pDVar1 = (this->fields).typeWorldObjectTypeMap;
    if (pDVar1 != (Dictionary_2_System_Type_MV_WorldObject_WorldObjectType_ *)0x0) {
      WVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,MV::
              WorldObject::WorldObjectType]::
              Dictionary_2_System_Object_MV_WorldObject_WorldObjectType__get_Item
                        ((Dictionary_2_System_Object_MV_WorldObject_WorldObjectType_ *)pDVar1,
                         (Object *)type,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__get_Item_System__Type_
                        );
      *worldObjectType = WVar3;
      return 1;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar2 = (*pcVar4)();
  return bVar2;
}


/* MVWorldObjectClientManager+WorldObjectMapping() */

void Assembly-CSharp.dll::MVWorldObjectClientManager+WorldObjectMapping::
     MVWorldObjectClientManager_WorldObjectMapping__ctor
               (MVWorldObjectClientManager_WorldObjectMapping *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_MV_WorldObject_WorldObjectType_HashSet_1_System_Int32_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__Dictionary__
            );
  (this->fields).worldObjectTypeSets = this_00;
  this_01 = (Dictionary_2_System_Int32_System_Int32_ *)
            func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
             MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
  (this->fields).gameObjectIdToWorldObjectIdMap = this_01;
  method_00 = 
  TypeInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>
  ;
  this_02 = (Dictionary_2_System_Type_MV_WorldObject_WorldObjectType_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_02,
             MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__Dictionary__
            );
  (this->fields).typeWorldObjectTypeMap = this_02;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  return;
}


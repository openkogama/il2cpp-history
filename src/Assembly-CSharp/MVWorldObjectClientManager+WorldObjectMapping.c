
/* Void AddToGameObjectIDMap(MVWorldObjectClient) */

void Assembly-CSharp.dll::MVWorldObjectClientManager+WorldObjectMapping::
     MVWorldObjectClientManager_WorldObjectMapping_AddToGameObjectIDMap
               (MVWorldObjectClientManager_WorldObjectMapping *this,MVWorldObjectClient *wo,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                   );
    func_?(&StringLiteral_Key_already_in_gameObjectsWorldO);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
            (this->fields).gameObjectIdToWorldObjectIdMap;
  if ((wo != (MVWorldObjectClient *)0x0) &&
     (pGVar1 = (wo->fields).gameObject, pGVar1 != (GameObject *)0x0)) {
    pOVar2 = (Object *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                       ((Object_1 *)pGVar1,(MethodInfo *)0x0);
    if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
      bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (this_00,pOVar2,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                        );
      if (bVar3 != 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)StringLiteral_Key_already_in_gameObjectsWorldO,(MethodInfo *)0x0);
        return;
      }
      pGVar1 = (wo->fields).gameObject;
      this_01 = (Dictionary_2_System_Object_System_Object_ *)
                (this->fields).gameObjectIdToWorldObjectIdMap;
      if (pGVar1 != (GameObject *)0x0) {
        pOVar2 = (Object *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                           ((Object_1 *)pGVar1,(MethodInfo *)0x0);
        if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (this_01,pOVar2,(Object *)(wo->fields)._.id,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
          return;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void AddWorldObjectToTypeSet(MVWorldObjectClient) */

void Assembly-CSharp.dll::MVWorldObjectClientManager+WorldObjectMapping::
     MVWorldObjectClientManager_WorldObjectMapping_AddWorldObjectToTypeSet
               (MVWorldObjectClientManager_WorldObjectMapping *this,MVWorldObjectClient *wo,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__Add_MV__WorldObject__WorldObjectType__System__Collections__Generic__HashSet<int>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__ContainsKey_MV__WorldObject__WorldObjectType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__WorldObjectType_
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    cRam_? = '\x01';
  }
  if (wo != (MVWorldObjectClient *)0x0) {
    pDVar1 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
             (this->fields).worldObjectTypeSets;
    if (pDVar1 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (pDVar1,(Object *)(wo->fields)._.type,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__ContainsKey_MV__WorldObject__WorldObjectType_
                        );
      if (bVar2 == 0) {
        pDVar3 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).worldObjectTypeSets;
        pOVar4 = (Object *)(wo->fields)._.type;
        this_01 = (HashSet_1_UnityEngine_Vector3_ *)
                  func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
        if (this_01 == (HashSet_1_UnityEngine_Vector3_ *)0x0) goto code_?;
        System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
        HashSet_1_UnityEngine_Vector3___ctor
                  (this_01,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
        if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (pDVar3,pOVar4,(Object *)this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__Add_MV__WorldObject__WorldObjectType__System__Collections__Generic__HashSet<int>_
                  );
        key = mscorlib.dll::System::Object::Object_GetType((Object *)wo,(MethodInfo *)0x0);
        pOVar4 = (Object *)(wo->fields)._.type;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Debug);
          func_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__Add_System__Type__MV__WorldObject__WorldObjectType_
                         );
          func_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__ContainsKey_System__Type_
                         );
          func_?(&StringLiteral_Type_already_contained_in_typeWo);
          cRam_? = '\x01';
        }
        pDVar1 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                 (this->fields).typeWorldObjectTypeMap;
        if (pDVar1 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)
        goto code_?;
        bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Object,GUILoginHandler+PlanetData]::
                Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                          (pDVar1,(Object *)key,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__ContainsKey_System__Type_
                          );
        if (bVar2 == 0) {
          pDVar3 = (Dictionary_2_System_Object_System_Object_ *)
                   (this->fields).typeWorldObjectTypeMap;
          if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (pDVar3,(Object *)key,pOVar4,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__Add_System__Type__MV__WorldObject__WorldObjectType_
                    );
        }
        else {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                    ((Object *)StringLiteral_Type_already_contained_in_typeWo,(MethodInfo *)0x0);
        }
      }
      this_00 = (this->fields).worldObjectTypeSets;
      if (this_00 != (Dictionary_2_MV_WorldObject_WorldObjectType_HashSet_1_System_Int32_ *)0x0) {
        this_02 = (HashSet_1_System_Object_ *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,
                             (wo->fields)._.type,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__WorldObjectType_
                            );
        if (this_02 != (HashSet_1_System_Object_ *)0x0) {
          System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
          HashSet_1_System_Object__Add
                    (this_02,(Object *)(wo->fields)._.id,
                     MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
          if (cRam_? == '\0') {
            func_?();
            func_?();
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          pGVar5 = (wo->fields).gameObject;
          pDVar1 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                   (this->fields).gameObjectIdToWorldObjectIdMap;
          if (pGVar5 != (GameObject *)0x0) {
            pOVar4 = (Object *)
                     UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                               ((Object_1 *)pGVar5,(MethodInfo *)0x0);
            if (pDVar1 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
              bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,GUILoginHandler+PlanetData]::
                      Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                                (pDVar1,pOVar4,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                                );
              if (bVar2 != 0) {
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                          ((Object *)StringLiteral_Key_already_in_gameObjectsWorldO,
                           (MethodInfo *)0x0);
                return;
              }
              pGVar5 = (wo->fields).gameObject;
              pDVar3 = (Dictionary_2_System_Object_System_Object_ *)
                       (this->fields).gameObjectIdToWorldObjectIdMap;
              if (pGVar5 != (GameObject *)0x0) {
                pOVar4 = (Object *)
                         UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                                   ((Object_1 *)pGVar5,(MethodInfo *)0x0);
                if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__Add
                            (pDVar3,pOVar4,(Object *)(wo->fields)._.id,
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
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void AddWorldObjectToTypeWorldObjectTypeMap(Type, WorldObjectType) */

void Assembly-CSharp.dll::MVWorldObjectClientManager+WorldObjectMapping::
     MVWorldObjectClientManager_WorldObjectMapping_AddWorldObjectToTypeWorldObjectTypeMap
               (MVWorldObjectClientManager_WorldObjectMapping *this,Type *type,
               WorldObjectType__Enum worldObjectType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__Add_System__Type__MV__WorldObject__WorldObjectType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__ContainsKey_System__Type_
                   );
    func_?(&StringLiteral_Type_already_contained_in_typeWo);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
            (this->fields).typeWorldObjectTypeMap;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)type,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__ContainsKey_System__Type_
                      );
    if (bVar1 != 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Type_already_contained_in_typeWo,(MethodInfo *)0x0);
      return;
    }
    this_01 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).typeWorldObjectTypeMap;
    if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_01,(Object *)type,(Object *)worldObjectType,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__Add_System__Type__MV__WorldObject__WorldObjectType_
                );
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__ContainsKey_MV__WorldObject__WorldObjectType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__WorldObjectType_
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
            (this->fields).worldObjectTypeSets;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)worldObjectType,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__ContainsKey_MV__WorldObject__WorldObjectType_
                      );
    if (bVar1 == 0) {
      return (HashSet_1_System_Int32_ *)0x0;
    }
    this_01 = (this->fields).worldObjectTypeSets;
    if (this_01 != (Dictionary_2_MV_WorldObject_WorldObjectType_HashSet_1_System_Int32_ *)0x0) {
      pHVar2 = (HashSet_1_System_Int32_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,worldObjectType,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__WorldObjectType_
                         );
      return pHVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pHVar2 = (HashSet_1_System_Int32_ *)(*pcVar3)();
  return pHVar2;
}


/* Void RemoveWorldObjectFromTypeSet(MVWorldObjectClient) */

void Assembly-CSharp.dll::MVWorldObjectClientManager+WorldObjectMapping::
     MVWorldObjectClientManager_WorldObjectMapping_RemoveWorldObjectFromTypeSet
               (MVWorldObjectClientManager_WorldObjectMapping *this,MVWorldObjectClient *wo,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__ContainsKey_MV__WorldObject__WorldObjectType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__Remove_MV__WorldObject__WorldObjectType_
                   );
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Remove_int_);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__WorldObjectType_
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__);
    func_?(&TypeInfo__MV__WorldObject__WorldObjectType);
    func_?(&StringLiteral_RemoveFromTypeSet_failed__There_);
    func_?(&StringLiteral_RemoveFromTypeSet_failed__World_);
    func_?(&StringLiteral_Could_not_find_wo_for_type_);
    cRam_? = '\x01';
  }
  if (wo == (MVWorldObjectClient *)0x0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_RemoveFromTypeSet_failed__World_,(MethodInfo *)0x0);
    return;
  }
  pDVar1 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
           (this->fields).worldObjectTypeSets;
  if (pDVar1 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (pDVar1,(Object *)(wo->fields)._.type,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__ContainsKey_MV__WorldObject__WorldObjectType_
                      );
    if (bVar2 == 0) {
      pSVar3 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xfffffff0,(MethodInfo *)0x0)
      ;
      pSVar3 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_RemoveFromTypeSet_failed__There_,pSVar3,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)pSVar3,(MethodInfo *)0x0);
      return;
    }
    pDVar4 = (this->fields).worldObjectTypeSets;
    if (pDVar4 != (Dictionary_2_MV_WorldObject_WorldObjectType_HashSet_1_System_Int32_ *)0x0) {
      pHVar5 = (HashSet_1_System_Int32_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar4,(wo->fields)._.type
                          ,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__WorldObjectType_
                         );
      if (pHVar5 != (HashSet_1_System_Int32_ *)0x0) {
        bVar2 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
                HashSet_1_System_Int32__Contains
                          (pHVar5,(wo->fields)._.id,
                           MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        if (bVar2 == 0) {
          pSVar3 = mscorlib.dll::System::Enum::Enum_ToString
                             ((Enum *)&stack0xfffffff0,(MethodInfo *)0x0);
          pSVar3 = mscorlib.dll::System::String::String_Concat_3
                             (StringLiteral_Could_not_find_wo_for_type_,pSVar3,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                    ((Object *)pSVar3,(MethodInfo *)0x0);
        }
        pDVar4 = (this->fields).worldObjectTypeSets;
        if (pDVar4 != (Dictionary_2_MV_WorldObject_WorldObjectType_HashSet_1_System_Int32_ *)0x0) {
          pHVar5 = (HashSet_1_System_Int32_ *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar4,
                              (wo->fields)._.type,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__WorldObjectType_
                             );
          if (pHVar5 != (HashSet_1_System_Int32_ *)0x0) {
            System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
            HashSet_1_System_Int32__Remove
                      (pHVar5,(wo->fields)._.id,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_);
            pDVar4 = (this->fields).worldObjectTypeSets;
            if (pDVar4 != (Dictionary_2_MV_WorldObject_WorldObjectType_HashSet_1_System_Int32_ *)0x0
               ) {
              pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Int32Enum,System::Object]::
                       Dictionary_2_System_Int32Enum_System_Object__get_Item
                                 ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar4,
                                  (wo->fields)._.type,
                                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__WorldObjectType_
                                 );
              if (pOVar6 != (Object *)0x0) {
                if ((int)pOVar6[2].klass < 1) {
                  pDVar4 = (this->fields).worldObjectTypeSets;
                  if (pDVar4 == (Dictionary_2_MV_WorldObject_WorldObjectType_HashSet_1_System_Int32_
                                 *)0x0) goto code_?;
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__Remove
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar4,
                             (wo->fields)._.type,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__Remove_MV__WorldObject__WorldObjectType_
                            );
                  key = mscorlib.dll::System::Object::Object_GetType((Object *)wo,(MethodInfo *)0x0)
                  ;
                  if (cRam_? == '\0') {
                    func_?();
                    func_?();
                    func_?();
                    func_?();
                    cRam_? = '\x01';
                  }
                  pDVar1 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                           (this->fields).typeWorldObjectTypeMap;
                  if (pDVar1 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)
                  goto code_?;
                  bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,GUILoginHandler+PlanetData]::
                          Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                                    (pDVar1,(Object *)key,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__ContainsKey_System__Type_
                                    );
                  if (bVar2 == 0) {
                    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                              ((Object *)StringLiteral_Type_not_contained_in_typeWorldO,
                               (MethodInfo *)0x0);
                  }
                  else {
                    this_00 = (this->fields).typeWorldObjectTypeMap;
                    if (this_00 == (Dictionary_2_System_Type_MV_WorldObject_WorldObjectType_ *)0x0)
                    goto code_?;
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Int32Enum]::Dictionary_2_System_Object_System_Int32Enum__Remove
                              ((Dictionary_2_System_Object_System_Int32Enum_ *)this_00,(Object *)key
                               ,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__Remove_System__Type_
                              );
                  }
                }
                this_01 = (wo->fields).gameObject;
                this_02 = (Dictionary_2_System_Int32_System_Single_ *)
                          (this->fields).gameObjectIdToWorldObjectIdMap;
                if (this_01 != (GameObject *)0x0) {
                  key_00 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                                     ((Object_1 *)this_01,(MethodInfo *)0x0);
                  if (this_02 != (Dictionary_2_System_Int32_System_Single_ *)0x0) {
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Single]::Dictionary_2_System_Int32_System_Single__Remove
                              (this_02,key_00,
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
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void RemoveWorldObjectFromTypeWorldObjectTypeMap(Type) */

void Assembly-CSharp.dll::MVWorldObjectClientManager+WorldObjectMapping::
     MVWorldObjectClientManager_WorldObjectMapping_RemoveWorldObjectFromTypeWorldObjectTypeMap
               (MVWorldObjectClientManager_WorldObjectMapping *this,Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__ContainsKey_System__Type_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__Remove_System__Type_
                   );
    func_?(&StringLiteral_Type_not_contained_in_typeWorldO);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
            (this->fields).typeWorldObjectTypeMap;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)type,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__ContainsKey_System__Type_
                      );
    if (bVar1 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Type_not_contained_in_typeWorldO,(MethodInfo *)0x0);
      return;
    }
    this_01 = (this->fields).typeWorldObjectTypeMap;
    if (this_01 != (Dictionary_2_System_Type_MV_WorldObject_WorldObjectType_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32Enum]::
      Dictionary_2_System_Object_System_Int32Enum__Remove
                ((Dictionary_2_System_Object_System_Int32Enum_ *)this_01,(Object *)type,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__Remove_System__Type_
                );
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean TryGetWorldObjectIDFromGameObjectID(Int32, Int32 ByRef) */

bool Assembly-CSharp.dll::MVWorldObjectClientManager+WorldObjectMapping::
     MVWorldObjectClientManager_WorldObjectMapping_TryGetWorldObjectIDFromGameObjectID
               (MVWorldObjectClientManager_WorldObjectMapping *this,int32_t goId,int32_t *woID,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Int32Enum_ *)
            (this->fields).gameObjectIdToWorldObjectIdMap;
  if (this_00 != (Dictionary_2_System_Object_System_Int32Enum_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
            Int32Enum]::Dictionary_2_System_Object_System_Int32Enum__TryGetValue
                      (this_00,(Object *)goId,(Int32Enum__Enum *)woID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_int>__TryGetValue_int__System__Int32__
                      );
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Boolean TryGetWorldObjectTypeFromObjectType(Type, WorldObjectType ByRef) */

bool Assembly-CSharp.dll::MVWorldObjectClientManager+WorldObjectMapping::
     MVWorldObjectClientManager_WorldObjectMapping_TryGetWorldObjectTypeFromObjectType
               (MVWorldObjectClientManager_WorldObjectMapping *this,Type *type,
               WorldObjectType__Enum *worldObjectType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__ContainsKey_System__Type_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__get_Item_System__Type_
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
            (this->fields).typeWorldObjectTypeMap;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)type,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__ContainsKey_System__Type_
                      );
    if (bVar1 == 0) {
      return 0;
    }
    this_01 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).typeWorldObjectTypeMap;
    if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (this_01,(Object *)type,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__get_Item_System__Type_
                         );
      *worldObjectType = (WorldObjectType__Enum)pOVar2;
      return 1;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* MVWorldObjectClientManager+WorldObjectMapping() */

void Assembly-CSharp.dll::MVWorldObjectClientManager+WorldObjectMapping::
     MVWorldObjectClientManager_WorldObjectMapping__ctor
               (MVWorldObjectClientManager_WorldObjectMapping *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__Dictionary__
                   );
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_MV_WorldObject_WorldObjectType_HashSet_1_System_Int32_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>
                           );
  if (this_00 != (Dictionary_2_MV_WorldObject_WorldObjectType_HashSet_1_System_Int32_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__Dictionary__
              );
    (this->fields).worldObjectTypeSets = this_00;
    func_?(&this->fields,this_00);
    this_01 = (Dictionary_2_System_Int32_System_Int32_ *)
              func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
    if (this_01 != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
      (this->fields).gameObjectIdToWorldObjectIdMap = this_01;
      func_?(&(this->fields).gameObjectIdToWorldObjectIdMap,this_01);
      this_02 = (Dictionary_2_System_Type_MV_WorldObject_WorldObjectType_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>
                               );
      if (this_02 != (Dictionary_2_System_Type_MV_WorldObject_WorldObjectType_ *)0x0) {
        Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
        ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                  ((ParameterOverride_1_System_Object_ *)this_02,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__Dictionary__
                  );
        method_00 = (MethodInfo *)&(this->fields).typeWorldObjectTypeMap;
        (this->fields).typeWorldObjectTypeMap = this_02;
        func_?(method_00,this_02);
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)this,ExceptionArgument__Enum_obj,method_00);
        return;
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



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
  this_00 = (Dictionary_2_System_Int32_System_Single_ *)
            (this->fields).gameObjectIdToWorldObjectIdMap;
  if ((wo != (MVWorldObjectClient *)0x0) &&
     (pGVar1 = (wo->fields).gameObject, pGVar1 != (GameObject *)0x0)) {
    iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                      ((Object_1 *)pGVar1,(MethodInfo *)0x0);
    if (this_00 != (Dictionary_2_System_Int32_System_Single_ *)0x0) {
      bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]
              ::Dictionary_2_System_Int32_System_Single__ContainsKey
                        (this_00,iVar2,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                        );
      if (bVar3 != 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_Key_already_in_gameObjectsWorldO,(MethodInfo *)0x0);
        return;
      }
      pGVar1 = (wo->fields).gameObject;
      this_01 = (this->fields).gameObjectIdToWorldObjectIdMap;
      if (pGVar1 != (GameObject *)0x0) {
        iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                          ((Object_1 *)pGVar1,(MethodInfo *)0x0);
        if (this_01 != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
          Dictionary_2_System_Int32_System_Int32__Add
                    (this_01,iVar2,(wo->fields)._.id,
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
    pDVar1 = (this->fields).worldObjectTypeSets;
    if (pDVar1 != (Dictionary_2_MV_WorldObject_WorldObjectType_HashSet_1_System_Int32_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Single]::Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                        ((Dictionary_2_System_Int32Enum_System_Single_ *)pDVar1,(wo->fields)._.type,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__ContainsKey_MV__WorldObject__WorldObjectType_
                        );
      if (bVar2 == 0) {
        IVar3 = (wo->fields)._.type;
        pDVar1 = (this->fields).worldObjectTypeSets;
        pHVar4 = (HashSet_1_System_Int32_ *)
                 func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
        System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
        HashSet_1_System_Int32___ctor
                  (pHVar4,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
        if (pDVar1 == (Dictionary_2_MV_WorldObject_WorldObjectType_HashSet_1_System_Int32_ *)0x0)
        goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
        Dictionary_2_System_Int32Enum_System_Object__Add
                  ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,IVar3,(Object *)pHVar4,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__Add_MV__WorldObject__WorldObjectType__System__Collections__Generic__HashSet<int>_
                  );
        key = mscorlib.dll::System::Object::Object_GetType((Object *)wo,(MethodInfo *)0x0);
        IVar3 = (wo->fields)._.type;
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
        this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                  (this->fields).typeWorldObjectTypeMap;
        if (this_00 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
        goto code_?;
        bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                          (this_00,(Object *)key,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__ContainsKey_System__Type_
                          );
        if (bVar2 == 0) {
          this_01 = (this->fields).typeWorldObjectTypeMap;
          if (this_01 == (Dictionary_2_System_Type_MV_WorldObject_WorldObjectType_ *)0x0)
          goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32Enum]
          ::Dictionary_2_System_Object_System_Int32Enum__Add
                    ((Dictionary_2_System_Object_System_Int32Enum_ *)this_01,(Object *)key,IVar3,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__Add_System__Type__MV__WorldObject__WorldObjectType_
                    );
        }
        else {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)StringLiteral_Type_already_contained_in_typeWo,(MethodInfo *)0x0);
        }
      }
      pDVar1 = (this->fields).worldObjectTypeSets;
      if (pDVar1 != (Dictionary_2_MV_WorldObject_WorldObjectType_HashSet_1_System_Int32_ *)0x0) {
        pHVar4 = (HashSet_1_System_Int32_ *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,
                            (wo->fields)._.type,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__WorldObjectType_
                           );
        if (pHVar4 != (HashSet_1_System_Int32_ *)0x0) {
          System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
          HashSet_1_System_Int32__System_Collections_Generic_ICollection_T__Add
                    (pHVar4,(wo->fields)._.id,
                     MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
          if (cRam_? == '\0') {
            func_?();
            func_?();
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          pGVar5 = (wo->fields).gameObject;
          this_02 = (Dictionary_2_System_Int32_System_Single_ *)
                    (this->fields).gameObjectIdToWorldObjectIdMap;
          if (pGVar5 != (GameObject *)0x0) {
            iVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                              ((Object_1 *)pGVar5,(MethodInfo *)0x0);
            if (this_02 != (Dictionary_2_System_Int32_System_Single_ *)0x0) {
              bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                                (this_02,iVar6,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                                );
              if (bVar2 != 0) {
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                          ((Object *)StringLiteral_Key_already_in_gameObjectsWorldO,
                           (MethodInfo *)0x0);
                return;
              }
              pGVar5 = (wo->fields).gameObject;
              this_03 = (this->fields).gameObjectIdToWorldObjectIdMap;
              if (pGVar5 != (GameObject *)0x0) {
                iVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                                  ((Object_1 *)pGVar5,(MethodInfo *)0x0);
                if (this_03 != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Int32]::Dictionary_2_System_Int32_System_Int32__Add
                            (this_03,iVar6,(wo->fields)._.id,
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
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
            (this->fields).typeWorldObjectTypeMap;
  if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (this_00,(Object *)type,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__ContainsKey_System__Type_
                      );
    if (bVar1 != 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Type_already_contained_in_typeWo,(MethodInfo *)0x0);
      return;
    }
    this_01 = (this->fields).typeWorldObjectTypeMap;
    if (this_01 != (Dictionary_2_System_Type_MV_WorldObject_WorldObjectType_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32Enum]::
      Dictionary_2_System_Object_System_Int32Enum__Add
                ((Dictionary_2_System_Object_System_Int32Enum_ *)this_01,(Object *)type,
                 worldObjectType,
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
  pDVar1 = (this->fields).worldObjectTypeSets;
  if (pDVar1 != (Dictionary_2_MV_WorldObject_WorldObjectType_HashSet_1_System_Int32_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Single]::Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32Enum_System_Single_ *)pDVar1,worldObjectType,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__ContainsKey_MV__WorldObject__WorldObjectType_
                      );
    if (bVar2 == 0) {
      return (HashSet_1_System_Int32_ *)0x0;
    }
    pDVar1 = (this->fields).worldObjectTypeSets;
    if (pDVar1 != (Dictionary_2_MV_WorldObject_WorldObjectType_HashSet_1_System_Int32_ *)0x0) {
      pHVar3 = (HashSet_1_System_Int32_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,worldObjectType,
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
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_RemoveFromTypeSet_failed__World_,(MethodInfo *)0x0);
    return;
  }
  pDVar1 = (this->fields).worldObjectTypeSets;
  if (pDVar1 != (Dictionary_2_MV_WorldObject_WorldObjectType_HashSet_1_System_Int32_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Single]::Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32Enum_System_Single_ *)pDVar1,(wo->fields)._.type,
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
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar3,(MethodInfo *)0x0);
      return;
    }
    pDVar1 = (this->fields).worldObjectTypeSets;
    if (pDVar1 != (Dictionary_2_MV_WorldObject_WorldObjectType_HashSet_1_System_Int32_ *)0x0) {
      pHVar4 = (HashSet_1_System_Int32Enum_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,(wo->fields)._.type
                          ,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__WorldObjectType_
                         );
      if (pHVar4 != (HashSet_1_System_Int32Enum_ *)0x0) {
        bVar2 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
                HashSet_1_System_Int32Enum__Contains
                          (pHVar4,(wo->fields)._.id,
                           MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        if (bVar2 == 0) {
          pSVar3 = mscorlib.dll::System::Enum::Enum_ToString
                             ((Enum *)&stack0xfffffff0,(MethodInfo *)0x0);
          pSVar3 = mscorlib.dll::System::String::String_Concat_3
                             (StringLiteral_Could_not_find_wo_for_type_,pSVar3,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)pSVar3,(MethodInfo *)0x0);
        }
        pDVar1 = (this->fields).worldObjectTypeSets;
        if (pDVar1 != (Dictionary_2_MV_WorldObject_WorldObjectType_HashSet_1_System_Int32_ *)0x0) {
          pHVar4 = (HashSet_1_System_Int32Enum_ *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,
                              (wo->fields)._.type,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__WorldObjectType_
                             );
          if (pHVar4 != (HashSet_1_System_Int32Enum_ *)0x0) {
            System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
            HashSet_1_System_Int32Enum__Remove
                      (pHVar4,(wo->fields)._.id,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_);
            pDVar1 = (this->fields).worldObjectTypeSets;
            if (pDVar1 != (Dictionary_2_MV_WorldObject_WorldObjectType_HashSet_1_System_Int32_ *)0x0
               ) {
              pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Int32Enum,System::Object]::
                       Dictionary_2_System_Int32Enum_System_Object__get_Item
                                 ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,
                                  (wo->fields)._.type,
                                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__WorldObjectType_
                                 );
              if (pOVar5 != (Object *)0x0) {
                if ((int)pOVar5[2].klass < 1) {
                  pDVar1 = (this->fields).worldObjectTypeSets;
                  if (pDVar1 == (Dictionary_2_MV_WorldObject_WorldObjectType_HashSet_1_System_Int32_
                                 *)0x0) goto code_?;
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__Remove
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,
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
                  pDVar6 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                           (this->fields).typeWorldObjectTypeMap;
                  if (pDVar6 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
                  goto code_?;
                  bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,UnityEngine::UIElements::TextureId]::
                          Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                                    (pDVar6,(Object *)key,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__ContainsKey_System__Type_
                                    );
                  if (bVar2 == 0) {
                    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                              ((Object *)StringLiteral_Type_not_contained_in_typeWorldO,
                               (MethodInfo *)0x0);
                  }
                  else {
                    pDVar6 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                             (this->fields).typeWorldObjectTypeMap;
                    if (pDVar6 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                  0x0) goto code_?;
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__Remove
                              (pDVar6,(Object *)key,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__Remove_System__Type_
                              );
                  }
                }
                this_00 = (wo->fields).gameObject;
                this_01 = (Dictionary_2_System_Int32_System_Single_ *)
                          (this->fields).gameObjectIdToWorldObjectIdMap;
                if (this_00 != (GameObject *)0x0) {
                  key_00 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                                     ((Object_1 *)this_00,(MethodInfo *)0x0);
                  if (this_01 != (Dictionary_2_System_Int32_System_Single_ *)0x0) {
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Single]::Dictionary_2_System_Int32_System_Single__Remove
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
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
           (this->fields).typeWorldObjectTypeMap;
  if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (pDVar1,(Object *)type,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__ContainsKey_System__Type_
                      );
    if (bVar2 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Type_not_contained_in_typeWorldO,(MethodInfo *)0x0);
      return;
    }
    pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (this->fields).typeWorldObjectTypeMap;
    if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::TextureId]::Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__Remove
                (pDVar1,(Object *)type,
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
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_System_Single_ *)
            (this->fields).gameObjectIdToWorldObjectIdMap;
  if (this_00 != (Dictionary_2_System_Int32_System_Single_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__TryGetValue
                      (this_00,goId,(float *)woID,
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
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
           (this->fields).typeWorldObjectTypeMap;
  if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (pDVar1,(Object *)type,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__ContainsKey_System__Type_
                      );
    if (bVar2 == 0) {
      return 0;
    }
    pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (this->fields).typeWorldObjectTypeMap;
    if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
      TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (pDVar1,(Object *)type,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__get_Item_System__Type_
                        );
      *worldObjectType = TVar3.m_Index;
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
  this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__Dictionary__
            );
  (this->fields).worldObjectTypeSets =
       (Dictionary_2_MV_WorldObject_WorldObjectType_HashSet_1_System_Int32_ *)this_00;
  func_?(&this->fields,this_00);
  this_01 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_01,MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
  ppDVar1 = &(this->fields).gameObjectIdToWorldObjectIdMap;
  *ppDVar1 = (Dictionary_2_System_Int32_System_Int32_ *)this_01;
  func_?(ppDVar1,this_01);
  this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_02,
             MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__Dictionary__
            );
  method_00 = (MethodInfo *)&(this->fields).typeWorldObjectTypeMap;
  *(Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ **)
   method_00 = this_02;
  func_?(method_00,this_02);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


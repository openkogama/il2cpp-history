
/* Void AddToGameObjectIDMap(MVWorldObjectClient) */

void Assembly-CSharp.dll::MVWorldObjectClientManager+WorldObjectMapping::
     MVWorldObjectClientManager_WorldObjectMapping_AddToGameObjectIDMap
               (MVWorldObjectClientManager_WorldObjectMapping *this,MVWorldObjectClient *wo,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Key_already_in_gameObjectsWorldO);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_System_Single_ *)
            (this->fields).gameObjectIdToWorldObjectIdMap;
  if ((wo != (MVWorldObjectClient *)0x0) &&
     (pGVar1 = (wo->fields).gameObject, pGVar1 != (GameObject *)0x0)) {
    iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                      ((Object_1 *)pGVar1,(MethodInfo *)0x0);
    if (this_00 != (Dictionary_2_System_Int32_System_Single_ *)0x0) {
      iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]
              ::Dictionary_2_System_Int32_System_Single__FindEntry
                        (this_00,iVar2,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                         ->klass->rgctx_data[0x21].method);
      if (-1 < iVar2) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        pSVar3 = StringLiteral_Key_already_in_gameObjectsWorldO;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Debug,0);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__ILogger);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Debug);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        pIVar4 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
        if (pIVar4 != (ILogger_1 *)0x0) {
          FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar4,0,pSVar3);
          return;
        }
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pGVar1 = (wo->fields).gameObject;
      this_01 = (this->fields).gameObjectIdToWorldObjectIdMap;
      if (pGVar1 != (GameObject *)0x0) {
        iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                          ((Object_1 *)pGVar1,(MethodInfo *)0x0);
        if (this_01 != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
          Dictionary_2_System_Int32_System_Int32__TryInsert
                    (this_01,iVar2,(wo->fields)._.id,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
                     MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_->
                     klass->rgctx_data[0x22].method);
          return;
        }
      }
    }
  }
  FUN_?();
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__Add_MV__WorldObject__WorldObjectType__System__Collections__Generic__HashSet<int>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__ContainsKey_MV__WorldObject__WorldObjectType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__WorldObjectType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((wo == (MVWorldObjectClient *)0x0) ||
     (this_00 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)
                (this->fields).worldObjectTypeSets,
     this_00 == (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0))
  goto code_?;
  iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine::
          Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                    (this_00,(wo->fields)._.type,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__ContainsKey_MV__WorldObject__WorldObjectType_
                     ->klass->rgctx_data[0x21].method);
  if (iVar1 < 0) {
    pDVar2 = (this->fields).worldObjectTypeSets;
    IVar3 = (wo->fields)._.type;
    pOVar4 = (Object *)FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
    FUN_?(pOVar4,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    if (pDVar2 == (Dictionary_2_MV_WorldObject_WorldObjectType_HashSet_1_System_Int32_ *)0x0)
    goto code_?;
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__Add_MV__WorldObject__WorldObjectType__System__Collections__Generic__HashSet<int>_
                ->klass->rgctx_data[0x22].method;
    in_R9 = CONCAT71((int7)((ulonglong)method_00 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,IVar3,pOVar4,
               (InsertionBehavior__Enum)in_R9,method_00);
    pOVar4 = (Object *)FUN_?(&(wo->klass->_0).byval_arg);
    IVar3 = (wo->fields)._.type;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__Add_System__Type__MV__WorldObject__WorldObjectType_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__ContainsKey_System__Type_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_Type_already_contained_in_typeWo);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)(this->fields).typeWorldObjectTypeMap;
    if (this_01 ==
        (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
        0x0) goto code_?;
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_01,pOVar4,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__ContainsKey_System__Type_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      this_02 = (this->fields).typeWorldObjectTypeMap;
      if (this_02 == (Dictionary_2_System_Type_MV_WorldObject_WorldObjectType_ *)0x0)
      goto code_?;
      in_R9 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32Enum]::
      Dictionary_2_System_Object_System_Int32Enum__TryInsert
                ((Dictionary_2_System_Object_System_Int32Enum_ *)this_02,pOVar4,IVar3,
                 (InsertionBehavior__Enum)in_R9,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__Add_System__Type__MV__WorldObject__WorldObjectType_
                 ->klass->rgctx_data[0x22].method);
    }
    else {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Type_already_contained_in_typeWo,(MethodInfo *)0x0);
    }
  }
  pDVar2 = (this->fields).worldObjectTypeSets;
  if ((pDVar2 != (Dictionary_2_MV_WorldObject_WorldObjectType_HashSet_1_System_Int32_ *)0x0) &&
     (this_05 = (HashSet_1_System_Int32_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,
                           (wo->fields)._.type,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__WorldObjectType_
                          ), this_05 != (HashSet_1_System_Int32_ *)0x0)) {
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
    HashSet_1_System_Int32__AddIfNotPresent
              (this_05,(wo->fields)._.id,
               MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_->klass->rgctx_data
               [0x15].method);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_Key_already_in_gameObjectsWorldO);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar5 = (wo->fields).gameObject;
    this_03 = (Dictionary_2_System_Int32_System_Single_ *)
              (this->fields).gameObjectIdToWorldObjectIdMap;
    if ((pGVar5 != (GameObject *)0x0) &&
       (iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                          ((Object_1 *)pGVar5,(MethodInfo *)0x0),
       this_03 != (Dictionary_2_System_Int32_System_Single_ *)0x0)) {
      iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]
              ::Dictionary_2_System_Int32_System_Single__FindEntry
                        (this_03,iVar1,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                         ->klass->rgctx_data[0x21].method);
      if (-1 < iVar1) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_Key_already_in_gameObjectsWorldO,(MethodInfo *)0x0);
        return;
      }
      pGVar5 = (wo->fields).gameObject;
      this_04 = (this->fields).gameObjectIdToWorldObjectIdMap;
      if ((pGVar5 != (GameObject *)0x0) &&
         (iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                            ((Object_1 *)pGVar5,(MethodInfo *)0x0),
         this_04 != (Dictionary_2_System_Int32_System_Int32_ *)0x0)) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
        Dictionary_2_System_Int32_System_Int32__TryInsert
                  (this_04,iVar1,(wo->fields)._.id,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_->
                   klass->rgctx_data[0x22].method);
        return;
      }
    }
  }
code_?:
  FUN_?();
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
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__Add_System__Type__MV__WorldObject__WorldObjectType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__ContainsKey_System__Type_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Type_already_contained_in_typeWo);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields).typeWorldObjectTypeMap;
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_00,(Object *)type,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__ContainsKey_System__Type_
                       ->klass->rgctx_data[0x21].method);
    if (-1 < iVar1) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar2 = StringLiteral_Type_already_contained_in_typeWo;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__ILogger);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pIVar3 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
      if (pIVar3 != (ILogger_1 *)0x0) {
        FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar3,0,pSVar2);
        return;
      }
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this_01 = (this->fields).typeWorldObjectTypeMap;
    if (this_01 != (Dictionary_2_System_Type_MV_WorldObject_WorldObjectType_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32Enum]::
      Dictionary_2_System_Object_System_Int32Enum__TryInsert
                ((Dictionary_2_System_Object_System_Int32Enum_ *)this_01,(Object *)type,
                 worldObjectType,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method >> 8),2)
                 ,MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__Add_System__Type__MV__WorldObject__WorldObjectType_
                  ->klass->rgctx_data[0x22].method);
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__ContainsKey_MV__WorldObject__WorldObjectType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__WorldObjectType_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)(this->fields).worldObjectTypeSets;
  if (pDVar1 != (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine::
            Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                      (pDVar1,worldObjectType,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__ContainsKey_MV__WorldObject__WorldObjectType_
                       ->klass->rgctx_data[0x21].method);
    pMVar3 = 
    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__WorldObjectType_
    ;
    if (iVar2 < 0) {
      return (HashSet_1_System_Int32_ *)0x0;
    }
    pDVar1 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)
             (this->fields).worldObjectTypeSets;
    if (pDVar1 != (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0) {
      uVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine
              ::Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                        (pDVar1,worldObjectType,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__WorldObjectType_
                         ->klass->rgctx_data[0x21].method);
      if ((int)uVar4 < 0) {
        uVar5 = func_?(pMVar3->klass->rgctx_data,0xe);
        key = (Object *)func_?(uVar5);
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
                  (key,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        pHVar7 = (HashSet_1_System_Int32_ *)(*pcVar6)();
        return pHVar7;
      }
      pDVar8 = (pDVar1->fields)._entries;
      if (pDVar8 != (Dictionary_2_TKey_TValue_Entry_System_Int32Enum_UnityEngine_Vector3___Array *)
                    0x0) {
        if (uVar4 < (uint)pDVar8->max_length) {
          return *(HashSet_1_System_Int32_ **)&pDVar8->vector[(int)uVar4].value.y;
        }
        FUN_?();
        pcVar6 = (code *)swi(3);
        pHVar7 = (HashSet_1_System_Int32_ *)(*pcVar6)();
        return pHVar7;
      }
      FUN_?();
      pcVar6 = (code *)swi(3);
      pHVar7 = (HashSet_1_System_Int32_ *)(*pcVar6)();
      return pHVar7;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pHVar7 = (HashSet_1_System_Int32_ *)(*pcVar6)();
  return pHVar7;
}


/* Void RemoveWorldObjectFromTypeSet(MVWorldObjectClient) */

void Assembly-CSharp.dll::MVWorldObjectClientManager+WorldObjectMapping::
     MVWorldObjectClientManager_WorldObjectMapping_RemoveWorldObjectFromTypeSet
               (MVWorldObjectClientManager_WorldObjectMapping *this,MVWorldObjectClient *wo,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__ContainsKey_MV__WorldObject__WorldObjectType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__Remove_MV__WorldObject__WorldObjectType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Remove_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__WorldObjectType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__WorldObjectType);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RemoveFromTypeSet_failed__There_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RemoveFromTypeSet_failed__World_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Could_not_find_wo_for_type_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (wo == (MVWorldObjectClient *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
code_?:
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar1 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar1 == (ILogger_1 *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar1,0);
    return;
  }
  this_00 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)(this->fields).worldObjectTypeSets
  ;
  if (this_00 == (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0) goto DAT_?;
  iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine::
           Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                     (this_00,(wo->fields)._.type,
                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__ContainsKey_MV__WorldObject__WorldObjectType_
                      ->klass->rgctx_data[0x21].method);
  if (iVar3 < 0) {
    pSVar4 = mscorlib.dll::System::Enum::Enum_ToString
                        ((Enum *)&stack0xffffffffffffffd8,(MethodInfo *)0x0);
    mscorlib.dll::System::String::String_Concat_4
              (StringLiteral_RemoveFromTypeSet_failed__There_,pSVar4,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    goto code_?;
  }
  pDVar5 = (this->fields).worldObjectTypeSets;
  if ((pDVar5 != (Dictionary_2_MV_WorldObject_WorldObjectType_HashSet_1_System_Int32_ *)0x0) &&
     (pHVar6 = (HashSet_1_System_Int32Enum_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar5,
                           (wo->fields)._.type,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__WorldObjectType_
                          ), pHVar6 != (HashSet_1_System_Int32Enum_ *)0x0)) {
    bVar7 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
             HashSet_1_System_Int32Enum__Contains
                       (pHVar6,(wo->fields)._.id,
                        MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    if (bVar7 == 0) {
      pSVar4 = mscorlib.dll::System::Enum::Enum_ToString
                          ((Enum *)&stack0xffffffffffffffd8,(MethodInfo *)0x0);
      pSVar4 = mscorlib.dll::System::String::String_Concat_4
                          (StringLiteral_Could_not_find_wo_for_type_,pSVar4,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)pSVar4,(MethodInfo *)0x0);
    }
    pDVar5 = (this->fields).worldObjectTypeSets;
    if ((pDVar5 != (Dictionary_2_MV_WorldObject_WorldObjectType_HashSet_1_System_Int32_ *)0x0) &&
       (pHVar6 = (HashSet_1_System_Int32Enum_ *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar5,
                             (wo->fields)._.type,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__WorldObjectType_
                            ), pHVar6 != (HashSet_1_System_Int32Enum_ *)0x0)) {
      System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
      HashSet_1_System_Int32Enum__Remove
                (pHVar6,(wo->fields)._.id,
                 MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_);
      pDVar5 = (this->fields).worldObjectTypeSets;
      if ((pDVar5 != (Dictionary_2_MV_WorldObject_WorldObjectType_HashSet_1_System_Int32_ *)0x0) &&
         (pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar5,
                               (wo->fields)._.type,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__WorldObjectType_
                              ), pOVar8 != (Object *)0x0)) {
        if (*(int *)&pOVar8[2].klass < 1) {
          pDVar5 = (this->fields).worldObjectTypeSets;
          if (pDVar5 == (Dictionary_2_MV_WorldObject_WorldObjectType_HashSet_1_System_Int32_ *)0x0)
          goto DAT_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]
          ::Dictionary_2_System_Int32Enum_System_Object__Remove
                    ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar5,(wo->fields)._.type,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__Remove_MV__WorldObject__WorldObjectType_
                    );
          pOVar8 = (Object *)FUN_?(&(wo->klass->_0).byval_arg);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Debug);
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__ContainsKey_System__Type_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__Remove_System__Type_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&StringLiteral_Type_not_contained_in_typeWorldO);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pDVar9 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                    *)(this->fields).typeWorldObjectTypeMap;
          if (pDVar9 == (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                         *)0x0) goto DAT_?;
          iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                   Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                             (pDVar9,pOVar8,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__ContainsKey_System__Type_
                              ->klass->rgctx_data[0x21].method);
          if (iVar3 < 0) {
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)StringLiteral_Type_not_contained_in_typeWorldO,(MethodInfo *)0x0);
          }
          else {
            pDVar9 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                      *)(this->fields).typeWorldObjectTypeMap;
            if (pDVar9 == (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                           *)0x0) goto DAT_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__Remove
                      (pDVar9,pOVar8,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__Remove_System__Type_
                      );
          }
        }
        this_01 = (wo->fields).gameObject;
        pDVar10 = (this->fields).gameObjectIdToWorldObjectIdMap;
        if ((this_01 != (GameObject *)0x0) &&
           (uVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                               ((Object_1 *)this_01,(MethodInfo *)0x0),
           pMVar12 = MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Remove_int_,
           pDVar10 != (Dictionary_2_System_Int32_System_Int32_ *)0x0)) {
          if ((pDVar10->fields)._buckets != (Int32__Array *)0x0) {
            pIVar13 = (pDVar10->fields)._comparer;
            uVar14 = uVar11;
            if (pIVar13 != (IEqualityComparer_1_System_Int32_ *)0x0) {
              pvVar15 = MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Remove_int_
                        ->klass->rgctx_data[1].rgctxDataDummy;
              if ((*(byte *)((longlong)pvVar15 + 0x135) & 1) == 0) {
                pvVar15 = (void *)FUN_?(pvVar15);
              }
              uVar14 = FUN_?(1,pvVar15,pIVar13,uVar11);
            }
            pIVar16 = (pDVar10->fields)._buckets;
            if (pIVar16 == (Int32__Array *)0x0) {
code_?:
              FUN_?();
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar17 = (int)(uVar14 & 0x7fffffff) % (int)pIVar16->max_length;
            if ((uint)pIVar16->max_length <= uVar17) {
code_?:
              FUN_?();
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar18 = pIVar16->vector[(int)uVar17] - 1;
            uVar19 = 0xffffffff;
            while (uVar20 = uVar18, -1 < (int)uVar20) {
              pDVar21 = (pDVar10->fields)._entries;
              if (pDVar21 == (Dictionary_2_TKey_TValue_Entry_System_Int32_System_Int32___Array *)0x0)
              goto code_?;
              if ((uint)pDVar21->max_length <= uVar20) goto code_?;
              pDVar22 = pDVar21->vector + (int)uVar20;
              if (pDVar21->vector[(int)uVar20].hashCode == (uVar14 & 0x7fffffff)) {
                pIVar23 = pMVar12->klass->rgctx_data;
                if ((pDVar10->fields)._comparer == (IEqualityComparer_1_System_Int32_ *)0x0) {
                  pEVar24 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::
                            Int32]::EqualityComparer_1_System_Int32__get_Default(pIVar23[3].method);
                  if (pEVar24 == (EqualityComparer_1_System_Int32_ *)0x0) goto code_?;
                  cVar25 = (*(pEVar24->klass->vtable).__unknown.methodPtr)
                                     (pEVar24,(ulonglong)(uint)pDVar21->vector[(int)uVar20].key,
                                      (ulonglong)uVar11,(pEVar24->klass->vtable).__unknown.method);
                }
                else {
                  pvVar15 = pIVar23[1].rgctxDataDummy;
                  if ((*(byte *)((longlong)pvVar15 + 0x135) & 1) == 0) {
                    FUN_?(pvVar15);
                  }
                  cVar25 = FUN_?();
                }
                if (cVar25 != '\0') {
                  if ((int)uVar19 < 0) {
                    pIVar16 = (pDVar10->fields)._buckets;
                    if (pIVar16 == (Int32__Array *)0x0) goto code_?;
                    if ((uint)pIVar16->max_length <= uVar17) goto code_?;
                    pIVar16->vector[(int)uVar17] = pDVar22->next + 1;
                  }
                  else {
                    pDVar21 = (pDVar10->fields)._entries;
                    if (pDVar21 == (Dictionary_2_TKey_TValue_Entry_System_Int32_System_Int32___Array
                                   *)0x0) goto code_?;
                    if ((uint)pDVar21->max_length <= uVar19) goto code_?;
                    pDVar21->vector[(int)uVar19].next = pDVar22->next;
                  }
                  pDVar22->hashCode = -1;
                  pDVar22->next = (pDVar10->fields)._freeList;
                  piVar26 = &(pDVar10->fields)._freeCount;
                  *piVar26 = *piVar26 + 1;
                  piVar26 = &(pDVar10->fields)._version;
                  *piVar26 = *piVar26 + 1;
                  (pDVar10->fields)._freeList = uVar20;
                  return;
                }
              }
              uVar19 = uVar20;
              uVar18 = pDVar22->next;
            }
          }
          return;
        }
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RemoveWorldObjectFromTypeWorldObjectTypeMap(Type) */

void Assembly-CSharp.dll::MVWorldObjectClientManager+WorldObjectMapping::
     MVWorldObjectClientManager_WorldObjectMapping_RemoveWorldObjectFromTypeWorldObjectTypeMap
               (MVWorldObjectClientManager_WorldObjectMapping *this,Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__ContainsKey_System__Type_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__Remove_System__Type_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Type_not_contained_in_typeWorldO);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields).typeWorldObjectTypeMap;
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::StyleComplexSelector+PseudoStateData]::
             Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                       (this_00,(Object *)type,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__ContainsKey_System__Type_
                        ->klass->rgctx_data[0x21].method);
    pMVar2 = 
    MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__Remove_System__Type_
    ;
    if (iVar1 < 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar3 = StringLiteral_Type_not_contained_in_typeWorldO;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__ILogger);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pIVar4 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
      if (pIVar4 == (ILogger_1 *)0x0) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar4,0,pSVar3);
      return;
    }
    pDVar6 = (this->fields).typeWorldObjectTypeMap;
    if (pDVar6 != (Dictionary_2_System_Type_MV_WorldObject_WorldObjectType_ *)0x0) {
      if (type == (Type *)0x0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentNullException
                  (ExceptionArgument__Enum_key,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((pDVar6->fields)._buckets != (Int32__Array *)0x0) {
        pIVar7 = (pDVar6->fields)._comparer;
        if (pIVar7 == (IEqualityComparer_1_System_Type_ *)0x0) {
          uVar8 = (*(type->klass->vtable).GetHashCode.methodPtr)
                             (type,(type->klass->vtable).GetHashCode.method);
        }
        else {
          pvVar9 = MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__Remove_System__Type_
                    ->klass->rgctx_data[1].rgctxDataDummy;
          if ((*(byte *)((longlong)pvVar9 + 0x135) & 1) == 0) {
            pvVar9 = (void *)FUN_?(pvVar9);
          }
          uVar8 = FUN_?(1,pvVar9,pIVar7,type);
        }
        pIVar10 = (pDVar6->fields)._buckets;
        if (pIVar10 == (Int32__Array *)0x0) {
code_?:
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar11 = (int)(uVar8 & 0x7fffffff) % (int)pIVar10->max_length;
        if ((uint)pIVar10->max_length <= uVar11) {
DAT_?:
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar12 = pIVar10->vector[(int)uVar11] - 1;
        uVar13 = 0xffffffff;
        while (uVar14 = uVar12, -1 < (int)uVar14) {
          pDVar15 = (pDVar6->fields)._entries;
          if (pDVar15 == (Dictionary_2_TKey_TValue_Entry_System_Type_MV_WorldObject_WorldObjectType___Array
                         *)0x0) goto code_?;
          if ((uint)pDVar15->max_length <= uVar14) goto DAT_?;
          if (pDVar15->vector[(int)uVar14].hashCode == (uVar8 & 0x7fffffff)) {
            pIVar7 = (pDVar6->fields)._comparer;
            pIVar16 = pMVar2->klass->rgctx_data;
            if (pIVar7 == (IEqualityComparer_1_System_Type_ *)0x0) {
              pEVar17 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::
                        Object]::EqualityComparer_1_System_Object__get_Default(pIVar16[3].method);
              if (pEVar17 == (EqualityComparer_1_System_Object_ *)0x0) goto code_?;
              cVar18 = (*(pEVar17->klass->vtable).__unknown.methodPtr)
                                 (pEVar17,pDVar15->vector[(int)uVar14].key,type,
                                  (pEVar17->klass->vtable).__unknown.method);
            }
            else {
              pvVar9 = pIVar16[1].rgctxDataDummy;
              pTVar19 = pDVar15->vector[(int)uVar14].key;
              if ((*(byte *)((longlong)pvVar9 + 0x135) & 1) == 0) {
                pvVar9 = (void *)FUN_?(pvVar9);
              }
              cVar18 = FUN_?(0,pvVar9,pIVar7,pTVar19,type);
            }
            if (cVar18 != '\0') {
              if ((int)uVar13 < 0) {
                pIVar10 = (pDVar6->fields)._buckets;
                if (pIVar10 == (Int32__Array *)0x0) goto code_?;
                if ((uint)pIVar10->max_length <= uVar11) goto DAT_?;
                pIVar10->vector[(int)uVar11] = pDVar15->vector[(int)uVar14].next + 1;
              }
              else {
                pDVar20 = (pDVar6->fields)._entries;
                if (pDVar20 == (Dictionary_2_TKey_TValue_Entry_System_Type_MV_WorldObject_WorldObjectType___Array
                               *)0x0) goto code_?;
                if ((uint)pDVar20->max_length <= uVar13) goto DAT_?;
                pDVar20->vector[(int)uVar13].next = pDVar15->vector[(int)uVar14].next;
              }
              pDVar15->vector[(int)uVar14].hashCode = -1;
              pDVar15->vector[(int)uVar14].next = (pDVar6->fields)._freeList;
              pDVar15->vector[(int)uVar14].key = (Type *)0x0;
              piVar21 = &(pDVar6->fields)._freeCount;
              *piVar21 = *piVar21 + 1;
              piVar21 = &(pDVar6->fields)._version;
              *piVar21 = *piVar21 + 1;
              (pDVar6->fields)._freeList = uVar14;
              return;
            }
          }
          uVar13 = uVar14;
          uVar12 = pDVar15->vector[(int)uVar14].next;
        }
      }
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean TryGetWorldObjectIDFromGameObjectID(Int32, Int32 ByRef) */

bool Assembly-CSharp.dll::MVWorldObjectClientManager+WorldObjectMapping::
     MVWorldObjectClientManager_WorldObjectMapping_TryGetWorldObjectIDFromGameObjectID
               (MVWorldObjectClientManager_WorldObjectMapping *this,int32_t goId,int32_t *woID,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_int>__TryGetValue_int__System__Int32__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_System_Single_ *)
            (this->fields).gameObjectIdToWorldObjectIdMap;
  if (this_00 == (Dictionary_2_System_Int32_System_Single_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  uVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
          Dictionary_2_System_Int32_System_Single__FindEntry
                    (this_00,goId,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_int>__TryGetValue_int__System__Int32__
                     ->klass->rgctx_data[0x21].method);
  if ((int)uVar3 < 0) {
    *woID = 0;
    return 0;
  }
  pDVar4 = (this_00->fields)._entries;
  if (pDVar4 != (Dictionary_2_TKey_TValue_Entry_System_Int32_System_Single___Array *)0x0) {
    if (uVar3 < (uint)pDVar4->max_length) {
      *woID = (int32_t)pDVar4->vector[(int)uVar3].value;
      return 1;
    }
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


/* Boolean TryGetWorldObjectTypeFromObjectType(Type, WorldObjectType ByRef) */

bool Assembly-CSharp.dll::MVWorldObjectClientManager+WorldObjectMapping::
     MVWorldObjectClientManager_WorldObjectMapping_TryGetWorldObjectTypeFromObjectType
               (MVWorldObjectClientManager_WorldObjectMapping *this,Type *type,
               WorldObjectType__Enum *worldObjectType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__ContainsKey_System__Type_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__get_Item_System__Type_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields).typeWorldObjectTypeMap;
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_00,(Object *)type,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__ContainsKey_System__Type_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      return 0;
    }
    this_01 = (this->fields).typeWorldObjectTypeMap;
    if (this_01 != (Dictionary_2_System_Type_MV_WorldObject_WorldObjectType_ *)0x0) {
      IVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Int32Enum]::Dictionary_2_System_Object_System_Int32Enum__get_Item
                        ((Dictionary_2_System_Object_System_Int32Enum_ *)this_01,(Object *)type,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__get_Item_System__Type_
                        );
      *worldObjectType = IVar2;
      return 1;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* MVWorldObjectClientManager+WorldObjectMapping() */

void Assembly-CSharp.dll::MVWorldObjectClientManager+WorldObjectMapping::
     MVWorldObjectClientManager_WorldObjectMapping__ctor
               (MVWorldObjectClientManager_WorldObjectMapping *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).worldObjectTypeSets =
       (Dictionary_2_MV_WorldObject_WorldObjectType_HashSet_1_System_Int32_ *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pDVar6 = (Dictionary_2_System_Int32_System_Int32_ *)
           FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
  FUN_?(pDVar6,MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__)
  ;
  bVar1 = iRam_? != 0;
  (this->fields).gameObjectIdToWorldObjectIdMap = pDVar6;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).gameObjectIdToWorldObjectIdMap >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).typeWorldObjectTypeMap =
       (Dictionary_2_System_Type_MV_WorldObject_WorldObjectType_ *)this_01;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).typeWorldObjectTypeMap >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}



/* Void CloneWorldObjectTree(MVWorldObjectClient, Boolean, Boolean, Boolean) */

void Assembly-CSharp.dll::MVWorldObjectClientManager::
     MVWorldObjectClientManager_CloneWorldObjectTree
               (MVWorldObjectClientManager *this,MVWorldObjectClient *root,bool localOwner,
               bool setAsPreviewItem,bool cloneToRootGroup,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar2->fields).operationRequests,
     this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar3 = MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_CreateBasicCloneData
                       (this_00,root,localOwner,setAsPreviewItem,cloneToRootGroup,(MethodInfo *)0x0)
    ;
    pPVar4 = (this_00->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar4 != (PhotonPeer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pPVar4->klass->vtable).SendOperation.methodPtr)
                (pPVar4,CONCAT71((int7)((ulonglong)root >> 8),0x22),pDVar3,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable);
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean Contains(Int32) */

bool Assembly-CSharp.dll::MVWorldObjectClientManager::MVWorldObjectClientManager_Contains
               (MVWorldObjectClientManager *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).worldObjects;
  if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,woID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    return (byte)((uint)iVar1 >> 0x1f) ^ 1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void GetAllWoIds(Int32, HashSet`1[System.Int32]) */

void Assembly-CSharp.dll::MVWorldObjectClientManager::MVWorldObjectClientManager_GetAllWoIds
               (MVWorldObjectClientManager *this,int32_t id,HashSet_1_System_Int32_ *ids,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__MVGroup);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGroup);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (MVGroup *)MVWorldObjectClientManager_GetWorldObjectClient(this,id,(MethodInfo *)0x0);
  if ((this_00 != (MVGroup *)0x0) && (ids != (HashSet_1_System_Int32_ *)0x0)) {
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
    HashSet_1_System_Int32__AddIfNotPresent
              (ids,(this_00->fields)._._.id,
               MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_->klass->rgctx_data
               [0x15].method);
    lVar1 = FUN_?(&(this_00->klass->_0).byval_arg);
    pIVar2 = TypeRef__MVGroup;
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (pIVar2 == (Il2CppType *)0x0) {
      lVar3 = 0;
    }
    else {
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      lVar3 = FUN_?(pIVar2,1);
      lVar3 = FUN_?(lVar3 + 0x20);
    }
    if (lVar1 == lVar3) {
      bVar4 = (TypeInfo__MVGroup->_1).naturalAligment;
      if (((this_00->klass->_1).naturalAligment < bVar4) ||
         ((MVGroup__Class *)(this_00->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
          TypeInfo__MVGroup)) {
        FUN_?(this_00);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      LStack_6._list =
           (List_1_System_Object_ *)MVGroup::MVGroup_get_Children(this_00,(MethodInfo *)0x0);
      if ((List_1_MVWorldObjectClient_ *)LStack_6._list == (List_1_MVWorldObjectClient_ *)0x0)
      goto code_?;
      if (iRam_? != 0) {
        uVar7 = (uint)((ulonglong)&uStack_8 >> 0xc);
        puVar9 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar10 = *puVar9;
          LOCK();
          uVar11 = *puVar9;
          if (uVar10 == uVar11) {
            *puVar9 = uVar10 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (uVar10 != uVar11);
      }
      pLStack_12 = (List_1_T_Enumerator_System_Object_ *)
                   ((ulonglong)
                    (uint)(((List_1_MVWorldObjectClient_ *)LStack_6._list)->fields)._version <<
                   0x20);
      uStack_13 = 0;
      LStack_6._8_8_ = pLStack_12;
      LStack_6._current = (Object *)0x0;
      uStack_8 = 0;
      pLStack_12 = &LStack_6;
      while (bVar14 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                     Object]::List_1_T_Enumerator_System_Object__MoveNext
                               (&LStack_6,
                                MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                               ), bVar14 != 0) {
        if (LStack_6._current == (Object *)0x0) {
          FUN_?();
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        MVWorldObjectClientManager_GetAllWoIds
                  (this,*(int32_t *)&LStack_6._current[1].klass,ids,(MethodInfo *)0x0);
      }
    }
    return;
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* List`1[MVWorldObjectClient] GetBlueprintWorldObjectsByType(Type) */

List_1_MVWorldObjectClient_ *
Assembly-CSharp.dll::MVWorldObjectClientManager::
MVWorldObjectClientManager_GetBlueprintWorldObjectsByType
          (MVWorldObjectClientManager *this,Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_WorldObjectTypeSet_contains_id_w);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_MVWorldObjectClient_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
  this_00 = (this->fields).worldObjectMapping;
  if (this_00 == (MVWorldObjectClientManager_WorldObjectMapping *)0x0) {
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
    pcVar2 = (code *)swi(3);
    pLVar1 = (List_1_MVWorldObjectClient_ *)(*pcVar2)();
    return pLVar1;
  }
  pHStack_3 = MVWorldObjectClientManager+WorldObjectMapping::
               MVWorldObjectClientManager_WorldObjectMapping_GetWorldObjectTypeSet
                         (this_00,WorldObjectType__Enum_Blueprint,(MethodInfo *)0x0);
  if (pHStack_3 != (HashSet_1_System_Int32_ *)0x0) {
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&uStack_5 >> 0xc);
      puVar6 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar7 = *puVar6;
        LOCK();
        uVar8 = *puVar6;
        if (uVar7 == uVar8) {
          *puVar6 = uVar7 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (uVar7 != uVar8);
    }
    ppHStack_9 = (HashSet_1_System_Int32_ **)
                  ((ulonglong)(uint)(pHStack_3->fields)._version << 0x20);
    uStack_10 = 0;
    lStack_11 = (longlong)ppHStack_9;
    uStack_12 = 0;
    uStack_5 = 0;
    ppHStack_9 = &pHStack_3;
    while (cVar13 = FUN_?(&pHStack_3,
                                 MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                                ), cVar13 != '\0') {
      key = (int32_t)uStack_12;
      this_01 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).worldObjects;
      if (this_01 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)
      goto code_?;
      iVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                        (this_01,(int32_t)uStack_12,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                         ->klass->rgctx_data[0x21].method);
      if (iVar14 < 0) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_WorldObjectTypeSet_contains_id_w,(MethodInfo *)0x0);
      }
      else {
        pDVar15 = (this->fields).worldObjects;
        if (pDVar15 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0)
        goto code_?;
        pOVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)pDVar15,key,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                           );
        if (pOVar16 == (Object *)0x0) goto code_?;
        uVar17 = FUN_?(&(pOVar16->klass->_0).byval_arg);
        if (type == (Type *)0x0) goto code_?;
        cVar13 = (*(type->klass->vtable).Equals_1.methodPtr)
                          (type,uVar17,(type->klass->vtable).Equals_1.method);
        if (cVar13 != '\0') {
          pDVar15 = (this->fields).worldObjects;
          if (pDVar15 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0)
          goto code_?;
          pOVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__get_Item
                             ((Dictionary_2_System_Int32_System_Object_ *)pDVar15,key,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                             );
          if (pLVar1 == (List_1_MVWorldObjectClient_ *)0x0) goto code_?;
          FUN_?(pLVar1,pOVar16);
        }
      }
    }
  }
  return pLVar1;
}


/* Object GetEnabledMonoBehaviourHighestInHierarchy[Object](GameObject) */

Object * Assembly-CSharp.dll::MVWorldObjectClientManager::
         MVWorldObjectClientManager_GetEnabledMonoBehaviourHighestInHierarchy
                   (GameObject *gameObject,MethodInfo *method)

{
  while( true ) {
    if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(method);
      }
    }
    if (gameObject == (GameObject *)0x0) break;
    this = (Behaviour *)
           UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                     (gameObject,((method->field7_0x38).rgctx_data)->method);
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (this != (Behaviour *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (((this->fields)._._.m_CachedPtr != (void *)0x0) &&
         (bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                            (this,(MethodInfo *)0x0), bVar1 != 0)) {
        return (Object *)this;
      }
    }
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (gameObject,(MethodInfo *)0x0);
    if (pTVar2 == (Transform *)0x0) break;
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                       (pTVar2,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pTVar2 == (Transform *)0x0) {
      return (Object *)0x0;
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar2->fields)._._.m_CachedPtr == (void *)0x0) {
      return (Object *)0x0;
    }
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (gameObject,(MethodInfo *)0x0);
    if ((pTVar2 == (Transform *)0x0) ||
       (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                           (pTVar2,(MethodInfo *)0x0), pTVar2 == (Transform *)0x0)) break;
    gameObject = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pTVar2,(MethodInfo *)0x0);
    method = (method->field7_0x38).rgctx_data[2].method;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pOVar4 = (Object *)(*pcVar3)();
  return pOVar4;
}


/* MVWorldObjectClient GetMVObject(Transform) */

MVWorldObjectClient *
Assembly-CSharp.dll::MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
          (Transform *t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (((t == (Transform *)0x0) ||
      (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)t,(MethodInfo *)0x0), this_00 == (GameObject *)0x0)) ||
     (goId = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                       ((Object_1 *)this_00,(MethodInfo *)0x0),
     this == (MVWorldObjectClientManager *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pMVar2 = (MVWorldObjectClient *)(*pcVar1)();
    return pMVar2;
  }
  pMVar2 = MVWorldObjectClientManager_GetWorldObjectByGoId(this,goId,(MethodInfo *)0x0);
  if (pMVar2 != (MVWorldObjectClient *)0x0) {
    return pMVar2;
  }
  pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                     (t,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pTVar3 != (Transform *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar3->fields)._._.m_CachedPtr != (void *)0x0) {
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                         (t,(MethodInfo *)0x0);
      pMVar2 = MVWorldObjectClientManager_GetMVObject(pTVar3,(MethodInfo *)0x0);
      return pMVar2;
    }
  }
  return (MVWorldObjectClient *)0x0;
}


/* Object GetSingletonWorldObject[Object]() */

Object * Assembly-CSharp.dll::MVWorldObjectClientManager::
         MVWorldObjectClientManager_GetSingletonWorldObject
                   (MVWorldObjectClientManager *this,MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(method);
  }
  this_00 = (this->fields).worldObjectMapping;
  aWStackX_8[0] = WorldObjectType__Enum_Battery;
  pvVar1 = ((method->field7_0x38).rgctx_data)->rgctxDataDummy;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (pvVar1 == (void *)0x0) {
    type = (Type *)0x0;
  }
  else {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar2 = FUN_?(pvVar1,1);
    type = (Type *)FUN_?(lVar2 + 0x20);
  }
  if (this_00 != (MVWorldObjectClientManager_WorldObjectMapping *)0x0) {
    bVar3 = MVWorldObjectClientManager+WorldObjectMapping::
            MVWorldObjectClientManager_WorldObjectMapping_TryGetWorldObjectTypeFromObjectType
                      (this_00,type,aWStackX_8,(MethodInfo *)0x0);
    if ((bVar3 == 0) ||
       (pMVar4 = MVWorldObjectClientManager_GetSingletonWorldObjectByType
                           (this,aWStackX_8[0],(MethodInfo *)0x0),
       pMVar4 == (MVWorldObjectClient *)0x0)) {
      pOVar5 = (Object *)0x0;
    }
    else {
      pvVar1 = (method->field7_0x38).rgctx_data[1].rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
        pvVar1 = (void *)FUN_?(pvVar1);
      }
      pOVar5 = (Object *)FUN_?(pMVar4,pvVar1);
      if (pOVar5 == (Object *)0x0) {
        FUN_?(pMVar4,pvVar1);
        pcVar6 = (code *)swi(3);
        pOVar5 = (Object *)(*pcVar6)();
        return pOVar5;
      }
    }
    return pOVar5;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pOVar5 = (Object *)(*pcVar6)();
  return pOVar5;
}


/* MVWorldObjectClient GetSingletonWorldObjectByType(WorldObjectType) */

MVWorldObjectClient *
Assembly-CSharp.dll::MVWorldObjectClientManager::
MVWorldObjectClientManager_GetSingletonWorldObjectByType
          (MVWorldObjectClientManager *this,WorldObjectType__Enum worldObjectType,MethodInfo *method
          )

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__WorldObjectType);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Singleton_of_worldObject_of_type);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_WorldObjectType__0__is_not_a_sin);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = MVWorldObjectClientManager_GetWorldObjectsByType(this,worldObjectType,(MethodInfo *)0x0);
  if (pLVar1 != (List_1_MVWorldObjectClient_ *)0x0) {
    aWStackX_10[0] = worldObjectType;
    if (1 < (pLVar1->fields)._size) {
      pOVar2 = (Object *)FUN_?(TypeInfo__MV__WorldObject__WorldObjectType,aWStackX_10);
      aWStackX_10[0] = (pLVar1->fields)._size;
      arg1 = (Object *)FUN_?(uRam_?,aWStackX_10);
      pSVar3 = StringLiteral_WorldObjectType__0__is_not_a_sin;
      PStack_4._arg0 = (Object *)0x0;
      PStack_4._arg1 = (Object *)0x0;
      PStack_4._arg2 = (Object *)0x0;
      PStack_4._args = (Object__Array *)0x0;
      mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
                (&PStack_4,pOVar2,arg1,(MethodInfo *)0x0);
      PStack_5._arg0 = PStack_4._arg0;
      PStack_5._arg1 = PStack_4._arg1;
      PStack_5._arg2 = PStack_4._arg2;
      PStack_5._args = PStack_4._args;
      pSVar3 = mscorlib.dll::System::String::String_FormatHelper
                         ((IFormatProvider *)0x0,pSVar3,&PStack_5,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar3,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)0x0;
    }
    if ((pLVar1->fields)._size == 0) {
      pOVar2 = (Object *)FUN_?(TypeInfo__MV__WorldObject__WorldObjectType,aWStackX_10);
      pSVar3 = StringLiteral_Singleton_of_worldObject_of_type;
      PStack_4._arg0 = (Object *)0x0;
      PStack_4._arg1 = (Object *)0x0;
      PStack_4._arg2 = (Object *)0x0;
      PStack_4._args = (Object__Array *)0x0;
      mscorlib.dll::System::ParamsArray::ParamsArray__ctor(&PStack_4,pOVar2,(MethodInfo *)0x0);
      PStack_5._arg0 = PStack_4._arg0;
      PStack_5._arg1 = PStack_4._arg1;
      PStack_5._arg2 = PStack_4._arg2;
      PStack_5._args = PStack_4._args;
      pSVar3 = mscorlib.dll::System::String::String_FormatHelper
                         ((IFormatProvider *)0x0,pSVar3,&PStack_5,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)pSVar3,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)0x0;
    }
    pMVar6 = (pLVar1->fields)._items;
    if (pMVar6 != (MVWorldObjectClient__Array *)0x0) {
      if ((int)pMVar6->max_length == 0) {
        FUN_?();
        pcVar7 = (code *)swi(3);
        pMVar8 = (MVWorldObjectClient *)(*pcVar7)();
        return pMVar8;
      }
      return pMVar6->vector[0];
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  pMVar8 = (MVWorldObjectClient *)(*pcVar7)();
  return pMVar8;
}


/* WorldObjectClientRef`1[System.Object] GetSingletonWorldObjectRef[Object]() */

WorldObjectClientRef_1_System_Object_ *
Assembly-CSharp.dll::MVWorldObjectClientManager::
MVWorldObjectClientManager_GetSingletonWorldObjectRef
          (MVWorldObjectClientManager *this,MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(method);
  }
  this_00 = (this->fields).worldObjectMapping;
  aWStackX_8[0] = WorldObjectType__Enum_Battery;
  pvVar1 = ((method->field7_0x38).rgctx_data)->rgctxDataDummy;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (pvVar1 == (void *)0x0) {
    type = (Type *)0x0;
  }
  else {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar2 = FUN_?(pvVar1,1);
    type = (Type *)FUN_?(lVar2 + 0x20);
  }
  if (this_00 != (MVWorldObjectClientManager_WorldObjectMapping *)0x0) {
    bVar3 = MVWorldObjectClientManager+WorldObjectMapping::
            MVWorldObjectClientManager_WorldObjectMapping_TryGetWorldObjectTypeFromObjectType
                      (this_00,type,aWStackX_8,(MethodInfo *)0x0);
    if ((bVar3 != 0) &&
       (pMVar4 = MVWorldObjectClientManager_GetSingletonWorldObjectByType
                           (this,aWStackX_8[0],(MethodInfo *)0x0),
       pMVar4 != (MVWorldObjectClient *)0x0)) {
      iVar5 = (pMVar4->fields)._.id;
      pvVar1 = (method->field7_0x38).rgctx_data[1].rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
        pvVar1 = (void *)FUN_?(pvVar1);
      }
      pWVar6 = (WorldObjectClientRef_1_System_Object_ *)FUN_?(pvVar1);
      (pWVar6->fields).woId = iVar5;
      return pWVar6;
    }
    return (WorldObjectClientRef_1_System_Object_ *)0x0;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  pWVar6 = (WorldObjectClientRef_1_System_Object_ *)(*pcVar7)();
  return pWVar6;
}


/* WorldObjectType GetSpawnPointTypeForNoneTeam() */

WorldObjectType__Enum
Assembly-CSharp.dll::MVWorldObjectClientManager::
MVWorldObjectClientManager_GetSpawnPointTypeForNoneTeam
          (MVWorldObjectClientManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = MVWorldObjectClientManager_GetWorldObjectsByType
                     (this,WorldObjectType__Enum_SpawnPointBlue,(MethodInfo *)0x0);
  if (pLVar1 != (List_1_MVWorldObjectClient_ *)0x0) {
    if (0 < (pLVar1->fields)._size) {
      return WorldObjectType__Enum_SpawnPointBlue;
    }
    pLVar1 = MVWorldObjectClientManager_GetWorldObjectsByType
                       (this,WorldObjectType__Enum_SpawnPointRed,(MethodInfo *)0x0);
    if (pLVar1 != (List_1_MVWorldObjectClient_ *)0x0) {
      if (0 < (pLVar1->fields)._size) {
        return WorldObjectType__Enum_SpawnPointRed;
      }
      pLVar1 = MVWorldObjectClientManager_GetWorldObjectsByType
                         (this,WorldObjectType__Enum_SpawnPointGreen,(MethodInfo *)0x0);
      if (pLVar1 != (List_1_MVWorldObjectClient_ *)0x0) {
        if (0 < (pLVar1->fields)._size) {
          return WorldObjectType__Enum_SpawnPointGreen;
        }
        WVar2 = WorldObjectType__Enum_SpawnPointYellow;
        pLVar1 = MVWorldObjectClientManager_GetWorldObjectsByType
                           (this,WorldObjectType__Enum_SpawnPointYellow,(MethodInfo *)0x0);
        if (pLVar1 != (List_1_MVWorldObjectClient_ *)0x0) {
          if ((pLVar1->fields)._size < 1) {
            WVar2 = WorldObjectType__Enum_SpawnPoint;
          }
          return WVar2;
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  WVar2 = (*pcVar3)();
  return WVar2;
}


/* Boolean GetUnmodifiedWorldObject(KoGaMaPackageClient, Int32 ByRef) */

bool Assembly-CSharp.dll::MVWorldObjectClientManager::
     MVWorldObjectClientManager_GetUnmodifiedWorldObject
               (MVWorldObjectClientManager *this,KoGaMaPackageClient *koGaMaPackageClient,
               int32_t *worldObjectId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aIStackX_10[0].m_value = 0;
  if ((koGaMaPackageClient != (KoGaMaPackageClient *)0x0) &&
     (this_00 = (koGaMaPackageClient->fields).worldObjects,
     this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0)) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
             ::Dictionary_2_System_Int32_System_Object__get_Item
                       ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                        (koGaMaPackageClient->fields).worldObjectRoot,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                       );
    this_01 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)(this->fields).worldObjects;
    if ((this_01 !=
         (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
         0x0) && (pDVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                            UIElements::TypeConverterRegistry+ConverterKey,System::Object]::
                            Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                                      (this_01,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                                      ),
                 pDVar2 !=
                 (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                  *)0x0)) {
      pDStack_3 = (pDVar2->fields)._dictionary;
      ppDStack_4 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                     **)0x0;
      uStack_5 = 0;
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&pDStack_7 >> 0xc);
        puVar8 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar9 = *puVar8;
          LOCK();
          uVar10 = *puVar8;
          if (uVar9 == uVar10) {
            *puVar8 = uVar9 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (uVar9 != uVar10);
      }
      if (pDStack_3 ==
          (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
          0x0) {
        pDStack_7 = pDStack_3;
        FUN_?();
        pcVar11 = (code *)swi(3);
        bVar12 = (*pcVar11)();
        return bVar12;
      }
      ppDStack_4 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                     **)((ulonglong)(uint)(pDStack_3->fields)._version << 0x20);
      uStack_5 = 0;
      uStack_13 = (ulonglong)ppDStack_4;
      plStack_14 = (longlong *)0x0;
      pDStack_7 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                    *)0x0;
      ppDStack_4 = &pDStack_3;
      while (pDStack_3 !=
             (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
              *)0x0) {
        if (uStack_13._4_4_ != (pDStack_3->fields)._version) goto code_?;
        uVar10 = uStack_13 & 0xffffffff;
        do {
          if (pDStack_3 ==
              (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)0x0) goto code_?;
          uVar6 = (uint)uVar10;
          if ((uint)(pDStack_3->fields)._count <= uVar6) {
            return 0;
          }
          pDVar15 = (pDStack_3->fields)._entries;
          uVar10 = (ulonglong)(uVar6 + 1);
          uStack_13 = CONCAT44(uStack_13._4_4_,uVar6 + 1);
          if (pDVar15 == (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                         *)0x0) goto code_?;
          if ((uint)pDVar15->max_length <= uVar6) goto code_?;
        } while ((&pDVar15->vector[0].hashCode)[(longlong)(int)uVar6 * 6] < 0);
        plStack_14 = *(longlong **)
                      ((longlong)&pDVar15->vector[0].key + (longlong)(int)uVar6 * 0x18 + 8);
        func_?();
        plVar16 = plStack_14;
        if (plStack_14 == (longlong *)0x0) goto code_?;
        if (*(int *)((longlong)plStack_14 + 0x14) == (this->fields).rootGroupId) {
          if (pOVar1 == (Object *)0x0) goto code_?;
          if (((int)plStack_14[3] == *(int *)&pOVar1[1].monitor) &&
             ((int)plStack_14[0xd] == *(int *)&pOVar1[6].monitor)) {
            aIStackX_10[0].m_value = 0;
            cVar17 = (**(code **)(*plStack_14 + 0x418))
                              (plStack_14,pOVar1,koGaMaPackageClient,aIStackX_10,
                               *(undefined8 *)(*plStack_14 + 0x420));
            IVar18.m_value = aIStackX_10[0].m_value;
            if (cVar17 != '\0') {
              pMVar19 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (pMVar19 == (MVNetworkGame *)0x0) goto code_?;
              this_02 = (pMVar19->fields).playerContainer;
              if (this_02 == (MVPlayerContainer *)0x0) goto code_?;
              pMVar20 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                  (this_02,(MethodInfo *)0x0);
              if (pMVar20 == (MVLocalPlayer *)0x0) goto code_?;
              if (IVar18.m_value == (pMVar20->fields)._._ProfileID_k__BackingField) {
                pSVar21 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0)
                ;
                pSVar21 = mscorlib.dll::System::String::String_Concat_4
                                    (StringLiteral_InsertedByProfileID_,pSVar21,(MethodInfo *)0x0);
                if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                  FUN_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                          ((Object *)pSVar21,(MethodInfo *)0x0);
                *worldObjectId = (int32_t)plVar16[2];
                return 1;
              }
            }
          }
        }
      }
      goto code_?;
    }
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  mscorlib.dll::System::ThrowHelper::
  ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion((MethodInfo *)0x0)
  ;
code_?:
  FUN_?();
  FUN_?();
  pcVar11 = (code *)swi(3);
  bVar12 = (*pcVar11)();
  return bVar12;
}


/* MVWorldObjectClient GetValidSpawnPoint() */

MVWorldObjectClient *
Assembly-CSharp.dll::MVWorldObjectClientManager::MVWorldObjectClientManager_GetValidSpawnPoint
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_No_valid_SpawnPoint_on_planet___);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
    this = (pMVar2->fields).teamManager;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((((pMVar1 != (MVGameControllerBase *)0x0) &&
          (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
         (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
        ((pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
         pMVar3 != (MVLocalPlayer *)0x0 && (this != (MVTeamManager *)0x0)))) &&
       (pLVar4 = MVTeamManager::MVTeamManager_GetOnlySpawnPointsForTeam
                           (this,(pMVar3->fields)._._Team_k__BackingField,(MethodInfo *)0x0),
       pLVar4 != (List_1_MVWorldObjectClient_ *)0x0)) {
      if ((pLVar4->fields)._size < 1) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_No_valid_SpawnPoint_on_planet___,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)0x0;
      }
      iVar5 = (pLVar4->fields)._size;
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(), pcVar6 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar6 = (code *)swi(3);
        pMVar8 = (MVWorldObjectClient *)(*pcVar6)();
        return pMVar8;
      }
      pcRam_? = pcVar6;
      uVar9 = (*pcRam_?)(0,iVar5);
      if ((uint)(pLVar4->fields)._size <= uVar9) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        pMVar8 = (MVWorldObjectClient *)(*pcVar6)();
        return pMVar8;
      }
      pMVar10 = (pLVar4->fields)._items;
      if (pMVar10 != (MVWorldObjectClient__Array *)0x0) {
        if ((uint)pMVar10->max_length <= uVar9) {
          FUN_?();
          pcVar6 = (code *)swi(3);
          pMVar8 = (MVWorldObjectClient *)(*pcVar6)();
          return pMVar8;
        }
        return pMVar10->vector[(int)uVar9];
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pMVar8 = (MVWorldObjectClient *)(*pcVar6)();
  return pMVar8;
}


/* Int32 GetWoIDHighestInHierarchyWithComponent[Object](Int32) */

int32_t Assembly-CSharp.dll::MVWorldObjectClientManager::
        MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent
                  (MVWorldObjectClientManager *this,int32_t woId,MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(method);
    }
  }
  iVar1 = -1;
  do {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (this->fields).worldObjects;
    pOStackX_8 = (Object *)0x0;
    if (this_00 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      iVar1 = (*pcVar2)();
      return iVar1;
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__TryGetValue
              ((Dictionary_2_System_Int32_System_Object_ *)this_00,woId,&pOStackX_8,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
              );
    pOVar3 = pOStackX_8;
    if ((pOStackX_8 == (Object *)0x0) ||
       ((GameObject *)pOStackX_8[0xc].monitor == (GameObject *)0x0)) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      iVar1 = (*pcVar2)();
      return iVar1;
    }
    pOVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                       ((GameObject *)pOStackX_8[0xc].monitor,
                        ((method->field7_0x38).rgctx_data)->method);
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
      pOVar3 = pOStackX_8;
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
      pOVar3 = pOStackX_8;
    }
    if (pOVar4 != (Object *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (pOVar4[1].klass != (Object__Class *)0x0) {
        iVar1 = *(int32_t *)&pOVar3[1].klass;
      }
    }
    woId = *(int *)((longlong)&pOVar3[1].klass + 4);
  } while (woId != -1);
  return iVar1;
}


/* Int32 GetWoIDWithLocalOwnerHighestInHierarchy(Int32) */

int32_t Assembly-CSharp.dll::MVWorldObjectClientManager::
        MVWorldObjectClientManager_GetWoIDWithLocalOwnerHighestInHierarchy
                  (MVWorldObjectClientManager *this,int32_t woID,MethodInfo *method)

{
  iVar1 = -1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar2 != (MVGameControllerBase *)0x0) &&
      (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar3->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (pMVar4 != (MVLocalPlayer *)0x0) {
      iVar5 = (pMVar4->fields)._._ActorNr_k__BackingField;
      while( true ) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        this_01 = (this->fields).worldObjects;
        pOStackX_20 = (Object *)0x0;
        if (this_01 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
          FUN_?();
          pcVar6 = (code *)swi(3);
          iVar1 = (*pcVar6)();
          return iVar1;
        }
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__TryGetValue
                  ((Dictionary_2_System_Int32_System_Object_ *)this_01,woID,&pOStackX_20,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                  );
        if (pOStackX_20 == (Object *)0x0) break;
        if (*(int *)&pOStackX_20[3].monitor == iVar5) {
          iVar1 = *(int32_t *)&pOStackX_20[1].klass;
        }
        woID = *(int *)((longlong)&pOStackX_20[1].klass + 4);
        if (woID == -1) {
          return iVar1;
        }
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  iVar1 = (*pcVar6)();
  return iVar1;
}


/* MVWorldObject GetWorldObject(Int32) */

MVWorldObject *
Assembly-CSharp.dll::MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
          (MVWorldObjectClientManager *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                  ,CONCAT44(in_register_00000014,id),0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).worldObjects;
  pMStackX_8 = (MVWorldObject *)0x0;
  if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__TryGetValue
              ((Dictionary_2_System_Int32_System_Object_ *)this_00,id,(Object **)&pMStackX_8,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
              );
    return pMStackX_8;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  pMVar2 = (MVWorldObject *)(*pcVar1)();
  return pMVar2;
}


/* MVWorldObjectClient GetWorldObjectByGoId(Int32) */

MVWorldObjectClient *
Assembly-CSharp.dll::MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectByGoId
          (MVWorldObjectClientManager *this,int32_t goId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).worldObjectMapping;
  aiStackX_10[0] = 0;
  if (pMVar1 != (MVWorldObjectClientManager_WorldObjectMapping *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_int>__TryGetValue_int__System__Int32__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar2 = (pMVar1->fields).gameObjectIdToWorldObjectIdMap;
    if (pDVar2 != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
      cVar3 = FUN_?(pDVar2,goId,aiStackX_10,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_int>__TryGetValue_int__System__Int32__
                           );
      iVar4 = aiStackX_10[0];
      pMVar5 = 
      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_;
      if (cVar3 == '\0') {
        return (MVWorldObjectClient *)0x0;
      }
      this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).worldObjects;
      if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
        uVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
                Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                          (this_00,aiStackX_10[0],
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                           ->klass->rgctx_data[0x21].method);
        if ((int)uVar6 < 0) {
          aiStackX_10[0] = iVar4;
          uVar7 = func_?(pMVar5->klass->rgctx_data,0xe);
          key = (Object *)func_?(uVar7);
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
                    (key,(MethodInfo *)0x0);
          pcVar8 = (code *)swi(3);
          pMVar9 = (MVWorldObjectClient *)(*pcVar8)();
          return pMVar9;
        }
        pDVar10 = (this_00->fields)._entries;
        if (pDVar10 != (Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Vector3___Array *)0x0
           ) {
          if (uVar6 < (uint)pDVar10->max_length) {
            return *(MVWorldObjectClient **)&pDVar10->vector[(int)uVar6].value.y;
          }
          FUN_?();
          pcVar8 = (code *)swi(3);
          pMVar9 = (MVWorldObjectClient *)(*pcVar8)();
          return pMVar9;
        }
        FUN_?();
        pcVar8 = (code *)swi(3);
        pMVar9 = (MVWorldObjectClient *)(*pcVar8)();
        return pMVar9;
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  pMVar9 = (MVWorldObjectClient *)(*pcVar8)();
  return pMVar9;
}


/* MVWorldObjectClient GetWorldObjectClient(Int32) */

MVWorldObjectClient *
Assembly-CSharp.dll::MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
          (MVWorldObjectClientManager *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).worldObjects;
  pMStackX_8 = (MVWorldObjectClient *)0x0;
  if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__TryGetValue
              ((Dictionary_2_System_Int32_System_Object_ *)this_00,id,(Object **)&pMStackX_8,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
              );
    return pMStackX_8;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  pMVar2 = (MVWorldObjectClient *)(*pcVar1)();
  return pMVar2;
}


/* WorldObjectClientRef GetWorldObjectClientRef(Int32) */

WorldObjectClientRef *
Assembly-CSharp.dll::MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRef
          (MVWorldObjectClientManager *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVWorldObjectClientManager__WOCMWorldObjectClientRef);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pWVar1 = (WorldObjectClientRef *)
           FUN_?(TypeInfo__MVWorldObjectClientManager__WOCMWorldObjectClientRef);
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__WorldObjectClientRef_int_)
    ;
    LOCK();
    UNLOCK();
    cRam_? = 1;
    (pWVar1->fields)._.woId = id;
    return pWVar1;
  }
  (pWVar1->fields)._.woId = id;
  return pWVar1;
}


/* WorldObjectClientRef GetWorldObjectClientRefNullRef() */

WorldObjectClientRef *
Assembly-CSharp.dll::MVWorldObjectClientManager::
MVWorldObjectClientManager_GetWorldObjectClientRefNullRef(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVWorldObjectClientManager__WOCMWorldObjectClientRef);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pWVar1 = (WorldObjectClientRef *)
           FUN_?(TypeInfo__MVWorldObjectClientManager__WOCMWorldObjectClientRef);
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__WorldObjectClientRef_int_)
    ;
    LOCK();
    UNLOCK();
    cRam_? = 1;
    (pWVar1->fields)._.woId = -1;
    return pWVar1;
  }
  (pWVar1->fields)._.woId = -1;
  return pWVar1;
}


/* WorldObjectClientRef`1[MVWorldObjectClient] GetWorldObjectClientRefNullRefTyped() */

WorldObjectClientRef_1_MVWorldObjectClient_ *
Assembly-CSharp.dll::MVWorldObjectClientManager::
MVWorldObjectClientManager_GetWorldObjectClientRefNullRefTyped(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__MVWorldObjectClientManager__WOCMWorldObjectClientRef<MVWorldObjectClient>__WOCMWorldObjectClientRef_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MVWorldObjectClientManager__WOCMWorldObjectClientRef<MVWorldObjectClient>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pWVar1 = (WorldObjectClientRef_1_MVWorldObjectClient_ *)
           FUN_?(
                        TypeInfo__MVWorldObjectClientManager__WOCMWorldObjectClientRef<MVWorldObjectClient>
                        );
  (pWVar1->fields).woId = -1;
  return pWVar1;
}


/* WorldObjectClientRef`1[System.Object] GetWorldObjectClientRef[Object](Int32) */

WorldObjectClientRef_1_System_Object_ *
Assembly-CSharp.dll::MVWorldObjectClientManager::
MVWorldObjectClientManager_GetWorldObjectClientRef_1
          (MVWorldObjectClientManager *this,int32_t id,MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(method);
  }
  pvVar1 = ((method->field7_0x38).rgctx_data)->rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
    pvVar1 = (void *)FUN_?(pvVar1);
  }
  pWVar2 = (WorldObjectClientRef_1_System_Object_ *)FUN_?(pvVar1);
  (pWVar2->fields).woId = id;
  return pWVar2;
}


/* MVWorldObjectClient GetWorldObjectClientRoot(Int32) */

MVWorldObjectClient *
Assembly-CSharp.dll::MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRoot
          (MVWorldObjectClientManager *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Group_id_is__1__This_is_the_worl);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MVWorldObjectClientManager_GetWorldObjectClient(this,id,(MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClient *)0x0) {
    if ((pMVar1->fields)._.groupId != -1) {
      if ((pMVar1->fields)._.groupId != (this->fields).rootGroupId) {
        pMVar1 = MVWorldObjectClientManager_GetWorldObjectClientRoot
                           (this,(pMVar1->fields)._.groupId,(MethodInfo *)0x0);
      }
      return pMVar1;
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Group_id_is__1__This_is_the_worl,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)0x0;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pMVar1 = (MVWorldObjectClient *)(*pcVar2)();
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MVWorldObjectClient_MethodInfo__System__Linq__Enumerable__FirstOrDefault<MVWorldObjectClient>_System__Collections__Generic__IEnumerable<MVWorldObjectClient>__System__Func<MVWorldObjectClient,_bool>_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )(this->fields).worldObjects;
  if (this_00 ==
      (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
  {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pMVar2 = (MVWorldObjectClient *)(*pcVar1)();
    return pMVar2;
  }
  pDVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
           TypeConverterRegistry+ConverterKey,System::Object]::
           Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                     (this_00,
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                     );
  pMVar4 = 
  MVWorldObjectClient_MethodInfo__System__Linq__Enumerable__FirstOrDefault<MVWorldObjectClient>_System__Collections__Generic__IEnumerable<MVWorldObjectClient>__System__Func<MVWorldObjectClient,_bool>_
  ;
  if ((
      MVWorldObjectClient_MethodInfo__System__Linq__Enumerable__FirstOrDefault<MVWorldObjectClient>_System__Collections__Generic__IEnumerable<MVWorldObjectClient>__System__Func<MVWorldObjectClient,_bool>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    if ((pMVar4->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar4);
    }
  }
  if (pDVar3 == (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)0x0) {
    pSVar5 = (String *)func_?(&StringLiteral_source);
    pEVar6 = System.Core.dll::System::Linq::Error::Error_1_ArgumentNull(pSVar5,(MethodInfo *)0x0);
    FUN_?(pEVar6,pMVar4);
code_?:
    FUN_?();
  }
  else {
    if (predicate == (Func_2_MVWorldObjectClient_Boolean_ *)0x0) {
      pSVar5 = (String *)func_?(&StringLiteral_predicate);
      pEVar6 = System.Core.dll::System::Linq::Error::Error_1_ArgumentNull(pSVar5,(MethodInfo *)0x0);
      FUN_?(pEVar6,pMVar4);
      pcVar1 = (code *)swi(3);
      pMVar2 = (MVWorldObjectClient *)(*pcVar1)();
      return pMVar2;
    }
    pvVar7 = ((pMVar4->field7_0x38).rgctx_data)->rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar7 + 0x135) & 1) == 0) {
      pvVar7 = (void *)FUN_?(pvVar7);
    }
    lVar8 = FUN_?(0,pvVar7,pDVar3);
    while (lVar8 != 0) {
      cVar9 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
      if (cVar9 == '\0') {
        if (lVar8 != 0) {
          FUN_?(0,TypeInfo__System__IDisposable,lVar8);
        }
        return (MVWorldObjectClient *)0x0;
      }
      if (lVar8 == 0) goto code_?;
      pvVar7 = (pMVar4->field7_0x38).rgctx_data[3].rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar7 + 0x135) & 1) == 0) {
        pvVar7 = (void *)FUN_?(pvVar7);
      }
      pMVar2 = (MVWorldObjectClient *)FUN_?(0,pvVar7,lVar8);
      cVar9 = (*(predicate->fields)._._.invoke_impl)
                        ((predicate->fields)._._.method_code,pMVar2,(predicate->fields)._._.method);
      if (cVar9 != '\0') {
        if (lVar8 != 0) {
          FUN_?(0,TypeInfo__System__IDisposable,lVar8);
        }
        return pMVar2;
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar1 = (code *)swi(3);
  pMVar2 = (MVWorldObjectClient *)(*pcVar1)();
  return pMVar2;
}


/* Object GetWorldObjectClient[Object](Int32) */

Object * Assembly-CSharp.dll::MVWorldObjectClientManager::
         MVWorldObjectClientManager_GetWorldObjectClient_1
                   (MVWorldObjectClientManager *this,int32_t id,MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                 );
    LOCK();
    UNLOCK();
    if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(method);
    }
  }
  this_00 = (this->fields).worldObjects;
  pOStackX_8 = (Object *)0x0;
  if (this_00 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pOVar2 = (Object *)(*pcVar1)();
    return pOVar2;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
  Dictionary_2_System_Int32_System_Object__TryGetValue
            ((Dictionary_2_System_Int32_System_Object_ *)this_00,id,&pOStackX_8,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
            );
  pOVar2 = pOStackX_8;
  lVar3 = *(longlong *)(method->field7_0x38).methodMetadataHandle;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_?(lVar3);
  }
  pOVar4 = (Object *)0x0;
  if (pOVar2 != (Object *)0x0) {
    pOVar5 = pOVar2->klass;
    cVar6 = FUN_?(lVar3,pOVar5);
    pOVar4 = pOVar2;
    if (cVar6 == '\0') {
      if (((pOVar5->_1).field_0x6e & 0x10) == 0) {
code_?:
        FUN_?(pOVar2,lVar3);
        pcVar1 = (code *)swi(3);
        pOVar2 = (Object *)(*pcVar1)();
        return pOVar2;
      }
      if (((((*(byte *)(lVar3 + 0x118) & 0x20) == 0) && (*(char *)(lVar3 + 0x2a) != '\x13')) &&
          (*(char *)(lVar3 + 0x2a) != '\x1e')) ||
         (((*(longlong *)(lVar3 + 0x70) == 0 ||
           (*(longlong *)(*(longlong *)(lVar3 + 0x70) + 0x28) == 0)) ||
          (lVar7 = FUN_?(pOVar2), lVar7 == 0)))) {
        pOVar4 = (Object *)0x0;
        if (lVar3 == lRam_?) {
          pOVar4 = pOVar2;
        }
        if (pOVar4 == (Object *)0x0) goto code_?;
      }
    }
  }
  return pOVar4;
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__IEnumerable<MVWorldObjectClient>_MethodInfo__System__Linq__Enumerable__Where<MVWorldObjectClient>_System__Collections__Generic__IEnumerable<MVWorldObjectClient>__System__Func<MVWorldObjectClient,_bool>_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )(this->fields).worldObjects;
  if (this_00 ==
      (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
  {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pIVar2 = (IEnumerable_1_MVWorldObjectClient_ *)(*pcVar1)();
    return pIVar2;
  }
  pDVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
           TypeConverterRegistry+ConverterKey,System::Object]::
           Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                     (this_00,
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                     );
  pMVar4 = 
  System__Collections__Generic__IEnumerable<MVWorldObjectClient>_MethodInfo__System__Linq__Enumerable__Where<MVWorldObjectClient>_System__Collections__Generic__IEnumerable<MVWorldObjectClient>__System__Func<MVWorldObjectClient,_bool>_
  ;
  if ((
      System__Collections__Generic__IEnumerable<MVWorldObjectClient>_MethodInfo__System__Linq__Enumerable__Where<MVWorldObjectClient>_System__Collections__Generic__IEnumerable<MVWorldObjectClient>__System__Func<MVWorldObjectClient,_bool>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(
                 System__Collections__Generic__IEnumerable<MVWorldObjectClient>_MethodInfo__System__Linq__Enumerable__Where<MVWorldObjectClient>_System__Collections__Generic__IEnumerable<MVWorldObjectClient>__System__Func<MVWorldObjectClient,_bool>_
                 );
  }
  if (pDVar3 != (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)0x0) {
    if (predicate == (Func_2_MVWorldObjectClient_Boolean_ *)0x0) {
      pSVar5 = (String *)func_?(&StringLiteral_predicate);
      pEVar6 = System.Core.dll::System::Linq::Error::Error_1_ArgumentNull(pSVar5,(MethodInfo *)0x0)
      ;
      FUN_?(pEVar6,pMVar4);
      pcVar1 = (code *)swi(3);
      pIVar2 = (IEnumerable_1_MVWorldObjectClient_ *)(*pcVar1)();
      return pIVar2;
    }
    pIVar7 = (pMVar4->field7_0x38).rgctx_data[2].klass;
    if ((pIVar7->field_0x135 & 1) == 0) {
      pIVar7 = (Il2CppClass *)FUN_?(pIVar7);
    }
    if ((pIVar7->naturalAligment <= (pDVar3->klass->_1).naturalAligment) &&
       ((pDVar3->klass->_1).typeHierarchy[(ulonglong)pIVar7->naturalAligment - 1] == pIVar7)) {
      pIVar7 = (pMVar4->field7_0x38).rgctx_data[2].klass;
      if ((pIVar7->field_0x135 & 1) == 0) {
        pIVar7 = (Il2CppClass *)FUN_?(pIVar7);
      }
      pDVar8 = pDVar3->klass;
      if ((pIVar7->naturalAligment <= (pDVar8->_1).naturalAligment) &&
         ((pDVar8->_1).typeHierarchy[(ulonglong)pIVar7->naturalAligment - 1] == pIVar7)) {
        pIVar7 = (pMVar4->field7_0x38).rgctx_data[2].klass;
        if ((pIVar7->field_0x135 & 1) == 0) {
          pIVar7 = (Il2CppClass *)FUN_?(pIVar7);
        }
        pDVar8 = pDVar3->klass;
        if ((pIVar7->naturalAligment <= (pDVar8->_1).naturalAligment) &&
           ((pDVar8->_1).typeHierarchy[(ulonglong)pIVar7->naturalAligment - 1] == pIVar7)) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pIVar2 = (IEnumerable_1_MVWorldObjectClient_ *)
                   (*(pDVar8->vtable).System_Collections_ICollection_get_SyncRoot.methodPtr)
                             (pDVar3,predicate,
                              (pDVar8->vtable).System_Collections_ICollection_get_SyncRoot.method);
          return pIVar2;
        }
        FUN_?(pDVar3,pIVar7,pDVar8,in_R9,unaff_RDI);
        pcVar1 = (code *)swi(3);
        pIVar2 = (IEnumerable_1_MVWorldObjectClient_ *)(*pcVar1)();
        return pIVar2;
      }
      FUN_?(pDVar3,pIVar7,pDVar8,in_R9,unaff_RDI);
      pcVar1 = (code *)swi(3);
      pIVar2 = (IEnumerable_1_MVWorldObjectClient_ *)(*pcVar1)();
      return pIVar2;
    }
    pvVar9 = (pMVar4->field7_0x38).rgctx_data[4].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar9 + 0x135) & 1) == 0) {
      pvVar9 = (void *)FUN_?(pvVar9);
    }
    lVar10 = FUN_?(pDVar3,pvVar9);
    if (lVar10 == 0) {
      pIVar7 = (pMVar4->field7_0x38).rgctx_data[7].klass;
      if ((pIVar7->field_0x135 & 1) == 0) {
        pIVar7 = (Il2CppClass *)FUN_?(pIVar7);
      }
      if (((pDVar3->klass->_1).naturalAligment < pIVar7->naturalAligment) ||
         ((pDVar3->klass->_1).typeHierarchy[(ulonglong)pIVar7->naturalAligment - 1] != pIVar7)) {
        pvVar9 = (pMVar4->field7_0x38).rgctx_data[10].rgctxDataDummy;
        if ((*(byte *)((longlong)pvVar9 + 0x135) & 1) == 0) {
          pvVar9 = (void *)FUN_?(pvVar9);
        }
        pIVar2 = (IEnumerable_1_MVWorldObjectClient_ *)FUN_?(pvVar9);
        FUN_?(pIVar2,pDVar3,predicate);
      }
      else {
        pvVar9 = (pMVar4->field7_0x38).rgctx_data[8].rgctxDataDummy;
        if ((*(byte *)((longlong)pvVar9 + 0x135) & 1) == 0) {
          pvVar9 = (void *)FUN_?(pvVar9);
        }
        pIVar2 = (IEnumerable_1_MVWorldObjectClient_ *)FUN_?(pvVar9);
        pIVar7 = (pMVar4->field7_0x38).rgctx_data[7].klass;
        if ((pIVar7->field_0x135 & 1) == 0) {
          pIVar7 = (Il2CppClass *)FUN_?(pIVar7);
        }
        if (((pDVar3->klass->_1).naturalAligment < pIVar7->naturalAligment) ||
           ((pDVar3->klass->_1).typeHierarchy[(ulonglong)pIVar7->naturalAligment - 1] != pIVar7)) {
          FUN_?(pDVar3,pIVar7);
          pcVar1 = (code *)swi(3);
          pIVar2 = (IEnumerable_1_MVWorldObjectClient_ *)(*pcVar1)();
          return pIVar2;
        }
        FUN_?(pIVar2,pDVar3,predicate);
      }
    }
    else {
      pvVar9 = (pMVar4->field7_0x38).rgctx_data[5].rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar9 + 0x135) & 1) == 0) {
        pvVar9 = (void *)FUN_?(pvVar9);
      }
      pIVar2 = (IEnumerable_1_MVWorldObjectClient_ *)FUN_?(pvVar9);
      pvVar9 = (pMVar4->field7_0x38).rgctx_data[4].rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar9 + 0x135) & 1) == 0) {
        pvVar9 = (void *)FUN_?(pvVar9);
      }
      lVar10 = FUN_?(pDVar3,pvVar9);
      if (lVar10 == 0) {
        FUN_?(pDVar3,pvVar9);
        pcVar1 = (code *)swi(3);
        pIVar2 = (IEnumerable_1_MVWorldObjectClient_ *)(*pcVar1)();
        return pIVar2;
      }
      FUN_?(pIVar2,lVar10,predicate);
    }
    return pIVar2;
  }
  pSVar5 = (String *)func_?(&StringLiteral_source);
  pEVar6 = System.Core.dll::System::Linq::Error::Error_1_ArgumentNull(pSVar5,(MethodInfo *)0x0);
  FUN_?(pEVar6,pMVar4);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerable_1_MVWorldObjectClient_ *)(*pcVar1)();
  return pIVar2;
}


/* List`1[MVWorldObjectClient] GetWorldObjectsByType(WorldObjectType) */

List_1_MVWorldObjectClient_ *
Assembly-CSharp.dll::MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
          (MVWorldObjectClientManager *this,WorldObjectType__Enum type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_WorldObjectTypeSet_contains_id_w);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_MVWorldObjectClient_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
  this_00 = (this->fields).worldObjectMapping;
  if (this_00 == (MVWorldObjectClientManager_WorldObjectMapping *)0x0) {
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
    pcVar2 = (code *)swi(3);
    pLVar1 = (List_1_MVWorldObjectClient_ *)(*pcVar2)();
    return pLVar1;
  }
  pHStack_3 = MVWorldObjectClientManager+WorldObjectMapping::
               MVWorldObjectClientManager_WorldObjectMapping_GetWorldObjectTypeSet
                         (this_00,type,(MethodInfo *)0x0);
  if (pHStack_3 != (HashSet_1_System_Int32_ *)0x0) {
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&uStack_5 >> 0xc);
      puVar6 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar7 = *puVar6;
        LOCK();
        uVar8 = *puVar6;
        if (uVar7 == uVar8) {
          *puVar6 = uVar7 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (uVar7 != uVar8);
    }
    ppHStack_9 = (HashSet_1_System_Int32_ **)
                  ((ulonglong)(uint)(pHStack_3->fields)._version << 0x20);
    uStack_10 = 0;
    lStack_11 = (longlong)ppHStack_9;
    uStack_12 = 0;
    uStack_5 = 0;
    ppHStack_9 = &pHStack_3;
    while (cVar13 = FUN_?(&pHStack_3,
                                 MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                                ), cVar13 != '\0') {
      key = (int32_t)uStack_12;
      this_01 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).worldObjects;
      if (this_01 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)
      goto code_?;
      iVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                        (this_01,(int32_t)uStack_12,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                         ->klass->rgctx_data[0x21].method);
      if (iVar14 < 0) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_WorldObjectTypeSet_contains_id_w,(MethodInfo *)0x0);
      }
      else {
        this_02 = (this->fields).worldObjects;
        if (this_02 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0)
        goto code_?;
        pOVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)this_02,key,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                           );
        if (pLVar1 == (List_1_MVWorldObjectClient_ *)0x0) goto code_?;
        FUN_?(pLVar1,pOVar15);
      }
    }
  }
  return pLVar1;
}


/* Boolean IsType(Int32, WorldObjectType) */

bool Assembly-CSharp.dll::MVWorldObjectClientManager::MVWorldObjectClientManager_IsType
               (MVWorldObjectClientManager *this,int32_t woID,WorldObjectType__Enum worldObjectType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Failed_to_get_worldObject);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).worldObjects;
  if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,woID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_Failed_to_get_worldObject,(MethodInfo *)0x0);
      return 0;
    }
    this_01 = (this->fields).worldObjects;
    if (this_01 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)this_01,woID,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                         );
      if (pOVar2 != (Object *)0x0) {
        return *(WorldObjectType__Enum *)&pOVar2[6].monitor == worldObjectType;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void SubscribeWOCreatedEvent(Type, Action`2[Object,WorldObjectCreatedEventArgs]) */

void Assembly-CSharp.dll::MVWorldObjectClientManager::
     MVWorldObjectClientManager_SubscribeWOCreatedEvent
               (MVWorldObjectClientManager *this,Type *type,
               Action_2_Object_WorldObjectCreatedEventArgs_ *woCreatedEventHandler,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<System::Object,_WorldObjectCreatedEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>__TryGetValue_System__Type__System__Action<System::Object,_WorldObjectCreatedEventArgs>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>__get_Item_System__Type_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>__set_Item_System__Type__System__Action<System::Object,_WorldObjectCreatedEventArgs>_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).woCreatedEventSubscribers;
  value = (Object *)0x0;
  pOStackX_8 = (Object *)0x0;
  if (pDVar1 != (Dictionary_2_System_Type_System_Action_2_Object_WorldObjectCreatedEventArgs_ *)0x0)
  {
    pMVar2 = 
    MethodInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>__TryGetValue_System__Type__System__Action<System::Object,_WorldObjectCreatedEventArgs>__
    ;
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)type,
                       &pOStackX_8,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>__TryGetValue_System__Type__System__Action<System::Object,_WorldObjectCreatedEventArgs>__
                      );
    pDVar1 = (this->fields).woCreatedEventSubscribers;
    if (bVar3 == 0) {
      if (pDVar1 != (Dictionary_2_System_Type_System_Action_2_Object_WorldObjectCreatedEventArgs_ *)
                    0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)type,
                   (Object *)woCreatedEventHandler,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar2 >> 8),1),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>__set_Item_System__Type__System__Action<System::Object,_WorldObjectCreatedEventArgs>_
                   ->klass->rgctx_data[0x22].method);
        return;
      }
    }
    else if (pDVar1 != (Dictionary_2_System_Type_System_Action_2_Object_WorldObjectCreatedEventArgs_
                        *)0x0) {
      pDVar4 = (Delegate *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)type,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>__get_Item_System__Type_
                         );
      pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                         (pDVar4,(Delegate *)woCreatedEventHandler,(MethodInfo *)0x0);
      pAVar5 = TypeInfo__System__Action<System::Object,_WorldObjectCreatedEventArgs>;
      pMVar6 = 
      MethodInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>__set_Item_System__Type__System__Action<System::Object,_WorldObjectCreatedEventArgs>_
      ;
      if (pDVar4 != (Delegate *)0x0) {
        value = (Object *)
                FUN_?(pDVar4,
                              TypeInfo__System__Action<System::Object,_WorldObjectCreatedEventArgs>)
        ;
        if (value == (Object *)0x0) {
          FUN_?(pDVar4,pAVar5);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)type,value,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar2 >> 8),1),
                 pMVar6->klass->rgctx_data[0x22].method);
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
    FUN_?(&TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__TryGetValue_int__System__Action<System::Object,_WorldObjectDestroyedEventArgs>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__set_Item_int__System__Action<System::Object,_WorldObjectDestroyedEventArgs>_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).worldObjects;
  value = (Object *)0x0;
  pOStackX_8 = (Object *)0x0;
  apOStack_1[0] = (Object *)0x0;
  if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__TryGetValue
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,woID,&pOStackX_8,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                      );
    if (bVar2 == 0) {
      return;
    }
    pDVar3 = (this->fields).woDestroyedEventSubscribers;
    if (pDVar3 != (Dictionary_2_System_Int32_System_Action_2_Object_WorldObjectDestroyedEventArgs_ *
                  )0x0) {
      pMVar4 = 
      MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__TryGetValue_int__System__Action<System::Object,_WorldObjectDestroyedEventArgs>__
      ;
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__TryGetValue
                        ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,woID,apOStack_1,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__TryGetValue_int__System__Action<System::Object,_WorldObjectDestroyedEventArgs>__
                        );
      pDVar3 = (this->fields).woDestroyedEventSubscribers;
      if (bVar2 == 0) {
        if (pDVar3 != (Dictionary_2_System_Int32_System_Action_2_Object_WorldObjectDestroyedEventArgs_
                       *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__TryInsert
                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,woID,
                     (Object *)woDestroyedEventHandler,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar4 >> 8),1),
                     MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__set_Item_int__System__Action<System::Object,_WorldObjectDestroyedEventArgs>_
                     ->klass->rgctx_data[0x22].method);
          return;
        }
      }
      else if (pDVar3 != (Dictionary_2_System_Int32_System_Action_2_Object_WorldObjectDestroyedEventArgs_
                          *)0x0) {
        pDVar5 = (Delegate *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,woID,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__get_Item_int_
                           );
        pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                           (pDVar5,(Delegate *)woDestroyedEventHandler,(MethodInfo *)0x0);
        pAVar6 = TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>;
        pMVar7 = 
        MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__set_Item_int__System__Action<System::Object,_WorldObjectDestroyedEventArgs>_
        ;
        if ((pDVar5 != (Delegate *)0x0) &&
           (value = (Object *)
                    FUN_?(pDVar5,
                                  TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>
                                 ), value == (Object *)0x0)) {
          FUN_?(pDVar5,pAVar6);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__TryInsert
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,woID,value,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar4 >> 8),1),
                   pMVar7->klass->rgctx_data[0x22].method);
        return;
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Boolean TryGetWorldObject(Int32, MVWorldObject ByRef) */

bool Assembly-CSharp.dll::MVWorldObjectClientManager::MVWorldObjectClientManager_TryGetWorldObject
               (MVWorldObjectClientManager *this,int32_t id,MVWorldObject **worldObject,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).worldObjects;
  pMStackX_8 = (MVWorldObject *)0x0;
  if (this_00 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__TryGetValue
                    ((Dictionary_2_System_Int32_System_Object_ *)this_00,id,(Object **)&pMStackX_8,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                    );
  bVar3 = iRam_? != 0;
  *worldObject = pMStackX_8;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)worldObject >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  return bVar2;
}


/* Boolean UnregisterWorldObject(Int32) */

bool Assembly-CSharp.dll::MVWorldObjectClientManager::
     MVWorldObjectClientManager_UnregisterWorldObject
               (MVWorldObjectClientManager *this,int32_t worldObjectId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_trying_to_unregister_none_existi);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).worldObjects;
  if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,worldObjectId,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_trying_to_unregister_none_existi,(MethodInfo *)0x0);
      return 0;
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UnregisterWorldObject
                (this_01,worldObjectId,(MethodInfo *)0x0);
      return 1;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void UnsubscribeWOCreatedEvent(Type, Action`2[Object,WorldObjectCreatedEventArgs]) */

void Assembly-CSharp.dll::MVWorldObjectClientManager::
     MVWorldObjectClientManager_UnsubscribeWOCreatedEvent
               (MVWorldObjectClientManager *this,Type *type,
               Action_2_Object_WorldObjectCreatedEventArgs_ *woCreatedEventHandler,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<System::Object,_WorldObjectCreatedEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>__TryGetValue_System__Type__System__Action<System::Object,_WorldObjectCreatedEventArgs>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).woCreatedEventSubscribers;
  pOStackX_8 = (Object *)0x0;
  if (this_00 == (Dictionary_2_System_Type_System_Action_2_Object_WorldObjectCreatedEventArgs_ *)0x0
     ) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryGetValue
                    ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)type,&pOStackX_8
                     ,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>__TryGetValue_System__Type__System__Action<System::Object,_WorldObjectCreatedEventArgs>__
                    );
  pOVar3 = pOStackX_8;
  if ((bVar2 != 0) && (pOStackX_8 != (Object *)0x0)) {
    if (woCreatedEventHandler != (Action_2_Object_WorldObjectCreatedEventArgs_ *)0x0) {
      lVar4 = FUN_?(&(pOStackX_8->klass->_0).byval_arg);
      lVar5 = FUN_?(&(woCreatedEventHandler->klass->_0).byval_arg);
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      if (lVar4 != lVar5) {
        FUN_?(pOVar3);
        pTVar6 = mscorlib.dll::System::Object::Object_GetType(pOVar3,(MethodInfo *)0x0);
        FUN_?(pTVar6);
        pOVar3 = (Object *)func_?(0x1a);
        FUN_?(woCreatedEventHandler);
        pTVar6 = mscorlib.dll::System::Object::Object_GetType
                           ((Object *)woCreatedEventHandler,(MethodInfo *)0x0);
        FUN_?(pTVar6);
        arg1 = (Object *)func_?(0x1a,pTVar6);
        pSVar7 = (String *)func_?(&StringLiteral_Incompatible_Delegate_Types__Fir);
        pSVar7 = mscorlib.dll::System::String::String_Format_1(pSVar7,pOVar3,arg1,(MethodInfo *)0x0)
        ;
        uVar8 = func_?(&TypeInfo__System__ArgumentException);
        this_01 = (InvalidEnumArgumentException *)func_?(uVar8);
        System.dll::System::ComponentModel::InvalidEnumArgumentException::
        InvalidEnumArgumentException__ctor_1(this_01,pSVar7,(MethodInfo *)0x0);
        uVar8 = func_?(&
                                    MethodInfo__System__Delegate__Remove_MethodInfo__System__Delegate__MethodInfo__System__Delegate_
                                   );
        FUN_?(this_01,uVar8);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pOVar3 = (Object *)
               (*(code *)pOVar3->klass[1]._0.interopData)
                         (pOVar3,woCreatedEventHandler,pOVar3->klass[1]._0.klass);
    }
    pAVar9 = TypeInfo__System__Action<System::Object,_WorldObjectCreatedEventArgs>;
    if (pOVar3 != (Object *)0x0) {
      lVar4 = FUN_?(pOVar3,
                            TypeInfo__System__Action<System::Object,_WorldObjectCreatedEventArgs>);
      if (lVar4 == 0) {
        FUN_?(pOVar3,pAVar9);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
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
    FUN_?(&TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__TryGetValue_int__System__Action<System::Object,_WorldObjectDestroyedEventArgs>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__set_Item_int__System__Action<System::Object,_WorldObjectDestroyedEventArgs>_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).woDestroyedEventSubscribers;
  pOStackX_8 = (Object *)0x0;
  if (pDVar1 == (Dictionary_2_System_Int32_System_Action_2_Object_WorldObjectDestroyedEventArgs_ *)
                0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pMVar3 = 
  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__TryGetValue_int__System__Action<System::Object,_WorldObjectDestroyedEventArgs>__
  ;
  bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__TryGetValue
                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,woID,&pOStackX_8,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__TryGetValue_int__System__Action<System::Object,_WorldObjectDestroyedEventArgs>__
                    );
  pOVar5 = pOStackX_8;
  if (bVar4 != 0) {
    if (pOStackX_8 != (Object *)0x0) {
      if (woDestroyedEventHandler != (Action_2_Object_WorldObjectDestroyedEventArgs_ *)0x0) {
        lVar6 = FUN_?(&(pOStackX_8->klass->_0).byval_arg);
        lVar7 = FUN_?(&(woDestroyedEventHandler->klass->_0).byval_arg);
        if (*(int *)(lRam_? + 0xe4) == 0) {
          FUN_?();
        }
        if (lVar6 != lVar7) {
          FUN_?(pOVar5);
          pTVar8 = mscorlib.dll::System::Object::Object_GetType(pOVar5,(MethodInfo *)0x0);
          FUN_?(pTVar8);
          pOVar5 = (Object *)func_?(0x1a);
          FUN_?(woDestroyedEventHandler);
          pTVar8 = mscorlib.dll::System::Object::Object_GetType
                             ((Object *)woDestroyedEventHandler,(MethodInfo *)0x0);
          FUN_?(pTVar8);
          pOVar9 = (Object *)func_?(0x1a,pTVar8);
          pSVar10 = (String *)func_?(&StringLiteral_Incompatible_Delegate_Types__Fir);
          pSVar10 = mscorlib.dll::System::String::String_Format_1
                              (pSVar10,pOVar5,pOVar9,(MethodInfo *)0x0);
          uVar11 = func_?(&TypeInfo__System__ArgumentException);
          this_00 = (InvalidEnumArgumentException *)func_?(uVar11);
          System.dll::System::ComponentModel::InvalidEnumArgumentException::
          InvalidEnumArgumentException__ctor_1(this_00,pSVar10,(MethodInfo *)0x0);
          uVar11 = func_?(&
                                       MethodInfo__System__Delegate__Remove_MethodInfo__System__Delegate__MethodInfo__System__Delegate_
                                      );
          FUN_?(this_00,uVar11);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pOVar5 = (Object *)
                 (*(code *)pOVar5->klass[1]._0.interopData)
                           (pOVar5,woDestroyedEventHandler,pOVar5->klass[1]._0.klass);
      }
      pAVar12 = TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>;
      if (pOVar5 != (Object *)0x0) {
        pOVar9 = (Object *)
                 FUN_?(pOVar5,
                               TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>
                              );
        if (pOVar9 == (Object *)0x0) {
          FUN_?(pOVar5,pAVar12);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pDVar1 = (this->fields).woDestroyedEventSubscribers;
        pOStackX_8 = pOVar9;
        if (pDVar1 != (Dictionary_2_System_Int32_System_Action_2_Object_WorldObjectDestroyedEventArgs_
                       *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__TryInsert
                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,woID,pOVar9,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar3 >> 8),1),
                     MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__set_Item_int__System__Action<System::Object,_WorldObjectDestroyedEventArgs>_
                     ->klass->rgctx_data[0x22].method);
          return;
        }
        goto code_?;
      }
      pOStackX_8 = (Object *)0x0;
    }
    pDVar1 = (this->fields).woDestroyedEventSubscribers;
    if (pDVar1 == (Dictionary_2_System_Int32_System_Action_2_Object_WorldObjectDestroyedEventArgs_ *
                  )0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Remove
              ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,woID,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__Remove_int_
              );
  }
  return;
}


/* Void UpdateWorldBounds(Bounds) */

void Assembly-CSharp.dll::MVWorldObjectClientManager::MVWorldObjectClientManager_UpdateWorldBounds
               (MVWorldObjectClientManager *this,Bounds *bounds,MethodInfo *method)

{
  uVar1 = (bounds->m_Center).x;
  uVar2 = (bounds->m_Center).y;
  uVar3 = (bounds->m_Extents).x;
  uVar4 = (bounds->m_Extents).y;
  fVar5 = (bounds->m_Center).z - (bounds->m_Extents).z;
  uVar6 = (this->fields).worldBounds.m_Center.x;
  uVar7 = (this->fields).worldBounds.m_Center.y;
  aVStack_8[0].x = (this->fields).worldBounds.m_Extents.x;
  aVStack_8[0].y = (this->fields).worldBounds.m_Extents.y;
  fVar9 = (float)uVar6 - aVStack_8[0].x;
  fVar10 = (this->fields).worldBounds.m_Center.z - (this->fields).worldBounds.m_Extents.z;
  fVar11 = (float)uVar7 - aVStack_8[0].y;
  index = 0;
  VStack_12.y = fVar11;
  VStack_12.x = fVar9;
  index_00 = 0;
  VStack_13.x = 0.0;
  VStack_13.y = 0.0;
  VStack_13.z = 0.0;
  VStack_12.z = fVar10;
  VStack_14.x = (float)uVar1 - (float)uVar3;
  VStack_14.y = (float)uVar2 - (float)uVar4;
  VStack_14.z = fVar5;
  do {
    fVar15 = fVar9;
    fVar16 = (float)uVar1 - (float)uVar3;
    if (((index_00 != 0) && (fVar15 = fVar11, fVar16 = (float)uVar2 - (float)uVar4, index_00 != 1))
       && (fVar15 = fVar10, fVar16 = fVar5, index_00 != 2)) {
      uVar17 = func_?(&TypeInfo__System__IndexOutOfRangeException);
      pIVar18 = (IndexOutOfRangeException *)func_?(uVar17);
      pSVar19 = (String *)func_?(&StringLiteral_Invalid_Vector3_index_);
      mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
                (pIVar18,pSVar19,(MethodInfo *)0x0);
      uVar17 = func_?(&MethodInfo__UnityEngine__Vector3__get_Item_int_);
      FUN_?(pIVar18,uVar17);
      pcVar20 = (code *)swi(3);
      (*pcVar20)();
      return;
    }
    pVVar21 = &VStack_12;
    if (fVar16 < fVar15) {
      pVVar21 = &VStack_14;
    }
    fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                       (pVVar21,index_00,method);
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
              (&VStack_13,index_00,fVar15,in_R9);
    index_00 = index_00 + 1;
  } while (index_00 < 3);
  uVar22 = (bounds->m_Extents).x;
  uVar23 = (bounds->m_Extents).y;
  uVar24 = (bounds->m_Center).x;
  uVar25 = (bounds->m_Center).y;
  fVar11 = (bounds->m_Extents).z + (bounds->m_Center).z;
  uVar26 = (this->fields).worldBounds.m_Extents.x;
  uVar27 = (this->fields).worldBounds.m_Extents.y;
  uVar28 = (this->fields).worldBounds.m_Center.x;
  uVar29 = (this->fields).worldBounds.m_Center.y;
  fVar5 = (this->fields).worldBounds.m_Extents.z + (this->fields).worldBounds.m_Center.z;
  VStack_12.x = 0.0;
  VStack_12.y = 0.0;
  VStack_12.z = 0.0;
  aVStack_8[0].y = (float)uVar23 + (float)uVar25;
  aVStack_8[0].x = (float)uVar22 + (float)uVar24;
  VStack_14.x = (float)uVar26 + (float)uVar28;
  VStack_14.y = (float)uVar27 + (float)uVar29;
  VStack_14.z = fVar5;
  aVStack_8[0].z = fVar11;
  do {
    fVar9 = (float)uVar26 + (float)uVar28;
    fVar10 = (float)uVar22 + (float)uVar24;
    if (((index != 0) &&
        (fVar9 = (float)uVar27 + (float)uVar29, fVar10 = (float)uVar23 + (float)uVar25, index != 1)
        ) && (fVar9 = fVar5, fVar10 = fVar11, index != 2)) {
      uVar17 = func_?(&TypeInfo__System__IndexOutOfRangeException);
      pIVar18 = (IndexOutOfRangeException *)func_?(uVar17);
      pSVar19 = (String *)func_?(&StringLiteral_Invalid_Vector3_index_);
      mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
                (pIVar18,pSVar19,(MethodInfo *)0x0);
      uVar17 = func_?(&MethodInfo__UnityEngine__Vector3__get_Item_int_);
      FUN_?(pIVar18,uVar17);
      pcVar20 = (code *)swi(3);
      (*pcVar20)();
      return;
    }
    pVVar21 = &VStack_14;
    if (fVar9 < fVar10) {
      pVVar21 = aVStack_8;
    }
    fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                       (pVVar21,index,method);
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
              (&VStack_12,index,fVar9,in_R9);
    index = index + 1;
  } while (index < 3);
  fVar9 = (VStack_12.x - VStack_13.x) * _UNK_?;
  fVar5 = (VStack_12.y - VStack_13.y) * _UNK_?;
  fVar11 = (VStack_12.z - VStack_13.z) * _UNK_?;
  (this->fields).worldBounds.m_Extents.x = fVar9;
  (this->fields).worldBounds.m_Extents.y = fVar5;
  (this->fields).worldBounds.m_Extents.z = fVar11;
  (this->fields).worldBounds.m_Center.x = VStack_13.x + fVar9;
  (this->fields).worldBounds.m_Center.y = VStack_13.y + fVar5;
  (this->fields).worldBounds.m_Center.z = VStack_13.z + fVar11;
  return;
}


/* MVWorldObjectClientManager() */

void Assembly-CSharp.dll::MVWorldObjectClientManager::MVWorldObjectClientManager__ctor
               (MVWorldObjectClientManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MoveableController);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Queue<int>__Queue__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Queue<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVWorldObjectClientManager__WorldObjectMapping);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           FUN_?(
                        TypeInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>
                        );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Dictionary__
            );
  bVar2 = iRam_? != 0;
  (this->fields).worldObjects = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)pDVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pQVar7 = (Queue_1_System_Int32_ *)
           FUN_?(TypeInfo__System__Collections__Generic__Queue<int>);
  FUN_?(pQVar7);
  bVar2 = iRam_? != 0;
  (this->fields).pendingUngroupQueue = pQVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).pendingUngroupQueue >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           FUN_?(
                        TypeInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>
                        );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__Dictionary__
            );
  bVar2 = iRam_? != 0;
  (this->fields).woDestroyedEventSubscribers =
       (Dictionary_2_System_Int32_System_Action_2_Object_WorldObjectDestroyedEventArgs_ *)pDVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).woDestroyedEventSubscribers >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>__Dictionary__
            );
  bVar2 = iRam_? != 0;
  (this->fields).woCreatedEventSubscribers =
       (Dictionary_2_System_Type_System_Action_2_Object_WorldObjectCreatedEventArgs_ *)this_00;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).woCreatedEventSubscribers >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  (this->fields).rootGroupId = -1;
  this_01 = (MoveableController *)FUN_?(TypeInfo__MoveableController);
  MoveableController::MoveableController__ctor(this_01,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._MoveableController_k__BackingField = this_01;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._MoveableController_k__BackingField >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  this_02 = (MVWorldObjectClientManager_WorldObjectMapping *)
            FUN_?(TypeInfo__MVWorldObjectClientManager__WorldObjectMapping);
  MVWorldObjectClientManager+WorldObjectMapping::MVWorldObjectClientManager_WorldObjectMapping__ctor
            (this_02,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields).worldObjectMapping = this_02;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).worldObjectMapping >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  if (cRam_? == '\0') {
    FUN_?(&void_MethodInfo__Newtonsoft__Json__Utilities__AotHelper__EnsureList<int>__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Newtonsoft__Json__Utilities__AotHelper);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__RangeValidator__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__AntiCheat__RangeValidator<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__AntiCheat__ApplicationDesc__RegistryKey);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  plVar8 = (longlong *)FUN_?(TypeInfo__MV__WorldObject__AntiCheat__RangeValidator<int>);
  if (plVar8 == (longlong *)0x0) {
    FUN_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FUN_?(*plVar8 + 0x20);
  if (*(int *)&(TypeInfo__Newtonsoft__Json__Utilities__AotHelper->_1).field_0x1c == 0) {
    FUN_?();
  }
  Newtonsoft.Json.dll::Newtonsoft::Json::Utilities::AotHelper::AotHelper_EnsureList_1
            (void_MethodInfo__Newtonsoft__Json__Utilities__AotHelper__EnsureList<int>__);
  pIVar10 = (Il2CppClass *)TypeInfo__MV__WorldObject__AntiCheat__ApplicationDesc__RegistryKey;
  FUN_?();
  if (((((ApplicationDesc_RegistryKey__Class *)pIVar10)->_0).generic_class !=
       (Il2CppGenericClass *)0x0) &&
     (((((ApplicationDesc_RegistryKey__Class *)pIVar10)->_1).field_0x6d & 8) != 0)) {
    pIVar10 = (((ApplicationDesc_RegistryKey__Class *)pIVar10)->_0).element_class;
  }
  uVar11 = pIVar10->instance_size;
  if ((pIVar10->field_0x135 & 0x20) == 0) {
    puVar12 = (undefined8 *)FUN_?(uVar11);
    *puVar12 = pIVar10;
    puVar13 = puVar12 + 2;
    puVar12[1] = 0;
    if (pIVar10->instance_size < 0x80) {
      puVar14 = (undefined8 *)((longlong)puVar12 + (ulonglong)pIVar10->instance_size);
      uVar5 = (ulonglong)((longlong)puVar14 + (7 - (longlong)puVar13)) >> 3;
      if (puVar14 < puVar13) {
        uVar5 = 0;
      }
      if (uVar5 != 0) {
        FUN_?(puVar13,0,uVar5 << 3);
      }
    }
    else {
      FUN_?(puVar13,0,(ulonglong)pIVar10->instance_size - 0x10);
    }
  }
  else {
    if (pIVar10->gc_desc != (void *)0x0) {
      puVar12 = (undefined8 *)FUN_?(uVar11,pIVar10);
      goto code_?;
    }
    puVar12 = (undefined8 *)FUN_?(uVar11,1);
    *puVar12 = pIVar10;
  }
  LOCK();
  lRam_? = lRam_? + 1;
  UNLOCK();
code_?:
  if ((pIVar10->field_0x136 & 2) != 0) {
    FUN_?(puVar12,FUN_?);
  }
  if ((bRam_? & 0x80) != 0) {
    FUN_?(puVar12,pIVar10);
  }
  FUN_?(pIVar10);
  return;
}


/* Int32 get_Count() */

int32_t Assembly-CSharp.dll::MVWorldObjectClientManager::MVWorldObjectClientManager_get_Count
                  (MVWorldObjectClientManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).worldObjects;
  if (pDVar1 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    return (pDVar1->fields)._count - (pDVar1->fields)._freeCount;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* MVGroup get_RootGroup() */

MVGroup * Assembly-CSharp.dll::MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                    (MVWorldObjectClientManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGroup);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).worldObjects;
  if (this_00 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pMVar2 = (MVGroup *)(*pcVar1)();
    return pMVar2;
  }
  pMVar2 = (MVGroup *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
           Dictionary_2_System_Int32_System_Object__get_Item
                     ((Dictionary_2_System_Int32_System_Object_ *)this_00,(this->fields).rootGroupId
                      ,
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                     );
  if (pMVar2 != (MVGroup *)0x0) {
    bVar3 = (TypeInfo__MVGroup->_1).naturalAligment;
    if (((pMVar2->klass->_1).naturalAligment < bVar3) ||
       ((MVGroup__Class *)(pMVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
        TypeInfo__MVGroup)) {
      FUN_?(pMVar2,TypeInfo__MVGroup);
      pcVar1 = (code *)swi(3);
      pMVar2 = (MVGroup *)(*pcVar1)();
      return pMVar2;
    }
  }
  return pMVar2;
}


/* Bounds get_WorldBounds() */

Bounds * Assembly-CSharp.dll::MVWorldObjectClientManager::MVWorldObjectClientManager_get_WorldBounds
                   (Bounds *__return_storage_ptr__,MVWorldObjectClientManager *this,
                   MethodInfo *method)

{
  fVar1 = (this->fields).worldBounds.m_Center.y;
  uVar2 = *(undefined8 *)&(this->fields).worldBounds.m_Center.z;
  fVar3 = (this->fields).worldBounds.m_Extents.y;
  fVar4 = (this->fields).worldBounds.m_Extents.z;
  (__return_storage_ptr__->m_Center).x = (this->fields).worldBounds.m_Center.x;
  (__return_storage_ptr__->m_Center).y = fVar1;
  *(undefined8 *)&(__return_storage_ptr__->m_Center).z = uVar2;
  (__return_storage_ptr__->m_Extents).y = fVar3;
  (__return_storage_ptr__->m_Extents).z = fVar4;
  return __return_storage_ptr__;
}


/* Void set_RootGroup(MVGroup) */

void Assembly-CSharp.dll::MVWorldObjectClientManager::MVWorldObjectClientManager_set_RootGroup
               (MVWorldObjectClientManager *this,MVGroup *value,MethodInfo *method)

{
  if (value != (MVGroup *)0x0) {
    (this->fields).rootGroupId = (value->fields)._._.id;
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


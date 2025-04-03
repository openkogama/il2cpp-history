
/* Void CloneWorldObjectTree(MVWorldObjectClient, Boolean, Boolean, Boolean) */

void Assembly-CSharp.dll::MVWorldObjectClientManager::
     MVWorldObjectClientManager_CloneWorldObjectTree
               (MVWorldObjectClientManager *this,MVWorldObjectClient *root,bool localOwner,
               bool setAsPreviewItem,bool cloneToRootGroup,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame_OperationRequests *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_CreateBasicCloneData
              ((MVNetworkGame_OperationRequests *)root,_localOwner,setAsPreviewItem,cloneToRootGroup
               ,0,(MethodInfo *)0x0);
    piVar2 = (int *)(root->fields)._.itemId;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x110))();
      return;
    }
  }
  uVar3 = func_?(&stack0xfffffff4);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean Contains(Int32) */

bool Assembly-CSharp.dll::MVWorldObjectClientManager::MVWorldObjectClientManager_Contains
               (MVWorldObjectClientManager *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).worldObjects;
  if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)this_00,woID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                      );
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
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
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                   );
    func_?(&TypeRef__MVGroup);
    func_?(&TypeInfo__MVGroup);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                   );
    cRam_? = '\x01';
  }
  LStack_6._current.First = 0;
  LStack_6._current.Last = 0;
  this_00 = (this->fields).worldObjects;
  if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__TryGetValue
              ((Dictionary_2_System_Int32_System_Object_ *)this_00,id,(Object **)&LStack_6._current
               ,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
              );
    RVar7 = LStack_6._current;
    if ((LStack_6._current != (RegexCharClass_SingleRange)0x0) &&
       (ids != (HashSet_1_System_Int32_ *)0x0)) {
      method_00 = (MethodInfo *)&UNK_?;
      System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
      HashSet_1_System_Int32__System_Collections_Generic_ICollection_T__Add
                (ids,(((MVGroup__Fields *)((int)LStack_6._current + 8))->_)._.id,
                 MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
      lhs = mscorlib.dll::System::Object::Object_GetType((Object *)RVar7,(MethodInfo *)0x0);
      handle = TypeRef__MVGroup;
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        LStack_6._list =
             (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             TypeInfo__System__Type;
        func_?();
      }
      rhs = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                      ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
      bVar8 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
              UnsafeUtility_EnumEquals((Int32Enum__Enum)lhs,(Int32Enum__Enum)rhs,(MethodInfo *)0x0);
      if (bVar8 == 0) {
code_?:
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      bVar9 = (TypeInfo__MVGroup->_1).naturalAligment;
      if (((*(byte *)(*(int *)RVar7 + 0xb8) < bVar9) ||
          (*(MVGroup__Class **)(*(int *)(*(int *)RVar7 + 100) + -4 + (uint)bVar9 * 4) !=
           TypeInfo__MVGroup)) || (RVar7 == (RegexCharClass_SingleRange)0x0)) {
        func_?(RVar7,TypeInfo__MVGroup);
      }
      else {
        this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  MVGroup::MVGroup_get_Children((MVGroup *)RVar7,(MethodInfo *)0x0);
        if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
          pLVar10 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                             (&LStack_6,this_01,
                              MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                             );
          RVar7 = pLVar10->_current;
          LStack_6._version = 0;
          uStack_1 = 1;
          LStack_6._current = (RegexCharClass_SingleRange)&stack0xffffffc8;
          while( true ) {
            bVar8 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc8,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                              );
            if (bVar8 == 0) break;
            if (RVar7 == (RegexCharClass_SingleRange)0x0) goto code_?;
            MVWorldObjectClientManager_GetAllWoIds
                      (this,*(int32_t *)((int)RVar7 + 8),ids,(MethodInfo *)0x0);
          }
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&stack0xffffffc8,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                     ,method_00);
          goto code_?;
        }
      }
    }
  }
code_?:
  uVar11 = func_?();
  func_?(uVar11);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* List`1[MVWorldObjectClient] GetBlueprintWorldObjectsByType(Type) */

List_1_MVWorldObjectClient_ *
Assembly-CSharp.dll::MVWorldObjectClientManager::
MVWorldObjectClientManager_GetBlueprintWorldObjectsByType
          (MVWorldObjectClientManager *this,Type *type,MethodInfo *method)

{
  pLVar1 = (List_1_MVWorldObjectClient_ *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
    func_?(&StringLiteral_WorldObjectTypeSet_contains_id_w);
    cRam_? = '\x01';
  }
  this_01 = (List_1_MVWorldObjectClient_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
  this_00 = (this->fields).worldObjectMapping;
  if (this_00 != (MVWorldObjectClientManager_WorldObjectMapping *)0x0) {
    this_02 = (HashSet_1_System_UInt32_ *)
              MVWorldObjectClientManager+WorldObjectMapping::
              MVWorldObjectClientManager_WorldObjectMapping_GetWorldObjectTypeSet
                        (this_00,WorldObjectType__Enum_Blueprint,(MethodInfo *)0x0);
    if (this_02 == (HashSet_1_System_UInt32_ *)0x0) {
      *unaff_FS_OFFSET = pLVar1;
      return this_01;
    }
    System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
    HashSet_1_System_UInt32__GetEnumerator
              ((HashSet_1_T_Enumerator_System_UInt32_ *)&stack0xffffffd0,this_02,
               MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    method_00.rgctx_data = ((Il2CppRGCTXData *)&stack0xffffffc0).rgctx_data;
    while( true ) {
      while( true ) {
        this_04 = (HashSet_1_T_Enumerator_System_UInt32_ *)&stack0xffffffc0;
        bVar2 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                UInt32]::HashSet_1_T_Enumerator_System_UInt32__MoveNext
                          (this_04,
                           MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                          );
        if (bVar2 == 0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&stack0xffffffc0,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                     ,(MethodInfo *)method_00.methodMetadataHandle);
          *unaff_FS_OFFSET = pLVar1;
          return this_01;
        }
        pDVar3 = (this->fields).worldObjects;
        if (pDVar3 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) goto code_?;
        bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                          ((Dictionary_2_System_Int32_System_Single_ *)pDVar3,(int32_t)this_04,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                          );
        if (bVar2 != 0) break;
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        method_00.rgctx_data = (Il2CppRGCTXData *)&UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_WorldObjectTypeSet_contains_id_w,(MethodInfo *)0x0);
      }
      method_00 = (_union_154)(this->fields).worldObjects;
      if (method_00.rgctx_data == (Il2CppRGCTXData *)0x0) break;
      this_03 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__get_Item
                          ((Dictionary_2_System_Int32_System_Object_ *)
                           method_00.methodMetadataHandle,(int32_t)this_04,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                          );
      if (this_03 == (Object *)0x0) break;
      key = &UNK_?;
      mscorlib.dll::System::Object::Object_GetType(this_03,(MethodInfo *)0x0);
      if (type == (Type *)0x0) break;
      pLVar1 = (List_1_MVWorldObjectClient_ *)0x7b;
      cVar4 = func_?();
      if (cVar4 != '\0') {
        pDVar3 = (this->fields).worldObjects;
        if (pDVar3 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) break;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__get_Item
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,(int32_t)key,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                  );
        if (this_01 == (List_1_MVWorldObjectClient_ *)0x0) break;
        pLVar1 = this_01;
        func_?();
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  pLVar1 = (List_1_MVWorldObjectClient_ *)(*pcVar5)();
  return pLVar1;
}


/* Object GetEnabledMonoBehaviourHighestInHierarchy[Object](GameObject) */

Object * Assembly-CSharp.dll::MVWorldObjectClientManager::
         MVWorldObjectClientManager_GetEnabledMonoBehaviourHighestInHierarchy
                   (GameObject *gameObject,MethodInfo *method)

{
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(&TypeInfo__UnityEngine__Object);
    if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
      func_?(method);
    }
  }
  if (gameObject != (GameObject *)0x0) {
    this = (Behaviour *)
           UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                     (gameObject,((method->field7_0x1c).rgctx_data)->method);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)this,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if (this == (Behaviour *)0x0) goto code_?;
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                        (this,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        return (Object *)this;
      }
    }
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (gameObject,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                         (pTVar2,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)pTVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        return (Object *)0x0;
      }
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (gameObject,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                           (pTVar2,(MethodInfo *)0x0);
        if (pTVar2 != (Transform *)0x0) {
          gameObject_00 =
               UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pTVar2,(MethodInfo *)0x0);
          pOVar3 = MVWorldObjectClientManager_GetEnabledMonoBehaviourHighestInHierarchy
                             (gameObject_00,(method->field7_0x1c).rgctx_data[2].method);
          return pOVar3;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  pOVar3 = (Object *)(*pcVar4)();
  return pOVar3;
}


/* MVWorldObjectClient GetMVObject(Transform) */

MVWorldObjectClient *
Assembly-CSharp.dll::MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
          (Transform *t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  pTVar2 = t;
  if (((t != (Transform *)0x0) &&
      (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)t,(MethodInfo *)0x0), this_01 != (GameObject *)0x0)) &&
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
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_int>__TryGetValue_int__System__Int32__
                       );
        cRam_? = '\x01';
      }
      this = (Dictionary_2_System_Int32_System_Single_ *)
             (pMVar3->fields).gameObjectIdToWorldObjectIdMap;
      if (this != (Dictionary_2_System_Int32_System_Single_ *)0x0) {
        bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Single]::Dictionary_2_System_Int32_System_Single__TryGetValue
                          (this,(int32_t)key,(float *)&t,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_int>__TryGetValue_int__System__Int32__
                          );
        if (bVar4 != 0) {
          this_00 = (pMVar1->fields).worldObjects;
          if (this_00 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0)
          goto code_?;
          pMVar5 = (MVWorldObjectClient *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__get_Item
                             ((Dictionary_2_System_Int32_System_Object_ *)this_00,(int32_t)t,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                             );
          if (pMVar5 != (MVWorldObjectClient *)0x0) {
            return pMVar5;
          }
        }
        x = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                      (pTVar2,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
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


/* Object GetSingletonWorldObject[Object]() */

Object * Assembly-CSharp.dll::MVWorldObjectClientManager::
         MVWorldObjectClientManager_GetSingletonWorldObject
                   (MVWorldObjectClientManager *this,MethodInfo *method)

{
  pMVar1 = method;
  if (((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) &&
     (func_?(&TypeInfo__System__Type),
     (pMVar1->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0)) {
    func_?(pMVar1);
  }
  method = (MethodInfo *)0x13;
  this_00 = (this->fields).worldObjectMapping;
  handle = *(pMVar1->field7_0x1c).rgctx_data;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  type = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                   ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager_WorldObjectMapping *)0x0) {
    bVar2 = MVWorldObjectClientManager+WorldObjectMapping::
            MVWorldObjectClientManager_WorldObjectMapping_TryGetWorldObjectTypeFromObjectType
                      (this_00,type,(WorldObjectType__Enum *)&method,(MethodInfo *)0x0);
    if ((bVar2 == 0) ||
       (pMVar3 = MVWorldObjectClientManager_GetSingletonWorldObjectByType
                           ((MVWorldObjectClientManager *)0x0,(WorldObjectType__Enum)method,
                            (MethodInfo *)0x0), pMVar3 == (MVWorldObjectClient *)0x0)) {
      pOVar4 = (Object *)0x0;
    }
    else {
      handle = (Il2CppRGCTXData)(pMVar1->field7_0x1c).rgctx_data[1].klass;
      if (((uint)(handle.klass)->vtable[0].methodPtr & 0x100) == 0) {
        IStack5 = handle;
        handle.rgctxDataDummy = (void *)func_?();
      }
      method = (MethodInfo *)&UNK_?;
      pMStack6 = pMVar3;
      IStack5 = handle;
      pOVar4 = (Object *)func_?();
      if (pOVar4 == (Object *)0x0) goto code_?;
    }
    return pOVar4;
  }
  func_?();
  pMVar3 = (MVWorldObjectClient *)0x0;
code_?:
  method = (MethodInfo *)&UNK_?;
  pMStack6 = pMVar3;
  IStack5 = handle;
  func_?();
  pcVar7 = (code *)swi(3);
  pOVar4 = (Object *)(*pcVar7)();
  return pOVar4;
}


/* MVWorldObjectClient GetSingletonWorldObjectByType(WorldObjectType) */

MVWorldObjectClient *
Assembly-CSharp.dll::MVWorldObjectClientManager::
MVWorldObjectClientManager_GetSingletonWorldObjectByType
          (MVWorldObjectClientManager *this,WorldObjectType__Enum worldObjectType,MethodInfo *method
          )

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&TypeInfo__MV__WorldObject__WorldObjectType);
    func_?(&StringLiteral_Singleton_of_worldObject_of_type);
    func_?(&StringLiteral_WorldObjectType__0__is_not_a_sin);
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            MVWorldObjectClientManager_GetWorldObjectsByType(this,worldObjectType,(MethodInfo *)0x0)
  ;
  if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    pMVar2 = (MVWorldObjectClient *)(*pcVar1)();
    return pMVar2;
  }
  iVar3 = (this_00->fields)._size;
  if (1 < iVar3) {
    pOVar4 = (Object *)func_?(TypeInfo__MV__WorldObject__WorldObjectType);
    arg1 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff8);
    pSVar5 = mscorlib.dll::System::String::String_Format_1
                       (StringLiteral_WorldObjectType__0__is_not_a_sin,pOVar4,arg1,(MethodInfo *)0x0
                       );
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)pSVar5,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)0x0;
  }
  if (iVar3 != 0) {
    RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (this_00,0,
                       MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                      );
    return (MVWorldObjectClient *)RVar6;
  }
  pOVar4 = (Object *)func_?(TypeInfo__MV__WorldObject__WorldObjectType);
  pSVar5 = mscorlib.dll::System::String::String_Format
                     (StringLiteral_Singleton_of_worldObject_of_type,pOVar4,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
            ((Object *)pSVar5,(MethodInfo *)0x0);
  return (MVWorldObjectClient *)0x0;
}


/* WorldObjectClientRef`1[System.Object] GetSingletonWorldObjectRef[Object]() */

WorldObjectClientRef_1_System_Object_ *
Assembly-CSharp.dll::MVWorldObjectClientManager::
MVWorldObjectClientManager_GetSingletonWorldObjectRef
          (MVWorldObjectClientManager *this,MethodInfo *method)

{
  pMVar1 = method;
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(&TypeInfo__System__Type);
    if ((pMVar1->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
      func_?(pMVar1);
    }
  }
  method = (MethodInfo *)0x13;
  this_00 = (this->fields).worldObjectMapping;
  handle = *(pMVar1->field7_0x1c).rgctx_data;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  type = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                   ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager_WorldObjectMapping *)0x0) {
    bVar2 = MVWorldObjectClientManager+WorldObjectMapping::
            MVWorldObjectClientManager_WorldObjectMapping_TryGetWorldObjectTypeFromObjectType
                      (this_00,type,(WorldObjectType__Enum *)&method,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pMVar3 = MVWorldObjectClientManager_GetSingletonWorldObjectByType
                         ((MVWorldObjectClientManager *)0x0,(WorldObjectType__Enum)method,
                          (MethodInfo *)0x0);
      if (pMVar3 != (MVWorldObjectClient *)0x0) {
        woId = (MethodInfo *)(pMVar3->fields)._.id;
        pIStack4 = (pMVar1->field7_0x1c).rgctx_data[1].klass;
        if (((uint)pIStack4->vtable[0].methodPtr & 0x100) == 0) {
          pIStack4 = (Il2CppClass *)func_?();
        }
        this_01 = (MVWorldObjectClientManager_WOCMWorldObjectClientRef_1_System_Object_ *)
                  func_?();
        method = woId;
        MVWorldObjectClientManager+WOCMWorldObjectClientRef`1[System::Object]::
        MVWorldObjectClientManager_WOCMWorldObjectClientRef_1_System_Object___ctor
                  (this_01,(int32_t)woId,(pMVar1->field7_0x1c).rgctx_data[2].method);
        return (WorldObjectClientRef_1_System_Object_ *)this_01;
      }
    }
    return (WorldObjectClientRef_1_System_Object_ *)0x0;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pWVar6 = (WorldObjectClientRef_1_System_Object_ *)(*pcVar5)();
  return pWVar6;
}


/* WorldObjectType GetSpawnPointTypeForNoneTeam() */

WorldObjectType__Enum
Assembly-CSharp.dll::MVWorldObjectClientManager::
MVWorldObjectClientManager_GetSpawnPointTypeForNoneTeam
          (MVWorldObjectClientManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                   );
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
        pLVar1 = MVWorldObjectClientManager_GetWorldObjectsByType
                           (this,WorldObjectType__Enum_SpawnPointYellow,(MethodInfo *)0x0);
        if (pLVar1 != (List_1_MVWorldObjectClient_ *)0x0) {
          WVar2 = WorldObjectType__Enum_SpawnPointYellow;
          if ((pLVar1->fields)._size < 1) {
            WVar2 = WorldObjectType__Enum_SpawnPoint;
          }
          return WVar2;
        }
      }
    }
  }
  func_?();
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
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb0;
  puVar5 = &stack0xffffffb0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                   );
    in_stack_6 = &StringLiteral_InsertedByProfileID_;
    func_?();
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  IStack_7.m_value = 0;
  if ((koGaMaPackageClient != (KoGaMaPackageClient *)0x0) &&
     (this_00 = (koGaMaPackageClient->fields).worldObjects,
     this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0)) {
    pOStack_8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                            (koGaMaPackageClient->fields).worldObjectRoot,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                           );
    this_01 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)(this->fields).worldObjects;
    if (this_01 !=
        (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      method_00 = (MethodInfo *)&UNK_?;
      this_02 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                          (this_01,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                          );
      if (this_02 !=
          (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
           *)0x0) {
        pDVar9 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
                 StyleSheetCache+SheetHandleKey,System::Object]::
                 Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                           (&DStack_10,this_02,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                           );
        pOVar11 = pDVar9->_currentValue;
        DStack_10._version = 0;
        uStack_1 = 1;
        DStack_10._currentValue = (Object *)&stack0xffffffbc;
        do {
          do {
            do {
              do {
                bVar12 = mscorlib.dll::System::Collections::Generic::
                        Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                        UInt32,System::Object]::
                        Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                                  ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                                    *)&stack0xffffffbc,
                                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
                                  );
                if (bVar12 == 0) {
                  uStack_1 = 0xffffffff;
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                            ((Object *)&stack0xffffffbc,
                             (ExceptionArgument__Enum)
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
                             ,(MethodInfo *)in_stack_6);
                  *unaff_FS_OFFSET = uStack_3;
                  return 0;
                }
                if (pOVar11 == (Object *)0x0) goto code_?;
              } while (pOVar11[1].monitor != (MonitorData *)(this->fields).rootGroupId);
              if (pOStack_8 == (Object *)0x0) goto code_?;
            } while ((pOVar11[2].klass != pOStack_8[2].klass) ||
                    (pOVar11[10].monitor != pOStack_8[10].monitor));
            IStack_7.m_value = 0;
            cVar13 = func_?(0x2e,pOVar11,pOStack_8,koGaMaPackageClient,&IStack_7);
          } while (cVar13 == '\0');
          iStack_14 = IStack_7.m_value;
          this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (this_03 == (MVNetworkGame *)0x0) goto code_?;
          pMVar15 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_03,(MethodInfo *)0x0);
          if (pMVar15 == (MVLocalPlayer *)0x0) goto code_?;
        } while (iStack_14 != (pMVar15->fields)._._ProfileID_k__BackingField);
        pSVar16 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_7,(MethodInfo *)0x0);
        pSVar16 = mscorlib.dll::System::String::String_Concat_3
                           (StringLiteral_InsertedByProfileID_,pSVar16,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)pSVar16,(MethodInfo *)0x0);
        if (pOVar11 != (Object *)0x0) {
          uStack_1 = 0xffffffff;
          *worldObjectId = (int32_t)pOVar11[1].klass;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&stack0xffffffbc,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = uStack_3;
          return 1;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  bVar12 = (*pcVar17)();
  return bVar12;
}


/* MVWorldObjectClient GetValidSpawnPoint() */

MVWorldObjectClient *
Assembly-CSharp.dll::MVWorldObjectClientManager::MVWorldObjectClientManager_GetValidSpawnPoint
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&StringLiteral_No_valid_SpawnPoint_on_planet___);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    this = (pMVar1->fields).teamManager;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame *)0x0) {
      pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
      if ((pMVar2 != (MVLocalPlayer *)0x0) && (this != (MVTeamManager *)0x0)) {
        this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  MVTeamManager::MVTeamManager_GetOnlySpawnPointsForTeam
                            (this,(pMVar2->fields)._._Team_k__BackingField,(MethodInfo *)0x0);
        if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
          maxExclusive = (this_00->fields)._size;
          if (maxExclusive < 1) {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)StringLiteral_No_valid_SpawnPoint_on_planet___,(MethodInfo *)0x0);
            return (MVWorldObjectClient *)0x0;
          }
          index = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
                            (0,maxExclusive,(MethodInfo *)0x0);
          RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_00,index,
                             MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                            );
          return (MVWorldObjectClient *)RVar3;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pMVar5 = (MVWorldObjectClient *)(*pcVar4)();
  return pMVar5;
}


/* Int32 GetWoIDHighestInHierarchyWithComponent[Object](Int32) */

int32_t Assembly-CSharp.dll::MVWorldObjectClientManager::
        MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent
                  (MVWorldObjectClientManager *this,int32_t woId,MethodInfo *method)

{
  pMVar1 = method;
  if (((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) &&
     (func_?(&TypeInfo__UnityEngine__Object),
     (method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0)) {
    func_?(method);
  }
  method = (MethodInfo *)0xffffffff;
  do {
    pMVar2 = MVWorldObjectClientManager_GetWorldObject(this,woId,(MethodInfo *)0x0);
    if ((pMVar2 == (MVWorldObject *)0x0) ||
       (this_00 = pMVar2[1].fields.inputLinkRefs, this_00 == (List_1_MV_WorldObject_Link_ *)0x0)) {
      func_?();
      pcVar3 = (code *)swi(3);
      iVar4 = (*pcVar3)();
      return iVar4;
    }
    x = (Object_1 *)
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                  ((GameObject *)this_00,((pMVar1->field7_0x1c).rgctx_data)->method);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      (x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar5 != 0) {
      method = (MethodInfo *)(pMVar2->fields).id;
    }
    woId = (pMVar2->fields).groupId;
  } while (woId != -1);
  return (int32_t)method;
}


/* Int32 GetWoIDWithLocalOwnerHighestInHierarchy(Int32) */

int32_t Assembly-CSharp.dll::MVWorldObjectClientManager::
        MVWorldObjectClientManager_GetWoIDWithLocalOwnerHighestInHierarchy
                  (MVWorldObjectClientManager *this,int32_t woID,MethodInfo *method)

{
  pOVar1 = (Object__Class *)0xffffffff;
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
    if (pMVar2 != (MVLocalPlayer *)0x0) {
      pMVar3 = (MonitorData *)(pMVar2->fields)._._ActorNr_k__BackingField;
      while( true ) {
        if (cRam_? == '\0') {
          func_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                         );
          cRam_? = '\x01';
        }
        pOStack_4 = (Object *)0x0;
        this_00 = (this->fields).worldObjects;
        if (this_00 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) break;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__TryGetValue
                  ((Dictionary_2_System_Int32_System_Object_ *)this_00,woID,&pOStack_4,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                  );
        if (pOStack_4 == (Object *)0x0) break;
        if (pOStack_4[4].monitor == pMVar3) {
          pOVar1 = pOStack_4[1].klass;
        }
        woID = (int32_t)pOStack_4[1].monitor;
        if ((MonitorData *)woID == (MonitorData *)0xffffffff) {
          return (int32_t)pOVar1;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* MVWorldObject GetWorldObject(Int32) */

MVWorldObject *
Assembly-CSharp.dll::MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
          (MVWorldObjectClientManager *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                   );
    cRam_? = '\x01';
  }
  pMStack_1 = (MVWorldObject *)0x0;
  this_00 = (this->fields).worldObjects;
  if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__TryGetValue
              ((Dictionary_2_System_Int32_System_Object_ *)this_00,id,(Object **)&pMStack_1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
              );
    return pMStack_1;
  }
  func_?();
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  key = 0.0;
  pMVar1 = (this->fields).worldObjectMapping;
  if (pMVar1 != (MVWorldObjectClientManager_WorldObjectMapping *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_int>__TryGetValue_int__System__Int32__
                     );
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Int32_System_Single_ *)
              (pMVar1->fields).gameObjectIdToWorldObjectIdMap;
    if (this_00 != (Dictionary_2_System_Int32_System_Single_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]
              ::Dictionary_2_System_Int32_System_Single__TryGetValue
                        (this_00,goId,(float *)&stack0xfffffff8,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_int>__TryGetValue_int__System__Int32__
                        );
      if (bVar2 == 0) {
        return (MVWorldObjectClient *)0x0;
      }
      this_01 = (this->fields).worldObjects;
      if (this_01 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
        pMVar3 = (MVWorldObjectClient *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)this_01,(int32_t)key,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                           );
        return pMVar3;
      }
    }
  }
  func_?();
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
    func_?(&TypeInfo__MVWorldObjectClientManager__WOCMWorldObjectClientRef);
    cRam_? = '\x01';
  }
  this_00 = (WorldObjectClientRef *)
            func_?(TypeInfo__MVWorldObjectClientManager__WOCMWorldObjectClientRef);
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__WorldObjectClientRef_int_
                   );
    cRam_? = '\x01';
  }
  WorldObjectClientRef`1[System::Object]::WorldObjectClientRef_1_System_Object___ctor
            ((WorldObjectClientRef_1_System_Object_ *)this_00,id,
             MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__WorldObjectClientRef_int_);
  return this_00;
}


/* WorldObjectClientRef GetWorldObjectClientRefNullRef() */

WorldObjectClientRef *
Assembly-CSharp.dll::MVWorldObjectClientManager::
MVWorldObjectClientManager_GetWorldObjectClientRefNullRef(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVWorldObjectClientManager__WOCMWorldObjectClientRef);
    cRam_? = '\x01';
  }
  this = (WorldObjectClientRef *)
         func_?(TypeInfo__MVWorldObjectClientManager__WOCMWorldObjectClientRef);
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__WorldObjectClientRef_int_
                   );
    cRam_? = '\x01';
  }
  WorldObjectClientRef`1[System::Object]::WorldObjectClientRef_1_System_Object___ctor
            ((WorldObjectClientRef_1_System_Object_ *)this,-1,
             MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__WorldObjectClientRef_int_);
  return this;
}


/* WorldObjectClientRef`1[MVWorldObjectClient] GetWorldObjectClientRefNullRefTyped() */

WorldObjectClientRef_1_MVWorldObjectClient_ *
Assembly-CSharp.dll::MVWorldObjectClientManager::
MVWorldObjectClientManager_GetWorldObjectClientRefNullRefTyped(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__MVWorldObjectClientManager__WOCMWorldObjectClientRef<MVWorldObjectClient>__WOCMWorldObjectClientRef_int_
                   );
    func_?(&
                    TypeInfo__MVWorldObjectClientManager__WOCMWorldObjectClientRef<MVWorldObjectClient>
                   );
    cRam_? = '\x01';
  }
  this = (MVWorldObjectClientManager_WOCMWorldObjectClientRef_1_System_Object_ *)
         func_?(
                        TypeInfo__MVWorldObjectClientManager__WOCMWorldObjectClientRef<MVWorldObjectClient>
                        );
  MVWorldObjectClientManager+WOCMWorldObjectClientRef`1[System::Object]::
  MVWorldObjectClientManager_WOCMWorldObjectClientRef_1_System_Object___ctor
            (this,-1,
             MethodInfo__MVWorldObjectClientManager__WOCMWorldObjectClientRef<MVWorldObjectClient>__WOCMWorldObjectClientRef_int_
            );
  return (WorldObjectClientRef_1_MVWorldObjectClient_ *)this;
}


/* WorldObjectClientRef`1[System.Object] GetWorldObjectClientRef[Object](Int32) */

WorldObjectClientRef_1_System_Object_ *
Assembly-CSharp.dll::MVWorldObjectClientManager::
MVWorldObjectClientManager_GetWorldObjectClientRef_1
          (MVWorldObjectClientManager *this,int32_t id,MethodInfo *method)

{
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(method);
  }
  pIVar1 = ((method->field7_0x1c).rgctx_data)->klass;
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  this_00 = (MVWorldObjectClientManager_WOCMWorldObjectClientRef_1_System_Object_ *)
            func_?(pIVar1);
  MVWorldObjectClientManager+WOCMWorldObjectClientRef`1[System::Object]::
  MVWorldObjectClientManager_WOCMWorldObjectClientRef_1_System_Object___ctor
            (this_00,id,(method->field7_0x1c).rgctx_data[1].method);
  return (WorldObjectClientRef_1_System_Object_ *)this_00;
}


/* MVWorldObjectClient GetWorldObjectClientRoot(Int32) */

MVWorldObjectClient *
Assembly-CSharp.dll::MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRoot
          (MVWorldObjectClientManager *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Group_id_is__1__This_is_the_worl);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                   );
    cRam_? = '\x01';
  }
  pMVar1 = (MVWorldObjectClient *)0x0;
  this_00 = (this->fields).worldObjects;
  if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__TryGetValue
              ((Dictionary_2_System_Int32_System_Object_ *)this_00,id,(Object **)&stack0xfffffff8,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
              );
    if (pMVar1 != (MVWorldObjectClient *)0x0) {
      id_00 = (pMVar1->fields)._.groupId;
      if (id_00 == -1) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_Group_id_is__1__This_is_the_worl,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)0x0;
      }
      if (id_00 != (this->fields).rootGroupId) {
        pMVar1 = MVWorldObjectClientManager_GetWorldObjectClientRoot(this,id_00,(MethodInfo *)0x0);
        return pMVar1;
      }
      return pMVar1;
    }
  }
  func_?();
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
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields).worldObjects;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    source = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
             StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
             Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                       (this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                       );
    pMVar1 = (MVWorldObjectClient *)
             System.Core.dll::System::Linq::Enumerable::Enumerable_FirstOrDefault_3
                       ((IEnumerable_1_System_Object_ *)source,(Func_2_Object_Boolean_ *)predicate,
                        MVWorldObjectClient_MethodInfo__System__Linq__Enumerable__FirstOrDefault<MVWorldObjectClient>_System__Collections__Generic__IEnumerable<MVWorldObjectClient>__System__Func<MVWorldObjectClient,_bool>_
                       );
    return pMVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pMVar1 = (MVWorldObjectClient *)(*pcVar3)();
  return pMVar1;
}


/* Object GetWorldObjectClient[Object](Int32) */

Object * Assembly-CSharp.dll::MVWorldObjectClientManager::
         MVWorldObjectClientManager_GetWorldObjectClient_1
                   (MVWorldObjectClientManager *this,int32_t id,MethodInfo *method)

{
  pMVar1 = method;
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                   );
    if ((pMVar1->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
      func_?(pMVar1);
    }
  }
  method = (MethodInfo *)0x0;
  this_00 = (this->fields).worldObjects;
  if (this_00 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    func_?();
  }
  else {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__TryGetValue
              ((Dictionary_2_System_Int32_System_Object_ *)this_00,id,(Object **)&method,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
              );
    unaff_EDI = method;
    if (((uint)((pMVar1->field7_0x1c).rgctx_data)->klass->vtable[0].methodPtr & 0x100) == 0) {
      func_?();
    }
    if (unaff_EDI == (MethodInfo *)0x0) {
      return (Object *)0x0;
    }
    pOVar2 = (Object *)func_?(unaff_EDI);
    if (pOVar2 != (Object *)0x0) {
      return pOVar2;
    }
  }
  func_?(unaff_EDI);
  pcVar3 = (code *)swi(3);
  pOVar2 = (Object *)(*pcVar3)();
  return pOVar2;
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
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields).worldObjects;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    source = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
             StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
             Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                       (this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                       );
    pIVar1 = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_2
                       ((IEnumerable_1_System_Object_ *)source,(Func_2_Object_Boolean_ *)predicate,
                        System__Collections__Generic__IEnumerable<MVWorldObjectClient>_MethodInfo__System__Linq__Enumerable__Where<MVWorldObjectClient>_System__Collections__Generic__IEnumerable<MVWorldObjectClient>__System__Func<MVWorldObjectClient,_bool>_
                       );
    return (IEnumerable_1_MVWorldObjectClient_ *)pIVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pIVar4 = (IEnumerable_1_MVWorldObjectClient_ *)(*pcVar3)();
  return pIVar4;
}


/* List`1[MVWorldObjectClient] GetWorldObjectsByType(WorldObjectType) */

List_1_MVWorldObjectClient_ *
Assembly-CSharp.dll::MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
          (MVWorldObjectClientManager *this,WorldObjectType__Enum type,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  pMStack_2 = (MethodInfo *)&DAT_?;
  pOStack_3 = (Object *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pOStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
    func_?(&StringLiteral_WorldObjectTypeSet_contains_id_w);
    cRam_? = '\x01';
  }
  pLVar4 = (List_1_MVWorldObjectClient_ *)
           func_?(TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar4,
             MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
  this_00 = (this->fields).worldObjectMapping;
  if (this_00 != (MVWorldObjectClientManager_WorldObjectMapping *)0x0) {
    this_02 = (HashSet_1_System_UInt32_ *)
              MVWorldObjectClientManager+WorldObjectMapping::
              MVWorldObjectClientManager_WorldObjectMapping_GetWorldObjectTypeSet
                        (this_00,type,(MethodInfo *)0x0);
    if (this_02 == (HashSet_1_System_UInt32_ *)0x0) {
      *unaff_FS_OFFSET = pOStack_3;
      return pLVar4;
    }
    System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
    HashSet_1_System_UInt32__GetEnumerator
              ((HashSet_1_T_Enumerator_System_UInt32_ *)&stack0xffffffd4,this_02,
               MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    uStack_1 = 1;
    method_00.rgctx_data = ((Il2CppRGCTXData *)&stack0xffffffc4).rgctx_data;
    while( true ) {
      this_03 = (HashSet_1_T_Enumerator_System_UInt32_ *)&stack0xffffffc4;
      bVar5 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::UInt32]
              ::HashSet_1_T_Enumerator_System_UInt32__MoveNext
                        (this_03,
                         MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                        );
      if (bVar5 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&stack0xffffffc4,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                   ,(MethodInfo *)method_00.methodMetadataHandle);
        *unaff_FS_OFFSET = pOStack_3;
        return pLVar4;
      }
      this_01 = (this->fields).worldObjects;
      if (this_01 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) break;
      bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]
              ::Dictionary_2_System_Int32_System_Single__ContainsKey
                        ((Dictionary_2_System_Int32_System_Single_ *)this_01,(int32_t)this_03,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                        );
      if (bVar5 == 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        method_00.rgctx_data = (Il2CppRGCTXData *)&UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_WorldObjectTypeSet_contains_id_w,(MethodInfo *)0x0);
      }
      else {
        method_00 = (_union_154)(this->fields).worldObjects;
        if (method_00.rgctx_data == (Il2CppRGCTXData *)0x0) break;
        pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)
                            method_00.methodMetadataHandle,(int32_t)this_03,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                           );
        if (pLVar4 == (List_1_MVWorldObjectClient_ *)0x0) break;
        pMStack_2 = 
        MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
        ;
        pOStack_3 = pOVar6;
        func_?();
      }
    }
  }
  pMStack_2 = (MethodInfo *)func_?();
  func_?();
  pcVar7 = (code *)swi(3);
  pLVar4 = (List_1_MVWorldObjectClient_ *)(*pcVar7)();
  return pLVar4;
}


/* Boolean IsType(Int32, WorldObjectType) */

bool Assembly-CSharp.dll::MVWorldObjectClientManager::MVWorldObjectClientManager_IsType
               (MVWorldObjectClientManager *this,int32_t woID,WorldObjectType__Enum worldObjectType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&StringLiteral_Failed_to_get_worldObject);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).worldObjects;
  if (pDVar1 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)pDVar1,woID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                      );
    if (bVar2 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_Failed_to_get_worldObject,(MethodInfo *)0x0);
      return 0;
    }
    pDVar1 = (this->fields).worldObjects;
    if (pDVar1 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,woID,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                         );
      if (pOVar3 != (Object *)0x0) {
        return pOVar3[10].monitor == (MonitorData *)worldObjectType;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar2 = (*pcVar4)();
  return bVar2;
}


/* Void SubscribeWOCreatedEvent(Type, Action`2[Object,WorldObjectCreatedEventArgs]) */

void Assembly-CSharp.dll::MVWorldObjectClientManager::
     MVWorldObjectClientManager_SubscribeWOCreatedEvent
               (MVWorldObjectClientManager *this,Type *type,
               Action_2_Object_WorldObjectCreatedEventArgs_ *woCreatedEventHandler,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<System::Object,_WorldObjectCreatedEventArgs>);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>__TryGetValue_System__Type__System__Action<System::Object,_WorldObjectCreatedEventArgs>__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>__get_Item_System__Type_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>__set_Item_System__Type__System__Action<System::Object,_WorldObjectCreatedEventArgs>_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).woCreatedEventSubscribers;
  if (this_00 != (Dictionary_2_System_Type_System_Action_2_Object_WorldObjectCreatedEventArgs_ *)0x0
     ) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)type,
                       (Object **)&stack0xfffffff8,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>__TryGetValue_System__Type__System__Action<System::Object,_WorldObjectCreatedEventArgs>__
                      );
    this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
              (this->fields).woCreatedEventSubscribers;
    if (bVar1 == 0) {
      if (this_01 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  ((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)type,
                   (Object *)woCreatedEventHandler,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>__set_Item_System__Type__System__Action<System::Object,_WorldObjectCreatedEventArgs>_
                  );
        return;
      }
    }
    else if (this_01 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
      a = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::TextureId]::
          Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                    (this_01,(Object *)type,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>__get_Item_System__Type_
                    );
      pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)a.m_Index,(Delegate *)woCreatedEventHandler,(MethodInfo *)0x0)
      ;
      method_00 = 
      MethodInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>__set_Item_System__Type__System__Action<System::Object,_WorldObjectCreatedEventArgs>_
      ;
      if (pDVar2 == (Delegate *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  ((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)type,(Object *)0x0
                   ,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>__set_Item_System__Type__System__Action<System::Object,_WorldObjectCreatedEventArgs>_
                  );
        return;
      }
      value = (Object *)func_?();
      if (value != (Object *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  ((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)type,value,
                   method_00);
        return;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
    func_?(&TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__TryGetValue_int__System__Action<System::Object,_WorldObjectDestroyedEventArgs>__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__set_Item_int__System__Action<System::Object,_WorldObjectDestroyedEventArgs>_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).worldObjects;
  if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__TryGetValue
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,woID,
                       (Object **)&stack0xfffffff8,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                      );
    if (bVar1 == 0) {
      return;
    }
    pDVar2 = (this->fields).woDestroyedEventSubscribers;
    if (pDVar2 != (Dictionary_2_System_Int32_System_Action_2_Object_WorldObjectDestroyedEventArgs_ *
                  )0x0) {
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__TryGetValue
                        ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,woID,
                         (Object **)&stack0xfffffff4,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__TryGetValue_int__System__Action<System::Object,_WorldObjectDestroyedEventArgs>__
                        );
      pDVar2 = (this->fields).woDestroyedEventSubscribers;
      if (bVar1 == 0) {
        if (pDVar2 != (Dictionary_2_System_Int32_System_Action_2_Object_WorldObjectDestroyedEventArgs_
                       *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__set_Item
                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,woID,
                     (Object *)woDestroyedEventHandler,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__set_Item_int__System__Action<System::Object,_WorldObjectDestroyedEventArgs>_
                    );
          return;
        }
      }
      else if (pDVar2 != (Dictionary_2_System_Int32_System_Action_2_Object_WorldObjectDestroyedEventArgs_
                          *)0x0) {
        pDVar3 = (Delegate *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,woID,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__get_Item_int_
                           );
        pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                           (pDVar3,(Delegate *)woDestroyedEventHandler,(MethodInfo *)0x0);
        method_00 = 
        MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__set_Item_int__System__Action<System::Object,_WorldObjectDestroyedEventArgs>_
        ;
        if (pDVar3 == (Delegate *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__set_Item
                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,woID,(Object *)0x0,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__set_Item_int__System__Action<System::Object,_WorldObjectDestroyedEventArgs>_
                    );
          return;
        }
        value = (Object *)func_?();
        if (value != (Object *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__set_Item
                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,woID,value,method_00);
          return;
        }
        goto code_?;
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


/* Boolean TryGetWorldObject(Int32, MVWorldObject ByRef) */

bool Assembly-CSharp.dll::MVWorldObjectClientManager::MVWorldObjectClientManager_TryGetWorldObject
               (MVWorldObjectClientManager *this,int32_t id,MVWorldObject **worldObject,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                   );
    cRam_? = '\x01';
  }
  pMStack_1 = (MVWorldObject *)0x0;
  this_00 = (this->fields).worldObjects;
  if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__TryGetValue
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,id,(Object **)&pMStack_1,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                      );
    *worldObject = pMStack_1;
    func_?(worldObject,pMStack_1);
    return bVar2;
  }
  func_?();
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
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).worldObjects;
  if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)this_00,worldObjectId,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_trying_to_unregister_none_existi,(MethodInfo *)0x0);
      return 0;
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UnregisterWorldObject
                (this_01,0,(MethodInfo *)0x0);
      return 1;
    }
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
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
    func_?(&TypeInfo__System__Action<System::Object,_WorldObjectCreatedEventArgs>);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>__TryGetValue_System__Type__System__Action<System::Object,_WorldObjectCreatedEventArgs>__
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).woCreatedEventSubscribers;
  if (this_00 != (Dictionary_2_System_Type_System_Action_2_Object_WorldObjectCreatedEventArgs_ *)0x0
     ) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)type,
                       (Object **)&stack0xfffffff8,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>__TryGetValue_System__Type__System__Action<System::Object,_WorldObjectCreatedEventArgs>__
                      );
    if (((bVar1 == 0) ||
        (pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                            ((Delegate *)woCreatedEventHandler,(Delegate *)woCreatedEventHandler,
                             (MethodInfo *)0x0), pDVar2 == (Delegate *)0x0)) ||
       (iVar3 = func_?(), iVar3 != 0)) {
      return;
    }
    func_?();
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
    func_?(&TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__Remove_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__TryGetValue_int__System__Action<System::Object,_WorldObjectDestroyedEventArgs>__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__set_Item_int__System__Action<System::Object,_WorldObjectDestroyedEventArgs>_
                   );
    cRam_? = '\x01';
  }
  pDVar1 = (Delegate *)0x0;
  pDVar2 = (this->fields).woDestroyedEventSubscribers;
  if (pDVar2 != (Dictionary_2_System_Int32_System_Action_2_Object_WorldObjectDestroyedEventArgs_ *)
                0x0) {
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__TryGetValue
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,woID,
                       (Object **)&stack0xfffffff8,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__TryGetValue_int__System__Action<System::Object,_WorldObjectDestroyedEventArgs>__
                      );
    if (bVar3 == 0) {
      return;
    }
    if ((pDVar1 == (Delegate *)0x0) ||
       (pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                           (pDVar1,(Delegate *)woDestroyedEventHandler,(MethodInfo *)0x0),
       pDVar1 == (Delegate *)0x0)) {
      pDVar2 = (this->fields).woDestroyedEventSubscribers;
      if (pDVar2 != (Dictionary_2_System_Int32_System_Action_2_Object_WorldObjectDestroyedEventArgs_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Remove
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,woID,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__Remove_int_
                  );
        return;
      }
    }
    else {
      value = (Object *)func_?();
      if (value == (Object *)0x0) goto code_?;
      pDVar2 = (this->fields).woDestroyedEventSubscribers;
      if (pDVar2 != (Dictionary_2_System_Int32_System_Action_2_Object_WorldObjectDestroyedEventArgs_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__set_Item
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,woID,value,
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
  fStack_1 = bounds.m_Center.z - bounds.m_Extents.z;
  uStack_2._0_4_ = (this->fields).worldBounds.m_Center.x;
  uStack_2._4_4_ = (this->fields).worldBounds.m_Center.y;
  fStack_3 = (this->fields).worldBounds.m_Center.z;
  uStack_4._0_4_ = (this->fields).worldBounds.m_Extents.x;
  uStack_4._4_4_ = (this->fields).worldBounds.m_Extents.y;
  fStack_5 = (this->fields).worldBounds.m_Extents.z;
  fStack_6 = fStack_3 - fStack_5;
  min1.y = (float)uStack_2._4_4_ - (float)uStack_4._4_4_;
  min1.x = (float)(undefined4)uStack_2 - (float)(undefined4)uStack_4;
  min0.y = bounds.m_Center.y - bounds.m_Extents.y;
  min0.x = bounds.m_Center.x - bounds.m_Extents.x;
  min0.z = fStack_1;
  min1.z = fStack_6;
  pVVar7 = MathFunctions::MathFunctions_GetMinVector(aVStack_8,min0,min1,(MethodInfo *)0x0);
  uStack_9._0_4_ = pVVar7->x;
  uStack_9._4_4_ = pVVar7->y;
  fStack_6 = pVVar7->z;
  aVStack_8[0].z = bounds.m_Extents.z + bounds.m_Center.z;
  uStack_2._0_4_ = (this->fields).worldBounds.m_Center.x;
  uStack_2._4_4_ = (this->fields).worldBounds.m_Center.y;
  fStack_3 = (this->fields).worldBounds.m_Center.z;
  uStack_4._0_4_ = (this->fields).worldBounds.m_Extents.x;
  uStack_4._4_4_ = (this->fields).worldBounds.m_Extents.y;
  fStack_5 = (this->fields).worldBounds.m_Extents.z;
  fStack_1 = fStack_5 + fStack_3;
  max0.y = bounds.m_Extents.y + bounds.m_Center.y;
  max0.x = bounds.m_Extents.x + bounds.m_Center.x;
  max0.z = aVStack_8[0].z;
  max1.y = (float)uStack_4._4_4_ + (float)uStack_2._4_4_;
  max1.x = (float)(undefined4)uStack_4 + (float)(undefined4)uStack_2;
  max1.z = fStack_1;
  pVVar7 = MathFunctions::MathFunctions_GetMaxVector(aVStack_8,max0,max1,(MethodInfo *)0x0);
  uVar10 = pVVar7->x;
  uVar11 = pVVar7->y;
  fVar12 = (pVVar7->z - fStack_6) * _UNK_?;
  fVar13 = ((float)uVar10 - (float)uStack_9) * _UNK_?;
  fVar14 = ((float)uVar11 - uStack_9._4_4_) * _UNK_?;
  (this->fields).worldBounds.m_Extents.x = fVar13;
  (this->fields).worldBounds.m_Extents.y = fVar14;
  (this->fields).worldBounds.m_Extents.z = fVar12;
  (this->fields).worldBounds.m_Center.x = (float)uStack_9 + fVar13;
  (this->fields).worldBounds.m_Center.y = uStack_9._4_4_ + fVar14;
  (this->fields).worldBounds.m_Center.z = fStack_6 + fVar12;
  return;
}


/* MVWorldObjectClientManager() */

void Assembly-CSharp.dll::MVWorldObjectClientManager::MVWorldObjectClientManager__ctor
               (MVWorldObjectClientManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>);
    func_?(&TypeInfo__MoveableController);
    func_?(&MethodInfo__System__Collections__Generic__Queue<int>__Queue__);
    func_?(&TypeInfo__System__Collections__Generic__Queue<int>);
    func_?(&TypeInfo__MVWorldObjectClientManager__WorldObjectMapping);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Dictionary__
            );
  (this->fields).worldObjects = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)pDVar1;
  func_?(&this->fields,pDVar1);
  this_00 = (Queue_1_System_Int32_ *)
            func_?(TypeInfo__System__Collections__Generic__Queue<int>);
  System.Core.dll::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder`1[System::Object]::
  ReadOnlyCollectionBuilder_1_System_Object___ctor
            ((ReadOnlyCollectionBuilder_1_System_Object_ *)this_00,
             MethodInfo__System__Collections__Generic__Queue<int>__Queue__);
  ppQVar2 = &(this->fields).pendingUngroupQueue;
  *ppQVar2 = this_00;
  func_?(ppQVar2,this_00);
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__Dictionary__
            );
  ppDVar3 = &(this->fields).woDestroyedEventSubscribers;
  *ppDVar3 = (Dictionary_2_System_Int32_System_Action_2_Object_WorldObjectDestroyedEventArgs_ *)
             pDVar1;
  func_?(ppDVar3,pDVar1);
  pDVar4 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
            *)func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>
                             );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (pDVar4,
             MethodInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>__Dictionary__
            );
  pMVar5 = (MethodInfo *)&(this->fields).woCreatedEventSubscribers;
  *(Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ **)
   pMVar5 = pDVar4;
  func_?();
  (this->fields).rootGroupId = -1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,pMVar5);
  this_01 = (MoveableController *)func_?(TypeInfo__MoveableController);
  MoveableController::MoveableController__ctor(this_01,(MethodInfo *)0x0);
  ppMVar6 = &(this->fields)._MoveableController_k__BackingField;
  *ppMVar6 = this_01;
  func_?(ppMVar6,this_01);
  value = (MVWorldObjectClientManager_WorldObjectMapping *)
          func_?(TypeInfo__MVWorldObjectClientManager__WorldObjectMapping);
  if (cRam_? == '\0') {
    ppMStack7 =
         &
         MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__Dictionary__
    ;
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  ppMStack7 =
       (MethodInfo **)
       TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>
  ;
  this_02 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            func_?();
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_02,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__Dictionary__
            );
  (value->fields).worldObjectTypeSets =
       (Dictionary_2_MV_WorldObject_WorldObjectType_HashSet_1_System_Int32_ *)this_02;
  func_?();
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           func_?();
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar1,MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
  (value->fields).gameObjectIdToWorldObjectIdMap = (Dictionary_2_System_Int32_System_Int32_ *)pDVar1
  ;
  func_?();
  pDVar4 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
            *)func_?();
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (pDVar4,
             MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__Dictionary__
            );
  pMVar5 = (MethodInfo *)&(value->fields).typeWorldObjectTypeMap;
  *(Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ **)
   pMVar5 = pDVar4;
  func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,pMVar5);
  (this->fields).worldObjectMapping = value;
  ppMStack8 = &(this->fields).worldObjectMapping;
  pMStack9 = value;
  func_?();
  GenericStrippingPreventionManager::GenericStrippingPreventionManager_Initialize((MethodInfo *)0x0)
  ;
  return;
}


/* Int32 get_Count() */

int32_t Assembly-CSharp.dll::MVWorldObjectClientManager::MVWorldObjectClientManager_get_Count
                  (MVWorldObjectClientManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields).worldObjects;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
            StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
            Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                      (this_00,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Count__
                      );
    return iVar1;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  iVar1 = (*pcVar4)();
  return iVar1;
}


/* MVGroup get_RootGroup() */

MVGroup * Assembly-CSharp.dll::MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                    (MVWorldObjectClientManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&TypeInfo__MVGroup);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).worldObjects;
  if (this_00 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    func_?();
    pMVar1 = extraout_EDX;
  }
  else {
    pMVar1 = (MVGroup *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
             ::Dictionary_2_System_Int32_System_Object__get_Item
                       ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                        (this->fields).rootGroupId,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                       );
    if (pMVar1 == (MVGroup *)0x0) {
      return (MVGroup *)0x0;
    }
    bVar2 = (TypeInfo__MVGroup->_1).naturalAligment;
    if ((bVar2 <= (pMVar1->klass->_1).naturalAligment) &&
       ((MVGroup__Class *)(pMVar1->klass->_1).typeHierarchy[bVar2 - 1] == TypeInfo__MVGroup)) {
      return pMVar1;
    }
  }
  func_?(pMVar1);
  pcVar3 = (code *)swi(3);
  pMVar1 = (MVGroup *)(*pcVar3)();
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
  puStack_1 = &stack0xfffffffc;
  if (value != (MVGroup *)0x0) {
    (this->fields).rootGroupId = (value->fields)._._.id;
    return;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


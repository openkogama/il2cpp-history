
/* Void CloneWorldObjectTree(MVWorldObjectClient, Boolean, Boolean, Boolean) */

void Assembly-CSharp.dll::MVWorldObjectClientManager::
     MVWorldObjectClientManager_CloneWorldObjectTree
               (MVWorldObjectClientManager *this,MVWorldObjectClient *root,bool localOwner,
               bool setAsPreviewItem,bool cloneToRootGroup,MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
      cRam_? = '\x01';
    }
    pDVar1 = MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_CreateBasicCloneData
                       (this_00,root,localOwner,setAsPreviewItem,cloneToRootGroup,(MethodInfo *)0x0)
    ;
    pPVar2 = (this_00->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pSVar3 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar4._0_1_ = (pSVar3->SendReliable).Encrypt;
    uVar4._1_1_ = (pSVar3->SendReliable).Channel;
    uVar4._2_2_ = *(undefined2 *)&(pSVar3->SendReliable).field_0x6;
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,0x21,pDVar1,(pSVar3->SendReliable).DeliveryMode,uVar4,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).worldObjects;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)woID,
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
  this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).worldObjects;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryGetValue
              (this_00,(Object *)id,(Object **)&LStack_6._current,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
              );
    RVar7 = LStack_6._current;
    if ((LStack_6._current != (RegexCharClass_SingleRange)0x0) &&
       (ids != (HashSet_1_System_Int32_ *)0x0)) {
      method_00 = (MethodInfo *)&UNK_?;
      System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
      HashSet_1_System_Object__Add
                ((HashSet_1_System_Object_ *)ids,
                 (Object *)(((MVGroup__Fields *)((int)LStack_6._current + 8))->_)._.id,
                 MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
      left = mscorlib.dll::System::Object::Object_GetType((Object *)RVar7,(MethodInfo *)0x0);
      handle = TypeRef__MVGroup;
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        LStack_6._list =
             (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             TypeInfo__System__Type;
        func_?();
      }
      right = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
      bVar8 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                        ((Object **)left,(Object **)right,(MethodInfo *)0x0);
      if (bVar8 == 0) {
code_?:
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (RVar7 != (RegexCharClass_SingleRange)0x0) {
        if ((*(byte *)(*(int *)RVar7 + 0xb4) < (TypeInfo__MVGroup->_1).typeHierarchyDepth) ||
           (*(MVGroup__Class **)
             (*(int *)(*(int *)RVar7 + 100) + -4 +
             (uint)(TypeInfo__MVGroup->_1).typeHierarchyDepth * 4) != TypeInfo__MVGroup)) {
          func_?(RVar7,TypeInfo__MVGroup);
        }
        else {
          this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                    MVGroup::MVGroup_get_Children((MVGroup *)RVar7,(MethodInfo *)0x0);
          if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
            pLVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                               (&LStack_6,this_01,
                                MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                               );
            RVar7 = pLVar9->_current;
            LStack_6._version = 0;
            uStack_1 = 1;
            LStack_6._current = (RegexCharClass_SingleRange)&stack0xffffffc8;
            while( true ) {
              bVar8 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                      Object]::List_1_T_Enumerator_System_Object__MoveNext
                                ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc8,
                                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                                );
              if (bVar8 == 0) break;
              if (RVar7 == (RegexCharClass_SingleRange)0x0) goto code_?;
              MVWorldObjectClientManager_GetAllWoIds
                        (this,*(int32_t *)((int)RVar7 + 8),ids,(MethodInfo *)0x0);
            }
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)&stack0xffffffc8,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                       ,method_00);
            goto code_?;
          }
        }
      }
    }
  }
code_?:
  uVar10 = func_?();
  func_?(uVar10);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* List`1[MVWorldObjectClient] GetBlueprintWorldObjectsByType(Type) */

List_1_MVWorldObjectClient_ *
Assembly-CSharp.dll::MVWorldObjectClientManager::
MVWorldObjectClientManager_GetBlueprintWorldObjectsByType
          (MVWorldObjectClientManager *this,Type *type,MethodInfo *method)

{
  this_04 = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)*unaff_FS_OFFSET;
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
  pLStack_1 = (List_1_MVWorldObjectClient_ *)
               func_?(TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
  if (pLStack_1 != (List_1_MVWorldObjectClient_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)pLStack_1,
               MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
    this_00 = (this->fields).worldObjectMapping;
    if (this_00 != (MVWorldObjectClientManager_WorldObjectMapping *)0x0) {
      this_02 = (HashSet_1_System_Object_ *)
                MVWorldObjectClientManager+WorldObjectMapping::
                MVWorldObjectClientManager_WorldObjectMapping_GetWorldObjectTypeSet
                          (this_00,WorldObjectType__Enum_Blueprint,(MethodInfo *)0x0);
      if (this_02 == (HashSet_1_System_Object_ *)0x0) {
        *unaff_FS_OFFSET = this_04;
        return pLStack_1;
      }
      System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
      HashSet_1_System_Object__GetEnumerator
                ((HashSet_1_T_Enumerator_System_Object_ *)&stack0xffffffd0,this_02,
                 MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
      method_00.rgctx_data = ((Il2CppRGCTXData *)&stack0xffffffc0).rgctx_data;
      while( true ) {
        this_03 = (HashSet_1_T_Enumerator_System_Int32_ *)&stack0xffffffc0;
        bVar2 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                Int32]::HashSet_1_T_Enumerator_System_Int32__MoveNext
                          (this_03,
                           MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                          );
        if (bVar2 == 0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&stack0xffffffc0,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                     ,(MethodInfo *)method_00.methodMetadataHandle);
          *unaff_FS_OFFSET = this_04;
          return pLStack_1;
        }
        this_01 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                  (this->fields).worldObjects;
        if (this_01 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) break;
        bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Object,GUILoginHandler+PlanetData]::
                Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                          (this_01,(Object *)this_03,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                          );
        if (bVar2 == 0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          method_00.rgctx_data = (Il2CppRGCTXData *)&UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                    ((Object *)StringLiteral_WorldObjectTypeSet_contains_id_w,(MethodInfo *)0x0);
        }
        else {
          method_00 = (_union_154)(this->fields).worldObjects;
          if ((method_00.rgctx_data == (Il2CppRGCTXData *)0x0) ||
             (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Int32Enum,System::Object]::
                       Dictionary_2_System_Int32Enum_System_Object__get_Item
                                 ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                  method_00.methodMetadataHandle,(Int32Enum__Enum)this_03,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                                 ), pOVar3 == (Object *)0x0)) break;
          mscorlib.dll::System::Object::Object_GetType(pOVar3,(MethodInfo *)0x0);
          if (type == (Type *)0x0) break;
          this_04 = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x7b;
          cVar4 = func_?();
          if (cVar4 != '\0') {
            this_04 = (this->fields).worldObjects;
            if (this_04 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) break;
            pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32Enum,System::Object]::
                     Dictionary_2_System_Int32Enum_System_Object__get_Item
                               ((Dictionary_2_System_Int32Enum_System_Object_ *)this_04,
                                (Int32Enum__Enum)this_03,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                               );
            this = (MVWorldObjectClientManager *)
                   MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
            ;
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      ((List_1_System_Object_ *)&UNK_?,pOVar3,
                       MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                      );
          }
        }
      }
    }
  }
  func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  pLVar6 = (List_1_MVWorldObjectClient_ *)(*pcVar5)();
  return pLVar6;
}


/* Object GetEnabledMonoBehaviourHighestInHierarchy[Object](GameObject) */

Object * Assembly-CSharp.dll::MVWorldObjectClientManager::
         MVWorldObjectClientManager_GetEnabledMonoBehaviourHighestInHierarchy
                   (GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (gameObject != (GameObject *)0x0) {
    this = (Behaviour *)
           (*((method->field7_0x1c).rgctx_data)->method->virtualMethodPointer)
                     (gameObject,((method->field7_0x1c).rgctx_data)->rgctxDataDummy);
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
          pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pTVar2,(MethodInfo *)0x0);
          pOVar4 = (Object *)
                   (*((method->field7_0x1c).rgctx_data[2].method)->virtualMethodPointer)
                             (pGVar3,(method->field7_0x1c).rgctx_data[2].rgctxDataDummy);
          return pOVar4;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  pOVar4 = (Object *)(*pcVar5)();
  return pOVar4;
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
     (key = (Object *)
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
        key = (Object *)&UNK_?;
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_int>__TryGetValue_int__System__Int32__
                       );
        cRam_? = '\x01';
      }
      this = (Dictionary_2_System_Object_System_Int32Enum_ *)
             (pMVar3->fields).gameObjectIdToWorldObjectIdMap;
      if (this != (Dictionary_2_System_Object_System_Int32Enum_ *)0x0) {
        bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Int32Enum]::Dictionary_2_System_Object_System_Int32Enum__TryGetValue
                          (this,key,(Int32Enum__Enum *)&t,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_int>__TryGetValue_int__System__Int32__
                          );
        if (bVar4 != 0) {
          this_00 = (pMVar1->fields).worldObjects;
          if (this_00 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0)
          goto code_?;
          pMVar5 = (MVWorldObjectClient *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,
                              (Int32Enum__Enum)t,
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  worldObjectType = WorldObjectType__Enum_Battery;
  this_00 = (this->fields).worldObjectMapping;
  handle = *(method->field7_0x1c).rgctx_data;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  type = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                   ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager_WorldObjectMapping *)0x0) {
    bVar1 = MVWorldObjectClientManager+WorldObjectMapping::
            MVWorldObjectClientManager_WorldObjectMapping_TryGetWorldObjectTypeFromObjectType
                      (this_00,type,(WorldObjectType__Enum *)&stack0xfffffff8,(MethodInfo *)0x0);
    if ((bVar1 == 0) ||
       (pMVar2 = MVWorldObjectClientManager_GetSingletonWorldObjectByType
                           (this,worldObjectType,(MethodInfo *)0x0),
       pMVar2 == (MVWorldObjectClient *)0x0)) {
      pOVar3 = (Object *)0x0;
    }
    else {
      handle = (Il2CppRGCTXData)(method->field7_0x1c).rgctx_data[1].rgctxDataDummy;
      if ((*(byte *)((int)handle.rgctxDataDummy + 0xba) & 1) == 0) {
        IStack4 = handle;
        handle.rgctxDataDummy = (void *)func_?();
      }
      IStack4 = handle;
      pOVar3 = (Object *)func_?();
      if (pOVar3 == (Object *)0x0) goto code_?;
    }
    return pOVar3;
  }
  func_?();
code_?:
  IStack4 = handle;
  func_?();
  pcVar5 = (code *)swi(3);
  pOVar3 = (Object *)(*pcVar5)();
  return pOVar3;
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
  if (1 < (this_00->fields)._size) {
    pOVar3 = (Object *)func_?(TypeInfo__MV__WorldObject__WorldObjectType);
    arg1 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff8);
    pSVar4 = mscorlib.dll::System::String::String_Format_1
                       (StringLiteral_WorldObjectType__0__is_not_a_sin,pOVar3,arg1,(MethodInfo *)0x0
                       );
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)pSVar4,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)0x0;
  }
  if ((this_00->fields)._size != 0) {
    RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (this_00,0,
                       MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                      );
    return (MVWorldObjectClient *)RVar5;
  }
  pOVar3 = (Object *)func_?(TypeInfo__MV__WorldObject__WorldObjectType);
  pSVar4 = mscorlib.dll::System::String::String_Format
                     (StringLiteral_Singleton_of_worldObject_of_type,pOVar3,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
            ((Object *)pSVar4,(MethodInfo *)0x0);
  return (MVWorldObjectClient *)0x0;
}


/* WorldObjectClientRef`1[System.Object] GetSingletonWorldObjectRef[Object]() */

WorldObjectClientRef_1_System_Object_ *
Assembly-CSharp.dll::MVWorldObjectClientManager::
MVWorldObjectClientManager_GetSingletonWorldObjectRef
          (MVWorldObjectClientManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).worldObjectMapping;
  worldObjectType = WorldObjectType__Enum_Battery;
  handle = *(method->field7_0x1c).rgctx_data;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  type = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                   ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager_WorldObjectMapping *)0x0) {
    bVar1 = MVWorldObjectClientManager+WorldObjectMapping::
            MVWorldObjectClientManager_WorldObjectMapping_TryGetWorldObjectTypeFromObjectType
                      (this_00,type,(WorldObjectType__Enum *)&stack0xfffffff8,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      pMVar2 = MVWorldObjectClientManager_GetSingletonWorldObjectByType
                         (this,worldObjectType,(MethodInfo *)0x0);
      if (pMVar2 != (MVWorldObjectClient *)0x0) {
        iVar3 = (pMVar2->fields)._.id;
        if ((*(byte *)((int)(method->field7_0x1c).rgctx_data[1].rgctxDataDummy + 0xba) & 1) == 0) {
          func_?();
        }
        pWVar4 = (WorldObjectClientRef_1_System_Object_ *)func_?();
        if (pWVar4 != (WorldObjectClientRef_1_System_Object_ *)0x0) {
          (*((method->field7_0x1c).rgctx_data[2].method)->virtualMethodPointer)
                    (pWVar4,iVar3,(method->field7_0x1c).rgctx_data[2].method);
          return pWVar4;
        }
        goto code_?;
      }
    }
    return (WorldObjectClientRef_1_System_Object_ *)0x0;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  pWVar4 = (WorldObjectClientRef_1_System_Object_ *)(*pcVar5)();
  return pWVar4;
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
    pOStack_8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,
                            (koGaMaPackageClient->fields).worldObjectRoot,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                           );
    this_01 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *
              )(this->fields).worldObjects;
    if (this_01 !=
        (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0)
    {
      method_00 = (MethodInfo *)&UNK_?;
      this_02 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Values
                          (this_01,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                          );
      if (this_02 !=
          (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
           *)0x0) {
        pDVar9 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
                 Regex+CachedCodeEntryKey,System::Object]::
                 Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
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
                        Object,System::Object]::
                        Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                                  ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object_
                                    *)&stack0xffffffbc,
                                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
                                  );
                if (bVar12 == 0) {
                  uStack_1 = 0xffffffff;
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)pSVar16,(MethodInfo *)0x0);
        if (pOVar11 != (Object *)0x0) {
          uStack_1 = 0xffffffff;
          *worldObjectId = (int32_t)pOVar11[1].klass;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
          if ((this_00->fields)._size < 1) {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                      ((Object *)StringLiteral_No_valid_SpawnPoint_on_planet___,(MethodInfo *)0x0);
            return (MVWorldObjectClient *)0x0;
          }
          index = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
                            (0,(this_00->fields)._size,(MethodInfo *)0x0);
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  iVar1 = -1;
  do {
    pMVar2 = MVWorldObjectClientManager_GetWorldObject(this,woId,(MethodInfo *)0x0);
    if ((pMVar2 == (MVWorldObject *)0x0) ||
       (pLVar3 = pMVar2[1].fields.inputLinkRefs, pLVar3 == (List_1_MV_WorldObject_Link_ *)0x0)) {
      func_?();
      pcVar4 = (code *)swi(3);
      iVar1 = (*pcVar4)();
      return iVar1;
    }
    x = (Object_1 *)
        (*((method->field7_0x1c).rgctx_data)->method->virtualMethodPointer)
                  (pLVar3,((method->field7_0x1c).rgctx_data)->rgctxDataDummy);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      (x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar5 != 0) {
      iVar1 = (pMVar2->fields).id;
    }
    woId = (pMVar2->fields).groupId;
  } while (woId != -1);
  return iVar1;
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
        this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).worldObjects;
        if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) break;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryGetValue
                  (this_00,(Object *)woID,&pOStack_4,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                  );
        if (pOStack_4 == (Object *)0x0) break;
        if (pOStack_4[4].monitor == pMVar3) {
          pOVar1 = pOStack_4[1].klass;
        }
        woID = (int32_t)pOStack_4[1].monitor;
        if ((Object *)woID == (Object *)0xffffffff) {
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
  this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).worldObjects;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryGetValue
              (this_00,(Object *)id,(Object **)&pMStack_1,
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
  key = 0;
  pMVar1 = (this->fields).worldObjectMapping;
  if (pMVar1 != (MVWorldObjectClientManager_WorldObjectMapping *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_int>__TryGetValue_int__System__Int32__
                     );
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Object_System_Int32Enum_ *)
              (pMVar1->fields).gameObjectIdToWorldObjectIdMap;
    if (this_00 != (Dictionary_2_System_Object_System_Int32Enum_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Int32Enum]::Dictionary_2_System_Object_System_Int32Enum__TryGetValue
                        (this_00,(Object *)goId,(Int32Enum__Enum *)&stack0xfffffff8,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_int>__TryGetValue_int__System__Int32__
                        );
      if (bVar2 == 0) {
        return (MVWorldObjectClient *)0x0;
      }
      this_01 = (this->fields).worldObjects;
      if (this_01 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
        pMVar3 = (MVWorldObjectClient *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,key,
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
  pWVar1 = (WorldObjectClientRef *)
           func_?(TypeInfo__MVWorldObjectClientManager__WOCMWorldObjectClientRef);
  if (pWVar1 != (WorldObjectClientRef *)0x0) {
    WorldObjectClientRef::WorldObjectClientRef__ctor(pWVar1,id,(MethodInfo *)0x0);
    return pWVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pWVar1 = (WorldObjectClientRef *)(*pcVar2)();
  return pWVar1;
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
  pWVar1 = (WorldObjectClientRef *)
           func_?(TypeInfo__MVWorldObjectClientManager__WOCMWorldObjectClientRef);
  if (pWVar1 != (WorldObjectClientRef *)0x0) {
    WorldObjectClientRef::WorldObjectClientRef__ctor(pWVar1,-1,(MethodInfo *)0x0);
    return pWVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pWVar1 = (WorldObjectClientRef *)(*pcVar2)();
  return pWVar1;
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
  if (this != (MVWorldObjectClientManager_WOCMWorldObjectClientRef_1_System_Object_ *)0x0) {
    MVWorldObjectClientManager+WOCMWorldObjectClientRef`1[System::Object]::
    MVWorldObjectClientManager_WOCMWorldObjectClientRef_1_System_Object___ctor
              (this,-1,
               MethodInfo__MVWorldObjectClientManager__WOCMWorldObjectClientRef<MVWorldObjectClient>__WOCMWorldObjectClientRef_int_
              );
    return (WorldObjectClientRef_1_MVWorldObjectClient_ *)this;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pWVar2 = (WorldObjectClientRef_1_MVWorldObjectClient_ *)(*pcVar1)();
  return pWVar2;
}


/* WorldObjectClientRef`1[System.Object] GetWorldObjectClientRef[Object](Int32) */

WorldObjectClientRef_1_System_Object_ *
Assembly-CSharp.dll::MVWorldObjectClientManager::
MVWorldObjectClientManager_GetWorldObjectClientRef_1
          (MVWorldObjectClientManager *this,int32_t id,MethodInfo *method)

{
  pvVar1 = ((method->field7_0x1c).rgctx_data)->rgctxDataDummy;
  if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
    pvVar1 = (void *)func_?(pvVar1);
  }
  pWVar2 = (WorldObjectClientRef_1_System_Object_ *)func_?(pvVar1);
  if (pWVar2 != (WorldObjectClientRef_1_System_Object_ *)0x0) {
    (*((method->field7_0x1c).rgctx_data[1].method)->virtualMethodPointer)
              (pWVar2,id,(method->field7_0x1c).rgctx_data[1].method);
    return pWVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pWVar2 = (WorldObjectClientRef_1_System_Object_ *)(*pcVar3)();
  return pWVar2;
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
  this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).worldObjects;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryGetValue
              (this_00,(Object *)id,(Object **)&stack0xfffffff8,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
              );
    if (pMVar1 != (MVWorldObjectClient *)0x0) {
      if ((pMVar1->fields)._.groupId == -1) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)StringLiteral_Group_id_is__1__This_is_the_worl,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)0x0;
      }
      id_00 = (pMVar1->fields)._.groupId;
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
  this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
            (this->fields).worldObjects;
  if (this_00 !=
      (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0) {
    source = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
             RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
             Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Values
                       (this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                       );
    pMVar1 = (MVWorldObjectClient *)
             System.Core.dll::System::Linq::Enumerable::Enumerable_FirstOrDefault_2
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
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                   );
    cRam_? = '\x01';
  }
  pOStack_1 = (Object *)0x0;
  this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).worldObjects;
  if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    func_?();
  }
  else {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryGetValue
              (this_00,(Object *)id,&pOStack_1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
              );
    unaff_EDI = pOStack_1;
    if ((*(byte *)((int)((method->field7_0x1c).rgctx_data)->rgctxDataDummy + 0xba) & 1) == 0) {
      func_?();
    }
    if (unaff_EDI == (Object *)0x0) {
      return (Object *)0x0;
    }
    pOStack_1 = unaff_EDI;
    pOVar2 = (Object *)func_?();
    if (pOVar2 != (Object *)0x0) {
      return pOVar2;
    }
  }
  pOStack_1 = unaff_EDI;
  func_?();
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
  this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
            (this->fields).worldObjects;
  if (this_00 !=
      (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0) {
    source = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
             RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
             Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Values
                       (this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                       );
    pIVar1 = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_4
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
  pMVar1 = (MethodInfo *)*unaff_FS_OFFSET;
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
  pLVar2 = (List_1_MVWorldObjectClient_ *)
           func_?(TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
  if (pLVar2 != (List_1_MVWorldObjectClient_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)pLVar2,
               MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
    this_00 = (this->fields).worldObjectMapping;
    if (this_00 != (MVWorldObjectClientManager_WorldObjectMapping *)0x0) {
      this_02 = (HashSet_1_System_Object_ *)
                MVWorldObjectClientManager+WorldObjectMapping::
                MVWorldObjectClientManager_WorldObjectMapping_GetWorldObjectTypeSet
                          (this_00,type,(MethodInfo *)0x0);
      if (this_02 == (HashSet_1_System_Object_ *)0x0) {
        *unaff_FS_OFFSET = pMVar1;
        return pLVar2;
      }
      System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
      HashSet_1_System_Object__GetEnumerator
                ((HashSet_1_T_Enumerator_System_Object_ *)&stack0xffffffd0,this_02,
                 MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
      method_00.rgctx_data = ((Il2CppRGCTXData *)&stack0xffffffc0).rgctx_data;
      while( true ) {
        this_03 = (HashSet_1_T_Enumerator_System_Int32_ *)&stack0xffffffc0;
        bVar3 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                Int32]::HashSet_1_T_Enumerator_System_Int32__MoveNext
                          (this_03,
                           MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                          );
        if (bVar3 == 0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&stack0xffffffc0,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                     ,(MethodInfo *)method_00.methodMetadataHandle);
          *unaff_FS_OFFSET = pMVar1;
          return pLVar2;
        }
        this_01 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                  (this->fields).worldObjects;
        if (this_01 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) break;
        bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Object,GUILoginHandler+PlanetData]::
                Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                          (this_01,(Object *)this_03,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                          );
        if (bVar3 == 0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          method_00.rgctx_data = (Il2CppRGCTXData *)&UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                    ((Object *)StringLiteral_WorldObjectTypeSet_contains_id_w,(MethodInfo *)0x0);
        }
        else {
          method_00 = (_union_154)(this->fields).worldObjects;
          if (method_00.rgctx_data == (Il2CppRGCTXData *)0x0) break;
          item = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)
                            method_00.methodMetadataHandle,(Int32Enum__Enum)this_03,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                           );
          pMVar1 = 
          MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
          ;
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)pLVar2,item,
                     MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                    );
        }
      }
    }
  }
  func_?();
  func_?();
  pcVar4 = (code *)swi(3);
  pLVar2 = (List_1_MVWorldObjectClient_ *)(*pcVar4)();
  return pLVar2;
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
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).worldObjects;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)woID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_Failed_to_get_worldObject,(MethodInfo *)0x0);
      return 0;
    }
    this_01 = (this->fields).worldObjects;
    if (this_01 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,woID,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                         );
      if (pOVar2 != (Object *)0x0) {
        return pOVar2[10].monitor == (MonitorData *)worldObjectType;
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
  pDVar1 = (this->fields).woCreatedEventSubscribers;
  if (pDVar1 != (Dictionary_2_System_Type_System_Action_2_Object_WorldObjectCreatedEventArgs_ *)0x0)
  {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)type,
                       (Object **)&stack0xfffffff8,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>__TryGetValue_System__Type__System__Action<System::Object,_WorldObjectCreatedEventArgs>__
                      );
    pDVar1 = (this->fields).woCreatedEventSubscribers;
    if (bVar2 == 0) {
      if (pDVar1 != (Dictionary_2_System_Type_System_Action_2_Object_WorldObjectCreatedEventArgs_ *)
                    0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)type,
                   (Object *)woCreatedEventHandler,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>__set_Item_System__Type__System__Action<System::Object,_WorldObjectCreatedEventArgs>_
                  );
        return;
      }
    }
    else if (pDVar1 != (Dictionary_2_System_Type_System_Action_2_Object_WorldObjectCreatedEventArgs_
                        *)0x0) {
      pDVar3 = (Delegate *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)type,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>__get_Item_System__Type_
                         );
      pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                         (pDVar3,(Delegate *)woCreatedEventHandler,(MethodInfo *)0x0);
      method_00 = 
      MethodInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>__set_Item_System__Type__System__Action<System::Object,_WorldObjectCreatedEventArgs>_
      ;
      if (pDVar3 == (Delegate *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)type,(Object *)0x0,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>__set_Item_System__Type__System__Action<System::Object,_WorldObjectCreatedEventArgs>_
                  );
        return;
      }
      value = (Object *)func_?();
      if (value != (Object *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)type,value,
                   method_00);
        return;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).worldObjects;
  if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      (pDVar1,(Object *)woID,(Object **)&stack0xfffffff8,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                      );
    if (bVar2 == 0) {
      return;
    }
    pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).woDestroyedEventSubscribers
    ;
    if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                        (pDVar1,(Object *)woID,(Object **)&stack0xfffffff4,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__TryGetValue_int__System__Action<System::Object,_WorldObjectDestroyedEventArgs>__
                        );
      pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
               (this->fields).woDestroyedEventSubscribers;
      if (bVar2 == 0) {
        if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__set_Item
                    (pDVar1,(Object *)woID,(Object *)woDestroyedEventHandler,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__set_Item_int__System__Action<System::Object,_WorldObjectDestroyedEventArgs>_
                    );
          return;
        }
      }
      else if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pDVar3 = (Delegate *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,woID,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__get_Item_int_
                           );
        pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                           (pDVar3,(Delegate *)woDestroyedEventHandler,(MethodInfo *)0x0);
        method_00 = 
        MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__set_Item_int__System__Action<System::Object,_WorldObjectDestroyedEventArgs>_
        ;
        if (pDVar3 == (Delegate *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__set_Item
                    (pDVar1,(Object *)woID,(Object *)0x0,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__set_Item_int__System__Action<System::Object,_WorldObjectDestroyedEventArgs>_
                    );
          return;
        }
        value = (Object *)func_?();
        if (value != (Object *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__set_Item(pDVar1,(Object *)woID,value,method_00);
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
  this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).worldObjects;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      (this_00,(Object *)id,(Object **)&pMStack_1,
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
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                   );
    func_?(&StringLiteral_trying_to_unregister_none_existi);
    cRam_? = '\x01';
  }
  iVar1 = worldObjectId;
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).worldObjects;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)worldObjectId,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                      );
    if (bVar2 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_trying_to_unregister_none_existi,(MethodInfo *)0x0);
      return 0;
    }
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (pMVar3 != (MVNetworkGame_OperationRequests *)0x0) {
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                       );
        func_?(&
                        TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                       );
        func_?(&TypeInfo__System__Int32);
        func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
        cRam_? = '\x01';
      }
      this_01 = (Dictionary_2_System_Object_System_Object_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                               );
      if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
        ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                  ((ParameterOverride_1_System_Object_ *)this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                  );
        this = (MVWorldObjectClientManager *)iVar1;
        value = (Object *)func_?(TypeInfo__System__Int32,&this);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (this_01,(Object *)0x16,value,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  );
        pPVar4 = (pMVar3->fields).peer;
        if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0)
        {
          func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
        }
        pSVar5 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
        uVar6._0_1_ = (pSVar5->SendReliable).Encrypt;
        uVar6._1_1_ = (pSVar5->SendReliable).Channel;
        uVar6._2_2_ = *(undefined2 *)&(pSVar5->SendReliable).field_0x6;
        if (pPVar4 != (PhotonPeer *)0x0) {
          (*(pPVar4->klass->vtable).SendOperation.methodPtr)
                    (pPVar4,1,this_01,(pSVar5->SendReliable).DeliveryMode,uVar6,
                     (pPVar4->klass->vtable).SendOperation.method);
          return 1;
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  bVar2 = (*pcVar7)();
  return bVar2;
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
  pMVar1 = this;
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
  key = woID;
  pDVar2 = (Dictionary_2_System_Object_System_Object_ *)(pMVar1->fields).woDestroyedEventSubscribers
  ;
  this = (MVWorldObjectClientManager *)0x0;
  if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      (pDVar2,(Object *)woID,(Object **)&this,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__TryGetValue_int__System__Action<System::Object,_WorldObjectDestroyedEventArgs>__
                      );
    if (bVar3 == 0) {
      return;
    }
    if (this != (MVWorldObjectClientManager *)0x0) {
      unaff_EBX = (MVWorldObjectClientManager *)
                  mscorlib.dll::System::Delegate::Delegate_Remove
                            ((Delegate *)this,(Delegate *)woDestroyedEventHandler,(MethodInfo *)0x0)
      ;
      woID = (int32_t)TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>;
      this = unaff_EBX;
      if (unaff_EBX != (MVWorldObjectClientManager *)0x0) {
        value = (MVWorldObjectClientManager *)func_?();
        if (value == (MVWorldObjectClientManager *)0x0) goto code_?;
        pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
                 (pMVar1->fields).woDestroyedEventSubscribers;
        this = value;
        if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__set_Item
                    (pDVar2,(Object *)key,(Object *)value,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__set_Item_int__System__Action<System::Object,_WorldObjectDestroyedEventArgs>_
                    );
          return;
        }
        goto code_?;
      }
    }
    this_00 = (pMVar1->fields).woDestroyedEventSubscribers;
    if (this_00 !=
        (Dictionary_2_System_Int32_System_Action_2_Object_WorldObjectDestroyedEventArgs_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__Remove
                ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__Remove_int_
                );
      return;
    }
  }
code_?:
  func_?();
code_?:
  func_?(unaff_EBX,woID);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateWorldBounds(Bounds) */

void Assembly-CSharp.dll::MVWorldObjectClientManager::MVWorldObjectClientManager_UpdateWorldBounds
               (MVWorldObjectClientManager *this,Bounds bounds,MethodInfo *method)

{
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_min
                     (&VStack_2,&bounds,(MethodInfo *)0x0);
  VStack_3.y = pVVar1->x;
  VStack_3.z = pVVar1->y;
  fVar4 = pVVar1->z;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_min
                     (&VStack_2,&(this->fields).worldBounds,(MethodInfo *)0x0);
  min0.z = fVar4;
  min0.x = VStack_3.y;
  min0.y = VStack_3.z;
  pVVar1 = MathFunctions::MathFunctions_GetMinVector(&VStack_3,min0,*pVVar1,(MethodInfo *)0x0);
  VStack_2.y = pVVar1->x;
  VStack_2.z = pVVar1->y;
  fVar4 = pVVar1->z;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_max
                     ((Vector3 *)&stack0xffffffd8,&bounds,(MethodInfo *)0x0);
  VStack_3.y = pVVar1->x;
  VStack_3.z = pVVar1->y;
  fVar5 = pVVar1->z;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_max
                     ((Vector3 *)&stack0xffffffd8,&(this->fields).worldBounds,(MethodInfo *)0x0);
  uVar6 = VStack_3._4_8_;
  bounds.m_Center.y = pVVar1->x;
  bounds.m_Center.z = pVVar1->y;
  bounds.m_Extents.x = pVVar1->z;
  bounds.m_Extents.y = 0.0;
  VStack_3.z = (float)&UNK_?;
  uVar7 = VStack_3._4_8_;
  max0.z = fVar5;
  VStack_3.y = (float)uVar6;
  VStack_3.z = SUB84(uVar6,4);
  max0.x = VStack_3.y;
  max0.y = VStack_3.z;
  bounds.m_Center.x = fVar5;
  VStack_3._4_8_ = uVar7;
  pVVar1 = MathFunctions::MathFunctions_GetMaxVector
                     ((Vector3 *)&stack0xffffffd8,max0,*pVVar1,(MethodInfo *)0x0);
  fStack8 = VStack_2.z;
  bounds.m_Extents.z = (float)&(this->fields).worldBounds;
  bounds.m_Extents.y = (float)&UNK_?;
  min.z = fVar4;
  min.x = VStack_2.y;
  min.y = VStack_2.z;
  fStack9 = fVar4;
  UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_SetMinMax
            ((Bounds *)bounds.m_Extents.z,min,*pVVar1,(MethodInfo *)0x0);
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
  this_00 = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>
                           );
  if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Dictionary__
              );
    (this->fields).worldObjects = this_00;
    func_?(&this->fields,this_00);
    this_01 = (Queue_1_System_Int32_ *)
              func_?(TypeInfo__System__Collections__Generic__Queue<int>);
    if (this_01 != (Queue_1_System_Int32_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::
      Stack_1_System_Object___ctor
                ((Stack_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__Queue<int>__Queue__);
      (this->fields).pendingUngroupQueue = this_01;
      func_?(&(this->fields).pendingUngroupQueue,this_01);
      this_02 = (Dictionary_2_System_Int32_System_Action_2_Object_WorldObjectDestroyedEventArgs_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>
                               );
      if (this_02 !=
          (Dictionary_2_System_Int32_System_Action_2_Object_WorldObjectDestroyedEventArgs_ *)0x0) {
        Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
        ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                  ((ParameterOverride_1_System_Object_ *)this_02,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__Dictionary__
                  );
        (this->fields).woDestroyedEventSubscribers = this_02;
        func_?(&(this->fields).woDestroyedEventSubscribers,this_02);
        this_03 = (Dictionary_2_System_Type_System_Action_2_Object_WorldObjectCreatedEventArgs_ *)
                  func_?(
                                 TypeInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>
                                 );
        if (this_03 !=
            (Dictionary_2_System_Type_System_Action_2_Object_WorldObjectCreatedEventArgs_ *)0x0) {
          Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
          ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                    ((ParameterOverride_1_System_Object_ *)this_03,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>__Dictionary__
                    );
          pMVar1 = (MethodInfo *)&(this->fields).woCreatedEventSubscribers;
          (this->fields).woCreatedEventSubscribers = this_03;
          func_?(pMVar1,this_03);
          (this->fields).rootGroupId = -1;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)this,ExceptionArgument__Enum_obj,pMVar1);
          this_04 = (MoveableController *)func_?(TypeInfo__MoveableController);
          if (this_04 != (MoveableController *)0x0) {
            MoveableController::MoveableController__ctor(this_04,(MethodInfo *)0x0);
            (this->fields)._MoveableController_k__BackingField = this_04;
            func_?(&(this->fields)._MoveableController_k__BackingField,this_04);
            value = (MVWorldObjectClientManager_WorldObjectMapping *)
                    func_?(TypeInfo__MVWorldObjectClientManager__WorldObjectMapping);
            if (value != (MVWorldObjectClientManager_WorldObjectMapping *)0x0) {
              if (cRam_? == '\0') {
                func_?(&
                                MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__Dictionary__
                               );
                func_?(&
                                MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__Dictionary__
                               );
                func_?(&
                                MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__
                               );
                func_?(&
                                TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>
                               );
                func_?(&
                                TypeInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>
                               );
                func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
                cRam_? = '\x01';
              }
              this_05 = (Dictionary_2_MV_WorldObject_WorldObjectType_HashSet_1_System_Int32_ *)
                        func_?(
                                       TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>
                                       );
              if (this_05 !=
                  (Dictionary_2_MV_WorldObject_WorldObjectType_HashSet_1_System_Int32_ *)0x0) {
                Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
                ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                          ((ParameterOverride_1_System_Object_ *)this_05,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__Dictionary__
                          );
                (value->fields).worldObjectTypeSets = this_05;
                func_?(&value->fields,this_05);
                this_06 = (Dictionary_2_System_Int32_System_Int32_ *)
                          func_?(
                                         TypeInfo__System__Collections__Generic__Dictionary<int,_int>
                                         );
                if (this_06 != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
                  Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
                  ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                            ((ParameterOverride_1_System_Object_ *)this_06,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__
                            );
                  (value->fields).gameObjectIdToWorldObjectIdMap = this_06;
                  func_?(&(value->fields).gameObjectIdToWorldObjectIdMap,this_06);
                  this_07 = (Dictionary_2_System_Type_MV_WorldObject_WorldObjectType_ *)
                            func_?(
                                           TypeInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>
                                           );
                  if (this_07 != (Dictionary_2_System_Type_MV_WorldObject_WorldObjectType_ *)0x0) {
                    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
                    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                              ((ParameterOverride_1_System_Object_ *)this_07,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__Dictionary__
                              );
                    pMVar1 = (MethodInfo *)&(value->fields).typeWorldObjectTypeMap;
                    (value->fields).typeWorldObjectTypeMap = this_07;
                    func_?(pMVar1,this_07);
                    mscorlib.dll::System::ThrowHelper::
                    ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                              ((Object *)value,ExceptionArgument__Enum_obj,pMVar1);
                    (this->fields).worldObjectMapping = value;
                    func_?(&(this->fields).worldObjectMapping,value);
                    GenericStrippingPreventionManager::GenericStrippingPreventionManager_Initialize
                              ((MethodInfo *)0x0);
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
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
  this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
            (this->fields).worldObjects;
  if (this_00 !=
      (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
            RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
            Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
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
    unaff_ESI = (MVGroup *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,
                           (this->fields).rootGroupId,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                          );
    if (unaff_ESI == (MVGroup *)0x0) {
      return (MVGroup *)0x0;
    }
    pMVar1 = TypeInfo__MVGroup;
    if (((TypeInfo__MVGroup->_1).typeHierarchyDepth <= (unaff_ESI->klass->_1).typeHierarchyDepth) &&
       ((MVGroup__Class *)
        (unaff_ESI->klass->_1).typeHierarchy[(TypeInfo__MVGroup->_1).typeHierarchyDepth - 1] ==
        TypeInfo__MVGroup)) {
      return unaff_ESI;
    }
  }
  func_?(unaff_ESI,pMVar1);
  pcVar2 = (code *)swi(3);
  pMVar3 = (MVGroup *)(*pcVar2)();
  return pMVar3;
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


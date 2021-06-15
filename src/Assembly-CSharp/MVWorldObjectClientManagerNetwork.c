
/* Void AddToWorldObjects(MVWorldObjectClient) */

void Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_AddToWorldObjects
               (MVWorldObjectClientManagerNetwork *this,MVWorldObjectClient *wo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._.worldObjects;
  if (wo != (MVWorldObjectClient *)0x0) {
    pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)wo,(MethodInfo *)0x0);
    if (pDVar1 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
      bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__ContainsKey
                        ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,(int32_t)pIVar2,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                        );
      if (bVar3 != 0) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)StringLiteral_Key_already_in_WorldObjects_dict,(MethodInfo *)0x0);
        return;
      }
      pDVar1 = (this->fields)._.worldObjects;
      pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)wo,(MethodInfo *)0x0);
      if (pDVar1 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Add
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,(int32_t)pIVar2,(Object *)wo,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Add_int__MVWorldObjectClient_
                  );
        this_00 = (this->fields)._.worldObjectMapping;
        if (this_00 != (MVWorldObjectClientManager_WorldObjectMapping *)0x0) {
          MVWorldObjectClientManager+WorldObjectMapping::
          MVWorldObjectClientManager_WorldObjectMapping_AddWorldObjectToTypeSet
                    (this_00,wo,(MethodInfo *)0x0);
          key = (String *)
                mscorlib.dll::System::Object::Object_GetType((Object *)wo,(MethodInfo *)0x0);
          this_01 = (this->fields)._.woCreatedEventSubscribers;
          if (this_01 !=
              (Dictionary_2_System_Type_System_Action_2_Object_WorldObjectCreatedEventArgs_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityEngine::
            Sprite]::Dictionary_2_System_String_UnityEngine_Sprite__TryGetValue
                      ((Dictionary_2_System_String_UnityEngine_Sprite_ *)this_01,key,
                       (Sprite **)&stack0xfffffff8,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>__TryGetValue_System__Type__System__Action<System::Object,_WorldObjectCreatedEventArgs>__
                      );
            if (pDVar1 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
              this_02 = (WorldObjectCreatedEventArgs *)func_?();
              WorldObjectCreatedEventArgs::WorldObjectCreatedEventArgs__ctor
                        (this_02,wo,(MethodInfo *)0x0);
              if (pDVar1 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0)
              goto code_?;
              System.Core.dll::System::Action`2[Object,UnityEngine::
              ReflectionProbe+ReflectionProbeEvent]::
              Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent__Invoke
                        ((Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent_ *)pDVar1
                         ,(Object *)this,(ReflectionProbe_ReflectionProbeEvent__Enum)this_02,
                         MethodInfo__System__Action<System::Object,_WorldObjectCreatedEventArgs>__Invoke_System__Object__WorldObjectCreatedEventArgs_
                        );
            }
            pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)wo,
                                (MethodInfo *)0x0);
            if (pOVar4 == (Object *)0xffffffff) {
              this_03 = (Collection_1_VoxelHit_ *)func_?();
              if (this_03 == (Collection_1_VoxelHit_ *)0x0) goto code_?;
              pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                       Collection_1_VoxelHit__get_Items(this_03,(MethodInfo *)0x0);
              (this->fields)._.rootGroupId = (int32_t)pIVar2;
            }
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void AddWorldObject(Dictionary`2[System.Object,System.Object], MVWorldInventory) */

void Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_AddWorldObject
               (MVWorldObjectClientManagerNetwork *this,
               Dictionary_2_System_Object_System_Object_ *data,MVWorldInventory *worldInventory,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (worldInventory != (MVWorldInventory *)0x0) {
    this_00 = KoGaMaPackageClient::KoGaMaPackageClient_WorldObjectFactory
                        (data,(this->fields)._.worldObjects,
                         (worldInventory->fields).runtimePrototypes,(MethodInfo *)0x0);
    if (this_00 == (MVWorldObjectClient *)0x0) {
code_?:
      MVWorldObjectClientManagerNetwork_AddToWorldObjects(this,this_00,(MethodInfo *)0x0);
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_01 != (MVNetworkGame *)0x0) {
      this_02 = (TransformNetworkManager *)
                UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                          ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this_01,
                           (MethodInfo *)0x0);
      woID = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0);
      if (this_02 != (TransformNetworkManager *)0x0) {
        pMVar1 = TransformNetworkManager::TransformNetworkManager_GetNetworkObject
                           (this_02,(int32_t)woID,(MethodInfo *)0x0);
        if (pMVar1 == (MVNetworkObject *)0x0) {
          MVWorldObjectClient::MVWorldObjectClient_SetNetworkObject(this_00,0,(MethodInfo *)0x0);
        }
        goto code_?;
      }
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Cleanup() */

void Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_Cleanup
               (MVWorldObjectClientManagerNetwork *this,MethodInfo *method)

{
  pIStack_1 = (IEqualityComparer_1_WinningConditionType_ *)0xffffffff;
  puStack_2 = &DAT_?;
  iStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int32_t)&iStack_3;
  puStack_4 = &stack0xffffffb0;
  puVar5 = &stack0xffffffb0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pWStack_6 = (WinningConditionType__Enum__Array *)0x0;
  pDStack_7 = (Dictionary_2_WinningConditionType_System_Object___Class *)0x0;
  pMStack_8 = (MonitorData *)0x0;
  pIStack_9 = (Int32__Array *)0x0;
  pLStack_10 = (Link__Array *)0x0;
  func_?();
  this_00 = (this->fields)._.worldObjects;
  puStack_11 = (undefined4 *)&stack0xffffffb0;
  puStack_4 = &stack0xffffffb0;
  if ((this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) &&
     (puStack_11 = (undefined4 *)&stack0xffffffb0, puStack_4 = &stack0xffffffb0,
     this_02 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
               ::Object]::Dictionary_2_WinningConditionType_System_Object__get_Values
                         ((Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                         ),
     this_02 != (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0)
     ) {
    pDVar12 = mscorlib.dll::System::Collections::Generic::
             Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
             Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                       (&DStack_13,this_02,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                       );
    pDStack_7 = (Dictionary_2_WinningConditionType_System_Object___Class *)
                 (pDVar12->host_enumerator).dictionary;
    pMStack_8 = (MonitorData *)(pDVar12->host_enumerator).next;
    pIStack_9 = (Int32__Array *)(pDVar12->host_enumerator).stamp;
    pLStack_10 = (Link__Array *)(pDVar12->host_enumerator).current.key;
    pWStack_6 = (WinningConditionType__Enum__Array *)(pDVar12->host_enumerator).current.value;
    pIStack_1 = (IEqualityComparer_1_WinningConditionType_ *)0x0;
    while( true ) {
      DStack_13.host_enumerator.next =
           (int32_t)
           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
      ;
      DStack_13.host_enumerator.dictionary =
           (Dictionary_2_WinningConditionType_System_Object_ *)&pDStack_7;
      cVar14 = func_?();
      if (cVar14 == '\0') break;
      DStack_13.host_enumerator.next =
           (int32_t)
           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__get_Current__
      ;
      DStack_13.host_enumerator.dictionary =
           (Dictionary_2_WinningConditionType_System_Object_ *)&pDStack_7;
      piVar15 = (int *)func_?();
      if (piVar15 == (int *)0x0) goto code_?;
      (**(code **)(*piVar15 + 0x260))(piVar15,*(undefined4 *)(*piVar15 + 0x264));
    }
    *puStack_11 = 0x43;
    pIStack_1 = (IEqualityComparer_1_WinningConditionType_ *)0xffffffff;
    DStack_13.host_enumerator.next =
         (int32_t)
         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
    ;
    DStack_13.host_enumerator.dictionary =
         (Dictionary_2_WinningConditionType_System_Object_ *)&pDStack_7;
    func_?();
    this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)(this->fields)._.worldObjects;
    if (this_01 !=
        (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
        0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
      Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
      Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Clear
                (this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Clear__
                );
      *unaff_FS_OFFSET = iStack_3;
      return;
    }
  }
code_?:
  func_?(0);
  func_?(0,0,0);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* MVWorldObjectClient Clone(Int32, MVWorldObjectClient, CloneBookkeeping, MVWorldInventory) */

MVWorldObjectClient *
Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::MVWorldObjectClientManagerNetwork_Clone
          (MVWorldObjectClientManagerNetwork *this,int32_t ownerActorNumber,
          MVWorldObjectClient *rootOriginal,CloneBookkeeping *cloneBookkeeping,
          MVWorldInventory *worldInventory,MethodInfo *method)

{
  if (rootOriginal != (MVWorldObjectClient *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)rootOriginal,
                        (MethodInfo *)0x0);
    if (worldInventory != (MVWorldInventory *)0x0) {
      pMVar2 = (MVWorldObjectClient *)
               (*(code *)(rootOriginal->klass->vtable).Clone.method)
                         (rootOriginal,ownerActorNumber,pOVar1,cloneBookkeeping,
                          (this->fields)._.worldObjects,(worldInventory->fields).runtimePrototypes,
                          (rootOriginal->klass->vtable).SetWorldObjectToPurchased.methodPtr);
      return pMVar2;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pMVar2 = (MVWorldObjectClient *)(*pcVar3)();
  return pMVar2;
}


/* Void DeleteWO(Int32) */

void Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_DeleteWO
               (MVWorldObjectClientManagerNetwork *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  arg1 = this;
  wo = (MVWorldObjectClient *)0x0;
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
            *)(this->fields)._.worldObjects;
  if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Experimental
    ::TerrainAPI::TerrainUtility+TerrainMap]::
    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__TryGetValue
              (pDVar1,id,(TerrainUtility_TerrainMap **)&stack0xfffffff8,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
              );
    if (wo == (MVWorldObjectClient *)0x0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Wo_not_found__This_is_most_likel,(MethodInfo *)0x0);
      return;
    }
    this_00 = (arg1->fields)._.worldObjectMapping;
    if (this_00 != (MVWorldObjectClientManager_WorldObjectMapping *)0x0) {
      MVWorldObjectClientManager+WorldObjectMapping::
      MVWorldObjectClientManager_WorldObjectMapping_RemoveWorldObjectFromTypeSet
                (this_00,wo,(MethodInfo *)0x0);
      pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)wo,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)(arg1->fields)._.woDestroyedEventSubscribers;
      this = (MVWorldObjectClientManagerNetwork *)0x0;
      if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)0x0) {
        bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
                Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__TryGetValue
                          (pDVar1,(int32_t)pIVar2,(TerrainUtility_TerrainMap **)&this,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__TryGetValue_int__System__Action<System::Object,_WorldObjectDestroyedEventArgs>__
                          );
        if (bVar3 != 0) {
          in_stack_4 = (MVGroup__Class *)TypeInfo__WorldObjectDestroyedEventArgs;
          method = (MethodInfo *)&UNK_?;
          this_05 = this;
          this_01 = (WorldObjectDestroyedEventArgs *)func_?();
          WorldObjectDestroyedEventArgs::WorldObjectDestroyedEventArgs__ctor
                    (this_01,(int32_t)pIVar2,(MethodInfo *)0x0);
          if (this_05 == (MVWorldObjectClientManagerNetwork *)0x0) goto code_?;
          System.Core.dll::System::Action`2[Object,UnityEngine::
          ReflectionProbe+ReflectionProbeEvent]::
          Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent__Invoke
                    ((Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent_ *)this_05,
                     (Object *)arg1,(ReflectionProbe_ReflectionProbeEvent__Enum)this_01,
                     MethodInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>__Invoke_System__Object__WorldObjectDestroyedEventArgs_
                    );
          pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)(arg1->fields)._.woDestroyedEventSubscribers;
          if (pDVar1 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                         *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
          Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
          Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                    (pDVar1,(int32_t)pIVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__Remove_int_
                    );
        }
        pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)wo,
                            (MethodInfo *)0x0);
        if (pOVar5 != (Object *)0xffffffff) {
          this_06 = (Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_ *)
                    (arg1->fields)._.worldObjects;
          if (this_06 ==
              (Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_ *)0x0)
          goto code_?;
          bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                  ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                  Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__TryGetValue
                            ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                              *)this_06,(int32_t)pOVar5,
                             (TerrainUtility_TerrainMap **)&stack0xfffffff4,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                            );
          if (bVar3 == 0) {
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              in_stack_4 = (MVGroup__Class *)TypeInfo__UnityEngine__Debug;
              method = (MethodInfo *)&UNK_?;
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                      ((Object *)StringLiteral_Could_not_find_group_when_destro,(MethodInfo *)0x0);
          }
          else {
            in_stack_4 = TypeInfo__MVGroup;
            id = (int32_t)&UNK_?;
            method = (MethodInfo *)this_06;
            iVar6 = func_?();
            if (iVar6 == 0) {
              if (this_06 ==
                  (Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_ *)0x0
                 ) goto code_?;
              this = (MVWorldObjectClientManagerNetwork *)
                     System.Core.dll::System::Linq::
                     Enumerable+<CreateGroupByIterator>c__Iterator5`2[System::Object,System::Object]
                     ::
                     Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                               (this_06,(MethodInfo *)0x0);
              pOVar5 = (Object *)func_?();
              if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__System__String->_1).cctor_started == 0)) {
                func_?(TypeInfo__System__String);
              }
              message = mscorlib.dll::System::String::String_Concat
                                  ((Object *)StringLiteral_World_object_is_attached_to_non_,pOVar5,
                                   (MethodInfo *)0x0);
              if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
                 && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                        ((Object *)message,(MethodInfo *)0x0);
            }
            else {
              iVar6 = func_?();
              if (iVar6 == 0) goto code_?;
              childId = &UNK_?;
              this_02 = (MVGroup *)func_?();
              MVGroup::MVGroup_RemoveChild(this_02,(int32_t)childId,(MethodInfo *)this_06);
            }
          }
        }
        (*(code *)(wo->klass->vtable).Destroy.method)();
        pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)(arg1->fields)._.worldObjects;
        pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)wo,(MethodInfo *)0x0);
        if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
          Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
          Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                    (pDVar1,(int32_t)pIVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Remove_int_
                    );
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((this_03 != (MVNetworkGame *)0x0) &&
             (this_04 = (LogicObjectManager *)
                        System.Core.dll::System::Linq::
                        Enumerable+<CreateUnionIterator>c__Iterator1C`1[System::Object]::
                        Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object__System_Collections_IEnumerator_get_Current
                                  ((Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object_ *)
                                   this_03,(MethodInfo *)0x0), this_04 != (LogicObjectManager *)0x0)
             ) {
            MVWorldObject.dll::LogicObjectManager::LogicObjectManager_RemoveLogicObjectFromUpdate
                      (this_04,id,(MethodInfo *)0x0);
            return;
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


/* Void DestroyWO(Int32) */

void Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_DestroyWO
               (MVWorldObjectClientManagerNetwork *this,int32_t id,MethodInfo *method)

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
  func_?();
  puStack_4 = &stack0xffffffb0;
  if (cRam_? == '\0') {
    puStack_4 = &stack0xffffffb0;
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTStack_6 = (TerrainUtility_TerrainMap *)0x0;
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields)._.worldObjects;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Experimental
    ::TerrainAPI::TerrainUtility+TerrainMap]::
    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__TryGetValue
              (this_00,id,&pTStack_6,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
              );
    if (pTStack_6 == (TerrainUtility_TerrainMap *)0x0) {
code_?:
      MVWorldObjectClientManagerNetwork_DeleteWO(this,id,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    bVar7 = (TypeInfo__MVGroup->_1).naturalAligment;
    if (((pTStack_6->klass->_1).naturalAligment < bVar7) ||
       ((MVGroup__Class *)(pTStack_6->klass->_1).typeHierarchy[bVar7 - 1] != TypeInfo__MVGroup)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    pTVar9 = (TerrainUtility_TerrainMap *)0x0;
    if (bVar8) {
      pTVar9 = pTStack_6;
    }
    if (pTVar9 == (TerrainUtility_TerrainMap *)0x0) goto code_?;
    pMVar10 = (MVGroup *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       ((MVWorldObjectClientManager *)this,id,(MethodInfo *)0x0);
    if (pMVar10 != (MVGroup *)0x0) {
      bStack_11 = (pMVar10->klass->_1).naturalAligment;
      bStack_12 = (TypeInfo__MVGroup->_1).naturalAligment;
      if ((bStack_11 < bStack_12) ||
         (cStack_13 = '\x01',
         (MVGroup__Class *)(pMVar10->klass->_1).typeHierarchy[bStack_12 - 1] != TypeInfo__MVGroup)) {
        cStack_13 = '\0';
      }
      pMVar14 = (MVGroup *)0x0;
      if (cStack_13 != '\0') {
        pMVar14 = pMVar10;
      }
      if (pMVar14 == (MVGroup *)0x0) goto code_?;
      if ((bStack_11 < bStack_12) ||
         (cStack_13 = '\x01',
         (MVGroup__Class *)(pMVar10->klass->_1).typeHierarchy[bStack_12 - 1] != TypeInfo__MVGroup)) {
        cStack_13 = '\0';
      }
      pMVar14 = (MVGroup *)0x0;
      if (cStack_13 != '\0') {
        pMVar14 = pMVar10;
      }
      if (pMVar14 == (MVGroup *)0x0) goto code_?;
      this_01 = (List_1_UnityEngine_Color32_ *)
                MVGroup::MVGroup_get_Children(pMVar14,(MethodInfo *)0x0);
      if (this_01 != (List_1_UnityEngine_Color32_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
        List_1_UnityEngine_Color32__GetEnumerator
                  ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffbc,this_01,
                   MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                  );
        uStack_1 = 0;
        while (cVar15 = func_?(), cVar15 != '\0') {
          this_02 = (Collection_1_VoxelHit_ *)
                    mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                    Serialization::JsonProperty]::
                    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                              ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                               &stack0xffffffcc,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                              );
          if (this_02 == (Collection_1_VoxelHit_ *)0x0) goto code_?;
          id_00 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                  Collection_1_VoxelHit__get_Items(this_02,(MethodInfo *)0x0);
          MVWorldObjectClientManagerNetwork_DestroyWO(this,(int32_t)id_00,(MethodInfo *)0x0);
        }
        uStack_1 = 0xffffffff;
        func_?(&stack0xffffffcc,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                       );
        goto code_?;
      }
    }
  }
code_?:
  func_?(0);
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void HandleTransferWorldObjectsToGroup(Boolean) */

void Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_HandleTransferWorldObjectsToGroup
               (MVWorldObjectClientManagerNetwork *this,bool success,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (success == 0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_HandleTransferWorldObjectsToGrou,(MethodInfo *)0x0);
  }
  this_00 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)
            (this->fields)._.OnTransferWosResponse;
  if (this_00 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
    e = (InitializedGameQueryDataEventArgs *)
        func_?(TypeInfo__OnTransferWosResponseEventArgs);
    OnTransferWosResponseEventArgs::OnTransferWosResponseEventArgs__ctor
              ((OnTransferWosResponseEventArgs *)e,success,(MethodInfo *)0x0);
    mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
    EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
              (this_00,(Object *)this,e,
               MethodInfo__System__EventHandler<OnTransferWosResponseEventArgs>__Invoke_System__Object__OnTransferWosResponseEventArgs_
              );
  }
  return;
}


/* Boolean LockHierarchyProxy(Int32, Int32) */

bool Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_LockHierarchyProxy
               (MVWorldObjectClientManagerNetwork *this,int32_t id,int32_t actorNr,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  id_00 = id;
  arg1 = (Object *)func_?(TypeInfo__System__Int32,&id);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  message = mscorlib.dll::System::String::String_Concat
                      ((Object *)StringLiteral_LockHierarchyProxy_,arg1,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)message,(MethodInfo *)0x0);
  MVWorldObjectClientManagerNetwork_SetOwnerInHierarchy(this,id_00,actorNr,(MethodInfo *)0x0);
  return 1;
}


/* Boolean LockHierarchyResponse(Int32, Boolean, Boolean) */

bool Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_LockHierarchyResponse
               (MVWorldObjectClientManagerNetwork *this,int32_t id,bool lockObject,bool success,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.worldObjects;
  if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,id,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      return 0;
    }
    if (lockObject == 0) {
      actorNr = (String *)0x0;
code_?:
      MVWorldObjectClientManagerNetwork_SetOwnerInHierarchy
                (this,id,(int32_t)actorNr,(MethodInfo *)0x0);
      if ((this->fields)._.OnHierarchyLockedResponse !=
          (EventHandler_1_OnHierarchyLockedEventArgs_ *)0x0) {
        e = (InitializedGameQueryDataEventArgs *)func_?();
        OnHierarchyLockedEventArgs::OnHierarchyLockedEventArgs__ctor
                  ((OnHierarchyLockedEventArgs *)e,id,success,(MethodInfo *)0x0);
        mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
        EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
                  ((EventHandler_1_InitializedGameQueryDataEventArgs_ *)
                   MethodInfo__System__EventHandler<OnHierarchyLockedEventArgs>__Invoke_System__Object__OnHierarchyLockedEventArgs_
                   ,(Object *)this,e,
                   MethodInfo__System__EventHandler<OnHierarchyLockedEventArgs>__Invoke_System__Object__OnHierarchyLockedEventArgs_
                  );
      }
      return 1;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_01 != (MVNetworkGame *)0x0) {
      this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
      if (this_02 != (MVLocalPlayer *)0x0) {
        actorNr = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                  NamedThemeAttribute_1_UnityEngine_Color__get_Name
                            ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_02,(MethodInfo *)0x0);
        goto code_?;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Void OnAttachWorldObjectToSeat(Int32, Int32, Int32, Int32) */

void Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_OnAttachWorldObjectToSeat
               (MVWorldObjectClientManagerNetwork *this,int32_t instigatorActorNr,
               int32_t seatOwnerWoID,int32_t worldObjectID,int32_t seatID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
            *)(this->fields)._.worldObjects;
  if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
            Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__TryGetValue
                      (pDVar1,seatOwnerWoID,(TerrainUtility_TerrainMap **)&stack0xfffffff8,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                      );
    if (bVar2 == 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_SeatOwnerWorldObject_Not_found,(MethodInfo *)0x0);
      return;
    }
    pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)(this->fields)._.worldObjects;
    if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)0x0) {
      value = (TerrainUtility_TerrainMap *)&stack0xfffffff4;
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
              Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__TryGetValue
                        (pDVar1,worldObjectID,(TerrainUtility_TerrainMap **)value,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                        );
      if (bVar2 == 0) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)StringLiteral_worldObjectClient_not_found,(MethodInfo *)0x0);
        return;
      }
      iVar3 = func_?();
      if (iVar3 != 0) {
        method_00 = (MethodInfo *)0x0;
        vehicleUser = (MVAvatar *)func_?(worldObjectID);
        this_00 = (MVVehicleBase *)func_?(value,TypeInfo__MVVehicleBase);
        MVVehicleBase::MVVehicleBase_Enter(this_00,vehicleUser,seatID,method_00);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnCloneWorldObjectTreeResponse(Boolean, Int32) */

void Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_OnCloneWorldObjectTreeResponse
               (MVWorldObjectClientManagerNetwork *this,bool success,int32_t rootId,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields)._.CloneWorldObjectTreeResponse !=
      (EventHandler_1_CloneWorldObjectTreeResponseEventArgs_ *)0x0) {
    this_01 = (CloneWorldObjectTreeResponseEventArgs *)
              func_?(TypeInfo__CloneWorldObjectTreeResponseEventArgs);
    CloneWorldObjectTreeResponseEventArgs::CloneWorldObjectTreeResponseEventArgs__ctor
              (this_01,success,rootId,(MethodInfo *)0x0);
    this_00 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)
              (this->fields)._.CloneWorldObjectTreeResponse;
    if (this_00 == (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
    EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
              (this_00,(Object *)this,(InitializedGameQueryDataEventArgs *)this_01,
               MethodInfo__System__EventHandler<CloneWorldObjectTreeResponseEventArgs>__Invoke_System__Object__CloneWorldObjectTreeResponseEventArgs_
              );
  }
  return;
}


/* Void OnRemoveWorldObjectDataPartialEvent(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_OnRemoveWorldObjectDataPartialEvent
               (MVWorldObjectClientManagerNetwork *this,int32_t worldObjectID,
               Dictionary_2_System_Object_System_Object_ *worldObjectDataToRemove,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.worldObjects;
  if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,worldObjectID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Attempt_to_remove_data_from_Worl,(MethodInfo *)0x0);
      return;
    }
    this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)(this->fields)._.worldObjects;
    if (this_01 !=
        (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
        0x0) {
      pTVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
               Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
               Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                         (this_01,worldObjectID,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                         );
      if (pTVar2 != (TerrainUtility_TerrainMap *)0x0) {
        (**(code **)&pTVar2->klass[1]._1.method_count)();
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean OnSetWorldObjectsToPurchasedEvent(Int32, Int32) */

bool Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_OnSetWorldObjectsToPurchasedEvent
               (MVWorldObjectClientManagerNetwork *this,int32_t profileID,int32_t itemID,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffac;
  puVar5 = &stack0xffffffac;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pOStack_6 = (Object *)0x0;
  pDStack_7 = (Dictionary_2_WinningConditionType_System_Object_ *)0x0;
  iStack_8 = 0;
  iStack_9 = 0;
  iStack_10 = 0;
  func_?();
  iVar11 = 0;
  iStack_12 = 0;
  this_00 = (this->fields)._.worldObjects;
  puStack_13 = (undefined4 *)&stack0xffffffac;
  puStack_4 = &stack0xffffffac;
  if ((this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) &&
     (puStack_13 = (undefined4 *)&stack0xffffffac, puStack_4 = &stack0xffffffac,
     this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
               ::Object]::Dictionary_2_WinningConditionType_System_Object__get_Values
                         ((Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                         ),
     this_01 != (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0)
     ) {
    pDVar14 = mscorlib.dll::System::Collections::Generic::
             Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
             Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                       (&DStack_15,this_01,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                       );
    pDStack_7 = (pDVar14->host_enumerator).dictionary;
    iStack_8 = (pDVar14->host_enumerator).next;
    iStack_9 = (pDVar14->host_enumerator).stamp;
    iStack_10 = (pDVar14->host_enumerator).current.key;
    pOStack_6 = (pDVar14->host_enumerator).current.value;
    uStack_1 = 0;
    while( true ) {
      DStack_15.host_enumerator.dictionary =
           (Dictionary_2_WinningConditionType_System_Object_ *)
           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
      ;
      cVar16 = func_?();
      if (cVar16 == '\0') {
        *puStack_13 = 0x61;
        uStack_1 = 0xffffffff;
        DStack_15.host_enumerator.dictionary =
             (Dictionary_2_WinningConditionType_System_Object_ *)
             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
        ;
        func_?();
        *unaff_FS_OFFSET = uStack_3;
        return 0 < iVar11;
      }
      DStack_15.host_enumerator.dictionary =
           (Dictionary_2_WinningConditionType_System_Object_ *)
           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__get_Current__
      ;
      this_02 = (Dictionary_2_WinningConditionType_System_Object_ *)func_?();
      if (this_02 == (Dictionary_2_WinningConditionType_System_Object_ *)0x0) break;
      pSVar17 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
               NamedThemeAttribute_1_UnityEngine_Color__get_Name
                         ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_02,(MethodInfo *)0x0);
      if ((pSVar17 == (String *)profileID) &&
         (pOVar18 = System.dll::System::Collections::Generic::
                   SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                   ::Single,System::Object]::
                   SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                             ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                               *)this_02,(MethodInfo *)0x0), pOVar18 == (Object *)itemID)) {
        DStack_15.host_enumerator.dictionary = this_02;
        func_?();
        iVar11 = iVar11 + 1;
        iStack_12 = iVar11;
      }
    }
  }
  func_?(0);
  DStack_15.host_enumerator.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)0x0;
  func_?();
  pcVar19 = (code *)swi(3);
  bVar20 = (*pcVar19)();
  return bVar20;
}


/* Void OnTransferWorldObjectsToGroupEvent(Int32, Int32[]) */

void Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_OnTransferWorldObjectsToGroupEvent
               (MVWorldObjectClientManagerNetwork *this,int32_t groupId,
               Int32__Array *worldObjectsToGroup,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields)._.worldObjects;
  if (this_00 ==
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) goto code_?;
  pTVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
           Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
           Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                     (this_00,groupId,
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                     );
  if (pTVar1 == (TerrainUtility_TerrainMap *)0x0) {
    pTVar2 = (TerrainUtility_TerrainMap *)0x0;
code_?:
    pMVar3 = (MVGroup__Class *)0x0;
    if (worldObjectsToGroup == (Int32__Array *)0x0) goto code_?;
    piVar4 = worldObjectsToGroup->vector;
    while( true ) {
      if ((int)worldObjectsToGroup->max_length <= (int)pMVar3) {
        return;
      }
      if ((MVGroup__Class *)worldObjectsToGroup->max_length <= pMVar3) break;
      if (pTVar2 == (TerrainUtility_TerrainMap *)0x0) goto code_?;
      pTVar5 = pTVar2->klass;
      uVar6._0_2_ = pTVar5[3]._1.field_count;
      uVar6._2_2_ = pTVar5[3]._1.event_count;
      (**(code **)&pTVar5[3]._1.method_count)(pTVar2,*piVar4,uVar6);
      pMVar3 = (MVGroup__Class *)((int)&(pMVar3->_0).image + 1);
      piVar4 = piVar4 + 1;
    }
    uVar6 = func_?(0,0);
    func_?(uVar6);
    pTVar1 = extraout_EDX;
  }
  else {
    bVar7 = (TypeInfo__MVGroup->_1).naturalAligment;
    if (((pTVar1->klass->_1).naturalAligment < bVar7) ||
       ((MVGroup__Class *)(pTVar1->klass->_1).typeHierarchy[bVar7 - 1] != TypeInfo__MVGroup)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    pTVar2 = (TerrainUtility_TerrainMap *)0x0;
    if (bVar8) {
      pTVar2 = pTVar1;
    }
    pMVar3 = TypeInfo__MVGroup;
    if (pTVar2 != (TerrainUtility_TerrainMap *)0x0) goto code_?;
  }
  func_?(pTVar1,pMVar3);
code_?:
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnUpdateWorldObjectDataEvent(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataEvent
               (MVWorldObjectClientManagerNetwork *this,int32_t worldObjectID,
               Dictionary_2_System_Object_System_Object_ *worldObjectData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.worldObjects;
  if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,worldObjectID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Attempt_to_update_WorldObjectDat,(MethodInfo *)0x0);
      return;
    }
    pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)(this->fields)._.worldObjects;
    if (pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)0x0) {
      this_01 = (PickupItem *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
                Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                          (pDVar2,worldObjectID,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                          );
      if (this_01 != (PickupItem *)0x0) {
        PickupItem::PickupItem_set_VariantID(this_01,(int32_t)worldObjectData,(MethodInfo *)0x0);
        pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)(this->fields)._.worldObjects;
        if (pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)0x0) {
          pTStack3 =
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
               Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
               Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                         (pDVar2,worldObjectID,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                         );
          if (pTStack3 != (TerrainUtility_TerrainMap *)0x0) {
            pTVar4 = pTStack3->klass;
            uStack5._0_1_ = pTVar4[2]._1.typeHierarchyDepth;
            uStack5._1_1_ = pTVar4[2]._1.genericRecursionDepth;
            uStack5._2_1_ = pTVar4[2]._1.rank;
            uStack5._3_1_ = pTVar4[2]._1.minimumAlignment;
            (**(code **)&pTVar4[2]._1.interfaces_count)();
            return;
          }
        }
      }
    }
  }
  uStack5 = 0;
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnUpdateWorldObjectDataPartialEvent(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataPartialEvent
               (MVWorldObjectClientManagerNetwork *this,int32_t worldObjectID,
               Dictionary_2_System_Object_System_Object_ *worldObjectData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.worldObjects;
  if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,worldObjectID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Attempt_to_update_WorldObjectDat,(MethodInfo *)0x0);
      return;
    }
    this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)(this->fields)._.worldObjects;
    if (this_01 !=
        (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
        0x0) {
      pTVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
               Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
               Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                         (this_01,worldObjectID,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                         );
      if (pTVar2 != (TerrainUtility_TerrainMap *)0x0) {
        (*(code *)pTVar2->klass[1]._1.flags)();
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnUpdateWorldObjectRunTimeDataEvent(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectRunTimeDataEvent
               (MVWorldObjectClientManagerNetwork *this,int32_t worldObjectID,
               Dictionary_2_System_Object_System_Object_ *delta,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.worldObjects;
  if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,worldObjectID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Attempt_to_update_WorldObjectDat,(MethodInfo *)0x0);
      return;
    }
    this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)(this->fields)._.worldObjects;
    if (this_01 !=
        (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
        0x0) {
      pTVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
               Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
               Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                         (this_01,worldObjectID,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                         );
      if ((pTVar2 != (TerrainUtility_TerrainMap *)0x0) &&
         ((MVRuntimeDataVariables *)pTVar2[7].monitor != (MVRuntimeDataVariables *)0x0)) {
        MVRuntimeDataVariables::MVRuntimeDataVariables_Receive
                  ((MVRuntimeDataVariables *)pTVar2[7].monitor,
                   (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
        (**(code **)&pTVar2->klass[2]._1.naturalAligment)();
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnWorldObjectDestroyed(Int32) */

void Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_OnWorldObjectDestroyed
               (MVWorldObjectClientManagerNetwork *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pWStack_1 = (WorldObjectDestroyedEventArgs__Class *)0x0;
  pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
            *)(this->fields)._.woDestroyedEventSubscribers;
  if (pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)0x0) {
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
            Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__TryGetValue
                      (pDVar2,woID,(TerrainUtility_TerrainMap **)&pWStack_1,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__TryGetValue_int__System__Action<System::Object,_WorldObjectDestroyedEventArgs>__
                      );
    this_00 = TypeInfo__WorldObjectDestroyedEventArgs;
    if (bVar3 == 0) {
      return;
    }
    pWStack_1 = TypeInfo__WorldObjectDestroyedEventArgs;
    this_01 = (WorldObjectDestroyedEventArgs *)func_?();
    WorldObjectDestroyedEventArgs::WorldObjectDestroyedEventArgs__ctor
              (this_01,woID,(MethodInfo *)0x0);
    if (this_00 != (WorldObjectDestroyedEventArgs__Class *)0x0) {
      System.Core.dll::System::Action`2[Object,UnityEngine::ReflectionProbe+ReflectionProbeEvent]::
      Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent__Invoke
                ((Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent_ *)this_00,
                 (Object *)this,(ReflectionProbe_ReflectionProbeEvent__Enum)this_01,
                 MethodInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>__Invoke_System__Object__WorldObjectDestroyedEventArgs_
                );
      pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)(this->fields)._.woDestroyedEventSubscribers;
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
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ResetLocalWorldObject() */

void Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_ResetLocalWorldObject
               (MVWorldObjectClientManagerNetwork *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
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
  puStack_4 = &stack0xffffffb8;
  this_00 = (List_1_UnityEngine_Color32_ *)
            MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                      ((MVWorldObjectClientManager *)this,WorldObjectType__Enum_CollectibleItem,
                       (MethodInfo *)0x0);
  if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_8,this_00,
                        MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                       );
    CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar7->l;
    CStack_6.monitor = (MonitorData *)pLVar7->next;
    CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar7->ver;
    CStack_6.fields.syncRoot = (Object *)(pLVar7->current).rgba;
    uStack_1 = 0;
    while( true ) {
      auStack_8._8_4_ =
           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
      ;
      auStack_8._4_4_ = &CStack_6;
      auStack_8._0_4_ = &UNK_?;
      cVar9 = func_?();
      if (cVar9 == '\0') {
        uStack_1 = 0xffffffff;
        func_?(&CStack_6);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      pOVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         (&CStack_6,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                         );
      if (pOVar10 == (Object *)0x0) break;
      (*(code *)pOVar10->klass[1]._1.cctor_finished_or_no_cctor)();
    }
  }
  func_?();
  func_?(0,0);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void ResetWorld() */

void Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_ResetWorld
               (MVWorldObjectClientManagerNetwork *this,MethodInfo *method)

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
  this_00 = (this->fields)._.worldObjects;
  if ((this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) &&
     (this_02 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
                ::Object]::Dictionary_2_WinningConditionType_System_Object__get_Values
                          ((Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                          ),
     this_02 != (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0)
     ) {
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
    Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
              ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                *)&stack0xffffffbc,this_02,
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
              );
    uStack_1 = 0;
    while (cVar4 = func_?(), cVar4 != '\0') {
      piVar5 = (int *)func_?();
      if (piVar5 == (int *)0x0) goto code_?;
      (**(code **)(*piVar5 + 0x150))(piVar5,*(undefined4 *)(*piVar5 + 0x154));
      iVar6 = func_?(piVar5,TypeInfo__ILogicWorldObject);
      if (iVar6 != 0) {
        iVar6 = func_?();
        if (iVar6 == 0) goto code_?;
        uVar7 = func_?(piVar5,TypeInfo__ILogicWorldObject);
        iVar6 = func_?(0,TypeInfo__ILogicWorldObject,uVar7);
        if (iVar6 == 0) goto code_?;
        func_?(3,TypeInfo__IInputSignalReceiver,iVar6);
      }
    }
    uStack_1 = 0xffffffff;
    method_00 = (MethodInfo *)&UNK_?;
    func_?();
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar8 != (MVNetworkGame *)0x0) {
      this_03 = (MVGameCoinManager *)
                TierOnDeathProgress+<DoTierProgress>c__Iterator0::
                TierOnDeathProgress_DoTierProgress_c_Iterator0_System_Collections_IEnumerator_get_Current
                          ((TierOnDeathProgress_DoTierProgress_c_Iterator0 *)pMVar8,
                           (MethodInfo *)0x0);
      pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (this_03 != (MVGameCoinManager *)0x0) {
        MVGameCoinManager::MVGameCoinManager_Reset(this_03,pMVar8,method_00);
        this_01 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)
                  (this->fields)._.OnResetWorldDone;
        if (this_01 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
          this_04 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)func_?();
          WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
          WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this_04,(MethodInfo *)0x0);
          mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
          EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
                    (this_01,(Object *)this,(InitializedGameQueryDataEventArgs *)this_04,
                     MethodInfo__System__EventHandler<System::EventArgs>__Invoke_System__Object__System__EventArgs_
                    );
        }
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
  }
code_?:
  func_?(0);
  func_?(0,0,0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void SetOwnerInHierarchy(Int32, Int32) */

void Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_SetOwnerInHierarchy
               (MVWorldObjectClientManagerNetwork *this,int32_t id,int32_t actorNr,
               MethodInfo *method)

{
  puVar1 = (undefined1 *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
            ((Object *)StringLiteral_SetOwnerInHierarchy_has_been_cal,(MethodInfo *)0x0);
  pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields)._.worldObjects;
  if ((pDVar2 !=
       (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
       0x0) && (pDVar3 = (DesktopEditModeController *)
                         mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                         Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                   (pDVar2,id,
                                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                                   ), pDVar3 != (DesktopEditModeController *)0x0)) {
    DesktopEditModeController::DesktopEditModeController_set_EditModeStateMachine
              (pDVar3,(EditorStateMachine *)actorNr,(MethodInfo *)0x0);
    pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)(this->fields)._.worldObjects;
    if ((pDVar2 !=
         (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *
         )0x0) &&
       (this_00 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                  ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                  Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                            (pDVar2,id,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                            ), this_00 != (TerrainUtility_TerrainMap *)0x0)) {
      pTVar4 = mscorlib.dll::System::Object::Object_GetType((Object *)this_00,(MethodInfo *)0x0);
      handle = TypeRef__MVGroup;
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?();
      }
      pTVar5 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
      if (pTVar4 != pTVar5) {
code_?:
        *unaff_FS_OFFSET = (int)puVar1;
        return;
      }
      pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)(this->fields)._.worldObjects;
      if ((pDVar2 !=
           (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
            *)0x0) &&
         (pMVar6 = (MVGroup *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                   Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                             (pDVar2,id,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                             ), pMVar6 != (MVGroup *)0x0)) {
        bVar7 = (pMVar6->klass->_1).naturalAligment;
        bVar8 = (TypeInfo__MVGroup->_1).naturalAligment;
        if ((bVar7 < bVar8) ||
           (bVar9 = true,
           (MVGroup__Class *)(pMVar6->klass->_1).typeHierarchy[bVar8 - 1] != TypeInfo__MVGroup)) {
          bVar9 = false;
        }
        pMVar10 = (MVGroup *)0x0;
        if (bVar9) {
          pMVar10 = pMVar6;
        }
        if (pMVar10 == (MVGroup *)0x0) goto code_?;
        if ((bVar7 < bVar8) ||
           (bVar9 = true,
           (MVGroup__Class *)(pMVar6->klass->_1).typeHierarchy[bVar8 - 1] != TypeInfo__MVGroup)) {
          bVar9 = false;
        }
        pMVar10 = (MVGroup *)0x0;
        if (bVar9) {
          pMVar10 = pMVar6;
        }
        if (pMVar10 == (MVGroup *)0x0) goto code_?;
        this_01 = (List_1_UnityEngine_Color32_ *)
                  MVGroup::MVGroup_get_Children(pMVar10,(MethodInfo *)0x0);
        if (this_01 != (List_1_UnityEngine_Color32_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
          List_1_UnityEngine_Color32__GetEnumerator
                    ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffbc,this_01,
                     MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                    );
          while (cVar11 = func_?(), cVar11 != '\0') {
            pDVar3 = (DesktopEditModeController *)
                     mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                &stack0xffffffcc,
                                MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                               );
            if (pDVar3 == (DesktopEditModeController *)0x0) goto code_?;
            DesktopEditModeController::DesktopEditModeController_set_EditModeStateMachine
                      (pDVar3,(EditorStateMachine *)actorNr,(MethodInfo *)0x0);
          }
          pDVar2->klass =
               (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___Class
                *)0x8b;
          puVar1 = &stack0xffffffcc;
          func_?();
          goto code_?;
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Boolean TransferOwnershipProxy(Int32, Int32) */

bool Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_TransferOwnershipProxy
               (MVWorldObjectClientManagerNetwork *this,int32_t id,int32_t ownerActorNr,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.worldObjects;
  if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,id,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      return 0;
    }
    pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)(this->fields)._.worldObjects;
    if (pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)0x0) {
      this_01 = (DesktopEditModeController *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
                Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                          (pDVar2,id,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                          );
      if (this_01 != (DesktopEditModeController *)0x0) {
        DesktopEditModeController::DesktopEditModeController_set_EditModeStateMachine
                  (this_01,(EditorStateMachine *)ownerActorNr,(MethodInfo *)0x0);
        pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)(this->fields)._.worldObjects;
        if (ownerActorNr == 0) {
          if (pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                         *)0x0) {
            pTVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                     Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                               (pDVar2,id,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                               );
            if (pTVar3 != (TerrainUtility_TerrainMap *)0x0) {
              (*(code *)pTVar3->klass[3]._0.methods)();
              return 1;
            }
          }
        }
        else if (pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                            *)0x0) {
          pTVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                   Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                             (pDVar2,id,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                             );
          UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_blue
                    ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
          if (pTVar3 != (TerrainUtility_TerrainMap *)0x0) {
            pPStack4 = pTVar3->klass[3]._0.properties;
            (*(code *)pTVar3->klass[3]._0.events)();
            return 1;
          }
        }
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  bVar1 = (*pcVar5)();
  return bVar1;
}


/* Boolean TransferOwnershipResponse(Int32, Int32, Boolean) */

bool Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_TransferOwnershipResponse
               (MVWorldObjectClientManagerNetwork *this,int32_t id,int32_t ownerActorNr,bool success
               ,MethodInfo *method)

{
  bVar1 = success;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.worldObjects;
  if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,id,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                      );
    if (bVar2 == 0) {
      return 0;
    }
    if (success == 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_Failed_to_set_ownership___,(MethodInfo *)0x0);
      goto code_?;
    }
    pDVar3 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)(this->fields)._.worldObjects;
    if (pDVar3 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)0x0) {
      this_02 = (DesktopEditModeController *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
                Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                          (pDVar3,id,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                          );
      if (this_02 != (DesktopEditModeController *)0x0) {
        DesktopEditModeController::DesktopEditModeController_set_EditModeStateMachine
                  (this_02,(EditorStateMachine *)ownerActorNr,(MethodInfo *)0x0);
        success = (bool)TypeInfo__MVGameControllerBase;
        if (ownerActorNr == 0) {
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            ownerActorNr = (int32_t)&UNK_?;
            func_?();
            bVar1 = success;
          }
          success = bVar1;
          pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar4 != (MVNetworkGame *)0x0) {
            pTVar5 = (TransformNetworkManager *)
                     UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                     TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                     TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                               ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)pMVar4,
                                (MethodInfo *)0x0);
            if (pTVar5 != (TransformNetworkManager *)0x0) {
              pMVar6 = TransformNetworkManager::TransformNetworkManager_GetNetworkObject
                                 (pTVar5,id,(MethodInfo *)0x0);
              iVar7 = func_?(pMVar6,TypeInfo__MVNetworkReporter);
              if (iVar7 == 0) {
code_?:
                this_01 = TypeInfo__OnTransferOwnershipResponseEventArgs;
                if ((this->fields)._.OnWorldObjectTransferOwnershipResponse !=
                    (EventHandler_1_OnTransferOwnershipResponseEventArgs_ *)0x0) {
                  this_04 = (OnTransferOwnershipResponseEventArgs *)func_?();
                  OnTransferOwnershipResponseEventArgs::OnTransferOwnershipResponseEventArgs__ctor
                            (this_04,id,ownerActorNr,success,(MethodInfo *)0x0);
                  mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
                  EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
                            ((EventHandler_1_InitializedGameQueryDataEventArgs_ *)this_01,
                             (Object *)this,(InitializedGameQueryDataEventArgs *)this_04,
                             MethodInfo__System__EventHandler<OnTransferOwnershipResponseEventArgs>__Invoke_System__Object__OnTransferOwnershipResponseEventArgs_
                            );
                }
                return 1;
              }
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?(TypeInfo__MVGameControllerBase);
              }
              pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (pMVar4 != (MVNetworkGame *)0x0) {
                pTVar5 = (TransformNetworkManager *)
                         UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                         TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                         TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                                   ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)pMVar4,
                                    (MethodInfo *)0x0);
                if (pTVar5 != (TransformNetworkManager *)0x0) {
                  TransformNetworkManager::TransformNetworkManager_RemoveNetworkObject
                            (pTVar5,id,(MethodInfo *)0x0);
                  goto code_?;
                }
              }
            }
          }
        }
        else {
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            ownerActorNr = (int32_t)&UNK_?;
            func_?();
            bVar1 = success;
          }
          success = bVar1;
          pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar4 != (MVNetworkGame *)0x0) {
            pTVar5 = (TransformNetworkManager *)
                     UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                     TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                     TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                               ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)pMVar4,
                                (MethodInfo *)0x0);
            pDVar3 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                      *)(this->fields)._.worldObjects;
            if (pDVar3 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                           *)0x0) {
              owner = (MVWorldObjectClient *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                      Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                (pDVar3,id,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                                );
              this_03 = (MVNetworkReporter *)func_?(TypeInfo__MVNetworkReporter);
              MVNetworkReporter::MVNetworkReporter__ctor(this_03,owner,(MethodInfo *)0x0);
              if (pTVar5 != (TransformNetworkManager *)0x0) {
                TransformNetworkManager::TransformNetworkManager_AddReporter
                          (pTVar5,id,this_03,(MethodInfo *)0x0);
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  bVar1 = (*pcVar8)();
  return bVar1;
}


/* Boolean Ungroup(Int32) */

bool Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_Ungroup
               (MVWorldObjectClientManagerNetwork *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.worldObjects;
  if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,id,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      return 0;
    }
    this_01 = (Queue_1_SmoothPhysicsMovement_Package_ *)(this->fields)._.pendingUngroupQueue;
    if (this_01 != (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) {
      System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
      Queue_1_SmoothPhysicsMovement_Package__Enqueue
                (this_01,(SmoothPhysicsMovement_Package *)id,
                 MethodInfo__System__Collections__Generic__Queue<int>__Enqueue_int_);
      return 1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* MVWorldObjectClientManagerNetwork() */

void Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::MVWorldObjectClientManagerNetwork__ctor
               (MVWorldObjectClientManagerNetwork *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Dictionary__
            );
  (this->fields)._.worldObjects = this_00;
  this_01 = (Queue_1_SmoothPhysicsMovement_Package_ *)
            func_?(TypeInfo__System__Collections__Generic__Queue<int>);
  System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
  Queue_1_SmoothPhysicsMovement_Package___ctor
            (this_01,MethodInfo__System__Collections__Generic__Queue<int>__Queue__);
  (this->fields)._.pendingUngroupQueue = (Queue_1_System_Int32_ *)this_01;
  this_02 = (Dictionary_2_System_Int32_System_Action_2_Object_WorldObjectDestroyedEventArgs_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_02,
             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__Dictionary__
            );
  (this->fields)._.woDestroyedEventSubscribers = this_02;
  method_01 = 
  TypeInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>
  ;
  this_03 = (Dictionary_2_System_Type_System_Action_2_Object_WorldObjectCreatedEventArgs_ *)
            func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_03,
             MethodInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>__Dictionary__
            );
  (this->fields)._.woCreatedEventSubscribers = this_03;
  (this->fields)._.worldBounds.m_Center.x = 0.0;
  (this->fields)._.worldBounds.m_Center.y = 0.0;
  (this->fields)._.worldBounds.m_Center.z = 0.0;
  (this->fields)._.worldBounds.m_Extents.x = 0.0;
  (this->fields)._.rootGroupId = -1;
  (this->fields)._.worldBounds.m_Extents.y = 0.0;
  (this->fields)._.worldBounds.m_Extents.z = 0.0;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_01);
  this_04 = (MoveableController *)func_?(TypeInfo__MoveableController);
  MoveableController::MoveableController__ctor(this_04,(MethodInfo *)0x0);
  (this->fields)._._MoveableController_k__BackingField = this_04;
  pDStack1 =
       (Dictionary_2_MV_WorldObject_WorldObjectType_HashSet_1_System_Int32___Class *)
       TypeInfo__MVWorldObjectClientManager__WorldObjectMapping;
  this_05 = (ScaleAnimationBase *)func_?();
  if (cRam_? == '\0') {
    pDStack1 =
         (Dictionary_2_MV_WorldObject_WorldObjectType_HashSet_1_System_Int32___Class *)_UNK_?
    ;
    func_?();
    cRam_? = '\x01';
  }
  pDStack1 =
       TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>
  ;
  pHVar2 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (pHVar2,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::HashSet<int>_>__Dictionary__
            );
  (this_05->fields)._._._._.m_CachedPtr = pHVar2;
  pHVar2 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (pHVar2,MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
  (this_05->fields).state = (int32_t)pHVar2;
  method_00 = 
  TypeInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>
  ;
  pHVar2 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (pHVar2,
             MethodInfo__System__Collections__Generic__Dictionary<System::Type,_MV::WorldObject::WorldObjectType>__Dictionary__
            );
  (this_05->fields).originalScale.x = (float)pHVar2;
  ScaleAnimationBase::ScaleAnimationBase_Play(this_05,0.0,(MethodInfo *)method_00);
  (this->fields)._.worldObjectMapping = (MVWorldObjectClientManager_WorldObjectMapping *)this_05;
  GenericStrippingPreventionManager::GenericStrippingPreventionManager_Initialize((MethodInfo *)0x0)
  ;
  return;
}


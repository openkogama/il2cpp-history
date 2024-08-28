
/* Void AddToWorldObjects(MVWorldObjectClient) */

void Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_AddToWorldObjects
               (MVWorldObjectClientManagerNetwork *this,MVWorldObjectClient *wo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Add_int__MVWorldObjectClient_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>__TryGetValue_System__Type__System__Action<System::Object,_WorldObjectCreatedEventArgs>__
                   );
    func_?(&TypeInfo__MVGroup);
    func_?(&TypeInfo__WorldObjectCreatedEventArgs);
    func_?(&StringLiteral_Key_already_in_WorldObjects_dict);
    cRam_? = '\x01';
  }
  if ((wo != (MVWorldObjectClient *)0x0) &&
     (pDVar1 = (this->fields)._.worldObjects,
     pDVar1 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0)) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)pDVar1,(wo->fields)._.id,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                      );
    if (bVar2 != 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Key_already_in_WorldObjects_dict,(MethodInfo *)0x0);
      return;
    }
    pDVar1 = (this->fields)._.worldObjects;
    if (pDVar1 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
      pMVar3 = 
      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Add_int__MVWorldObjectClient_
      ;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__Add
                ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,(wo->fields)._.id,(Object *)wo,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Add_int__MVWorldObjectClient_
                );
      this_00 = (this->fields)._.worldObjectMapping;
      if (this_00 != (MVWorldObjectClientManager_WorldObjectMapping *)0x0) {
        MVWorldObjectClientManager+WorldObjectMapping::
        MVWorldObjectClientManager_WorldObjectMapping_AddWorldObjectToTypeSet
                  (this_00,wo,(MethodInfo *)0x0);
        key = mscorlib.dll::System::Object::Object_GetType((Object *)wo,(MethodInfo *)0x0);
        this_01 = (this->fields)._.woCreatedEventSubscribers;
        if (this_01 !=
            (Dictionary_2_System_Type_System_Action_2_Object_WorldObjectCreatedEventArgs_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryGetValue
                    ((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)key,
                     (Object **)&stack0xfffffff8,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>__TryGetValue_System__Type__System__Action<System::Object,_WorldObjectCreatedEventArgs>__
                    );
          if (pMVar3 != (MethodInfo *)0x0) {
            this_02 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
            UxmlObjectListAttributeDescription`1[System::Object]::
            UxmlObjectListAttributeDescription_1_System_Object___ctor(this_02,(MethodInfo *)0x0);
            (this_02->fields)._._defaultValue_k__BackingField = (List_1_System_Object_ *)wo;
            func_?();
            if (pMVar3 == (MethodInfo *)0x0) goto code_?;
            (*(code *)pMVar3->name)
                      ((pMVar3->field8_0x20).genericMethod,this,this_02,pMVar3->return_type);
          }
          if ((wo->fields)._.groupId != -1) {
            return;
          }
          bVar4 = (TypeInfo__MVGroup->_1).naturalAligment;
          pMStack5 = TypeInfo__MVGroup;
          if ((bVar4 <= (wo->klass->_1).naturalAligment) &&
             ((MVGroup__Class *)(wo->klass->_1).typeHierarchy[bVar4 - 1] == TypeInfo__MVGroup)) {
            (this->fields)._.rootGroupId = (wo->fields)._.id;
            return;
          }
          goto code_?;
        }
      }
    }
  }
code_?:
  func_?();
  pMStack5 = extraout_EDX;
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void AddWorldObject(Dictionary`2[System.Object,System.Object], MVWorldInventory) */

void Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_AddWorldObject
               (MVWorldObjectClientManagerNetwork *this,
               Dictionary_2_System_Object_System_Object_ *data,MVWorldInventory *worldInventory,
               MethodInfo *method)

{
  if (worldInventory != (MVWorldInventory *)0x0) {
    this_00 = KoGaMaPackageClient::KoGaMaPackageClient_WorldObjectFactory
                        (data,(this->fields)._.worldObjects,
                         (worldInventory->fields).runtimePrototypes,(MethodInfo *)0x0);
    if (this_00 == (MVWorldObjectClient *)0x0) {
code_?:
      MVWorldObjectClientManagerNetwork_AddToWorldObjects(this,this_00,(MethodInfo *)0x0);
      return;
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame *)0x0) {
      pOVar2 = (Object *)(this_00->fields)._.id;
      pTVar3 = (pMVar1->fields).transformNetworkManager;
      if (pTVar3 != (TransformNetworkManager *)0x0) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pOVar2 = mscorlib.dll::System::Collections::Generic::CollectionExtensions::
                 CollectionExtensions_GetValueOrDefault_1
                           ((IReadOnlyDictionary_2_System_Object_System_Object_ *)
                            (pTVar3->fields).networkedObjects,pOVar2,
                            MVNetworkObject_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<int,_MVNetworkObject>_System__Collections__Generic__IReadOnlyDictionary<int,_MVNetworkObject>__int_
                           );
        if (pOVar2 == (Object *)0x0) {
          MVWorldObjectClient::MVWorldObjectClient_SetNetworkObject(this_00,0,(MethodInfo *)0x0);
        }
        goto code_?;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Cleanup() */

void Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_Cleanup
               (MVWorldObjectClientManagerNetwork *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Clear__
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
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pDVar6 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
            *)(this->fields)._.worldObjects;
  if (pDVar6 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                 *)0x0) {
    this_00 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
              StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
              Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                        (pDVar6,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                        );
    if (this_00 !=
        (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      method_00 = (MethodInfo *)&UNK_?;
      pDVar7 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
               StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                         (&DStack_8,this_00,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                         );
      DStack_9._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)pDVar7->_dictionary;
      DStack_9._index = pDVar7->_index;
      DStack_9._version = pDVar7->_version;
      DStack_9._currentValue = pDVar7->_currentValue;
      DStack_8._version = 0;
      uStack_1 = 1;
      DStack_8._currentValue = (Object *)&DStack_9;
      while( true ) {
        bVar10 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                UInt32,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          (&DStack_9,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
                          );
        if (bVar10 == 0) break;
        if (DStack_9._currentValue == (Object *)0x0) goto code_?;
        (**(code **)&(DStack_9._currentValue)->klass[2]._1.naturalAligment)
                  (DStack_9._currentValue,
                   (DStack_9._currentValue)->klass[2].vtable.Equals.methodPtr);
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)&DStack_9,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
                 ,method_00);
      uStack_1 = 0xffffffff;
      pDVar6 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                *)(this->fields)._.worldObjects;
      if (pDVar6 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
        StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
        Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
                  (pDVar6,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Clear__
                  );
        *unaff_FS_OFFSET = uStack_3;
        return;
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


/* MVWorldObjectClient Clone(Int32, MVWorldObjectClient, CloneBookkeeping, MVWorldInventory) */

MVWorldObjectClient *
Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::MVWorldObjectClientManagerNetwork_Clone
          (MVWorldObjectClientManagerNetwork *this,int32_t ownerActorNumber,
          MVWorldObjectClient *rootOriginal,CloneBookkeeping *cloneBookkeeping,
          MVWorldInventory *worldInventory,MethodInfo *method)

{
  if ((rootOriginal != (MVWorldObjectClient *)0x0) && (worldInventory != (MVWorldInventory *)0x0)) {
    pMVar1 = (MVWorldObjectClient *)
             (*(code *)(rootOriginal->klass->vtable).Clone.method)
                       (rootOriginal,ownerActorNumber,(rootOriginal->fields)._.groupId,
                        cloneBookkeeping,(this->fields)._.worldObjects,
                        (worldInventory->fields).runtimePrototypes,
                        (rootOriginal->klass->vtable).SetWorldObjectToPurchased.methodPtr);
    return pMVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pMVar1 = (MVWorldObjectClient *)(*pcVar2)();
  return pMVar1;
}


/* Void DeleteWO(Int32) */

void Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_DeleteWO
               (MVWorldObjectClientManagerNetwork *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Remove_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                   );
    func_?(&TypeInfo__MVGroup);
    func_?(&TypeInfo__MV__WorldObject__WorldObjectType);
    func_?(&StringLiteral_World_object_is_attached_to_non_);
    func_?(&StringLiteral_Wo_not_found__This_is_most_likel);
    func_?(&StringLiteral_Could_not_find_group_when_destro);
    cRam_? = '\x01';
  }
  pMStack_1 = (MVGroup *)0x0;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                   );
    cRam_? = '\x01';
  }
  pMVar2 = this;
  wo = (MVGroup *)0x0;
  pDVar3 = (this->fields)._.worldObjects;
  if (pDVar3 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) goto code_?;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
  Dictionary_2_System_Int32_System_Object__TryGetValue
            ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,id,(Object **)&stack0xfffffff8,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
            );
  if (wo == (MVGroup *)0x0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Wo_not_found__This_is_most_likel,(MethodInfo *)0x0);
    return;
  }
  this_00 = (pMVar2->fields)._.worldObjectMapping;
  if (this_00 == (MVWorldObjectClientManager_WorldObjectMapping *)0x0) goto code_?;
  MVWorldObjectClientManager+WorldObjectMapping::
  MVWorldObjectClientManager_WorldObjectMapping_RemoveWorldObjectFromTypeSet
            (this_00,(MVWorldObjectClient *)wo,(MethodInfo *)0x0);
  key = (List_1_System_Object_ *)(wo->fields)._._.id;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  pDVar4 = (pMVar2->fields)._.woDestroyedEventSubscribers;
  this = (MVWorldObjectClientManagerNetwork *)0x0;
  if (pDVar4 == (Dictionary_2_System_Int32_System_Action_2_Object_WorldObjectDestroyedEventArgs_ *)
                0x0) goto code_?;
  bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__TryGetValue
                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar4,(int32_t)key,
                     (Object **)&this,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__TryGetValue_int__System__Action<System::Object,_WorldObjectDestroyedEventArgs>__
                    );
  if (bVar5 != 0) {
    pMVar6 = this;
    this_03 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor(this_03,(MethodInfo *)0x0);
    (this_03->fields)._._defaultValue_k__BackingField = key;
    if (pMVar6 == (MVWorldObjectClientManagerNetwork *)0x0) goto code_?;
    (*(code *)(pMVar6->fields)._.pendingUngroupQueue)();
    pDVar4 = (pMVar2->fields)._.woDestroyedEventSubscribers;
    if (pDVar4 == (Dictionary_2_System_Int32_System_Action_2_Object_WorldObjectDestroyedEventArgs_ *
                  )0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Remove
              ((Dictionary_2_System_Int32_System_Object_ *)pDVar4,(int32_t)key,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__Remove_int_
              );
  }
  key_00 = (wo->fields)._._.groupId;
  worldObjectID = id;
  if (key_00 != -1) {
    pDVar3 = (pMVar2->fields)._.worldObjects;
    if (pDVar3 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) goto code_?;
    bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__TryGetValue
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,key_00,
                       (Object **)&pMStack_1,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                      );
    this_02 = pMStack_1;
    worldObjectID = id;
    if (bVar5 == 0) {
      pSVar7 = StringLiteral_Could_not_find_group_when_destro;
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
        pSVar7 = StringLiteral_Could_not_find_group_when_destro;
      }
    }
    else {
      if (pMStack_1 == (MVGroup *)0x0) goto code_?;
      bVar8 = (TypeInfo__MVGroup->_1).naturalAligment;
      if (((bVar8 <= (pMStack_1->klass->_1).naturalAligment) &&
          ((MVGroup__Class *)(pMStack_1->klass->_1).typeHierarchy[bVar8 - 1] == TypeInfo__MVGroup))
         && (pMStack_1 != (MVGroup *)0x0)) {
        bVar8 = (TypeInfo__MVGroup->_1).naturalAligment;
        if ((((pMStack_1->klass->_1).naturalAligment < bVar8) ||
            ((MVGroup__Class *)(pMStack_1->klass->_1).typeHierarchy[bVar8 - 1] != TypeInfo__MVGroup
            )) || (pMStack_1 == (MVGroup *)0x0)) {
          func_?();
          goto code_?;
        }
        MVGroup::MVGroup_RemoveChild(this_02,id,(MethodInfo *)0x0);
        goto code_?;
      }
      pSVar7 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xffffffe0,(MethodInfo *)0x0)
      ;
      pSVar7 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_World_object_is_attached_to_non_,pSVar7,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        in_stack_9 = TypeInfo__UnityEngine__Debug;
        method = (MethodInfo *)&UNK_?;
        func_?();
      }
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)pSVar7,(MethodInfo *)0x0);
    worldObjectID = id;
  }
code_?:
  pMStack_1 = wo;
  (*(code *)(wo->klass->vtable).Destroy.method)();
  pDVar3 = (pMVar2->fields)._.worldObjects;
  if (pDVar3 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Remove
              ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,(wo->fields)._._.id,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Remove_int_
              );
    pMVar10 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar10 != (MVNetworkGame *)0x0) &&
       (this_01 = (LogicObjectManager *)(pMVar10->fields)._LogicObjectManager_k__BackingField,
       this_01 != (LogicObjectManager *)0x0)) {
      MVWorldObject.dll::LogicObjectManager::LogicObjectManager_RemoveLogicObjectFromUpdate
                (this_01,worldObjectID,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                   );
    func_?(&TypeInfo__MVGroup);
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
  RStack_6.First = 0;
  RStack_6.Last = 0;
  this_00 = (this->fields)._.worldObjects;
  if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__TryGetValue
              ((Dictionary_2_System_Int32_System_Object_ *)this_00,id,(Object **)&RStack_6,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
              );
    if (RStack_6 != (RegexCharClass_SingleRange)0x0) {
      bVar7 = (TypeInfo__MVGroup->_1).naturalAligment;
      if (((bVar7 <= *(byte *)(*(int *)RStack_6 + 0xb8)) &&
          (*(MVGroup__Class **)(*(int *)(*(int *)RStack_6 + 100) + -4 + (uint)bVar7 * 4) ==
           TypeInfo__MVGroup)) && (RStack_6 != (RegexCharClass_SingleRange)0x0)) {
        method_00 = (MethodInfo *)&UNK_?;
        this_01 = (MVGroup *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            ((MVWorldObjectClientManager *)this,id,(MethodInfo *)0x0);
        if (this_01 != (MVGroup *)0x0) {
          bVar7 = (TypeInfo__MVGroup->_1).naturalAligment;
          if (((this_01->klass->_1).naturalAligment < bVar7) ||
             ((MVGroup__Class *)(this_01->klass->_1).typeHierarchy[bVar7 - 1] != TypeInfo__MVGroup))
          {
            func_?();
          }
          else {
            this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                      MVGroup::MVGroup_get_Children(this_01,(MethodInfo *)0x0);
            if (this_02 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
            {
              pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                       RegularExpressions::RegexCharClass+SingleRange]::
                       List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                                 ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                   *)&stack0xffffffdc,this_02,
                                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                                 );
              RVar9 = pLVar8->_current;
              uStack_1 = 1;
              RStack_6 = (RegexCharClass_SingleRange)&stack0xffffffc8;
              while( true ) {
                bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                        Object]::List_1_T_Enumerator_System_Object__MoveNext
                                  ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc8,
                                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                                  );
                if (bVar10 == 0) break;
                if (RVar9 == (RegexCharClass_SingleRange)0x0) goto code_?;
                MVWorldObjectClientManagerNetwork_DestroyWO
                          (this,*(int32_t *)((int)RVar9 + 8),(MethodInfo *)0x0);
              }
              uStack_1 = 0xffffffff;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                        ((Object *)&stack0xffffffc8,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                         ,method_00);
              uStack_1 = 0xffffffff;
              goto code_?;
            }
          }
        }
        goto code_?;
      }
    }
code_?:
    MVWorldObjectClientManagerNetwork_DeleteWO(this,id,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
code_?:
  uVar11 = func_?();
  func_?(uVar11);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void HandleTransferWorldObjectsToGroup(Boolean) */

void Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_HandleTransferWorldObjectsToGroup
               (MVWorldObjectClientManagerNetwork *this,bool success,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__OnTransferWosResponseEventArgs);
    func_?(&StringLiteral_HandleTransferWorldObjectsToGrou);
    cRam_? = '\x01';
  }
  if (success == 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_HandleTransferWorldObjectsToGrou,(MethodInfo *)0x0);
  }
  pEVar1 = (this->fields)._.OnTransferWosResponse;
  if (pEVar1 != (EventHandler_1_OnTransferWosResponseEventArgs_ *)0x0) {
    this_00 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
              func_?(TypeInfo__OnTransferWosResponseEventArgs);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__EventArgs);
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__EventArgs);
    }
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor(this_00,(MethodInfo *)0x0);
    *(bool *)&(this_00->fields)._._defaultValue_k__BackingField = success;
    (*(pEVar1->fields)._._.invoke_impl)
              ((pEVar1->fields)._._.method_code,this,this_00,(pEVar1->fields)._._.method);
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
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_LockHierarchyProxy_);
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&id,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_LockHierarchyProxy_,pSVar1,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    id = (int32_t)TypeInfo__UnityEngine__Debug;
    func_?();
  }
  id = 0;
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  id = 0;
  MVWorldObjectClientManagerNetwork_SetOwnerInHierarchy
            ((MVWorldObjectClientManagerNetwork *)actorNr,0,actorNr,(MethodInfo *)0x0);
  return 1;
}


/* Boolean LockHierarchyResponse(Int32, Boolean, Boolean) */

bool Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_LockHierarchyResponse
               (MVWorldObjectClientManagerNetwork *this,int32_t id,bool lockObject,bool success,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                   );
    func_?(&TypeInfo__OnHierarchyLockedEventArgs);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.worldObjects;
  if (this_00 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
code_?:
    func_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
          Dictionary_2_System_Int32_System_Single__ContainsKey
                    ((Dictionary_2_System_Int32_System_Single_ *)this_00,id,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                    );
  if (bVar2 == 0) {
    return 0;
  }
  if (lockObject == 0) {
    actorNr = 0;
  }
  else {
    this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((this_01 == (MVNetworkGame *)0x0) ||
       (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0),
       pMVar3 == (MVLocalPlayer *)0x0)) goto code_?;
    actorNr = (pMVar3->fields)._._ActorNr_k__BackingField;
  }
  iVar4 = id;
  MVWorldObjectClientManagerNetwork_SetOwnerInHierarchy(this,id,actorNr,(MethodInfo *)0x0);
  uVar5 = (undefined1)((uint)iVar4 >> 0x18);
  pEVar6 = (this->fields)._.OnHierarchyLockedResponse;
  if (pEVar6 != (EventHandler_1_OnHierarchyLockedEventArgs_ *)0x0) {
    this_02 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor(this_02,(MethodInfo *)0x0);
    UNK_? = uVar5;
    _UNK_? = id;
    (*(pEVar6->fields)._._.invoke_impl)();
  }
  return 1;
}


/* Void OnAttachWorldObjectToSeat(Int32, Int32, Int32, Int32) */

void Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_OnAttachWorldObjectToSeat
               (MVWorldObjectClientManagerNetwork *this,int32_t instigatorActorNr,
               int32_t seatOwnerWoID,int32_t worldObjectID,int32_t seatID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                   );
    func_?(&TypeInfo__MVAvatar);
    func_?(&TypeInfo__MVVehicleBase);
    func_?(&StringLiteral_worldObjectClient_not_found);
    func_?(&StringLiteral_SeatOwnerWorldObject_Not_found);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._.worldObjects;
  if (pDVar1 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
code_?:
    func_?();
  }
  else {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__TryGetValue
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,seatOwnerWoID,
                       (Object **)&stack0xfffffff8,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                      );
    if (bVar2 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_SeatOwnerWorldObject_Not_found,(MethodInfo *)0x0);
      return;
    }
    pDVar1 = (this->fields)._.worldObjects;
    if (pDVar1 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) goto code_?;
    this_00 = (MVVehicleBase *)&stack0xfffffff4;
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__TryGetValue
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,worldObjectID,
                       (Object **)this_00,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                      );
    if (bVar2 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_worldObjectClient_not_found,(MethodInfo *)0x0);
      return;
    }
    if (this_00 == (MVVehicleBase *)0x0) goto code_?;
    bVar3 = (TypeInfo__MVVehicleBase->_1).naturalAligment;
    if (((bVar3 <= (this_00->klass->_1).naturalAligment) &&
        ((MVVehicleBase__Class *)(this_00->klass->_1).typeHierarchy[bVar3 - 1] ==
         TypeInfo__MVVehicleBase)) && (this_00 != (MVVehicleBase *)0x0)) {
      if ((MVVehicleBase__Class *)worldObjectID == (MVVehicleBase__Class *)0x0) {
        uVar4 = (TypeInfo__MVVehicleBase->_1).naturalAligment;
        worldObjectID = 0;
      }
      else {
        pMVar5 = (MVAvatar__Class *)(((MVVehicleBase__Class *)worldObjectID)->_0).image;
        bVar3 = (TypeInfo__MVAvatar->_1).naturalAligment;
        if ((((pMVar5->_1).naturalAligment < bVar3) ||
            ((MVAvatar__Class *)(pMVar5->_1).typeHierarchy[bVar3 - 1] != TypeInfo__MVAvatar)) ||
           ((MVVehicleBase__Class *)worldObjectID == (MVVehicleBase__Class *)0x0))
        goto code_?;
        uVar4 = (TypeInfo__MVVehicleBase->_1).naturalAligment;
      }
      if ((MVVehicleBase__Class *)(this_00->klass->_1).typeHierarchy[uVar4 - 1] ==
          TypeInfo__MVVehicleBase) {
        MVVehicleBase::MVVehicleBase_Enter
                  (this_00,(MVAvatar *)worldObjectID,seatID,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnCloneWorldObjectTreeResponse(Boolean, Int32) */

void Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_OnCloneWorldObjectTreeResponse
               (MVWorldObjectClientManagerNetwork *this,bool success,int32_t rootId,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CloneWorldObjectTreeResponseEventArgs);
    cRam_? = '\x01';
  }
  if ((this->fields)._.CloneWorldObjectTreeResponse !=
      (EventHandler_1_CloneWorldObjectTreeResponseEventArgs_ *)0x0) {
    this_00 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
              func_?(TypeInfo__CloneWorldObjectTreeResponseEventArgs);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__EventArgs);
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__EventArgs);
    }
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor(this_00,(MethodInfo *)0x0);
    *(bool *)&this_00[1].klass = success;
    (this_00->fields)._._defaultValue_k__BackingField = (List_1_System_Object_ *)rootId;
    pEVar1 = (this->fields)._.CloneWorldObjectTreeResponse;
    if (pEVar1 == (EventHandler_1_CloneWorldObjectTreeResponseEventArgs_ *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (*(pEVar1->fields)._._.invoke_impl)
              ((pEVar1->fields)._._.method_code,this,this_00,(pEVar1->fields)._._.method);
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
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&StringLiteral_Attempt_to_remove_data_from_Worl);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._.worldObjects;
  if (pDVar1 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)pDVar1,worldObjectID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                      );
    if (bVar2 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Attempt_to_remove_data_from_Worl,(MethodInfo *)0x0);
      return;
    }
    pDVar1 = (this->fields)._.worldObjects;
    if (pDVar1 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,worldObjectID,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                         );
      if (pOVar3 != (Object *)0x0) {
        (**(code **)&pOVar3->klass[1]._1.method_count)();
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
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
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  iVar6 = 0;
  iStack_7 = 0;
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields)._.worldObjects;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    method_00 = (MethodInfo *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                          (this_00,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                          );
    if (method_00 != (MethodInfo *)0x0) {
      pDVar8 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
               StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                         (&DStack_9,
                          (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                           *)method_00,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                         );
      DStack_10._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)pDVar8->_dictionary;
      DStack_10._index = pDVar8->_index;
      DStack_10._version = pDVar8->_version;
      DStack_10._currentValue = pDVar8->_currentValue;
      DStack_9._version = 0;
      uStack_1 = 1;
      DStack_9._currentValue = (Object *)&DStack_10;
      while( true ) {
        bVar11 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                UInt32,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          (&DStack_10,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
                          );
        if (bVar11 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&DStack_10,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = uStack_3;
          return 0 < iVar6;
        }
        if (DStack_10._currentValue == (Object *)0x0) break;
        if ((DStack_10._currentValue[5].klass == (Object__Class *)profileID) &&
           (DStack_10._currentValue[2].klass == (Object__Class *)itemID)) {
          func_?(0x30,DStack_10._currentValue);
          iVar6 = iVar6 + 1;
          iStack_7 = iVar6;
        }
      }
    }
  }
  uVar12 = func_?();
  func_?(uVar12);
  pcVar13 = (code *)swi(3);
  bVar11 = (*pcVar13)();
  return bVar11;
}


/* Void OnTransferWorldObjectsToGroupEvent(Int32, Int32[]) */

void Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_OnTransferWorldObjectsToGroupEvent
               (MVWorldObjectClientManagerNetwork *this,int32_t groupId,
               Int32__Array *worldObjectsToGroup,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&TypeInfo__MVGroup);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.worldObjects;
  if (this_00 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) goto code_?;
  pMVar1 = (MVGroup__Class *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
           Dictionary_2_System_Int32_System_Object__get_Item
                     ((Dictionary_2_System_Int32_System_Object_ *)this_00,groupId,
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                     );
  if (pMVar1 == (MVGroup__Class *)0x0) {
    pMVar2 = (MVGroup__Class *)0x0;
code_?:
    uVar3 = 0;
    if (worldObjectsToGroup == (Int32__Array *)0x0) goto code_?;
    piVar4 = worldObjectsToGroup->vector;
    while( true ) {
      if ((int)worldObjectsToGroup->max_length <= (int)uVar3) {
        return;
      }
      if (worldObjectsToGroup->max_length <= uVar3) break;
      if (pMVar2 == (MVGroup__Class *)0x0) goto code_?;
      pIVar5 = (pMVar2->_0).image;
      (*(code *)pIVar5[0x13].customAttributeCount)(pMVar2,*piVar4,pIVar5[0x13].metadataHandle);
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 1;
    }
    func_?();
    pMVar1 = extraout_EDX;
    pMVar6 = pMVar2;
  }
  else {
    pIVar5 = (pMVar1->_0).image;
    bVar7 = (TypeInfo__MVGroup->_1).naturalAligment;
    pMVar6 = TypeInfo__MVGroup;
    if ((bVar7 <= *(byte *)&pIVar5[4].assembly) &&
       (pMVar2 = pMVar1,
       *(MVGroup__Class **)((pIVar5[2].typeCount - 4) + (uint)bVar7 * 4) == TypeInfo__MVGroup))
    goto code_?;
  }
  func_?(pMVar1,pMVar6);
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnUpdateWorldObjectDataEvent(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataEvent
               (MVWorldObjectClientManagerNetwork *this,int32_t worldObjectID,
               Dictionary_2_System_Object_System_Object_ *worldObjectData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&StringLiteral_Attempt_to_update_WorldObjectDat);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._.worldObjects;
  if (pDVar1 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)pDVar1,worldObjectID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                      );
    if (bVar2 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Attempt_to_update_WorldObjectDat,(MethodInfo *)0x0);
      return;
    }
    pDVar1 = (this->fields)._.worldObjects;
    if (pDVar1 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,worldObjectID,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                         );
      if (pOVar3 != (Object *)0x0) {
        pOVar3[0xb].klass = (Object__Class *)worldObjectData;
        func_?();
        pDVar1 = (this->fields)._.worldObjects;
        if (pDVar1 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
          pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__get_Item
                             ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,worldObjectID,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                             );
          if (pOVar3 != (Object *)0x0) {
            (*(code *)pOVar3->klass[2].vtable.Equals.method)();
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnUpdateWorldObjectDataPartialEvent(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataPartialEvent
               (MVWorldObjectClientManagerNetwork *this,int32_t worldObjectID,
               Dictionary_2_System_Object_System_Object_ *worldObjectData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&StringLiteral_Attempt_to_update_WorldObjectDat);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._.worldObjects;
  if (pDVar1 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)pDVar1,worldObjectID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                      );
    if (bVar2 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Attempt_to_update_WorldObjectDat,(MethodInfo *)0x0);
      return;
    }
    pDVar1 = (this->fields)._.worldObjects;
    if (pDVar1 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,worldObjectID,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                         );
      if (pOVar3 != (Object *)0x0) {
        (*(code *)pOVar3->klass[1]._1.flags)();
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnUpdateWorldObjectRunTimeDataEvent(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectRunTimeDataEvent
               (MVWorldObjectClientManagerNetwork *this,int32_t worldObjectID,
               Dictionary_2_System_Object_System_Object_ *delta,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&StringLiteral_Attempt_to_update_WorldObjectDat);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._.worldObjects;
  if (pDVar1 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)pDVar1,worldObjectID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                      );
    if (bVar2 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Attempt_to_update_WorldObjectDat,(MethodInfo *)0x0);
      return;
    }
    pDVar1 = (this->fields)._.worldObjects;
    if (pDVar1 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
      this_00 = (MVWorldObjectClient *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__get_Item
                          ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,worldObjectID,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                          );
      if (this_00 != (MVWorldObjectClient *)0x0) {
        MVWorldObjectClient::MVWorldObjectClient_RuntimeDataUpdate
                  (this_00,(Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__Remove_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__TryGetValue_int__System__Action<System::Object,_WorldObjectDestroyedEventArgs>__
                   );
    func_?(&TypeInfo__WorldObjectDestroyedEventArgs);
    cRam_? = '\x01';
  }
  pWStack_1 = (WorldObjectDestroyedEventArgs__Class *)0x0;
  pDVar2 = (this->fields)._.woDestroyedEventSubscribers;
  if (pDVar2 != (Dictionary_2_System_Int32_System_Action_2_Object_WorldObjectDestroyedEventArgs_ *)
                0x0) {
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__TryGetValue
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,woID,(Object **)&pWStack_1
                       ,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__TryGetValue_int__System__Action<System::Object,_WorldObjectDestroyedEventArgs>__
                      );
    pWVar4 = TypeInfo__WorldObjectDestroyedEventArgs;
    if (bVar3 == 0) {
      return;
    }
    pWStack_1 = TypeInfo__WorldObjectDestroyedEventArgs;
    this_00 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__EventArgs);
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__EventArgs);
    }
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor(this_00,(MethodInfo *)0x0);
    (this_00->fields)._._defaultValue_k__BackingField = (List_1_System_Object_ *)woID;
    if (pWVar4 != (WorldObjectDestroyedEventArgs__Class *)0x0) {
      uVar5._0_2_ = (pWVar4->_0).byval_arg.attrs;
      uVar5._2_1_ = (pWVar4->_0).byval_arg.type;
      uVar5._3_1_ = (pWVar4->_0).byval_arg.field_0x7;
      (*(code *)(pWVar4->_0).namespaze)((pWVar4->_0).element_class,this,this_00,uVar5);
      pDVar2 = (this->fields)._.woDestroyedEventSubscribers;
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
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                      ((MVWorldObjectClientManager *)this,WorldObjectType__Enum_CollectibleItem,
                       (MethodInfo *)0x0);
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                         *)&stack0xffffffd8,this_00,
                        MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                       );
    RVar5 = pLVar4->_current;
    uStack_1 = 1;
    while( true ) {
      bVar6 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&pOStack_7,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                        );
      if (bVar6 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&pOStack_7,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                   ,in_stack_8);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (RVar5 == (RegexCharClass_SingleRange)0x0) break;
      (**(code **)(*(int *)RVar5 + 0x150))();
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
                   );
    in_stack_6 =
         &
         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__get_Current__
    ;
    func_?();
    func_?(&TypeInfo__System__EventArgs);
    func_?(&TypeInfo__IInputSignalReceiver);
    func_?(&TypeInfo__ILogicWorldObject);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields)._.worldObjects;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    this_02 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
              StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
              Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                        (this_00,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                        );
    if (this_02 !=
        (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      pDVar7 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
               StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                         (&DStack_8,this_02,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                         );
      DStack_9._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)pDVar7->_dictionary;
      DStack_9._index = pDVar7->_index;
      DStack_9._version = pDVar7->_version;
      DStack_9._currentValue = pDVar7->_currentValue;
      DStack_8._version = 0;
      uStack_1 = 1;
      DStack_8._currentValue = (Object *)&DStack_9;
      while( true ) {
        bVar10 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                UInt32,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          (&DStack_9,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
                          );
        pOVar11 = DStack_9._currentValue;
        if (bVar10 == 0) break;
        unaff_EDI = pOVar11;
        if (DStack_9._currentValue == (Object *)0x0) goto code_?;
        (*(code *)(DStack_9._currentValue)->klass[1]._1.cctor_finished_or_no_cctor)
                  (DStack_9._currentValue,(DStack_9._currentValue)->klass[1]._1.cctor_thread);
        iVar12 = func_?(pOVar11,TypeInfo__ILogicWorldObject);
        if (iVar12 != 0) {
          pIStack_13 = TypeInfo__ILogicWorldObject;
          iVar12 = func_?(pOVar11,TypeInfo__ILogicWorldObject);
          if (iVar12 == 0) goto code_?;
          pIStack_13 = TypeInfo__ILogicWorldObject;
          iVar12 = func_?(pOVar11,TypeInfo__ILogicWorldObject);
          if (iVar12 == 0) goto code_?;
          iVar12 = func_?(0,TypeInfo__ILogicWorldObject,iVar12);
          if (iVar12 == 0) goto code_?;
          in_stack_6 = (MethodInfo **)&UNK_?;
          func_?(3,TypeInfo__IInputSignalReceiver,iVar12);
        }
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)&DStack_9,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
                 ,(MethodInfo *)in_stack_6);
      uStack_1 = 0xffffffff;
      pMVar14 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar14 != (MVNetworkGame *)0x0) {
        this_01 = (pMVar14->fields)._GameCoinManager_k__BackingField;
        pMVar14 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (this_01 != (MVGameCoinManager *)0x0) {
          MVGameCoinManager::MVGameCoinManager_Reset(this_01,pMVar14,(MethodInfo *)0x0);
          pEVar15 = (this->fields)._.OnResetWorldDone;
          if (pEVar15 != (EventHandler_1_EventArgs_ *)0x0) {
            this_03 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
            UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
            UxmlObjectListAttributeDescription`1[System::Object]::
            UxmlObjectListAttributeDescription_1_System_Object___ctor(this_03,(MethodInfo *)0x0);
            (*(pEVar15->fields)._._.invoke_impl)((pEVar15->fields)._._.method_code,this);
          }
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?(unaff_EDI,pIStack_13);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void SetOwnerInHierarchy(Int32, Int32) */

void Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_SetOwnerInHierarchy
               (MVWorldObjectClientManagerNetwork *this,int32_t id,int32_t actorNr,
               MethodInfo *method)

{
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int32_t)&stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                   );
    func_?(&TypeRef__MVGroup);
    func_?(&TypeInfo__MVGroup);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral_SetOwnerInHierarchy_has_been_cal);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
            ((Object *)StringLiteral_SetOwnerInHierarchy_has_been_cal,(MethodInfo *)0x0);
  pDVar2 = (this->fields)._.worldObjects;
  if (pDVar2 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
             ::Dictionary_2_System_Int32_System_Object__get_Item
                       ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,id,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                       );
    if (pOVar3 != (Object *)0x0) {
      pOVar3[4].monitor = (MonitorData *)actorNr;
      pDVar2 = (this->fields)._.worldObjects;
      if (pDVar2 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
        pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,id,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                           );
        if (pOVar3 != (Object *)0x0) {
          lhs = mscorlib.dll::System::Object::Object_GetType(pOVar3,(MethodInfo *)0x0);
          handle = TypeRef__MVGroup;
          if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          rhs = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
          bVar4 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                  UnsafeUtility_EnumEquals
                            ((Int32Enum__Enum)lhs,(Int32Enum__Enum)rhs,(MethodInfo *)0x0);
          if (bVar4 == 0) {
code_?:
            *unaff_FS_OFFSET = iVar1;
            return;
          }
          pDVar2 = (this->fields)._.worldObjects;
          if (pDVar2 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
            this_00 = (MVGroup *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,id,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                                );
            if (this_00 != (MVGroup *)0x0) {
              bVar5 = (TypeInfo__MVGroup->_1).naturalAligment;
              if (((this_00->klass->_1).naturalAligment < bVar5) ||
                 ((MVGroup__Class *)(this_00->klass->_1).typeHierarchy[bVar5 - 1] !=
                  TypeInfo__MVGroup)) {
                func_?();
              }
              else {
                this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                          MVGroup::MVGroup_get_Children(this_00,(MethodInfo *)0x0);
                if (this_01 !=
                    (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
                  pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                           RegularExpressions::RegexCharClass+SingleRange]::
                           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                                     ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                       *)&stack0xffffffdc,this_01,
                                      MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                                     );
                  RVar7 = pLVar6->_current;
                  while( true ) {
                    bVar4 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System
                            ::Object]::List_1_T_Enumerator_System_Object__MoveNext
                                      ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc8,
                                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                                      );
                    if (bVar4 == 0) break;
                    if (RVar7 == (RegexCharClass_SingleRange)0x0) goto code_?;
                    *(int32_t *)((int)RVar7 + 0x24) = actorNr;
                  }
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                            ((Object *)&stack0xffffffc8,
                             (ExceptionArgument__Enum)
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                             ,in_stack_8);
                  iVar1 = id;
                  goto code_?;
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
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Boolean TransferOwnershipProxy(Int32, Int32) */

bool Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_TransferOwnershipProxy
               (MVWorldObjectClientManagerNetwork *this,int32_t id,int32_t ownerActorNr,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._.worldObjects;
  if (pDVar1 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)pDVar1,id,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                      );
    if (bVar2 == 0) {
      return 0;
    }
    pDVar1 = (this->fields)._.worldObjects;
    if (pDVar1 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,id,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                         );
      if (pOVar3 != (Object *)0x0) {
        pOVar3[4].monitor = (MonitorData *)ownerActorNr;
        pDVar1 = (this->fields)._.worldObjects;
        if (ownerActorNr == 0) {
          if (pDVar1 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
            pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                     Object]::Dictionary_2_System_Int32_System_Object__get_Item
                               ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,id,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                               );
            if (pOVar3 != (Object *)0x0) {
              pIStack4 = pOVar3->klass[3].rgctx_data;
              (*(code *)pOVar3->klass[3].static_fields)();
              return 1;
            }
          }
        }
        else if (pDVar1 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
          pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__get_Item
                             ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,id,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                             );
          if (pOVar3 != (Object *)0x0) {
            pIStack4 = (Il2CppRGCTXData *)pOVar3->klass[3].interfaceOffsets;
            (*(code *)pOVar3->klass[3]._0.implementedInterfaces)();
            return 1;
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar2 = (*pcVar5)();
  return bVar2;
}


/* Boolean TransferOwnershipResponse(Int32, Int32, Boolean) */

bool Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_TransferOwnershipResponse
               (MVWorldObjectClientManagerNetwork *this,int32_t id,int32_t ownerActorNr,bool success
               ,MethodInfo *method)

{
  bVar1 = success;
  key = id;
  _success = (Il2CppImage *)(uint)success;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&TypeInfo__MVNetworkReporter);
    func_?(&TypeInfo__OnTransferOwnershipResponseEventArgs);
    func_?(&StringLiteral_Failed_to_set_ownership___);
    cRam_? = '\x01';
  }
  pDVar2 = (this->fields)._.worldObjects;
  if (pDVar2 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) goto code_?;
  bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
          Dictionary_2_System_Int32_System_Single__ContainsKey
                    ((Dictionary_2_System_Int32_System_Single_ *)pDVar2,id,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                    );
  if (bVar3 == 0) {
    return 0;
  }
  if (bVar1 == 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_Failed_to_set_ownership___,(MethodInfo *)0x0);
    goto code_?;
  }
  pDVar2 = (this->fields)._.worldObjects;
  if (pDVar2 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
             ::Dictionary_2_System_Int32_System_Object__get_Item
                       ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,id,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                       );
    if (pOVar4 != (Object *)0x0) {
      pOVar4[4].monitor = (MonitorData *)ownerActorNr;
      if (ownerActorNr == 0) {
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar5 == (MVNetworkGame *)0x0) ||
           (pTVar6 = (pMVar5->fields).transformNetworkManager,
           pTVar6 == (TransformNetworkManager *)0x0)) goto code_?;
        pMVar7 = TransformNetworkManager::TransformNetworkManager_GetNetworkObject
                            (pTVar6,id,(MethodInfo *)0x0);
        if (pMVar7 != (MVNetworkObject *)0x0) {
          bVar8 = (TypeInfo__MVNetworkReporter->_1).naturalAligment;
          if ((bVar8 <= (pMVar7->klass->_1).naturalAligment) &&
             ((pMVar7->klass->_1).typeHierarchy[bVar8 - 1] ==
              (Il2CppClass *)TypeInfo__MVNetworkReporter)) {
            pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar5 == (MVNetworkGame *)0x0) ||
               (_success = (Il2CppImage *)(pMVar5->fields).transformNetworkManager,
               _success == (Il2CppImage *)0x0)) goto code_?;
            ownerActorNr = (int32_t)&UNK_?;
            TransformNetworkManager::TransformNetworkManager_RemoveNetworkObject
                      ((TransformNetworkManager *)_success,id,(MethodInfo *)0x0);
          }
        }
code_?:
        pEVar9 = (this->fields)._.OnWorldObjectTransferOwnershipResponse;
        if (pEVar9 != (EventHandler_1_OnTransferOwnershipResponseEventArgs_ *)0x0) {
          this_01 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
          UxmlObjectListAttributeDescription`1[System::Object]::
          UxmlObjectListAttributeDescription_1_System_Object___ctor(this_01,(MethodInfo *)0x0);
          this_01[1].klass =
               (UxmlObjectListAttributeDescription_1_System_Object___Class *)ownerActorNr;
          (this_01->fields)._._defaultValue_k__BackingField = (List_1_System_Object_ *)key;
          *(bool *)&this_01[1].monitor = success;
          (*(pEVar9->fields)._._.invoke_impl)((pEVar9->fields)._._.method_code);
        }
        return 1;
      }
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar5 != (MVNetworkGame *)0x0) {
        pTVar6 = (pMVar5->fields).transformNetworkManager;
        pDVar2 = (this->fields)._.worldObjects;
        if (pDVar2 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
          owner = (MVWorldObjectClient *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__get_Item
                            ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,id,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                            );
          this = (MVWorldObjectClientManagerNetwork *)&UNK_?;
          this_00 = (MVNetworkReporter *)func_?();
          MVNetworkReporter::MVNetworkReporter__ctor(this_00,owner,(MethodInfo *)0x0);
          if (pTVar6 != (TransformNetworkManager *)0x0) {
            if (cRam_? == '\0') {
              func_?(&TypeInfo__UnityEngine__Debug);
              func_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Add_int__MVNetworkObject_
                             );
              func_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__ContainsKey_int_
                             );
              func_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__get_Item_int_
                             );
              func_?(&StringLiteral_Trying_to_add_reporter_while_net);
              cRam_? = '\x01';
            }
            pDVar10 = (pTVar6->fields).networkedObjects;
            if (pDVar10 != (Dictionary_2_System_Int32_MVNetworkObject_ *)0x0) {
              bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                                ((Dictionary_2_System_Int32_System_Single_ *)pDVar10,id,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__ContainsKey_int_
                                );
              if (bVar1 != 0) {
                pDVar10 = (pTVar6->fields).networkedObjects;
                if (pDVar10 == (Dictionary_2_System_Int32_MVNetworkObject_ *)0x0)
                goto code_?;
                this = (MVWorldObjectClientManagerNetwork *)
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__get_Item_int_
                ;
                pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                   ((Dictionary_2_System_Int32_System_Object_ *)pDVar10,id,
                                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__get_Item_int_
                                   );
                pSVar11 = StringLiteral_Trying_to_add_reporter_while_net;
                if (pOVar4 == (Object *)0x0) {
                  str1 = (String *)0x0;
                  id = (int32_t)this_00;
                }
                else {
                  _success = pOVar4->klass[1]._0.image;
                  id = (int32_t)&UNK_?;
                  str1 = (String *)(*(code *)(pOVar4->klass->vtable).ToString.method)();
                  ownerActorNr = (int32_t)pOVar4;
                }
                pSVar11 = mscorlib.dll::System::String::String_Concat_3
                                    (pSVar11,str1,(MethodInfo *)0x0);
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__Debug);
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                          ((Object *)pSVar11,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  func_?(&
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Remove_int_
                                 );
                  cRam_? = '\x01';
                }
                pDVar10 = (pTVar6->fields).networkedObjects;
                if (pDVar10 == (Dictionary_2_System_Int32_MVNetworkObject_ *)0x0)
                goto code_?;
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__Remove
                          ((Dictionary_2_System_Int32_System_Object_ *)pDVar10,key,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Remove_int_
                          );
                this_00 = (MVNetworkReporter *)id;
              }
              id = (int32_t)this_00;
              pDVar10 = (pTVar6->fields).networkedObjects;
              if (pDVar10 != (Dictionary_2_System_Int32_MVNetworkObject_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__Add
                          ((Dictionary_2_System_Int32_System_Object_ *)pDVar10,key,(Object *)id,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Add_int__MVNetworkObject_
                          );
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  bVar1 = (*pcVar12)();
  return bVar1;
}


/* Boolean Ungroup(Int32) */

bool Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_Ungroup
               (MVWorldObjectClientManagerNetwork *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                   );
    func_?(&MethodInfo__System__Collections__Generic__Queue<int>__Enqueue_int_);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.worldObjects;
  if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)this_00,id,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      return 0;
    }
    this_01 = (this->fields)._.pendingUngroupQueue;
    if (this_01 != (Queue_1_System_Int32_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Queue`1[System::Int32]::
      Queue_1_System_Int32__Enqueue
                (this_01,id,MethodInfo__System__Collections__Generic__Queue<int>__Enqueue_int_);
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
  (this->fields)._.worldObjects = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)pDVar1;
  func_?(&this->fields,pDVar1);
  this_00 = (Queue_1_System_Int32_ *)
            func_?(TypeInfo__System__Collections__Generic__Queue<int>);
  mscorlib.dll::System::Collections::Generic::Stack`1[System::Int32]::Stack_1_System_Int32___ctor
            ((Stack_1_System_Int32_ *)this_00,
             MethodInfo__System__Collections__Generic__Queue<int>__Queue__);
  ppQVar2 = &(this->fields)._.pendingUngroupQueue;
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
  ppDVar3 = &(this->fields)._.woDestroyedEventSubscribers;
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
  pMVar5 = (MethodInfo *)&(this->fields)._.woCreatedEventSubscribers;
  *(Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ **)
   pMVar5 = pDVar4;
  func_?();
  (this->fields)._.rootGroupId = -1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,pMVar5);
  this_01 = (MoveableController *)func_?(TypeInfo__MoveableController);
  MoveableController::MoveableController__ctor(this_01,(MethodInfo *)0x0);
  ppMVar6 = &(this->fields)._._MoveableController_k__BackingField;
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,pMVar5);
  (this->fields)._.worldObjectMapping = value;
  ppMStack8 = &(this->fields)._.worldObjectMapping;
  pMStack9 = value;
  func_?();
  GenericStrippingPreventionManager::GenericStrippingPreventionManager_Initialize((MethodInfo *)0x0)
  ;
  return;
}



/* Void AddToWorldObjects(MVWorldObjectClient) */

void Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_AddToWorldObjects
               (MVWorldObjectClientManagerNetwork *this,MVWorldObjectClient *wo,MethodInfo *method)

{
  wo_00 = wo;
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
  wo = (MVWorldObjectClient *)0x0;
  if ((wo_00 != (MVWorldObjectClient *)0x0) &&
     (this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                (this->fields)._.worldObjects,
     this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)(wo_00->fields)._.id,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                      );
    if (bVar1 != 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Key_already_in_WorldObjects_dict,(MethodInfo *)0x0);
      return;
    }
    this_01 = (Dictionary_2_System_Object_System_Object_ *)(this->fields)._.worldObjects;
    if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_01,(Object *)(wo_00->fields)._.id,(Object *)wo_00,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Add_int__MVWorldObjectClient_
                );
      this_02 = (this->fields)._.worldObjectMapping;
      if (this_02 != (MVWorldObjectClientManager_WorldObjectMapping *)0x0) {
        method = (MethodInfo *)0x0;
        wo = wo_00;
        MVWorldObjectClientManager+WorldObjectMapping::
        MVWorldObjectClientManager_WorldObjectMapping_AddWorldObjectToTypeSet
                  (this_02,wo_00,(MethodInfo *)0x0);
        method = (MethodInfo *)0x0;
        wo = wo_00;
        key = mscorlib.dll::System::Object::Object_GetType((Object *)wo_00,(MethodInfo *)0x0);
        this_03 = (this->fields)._.woCreatedEventSubscribers;
        if (this_03 !=
            (Dictionary_2_System_Type_System_Action_2_Object_WorldObjectCreatedEventArgs_ *)0x0) {
          method = (MethodInfo *)&UNK_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryGetValue
                    ((Dictionary_2_System_Object_System_Object_ *)this_03,(Object *)key,
                     (Object **)&wo,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>__TryGetValue_System__Type__System__Action<System::Object,_WorldObjectCreatedEventArgs>__
                    );
          pMVar2 = wo;
          if (wo == (MVWorldObjectClient *)0x0) {
code_?:
            if ((wo_00->fields)._.groupId != -1) {
              return;
            }
            if (((TypeInfo__MVGroup->_1).typeHierarchyDepth <= (wo_00->klass->_1).typeHierarchyDepth
                ) && ((MVGroup__Class *)
                      (wo_00->klass->_1).typeHierarchy
                      [(TypeInfo__MVGroup->_1).typeHierarchyDepth - 1] == TypeInfo__MVGroup)) {
              (this->fields)._.rootGroupId = (wo_00->fields)._.id;
              return;
            }
            goto code_?;
          }
          this_04 = (TweenRunner_1_FloatTween_ *)func_?();
          if (this_04 != (TweenRunner_1_FloatTween_ *)0x0) {
            if (cRam_? == '\0') {
              func_?(&TypeInfo__System__EventArgs);
              cRam_? = '\x01';
            }
            if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__System__EventArgs);
            }
            UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
            TweenRunner_1_FloatTween___ctor(this_04,(MethodInfo *)0x0);
            (this_04->fields).m_CoroutineContainer = (MonoBehaviour *)wo_00;
            func_?(&this_04->fields,wo_00);
            if (pMVar2 != (MVWorldObjectClient *)0x0) {
              (*(code *)(pMVar2->fields)._.groupId)
                        ((pMVar2->fields)._.objectLinkRefs,this,this_04,
                         *(undefined4 *)&(pMVar2->fields)._.inputState);
              goto code_?;
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
    this_01 = KoGaMaPackageClient::KoGaMaPackageClient_WorldObjectFactory
                        (data,(this->fields)._.worldObjects,
                         (worldInventory->fields).runtimePrototypes,(MethodInfo *)0x0);
    if (this_01 != (MVWorldObjectClient *)0x0) {
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 == (MVNetworkGame *)0x0) ||
         (this_00 = (pMVar1->fields).transformNetworkManager,
         this_00 == (TransformNetworkManager *)0x0)) goto code_?;
      pMVar2 = TransformNetworkManager::TransformNetworkManager_GetNetworkObject
                         (this_00,(this_01->fields)._.id,(MethodInfo *)0x0);
      if (pMVar2 == (MVNetworkObject *)0x0) {
        MVWorldObjectClient::MVWorldObjectClient_SetNetworkObject(this_01,0,(MethodInfo *)0x0);
      }
    }
    MVWorldObjectClientManagerNetwork_AddToWorldObjects(this,this_01,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_6._index = 0;
  DStack_6._version = 0;
  DStack_6._currentValue = (Object *)0x0;
  pDVar7 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
           (this->fields)._.worldObjects;
  if (pDVar7 != (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                 *)0x0) {
    this_00 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
              RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
              Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Values
                        (pDVar7,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                        );
    if (this_00 !=
        (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
         *)0x0) {
      method_00 = (MethodInfo *)&UNK_?;
      pDVar8 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
               Regex+CachedCodeEntryKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                         (&DStack_9,this_00,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                         );
      DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar8->_dictionary;
      DStack_6._index = pDVar8->_index;
      DStack_6._version = pDVar8->_version;
      DStack_6._currentValue = pDVar8->_currentValue;
      DStack_9._version = 0;
      uStack_1 = 1;
      DStack_9._currentValue = (Object *)&DStack_6;
      while( true ) {
        bVar10 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                Object,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                          (&DStack_6,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
                          );
        if (bVar10 == 0) break;
        if (DStack_6._currentValue == (Object *)0x0) goto code_?;
        (*(DStack_6._currentValue)->klass[2].vtable.Equals.methodPtr)
                  (DStack_6._currentValue,(DStack_6._currentValue)->klass[2].vtable.Equals.method)
        ;
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&DStack_6,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
                 ,method_00);
      uStack_1 = 0xffffffff;
      pDVar7 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                *)(this->fields)._.worldObjects;
      if (pDVar7 != (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
        Regex+CachedCodeEntryKey,System::Object]::
        Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Clear
                  (pDVar7,
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
             (*(rootOriginal->klass->vtable).Clone.methodPtr)
                       (rootOriginal,ownerActorNumber,(rootOriginal->fields)._.groupId,
                        cloneBookkeeping,(this->fields)._.worldObjects,
                        (worldInventory->fields).runtimePrototypes,
                        (rootOriginal->klass->vtable).Clone.method);
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
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                   );
    cRam_? = '\x01';
  }
  wo = (MVWorldObjectClient *)0x0;
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(this->fields)._.worldObjects;
  if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryGetValue
            (pDVar1,(Object *)id,(Object **)&stack0xfffffff8,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
            );
  if (wo == (MVWorldObjectClient *)0x0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_Wo_not_found__This_is_most_likel,(MethodInfo *)0x0);
    return;
  }
  this_00 = (this->fields)._.worldObjectMapping;
  if (this_00 == (MVWorldObjectClientManager_WorldObjectMapping *)0x0) goto code_?;
  MVWorldObjectClientManager+WorldObjectMapping::
  MVWorldObjectClientManager_WorldObjectMapping_RemoveWorldObjectFromTypeSet
            (this_00,wo,(MethodInfo *)0x0);
  key = (MonoBehaviour *)(wo->fields)._.id;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(this->fields)._.woDestroyedEventSubscribers
  ;
  pMStack_2 = (MVWorldObjectClient *)0x0;
  if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryGetValue
                    (pDVar1,(Object *)key,(Object **)&pMStack_2,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__TryGetValue_int__System__Action<System::Object,_WorldObjectDestroyedEventArgs>__
                    );
  if (bVar3 != 0) {
    pMVar4 = pMStack_2;
    this_04 = (TweenRunner_1_FloatTween_ *)func_?();
    if (this_04 == (TweenRunner_1_FloatTween_ *)0x0) goto code_?;
    if (cRam_? == '\0') {
      pMVar4 = (MVWorldObjectClient *)&UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
    TweenRunner_1_FloatTween___ctor(this_04,(MethodInfo *)0x0);
    (this_04->fields).m_CoroutineContainer = key;
    if (pMVar4 == (MVWorldObjectClient *)0x0) goto code_?;
    (*(code *)(pMVar4->fields)._.groupId)();
    this_01 = (this->fields)._.woDestroyedEventSubscribers;
    if (this_01 ==
        (Dictionary_2_System_Int32_System_Action_2_Object_WorldObjectDestroyedEventArgs_ *)0x0)
    goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Remove
              ((Dictionary_2_System_Int32_System_Object_ *)this_01,(int32_t)key,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__Remove_int_
              );
  }
  key_00 = (Object *)(wo->fields)._.groupId;
  if (key_00 != (Object *)0xffffffff) {
    pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(this->fields)._.worldObjects;
    if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    this_05 = (MVGroup *)
              MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
    ;
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      (pDVar1,key_00,(Object **)&stack0xfffffff0,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                      );
    if (bVar3 == 0) {
      pSVar5 = StringLiteral_Could_not_find_group_when_destro;
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
        pSVar5 = StringLiteral_Could_not_find_group_when_destro;
      }
    }
    else {
      if (this_05 == (MVGroup *)0x0) goto code_?;
      if (((TypeInfo__MVGroup->_1).typeHierarchyDepth <= (this_05->klass->_1).typeHierarchyDepth) &&
         ((MVGroup__Class *)
          (this_05->klass->_1).typeHierarchy[(TypeInfo__MVGroup->_1).typeHierarchyDepth - 1] ==
          TypeInfo__MVGroup)) {
        if (this_05 == (MVGroup *)0x0) goto code_?;
        if ((((this_05->klass->_1).typeHierarchyDepth < (TypeInfo__MVGroup->_1).typeHierarchyDepth)
            || ((MVGroup__Class *)
                (this_05->klass->_1).typeHierarchy[(TypeInfo__MVGroup->_1).typeHierarchyDepth - 1]
                != TypeInfo__MVGroup)) || (this_05 == (MVGroup *)0x0)) {
          func_?();
          goto code_?;
        }
        MVGroup::MVGroup_RemoveChild(this_05,id,(MethodInfo *)0x0);
        goto code_?;
      }
      if (this_05 == (MVGroup *)0x0) goto code_?;
      pSVar5 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xffffffe0,(MethodInfo *)0x0)
      ;
      pSVar5 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_World_object_is_attached_to_non_,pSVar5,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)pSVar5,(MethodInfo *)0x0);
  }
code_?:
  pMStack_2 = wo;
  (*(wo->klass->vtable).Destroy.methodPtr)();
  this_02 = (this->fields)._.worldObjects;
  if (this_02 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Remove
              ((Dictionary_2_System_Int32_System_Object_ *)this_02,(wo->fields)._.id,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Remove_int_
              );
    pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar6 != (MVNetworkGame *)0x0) &&
       (this_03 = (LogicObjectManager *)(pMVar6->fields)._LogicObjectManager_k__BackingField,
       this_03 != (LogicObjectManager *)0x0)) {
      MVWorldObject.dll::LogicObjectManager::LogicObjectManager_RemoveLogicObjectFromUpdate
                (this_03,id,(MethodInfo *)0x0);
      return;
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
  this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields)._.worldObjects;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryGetValue
              (this_00,(Object *)id,(Object **)&RStack_6,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
              );
    if ((((RStack_6 == (RegexCharClass_SingleRange)0x0) ||
         (*(byte *)(*(int *)RStack_6 + 0xb4) < (TypeInfo__MVGroup->_1).typeHierarchyDepth)) ||
        (*(MVGroup__Class **)
          (*(int *)(*(int *)RStack_6 + 100) + -4 +
          (uint)(TypeInfo__MVGroup->_1).typeHierarchyDepth * 4) != TypeInfo__MVGroup)) ||
       (RStack_6 == (RegexCharClass_SingleRange)0x0)) {
code_?:
      MVWorldObjectClientManagerNetwork_DeleteWO(this,id,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    method_00 = (MethodInfo *)&UNK_?;
    this_01 = (MVGroup *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        ((MVWorldObjectClientManager *)this,id,(MethodInfo *)0x0);
    if (this_01 != (MVGroup *)0x0) {
      if (((this_01->klass->_1).typeHierarchyDepth < (TypeInfo__MVGroup->_1).typeHierarchyDepth) ||
         ((MVGroup__Class *)
          (this_01->klass->_1).typeHierarchy[(TypeInfo__MVGroup->_1).typeHierarchyDepth - 1] !=
          TypeInfo__MVGroup)) {
        func_?();
      }
      else {
        this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  MVGroup::MVGroup_get_Children(this_01,(MethodInfo *)0x0);
        if (this_02 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
          pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                             ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                               *)&stack0xffffffdc,this_02,
                              MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                             );
          RVar8 = pLVar7->_current;
          uStack_1 = 1;
          RStack_6 = (RegexCharClass_SingleRange)&stack0xffffffc8;
          while( true ) {
            bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc8,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                              );
            if (bVar9 == 0) break;
            if (RVar8 == (RegexCharClass_SingleRange)0x0) goto code_?;
            MVWorldObjectClientManagerNetwork_DestroyWO
                      (this,*(int32_t *)((int)RVar8 + 8),(MethodInfo *)0x0);
          }
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&stack0xffffffc8,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                     ,method_00);
          uStack_1 = 0xffffffff;
          goto code_?;
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
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_HandleTransferWorldObjectsToGrou,(MethodInfo *)0x0);
  }
  if ((this->fields)._.OnTransferWosResponse !=
      (EventHandler_1_OnTransferWosResponseEventArgs_ *)0x0) {
    pEVar1 = (this->fields)._.OnTransferWosResponse;
    this_00 = (TweenRunner_1_FloatTween_ *)func_?(TypeInfo__OnTransferWosResponseEventArgs)
    ;
    if (this_00 == (TweenRunner_1_FloatTween_ *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__EventArgs);
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__EventArgs);
    }
    UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
    TweenRunner_1_FloatTween___ctor(this_00,(MethodInfo *)0x0);
    *(bool *)&(this_00->fields).m_CoroutineContainer = success;
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
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar1,(MethodInfo *)0x0);
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
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields)._.worldObjects;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)id,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      return 0;
    }
    if (lockObject == 0) {
      actorNr = 0;
    }
    else {
      this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((this_01 == (MVNetworkGame *)0x0) ||
         (pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0),
         pMVar2 == (MVLocalPlayer *)0x0)) goto code_?;
      actorNr = (pMVar2->fields)._._ActorNr_k__BackingField;
    }
    pMVar3 = this;
    MVWorldObjectClientManagerNetwork_SetOwnerInHierarchy(this,id,actorNr,(MethodInfo *)0x0);
    uVar4 = (undefined1)((uint)pMVar3 >> 0x18);
    if ((this->fields)._.OnHierarchyLockedResponse !=
        (EventHandler_1_OnHierarchyLockedEventArgs_ *)0x0) {
      pEVar5 = (this->fields)._.OnHierarchyLockedResponse;
      this_02 = (TweenRunner_1_FloatTween_ *)func_?();
      if (this_02 == (TweenRunner_1_FloatTween_ *)0x0) goto code_?;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__EventArgs);
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__EventArgs);
      }
      UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
      TweenRunner_1_FloatTween___ctor(this_02,(MethodInfo *)0x0);
      (this_02->fields).m_CoroutineContainer = (MonoBehaviour *)id;
      *(undefined1 *)&(this_02->fields).m_Tween = uVar4;
      (*(pEVar5->fields)._._.invoke_impl)
                ((pEVar5->fields)._._.method_code,this,this_02,(pEVar5->fields)._._.method);
    }
    return 1;
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  bVar1 = (*pcVar6)();
  return bVar1;
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
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(this->fields)._.worldObjects;
  if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    func_?();
  }
  else {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      (pDVar1,(Object *)seatOwnerWoID,(Object **)&stack0xfffffff8,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                      );
    if (bVar2 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_SeatOwnerWorldObject_Not_found,(MethodInfo *)0x0);
      return;
    }
    pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(this->fields)._.worldObjects;
    if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    this_00 = (MVVehicleBase *)&stack0xfffffff4;
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      (pDVar1,(Object *)worldObjectID,(Object **)this_00,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                      );
    if (bVar2 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_worldObjectClient_not_found,(MethodInfo *)0x0);
      return;
    }
    if (this_00 == (MVVehicleBase *)0x0) goto code_?;
    if ((((this_00->klass->_1).typeHierarchyDepth < (TypeInfo__MVVehicleBase->_1).typeHierarchyDepth
         ) || ((MVVehicleBase__Class *)
               (this_00->klass->_1).typeHierarchy
               [(TypeInfo__MVVehicleBase->_1).typeHierarchyDepth - 1] != TypeInfo__MVVehicleBase))
       || (this_00 == (MVVehicleBase *)0x0)) goto code_?;
    if (((MVVehicleBase__Class *)worldObjectID == (MVVehicleBase__Class *)0x0) ||
       (((pMVar3 = (MVAvatar__Class *)(((MVVehicleBase__Class *)worldObjectID)->_0).image,
         (TypeInfo__MVAvatar->_1).typeHierarchyDepth <= (pMVar3->_1).typeHierarchyDepth &&
         ((MVAvatar__Class *)
          (pMVar3->_1).typeHierarchy[(TypeInfo__MVAvatar->_1).typeHierarchyDepth - 1] ==
          TypeInfo__MVAvatar)) &&
        ((MVVehicleBase__Class *)worldObjectID != (MVVehicleBase__Class *)0x0)))) {
      MVVehicleBase::MVVehicleBase_Enter(this_00,(MVAvatar *)worldObjectID,seatID,(MethodInfo *)0x0)
      ;
      return;
    }
  }
  func_?();
code_?:
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
    func_?(&TypeInfo__CloneWorldObjectTreeResponseEventArgs);
    cRam_? = '\x01';
  }
  if ((this->fields)._.CloneWorldObjectTreeResponse ==
      (EventHandler_1_CloneWorldObjectTreeResponseEventArgs_ *)0x0) {
    return;
  }
  this_00 = (TweenRunner_1_FloatTween_ *)
            func_?(TypeInfo__CloneWorldObjectTreeResponseEventArgs);
  if (this_00 != (TweenRunner_1_FloatTween_ *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__EventArgs);
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__EventArgs);
    }
    UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
    TweenRunner_1_FloatTween___ctor(this_00,(MethodInfo *)0x0);
    *(bool *)&(this_00->fields).m_Tween = success;
    (this_00->fields).m_CoroutineContainer = (MonoBehaviour *)rootId;
    pEVar1 = (this->fields)._.CloneWorldObjectTreeResponse;
    if (pEVar1 != (EventHandler_1_CloneWorldObjectTreeResponseEventArgs_ *)0x0) {
      (*(pEVar1->fields)._._.invoke_impl)
                ((pEVar1->fields)._._.method_code,this,this_00,(pEVar1->fields)._._.method);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields)._.worldObjects;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)worldObjectID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Attempt_to_remove_data_from_Worl,(MethodInfo *)0x0);
      return;
    }
    this_01 = (this->fields)._.worldObjects;
    if (this_01 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,worldObjectID,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                         );
      if (pOVar2 != (Object *)0x0) {
        (**(code **)&pOVar2->klass[1]._1.field_count)();
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
  DStack_8._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_8._index = 0;
  DStack_8._version = 0;
  DStack_8._currentValue = (Object *)0x0;
  this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
            (this->fields)._.worldObjects;
  if (this_00 !=
      (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0) {
    method_00 = (MethodInfo *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Values
                          (this_00,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                          );
    if (method_00 != (MethodInfo *)0x0) {
      pDVar9 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
               Regex+CachedCodeEntryKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                         (&DStack_10,
                          (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                           *)method_00,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                         );
      DStack_8._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar9->_dictionary;
      DStack_8._index = pDVar9->_index;
      DStack_8._version = pDVar9->_version;
      DStack_8._currentValue = pDVar9->_currentValue;
      DStack_10._version = 0;
      uStack_1 = 1;
      DStack_10._currentValue = (Object *)&DStack_8;
      while( true ) {
        bVar11 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                Object,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                          (&DStack_8,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
                          );
        if (bVar11 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&DStack_8,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = uStack_3;
          return 0 < iVar6;
        }
        if (DStack_8._currentValue == (Object *)0x0) break;
        if ((DStack_8._currentValue[5].klass == (Object__Class *)profileID) &&
           (DStack_8._currentValue[2].klass == (Object__Class *)itemID)) {
          func_?(0x31,DStack_8._currentValue);
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
  pIVar1 = (Int32__Array *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
           Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                     ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,groupId,
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                     );
  if (pIVar1 == (Int32__Array *)0x0) {
    pIVar1 = (Int32__Array *)0x0;
code_?:
    uVar2 = 0;
    if (worldObjectsToGroup == (Int32__Array *)0x0) goto code_?;
    piVar3 = worldObjectsToGroup->vector;
    while( true ) {
      if ((int)worldObjectsToGroup->max_length <= (int)uVar2) {
        return;
      }
      if (worldObjectsToGroup->max_length <= uVar2) break;
      if (pIVar1 == (Int32__Array *)0x0) goto code_?;
      (*(code *)((Object__Class *)pIVar1->klass)[3].vtable.Finalize.method)
                (pIVar1,*piVar3,((Object__Class *)pIVar1->klass)[3].vtable.GetHashCode.methodPtr);
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 1;
    }
    func_?();
    pMVar4 = extraout_EDX;
    pIVar1 = worldObjectsToGroup;
  }
  else {
    pMVar4 = TypeInfo__MVGroup;
    if (((TypeInfo__MVGroup->_1).typeHierarchyDepth <=
         (((Object__Class *)pIVar1->klass)->_1).typeHierarchyDepth) &&
       ((MVGroup__Class *)
        (((Object__Class *)pIVar1->klass)->_1).typeHierarchy
        [(TypeInfo__MVGroup->_1).typeHierarchyDepth - 1] == TypeInfo__MVGroup))
    goto code_?;
  }
  func_?(pIVar1,pMVar4);
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields)._.worldObjects;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)worldObjectID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Attempt_to_update_WorldObjectDat,(MethodInfo *)0x0);
      return;
    }
    pDVar2 = (this->fields)._.worldObjects;
    if (pDVar2 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,worldObjectID,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                         );
      if (pOVar3 != (Object *)0x0) {
        pOVar3[0xb].klass = (Object__Class *)worldObjectData;
        func_?();
        pDVar2 = (this->fields)._.worldObjects;
        if (pDVar2 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
          pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,worldObjectID,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                             );
          if (pOVar3 != (Object *)0x0) {
            (*pOVar3->klass[2].vtable.Finalize.methodPtr)();
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
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields)._.worldObjects;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)worldObjectID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Attempt_to_update_WorldObjectDat,(MethodInfo *)0x0);
      return;
    }
    this_01 = (this->fields)._.worldObjects;
    if (this_01 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,worldObjectID,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                         );
      if (pOVar2 != (Object *)0x0) {
        (*(code *)pOVar2->klass[1]._1.token)();
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
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields)._.worldObjects;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)worldObjectID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Attempt_to_update_WorldObjectDat,(MethodInfo *)0x0);
      return;
    }
    this_01 = (this->fields)._.worldObjects;
    if (this_01 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,worldObjectID,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                         );
      if ((pOVar2 != (Object *)0x0) && (pOVar2[0x1a].klass != (Object__Class *)0x0)) {
        MVRuntimeDataVariables::MVRuntimeDataVariables_Receive
                  ((MVRuntimeDataVariables *)pOVar2[0x1a].klass,
                   (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
        (*pOVar2->klass[2].vtable.GetHashCode.methodPtr)();
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
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            (this->fields)._.woDestroyedEventSubscribers;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      (this_00,(Object *)woID,(Object **)&pWStack_1,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__TryGetValue_int__System__Action<System::Object,_WorldObjectDestroyedEventArgs>__
                      );
    pWVar3 = pWStack_1;
    if (bVar2 == 0) {
      return;
    }
    pWStack_1 = TypeInfo__WorldObjectDestroyedEventArgs;
    this_02 = (TweenRunner_1_FloatTween_ *)func_?();
    if (this_02 != (TweenRunner_1_FloatTween_ *)0x0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__EventArgs);
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__EventArgs);
      }
      UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
      TweenRunner_1_FloatTween___ctor(this_02,(MethodInfo *)0x0);
      (this_02->fields).m_CoroutineContainer = (MonoBehaviour *)woID;
      if (pWVar3 != (WorldObjectDestroyedEventArgs__Class *)0x0) {
        uVar4._0_2_ = (pWVar3->_0).byval_arg.attrs;
        uVar4._2_1_ = (pWVar3->_0).byval_arg.type;
        uVar4._3_1_ = (pWVar3->_0).byval_arg.field_0x7;
        (*(code *)(pWVar3->_0).namespaze)((pWVar3->_0).element_class,this,this_02,uVar4);
        this_01 = (this->fields)._.woDestroyedEventSubscribers;
        if (this_01 !=
            (Dictionary_2_System_Int32_System_Action_2_Object_WorldObjectDestroyedEventArgs_ *)0x0)
        {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__Remove
                    ((Dictionary_2_System_Int32_System_Object_ *)this_01,woID,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__Remove_int_
                    );
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
  pOStack_4 = (Object__Class *)0x0;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                      ((MVWorldObjectClientManager *)this,WorldObjectType__Enum_CollectibleItem,
                       (MethodInfo *)0x0);
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                         *)&stack0xffffffd8,this_00,
                        MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                       );
    RVar6 = pLVar5->_current;
    uStack_1 = 1;
    while( true ) {
      bVar7 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&pOStack_4,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                        );
      if (bVar7 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)&pOStack_4,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                   ,in_stack_8);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (RVar6 == (RegexCharClass_SingleRange)0x0) break;
      (**(code **)(*(int *)RVar6 + 0x14c))();
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
  DStack_7._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_7._index = 0;
  DStack_7._version = 0;
  DStack_7._currentValue = (Object *)0x0;
  this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
            (this->fields)._.worldObjects;
  if (this_00 !=
      (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0) {
    this_02 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
              RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
              Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Values
                        (this_00,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                        );
    if (this_02 !=
        (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
         *)0x0) {
      pDVar8 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
               Regex+CachedCodeEntryKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                         (&DStack_9,this_02,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                         );
      DStack_7._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar8->_dictionary;
      DStack_7._index = pDVar8->_index;
      DStack_7._version = pDVar8->_version;
      DStack_7._currentValue = pDVar8->_currentValue;
      DStack_9._version = 0;
      uStack_1 = 1;
      DStack_9._currentValue = (Object *)&DStack_7;
      while( true ) {
        bVar10 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                Object,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                          (&DStack_7,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
                          );
        pOVar11 = DStack_7._currentValue;
        if (bVar10 == 0) break;
        unaff_EDI = (EventHandler_1_EventArgs_ *)pOVar11;
        if ((EventHandler_1_EventArgs_ *)DStack_7._currentValue == (EventHandler_1_EventArgs_ *)0x0
           ) goto code_?;
        (*(code *)((EventHandler_1_EventArgs___Class *)(DStack_7._currentValue)->klass)[1]._0.
                  declaringType)
                  (DStack_7._currentValue,
                   ((EventHandler_1_EventArgs___Class *)(DStack_7._currentValue)->klass)[1]._0.
                   parent);
        iVar12 = func_?(pOVar11,TypeInfo__ILogicWorldObject);
        if (iVar12 != 0) {
          pIStack_13 = TypeInfo__ILogicWorldObject;
          if ((EventHandler_1_EventArgs_ *)pOVar11 == (EventHandler_1_EventArgs_ *)0x0)
          goto code_?;
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
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&DStack_7,
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
          if ((this->fields)._.OnResetWorldDone != (EventHandler_1_EventArgs_ *)0x0) {
            unaff_EDI = (this->fields)._.OnResetWorldDone;
            this_03 = (TweenRunner_1_FloatTween_ *)func_?();
            if (this_03 == (TweenRunner_1_FloatTween_ *)0x0) goto code_?;
            UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
            TweenRunner_1_FloatTween___ctor(this_03,(MethodInfo *)0x0);
            (*(unaff_EDI->fields)._._.invoke_impl)
                      ((unaff_EDI->fields)._._.method_code,this,this_03,
                       (unaff_EDI->fields)._._.method);
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
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
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
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
            ((Object *)StringLiteral_SetOwnerInHierarchy_has_been_cal,(MethodInfo *)0x0);
  pDVar2 = (this->fields)._.worldObjects;
  if (pDVar2 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,id,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                       );
    if (pOVar3 != (Object *)0x0) {
      pOVar3[4].monitor = (MonitorData *)actorNr;
      pDVar2 = (this->fields)._.worldObjects;
      if (pDVar2 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
        pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,id,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                           );
        if (pOVar3 != (Object *)0x0) {
          left = mscorlib.dll::System::Object::Object_GetType(pOVar3,(MethodInfo *)0x0);
          handle = TypeRef__MVGroup;
          if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          right = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                            ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
          bVar4 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                            ((Object **)left,(Object **)right,(MethodInfo *)0x0);
          if (bVar4 == 0) {
code_?:
            *unaff_FS_OFFSET = iVar1;
            return;
          }
          pDVar2 = (this->fields)._.worldObjects;
          if (pDVar2 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
            this_00 = (MVGroup *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::
                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,id,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                                );
            if (this_00 != (MVGroup *)0x0) {
              if (((this_00->klass->_1).typeHierarchyDepth <
                   (TypeInfo__MVGroup->_1).typeHierarchyDepth) ||
                 ((MVGroup__Class *)
                  (this_00->klass->_1).typeHierarchy[(TypeInfo__MVGroup->_1).typeHierarchyDepth - 1]
                  != TypeInfo__MVGroup)) {
                func_?();
              }
              else {
                this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                          MVGroup::MVGroup_get_Children(this_00,(MethodInfo *)0x0);
                if (this_01 !=
                    (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
                  pLVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                           RegularExpressions::RegexCharClass+SingleRange]::
                           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                                     ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                       *)&stack0xffffffdc,this_01,
                                      MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                                     );
                  RVar6 = pLVar5->_current;
                  while( true ) {
                    bVar4 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System
                            ::Object]::List_1_T_Enumerator_System_Object__MoveNext
                                      ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc8,
                                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                                      );
                    if (bVar4 == 0) break;
                    if (RVar6 == (RegexCharClass_SingleRange)0x0) goto code_?;
                    *(int32_t *)((int)RVar6 + 0x24) = actorNr;
                  }
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                            ((Object *)&stack0xffffffc8,
                             (ExceptionArgument__Enum)
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                             ,in_stack_7);
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
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields)._.worldObjects;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)id,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      return 0;
    }
    pDVar2 = (this->fields)._.worldObjects;
    if (pDVar2 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,id,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                         );
      if (pOVar3 != (Object *)0x0) {
        pOVar3[4].monitor = (MonitorData *)ownerActorNr;
        pDVar2 = (this->fields)._.worldObjects;
        if (ownerActorNr == 0) {
          if (pDVar2 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
            pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32Enum,System::Object]::
                     Dictionary_2_System_Int32Enum_System_Object__get_Item
                               ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,id,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                               );
            if (pOVar3 != (Object *)0x0) {
              pOStack4 = (Object__StaticFields *)pOVar3->klass[3]._1.typeHierarchy;
              (*(code *)pOVar3->klass[3].rgctx_data)();
              return 1;
            }
          }
        }
        else if (pDVar2 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
          pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,id,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                             );
          if (pOVar3 != (Object *)0x0) {
            pOStack4 = pOVar3->klass[3].static_fields;
            (*(code *)pOVar3->klass[3].interfaceOffsets)();
            return 1;
          }
        }
      }
    }
  }
  func_?();
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
  _success = (TransformNetworkManager *)(uint)success;
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
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields)._.worldObjects;
  if (this_00 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)
  goto code_?;
  bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          Object,GUILoginHandler+PlanetData]::
          Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                    (this_00,(Object *)id,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                    );
  if (bVar2 == 0) {
    return 0;
  }
  if (bVar1 == 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)StringLiteral_Failed_to_set_ownership___,(MethodInfo *)0x0);
  }
  else {
    pDVar3 = (this->fields)._.worldObjects;
    if (pDVar3 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) goto code_?;
    pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar3,id,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                       );
    if (pOVar4 == (Object *)0x0) goto code_?;
    pOVar4[4].monitor = (MonitorData *)ownerActorNr;
    if (ownerActorNr == 0) {
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar5 == (MVNetworkGame *)0x0) ||
         (this_01 = (pMVar5->fields).transformNetworkManager,
         this_01 == (TransformNetworkManager *)0x0)) goto code_?;
      pMVar6 = TransformNetworkManager::TransformNetworkManager_GetNetworkObject
                         (this_01,id,(MethodInfo *)0x0);
      if (pMVar6 != (MVNetworkObject *)0x0) {
        if (((TypeInfo__MVNetworkReporter->_1).typeHierarchyDepth <=
             (pMVar6->klass->_1).typeHierarchyDepth) &&
           ((pMVar6->klass->_1).typeHierarchy
            [(TypeInfo__MVNetworkReporter->_1).typeHierarchyDepth - 1] ==
            (Il2CppClass *)TypeInfo__MVNetworkReporter)) {
          pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar5 == (MVNetworkGame *)0x0) ||
             (_success = (pMVar5->fields).transformNetworkManager,
             _success == (TransformNetworkManager *)0x0)) goto code_?;
          ownerActorNr = (int32_t)&UNK_?;
          TransformNetworkManager::TransformNetworkManager_RemoveNetworkObject
                    (_success,id,(MethodInfo *)0x0);
        }
      }
    }
    else {
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar5 == (MVNetworkGame *)0x0) goto code_?;
      pDVar3 = (this->fields)._.worldObjects;
      if (pDVar3 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__get_Item
                ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar3,id,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                );
      this_02 = TypeInfo__MVNetworkReporter;
      this_03 = (MVNetworkReporter *)func_?();
      if (this_03 == (MVNetworkReporter *)0x0) goto code_?;
      MVNetworkReporter::MVNetworkReporter__ctor
                (this_03,(MVWorldObjectClient *)&UNK_?,(MethodInfo *)0x0);
      if (this_02 == (MVNetworkReporter__Class *)0x0) goto code_?;
      TransformNetworkManager::TransformNetworkManager_AddReporter
                ((TransformNetworkManager *)this_02,id,this_03,(MethodInfo *)0x0);
    }
  }
  if ((this->fields)._.OnWorldObjectTransferOwnershipResponse !=
      (EventHandler_1_OnTransferOwnershipResponseEventArgs_ *)0x0) {
    this_04 = (TweenRunner_1_FloatTween_ *)func_?();
    if (this_04 == (TweenRunner_1_FloatTween_ *)0x0) {
code_?:
      func_?();
      pcVar7 = (code *)swi(3);
      bVar1 = (*pcVar7)();
      return bVar1;
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__EventArgs);
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__EventArgs);
    }
    UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
    TweenRunner_1_FloatTween___ctor(this_04,(MethodInfo *)0x0);
    (this_04->fields).m_Tween = (IEnumerator *)ownerActorNr;
    *(bool *)&this_04[1].klass = success;
    (this_04->fields).m_CoroutineContainer = (MonoBehaviour *)id;
    (*_UNK_?)(_UNK_?,this,this_04,_UNK_?);
  }
  return 1;
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
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields)._.worldObjects;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)id,
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
    (this->fields)._.worldObjects = this_00;
    func_?(&this->fields,this_00);
    this_01 = (Queue_1_System_Int32_ *)
              func_?(TypeInfo__System__Collections__Generic__Queue<int>);
    if (this_01 != (Queue_1_System_Int32_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::
      Stack_1_System_Object___ctor
                ((Stack_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__Queue<int>__Queue__);
      (this->fields)._.pendingUngroupQueue = this_01;
      func_?(&(this->fields)._.pendingUngroupQueue,this_01);
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
        (this->fields)._.woDestroyedEventSubscribers = this_02;
        func_?(&(this->fields)._.woDestroyedEventSubscribers,this_02);
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
          pMVar1 = (MethodInfo *)&(this->fields)._.woCreatedEventSubscribers;
          (this->fields)._.woCreatedEventSubscribers = this_03;
          func_?(pMVar1,this_03);
          (this->fields)._.rootGroupId = -1;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)this,ExceptionArgument__Enum_obj,pMVar1);
          this_04 = (MoveableController *)func_?(TypeInfo__MoveableController);
          if (this_04 != (MoveableController *)0x0) {
            MoveableController::MoveableController__ctor(this_04,(MethodInfo *)0x0);
            (this->fields)._._MoveableController_k__BackingField = this_04;
            func_?(&(this->fields)._._MoveableController_k__BackingField,this_04);
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
                    (this->fields)._.worldObjectMapping = value;
                    func_?(&(this->fields)._.worldObjectMapping,value);
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


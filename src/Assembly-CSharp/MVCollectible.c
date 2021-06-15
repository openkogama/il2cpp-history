
/* Void Create() */

void Assembly-CSharp.dll::MVCollectible::MVCollectible_Create
               (MVCollectible *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (MVCollectibleObject *)(this->fields)._._._.component;
  if (pMVar1 == (MVCollectibleObject *)0x0) {
    pMVar2 = (MVCollectibleObject *)0x0;
  }
  else {
    bVar3 = (TypeInfo__MVCollectibleObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pMVar1->klass)->_1).naturalAligment < bVar3) ||
       ((((ObjectPrefab__Class *)pMVar1->klass)->_1).typeHierarchy[bVar3 - 1] !=
        (Il2CppClass *)TypeInfo__MVCollectibleObject)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    pMVar2 = (MVCollectibleObject *)0x0;
    if (bVar4) {
      pMVar2 = pMVar1;
    }
    if (pMVar2 == (MVCollectibleObject *)0x0) {
      func_?(pMVar1,TypeInfo__MVCollectibleObject);
      goto code_?;
    }
  }
  (this->fields).collectibleObject = pMVar2;
  if (pMVar2 == (MVCollectibleObject *)0x0) goto code_?;
  pTVar5 = (pMVar2->fields).triggerBoxEvents;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar6 == 0) {
    pTVar7 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
    if (pTVar7 == (Type *)0x0) goto code_?;
    pSVar8 = (String *)(*(code *)(pTVar7->klass->vtable).__unknown.method)(pTVar7);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar8 = mscorlib.dll::System::String::String_Concat_2
                        (StringLiteral_A_TriggerBoxEvents_object_is_mis,pSVar8,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)pSVar8,(MethodInfo *)0x0);
  }
  else {
    pMVar1 = (this->fields).collectibleObject;
    if (pMVar1 == (MVCollectibleObject *)0x0) goto code_?;
    pTVar5 = (pMVar1->fields).triggerBoxEvents;
    pUVar9 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar9,(Object *)this,
               MethodInfo__MVCollectible__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
               ,
               MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
              );
    if (pTVar5 == (TriggerBoxEvents *)0x0) goto code_?;
    TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
              (pTVar5,(EventHandler_1_TriggerEventArgs_ *)pUVar9,(MethodInfo *)0x0);
  }
  pMVar1 = (this->fields).collectibleObject;
  if (pMVar1 != (MVCollectibleObject *)0x0) {
    pAVar10 = (pMVar1->fields).allWorldObjectTriggerBoxEvents;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pAVar10,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar6 == 0) {
      pTVar7 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
      if (pTVar7 != (Type *)0x0) {
        pSVar8 = (String *)
                  (*(code *)(pTVar7->klass->vtable).__unknown.method)
                            (pTVar7,(pTVar7->klass->vtable).get_ReflectedType.methodPtr);
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        pSVar8 = mscorlib.dll::System::String::String_Concat_2
                            (StringLiteral_A_AllWorldObjectTriggerBoxEvents,pSVar8,
                             (MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)pSVar8,(MethodInfo *)0x0);
code_?:
        MVCollectible_SetVisible(this,(MethodInfo *)0x0);
        uVar11 = *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
        piVar12 = &(this->fields)._._._.interactionFlags;
        *(uint *)piVar12 = (uint)*piVar12 | 0x40000000;
        *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) = uVar11;
        return;
      }
    }
    else {
      pMVar1 = (this->fields).collectibleObject;
      if (pMVar1 != (MVCollectibleObject *)0x0) {
        pAVar10 = (pMVar1->fields).allWorldObjectTriggerBoxEvents;
        pUVar9 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar9,(Object *)this,
                   MethodInfo__MVCollectible__allWorldObjectTriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   ,
                   MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                  );
        if (pAVar10 != (AllWorldObjectTriggerBoxEvents *)0x0) {
          AllWorldObjectTriggerBoxEvents::AllWorldObjectTriggerBoxEvents_add_TriggerEnter
                    (pAVar10,(EventHandler_1_TriggerEventArgs_ *)pUVar9,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVCollectible::MVCollectible_Destroy
               (MVCollectible *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVGamePointRewardLogicObject::MVGamePointRewardLogicObject_Destroy
            ((MVGamePointRewardLogicObject *)this,(MethodInfo *)0x0);
  if ((this->fields).initializedInWorld == 0) {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pPVar1 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pPVar1 == (PrefabPool *)0x0) ||
     (pWVar2 = (WinningConditionManager *)
               PrefabPool::PrefabPool_get_MVSoundEmitterPrefab(pPVar1,(MethodInfo *)0x0),
     pWVar2 == (WinningConditionManager *)0x0)) goto code_?;
  this_00 = MVWorldObject.dll::WinningConditionManager::
            WinningConditionManager_GetSingletonWinnerConditionByType_6
                      (pWVar2,
                       AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
                      );
  if (this_00 == (TimeAttackFlagReachedClient *)0x0) {
    this_02 = (IsolatedStorageException *)func_?();
    this = (MVCollectible *)StringLiteral_AllCollectiblesCollected_not_fou;
    goto code_?;
  }
  pOVar3 = System.dll::System::Collections::Generic::
           SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
           Single,System::Object]::
           SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                     ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                       *)this_00,(MethodInfo *)0x0);
  if (pOVar3 != (Object *)0x0) {
    pOVar3 = System.dll::System::Collections::Generic::
             SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
             Single,System::Object]::
             SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                       ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                         *)this_00,(MethodInfo *)0x0);
    MVWorldObject.dll::WinningCondition::WinningCondition_SetLimit
              ((WinningCondition *)this_00,(int32_t)((int)&pOVar3[-1].monitor + 3),(MethodInfo *)0x0
              );
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    bVar4 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
    if (bVar4 == 0) {
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar5 == (MVNetworkGame *)0x0) {
      return;
    }
    pOVar3 = System.dll::System::Collections::Generic::
             SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
             Single,System::Object]::
             SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                       ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                         *)this_00,(MethodInfo *)0x0);
    if (pOVar3 == (Object *)0x0) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pPVar1 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pPVar1 != (PrefabPool *)0x0) {
        pWVar2 = (WinningConditionManager *)
                 PrefabPool::PrefabPool_get_MVSoundEmitterPrefab(pPVar1,(MethodInfo *)0x0);
        pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                            (MethodInfo *)0x0);
        if (pWVar2 != (WinningConditionManager *)0x0) {
          MVWorldObject.dll::WinningConditionManager::WinningConditionManager_RemoveWinnerCondition
                    (pWVar2,(int32_t)pOVar3,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
    else {
code_?:
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar5 != (MVNetworkGame *)0x0) {
        pAVar6 = (pMVar5->fields).OnWinningConditionFulfilled;
        this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_01,(Object *)this,
                   MethodInfo__MVCollectible__OnWinningConditionFulfilled_IWinningCondition_,
                   MethodInfo__System__Action<IWinningCondition>__Action_System__Object__void__);
        mscorlib.dll::System::Delegate::Delegate_Remove
                  ((Delegate *)pAVar6,(Delegate *)this_01,(MethodInfo *)0x0);
        pAVar6 = (Action_1_IWinningCondition_ *)func_?();
        (pMVar5->fields).OnWinningConditionFulfilled = pAVar6;
        return;
      }
    }
code_?:
    func_?();
  }
  this_02 = (IsolatedStorageException *)func_?();
  this = (MVCollectible *)StringLiteral_AllCollectiblesCollected_limit_i;
code_?:
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(this_02,(String *)this,(MethodInfo *)0x0);
  pMStack7 = MethodInfo__MVCollectible__Destroy__;
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Vector3 GetClosestGridPoint(Single, Vector3) */

Vector3 * Assembly-CSharp.dll::MVCollectible::MVCollectible_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,MVCollectible *this,float gridSize,
                    Vector3 position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                     ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0xffffffe4,*pVVar1,2.0,(MethodInfo *)0x0);
  fVar2 = pVVar1->z;
  this_00 = (this->fields)._._._.gameObject;
  if (this_00 != (GameObject *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      __return_storage_ptr___00 = (Quaternion *)&stack0xffffffe0;
      puVar3 = &UNK_?;
      pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         (__return_storage_ptr___00,this_01,(MethodInfo *)0x0);
      fVar5 = pQVar4->x;
      fVar6 = pQVar4->y;
      fVar7 = pQVar4->z;
      fVar8 = pQVar4->w;
      if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
        func_?();
      }
      worldPosition.z = position.z;
      worldPosition.x = position.x;
      worldPosition.y = position.y;
      rotation.y = fVar6;
      rotation.x = fVar5;
      rotation.z = fVar7;
      rotation.w = fVar8;
      scale.y = (float)__return_storage_ptr___00;
      scale.x = (float)puVar3;
      scale.z = fVar2;
      pVVar1 = SharedCubeFunctions::SharedCubeFunctions_GetClosestGridPoint
                         (&position,worldPosition,rotation,0.0,scale,(MethodInfo *)0x0);
      fVar5 = pVVar1->y;
      fVar2 = pVVar1->z;
      __return_storage_ptr___00->x = pVVar1->x;
      __return_storage_ptr___00->y = fVar5;
      __return_storage_ptr___00->z = fVar2;
      return (Vector3 *)__return_storage_ptr___00;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar9)();
  return pVVar1;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVCollectible::MVCollectible_Initialize
               (MVCollectible *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pPVar1 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pPVar1 == (PrefabPool *)0x0) {
code_?:
    func_?();
  }
  else {
    pWVar2 = (WinningConditionManager *)
             PrefabPool::PrefabPool_get_MVSoundEmitterPrefab(pPVar1,(MethodInfo *)0x0);
    if (pWVar2 == (WinningConditionManager *)0x0) goto code_?;
    this_00 = MVWorldObject.dll::WinningConditionManager::
              WinningConditionManager_GetSingletonWinnerConditionByType_6
                        (pWVar2,
                         AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
                        );
    if (this_00 == (TimeAttackFlagReachedClient *)0x0) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pPVar1 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pPVar1 != (PrefabPool *)0x0) {
        pWVar2 = (WinningConditionManager *)
                 PrefabPool::PrefabPool_get_MVSoundEmitterPrefab(pPVar1,(MethodInfo *)0x0);
        args = (Object__Array *)func_?();
        if (pWVar2 != (WinningConditionManager *)0x0) {
          this_00 = MVWorldObject.dll::WinningConditionManager::
                    WinningConditionManager_CreateWinnerCondition_6
                              (pWVar2,args,
                               AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__CreateWinnerCondition<AllCollectiblesCollectedClient>_System__Object____
                              );
          if (this_00 != (TimeAttackFlagReachedClient *)0x0) goto code_?;
        }
      }
      goto code_?;
    }
code_?:
    pOVar3 = System.dll::System::Collections::Generic::
             SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
             Single,System::Object]::
             SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                       ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                         *)this_00,(MethodInfo *)0x0);
    MVWorldObject.dll::WinningCondition::WinningCondition_SetLimit
              ((WinningCondition *)this_00,(int32_t)((int)&pOVar3->klass + 1),(MethodInfo *)0x0);
    pMVar4 = (this->fields).collectibleObject;
    (this->fields).initializedInWorld = 1;
    if (pMVar4 == (MVCollectibleObject *)0x0) goto code_?;
    MVLogicObject::MVLogicObject_SetupCulling
              ((MVLogicObject *)this,(pMVar4->fields).pickupMesh,2.0,(MethodInfo *)0x0);
    this_01 = PrefabPool::PrefabPool_get_MVTimeTriggerPrefab((PrefabPool *)this,(MethodInfo *)0x0);
    if (this_01 == (ObjectPrefab *)0x0) goto code_?;
    pMVar5 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                        ((MVRuntimeDataVariables *)this_01,StringLiteral_takenByList,1.0,0,
                         (MethodInfo *)0x0);
    (this->fields).takenByListRunTimeVariable = pMVar5;
    this_02 = (List_1_UnityEngine_Vector4_ *)func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              (this_02,
               MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__List__);
    (this->fields).takenByTeamList = (List_1_MV_WorldObject_MVTeam_ *)this_02;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar6 == (MVNetworkGame *)0x0) goto code_?;
    this_03 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
               *)InventoryItemPreviewer::InventoryItemPreviewer_get_PreviewGameObject
                           ((InventoryItemPreviewer *)pMVar6,(MethodInfo *)0x0);
    if (this_03 ==
        (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
         *)0x0) goto code_?;
    pOVar3 = System.dll::System::Collections::Generic::
             SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
             Single,System::Object]::
             SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                       (this_03,(MethodInfo *)0x0);
    if (pOVar3 == (Object *)0x2) goto code_?;
    pMVar5 = (this->fields).takenByListRunTimeVariable;
    if (pMVar5 == (MVRuntimeDataVariable *)0x0) goto code_?;
    pDVar7 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
               *)MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(pMVar5,(MethodInfo *)0x0);
    if (pDVar7 ==
        (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
         *)0x0) {
      this_05 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                 *)0x0;
code_?:
      piVar8 = (int *)func_?();
      if (piVar8 != (int *)0x0) {
        pSVar9 = (String *)(**(code **)(*piVar8 + 0xd8))();
        func_?();
        if (this_05 !=
            (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
             *)0x0) {
          bVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
                  WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
                  KogamaSettingWrapperBase]::
                  Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                            (this_05,pSVar9,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                            );
          if (bVar10 != 0) {
            pLVar11 = (List_1_UIPushOption_ *)(this->fields).takenByTeamList;
            if (pLVar11 == (List_1_UIPushOption_ *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
            List_1_UIPushOption__Add
                      (pLVar11,UIPushOption__Enum_None,
                       MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__Add_MV__WorldObject__MVTeam_
                      );
          }
          piVar8 = (int *)func_?();
          if (piVar8 != (int *)0x0) {
            pSVar9 = (String *)(**(code **)(*piVar8 + 0xd8))();
            func_?();
            bVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
                    WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
                    KogamaSettingWrapperBase]::
                    Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                              (this_05,pSVar9,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                              );
            if (bVar10 != 0) {
              pLVar11 = (List_1_UIPushOption_ *)(this->fields).takenByTeamList;
              if (pLVar11 == (List_1_UIPushOption_ *)0x0) goto code_?;
              mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
              List_1_UIPushOption__Add
                        (pLVar11,UIPushOption__Enum_Blocking,
                         MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__Add_MV__WorldObject__MVTeam_
                        );
            }
            piVar8 = (int *)func_?();
            if (piVar8 != (int *)0x0) {
              pSVar9 = (String *)(**(code **)(*piVar8 + 0xd8))();
              func_?();
              bVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
                      WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
                      KogamaSettingWrapperBase]::
                      Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                                (this_05,pSVar9,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                );
              if (bVar10 != 0) {
                pLVar11 = (List_1_UIPushOption_ *)(this->fields).takenByTeamList;
                if (pLVar11 == (List_1_UIPushOption_ *)0x0) goto code_?;
                mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
                List_1_UIPushOption__Add
                          (pLVar11,UIPushOption__Enum_HideAll,
                           MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__Add_MV__WorldObject__MVTeam_
                          );
              }
              piVar8 = (int *)func_?();
              if (piVar8 != (int *)0x0) {
                pSVar9 = (String *)(**(code **)(*piVar8 + 0xd8))();
                puVar12 = (undefined4 *)func_?();
                bVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
                        WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
                        KogamaSettingWrapperBase]::
                        Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                                  (this_05,pSVar9,(MethodInfo *)*puVar12);
                if (bVar10 != 0) {
                  pLVar11 = (List_1_UIPushOption_ *)(this->fields).takenByTeamList;
                  if (pLVar11 == (List_1_UIPushOption_ *)0x0) goto code_?;
                  mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
                  List_1_UIPushOption__Add
                            (pLVar11,UIPushOption__Enum_HideAll|UIPushOption__Enum_Blocking,
                             MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__Add_MV__WorldObject__MVTeam_
                            );
                }
code_?:
                MVCollectible_OnTakenByListChange(this,(MethodInfo *)0x0);
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  func_?();
                }
                pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (pMVar6 != (MVNetworkGame *)0x0) {
                  pAVar13 = (pMVar6->fields).OnWinningConditionFulfilled;
                  this_04 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                             *)func_?();
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                  SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                            (this_04,(Object *)this,
                             MethodInfo__MVCollectible__OnWinningConditionFulfilled_IWinningCondition_
                             ,
                             MethodInfo__System__Action<IWinningCondition>__Action_System__Object__void__
                            );
                  pAStack14 =
                       (Action_1_IWinningCondition_ *)
                       mscorlib.dll::System::Delegate::Delegate_Combine
                                 ((Delegate *)pAVar13,(Delegate *)this_04,(MethodInfo *)0x0);
                  pAVar13 = (Action_1_IWinningCondition_ *)0x0;
                  if (pAStack14 == (Action_1_IWinningCondition_ *)0x0) {
code_?:
                    (pMVar6->fields).OnWinningConditionFulfilled = pAVar13;
                    return;
                  }
                  if (pAStack14->klass == TypeInfo__System__Action<IWinningCondition>) {
                    pAVar13 = pAStack14;
                  }
                  pAStack15 = TypeInfo__System__Action<IWinningCondition>;
                  if (pAVar13 != (Action_1_IWinningCondition_ *)0x0) goto code_?;
                  goto code_?;
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
    bVar16 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((pDVar7->klass->_1).naturalAligment < bVar16) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar7->klass->_1).typeHierarchy[bVar16 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar17 = false;
    }
    else {
      bVar17 = true;
    }
    this_05 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
               *)0x0;
    if (bVar17) {
      this_05 = pDVar7;
    }
    if (this_05 !=
        (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
         *)0x0) goto code_?;
  }
  func_?();
  pAStack14 = extraout_ECX;
  pAStack15 = extraout_EDX;
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void OnPickup(Int32) */

void Assembly-CSharp.dll::MVCollectible::MVCollectible_OnPickup
               (MVCollectible *this,int32_t actorNr,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_04 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
     this_04 != (MVLocalPlayer *)0x0)) {
    this_09 = (MVPlayer *)0x0;
    pSVar2 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
             NamedThemeAttribute_1_UnityEngine_Color__get_Name
                       ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_04,(MethodInfo *)0x0);
    if (((String *)actorNr == pSVar2) && ((this->fields).state == 4)) {
      pMVar3 = (this->fields).collectibleObject;
      (this->fields).isVisible = 0;
      if ((pMVar3 != (MVCollectibleObject *)0x0) &&
         (this_00 = (pMVar3->fields).pickupItem, this_00 != (GreyOutObjectScript *)0x0)) {
        GreyOutObjectScript::GreyOutObjectScript_GreyOut(this_00,(MethodInfo *)0x0);
        pMVar3 = (this->fields).collectibleObject;
        (this->fields).state = 1;
        if ((pMVar3 != (MVCollectibleObject *)0x0) &&
           (this_01 = (pMVar3->fields).collectibleEffects, this_01 != (CollectibleEffects *)0x0)) {
          CollectibleEffects::CollectibleEffects_SetState
                    (this_01,MVCollectible_CollectibleClientState__Enum_PickedUp,(MethodInfo *)0x0);
          fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                            ((MethodInfo *)0x0);
          (this->fields).pickedUpTime = fVar4;
          return;
        }
      }
    }
    else {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_05 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((this_05 != (MVAvatar *)0x0) &&
         (this_06 = MVAvatar::MVAvatar_get_Shield(this_05,(MethodInfo *)0x0),
         this_06 != (MVRuntimeDataVariableClampedFloat *)0x0)) {
        bVar5 = MVPlayerContainer::MVPlayerContainer_TryGetValue
                          ((MVPlayerContainer *)this_06,actorNr,(MVPlayer **)&stack0xfffffff8,
                           (MethodInfo *)0x0);
        if (bVar5 == 0) {
          return;
        }
        if (this_09 != (MVPlayer *)0x0) {
          item_00 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                    KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                    KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                              ((KogamaSettingNumericBase_1_System_Single_ *)this_09,
                               (MethodInfo *)0x0);
          this_02 = (List_1_UnityEngine_Color32_ *)(this->fields).takenByTeamList;
          if (this_02 != (List_1_UnityEngine_Color32_ *)0x0) {
            item._4_4_ = 
            MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__Contains_MV__WorldObject__MVTeam_
            ;
            item.rgba = (int32_t)item_00;
            bVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                    List_1_UnityEngine_Color32__Contains(this_02,item,in_stack_6);
            if (bVar5 != 0) {
              return;
            }
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVGameControllerBase);
            }
            pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (((pMVar1 != (MVNetworkGame *)0x0) &&
                (this_07 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                                     ((DayNightCycle *)pMVar1,(MethodInfo *)0x0),
                this_07 != (SkyParam *)0x0)) &&
               (this_08 = MVTeamManager::MVTeamManager_GetTeamList
                                    ((MVTeamManager *)this_07,(MethodInfo *)0x0),
               this_08 != (List_1_MV_WorldObject_MVTeam_ *)0x0)) {
              pOVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                       ::Serialization::JsonProperty]::
                       Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                 ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                  this_08,
                                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                                 );
              if ((int)pOVar7 < 2) {
                return;
              }
              this_03 = (List_1_UIPushOption_ *)(this->fields).takenByTeamList;
              if (this_03 != (List_1_UIPushOption_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
                List_1_UIPushOption__Add
                          (this_03,(UIPushOption__Enum)item_00,
                           MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__Add_MV__WorldObject__MVTeam_
                          );
                MVCollectible_OnTakenByListChange(this,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnTakenByListChange() */

void Assembly-CSharp.dll::MVCollectible::MVCollectible_OnTakenByListChange
               (MVCollectible *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_02 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                          ((DayNightCycle *)pMVar1,(MethodInfo *)0x0), this_02 != (SkyParam *)0x0))
  {
    puVar2 = &UNK_?;
    iVar3 = MVTeamManager::MVTeamManager_TeamCount((MVTeamManager *)this_02,(MethodInfo *)0x0);
    if (iVar3 < 2) {
      return;
    }
    this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).takenByTeamList;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar1 != (MVNetworkGame *)0x0) &&
        (this_03 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
        this_03 != (MVLocalPlayer *)0x0)) &&
       (pIVar4 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                 KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                 KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                           ((KogamaSettingNumericBase_1_System_Single_ *)this_03,(MethodInfo *)0x0),
       this_00 != (List_1_UnityEngine_Color32_ *)0x0)) {
      item._4_4_ = 
      MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__Contains_MV__WorldObject__MVTeam_
      ;
      item.rgba = (int32_t)pIVar4;
      bVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
              List_1_UnityEngine_Color32__Contains(this_00,item,in_stack_6);
      if (bVar5 == 0) {
        return;
      }
      pMVar7 = (this->fields).collectibleObject;
      (this->fields).isVisible = 0;
      if ((pMVar7 != (MVCollectibleObject *)0x0) &&
         ((pMVar7->fields).pickupItem != (GreyOutObjectScript *)0x0)) {
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?(TypeInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>
                                     ,puVar2,this_02);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_01,(Object *)0x0,
                   MethodInfo__GreyOutObjectScript__GreyOutExec_GreyOutObjectScript__PickupOriginalMaterials_
                   ,
                   MethodInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>__Action_System__Object__void__
                  );
        GreyOutObjectScript::GreyOutObjectScript_ExecuteOnMaterials
                  ((GreyOutObjectScript *)0x0,
                   (Action_1_GreyOutObjectScript_PickupOriginalMaterials_ *)this_01,
                   (MethodInfo *)0x0);
        uRam_? = 0;
        return;
      }
    }
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnUpdate() */

void Assembly-CSharp.dll::MVCollectible::MVCollectible_OnUpdate
               (MVCollectible *this,MethodInfo *method)

{
  iVar1 = (this->fields).state;
  if (iVar1 == 1) {
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                      ((MethodInfo *)0x0);
    fVar2 = fVar2 - (this->fields).pickedUpTime;
    pfVar3 = &(this->fields).pickedUpStateDuration;
    if (*pfVar3 <= fVar2 && fVar2 != *pfVar3) {
      pMVar4 = (this->fields).collectibleObject;
      (this->fields).state = 2;
      if ((pMVar4 != (MVCollectibleObject *)0x0) &&
         (pCVar5 = (pMVar4->fields).collectibleEffects, pCVar5 != (CollectibleEffects *)0x0)) {
        CollectibleEffects::CollectibleEffects_SetState
                  (pCVar5,MVCollectible_CollectibleClientState__Enum_ReShowing,(MethodInfo *)0x0);
        return;
      }
code_?:
      func_?(0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else if (iVar1 == 2) {
    fVar2 = (this->fields).pickedUpTime;
    fVar7 = (this->fields).pickedUpStateDuration;
    fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                      ((MethodInfo *)0x0);
    fVar8 = fVar8 - (fVar7 + fVar2);
    pfVar3 = &(this->fields).reshowingStateDuration;
    if (*pfVar3 <= fVar8 && fVar8 != *pfVar3) {
      pMVar4 = (this->fields).collectibleObject;
      (this->fields).state = 3;
      if ((pMVar4 == (MVCollectibleObject *)0x0) ||
         (pCVar5 = (pMVar4->fields).collectibleEffects, pCVar5 == (CollectibleEffects *)0x0))
      goto code_?;
      CollectibleEffects::CollectibleEffects_SetState
                (pCVar5,MVCollectible_CollectibleClientState__Enum_Invisible,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void OnWinningConditionFulfilled(IWinningCondition) */

void Assembly-CSharp.dll::MVCollectible::MVCollectible_OnWinningConditionFulfilled
               (MVCollectible *this,IWinningCondition *winningCondition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_UIVertex_ *)(this->fields).takenByTeamList;
  if (this_00 != (List_1_UnityEngine_UIVertex_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
    List_1_UnityEngine_UIVertex__Clear
              (this_00,
               MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__Clear__);
    (*(code *)(this->klass->vtable).Reset.method)
              (this,(this->klass->vtable).OnObjectLinkChanged.methodPtr);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVCollectible::MVCollectible_Reset(MVCollectible *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVCollectible_SetVisible(this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
     this_02 != (MVLocalPlayer *)0x0)) {
    pIVar2 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
             KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                       ((KogamaSettingNumericBase_1_System_Single_ *)this_02,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 != (MVNetworkGame *)0x0) &&
       ((this_03 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                             ((DayNightCycle *)pMVar1,(MethodInfo *)0x0), this_03 != (SkyParam *)0x0
        && (this_04 = MVTeamManager::MVTeamManager_GetTeamList
                                ((MVTeamManager *)this_03,(MethodInfo *)0x0),
           this_04 != (List_1_MV_WorldObject_MVTeam_ *)0x0)))) {
      pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_04,
                          MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                         );
      if ((int)pOVar3 < 2) {
        return;
      }
      this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).takenByTeamList;
      if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
        item._4_4_ = 
        MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__Contains_MV__WorldObject__MVTeam_
        ;
        item.rgba = (int32_t)pIVar2;
        bVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                List_1_UnityEngine_Color32__Contains(this_00,item,in_stack_5);
        if (bVar4 == 0) {
          return;
        }
        if ((this->fields).isVisible == 0) {
          return;
        }
        pMVar6 = (this->fields).collectibleObject;
        (this->fields).isVisible = 0;
        if ((pMVar6 != (MVCollectibleObject *)0x0) &&
           ((pMVar6->fields).pickupItem != (GreyOutObjectScript *)0x0)) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pAStack7 = TypeInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>;
          this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (this_01,(Object *)in_stack_8,
                     MethodInfo__GreyOutObjectScript__GreyOutExec_GreyOutObjectScript__PickupOriginalMaterials_
                     ,
                     MethodInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>__Action_System__Object__void__
                    );
          GreyOutObjectScript::GreyOutObjectScript_ExecuteOnMaterials
                    (in_stack_8,
                     (Action_1_GreyOutObjectScript_PickupOriginalMaterials_ *)this_01,
                     (MethodInfo *)0x0);
          (in_stack_8->fields).isGreyedIn = 0;
          return;
        }
      }
    }
  }
  pAStack7 = (Action_1_GreyOutObjectScript_PickupOriginalMaterials___Class *)0x0;
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void SetVisible() */

void Assembly-CSharp.dll::MVCollectible::MVCollectible_SetVisible
               (MVCollectible *this,MethodInfo *method)

{
  if ((this->fields).isVisible == 0) {
    pMVar1 = (this->fields).collectibleObject;
    if ((pMVar1 == (MVCollectibleObject *)0x0) ||
       (this_00 = (pMVar1->fields).pickupItem, this_00 == (GreyOutObjectScript *)0x0))
    goto code_?;
    GreyOutObjectScript::GreyOutObjectScript_GreyIn(this_00,(MethodInfo *)0x0);
    (this->fields).isVisible = 1;
  }
  pMVar1 = (this->fields).collectibleObject;
  (this->fields).state = 0;
  if ((pMVar1 != (MVCollectibleObject *)0x0) &&
     (this_01 = (pMVar1->fields).collectibleEffects, this_01 != (CollectibleEffects *)0x0)) {
    CollectibleEffects::CollectibleEffects_SetState
              (this_01,MVCollectible_CollectibleClientState__Enum_Visible,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVCollectible(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVCollectible::MVCollectible__ctor
               (MVCollectible *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).isVisible = 1;
  (this->fields).pickedUpStateDuration = 0.8;
  (this->fields).reshowingStateDuration = 0.5;
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this_00 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_00 != (PrefabPool *)0x0) {
    prefabObject = PrefabPool::PrefabPool_get_MVCollectiblePrefab(this_00,(MethodInfo *)0x0);
    MVGamePointRewardLogicObject::MVGamePointRewardLogicObject__ctor
              ((MVGamePointRewardLogicObject *)this,data,(ObjectPrefab *)prefabObject,worldObjects,
               (MethodInfo *)0x0);
    MVCollectible_Create(this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void allWorldObjectTriggerBoxEvents_TriggerEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::MVCollectible::MVCollectible_allWorldObjectTriggerBoxEvents_TriggerEnter
               (MVCollectible *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).collectibleObject;
  if ((pMVar1 != (MVCollectibleObject *)0x0) &&
     (this_00 = (pMVar1->fields).worldObjectEnableController,
     this_00 != (WorldObjectEnableController *)0x0)) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        (MethodInfo *)0x0);
    if (pOVar2 != (Object *)0x2) {
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_04 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((e != (TriggerEventArgs *)0x0) && (this_04 != (MVWorldObjectClientManager *)0x0)) {
      this_11 = (MVPlayer *)0x0;
      this_05 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (this_04,(e->fields).instigatorWOID,(MethodInfo *)0x0);
      if (this_05 != (MVWorldObject *)0x0) {
        actorNr = (String *)
                  UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                  TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                  TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                            ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this_05,
                             (MethodInfo *)0x0);
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar3 != (MVNetworkGame *)0x0) &&
           (this_06 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar3,(MethodInfo *)0x0),
           this_06 != (MVLocalPlayer *)0x0)) {
          pSVar4 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                   NamedThemeAttribute_1_UnityEngine_Color__get_Name
                             ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_06,(MethodInfo *)0x0)
          ;
          if ((this->fields).takenByTeamList == (List_1_MV_WorldObject_MVTeam_ *)0x0) {
            return;
          }
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          this_07 = (MVAvatar *)
                    MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((this_07 != (MVAvatar *)0x0) &&
             (this_08 = MVAvatar::MVAvatar_get_Shield(this_07,(MethodInfo *)0x0),
             this_08 != (MVRuntimeDataVariableClampedFloat *)0x0)) {
            bVar5 = MVPlayerContainer::MVPlayerContainer_TryGetValue
                              ((MVPlayerContainer *)this_08,(int32_t)actorNr,
                               (MVPlayer **)&stack0xfffffff4,(MethodInfo *)0x0);
            if (bVar5 == 0) {
              return;
            }
            if (this_11 != (MVPlayer *)0x0) {
              item_00 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                        KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                        KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                                  ((KogamaSettingNumericBase_1_System_Single_ *)this_11,
                                   (MethodInfo *)0x0);
              if (pSVar4 != actorNr) {
                if ((int)actorNr < 1) {
                  return;
                }
                this_01 = (List_1_UnityEngine_Color32_ *)(this->fields).takenByTeamList;
                if (this_01 == (List_1_UnityEngine_Color32_ *)0x0) goto code_?;
                item._4_4_ = 
                MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__Contains_MV__WorldObject__MVTeam_
                ;
                item.rgba = (int32_t)item_00;
                bVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                        List_1_UnityEngine_Color32__Contains(this_01,item,in_stack_6);
                if (bVar5 != 0) {
                  return;
                }
              }
              else if ((this->fields).isVisible == 0) {
                return;
              }
              pMVar1 = (this->fields).collectibleObject;
              if (pMVar1 != (MVCollectibleObject *)0x0) {
                pAVar7 = (pMVar1->fields).audioSource;
                if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) !=
                     0) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                  func_?();
                }
                bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                                  ((Object_1 *)pAVar7,(MethodInfo *)0x0);
                if (bVar5 != 0) {
                  pMVar1 = (this->fields).collectibleObject;
                  if ((pMVar1 == (MVCollectibleObject *)0x0) ||
                     (pAVar7 = (pMVar1->fields).audioSource, pAVar7 == (AudioSource *)0x0))
                  goto code_?;
                  UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                            (pAVar7,(MethodInfo *)0x0);
                }
                pMVar1 = (this->fields).collectibleObject;
                if ((pMVar1 != (MVCollectibleObject *)0x0) &&
                   (this_02 = (pMVar1->fields).particles,
                   this_02 != (ObjectParticleEmitterScript *)0x0)) {
                  ObjectParticleEmitterScript::ObjectParticleEmitterScript_Play
                            (this_02,(MethodInfo *)0x0);
                  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                    func_?();
                  }
                  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                  if (((pMVar3 != (MVNetworkGame *)0x0) &&
                      (this_09 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                                           ((DayNightCycle *)pMVar3,(MethodInfo *)0x0),
                      this_09 != (SkyParam *)0x0)) &&
                     (this_10 = MVTeamManager::MVTeamManager_GetTeamList
                                          ((MVTeamManager *)this_09,(MethodInfo *)0x0),
                     this_10 != (List_1_MV_WorldObject_MVTeam_ *)0x0)) {
                    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft
                             ::Json::Serialization::JsonProperty]::
                             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                        this_10,
                                        MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                                       );
                    if ((int)pOVar2 < 2) {
                      return;
                    }
                    if (pSVar4 != actorNr) {
                      return;
                    }
                    this_03 = (List_1_UIPushOption_ *)(this->fields).takenByTeamList;
                    if (this_03 != (List_1_UIPushOption_ *)0x0) {
                      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
                      List_1_UIPushOption__Add
                                (this_03,(UIPushOption__Enum)item_00,
                                 MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__Add_MV__WorldObject__MVTeam_
                                );
                      MVCollectible_OnTakenByListChange(this,(MethodInfo *)0x0);
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
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVCollectible::MVCollectible_get_DocumentationType
          (MVCollectible *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_Star;
}


/* Void triggerBoxEvents_TriggerEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::MVCollectible::MVCollectible_triggerBoxEvents_TriggerEnter
               (MVCollectible *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).collectibleObject;
  if ((pMVar1 != (MVCollectibleObject *)0x0) &&
     (this_00 = (pMVar1->fields).worldObjectEnableController,
     this_00 != (WorldObjectEnableController *)0x0)) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        (MethodInfo *)0x0);
    if ((pOVar2 == (Object *)0x2) && ((this->fields).state == 0)) {
      (this->fields).state = 4;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      triggerBoxOwnerId =
           mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
      if ((e == (TriggerEventArgs *)0x0) || (this_01 == (MVNetworkGame_OperationRequests *)0x0))
      goto code_?;
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TriggerBoxEnter
                (this_01,(int32_t)triggerBoxOwnerId,(e->fields).instigatorWOID,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


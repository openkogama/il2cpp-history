
/* Void Create() */

void Assembly-CSharp.dll::MVCollectible::MVCollectible_Create
               (MVCollectible *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    func_?(&TypeInfo__MVCollectibleObject);
    func_?(&
                    MethodInfo__MVCollectible__allWorldObjectTriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   );
    func_?(&
                    MethodInfo__MVCollectible__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_A_AllWorldObjectTriggerBoxEvents);
    func_?(&StringLiteral_A_TriggerBoxEvents_object_is_mis);
    cRam_? = '\x01';
  }
  pMVar1 = (MVCollectibleObject *)(this->fields)._._._.component;
  if (pMVar1 == (MVCollectibleObject *)0x0) {
    (this->fields).collectibleObject = (MVCollectibleObject *)0x0;
code_?:
    ppMVar2 = &(this->fields).collectibleObject;
    func_?(ppMVar2,pMVar1);
    if (*ppMVar2 != (MVCollectibleObject *)0x0) {
      unaff_EBX = (MVCollectibleObject__Class *)((*ppMVar2)->fields).triggerBoxEvents;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)unaff_EBX,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        pTVar4 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
        if (pTVar4 != (Type *)0x0) {
          pSVar5 = (String *)(*(code *)(pTVar4->klass->vtable).__unknown.method)(pTVar4);
          unaff_EBX = (MVCollectibleObject__Class *)
                      mscorlib.dll::System::String::String_Concat_3
                                (StringLiteral_A_TriggerBoxEvents_object_is_mis,pSVar5,
                                 (MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)unaff_EBX,(MethodInfo *)0x0);
code_?:
          if (*ppMVar2 != (MVCollectibleObject *)0x0) {
            unaff_EBX = (MVCollectibleObject__Class *)
                        ((*ppMVar2)->fields).allWorldObjectTriggerBoxEvents;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                              ((Object_1 *)unaff_EBX,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar3 == 0) {
              pTVar4 = mscorlib.dll::System::Object::Object_GetType
                                 ((Object *)this,(MethodInfo *)0x0);
              if (pTVar4 != (Type *)0x0) {
                pSVar5 = (String *)
                         (*(code *)(pTVar4->klass->vtable).__unknown.method)
                                   (pTVar4,(pTVar4->klass->vtable).get_DeclaringType.methodPtr);
                pSVar5 = mscorlib.dll::System::String::String_Concat_3
                                   (StringLiteral_A_AllWorldObjectTriggerBoxEvents,pSVar5,
                                    (MethodInfo *)0x0);
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__Debug);
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                          ((Object *)pSVar5,(MethodInfo *)0x0);
code_?:
                MVCollectible_SetVisible(this,(MethodInfo *)0x0);
                uVar6 = *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
                piVar7 = &(this->fields)._._._.interactionFlags;
                *(uint *)piVar7 = (uint)*piVar7 | 0x40000000;
                *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) = uVar6;
                return;
              }
            }
            else if (*ppMVar2 != (MVCollectibleObject *)0x0) {
              this_00 = ((*ppMVar2)->fields).allWorldObjectTriggerBoxEvents;
              unaff_EBX = (MVCollectibleObject__Class *)
                          func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
              mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                        ((EventHandler_1_Object_ *)unaff_EBX,(Object *)this,
                         MethodInfo__MVCollectible__allWorldObjectTriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                         ,(MethodInfo *)0x0);
              if (this_00 != (AllWorldObjectTriggerBoxEvents *)0x0) {
                AllWorldObjectTriggerBoxEvents::AllWorldObjectTriggerBoxEvents_add_TriggerEnter
                          (this_00,(EventHandler_1_TriggerEventArgs_ *)unaff_EBX,(MethodInfo *)0x0);
                goto code_?;
              }
            }
          }
        }
      }
      else if (*ppMVar2 != (MVCollectibleObject *)0x0) {
        unaff_EBX = (MVCollectibleObject__Class *)((*ppMVar2)->fields).triggerBoxEvents;
        this_01 = (EventHandler_1_Object_ *)
                  func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
        mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                  (this_01,(Object *)this,
                   MethodInfo__MVCollectible__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   ,(MethodInfo *)0x0);
        if (unaff_EBX != (MVCollectibleObject__Class *)0x0) {
          TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                    ((TriggerBoxEvents *)unaff_EBX,(EventHandler_1_TriggerEventArgs_ *)this_01,
                     (MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
  }
  else {
    bVar8 = (TypeInfo__MVCollectibleObject->_1).naturalAligment;
    if ((bVar8 <= (((ObjectPrefab__Class *)pMVar1->klass)->_1).naturalAligment) &&
       ((((ObjectPrefab__Class *)pMVar1->klass)->_1).typeHierarchy[bVar8 - 1] ==
        (Il2CppClass *)TypeInfo__MVCollectibleObject)) {
      (this->fields).collectibleObject = pMVar1;
      bVar8 = (TypeInfo__MVCollectibleObject->_1).naturalAligment;
      unaff_EBX = TypeInfo__MVCollectibleObject;
      if (((((ObjectPrefab__Class *)pMVar1->klass)->_1).naturalAligment < bVar8) ||
         ((((ObjectPrefab__Class *)pMVar1->klass)->_1).typeHierarchy[bVar8 - 1] !=
          (Il2CppClass *)TypeInfo__MVCollectibleObject)) goto code_?;
      goto code_?;
    }
    func_?(pMVar1,TypeInfo__MVCollectibleObject);
  }
  func_?();
  pMVar1 = extraout_EDX;
code_?:
  func_?(pMVar1,unaff_EBX);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVCollectible::MVCollectible_Destroy
               (MVCollectible *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<IWinningCondition>);
    func_?(&MethodInfo__MVCollectible__OnWinningConditionFulfilled_IWinningCondition_);
    func_?(&
                    AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePointAmountManager);
    cRam_? = '\x01';
  }
  woid = (this->fields)._._._._.id;
  if ((TypeInfo__GamePointAmountManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__GamePointAmountManager);
  }
  GamePointAmountManager::GamePointAmountManager_UpdateRewardData(woid,0,(MethodInfo *)0x0);
  MVLogicObject::MVLogicObject_Destroy((MVLogicObject *)this,(MethodInfo *)0x0);
  if ((this->fields).initializedInWorld == 0) {
    return;
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 == (MVNetworkGame *)0x0) ||
     (pWVar2 = (pMVar1->fields)._WinningConditionManager_k__BackingField,
     pWVar2 == (WinningConditionManager *)0x0)) {
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    this_00 = (WinningCondition *)
              MVWorldObject.dll::WinningConditionManager::
              WinningConditionManager_GetSingletonWinnerConditionByType
                        (pWVar2,
                         AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
                        );
    if (this_00 == (WinningCondition *)0x0) goto code_?;
    iVar3 = (this_00->fields).limit;
    if (iVar3 != 0) {
      MVWorldObject.dll::WinningCondition::WinningCondition_SetLimit
                (this_00,iVar3 + -1,(MethodInfo *)0x0);
      bVar4 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
      if (bVar4 == 0) {
        return;
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar1 == (MVNetworkGame *)0x0) {
        return;
      }
      if ((this_00->fields).limit == 0) {
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar1 == (MVNetworkGame *)0x0) ||
           (pWVar2 = (pMVar1->fields)._WinningConditionManager_k__BackingField,
           pWVar2 == (WinningConditionManager *)0x0)) goto code_?;
        MVWorldObject.dll::WinningConditionManager::WinningConditionManager_RemoveWinnerCondition
                  (pWVar2,(this_00->fields).id,(MethodInfo *)0x0);
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
      pAVar5 = (pMVar1->fields).OnWinningConditionFulfilled;
      this_01 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)func_?();
      DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (this_01,(Object *)this,
                 MethodInfo__MVCollectible__OnWinningConditionFulfilled_IWinningCondition_,
                 (MethodInfo *)0x0);
      pDVar6 = mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar5,(Delegate *)this_01,(MethodInfo *)0x0);
      if (pDVar6 == (Delegate *)0x0) {
        (pMVar1->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
        func_?();
        return;
      }
      pAVar5 = (Action_1_IWinningCondition_ *)func_?();
      if (pAVar5 != (Action_1_IWinningCondition_ *)0x0) {
        (pMVar1->fields).OnWinningConditionFulfilled = pAVar5;
        iVar3 = func_?();
        if (iVar3 != 0) {
          func_?();
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  func_?();
  pEVar7 = (Exception *)func_?();
  pSVar8 = (String *)func_?();
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar7,pSVar8,(MethodInfo *)0x0);
  func_?();
  func_?();
code_?:
  func_?();
  pEVar7 = (Exception *)func_?();
  pSVar8 = (String *)func_?();
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar7,pSVar8,(MethodInfo *)0x0);
  func_?();
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Vector3 GetClosestGridPoint(Single, Vector3) */

Vector3 * Assembly-CSharp.dll::MVCollectible::MVCollectible_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,MVCollectible *this,float gridSize,
                    Vector3 position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar2 = (pVVar1->oneVector).x;
  uVar3 = (pVVar1->oneVector).y;
  fVar4 = (float)uVar2 * _UNK_?;
  fVar5 = (float)uVar3 * _UNK_?;
  fVar6 = (pVVar1->oneVector).z * _UNK_?;
  this_00 = (this->fields)._._._.gameObject;
  if (this_00 != (GameObject *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      uVar7 = 0;
      pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)&stack0xffffffec,this_01,(MethodInfo *)0x0);
      fVar4 = pQVar8->z;
      fVar5 = pQVar8->w;
      if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      worldPosition.z = position.z;
      worldPosition.x = position.x;
      worldPosition.y = position.y;
      rotation.y = 0.0;
      rotation.x = fVar6;
      rotation.z = fVar4;
      rotation.w = fVar5;
      scale.y = (float)uVar7;
      scale.x = (float)this_01;
      scale.z = fVar6;
      pVVar9 = SharedCubeFunctions::SharedCubeFunctions_GetClosestGridPoint
                         (&position,worldPosition,rotation,gridSize,scale,(MethodInfo *)0x0);
      fVar5 = pVVar9->y;
      fVar4 = pVVar9->z;
      __return_storage_ptr__->x = pVVar9->x;
      __return_storage_ptr__->y = fVar5;
      __return_storage_ptr__->z = fVar4;
      return __return_storage_ptr__;
    }
  }
  func_?(fVar4,fVar5);
  pcVar10 = (code *)swi(3);
  pVVar9 = (Vector3 *)(*pcVar10)();
  return pVVar9;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVCollectible::MVCollectible_Initialize
               (MVCollectible *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<IWinningCondition>);
    func_?(&System__Object__MethodInfo__System__Array__Empty<System::Object>______);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__Add_MV__WorldObject__MVTeam_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>);
    func_?(&MethodInfo__MVCollectible__OnWinningConditionFulfilled_IWinningCondition_);
    func_?(&TypeInfo__MV__WorldObject__MVTeam);
    func_?(&
                    AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__CreateWinnerCondition<AllCollectiblesCollectedClient>_System__Object____
                   );
    func_?(&
                    AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
                   );
    func_?(&StringLiteral_takenByList);
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 == (MVNetworkGame *)0x0) ||
     (this_00 = (pMVar1->fields)._WinningConditionManager_k__BackingField,
     this_00 == (WinningConditionManager *)0x0)) {
code_?:
    func_?();
    this_03 = extraout_EDX;
  }
  else {
    this_02 = (WinningCondition *)
              MVWorldObject.dll::WinningConditionManager::
              WinningConditionManager_GetSingletonWinnerConditionByType
                        (this_00,
                         AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
                        );
    if (this_02 == (WinningCondition *)0x0) {
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar1 != (MVNetworkGame *)0x0) {
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                    (pMVar1->fields)._WinningConditionManager_k__BackingField;
        args = (Object__Array *)func_?();
        if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          this_02 = (WinningCondition *)
                    MVWorldObject.dll::WinningConditionManager::
                    WinningConditionManager_CreateWinnerCondition
                              ((WinningConditionManager *)unaff_ESI,args,
                               AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__CreateWinnerCondition<AllCollectiblesCollectedClient>_System__Object____
                              );
          if (this_02 != (WinningCondition *)0x0) goto code_?;
        }
      }
      goto code_?;
    }
code_?:
    MVWorldObject.dll::WinningCondition::WinningCondition_SetLimit
              (this_02,(this_02->fields).limit + 1,(MethodInfo *)0x0);
    pMVar2 = (this->fields).collectibleObject;
    (this->fields).initializedInWorld = 1;
    if (pMVar2 == (MVCollectibleObject *)0x0) goto code_?;
    MVLogicObject::MVLogicObject_SetupCulling
              ((MVLogicObject *)this,(pMVar2->fields).pickupMesh,2.0,(MethodInfo *)0x0);
    this_01 = (this->fields)._._._.runtimeDataVariables;
    if (this_01 == (MVRuntimeDataVariables *)0x0) goto code_?;
    pMVar3 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                        (this_01,StringLiteral_takenByList,1.0,0,(MethodInfo *)0x0);
    ppMVar4 = &(this->fields).takenByListRunTimeVariable;
    *ppMVar4 = pMVar3;
    func_?(ppMVar4,pMVar3);
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                func_?(
                               TypeInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>
                               );
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)unaff_ESI,
               MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__List__);
    ppLVar5 = &(this->fields).takenByTeamList;
    *ppLVar5 = (List_1_MV_WorldObject_MVTeam_ *)unaff_ESI;
    func_?(ppLVar5,unaff_ESI);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 == (MVNetworkGame *)0x0) ||
       (pMVar6 = (pMVar1->fields)._NetworkGameStateListener_k__BackingField,
       pMVar6 == (MVNetworkGameStateListener *)0x0)) goto code_?;
    if ((pMVar6->fields).currentGameState == 2) {
code_?:
      MVCollectible_OnTakenByListChange(this,(MethodInfo *)0x0);
      pDStack_7 = (Dictionary_2_System_Object_System_Object___Class *)
                  MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pDStack_7 != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        a = (Delegate *)(((Action_1_IWinningCondition___Class *)pDStack_7)->vtable).Equals.method;
        this_04 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                   *)func_?(TypeInfo__System__Action<IWinningCondition>);
        DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata
        ::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
        DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                  (this_04,(Object *)this,
                   MethodInfo__MVCollectible__OnWinningConditionFulfilled_IWinningCondition_,
                   (MethodInfo *)0x0);
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                    mscorlib.dll::System::Delegate::Delegate_Combine
                              (a,(Delegate *)this_04,(MethodInfo *)0x0);
        pAVar8 = TypeInfo__System__Action<IWinningCondition>;
        if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          pDStack_9 = (Dictionary_2_System_Object_System_Object___Class *)
                      &(((Action_1_IWinningCondition___VTable *)&pDStack_7->vtable)->Equals).method;
          *(MethodInfo **)pDStack_9 = (MethodInfo *)0x0;
          EStack_10.monitor = (MonitorData *)&UNK_?;
          pDStack_7 = unaff_ESI;
          func_?();
          return;
        }
        pDStack_7 = (Dictionary_2_System_Object_System_Object___Class *)
                    TypeInfo__System__Action<IWinningCondition>;
        EStack_10.monitor = (MonitorData *)&UNK_?;
        pDStack_9 = unaff_ESI;
        pMVar11 = (MethodInfo *)func_?();
        if (pMVar11 != (MethodInfo *)0x0) {
          ppMVar12 = &(((Action_1_IWinningCondition___VTable *)&pDStack_7->vtable)->Equals).method;
          *ppMVar12 = pMVar11;
          this = (MVCollectible *)TypeInfo__System__Action<IWinningCondition>;
          pDStack_7 = (Dictionary_2_System_Object_System_Object___Class *)
                      TypeInfo__System__Action<IWinningCondition>;
          EStack_10.monitor = (MonitorData *)&UNK_?;
          pDStack_9 = unaff_ESI;
          pDStack_7 = (Dictionary_2_System_Object_System_Object___Class *)func_?();
          if (pDStack_7 != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
            EStack_10.monitor = (MonitorData *)&UNK_?;
            pDStack_9 = (Dictionary_2_System_Object_System_Object___Class *)ppMVar12;
            func_?();
            return;
          }
          goto code_?;
        }
        pDStack_7 = (Dictionary_2_System_Object_System_Object___Class *)pAVar8;
        EStack_10.monitor = (MonitorData *)&UNK_?;
        pDStack_9 = unaff_ESI;
        func_?();
code_?:
        EStack_10.klass = (Enum__Class *)TypeInfo__MV__WorldObject__MVTeam;
        EStack_10.monitor = (MonitorData *)0xffffffff;
        pDStack_9 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        mscorlib.dll::System::Enum::Enum_ToString(&EStack_10,(MethodInfo *)0x0);
      }
      goto code_?;
    }
    pMVar3 = (this->fields).takenByListRunTimeVariable;
    if (pMVar3 == (MVRuntimeDataVariable *)0x0) goto code_?;
    this_03 = (Dictionary_2_System_Object_System_Object___Class *)
              MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(pMVar3,(MethodInfo *)0x0);
    unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (this_03 == (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
    pIVar13 = (this_03->_0).image;
    bVar14 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if ((bVar14 <= *(byte *)&pIVar13[4].assembly) &&
       (*(Dictionary_2_System_Object_System_Object___Class **)
         ((pIVar13[2].typeCount - 4) + (uint)bVar14 * 4) ==
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      EStack_10.klass = (Enum__Class *)TypeInfo__MV__WorldObject__MVTeam;
      EStack_10.monitor = (MonitorData *)0xffffffff;
      pDStack_9 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      pSVar15 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_10,(MethodInfo *)0x0);
      bVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_03,
                         (Object *)pSVar15,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      unaff_ESI = this_03;
      if (bVar16 != 0) {
        if ((Enum__Class *)*ppLVar5 == (Enum__Class *)0x0) goto code_?;
        pMStack_17 = (MVTeam__Enum__Class *)*ppLVar5;
        func_?();
      }
      pMStack_17 = TypeInfo__MV__WorldObject__MVTeam;
      pSVar15 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&pMStack_17,(MethodInfo *)0x0);
      bVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_03,
                         (Object *)pSVar15,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar16 != 0) {
        if (*ppLVar5 == (List_1_MV_WorldObject_MVTeam_ *)0x0) goto code_?;
        func_?(*ppLVar5,1,
                        MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__Add_MV__WorldObject__MVTeam_
                       );
      }
      pMStack_17 = TypeInfo__MV__WorldObject__MVTeam;
      pSVar15 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&pMStack_17,(MethodInfo *)0x0);
      bVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_03,
                         (Object *)pSVar15,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar16 != 0) {
        if (*ppLVar5 == (List_1_MV_WorldObject_MVTeam_ *)0x0) goto code_?;
        func_?(*ppLVar5,2,
                        MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__Add_MV__WorldObject__MVTeam_
                       );
      }
      pMStack_17 = TypeInfo__MV__WorldObject__MVTeam;
      pSVar15 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&pMStack_17,(MethodInfo *)0x0);
      bVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_03,
                         (Object *)pSVar15,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar16 != 0) {
        if (*ppLVar5 == (List_1_MV_WorldObject_MVTeam_ *)0x0) goto code_?;
        func_?(*ppLVar5,3,
                        MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__Add_MV__WorldObject__MVTeam_
                       );
      }
      goto code_?;
    }
  }
  func_?(this_03,unaff_ESI);
code_?:
  EStack_10.monitor = (MonitorData *)&UNK_?;
  pDStack_9 = unaff_ESI;
  pDStack_7 = (Dictionary_2_System_Object_System_Object___Class *)this;
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
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__Add_MV__WorldObject__MVTeam_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__Contains_MV__WorldObject__MVTeam_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                   );
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
     pMVar2 != (MVLocalPlayer *)0x0)) {
    if ((actorNr == (pMVar2->fields)._._ActorNr_k__BackingField) && ((this->fields).state == 4)) {
      pMVar3 = (this->fields).collectibleObject;
      (this->fields).isVisible = 0;
      if ((pMVar3 != (MVCollectibleObject *)0x0) &&
         (this_00 = (pMVar3->fields).pickupItem, this_00 != (GreyOutObjectScript *)0x0)) {
        GreyOutObjectScript::GreyOutObjectScript_GreyOut(this_00,(MethodInfo *)0x0);
        pMVar3 = (this->fields).collectibleObject;
        (this->fields).state = 1;
        if ((pMVar3 != (MVCollectibleObject *)0x0) &&
           (pCVar4 = (pMVar3->fields).collectibleEffects, pCVar4 != (CollectibleEffects *)0x0)) {
          (pCVar4->fields).state = 1;
          fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                            ((MethodInfo *)0x0);
          (this->fields).pickedUpTime = fVar5;
          return;
        }
      }
    }
    else {
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 != (MVNetworkGame *)0x0) &&
         (this_01 = (pMVar1->fields).playerContainer, this_01 != (MVPlayerContainer *)0x0)) {
        player = (MVPlayer *)&stack0xfffffff8;
        bVar6 = MVPlayerContainer::MVPlayerContainer_TryGetValue
                          (this_01,actorNr,(MVPlayer **)player,(MethodInfo *)0x0);
        if (bVar6 == 0) {
          return;
        }
        if ((player != (MVPlayer *)0x0) &&
           (this_02 = (List_1_System_Int32Enum_ *)(this->fields).takenByTeamList,
           this_02 != (List_1_System_Int32Enum_ *)0x0)) {
          item = (player->fields)._Team_k__BackingField;
          bVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32Enum]::
                  List_1_System_Int32Enum__Contains
                            (this_02,item,
                             MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__Contains_MV__WorldObject__MVTeam_
                            );
          if (bVar6 != 0) {
            return;
          }
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (((pMVar1 != (MVNetworkGame *)0x0) &&
              (this_03 = (pMVar1->fields).teamManager, this_03 != (MVTeamManager *)0x0)) &&
             (pLVar7 = MVTeamManager::MVTeamManager_GetTeamList(this_03,(MethodInfo *)0x0),
             pLVar7 != (List_1_MV_WorldObject_MVTeam_ *)0x0)) {
            if ((pLVar7->fields)._size < 2) {
              return;
            }
            if ((this->fields).takenByTeamList != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
              pMStack8 =
                   MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__Add_MV__WorldObject__MVTeam_
              ;
              IStack9 = item;
              func_?();
              MVCollectible_OnTakenByListChange(this,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnTakenByListChange() */

void Assembly-CSharp.dll::MVCollectible::MVCollectible_OnTakenByListChange
               (MVCollectible *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__Contains_MV__WorldObject__MVTeam_
                   );
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields).teamManager, this_00 != (MVTeamManager *)0x0)) {
    iVar2 = MVTeamManager::MVTeamManager_TeamCount(this_00,(MethodInfo *)0x0);
    if (iVar2 < 2) {
      return;
    }
    this_01 = (List_1_System_Int32Enum_ *)(this->fields).takenByTeamList;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar1 != (MVNetworkGame *)0x0) &&
        (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
        pMVar3 != (MVLocalPlayer *)0x0)) && (this_01 != (List_1_System_Int32Enum_ *)0x0)) {
      bVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32Enum]::
              List_1_System_Int32Enum__Contains
                        (this_01,(pMVar3->fields)._._Team_k__BackingField,
                         MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__Contains_MV__WorldObject__MVTeam_
                        );
      if (bVar4 == 0) {
        return;
      }
      pMVar5 = (this->fields).collectibleObject;
      (this->fields).isVisible = 0;
      if ((pMVar5 != (MVCollectibleObject *)0x0) &&
         ((pMVar5->fields).pickupItem != (GreyOutObjectScript *)0x0)) {
        if (cRam_? == '\0') {
          func_?();
          pAStack6 =
               (Action_1_GreyOutObjectScript_PickupOriginalMaterials___Class *)&UNK_?;
          func_?();
          cRam_? = '\x01';
        }
        pAStack6 = TypeInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>;
        this_02 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                   *)func_?();
        DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata
        ::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
        DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                  (this_02,(Object *)in_stack_7,
                   MethodInfo__GreyOutObjectScript__GreyOutExec_GreyOutObjectScript__PickupOriginalMaterials_
                   ,(MethodInfo *)0x0);
        GreyOutObjectScript::GreyOutObjectScript_ExecuteOnMaterials
                  (in_stack_7,
                   (Action_1_GreyOutObjectScript_PickupOriginalMaterials_ *)this_02,
                   (MethodInfo *)0x0);
        (in_stack_7->fields).isGreyedIn = 0;
        return;
      }
    }
  }
  func_?();
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
      (this->fields).state = 2;
      pMVar4 = (this->fields).collectibleObject;
      if ((pMVar4 != (MVCollectibleObject *)0x0) &&
         (pCVar5 = (pMVar4->fields).collectibleEffects, pCVar5 != (CollectibleEffects *)0x0)) {
        (pCVar5->fields).state = 2;
        fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                          ((MethodInfo *)0x0);
        (pCVar5->fields).reshowingStartTime = fVar2;
        return;
      }
code_?:
      func_?();
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
      (pCVar5->fields).state = 3;
    }
  }
  return;
}


/* Void OnWinningConditionFulfilled(IWinningCondition) */

void Assembly-CSharp.dll::MVCollectible::MVCollectible_OnWinningConditionFulfilled
               (MVCollectible *this,IWinningCondition *winningCondition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppMStack_1 = &MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__Clear__;
    func_?();
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields).takenByTeamList;
  if (pLVar2 != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
    piVar3 = &(pLVar2->fields)._version;
    *piVar3 = *piVar3 + 1;
    (pLVar2->fields)._size = 0;
    ppMStack_1 = (MethodInfo **)(this->klass->vtable).OnObjectLinkChanged.methodPtr;
    pMStack_4 = this;
    (*(code *)(this->klass->vtable).Reset.method)();
    return;
  }
  ppMStack_1 = (MethodInfo **)&stack0xfffffffc;
  uVar5 = func_?(&puStack_6);
  func_?(uVar5);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVCollectible::MVCollectible_Reset(MVCollectible *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__Contains_MV__WorldObject__MVTeam_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                   );
    cRam_? = '\x01';
  }
  MVCollectible_SetVisible(this,(MethodInfo *)0x0);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
     pMVar2 != (MVLocalPlayer *)0x0)) {
    item = (pMVar2->fields)._._Team_k__BackingField;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 != (MVNetworkGame *)0x0) &&
       ((this_00 = (pMVar1->fields).teamManager, this_00 != (MVTeamManager *)0x0 &&
        (pLVar3 = MVTeamManager::MVTeamManager_GetTeamList(this_00,(MethodInfo *)0x0),
        pLVar3 != (List_1_MV_WorldObject_MVTeam_ *)0x0)))) {
      if ((pLVar3->fields)._size < 2) {
        return;
      }
      this_01 = (List_1_System_Int32Enum_ *)(this->fields).takenByTeamList;
      if (this_01 != (List_1_System_Int32Enum_ *)0x0) {
        bVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32Enum]::
                List_1_System_Int32Enum__Contains
                          (this_01,item,
                           MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__Contains_MV__WorldObject__MVTeam_
                          );
        if (bVar4 == 0) {
          return;
        }
        if ((this->fields).isVisible == 0) {
          return;
        }
        pMVar5 = (this->fields).collectibleObject;
        (this->fields).isVisible = 0;
        if ((pMVar5 != (MVCollectibleObject *)0x0) &&
           ((pMVar5->fields).pickupItem != (GreyOutObjectScript *)0x0)) {
          if (cRam_? == '\0') {
            func_?();
            pAStack6 =
                 (Action_1_GreyOutObjectScript_PickupOriginalMaterials___Class *)&UNK_?;
            func_?();
            cRam_? = '\x01';
          }
          pAStack6 = TypeInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>;
          this_02 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                     *)func_?();
          DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::
          Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
          __Il2CppFullySharedGenericType]::
          DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                    (this_02,(Object *)in_stack_7,
                     MethodInfo__GreyOutObjectScript__GreyOutExec_GreyOutObjectScript__PickupOriginalMaterials_
                     ,(MethodInfo *)0x0);
          GreyOutObjectScript::GreyOutObjectScript_ExecuteOnMaterials
                    (in_stack_7,
                     (Action_1_GreyOutObjectScript_PickupOriginalMaterials_ *)this_02,
                     (MethodInfo *)0x0);
          (in_stack_7->fields).isGreyedIn = 0;
          return;
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
     (pCVar2 = (pMVar1->fields).collectibleEffects, pCVar2 != (CollectibleEffects *)0x0)) {
    (pCVar2->fields).state = 0;
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* MVCollectible(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVCollectible::MVCollectible__ctor
               (MVCollectible *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  (this->fields).isVisible = 1;
  (this->fields).pickedUpStateDuration = 0.8;
  (this->fields).reshowingStateDuration = 0.5;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVGamePointRewardLogicObject::MVGamePointRewardLogicObject__ctor
              ((MVGamePointRewardLogicObject *)this,data,
               (ObjectPrefab *)(pPVar1->fields).mvCollectiblePrefab,worldObjects,(MethodInfo *)0x0);
    MVCollectible_Create(this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void allWorldObjectTriggerBoxEvents_TriggerEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::MVCollectible::MVCollectible_allWorldObjectTriggerBoxEvents_TriggerEnter
               (MVCollectible *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__Add_MV__WorldObject__MVTeam_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__Contains_MV__WorldObject__MVTeam_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).collectibleObject;
  if ((pMVar1 == (MVCollectibleObject *)0x0) ||
     (pWVar2 = (pMVar1->fields).worldObjectEnableController,
     pWVar2 == (WorldObjectEnableController *)0x0)) goto code_?;
  if ((pWVar2->fields).enableState != 2) {
    return;
  }
  this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (((e == (TriggerEventArgs *)0x0) || (this_03 == (MVWorldObjectClientManager *)0x0)) ||
     (pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_03,(e->fields).instigatorWOID,(MethodInfo *)0x0),
     pMVar3 == (MVWorldObject *)0x0)) goto code_?;
  actorNr = (pMVar3->fields).ownerActorNr;
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar4 == (MVNetworkGame *)0x0) ||
     (pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0),
     pMVar5 == (MVLocalPlayer *)0x0)) goto code_?;
  iVar6 = (pMVar5->fields)._._ActorNr_k__BackingField;
  if ((this->fields).takenByTeamList == (List_1_MV_WorldObject_MVTeam_ *)0x0) {
    return;
  }
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar4 == (MVNetworkGame *)0x0) ||
     (this_04 = (MVPlayer *)(pMVar4->fields).playerContainer, this_04 == (MVPlayer *)0x0))
  goto code_?;
  bVar7 = MVPlayerContainer::MVPlayerContainer_TryGetValue
                    ((MVPlayerContainer *)this_04,actorNr,(MVPlayer **)&stack0xfffffff8,
                     (MethodInfo *)0x0);
  if (bVar7 == 0) {
    return;
  }
  if (this_04 == (MVPlayer *)0x0) goto code_?;
  item = (this_04->fields)._Team_k__BackingField;
  if (iVar6 == actorNr) {
    if ((this->fields).isVisible == 0) {
      if (iVar6 == actorNr) {
        return;
      }
      goto code_?;
    }
  }
  else {
code_?:
    if (actorNr < 1) {
      return;
    }
    this_00 = (List_1_System_Int32Enum_ *)(this->fields).takenByTeamList;
    if (this_00 == (List_1_System_Int32Enum_ *)0x0) goto code_?;
    bVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32Enum]::
            List_1_System_Int32Enum__Contains
                      (this_00,item,
                       MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__Contains_MV__WorldObject__MVTeam_
                      );
    if (bVar7 != 0) {
      return;
    }
  }
  pMVar1 = (this->fields).collectibleObject;
  if (pMVar1 != (MVCollectibleObject *)0x0) {
    pAVar8 = (pMVar1->fields).audioSource;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                      ((Object_1 *)pAVar8,(MethodInfo *)0x0);
    if (bVar7 != 0) {
      pMVar1 = (this->fields).collectibleObject;
      if ((pMVar1 == (MVCollectibleObject *)0x0) ||
         (pAVar8 = (pMVar1->fields).audioSource, pAVar8 == (AudioSource *)0x0))
      goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                (pAVar8,(MethodInfo *)0x0);
    }
    pMVar1 = (this->fields).collectibleObject;
    if ((pMVar1 != (MVCollectibleObject *)0x0) &&
       (this_01 = (pMVar1->fields).particles, this_01 != (ObjectParticleEmitterScript *)0x0)) {
      ObjectParticleEmitterScript::ObjectParticleEmitterScript_Play(this_01,(MethodInfo *)0x0);
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar4 != (MVNetworkGame *)0x0) &&
         ((this_02 = (pMVar4->fields).teamManager, this_02 != (MVTeamManager *)0x0 &&
          (IStack9 = item,
          pLVar10 = MVTeamManager::MVTeamManager_GetTeamList(this_02,(MethodInfo *)0x0),
          pLVar10 != (List_1_MV_WorldObject_MVTeam_ *)0x0)))) {
        if (1 < (pLVar10->fields)._size && actorNr == 0) {
          if ((this->fields).takenByTeamList == (List_1_MV_WorldObject_MVTeam_ *)0x0)
          goto code_?;
          pMStack11 =
               MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__Add_MV__WorldObject__MVTeam_
          ;
          func_?();
          MVCollectible_OnTakenByListChange(this,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void triggerBoxEvents_TriggerEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::MVCollectible::MVCollectible_triggerBoxEvents_TriggerEnter
               (MVCollectible *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  pMVar1 = (this->fields).collectibleObject;
  if ((pMVar1 != (MVCollectibleObject *)0x0) &&
     (pWVar2 = (pMVar1->fields).worldObjectEnableController,
     pWVar2 != (WorldObjectEnableController *)0x0)) {
    if (((pWVar2->fields).enableState == 2) && ((this->fields).state == 0)) {
      (this->fields).state = 4;
      this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if ((e == (TriggerEventArgs *)0x0) || (this_00 == (MVNetworkGame_OperationRequests *)0x0))
      goto code_?;
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TriggerBoxEnter
                (this_00,(this->fields)._._._._.id,(e->fields).instigatorWOID,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


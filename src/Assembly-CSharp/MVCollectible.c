
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
    func_?(&(this->fields).collectibleObject,pMVar1);
    pMVar1 = (this->fields).collectibleObject;
    if (pMVar1 != (MVCollectibleObject *)0x0) {
      pTVar2 = (pMVar1->fields).triggerBoxEvents;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pTVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        pTVar4 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
        if (pTVar4 == (Type *)0x0) goto code_?;
        pSVar5 = (String *)(*(pTVar4->klass->vtable).__unknown.methodPtr)(pTVar4);
        pSVar5 = mscorlib.dll::System::String::String_Concat_3
                           (StringLiteral_A_TriggerBoxEvents_object_is_mis,pSVar5,(MethodInfo *)0x0)
        ;
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)pSVar5,(MethodInfo *)0x0);
      }
      else {
        pMVar1 = (this->fields).collectibleObject;
        if (pMVar1 == (MVCollectibleObject *)0x0) goto code_?;
        pTVar2 = (pMVar1->fields).triggerBoxEvents;
        pUVar6 = (UnityAction_2_System_Object_System_Object_ *)
                  func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
        if (pUVar6 == (UnityAction_2_System_Object_System_Object_ *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (pUVar6,(Object *)this,
                   MethodInfo__MVCollectible__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   ,(MethodInfo *)0x0);
        if (pTVar2 == (TriggerBoxEvents *)0x0) goto code_?;
        TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                  (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pUVar6,(MethodInfo *)0x0);
      }
      pMVar1 = (this->fields).collectibleObject;
      if (pMVar1 != (MVCollectibleObject *)0x0) {
        pAVar7 = (pMVar1->fields).allWorldObjectTriggerBoxEvents;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)pAVar7,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar3 == 0) {
          pTVar4 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
          if (pTVar4 != (Type *)0x0) {
            pSVar5 = (String *)
                     (*(pTVar4->klass->vtable).__unknown.methodPtr)
                               (pTVar4,(pTVar4->klass->vtable).__unknown.method);
            pSVar5 = mscorlib.dll::System::String::String_Concat_3
                               (StringLiteral_A_AllWorldObjectTriggerBoxEvents,pSVar5,
                                (MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                      ((Object *)pSVar5,(MethodInfo *)0x0);
code_?:
            MVCollectible_SetVisible(this,(MethodInfo *)0x0);
            uVar8 = *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
            piVar9 = &(this->fields)._._._.interactionFlags;
            *(uint *)piVar9 = (uint)*piVar9 | 0x40000000;
            *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) = uVar8;
            return;
          }
        }
        else {
          pMVar1 = (this->fields).collectibleObject;
          if (pMVar1 != (MVCollectibleObject *)0x0) {
            pAVar7 = (pMVar1->fields).allWorldObjectTriggerBoxEvents;
            pUVar6 = (UnityAction_2_System_Object_System_Object_ *)
                      func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
            if (pUVar6 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        (pUVar6,(Object *)this,
                         MethodInfo__MVCollectible__allWorldObjectTriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                         ,(MethodInfo *)0x0);
              if (pAVar7 != (AllWorldObjectTriggerBoxEvents *)0x0) {
                AllWorldObjectTriggerBoxEvents::AllWorldObjectTriggerBoxEvents_add_TriggerEnter
                          (pAVar7,(EventHandler_1_TriggerEventArgs_ *)pUVar6,(MethodInfo *)0x0);
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
  else {
    if (((TypeInfo__MVCollectibleObject->_1).typeHierarchyDepth <=
         (((ObjectPrefab__Class *)pMVar1->klass)->_1).typeHierarchyDepth) &&
       ((((ObjectPrefab__Class *)pMVar1->klass)->_1).typeHierarchy
        [(TypeInfo__MVCollectibleObject->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__MVCollectibleObject)) {
      (this->fields).collectibleObject = pMVar1;
      if (((TypeInfo__MVCollectibleObject->_1).typeHierarchyDepth <=
           (((ObjectPrefab__Class *)pMVar1->klass)->_1).typeHierarchyDepth) &&
         ((((ObjectPrefab__Class *)pMVar1->klass)->_1).typeHierarchy
          [(TypeInfo__MVCollectibleObject->_1).typeHierarchyDepth - 1] ==
          (Il2CppClass *)TypeInfo__MVCollectibleObject)) goto code_?;
    }
    func_?(pMVar1,TypeInfo__MVCollectibleObject);
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
     pWVar2 == (WinningConditionManager *)0x0)) goto code_?;
  this_00 = (WinningCondition *)
            MVWorldObject.dll::WinningConditionManager::
            WinningConditionManager_GetSingletonWinnerConditionByType
                      (pWVar2,
                       AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
                      );
  if (this_00 == (WinningCondition *)0x0) goto code_?;
  if ((this_00->fields).limit != 0) {
    MVWorldObject.dll::WinningCondition::WinningCondition_SetLimit
              (this_00,(this_00->fields).limit + -1,(MethodInfo *)0x0);
    bVar3 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
    if (bVar3 == 0) {
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
    if (pMVar1 == (MVNetworkGame *)0x0) {
code_?:
      func_?();
    }
    else {
      pAVar4 = (pMVar1->fields).OnWinningConditionFulfilled;
      this_01 = (Action_1_Object_ *)func_?();
      if (this_01 == (Action_1_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                (this_01,(Object *)this,
                 MethodInfo__MVCollectible__OnWinningConditionFulfilled_IWinningCondition_,
                 (MethodInfo *)0x0);
      pDVar5 = mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar4,(Delegate *)this_01,(MethodInfo *)0x0);
      if (pDVar5 == (Delegate *)0x0) {
        (pMVar1->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
code_?:
        func_?();
        return;
      }
      pAVar4 = (Action_1_IWinningCondition_ *)func_?();
      if (pAVar4 != (Action_1_IWinningCondition_ *)0x0) {
        (pMVar1->fields).OnWinningConditionFulfilled = pAVar4;
        iVar6 = func_?();
        if (iVar6 != 0) goto code_?;
      }
    }
    func_?();
  }
  func_?();
  pEVar7 = (Exception *)func_?();
  func_?();
  pSVar8 = (String *)func_?();
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar7,pSVar8,(MethodInfo *)0x0);
  func_?();
  func_?();
code_?:
  func_?();
  pEVar7 = (Exception *)func_?();
  func_?();
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
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pWVar2 = (pMVar1->fields)._WinningConditionManager_k__BackingField,
     pWVar2 != (WinningConditionManager *)0x0)) {
    this_01 = (WinningCondition *)
              MVWorldObject.dll::WinningConditionManager::
              WinningConditionManager_GetSingletonWinnerConditionByType
                        (pWVar2,
                         AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
                        );
    if (this_01 == (WinningCondition *)0x0) {
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      pMVar3 = System__Object__MethodInfo__System__Array__Empty<System::Object>______;
      if (pMVar1 != (MVNetworkGame *)0x0) {
        pWVar2 = (pMVar1->fields)._WinningConditionManager_k__BackingField;
        iVar4 = *(int *)(System__Object__MethodInfo__System__Array__Empty<System::Object>______->
                         field7_0x1c).methodMetadataHandle;
        if ((*(byte *)(iVar4 + 0xba) & 1) == 0) {
          iVar4 = func_?();
        }
        if (*(int *)(iVar4 + 0x74) == 0) {
          func_?(iVar4);
        }
        iVar4 = *(int *)(pMVar3->field7_0x1c).methodMetadataHandle;
        if ((*(byte *)(iVar4 + 0xba) & 1) == 0) {
          iVar4 = func_?(iVar4);
        }
        unaff_EDI = (MVNetworkGame *)pMVar3;
        if (pWVar2 != (WinningConditionManager *)0x0) {
          this_01 = (WinningCondition *)
                    MVWorldObject.dll::WinningConditionManager::
                    WinningConditionManager_CreateWinnerCondition
                              (pWVar2,(Object__Array *)**(undefined4 **)(iVar4 + 0x5c),
                               AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__CreateWinnerCondition<AllCollectiblesCollectedClient>_System__Object____
                              );
          if (this_01 != (WinningCondition *)0x0) goto code_?;
        }
      }
    }
    else {
code_?:
      MVWorldObject.dll::WinningCondition::WinningCondition_SetLimit
                (this_01,(this_01->fields).limit + 1,(MethodInfo *)0x0);
      pMVar5 = (this->fields).collectibleObject;
      (this->fields).initializedInWorld = 1;
      if (pMVar5 != (MVCollectibleObject *)0x0) {
        MVLogicObject::MVLogicObject_SetupCulling
                  ((MVLogicObject *)this,(pMVar5->fields).pickupMesh,2.0,(MethodInfo *)0x0);
        this_00 = (this->fields)._._._.runtimeDataVariables;
        if (this_00 != (MVRuntimeDataVariables *)0x0) {
          pMVar6 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                              (this_00,StringLiteral_takenByList,1.0,0,(MethodInfo *)0x0);
          (this->fields).takenByListRunTimeVariable = pMVar6;
          func_?(&(this->fields).takenByListRunTimeVariable,pMVar6);
          unaff_EDI = (MVNetworkGame *)
                      func_?(
                                     TypeInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>
                                     );
          if (unaff_EDI != (MVNetworkGame *)0x0) {
            mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
            LowLevelList_1_System_Object___ctor
                      ((LowLevelList_1_System_Object_ *)unaff_EDI,
                       MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__List__
                      );
            (this->fields).takenByTeamList = (List_1_MV_WorldObject_MVTeam_ *)unaff_EDI;
            func_?(&(this->fields).takenByTeamList,unaff_EDI);
            pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar1 != (MVNetworkGame *)0x0) &&
               (pMVar7 = (pMVar1->fields)._NetworkGameStateListener_k__BackingField,
               pMVar7 != (MVNetworkGameStateListener *)0x0)) {
              if ((pMVar7->fields).currentGameState == 2) {
code_?:
                MVCollectible_OnTakenByListChange(this,(MethodInfo *)0x0);
                unaff_EDI = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (unaff_EDI != (MVNetworkGame *)0x0) {
                  pAStack_8 = (Action_1_IWinningCondition___Class *)
                              (unaff_EDI->fields).OnWinningConditionFulfilled;
                  this_02 = (Action_1_Object_ *)
                            func_?(TypeInfo__System__Action<IWinningCondition>);
                  if (this_02 != (Action_1_Object_ *)0x0) {
                    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                              (this_02,(Object *)this,
                               MethodInfo__MVCollectible__OnWinningConditionFulfilled_IWinningCondition_
                               ,(MethodInfo *)0x0);
                    pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                                        ((Delegate *)pAStack_8,(Delegate *)this_02,(MethodInfo *)0x0
                                        );
                    pAVar10 = TypeInfo__System__Action<IWinningCondition>;
                    if (pDVar9 == (Delegate *)0x0) {
                      (unaff_EDI->fields).OnWinningConditionFulfilled =
                           (Action_1_IWinningCondition_ *)0x0;
                      pAStack_8 = (Action_1_IWinningCondition___Class *)0x0;
code_?:
                      pDStack_11 = (Delegate *)&(unaff_EDI->fields).OnWinningConditionFulfilled;
                      EStack_12.monitor = (MonitorData *)&UNK_?;
                      func_?();
                      return;
                    }
                    pAStack_8 = TypeInfo__System__Action<IWinningCondition>;
                    EStack_12.monitor = (MonitorData *)&UNK_?;
                    pDStack_11 = pDVar9;
                    pAVar13 = (Action_1_IWinningCondition_ *)func_?();
                    if (pAVar13 != (Action_1_IWinningCondition_ *)0x0) {
                      (unaff_EDI->fields).OnWinningConditionFulfilled = pAVar13;
                      pAVar10 = TypeInfo__System__Action<IWinningCondition>;
                      pAStack_8 = TypeInfo__System__Action<IWinningCondition>;
                      EStack_12.monitor = (MonitorData *)&UNK_?;
                      pDStack_11 = pDVar9;
                      pAStack_8 = (Action_1_IWinningCondition___Class *)func_?();
                      if (pAStack_8 != (Action_1_IWinningCondition___Class *)0x0)
                      goto code_?;
                    }
                    EStack_12.monitor = (MonitorData *)&UNK_?;
                    pDStack_11 = pDVar9;
                    pAStack_8 = pAVar10;
                    func_?();
                    goto code_?;
                  }
                }
              }
              else {
                pMVar6 = (this->fields).takenByListRunTimeVariable;
                if (pMVar6 != (MVRuntimeDataVariable *)0x0) {
                  unaff_EDI = (MVNetworkGame *)
                              MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value
                                        (pMVar6,(MethodInfo *)0x0);
                  if (unaff_EDI != (MVNetworkGame *)0x0) {
                    pDVar14 = 
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                    ;
                    if (((unaff_EDI->klass->_1).typeHierarchyDepth <
                         (
                         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                         ->_1).typeHierarchyDepth) ||
                       ((Dictionary_2_System_Object_System_Object___Class *)
                        (unaff_EDI->klass->_1).typeHierarchy
                        [(
                         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                         ->_1).typeHierarchyDepth - 1] !=
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                       )) goto code_?;
                    EStack_12.klass = (Enum__Class *)TypeInfo__MV__WorldObject__MVTeam;
                    EStack_12.monitor = (MonitorData *)0xffffffff;
                    pDStack_11 = (Delegate *)0x0;
                    pSVar15 = mscorlib.dll::System::Enum::Enum_ToString
                                        (&EStack_12,(MethodInfo *)0x0);
                    bVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Object,GUILoginHandler+PlanetData]::
                            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                                      ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                                       unaff_EDI,(Object *)pSVar15,
                                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                      );
                    if (bVar16 != 0) {
                      pEVar17 = (Enum__Class *)(this->fields).takenByTeamList;
                      if (pEVar17 == (Enum__Class *)0x0) goto code_?;
                      pMStack_18 = (MVTeam__Enum__Class *)pEVar17;
                      func_?();
                    }
                    pMStack_18 = TypeInfo__MV__WorldObject__MVTeam;
                    pSVar15 = mscorlib.dll::System::Enum::Enum_ToString
                                        ((Enum *)&pMStack_18,(MethodInfo *)0x0);
                    bVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Object,GUILoginHandler+PlanetData]::
                            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                                      ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                                       unaff_EDI,(Object *)pSVar15,
                                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                      );
                    if (bVar16 != 0) {
                      pLVar19 = (this->fields).takenByTeamList;
                      if (pLVar19 == (List_1_MV_WorldObject_MVTeam_ *)0x0) goto code_?;
                      func_?(pLVar19,1,
                                      MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__Add_MV__WorldObject__MVTeam_
                                     );
                    }
                    pMStack_18 = TypeInfo__MV__WorldObject__MVTeam;
                    pSVar15 = mscorlib.dll::System::Enum::Enum_ToString
                                        ((Enum *)&pMStack_18,(MethodInfo *)0x0);
                    bVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Object,GUILoginHandler+PlanetData]::
                            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                                      ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                                       unaff_EDI,(Object *)pSVar15,
                                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                      );
                    if (bVar16 != 0) {
                      pLVar19 = (this->fields).takenByTeamList;
                      if (pLVar19 == (List_1_MV_WorldObject_MVTeam_ *)0x0) goto code_?;
                      func_?(pLVar19,2,
                                      MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__Add_MV__WorldObject__MVTeam_
                                     );
                    }
                    pMStack_18 = TypeInfo__MV__WorldObject__MVTeam;
                    pSVar15 = mscorlib.dll::System::Enum::Enum_ToString
                                        ((Enum *)&pMStack_18,(MethodInfo *)0x0);
                    bVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Object,GUILoginHandler+PlanetData]::
                            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                                      ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                                       unaff_EDI,(Object *)pSVar15,
                                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                      );
                    if (bVar16 != 0) {
                      pLVar19 = (this->fields).takenByTeamList;
                      if (pLVar19 == (List_1_MV_WorldObject_MVTeam_ *)0x0) goto code_?;
                      func_?(pLVar19,3,
                                      MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__Add_MV__WorldObject__MVTeam_
                                     );
                    }
                    goto code_?;
                  }
code_?:
                  EStack_12.klass = (Enum__Class *)TypeInfo__MV__WorldObject__MVTeam;
                  EStack_12.monitor = (MonitorData *)0xffffffff;
                  pDStack_11 = (Delegate *)0x0;
                  mscorlib.dll::System::Enum::Enum_ToString(&EStack_12,(MethodInfo *)0x0);
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
  pDVar14 = extraout_EDX;
code_?:
  func_?(unaff_EDI,pDVar14);
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
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
           (this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                      (this->fields).takenByTeamList,
           this_02 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)) {
          item = (RegexCharClass_SingleRange)(player->fields)._Team_k__BackingField;
          bVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Contains
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
              RStack9 = item;
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
    this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).takenByTeamList;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar1 != (MVNetworkGame *)0x0) &&
        (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
        pMVar3 != (MVLocalPlayer *)0x0)) &&
       (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)) {
      bVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Contains
                        (this_01,(RegexCharClass_SingleRange)
                                 (pMVar3->fields)._._Team_k__BackingField,
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
          func_?();
          cRam_? = '\x01';
        }
        this_02 = (Action_1_Object_ *)func_?();
        if (this_02 == (Action_1_Object_ *)0x0) {
          func_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
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
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnUpdate() */

void Assembly-CSharp.dll::MVCollectible::MVCollectible_OnUpdate
               (MVCollectible *this,MethodInfo *method)

{
  if ((this->fields).state == 1) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                      ((MethodInfo *)0x0);
    fVar1 = fVar1 - (this->fields).pickedUpTime;
    pfVar2 = &(this->fields).pickedUpStateDuration;
    if (*pfVar2 <= fVar1 && fVar1 != *pfVar2) {
      (this->fields).state = 2;
      pMVar3 = (this->fields).collectibleObject;
      if ((pMVar3 != (MVCollectibleObject *)0x0) &&
         (pCVar4 = (pMVar3->fields).collectibleEffects, pCVar4 != (CollectibleEffects *)0x0)) {
        (pCVar4->fields).state = 2;
        fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                          ((MethodInfo *)0x0);
        (pCVar4->fields).reshowingStartTime = fVar1;
        return;
      }
code_?:
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if ((this->fields).state == 2) {
    fVar1 = (this->fields).pickedUpTime;
    fVar6 = (this->fields).pickedUpStateDuration;
    fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                      ((MethodInfo *)0x0);
    fVar7 = fVar7 - (fVar6 + fVar1);
    pfVar2 = &(this->fields).reshowingStateDuration;
    if (*pfVar2 <= fVar7 && fVar7 != *pfVar2) {
      pMVar3 = (this->fields).collectibleObject;
      (this->fields).state = 3;
      if ((pMVar3 == (MVCollectibleObject *)0x0) ||
         (pCVar4 = (pMVar3->fields).collectibleEffects, pCVar4 == (CollectibleEffects *)0x0))
      goto code_?;
      (pCVar4->fields).state = 3;
    }
  }
  return;
}


/* Void OnWinningConditionFulfilled(IWinningCondition) */

void Assembly-CSharp.dll::MVCollectible::MVCollectible_OnWinningConditionFulfilled
               (MVCollectible *this,IWinningCondition *winningCondition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pMStack_1 = (MethodInfo *)
                &MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__Clear__;
    func_?();
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields).takenByTeamList;
  if (pLVar2 != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
    piVar3 = &(pLVar2->fields)._version;
    *piVar3 = *piVar3 + 1;
    (pLVar2->fields)._size = 0;
    pMStack_1 = (this->klass->vtable).Reset.method;
    pMStack_4 = this;
    (*(this->klass->vtable).Reset.methodPtr)();
    return;
  }
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
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
    item = (RegexCharClass_SingleRange)(pMVar2->fields)._._Team_k__BackingField;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 != (MVNetworkGame *)0x0) &&
       ((this_00 = (pMVar1->fields).teamManager, this_00 != (MVTeamManager *)0x0 &&
        (pLVar3 = MVTeamManager::MVTeamManager_GetTeamList(this_00,(MethodInfo *)0x0),
        pLVar3 != (List_1_MV_WorldObject_MVTeam_ *)0x0)))) {
      if ((pLVar3->fields)._size < 2) {
        return;
      }
      this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this->fields).takenByTeamList;
      if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        bVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Contains
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
            func_?();
            cRam_? = '\x01';
          }
          this_02 = (Action_1_Object_ *)func_?();
          if (this_02 == (Action_1_Object_ *)0x0) {
            func_?();
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
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
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
  item = (RegexCharClass_SingleRange)(this_04->fields)._Team_k__BackingField;
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
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).takenByTeamList;
    if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
    goto code_?;
    bVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Contains
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
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play
                (pAVar8,(MethodInfo *)0x0);
    }
    pMVar1 = (this->fields).collectibleObject;
    if ((pMVar1 != (MVCollectibleObject *)0x0) &&
       (this_01 = (pMVar1->fields).particles, this_01 != (ObjectParticleEmitterScript *)0x0)) {
      ObjectParticleEmitterScript::ObjectParticleEmitterScript_Play(this_01,(MethodInfo *)0x0);
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar4 != (MVNetworkGame *)0x0) &&
         ((this_02 = (pMVar4->fields).teamManager, this_02 != (MVTeamManager *)0x0 &&
          (RStack9 = item,
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


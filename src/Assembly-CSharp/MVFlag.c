
/* Void Destroy() */

void Assembly-CSharp.dll::MVFlag::MVFlag_Destroy(MVFlag *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                   );
    func_?(&
                    MethodInfo__MVFlag__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   );
    func_?(&
                    MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   );
    func_?(&
                    MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   );
    func_?(&
                    FlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<FlagReachedClient>__
                   );
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).triggerBoxEvents;
  pUVar2 = (UnityAction_2_System_Object_System_Object_ *)
           func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (pUVar2,(Object *)this,
             MethodInfo__MVFlag__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_,
             (MethodInfo *)0x0);
  if (pTVar1 != (TriggerBoxEvents *)0x0) {
    TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
              (pTVar1,(EventHandler_1_TriggerEventArgs_ *)pUVar2,(MethodInfo *)0x0);
    if ((this->fields).useInteractor == (UseInteractor *)0x0) {
code_?:
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      woid = (this->fields)._._._._.id;
      if ((TypeInfo__GamePointAmountManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      GamePointAmountManager::GamePointAmountManager_UpdateRewardData(woid,0,(MethodInfo *)0x0);
      MVLogicObject::MVLogicObject_Destroy((MVLogicObject *)this,(MethodInfo *)0x0);
      if ((this->fields).initializedInWorld == 0) {
        return;
      }
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((((pMVar3 != (MVNetworkGame *)0x0) &&
           (pWVar4 = (pMVar3->fields).worldNetwork, pWVar4 != (WorldNetwork *)0x0)) &&
          (this_00 = (MVWorldObjectClientManager *)(pWVar4->fields)._.worldObjectClientManager,
          this_00 != (MVWorldObjectClientManager *)0x0)) &&
         (pLVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                             (this_00,(this->fields)._._._._.type,(MethodInfo *)0x0),
         pLVar5 != (List_1_MVWorldObjectClient_ *)0x0)) {
        if ((pLVar5->fields)._size != 0) {
          return;
        }
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar3 != (MVNetworkGame *)0x0) &&
           (pWVar6 = (pMVar3->fields)._WinningConditionManager_k__BackingField,
           pWVar6 != (WinningConditionManager *)0x0)) {
          pOVar7 = MVWorldObject.dll::WinningConditionManager::
                   WinningConditionManager_GetSingletonWinnerConditionByType
                             (pWVar6,
                              FlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<FlagReachedClient>__
                             );
          if (pOVar7 == (Object *)0x0) goto code_?;
          pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar3 != (MVNetworkGame *)0x0) &&
             (pWVar6 = (pMVar3->fields)._WinningConditionManager_k__BackingField,
             pWVar6 != (WinningConditionManager *)0x0)) {
            MVWorldObject.dll::WinningConditionManager::
            WinningConditionManager_RemoveWinnerCondition
                      (pWVar6,(int32_t)pOVar7[1].monitor,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    else {
      pTVar1 = (this->fields).triggerBoxEvents;
      pUVar8 = (this->fields).useInteractor;
      pUVar2 = (UnityAction_2_System_Object_System_Object_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (pUVar2,(Object *)pUVar8,
                 MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 ,(MethodInfo *)0x0);
      if (pTVar1 != (TriggerBoxEvents *)0x0) {
        TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
                  (pTVar1,(EventHandler_1_TriggerEventArgs_ *)pUVar2,(MethodInfo *)0x0);
        pTVar1 = (this->fields).triggerBoxEvents;
        pUVar8 = (this->fields).useInteractor;
        pUVar2 = (UnityAction_2_System_Object_System_Object_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (pUVar2,(Object *)pUVar8,
                   MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   ,(MethodInfo *)0x0);
        if (pTVar1 != (TriggerBoxEvents *)0x0) {
          TriggerBoxEvents::TriggerBoxEvents_remove_TriggerExit
                    (pTVar1,(EventHandler_1_TriggerEventArgs_ *)pUVar2,(MethodInfo *)0x0);
          pUVar8 = (this->fields).useInteractor;
          if (pUVar8 != (UseInteractor *)0x0) {
            UseInteractor::UseInteractor_OnDestroy
                      (pUVar8,(this->fields)._._._._.data,(MethodInfo *)0x0);
            (this->fields).useInteractor = (UseInteractor *)0x0;
            func_?();
            goto code_?;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  this_01 = (Exception *)func_?();
  message = (String *)func_?();
  mscorlib.dll::System::Exception::Exception__ctor_1(this_01,message,(MethodInfo *)0x0);
  uStack9 = func_?();
  pEStack10 = this_01;
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Boolean DoCaptureFlag(Int32) */

bool Assembly-CSharp.dll::MVFlag::MVFlag_DoCaptureFlag
               (MVFlag *this,int32_t instigator,MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_ReportCaptureFlag
              (this_00,(this->fields)._._._._.id,(MethodInfo *)0x0);
    return 1;
  }
  uVar1 = func_?(&stack0xfffffff4);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Vector3 GetClosestGridPoint(Single, Vector3) */

Vector3 * Assembly-CSharp.dll::MVFlag::MVFlag_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,MVFlag *this,float gridSize,Vector3 position,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  uVar1 = (TypeInfo__UnityEngine__Vector3->static_fields->oneVector).y;
  fVar2 = (float)uVar1 * _UNK_?;
  this_00 = (this->fields)._._._.gameObject;
  if (this_00 != (GameObject *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                ((Quaternion *)&stack0xffffffe0,this_01,(MethodInfo *)0x0);
      pSVar3 = TypeInfo__SharedCubeFunctions;
      pSVar4 = (SharedCubeFunctions__Class *)0x3f800000;
      if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
        pSVar4 = pSVar3;
      }
      worldPosition.z = position.z;
      worldPosition.x = position.x;
      worldPosition.y = position.y;
      rotation.y = (float)pSVar4;
      rotation.x = gridSize;
      rotation.z = fVar2;
      rotation.w = 1.0;
      scale.y = fVar2;
      scale.x = (float)pSVar4;
      scale.z = 1.0;
      pVVar5 = SharedCubeFunctions::SharedCubeFunctions_GetClosestGridPoint
                         (&position,worldPosition,rotation,gridSize,scale,(MethodInfo *)0x0);
      fVar6 = pVVar5->y;
      fVar2 = pVVar5->z;
      __return_storage_ptr__->x = pVVar5->x;
      __return_storage_ptr__->y = fVar6;
      __return_storage_ptr__->z = fVar2;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pVVar5 = (Vector3 *)(*pcVar7)();
  return pVVar5;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVFlag::MVFlag_Initialize(MVFlag *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&System__Object__MethodInfo__System__Array__Empty<System::Object>______);
    func_?(&
                    WorldObjectEnableController_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<WorldObjectEnableController>__
                   );
    func_?(&
                    FlagReachedClient_MethodInfo__WinningConditionManager__CreateWinnerCondition<FlagReachedClient>_System__Object____
                   );
    func_?(&
                    FlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<FlagReachedClient>__
                   );
    cRam_? = '\x01';
  }
  MVFlag_SetupUseInteractor(this,(MethodInfo *)0x0);
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 == (MVNetworkGame *)0x0) ||
     (pWVar2 = (pMVar1->fields)._WinningConditionManager_k__BackingField,
     pWVar2 == (WinningConditionManager *)0x0)) goto code_?;
  pOVar3 = MVWorldObject.dll::WinningConditionManager::
           WinningConditionManager_GetSingletonWinnerConditionByType
                     (pWVar2,
                      FlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<FlagReachedClient>__
                     );
  if (pOVar3 == (Object *)0x0) {
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    pWVar2 = (pMVar1->fields)._WinningConditionManager_k__BackingField;
    args = (Object__Array *)func_?();
    if (pWVar2 == (WinningConditionManager *)0x0) goto code_?;
    MVWorldObject.dll::WinningConditionManager::WinningConditionManager_CreateWinnerCondition
              (pWVar2,args,
               FlagReachedClient_MethodInfo__WinningConditionManager__CreateWinnerCondition<FlagReachedClient>_System__Object____
              );
  }
  this_00 = (this->fields).useInteractor;
  (this->fields).initializedInWorld = 1;
  if (this_00 != (UseInteractor *)0x0) {
    UseInteractor::UseInteractor_UpdateData(this_00,(this->fields)._._._._.data,(MethodInfo *)0x0);
    this_01 = (this->fields)._._._.gameObject;
    if (this_01 != (GameObject *)0x0) {
      pWVar4 = (WorldObjectEnableController *)
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::
               GameObject_GetComponentInChildren_1
                         (this_01,
                          WorldObjectEnableController_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<WorldObjectEnableController>__
                         );
      (this->fields).worldObjectEnableController = pWVar4;
      func_?();
      pFVar5 = (this->fields).flagObject;
      if (pFVar5 != (FlagObject *)0x0) {
        MVLogicObject::MVLogicObject_SetupCulling
                  ((MVLogicObject *)this,(pFVar5->fields).visualObject,2.0,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetupUseInteractor() */

void Assembly-CSharp.dll::MVFlag::MVFlag_SetupUseInteractor(MVFlag *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    func_?(&TypeInfo__System__Func<int,_bool>);
    func_?(&TypeInfo__GameCoinLogic);
    func_?(&MethodInfo__MVFlag__DoCaptureFlag_int_);
    func_?(&TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement);
    func_?(&TypeInfo__TeamRequirement);
    func_?(&TypeInfo__UseInteractor);
    func_?(&
                    MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   );
    func_?(&
                    MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   );
    cRam_? = '\x01';
  }
  pFVar1 = (this->fields).flagObject;
  if (pFVar1 != (FlagObject *)0x0) {
    pGVar2 = (pFVar1->fields).useInteractionRotator;
    pTVar3 = (this->fields).triggerBoxEvents;
    if (pTVar3 != (TriggerBoxEvents *)0x0) {
      triggerCollider = TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar3,(MethodInfo *)0x0);
      this_00 = (Predicate_1_UInt32_ *)func_?(TypeInfo__System__Func<int,_bool>);
      mscorlib.dll::System::Predicate`1[UInt32]::Predicate_1_UInt32___ctor
                (this_00,(Object *)this,MethodInfo__MVFlag__DoCaptureFlag_int_,(MethodInfo *)0x0);
      pUVar4 = (UseInteractor *)func_?(TypeInfo__UseInteractor);
      UseInteractor::UseInteractor__ctor
                (pUVar4,(MVWorldObjectClient *)this,pGVar2,0,triggerCollider,
                 (Func_2_Int32_Boolean_ *)this_00,(Func_3_Int32_MVInteractableBase_Boolean_ *)0x0,
                 2.5,0,(MethodInfo *)0x0);
      (this->fields).useInteractor = pUVar4;
      func_?(&(this->fields).useInteractor,pUVar4);
      pTVar3 = (this->fields).triggerBoxEvents;
      pUVar4 = (this->fields).useInteractor;
      pUVar5 = (UnityAction_2_System_Object_System_Object_ *)
               func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (pUVar5,(Object *)pUVar4,
                 MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 ,(MethodInfo *)0x0);
      if (pTVar3 != (TriggerBoxEvents *)0x0) {
        TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                  (pTVar3,(EventHandler_1_TriggerEventArgs_ *)pUVar5,(MethodInfo *)0x0);
        pTVar3 = (this->fields).triggerBoxEvents;
        pUVar4 = (this->fields).useInteractor;
        pUVar5 = (UnityAction_2_System_Object_System_Object_ *)
                 func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (pUVar5,(Object *)pUVar4,
                   MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   ,(MethodInfo *)0x0);
        if (pTVar3 != (TriggerBoxEvents *)0x0) {
          TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                    (pTVar3,(EventHandler_1_TriggerEventArgs_ *)pUVar5,(MethodInfo *)0x0);
          pFVar1 = (this->fields).flagObject;
          if (pFVar1 != (FlagObject *)0x0) {
            pGVar2 = (pFVar1->fields).useInteractionRotator;
            this_01 = (GameCoinLogic *)func_?(TypeInfo__GameCoinLogic);
            GameCoinLogic::GameCoinLogic__ctor(this_01,pGVar2,0,(MethodInfo *)0x0);
            pUVar4 = (this->fields).useInteractor;
            if (pUVar4 != (UseInteractor *)0x0) {
              UseInteractor::UseInteractor_AddRequirement
                        (pUVar4,(UseRequirement *)this_01,(MethodInfo *)0x0);
              pFVar1 = (this->fields).flagObject;
              if (pFVar1 != (FlagObject *)0x0) {
                tintObject = (pFVar1->fields).tintObject;
                this_02 = (TeamRequirement *)func_?(TypeInfo__TeamRequirement);
                TeamRequirement::TeamRequirement__ctor(this_02,tintObject,0,(MethodInfo *)0x0);
                pUVar4 = (this->fields).useInteractor;
                if (pUVar4 != (UseInteractor *)0x0) {
                  UseInteractor::UseInteractor_AddRequirement
                            (pUVar4,(UseRequirement *)this_02,(MethodInfo *)0x0);
                  pFVar1 = (this->fields).flagObject;
                  if (pFVar1 != (FlagObject *)0x0) {
                    pGVar2 = (pFVar1->fields).useInteractionRotator;
                    uVar6 = 0;
                    this_03 = (RewardedAdRequirement *)
                              func_?(
                                             TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement
                                             );
                    displayOffset.y = (float)_UNK_?;
                    displayOffset.x = (float)uVar6;
                    displayOffset.z = 0.0;
                    WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement::
                    RewardedAdRequirement__ctor_2(this_03,pGVar2,displayOffset,(MethodInfo *)0x0);
                    pUVar4 = (this->fields).useInteractor;
                    if (pUVar4 != (UseInteractor *)0x0) {
                      UseInteractor::UseInteractor_AddRequirement
                                (pUVar4,(UseRequirement *)this_03,(MethodInfo *)0x0);
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
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* MVFlag(Dictionary`2[System.Object,System.Object], Dictionary`2[System.Int32,MVWorldObjectClient])
    */

void Assembly-CSharp.dll::MVFlag::MVFlag__ctor
               (MVFlag *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    func_?(&TypeInfo__FlagObject);
    func_?(&
                    MethodInfo__MVFlag__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVGamePointRewardLogicObject::MVGamePointRewardLogicObject__ctor
              ((MVGamePointRewardLogicObject *)this,data,(pPVar1->fields).mvFlagPrefab,worldObjects,
               (MethodInfo *)0x0);
    pFVar2 = (FlagObject *)(this->fields)._._._.component;
    if (pFVar2 == (FlagObject *)0x0) {
      (this->fields).flagObject = (FlagObject *)0x0;
    }
    else {
      if (((((ObjectPrefab__Class *)pFVar2->klass)->_1).naturalAligment <
           (TypeInfo__FlagObject->_1).naturalAligment) ||
         ((((ObjectPrefab__Class *)pFVar2->klass)->_1).typeHierarchy
          [(TypeInfo__FlagObject->_1).naturalAligment - 1] != (Il2CppClass *)TypeInfo__FlagObject))
      goto code_?;
      (this->fields).flagObject = pFVar2;
      if (((((ObjectPrefab__Class *)pFVar2->klass)->_1).naturalAligment <
           (TypeInfo__FlagObject->_1).naturalAligment) ||
         ((((ObjectPrefab__Class *)pFVar2->klass)->_1).typeHierarchy
          [(TypeInfo__FlagObject->_1).naturalAligment - 1] != (Il2CppClass *)TypeInfo__FlagObject))
      goto code_?;
    }
    func_?(&(this->fields).flagObject);
    pFVar2 = (this->fields).flagObject;
    if (pFVar2 != (FlagObject *)0x0) {
      pTVar3 = (pFVar2->fields).triggerBoxEvents;
      (this->fields).triggerBoxEvents = pTVar3;
      func_?(&(this->fields).triggerBoxEvents,pTVar3);
      pTVar3 = (this->fields).triggerBoxEvents;
      this_00 = (UnityAction_2_System_Object_System_Object_ *)
                func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__MVFlag__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 ,(MethodInfo *)0x0);
      if (pTVar3 != (TriggerBoxEvents *)0x0) {
        TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                  (pTVar3,(EventHandler_1_TriggerEventArgs_ *)this_00,(MethodInfo *)0x0);
        piVar4 = &(this->fields)._._._.interactionFlags;
        *(uint *)piVar4 = (uint)*piVar4 | 0x22100000;
        puVar5 = (uint *)((int)&(this->fields)._._._.interactionFlags + 4);
        *puVar5 = *puVar5 | 2;
        return;
      }
    }
  }
  func_?();
  pFVar2 = extraout_EDX;
code_?:
  func_?(pFVar2);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void triggerBoxEvents_TriggerEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::MVFlag::MVFlag_triggerBoxEvents_TriggerEnter
               (MVFlag *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  pWVar1 = (this->fields).worldObjectEnableController;
  if (pWVar1 != (WorldObjectEnableController *)0x0) {
    if ((pWVar1->fields).enableState != 2) {
      return;
    }
    this_00 = (this->fields).useInteractor;
    if (this_00 != (UseInteractor *)0x0) {
      UVar2 = UseInteractor::UseInteractor_EvaluateRequirementsUsability(this_00,(MethodInfo *)0x0);
      if ((UVar2 & (UseGUIResult__Enum_CannotAfford|UseGUIResult__Enum_CanAfford)) != 0) {
        return;
      }
      if ((e != (TriggerEventArgs *)0x0) &&
         (this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0), this_01 != (MVNetworkGame_OperationRequests *)0x0
         )) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_ReportCaptureFlag
                  (this_01,(this->fields)._._._._.id,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


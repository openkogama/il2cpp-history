
/* Void Destroy() */

void Assembly-CSharp.dll::MVGameCoinChest::MVGameCoinChest_Destroy
               (MVGameCoinChest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    func_?(&
                    MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   );
    func_?(&
                    MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   );
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields)._GameCoinManager_k__BackingField,
     this_00 != (MVGameCoinManager *)0x0)) {
    MVGameCoinManager::MVGameCoinManager_ReportPickupChangeInEditor(this_00,(MethodInfo *)0x0);
    if ((this->fields).useInteractor == (UseInteractor *)0x0) {
code_?:
      MVLogicObject::MVLogicObject_Destroy((MVLogicObject *)this,(MethodInfo *)0x0);
      return;
    }
    pMVar2 = (this->fields).chestObject;
    if (pMVar2 != (MVGameCoinChestObject *)0x0) {
      pTVar3 = (pMVar2->fields).triggerBoxEvents;
      pUVar4 = (this->fields).useInteractor;
      pUVar5 = (UnityAction_2_System_Object_System_Object_ *)
               func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
      if (pUVar5 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (pUVar5,(Object *)pUVar4,
                   MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   ,(MethodInfo *)0x0);
        if (pTVar3 != (TriggerBoxEvents *)0x0) {
          TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
                    (pTVar3,(EventHandler_1_TriggerEventArgs_ *)pUVar5,(MethodInfo *)0x0);
          pMVar2 = (this->fields).chestObject;
          if (pMVar2 != (MVGameCoinChestObject *)0x0) {
            pTVar3 = (pMVar2->fields).triggerBoxEvents;
            object = (Object *)&UNK_?;
            pUVar5 = (UnityAction_2_System_Object_System_Object_ *)
                     func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
            if (pUVar5 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        (pUVar5,object,
                         MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                         ,(MethodInfo *)0x0);
              if (pTVar3 != (TriggerBoxEvents *)0x0) {
                TriggerBoxEvents::TriggerBoxEvents_remove_TriggerExit
                          (pTVar3,(EventHandler_1_TriggerEventArgs_ *)pUVar5,(MethodInfo *)0x0);
                pUVar4 = (this->fields).useInteractor;
                if (pUVar4 != (UseInteractor *)0x0) {
                  UseInteractor::UseInteractor_OnDestroy
                            (pUVar4,(this->fields)._._._.data,(MethodInfo *)0x0);
                  (this->fields).useInteractor = (UseInteractor *)0x0;
                  func_?(&(this->fields).useInteractor,0);
                  goto code_?;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void DoOpen() */

void Assembly-CSharp.dll::MVGameCoinChest::MVGameCoinChest_DoOpen
               (MVGameCoinChest *this,MethodInfo *method)

{
  if (((this->fields).state == 2) || ((this->fields).state == 1)) {
    pMVar1 = (this->fields).chestObject;
    if ((pMVar1 == (MVGameCoinChestObject *)0x0) ||
       (this_00 = (pMVar1->fields).modelSelector, this_00 == (GameCoinChestModelSelector *)0x0)) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    GameCoinChestModelSelector::GameCoinChestModelSelector_Close(this_00,(MethodInfo *)0x0);
    (this->fields).state = 0;
  }
  return;
}


/* Vector3 GetClosestGridPoint(Single, Vector3) */

Vector3 * Assembly-CSharp.dll::MVGameCoinChest::MVGameCoinChest_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,MVGameCoinChest *this,float gridSize,
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
  this_00 = (this->fields)._._.gameObject;
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

void Assembly-CSharp.dll::MVGameCoinChest::MVGameCoinChest_Initialize
               (MVGameCoinChest *this,MethodInfo *method)

{
  MVGameCoinChest_SetupUseInteractor(this,(MethodInfo *)0x0);
  this_00 = (this->fields).useInteractor;
  if (this_00 != (UseInteractor *)0x0) {
    UseInteractor::UseInteractor_UpdateData(this_00,(this->fields)._._._.data,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 != (MVNetworkGame *)0x0) &&
       (this_01 = (pMVar1->fields)._GameCoinManager_k__BackingField,
       this_01 != (MVGameCoinManager *)0x0)) {
      MVGameCoinManager::MVGameCoinManager_ReportPickupChangeInEditor(this_01,(MethodInfo *)0x0);
      MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
      pMVar2 = (this->fields).chestObject;
      if (pMVar2 != (MVGameCoinChestObject *)0x0) {
        MVLogicObject::MVLogicObject_SetupCulling
                  ((MVLogicObject *)this,(pMVar2->fields).visualObject,2.0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVGameCoinChest::MVGameCoinChest_InitializeInventory
               (MVGameCoinChest *this,MethodInfo *method)

{
  MVLogicObject::MVLogicObject_InitializeInventory((MVLogicObject *)this,(MethodInfo *)0x0);
  pMVar1 = (this->fields).chestObject;
  if ((pMVar1 != (MVGameCoinChestObject *)0x0) &&
     ((pMVar1->fields).modelSelector != (GameCoinChestModelSelector *)0x0)) {
    if (*(Renderer **)(in_stack_2 + 0x10) != (Renderer *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                (*(Renderer **)(in_stack_2 + 0x10),0,(MethodInfo *)0x0);
      if (*(Renderer **)(in_stack_2 + 0xc) != (Renderer *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                  (*(Renderer **)(in_stack_2 + 0xc),1,(MethodInfo *)0x0);
        return;
      }
    }
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean IsUsable(Int32, MVInteractableBase) */

bool Assembly-CSharp.dll::MVGameCoinChest::MVGameCoinChest_IsUsable
               (MVGameCoinChest *this,int32_t woId,MVInteractableBase *avatarInteractable,
               MethodInfo *method)

{
  return (this->fields).state == 0;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVGameCoinChest::MVGameCoinChest_OnDataUpdate
               (MVGameCoinChest *this,MethodInfo *method)

{
  this_00 = (this->fields).useInteractor;
  if (this_00 != (UseInteractor *)0x0) {
    UseInteractor::UseInteractor_UpdateData(this_00,(this->fields)._._._.data,(MethodInfo *)0x0);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnUpdate() */

void Assembly-CSharp.dll::MVGameCoinChest::MVGameCoinChest_OnUpdate
               (MVGameCoinChest *this,MethodInfo *method)

{
  if ((this->fields).state == 1) {
    MVGameCoinChest_OpenChest(this,(this->fields).instigator,(MethodInfo *)0x0);
    (this->fields).instigator = -1;
  }
  return;
}


/* Boolean OpenChest(Int32) */

bool Assembly-CSharp.dll::MVGameCoinChest::MVGameCoinChest_OpenChest
               (MVGameCoinChest *this,int32_t instigatorID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_gameCoinAmount);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).chestObject;
  (this->fields).instigator = instigatorID;
  if ((pMVar1 != (MVGameCoinChestObject *)0x0) &&
     (this_00 = (pMVar1->fields).modelSelector, this_00 != (GameCoinChestModelSelector *)0x0)) {
    GameCoinChestModelSelector::GameCoinChestModelSelector_Open(this_00,(MethodInfo *)0x0);
    pMVar1 = (this->fields).chestObject;
    if (pMVar1 != (MVGameCoinChestObject *)0x0) {
      pAVar2 = (pMVar1->fields).audioSource;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                        ((Object_1 *)pAVar2,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        pMVar1 = (this->fields).chestObject;
        if ((pMVar1 == (MVGameCoinChestObject *)0x0) ||
           (pAVar2 = (pMVar1->fields).audioSource, pAVar2 == (AudioSource *)0x0))
        goto code_?;
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play
                  (pAVar2,(MethodInfo *)0x0);
      }
      pMVar1 = (this->fields).chestObject;
      if ((pMVar1 != (MVGameCoinChestObject *)0x0) &&
         (this_01 = (pMVar1->fields).particles, this_01 != (ObjectParticleEmitterScript *)0x0)) {
        ObjectParticleEmitterScript::ObjectParticleEmitterScript_Play(this_01,(MethodInfo *)0x0);
        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar4 != (MVNetworkGame *)0x0) {
          this_02 = (pMVar4->fields)._GameCoinManager_k__BackingField;
          this_03 = (this->fields)._._._.data;
          if (this_03 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                     ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                               (this_03,(Object *)StringLiteral_gameCoinAmount,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
            uVar6 = CONCAT44(TypeInfo__System__Int32,pOVar5);
            if ((this_02 != (MVGameCoinManager *)0x0) && (pOVar5 != (Object *)0x0)) {
              if ((pOVar5->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
              goto code_?;
              piVar7 = (int32_t *)func_?();
              MVGameCoinManager::MVGameCoinManager_GameCoinChestCollect
                        (this_02,*piVar7,(MethodInfo *)0x0);
              bVar3 = MVClientSettings::MVClientSettings_IsFlagSet
                                (ClientSettingFlags__Enum_GamePassSilentReleaseEnabled,
                                 (MethodInfo *)0x0);
              if (bVar3 == 0) {
code_?:
                (this->fields).state = 2;
                return 1;
              }
              this_04 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                  ((MethodInfo *)0x0);
              if (this_04 != (MVNetworkGame_OperationRequests *)0x0) {
                MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TriggerBoxEnter
                          (this_04,(this->fields)._._._.id,instigatorID,(MethodInfo *)0x0);
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
code_?:
  uVar6 = func_?();
code_?:
  func_?(uVar6);
  pcVar8 = (code *)swi(3);
  bVar3 = (*pcVar8)();
  return bVar3;
}


/* Void SetupUseInteractor() */

void Assembly-CSharp.dll::MVGameCoinChest::MVGameCoinChest_SetupUseInteractor
               (MVGameCoinChest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    func_?(&TypeInfo__System__Func<int,_bool>);
    func_?(&TypeInfo__System__Func<int,_MVInteractableBase,_bool>);
    func_?(&TypeInfo__LevelBasedUseRequirement);
    func_?(&MethodInfo__MVGameCoinChest__IsUsable_int__MVInteractableBase_);
    func_?(&MethodInfo__MVGameCoinChest__OpenChest_int_);
    func_?(&TypeInfo__UseInteractor);
    func_?(&
                    MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   );
    func_?(&
                    MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   );
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).chestObject;
  if (pMVar1 != (MVGameCoinChestObject *)0x0) {
    pGVar2 = (pMVar1->fields).useInteractionRotator;
    pTVar3 = (((this->fields).chestObject)->fields).triggerBoxEvents;
    if (pTVar3 != (TriggerBoxEvents *)0x0) {
      triggerCollider = TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar3,(MethodInfo *)0x0);
      this_00 = (Predicate_1_Int32Enum_ *)func_?(TypeInfo__System__Func<int,_bool>);
      if (this_00 != (Predicate_1_Int32Enum_ *)0x0) {
        mscorlib.dll::System::Predicate`1[Int32Enum]::Predicate_1_Int32Enum___ctor
                  (this_00,(Object *)this,MethodInfo__MVGameCoinChest__OpenChest_int_,
                   (MethodInfo *)0x0);
        this_01 = (Func_3_Int32_Object_Boolean_ *)
                  func_?(TypeInfo__System__Func<int,_MVInteractableBase,_bool>);
        if (this_01 != (Func_3_Int32_Object_Boolean_ *)0x0) {
          mscorlib.dll::System::Func`3[Int32,Object,Boolean]::Func_3_Int32_Object_Boolean___ctor
                    (this_01,(Object *)this,
                     MethodInfo__MVGameCoinChest__IsUsable_int__MVInteractableBase_,
                     (MethodInfo *)0x0);
          pUVar4 = (UseInteractor *)func_?(TypeInfo__UseInteractor);
          if (pUVar4 != (UseInteractor *)0x0) {
            UseInteractor::UseInteractor__ctor
                      (pUVar4,(MVWorldObjectClient *)this,pGVar2,0,triggerCollider,
                       (Func_2_Int32_Boolean_ *)this_00,
                       (Func_3_Int32_MVInteractableBase_Boolean_ *)this_01,2.5,0,(MethodInfo *)0x0);
            (this->fields).useInteractor = pUVar4;
            func_?(&(this->fields).useInteractor,pUVar4);
            pMVar1 = (this->fields).chestObject;
            if (pMVar1 != (MVGameCoinChestObject *)0x0) {
              pGVar2 = (pMVar1->fields).useInteractionRotator;
              this_02 = (LevelBasedUseRequirement *)
                        func_?(TypeInfo__LevelBasedUseRequirement);
              if (this_02 != (LevelBasedUseRequirement *)0x0) {
                LevelBasedUseRequirement::LevelBasedUseRequirement__ctor
                          (this_02,pGVar2,0,(MethodInfo *)0x0);
                pUVar4 = (this->fields).useInteractor;
                if (pUVar4 != (UseInteractor *)0x0) {
                  UseInteractor::UseInteractor_AddRequirement
                            (pUVar4,(UseRequirement *)this_02,(MethodInfo *)0x0);
                  pMVar1 = (this->fields).chestObject;
                  if (pMVar1 != (MVGameCoinChestObject *)0x0) {
                    pTVar3 = (pMVar1->fields).triggerBoxEvents;
                    pUVar4 = (this->fields).useInteractor;
                    pUVar5 = (UnityAction_2_System_Object_System_Object_ *)
                             func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
                    if (pUVar5 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                      Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                                (pUVar5,(Object *)pUVar4,
                                 MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                                 ,(MethodInfo *)0x0);
                      if (pTVar3 != (TriggerBoxEvents *)0x0) {
                        TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                                  (pTVar3,(EventHandler_1_TriggerEventArgs_ *)pUVar5,
                                   (MethodInfo *)0x0);
                        pMVar1 = (this->fields).chestObject;
                        if (pMVar1 != (MVGameCoinChestObject *)0x0) {
                          pTVar3 = (pMVar1->fields).triggerBoxEvents;
                          pUVar4 = (this->fields).useInteractor;
                          pUVar5 = (UnityAction_2_System_Object_System_Object_ *)
                                   func_?(TypeInfo__System__EventHandler<TriggerEventArgs>)
                          ;
                          if (pUVar5 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                            Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                                      (pUVar5,(Object *)pUVar4,
                                       MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                                       ,(MethodInfo *)0x0);
                            if (pTVar3 != (TriggerBoxEvents *)0x0) {
                              TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                                        (pTVar3,(EventHandler_1_TriggerEventArgs_ *)pUVar5,
                                         (MethodInfo *)0x0);
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
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* MVGameCoinChest(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVGameCoinChest::MVGameCoinChest__ctor
               (MVGameCoinChest *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    func_?(&TypeInfo__MVGameCoinChestObject);
    func_?(&
                    MethodInfo__MVGameCoinChest__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_A_TriggerBoxEvents_object_is_mis);
    cRam_? = '\x01';
  }
  (this->fields).instigator = -1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(pPVar1->fields).mvGameCoinChestPrefab,worldObjects,
               (MethodInfo *)0x0);
    pMVar2 = (MVGameCoinChestObject *)(this->fields)._._.component;
    if (pMVar2 == (MVGameCoinChestObject *)0x0) {
      (this->fields).chestObject = (MVGameCoinChestObject *)0x0;
    }
    else {
      if (((((ObjectPrefab__Class *)pMVar2->klass)->_1).typeHierarchyDepth <
           (TypeInfo__MVGameCoinChestObject->_1).typeHierarchyDepth) ||
         ((((ObjectPrefab__Class *)pMVar2->klass)->_1).typeHierarchy
          [(TypeInfo__MVGameCoinChestObject->_1).typeHierarchyDepth - 1] !=
          (Il2CppClass *)TypeInfo__MVGameCoinChestObject)) goto code_?;
      (this->fields).chestObject = pMVar2;
      if (((((ObjectPrefab__Class *)pMVar2->klass)->_1).typeHierarchyDepth <
           (TypeInfo__MVGameCoinChestObject->_1).typeHierarchyDepth) ||
         ((((ObjectPrefab__Class *)pMVar2->klass)->_1).typeHierarchy
          [(TypeInfo__MVGameCoinChestObject->_1).typeHierarchyDepth - 1] !=
          (Il2CppClass *)TypeInfo__MVGameCoinChestObject)) goto code_?;
    }
    func_?(&(this->fields).chestObject);
    pMVar2 = (this->fields).chestObject;
    if (pMVar2 != (MVGameCoinChestObject *)0x0) {
      pTVar3 = (pMVar2->fields).triggerBoxEvents;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pTVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        pTVar5 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
        if (pTVar5 != (Type *)0x0) {
          pSVar6 = (String *)
                   (*(pTVar5->klass->vtable).__unknown.methodPtr)
                             (pTVar5,(pTVar5->klass->vtable).__unknown.method);
          pSVar6 = mscorlib.dll::System::String::String_Concat_3
                             (StringLiteral_A_TriggerBoxEvents_object_is_mis,pSVar6,
                              (MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                    ((Object *)pSVar6,(MethodInfo *)0x0);
code_?:
          piVar7 = &(this->fields)._._.interactionFlags;
          *(uint *)piVar7 = (uint)*piVar7 | 0x8000;
          uVar8 = *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
          piVar7 = &(this->fields)._._.interactionFlags;
          *(uint *)piVar7 = (uint)*piVar7 | 0x200000;
          *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) = uVar8;
          pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar9 != (MVNetworkGame *)0x0) &&
             (this_00 = (pMVar9->fields)._GameCoinManager_k__BackingField,
             this_00 != (MVGameCoinManager *)0x0)) {
            MVGameCoinManager::MVGameCoinManager_ReportPickupChangeInEditor
                      (this_00,(MethodInfo *)0x0);
            return;
          }
        }
      }
      else {
        pMVar2 = (this->fields).chestObject;
        if (pMVar2 != (MVGameCoinChestObject *)0x0) {
          pTVar3 = (pMVar2->fields).triggerBoxEvents;
          this_01 = (UnityAction_2_System_Object_System_Object_ *)
                    func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
          if (this_01 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      (this_01,(Object *)this,
                       MethodInfo__MVGameCoinChest__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                       ,(MethodInfo *)0x0);
            if (pTVar3 != (TriggerBoxEvents *)0x0) {
              TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                        (pTVar3,(EventHandler_1_TriggerEventArgs_ *)this_01,(MethodInfo *)0x0);
              goto code_?;
            }
          }
        }
      }
    }
  }
  func_?();
  pMVar2 = extraout_EDX;
code_?:
  func_?(pMVar2);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Boolean get_Visible() */

bool Assembly-CSharp.dll::MVGameCoinChest::MVGameCoinChest_get_Visible
               (MVGameCoinChest *this,MethodInfo *method)

{
  pMVar1 = (this->fields).chestObject;
  if (((pMVar1 != (MVGameCoinChestObject *)0x0) &&
      (pGVar2 = (pMVar1->fields).modelSelector, pGVar2 != (GameCoinChestModelSelector *)0x0)) &&
     (this_00 = (pGVar2->fields).openMesh, this_00 != (Renderer *)0x0)) {
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_enabled
                      (this_00,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      return 1;
    }
    if ((pGVar2->fields).closedMesh != (Renderer *)0x0) {
      if (pcRam_? == (code *)0x0) {
        pcRam_? = (code *)func_?();
      }
      bVar3 = (*pcRam_?)();
      return bVar3;
    }
  }
  uVar4 = func_?(&stack0xfffffff0);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  bVar3 = (*pcVar5)();
  return bVar3;
}


/* Void set_Visible(Boolean) */

void Assembly-CSharp.dll::MVGameCoinChest::MVGameCoinChest_set_Visible
               (MVGameCoinChest *this,bool value,MethodInfo *method)

{
  pMVar1 = (this->fields).chestObject;
  if ((this->fields).state == 0) {
    if ((pMVar1 != (MVGameCoinChestObject *)0x0) &&
       (pGVar2 = (pMVar1->fields).modelSelector, pGVar2 != (GameCoinChestModelSelector *)0x0)) {
      GameCoinChestModelSelector::GameCoinChestModelSelector_Close(pGVar2,(MethodInfo *)0x0);
      return;
    }
  }
  else if ((pMVar1 != (MVGameCoinChestObject *)0x0) &&
          (pGVar2 = (pMVar1->fields).modelSelector, pGVar2 != (GameCoinChestModelSelector *)0x0)) {
    GameCoinChestModelSelector::GameCoinChestModelSelector_Open(pGVar2,(MethodInfo *)0x0);
    return;
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void triggerBoxEvents_TriggerEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::MVGameCoinChest::MVGameCoinChest_triggerBoxEvents_TriggerEnter
               (MVGameCoinChest *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if ((this->fields).state == 0) {
    this_00 = (this->fields).useInteractor;
    if (this_00 == (UseInteractor *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UVar2 = UseInteractor::UseInteractor_EvaluateRequirementsUsability(this_00,(MethodInfo *)0x0);
    if ((UVar2 & (UseGUIResult__Enum_CannotAfford|UseGUIResult__Enum_CanAfford)) == 0) {
      (this->fields).state = 1;
    }
  }
  return;
}


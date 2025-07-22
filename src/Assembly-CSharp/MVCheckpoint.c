
/* Void Destroy() */

void Assembly-CSharp.dll::MVCheckpoint::MVCheckpoint_Destroy(MVCheckpoint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    func_?(&
                    MethodInfo__MVCheckpoint__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   );
    func_?(&
                    MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   );
    func_?(&
                    MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   );
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).checkpointObject;
  if (pMVar1 != (MVCheckpointObject *)0x0) {
    pTVar2 = (pMVar1->fields).triggerBoxEvents;
    pEVar3 = (EventHandler_1_Object_ *)
             func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
    mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
              (pEVar3,(Object *)this,
               MethodInfo__MVCheckpoint__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
               ,(MethodInfo *)0x0);
    if (pTVar2 != (TriggerBoxEvents *)0x0) {
      TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
                (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pEVar3,(MethodInfo *)0x0);
      if ((this->fields).useInteractor == (UseInteractor *)0x0) {
code_?:
        MVLogicObject::MVLogicObject_Destroy((MVLogicObject *)this,(MethodInfo *)0x0);
        return;
      }
      pMVar1 = (this->fields).checkpointObject;
      if (pMVar1 != (MVCheckpointObject *)0x0) {
        pTVar2 = (pMVar1->fields).triggerBoxEvents;
        pUVar4 = (this->fields).useInteractor;
        pEVar3 = (EventHandler_1_Object_ *)
                 func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
        mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                  (pEVar3,(Object *)pUVar4,
                   MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   ,(MethodInfo *)0x0);
        if (pTVar2 != (TriggerBoxEvents *)0x0) {
          TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
                    (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pEVar3,(MethodInfo *)0x0);
          pMVar1 = (this->fields).checkpointObject;
          if (pMVar1 != (MVCheckpointObject *)0x0) {
            pTVar2 = (pMVar1->fields).triggerBoxEvents;
            pUVar4 = (this->fields).useInteractor;
            pEVar3 = (EventHandler_1_Object_ *)
                     func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
            mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                      (pEVar3,(Object *)pUVar4,
                       MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                       ,(MethodInfo *)0x0);
            if (pTVar2 != (TriggerBoxEvents *)0x0) {
              TriggerBoxEvents::TriggerBoxEvents_remove_TriggerExit
                        (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pEVar3,(MethodInfo *)0x0);
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
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void DoHeal(Int32) */

void Assembly-CSharp.dll::MVCheckpoint::MVCheckpoint_DoHeal
               (MVCheckpoint *this,int32_t instigator,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_01 == (MVWorldObjectClientManager *)0x0) {
code_?:
    _Stack00000018.dummy = &UNK_?;
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                     (this_01,instigator,(MethodInfo *)0x0);
  if (pMVar2 != (MVWorldObject *)0x0) {
    this_00 = pMVar2[1].fields.inputLinkRefs;
    if (this_00 == (List_1_MV_WorldObject_Link_ *)0x0) goto code_?;
    x = (Object_1 *)
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                  ((GameObject *)this_00,
                   MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      (x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      if (x == (Object_1 *)0x0) goto code_?;
      _Stack00000018 = x->klass[1]._0.byval_arg.data;
      uStack4 = 0;
      uStack5 = 0;
      (*(code *)x->klass[1]._0.namespaze)();
    }
  }
  return;
}


/* Boolean DoReachCheckpoint(Int32) */

bool Assembly-CSharp.dll::MVCheckpoint::MVCheckpoint_DoReachCheckpoint
               (MVCheckpoint *this,int32_t instigatorId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_CheckpointReach);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
    if (pMVar2 != (MVLocalPlayer *)0x0) {
      pMVar3 = MVPlayer::MVPlayer_GetCheckpoint((MVPlayer *)pMVar2,(MethodInfo *)0x0);
      if (pMVar3 != (MVCheckpoint *)0x0) {
        instigatorId = (int32_t)MVGameControllerBase::MVGameControllerBase_get_Game
                                          ((MethodInfo *)0x0);
        if ((MVNetworkGame *)instigatorId == (MVNetworkGame *)0x0) goto code_?;
        pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                           ((MVNetworkGame *)instigatorId,(MethodInfo *)0x0);
        if (pMVar2 == (MVLocalPlayer *)0x0) goto code_?;
        pMVar3 = MVPlayer::MVPlayer_GetCheckpoint((MVPlayer *)pMVar2,(MethodInfo *)0x0);
        if (pMVar3 == (MVCheckpoint *)0x0) goto code_?;
        if ((pMVar3->fields)._._._.id == *(int *)(unaff_ESI + 8)) {
          return 0;
        }
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar1 != (MVNetworkGame *)0x0) {
        pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
        if (pMVar2 != (MVLocalPlayer *)0x0) {
          MVPlayer::MVPlayer_SetCheckpoint
                    ((MVPlayer *)pMVar2,*(int32_t *)(unaff_ESI + 8),(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (this_02 != (MVWorldObjectClientManager *)0x0) {
            pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                               (this_02,instigatorId,(MethodInfo *)0x0);
            if (pMVar4 != (MVWorldObject *)0x0) {
              this_00 = pMVar4[1].fields.inputLinkRefs;
              if (this_00 == (List_1_MV_WorldObject_Link_ *)0x0) goto code_?;
              pOVar5 = (Object_1 *)
                       UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                       GameObject_GetComponent_1
                                 ((GameObject *)this_00,
                                  MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__
                                 );
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                                (pOVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
              if (bVar6 == 0) {
                if (pOVar5 == (Object_1 *)0x0) goto code_?;
                (*(code *)pOVar5->klass[1]._0.namespaze)();
              }
            }
            if (*(int *)(unaff_ESI + 0xf8) != 0) {
              pOVar5 = *(Object_1 **)(*(int *)(unaff_ESI + 0xf8) + 0x20);
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                (pOVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
              if (bVar6 != 0) {
                if ((*(int *)(unaff_ESI + 0xf8) == 0) ||
                   (this_01 = *(Animation **)(*(int *)(unaff_ESI + 0xf8) + 0x20),
                   this_01 == (Animation *)0x0)) goto code_?;
                UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_2
                          (this_01,StringLiteral_CheckpointReach,(MethodInfo *)0x0);
                *(undefined1 *)(unaff_ESI + 0x100) = 1;
              }
              return 1;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  bVar6 = (*pcVar7)();
  return bVar6;
}


/* Vector3 GetClosestGridPoint(Single, Vector3) */

Vector3 * Assembly-CSharp.dll::MVCheckpoint::MVCheckpoint_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,MVCheckpoint *this,float gridSize,
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
  uVar1 = (TypeInfo__UnityEngine__Vector3->static_fields->oneVector).y;
  fVar2 = (float)uVar1 * _UNK_?;
  this_00 = (this->fields)._._.gameObject;
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

void Assembly-CSharp.dll::MVCheckpoint::MVCheckpoint_Initialize
               (MVCheckpoint *this,MethodInfo *method)

{
  MVCheckpoint_SetupUseInteractor(this,(MethodInfo *)0x0);
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  this_00 = (this->fields).useInteractor;
  if (this_00 != (UseInteractor *)0x0) {
    UseInteractor::UseInteractor_UpdateData(this_00,(this->fields)._._._.data,(MethodInfo *)0x0);
    pMVar1 = (this->fields).checkpointObject;
    if (pMVar1 != (MVCheckpointObject *)0x0) {
      MVLogicObject::MVLogicObject_SetupCulling
                ((MVLogicObject *)this,(pMVar1->fields).visualObject,2.0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnUpdate() */

void Assembly-CSharp.dll::MVCheckpoint::MVCheckpoint_OnUpdate(MVCheckpoint *this,MethodInfo *method)

{
  if ((this->fields).playingAnimation == 0) {
    return;
  }
  pMVar1 = (this->fields).checkpointObject;
  if ((pMVar1 != (MVCheckpointObject *)0x0) &&
     (this_00 = (pMVar1->fields).visualObject, this_00 != (GameObject *)0x0)) {
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (this_00,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      return;
    }
    pMVar1 = (this->fields).checkpointObject;
    if ((pMVar1 != (MVCheckpointObject *)0x0) &&
       (pAVar3 = (pMVar1->fields).objAnimation, pAVar3 != (Animation *)0x0)) {
      UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Rewind
                (pAVar3,(MethodInfo *)0x0);
      pMVar1 = (this->fields).checkpointObject;
      if ((pMVar1 != (MVCheckpointObject *)0x0) &&
         (pAVar3 = (pMVar1->fields).objAnimation, pAVar3 != (Animation *)0x0)) {
        UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play
                  (pAVar3,(MethodInfo *)0x0);
        pMVar1 = (this->fields).checkpointObject;
        if ((pMVar1 != (MVCheckpointObject *)0x0) &&
           (pAVar3 = (pMVar1->fields).objAnimation, pAVar3 != (Animation *)0x0)) {
          UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Sample
                    (pAVar3,(MethodInfo *)0x0);
          pMVar1 = (this->fields).checkpointObject;
          if ((pMVar1 != (MVCheckpointObject *)0x0) &&
             (pAVar3 = (pMVar1->fields).objAnimation, pAVar3 != (Animation *)0x0)) {
            UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Stop
                      (pAVar3,(MethodInfo *)0x0);
            (this->fields).playingAnimation = 0;
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


/* Void SetupUseInteractor() */

void Assembly-CSharp.dll::MVCheckpoint::MVCheckpoint_SetupUseInteractor
               (MVCheckpoint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    func_?(&TypeInfo__System__Func<int,_bool>);
    func_?(&TypeInfo__GameCoinLogic);
    func_?(&TypeInfo__LevelBasedUseRequirement);
    func_?(&MethodInfo__MVCheckpoint__DoReachCheckpoint_int_);
    func_?(&TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement);
    func_?(&
                    MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   );
    func_?(&
                    MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   );
    func_?(&TypeInfo__UseInteractor);
    cRam_? = '\x01';
  }
  if ((this->fields).checkpointObject != (MVCheckpointObject *)0x0) {
    pTVar1 = (((this->fields).checkpointObject)->fields).triggerBoxEvents;
    if (pTVar1 != (TriggerBoxEvents *)0x0) {
      triggerCollider = TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar1,(MethodInfo *)0x0);
      this_00 = (Predicate_1_UInt32_ *)func_?(TypeInfo__System__Func<int,_bool>);
      mscorlib.dll::System::Predicate`1[UInt32]::Predicate_1_UInt32___ctor
                (this_00,(Object *)this,MethodInfo__MVCheckpoint__DoReachCheckpoint_int_,
                 (MethodInfo *)0x0);
      pUVar2 = (UseInteractor *)func_?(TypeInfo__UseInteractor);
      UseInteractor::UseInteractor__ctor
                (pUVar2,(MVWorldObjectClient *)this,(GameObject *)0x0,0,triggerCollider,
                 (Func_2_Int32_Boolean_ *)this_00,(Func_3_Int32_MVInteractableBase_Boolean_ *)0x0,
                 2.5,0,1,(MethodInfo *)0x0);
      (this->fields).useInteractor = pUVar2;
      func_?(&(this->fields).useInteractor);
      pMVar3 = (this->fields).checkpointObject;
      if (pMVar3 != (MVCheckpointObject *)0x0) {
        pTVar1 = (pMVar3->fields).triggerBoxEvents;
        pUVar2 = (this->fields).useInteractor;
        pEVar4 = (EventHandler_1_Object_ *)
                 func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
        mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                  (pEVar4,(Object *)pUVar2,
                   MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   ,(MethodInfo *)0x0);
        if (pTVar1 != (TriggerBoxEvents *)0x0) {
          TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                    (pTVar1,(EventHandler_1_TriggerEventArgs_ *)pEVar4,(MethodInfo *)0x0);
          pMVar3 = (this->fields).checkpointObject;
          if (pMVar3 != (MVCheckpointObject *)0x0) {
            pTVar1 = (pMVar3->fields).triggerBoxEvents;
            pUVar2 = (this->fields).useInteractor;
            pEVar4 = (EventHandler_1_Object_ *)
                     func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
            mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                      (pEVar4,(Object *)pUVar2,
                       MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                       ,(MethodInfo *)0x0);
            if (pTVar1 != (TriggerBoxEvents *)0x0) {
              TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                        (pTVar1,(EventHandler_1_TriggerEventArgs_ *)pEVar4,(MethodInfo *)0x0);
              pMVar3 = (this->fields).checkpointObject;
              if (pMVar3 != (MVCheckpointObject *)0x0) {
                pGVar5 = (pMVar3->fields).useInteractionRotator;
                this_01 = (GameCoinLogic *)func_?(TypeInfo__GameCoinLogic);
                GameCoinLogic::GameCoinLogic__ctor(this_01,pGVar5,0,(MethodInfo *)0x0);
                pUVar2 = (this->fields).useInteractor;
                if (pUVar2 != (UseInteractor *)0x0) {
                  UseInteractor::UseInteractor_AddRequirement
                            (pUVar2,(UseRequirement *)this_01,(MethodInfo *)0x0);
                  pMVar3 = (this->fields).checkpointObject;
                  if (pMVar3 != (MVCheckpointObject *)0x0) {
                    pGVar5 = (pMVar3->fields).useInteractionRotator;
                    this_02 = (LevelBasedUseRequirement *)
                              func_?(TypeInfo__LevelBasedUseRequirement);
                    LevelBasedUseRequirement::LevelBasedUseRequirement__ctor
                              (this_02,pGVar5,0,(MethodInfo *)0x0);
                    pUVar2 = (this->fields).useInteractor;
                    if (pUVar2 != (UseInteractor *)0x0) {
                      UseInteractor::UseInteractor_AddRequirement
                                (pUVar2,(UseRequirement *)this_02,(MethodInfo *)0x0);
                      pMVar3 = (this->fields).checkpointObject;
                      if (pMVar3 != (MVCheckpointObject *)0x0) {
                        pGVar5 = (pMVar3->fields).useInteractionRotator;
                        this_03 = (RewardedAdRequirement *)
                                  func_?(
                                                 TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement
                                                 );
                        WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement::
                        RewardedAdRequirement__ctor(this_03,pGVar5,(MethodInfo *)0x0);
                        pUVar2 = (this->fields).useInteractor;
                        if (pUVar2 != (UseInteractor *)0x0) {
                          UseInteractor::UseInteractor_AddRequirement
                                    (pUVar2,(UseRequirement *)this_03,(MethodInfo *)0x0);
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
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* MVCheckpoint(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVCheckpoint::MVCheckpoint__ctor
               (MVCheckpoint *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    func_?(&TypeInfo__MVCheckpointObject);
    func_?(&
                    MethodInfo__MVCheckpoint__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(pPVar1->fields).mvCheckpointPrefab,worldObjects,
               (MethodInfo *)0x0);
    pMVar2 = (MVCheckpointObject *)(this->fields)._._.component;
    if (pMVar2 == (MVCheckpointObject *)0x0) {
      (this->fields).checkpointObject = (MVCheckpointObject *)0x0;
    }
    else {
      if (((((ObjectPrefab__Class *)pMVar2->klass)->_1).naturalAligment <
           (TypeInfo__MVCheckpointObject->_1).naturalAligment) ||
         ((((ObjectPrefab__Class *)pMVar2->klass)->_1).typeHierarchy
          [(TypeInfo__MVCheckpointObject->_1).naturalAligment - 1] !=
          (Il2CppClass *)TypeInfo__MVCheckpointObject)) goto code_?;
      (this->fields).checkpointObject = pMVar2;
      if (((((ObjectPrefab__Class *)pMVar2->klass)->_1).naturalAligment <
           (TypeInfo__MVCheckpointObject->_1).naturalAligment) ||
         ((((ObjectPrefab__Class *)pMVar2->klass)->_1).typeHierarchy
          [(TypeInfo__MVCheckpointObject->_1).naturalAligment - 1] !=
          (Il2CppClass *)TypeInfo__MVCheckpointObject)) goto code_?;
    }
    func_?(&(this->fields).checkpointObject);
    pMVar2 = (this->fields).checkpointObject;
    if (pMVar2 != (MVCheckpointObject *)0x0) {
      this_00 = (pMVar2->fields).triggerBoxEvents;
      this_01 = (EventHandler_1_Object_ *)
                func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
      mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                (this_01,(Object *)this,
                 MethodInfo__MVCheckpoint__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 ,(MethodInfo *)0x0);
      if (this_00 != (TriggerBoxEvents *)0x0) {
        TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                  (this_00,(EventHandler_1_TriggerEventArgs_ *)this_01,(MethodInfo *)0x0);
        iVar3 = (this->fields)._._.interactionFlags;
        *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) =
             *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
        puVar4 = (uint *)((int)&(this->fields)._._.interactionFlags + 4);
        *puVar4 = *puVar4 | 2;
        *(uint *)&(this->fields)._._.interactionFlags = (uint)iVar3 | 0x300000;
        return;
      }
    }
  }
  func_?();
  pMVar2 = extraout_EDX;
code_?:
  func_?(pMVar2);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void triggerBoxEvents_TriggerEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::MVCheckpoint::MVCheckpoint_triggerBoxEvents_TriggerEnter
               (MVCheckpoint *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  this_00 = (this->fields).useInteractor;
  if (this_00 != (UseInteractor *)0x0) {
    UVar1 = UseInteractor::UseInteractor_EvaluateRequirementsUsability(this_00,(MethodInfo *)0x0);
    if ((UVar1 & (UseGUIResult__Enum_CannotAfford|UseGUIResult__Enum_CanAfford)) == 0) {
      if (e == (TriggerEventArgs *)0x0) goto code_?;
      MVCheckpoint_DoReachCheckpoint(this,(e->fields).instigatorWOID,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



/* Void Destroy() */

void Assembly-CSharp.dll::MVCheckpoint::MVCheckpoint_Destroy(MVCheckpoint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).checkpointObject;
  if (pMVar1 != (MVCheckpointObject *)0x0) {
    pTVar2 = (pMVar1->fields).triggerBoxEvents;
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,
               MethodInfo__MVCheckpoint__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
               ,
               MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
              );
    if (pTVar2 != (TriggerBoxEvents *)0x0) {
      TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
                (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pUVar3,(MethodInfo *)0x0);
      pUVar4 = (this->fields).useInteractor;
      if (pUVar4 == (UseInteractor *)0x0) {
code_?:
        MVLogicObject::MVLogicObject_Destroy((MVLogicObject *)this,(MethodInfo *)0x0);
        return;
      }
      pMVar1 = (this->fields).checkpointObject;
      if (pMVar1 != (MVCheckpointObject *)0x0) {
        pTVar2 = (pMVar1->fields).triggerBoxEvents;
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)pUVar4,
                   MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   ,
                   MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                  );
        if (pTVar2 != (TriggerBoxEvents *)0x0) {
          TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
                    (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pUVar3,(MethodInfo *)0x0);
          pMVar1 = (this->fields).checkpointObject;
          if (pMVar1 != (MVCheckpointObject *)0x0) {
            pTVar2 = (pMVar1->fields).triggerBoxEvents;
            pUVar4 = (this->fields).useInteractor;
            pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar3,(Object *)pUVar4,
                       MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                       ,
                       MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                      );
            if (pTVar2 != (TriggerBoxEvents *)0x0) {
              TriggerBoxEvents::TriggerBoxEvents_remove_TriggerExit
                        (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pUVar3,(MethodInfo *)0x0);
              pUVar4 = (this->fields).useInteractor;
              data = (Dictionary_2_System_Object_System_Object_ *)
                     PrefabPool::PrefabPool_get_MVBatteryPrefab
                               ((PrefabPool *)this,(MethodInfo *)0x0);
              if (pUVar4 != (UseInteractor *)0x0) {
                UseInteractor::UseInteractor_OnDestroy(pUVar4,data,(MethodInfo *)0x0);
                (this->fields).useInteractor = (UseInteractor *)0x0;
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void DoHeal(Int32) */

void Assembly-CSharp.dll::MVCheckpoint::MVCheckpoint_DoHeal
               (MVCheckpoint *this,int32_t instigator,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 == (MVWorldObjectClientManager *)0x0) {
code_?:
    pcStack1 = (char *)0x0;
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_01 = (DayNightCycle *)
            MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                      (this_00,instigator,(MethodInfo *)0x0);
  if (this_01 != (DayNightCycle *)0x0) {
    this_02 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(this_01,(MethodInfo *)0x0);
    if (this_02 == (CelestialParam *)0x0) goto code_?;
    x = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                  ((GameObject *)this_02,
                   MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      if (x == (UseInteractorHandler *)0x0) goto code_?;
      pcStack1 = x->klass[1]._0.name;
      puStack4 = (undefined *)0x1;
      uStack5 = 0;
      (*x->klass[1]._0.gc_desc)();
    }
  }
  return;
}


/* Boolean DoReachCheckpoint(Int32) */

bool Assembly-CSharp.dll::MVCheckpoint::MVCheckpoint_DoReachCheckpoint
               (MVCheckpoint *this,int32_t instigatorId,MethodInfo *method)

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
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
    if (pMVar2 != (MVLocalPlayer *)0x0) {
      pMVar3 = MVPlayer::MVPlayer_GetCheckpoint((MVPlayer *)pMVar2,(MethodInfo *)0x0);
      if (pMVar3 != (MVCheckpoint *)0x0) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
        pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
        if (pMVar2 == (MVLocalPlayer *)0x0) goto code_?;
        pMVar3 = MVPlayer::MVPlayer_GetCheckpoint((MVPlayer *)pMVar2,(MethodInfo *)0x0);
        if (pMVar3 == (MVCheckpoint *)0x0) goto code_?;
        pIVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items
                           ((Collection_1_VoxelHit_ *)pMVar3,(MethodInfo *)0x0);
        pIVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items(unaff_ESI,(MethodInfo *)0x0);
        if (pIVar4 == pIVar5) {
          return 0;
        }
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar1 != (MVNetworkGame *)0x0) {
        pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
        if (pMVar2 != (MVLocalPlayer *)0x0) {
          MVPlayer::MVPlayer_SetCheckpoint
                    ((MVPlayer *)pMVar2,(int32_t)(unaff_ESI->fields).list,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (this_01 != (MVWorldObjectClientManager *)0x0) {
            this_02 = (DayNightCycle *)
                      MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                (this_01,(int32_t)pMVar2,(MethodInfo *)0x0);
            if (this_02 != (DayNightCycle *)0x0) {
              this_03 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(this_02,(MethodInfo *)0x0)
              ;
              if (this_03 == (CelestialParam *)0x0) goto code_?;
              x_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                               ((GameObject *)this_03,
                                MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__
                               );
              if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0
                  ) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                func_?();
              }
              bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                                ((Object_1 *)x_00,(Object_1 *)0x0,(MethodInfo *)0x0);
              if (bVar6 == 0) {
                if (x_00 == (UseInteractorHandler *)0x0) goto code_?;
                (*x_00->klass[1]._0.gc_desc)();
              }
            }
            if (unaff_ESI[0xf].klass != (Collection_1_VoxelHit___Class *)0x0) {
              x = *(Object_1 **)&((unaff_ESI[0xf].klass)->_0).this_arg.attrs;
              if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0
                  ) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                func_?();
              }
              bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                (x,(Object_1 *)0x0,(MethodInfo *)0x0);
              if (bVar6 != 0) {
                if ((unaff_ESI[0xf].klass == (Collection_1_VoxelHit___Class *)0x0) ||
                   (this_00 = *(Animation **)&((unaff_ESI[0xf].klass)->_0).this_arg.attrs,
                   this_00 == (Animation *)0x0)) goto code_?;
                UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_3
                          (this_00,StringLiteral_CheckpointReach,(MethodInfo *)0x0);
                *(undefined1 *)&unaff_ESI[0xf].fields.list = 1;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                     ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
            ((Vector3 *)&stack0xffffffe4,*pVVar1,2.0,(MethodInfo *)0x0);
  pVVar1 = (Vector3 *)0x3f800000;
  this_00 = (this->fields)._._.gameObject;
  if (this_00 != (GameObject *)0x0) {
    puVar2 = &UNK_?;
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      puVar3 = &UNK_?;
      pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)&stack0xffffffe0,this_01,(MethodInfo *)0x0);
      fVar5 = pQVar4->x;
      fVar6 = pQVar4->y;
      fVar7 = pQVar4->z;
      fVar8 = pQVar4->w;
      if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
        position.x = (float)TypeInfo__SharedCubeFunctions;
        gridSize = (float)&UNK_?;
        func_?();
      }
      position.x = 0.0;
      auVar9._4_4_ = position.z;
      auVar9._0_4_ = position.y;
      auVar9._8_4_ = 0;
      rotation.y = fVar6;
      rotation.x = fVar5;
      rotation.z = fVar7;
      rotation.w = fVar8;
      scale.y = (float)puVar2;
      scale.x = (float)pVVar1;
      scale.z = (float)puVar3;
      pVVar10 = SharedCubeFunctions::SharedCubeFunctions_GetClosestGridPoint
                         (&position,(Vector3)(auVar9 << 0x20),rotation,gridSize,scale,
                          (MethodInfo *)0x0);
      fVar6 = pVVar10->y;
      fVar5 = pVVar10->z;
      pVVar1->x = pVVar10->x;
      pVVar1->y = fVar6;
      pVVar1->z = fVar5;
      return pVVar1;
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar11)();
  return pVVar1;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVCheckpoint::MVCheckpoint_Initialize
               (MVCheckpoint *this,MethodInfo *method)

{
  MVCheckpoint_SetupUseInteractor(this,(MethodInfo *)0x0);
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  this_00 = (this->fields).useInteractor;
  data = (Dictionary_2_System_Object_System_Object_ *)
         PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (this_00 != (UseInteractor *)0x0) {
    UseInteractor::UseInteractor_UpdateData(this_00,data,(MethodInfo *)0x0);
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
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
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
      UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_INTERNAL_CALL_Rewind
                (pAVar3,(MethodInfo *)0x0);
      pMVar1 = (this->fields).checkpointObject;
      if ((pMVar1 != (MVCheckpointObject *)0x0) &&
         (pAVar3 = (pMVar1->fields).objAnimation, pAVar3 != (Animation *)0x0)) {
        UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play
                  (pAVar3,(MethodInfo *)0x0);
        pMVar1 = (this->fields).checkpointObject;
        if ((pMVar1 != (MVCheckpointObject *)0x0) &&
           (pAVar3 = (pMVar1->fields).objAnimation, pAVar3 != (Animation *)0x0)) {
          UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_INTERNAL_CALL_Sample
                    (pAVar3,(MethodInfo *)0x0);
          pMVar1 = (this->fields).checkpointObject;
          if ((pMVar1 != (MVCheckpointObject *)0x0) &&
             (pAVar3 = (pMVar1->fields).objAnimation, pAVar3 != (Animation *)0x0)) {
            UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_INTERNAL_CALL_Stop
                      (pAVar3,(MethodInfo *)0x0);
            (this->fields).playingAnimation = 0;
            return;
          }
        }
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetupUseInteractor() */

void Assembly-CSharp.dll::MVCheckpoint::MVCheckpoint_SetupUseInteractor
               (MVCheckpoint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).checkpointObject;
  if (pMVar1 != (MVCheckpointObject *)0x0) {
    pGVar2 = (pMVar1->fields).useInteractionRotator;
    pTVar3 = (pMVar1->fields).triggerBoxEvents;
    if (pTVar3 != (TriggerBoxEvents *)0x0) {
      triggerCollider = TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar3,(MethodInfo *)0x0);
      pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__Func<int,_bool>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar4,(Object *)this,MethodInfo__MVCheckpoint__DoReachCheckpoint_int_,
                 MethodInfo__System__Func<int,_bool>__Func_System__Object__void__);
      pUVar5 = (UseInteractor *)func_?(TypeInfo__UseInteractor);
      UseInteractor::UseInteractor__ctor
                (pUVar5,(MVWorldObjectClient *)this,pGVar2,0,triggerCollider,
                 (Func_2_Int32_Boolean_ *)pUVar4,(Func_3_Int32_MVInteractableBase_Boolean_ *)0x0,2.5
                 ,(MethodInfo *)0x0);
      pMVar1 = (this->fields).checkpointObject;
      (this->fields).useInteractor = pUVar5;
      if (pMVar1 != (MVCheckpointObject *)0x0) {
        pTVar3 = (pMVar1->fields).triggerBoxEvents;
        pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar4,(Object *)pUVar5,
                   MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   ,
                   MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                  );
        if (pTVar3 != (TriggerBoxEvents *)0x0) {
          TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                    (pTVar3,(EventHandler_1_TriggerEventArgs_ *)pUVar4,(MethodInfo *)0x0);
          pMVar1 = (this->fields).checkpointObject;
          if (pMVar1 != (MVCheckpointObject *)0x0) {
            pTVar3 = (pMVar1->fields).triggerBoxEvents;
            pUVar5 = (this->fields).useInteractor;
            pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar4,(Object *)pUVar5,
                       MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                       ,
                       MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                      );
            if (pTVar3 != (TriggerBoxEvents *)0x0) {
              TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                        (pTVar3,(EventHandler_1_TriggerEventArgs_ *)pUVar4,(MethodInfo *)0x0);
              pMVar1 = (this->fields).checkpointObject;
              if (pMVar1 != (MVCheckpointObject *)0x0) {
                pGVar2 = (pMVar1->fields).useInteractionRotator;
                this_00 = (GameCoinLogic *)func_?(TypeInfo__GameCoinLogic);
                GameCoinLogic::GameCoinLogic__ctor(this_00,pGVar2,0,(MethodInfo *)0x0);
                pUVar5 = (this->fields).useInteractor;
                if (pUVar5 != (UseInteractor *)0x0) {
                  UseInteractor::UseInteractor_AddRequirement
                            (pUVar5,(UseRequirement *)this_00,(MethodInfo *)0x0);
                  pMVar1 = (this->fields).checkpointObject;
                  if (pMVar1 != (MVCheckpointObject *)0x0) {
                    pGVar2 = (pMVar1->fields).useInteractionRotator;
                    this_01 = (LevelBasedUseRequirement *)
                              func_?(TypeInfo__LevelBasedUseRequirement);
                    LevelBasedUseRequirement::LevelBasedUseRequirement__ctor
                              (this_01,pGVar2,0,(MethodInfo *)0x0);
                    pUVar5 = (this->fields).useInteractor;
                    if (pUVar5 != (UseInteractor *)0x0) {
                      UseInteractor::UseInteractor_AddRequirement
                                (pUVar5,(UseRequirement *)this_01,(MethodInfo *)0x0);
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
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this_01 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_01 != (PrefabPool *)0x0) {
    prefabObject = PrefabPool::PrefabPool_get_MVCheckpointPrefab(this_01,(MethodInfo *)0x0);
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,prefabObject,worldObjects,(MethodInfo *)0x0);
    pMVar1 = (MVCheckpointObject *)(this->fields)._._.component;
    if (pMVar1 == (MVCheckpointObject *)0x0) {
      pMVar2 = (MVCheckpointObject *)0x0;
    }
    else {
      bVar3 = (TypeInfo__MVCheckpointObject->_1).naturalAligment;
      if (((((ObjectPrefab__Class *)pMVar1->klass)->_1).naturalAligment < bVar3) ||
         ((((ObjectPrefab__Class *)pMVar1->klass)->_1).typeHierarchy[bVar3 - 1] !=
          (Il2CppClass *)TypeInfo__MVCheckpointObject)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      pMVar2 = (MVCheckpointObject *)0x0;
      if (bVar4) {
        pMVar2 = pMVar1;
      }
      if (pMVar2 == (MVCheckpointObject *)0x0) goto code_?;
    }
    (this->fields).checkpointObject = pMVar2;
    if (pMVar2 != (MVCheckpointObject *)0x0) {
      this_00 = (pMVar2->fields).triggerBoxEvents;
      this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_02,(Object *)this,
                 MethodInfo__MVCheckpoint__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 ,
                 MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                );
      if (this_00 != (TriggerBoxEvents *)0x0) {
        TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                  (this_00,(EventHandler_1_TriggerEventArgs_ *)this_02,(MethodInfo *)0x0);
        uVar5 = *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
        piVar6 = &(this->fields)._._.interactionFlags;
        *(uint *)piVar6 = (uint)*piVar6 | 0x300000;
        *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) = uVar5;
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVCheckpoint::MVCheckpoint_get_DocumentationType
          (MVCheckpoint *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_Checkpoint;
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
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



/* Void Destroy() */

void Assembly-CSharp.dll::MVCheckpoint::MVCheckpoint_Destroy(MVCheckpoint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVCheckpoint__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).checkpointObject;
  if (pMVar1 != (MVCheckpointObject *)0x0) {
    pTVar2 = (pMVar1->fields).triggerBoxEvents;
    pUVar3 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar3,(Object *)this,
               MethodInfo__MVCheckpoint__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
               ,(MethodInfo *)0x0);
    if (pTVar2 != (TriggerBoxEvents *)0x0) {
      TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
                (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pUVar3,(MethodInfo *)0x0);
      if ((this->fields).useInteractor != (UseInteractor *)0x0) {
        pMVar1 = (this->fields).checkpointObject;
        if (pMVar1 == (MVCheckpointObject *)0x0) goto code_?;
        pTVar2 = (pMVar1->fields).triggerBoxEvents;
        pUVar4 = (this->fields).useInteractor;
        pUVar3 = (UnityAction_2_System_Object_System_Object_ *)
                  FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (pUVar3,(Object *)pUVar4,
                   MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   ,(MethodInfo *)0x0);
        if (pTVar2 == (TriggerBoxEvents *)0x0) goto code_?;
        TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
                  (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pUVar3,(MethodInfo *)0x0);
        pMVar1 = (this->fields).checkpointObject;
        if (pMVar1 == (MVCheckpointObject *)0x0) goto code_?;
        pTVar2 = (pMVar1->fields).triggerBoxEvents;
        pUVar4 = (this->fields).useInteractor;
        pUVar3 = (UnityAction_2_System_Object_System_Object_ *)
                  FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (pUVar3,(Object *)pUVar4,
                   MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   ,(MethodInfo *)0x0);
        if (pTVar2 == (TriggerBoxEvents *)0x0) goto code_?;
        TriggerBoxEvents::TriggerBoxEvents_remove_TriggerExit
                  (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pUVar3,(MethodInfo *)0x0);
        pUVar4 = (this->fields).useInteractor;
        if ((pUVar4 == (UseInteractor *)0x0) ||
           (this_00 = (pUVar4->fields).useInteractorVisuals,
           this_00 == (UseInteractorVisualization *)0x0)) goto code_?;
        UseInteractorVisualization::UseInteractorVisualization_DestroyRequirementObjects
                  (this_00,(this->fields)._._._.data,(MethodInfo *)0x0);
        bVar5 = iRam_? != 0;
        (this->fields).useInteractor = (UseInteractor *)0x0;
        if (bVar5) {
          uVar6 = (uint)((ulonglong)&(this->fields).useInteractor >> 0xc);
          puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar8 = *puVar7;
            LOCK();
            uVar9 = *puVar7;
            if (uVar8 == uVar9) {
              *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar8 != uVar9);
        }
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UpdateController);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
        FUN_?();
      }
      UpdateController::UpdateController_RemoveUpdateObject
                ((IUpdatecontrollerSubscriberUpdate *)this,(MethodInfo *)0x0);
      if ((this->fields)._.cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
        CullingSubscriberBase::CullingSubscriberBase_Destroy
                  ((this->fields)._.cullingSubscriberBase,(MethodInfo *)0x0);
        bVar5 = iRam_? != 0;
        (this->fields)._.cullingSubscriberBase = (CullingSubscriberBase *)0x0;
        if (bVar5) {
          uVar6 = (uint)((ulonglong)&(this->fields)._.cullingSubscriberBase >> 0xc);
          puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar8 = *puVar7;
            LOCK();
            uVar9 = *puVar7;
            if (uVar8 == uVar9) {
              *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar8 != uVar9);
        }
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar10 = (this->fields)._._.gameObject;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pGVar10 != (GameObject *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pGVar10->fields)._.m_CachedPtr != (void *)0x0) {
          pGVar10 = (this->fields)._._.gameObject;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                    ((Object_1 *)pGVar10,0.0,(MethodInfo *)0x0);
        }
      }
      if ((this->fields)._._.initializedFromInventory != 0) {
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar11 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar11 != (MVGameControllerBase *)0x0) &&
         (pMVar12 = (pMVar11->fields).game, pMVar12 != (MVNetworkGame *)0x0)) {
        pRVar13 = (pMVar12->fields).runtimeVariableNetworkManager;
        item = (this->fields)._._._.id;
        if (pRVar13 != (RuntimeVariableNetworkManager *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          this_01 = (HashSet_1_System_Int32Enum_ *)(pRVar13->fields).runtimeDataVariables;
          if (this_01 != (HashSet_1_System_Int32Enum_ *)0x0) {
            bVar14 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
                     HashSet_1_System_Int32Enum__Contains
                               (this_01,item,
                                MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_
                               );
            if (bVar14 != 0) {
              pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar12 == (MVNetworkGame *)0x0) ||
                 (pRVar13 = (pMVar12->fields).runtimeVariableNetworkManager,
                 pRVar13 == (RuntimeVariableNetworkManager *)0x0)) goto DAT_?;
              RuntimeVariableNetworkManager::
              RuntimeVariableNetworkManager_RemoveRuntimeDataVariables
                        (pRVar13,(this->fields)._._._.id,(MethodInfo *)0x0);
            }
            return;
          }
        }
      }
DAT_?:
      FUN_?();
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void DoHeal(Int32) */

void Assembly-CSharp.dll::MVCheckpoint::MVCheckpoint_DoHeal
               (MVCheckpoint *this,int32_t instigator,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_01 != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (this_01,instigator,(MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClient *)0x0) {
      this_00 = (pMVar1->fields).gameObject;
      if (this_00 == (GameObject *)0x0) goto code_?;
      pOVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                         (this_00,
                          MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__
                         );
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pOVar2 != (Object *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (pOVar2[1].klass != (Object__Class *)0x0) {
          (*(code *)pOVar2->klass[1]._0.name)(pOVar2,3,1,0,0,pOVar2->klass[1]._0.namespaze);
        }
      }
    }
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean DoReachCheckpoint(Int32) */

bool Assembly-CSharp.dll::MVCheckpoint::MVCheckpoint_DoReachCheckpoint
               (MVCheckpoint *this,int32_t instigatorId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_CheckpointReach);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
      (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) &&
     (pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar3,(MethodInfo *)0x0),
     pMVar4 != (MVLocalPlayer *)0x0)) {
    pMVar5 = MVPlayer::MVPlayer_GetCheckpoint((MVPlayer *)pMVar4,(MethodInfo *)0x0);
    if (pMVar5 != (MVCheckpoint *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar1 == (MVGameControllerBase *)0x0) ||
          (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
         ((pMVar3 = (pMVar2->fields).playerContainer, pMVar3 == (MVPlayerContainer *)0x0 ||
          ((pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar3,(MethodInfo *)0x0),
           pMVar4 == (MVLocalPlayer *)0x0 ||
           (pMVar5 = MVPlayer::MVPlayer_GetCheckpoint((MVPlayer *)pMVar4,(MethodInfo *)0x0),
           pMVar5 == (MVCheckpoint *)0x0)))))) goto code_?;
      if ((pMVar5->fields)._._._.id == (this->fields)._._._.id) {
        return 0;
      }
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar1 != (MVGameControllerBase *)0x0) &&
        (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
       (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) {
      pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar3,(MethodInfo *)0x0);
      woID = (this->fields)._._._.id;
      if (pMVar4 != (MVLocalPlayer *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__NotificationController);
          LOCK();
          UNLOCK();
          FUN_?();
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar6 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar6 != (MVWorldObjectClientManager *)0x0) {
          bVar7 = MVWorldObjectClientManager::MVWorldObjectClientManager_IsType
                            (pMVar6,woID,WorldObjectType__Enum_CheckPoint,(MethodInfo *)0x0);
          if (bVar7 != 0) {
            pUVar8 = (pMVar4->fields)._.OnCheckpointReached;
            (pMVar4->fields)._.checkpointWOID = woID;
            if (pUVar8 != (UnityAction *)0x0) {
              pUVar8 = (pMVar4->fields)._.OnCheckpointReached;
              (*(pUVar8->fields)._._.invoke_impl)((pUVar8->fields)._._.method_code);
            }
            text = TM::TM__(StringLiteral_Reached_new_checkpoint_,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
              FUN_?();
            }
            NotificationController::NotificationController_PushNotification
                      (text,(Sprite *)0x0,5,(MethodInfo *)0x0);
          }
          if (cRam_? == '\0') {
            FUN_?(&
                          MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__
                         );
            LOCK();
            UNLOCK();
            FUN_?();
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar6 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (pMVar6 != (MVWorldObjectClientManager *)0x0) {
            pMVar9 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                                (pMVar6,instigatorId,(MethodInfo *)0x0);
            if (pMVar9 != (MVWorldObjectClient *)0x0) {
              this_00 = (pMVar9->fields).gameObject;
              if (this_00 == (GameObject *)0x0) goto code_?;
              pOVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_GetComponent_1
                                  (this_00,
                                   MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__
                                  );
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Object);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Object);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (pOVar10 != (Object *)0x0) {
                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                  FUN_?();
                }
                if (pOVar10[1].klass != (Object__Class *)0x0) {
                  (*(code *)pOVar10->klass[1]._0.name)
                            (pOVar10,3,1,0,0,pOVar10->klass[1]._0.namespaze);
                }
              }
            }
            pMVar11 = (this->fields).checkpointObject;
            if (pMVar11 != (MVCheckpointObject *)0x0) {
              pAVar12 = (pMVar11->fields).objAnimation;
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Object);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Object);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (pAVar12 != (Animation *)0x0) {
                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                  FUN_?();
                }
                if ((pAVar12->fields)._._._.m_CachedPtr != (void *)0x0) {
                  pMVar11 = (this->fields).checkpointObject;
                  if ((pMVar11 == (MVCheckpointObject *)0x0) ||
                     (pAVar12 = (pMVar11->fields).objAnimation, pAVar12 == (Animation *)0x0))
                  goto code_?;
                  UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_3
                            (pAVar12,StringLiteral_CheckpointReach,PlayMode__Enum_StopSameLayer,
                             (MethodInfo *)0x0);
                  (this->fields).playingAnimation = 1;
                }
              }
              return 1;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  bVar7 = (*pcVar13)();
  return bVar7;
}


/* Vector3 GetClosestGridPoint(Single, Vector3) */

Vector3 * Assembly-CSharp.dll::MVCheckpoint::MVCheckpoint_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,MVCheckpoint *this,float gridSize,
                    Vector3 *position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_2.x = (pVVar1->oneVector).x;
  VStack_2.y = (pVVar1->oneVector).y;
  VStack_2.z = (pVVar1->oneVector).z;
  fVar3 = VStack_2.y + VStack_2.y;
  this_00 = (this->fields)._._.gameObject;
  if ((this_00 != (GameObject *)0x0) &&
     (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (this_00,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    QStack_4.x = 0.0;
    QStack_4.y = 0.0;
    QStack_4.z = 0.0;
    QStack_4.w = 0.0;
    pvVar5 = (obj->fields)._._.m_CachedPtr;
    if (pvVar5 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar6 = (code *)swi(3);
      pVVar7 = (Vector3 *)(*pcVar6)();
      return pVVar7;
    }
    pcVar6 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar6 = (code *)swi(3);
      pVVar7 = (Vector3 *)(*pcVar6)();
      return pVVar7;
    }
    pcRam_? = pcVar6;
    (*pcRam_?)(pvVar5,&QStack_4);
    VStack_9.z = _UNK_?;
    if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
      FUN_?();
    }
    VStack_2.z = position->z;
    VStack_2.x = position->x;
    VStack_2.y = position->y;
    VStack_9.y = fVar3;
    VStack_9.x = VStack_9.z;
    aQStack_10[0].x = QStack_4.x;
    aQStack_10[0].y = QStack_4.y;
    aQStack_10[0].z = QStack_4.z;
    aQStack_10[0].w = QStack_4.w;
    pVVar7 = SharedCubeFunctions::SharedCubeFunctions_GetClosestGridPoint
                       ((Vector3 *)&QStack_4,&VStack_2,aQStack_10,gridSize,&VStack_9,
                        (MethodInfo *)0x0);
    fVar11 = pVVar7->y;
    fVar3 = pVVar7->z;
    __return_storage_ptr__->x = pVVar7->x;
    __return_storage_ptr__->y = fVar11;
    __return_storage_ptr__->z = fVar3;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pVVar7 = (Vector3 *)(*pcVar6)();
  return pVVar7;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVCheckpoint::MVCheckpoint_Initialize
               (MVCheckpoint *this,MethodInfo *method)

{
  auStack_1._8_8_ = &UNK_?;
  MVCheckpoint_SetupUseInteractor(this,(MethodInfo *)0x0);
  auStack_1._8_8_ = &UNK_?;
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  pUVar2 = (this->fields).useInteractor;
  if ((pUVar2 != (UseInteractor *)0x0) &&
     (this_00 = (pUVar2->fields).useInteractorVisuals, this_00 != (UseInteractorVisualization *)0x0)
     ) {
    auStack_1._8_8_ = &UNK_?;
    UseInteractorVisualization::UseInteractorVisualization_UpdateData
              (this_00,(this->fields)._._._.data,(pUVar2->fields).woOwnerID,(MethodInfo *)0x0);
    radius = TypeRef__System__Activator__T._0_4_;
    pMVar3 = (this->fields).checkpointObject;
    if (pMVar3 != (MVCheckpointObject *)0x0) {
      pGVar4 = (pMVar3->fields).visualObject;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CullingSubscriberBase);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__MVLogicObject__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>);
        LOCK();
        UNLOCK();
        FUN_?(&
                      TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      cVar5 = (*(this->klass->vtable).get_HasVisualsInPlaymode.methodPtr)
                         (this,(this->klass->vtable).get_HasVisualsInPlaymode.method);
      if (cVar5 == '\0') {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
            (IEditModeUI *)0x0) {
          return;
        }
      }
      bVar6 = iRam_? != 0;
      (this->fields)._.lodGameObject = pGVar4;
      if (bVar6) {
        uVar7 = (uint)((ulonglong)&(this->fields)._.lodGameObject >> 0xc);
        uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
        do {
          uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
          puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
          LOCK();
          bVar6 = uVar9 == *puVar10;
          if (bVar6) {
            *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
      pUVar11 = (this->fields)._._.PositionChanged;
      this_01 = (UnityAction_2_System_Object_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                             );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_01,(Object *)this,
                 MethodInfo__MVLogicObject__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 ,(MethodInfo *)0x0);
      pDVar12 = mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pUVar11,(Delegate *)this_01,(MethodInfo *)0x0);
      pUVar13 = 
      TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
      if (pDVar12 == (Delegate *)0x0) {
        (this->fields)._._.PositionChanged =
             (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
      }
      else {
        pUVar11 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                  FUN_?(pDVar12,
                                TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                               );
        if (pUVar11 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
          FUN_?(pDVar12,pUVar13);
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        (this->fields)._._.PositionChanged = pUVar11;
        pUVar13 = 
        TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
        lVar15 = FUN_?(pDVar12,
                               TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                              );
        if (lVar15 == 0) {
          FUN_?(pDVar12,pUVar13);
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar7 = (uint)((ulonglong)&(this->fields)._._.PositionChanged >> 0xc);
        uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
        do {
          uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
          puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
          LOCK();
          bVar6 = uVar9 == *puVar10;
          if (bVar6) {
            *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
      puVar16 = (undefined8 *)
                (*(this->klass->vtable).get_WorldPosition_1.methodPtr)
                          (auStack_1,this,(this->klass->vtable).get_WorldPosition_1.method);
      uVar17 = *puVar16;
      uVar18 = *(undefined4 *)(puVar16 + 1);
      callback = (UnityAction_1_UnityEngine_CullingGroupEvent_ *)
                 FUN_?(
                              TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                              );
      FUN_?(callback,this);
      this_02 = (CullingSubscriberBase *)FUN_?(TypeInfo__CullingSubscriberBase);
      CullingSubscriberBase::CullingSubscriberBase__ctor_1(this_02,callback,(MethodInfo *)0x0);
      auStack_1._8_4_ = uVar18;
      auStack_1._0_8_ = uVar17;
      CullingSubscriberBase::CullingSubscriberBase_Setup
                (this_02,radius,(Vector3 *)auStack_1,(MethodInfo *)0x0);
      bVar6 = iRam_? != 0;
      (this->fields)._.cullingSubscriberBase = this_02;
      if (bVar6) {
        uVar7 = (uint)((ulonglong)&(this->fields)._.cullingSubscriberBase >> 0xc);
        uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
        do {
          uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
          puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
          LOCK();
          bVar6 = uVar9 == *puVar10;
          if (bVar6) {
            *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
      return;
    }
  }
  auStack_1._8_8_ = &UNK_?;
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
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
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Animation>_UnityEngine__Animation_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar4 = (pAVar3->fields)._._._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar3,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
      (*pcRam_?)(pvVar4);
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
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetupUseInteractor() */

void Assembly-CSharp.dll::MVCheckpoint::MVCheckpoint_SetupUseInteractor
               (MVCheckpoint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<int,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GameCoinLogic);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LevelBasedUseRequirement);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVCheckpoint__DoReachCheckpoint_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UseInteractor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).checkpointObject;
  if (pMVar1 == (MVCheckpointObject *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar3 = (pMVar1->fields).triggerBoxEvents;
  pGVar4 = (pMVar1->fields).useInteractionRotator;
  if (pTVar3 == (TriggerBoxEvents *)0x0) goto code_?;
  triggerCollider = TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar3,(MethodInfo *)0x0);
  useFunction = (Func_2_Int32_Boolean_ *)FUN_?(TypeInfo__System__Func<int,_bool>);
  FUN_?(useFunction,this,MethodInfo__MVCheckpoint__DoReachCheckpoint_int_);
  pUVar5 = (UseInteractor *)FUN_?(TypeInfo__UseInteractor);
  UseInteractor::UseInteractor__ctor
            (pUVar5,(MVWorldObjectClient *)this,pGVar4,0,triggerCollider,useFunction,
             (Func_3_Int32_MVInteractableBase_Boolean_ *)0x0,_UNK_?,0,1,(MethodInfo *)0x0);
  bVar6 = iRam_? != 0;
  (this->fields).useInteractor = pUVar5;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields).useInteractor >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pMVar1 = (this->fields).checkpointObject;
  if (pMVar1 == (MVCheckpointObject *)0x0) goto code_?;
  pTVar3 = (pMVar1->fields).triggerBoxEvents;
  pUVar5 = (this->fields).useInteractor;
  pUVar11 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (pUVar11,(Object *)pUVar5,
             MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
             ,(MethodInfo *)0x0);
  if (pTVar3 == (TriggerBoxEvents *)0x0) goto code_?;
  TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
            (pTVar3,(EventHandler_1_TriggerEventArgs_ *)pUVar11,(MethodInfo *)0x0);
  pMVar1 = (this->fields).checkpointObject;
  if (pMVar1 == (MVCheckpointObject *)0x0) goto code_?;
  pTVar3 = (pMVar1->fields).triggerBoxEvents;
  pUVar5 = (this->fields).useInteractor;
  pUVar11 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (pUVar11,(Object *)pUVar5,
             MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
             ,(MethodInfo *)0x0);
  if (pTVar3 == (TriggerBoxEvents *)0x0) goto code_?;
  TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
            (pTVar3,(EventHandler_1_TriggerEventArgs_ *)pUVar11,(MethodInfo *)0x0);
  pMVar1 = (this->fields).checkpointObject;
  if (pMVar1 == (MVCheckpointObject *)0x0) goto code_?;
  pGVar4 = (pMVar1->fields).useInteractionRotator;
  pUVar12 = (UseRequirement *)FUN_?(TypeInfo__GameCoinLogic);
  bVar6 = iRam_? != 0;
  pUVar12[1].monitor = (MonitorData *)0x0;
  *(undefined4 *)&pUVar12[1].fields = 0;
  *(undefined4 *)((longlong)&pUVar12[1].klass + 4) = 1;
  *(undefined1 *)&pUVar12[3].klass = 0;
  *(GameObject **)&pUVar12[2].fields = pGVar4;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&pUVar12[2].fields >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pUVar5 = (this->fields).useInteractor;
  if (pUVar5 == (UseInteractor *)0x0) goto code_?;
  UseInteractor::UseInteractor_AddRequirement(pUVar5,pUVar12,(MethodInfo *)0x0);
  pMVar1 = (this->fields).checkpointObject;
  if (pMVar1 == (MVCheckpointObject *)0x0) goto code_?;
  pGVar4 = (pMVar1->fields).useInteractionRotator;
  pUVar12 = (UseRequirement *)FUN_?(TypeInfo__LevelBasedUseRequirement);
  bVar6 = iRam_? != 0;
  *(undefined8 *)&pUVar12[1].fields = 0;
  *(undefined4 *)&pUVar12[2].klass = 0;
  *(undefined1 *)((longlong)&pUVar12[1].klass + 4) = 0;
  pUVar12[2].monitor = (MonitorData *)pGVar4;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&pUVar12[2].monitor >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pUVar5 = (this->fields).useInteractor;
  if (pUVar5 == (UseInteractor *)0x0) goto code_?;
  UseInteractor::UseInteractor_AddRequirement(pUVar5,pUVar12,(MethodInfo *)0x0);
  pMVar1 = (this->fields).checkpointObject;
  if (pMVar1 == (MVCheckpointObject *)0x0) goto code_?;
  pGVar4 = (pMVar1->fields).useInteractionRotator;
  this_02 = (RewardedAdRequirement *)
            FUN_?(TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement);
  WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement::RewardedAdRequirement__ctor
            (this_02,pGVar4,(MethodInfo *)0x0);
  pUVar5 = (this->fields).useInteractor;
  if (pUVar5 == (UseInteractor *)0x0) goto code_?;
  this_00 = (pUVar5->fields).useInteractorVisuals;
  if (this_00 == (UseInteractorVisualization *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UseRequirement>__Add_UseRequirement_
                  ,this_02,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar13 = MethodInfo__System__Collections__Generic__List<UseRequirement>__Add_UseRequirement_;
  this_01 = (this_00->fields).useRequirements;
  if (this_01 == (List_1_UseRequirement_ *)0x0) goto code_?;
  piVar14 = &(this_01->fields)._version;
  *piVar14 = *piVar14 + 1;
  pUVar15 = (this_01->fields)._items;
  if (pUVar15 == (UseRequirement__Array *)0x0) goto code_?;
  uVar7 = (this_01->fields)._size;
  if (uVar7 < (uint)pUVar15->max_length) {
    (this_01->fields)._size = uVar7 + 1;
    FUN_?(pUVar15,(longlong)(int)uVar7,this_02);
  }
  else {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object__AddWithResize
              ((List_1_System_Object_ *)this_01,(Object *)this_02,
               pMVar13->klass->rgctx_data[0xe].method);
  }
  if ((this_00->fields).hasInputBlockingRequirement == 0) {
    if (this_02 == (RewardedAdRequirement *)0x0) goto code_?;
    cVar16 = (*(this_02->klass->vtable).get_IsInputBlocking.methodPtr)
                       (this_02,(this_02->klass->vtable).get_IsInputBlocking.method);
  }
  else {
    cVar16 = '\x01';
  }
  (this_00->fields).hasInputBlockingRequirement = cVar16 != '\0';
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__Dispose__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UseRequirement>__GetEnumerator__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this_00->fields).active = 0;
  (this_00->fields).dist = 1.3;
  if ((this_00->fields).useRequirements == (List_1_UseRequirement_ *)0x0) {
code_?:
    FUN_?();
  }
  else {
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)&stack0xffffffffffffffb8 >> 0xc);
      uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
      do {
        uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
        puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
        LOCK();
        bVar6 = uVar9 == *puVar10;
        if (bVar6) {
          *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    bVar17 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
             List_1_T_Enumerator_System_Object__MoveNext
                       ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffffffffffd0,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                       );
    if (bVar17 == 0) {
      if ((this_00->fields).active == 1) {
        (this_00->fields).dist = 0.01;
      }
      bVar6 = (this_00->fields).active == 0;
      if (!bVar6) {
        (this_00->fields).spacing = (float)(int)(0x168 / (longlong)(this_00->fields).active);
        bVar6 = (this_00->fields).active == 0;
      }
      (this_00->fields)._HasUseRequirements_k__BackingField = !bVar6;
      if ((this_00->fields).useRequirements != (List_1_UseRequirement_ *)0x0) {
        if (iRam_? != 0) {
          uVar7 = (uint)((ulonglong)&stack0xffffffffffffffb8 >> 0xc);
          uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
          do {
            uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
            puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
            LOCK();
            bVar6 = uVar9 == *puVar10;
            if (bVar6) {
              *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (!bVar6);
        }
        bVar17 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                 List_1_T_Enumerator_System_Object__MoveNext
                           ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffffffffffd0,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                           );
        if (bVar17 == 0) {
          if ((this_00->fields)._HasUseRequirements_k__BackingField != 0) {
            if ((this_00->fields).cullingSubscriberBase == (CullingSubscriberBase *)0x0) {
              UseInteractorVisualization::UseInteractorVisualization_SetupCulling
                        (this_00,(MethodInfo *)0x0);
              goto code_?;
            }
            if ((this_00->fields)._HasUseRequirements_k__BackingField != 0)
            goto code_?;
          }
          if ((this_00->fields).cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
            UseInteractorVisualization::UseInteractorVisualization_RemoveCulling
                      (this_00,(MethodInfo *)0x0);
          }
code_?:
          bVar17 = (this_00->fields)._HasUseRequirements_k__BackingField;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar18 = (this_00->fields)._._._._.m_CachedPtr;
          if (pvVar18 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar19 = func_?(&UNK_?);
            FUN_?(uVar19,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
          (*pcRam_?)(pvVar18,bVar17);
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  FUN_?();
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVCheckpoint(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVCheckpoint::MVCheckpoint__ctor
               (MVCheckpoint *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCheckpointObject);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVCheckpoint__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
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
      bVar3 = (TypeInfo__MVCheckpointObject->_1).naturalAligment;
      if (((((ObjectPrefab__Class *)pMVar2->klass)->_1).naturalAligment < bVar3) ||
         ((((ObjectPrefab__Class *)pMVar2->klass)->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
          (Il2CppClass *)TypeInfo__MVCheckpointObject)) {
        FUN_?(pMVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (this->fields).checkpointObject = pMVar2;
      bVar3 = (TypeInfo__MVCheckpointObject->_1).naturalAligment;
      if (((((ObjectPrefab__Class *)pMVar2->klass)->_1).naturalAligment < bVar3) ||
         ((((ObjectPrefab__Class *)pMVar2->klass)->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
          (Il2CppClass *)TypeInfo__MVCheckpointObject)) {
        FUN_?(pMVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&(this->fields).checkpointObject >> 0xc);
      puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar7 = *puVar6;
        LOCK();
        uVar8 = *puVar6;
        if (uVar7 == uVar8) {
          *puVar6 = uVar7 | 1L << (ulonglong)(uVar5 & 0x3f);
        }
        UNLOCK();
      } while (uVar7 != uVar8);
    }
    pMVar2 = (this->fields).checkpointObject;
    if (pMVar2 != (MVCheckpointObject *)0x0) {
      this_00 = (pMVar2->fields).triggerBoxEvents;
      this_01 = (UnityAction_2_System_Object_System_Object_ *)
                FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_01,(Object *)this,
                 MethodInfo__MVCheckpoint__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 ,(MethodInfo *)0x0);
      if (this_00 != (TriggerBoxEvents *)0x0) {
        TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                  (this_00,(EventHandler_1_TriggerEventArgs_ *)this_01,(MethodInfo *)0x0);
        piVar9 = &(this->fields)._._.interactionFlags;
        *piVar9 = *piVar9 | 0x200300000;
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void triggerBoxEvents_TriggerEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::MVCheckpoint::MVCheckpoint_triggerBoxEvents_TriggerEnter
               (MVCheckpoint *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  pUVar1 = (this->fields).useInteractor;
  if ((pUVar1 != (UseInteractor *)0x0) &&
     (this_00 = (pUVar1->fields).useInteractorVisuals, this_00 != (UseInteractorVisualization *)0x0)
     ) {
    UVar2 = UseInteractorVisualization::UseInteractorVisualization_EvaluateUsability
                      (this_00,(MethodInfo *)0x0);
    if ((UVar2 & (UseGUIResult__Enum_CannotAfford|UseGUIResult__Enum_CanAfford)) == 0) {
      if (e == (TriggerEventArgs *)0x0) goto code_?;
      MVCheckpoint_DoReachCheckpoint(this,(e->fields).instigatorWOID,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


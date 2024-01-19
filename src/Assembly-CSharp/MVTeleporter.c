
/* Boolean Delete(MVWorldObjectClientManager, String ByRef) */

bool Assembly-CSharp.dll::MVTeleporter::MVTeleporter_Delete
               (MVTeleporter *this,MVWorldObjectClientManager *worldObjectClientManager,
               String **errorText,MethodInfo *method)

{
  if (worldObjectClientManager == (MVWorldObjectClientManager *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                     (worldObjectClientManager,(this->fields)._._._.groupId,(MethodInfo *)0x0);
  if (pMVar3 == (MVWorldObject *)0x0) {
    return 0;
  }
  bVar2 = (*(code *)pMVar3->klass[2]._0.element_class)(pMVar3,worldObjectClientManager,errorText);
  return bVar2;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVTeleporter::MVTeleporter_Destroy(MVTeleporter *this,MethodInfo *method)

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
  if ((this->fields).isDestroyed == 0) {
    if ((this->fields).useInteractor != (UseInteractor *)0x0) {
      pMVar1 = (this->fields).teleportObject;
      if (pMVar1 == (MVTeleporterObject *)0x0) {
code_?:
        func_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pTVar3 = (pMVar1->fields).triggerBoxEvents;
      pUVar4 = (this->fields).useInteractor;
      pUVar5 = (UnityAction_2_System_Object_System_Object_ *)
               func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (pUVar5,(Object *)pUVar4,
                 MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 ,(MethodInfo *)0x0);
      if (pTVar3 == (TriggerBoxEvents *)0x0) goto code_?;
      TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
                (pTVar3,(EventHandler_1_TriggerEventArgs_ *)pUVar5,(MethodInfo *)0x0);
      pMVar1 = (this->fields).teleportObject;
      if (pMVar1 == (MVTeleporterObject *)0x0) goto code_?;
      pTVar3 = (pMVar1->fields).triggerBoxEvents;
      pUVar4 = (this->fields).useInteractor;
      pUVar5 = (UnityAction_2_System_Object_System_Object_ *)
               func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (pUVar5,(Object *)pUVar4,
                 MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                 ,(MethodInfo *)0x0);
      if (pTVar3 == (TriggerBoxEvents *)0x0) goto code_?;
      TriggerBoxEvents::TriggerBoxEvents_remove_TriggerExit
                (pTVar3,(EventHandler_1_TriggerEventArgs_ *)pUVar5,(MethodInfo *)0x0);
      pUVar4 = (this->fields).useInteractor;
      if (pUVar4 == (UseInteractor *)0x0) goto code_?;
      UseInteractor::UseInteractor_OnDestroy(pUVar4,(this->fields)._._._.data,(MethodInfo *)0x0);
      (this->fields).useInteractor = (UseInteractor *)0x0;
      func_?(&(this->fields).useInteractor,0);
    }
    MVLogicObject::MVLogicObject_Destroy((MVLogicObject *)this,(MethodInfo *)0x0);
    (this->fields).isDestroyed = 1;
  }
  return;
}


/* Boolean DoTeleport(Int32) */

bool Assembly-CSharp.dll::MVTeleporter::MVTeleporter_DoTeleport
               (MVTeleporter *this,int32_t instigatorWOID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
    func_?(&TypeInfo__MVAvatarLocal);
    func_?(&
                    TeleportAvatar_MethodInfo__UnityEngine__Object__Instantiate<TeleportAvatar>_TeleportAvatar__UnityEngine__Vector3__UnityEngine__Quaternion_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((this->fields).target == (MVTeleporter *)0x0) {
    return 0;
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_01 == (MVWorldObjectClientManager *)0x0) goto code_?;
  this_02 = (MVAvatarLocal *)
            MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                      (this_01,instigatorWOID,(MethodInfo *)0x0);
  if (this_02 == (MVAvatarLocal *)0x0) {
    return 0;
  }
  if ((this_02->klass->_1).naturalAligment < (TypeInfo__MVAvatarLocal->_1).naturalAligment) {
    return 0;
  }
  if ((MVAvatarLocal__Class *)
      (this_02->klass->_1).typeHierarchy[(TypeInfo__MVAvatarLocal->_1).naturalAligment - 1] !=
      TypeInfo__MVAvatarLocal) {
    return 0;
  }
  pMVar1 = TypeInfo__MVAvatarLocal;
  if (((TypeInfo__MVAvatarLocal->_1).naturalAligment <= (this_02->klass->_1).naturalAligment) &&
     ((MVAvatarLocal__Class *)
      (this_02->klass->_1).typeHierarchy[(TypeInfo__MVAvatarLocal->_1).naturalAligment - 1] ==
      TypeInfo__MVAvatarLocal)) {
    bVar2 = MVAvatarLocal::MVAvatarLocal_get_IsEnteringVehicle(this_02,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      return 0;
    }
    bVar2 = MVAvatar::MVAvatar_get_IsSeated((MVAvatar *)this_02,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      MVAvatarLocal::MVAvatarLocal_LeaveVehicle(this_02,0,(MethodInfo *)0x0);
    }
    bVar2 = MVAvatarLocal::MVAvatarLocal_IsSpawnRoleActive(this_02,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return 0;
    }
    pLVar3 = (this->fields).avatarIgnoreList;
    if (pLVar3 == (List_1_System_Int32_ *)0x0) goto code_?;
    bVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
             List_1_System_Int32__Contains
                       (pLVar3,(this_02->fields)._._._._.id,
                        MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
    if (bVar2 != 0) {
      return 1;
    }
    this_00 = (this->fields)._._.transform;
    if (this_00 == (Transform *)0x0) goto code_?;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffd8,this_00,(MethodInfo *)0x0);
    original = (this->fields).teleportAvatarPrefab;
    OVar5.klass = (Object__Class *)pVVar4->x;
    OVar5.monitor = (MonitorData *)pVVar4->y;
    fVar6 = pVVar4->z;
    OVar7 = OVar5;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pQVar8 = TypeInfo__UnityEngine__Quaternion->static_fields;
    fVar9 = (pQVar8->identityQuaternion).x;
    fVar10 = (pQVar8->identityQuaternion).y;
    fVar11 = (pQVar8->identityQuaternion).z;
    fVar12 = (pQVar8->identityQuaternion).w;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pOVar13 = OVar7.klass;
    pMVar14 = OVar7.monitor;
    position.z = fVar6;
    position.x = (float)OVar7.klass;
    position.y = (float)OVar7.monitor;
    rotation.y = fVar10;
    rotation.x = fVar9;
    rotation.z = fVar11;
    rotation.w = fVar12;
    pOVar15 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_7
                        ((Object *)original,position,rotation,
                         TeleportAvatar_MethodInfo__UnityEngine__Object__Instantiate<TeleportAvatar>_TeleportAvatar__UnityEngine__Vector3__UnityEngine__Quaternion_
                        );
    if (pOVar15 == (Object *)0x0) goto code_?;
    pOVar15[6].klass = (Object__Class *)(this->fields)._._._.id;
    pOVar15[6].monitor = *(MonitorData **)(pMVar14 + 8);
    pOVar15[5].monitor = (MonitorData *)this_02;
    func_?();
    puVar16 = (undefined8 *)func_?();
    pMVar17 = *(MonitorData **)(puVar16 + 1);
    *(undefined8 *)&pOVar15[2].monitor = *puVar16;
    pOVar15[3].monitor = pMVar17;
    pOVar15[4] = OVar5;
    pOVar15[5].klass = pOVar13;
    pMVar18 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    pLVar3 = *(List_1_System_Int32_ **)(pMVar14 + 0xf8);
    item = (this_02->fields)._._._._.id;
    if (pLVar3 == (List_1_System_Int32_ *)0x0) goto code_?;
    piVar19 = &(pLVar3->fields)._version;
    *piVar19 = *piVar19 + 1;
    pIVar20 = (pLVar3->fields)._items;
    if (pIVar20 == (Int32__Array *)0x0) goto code_?;
    this_02 = (MVAvatarLocal *)(pLVar3->fields)._size;
    if ((MVAvatarLocal *)pIVar20->max_length <= this_02) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
      List_1_System_Int32__AddWithResize(pLVar3,item,pMVar18->klass->rgctx_data[0xe].method);
      return 1;
    }
    (pLVar3->fields)._size = (int32_t)((int)&this_02->klass + 1);
    if (this_02 < (MVAvatarLocal *)pIVar20->max_length) {
      pIVar20->vector[(int)this_02] = item;
      return 1;
    }
    func_?();
    pMVar1 = extraout_EDX;
  }
  func_?(this_02,pMVar1);
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  bVar2 = (*pcVar21)();
  return bVar2;
}


/* Vector3 GetClosestGridPoint(Single, Vector3) */

Vector3 * Assembly-CSharp.dll::MVTeleporter::MVTeleporter_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,MVTeleporter *this,float gridSize,
                    Vector3 position,MethodInfo *method)

{
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  pVVar1 = MVLogicObject::MVLogicObject_GetClosestGridPoint
                     (&VStack_2,(MVLogicObject *)this,gridSize,position,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  __return_storage_ptr__->x = pVVar1->x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = pVVar1->z;
  fVar4 = (float10)func_?();
  __return_storage_ptr__->y = (float)(fVar4 * (float10)gridSize);
  return __return_storage_ptr__;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVTeleporter::MVTeleporter_Initialize
               (MVTeleporter *this,MethodInfo *method)

{
  MVTeleporter_SetupUseInteractor(this,(MethodInfo *)0x0);
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  this_00 = (this->fields).useInteractor;
  if (this_00 != (UseInteractor *)0x0) {
    UseInteractor::UseInteractor_UpdateData(this_00,(this->fields)._._._.data,(MethodInfo *)0x0);
    pMVar1 = (this->fields).teleportObject;
    if (pMVar1 != (MVTeleporterObject *)0x0) {
      this_01 = MVLogicObject::MVLogicObject_SetupCulling
                          ((MVLogicObject *)this,(pMVar1->fields).visualRoot,2.0,(MethodInfo *)0x0);
      if (this_01 != (CullingSubscriberBase *)0x0) {
        CullingSubscriberBase::CullingSubscriberBase_set_Radius(this_01,4.0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVTeleporter::MVTeleporter_InitializeInventory
               (MVTeleporter *this,MethodInfo *method)

{
  pMVar1 = this;
  MVLogicObject::MVLogicObject_InitializeInventory((MVLogicObject *)this,(MethodInfo *)0x0);
  pMVar2 = (pMVar1->fields).teleportObject;
  if ((pMVar2 != (MVTeleporterObject *)0x0) &&
     (this_00 = (pMVar2->fields).objParticleSystem, this_00 != (ParticleSystem *)0x0)) {
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_get_collision
              (this_00,(MethodInfo *)0x0);
    method = (MethodInfo *)0x0;
    this = (MVTeleporter *)0x3f4ccccd;
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
    ParticleSystem_MainModule_set_startSizeMultiplier_Injected
              ((ParticleSystem_MainModule *)&this,0.8,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVTeleporter::MVTeleporter_OnDataUpdate
               (MVTeleporter *this,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  this_00 = (this->fields).useInteractor;
  if (this_00 != (UseInteractor *)0x0) {
    UseInteractor::UseInteractor_UpdateData(this_00,(this->fields)._._._.data,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetupUseInteractor() */

void Assembly-CSharp.dll::MVTeleporter::MVTeleporter_SetupUseInteractor
               (MVTeleporter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    func_?(&TypeInfo__System__Func<int,_bool>);
    func_?(&TypeInfo__GameCoinLogic);
    func_?(&TypeInfo__GameRankRequirement);
    func_?(&TypeInfo__LevelBasedUseRequirement);
    func_?(&MethodInfo__MVTeleporter__DoTeleport_int_);
    func_?(&TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement);
    func_?(&TypeInfo__StarRequirement);
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
  pMVar1 = (this->fields).teleportObject;
  if (pMVar1 != (MVTeleporterObject *)0x0) {
    pGVar2 = (pMVar1->fields).useInteractionRotator;
    pTVar3 = (((this->fields).teleportObject)->fields).triggerBoxEvents;
    if (pTVar3 != (TriggerBoxEvents *)0x0) {
      triggerCollider = TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar3,(MethodInfo *)0x0);
      this_00 = (Predicate_1_UInt32_ *)func_?(TypeInfo__System__Func<int,_bool>);
      mscorlib.dll::System::Predicate`1[UInt32]::Predicate_1_UInt32___ctor
                (this_00,(Object *)this,MethodInfo__MVTeleporter__DoTeleport_int_,(MethodInfo *)0x0)
      ;
      pUVar4 = (UseInteractor *)func_?(TypeInfo__UseInteractor);
      UseInteractor::UseInteractor__ctor
                (pUVar4,(MVWorldObjectClient *)this,pGVar2,0,triggerCollider,
                 (Func_2_Int32_Boolean_ *)this_00,(Func_3_Int32_MVInteractableBase_Boolean_ *)0x0,
                 2.5,0,(MethodInfo *)0x0);
      (this->fields).useInteractor = pUVar4;
      func_?(&(this->fields).useInteractor,pUVar4);
      pMVar1 = (this->fields).teleportObject;
      if (pMVar1 != (MVTeleporterObject *)0x0) {
        pGVar2 = (pMVar1->fields).useInteractionRotator;
        this_01 = (GameCoinLogic *)func_?(TypeInfo__GameCoinLogic);
        GameCoinLogic::GameCoinLogic__ctor(this_01,pGVar2,0,(MethodInfo *)0x0);
        pMVar1 = (this->fields).teleportObject;
        if (pMVar1 != (MVTeleporterObject *)0x0) {
          pGVar2 = (pMVar1->fields).useInteractionRotator;
          this_02 = (GameRankRequirement *)func_?(TypeInfo__GameRankRequirement);
          GameRankRequirement::GameRankRequirement__ctor
                    (this_02,pGVar2,(MVWorldObjectClient *)this,0,(MethodInfo *)0x0);
          if (this_02 != (GameRankRequirement *)0x0) {
            (*(code *)(this_02->klass->vtable).OnDataUpdate.method)
                      (this_02,(this->fields)._._._.data,(this->fields)._._._.id,
                       (this_02->klass->vtable).GetShowOption.methodPtr);
            pMVar1 = (this->fields).teleportObject;
            if (pMVar1 != (MVTeleporterObject *)0x0) {
              pGVar2 = (pMVar1->fields).useInteractionRotator;
              this_03 = (LevelBasedUseRequirement *)
                        func_?(TypeInfo__LevelBasedUseRequirement);
              LevelBasedUseRequirement::LevelBasedUseRequirement__ctor
                        (this_03,pGVar2,0,(MethodInfo *)0x0);
              pMVar1 = (this->fields).teleportObject;
              if (pMVar1 != (MVTeleporterObject *)0x0) {
                pGVar2 = (pMVar1->fields).useInteractionRotator;
                this_04 = (StarRequirement *)func_?(TypeInfo__StarRequirement);
                StarRequirement::StarRequirement__ctor(this_04,pGVar2,0,(MethodInfo *)0x0);
                pMVar1 = (this->fields).teleportObject;
                if (pMVar1 != (MVTeleporterObject *)0x0) {
                  tintObject = (pMVar1->fields).tintObject;
                  this_05 = (TeamRequirement *)func_?(TypeInfo__TeamRequirement);
                  TeamRequirement::TeamRequirement__ctor
                            (this_05,(TintObject *)tintObject,0,(MethodInfo *)0x0);
                  pMVar1 = (this->fields).teleportObject;
                  if (pMVar1 != (MVTeleporterObject *)0x0) {
                    pGVar2 = (pMVar1->fields).useInteractionRotator;
                    this_06 = (RewardedAdRequirement *)
                              func_?(
                                             TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement
                                             );
                    WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement::
                    RewardedAdRequirement__ctor(this_06,pGVar2,(MethodInfo *)0x0);
                    pUVar4 = (this->fields).useInteractor;
                    if (pUVar4 != (UseInteractor *)0x0) {
                      UseInteractor::UseInteractor_AddRequirement
                                (pUVar4,(UseRequirement *)this_03,(MethodInfo *)0x0);
                      pUVar4 = (this->fields).useInteractor;
                      if (pUVar4 != (UseInteractor *)0x0) {
                        UseInteractor::UseInteractor_AddRequirement
                                  (pUVar4,(UseRequirement *)this_01,(MethodInfo *)0x0);
                        pUVar4 = (this->fields).useInteractor;
                        if (pUVar4 != (UseInteractor *)0x0) {
                          UseInteractor::UseInteractor_AddRequirement
                                    (pUVar4,(UseRequirement *)this_04,(MethodInfo *)0x0);
                          pUVar4 = (this->fields).useInteractor;
                          if (pUVar4 != (UseInteractor *)0x0) {
                            UseInteractor::UseInteractor_AddRequirement
                                      (pUVar4,(UseRequirement *)this_05,(MethodInfo *)0x0);
                            pUVar4 = (this->fields).useInteractor;
                            if (pUVar4 != (UseInteractor *)0x0) {
                              UseInteractor::UseInteractor_AddRequirement
                                        (pUVar4,(UseRequirement *)this_02,(MethodInfo *)0x0);
                              pUVar4 = (this->fields).useInteractor;
                              if (pUVar4 != (UseInteractor *)0x0) {
                                UseInteractor::UseInteractor_AddRequirement
                                          (pUVar4,(UseRequirement *)this_06,(MethodInfo *)0x0);
                                pMVar1 = (this->fields).teleportObject;
                                if (pMVar1 != (MVTeleporterObject *)0x0) {
                                  pTVar3 = (pMVar1->fields).triggerBoxEvents;
                                  pUVar4 = (this->fields).useInteractor;
                                  pUVar5 = (UnityAction_2_System_Object_System_Object_ *)
                                           func_?(
                                                  TypeInfo__System__EventHandler<TriggerEventArgs>);
                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                  UnityAction`2[System::Object,System::Object]::
                                  UnityAction_2_System_Object_System_Object___ctor
                                            (pUVar5,(Object *)pUVar4,
                                             MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                                             ,(MethodInfo *)0x0);
                                  if (pTVar3 != (TriggerBoxEvents *)0x0) {
                                    TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                                              (pTVar3,(EventHandler_1_TriggerEventArgs_ *)pUVar5,
                                               (MethodInfo *)0x0);
                                    pMVar1 = (this->fields).teleportObject;
                                    if (pMVar1 != (MVTeleporterObject *)0x0) {
                                      pTVar3 = (pMVar1->fields).triggerBoxEvents;
                                      pUVar4 = (this->fields).useInteractor;
                                      pUVar5 = (UnityAction_2_System_Object_System_Object_ *)
                                               func_?(
                                                  TypeInfo__System__EventHandler<TriggerEventArgs>);
                                      UnityEngine.CoreModule.dll::UnityEngine::Events::
                                      UnityAction`2[System::Object,System::Object]::
                                      UnityAction_2_System_Object_System_Object___ctor
                                                (pUVar5,(Object *)pUVar4,
                                                 MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                                                 ,(MethodInfo *)0x0);
                                      if (pTVar3 != (TriggerBoxEvents *)0x0) {
                                        TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                                                  (pTVar3,(EventHandler_1_TriggerEventArgs_ *)pUVar5
                                                   ,(MethodInfo *)0x0);
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


/* Boolean ValidateObjectLinkTarget(MVWorldObjectClient) */

bool Assembly-CSharp.dll::MVTeleporter::MVTeleporter_ValidateObjectLinkTarget
               (MVTeleporter *this,MVWorldObjectClient *wo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVTeleporter);
    cRam_? = '\x01';
  }
  if (wo != (MVWorldObjectClient *)0x0) {
    if (((TypeInfo__MVTeleporter->_1).naturalAligment <= (wo->klass->_1).naturalAligment) &&
       ((MVTeleporter__Class *)
        (wo->klass->_1).typeHierarchy[(TypeInfo__MVTeleporter->_1).naturalAligment - 1] ==
        TypeInfo__MVTeleporter)) {
      return wo != (MVWorldObjectClient *)0x0;
    }
    return 0;
  }
  return 0;
}


/* MVTeleporter(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVTeleporter::MVTeleporter__ctor
               (MVTeleporter *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<int>);
    func_?(&TypeInfo__MVTeleporterObject);
    func_?(&
                    MethodInfo__MVTeleporter__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   );
    func_?(&
                    MethodInfo__MVTeleporter__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Int32_ *)
            func_?(TypeInfo__System__Collections__Generic__List<int>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<int>__List__);
  (this->fields).avatarIgnoreList = this_00;
  func_?(&(this->fields).avatarIgnoreList,this_00);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(ObjectPrefab *)(pPVar1->fields).mvTeleporterPrefab,
               worldObjects,(MethodInfo *)0x0);
    pMVar2 = (MVTeleporterObject *)(this->fields)._._.component;
    if (pMVar2 == (MVTeleporterObject *)0x0) {
      (this->fields).teleportObject = (MVTeleporterObject *)0x0;
    }
    else {
      if (((((ObjectPrefab__Class *)pMVar2->klass)->_1).naturalAligment <
           (TypeInfo__MVTeleporterObject->_1).naturalAligment) ||
         ((((ObjectPrefab__Class *)pMVar2->klass)->_1).typeHierarchy
          [(TypeInfo__MVTeleporterObject->_1).naturalAligment - 1] !=
          (Il2CppClass *)TypeInfo__MVTeleporterObject)) goto code_?;
      (this->fields).teleportObject = pMVar2;
      if (((((ObjectPrefab__Class *)pMVar2->klass)->_1).naturalAligment <
           (TypeInfo__MVTeleporterObject->_1).naturalAligment) ||
         ((((ObjectPrefab__Class *)pMVar2->klass)->_1).typeHierarchy
          [(TypeInfo__MVTeleporterObject->_1).naturalAligment - 1] !=
          (Il2CppClass *)TypeInfo__MVTeleporterObject)) goto code_?;
    }
    func_?();
    if (cRam_? == '\0') {
      func_?(&TypeInfo__PrefabPool);
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar1 != (PrefabPool *)0x0) {
      pTVar3 = (pPVar1->fields).teleportAvatarPrefab;
      (this->fields).teleportAvatarPrefab = pTVar3;
      func_?(&(this->fields).teleportAvatarPrefab,pTVar3);
      pMVar2 = (this->fields).teleportObject;
      if (pMVar2 != (MVTeleporterObject *)0x0) {
        pTVar4 = (pMVar2->fields).triggerBoxEvents;
        pUVar5 = (UnityAction_2_System_Object_System_Object_ *)
                 func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (pUVar5,(Object *)this,
                   MethodInfo__MVTeleporter__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   ,(MethodInfo *)0x0);
        if (pTVar4 != (TriggerBoxEvents *)0x0) {
          TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                    (pTVar4,(EventHandler_1_TriggerEventArgs_ *)pUVar5,(MethodInfo *)0x0);
          pMVar2 = (this->fields).teleportObject;
          if (pMVar2 != (MVTeleporterObject *)0x0) {
            pTVar4 = (pMVar2->fields).triggerBoxEvents;
            pUVar5 = (UnityAction_2_System_Object_System_Object_ *)
                     func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      (pUVar5,(Object *)this,
                       MethodInfo__MVTeleporter__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                       ,(MethodInfo *)0x0);
            if (pTVar4 != (TriggerBoxEvents *)0x0) {
              TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                        (pTVar4,(EventHandler_1_TriggerEventArgs_ *)pUVar5,(MethodInfo *)0x0);
              iVar6 = (this->fields)._._.interactionFlags;
              *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) =
                   *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
              puVar7 = (uint *)((int)&(this->fields)._._.interactionFlags + 4);
              *puVar7 = *puVar7 | 2;
              *(uint *)&(this->fields)._._.interactionFlags = (uint)iVar6 & 0xffffdfff | 0x12700000;
              return;
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Vector3 get_InputConnectorOffset() */

Vector3 * Assembly-CSharp.dll::MVTeleporter::MVTeleporter_get_InputConnectorOffset
                    (Vector3 *__return_storage_ptr__,MVTeleporter *this,MethodInfo *method)

{
  __return_storage_ptr__->x = -1.5;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  return __return_storage_ptr__;
}


/* Vector3 get_ObjectConnectorOffset() */

Vector3 * Assembly-CSharp.dll::MVTeleporter::MVTeleporter_get_ObjectConnectorOffset
                    (Vector3 *__return_storage_ptr__,MVTeleporter *this,MethodInfo *method)

{
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 1.5;
  __return_storage_ptr__->z = 0.0;
  return __return_storage_ptr__;
}


/* Quaternion get_ObjectConnectorRotation() */

Quaternion *
Assembly-CSharp.dll::MVTeleporter::MVTeleporter_get_ObjectConnectorRotation
          (Quaternion *__return_storage_ptr__,MVTeleporter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                     (&QStack_2,TypeInfo__UnityEngine__Vector3->static_fields->downVector,
                      (MethodInfo *)0x0);
  fVar3 = pQVar1->y;
  fVar4 = pQVar1->z;
  fVar5 = pQVar1->w;
  __return_storage_ptr__->x = pQVar1->x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
  __return_storage_ptr__->w = fVar5;
  return __return_storage_ptr__;
}


/* Void triggerBoxEvents_TriggerEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::MVTeleporter::MVTeleporter_triggerBoxEvents_TriggerEnter
               (MVTeleporter *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Remove_int_);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__get_Count__
                   );
    func_?(&TypeInfo__MVAvatarLocal);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._._._.inputLinkRefs;
  if (pLVar1 != (List_1_MV_WorldObject_Link_ *)0x0) {
    bVar2 = 1;
    if ((pLVar1->fields)._size != 0) {
      bVar2 = (this->fields)._._._.inputState;
    }
    pUVar3 = (this->fields).useInteractor;
    if (pUVar3 != (UseInteractor *)0x0) {
      UVar4 = UseInteractor::UseInteractor_EvaluateRequirementsUsability(pUVar3,(MethodInfo *)0x0);
      if ((UVar4 & UseGUIResult__Enum_CanAfford) != 0) {
        this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if ((e == (TriggerEventArgs *)0x0) || (this_01 == (MVWorldObjectClientManager *)0x0))
        goto code_?;
        pMVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_01,(e->fields).instigatorWOID,(MethodInfo *)0x0);
        if ((pMVar5 != (MVWorldObject *)0x0) &&
           (((TypeInfo__MVAvatarLocal->_1).naturalAligment <= (pMVar5->klass->_1).naturalAligment &&
            ((MVAvatarLocal__Class *)
             (pMVar5->klass->_1).typeHierarchy[(TypeInfo__MVAvatarLocal->_1).naturalAligment - 1] ==
             TypeInfo__MVAvatarLocal)))) {
          this_00 = (this->fields).avatarIgnoreList;
          if (this_00 == (List_1_System_Int32_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
          List_1_System_Int32__Remove
                    (this_00,(pMVar5->fields).id,
                     MethodInfo__System__Collections__Generic__List<int>__Remove_int_);
        }
      }
      if (bVar2 != 0) {
        pUVar3 = (this->fields).useInteractor;
        if (pUVar3 == (UseInteractor *)0x0) goto code_?;
        UVar4 = UseInteractor::UseInteractor_EvaluateRequirementsUsability(pUVar3,(MethodInfo *)0x0)
        ;
        if ((UVar4 & (UseGUIResult__Enum_CannotAfford|UseGUIResult__Enum_CanAfford)) == 0) {
          if (e == (TriggerEventArgs *)0x0) goto code_?;
          MVTeleporter_DoTeleport(this,(e->fields).instigatorWOID,(MethodInfo *)0x0);
        }
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void triggerBoxEvents_TriggerExit(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::MVTeleporter::MVTeleporter_triggerBoxEvents_TriggerExit
               (MVTeleporter *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Remove_int_);
    func_?(&TypeInfo__MVAvatarLocal);
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((e != (TriggerEventArgs *)0x0) && (this_01 != (MVWorldObjectClientManager *)0x0)) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_01,(e->fields).instigatorWOID,(MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObject *)0x0) {
      if (((TypeInfo__MVAvatarLocal->_1).naturalAligment <= (pMVar1->klass->_1).naturalAligment) &&
         ((MVAvatarLocal__Class *)
          (pMVar1->klass->_1).typeHierarchy[(TypeInfo__MVAvatarLocal->_1).naturalAligment - 1] ==
          TypeInfo__MVAvatarLocal)) {
        this_00 = (this->fields).avatarIgnoreList;
        if (this_00 == (List_1_System_Int32_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
        List_1_System_Int32__Remove
                  (this_00,(pMVar1->fields).id,
                   MethodInfo__System__Collections__Generic__List<int>__Remove_int_);
      }
    }
    return;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


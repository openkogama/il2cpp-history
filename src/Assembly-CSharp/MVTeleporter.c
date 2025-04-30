
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
  bVar2 = (*(code *)pMVar3->klass[2]._0.declaringType)(pMVar3,worldObjectClientManager,errorText);
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
    ppUVar1 = &(this->fields).useInteractor;
    pUVar2 = *ppUVar1;
    if (pUVar2 != (UseInteractor *)0x0) {
      pMVar3 = (this->fields).teleportObject;
      if (pMVar3 == (MVTeleporterObject *)0x0) {
code_?:
        func_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar5 = (pMVar3->fields).triggerBoxEvents;
      pEVar6 = (EventHandler_1_Object_ *)
               func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
      mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                (pEVar6,(Object *)pUVar2,
                 MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 ,(MethodInfo *)0x0);
      if (pTVar5 == (TriggerBoxEvents *)0x0) goto code_?;
      TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
                (pTVar5,(EventHandler_1_TriggerEventArgs_ *)pEVar6,(MethodInfo *)0x0);
      pMVar3 = (this->fields).teleportObject;
      if (pMVar3 == (MVTeleporterObject *)0x0) goto code_?;
      pTVar5 = (pMVar3->fields).triggerBoxEvents;
      pUVar2 = *ppUVar1;
      pEVar6 = (EventHandler_1_Object_ *)
               func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
      mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                (pEVar6,(Object *)pUVar2,
                 MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                 ,(MethodInfo *)0x0);
      if (pTVar5 == (TriggerBoxEvents *)0x0) goto code_?;
      TriggerBoxEvents::TriggerBoxEvents_remove_TriggerExit
                (pTVar5,(EventHandler_1_TriggerEventArgs_ *)pEVar6,(MethodInfo *)0x0);
      if (*ppUVar1 == (UseInteractor *)0x0) goto code_?;
      UseInteractor::UseInteractor_OnDestroy(*ppUVar1,(this->fields)._._._.data,(MethodInfo *)0x0);
      *ppUVar1 = (UseInteractor *)0x0;
      func_?(ppUVar1,0);
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
  if ((this->fields).target != (MVTeleporter *)0x0) {
    this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_03 == (MVWorldObjectClientManager *)0x0) goto code_?;
    this_04 = (MVAvatarLocal *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (this_03,instigatorWOID,(MethodInfo *)0x0);
    if (this_04 != (MVAvatarLocal *)0x0) {
      pMVar1 = this_04->klass;
      bVar2 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
      if ((bVar2 <= (pMVar1->_1).naturalAligment) &&
         ((MVAvatarLocal__Class *)(pMVar1->_1).typeHierarchy[bVar2 - 1] == TypeInfo__MVAvatarLocal))
      {
        bVar2 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
        if (((pMVar1->_1).naturalAligment < bVar2) ||
           ((MVAvatarLocal__Class *)(pMVar1->_1).typeHierarchy[bVar2 - 1] != TypeInfo__MVAvatarLocal
           )) {
          func_?(this_04);
code_?:
          func_?();
          pcVar3 = (code *)swi(3);
          bVar4 = (*pcVar3)();
          return bVar4;
        }
        bVar4 = MVAvatarLocal::MVAvatarLocal_get_IsEnteringVehicle(this_04,(MethodInfo *)0x0);
        if (bVar4 == 0) {
          bVar4 = MVAvatar::MVAvatar_get_IsSeated((MVAvatar *)this_04,(MethodInfo *)0x0);
          if (bVar4 != 0) {
            MVAvatarLocal::MVAvatarLocal_LeaveVehicle(this_04,0,(MethodInfo *)0x0);
          }
          bVar4 = MVAvatarLocal::MVAvatarLocal_IsSpawnRoleActive(this_04,(MethodInfo *)0x0);
          if (bVar4 != 0) {
            this_00 = (this->fields).avatarIgnoreList;
            if (this_00 != (List_1_System_Int32_ *)0x0) {
              bVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                      List_1_System_Int32__Contains
                                (this_00,(this_04->fields)._._._._.id,
                                 MethodInfo__System__Collections__Generic__List<int>__Contains_int_)
              ;
              if (bVar4 != 0) {
                return 1;
              }
              this_01 = (this->fields)._._.transform;
              if (this_01 != (Transform *)0x0) {
                pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                   ((Vector3 *)&stack0xffffffd8,this_01,(MethodInfo *)0x0);
                original = (this->fields).teleportAvatarPrefab;
                OVar6.klass = (Object__Class *)pVVar5->x;
                OVar6.monitor = (MonitorData *)pVVar5->y;
                this_02 = (Object__Class *)pVVar5->z;
                OVar7 = OVar6;
                pOVar8 = this_02;
                pQVar9 = MVWorldObject.dll::MV::WorldObject::MVWorldObject::
                         MVWorldObject_get_WorldRotation
                                   ((Quaternion *)&stack0xffffffd4,(MVWorldObject *)this_02,
                                    (MethodInfo *)instigatorWOID);
                fVar10 = pQVar9->x;
                fVar11 = pQVar9->y;
                fVar12 = pQVar9->z;
                fVar13 = pQVar9->w;
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                puVar14 = &UNK_?;
                position.z = (float)this_02;
                position.x = (float)OVar7.klass;
                position.y = (float)OVar7.monitor;
                rotation.y = fVar11;
                rotation.x = fVar10;
                rotation.z = fVar12;
                rotation.w = fVar13;
                pOVar15 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_7
                                   ((Object *)original,position,rotation,
                                    TeleportAvatar_MethodInfo__UnityEngine__Object__Instantiate<TeleportAvatar>_TeleportAvatar__UnityEngine__Vector3__UnityEngine__Quaternion_
                                   );
                if (pOVar15 != (Object *)0x0) {
                  pOVar15[6].klass = (Object__Class *)(this->fields)._._._.id;
                  pOVar15[6].monitor = *(MonitorData **)(puVar14 + 8);
                  pOVar15[5].monitor = (MonitorData *)this_04;
                  pMStack16 = this_04;
                  func_?();
                  puVar17 = (undefined8 *)func_?();
                  pMVar18 = *(MonitorData **)(puVar17 + 1);
                  *(undefined8 *)&pOVar15[2].monitor = *puVar17;
                  pOVar15[3].monitor = pMVar18;
                  pOVar15[4] = OVar6;
                  pOVar15[5].klass = pOVar8;
                  if (*(int *)(puVar14 + 0xf8) != 0) {
                    pMStack16 =
                         (MVAvatarLocal *)
                         MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                    func_?();
                    return 1;
                  }
                }
              }
            }
            goto code_?;
          }
        }
      }
    }
  }
  return 0;
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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
    pTVar3 = (pMVar1->fields).triggerBoxEvents;
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
      ppUVar5 = &(this->fields).useInteractor;
      *ppUVar5 = pUVar4;
      func_?(ppUVar5,pUVar4);
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
                    if (*ppUVar5 != (UseInteractor *)0x0) {
                      UseInteractor::UseInteractor_AddRequirement
                                (*ppUVar5,(UseRequirement *)this_03,(MethodInfo *)0x0);
                      if (*ppUVar5 != (UseInteractor *)0x0) {
                        UseInteractor::UseInteractor_AddRequirement
                                  (*ppUVar5,(UseRequirement *)this_01,(MethodInfo *)0x0);
                        if (*ppUVar5 != (UseInteractor *)0x0) {
                          UseInteractor::UseInteractor_AddRequirement
                                    (*ppUVar5,(UseRequirement *)this_04,(MethodInfo *)0x0);
                          if (*ppUVar5 != (UseInteractor *)0x0) {
                            UseInteractor::UseInteractor_AddRequirement
                                      (*ppUVar5,(UseRequirement *)this_05,(MethodInfo *)0x0);
                            if (*ppUVar5 != (UseInteractor *)0x0) {
                              UseInteractor::UseInteractor_AddRequirement
                                        (*ppUVar5,(UseRequirement *)this_02,(MethodInfo *)0x0);
                              if (*ppUVar5 != (UseInteractor *)0x0) {
                                UseInteractor::UseInteractor_AddRequirement
                                          (*ppUVar5,(UseRequirement *)this_06,(MethodInfo *)0x0);
                                pMVar1 = (this->fields).teleportObject;
                                if (pMVar1 != (MVTeleporterObject *)0x0) {
                                  pTVar3 = (pMVar1->fields).triggerBoxEvents;
                                  pUVar4 = *ppUVar5;
                                  pEVar6 = (EventHandler_1_Object_ *)
                                           func_?(
                                                  TypeInfo__System__EventHandler<TriggerEventArgs>);
                                  mscorlib.dll::System::EventHandler`1[Object]::
                                  EventHandler_1_Object___ctor
                                            (pEVar6,(Object *)pUVar4,
                                             MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                                             ,(MethodInfo *)0x0);
                                  if (pTVar3 != (TriggerBoxEvents *)0x0) {
                                    TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                                              (pTVar3,(EventHandler_1_TriggerEventArgs_ *)pEVar6,
                                               (MethodInfo *)0x0);
                                    pMVar1 = (this->fields).teleportObject;
                                    if (pMVar1 != (MVTeleporterObject *)0x0) {
                                      pTVar3 = (pMVar1->fields).triggerBoxEvents;
                                      pUVar4 = *ppUVar5;
                                      pEVar6 = (EventHandler_1_Object_ *)
                                               func_?(
                                                  TypeInfo__System__EventHandler<TriggerEventArgs>);
                                      mscorlib.dll::System::EventHandler`1[Object]::
                                      EventHandler_1_Object___ctor
                                                (pEVar6,(Object *)pUVar4,
                                                 MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                                                 ,(MethodInfo *)0x0);
                                      if (pTVar3 != (TriggerBoxEvents *)0x0) {
                                        TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                                                  (pTVar3,(EventHandler_1_TriggerEventArgs_ *)pEVar6
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
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
    bVar1 = (TypeInfo__MVTeleporter->_1).naturalAligment;
    if ((bVar1 <= (wo->klass->_1).naturalAligment) &&
       ((MVTeleporter__Class *)(wo->klass->_1).typeHierarchy[bVar1 - 1] == TypeInfo__MVTeleporter))
    {
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
  ppLVar1 = &(this->fields).avatarIgnoreList;
  *ppLVar1 = this_00;
  func_?(ppLVar1,this_00);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar2 == (PrefabPool *)0x0) {
code_?:
    func_?();
  }
  else {
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(ObjectPrefab *)(pPVar2->fields).mvTeleporterPrefab,
               worldObjects,(MethodInfo *)0x0);
    pMVar3 = (MVTeleporterObject *)(this->fields)._._.component;
    if (pMVar3 == (MVTeleporterObject *)0x0) {
      (this->fields).teleportObject = (MVTeleporterObject *)0x0;
code_?:
      ppMVar4 = &(this->fields).teleportObject;
      func_?();
      if (cRam_? == '\0') {
        func_?(&TypeInfo__PrefabPool);
        cRam_? = '\x01';
      }
      pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
      if (pPVar2 != (PrefabPool *)0x0) {
        pTVar5 = (pPVar2->fields).teleportAvatarPrefab;
        ppTVar6 = &(this->fields).teleportAvatarPrefab;
        *ppTVar6 = pTVar5;
        func_?(ppTVar6,pTVar5);
        pMVar3 = *ppMVar4;
        if (pMVar3 != (MVTeleporterObject *)0x0) {
          pTVar7 = (pMVar3->fields).triggerBoxEvents;
          pEVar8 = (EventHandler_1_Object_ *)
                    func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
          mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                    (pEVar8,(Object *)this,
                     MethodInfo__MVTeleporter__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                     ,(MethodInfo *)0x0);
          if (pTVar7 != (TriggerBoxEvents *)0x0) {
            TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                      (pTVar7,(EventHandler_1_TriggerEventArgs_ *)pEVar8,(MethodInfo *)0x0);
            pMVar3 = *ppMVar4;
            if (pMVar3 != (MVTeleporterObject *)0x0) {
              pTVar7 = (pMVar3->fields).triggerBoxEvents;
              pEVar8 = (EventHandler_1_Object_ *)
                        func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
              mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                        (pEVar8,(Object *)this,
                         MethodInfo__MVTeleporter__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                         ,(MethodInfo *)0x0);
              if (pTVar7 != (TriggerBoxEvents *)0x0) {
                TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                          (pTVar7,(EventHandler_1_TriggerEventArgs_ *)pEVar8,(MethodInfo *)0x0);
                piVar9 = &(this->fields)._._.interactionFlags;
                *(uint *)piVar9 = (uint)*piVar9 & 0xffffdfff;
                piVar9 = &(this->fields)._._.interactionFlags;
                *(uint *)piVar9 = (uint)*piVar9 | 0x100000;
                piVar9 = &(this->fields)._._.interactionFlags;
                *(uint *)piVar9 = (uint)*piVar9 | 0x200000;
                piVar9 = &(this->fields)._._.interactionFlags;
                *(uint *)piVar9 = (uint)*piVar9 | 0x400000;
                piVar9 = &(this->fields)._._.interactionFlags;
                *(uint *)piVar9 = (uint)*piVar9 | 0x2000000;
                uVar10 = *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
                piVar9 = &(this->fields)._._.interactionFlags;
                *(uint *)piVar9 = (uint)*piVar9 | 0xADDR;
                *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) = uVar10;
                iVar11 = (this->fields)._._.interactionFlags;
                puVar12 = (uint *)((int)&(this->fields)._._.interactionFlags + 4);
                *puVar12 = *puVar12 | 2;
                *(int *)&(this->fields)._._.interactionFlags = (int)iVar11;
                return;
              }
            }
          }
        }
      }
      goto code_?;
    }
    bVar13 = (TypeInfo__MVTeleporterObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pMVar3->klass)->_1).naturalAligment < bVar13) ||
       ((((ObjectPrefab__Class *)pMVar3->klass)->_1).typeHierarchy[bVar13 - 1] !=
        (Il2CppClass *)TypeInfo__MVTeleporterObject)) goto code_?;
    (this->fields).teleportObject = pMVar3;
    bVar13 = (TypeInfo__MVTeleporterObject->_1).naturalAligment;
    if ((bVar13 <= (((ObjectPrefab__Class *)pMVar3->klass)->_1).naturalAligment) &&
       ((((ObjectPrefab__Class *)pMVar3->klass)->_1).typeHierarchy[bVar13 - 1] ==
        (Il2CppClass *)TypeInfo__MVTeleporterObject)) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
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
        if (pMVar5 != (MVWorldObject *)0x0) {
          bVar6 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
          if ((bVar6 <= (pMVar5->klass->_1).naturalAligment) &&
             ((MVAvatarLocal__Class *)(pMVar5->klass->_1).typeHierarchy[bVar6 - 1] ==
              TypeInfo__MVAvatarLocal)) {
            this_00 = (this->fields).avatarIgnoreList;
            if (this_00 == (List_1_System_Int32_ *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
            List_1_System_Int32__Remove
                      (this_00,(pMVar5->fields).id,
                       MethodInfo__System__Collections__Generic__List<int>__Remove_int_);
          }
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
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
      bVar2 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
      if ((bVar2 <= (pMVar1->klass->_1).naturalAligment) &&
         ((MVAvatarLocal__Class *)(pMVar1->klass->_1).typeHierarchy[bVar2 - 1] ==
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
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


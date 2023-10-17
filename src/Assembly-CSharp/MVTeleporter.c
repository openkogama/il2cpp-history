
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
  bVar2 = (**(code **)&pMVar3->klass[2]._0.byval_arg.attrs)
                    (pMVar3,worldObjectClientManager,errorText);
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
      if (pUVar5 == (UnityAction_2_System_Object_System_Object_ *)0x0) goto code_?;
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
      if (pUVar5 == (UnityAction_2_System_Object_System_Object_ *)0x0) goto code_?;
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
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
    func_?(&TypeInfo__MVAvatarLocal);
    func_?(&
                    TeleportAvatar_MethodInfo__UnityEngine__Object__Instantiate<TeleportAvatar>_TeleportAvatar__UnityEngine__Vector3__UnityEngine__Quaternion_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_actor_ignore_list_should_use_ids);
    func_?(&StringLiteral_DoTeleport2);
    func_?(&StringLiteral_DoTeleport);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_DoTeleport,(MethodInfo *)0x0);
  if ((this->fields).target != (MVTeleporter *)0x0) {
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_02 == (MVWorldObjectClientManager *)0x0) {
code_?:
      func_?();
      pcVar1 = (code *)swi(3);
      bVar2 = (*pcVar1)();
      return bVar2;
    }
    this_03 = (MVAvatarLocal *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (this_02,instigatorWOID,(MethodInfo *)0x0);
    if (((this_03 != (MVAvatarLocal *)0x0) &&
        ((TypeInfo__MVAvatarLocal->_1).typeHierarchyDepth <= (this_03->klass->_1).typeHierarchyDepth
        )) && ((MVAvatarLocal__Class *)
               (this_03->klass->_1).typeHierarchy
               [(TypeInfo__MVAvatarLocal->_1).typeHierarchyDepth - 1] == TypeInfo__MVAvatarLocal)) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_DoTeleport2,(MethodInfo *)0x0);
      if (((this_03->klass->_1).typeHierarchyDepth <
           (TypeInfo__MVAvatarLocal->_1).typeHierarchyDepth) ||
         ((MVAvatarLocal__Class *)
          (this_03->klass->_1).typeHierarchy[(TypeInfo__MVAvatarLocal->_1).typeHierarchyDepth - 1]
          != TypeInfo__MVAvatarLocal)) {
        func_?();
        goto code_?;
      }
      bVar2 = MVAvatarLocal::MVAvatarLocal_get_IsEnteringVehicle(this_03,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        bVar2 = MVAvatar::MVAvatar_get_IsSeated((MVAvatar *)this_03,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          MVAvatarLocal::MVAvatarLocal_LeaveVehicle(this_03,0,(MethodInfo *)0x0);
        }
        bVar2 = MVAvatarLocal::MVAvatarLocal_IsSpawnRoleActive(this_03,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                    (this->fields).avatarIgnoreList;
          if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
            bVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Contains
                              (this_00,(RegexCharClass_SingleRange)(this_03->fields)._._._._.id,
                               MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
            if (bVar2 != 0) {
              return 1;
            }
            this_01 = (this->fields)._._.transform;
            if (this_01 != (Transform *)0x0) {
              pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                 ((Vector3 *)&stack0xffffffdc,this_01,(MethodInfo *)0x0);
              original = (this->fields).teleportAvatarPrefab;
              uVar4._0_4_ = pVVar3->x;
              uVar4._4_4_ = pVVar3->y;
              pMVar5 = (MonitorData *)pVVar3->z;
              uVar6 = uVar4;
              pMVar7 = pMVar5;
              pQVar8 = MVWorldObject.dll::MV::WorldObject::MVWorldObject::
                       MVWorldObject_get_WorldRotation
                                 ((Quaternion *)&puStack_9,(MVWorldObject *)0x0,in_stack_10);
              puStack_9 = (undefined *)pQVar8->x;
              fVar11 = pQVar8->y;
              fVar12 = pQVar8->z;
              fVar13 = pQVar8->w;
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              position.z = (float)pMVar5;
              position.x = (float)(int)uVar6;
              position.y = (float)(int)((ulonglong)uVar6 >> 0x20);
              rotation.y = fVar11;
              rotation.x = (float)puStack_9;
              rotation.z = fVar12;
              rotation.w = fVar13;
              pOVar14 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_7
                                 ((Object *)original,position,rotation,
                                  TeleportAvatar_MethodInfo__UnityEngine__Object__Instantiate<TeleportAvatar>_TeleportAvatar__UnityEngine__Vector3__UnityEngine__Quaternion_
                                 );
              if (pOVar14 != (Object *)0x0) {
                pOVar14[5].klass = (Object__Class *)this_03;
                func_?();
                pOVar15 = (Object *)func_?();
                pOVar16 = pOVar15[1].klass;
                pOVar14[2] = *pOVar15;
                pOVar14[3].klass = pOVar16;
                *(undefined8 *)&pOVar14[3].monitor = uVar4;
                pOVar14[4].monitor = pMVar7;
                if (this_00[10].fields._items != (RegexCharClass_SingleRange__Array *)0x0) {
                  func_?();
                  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                            ((Object *)StringLiteral_actor_ignore_list_should_use_ids,
                             (MethodInfo *)0x0);
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
      this_00 = (Predicate_1_Int32Enum_ *)func_?(TypeInfo__System__Func<int,_bool>);
      if (this_00 != (Predicate_1_Int32Enum_ *)0x0) {
        mscorlib.dll::System::Predicate`1[Int32Enum]::Predicate_1_Int32Enum___ctor
                  (this_00,(Object *)this,MethodInfo__MVTeleporter__DoTeleport_int_,
                   (MethodInfo *)0x0);
        pUVar4 = (UseInteractor *)func_?(TypeInfo__UseInteractor);
        if (pUVar4 != (UseInteractor *)0x0) {
          UseInteractor::UseInteractor__ctor
                    (pUVar4,(MVWorldObjectClient *)this,pGVar2,0,triggerCollider,
                     (Func_2_Int32_Boolean_ *)this_00,
                     (Func_3_Int32_MVInteractableBase_Boolean_ *)0x0,2.5,0,(MethodInfo *)0x0);
          (this->fields).useInteractor = pUVar4;
          func_?(&(this->fields).useInteractor,pUVar4);
          pMVar1 = (this->fields).teleportObject;
          if (pMVar1 != (MVTeleporterObject *)0x0) {
            pGVar2 = (pMVar1->fields).useInteractionRotator;
            this_01 = (GameCoinLogic *)func_?(TypeInfo__GameCoinLogic);
            if (this_01 != (GameCoinLogic *)0x0) {
              GameCoinLogic::GameCoinLogic__ctor(this_01,pGVar2,0,(MethodInfo *)0x0);
              pMVar1 = (this->fields).teleportObject;
              if (pMVar1 != (MVTeleporterObject *)0x0) {
                pGVar2 = (pMVar1->fields).useInteractionRotator;
                this_02 = (GameRankRequirement *)func_?(TypeInfo__GameRankRequirement);
                if (this_02 != (GameRankRequirement *)0x0) {
                  GameRankRequirement::GameRankRequirement__ctor
                            (this_02,pGVar2,(MVWorldObjectClient *)this,0,(MethodInfo *)0x0);
                  (*(this_02->klass->vtable).OnDataUpdate.methodPtr)
                            (this_02,(this->fields)._._._.data,(this->fields)._._._.id,
                             (this_02->klass->vtable).OnDataUpdate.method);
                  pMVar1 = (this->fields).teleportObject;
                  if (pMVar1 != (MVTeleporterObject *)0x0) {
                    pGVar2 = (pMVar1->fields).useInteractionRotator;
                    this_03 = (LevelBasedUseRequirement *)
                              func_?(TypeInfo__LevelBasedUseRequirement);
                    if (this_03 != (LevelBasedUseRequirement *)0x0) {
                      LevelBasedUseRequirement::LevelBasedUseRequirement__ctor
                                (this_03,pGVar2,0,(MethodInfo *)0x0);
                      pMVar1 = (this->fields).teleportObject;
                      if (pMVar1 != (MVTeleporterObject *)0x0) {
                        pGVar2 = (pMVar1->fields).useInteractionRotator;
                        this_04 = (StarRequirement *)func_?(TypeInfo__StarRequirement);
                        if (this_04 != (StarRequirement *)0x0) {
                          StarRequirement::StarRequirement__ctor(this_04,pGVar2,0,(MethodInfo *)0x0)
                          ;
                          pMVar1 = (this->fields).teleportObject;
                          if (pMVar1 != (MVTeleporterObject *)0x0) {
                            tintObject = (pMVar1->fields).tintObject;
                            this_05 = (TeamRequirement *)func_?(TypeInfo__TeamRequirement);
                            if (this_05 != (TeamRequirement *)0x0) {
                              TeamRequirement::TeamRequirement__ctor
                                        (this_05,(TintObject *)tintObject,0,(MethodInfo *)0x0);
                              pMVar1 = (this->fields).teleportObject;
                              if (pMVar1 != (MVTeleporterObject *)0x0) {
                                pGVar2 = (pMVar1->fields).useInteractionRotator;
                                this_06 = (RewardedAdRequirement *)
                                          func_?(
                                                  TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement
                                                  );
                                if (this_06 != (RewardedAdRequirement *)0x0) {
                                  WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement::
                                  RewardedAdRequirement__ctor(this_06,pGVar2,(MethodInfo *)0x0);
                                  pUVar4 = (this->fields).useInteractor;
                                  if (pUVar4 != (UseInteractor *)0x0) {
                                    UseInteractor::UseInteractor_AddRequirement
                                              (pUVar4,(UseRequirement *)this_03,(MethodInfo *)0x0);
                                    pUVar4 = (this->fields).useInteractor;
                                    if (pUVar4 != (UseInteractor *)0x0) {
                                      UseInteractor::UseInteractor_AddRequirement
                                                (pUVar4,(UseRequirement *)this_01,(MethodInfo *)0x0)
                                      ;
                                      pUVar4 = (this->fields).useInteractor;
                                      if (pUVar4 != (UseInteractor *)0x0) {
                                        UseInteractor::UseInteractor_AddRequirement
                                                  (pUVar4,(UseRequirement *)this_04,
                                                   (MethodInfo *)0x0);
                                        pUVar4 = (this->fields).useInteractor;
                                        if (pUVar4 != (UseInteractor *)0x0) {
                                          UseInteractor::UseInteractor_AddRequirement
                                                    (pUVar4,(UseRequirement *)this_05,
                                                     (MethodInfo *)0x0);
                                          pUVar4 = (this->fields).useInteractor;
                                          if (pUVar4 != (UseInteractor *)0x0) {
                                            UseInteractor::UseInteractor_AddRequirement
                                                      (pUVar4,(UseRequirement *)this_02,
                                                       (MethodInfo *)0x0);
                                            pUVar4 = (this->fields).useInteractor;
                                            if (pUVar4 != (UseInteractor *)0x0) {
                                              UseInteractor::UseInteractor_AddRequirement
                                                        (pUVar4,(UseRequirement *)this_06,
                                                         (MethodInfo *)0x0);
                                              pMVar1 = (this->fields).teleportObject;
                                              if (pMVar1 != (MVTeleporterObject *)0x0) {
                                                pTVar3 = (pMVar1->fields).triggerBoxEvents;
                                                pUVar4 = (this->fields).useInteractor;
                                                pUVar5 = (UnityAction_2_System_Object_System_Object_
                                                          *)func_?(
                                                  TypeInfo__System__EventHandler<TriggerEventArgs>);
                                                if (pUVar5 != (
                                                  UnityAction_2_System_Object_System_Object_ *)0x0)
                                                {
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`2[System::Object,System::Object]::
                                                  UnityAction_2_System_Object_System_Object___ctor
                                                            (pUVar5,(Object *)pUVar4,
                                                                                                                          
                                                  MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                                                  ,(MethodInfo *)0x0);
                                                  if (pTVar3 != (TriggerBoxEvents *)0x0) {
                                                    TriggerBoxEvents::
                                                    TriggerBoxEvents_add_TriggerEnter
                                                              (pTVar3,(
                                                  EventHandler_1_TriggerEventArgs_ *)pUVar5,
                                                  (MethodInfo *)0x0);
                                                  pMVar1 = (this->fields).teleportObject;
                                                  if (pMVar1 != (MVTeleporterObject *)0x0) {
                                                    pTVar3 = (pMVar1->fields).triggerBoxEvents;
                                                    pUVar4 = (this->fields).useInteractor;
                                                    pUVar5 = (
                                                  UnityAction_2_System_Object_System_Object_ *)
                                                  func_?(
                                                  TypeInfo__System__EventHandler<TriggerEventArgs>);
                                                  if (pUVar5 != (
                                                  UnityAction_2_System_Object_System_Object_ *)0x0)
                                                  {
                                                    UnityEngine.CoreModule.dll::UnityEngine::Events
                                                    ::UnityAction`2[System::Object,System::Object]::
                                                    UnityAction_2_System_Object_System_Object___ctor
                                                              (pUVar5,(Object *)pUVar4,
                                                                                                                              
                                                  MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                                                  ,(MethodInfo *)0x0);
                                                  if (pTVar3 != (TriggerBoxEvents *)0x0) {
                                                    TriggerBoxEvents::
                                                    TriggerBoxEvents_add_TriggerExit
                                                              (pTVar3,(
                                                  EventHandler_1_TriggerEventArgs_ *)pUVar5,
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
    if (((TypeInfo__MVTeleporter->_1).typeHierarchyDepth <= (wo->klass->_1).typeHierarchyDepth) &&
       ((MVTeleporter__Class *)
        (wo->klass->_1).typeHierarchy[(TypeInfo__MVTeleporter->_1).typeHierarchyDepth - 1] ==
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
  if (this_00 != (List_1_System_Int32_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
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
        if (((((ObjectPrefab__Class *)pMVar2->klass)->_1).typeHierarchyDepth <
             (TypeInfo__MVTeleporterObject->_1).typeHierarchyDepth) ||
           ((((ObjectPrefab__Class *)pMVar2->klass)->_1).typeHierarchy
            [(TypeInfo__MVTeleporterObject->_1).typeHierarchyDepth - 1] !=
            (Il2CppClass *)TypeInfo__MVTeleporterObject)) goto code_?;
        (this->fields).teleportObject = pMVar2;
        if (((((ObjectPrefab__Class *)pMVar2->klass)->_1).typeHierarchyDepth <
             (TypeInfo__MVTeleporterObject->_1).typeHierarchyDepth) ||
           ((((ObjectPrefab__Class *)pMVar2->klass)->_1).typeHierarchy
            [(TypeInfo__MVTeleporterObject->_1).typeHierarchyDepth - 1] !=
            (Il2CppClass *)TypeInfo__MVTeleporterObject)) goto code_?;
      }
      func_?(&(this->fields).teleportObject);
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
          if (pUVar5 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
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
                if (pUVar5 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                  Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
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
                    *(uint *)&(this->fields)._._.interactionFlags =
                         (uint)iVar6 & 0xffffdfff | 0x12700000;
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
  func_?();
  pMVar2 = extraout_EDX;
code_?:
  func_?(pMVar2);
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


/* Void set_Target(MVTeleporter) */

void Assembly-CSharp.dll::MVTeleporter::MVTeleporter_set_Target
               (MVTeleporter *this,MVTeleporter *value,MethodInfo *method)

{
  (this->fields).target = value;
  func_?(&(this->fields).target,value);
  return;
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
           (((TypeInfo__MVAvatarLocal->_1).typeHierarchyDepth <=
             (pMVar5->klass->_1).typeHierarchyDepth &&
            ((MVAvatarLocal__Class *)
             (pMVar5->klass->_1).typeHierarchy[(TypeInfo__MVAvatarLocal->_1).typeHierarchyDepth - 1]
             == TypeInfo__MVAvatarLocal)))) {
          this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                    (this->fields).avatarIgnoreList;
          if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
          goto code_?;
          mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
          RegexCharClass+SingleRange]::
          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Remove
                    (this_00,(RegexCharClass_SingleRange)(pMVar5->fields).id,
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
      if (((TypeInfo__MVAvatarLocal->_1).typeHierarchyDepth <=
           (pMVar1->klass->_1).typeHierarchyDepth) &&
         ((MVAvatarLocal__Class *)
          (pMVar1->klass->_1).typeHierarchy[(TypeInfo__MVAvatarLocal->_1).typeHierarchyDepth - 1] ==
          TypeInfo__MVAvatarLocal)) {
        this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  (this->fields).avatarIgnoreList;
        if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
        goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
        RegexCharClass+SingleRange]::
        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Remove
                  (this_00,(RegexCharClass_SingleRange)(pMVar1->fields).id,
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


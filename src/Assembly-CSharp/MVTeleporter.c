
/* Boolean Delete(MVWorldObjectClientManager, String ByRef) */

bool Assembly-CSharp.dll::MVTeleporter::MVTeleporter_Delete
               (MVTeleporter *this,MVWorldObjectClientManager *worldObjectClientManager,
               String **errorText,MethodInfo *method)

{
  pMVar1 = worldObjectClientManager;
  key = (this->fields)._._._.groupId;
  if (worldObjectClientManager != (MVWorldObjectClientManager *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)(pMVar1->fields).worldObjects;
    this = (MVTeleporter *)0x0;
    if (this_00 !=
        (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
        0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
      Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
      Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__TryGetValue
                (this_00,key,(TerrainUtility_TerrainMap **)&this,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                );
      if (this == (MVTeleporter *)0x0) {
        return 0;
      }
      bVar2 = (*(code *)(this->klass->vtable).Delete.method)(this,pMVar1,errorText);
      return bVar2;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVTeleporter::MVTeleporter_Destroy(MVTeleporter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).isDestroyed == 0) {
    pUVar1 = (this->fields).useInteractor;
    if (pUVar1 != (UseInteractor *)0x0) {
      pMVar2 = (this->fields).teleportObject;
      if (pMVar2 == (MVTeleporterObject *)0x0) {
code_?:
        func_?(0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar4 = (pMVar2->fields).triggerBoxEvents;
      pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar5,(Object *)pUVar1,
                 MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 ,
                 MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                );
      if (pTVar4 == (TriggerBoxEvents *)0x0) goto code_?;
      TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
                (pTVar4,(EventHandler_1_TriggerEventArgs_ *)pUVar5,(MethodInfo *)0x0);
      pMVar2 = (this->fields).teleportObject;
      if (pMVar2 == (MVTeleporterObject *)0x0) goto code_?;
      pTVar4 = (pMVar2->fields).triggerBoxEvents;
      pUVar1 = (this->fields).useInteractor;
      pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar5,(Object *)pUVar1,
                 MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                 ,
                 MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                );
      if (pTVar4 == (TriggerBoxEvents *)0x0) goto code_?;
      TriggerBoxEvents::TriggerBoxEvents_remove_TriggerExit
                (pTVar4,(EventHandler_1_TriggerEventArgs_ *)pUVar5,(MethodInfo *)0x0);
      pUVar1 = (this->fields).useInteractor;
      data = (Dictionary_2_System_Object_System_Object_ *)
             PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
      if (pUVar1 == (UseInteractor *)0x0) goto code_?;
      UseInteractor::UseInteractor_OnDestroy(pUVar1,data,(MethodInfo *)0x0);
      (this->fields).useInteractor = (UseInteractor *)0x0;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_DoTeleport,(MethodInfo *)0x0);
  pMVar1 = this;
  pMVar2 = (this->fields).target;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)(pMVar3->fields).worldObjects;
    this = (MVTeleporter *)0x0;
    if (this_00 !=
        (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
        0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
      Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
      Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__TryGetValue
                (this_00,instigatorWOID,(TerrainUtility_TerrainMap **)&this,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                );
      unaff_EDI = this;
      if (this == (MVTeleporter *)0x0) {
        return 0;
      }
      bVar4 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
      if (((this->klass->_1).naturalAligment < bVar4) ||
         ((MVAvatarLocal__Class *)(this->klass->_1).typeHierarchy[bVar4 - 1] !=
          TypeInfo__MVAvatarLocal)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      pMVar6 = (MVTeleporter *)0x0;
      if (bVar5) {
        pMVar6 = this;
      }
      if (pMVar6 == (MVTeleporter *)0x0) {
        return 0;
      }
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_DoTeleport2,(MethodInfo *)0x0);
      bVar4 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
      if (((unaff_EDI->klass->_1).naturalAligment < bVar4) ||
         ((MVAvatarLocal__Class *)(unaff_EDI->klass->_1).typeHierarchy[bVar4 - 1] !=
          TypeInfo__MVAvatarLocal)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      this_03 = (MVAvatarLocal *)0x0;
      if (bVar5) {
        this_03 = (MVAvatarLocal *)unaff_EDI;
      }
      pMVar7 = TypeInfo__MVAvatarLocal;
      if (this_03 == (MVAvatarLocal *)0x0) goto code_?;
      bVar8 = MVAvatarLocal::MVAvatarLocal_get_IsEnteringVehicle(this_03,(MethodInfo *)0x0);
      if (bVar8 != 0) {
        return 0;
      }
      bVar8 = MVAvatar::MVAvatar_get_IsSeated((MVAvatar *)this_03,(MethodInfo *)0x0);
      if (bVar8 != 0) {
        MVAvatarLocal::MVAvatarLocal_LeaveVehicle(this_03,0,(MethodInfo *)0x0);
      }
      bVar8 = MVAvatarLocal::MVAvatarLocal_IsSpawnRoleActive(this_03,(MethodInfo *)0x0);
      if (bVar8 == 0) {
        return 0;
      }
      this_01 = (List_1_UnityEngine_Color32_ *)(pMVar1->fields).avatarIgnoreList;
      pIVar9 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                Collection_1_VoxelHit__get_Items
                          ((Collection_1_VoxelHit_ *)this_03,(MethodInfo *)0x0);
      unaff_EDI = (MVTeleporter *)0x0;
      if (this_01 != (List_1_UnityEngine_Color32_ *)0x0) {
        item._4_4_ = MethodInfo__System__Collections__Generic__List<int>__Contains_int_;
        item.rgba = (int32_t)pIVar9;
        bVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                 List_1_UnityEngine_Color32__Contains(this_01,item,in_stack_10);
        if (bVar8 != 0) {
          return 1;
        }
        pTVar11 = (pMVar1->fields)._._.transform;
        unaff_EDI = (MVTeleporter *)(pMVar1->fields).teleportAvatarPrefab;
        if (pTVar11 != (Transform *)0x0) {
          pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffffe4,pTVar11,(MethodInfo *)0x0);
          uVar13 = pVVar12->x;
          uVar14 = pVVar12->y;
          position.y = (float)uVar14;
          position.x = (float)uVar13;
          instigatorWOID = (int32_t)pVVar12->z;
          if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0
              ) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Quaternion);
          }
          pQVar15 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                              ((Quaternion *)&puStack_16,(MethodInfo *)0x0);
          puStack_16 = (undefined *)pQVar15->x;
          fVar17 = pQVar15->y;
          fVar18 = pQVar15->z;
          fVar19 = pQVar15->w;
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          position.z = (float)instigatorWOID;
          rotation.y = fVar17;
          rotation.x = (float)puStack_16;
          rotation.z = fVar18;
          rotation.w = fVar19;
          unaff_EDI = (MVTeleporter *)
                      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_161
                                ((SentryGunBeam *)unaff_EDI,position,rotation,
                                 TeleportAvatar_MethodInfo__UnityEngine__Object__Instantiate<TeleportAvatar>_TeleportAvatar__UnityEngine__Vector3__UnityEngine__Quaternion_
                                );
          if (unaff_EDI != (MVTeleporter *)0x0) {
            (unaff_EDI->fields)._._._.previewOwnerProfileId = (int32_t)this_03;
            pMVar6 = (pMVar1->fields).target;
            if (pMVar6 != (MVTeleporter *)0x0) {
              puVar20 = (undefined8 *)func_?(&stack0xffffffe4,0x19,pMVar6);
              uVar21 = *puVar20;
              pLVar22 = *(List_1_MV_WorldObject_Link_ **)(puVar20 + 1);
              pMVar23 = &unaff_EDI->fields;
              (pMVar23->_)._._.itemId = (int)uVar21;
              (pMVar23->_)._._.inputState = (char)((ulonglong)uVar21 >> 0x20);
              *(int3 *)&(pMVar23->_)._._.field_0xd = (int3)((ulonglong)uVar21 >> 0x28);
              (unaff_EDI->fields)._._._.outputLinkRefs = pLVar22;
              pTVar11 = (pMVar1->fields)._._.transform;
              if (pTVar11 != (Transform *)0x0) {
                pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    ((Vector3 *)&stack0xffffffe4,pTVar11,(MethodInfo *)0x0);
                fVar18 = pVVar12->y;
                fVar17 = pVVar12->z;
                (unaff_EDI->fields)._._._.inputLinkRefs = (List_1_MV_WorldObject_Link_ *)pVVar12->x;
                (unaff_EDI->fields)._._._.objectLinkRefs =
                     (List_1_MV_WorldObject_ObjectLink_ *)fVar18;
                (unaff_EDI->fields)._._._.ownerActorNr = (int32_t)fVar17;
                if (pMVar2 != (MVTeleporter *)0x0) {
                  this_02 = (List_1_UIPushOption_ *)(pMVar2->fields).avatarIgnoreList;
                  pIVar9 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                            Collection_1_VoxelHit__get_Items
                                      ((Collection_1_VoxelHit_ *)this_03,(MethodInfo *)0x0);
                  unaff_EDI = (MVTeleporter *)0x0;
                  if (this_02 != (List_1_UIPushOption_ *)0x0) {
                    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
                    List_1_UIPushOption__Add
                              (this_02,(UIPushOption__Enum)pIVar9,
                               MethodInfo__System__Collections__Generic__List<int>__Add_int_);
                    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000)
                         != 0) && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
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
          }
        }
      }
    }
  }
  func_?(0);
  pMVar7 = extraout_EDX;
code_?:
  func_?(unaff_EDI,pMVar7);
  pcVar24 = (code *)swi(3);
  bVar8 = (*pcVar24)();
  return bVar8;
}


/* Vector3 GetClosestGridPoint(Single, Vector3) */

Vector3 * Assembly-CSharp.dll::MVTeleporter::MVTeleporter_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,MVTeleporter *this,float gridSize,
                    Vector3 position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar1 = MVLogicObject::MVLogicObject_GetClosestGridPoint
                     ((Vector3 *)auStack_2,(MVLogicObject *)this,gridSize,position,
                      (MethodInfo *)0x0);
  uVar3 = pVVar1->x;
  fVar4 = pVVar1->z;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    pMStack_5 = TypeInfo__UnityEngine__Mathf;
    auStack_2._4_4_ = &UNK_?;
    func_?();
  }
  pMStack_5 = (Mathf__Class *)&dStack_6;
  fVar7 = position.y / gridSize;
  auStack_2 = (undefined1  [8])(double)fVar7;
  fVar8 = (float10)func_?();
  dVar9 = (double)fVar8;
  auStack_2._4_4_ = SUB84(dVar9,0);
  if (fVar7 < _UNK_?) {
    if (dVar9 == _UNK_?) {
      uVar10 = func_?();
      fVar7 = (float)dStack_6;
      if ((uVar10 & 1) != 0) {
        fVar7 = fVar7 - _UNK_?;
      }
      goto code_?;
    }
    register0x00001200 = (double)(fVar7 - _UNK_?);
    auStack_2._0_4_ = &UNK_?;
    fVar8 = (float10)func_?();
  }
  else {
    if (dVar9 == _UNK_?) {
      uVar10 = func_?();
      fVar7 = (float)dStack_6;
      if ((uVar10 & 1) != 0) {
        fVar7 = fVar7 + _UNK_?;
      }
      goto code_?;
    }
    register0x00001200 = (double)(fVar7 + _UNK_?);
    auStack_2._0_4_ = &UNK_?;
    fVar8 = (float10)func_?();
  }
  fVar7 = (float)fVar8;
code_?:
  __return_storage_ptr__->x = (float)uVar3;
  __return_storage_ptr__->y = fVar7 * gridSize;
  __return_storage_ptr__->z = fVar4;
  return __return_storage_ptr__;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVTeleporter::MVTeleporter_Initialize
               (MVTeleporter *this,MethodInfo *method)

{
  MVTeleporter_SetupUseInteractor(this,(MethodInfo *)0x0);
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  this_00 = (this->fields).useInteractor;
  data = (Dictionary_2_System_Object_System_Object_ *)
         PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (this_00 != (UseInteractor *)0x0) {
    UseInteractor::UseInteractor_UpdateData(this_00,data,(MethodInfo *)0x0);
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
  MVLogicObject::MVLogicObject_InitializeInventory((MVLogicObject *)this,(MethodInfo *)0x0);
  pMVar1 = (this->fields).teleportObject;
  if ((pMVar1 != (MVTeleporterObject *)0x0) &&
     (this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)(pMVar1->fields).objParticleSystem,
     this_00 !=
     (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)0x0
     )) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Experimental
    ::TerrainAPI::TerrainUtility+TerrainMap]::
    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
              (this_00,(MethodInfo *)0x0);
    func_?();
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVTeleporter::MVTeleporter_OnDataUpdate
               (MVTeleporter *this,MethodInfo *method)

{
  this_00 = (this->fields).useInteractor;
  data = (Dictionary_2_System_Object_System_Object_ *)
         PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (this_00 != (UseInteractor *)0x0) {
    UseInteractor::UseInteractor_UpdateData(this_00,data,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).teleportObject;
  if (pMVar1 != (MVTeleporterObject *)0x0) {
    pGVar2 = (pMVar1->fields).useInteractionRotator;
    pTVar3 = (pMVar1->fields).triggerBoxEvents;
    if (pTVar3 != (TriggerBoxEvents *)0x0) {
      triggerCollider = TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar3,(MethodInfo *)0x0);
      pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__Func<int,_bool>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar4,(Object *)this,MethodInfo__MVTeleporter__DoTeleport_int_,
                 MethodInfo__System__Func<int,_bool>__Func_System__Object__void__);
      pUVar5 = (UseInteractor *)func_?(TypeInfo__UseInteractor);
      UseInteractor::UseInteractor__ctor
                (pUVar5,(MVWorldObjectClient *)this,pGVar2,0,triggerCollider,
                 (Func_2_Int32_Boolean_ *)pUVar4,(Func_3_Int32_MVInteractableBase_Boolean_ *)0x0,2.5
                 ,(MethodInfo *)0x0);
      (this->fields).useInteractor = pUVar5;
      pMVar1 = (this->fields).teleportObject;
      if (pMVar1 != (MVTeleporterObject *)0x0) {
        pGVar2 = (pMVar1->fields).useInteractionRotator;
        this_00 = (GameCoinLogic *)func_?(TypeInfo__GameCoinLogic);
        GameCoinLogic::GameCoinLogic__ctor(this_00,pGVar2,0,(MethodInfo *)0x0);
        pMVar1 = (this->fields).teleportObject;
        if (pMVar1 != (MVTeleporterObject *)0x0) {
          pGVar2 = (pMVar1->fields).useInteractionRotator;
          this_01 = (GameRankRequirement *)func_?(TypeInfo__GameRankRequirement);
          GameRankRequirement::GameRankRequirement__ctor
                    (this_01,pGVar2,(MVWorldObjectClient *)this,0,(MethodInfo *)0x0);
          pOVar6 = PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
          if (this_01 != (GameRankRequirement *)0x0) {
            (*(code *)(this_01->klass->vtable).OnDataUpdate.method)
                      (this_01,pOVar6,(this->fields)._._._.id,
                       (this_01->klass->vtable).GetShowOption.methodPtr);
            pMVar1 = (this->fields).teleportObject;
            if (pMVar1 != (MVTeleporterObject *)0x0) {
              pGVar2 = (pMVar1->fields).useInteractionRotator;
              this_02 = (LevelBasedUseRequirement *)
                        func_?(TypeInfo__LevelBasedUseRequirement);
              LevelBasedUseRequirement::LevelBasedUseRequirement__ctor
                        (this_02,pGVar2,0,(MethodInfo *)0x0);
              pMVar1 = (this->fields).teleportObject;
              if (pMVar1 != (MVTeleporterObject *)0x0) {
                pGVar2 = (pMVar1->fields).useInteractionRotator;
                this_03 = (StarRequirement *)func_?(TypeInfo__StarRequirement);
                StarRequirement::StarRequirement__ctor(this_03,pGVar2,0,(MethodInfo *)0x0);
                pMVar1 = (this->fields).teleportObject;
                if (pMVar1 != (MVTeleporterObject *)0x0) {
                  tintObject = (pMVar1->fields).tintObject;
                  this_04 = (TeamRequirement *)func_?(TypeInfo__TeamRequirement);
                  TeamRequirement::TeamRequirement__ctor
                            (this_04,(TintObject *)tintObject,0,(MethodInfo *)0x0);
                  pUVar5 = (this->fields).useInteractor;
                  if (pUVar5 != (UseInteractor *)0x0) {
                    UseInteractor::UseInteractor_AddRequirement
                              (pUVar5,(UseRequirement *)this_02,(MethodInfo *)0x0);
                    pUVar5 = (this->fields).useInteractor;
                    if (pUVar5 != (UseInteractor *)0x0) {
                      UseInteractor::UseInteractor_AddRequirement
                                (pUVar5,(UseRequirement *)this_00,(MethodInfo *)0x0);
                      pUVar5 = (this->fields).useInteractor;
                      if (pUVar5 != (UseInteractor *)0x0) {
                        UseInteractor::UseInteractor_AddRequirement
                                  (pUVar5,(UseRequirement *)this_03,(MethodInfo *)0x0);
                        pUVar5 = (this->fields).useInteractor;
                        if (pUVar5 != (UseInteractor *)0x0) {
                          UseInteractor::UseInteractor_AddRequirement
                                    (pUVar5,(UseRequirement *)this_04,(MethodInfo *)0x0);
                          pUVar5 = (this->fields).useInteractor;
                          if (pUVar5 != (UseInteractor *)0x0) {
                            UseInteractor::UseInteractor_AddRequirement
                                      (pUVar5,(UseRequirement *)this_01,(MethodInfo *)0x0);
                            pMVar1 = (this->fields).teleportObject;
                            if (pMVar1 != (MVTeleporterObject *)0x0) {
                              pTVar3 = (pMVar1->fields).triggerBoxEvents;
                              pUVar5 = (this->fields).useInteractor;
                              pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                        *)func_?(
                                                  TypeInfo__System__EventHandler<TriggerEventArgs>);
                              UnityEngine.CoreModule.dll::UnityEngine::Events::
                              UnityAction`2[UnityEngine::SceneManagement::Scene,UnityEngine::
                              SceneManagement::Scene]::
                              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                        (pUVar4,(Object *)pUVar5,
                                         MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                                         ,
                                         MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                                        );
                              if (pTVar3 != (TriggerBoxEvents *)0x0) {
                                TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                                          (pTVar3,(EventHandler_1_TriggerEventArgs_ *)pUVar4,
                                           (MethodInfo *)0x0);
                                pMVar1 = (this->fields).teleportObject;
                                if (pMVar1 != (MVTeleporterObject *)0x0) {
                                  pTVar3 = (pMVar1->fields).triggerBoxEvents;
                                  pUVar5 = (this->fields).useInteractor;
                                  pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                            *)func_?(
                                                  TypeInfo__System__EventHandler<TriggerEventArgs>);
                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                  UnityAction`2[UnityEngine::SceneManagement::Scene,UnityEngine::
                                  SceneManagement::Scene]::
                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                            (pUVar4,(Object *)pUVar5,
                                             MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                                             ,
                                             MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                                            );
                                  if (pTVar3 != (TriggerBoxEvents *)0x0) {
                                    TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                                              (pTVar3,(EventHandler_1_TriggerEventArgs_ *)pUVar4,
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
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Boolean ValidateObjectLinkTarget(MVWorldObjectClient) */

bool Assembly-CSharp.dll::MVTeleporter::MVTeleporter_ValidateObjectLinkTarget
               (MVTeleporter *this,MVWorldObjectClient *wo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<int>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<int>__List__);
  (this->fields).avatarIgnoreList = (List_1_System_Int32_ *)this_00;
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  pPVar1 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (pPVar1 != (PrefabPool *)0x0) {
    prefabObject = MVSentryGun::MVSentryGun_get_RaycastIgnoreWorldObjectIds
                             ((MVSentryGun *)pPVar1,(MethodInfo *)0x0);
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(ObjectPrefab *)prefabObject,worldObjects,
               (MethodInfo *)0x0);
    pMVar2 = (MVTeleporterObject *)(this->fields)._._.component;
    if (pMVar2 == (MVTeleporterObject *)0x0) {
      pMVar3 = (MVTeleporterObject *)0x0;
    }
    else {
      bVar4 = (TypeInfo__MVTeleporterObject->_1).naturalAligment;
      if (((((ObjectPrefab__Class *)pMVar2->klass)->_1).naturalAligment < bVar4) ||
         ((((ObjectPrefab__Class *)pMVar2->klass)->_1).typeHierarchy[bVar4 - 1] !=
          (Il2CppClass *)TypeInfo__MVTeleporterObject)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      pMVar3 = (MVTeleporterObject *)0x0;
      if (bVar5) {
        pMVar3 = pMVar2;
      }
      if (pMVar3 == (MVTeleporterObject *)0x0) goto code_?;
    }
    (this->fields).teleportObject = pMVar3;
    pPVar1 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
    if (pPVar1 != (PrefabPool *)0x0) {
      pTVar6 = (TeleportAvatar *)
               WindTurbine::WindTurbine_get_InputSignalReceiver
                         ((WindTurbine *)pPVar1,(MethodInfo *)0x0);
      (this->fields).teleportAvatarPrefab = pTVar6;
      pMVar2 = (this->fields).teleportObject;
      if (pMVar2 != (MVTeleporterObject *)0x0) {
        pTVar7 = (pMVar2->fields).triggerBoxEvents;
        pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar8,(Object *)this,
                   MethodInfo__MVTeleporter__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   ,
                   MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                  );
        if (pTVar7 != (TriggerBoxEvents *)0x0) {
          TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                    (pTVar7,(EventHandler_1_TriggerEventArgs_ *)pUVar8,(MethodInfo *)0x0);
          pMVar2 = (this->fields).teleportObject;
          if (pMVar2 != (MVTeleporterObject *)0x0) {
            pTVar7 = (pMVar2->fields).triggerBoxEvents;
            pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar8,(Object *)this,
                       MethodInfo__MVTeleporter__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                       ,
                       MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                      );
            if (pTVar7 != (TriggerBoxEvents *)0x0) {
              TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                        (pTVar7,(EventHandler_1_TriggerEventArgs_ *)pUVar8,(MethodInfo *)0x0);
              iVar9 = (this->fields)._._.interactionFlags;
              *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) =
                   *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
              *(uint *)&(this->fields)._._.interactionFlags = (uint)iVar9 & 0xffffdfff | 0x12700000;
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
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Vector3 get_InputConnectorOffset() */

Vector3 * Assembly-CSharp.dll::MVTeleporter::MVTeleporter_get_InputConnectorOffset
                    (Vector3 *__return_storage_ptr__,MVTeleporter *this,MethodInfo *method)

{
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  func_?(__return_storage_ptr__,0xbfc00000,0,0,0);
  return __return_storage_ptr__;
}


/* Vector3 get_ObjectConnectorOffset() */

Vector3 * Assembly-CSharp.dll::MVTeleporter::MVTeleporter_get_ObjectConnectorOffset
                    (Vector3 *__return_storage_ptr__,MVTeleporter *this,MethodInfo *method)

{
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  func_?(__return_storage_ptr__,0,0x3fc00000,0,0);
  return __return_storage_ptr__;
}


/* Quaternion get_ObjectConnectorRotation() */

Quaternion *
Assembly-CSharp.dll::MVTeleporter::MVTeleporter_get_ObjectConnectorRotation
          (Quaternion *__return_storage_ptr__,MVTeleporter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_down
                     (&VStack_2,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  fVar4 = pVVar1->z;
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?();
  }
  forward.z = fVar4;
  forward.x = (float)(undefined4)uStack_3;
  forward.y = (float)uStack_3._4_4_;
  pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                     ((Quaternion *)&stack0xffffffe4,forward,(MethodInfo *)0x0);
  fVar4 = pQVar5->y;
  fVar6 = pQVar5->z;
  fVar7 = pQVar5->w;
  __return_storage_ptr__->x = pQVar5->x;
  __return_storage_ptr__->y = fVar4;
  __return_storage_ptr__->z = fVar6;
  __return_storage_ptr__->w = fVar7;
  return __return_storage_ptr__;
}


/* Void set_Target(MVTeleporter) */

void Assembly-CSharp.dll::MVTeleporter::MVTeleporter_set_Target
               (MVTeleporter *this,MVTeleporter *value,MethodInfo *method)

{
  (this->fields).target = value;
  return;
}


/* Void triggerBoxEvents_TriggerEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::MVTeleporter::MVTeleporter_triggerBoxEvents_TriggerEnter
               (MVTeleporter *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
            System.Core.dll::System::Linq::
            Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
            JsonSchemaType]::
            Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                      ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                        *)this,(MethodInfo *)0x0);
  if (this_00 != (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       (this_00,
                        MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__get_Count__
                       );
    if (pOVar1 == (Object *)0x0) {
      bVar2 = 1;
    }
    else {
      bVar2 = ThemeAttributes::ThemeAttribute`1[System::Boolean]::
              ThemeAttribute_1_System_Boolean__get_Value
                        ((ThemeAttribute_1_System_Boolean_ *)this,(MethodInfo *)0x0);
    }
    pUVar3 = (this->fields).useInteractor;
    if (pUVar3 != (UseInteractor *)0x0) {
      UVar4 = UseInteractor::UseInteractor_EvaluateRequirementsUsability(pUVar3,(MethodInfo *)0x0);
      if ((UVar4 & UseGUIResult__Enum_CanAfford) != 0) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if ((e == (TriggerEventArgs *)0x0) || (this_01 == (MVWorldObjectClientManager *)0x0))
        goto code_?;
        this_02 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (this_01,(e->fields).instigatorWOID,(MethodInfo *)0x0);
        if (this_02 != (MVWorldObject *)0x0) {
          bVar5 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
          if (((this_02->klass->_1).naturalAligment < bVar5) ||
             ((MVAvatarLocal__Class *)(this_02->klass->_1).typeHierarchy[bVar5 - 1] !=
              TypeInfo__MVAvatarLocal)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          pMVar7 = (MVWorldObject *)0x0;
          if (bVar6) {
            pMVar7 = this_02;
          }
          if (pMVar7 != (MVWorldObject *)0x0) {
            this_03 = (List_1_UnityEngine_Color32_ *)(this->fields).avatarIgnoreList;
            pIVar8 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                     Collection_1_VoxelHit__get_Items
                               ((Collection_1_VoxelHit_ *)this_02,(MethodInfo *)0x0);
            if (this_03 == (List_1_UnityEngine_Color32_ *)0x0) goto code_?;
            item._4_4_ = MethodInfo__System__Collections__Generic__List<int>__Remove_int_;
            item.rgba = (int32_t)pIVar8;
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
            List_1_UnityEngine_Color32__Remove(this_03,item,in_stack_9);
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
  func_?(0);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void triggerBoxEvents_TriggerExit(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::MVTeleporter::MVTeleporter_triggerBoxEvents_TriggerExit
               (MVTeleporter *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (e != (TriggerEventArgs *)0x0) {
    key = (e->fields).instigatorWOID;
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)(pMVar1->fields).worldObjects;
      e = (TriggerEventArgs *)0x0;
      if (this_00 !=
          (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
           *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
        Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__TryGetValue
                  (this_00,key,(TerrainUtility_TerrainMap **)&e,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                  );
        this_02 = e;
        if (e != (TriggerEventArgs *)0x0) {
          bVar2 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
          if (((e->klass->_1).naturalAligment < bVar2) ||
             ((MVAvatarLocal__Class *)(e->klass->_1).typeHierarchy[bVar2 - 1] !=
              TypeInfo__MVAvatarLocal)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          pTVar4 = (TriggerEventArgs *)0x0;
          if (bVar3) {
            pTVar4 = e;
          }
          if (pTVar4 != (TriggerEventArgs *)0x0) {
            e = (TriggerEventArgs *)0x0;
            this_01 = (List_1_UnityEngine_Color32_ *)(this->fields).avatarIgnoreList;
            pMVar5 = (MethodInfo *)
                     mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                     Collection_1_VoxelHit__get_Items
                               ((Collection_1_VoxelHit_ *)this_02,(MethodInfo *)0x0);
            if (this_01 == (List_1_UnityEngine_Color32_ *)0x0) goto code_?;
            pMStack6 = MethodInfo__System__Collections__Generic__List<int>__Remove_int_;
            item._4_4_ = MethodInfo__System__Collections__Generic__List<int>__Remove_int_;
            item.rgba = (int32_t)pMVar5;
            e = (TriggerEventArgs *)this_01;
            method = pMVar5;
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
            List_1_UnityEngine_Color32__Remove(this_01,item,in_stack_7);
          }
        }
        return;
      }
    }
  }
code_?:
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


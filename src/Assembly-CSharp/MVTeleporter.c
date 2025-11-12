
/* Boolean Delete(MVWorldObjectClientManager, String ByRef) */

bool Assembly-CSharp.dll::MVTeleporter::MVTeleporter_Delete
               (MVTeleporter *this,MVWorldObjectClientManager *worldObjectClientManager,
               String **errorText,MethodInfo *method)

{
  if (worldObjectClientManager == (MVWorldObjectClientManager *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                     (worldObjectClientManager,(this->fields)._._._.groupId,(MethodInfo *)0x0);
  if (pMVar3 == (MVWorldObjectClient *)0x0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar2 = (*(pMVar3->klass->vtable).Delete.methodPtr)
                    (pMVar3,worldObjectClientManager,errorText,(pMVar3->klass->vtable).Delete.method
                    );
  return bVar2;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVTeleporter::MVTeleporter_Destroy(MVTeleporter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
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
  if ((this->fields).isDestroyed == 0) {
    if ((this->fields).useInteractor != (UseInteractor *)0x0) {
      pMVar1 = (this->fields).teleportObject;
      if (pMVar1 == (MVTeleporterObject *)0x0) {
DAT_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pTVar3 = (pMVar1->fields).triggerBoxEvents;
      pUVar4 = (this->fields).useInteractor;
      pUVar5 = (UnityAction_2_System_Object_System_Object_ *)
               FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (pUVar5,(Object *)pUVar4,
                 MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 ,(MethodInfo *)0x0);
      if (pTVar3 == (TriggerBoxEvents *)0x0) goto DAT_?;
      TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
                (pTVar3,(EventHandler_1_TriggerEventArgs_ *)pUVar5,(MethodInfo *)0x0);
      pMVar1 = (this->fields).teleportObject;
      if (pMVar1 == (MVTeleporterObject *)0x0) goto DAT_?;
      pTVar3 = (pMVar1->fields).triggerBoxEvents;
      pUVar4 = (this->fields).useInteractor;
      pUVar5 = (UnityAction_2_System_Object_System_Object_ *)
               FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (pUVar5,(Object *)pUVar4,
                 MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                 ,(MethodInfo *)0x0);
      if (pTVar3 == (TriggerBoxEvents *)0x0) goto DAT_?;
      TriggerBoxEvents::TriggerBoxEvents_remove_TriggerExit
                (pTVar3,(EventHandler_1_TriggerEventArgs_ *)pUVar5,(MethodInfo *)0x0);
      pUVar4 = (this->fields).useInteractor;
      if ((pUVar4 == (UseInteractor *)0x0) ||
         (this_00 = (pUVar4->fields).useInteractorVisuals,
         this_00 == (UseInteractorVisualization *)0x0)) goto DAT_?;
      UseInteractorVisualization::UseInteractorVisualization_DestroyRequirementObjects
                (this_00,(this->fields)._._._.data,(MethodInfo *)0x0);
      bVar6 = iRam_? != 0;
      (this->fields).useInteractor = (UseInteractor *)0x0;
      if (bVar6) {
        uVar7 = (uint)((ulonglong)&(this->fields).useInteractor >> 0xc);
        puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar9 = *puVar8;
          LOCK();
          uVar10 = *puVar8;
          if (uVar9 == uVar10) {
            *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (uVar9 != uVar10);
      }
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
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarLocal);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TeleportAvatar_MethodInfo__UnityEngine__Object__Instantiate<TeleportAvatar>_TeleportAvatar__UnityEngine__Vector3__UnityEngine__Quaternion_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).target;
  if (pMVar1 != (MVTeleporter *)0x0) {
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_02 == (MVWorldObjectClientManager *)0x0) goto code_?;
    this_03 = (MVAvatarLocal *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                        (this_02,instigatorWOID,(MethodInfo *)0x0);
    if (this_03 != (MVAvatarLocal *)0x0) {
      pMVar2 = this_03->klass;
      bVar3 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
      if ((bVar3 <= (pMVar2->_1).naturalAligment) &&
         ((MVAvatarLocal__Class *)(pMVar2->_1).typeHierarchy[(ulonglong)bVar3 - 1] ==
          TypeInfo__MVAvatarLocal)) {
        bVar3 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
        if (((pMVar2->_1).naturalAligment < bVar3) ||
           ((MVAvatarLocal__Class *)(pMVar2->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
            TypeInfo__MVAvatarLocal)) {
          FUN_?(this_03);
          pcVar4 = (code *)swi(3);
          bVar5 = (*pcVar4)();
          return bVar5;
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar6 == (MVGameControllerBase *)0x0) ||
            (pMVar7 = (pMVar6->fields).game, pMVar7 == (MVNetworkGame *)0x0)) ||
           (this_00 = (pMVar7->fields)._PlayerController_k__BackingField,
           this_00 == (MVLocalObjectController *)0x0)) {
code_?:
          FUN_?();
          pcVar4 = (code *)swi(3);
          bVar5 = (*pcVar4)();
          return bVar5;
        }
        bVar5 = MVLocalObjectController::MVLocalObjectController_get_IsEnteringVehicle
                           (this_00,(MethodInfo *)0x0);
        if (bVar5 == 0) {
          bVar5 = MVAvatar::MVAvatar_get_IsSeated((MVAvatar *)this_03,(MethodInfo *)0x0);
          if (bVar5 != 0) {
            MVAvatarLocal::MVAvatarLocal_LeaveVehicle(this_03,0,(MethodInfo *)0x0);
          }
          if (((this_03->fields).spawnRoleDataReceiver != (SpawnRoleDataReceiver *)0x0) &&
             ((((this_03->fields).spawnRoleDataReceiver)->fields).isActive != 0)) {
            pLVar8 = (this->fields).avatarIgnoreList;
            if (pLVar8 != (List_1_System_Int32_ *)0x0) {
              cVar9 = FUN_?(pLVar8,(this_03->fields)._._._._.id);
              if (cVar9 != '\0') {
                return 1;
              }
              this_01 = (this->fields)._._.transform;
              if (this_01 != (Transform *)0x0) {
                pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    (&VStack_11,this_01,(MethodInfo *)0x0);
                original = (this->fields).teleportAvatarPrefab;
                uVar12._0_4_ = pVVar10->x;
                uVar12._4_4_ = pVVar10->y;
                fVar13 = pVVar10->z;
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Quaternion);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pQVar14 = TypeInfo__UnityEngine__Quaternion->static_fields;
                uVar15._0_4_ = (pQVar14->identityQuaternion).x;
                uVar15._4_4_ = (pQVar14->identityQuaternion).y;
                uVar16._0_4_ = (pQVar14->identityQuaternion).z;
                uVar16._4_4_ = (pQVar14->identityQuaternion).w;
                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                  FUN_?();
                }
                pMVar17 = 
                TeleportAvatar_MethodInfo__UnityEngine__Object__Instantiate<TeleportAvatar>_TeleportAvatar__UnityEngine__Vector3__UnityEngine__Quaternion_
                ;
                if ((
                    TeleportAvatar_MethodInfo__UnityEngine__Object__Instantiate<TeleportAvatar>_TeleportAvatar__UnityEngine__Vector3__UnityEngine__Quaternion_
                    ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                  FUN_?(&TypeInfo__UnityEngine__Object);
                  LOCK();
                  UNLOCK();
                  if ((pMVar17->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                    FUN_?(pMVar17);
                  }
                }
                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                  FUN_?();
                }
                VStack_11._0_8_ = uVar12;
                VStack_11.z = fVar13;
                aQStack_18[0]._0_8_ = uVar15;
                aQStack_18[0]._8_8_ = uVar16;
                pOVar19 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate
                                    ((Object_1 *)original,&VStack_11,aQStack_18,(MethodInfo *)0x0);
                pvVar20 = ((pMVar17->field7_0x38).rgctx_data)->rgctxDataDummy;
                if ((*(byte *)((longlong)pvVar20 + 0x135) & 1) == 0) {
                  pvVar20 = (void *)FUN_?(pvVar20);
                }
                if (pOVar19 != (Object_1 *)0x0) {
                  lVar21 = FUN_?(pOVar19,pvVar20);
                  if (lVar21 == 0) {
                    FUN_?(pOVar19,pvVar20);
                    pcVar4 = (code *)swi(3);
                    bVar5 = (*pcVar4)();
                    return bVar5;
                  }
                  *(int32_t *)(lVar21 + 0x48) = (this->fields)._._._.id;
                  *(int32_t *)(lVar21 + 0x4c) = (pMVar1->fields)._._._.id;
                  *(MVAvatarLocal **)(lVar21 + 0x40) = this_03;
                  func_?(lVar21 + 0x40);
                  puVar22 = (undefined8 *)
                            (*(pMVar1->klass->vtable).get_WorldPosition_1.methodPtr)
                                      (&VStack_11,pMVar1,
                                       (pMVar1->klass->vtable).get_WorldPosition_1.method);
                  uVar23 = *(undefined4 *)(puVar22 + 1);
                  *(undefined8 *)(lVar21 + 0x24) = *puVar22;
                  *(undefined8 *)(lVar21 + 0x30) = uVar12;
                  *(undefined4 *)(lVar21 + 0x2c) = uVar23;
                  *(float *)(lVar21 + 0x38) = fVar13;
                  pLVar8 = (pMVar1->fields).avatarIgnoreList;
                  if (pLVar8 != (List_1_System_Int32_ *)0x0) {
                    FUN_?(pLVar8,(this_03->fields)._._._._.id,
                                  MethodInfo__System__Collections__Generic__List<int>__Add_int_);
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
                    Vector3 *position,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  if (bVar1) {
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
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar3._0_4_ = (pVVar2->oneVector).x;
  uVar3._4_4_ = (pVVar2->oneVector).y;
  fVar4 = (pVVar2->oneVector).z;
  this_00 = (this->fields)._._.gameObject;
  VStack_5._0_8_ = uVar3;
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
    QStack_6.x = 0.0;
    QStack_6.y = 0.0;
    QStack_6.z = 0.0;
    QStack_6.w = 0.0;
    pvVar7 = (obj->fields)._._.m_CachedPtr;
    if (pvVar7 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar8 = (code *)swi(3);
      pVVar9 = (Vector3 *)(*pcVar8)();
      return pVVar9;
    }
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar8 = (code *)swi(3);
      pVVar9 = (Vector3 *)(*pcVar8)();
      return pVVar9;
    }
    pcRam_? = pcVar8;
    (*pcRam_?)(pvVar7,&QStack_6);
    fVar10 = VStack_5.y;
    if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
      FUN_?();
    }
    VStack_5.z = position->z;
    VStack_5.x = position->x;
    VStack_5.y = position->y;
    VStack_11.y = fVar10;
    VStack_11.x = (float)uVar3;
    aQStack_12[0].x = QStack_6.x;
    aQStack_12[0].y = QStack_6.y;
    aQStack_12[0].z = QStack_6.z;
    aQStack_12[0].w = QStack_6.w;
    VStack_11.z = fVar4;
    pVVar9 = SharedCubeFunctions::SharedCubeFunctions_GetClosestGridPoint
                       ((Vector3 *)&QStack_6,&VStack_5,aQStack_12,gridSize,&VStack_11,
                        (MethodInfo *)0x0);
    fVar4 = pVVar9->y;
    fVar10 = pVVar9->z;
    __return_storage_ptr__->x = pVVar9->x;
    __return_storage_ptr__->y = fVar4;
    fVar4 = position->y;
    __return_storage_ptr__->z = fVar10;
    fVar4 = (float)FUN_?(fVar4 / gridSize);
    __return_storage_ptr__->y = fVar4 * gridSize;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  pVVar9 = (Vector3 *)(*pcVar8)();
  return pVVar9;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVTeleporter::MVTeleporter_Initialize
               (MVTeleporter *this,MethodInfo *method)

{
  MVTeleporter_SetupUseInteractor(this,(MethodInfo *)0x0);
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  pUVar1 = (this->fields).useInteractor;
  if ((pUVar1 != (UseInteractor *)0x0) &&
     (this_00 = (pUVar1->fields).useInteractorVisuals, this_00 != (UseInteractorVisualization *)0x0)
     ) {
    UseInteractorVisualization::UseInteractorVisualization_UpdateData
              (this_00,(this->fields)._._._.data,(pUVar1->fields).woOwnerID,(MethodInfo *)0x0);
    pMVar2 = (this->fields).teleportObject;
    if (pMVar2 != (MVTeleporterObject *)0x0) {
      pCVar3 = MVLogicObject::MVLogicObject_SetupCulling
                         ((MVLogicObject *)this,(pMVar2->fields).visualRoot,
                          TypeRef__System__Activator__T._0_4_,(MethodInfo *)0x0);
      fVar4 = _UNK_?;
      if (pCVar3 != (CullingSubscriberBase *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CullingApiWrapper,_UNK_?,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__CullingApiWrapper);
        }
        pBVar5 = TypeInfo__CullingApiWrapper->static_fields->spheres;
        if (pBVar5 != (BoundingSphere__Array *)0x0) {
          uVar6 = (pCVar3->fields)._CullingIndex_k__BackingField;
          if (uVar6 < (uint)pBVar5->max_length) {
            pBVar5->vector[(int)uVar6].radius = fVar4;
            return;
          }
          FUN_?();
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FUN_?();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVTeleporter::MVTeleporter_InitializeInventory
               (MVTeleporter *this,MethodInfo *method)

{
  MVLogicObject::MVLogicObject_InitializeInventory((MVLogicObject *)this,(MethodInfo *)0x0);
  pMVar1 = (this->fields).teleportObject;
  if ((pMVar1 == (MVTeleporterObject *)0x0) ||
     (apPStackX_8[0] = (pMVar1->fields).objParticleSystem, apPStackX_8[0] == (ParticleSystem *)0x0))
  {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)apPStackX_8 >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  pcVar2 = pcRam_?;
  apPStackX_18[0] = apPStackX_8[0];
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(apPStackX_18,_UNK_?);
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVTeleporter::MVTeleporter_OnDataUpdate
               (MVTeleporter *this,MethodInfo *method)

{
  pUVar1 = (this->fields).useInteractor;
  if ((pUVar1 == (UseInteractor *)0x0) ||
     (this_00 = (pUVar1->fields).useInteractorVisuals, this_00 == (UseInteractorVisualization *)0x0)
     ) {
    auStack_2._0_8_ = &UNK_?;
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar4 = (pUVar1->fields).woOwnerID;
  pOVar5 = (Object__Class *)(this->fields)._._._.data;
  if (cRam_? == '\0') {
    auStack_2._0_8_ = &UNK_?;
    FUN_?(&TypeInfo__System__Func<UseRequirement,_bool>);
    LOCK();
    UNLOCK();
    auStack_2._0_8_ = &UNK_?;
    FUN_?(&MethodInfo__UseInteractorVisualization____c___UpdateData_b__36_0_UseRequirement_)
    ;
    LOCK();
    UNLOCK();
    auStack_2._0_8_ = &UNK_?;
    FUN_?(&
                  MethodInfo__UseInteractorVisualization____c__DisplayClass36_0___UpdateData_b__1_UseRequirement_
                 );
    LOCK();
    UNLOCK();
    auStack_2._0_8_ = &UNK_?;
    FUN_?(&TypeInfo__UseInteractorVisualization____c__DisplayClass36_0);
    LOCK();
    UNLOCK();
    auStack_2._0_8_ = &UNK_?;
    FUN_?(&TypeInfo__UseInteractorVisualization____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStack_2._0_8_ = &UNK_?;
  pOVar6 = (Object *)FUN_?(TypeInfo__UseInteractorVisualization____c__DisplayClass36_0);
  if (pOVar6 == (Object *)0x0) {
code_?:
    auStack_2._0_8_ = &UNK_?;
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar7 = iRam_? != 0;
  pOVar6[1].klass = pOVar5;
  if (bVar7) {
    uVar8 = (uint)((ulonglong)(pOVar6 + 1) >> 0xc);
    lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
    do {
      uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
      puVar11 = (ulonglong *)(lVar9 + 0xADDR);
      LOCK();
      bVar7 = uVar10 == *puVar11;
      if (bVar7) {
        *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  *(int32_t *)&pOVar6[1].monitor = iVar4;
  if (*(int *)&(TypeInfo__UseInteractorVisualization____c->_1).field_0x1c == 0) {
    auStack_2._0_8_ = &UNK_?;
    FUN_?();
  }
  this_01 = TypeInfo__UseInteractorVisualization____c->static_fields->__9__36_0;
  if (this_01 == (Func_2_UseRequirement_Boolean_ *)0x0) {
    if (*(int *)&(TypeInfo__UseInteractorVisualization____c->_1).field_0x1c == 0) {
      auStack_2._0_8_ = &UNK_?;
      FUN_?();
    }
    object = TypeInfo__UseInteractorVisualization____c->static_fields->__9;
    auStack_2._0_8_ = &UNK_?;
    this_01 = (Func_2_UseRequirement_Boolean_ *)
              FUN_?(TypeInfo__System__Func<UseRequirement,_bool>);
    auStack_2._0_8_ = &UNK_?;
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              ((Predicate_1_Object_ *)this_01,(Object *)object,
               MethodInfo__UseInteractorVisualization____c___UpdateData_b__36_0_UseRequirement_,
               (MethodInfo *)0x0);
    TypeInfo__UseInteractorVisualization____c->static_fields->__9__36_0 = this_01;
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)
                      &TypeInfo__UseInteractorVisualization____c->static_fields->__9__36_0 >> 0xc);
      lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
      do {
        uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
        puVar11 = (ulonglong *)(lVar9 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
  }
  auStack_2._0_8_ = &UNK_?;
  this_02 = (Predicate_1_Object_ *)FUN_?(TypeInfo__System__Func<UseRequirement,_bool>);
  auStack_2._0_8_ = &UNK_?;
  mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
            (this_02,pOVar6,
             MethodInfo__UseInteractorVisualization____c__DisplayClass36_0___UpdateData_b__1_UseRequirement_
             ,(MethodInfo *)0x0);
  if (this_00 == (UseInteractorVisualization *)0x0) goto code_?;
  auStack_2._0_8_ = &UNK_?;
  UseInteractorVisualization::UseInteractorVisualization_ChangeUseRequirements
            (this_00,this_01,(Func_2_UseRequirement_Boolean_ *)this_02,(MethodInfo *)0x0);
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
  pLVar12 = (this_00->fields).useRequirements;
  if (pLVar12 == (List_1_UseRequirement_ *)0x0) {
code_?:
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (iRam_? != 0) {
    uVar8 = (uint)((ulonglong)&pLStack_13 >> 0xc);
    uVar10 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
    do {
      uVar14 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
      puVar11 = (ulonglong *)(uVar10 * 8 + 0xADDR);
      LOCK();
      bVar7 = uVar14 == *puVar11;
      if (bVar7) {
        *puVar11 = uVar14 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  puStack_15 = (undefined1 *)((ulonglong)(uint)(pLVar12->fields)._version << 0x20);
  uStack_16 = 0;
  auStack_2._8_8_ = puStack_15;
  pOStack_17 = (Object *)0x0;
  uStack_18 = 0;
  puStack_19 = auStack_2;
  pLStack_13 = pLVar12;
  auStack_2._0_8_ = pLVar12;
  while (bVar20 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            ((List_1_T_Enumerator_System_Object_ *)auStack_2,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                            ), bVar20 != 0) {
    if (pOStack_17 == (Object *)0x0) goto code_?;
    cVar21 = (*(code *)pOStack_17->klass[1]._0.interopData)
                       (pOStack_17,pOStack_17->klass[1]._0.klass);
    if (cVar21 != '\0') {
      piVar22 = &(this_00->fields).active;
      *piVar22 = *piVar22 + 1;
    }
  }
  if ((this_00->fields).active == 1) {
    (this_00->fields).dist = 0.01;
  }
  bVar7 = (this_00->fields).active == 0;
  if (!bVar7) {
    (this_00->fields).spacing = (float)(int)(0x168 / (longlong)(this_00->fields).active);
    bVar7 = (this_00->fields).active == 0;
  }
  (this_00->fields)._HasUseRequirements_k__BackingField = !bVar7;
  fVar23 = 0.0;
  pLVar12 = (this_00->fields).useRequirements;
  if (pLVar12 == (List_1_UseRequirement_ *)0x0) goto code_?;
  if (iRam_? != 0) {
    uVar8 = (uint)((ulonglong)&pLStack_13 >> 0xc);
    uVar10 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
    do {
      uVar14 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
      puVar11 = (ulonglong *)(uVar10 * 8 + 0xADDR);
      LOCK();
      bVar7 = uVar14 == *puVar11;
      if (bVar7) {
        *puVar11 = uVar14 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  puStack_15 = (undefined1 *)((ulonglong)(uint)(pLVar12->fields)._version << 0x20);
  uStack_16 = 0;
  auStack_2._8_8_ = puStack_15;
  pOStack_17 = (Object *)0x0;
  pLStack_13 = (List_1_UseRequirement_ *)0x0;
  puStack_15 = auStack_2;
  auStack_2._0_8_ = pLVar12;
  while (bVar20 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            ((List_1_T_Enumerator_System_Object_ *)auStack_2,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                            ), pOVar6 = pOStack_17, bVar20 != 0) {
    if (pOStack_17 == (Object *)0x0) goto code_?;
    cVar21 = (*(code *)pOStack_17->klass[1]._0.interopData)
                       (pOStack_17,pOStack_17->klass[1]._0.klass);
    if (cVar21 != '\0') {
      pOVar5 = pOVar6->klass;
      uStack_18._0_4_ = (this_00->fields).pivot.x;
      uStack_18._4_4_ = (this_00->fields).pivot.y;
      puStack_19 = (undefined1 *)CONCAT44(puStack_19._4_4_,(this_00->fields).pivot.z);
      (*(code *)pOVar5[1]._0.fields)
                (pOVar6,&uStack_18,fVar23,(this_00->fields).dist,pOVar5[1]._0.events);
      fVar23 = fVar23 + (this_00->fields).spacing;
    }
  }
  if ((this_00->fields)._HasUseRequirements_k__BackingField != 0) {
    if ((this_00->fields).cullingSubscriberBase == (CullingSubscriberBase *)0x0) {
      UseInteractorVisualization::UseInteractorVisualization_SetupCulling(this_00,(MethodInfo *)0x0)
      ;
      goto code_?;
    }
    if ((this_00->fields)._HasUseRequirements_k__BackingField != 0) goto code_?;
  }
  if ((this_00->fields).cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
    UseInteractorVisualization::UseInteractorVisualization_RemoveCulling(this_00,(MethodInfo *)0x0);
  }
code_?:
  bVar20 = (this_00->fields)._HasUseRequirements_k__BackingField;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar24 = (this_00->fields)._._._._.m_CachedPtr;
  if (pvVar24 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar25 = func_?(&UNK_?);
    FUN_?(uVar25,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(pvVar24,bVar20);
  return;
}


/* Void SetupUseInteractor() */

void Assembly-CSharp.dll::MVTeleporter::MVTeleporter_SetupUseInteractor
               (MVTeleporter *this,MethodInfo *method)

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
    FUN_?(&TypeInfo__GameRankRequirement);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LevelBasedUseRequirement);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVTeleporter__DoTeleport_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StarRequirement);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TeamRequirement);
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
  pMVar1 = (this->fields).teleportObject;
  if (pMVar1 != (MVTeleporterObject *)0x0) {
    pTVar2 = (pMVar1->fields).triggerBoxEvents;
    pGVar3 = (pMVar1->fields).useInteractionRotator;
    if (pTVar2 != (TriggerBoxEvents *)0x0) {
      triggerCollider = TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar2,(MethodInfo *)0x0);
      useFunction = (Func_2_Int32_Boolean_ *)FUN_?(TypeInfo__System__Func<int,_bool>);
      FUN_?(useFunction,this,MethodInfo__MVTeleporter__DoTeleport_int_);
      pUVar4 = (UseInteractor *)FUN_?(TypeInfo__UseInteractor);
      UseInteractor::UseInteractor__ctor
                (pUVar4,(MVWorldObjectClient *)this,pGVar3,0,triggerCollider,useFunction,
                 (Func_3_Int32_MVInteractableBase_Boolean_ *)0x0,_UNK_?,0,1,
                 (MethodInfo *)0x0);
      bVar5 = iRam_? != 0;
      (this->fields).useInteractor = pUVar4;
      if (bVar5) {
        uVar6 = (uint)((ulonglong)&(this->fields).useInteractor >> 0xc);
        uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        do {
          uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
          puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
          LOCK();
          bVar5 = uVar8 == *puVar9;
          if (bVar5) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar5);
      }
      pMVar1 = (this->fields).teleportObject;
      if (pMVar1 != (MVTeleporterObject *)0x0) {
        pGVar3 = (pMVar1->fields).useInteractionRotator;
        useRequirement = (UseRequirement *)FUN_?(TypeInfo__GameCoinLogic);
        bVar5 = iRam_? != 0;
        useRequirement[1].monitor = (MonitorData *)0x0;
        *(undefined4 *)&useRequirement[1].fields = 0;
        *(undefined4 *)((longlong)&useRequirement[1].klass + 4) = 1;
        *(undefined1 *)&useRequirement[3].klass = 0;
        *(GameObject **)&useRequirement[2].fields = pGVar3;
        if (bVar5) {
          uVar6 = (uint)((ulonglong)&useRequirement[2].fields >> 0xc);
          uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
          do {
            uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
            puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
            LOCK();
            bVar5 = uVar8 == *puVar9;
            if (bVar5) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar5);
        }
        pMVar1 = (this->fields).teleportObject;
        if (pMVar1 != (MVTeleporterObject *)0x0) {
          pGVar3 = (pMVar1->fields).useInteractionRotator;
          this_00 = (GameRankRequirement *)FUN_?(TypeInfo__GameRankRequirement);
          GameRankRequirement::GameRankRequirement__ctor
                    (this_00,pGVar3,(MVWorldObjectClient *)this,0,(MethodInfo *)0x0);
          if (this_00 != (GameRankRequirement *)0x0) {
            (*(this_00->klass->vtable).OnDataUpdate.methodPtr)(this_00,(this->fields)._._._.data);
            pMVar1 = (this->fields).teleportObject;
            if (pMVar1 != (MVTeleporterObject *)0x0) {
              pGVar3 = (pMVar1->fields).useInteractionRotator;
              useRequirement_00 =
                   (UseRequirement *)FUN_?(TypeInfo__LevelBasedUseRequirement);
              bVar5 = iRam_? != 0;
              *(undefined8 *)&useRequirement_00[1].fields = 0;
              *(undefined4 *)&useRequirement_00[2].klass = 0;
              *(undefined1 *)((longlong)&useRequirement_00[1].klass + 4) = 0;
              useRequirement_00[2].monitor = (MonitorData *)pGVar3;
              if (bVar5) {
                uVar6 = (uint)((ulonglong)&useRequirement_00[2].monitor >> 0xc);
                uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
                do {
                  uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
                  puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
                  LOCK();
                  bVar5 = uVar8 == *puVar9;
                  if (bVar5) {
                    *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar5);
              }
              pMVar1 = (this->fields).teleportObject;
              if (pMVar1 != (MVTeleporterObject *)0x0) {
                pGVar3 = (pMVar1->fields).useInteractionRotator;
                useRequirement_01 = (UseRequirement *)FUN_?(TypeInfo__StarRequirement);
                bVar5 = iRam_? != 0;
                *(undefined8 *)((longlong)&useRequirement_01[1].klass + 4) = 0;
                *(undefined4 *)((longlong)&useRequirement_01[1].monitor + 4) = 0;
                useRequirement_01[2].fields._IsInputBlocking_k__BackingField = 0;
                useRequirement_01[2].monitor = (MonitorData *)pGVar3;
                if (bVar5) {
                  uVar6 = (uint)((ulonglong)&useRequirement_01[2].monitor >> 0xc);
                  uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
                  do {
                    uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
                    puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
                    LOCK();
                    bVar5 = uVar8 == *puVar9;
                    if (bVar5) {
                      *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar5);
                }
                pMVar1 = (this->fields).teleportObject;
                if (pMVar1 != (MVTeleporterObject *)0x0) {
                  pUVar10 = (UseRequirement__Class *)(pMVar1->fields).tintObject;
                  useRequirement_02 = (UseRequirement *)FUN_?(TypeInfo__TeamRequirement);
                  bVar5 = iRam_? != 0;
                  *(undefined4 *)&useRequirement_02[1].monitor = 5;
                  useRequirement_02[1].klass = pUVar10;
                  if (bVar5) {
                    uVar6 = (uint)((ulonglong)(useRequirement_02 + 1) >> 0xc);
                    uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
                    do {
                      uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
                      puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
                      LOCK();
                      bVar5 = uVar8 == *puVar9;
                      if (bVar5) {
                        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar5);
                  }
                  *(undefined1 *)((longlong)&useRequirement_02[1].monitor + 4) = 0;
                  pMVar1 = (this->fields).teleportObject;
                  if (pMVar1 != (MVTeleporterObject *)0x0) {
                    pGVar3 = (pMVar1->fields).useInteractionRotator;
                    this_01 = (RewardedAdRequirement *)
                              FUN_?(
                                           TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement
                                           );
                    WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement::
                    RewardedAdRequirement__ctor(this_01,pGVar3,(MethodInfo *)0x0);
                    pUVar4 = (this->fields).useInteractor;
                    if (pUVar4 != (UseInteractor *)0x0) {
                      UseInteractor::UseInteractor_AddRequirement
                                (pUVar4,useRequirement_00,(MethodInfo *)0x0);
                      pUVar4 = (this->fields).useInteractor;
                      if (pUVar4 != (UseInteractor *)0x0) {
                        UseInteractor::UseInteractor_AddRequirement
                                  (pUVar4,useRequirement,(MethodInfo *)0x0);
                        pUVar4 = (this->fields).useInteractor;
                        if (pUVar4 != (UseInteractor *)0x0) {
                          UseInteractor::UseInteractor_AddRequirement
                                    (pUVar4,useRequirement_01,(MethodInfo *)0x0);
                          pUVar4 = (this->fields).useInteractor;
                          if (pUVar4 != (UseInteractor *)0x0) {
                            UseInteractor::UseInteractor_AddRequirement
                                      (pUVar4,useRequirement_02,(MethodInfo *)0x0);
                            pUVar4 = (this->fields).useInteractor;
                            if (pUVar4 != (UseInteractor *)0x0) {
                              UseInteractor::UseInteractor_AddRequirement
                                        (pUVar4,(UseRequirement *)this_00,(MethodInfo *)0x0);
                              pUVar4 = (this->fields).useInteractor;
                              if (pUVar4 != (UseInteractor *)0x0) {
                                UseInteractor::UseInteractor_AddRequirement
                                          (pUVar4,(UseRequirement *)this_01,(MethodInfo *)0x0);
                                pMVar1 = (this->fields).teleportObject;
                                if (pMVar1 != (MVTeleporterObject *)0x0) {
                                  pTVar2 = (pMVar1->fields).triggerBoxEvents;
                                  pUVar4 = (this->fields).useInteractor;
                                  pUVar11 = (UnityAction_2_System_Object_System_Object_ *)
                                            FUN_?(
                                                  TypeInfo__System__EventHandler<TriggerEventArgs>);
                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                  UnityAction`2[System::Object,System::Object]::
                                  UnityAction_2_System_Object_System_Object___ctor
                                            (pUVar11,(Object *)pUVar4,
                                             MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                                             ,(MethodInfo *)0x0);
                                  if (pTVar2 != (TriggerBoxEvents *)0x0) {
                                    TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                                              (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pUVar11,
                                               (MethodInfo *)0x0);
                                    pMVar1 = (this->fields).teleportObject;
                                    if (pMVar1 != (MVTeleporterObject *)0x0) {
                                      pTVar2 = (pMVar1->fields).triggerBoxEvents;
                                      pUVar4 = (this->fields).useInteractor;
                                      pUVar11 = (UnityAction_2_System_Object_System_Object_ *)
                                                FUN_?(
                                                  TypeInfo__System__EventHandler<TriggerEventArgs>);
                                      UnityEngine.CoreModule.dll::UnityEngine::Events::
                                      UnityAction`2[System::Object,System::Object]::
                                      UnityAction_2_System_Object_System_Object___ctor
                                                (pUVar11,(Object *)pUVar4,
                                                 MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                                                 ,(MethodInfo *)0x0);
                                      if (pTVar2 != (TriggerBoxEvents *)0x0) {
                                        if (cRam_? == '\0') {
                                          FUN_?(&
                                                  TypeInfo__System__EventHandler<TriggerEventArgs>);
                                          LOCK();
                                          UNLOCK();
                                          cRam_? = '\x01';
                                        }
                                        ppEVar12 = &(pTVar2->fields).TriggerExit;
                                        a = (pTVar2->fields).TriggerExit;
                                        do {
                                          pDVar13 = mscorlib.dll::System::Delegate::Delegate_Combine
                                                              ((Delegate *)a,(Delegate *)pUVar11,
                                                               (MethodInfo *)0x0);
                                          pEVar14 = TypeInfo__System__EventHandler<TriggerEventArgs>;
                                          if (pDVar13 == (Delegate *)0x0) {
                                            pEVar15 = (EventHandler_1_TriggerEventArgs_ *)0x0;
                                          }
                                          else {
                                            pEVar15 = (EventHandler_1_TriggerEventArgs_ *)
                                                      FUN_?(pDVar13,
                                                  TypeInfo__System__EventHandler<TriggerEventArgs>);
                                            if (pEVar15 == (EventHandler_1_TriggerEventArgs_ *)0x0)
                                            {
                                              FUN_?(pDVar13,pEVar14);
                                              pcVar16 = (code *)swi(3);
                                              (*pcVar16)();
                                              return;
                                            }
                                          }
                                          LOCK();
                                          pEVar17 = *ppEVar12;
                                          bVar5 = a == pEVar17;
                                          if (bVar5) {
                                            *ppEVar12 = pEVar15;
                                            pEVar17 = a;
                                          }
                                          UNLOCK();
                                          pEVar15 = a;
                                          if (!bVar5) {
                                            pEVar15 = pEVar17;
                                          }
                                          if (iRam_? != 0) {
                                            uVar6 = (uint)((ulonglong)ppEVar12 >> 0xc);
                                            uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
                                            do {
                                              uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
                                              puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
                                              LOCK();
                                              bVar5 = uVar8 == *puVar9;
                                              if (bVar5) {
                                                *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                                              }
                                              UNLOCK();
                                            } while (!bVar5);
                                          }
                                          bVar5 = pEVar15 != a;
                                          a = pEVar15;
                                        } while (bVar5);
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
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Boolean ValidateObjectLinkTarget(MVWorldObjectClient) */

bool Assembly-CSharp.dll::MVTeleporter::MVTeleporter_ValidateObjectLinkTarget
               (MVTeleporter *this,MVWorldObjectClient *wo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVTeleporter);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (MVWorldObjectClient *)0x0;
  if (wo != (MVWorldObjectClient *)0x0) {
    bVar2 = (TypeInfo__MVTeleporter->_1).naturalAligment;
    if (((wo->klass->_1).naturalAligment < bVar2) ||
       (bVar3 = true,
       (MVTeleporter__Class *)(wo->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
       TypeInfo__MVTeleporter)) {
      bVar3 = false;
    }
    if (bVar3) {
      pMVar1 = wo;
    }
  }
  return pMVar1 != (MVWorldObjectClient *)0x0;
}


/* MVTeleporter(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVTeleporter::MVTeleporter__ctor
               (MVTeleporter *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVTeleporterObject);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVTeleporter__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVTeleporter__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_System_Int32_ *)FUN_?(TypeInfo__System__Collections__Generic__List<int>);
  FUN_?(pLVar1,MethodInfo__System__Collections__Generic__List<int>__List__);
  bVar2 = iRam_? != 0;
  (this->fields).avatarIgnoreList = pLVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).avatarIgnoreList >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar7 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar7 != (PrefabPool *)0x0) {
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(ObjectPrefab *)(pPVar7->fields).mvTeleporterPrefab,
               worldObjects,(MethodInfo *)0x0);
    pMVar8 = (MVTeleporterObject *)(this->fields)._._.component;
    if (pMVar8 == (MVTeleporterObject *)0x0) {
      (this->fields).teleportObject = (MVTeleporterObject *)0x0;
    }
    else {
      bVar9 = (TypeInfo__MVTeleporterObject->_1).naturalAligment;
      if (((((ObjectPrefab__Class *)pMVar8->klass)->_1).naturalAligment < bVar9) ||
         ((((ObjectPrefab__Class *)pMVar8->klass)->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
          (Il2CppClass *)TypeInfo__MVTeleporterObject)) {
        FUN_?(pMVar8);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      (this->fields).teleportObject = pMVar8;
      bVar9 = (TypeInfo__MVTeleporterObject->_1).naturalAligment;
      if (((((ObjectPrefab__Class *)pMVar8->klass)->_1).naturalAligment < bVar9) ||
         ((((ObjectPrefab__Class *)pMVar8->klass)->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
          (Il2CppClass *)TypeInfo__MVTeleporterObject)) {
        FUN_?(pMVar8);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&(this->fields).teleportObject >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__PrefabPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar7 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar7 != (PrefabPool *)0x0) {
      bVar2 = iRam_? != 0;
      (this->fields).teleportAvatarPrefab = (pPVar7->fields).teleportAvatarPrefab;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&(this->fields).teleportAvatarPrefab >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      pMVar8 = (this->fields).teleportObject;
      if (pMVar8 != (MVTeleporterObject *)0x0) {
        pTVar11 = (pMVar8->fields).triggerBoxEvents;
        pUVar12 = (UnityAction_2_System_Object_System_Object_ *)
                  FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (pUVar12,(Object *)this,
                   MethodInfo__MVTeleporter__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   ,(MethodInfo *)0x0);
        if (pTVar11 != (TriggerBoxEvents *)0x0) {
          TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                    (pTVar11,(EventHandler_1_TriggerEventArgs_ *)pUVar12,(MethodInfo *)0x0);
          pMVar8 = (this->fields).teleportObject;
          if (pMVar8 != (MVTeleporterObject *)0x0) {
            pTVar11 = (pMVar8->fields).triggerBoxEvents;
            pUVar12 = (UnityAction_2_System_Object_System_Object_ *)
                      FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      (pUVar12,(Object *)this,
                       MethodInfo__MVTeleporter__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                       ,(MethodInfo *)0x0);
            if (pTVar11 != (TriggerBoxEvents *)0x0) {
              TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                        (pTVar11,(EventHandler_1_TriggerEventArgs_ *)pUVar12,(MethodInfo *)0x0);
              (this->fields)._._.interactionFlags =
                   (this->fields)._._.interactionFlags & 0xffffffffffffdfffU | 0x212700000;
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
  __return_storage_ptr__->y = 1.5;
  __return_storage_ptr__->z = 0.0;
  __return_storage_ptr__->x = 0.0;
  return __return_storage_ptr__;
}


/* Quaternion get_ObjectConnectorRotation() */

Quaternion *
Assembly-CSharp.dll::MVTeleporter::MVTeleporter_get_ObjectConnectorRotation
          (Quaternion *__return_storage_ptr__,MVTeleporter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar2._0_4_ = (pVVar1->downVector).x;
  uVar2._4_4_ = (pVVar1->downVector).y;
  fVar3 = (pVVar1->downVector).z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_4._0_4_ = (pVVar1->upVector).x;
  uStack_4._4_4_ = (pVVar1->upVector).y;
  fStack_5 = (pVVar1->upVector).z;
  uStack_6 = 0;
  uStack_7 = 0;
  pcVar8 = pcRam_?;
  uStack_9 = uVar2;
  fStack_10 = fVar3;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar8 = (code *)swi(3);
    pQVar11 = (Quaternion *)(*pcVar8)();
    return pQVar11;
  }
  pcRam_? = pcVar8;
  (*pcRam_?)(&uStack_9,&uStack_4,&uStack_6);
  __return_storage_ptr__->x = (float)(undefined4)uStack_6;
  __return_storage_ptr__->y = (float)uStack_6._4_4_;
  __return_storage_ptr__->z = (float)(undefined4)uStack_7;
  __return_storage_ptr__->w = (float)uStack_7._4_4_;
  return __return_storage_ptr__;
}


/* Void triggerBoxEvents_TriggerEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::MVTeleporter::MVTeleporter_triggerBoxEvents_TriggerEnter
               (MVTeleporter *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Remove_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarLocal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._._._.inputLinkRefs;
  if (pLVar1 != (List_1_MV_WorldObject_Link_ *)0x0) {
    bVar2 = 1;
    if ((pLVar1->fields)._size != 0) {
      bVar2 = (this->fields)._._._.inputState;
    }
    pUVar3 = (this->fields).useInteractor;
    if ((pUVar3 != (UseInteractor *)0x0) &&
       (pUVar4 = (pUVar3->fields).useInteractorVisuals, pUVar4 != (UseInteractorVisualization *)0x0)
       ) {
      UVar5 = UseInteractorVisualization::UseInteractorVisualization_EvaluateUsability
                        (pUVar4,(MethodInfo *)0x0);
      if ((UVar5 & UseGUIResult__Enum_CanAfford) != 0) {
        this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if ((e == (TriggerEventArgs *)0x0) || (this_00 == (MVWorldObjectClientManager *)0x0))
        goto code_?;
        pMVar6 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                           (this_00,(e->fields).instigatorWOID,(MethodInfo *)0x0);
        if (pMVar6 != (MVWorldObjectClient *)0x0) {
          bVar7 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
          if ((bVar7 <= (pMVar6->klass->_1).naturalAligment) &&
             ((MVAvatarLocal__Class *)(pMVar6->klass->_1).typeHierarchy[(ulonglong)bVar7 - 1] ==
              TypeInfo__MVAvatarLocal)) {
            if ((this->fields).avatarIgnoreList == (List_1_System_Int32_ *)0x0)
            goto code_?;
            FUN_?();
          }
        }
      }
      if (bVar2 != 0) {
        pUVar3 = (this->fields).useInteractor;
        if ((pUVar3 == (UseInteractor *)0x0) ||
           (pUVar4 = (pUVar3->fields).useInteractorVisuals,
           pUVar4 == (UseInteractorVisualization *)0x0)) goto code_?;
        UVar5 = UseInteractorVisualization::UseInteractorVisualization_EvaluateUsability
                          (pUVar4,(MethodInfo *)0x0);
        if ((UVar5 & (UseGUIResult__Enum_CannotAfford|UseGUIResult__Enum_CanAfford)) == 0) {
          if (e == (TriggerEventArgs *)0x0) goto code_?;
          MVTeleporter_DoTeleport(this,(e->fields).instigatorWOID,(MethodInfo *)0x0);
        }
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void triggerBoxEvents_TriggerExit(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::MVTeleporter::MVTeleporter_triggerBoxEvents_TriggerExit
               (MVTeleporter *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Remove_int_);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((e != (TriggerEventArgs *)0x0) && (this_00 != (MVWorldObjectClientManager *)0x0)) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (this_00,(e->fields).instigatorWOID,(MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClient *)0x0) {
      bVar2 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
      if ((bVar2 <= (pMVar1->klass->_1).naturalAligment) &&
         ((MVAvatarLocal__Class *)(pMVar1->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] ==
          TypeInfo__MVAvatarLocal)) {
        pLVar3 = (this->fields).avatarIgnoreList;
        if (pLVar3 == (List_1_System_Int32_ *)0x0) goto code_?;
        FUN_?(pLVar3,(pMVar1->fields)._.id,
                      MethodInfo__System__Collections__Generic__List<int>__Remove_int_);
      }
    }
    return;
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


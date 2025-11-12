
/* CubeGunBulletObject Create(MVPickupOwner, Vector3, Byte) */

CubeGunBulletObject *
Assembly-CSharp.dll::CubeGunBulletObject::CubeGunBulletObject_Create
          (MVPickupOwner *owner,Vector3 *origin,uint8_t materialID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__CubeGunBulletObject__HandleCubeHitLocal_VoxelHit__UnityEngine__Ray_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__CubeGunBulletObject__HandleCubeHit_VoxelHit__UnityEngine__Ray_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  CubeGunBulletObject_MethodInfo__EnumPoolManager__Instantiate<CubeGunBulletObject>_PoolEnums_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Bullet__OnHitDelegate);
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
  if (((pPVar1 == (PrefabPool *)0x0) ||
      (this = (pPVar1->fields).enumPoolManager, this == (EnumPoolManager *)0x0)) ||
     (pCVar2 = (CubeGunBulletObject *)
               EnumPoolManager::EnumPoolManager_Instantiate
                         (this,PoolEnums__Enum_CubeGunBullet,
                          CubeGunBulletObject_MethodInfo__EnumPoolManager__Instantiate<CubeGunBulletObject>_PoolEnums_
                         ), pCVar2 == (CubeGunBulletObject *)0x0)) {
DAT_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    pCVar2 = (CubeGunBulletObject *)(*pcVar3)();
    return pCVar2;
  }
  pBVar4 = (pCVar2->fields).bullet;
  (pCVar2->fields).materialID = materialID;
  if (pBVar4 == (Bullet *)0x0) goto DAT_?;
  Bullet::Bullet_ResetBullet(pBVar4,(MethodInfo *)0x0);
  pBVar4 = (pCVar2->fields).bullet;
  if (pBVar4 == (Bullet *)0x0) goto DAT_?;
  (pBVar4->fields).initiatedPoolType = 1;
  pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)pCVar2,(MethodInfo *)0x0);
  if (pTVar5 == (Transform *)0x0) goto DAT_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar6 = (pTVar5->fields)._._.m_CachedPtr;
  if (pvVar6 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    pCVar2 = (CubeGunBulletObject *)(*pcVar3)();
    return pCVar2;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar3 = (code *)swi(3);
    pCVar2 = (CubeGunBulletObject *)(*pcVar3)();
    return pCVar2;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(pvVar6);
  pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)pCVar2,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar8 = TypeInfo__UnityEngine__Quaternion->static_fields;
  if (pTVar5 == (Transform *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    pCVar2 = (CubeGunBulletObject *)(*pcVar3)();
    return pCVar2;
  }
  fStack_9 = (pQVar8->identityQuaternion).x;
  fStack_10 = (pQVar8->identityQuaternion).y;
  fStack_11 = (pQVar8->identityQuaternion).z;
  fStack_12 = (pQVar8->identityQuaternion).w;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar6 = (pTVar5->fields)._._.m_CachedPtr;
  if (pvVar6 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    pCVar2 = (CubeGunBulletObject *)(*pcVar3)();
    return pCVar2;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar3 = (code *)swi(3);
    pCVar2 = (CubeGunBulletObject *)(*pcVar3)();
    return pCVar2;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(pvVar6,&fStack_9);
  this_00 = (pCVar2->fields).cubeBullet;
  if ((this_00 == (CubeBullet *)0x0) ||
     (CubeBullet::CubeBullet_SetCubeMaterial(this_00,materialID,(MethodInfo *)0x0),
     owner == (MVPickupOwner *)0x0)) goto code_?;
  pBVar13 = (Bullet_OnHitDelegate *)0x0;
  if ((owner->fields)._IsLocal_k__BackingField != 0) {
    pBVar4 = (pCVar2->fields).bullet;
    if (pBVar4 == (Bullet *)0x0) goto code_?;
    pBVar14 = (pBVar4->fields).onHitLocal;
    pBVar15 = (BulletThrowingStar_OnHitDelegate *)FUN_?(TypeInfo__Bullet__OnHitDelegate);
    BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate__ctor
              (pBVar15,(Object *)pCVar2,
               MethodInfo__CubeGunBulletObject__HandleCubeHitLocal_VoxelHit__UnityEngine__Ray_,
               (MethodInfo *)0x0);
    pBVar14 = (Bullet_OnHitDelegate *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pBVar14,(Delegate *)pBVar15,(MethodInfo *)0x0);
    if (pBVar14 == (Bullet_OnHitDelegate *)0x0) {
      (pBVar4->fields).onHitLocal = (Bullet_OnHitDelegate *)0x0;
    }
    else {
      pBVar16 = pBVar13;
      if (pBVar14->klass == TypeInfo__Bullet__OnHitDelegate) {
        pBVar16 = pBVar14;
      }
      if (pBVar16 == (Bullet_OnHitDelegate *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        pCVar2 = (CubeGunBulletObject *)(*pcVar3)();
        return pCVar2;
      }
      (pBVar4->fields).onHitLocal = pBVar16;
      pBVar16 = pBVar13;
      if (pBVar14->klass == TypeInfo__Bullet__OnHitDelegate) {
        pBVar16 = pBVar14;
      }
      if (pBVar16 == (Bullet_OnHitDelegate *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        pCVar2 = (CubeGunBulletObject *)(*pcVar3)();
        return pCVar2;
      }
    }
    if (iRam_? != 0) {
      uVar17 = (uint)((ulonglong)&(pBVar4->fields).onHitLocal >> 0xc);
      lVar18 = (ulonglong)((uVar17 & 0x1fffff) >> 6) * 8;
      do {
        uVar19 = *(ulonglong *)(lVar18 + 0xADDR);
        puVar20 = (ulonglong *)(lVar18 + 0xADDR);
        LOCK();
        bVar21 = uVar19 == *puVar20;
        if (bVar21) {
          *puVar20 = uVar19 | 1L << (uVar17 & 0x3f);
        }
        UNLOCK();
      } while (!bVar21);
    }
  }
  pBVar4 = (pCVar2->fields).bullet;
  if (pBVar4 != (Bullet *)0x0) {
    pBVar14 = (pBVar4->fields).onHit;
    pBVar15 = (BulletThrowingStar_OnHitDelegate *)FUN_?(TypeInfo__Bullet__OnHitDelegate);
    BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate__ctor
              (pBVar15,(Object *)pCVar2,
               MethodInfo__CubeGunBulletObject__HandleCubeHit_VoxelHit__UnityEngine__Ray_,
               (MethodInfo *)0x0);
    pBVar14 = (Bullet_OnHitDelegate *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pBVar14,(Delegate *)pBVar15,(MethodInfo *)0x0);
    if (pBVar14 == (Bullet_OnHitDelegate *)0x0) {
      (pBVar4->fields).onHit = (Bullet_OnHitDelegate *)0x0;
    }
    else {
      pBVar16 = pBVar13;
      if (pBVar14->klass == TypeInfo__Bullet__OnHitDelegate) {
        pBVar16 = pBVar14;
      }
      if (pBVar16 == (Bullet_OnHitDelegate *)0x0) {
        FUN_?(pBVar14);
        pcVar3 = (code *)swi(3);
        pCVar2 = (CubeGunBulletObject *)(*pcVar3)();
        return pCVar2;
      }
      (pBVar4->fields).onHit = pBVar16;
      if (pBVar14->klass == TypeInfo__Bullet__OnHitDelegate) {
        pBVar13 = pBVar14;
      }
      if (pBVar13 == (Bullet_OnHitDelegate *)0x0) {
        FUN_?(pBVar14);
        pcVar3 = (code *)swi(3);
        pCVar2 = (CubeGunBulletObject *)(*pcVar3)();
        return pCVar2;
      }
    }
    if (iRam_? != 0) {
      uVar17 = (uint)((ulonglong)&(pBVar4->fields).onHit >> 0xc);
      lVar18 = (ulonglong)((uVar17 & 0x1fffff) >> 6) * 8;
      do {
        uVar19 = *(ulonglong *)(lVar18 + 0xADDR);
        puVar20 = (ulonglong *)(lVar18 + 0xADDR);
        LOCK();
        bVar21 = uVar19 == *puVar20;
        if (bVar21) {
          *puVar20 = uVar19 | 1L << (uVar17 & 0x3f);
        }
        UNLOCK();
      } while (!bVar21);
    }
    iVar22 = iRam_?;
    pBVar4 = (pCVar2->fields).bullet;
    if (pBVar4 != (Bullet *)0x0) {
      (pBVar4->fields).pooledObjectReference = (MonoBehaviour *)pCVar2;
      if (iVar22 != 0) {
        uVar17 = (uint)((ulonglong)&(pBVar4->fields).pooledObjectReference >> 0xc);
        lVar18 = (ulonglong)((uVar17 & 0x1fffff) >> 6) * 8;
        do {
          uVar19 = *(ulonglong *)(lVar18 + 0xADDR);
          puVar20 = (ulonglong *)(lVar18 + 0xADDR);
          LOCK();
          bVar21 = uVar19 == *puVar20;
          if (bVar21) {
            *puVar20 = uVar19 | 1L << (uVar17 & 0x3f);
          }
          UNLOCK();
        } while (!bVar21);
      }
      return pCVar2;
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  pCVar2 = (CubeGunBulletObject *)(*pcVar3)();
  return pCVar2;
}


/* Void HandleCubeHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::CubeGunBulletObject::CubeGunBulletObject_HandleCubeHit
               (CubeGunBulletObject *this,VoxelHit *voxelHit,Ray *lineOfFire,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_CubeGun);
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
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    this_00 = (pMVar1->fields).audioManager;
    audioSource = (this->fields).audioSource;
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                    ((Component *)this,(MethodInfo *)0x0);
    if (obj != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      VStack_2.x = 0.0;
      VStack_2.y = 0.0;
      VStack_2.z = 0.0;
      pvVar3 = (obj->fields)._._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(pvVar3,&VStack_2);
      if (this_00 != (AudioManager *)0x0) {
        VStack_6.x = VStack_2.x;
        VStack_6.y = VStack_2.y;
        VStack_6.z = VStack_2.z;
        AudioManager::AudioManager_Play_2
                  (this_00,StringLiteral_CubeGun,audioSource,&VStack_6,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void HandleCubeHitLocal(VoxelHit, Ray) */

void Assembly-CSharp.dll::CubeGunBulletObject::CubeGunBulletObject_HandleCubeHitLocal
               (CubeGunBulletObject *this,VoxelHit *voxelHit,Ray *lineOfFire,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_1.point.x = (voxelHit->point).x;
  VStack_1.point.y = (voxelHit->point).y;
  VStack_1._8_8_ = *(undefined8 *)&(voxelHit->point).z;
  VStack_1.normal.y = (voxelHit->normal).y;
  VStack_1.normal.z = (voxelHit->normal).z;
  VStack_1.cubePos = voxelHit->cubePos;
  VStack_1._30_2_ = *(undefined2 *)&voxelHit->field_0x1e;
  VStack_1.face = voxelHit->face;
  VStack_1.isCubeHit = voxelHit->isCubeHit;
  VStack_1._37_3_ = *(undefined3 *)&voxelHit->field_0x25;
  VStack_1.woId = voxelHit->woId;
  VStack_1._44_4_ = *(undefined4 *)&voxelHit->field_0x2c;
  VStack_1.cube = voxelHit->cube;
  VStack_1.distance = voxelHit->distance;
  VStack_1._60_4_ = *(undefined4 *)&voxelHit->field_0x3c;
  VStack_1.collider = voxelHit->collider;
  VStack_1.transform = voxelHit->transform;
  VStack_1.interactionFlags = voxelHit->interactionFlags;
  pIVar2 = PickupItemCubeGun::PickupItemCubeGun_GetCubePos(&IStackX_10,&VStack_1,(MethodInfo *)0x0)
  ;
  uVar3._0_2_ = pIVar2->x;
  uVar3._2_2_ = pIVar2->y;
  iVar4 = pIVar2->z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar5 != (MVGameControllerBase *)0x0) &&
       (pMVar6 = (pMVar5->fields).game, pMVar6 != (MVNetworkGame *)0x0)) &&
      (this_00 = (pMVar6->fields)._MaterialRepository_k__BackingField,
      this_00 != (MVMaterialRepository *)0x0)) &&
     (pMVar7 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                         (this_00,(this->fields).materialID,(MethodInfo *)0x0),
     pMVar7 != (MVMaterial *)0x0)) {
    if ((pMVar7->fields)._PhysicalProperties_k__BackingField.toughness == 0.0) {
      this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_02 != (MVWorldObjectClientManager *)0x0) {
        this_03 = (MVCubeModelBase *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                            (this_02,
                             MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
                            );
        if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
          FUN_?();
        }
        corners = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_IdentityCorners
                            ((MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
          FUN_?();
        }
        byteCorners = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                      CubeDataPacker_CornersToByteArray(corners,(MethodInfo *)0x0);
        uVar8 = (this->fields).materialID;
        if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
          FUN_?();
        }
        faceMaterials = Cube::Cube_CreateMaterialArray(uVar8,(MethodInfo *)0x0);
        this_04 = (Cube *)FUN_?(TypeInfo__Cube);
        Cube::Cube__ctor(this_04,byteCorners,faceMaterials,(MethodInfo *)0x0);
        if (this_03 != (MVCubeModelBase *)0x0) {
          aIStack_9[0]._0_4_ = uVar3;
          aIStack_9[0].z = iVar4;
          MVCubeModelBase::MVCubeModelBase_AddCube
                    (this_03,aIStack_9,(CubeBase *)this_04,(MethodInfo *)0x0);
          MVCubeModelBase::MVCubeModelBase_HandleDelta(this_03,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar5 != (MVGameControllerBase *)0x0) &&
          (pMVar6 = (pMVar5->fields).game, pMVar6 != (MVNetworkGame *)0x0)) &&
         (pWVar10 = (pMVar6->fields).worldNetwork, pWVar10 != (WorldNetwork *)0x0)) {
        this_01 = (RuntimeEventManager *)(pWVar10->fields)._.runtimeEventManagerNetwork;
        uVar8 = (this->fields).materialID;
        singleCubeFineGrainedEvent =
             (SingleCubeFineGrainedEvent *)
             FUN_?(TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent);
        (singleCubeFineGrainedEvent->fields)._.position.x = (int16_t)uVar3;
        (singleCubeFineGrainedEvent->fields)._.position.y = uVar3._2_2_;
        (singleCubeFineGrainedEvent->fields)._.position.z = iVar4;
        (singleCubeFineGrainedEvent->fields)._._RuntimeEventType_k__BackingField = 1;
        (singleCubeFineGrainedEvent->fields).material = uVar8;
        if (this_01 != (RuntimeEventManager *)0x0) {
          RuntimeEventManager::RuntimeEventManager_SendRuntimeEvent_1
                    (this_01,singleCubeFineGrainedEvent,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


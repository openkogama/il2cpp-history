
/* Void Awake() */

void Assembly-CSharp.dll::BulletThrowingStar::BulletThrowingStar_Awake
               (BulletThrowingStar *this,MethodInfo *method)

{
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields).tfrm = pTVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).tfrm >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                  ,0,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this == (BulletThrowingStar *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pvVar8 = (this->fields)._._._._.m_CachedPtr;
  if (pvVar8 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar9 = func_?(&UNK_?);
    FUN_?(uVar9,0);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pcRam_? = pcVar7;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar8,0);
  return;
}


/* BulletThrowingStar CreateBullet(PoolEnums, Vector3) */

BulletThrowingStar *
Assembly-CSharp.dll::BulletThrowingStar::BulletThrowingStar_CreateBullet
          (PoolEnums__Enum poolEnum,Vector3 *pos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  BulletThrowingStar_MethodInfo__EnumPoolManager__Instantiate<BulletThrowingStar>_PoolEnums_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
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
  if ((((pPVar1 != (PrefabPool *)0x0) &&
       (this = (pPVar1->fields).enumPoolManager, this != (EnumPoolManager *)0x0)) &&
      (pBVar2 = (BulletThrowingStar *)
                EnumPoolManager::EnumPoolManager_Instantiate
                          (this,poolEnum,
                           BulletThrowingStar_MethodInfo__EnumPoolManager__Instantiate<BulletThrowingStar>_PoolEnums_
                          ), pBVar2 != (BulletThrowingStar *)0x0)) &&
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)pBVar2,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar3 = (obj->fields)._._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      pBVar2 = (BulletThrowingStar *)(*pcVar4)();
      return pBVar2;
    }
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar4 = (code *)swi(3);
      pBVar2 = (BulletThrowingStar *)(*pcVar4)();
      return pBVar2;
    }
    pcRam_? = pcVar4;
    (*pcRam_?)(pvVar3);
    pHVar6 = (pBVar2->fields).ignoreWoIDs;
    if (pHVar6 != (HashSet_1_System_Int32_ *)0x0) {
      if (0 < (pHVar6->fields)._lastIndex) {
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(pHVar6->fields)._slots,0,(pHVar6->fields)._lastIndex,(MethodInfo *)0x0)
        ;
        pIVar7 = (pHVar6->fields)._buckets;
        if (pIVar7 == (Int32__Array *)0x0) goto DAT_?;
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(pHVar6->fields)._buckets,0,(int32_t)pIVar7->max_length,
                   (MethodInfo *)0x0);
        (pHVar6->fields)._count = 0;
        (pHVar6->fields)._lastIndex = 0;
        (pHVar6->fields)._freeList = -1;
      }
      piVar8 = &(pHVar6->fields)._version;
      *piVar8 = *piVar8 + 1;
      iVar9 = iRam_?;
      (pBVar2->fields).isFired = 0;
      (pBVar2->fields).fallRate = 0.0;
      (pBVar2->fields).onHitLocal = (BulletThrowingStar_OnHitDelegate *)0x0;
      if (iVar9 != 0) {
        uVar10 = (uint)((ulonglong)&(pBVar2->fields).onHitLocal >> 0xc);
        uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
        do {
          uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
          puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
          LOCK();
          bVar14 = uVar12 == *puVar13;
          if (bVar14) {
            *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
          }
          UNLOCK();
          iVar9 = iRam_?;
        } while (!bVar14);
      }
      (pBVar2->fields).onHit = (BulletThrowingStar_OnHitDelegate *)0x0;
      if (iVar9 != 0) {
        uVar10 = (uint)((ulonglong)&(pBVar2->fields).onHit >> 0xc);
        uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
        do {
          uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
          puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
          LOCK();
          bVar14 = uVar12 == *puVar13;
          if (bVar14) {
            *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
          }
          UNLOCK();
        } while (!bVar14);
      }
      (pBVar2->fields).initiatedPoolEnum = poolEnum;
      return pBVar2;
    }
  }
DAT_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  pBVar2 = (BulletThrowingStar *)(*pcVar4)();
  return pBVar2;
}


/* Boolean DoBulletCollision(Ray, VoxelHit ByRef, Single, HashSet`1[System.Int32]) */

bool Assembly-CSharp.dll::BulletThrowingStar::BulletThrowingStar_DoBulletCollision
               (Ray *ray,VoxelHit *voxelHit,float distance,HashSet_1_System_Int32_ *ignoreWoIDs,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Logic);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aRStack_1[0].m_Origin.x = (ray->m_Origin).x;
  aRStack_1[0].m_Origin.y = (ray->m_Origin).y;
  aRStack_1[0]._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
  aRStack_1[0].m_Direction.y = (ray->m_Direction).y;
  aRStack_1[0].m_Direction.z = (ray->m_Direction).z;
  uVar2 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Logic,(MethodInfo *)0x0);
  bVar3 = CollisionDetection::CollisionDetection_MVHit_1
                    (aRStack_1,voxelHit,distance,ignoreWoIDs,~(1 << (uVar2 & 0x1f)) & 0xfffffffb,
                     (MethodInfo *)0x0);
  if (bVar3 == 0) {
code_?:
    bVar3 = 0;
  }
  else {
    this = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this == (MVWorldObjectClientManager *)0x0) {
code_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      bVar3 = (*pcVar4)();
      return bVar3;
    }
    pMVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (this,voxelHit->woId,(MethodInfo *)0x0);
    if (pMVar5 == (MVWorldObjectClient *)0x0) goto code_?;
    if ((pMVar5->fields)._PlayInteractionType_k__BackingField != 0) {
      pMVar5 = MVWorldObjectClient::MVWorldObjectClient_GetHitInteractionHandlingWO
                         (pMVar5,(MethodInfo *)0x0);
      if (pMVar5 == (MVWorldObjectClient *)0x0) goto code_?;
      voxelHit->woId = (pMVar5->fields)._.id;
    }
    bVar3 = 1;
  }
  return bVar3;
}


/* Boolean DoCollisionCheck(Vector3, Single, Vector3, VoxelHit ByRef) */

bool Assembly-CSharp.dll::BulletThrowingStar::BulletThrowingStar_DoCollisionCheck
               (BulletThrowingStar *this,Vector3 *pos,float dist,Vector3 *dir,VoxelHit *voxelHit,
               MethodInfo *method)

{
  uStack_1._0_4_ = dir->x;
  uStack_1._4_4_ = dir->y;
  fVar2 = pos->z;
  fStack_3 = dir->z;
  fVar4 = (float)FUN_?(&uStack_1);
  if (_UNK_? < fVar4) {
    uVar5 = dir->x;
    uVar6 = dir->y;
    fVar7 = dir->z / fVar4;
    uStack_1 = CONCAT44((float)uVar6 / fVar4,(float)uVar5 / fVar4);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_1._0_4_ = (pVVar8->zeroVector).x;
    uStack_1._4_4_ = (pVVar8->zeroVector).y;
    fVar7 = (pVVar8->zeroVector).z;
  }
  fVar4 = (float)uStack_1;
  ignoreWoIds = (this->fields).ignoreWoIDs;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Logic);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aRStack_9[0].m_Origin.x = pos->x;
  aRStack_9[0].m_Origin.y = pos->y;
  aRStack_9[0].m_Direction.z = fVar7;
  aRStack_9[0].m_Direction.y = uStack_1._4_4_;
  aRStack_9[0].m_Direction.x = fVar4;
  aRStack_9[0].m_Origin.z = fVar2;
  uVar10 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Logic,(MethodInfo *)0x0);
  bVar11 = CollisionDetection::CollisionDetection_MVHit_1
                    (aRStack_9,voxelHit,dist,ignoreWoIds,~(1 << (uVar10 & 0x1f)) & 0xfffffffb,
                     (MethodInfo *)0x0);
  if (bVar11 == 0) {
code_?:
    bVar11 = 0;
  }
  else {
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_00 == (MVWorldObjectClientManager *)0x0) {
code_?:
      FUN_?();
      pcVar12 = (code *)swi(3);
      bVar11 = (*pcVar12)();
      return bVar11;
    }
    pMVar13 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (this_00,voxelHit->woId,(MethodInfo *)0x0);
    if (pMVar13 == (MVWorldObjectClient *)0x0) goto code_?;
    if ((pMVar13->fields)._PlayInteractionType_k__BackingField != 0) {
      pMVar13 = MVWorldObjectClient::MVWorldObjectClient_GetHitInteractionHandlingWO
                         (pMVar13,(MethodInfo *)0x0);
      if (pMVar13 == (MVWorldObjectClient *)0x0) goto code_?;
      voxelHit->woId = (pMVar13->fields)._.id;
    }
    bVar11 = 1;
  }
  return bVar11;
}


/* Vector3 FindTargetPos(Single) */

Vector3 * Assembly-CSharp.dll::BulletThrowingStar::BulletThrowingStar_FindTargetPos
                    (Vector3 *__return_storage_ptr__,BulletThrowingStar *this,float maxRange,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Logic);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aVStack_1[0].point.x = 0.0;
  aVStack_1[0].point.y = 0.0;
  aVStack_1[0].point.z = 0.0;
  aVStack_1[0].normal.x = 0.0;
  aVStack_1[0].interactionFlags = 0;
  aVStack_1[0].normal.y = 0.0;
  aVStack_1[0].normal.z = 0.0;
  aVStack_1[0].cubePos.x = 0;
  aVStack_1[0].cubePos.y = 0;
  aVStack_1[0].cubePos.z = 0;
  aVStack_1[0]._30_2_ = 0;
  aVStack_1[0].face = 0;
  aVStack_1[0].isCubeHit = 0;
  aVStack_1[0]._37_3_ = 0;
  aVStack_1[0].woId = 0;
  aVStack_1[0]._44_4_ = 0;
  aVStack_1[0].cube = (Cube *)0x0;
  aVStack_1[0].distance = 0.0;
  aVStack_1[0]._60_4_ = 0;
  aVStack_1[0].collider = (Collider *)0x0;
  aVStack_1[0].transform = (Transform *)0x0;
  uVar2 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                     (StringLiteral_Logic,(MethodInfo *)0x0);
  RStack_3.m_Origin.x = (this->fields).lineOfFire.m_Origin.x;
  RStack_3.m_Origin.y = (this->fields).lineOfFire.m_Origin.y;
  RStack_3._8_8_ = *(undefined8 *)&(this->fields).lineOfFire.m_Origin.z;
  RStack_3.m_Direction.y = (this->fields).lineOfFire.m_Direction.y;
  RStack_3.m_Direction.z = (this->fields).lineOfFire.m_Direction.z;
  bVar4 = CollisionDetection::CollisionDetection_MVHit_1
                     (&RStack_3,aVStack_1,maxRange,(this->fields).ignoreWoIDs,
                      ~(1 << (uVar2 & 0x1f)) & 0xfffffffb,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if ((this_00 == (GameObject *)0x0) ||
       (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0), obj == (Transform *)0x0)) {
      FUN_?();
      pcVar5 = (code *)swi(3);
      pVVar6 = (Vector3 *)(*pcVar5)();
      return pVVar6;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_7 = 0;
    fStack_8 = 0.0;
    pvVar9 = (obj->fields)._._.m_CachedPtr;
    if (pvVar9 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      pVVar6 = (Vector3 *)(*pcVar5)();
      return pVVar6;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar5 = (code *)swi(3);
      pVVar6 = (Vector3 *)(*pcVar5)();
      return pVVar6;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(pvVar9,&uStack_7);
    uVar11 = (this->fields).lineOfFire.m_Direction.x;
    fVar12 = (this->fields).lineOfFire.m_Direction.y;
    fVar13 = (this->fields).lineOfFire.m_Direction.z;
    __return_storage_ptr__->x = (float)uVar11 * maxRange + (float)uStack_7;
    __return_storage_ptr__->y = fVar12 * maxRange + uStack_7._4_4_;
    __return_storage_ptr__->z = fVar13 * maxRange + fStack_8;
  }
  else {
    uVar10._0_4_ = (this->fields).lineOfFire.m_Origin.x;
    uVar10._4_4_ = (this->fields).lineOfFire.m_Origin.y;
    fVar12 = (this->fields).lineOfFire.m_Origin.z;
    uVar14 = (this->fields).lineOfFire.m_Direction.x;
    uVar15 = (this->fields).lineOfFire.m_Direction.y;
    fVar16 = aVStack_1[0].distance * (float)uVar14;
    fVar17 = aVStack_1[0].distance * (float)uVar15;
    fVar13 = aVStack_1[0].distance * (this->fields).lineOfFire.m_Direction.z +
             (this->fields).lineOfFire.m_Origin.z;
    uStack_18 = uVar10;
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uVar19 = _UNK_?;
    uVar20 = _UNK_?;
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    uVar21 = _UNK_?;
    uVar22 = _UNK_?;
    uStack_7 = CONCAT44(fVar17 + (float)uVar10._4_4_,fVar16 + (float)(undefined4)uVar10);
    _UNK_? = (float)uVar20;
    _UNK_? = SUB84(uVar20,4);
    RStack_3.m_Origin.x = _UNK_?;
    RStack_3.m_Origin.y = _UNK_?;
    _UNK_? = (float)uVar19;
    _UNK_? = SUB84(uVar19,4);
    RStack_3.m_Origin.z = _UNK_?;
    RStack_3.m_Direction.x = _UNK_?;
    _UNK_? = uVar22;
    _UNK_? = uVar21;
    fStack_8 = fVar13;
    uStack_18 = uVar10;
    fStack_23 = fVar12;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar5 = (code *)swi(3);
      pVVar6 = (Vector3 *)(*pcVar5)();
      return pVVar6;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(&uStack_18,&uStack_7,&RStack_3,_UNK_?,1);
    __return_storage_ptr__->x = aVStack_1[0].point.x;
    __return_storage_ptr__->y = aVStack_1[0].point.y;
    __return_storage_ptr__->z = aVStack_1[0].point.z;
  }
  return __return_storage_ptr__;
}


/* Void Fire(Single, Single, Ray, HashSet`1[System.Int32], Single, Single) */

void Assembly-CSharp.dll::BulletThrowingStar::BulletThrowingStar_Fire
               (BulletThrowingStar *this,float speed,float rangeStraight,Ray *lineOfFire,
               HashSet_1_System_Int32_ *ignoreWoIDs,float rangeFall,float fallRate,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__BulletThrowingStar__OnStateChanged_UnityEngine__CullingGroupEvent_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CullingSubscriberBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).isFired != 0) {
    return;
  }
  bVar1 = iRam_? != 0;
  fVar2 = (lineOfFire->m_Origin).y;
  uVar3 = *(undefined8 *)&(lineOfFire->m_Origin).z;
  fVar4 = (lineOfFire->m_Direction).y;
  fVar5 = (lineOfFire->m_Direction).z;
  (this->fields).lineOfFire.m_Origin.x = (lineOfFire->m_Origin).x;
  (this->fields).lineOfFire.m_Origin.y = fVar2;
  *(undefined8 *)&(this->fields).lineOfFire.m_Origin.z = uVar3;
  (this->fields).lineOfFire.m_Direction.y = fVar4;
  (this->fields).lineOfFire.m_Direction.z = fVar5;
  (this->fields).fallRate = fallRate;
  (this->fields).ignoreWoIDs = ignoreWoIDs;
  if (bVar1) {
    uVar6 = (uint)((ulonglong)&(this->fields).ignoreWoIDs >> 0xc);
    uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
    do {
      uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
      puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar8 == *puVar9;
      if (bVar1) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pTVar10 = (this->fields).tfrm;
  uVar6 = 0;
  (this->fields).rangeFall = rangeFall;
  (this->fields).fallRate = fallRate;
  (this->fields).rangeStraight = rangeStraight;
  (this->fields).speed = speed;
  (this->fields).isFired = 1;
  (this->fields).inAir = 1;
  (this->fields).isFalling = 0;
  (this->fields).hasHit = 0;
  (this->fields).hasHitStatic = 0;
  (this->fields).hasNotified = 0;
  (this->fields).downwardForce = 0.0;
  (this->fields).totalDistTravelled = 0.0;
  (this->fields).coolOffStartTime = 0.0;
  if (pTVar10 == (Transform *)0x0) goto DAT_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  CStack_11.r = 0.0;
  CStack_11.g = 0.0;
  CStack_11.b = 0.0;
  pvVar12 = (pTVar10->fields)._._.m_CachedPtr;
  if (pvVar12 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar10,(MethodInfo *)0x0);
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pcVar13 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pcRam_? = pcVar13;
  (*pcRam_?)(pvVar12,&CStack_11);
  pVVar14 = BulletThrowingStar_FindTargetPos
                      ((Vector3 *)&CStack_15,this,rangeStraight,(MethodInfo *)0x0);
  pTVar10 = (this->fields).tfrm;
  CStack_16.r = pVVar14->x;
  CStack_16.g = pVVar14->y;
  fVar2 = pVVar14->z - CStack_11.b;
  fVar5 = CStack_16.g - CStack_11.g;
  fVar17 = CStack_16.r - CStack_11.r;
  uStack_18 = CONCAT44(fVar5,fVar17);
  fStack_19 = fVar2;
  fVar4 = (float)FUN_?(&uStack_18);
  if (_UNK_? < fVar4) {
    fVar2 = fVar2 / fVar4;
    uStack_18 = CONCAT44(fVar5 / fVar4,fVar17 / fVar4);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar20 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_18._0_4_ = (pVVar20->zeroVector).x;
    uStack_18._4_4_ = (pVVar20->zeroVector).y;
    fVar2 = (pVVar20->zeroVector).z;
  }
  uVar21 = uStack_18._4_4_;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar20 = TypeInfo__UnityEngine__Vector3->static_fields;
  CStack_16.r = (pVVar20->upVector).x;
  CStack_16.g = (pVVar20->upVector).y;
  CStack_16.b = (pVVar20->upVector).z;
  uStack_18 = CONCAT44(uVar21,(undefined4)uStack_18);
  CStack_22.r = 0.0;
  CStack_22.g = 0.0;
  CStack_22.b = 0.0;
  CStack_22.a = 0.0;
  pcVar13 = pcRam_?;
  fStack_19 = fVar2;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pcRam_? = pcVar13;
  (*pcRam_?)(&uStack_18);
  if (pTVar10 == (Transform *)0x0) {
code_?:
    FUN_?();
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  aCStack_23[0].r = CStack_22.r;
  aCStack_23[0].g = CStack_22.g;
  aCStack_23[0].b = CStack_22.b;
  aCStack_23[0].a = CStack_22.a;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar12 = (pTVar10->fields)._._.m_CachedPtr;
  if (pvVar12 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar10,(MethodInfo *)0x0);
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pcVar13 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pcRam_? = pcVar13;
  (*pcRam_?)(pvVar12);
  pTVar10 = (this->fields).tfrm;
  if (pTVar10 == (Transform *)0x0) goto code_?;
  CStack_15.r = CStack_11.r;
  CStack_15.g = CStack_11.g;
  CStack_15.b = CStack_11.b;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar12 = (pTVar10->fields)._._.m_CachedPtr;
  if (pvVar12 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar10,(MethodInfo *)0x0);
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pcVar13 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pcRam_? = pcVar13;
  (*pcRam_?)(pvVar12,&CStack_15);
  pPVar24 = (this->fields).pSystem;
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
  if (pPVar24 != (ParticleSystem *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pPVar24->fields)._._.m_CachedPtr != (void *)0x0) {
      pPVar24 = (this->fields).pSystem;
      if (pPVar24 == (ParticleSystem *)0x0) goto DAT_?;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play
                (pPVar24,1,(MethodInfo *)0x0);
    }
  }
  pAVar25 = (this->fields).aSource;
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
  if (pAVar25 != (AudioSource *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pAVar25->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pAVar25 = (this->fields).aSource;
      if (pAVar25 == (AudioSource *)0x0) goto DAT_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_loop
                (pAVar25,1,(MethodInfo *)0x0);
      pAVar25 = (this->fields).aSource;
      if (pAVar25 == (AudioSource *)0x0) goto DAT_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                (pAVar25,(MethodInfo *)0x0);
    }
  }
  pTVar10 = (this->fields).tfrm;
  if (pTVar10 != (Transform *)0x0) {
    pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                        ((Vector3 *)&CStack_15,pTVar10,(MethodInfo *)0x0);
    pcVar13 = pcRam_?;
    fVar2 = pVVar14->z;
    fVar4 = pVVar14->y;
    (this->fields).direction.x = pVVar14->x;
    (this->fields).direction.y = fVar4;
    (this->fields).direction.z = fVar2;
    pcVar26 = pcRam_?;
    if ((pcVar13 == (code *)0x0) &&
       (pcVar13 = (code *)FUN_?(&UNK_?), pcVar26 = pcVar13, pcVar13 == (code *)0x0))
    {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pcRam_? = pcVar26;
    uVar27 = (*pcVar13)(_UNK_?,_UNK_?);
    pcVar13 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pcRam_? = pcVar13;
    fVar2 = (float)(*pcRam_?)(TypeRef__System__Activator__T._0_4_,_UNK_?);
    (this->fields).airRotation.x = (float)(int)(ulonglong)uVar27;
    (this->fields).airRotation.y = (float)(int)((ulonglong)uVar27 >> 0x20);
    (this->fields).airRotation.z = fVar2;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this,1,(MethodInfo *)0x0);
    pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (pTVar10 != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      CStack_11.r = 0.0;
      CStack_11.g = 0.0;
      CStack_11.b = 0.0;
      pvVar12 = (pTVar10->fields)._._.m_CachedPtr;
      if (pvVar12 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar10,(MethodInfo *)0x0);
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pcVar13 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pcRam_? = pcVar13;
      (*pcRam_?)(pvVar12,&CStack_11);
      callback = (UnityAction_1_UnityEngine_CullingGroupEvent_ *)
                 FUN_?(
                              TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                              );
      FUN_?(callback,this);
      pCVar28 = (CullingSubscriberBase *)FUN_?(TypeInfo__CullingSubscriberBase);
      CullingSubscriberBase::CullingSubscriberBase__ctor_1(pCVar28,callback,(MethodInfo *)0x0);
      CStack_15.b = CStack_11.b;
      CStack_15.r = CStack_11.r;
      CStack_15.g = CStack_11.g;
      CullingSubscriberBase::CullingSubscriberBase_Setup
                (pCVar28,_UNK_?,(Vector3 *)&CStack_15,(MethodInfo *)0x0);
      bVar1 = iRam_? != 0;
      (this->fields).cullingSubscriberBase = pCVar28;
      if (bVar1) {
        uVar27 = (uint)((ulonglong)&(this->fields).cullingSubscriberBase >> 0xc);
        uVar7 = (ulonglong)((uVar27 & 0x1fffff) >> 6);
        do {
          uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
          puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
          LOCK();
          bVar1 = uVar8 == *puVar9;
          if (bVar1) {
            *puVar9 = uVar8 | 1L << (ulonglong)(uVar27 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      pCVar28 = (this->fields).cullingSubscriberBase;
      if (pCVar28 != (CullingSubscriberBase *)0x0) {
        (pCVar28->fields)._DistanceBandIndex_k__BackingField = 5;
        pMVar29 = (this->fields).meshRenderers;
        if (pMVar29 != (MeshRenderer__Array *)0x0) {
          ppMVar30 = pMVar29->vector;
          for (; (int)uVar6 < (int)pMVar29->max_length; uVar6 = uVar6 + 1) {
            if ((uint)pMVar29->max_length <= uVar6) {
code_?:
              FUN_?();
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            obj = *ppMVar30;
            if (obj == (MeshRenderer *)0x0) goto DAT_?;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar12 = (obj->fields)._._._.m_CachedPtr;
            if (pvVar12 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            pcVar13 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
              uVar3 = func_?(&UNK_?);
              FUN_?(uVar3,0);
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            pcRam_? = pcVar13;
            lVar31 = (*pcRam_?)(pvVar12);
            uVar27 = 0;
            puVar32 = (undefined8 *)(lVar31 + 0x20);
            if (lVar31 == 0) goto DAT_?;
            for (; (int)uVar27 < (int)*(uint *)(lVar31 + 0x18); uVar27 = uVar27 + 1) {
              if (*(uint *)(lVar31 + 0x18) <= uVar27) goto code_?;
              this_00 = (Material *)*puVar32;
              if (this_00 == (Material *)0x0) goto DAT_?;
              pCVar33 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                                  (aCStack_23,this_00,(MethodInfo *)0x0);
              fVar2 = pCVar33->r;
              pCVar33 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                                  (&CStack_22,this_00,(MethodInfo *)0x0);
              CStack_15.g = pCVar33->g;
              CStack_15.r = fVar2;
              pCVar33 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                                  (&CStack_16,this_00,(MethodInfo *)0x0);
              CStack_15.a = 1.0;
              CStack_15.b = pCVar33->b;
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                        (this_00,&CStack_15,(MethodInfo *)0x0);
              puVar32 = puVar32 + 1;
            }
            ppMVar30 = ppMVar30 + 1;
          }
          pTVar34 = (this->fields).trailRenderer;
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
          if (pTVar34 != (TrailRenderer *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if ((pTVar34->fields)._._._.m_CachedPtr != (void *)0x0) {
              pTVar34 = (this->fields).trailRenderer;
              if (pTVar34 == (TrailRenderer *)0x0) goto DAT_?;
              UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                        ((Renderer *)pTVar34,1,(MethodInfo *)0x0);
            }
          }
          return;
        }
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnStateChanged(CullingGroupEvent) */

void Assembly-CSharp.dll::BulletThrowingStar::BulletThrowingStar_OnStateChanged
               (BulletThrowingStar *this,CullingGroupEvent cullingGroupEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).cullingSubscriberBase;
  uVar2 = 0;
  pPStackX_10 = (ParticleSystem *)0x0;
  if (pCVar1 != (CullingSubscriberBase *)0x0) {
    distanceBandIndex = (pCVar1->fields)._DistanceBandIndex_k__BackingField;
    if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar3 = CullingApiWrapper::CullingApiWrapper_Visible
                      (cullingGroupEvent,distanceBandIndex,(MethodInfo *)0x0);
    pMVar4 = (this->fields).meshRenderers;
    if (pMVar4 != (MeshRenderer__Array *)0x0) {
      ppMVar5 = pMVar4->vector;
      for (; (int)uVar2 < (int)pMVar4->max_length; uVar2 = uVar2 + 1) {
        if ((uint)pMVar4->max_length <= uVar2) {
          FUN_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        obj = *ppMVar5;
        if (obj == (MeshRenderer *)0x0) goto code_?;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar7 = (obj->fields)._._._.m_CachedPtr;
        if (pvVar7 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pcVar6 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
          uVar8 = func_?(&UNK_?);
          FUN_?(uVar8,0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pcRam_? = pcVar6;
        (*pcRam_?)(pvVar7);
        ppMVar5 = ppMVar5 + 1;
      }
      pTVar9 = (this->fields).trailRenderer;
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
      if (pTVar9 != (TrailRenderer *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pTVar9->fields)._._._.m_CachedPtr != (void *)0x0) {
          pTVar9 = (this->fields).trailRenderer;
          if (pTVar9 == (TrailRenderer *)0x0) goto code_?;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar7 = (pTVar9->fields)._._._.m_CachedPtr;
          if (pvVar7 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pcVar6 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
            uVar8 = func_?(&UNK_?);
            FUN_?(uVar8,0);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pcRam_? = pcVar6;
          (*pcRam_?)(pvVar7,bVar3);
        }
      }
      pPVar10 = (this->fields).pSystem;
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
      if (pPVar10 != (ParticleSystem *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pPVar10->fields)._._.m_CachedPtr != (void *)0x0) {
          pPStackX_8 = (this->fields).pSystem;
          if (pPStackX_8 == (ParticleSystem *)0x0) goto code_?;
          if (iRam_? != 0) {
            uVar2 = (uint)((ulonglong)&pPStackX_8 >> 0xc);
            puVar11 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar12 = *puVar11;
              LOCK();
              uVar13 = *puVar11;
              if (uVar12 == uVar13) {
                *puVar11 = uVar12 | 1L << (uVar2 & 0x3f);
              }
              UNLOCK();
            } while (uVar12 != uVar13);
          }
          pcVar6 = pcRam_?;
          pPStackX_10 = pPStackX_8;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
            uVar8 = func_?(&UNK_?);
            FUN_?(uVar8,0);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pcRam_? = pcVar6;
          (*pcRam_?)(&pPStackX_10,bVar3);
        }
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::BulletThrowingStar::BulletThrowingStar_Update
               (BulletThrowingStar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).inAir == 0) {
    pAVar1 = (this->fields).aSource;
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
    if (pAVar1 != (AudioSource *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pAVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
        pAVar1 = (this->fields).aSource;
        if (pAVar1 == (AudioSource *)0x0) goto code_?;
        bVar2 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                           (pAVar1,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          pAVar1 = (this->fields).aSource;
          if (pAVar1 == (AudioSource *)0x0) goto code_?;
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop_1
                    (pAVar1,(MethodInfo *)0x0);
        }
      }
    }
    pPVar3 = (this->fields).pSystem;
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
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uVar4 = 0;
    bVar5 = true;
    if (pPVar3 != (ParticleSystem *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pPVar3->fields)._._.m_CachedPtr != (void *)0x0) {
        pPVar3 = (this->fields).pSystem;
        if (pPVar3 == (ParticleSystem *)0x0) goto code_?;
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_1
                  (pPVar3,1,(MethodInfo *)0x0);
        pPVar3 = (this->fields).pSystem;
        if (pPVar3 == (ParticleSystem *)0x0) goto code_?;
        bVar2 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                 ParticleSystem_IsAlive(pPVar3,1,(MethodInfo *)0x0);
        bVar5 = true;
        if (bVar2 != 0) {
          bVar5 = false;
        }
      }
    }
    if (((this->fields).hasHit != 0) && ((this->fields).hasNotified == 0)) {
      (this->fields).hasNotified = 1;
      if ((this->fields).onHit != (BulletThrowingStar_OnHitDelegate *)0x0) {
        pBVar6 = (this->fields).onHit;
        RStack_7.m_Origin.x = (this->fields).lineOfFire.m_Origin.x;
        RStack_7.m_Origin.y = (this->fields).lineOfFire.m_Origin.y;
        RStack_7._8_8_ = *(undefined8 *)&(this->fields).lineOfFire.m_Origin.z;
        RStack_7.m_Direction.y = (this->fields).lineOfFire.m_Direction.y;
        RStack_7.m_Direction.z = (this->fields).lineOfFire.m_Direction.z;
        uStack_8._0_4_ = (this->fields).voxelHit.point.x;
        uStack_8._4_4_ = (this->fields).voxelHit.point.y;
        uStack_9 = *(undefined8 *)&(this->fields).voxelHit.point.z;
        uStack_10._0_4_ = (this->fields).voxelHit.normal.y;
        uStack_10._4_4_ = (this->fields).voxelHit.normal.z;
        uStack_11 = *(undefined8 *)&(this->fields).voxelHit.cubePos;
        uStack_12._0_4_ = (this->fields).voxelHit.face;
        uStack_12._4_1_ = (this->fields).voxelHit.isCubeHit;
        uStack_12._5_3_ = *(undefined3 *)&(this->fields).voxelHit.field_0x25;
        uStack_13 = *(undefined8 *)&(this->fields).voxelHit.woId;
        pCStack_14 = (this->fields).voxelHit.cube;
        uStack_15 = *(undefined8 *)&(this->fields).voxelHit.distance;
        pCStack_16 = (this->fields).voxelHit.collider;
        pTStack_17 = (this->fields).voxelHit.transform;
        iStack_18 = (this->fields).voxelHit.interactionFlags;
        (*(pBVar6->fields)._._.invoke_impl)
                  ((pBVar6->fields)._._.method_code,&uStack_8,&RStack_7,
                   (pBVar6->fields)._._.method);
      }
      if ((this->fields).onHitLocal != (BulletThrowingStar_OnHitDelegate *)0x0) {
        pBVar6 = (this->fields).onHitLocal;
        RStack_7.m_Origin.x = (this->fields).lineOfFire.m_Origin.x;
        RStack_7.m_Origin.y = (this->fields).lineOfFire.m_Origin.y;
        RStack_7._8_8_ = *(undefined8 *)&(this->fields).lineOfFire.m_Origin.z;
        RStack_7.m_Direction.y = (this->fields).lineOfFire.m_Direction.y;
        RStack_7.m_Direction.z = (this->fields).lineOfFire.m_Direction.z;
        uStack_8._0_4_ = (this->fields).voxelHit.point.x;
        uStack_8._4_4_ = (this->fields).voxelHit.point.y;
        uStack_9 = *(undefined8 *)&(this->fields).voxelHit.point.z;
        uStack_10._0_4_ = (this->fields).voxelHit.normal.y;
        uStack_10._4_4_ = (this->fields).voxelHit.normal.z;
        uStack_11 = *(undefined8 *)&(this->fields).voxelHit.cubePos;
        uStack_12._0_4_ = (this->fields).voxelHit.face;
        uStack_12._4_1_ = (this->fields).voxelHit.isCubeHit;
        uStack_12._5_3_ = *(undefined3 *)&(this->fields).voxelHit.field_0x25;
        uStack_13 = *(undefined8 *)&(this->fields).voxelHit.woId;
        pCStack_14 = (this->fields).voxelHit.cube;
        uStack_15 = *(undefined8 *)&(this->fields).voxelHit.distance;
        pCStack_16 = (this->fields).voxelHit.collider;
        pTStack_17 = (this->fields).voxelHit.transform;
        iStack_18 = (this->fields).voxelHit.interactionFlags;
        (*(pBVar6->fields)._._.invoke_impl)
                  ((pBVar6->fields)._._.method_code,&uStack_8,&RStack_7,
                   (pBVar6->fields)._._.method);
      }
      if ((this->fields).hasHitStatic == 0) {
        (this->fields).hasHitStatic = 1;
        fVar19 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        (this->fields).coolOffStartTime = fVar19;
        pMVar20 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar20 == (MVWorldObjectClientManager *)0x0) goto code_?;
        id = MVWorldObjectClientManager::
             MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent
                       (pMVar20,(this->fields).voxelHit.woId,
                        int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                       );
        pMVar20 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar20 == (MVWorldObjectClientManager *)0x0) goto code_?;
        pMVar21 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                            (pMVar20,id,(MethodInfo *)0x0);
        if (pMVar21 != (MVWorldObjectClient *)0x0) {
          pIVar22 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                              (pMVar21,(MethodInfo *)0x0);
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
            FUN_?();
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (pIVar22 == (InteractionDataHandlerBase *)0x0) {
            bVar23 = true;
          }
          else {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            bVar23 = (pIVar22->fields)._._._._._.m_CachedPtr == (void *)0x0;
          }
          (this->fields).hasHitStatic = bVar23;
        }
      }
    }
    fVar19 = (this->fields).coolOffStartTime;
    uVar24._0_4_ = (this->fields).coolOffDuration;
    pcVar25 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar25 = (code *)FUN_?(), pcVar25 == (code *)0x0)) {
      uVar24 = func_?(&UNK_?);
      FUN_?(uVar24,0);
      pcVar25 = (code *)swi(3);
      (*pcVar25)();
      return;
    }
    pcRam_? = pcVar25;
    uVar24._4_4_ = (float)(*pcRam_?)();
    if (((float)uVar24 + fVar19 <= uVar24._4_4_) || ((this->fields).hasHitStatic == 0)) {
      if (!bVar5) {
        return;
      }
      pCVar26 = (this->fields).cullingSubscriberBase;
      if (pCVar26 != (CullingSubscriberBase *)0x0) {
        CullingSubscriberBase::CullingSubscriberBase_Destroy(pCVar26,(MethodInfo *)0x0);
        bVar5 = iRam_? != 0;
        (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)0x0;
        if (bVar5) {
          uVar4 = (uint)((ulonglong)&(this->fields).cullingSubscriberBase >> 0xc);
          uVar27 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
          do {
            uVar28 = *(ulonglong *)(uVar27 * 8 + 0xADDR);
            puVar29 = (ulonglong *)(uVar27 * 8 + 0xADDR);
            LOCK();
            bVar5 = uVar28 == *puVar29;
            if (bVar5) {
              *puVar29 = uVar28 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (!bVar5);
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__PrefabPool);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pPVar30 = TypeInfo__PrefabPool->static_fields->instance;
        if (((pPVar30 != (PrefabPool *)0x0) &&
            (pEVar31 = (pPVar30->fields).enumPoolManager, pEVar31 != (EnumPoolManager *)0x0)) &&
           (pPVar32 = (pEVar31->fields).lookupTable, pPVar32 != (Pool__Array *)0x0)) {
          uVar4 = (this->fields).initiatedPoolEnum;
          if ((uint)pPVar32->max_length <= uVar4) goto code_?;
          if (pPVar32->vector[(int)uVar4] != (Pool *)0x0) {
            Pool::Pool_ReturnObject
                      (pPVar32->vector[(int)uVar4],(MonoBehaviour *)this,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto code_?;
    }
    fVar33 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    uVar24._4_4_ = _UNK_?;
    pMVar34 = (this->fields).meshRenderers;
    fVar19 = (this->fields).coolOffStartTime;
    uVar24._0_4_ = (this->fields).coolOffDuration;
    if (pMVar34 == (MeshRenderer__Array *)0x0) goto code_?;
    ppMVar35 = pMVar34->vector;
    while( true ) {
      if ((int)pMVar34->max_length <= (int)uVar4) {
        return;
      }
      if ((uint)pMVar34->max_length <= uVar4) break;
      obj = *ppMVar35;
      if (obj == (MeshRenderer *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar36 = (obj->fields)._._._.m_CachedPtr;
      if (pvVar36 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar25 = (code *)swi(3);
        (*pcVar25)();
        return;
      }
      pcVar25 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar25 = (code *)FUN_?(&UNK_?), pcVar25 == (code *)0x0)) {
        uVar24 = func_?(&UNK_?);
        FUN_?(uVar24,0);
        pcVar25 = (code *)swi(3);
        (*pcVar25)();
        return;
      }
      pcRam_? = pcVar25;
      lVar37 = (*pcRam_?)(pvVar36);
      uVar38 = 0;
      puVar39 = (undefined8 *)(lVar37 + 0x20);
      if (lVar37 == 0) goto code_?;
      for (; (int)uVar38 < (int)*(uint *)(lVar37 + 0x18); uVar38 = uVar38 + 1) {
        if (*(uint *)(lVar37 + 0x18) <= uVar38) goto code_?;
        this_00 = (Material *)*puVar39;
        if (this_00 == (Material *)0x0) goto code_?;
        pCVar40 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                            ((Color *)&RStack_7,this_00,(MethodInfo *)0x0);
        fVar41 = pCVar40->r;
        pCVar40 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                            (&CStack_42,this_00,(MethodInfo *)0x0);
        CStack_43.g = pCVar40->g;
        CStack_43.r = fVar41;
        pCVar40 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                            (&CStack_44,this_00,(MethodInfo *)0x0);
        CStack_43.a = uVar24._4_4_ - (fVar33 - fVar19) / (float)uVar24;
        CStack_43.b = pCVar40->b;
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                  (this_00,&CStack_43,(MethodInfo *)0x0);
        puVar39 = puVar39 + 1;
      }
      uVar4 = uVar4 + 1;
      ppMVar35 = ppMVar35 + 1;
    }
    goto code_?;
  }
  CStack_42.r = (this->fields).airRotation.x;
  CStack_42.g = (this->fields).airRotation.y;
  pTVar45 = (this->fields).tfrm;
  fVar19 = (this->fields).airRotation.z;
  pcVar25 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar25 = (code *)FUN_?(&UNK_?), pcVar25 == (code *)0x0)) {
    uVar24 = func_?(&UNK_?);
    FUN_?(uVar24,0);
    pcVar25 = (code *)swi(3);
    (*pcVar25)();
    return;
  }
  pcRam_? = pcVar25;
  uVar24._4_4_ = (float)(*pcRam_?)();
  uVar24._0_4_ = (this->fields).speed;
  if (pTVar45 == (Transform *)0x0) goto code_?;
  CStack_42.g = CStack_42.g * uVar24._4_4_ * (float)uVar24;
  CStack_42.r = CStack_42.r * uVar24._4_4_ * (float)uVar24;
  CStack_42.b = fVar19 * uVar24._4_4_ * (float)uVar24;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate
            (pTVar45,(Vector3 *)&CStack_42,Space__Enum_Self,(MethodInfo *)0x0);
  fVar19 = (this->fields).totalDistTravelled;
  pfVar46 = &(this->fields).rangeStraight;
  if ((*pfVar46 <= fVar19 && fVar19 != *pfVar46) && ((this->fields).isFalling == 0)) {
    (this->fields).isFalling = 1;
  }
  CStack_43.r = (this->fields).direction.x;
  CStack_43.g = (this->fields).direction.y;
  fVar19 = (this->fields).speed;
  fVar33 = fVar19 * CStack_43.r;
  uVar24._0_4_ = (this->fields).direction.z;
  uVar24._4_4_ = fVar19 * CStack_43.g;
  pcVar25 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar25 = (code *)FUN_?(&UNK_?), pcVar25 == (code *)0x0)) {
    uVar24 = func_?(&UNK_?);
    FUN_?(uVar24,0);
    pcVar25 = (code *)swi(3);
    (*pcVar25)();
    return;
  }
  pcRam_? = pcVar25;
  fVar41 = (float)(*pcRam_?)();
  uVar24._4_4_ = uVar24._4_4_ * fVar41;
  fVar19 = fVar19 * (float)uVar24 * fVar41;
  CStack_44.g = uVar24._4_4_;
  CStack_44.r = fVar33 * fVar41;
  CStack_44.b = fVar19;
  if ((this->fields).isFalling != 0) {
    uVar24._0_4_ = (this->fields).speed;
    fVar33 = (this->fields).downwardForce;
    fVar41 = (this->fields).fallRate;
    pcVar25 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar25 = (code *)FUN_?(&UNK_?), pcVar25 == (code *)0x0)) {
      uVar24 = func_?(&UNK_?);
      FUN_?(uVar24,0);
      pcVar25 = (code *)swi(3);
      (*pcVar25)();
      return;
    }
    pcRam_? = pcVar25;
    fVar47 = (float)(*pcRam_?)();
    pcVar25 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar25 = (code *)FUN_?(&UNK_?), pcVar25 == (code *)0x0)) {
      uVar24 = func_?(&UNK_?);
      FUN_?(uVar24,0);
      pcVar25 = (code *)swi(3);
      (*pcVar25)();
      return;
    }
    pcRam_? = pcVar25;
    fVar48 = (float)(*pcRam_?)();
    fVar33 = fVar48 * (float)((uint)fVar41 ^ _UNK_?) * (float)uVar24 * (float)uVar24 *
                      fVar47 + fVar33;
    (this->fields).downwardForce = fVar33;
    uVar24._4_4_ = fVar33 + uVar24._4_4_;
    CStack_44.g = uVar24._4_4_;
  }
  pTVar45 = (this->fields).tfrm;
  if (pTVar45 == (Transform *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  CStack_49.r = 0.0;
  CStack_49.g = 0.0;
  CStack_49.b = 0.0;
  pvVar36 = (pTVar45->fields)._._.m_CachedPtr;
  if (pvVar36 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar45,(MethodInfo *)0x0);
    pcVar25 = (code *)swi(3);
    (*pcVar25)();
    return;
  }
  pcVar25 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar25 = (code *)FUN_?(&UNK_?), pcVar25 == (code *)0x0)) {
    uVar24 = func_?(&UNK_?);
    FUN_?(uVar24,0);
    pcVar25 = (code *)swi(3);
    (*pcVar25)();
    return;
  }
  pcRam_? = pcVar25;
  (*pcRam_?)(pvVar36);
  uVar24._4_4_ = CStack_49.g + uVar24._4_4_;
  uVar24._0_4_ = CStack_49.r + CStack_44.r;
  fVar19 = CStack_49.b + fVar19;
  pTVar45 = (this->fields).tfrm;
  CStack_42.g = uVar24._4_4_;
  CStack_42.r = (float)uVar24;
  if (pTVar45 == (Transform *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  CStack_50.r = 0.0;
  CStack_50.g = 0.0;
  CStack_50.b = 0.0;
  pvVar36 = (pTVar45->fields)._._.m_CachedPtr;
  if (pvVar36 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar45,(MethodInfo *)0x0);
    pcVar25 = (code *)swi(3);
    (*pcVar25)();
    return;
  }
  pcVar25 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar25 = (code *)FUN_?(&UNK_?), pcVar25 == (code *)0x0)) {
    uVar24 = func_?(&UNK_?);
    FUN_?(uVar24,0);
    pcVar25 = (code *)swi(3);
    (*pcVar25)();
    return;
  }
  pcRam_? = pcVar25;
  (*pcRam_?)(pvVar36);
  fVar48 = (float)uVar24 - CStack_50.r;
  fVar51 = uVar24._4_4_ - CStack_50.g;
  fVar33 = fVar19 - CStack_50.b;
  CStack_50.g = fVar51;
  CStack_50.r = fVar48;
  CStack_50.b = fVar33;
  CStack_43._0_8_ = CStack_50._0_8_;
  CStack_43.b = fVar33;
  fVar47 = (float)FUN_?(&CStack_50);
  fVar41 = _UNK_?;
  if (_UNK_? < fVar47) {
    fVar33 = fVar33 / fVar47;
    CStack_49.g = fVar51 / fVar47;
    CStack_49.r = fVar48 / fVar47;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar52 = TypeInfo__UnityEngine__Vector3->static_fields;
    CStack_49.r = (pVVar52->zeroVector).x;
    CStack_49.g = (pVVar52->zeroVector).y;
    fVar33 = (pVVar52->zeroVector).z;
  }
  pTVar45 = (this->fields).tfrm;
  if (pTVar45 == (Transform *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  CStack_50.r = 0.0;
  CStack_50.g = 0.0;
  CStack_50.b = 0.0;
  pvVar36 = (pTVar45->fields)._._.m_CachedPtr;
  if (pvVar36 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar45,(MethodInfo *)0x0);
    pcVar25 = (code *)swi(3);
    (*pcVar25)();
    return;
  }
  pcVar25 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar25 = (code *)FUN_?(&UNK_?), pcVar25 == (code *)0x0)) {
    uVar24 = func_?(&UNK_?);
    FUN_?(uVar24,0);
    pcVar25 = (code *)swi(3);
    (*pcVar25)();
    return;
  }
  pcRam_? = pcVar25;
  (*pcRam_?)(pvVar36);
  distance = (float)FUN_?(&CStack_44);
  fVar47 = CStack_50.b;
  uVar53 = CStack_50._0_8_;
  fVar48 = CStack_49.r;
  fVar51 = CStack_49.g;
  CStack_44.r = CStack_49.r;
  CStack_44.g = CStack_49.g;
  CStack_44.b = fVar33;
  fVar54 = (float)FUN_?(&CStack_44);
  if (fVar41 < fVar54) {
    CStack_44.r = fVar48 / fVar54;
    fVar41 = fVar33 / fVar54;
    CStack_44.g = fVar51 / fVar54;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar52 = TypeInfo__UnityEngine__Vector3->static_fields;
    CStack_44.r = (pVVar52->zeroVector).x;
    CStack_44.g = (pVVar52->zeroVector).y;
    fVar41 = (pVVar52->zeroVector).z;
  }
  fVar54 = CStack_44.r;
  ignoreWoIds = (this->fields).ignoreWoIDs;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Logic);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar55 = CStack_50._0_8_;
  RStack_7.m_Direction.z = fVar41;
  RStack_7.m_Direction.y = CStack_44.g;
  CStack_50.r = (float)uVar53;
  CStack_50.g = SUB84(uVar53,4);
  RStack_7.m_Origin.x = CStack_50.r;
  RStack_7.m_Origin.y = CStack_50.g;
  RStack_7.m_Direction.x = fVar54;
  RStack_7.m_Origin.z = fVar47;
  CStack_50._0_8_ = uVar55;
  uVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                     (StringLiteral_Logic,(MethodInfo *)0x0);
  bVar2 = CollisionDetection::CollisionDetection_MVHit_1
                     (&RStack_7,&(this->fields).voxelHit,distance,ignoreWoIds,
                      ~(1 << (uVar4 & 0x1f)) & 0xfffffffb,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pMVar20 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((pMVar20 == (MVWorldObjectClientManager *)0x0) ||
       (pMVar21 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                            (pMVar20,(this->fields).voxelHit.woId,(MethodInfo *)0x0),
       pMVar21 == (MVWorldObjectClient *)0x0)) goto code_?;
    if ((pMVar21->fields)._PlayInteractionType_k__BackingField != 0) {
      pMVar21 = MVWorldObjectClient::MVWorldObjectClient_GetHitInteractionHandlingWO
                          (pMVar21,(MethodInfo *)0x0);
      if (pMVar21 == (MVWorldObjectClient *)0x0) goto code_?;
      (this->fields).voxelHit.woId = (pMVar21->fields)._.id;
    }
    uVar24._0_4_ = (this->fields).voxelHit.point.x;
    uVar24._4_4_ = (this->fields).voxelHit.point.y;
    fVar19 = (this->fields).voxelHit.point.z;
    (this->fields).inAir = 0;
    (this->fields).hasHit = 1;
    CStack_42._0_8_ = uVar24;
  }
code_?:
  pTVar45 = (this->fields).tfrm;
  if (pTVar45 != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    CStack_44.r = 0.0;
    CStack_44.g = 0.0;
    CStack_44.b = 0.0;
    pvVar36 = (pTVar45->fields)._._.m_CachedPtr;
    if (pvVar36 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar45,(MethodInfo *)0x0);
      pcVar25 = (code *)swi(3);
      (*pcVar25)();
      return;
    }
    pcVar25 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar25 = (code *)FUN_?(&UNK_?), pcVar25 == (code *)0x0)) {
      uVar24 = func_?(&UNK_?);
      FUN_?(uVar24,0);
      pcVar25 = (code *)swi(3);
      (*pcVar25)();
      return;
    }
    pcRam_? = pcVar25;
    (*pcRam_?)(pvVar36,&CStack_44);
    fVar41 = fVar48 * _UNK_? + CStack_42.r;
    fVar47 = fVar51 * _UNK_? + CStack_42.g;
    fVar33 = fVar33 * _UNK_? + fVar19;
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uVar55 = _UNK_?;
    uVar53 = _UNK_?;
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    uVar56 = _UNK_?;
    uVar57 = _UNK_?;
    CStack_42.g = fVar47;
    CStack_42.r = fVar41;
    CStack_50.r = CStack_44.r;
    CStack_50.g = CStack_44.g;
    _UNK_? = (float)uVar53;
    _UNK_? = SUB84(uVar53,4);
    RStack_7.m_Origin.x = _UNK_?;
    RStack_7.m_Origin.y = _UNK_?;
    _UNK_? = (float)uVar55;
    _UNK_? = SUB84(uVar55,4);
    RStack_7.m_Origin.z = _UNK_?;
    RStack_7.m_Direction.x = _UNK_?;
    CStack_50.b = CStack_44.b;
    _UNK_? = uVar57;
    _UNK_? = uVar56;
    CStack_42.b = fVar33;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pcVar25 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar25 = (code *)FUN_?(&UNK_?), pcVar25 == (code *)0x0)) {
      uVar24 = func_?(&UNK_?);
      FUN_?(uVar24,0);
      pcVar25 = (code *)swi(3);
      (*pcVar25)();
      return;
    }
    pcRam_? = pcVar25;
    (*pcRam_?)(&CStack_50,&CStack_42,&RStack_7,0,1);
    fVar33 = (this->fields).totalDistTravelled;
    fVar41 = (float)FUN_?(&CStack_43);
    pTVar45 = (this->fields).tfrm;
    (this->fields).totalDistTravelled = fVar41 + fVar33;
    if (pTVar45 == (Transform *)0x0) {
      FUN_?();
      pcVar25 = (code *)swi(3);
      (*pcVar25)();
      return;
    }
    CStack_49.g = uVar24._4_4_;
    CStack_49.r = (float)uVar24;
    CStack_49.b = fVar19;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar36 = (pTVar45->fields)._._.m_CachedPtr;
    if (pvVar36 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar45,(MethodInfo *)0x0);
      pcVar25 = (code *)swi(3);
      (*pcVar25)();
      return;
    }
    pcVar25 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar25 = (code *)FUN_?(&UNK_?), pcVar25 == (code *)0x0)) {
      uVar24 = func_?(&UNK_?);
      FUN_?(uVar24,0);
      pcVar25 = (code *)swi(3);
      (*pcVar25)();
      return;
    }
    pcRam_? = pcVar25;
    (*pcRam_?)(pvVar36);
    if ((this->fields).rangeFall + (this->fields).rangeStraight < (this->fields).totalDistTravelled)
    {
      (this->fields).inAir = 0;
    }
    pCVar26 = (this->fields).cullingSubscriberBase;
    pTVar45 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (pTVar45 != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      CStack_44.r = 0.0;
      CStack_44.g = 0.0;
      CStack_44.b = 0.0;
      pvVar36 = (pTVar45->fields)._._.m_CachedPtr;
      if (pvVar36 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar45,(MethodInfo *)0x0);
        pcVar25 = (code *)swi(3);
        (*pcVar25)();
        return;
      }
      pcVar25 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar25 = (code *)FUN_?(&UNK_?), pcVar25 == (code *)0x0)) {
        uVar24 = func_?(&UNK_?);
        FUN_?(uVar24,0);
        pcVar25 = (code *)swi(3);
        (*pcVar25)();
        return;
      }
      pcRam_? = pcVar25;
      (*pcRam_?)(pvVar36,&CStack_44);
      if (pCVar26 != (CullingSubscriberBase *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CullingApiWrapper);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__CullingApiWrapper);
        }
        pBVar58 = TypeInfo__CullingApiWrapper->static_fields->spheres;
        if (pBVar58 != (BoundingSphere__Array *)0x0) {
          uVar4 = (pCVar26->fields)._CullingIndex_k__BackingField;
          if (uVar4 < (uint)pBVar58->max_length) {
            pBVar58->vector[(int)uVar4].position.x = CStack_44.r;
            pBVar58->vector[(int)uVar4].position.y = CStack_44.g;
            pBVar58->vector[(int)uVar4].position.z = CStack_44.b;
            return;
          }
code_?:
          FUN_?();
          pcVar25 = (code *)swi(3);
          (*pcVar25)();
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* BulletThrowingStar() */

void Assembly-CSharp.dll::BulletThrowingStar::BulletThrowingStar__ctor
               (BulletThrowingStar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pHVar1 = (HashSet_1_System_Int32_ *)
           FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  FUN_?(pHVar1,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  bVar2 = iRam_? != 0;
  (this->fields).ignoreWoIDs = pHVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).ignoreWoIDs >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  bVar2 = cRam_? == '\0';
  (this->fields).coolOffDuration = 3.5;
  if (bVar2) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}


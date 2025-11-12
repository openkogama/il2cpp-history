
/* Ray CalculateLineOfFireFromMuzzle(Single) */

Ray * Assembly-CSharp.dll::Bullet::Bullet_CalculateLineOfFireFromMuzzle
                (Ray *__return_storage_ptr__,Bullet *this,float maxRange,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if ((this_00 == (GameObject *)0x0) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (this_00,(MethodInfo *)0x0), obj == (Transform *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    pRVar4 = (Ray *)(*pcVar3)();
    return pRVar4;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_5 = 0;
  fStack_6 = 0.0;
  pvVar7 = (obj->fields)._._.m_CachedPtr;
  if (pvVar7 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    pRVar4 = (Ray *)(*pcVar3)();
    return pRVar4;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar3 = (code *)swi(3);
    pRVar4 = (Ray *)(*pcVar3)();
    return pRVar4;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(pvVar7,&uStack_5);
  fVar9 = (this->fields).handToMuzzleDist;
  uVar10 = (this->fields).lineOfFire.m_Direction.x;
  uVar11 = (this->fields).lineOfFire.m_Direction.y;
  fVar12 = (float)uStack_5 - (float)uVar10 * fVar9;
  fVar13 = uStack_5._4_4_ - (float)uVar11 * fVar9;
  fVar9 = fStack_6 - (this->fields).lineOfFire.m_Direction.z * fVar9;
  RStack_14.m_Origin.x = (this->fields).lineOfFire.m_Origin.x;
  RStack_14.m_Origin.y = (this->fields).lineOfFire.m_Origin.y;
  RStack_14._8_8_ = *(undefined8 *)&(this->fields).lineOfFire.m_Origin.z;
  RStack_14.m_Direction.y = (this->fields).lineOfFire.m_Direction.y;
  RStack_14.m_Direction.z = (this->fields).lineOfFire.m_Direction.z;
  bVar15 = CollisionDetection::CollisionDetection_MVHit_1
                     (&RStack_14,aVStack_1,maxRange,(this->fields).ignoreWoIDs,
                      ~(1 << (uVar2 & 0x1f)) & 0xfffffffb,(MethodInfo *)0x0);
  if (bVar15 == 0) {
    uVar16 = (this->fields).lineOfFire.m_Direction.x;
    uVar17 = (this->fields).lineOfFire.m_Direction.y;
    uVar18 = (this->fields).lineOfFire.m_Origin.x;
    uVar19 = (this->fields).lineOfFire.m_Origin.y;
    uStack_5._0_4_ = (float)uVar16 * maxRange + (float)uVar18;
    uStack_5._4_4_ = (float)uVar17 * maxRange + (float)uVar19;
    fVar20 = (this->fields).lineOfFire.m_Direction.z * maxRange +
             (this->fields).lineOfFire.m_Origin.z;
  }
  else {
    uStack_5._0_4_ = (float)aVStack_1[0].point._0_8_;
    uStack_5._4_4_ = aVStack_1[0].point.y;
    fVar20 = aVStack_1[0].point.z;
  }
  fVar21 = (float)uStack_5 - fVar12;
  fVar22 = uStack_5._4_4_ - fVar13;
  fVar20 = fVar20 - fVar9;
  RStack_14.m_Origin.z = fVar20;
  RStack_14.m_Origin.y = fVar22;
  RStack_14.m_Origin.x = fVar21;
  fVar23 = (float)FUN_?(&RStack_14);
  fVar24 = _UNK_?;
  if (_UNK_? < fVar23) {
    fVar20 = fVar20 / fVar23;
    RStack_14.m_Origin.y = fVar22 / fVar23;
    RStack_14.m_Origin.x = fVar21 / fVar23;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar25 = TypeInfo__UnityEngine__Vector3->static_fields;
    RStack_14.m_Origin.x = (pVVar25->zeroVector).x;
    RStack_14.m_Origin.y = (pVVar25->zeroVector).y;
    fVar20 = (pVVar25->zeroVector).z;
  }
  uVar8._0_4_ = (this->fields).lineOfFire.m_Direction.x;
  uVar8._4_4_ = (this->fields).lineOfFire.m_Direction.y;
  uStack_5._4_4_ = RStack_14.m_Origin.y;
  uStack_5._0_4_ = RStack_14.m_Origin.x;
  if (uStack_5._4_4_ * (float)uVar8._4_4_ + (float)uStack_5 * (float)(undefined4)uVar8 +
      fVar20 * (this->fields).lineOfFire.m_Direction.z < _UNK_?) {
    RStack_14.m_Origin.x = (this->fields).lineOfFire.m_Direction.x;
    RStack_14.m_Origin.y = (this->fields).lineOfFire.m_Direction.y;
    fVar20 = (this->fields).lineOfFire.m_Direction.z;
  }
  (__return_storage_ptr__->m_Direction).x = 0.0;
  (__return_storage_ptr__->m_Direction).y = 0.0;
  (__return_storage_ptr__->m_Direction).z = 0.0;
  fVar23 = RStack_14.m_Origin.x;
  fVar21 = RStack_14.m_Origin.y;
  (__return_storage_ptr__->m_Origin).x = fVar12;
  (__return_storage_ptr__->m_Origin).y = fVar13;
  (__return_storage_ptr__->m_Origin).z = fVar9;
  RStack_14.m_Origin.z = fVar20;
  uStack_5 = uVar8;
  fVar9 = (float)FUN_?(&RStack_14);
  if (fVar24 < fVar9) {
    fVar20 = fVar20 / fVar9;
    uVar26 = CONCAT44(fVar21 / fVar9,fVar23 / fVar9);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar25 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar26._0_4_ = (pVVar25->zeroVector).x;
    uVar26._4_4_ = (pVVar25->zeroVector).y;
    fVar20 = (pVVar25->zeroVector).z;
  }
  (__return_storage_ptr__->m_Direction).x = (float)(int)uVar26;
  (__return_storage_ptr__->m_Direction).y = (float)(int)((ulonglong)uVar26 >> 0x20);
  (__return_storage_ptr__->m_Direction).z = fVar20;
  return __return_storage_ptr__;
}


/* Bullet CreateBullet(PoolEnums, Vector3, Single) */

Bullet * Assembly-CSharp.dll::Bullet::Bullet_CreateBullet
                   (PoolEnums__Enum bulletType,Vector3 *pos,float handToMuzzleDist,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&Bullet_MethodInfo__EnumPoolManager__Instantiate<Bullet>_PoolEnums_);
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
  if (((pPVar1 != (PrefabPool *)0x0) &&
      (this = (pPVar1->fields).enumPoolManager, this != (EnumPoolManager *)0x0)) &&
     (pBVar2 = (Bullet *)
               EnumPoolManager::EnumPoolManager_Instantiate
                         (this,bulletType,
                          Bullet_MethodInfo__EnumPoolManager__Instantiate<Bullet>_PoolEnums_),
     pBVar2 != (Bullet *)0x0)) {
    (pBVar2->fields).onHit = (Bullet_OnHitDelegate *)0x0;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&(pBVar2->fields).onHit >> 0xc);
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
    iVar8 = iRam_?;
    (pBVar2->fields).onHitLocal = (Bullet_OnHitDelegate *)0x0;
    if (iVar8 != 0) {
      uVar3 = (uint)((ulonglong)&(pBVar2->fields).onHitLocal >> 0xc);
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
        iVar8 = iRam_?;
      } while (!bVar7);
    }
    (pBVar2->fields).onOutOfRange = (Action_1_UnityEngine_Ray_ *)0x0;
    if (iVar8 != 0) {
      uVar3 = (uint)((ulonglong)&(pBVar2->fields).onOutOfRange >> 0xc);
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
    pHVar9 = (pBVar2->fields).ignoreWoIDs;
    if (pHVar9 != (HashSet_1_System_Int32_ *)0x0) {
      if (0 < (pHVar9->fields)._lastIndex) {
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(pHVar9->fields)._slots,0,(pHVar9->fields)._lastIndex,(MethodInfo *)0x0)
        ;
        pIVar10 = (pHVar9->fields)._buckets;
        if (pIVar10 == (Int32__Array *)0x0) goto code_?;
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(pHVar9->fields)._buckets,0,(int32_t)pIVar10->max_length,
                   (MethodInfo *)0x0);
        (pHVar9->fields)._count = 0;
        (pHVar9->fields)._lastIndex = 0;
        (pHVar9->fields)._freeList = -1;
      }
      piVar11 = &(pHVar9->fields)._version;
      *piVar11 = *piVar11 + 1;
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)pBVar2,(MethodInfo *)0x0);
      if (obj != (Transform *)0x0) {
        uStack_12._0_4_ = pos->x;
        uStack_12._4_4_ = pos->y;
        fStack_13 = pos->z;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar14 = (obj->fields)._._.m_CachedPtr;
        if (pvVar14 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar15 = (code *)swi(3);
          pBVar2 = (Bullet *)(*pcVar15)();
          return pBVar2;
        }
        pcVar15 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
          uVar16 = func_?(&UNK_?);
          FUN_?(uVar16,0);
          pcVar15 = (code *)swi(3);
          pBVar2 = (Bullet *)(*pcVar15)();
          return pBVar2;
        }
        pcRam_? = pcVar15;
        (*pcRam_?)(pvVar14,&uStack_12);
        (pBVar2->fields).handToMuzzleDist = handToMuzzleDist;
        (pBVar2->fields).isFired = 0;
        (pBVar2->fields).hit = 0;
        (pBVar2->fields).hasCleaned = 0;
        (pBVar2->fields).currentAirTime = 0.0;
        (pBVar2->fields).targetAirTime = 0.0;
        (pBVar2->fields).initiatedPoolType = bulletType;
        if (bulletType != PoolEnums__Enum_BazookaBullet) {
          (pBVar2->fields).maxAirTime = 20.0;
        }
        return pBVar2;
      }
    }
  }
code_?:
  FUN_?();
  pcVar15 = (code *)swi(3);
  pBVar2 = (Bullet *)(*pcVar15)();
  return pBVar2;
}


/* Void DoFire(Single, Single, Boolean) */

void Assembly-CSharp.dll::Bullet::Bullet_DoFire
               (Bullet *this,float speed,float maxRange,bool thirdPersonWeapon,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Bullet__CollisionBullet);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (thirdPersonWeapon != 0) {
    pRVar1 = Bullet_CalculateLineOfFireFromMuzzle(aRStack_2,this,maxRange,(MethodInfo *)0x0);
    fVar3 = (pRVar1->m_Origin).y;
    uVar4 = *(undefined8 *)&(pRVar1->m_Origin).z;
    fVar5 = (pRVar1->m_Direction).y;
    fVar6 = (pRVar1->m_Direction).z;
    (this->fields).lineOfFire.m_Origin.x = (pRVar1->m_Origin).x;
    (this->fields).lineOfFire.m_Origin.y = fVar3;
    *(undefined8 *)&(this->fields).lineOfFire.m_Origin.z = uVar4;
    (this->fields).lineOfFire.m_Direction.y = fVar5;
    (this->fields).lineOfFire.m_Direction.z = fVar6;
  }
  uVar7 = (this->fields).lineOfFire.m_Origin.x;
  uVar8 = (this->fields).lineOfFire.m_Origin.y;
  fVar3 = (this->fields).lineOfFire.m_Origin.z;
  uVar4._0_4_ = (this->fields).lineOfFire.m_Direction.x;
  uVar4._4_4_ = (this->fields).lineOfFire.m_Direction.y;
  fVar5 = (this->fields).lineOfFire.m_Direction.z;
  pHVar9 = (this->fields).ignoreWoIDs;
  VStack_10._0_8_ = uVar4;
  pBVar11 = (Bullet_CollisionBullet *)FUN_?(TypeInfo__Bullet__CollisionBullet);
  (pBVar11->fields).currentPos.x = (float)uVar7;
  (pBVar11->fields).currentPos.y = (float)uVar8;
  (pBVar11->fields).prevPos.x = (float)uVar7;
  (pBVar11->fields).prevPos.y = (float)uVar8;
  (pBVar11->fields).currentPos.z = fVar3;
  (pBVar11->fields).prevPos.z = fVar3;
  VStack_12._0_8_ = uVar4;
  VStack_12.z = fVar5;
  fVar3 = (float)FUN_?(&VStack_12);
  if (_UNK_? < fVar3) {
    fVar5 = fVar5 / fVar3;
    uVar13 = CONCAT44(VStack_10.y / fVar3,VStack_10.x / fVar3);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar14 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar13._0_4_ = (pVVar14->zeroVector).x;
    uVar13._4_4_ = (pVVar14->zeroVector).y;
    fVar5 = (pVVar14->zeroVector).z;
  }
  (pBVar11->fields).ray.m_Direction.x = (float)(int)uVar13;
  (pBVar11->fields).ray.m_Direction.y = (float)(int)((ulonglong)uVar13 >> 0x20);
  (pBVar11->fields).ray.m_Direction.z = fVar5;
  iVar15 = iRam_?;
  (pBVar11->fields).range = maxRange;
  (pBVar11->fields).speed = speed;
  (pBVar11->fields).ignoreWoIDs = pHVar9;
  if (iVar15 != 0) {
    uVar16 = (uint)((ulonglong)&(pBVar11->fields).ignoreWoIDs >> 0xc);
    uVar17 = (ulonglong)((uVar16 & 0x1fffff) >> 6);
    do {
      uVar18 = *(ulonglong *)(uVar17 * 8 + 0xADDR);
      puVar19 = (ulonglong *)(uVar17 * 8 + 0xADDR);
      LOCK();
      bVar20 = uVar18 == *puVar19;
      if (bVar20) {
        *puVar19 = uVar18 | 1L << (uVar16 & 0x3f);
      }
      UNLOCK();
      iVar15 = iRam_?;
    } while (!bVar20);
  }
  (this->fields).collisionBullet = pBVar11;
  if (iVar15 != 0) {
    uVar16 = (uint)((ulonglong)&(this->fields).collisionBullet >> 0xc);
    uVar17 = (ulonglong)((uVar16 & 0x1fffff) >> 6);
    do {
      uVar18 = *(ulonglong *)(uVar17 * 8 + 0xADDR);
      puVar19 = (ulonglong *)(uVar17 * 8 + 0xADDR);
      LOCK();
      bVar20 = uVar18 == *puVar19;
      if (bVar20) {
        *puVar19 = uVar18 | 1L << (uVar16 & 0x3f);
      }
      UNLOCK();
    } while (!bVar20);
  }
  pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  bVar20 = iRam_? != 0;
  (this->fields).localTransform = pTVar21;
  if (bVar20) {
    uVar16 = (uint)((ulonglong)&(this->fields).localTransform >> 0xc);
    uVar17 = (ulonglong)((uVar16 & 0x1fffff) >> 6);
    do {
      uVar18 = *(ulonglong *)(uVar17 * 8 + 0xADDR);
      puVar19 = (ulonglong *)(uVar17 * 8 + 0xADDR);
      LOCK();
      bVar20 = uVar18 == *puVar19;
      if (bVar20) {
        *puVar19 = uVar18 | 1L << (uVar16 & 0x3f);
      }
      UNLOCK();
    } while (!bVar20);
  }
  pTVar21 = (this->fields).localTransform;
  if (pTVar21 == (Transform *)0x0) {
code_?:
    FUN_?();
    pcVar22 = (code *)swi(3);
    (*pcVar22)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_12.x = 0.0;
  VStack_12.y = 0.0;
  VStack_12.z = 0.0;
  pvVar23 = (pTVar21->fields)._._.m_CachedPtr;
  if (pvVar23 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar21,(MethodInfo *)0x0);
    pcVar22 = (code *)swi(3);
    (*pcVar22)();
    return;
  }
  pcVar22 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar22 = (code *)FUN_?(&UNK_?), pcVar22 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar22 = (code *)swi(3);
    (*pcVar22)();
    return;
  }
  pcRam_? = pcVar22;
  (*pcRam_?)(pvVar23,&VStack_12);
  (this->fields).startPosition.x = VStack_12.x;
  (this->fields).startPosition.y = VStack_12.y;
  (this->fields).startPosition.z = VStack_12.z;
  pVVar24 = Bullet_FindTargetPos(&VStack_12,this,maxRange,(MethodInfo *)0x0);
  fVar3 = (this->fields).startPosition.z;
  pTVar21 = (this->fields).localTransform;
  uVar25 = pVVar24->x;
  uVar26 = pVVar24->y;
  fVar5 = pVVar24->z;
  (this->fields).targetPosition.x = (float)uVar25;
  (this->fields).targetPosition.y = (float)uVar26;
  VStack_12.x = (this->fields).startPosition.x;
  VStack_12.y = (this->fields).startPosition.y;
  fVar6 = VStack_12.y - (float)uVar26;
  fVar27 = VStack_12.x - (float)uVar25;
  (this->fields).targetPosition.z = fVar5;
  fVar3 = fVar3 - fVar5;
  VStack_10.y = fVar6;
  VStack_10.x = fVar27;
  VStack_10.z = fVar3;
  fVar5 = (float)FUN_?(&VStack_10);
  if (_UNK_? < fVar5) {
    VStack_12.x = fVar27 / fVar5;
    fVar3 = fVar3 / fVar5;
    VStack_12.y = fVar6 / fVar5;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar14 = TypeInfo__UnityEngine__Vector3->static_fields;
    VStack_12.x = (pVVar14->zeroVector).x;
    VStack_12.y = (pVVar14->zeroVector).y;
    fVar3 = (pVVar14->zeroVector).z;
  }
  fVar5 = VStack_12.y;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar14 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_10.x = (pVVar14->upVector).x;
  VStack_10.y = (pVVar14->upVector).y;
  VStack_10.z = (pVVar14->upVector).z;
  VStack_12.y = fVar5;
  auStack_28._0_4_ = 0.0;
  auStack_28._4_4_ = 0.0;
  auStack_28._8_4_ = 0.0;
  auStack_28._12_4_ = 0.0;
  pcVar22 = pcRam_?;
  VStack_12.z = fVar3;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar22 = (code *)FUN_?(&UNK_?), pcVar22 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar22 = (code *)swi(3);
    (*pcVar22)();
    return;
  }
  pcRam_? = pcVar22;
  (*pcRam_?)(&VStack_12);
  if (pTVar21 == (Transform *)0x0) {
    FUN_?();
    pcVar22 = (code *)swi(3);
    (*pcVar22)();
    return;
  }
  aRStack_2[0].m_Origin.x = (float)auStack_28._0_4_;
  aRStack_2[0].m_Origin.y = (float)auStack_28._4_4_;
  aRStack_2[0].m_Origin.z = (float)auStack_28._8_4_;
  aRStack_2[0].m_Direction.x = (float)auStack_28._12_4_;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar23 = (pTVar21->fields)._._.m_CachedPtr;
  if (pvVar23 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar21,(MethodInfo *)0x0);
    pcVar22 = (code *)swi(3);
    (*pcVar22)();
    return;
  }
  pcVar22 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar22 = (code *)FUN_?(&UNK_?), pcVar22 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar22 = (code *)swi(3);
    (*pcVar22)();
    return;
  }
  pcRam_? = pcVar22;
  (*pcRam_?)(pvVar23);
  VStack_12.x = (this->fields).lineOfFire.m_Origin.x;
  VStack_12.y = (this->fields).lineOfFire.m_Origin.y;
  fVar3 = (this->fields).lineOfFire.m_Origin.z;
  fVar5 = (this->fields).targetPosition.z;
  VStack_10.x = (this->fields).targetPosition.x;
  VStack_10.y = (this->fields).targetPosition.y;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar27 = VStack_10.x - VStack_12.x;
  fVar6 = VStack_10.y - VStack_12.y;
  fVar5 = fVar5 - fVar3;
  if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
    FUN_?();
  }
  dVar29 = (double)(fVar6 * fVar6 + fVar27 * fVar27 + fVar5 * fVar5);
  if (dVar29 < 0.0) {
    dVar29 = (double)FUN_?();
  }
  else {
    auVar30._8_8_ = 0;
    auVar30._0_8_ = dVar29;
    auVar30 = sqrtpd(ZEXT816(0),auVar30);
    dVar29 = auVar30._0_8_;
  }
  pTVar31 = (this->fields).trailRenderer;
  (this->fields).targetAirTime = (float)dVar29 / speed;
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
  if (pTVar31 != (TrailRenderer *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar31->fields)._._._.m_CachedPtr != (void *)0x0) {
      pTVar31 = (this->fields).trailRenderer;
      if (pTVar31 == (TrailRenderer *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::TrailRenderer>_UnityEngine__TrailRenderer_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar23 = (pTVar31->fields)._._._.m_CachedPtr;
      if (pvVar23 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar31,(MethodInfo *)0x0);
        pcVar22 = (code *)swi(3);
        (*pcVar22)();
        return;
      }
      pcVar22 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar22 = (code *)FUN_?(&UNK_?), pcVar22 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar22 = (code *)swi(3);
        (*pcVar22)();
        return;
      }
      pcRam_? = pcVar22;
      (*pcRam_?)(pvVar23);
    }
  }
  pPVar32 = (this->fields).pSystem;
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
  if (pPVar32 != (ParticleSystem *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pPVar32->fields)._._.m_CachedPtr != (void *)0x0) {
      pPVar32 = (this->fields).pSystem;
      if (pPVar32 == (ParticleSystem *)0x0) goto code_?;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play
                (pPVar32,1,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void Expire() */

void Assembly-CSharp.dll::Bullet::Bullet_Expire(Bullet *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).pSystem;
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
  uVar2 = 0;
  if (pPVar1 == (ParticleSystem *)0x0) {
code_?:
    uVar3 = (this->fields).initiatedPoolType;
    Bullet_ResetBullet(this,(MethodInfo *)0x0);
    this_00 = (this->fields).cullingSubscriberBase;
    if (this_00 == (CullingSubscriberBase *)0x0) goto code_?;
    CullingSubscriberBase::CullingSubscriberBase_Destroy(this_00,(MethodInfo *)0x0);
    bVar4 = iRam_? != 0;
    (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)0x0;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(this->fields).cullingSubscriberBase >> 0xc);
      puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar7 = *puVar6;
        LOCK();
        uVar8 = *puVar6;
        if (uVar7 == uVar8) {
          *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (uVar7 != uVar8);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__PrefabPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar9 = TypeInfo__PrefabPool->static_fields->instance;
    if (((pPVar9 == (PrefabPool *)0x0) ||
        (pEVar10 = (pPVar9->fields).enumPoolManager, pEVar10 == (EnumPoolManager *)0x0)) ||
       (pPVar11 = (pEVar10->fields).lookupTable, pPVar11 == (Pool__Array *)0x0))
    goto code_?;
    if ((uint)pPVar11->max_length <= uVar3) {
code_?:
      FUN_?();
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    if (pPVar11->vector[(int)uVar3] == (Pool *)0x0) goto code_?;
    Pool::Pool_ReturnObject
              (pPVar11->vector[(int)uVar3],(this->fields).pooledObjectReference,(MethodInfo *)0x0);
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pPVar1->fields)._._.m_CachedPtr == (void *)0x0) goto code_?;
    pPVar1 = (this->fields).pSystem;
    if (pPVar1 == (ParticleSystem *)0x0) goto code_?;
    bVar13 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
             ParticleSystem_IsAlive(pPVar1,1,(MethodInfo *)0x0);
    if (bVar13 == 0) goto code_?;
  }
  if ((this->fields).hasCleaned != 0) {
    return;
  }
  pMVar14 = (this->fields).meshRenderers;
  if (pMVar14 != (MeshRenderer__Array *)0x0) {
    ppMVar15 = pMVar14->vector;
    for (uVar3 = uVar2; (int)uVar3 < (int)pMVar14->max_length; uVar3 = uVar3 + 1) {
      if ((uint)pMVar14->max_length <= uVar3) goto code_?;
      obj = *ppMVar15;
      if (obj == (MeshRenderer *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar16 = (obj->fields)._._._.m_CachedPtr;
      if (pvVar16 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pcVar12 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
        uVar17 = func_?(&UNK_?);
        FUN_?(uVar17,0);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pcRam_? = pcVar12;
      (*pcRam_?)(pvVar16);
      ppMVar15 = ppMVar15 + 1;
    }
    pSVar18 = (this->fields).spriteRenderers;
    if (pSVar18 != (SpriteRenderer__Array *)0x0) {
      ppSVar19 = pSVar18->vector;
      for (; (int)uVar2 < (int)pSVar18->max_length; uVar2 = uVar2 + 1) {
        if ((uint)pSVar18->max_length <= uVar2) goto code_?;
        obj_00 = *ppSVar19;
        if (obj_00 == (SpriteRenderer *)0x0) goto code_?;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar16 = (obj_00->fields)._._._.m_CachedPtr;
        if (pvVar16 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pcVar12 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
          uVar17 = func_?(&UNK_?);
          FUN_?(uVar17,0);
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pcRam_? = pcVar12;
        (*pcRam_?)(pvVar16);
        ppSVar19 = ppSVar19 + 1;
      }
      pPVar1 = (this->fields).pSystem;
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
      if (pPVar1 != (ParticleSystem *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pPVar1->fields)._._.m_CachedPtr != (void *)0x0) {
          pPVar1 = (this->fields).pSystem;
          if (pPVar1 == (ParticleSystem *)0x0) goto code_?;
          UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_1
                    (pPVar1,1,(MethodInfo *)0x0);
        }
      }
      (this->fields).hasCleaned = 1;
      return;
    }
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Vector3 FindTargetPos(Single) */

Vector3 * Assembly-CSharp.dll::Bullet::Bullet_FindTargetPos
                    (Vector3 *__return_storage_ptr__,Bullet *this,float maxRange,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Player);
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
  uVar3 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                     (StringLiteral_Player,(MethodInfo *)0x0);
  RStack_4.m_Origin.x = (this->fields).lineOfFire.m_Origin.x;
  RStack_4.m_Origin.y = (this->fields).lineOfFire.m_Origin.y;
  RStack_4._8_8_ = *(undefined8 *)&(this->fields).lineOfFire.m_Origin.z;
  RStack_4.m_Direction.y = (this->fields).lineOfFire.m_Direction.y;
  RStack_4.m_Direction.z = (this->fields).lineOfFire.m_Direction.z;
  bVar5 = CollisionDetection::CollisionDetection_MVHit_1
                     (&RStack_4,aVStack_1,maxRange,(this->fields).ignoreWoIDs,
                      ~(1 << (uVar2 & 0x1f)) & 0xfffffffbU & ~(1 << (uVar3 & 0x1f)),
                      (MethodInfo *)0x0);
  if (bVar5 == 0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if ((this_00 == (GameObject *)0x0) ||
       (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0), obj == (Transform *)0x0)) {
      FUN_?();
      pcVar6 = (code *)swi(3);
      pVVar7 = (Vector3 *)(*pcVar6)();
      return pVVar7;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_8 = 0;
    fStack_9 = 0.0;
    pvVar10 = (obj->fields)._._.m_CachedPtr;
    if (pvVar10 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar6 = (code *)swi(3);
      pVVar7 = (Vector3 *)(*pcVar6)();
      return pVVar7;
    }
    pcVar6 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
      uVar11 = func_?(&UNK_?);
      FUN_?(uVar11,0);
      pcVar6 = (code *)swi(3);
      pVVar7 = (Vector3 *)(*pcVar6)();
      return pVVar7;
    }
    pcRam_? = pcVar6;
    (*pcRam_?)(pvVar10,&uStack_8);
    uVar12 = (this->fields).lineOfFire.m_Direction.x;
    fVar13 = (this->fields).lineOfFire.m_Direction.y;
    fVar14 = (this->fields).lineOfFire.m_Direction.z;
    __return_storage_ptr__->x = (float)uVar12 * maxRange + (float)uStack_8;
    __return_storage_ptr__->y = fVar13 * maxRange + uStack_8._4_4_;
    __return_storage_ptr__->z = fVar14 * maxRange + fStack_9;
  }
  else {
    uVar11._0_4_ = (this->fields).lineOfFire.m_Origin.x;
    uVar11._4_4_ = (this->fields).lineOfFire.m_Origin.y;
    fVar13 = (this->fields).lineOfFire.m_Origin.z;
    uVar15 = (this->fields).lineOfFire.m_Direction.x;
    uVar16 = (this->fields).lineOfFire.m_Direction.y;
    fVar17 = aVStack_1[0].distance * (float)uVar15;
    fVar18 = aVStack_1[0].distance * (float)uVar16;
    fVar14 = aVStack_1[0].distance * (this->fields).lineOfFire.m_Direction.z +
             (this->fields).lineOfFire.m_Origin.z;
    uStack_19 = uVar11;
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uVar20 = _UNK_?;
    uVar21 = _UNK_?;
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    uVar22 = _UNK_?;
    uVar23 = _UNK_?;
    uStack_8 = CONCAT44(fVar18 + (float)uVar11._4_4_,fVar17 + (float)(undefined4)uVar11);
    _UNK_? = (float)uVar21;
    _UNK_? = SUB84(uVar21,4);
    RStack_4.m_Origin.x = _UNK_?;
    RStack_4.m_Origin.y = _UNK_?;
    _UNK_? = (float)uVar20;
    _UNK_? = SUB84(uVar20,4);
    RStack_4.m_Origin.z = _UNK_?;
    RStack_4.m_Direction.x = _UNK_?;
    _UNK_? = uVar23;
    _UNK_? = uVar22;
    fStack_9 = fVar14;
    uStack_19 = uVar11;
    fStack_24 = fVar13;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pcVar6 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
      uVar11 = func_?(&UNK_?);
      FUN_?(uVar11,0);
      pcVar6 = (code *)swi(3);
      pVVar7 = (Vector3 *)(*pcVar6)();
      return pVVar7;
    }
    pcRam_? = pcVar6;
    (*pcRam_?)(&uStack_19,&uStack_8,&RStack_4,_UNK_?,1);
    __return_storage_ptr__->x = aVStack_1[0].point.x;
    __return_storage_ptr__->y = aVStack_1[0].point.y;
    __return_storage_ptr__->z = aVStack_1[0].point.z;
  }
  return __return_storage_ptr__;
}


/* Void Fire(Single, Single, Ray, HashSet`1[System.Int32], Boolean) */

void Assembly-CSharp.dll::Bullet::Bullet_Fire
               (Bullet *this,float speed,float range,Ray *lineOfFire,
               HashSet_1_System_Int32_ *ignoreWoIDs,bool thirdPersonWeapon,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__Bullet__OnStateChanged_UnityEngine__CullingGroupEvent_);
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
  (this->fields).isFired = 1;
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)this,1,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  fVar2 = (lineOfFire->m_Origin).y;
  uVar3 = *(undefined8 *)&(lineOfFire->m_Origin).z;
  fVar4 = (lineOfFire->m_Direction).y;
  fVar5 = (lineOfFire->m_Direction).z;
  (this->fields).lineOfFire.m_Origin.x = (lineOfFire->m_Origin).x;
  (this->fields).lineOfFire.m_Origin.y = fVar2;
  *(undefined8 *)&(this->fields).lineOfFire.m_Origin.z = uVar3;
  (this->fields).ignoreWoIDs = ignoreWoIDs;
  (this->fields).lineOfFire.m_Direction.y = fVar4;
  (this->fields).lineOfFire.m_Direction.z = fVar5;
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
  Bullet_DoFire(this,speed,range,thirdPersonWeapon,(MethodInfo *)0x0);
  pMVar10 = (this->fields).pooledObjectReference;
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
  if (pMVar10 == (MonoBehaviour *)0x0) {
code_?:
    bVar1 = iRam_? != 0;
    (this->fields).pooledObjectReference = (MonoBehaviour *)this;
    if (bVar1) {
      uVar6 = (uint)((ulonglong)&(this->fields).pooledObjectReference >> 0xc);
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
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar10->fields)._._._.m_CachedPtr == (void *)0x0) goto code_?;
  }
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
    VStack_11.x = 0.0;
    VStack_11.y = 0.0;
    VStack_11.z = 0.0;
    pvVar12 = (obj->fields)._._.m_CachedPtr;
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
    (*pcRam_?)(pvVar12,&VStack_11);
    callback = (UnityAction_1_UnityEngine_CullingGroupEvent_ *)
               FUN_?(
                            TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                            );
    FUN_?(callback,this);
    pCVar14 = (CullingSubscriberBase *)FUN_?(TypeInfo__CullingSubscriberBase);
    CullingSubscriberBase::CullingSubscriberBase__ctor_1(pCVar14,callback,(MethodInfo *)0x0);
    aVStack_15[0].z = VStack_11.z;
    aVStack_15[0].x = VStack_11.x;
    aVStack_15[0].y = VStack_11.y;
    CullingSubscriberBase::CullingSubscriberBase_Setup
              (pCVar14,_UNK_?,aVStack_15,(MethodInfo *)0x0);
    bVar1 = iRam_? != 0;
    (this->fields).cullingSubscriberBase = pCVar14;
    if (bVar1) {
      uVar6 = (uint)((ulonglong)&(this->fields).cullingSubscriberBase >> 0xc);
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
    pCVar14 = (this->fields).cullingSubscriberBase;
    if (pCVar14 != (CullingSubscriberBase *)0x0) {
      (pCVar14->fields)._DistanceBandIndex_k__BackingField = 5;
      fVar5 = (this->fields).storedBulletColor.g - 0.0;
      fVar2 = (this->fields).storedBulletColor.b - 0.0;
      fVar4 = (this->fields).storedBulletColor.r - 0.0;
      fVar16 = (this->fields).storedBulletColor.a - 0.0;
      if (_UNK_? <= fVar5 * fVar5 + fVar4 * fVar4 + fVar2 * fVar2 + fVar16 * fVar16) {
        pSVar17 = (this->fields).spriteRenderers;
        if (pSVar17 == (SpriteRenderer__Array *)0x0) goto DAT_?;
        if (pSVar17->max_length == 0) {
          pMVar18 = (this->fields).meshRenderers;
          if (pMVar18 == (MeshRenderer__Array *)0x0) goto DAT_?;
          if (pMVar18->max_length == 0) {
            return;
          }
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__Bullet___MakeVisibleOverTime_d__48);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        coroutine = (IEnumerator *)FUN_?(TypeInfo__Bullet___MakeVisibleOverTime_d__48);
        bVar1 = iRam_? != 0;
        *(undefined4 *)&coroutine[1].klass = 0;
        coroutine[2].klass = (IEnumerator__Class *)this;
        if (bVar1) {
          uVar6 = (uint)((ulonglong)(coroutine + 2) >> 0xc);
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
        Coroutines::Coroutines_Start(coroutine,(MethodInfo *)0x0);
      }
      return;
    }
  }
DAT_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* IEnumerator MakeVisibleOverTime() */

IEnumerator *
Assembly-CSharp.dll::Bullet::Bullet_MakeVisibleOverTime(Bullet *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Bullet___MakeVisibleOverTime_d__48);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__Bullet___MakeVisibleOverTime_d__48);
  bVar2 = iRam_? != 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
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
  return pIVar1;
}


/* Void OnStateChanged(CullingGroupEvent) */

void Assembly-CSharp.dll::Bullet::Bullet_OnStateChanged
               (Bullet *this,CullingGroupEvent cullingGroupEvent,MethodInfo *method)

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
      for (uVar6 = uVar2; (int)uVar6 < (int)pMVar4->max_length; uVar6 = uVar6 + 1) {
        if ((uint)pMVar4->max_length <= uVar6) goto code_?;
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
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pcVar8 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
          uVar9 = func_?(&UNK_?);
          FUN_?(uVar9,0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pcRam_? = pcVar8;
        (*pcRam_?)(pvVar7);
        ppMVar5 = ppMVar5 + 1;
      }
      pSVar10 = (this->fields).spriteRenderers;
      if (pSVar10 != (SpriteRenderer__Array *)0x0) {
        ppSVar11 = pSVar10->vector;
        for (; (int)uVar2 < (int)pSVar10->max_length; uVar2 = uVar2 + 1) {
          if ((uint)pSVar10->max_length <= uVar2) {
code_?:
            FUN_?();
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          obj_00 = *ppSVar11;
          if (obj_00 == (SpriteRenderer *)0x0) goto code_?;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar7 = (obj_00->fields)._._._.m_CachedPtr;
          if (pvVar7 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pcVar8 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
            uVar9 = func_?(&UNK_?);
            FUN_?(uVar9,0);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pcRam_? = pcVar8;
          (*pcRam_?)(pvVar7);
          ppSVar11 = ppSVar11 + 1;
        }
        pTVar12 = (this->fields).trailRenderer;
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
        if (pTVar12 != (TrailRenderer *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((pTVar12->fields)._._._.m_CachedPtr != (void *)0x0) {
            pTVar12 = (this->fields).trailRenderer;
            if (pTVar12 == (TrailRenderer *)0x0) goto code_?;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar7 = (pTVar12->fields)._._._.m_CachedPtr;
            if (pvVar7 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar12,(MethodInfo *)0x0);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pcVar8 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
              uVar9 = func_?(&UNK_?);
              FUN_?(uVar9,0);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pcRam_? = pcVar8;
            (*pcRam_?)(pvVar7,bVar3);
          }
        }
        pPVar13 = (this->fields).pSystem;
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
        if (pPVar13 != (ParticleSystem *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((pPVar13->fields)._._.m_CachedPtr != (void *)0x0) {
            pPStackX_8 = (this->fields).pSystem;
            if (pPStackX_8 == (ParticleSystem *)0x0) goto code_?;
            if (iRam_? != 0) {
              uVar2 = (uint)((ulonglong)&pPStackX_8 >> 0xc);
              puVar14 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
              do {
                uVar15 = *puVar14;
                LOCK();
                uVar16 = *puVar14;
                if (uVar15 == uVar16) {
                  *puVar14 = uVar15 | 1L << (uVar2 & 0x3f);
                }
                UNLOCK();
              } while (uVar15 != uVar16);
            }
            pcVar8 = pcRam_?;
            pPStackX_10 = pPStackX_8;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
              uVar9 = func_?(&UNK_?);
              FUN_?(uVar9,0);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pcRam_? = pcVar8;
            (*pcRam_?)(&pPStackX_10,bVar3);
          }
        }
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void ResetBullet() */

void Assembly-CSharp.dll::Bullet::Bullet_ResetBullet(Bullet *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = iRam_?;
  (this->fields).onHit = (Bullet_OnHitDelegate *)0x0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).onHit >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).onHitLocal = (Bullet_OnHitDelegate *)0x0;
  iVar7 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).onHitLocal >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).onOutOfRange = (Action_1_UnityEngine_Ray_ *)0x0;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).onOutOfRange >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pHVar8 = (this->fields).ignoreWoIDs;
  if (pHVar8 == (HashSet_1_System_Int32_ *)0x0) {
code_?:
    FUN_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (0 < (pHVar8->fields)._lastIndex) {
    mscorlib.dll::System::Array::Array_Clear
              ((Array *)(pHVar8->fields)._slots,0,(pHVar8->fields)._lastIndex,(MethodInfo *)0x0);
    pIVar10 = (pHVar8->fields)._buckets;
    if (pIVar10 == (Int32__Array *)0x0) goto code_?;
    mscorlib.dll::System::Array::Array_Clear
              ((Array *)(pHVar8->fields)._buckets,0,(int32_t)pIVar10->max_length,(MethodInfo *)0x0);
    (pHVar8->fields)._count = 0;
    (pHVar8->fields)._lastIndex = 0;
    (pHVar8->fields)._freeList = -1;
  }
  piVar11 = &(pHVar8->fields)._version;
  *piVar11 = *piVar11 + 1;
  (this->fields).isFired = 0;
  (this->fields).hit = 0;
  (this->fields).hasCleaned = 0;
  (this->fields).currentAirTime = 0.0;
  (this->fields).targetAirTime = 0.0;
  return;
}


/* Void ReturnToPool(PoolEnums) */

void Assembly-CSharp.dll::Bullet::Bullet_ReturnToPool
               (Bullet *this,PoolEnums__Enum bulletType,MethodInfo *method)

{
  Bullet_ResetBullet(this,(MethodInfo *)0x0);
  this_00 = (this->fields).cullingSubscriberBase;
  if (this_00 != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy(this_00,(MethodInfo *)0x0);
    bVar1 = iRam_? != 0;
    (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)0x0;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields).cullingSubscriberBase >> 0xc);
      puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar4 = *puVar3;
        LOCK();
        uVar5 = *puVar3;
        if (uVar4 == uVar5) {
          *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar4 != uVar5);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__PrefabPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar6 = TypeInfo__PrefabPool->static_fields->instance;
    if (((pPVar6 != (PrefabPool *)0x0) &&
        (pEVar7 = (pPVar6->fields).enumPoolManager, pEVar7 != (EnumPoolManager *)0x0)) &&
       (pPVar8 = (pEVar7->fields).lookupTable, pPVar8 != (Pool__Array *)0x0)) {
      if ((PoolEnums__Enum)pPVar8->max_length <= bulletType) {
        FUN_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pPVar10 = pPVar8->vector[(int)bulletType];
      if (pPVar10 != (Pool *)0x0) {
        this_01 = (this->fields).pooledObjectReference;
        if (cRam_? == '\0') {
          FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_,this_01,0,
                        in_R9,unaff_RDI);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar11 = (pPVar10->fields).pool;
        uVar2 = 0;
        if (pMVar11 != (MonoBehaviour__Array *)0x0) {
          lVar12 = 0x20;
          do {
            if ((int)pMVar11->max_length <= (int)uVar2) {
              if (this_01 != (MonoBehaviour *)0x0) {
                pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)this_01,(MethodInfo *)0x0);
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
                          ((Object_1 *)pGVar13,0.0,(MethodInfo *)0x0);
                return;
              }
              break;
            }
            pMVar11 = (pPVar10->fields).pool;
            if (pMVar11 == (MonoBehaviour__Array *)0x0) break;
            if ((uint)pMVar11->max_length <= uVar2) {
              FUN_?();
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pMVar14 = *(MonoBehaviour **)((longlong)pMVar11->vector + lVar12 + -0x20);
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
            if (this_01 == (MonoBehaviour *)0x0 && pMVar14 == (MonoBehaviour *)0x0) {
code_?:
              if ((this_01 != (MonoBehaviour *)0x0) &&
                 (pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)this_01,(MethodInfo *)0x0),
                 pGVar13 != (GameObject *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar13,0,(MethodInfo *)0x0);
                this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)this_01,(MethodInfo *)0x0);
                if (this_02 != (Transform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                            (this_02,(pPVar10->fields).parent,(MethodInfo *)0x0);
                  pLVar15 = (pPVar10->fields).available;
                  if (pLVar15 != (List_1_System_Int32_ *)0x0) {
                    FUN_?(pLVar15,uVar2,
                                  MethodInfo__System__Collections__Generic__List<int>__Add_int_);
                    return;
                  }
                }
              }
              break;
            }
            if (this_01 == (MonoBehaviour *)0x0) {
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (pMVar14 == (MonoBehaviour *)0x0) break;
              bVar1 = (pMVar14->fields)._._._.m_CachedPtr == (void *)0x0;
            }
            else if (pMVar14 == (MonoBehaviour *)0x0) {
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              bVar1 = (this_01->fields)._._._.m_CachedPtr == (void *)0x0;
            }
            else {
              bVar1 = pMVar14 == this_01;
            }
            if (bVar1) goto code_?;
            pMVar11 = (pPVar10->fields).pool;
            uVar2 = uVar2 + 1;
            lVar12 = lVar12 + 8;
          } while (pMVar11 != (MonoBehaviour__Array *)0x0);
        }
        FUN_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void SetBulletAndTrailSettings(Color, Color, Single, Single) */

void Assembly-CSharp.dll::Bullet::Bullet_SetBulletAndTrailSettings
               (Bullet *this,Color *bulletColor,Color *trailColor,float speed,float size,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__GradientAlphaKey);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__GradientColorKey);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Gradient);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__TintColor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).trailRenderer;
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
  if (pTVar1 != (TrailRenderer *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar1->fields)._._._.m_CachedPtr != (void *)0x0) {
      this_00 = (Gradient *)FUN_?(TypeInfo__UnityEngine__Gradient);
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      pvVar4 = (void *)(*pcRam_?)();
      (this_00->fields).m_Ptr = pvVar4;
      (this_00->fields).m_RequiresNativeCleanup = 1;
      value = (GradientAlphaKey__Array *)FUN_?(TypeInfo__UnityEngine__GradientAlphaKey,3);
      if (value == (GradientAlphaKey__Array *)0x0) goto code_?;
      if ((int)value->max_length != 0) {
        uVar5 = 0;
        value->vector[0].alpha = bulletColor->a;
        fVar6 = trailColor->a;
        value->vector[0].time = 0.0;
        if (1 < (uint)value->max_length) {
          value->vector[1].alpha = fVar6;
          value->vector[1].time = 0.2;
          if (2 < (uint)value->max_length) {
            value->vector[2].alpha = 0.0;
            value->vector[2].time = 1.0;
            UnityEngine.CoreModule.dll::UnityEngine::Gradient::Gradient_set_alphaKeys
                      (this_00,value,(MethodInfo *)0x0);
            value_00 = (GradientColorKey__Array *)
                       FUN_?(TypeInfo__UnityEngine__GradientColorKey,2);
            uStack_7 = 0;
            uStack_8 = 0;
            fVar6 = bulletColor->g;
            fVar9 = bulletColor->b;
            fVar10 = bulletColor->a;
            if (value_00 == (GradientColorKey__Array *)0x0) {
code_?:
              FUN_?();
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if ((int)value_00->max_length != 0) {
              value_00->vector[0].color.r = bulletColor->r;
              value_00->vector[0].color.g = fVar6;
              value_00->vector[0].color.b = fVar9;
              value_00->vector[0].color.a = fVar10;
              uStack_7 = 0;
              fVar6 = trailColor->r;
              fVar9 = trailColor->g;
              fVar10 = trailColor->b;
              fVar11 = trailColor->a;
              uStack_8 = 0;
              value_00->vector[0].time = 0.0;
              fVar12 = _UNK_?;
              if (1 < (uint)value_00->max_length) {
                value_00->vector[1].color.r = fVar6;
                value_00->vector[1].color.g = fVar9;
                value_00->vector[1].color.b = fVar10;
                value_00->vector[1].color.a = fVar11;
                value_00->vector[1].time = fVar12;
                UnityEngine.CoreModule.dll::UnityEngine::Gradient::Gradient_set_colorKeys
                          (this_00,value_00,(MethodInfo *)0x0);
                fVar6 = _UNK_? / speed;
                if (_UNK_? / speed <= _UNK_?) {
                  fVar6 = _UNK_?;
                }
                pTVar1 = (this->fields).trailRenderer;
                if (pTVar1 != (TrailRenderer *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::TrailRenderer::
                  TrailRenderer_SetColorGradient(pTVar1,this_00,(MethodInfo *)0x0);
                  pTVar1 = (this->fields).trailRenderer;
                  if (pTVar1 != (TrailRenderer *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::TrailRenderer::
                    TrailRenderer_set_startWidth(pTVar1,size,(MethodInfo *)0x0);
                    pTVar1 = (this->fields).trailRenderer;
                    if (pTVar1 != (TrailRenderer *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::TrailRenderer::TrailRenderer_set_time
                                (pTVar1,fVar6,(MethodInfo *)0x0);
                      fVar6 = bulletColor->g;
                      fVar9 = bulletColor->b;
                      fVar10 = bulletColor->a;
                      pMVar13 = (this->fields).meshRenderers;
                      uVar3._0_4_ = bulletColor->r;
                      uVar3._4_4_ = bulletColor->g;
                      fVar14 = bulletColor->b;
                      fVar11 = bulletColor->r;
                      fVar12 = bulletColor->g;
                      fVar15 = bulletColor->b;
                      (this->fields).storedBulletColor.r = bulletColor->r;
                      (this->fields).storedBulletColor.g = fVar6;
                      (this->fields).storedBulletColor.b = fVar9;
                      (this->fields).storedBulletColor.a = fVar10;
                      if (pMVar13 != (MeshRenderer__Array *)0x0) {
                        ppMVar16 = pMVar13->vector;
                        for (uVar17 = uVar5; (int)uVar17 < (int)pMVar13->max_length;
                            uVar17 = uVar17 + 1) {
                          if ((uint)pMVar13->max_length <= uVar17) goto code_?;
                          obj = *ppMVar16;
                          if (obj == (MeshRenderer *)0x0) goto code_?;
                          if (cRam_? == '\0') {
                            FUN_?(&
                                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                                         );
                            LOCK();
                            UNLOCK();
                            FUN_?(&
                                          UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                         );
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pvVar4 = (obj->fields)._._._.m_CachedPtr;
                          if (pvVar4 == (void *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                            ThrowHelper_2_ThrowNullReferenceException
                                      ((Object *)obj,(MethodInfo *)0x0);
                            pcVar2 = (code *)swi(3);
                            (*pcVar2)();
                            return;
                          }
                          pcVar2 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) &&
                             (pcVar2 = (code *)FUN_?(&UNK_?),
                             pcVar2 == (code *)0x0)) {
                            uVar3 = func_?(&UNK_?);
                            FUN_?(uVar3,0);
                            pcVar2 = (code *)swi(3);
                            (*pcVar2)();
                            return;
                          }
                          pcRam_? = pcVar2;
                          pvVar4 = (void *)(*pcRam_?)(pvVar4);
                          pOVar18 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                                    Unmarshal_UnmarshalUnityObject
                                              (pvVar4,
                                               UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                              );
                          if (cRam_? == '\0') {
                            FUN_?(&TypeInfo__UnityEngine__Vector3);
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          if (pOVar18 == (Object *)0x0) {
code_?:
                            FUN_?();
                            pcVar2 = (code *)swi(3);
                            (*pcVar2)();
                            return;
                          }
                          if (cRam_? == '\0') {
                            FUN_?(&
                                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                         );
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pOVar19 = pOVar18[1].klass;
                          if (pOVar19 == (Object__Class *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                            ThrowHelper_2_ThrowNullReferenceException(pOVar18,(MethodInfo *)0x0);
                            pcVar2 = (code *)swi(3);
                            (*pcVar2)();
                            return;
                          }
                          pcVar2 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) &&
                             (pcVar2 = (code *)FUN_?(&UNK_?),
                             pcVar2 == (code *)0x0)) {
                            uVar3 = func_?(&UNK_?);
                            FUN_?(uVar3,0);
                            pcVar2 = (code *)swi(3);
                            (*pcVar2)();
                            return;
                          }
                          pcRam_? = pcVar2;
                          (*pcRam_?)(pOVar19);
                          if (cRam_? == '\0') {
                            FUN_?(&
                                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                                         );
                            LOCK();
                            UNLOCK();
                            FUN_?(&
                                          UnityEngine__Material_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Material>_void__
                                         );
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pvVar4 = (obj->fields)._._._.m_CachedPtr;
                          if (pvVar4 == (void *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                            ThrowHelper_2_ThrowNullReferenceException
                                      ((Object *)obj,(MethodInfo *)0x0);
                            pcVar2 = (code *)swi(3);
                            (*pcVar2)();
                            return;
                          }
                          pcVar2 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) &&
                             (pcVar2 = (code *)FUN_?(&UNK_?),
                             pcVar2 == (code *)0x0)) {
                            uVar3 = func_?(&UNK_?);
                            FUN_?(uVar3,0);
                            pcVar2 = (code *)swi(3);
                            (*pcVar2)();
                            return;
                          }
                          pcRam_? = pcVar2;
                          pvVar4 = (void *)(*pcRam_?)(pvVar4);
                          pOVar18 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                                    Unmarshal_UnmarshalUnityObject
                                              (pvVar4,
                                               UnityEngine__Material_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Material>_void__
                                              );
                          if (pOVar18 == (Object *)0x0) goto code_?;
                          iVar20 = UnityEngine.CoreModule.dll::UnityEngine::Shader::
                                   Shader_PropertyToID(StringLiteral__TintColor,(MethodInfo *)0x0);
                          uStack_21 = 0;
                          fStack_22 = fVar11;
                          fStack_23 = fVar12;
                          fStack_24 = fVar15;
                          if (cRam_? == '\0') {
                            FUN_?(&
                                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Material>_UnityEngine__Material_
                                         );
                            LOCK();
                            UNLOCK();
                            FUN_?(&TypeInfo__UnityEngine__Material);
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pOVar19 = pOVar18[1].klass;
                          if (pOVar19 == (Object__Class *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                            ThrowHelper_2_ThrowNullReferenceException(pOVar18,(MethodInfo *)0x0);
                            pcVar2 = (code *)swi(3);
                            (*pcVar2)();
                            return;
                          }
                          if (*(int *)&(TypeInfo__UnityEngine__Material->_1).field_0x1c == 0) {
                            FUN_?();
                          }
                          pcVar2 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) &&
                             (pcVar2 = (code *)FUN_?(&UNK_?),
                             pcVar2 == (code *)0x0)) {
                            uVar3 = func_?(&UNK_?);
                            FUN_?(uVar3,0);
                            pcVar2 = (code *)swi(3);
                            (*pcVar2)();
                            return;
                          }
                          pcRam_? = pcVar2;
                          (*pcRam_?)(pOVar19,iVar20,&fStack_22);
                          ppMVar16 = ppMVar16 + 1;
                        }
                        pSVar25 = (this->fields).spriteRenderers;
                        if (pSVar25 != (SpriteRenderer__Array *)0x0) {
                          ppSVar26 = pSVar25->vector;
                          while( true ) {
                            if ((int)pSVar25->max_length <= (int)uVar5) {
                              return;
                            }
                            if ((uint)pSVar25->max_length <= uVar5) break;
                            obj_00 = *ppSVar26;
                            if (obj_00 == (SpriteRenderer *)0x0) goto code_?;
                            if (cRam_? == '\0') {
                              FUN_?(&
                                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                                           );
                              LOCK();
                              UNLOCK();
                              FUN_?(&
                                            UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                           );
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            pvVar4 = (obj_00->fields)._._._.m_CachedPtr;
                            if (pvVar4 == (void *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                              ThrowHelper_2_ThrowNullReferenceException
                                        ((Object *)obj_00,(MethodInfo *)0x0);
                              pcVar2 = (code *)swi(3);
                              (*pcVar2)();
                              return;
                            }
                            pcVar2 = pcRam_?;
                            if ((pcRam_? == (code *)0x0) &&
                               (pcVar2 = (code *)FUN_?(&UNK_?),
                               pcVar2 == (code *)0x0)) {
                              uVar3 = func_?(&UNK_?);
                              FUN_?(uVar3,0);
                              pcVar2 = (code *)swi(3);
                              (*pcVar2)();
                              return;
                            }
                            pcRam_? = pcVar2;
                            pvVar4 = (void *)(*pcRam_?)(pvVar4);
                            pOVar18 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                                      Unmarshal_UnmarshalUnityObject
                                                (pvVar4,
                                                 UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                                );
                            if (cRam_? == '\0') {
                              FUN_?(&TypeInfo__UnityEngine__Vector3);
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            if (pOVar18 == (Object *)0x0) {
code_?:
                              FUN_?();
                              pcVar2 = (code *)swi(3);
                              (*pcVar2)();
                              return;
                            }
                            if (cRam_? == '\0') {
                              FUN_?(&
                                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                           );
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            pOVar19 = pOVar18[1].klass;
                            if (pOVar19 == (Object__Class *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                              ThrowHelper_2_ThrowNullReferenceException(pOVar18,(MethodInfo *)0x0);
                              pcVar2 = (code *)swi(3);
                              (*pcVar2)();
                              return;
                            }
                            pcVar2 = pcRam_?;
                            if ((pcRam_? == (code *)0x0) &&
                               (pcVar2 = (code *)FUN_?(&UNK_?),
                               pcVar2 == (code *)0x0)) {
                              uVar3 = func_?(&UNK_?);
                              FUN_?(uVar3,0);
                              pcVar2 = (code *)swi(3);
                              (*pcVar2)();
                              return;
                            }
                            pcRam_? = pcVar2;
                            (*pcRam_?)(pOVar19);
                            if (cRam_? == '\0') {
                              FUN_?(&
                                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                                           );
                              LOCK();
                              UNLOCK();
                              FUN_?(&
                                            UnityEngine__Material_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Material>_void__
                                           );
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            pvVar4 = (obj_00->fields)._._._.m_CachedPtr;
                            if (pvVar4 == (void *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                              ThrowHelper_2_ThrowNullReferenceException
                                        ((Object *)obj_00,(MethodInfo *)0x0);
                              pcVar2 = (code *)swi(3);
                              (*pcVar2)();
                              return;
                            }
                            pcVar2 = pcRam_?;
                            if ((pcRam_? == (code *)0x0) &&
                               (pcVar2 = (code *)FUN_?(&UNK_?),
                               pcVar2 == (code *)0x0)) {
                              uVar3 = func_?(&UNK_?);
                              FUN_?(uVar3,0);
                              pcVar2 = (code *)swi(3);
                              (*pcVar2)();
                              return;
                            }
                            pcRam_? = pcVar2;
                            pvVar4 = (void *)(*pcRam_?)(pvVar4);
                            pOVar18 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                                      Unmarshal_UnmarshalUnityObject
                                                (pvVar4,
                                                 UnityEngine__Material_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Material>_void__
                                                );
                            if (pOVar18 == (Object *)0x0) goto code_?;
                            iVar20 = UnityEngine.CoreModule.dll::UnityEngine::Shader::
                                     Shader_PropertyToID(StringLiteral__TintColor,(MethodInfo *)0x0)
                            ;
                            uStack_8 = (ulonglong)(uint)fVar14;
                            uStack_7 = uVar3;
                            if (cRam_? == '\0') {
                              FUN_?(&
                                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Material>_UnityEngine__Material_
                                           );
                              LOCK();
                              UNLOCK();
                              FUN_?(&TypeInfo__UnityEngine__Material);
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            pOVar19 = pOVar18[1].klass;
                            if (pOVar19 == (Object__Class *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                              ThrowHelper_2_ThrowNullReferenceException(pOVar18,(MethodInfo *)0x0);
                              pcVar2 = (code *)swi(3);
                              (*pcVar2)();
                              return;
                            }
                            if (*(int *)&(TypeInfo__UnityEngine__Material->_1).field_0x1c == 0) {
                              FUN_?();
                            }
                            pcVar2 = pcRam_?;
                            if ((pcRam_? == (code *)0x0) &&
                               (pcVar2 = (code *)FUN_?(&UNK_?),
                               pcVar2 == (code *)0x0)) {
                              uVar3 = func_?(&UNK_?);
                              FUN_?(uVar3,0);
                              pcVar2 = (code *)swi(3);
                              (*pcVar2)();
                              return;
                            }
                            pcRam_? = pcVar2;
                            (*pcRam_?)(pOVar19,iVar20,&uStack_7);
                            uVar5 = uVar5 + 1;
                            ppSVar26 = ppSVar26 + 1;
                          }
                          goto code_?;
                        }
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
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::Bullet::Bullet_Update(Bullet *this,MethodInfo *method)

{
  BVar1 = Bullet_UpdateBulletState(this,(MethodInfo *)0x0);
  fVar2 = (this->fields).currentAirTime;
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
  fVar5 = (float)(*pcRam_?)();
  fVar5 = fVar5 + fVar2;
  (this->fields).currentAirTime = fVar5;
  if ((((this->fields).hit != 0) || ((this->fields).targetAirTime < fVar5)) ||
     ((this->fields).maxAirTime <= fVar5)) {
    BVar1 = Bullet_CollisionBullet_State__Enum_Expiring;
  }
  else {
    uStack_6._0_4_ = (this->fields).targetPosition.x;
    uStack_6._4_4_ = (this->fields).targetPosition.y;
    fVar5 = fVar5 / (this->fields).targetAirTime;
    pTVar7 = (this->fields).localTransform;
    uStack_8._0_4_ = (this->fields).startPosition.x;
    uStack_8._4_4_ = (this->fields).startPosition.y;
    if (fVar5 < 0.0) {
      fVar5 = 0.0;
    }
    else if (_UNK_? < fVar5) {
      fVar5 = _UNK_?;
    }
    fStack_9 = (this->fields).startPosition.z;
    fStack_9 = ((this->fields).targetPosition.z - fStack_9) * fVar5 + fStack_9;
    if (pTVar7 == (Transform *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uStack_8 = CONCAT44(((float)uStack_6._4_4_ - (float)uStack_8._4_4_) * fVar5 +
                         (float)uStack_8._4_4_,
                         ((float)(undefined4)uStack_6 - (float)(undefined4)uStack_8) * fVar5 +
                         (float)(undefined4)uStack_8);
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar10 = (pTVar7->fields)._._.m_CachedPtr;
    if (pvVar10 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(pvVar10);
  }
  pCVar11 = (this->fields).cullingSubscriberBase;
  pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar7 != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_6 = 0;
    fStack_12 = 0.0;
    pvVar10 = (pTVar7->fields)._._.m_CachedPtr;
    if (pvVar10 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(pvVar10,&uStack_6);
    if (pCVar11 != (CullingSubscriberBase *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CullingApiWrapper);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__CullingApiWrapper);
      }
      pBVar13 = TypeInfo__CullingApiWrapper->static_fields->spheres;
      if (pBVar13 != (BoundingSphere__Array *)0x0) {
        uVar14 = (pCVar11->fields)._CullingIndex_k__BackingField;
        if ((uint)pBVar13->max_length <= uVar14) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pBVar13->vector[(int)uVar14].position.x = (float)(undefined4)uStack_6;
        pBVar13->vector[(int)uVar14].position.y = (float)uStack_6._4_4_;
        pBVar13->vector[(int)uVar14].position.z = fStack_12;
        if (BVar1 == Bullet_CollisionBullet_State__Enum_Expiring) {
          Bullet_Expire(this,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Bullet+CollisionBullet+State UpdateBulletState() */

Bullet_CollisionBullet_State__Enum
Assembly-CSharp.dll::Bullet::Bullet_UpdateBulletState(Bullet *this,MethodInfo *method)

{
  BVar1 = Bullet_CollisionBullet_State__Enum_Expiring;
  if ((this->fields).hit == 0) {
    pBVar2 = (this->fields).collisionBullet;
    if (pBVar2 == (Bullet_CollisionBullet *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      BVar1 = (*pcVar3)();
      return BVar1;
    }
    fVar4 = (pBVar2->fields).currentPos.z;
    BVar1 = Bullet_CollisionBullet_State__Enum_Moving;
    fVar5 = (pBVar2->fields).currentPos.y;
    fVar6 = (pBVar2->fields).speed;
    (pBVar2->fields).prevPos.x = (pBVar2->fields).currentPos.x;
    (pBVar2->fields).prevPos.y = fVar5;
    (pBVar2->fields).prevPos.z = fVar4;
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar3 = (code *)swi(3);
      BVar1 = (*pcVar3)();
      return BVar1;
    }
    pcRam_? = pcVar3;
    fVar4 = (float)(*pcRam_?)();
    fVar4 = fVar4 * fVar6;
    fVar6 = fVar4 + (pBVar2->fields).distanceTraveled;
    pfVar8 = &(pBVar2->fields).range;
    (pBVar2->fields).distanceTraveled = fVar6;
    if (*pfVar8 <= fVar6 && fVar6 != *pfVar8) {
      BVar1 = Bullet_CollisionBullet_State__Enum_OutOfRange;
      fVar4 = fVar4 - (fVar6 - (pBVar2->fields).range);
    }
    uVar9 = (pBVar2->fields).ray.m_Direction.x;
    uVar10 = (pBVar2->fields).ray.m_Direction.y;
    RStack_11.m_Origin.x = (pBVar2->fields).prevPos.x;
    RStack_11.m_Origin.y = (pBVar2->fields).prevPos.y;
    fVar6 = (pBVar2->fields).ray.m_Direction.z;
    fVar5 = (pBVar2->fields).prevPos.z;
    fVar12 = (pBVar2->fields).prevPos.z;
    (pBVar2->fields).currentPos.x = (float)uVar9 * fVar4 + RStack_11.m_Origin.x;
    (pBVar2->fields).currentPos.y = (float)uVar10 * fVar4 + RStack_11.m_Origin.y;
    (pBVar2->fields).currentPos.z = fVar6 * fVar4 + fVar5;
    (pBVar2->fields).ray.m_Origin.x = RStack_11.m_Origin.x;
    (pBVar2->fields).ray.m_Origin.y = RStack_11.m_Origin.y;
    (pBVar2->fields).ray.m_Origin.z = fVar12;
    uVar7._0_4_ = (pBVar2->fields).ray.m_Direction.y;
    uVar7._4_4_ = (pBVar2->fields).ray.m_Direction.z;
    fVar6 = (pBVar2->fields).speed;
    uVar13._0_4_ = (pBVar2->fields).ray.m_Origin.x;
    uVar13._4_4_ = (pBVar2->fields).ray.m_Origin.y;
    uVar14 = *(undefined8 *)&(pBVar2->fields).ray.m_Origin.z;
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar3 = (code *)swi(3);
      BVar1 = (*pcVar3)();
      return BVar1;
    }
    pcRam_? = pcVar3;
    fVar4 = (float)(*pcRam_?)();
    RStack_11.m_Origin._0_8_ = uVar13;
    RStack_11._8_8_ = uVar14;
    RStack_11.m_Direction._4_8_ = uVar7;
    bVar15 = Bullet+CollisionBullet::Bullet_CollisionBullet_DoBulletCollision
                       (&RStack_11,&(this->fields).voxelHit,fVar4 * fVar6,
                        (pBVar2->fields).ignoreWoIDs,(MethodInfo *)0x0);
    if (bVar15 != 0) {
      BVar1 = Bullet_CollisionBullet_State__Enum_Hit;
    }
    if (BVar1 == Bullet_CollisionBullet_State__Enum_Hit) {
      (this->fields).hit = 1;
      BVar1 = Bullet_CollisionBullet_State__Enum_Expiring;
      pBVar16 = (this->fields).onHit;
      if (pBVar16 != (Bullet_OnHitDelegate *)0x0) {
        RStack_11.m_Origin.x = (this->fields).lineOfFire.m_Origin.x;
        RStack_11.m_Origin.y = (this->fields).lineOfFire.m_Origin.y;
        RStack_11._8_8_ = *(undefined8 *)&(this->fields).lineOfFire.m_Origin.z;
        RStack_11.m_Direction.y = (this->fields).lineOfFire.m_Direction.y;
        RStack_11.m_Direction.z = (this->fields).lineOfFire.m_Direction.z;
        uStack_17._0_4_ = (this->fields).voxelHit.point.x;
        uStack_17._4_4_ = (this->fields).voxelHit.point.y;
        uStack_18 = *(undefined8 *)&(this->fields).voxelHit.point.z;
        uStack_19._0_4_ = (this->fields).voxelHit.normal.y;
        uStack_19._4_4_ = (this->fields).voxelHit.normal.z;
        uStack_20 = *(undefined8 *)&(this->fields).voxelHit.cubePos;
        uStack_21._0_4_ = (this->fields).voxelHit.face;
        uStack_21._4_1_ = (this->fields).voxelHit.isCubeHit;
        uStack_21._5_3_ = *(undefined3 *)&(this->fields).voxelHit.field_0x25;
        uStack_22 = *(undefined8 *)&(this->fields).voxelHit.woId;
        pCStack_23 = (this->fields).voxelHit.cube;
        uStack_24 = *(undefined8 *)&(this->fields).voxelHit.distance;
        uStack_25 = *(undefined4 *)&(this->fields).voxelHit.collider;
        uStack_26 = *(undefined4 *)((longlong)&(this->fields).voxelHit.collider + 4);
        uStack_27 = *(undefined4 *)&(this->fields).voxelHit.transform;
        uStack_28 = *(undefined4 *)((longlong)&(this->fields).voxelHit.transform + 4);
        iStack_29 = (this->fields).voxelHit.interactionFlags;
        (*(pBVar16->fields)._._.invoke_impl)
                  ((pBVar16->fields)._._.method_code,&uStack_17,&RStack_11,
                   (pBVar16->fields)._._.method);
      }
      bVar30 = iRam_? != 0;
      (this->fields).onHit = (Bullet_OnHitDelegate *)0x0;
      if (bVar30) {
        uVar31 = (uint)((ulonglong)&(this->fields).onHit >> 0xc);
        uVar32 = (ulonglong)((uVar31 & 0x1fffff) >> 6);
        do {
          uVar33 = *(ulonglong *)(uVar32 * 8 + 0xADDR);
          puVar34 = (ulonglong *)(uVar32 * 8 + 0xADDR);
          LOCK();
          bVar30 = uVar33 == *puVar34;
          if (bVar30) {
            *puVar34 = uVar33 | 1L << (uVar31 & 0x3f);
          }
          UNLOCK();
        } while (!bVar30);
      }
      pBVar16 = (this->fields).onHitLocal;
      if (pBVar16 != (Bullet_OnHitDelegate *)0x0) {
        RStack_11.m_Origin.x = (this->fields).lineOfFire.m_Origin.x;
        RStack_11.m_Origin.y = (this->fields).lineOfFire.m_Origin.y;
        RStack_11._8_8_ = *(undefined8 *)&(this->fields).lineOfFire.m_Origin.z;
        RStack_11.m_Direction.y = (this->fields).lineOfFire.m_Direction.y;
        RStack_11.m_Direction.z = (this->fields).lineOfFire.m_Direction.z;
        uStack_17._0_4_ = (this->fields).voxelHit.point.x;
        uStack_17._4_4_ = (this->fields).voxelHit.point.y;
        uStack_18 = *(undefined8 *)&(this->fields).voxelHit.point.z;
        uStack_19._0_4_ = (this->fields).voxelHit.normal.y;
        uStack_19._4_4_ = (this->fields).voxelHit.normal.z;
        uStack_20 = *(undefined8 *)&(this->fields).voxelHit.cubePos;
        uStack_21._0_4_ = (this->fields).voxelHit.face;
        uStack_21._4_1_ = (this->fields).voxelHit.isCubeHit;
        uStack_21._5_3_ = *(undefined3 *)&(this->fields).voxelHit.field_0x25;
        uStack_22 = *(undefined8 *)&(this->fields).voxelHit.woId;
        pCStack_23 = (this->fields).voxelHit.cube;
        uStack_24 = *(undefined8 *)&(this->fields).voxelHit.distance;
        uStack_25 = *(undefined4 *)&(this->fields).voxelHit.collider;
        uStack_26 = *(undefined4 *)((longlong)&(this->fields).voxelHit.collider + 4);
        uStack_27 = *(undefined4 *)&(this->fields).voxelHit.transform;
        uStack_28 = *(undefined4 *)((longlong)&(this->fields).voxelHit.transform + 4);
        iStack_29 = (this->fields).voxelHit.interactionFlags;
        (*(pBVar16->fields)._._.invoke_impl)
                  ((pBVar16->fields)._._.method_code,&uStack_17,&RStack_11,
                   (pBVar16->fields)._._.method);
      }
      bVar30 = iRam_? != 0;
      (this->fields).onHitLocal = (Bullet_OnHitDelegate *)0x0;
      if (bVar30) {
        uVar31 = (uint)((ulonglong)&(this->fields).onHitLocal >> 0xc);
        uVar32 = (ulonglong)((uVar31 & 0x1fffff) >> 6);
        do {
          uVar33 = *(ulonglong *)(uVar32 * 8 + 0xADDR);
          puVar34 = (ulonglong *)(uVar32 * 8 + 0xADDR);
          LOCK();
          bVar30 = uVar33 == *puVar34;
          if (bVar30) {
            *puVar34 = uVar33 | 1L << (uVar31 & 0x3f);
          }
          UNLOCK();
        } while (!bVar30);
      }
    }
    else if (BVar1 == Bullet_CollisionBullet_State__Enum_OutOfRange) {
      (this->fields).hit = 1;
      BVar1 = Bullet_CollisionBullet_State__Enum_Expiring;
      pAVar35 = (this->fields).onOutOfRange;
      if (pAVar35 != (Action_1_UnityEngine_Ray_ *)0x0) {
        RStack_11.m_Origin.x = (this->fields).lineOfFire.m_Origin.x;
        RStack_11.m_Origin.y = (this->fields).lineOfFire.m_Origin.y;
        RStack_11._8_8_ = *(undefined8 *)&(this->fields).lineOfFire.m_Origin.z;
        RStack_11.m_Direction.y = (this->fields).lineOfFire.m_Direction.y;
        RStack_11.m_Direction.z = (this->fields).lineOfFire.m_Direction.z;
        (*(pAVar35->fields)._._.invoke_impl)
                  ((pAVar35->fields)._._.method_code,&RStack_11,(pAVar35->fields)._._.method);
      }
      bVar30 = iRam_? != 0;
      (this->fields).onOutOfRange = (Action_1_UnityEngine_Ray_ *)0x0;
      if (bVar30) {
        uVar31 = (uint)((ulonglong)&(this->fields).onOutOfRange >> 0xc);
        uVar32 = (ulonglong)((uVar31 & 0x1fffff) >> 6);
        do {
          uVar33 = *(ulonglong *)(uVar32 * 8 + 0xADDR);
          puVar34 = (ulonglong *)(uVar32 * 8 + 0xADDR);
          LOCK();
          bVar30 = uVar33 == *puVar34;
          if (bVar30) {
            *puVar34 = uVar33 | 1L << (uVar31 & 0x3f);
          }
          UNLOCK();
        } while (!bVar30);
      }
    }
  }
  return BVar1;
}


/* Bullet() */

void Assembly-CSharp.dll::Bullet::Bullet__ctor(Bullet *this,MethodInfo *method)

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
  (this->fields).maxAirTime = 3.4028235e+38;
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


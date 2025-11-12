
/* Boolean DoBulletCollision(Ray, VoxelHit ByRef, Single, HashSet`1[System.Int32]) */

bool Assembly-CSharp.dll::Bullet+CollisionBullet::Bullet_CollisionBullet_DoBulletCollision
               (Ray *ray,VoxelHit *voxelHit,float distance,HashSet_1_System_Int32_ *ignoreWoIDs,
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
    uVar4._0_4_ = (voxelHit->point).x;
    uVar4._4_4_ = (voxelHit->point).y;
    fVar5 = (voxelHit->point).z;
    uStack_6 = uVar4;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_8._0_4_ = (pVVar7->upVector).x;
    uStack_8._4_4_ = (pVVar7->upVector).y;
    fVar9 = fVar5 + (pVVar7->upVector).z;
    fVar10 = (float)uStack_6 + (float)(undefined4)uStack_8;
    fVar11 = uStack_6._4_4_ + (float)uStack_8._4_4_;
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uVar12 = _UNK_?;
    uVar13 = _UNK_?;
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    uVar14 = _UNK_?;
    uVar15 = _UNK_?;
    uStack_6 = CONCAT44(fVar11,fVar10);
    _UNK_? = (float)uVar13;
    _UNK_? = SUB84(uVar13,4);
    VStack_16.x = _UNK_?;
    VStack_16.y = _UNK_?;
    _UNK_? = (float)uVar12;
    _UNK_? = SUB84(uVar12,4);
    VStack_16.z = _UNK_?;
    fStack_17 = _UNK_?;
    _UNK_? = uVar15;
    _UNK_? = uVar14;
    fStack_18 = fVar9;
    uStack_19 = uVar4;
    fStack_20 = fVar5;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pcVar21 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar21 = (code *)FUN_?(&UNK_?), pcVar21 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar21 = (code *)swi(3);
      bVar3 = (*pcVar21)();
      return bVar3;
    }
    pcRam_? = pcVar21;
    uVar22 = _UNK_?;
    (*pcRam_?)(&uStack_19,&uStack_6,&VStack_16,_UNK_?,1);
    uVar13._0_4_ = (voxelHit->point).x;
    uVar13._4_4_ = (voxelHit->point).y;
    fVar5 = (voxelHit->point).z;
    uStack_23 = uVar13;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_8._0_4_ = (pVVar7->rightVector).x;
    uStack_8._4_4_ = (pVVar7->rightVector).y;
    fVar9 = fVar5 + (pVVar7->rightVector).z;
    fVar10 = (float)uStack_23 + (float)(undefined4)uStack_8;
    fVar11 = uStack_23._4_4_ + (float)uStack_8._4_4_;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uVar12 = _UNK_?;
    uVar4 = _UNK_?;
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    uVar14 = _UNK_?;
    uVar15 = _UNK_?;
    uStack_23 = CONCAT44(fVar11,fVar10);
    _UNK_? = (float)uVar4;
    _UNK_? = SUB84(uVar4,4);
    aRStack_1[0].m_Origin.x = _UNK_?;
    aRStack_1[0].m_Origin.y = _UNK_?;
    _UNK_? = (float)uVar12;
    _UNK_? = SUB84(uVar12,4);
    aRStack_1[0].m_Origin.z = _UNK_?;
    aRStack_1[0].m_Direction.x = _UNK_?;
    _UNK_? = uVar15;
    _UNK_? = uVar14;
    fStack_24 = fVar9;
    uStack_8 = uVar13;
    fStack_25 = fVar5;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pcVar21 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar21 = (code *)FUN_?(&UNK_?), pcVar21 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar21 = (code *)swi(3);
      bVar3 = (*pcVar21)();
      return bVar3;
    }
    pcRam_? = pcVar21;
    (*pcRam_?)(&uStack_8,&uStack_23,aRStack_1,uVar22,1);
    this = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((this == (MVWorldObjectClientManager *)0x0) ||
       (pMVar26 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                            (this,voxelHit->woId,(MethodInfo *)0x0),
       pMVar26 == (MVWorldObjectClient *)0x0)) {
      FUN_?();
      pcVar21 = (code *)swi(3);
      bVar3 = (*pcVar21)();
      return bVar3;
    }
    if ((pMVar26->fields)._PlayInteractionType_k__BackingField != 0) {
      pMVar26 = MVWorldObjectClient::MVWorldObjectClient_GetHitInteractionHandlingWO
                          (pMVar26,(MethodInfo *)0x0);
      if (pMVar26 == (MVWorldObjectClient *)0x0) goto code_?;
      voxelHit->woId = (pMVar26->fields)._.id;
    }
    bVar3 = 1;
  }
  return bVar3;
}


/* Boolean DoCollisionCheck(VoxelHit ByRef) */

bool Assembly-CSharp.dll::Bullet+CollisionBullet::Bullet_CollisionBullet_DoCollisionCheck
               (Bullet_CollisionBullet *this,VoxelHit *voxelHit,MethodInfo *method)

{
  fVar1 = (this->fields).prevPos.z;
  fVar2 = (this->fields).prevPos.y;
  (this->fields).ray.m_Origin.x = (this->fields).prevPos.x;
  (this->fields).ray.m_Origin.y = fVar2;
  (this->fields).ray.m_Origin.z = fVar1;
  uVar3._0_4_ = (this->fields).ray.m_Direction.y;
  uVar3._4_4_ = (this->fields).ray.m_Direction.z;
  fVar1 = (this->fields).speed;
  uVar4._0_4_ = (this->fields).ray.m_Origin.x;
  uVar4._4_4_ = (this->fields).ray.m_Origin.y;
  uVar5 = *(undefined8 *)&(this->fields).ray.m_Origin.z;
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar6 = (code *)swi(3);
    bVar7 = (*pcVar6)();
    return bVar7;
  }
  pcRam_? = pcVar6;
  fVar2 = (float)(*pcRam_?)();
  aRStack_8[0].m_Origin._0_8_ = uVar4;
  aRStack_8[0]._8_8_ = uVar5;
  aRStack_8[0].m_Direction._4_8_ = uVar3;
  bVar7 = Bullet_CollisionBullet_DoBulletCollision
                    (aRStack_8,voxelHit,fVar2 * fVar1,(this->fields).ignoreWoIDs,(MethodInfo *)0x0)
  ;
  return bVar7;
}


/* Bullet+CollisionBullet+State Update(VoxelHit ByRef) */

Bullet_CollisionBullet_State__Enum
Assembly-CSharp.dll::Bullet+CollisionBullet::Bullet_CollisionBullet_Update
          (Bullet_CollisionBullet *this,VoxelHit *voxelHit,MethodInfo *method)

{
  fVar1 = (this->fields).currentPos.z;
  BVar2 = Bullet_CollisionBullet_State__Enum_Moving;
  fVar3 = (this->fields).currentPos.y;
  (this->fields).prevPos.x = (this->fields).currentPos.x;
  (this->fields).prevPos.y = fVar3;
  (this->fields).prevPos.z = fVar1;
  fVar1 = (this->fields).speed;
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar4 = (code *)swi(3);
    BVar2 = (*pcVar4)();
    return BVar2;
  }
  pcRam_? = pcVar4;
  fVar3 = (float)(*pcRam_?)();
  fVar3 = fVar3 * fVar1;
  fVar1 = fVar3 + (this->fields).distanceTraveled;
  pfVar6 = &(this->fields).range;
  (this->fields).distanceTraveled = fVar1;
  if (*pfVar6 <= fVar1 && fVar1 != *pfVar6) {
    BVar2 = Bullet_CollisionBullet_State__Enum_OutOfRange;
    fVar3 = fVar3 - (fVar1 - (this->fields).range);
  }
  uVar7 = (this->fields).ray.m_Direction.x;
  uVar8 = (this->fields).ray.m_Direction.y;
  aRStack_9[0].m_Origin.x = (this->fields).prevPos.x;
  aRStack_9[0].m_Origin.y = (this->fields).prevPos.y;
  fVar1 = (this->fields).ray.m_Direction.z;
  fVar10 = (this->fields).prevPos.z;
  fVar11 = (this->fields).prevPos.z;
  (this->fields).currentPos.x = (float)uVar7 * fVar3 + aRStack_9[0].m_Origin.x;
  (this->fields).currentPos.y = (float)uVar8 * fVar3 + aRStack_9[0].m_Origin.y;
  (this->fields).currentPos.z = fVar1 * fVar3 + fVar10;
  (this->fields).ray.m_Origin.x = aRStack_9[0].m_Origin.x;
  (this->fields).ray.m_Origin.y = aRStack_9[0].m_Origin.y;
  (this->fields).ray.m_Origin.z = fVar11;
  uVar5._0_4_ = (this->fields).ray.m_Direction.y;
  uVar5._4_4_ = (this->fields).ray.m_Direction.z;
  fVar1 = (this->fields).speed;
  uVar12._0_4_ = (this->fields).ray.m_Origin.x;
  uVar12._4_4_ = (this->fields).ray.m_Origin.y;
  uVar13 = *(undefined8 *)&(this->fields).ray.m_Origin.z;
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar4 = (code *)swi(3);
    BVar2 = (*pcVar4)();
    return BVar2;
  }
  pcRam_? = pcVar4;
  fVar3 = (float)(*pcRam_?)();
  aRStack_9[0].m_Origin._0_8_ = uVar12;
  aRStack_9[0]._8_8_ = uVar13;
  aRStack_9[0].m_Direction._4_8_ = uVar5;
  bVar14 = Bullet_CollisionBullet_DoBulletCollision
                    (aRStack_9,voxelHit,fVar3 * fVar1,(this->fields).ignoreWoIDs,
                     (MethodInfo *)0x0);
  if (bVar14 != 0) {
    BVar2 = Bullet_CollisionBullet_State__Enum_Hit;
  }
  return BVar2;
}


/* Bullet+CollisionBullet(Single, Single, Vector3, Vector3, HashSet`1[System.Int32]) */

void Assembly-CSharp.dll::Bullet+CollisionBullet::Bullet_CollisionBullet__ctor
               (Bullet_CollisionBullet *this,float range,float speed,Vector3 *origin,
               Vector3 *direction,HashSet_1_System_Int32_ *ignoreWoIDs,MethodInfo *method)

{
  uVar1 = origin->x;
  uVar2 = origin->y;
  fVar3 = origin->z;
  (this->fields).currentPos.x = (float)uVar1;
  (this->fields).currentPos.y = (float)uVar2;
  (this->fields).prevPos.x = (float)uVar1;
  (this->fields).prevPos.y = (float)uVar2;
  uStack_4._0_4_ = direction->x;
  uStack_4._4_4_ = direction->y;
  (this->fields).currentPos.z = fVar3;
  (this->fields).prevPos.z = fVar3;
  fStack_5 = direction->z;
  fVar3 = (float)FUN_?(&uStack_4);
  if (_UNK_? < fVar3) {
    uVar6 = direction->x;
    fVar7 = direction->z / fVar3;
    uVar8 = CONCAT44(direction->y / fVar3,(float)uVar6 / fVar3);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar8._0_4_ = (pVVar9->zeroVector).x;
    uVar8._4_4_ = (pVVar9->zeroVector).y;
    fVar7 = (pVVar9->zeroVector).z;
  }
  bVar10 = iRam_? != 0;
  (this->fields).ray.m_Direction.x = (float)(int)uVar8;
  (this->fields).ray.m_Direction.y = (float)(int)((ulonglong)uVar8 >> 0x20);
  (this->fields).ray.m_Direction.z = fVar7;
  (this->fields).ignoreWoIDs = ignoreWoIDs;
  (this->fields).range = range;
  (this->fields).speed = speed;
  if (bVar10) {
    uVar11 = (uint)((ulonglong)&(this->fields).ignoreWoIDs >> 0xc);
    uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
    do {
      uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
      puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
      LOCK();
      bVar10 = uVar13 == *puVar14;
      if (bVar10) {
        *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
  }
  return;
}



/* MVControllerColliderHit(VoxelHit, Vector3, Vector3, Vector3, Boolean) */

void Assembly-CSharp.dll::MVControllerColliderHit::MVControllerColliderHit__ctor
               (MVControllerColliderHit *this,VoxelHit *hit,Vector3 *position,
               Vector3 *elipsoidRadius,Vector3 *R3Velocity,bool testWithOutMoving,MethodInfo *method
               )

{
  method_00 = (MethodInfo *)position;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  fVar2 = (hit->point).y;
  uVar3 = *(undefined8 *)&(hit->point).z;
  fVar4 = (hit->normal).y;
  fVar5 = (hit->normal).z;
  IVar6 = hit->cubePos;
  uVar7 = *(undefined2 *)&hit->field_0x1e;
  (this->hit).point.x = (hit->point).x;
  (this->hit).point.y = fVar2;
  *(undefined8 *)&(this->hit).point.z = uVar3;
  iVar8 = hit->face;
  bVar9 = hit->isCubeHit;
  uVar10 = *(undefined3 *)&hit->field_0x25;
  iVar11 = hit->woId;
  uVar12 = *(undefined4 *)&hit->field_0x2c;
  (this->hit).normal.y = fVar4;
  (this->hit).normal.z = fVar5;
  (this->hit).cubePos = IVar6;
  *(undefined2 *)&(this->hit).field_0x1e = uVar7;
  pCVar13 = hit->cube;
  fVar2 = hit->distance;
  uVar14 = *(undefined4 *)&hit->field_0x3c;
  (this->hit).face = iVar8;
  (this->hit).isCubeHit = bVar9;
  *(undefined3 *)&(this->hit).field_0x25 = uVar10;
  (this->hit).woId = iVar11;
  *(undefined4 *)&(this->hit).field_0x2c = uVar12;
  pCVar15 = hit->collider;
  pTVar16 = hit->transform;
  (this->hit).cube = pCVar13;
  (this->hit).distance = fVar2;
  *(undefined4 *)&(this->hit).field_0x3c = uVar14;
  iVar17 = hit->interactionFlags;
  (this->hit).collider = pCVar15;
  (this->hit).transform = pTVar16;
  (this->hit).interactionFlags = iVar17;
  if (bVar1) {
    uVar18 = (uint)((ulonglong)&(this->hit).cube >> 0xc);
    uVar19 = (ulonglong)((uVar18 & 0x1fffff) >> 6);
    method_00 = (MethodInfo *)(ulonglong)(uVar18 & 0x3f);
    do {
      uVar20 = *(ulonglong *)(uVar19 * 8 + 0xADDR);
      puVar21 = (ulonglong *)(uVar19 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar20 == *puVar21;
      if (bVar1) {
        *puVar21 = uVar20 | 1L << (longlong)method_00;
      }
      UNLOCK();
    } while (!bVar1);
  }
  pVVar22 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                      (aVStack_23,R3Velocity,method_00);
  uVar24 = pVVar22->x;
  uVar25 = pVVar22->y;
  fVar5 = pVVar22->z;
  (this->moveDirection).x = (float)uVar24;
  (this->moveDirection).y = (float)uVar25;
  (this->moveDirection).z = fVar5;
  fVar2 = hit->distance;
  aVStack_23[0].x = position->x;
  aVStack_23[0].y = position->y;
  fVar26 = (float)uVar24 * fVar2 + aVStack_23[0].x;
  fVar4 = (float)uVar25 * fVar2 + aVStack_23[0].y;
  fVar5 = fVar5 * fVar2 + position->z;
  fVar27 = (hit->point).y;
  fVar28 = (hit->point).z;
  fVar2 = fVar26 - (hit->point).x;
  (this->positionTouchingHit).x = fVar26;
  (this->positionTouchingHit).y = fVar4;
  fVar4 = fVar4 - fVar27;
  (this->positionTouchingHit).z = fVar5;
  fVar5 = fVar5 - fVar28;
  uStack_29 = CONCAT44(fVar4,fVar2);
  fStack_30 = fVar5;
  fVar27 = (float)FUN_?(&uStack_29);
  if (_UNK_? < fVar27) {
    fVar2 = fVar2 / fVar27;
    fVar4 = fVar4 / fVar27;
    fVar5 = fVar5 / fVar27;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar31 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar2 = (pVVar31->zeroVector).x;
    fVar4 = (pVVar31->zeroVector).y;
    fVar5 = (pVVar31->zeroVector).z;
  }
  (this->elipsoidNormal).x = fVar2;
  (this->elipsoidNormal).y = fVar4;
  (this->elipsoidNormal).z = fVar5;
  fVar5 = ((this->elipsoidNormal).x / elipsoidRadius->x) / elipsoidRadius->x;
  fVar27 = ((this->elipsoidNormal).y / elipsoidRadius->y) / elipsoidRadius->y;
  fVar2 = ((this->elipsoidNormal).z / elipsoidRadius->z) / elipsoidRadius->z;
  uStack_29 = CONCAT44(fVar27,fVar5);
  fStack_30 = fVar2;
  fVar4 = (float)FUN_?(&uStack_29);
  if (_UNK_? < fVar4) {
    fVar5 = fVar5 / fVar4;
    fVar27 = fVar27 / fVar4;
    fVar2 = fVar2 / fVar4;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar31 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar5 = (pVVar31->zeroVector).x;
    fVar27 = (pVVar31->zeroVector).y;
    fVar2 = (pVVar31->zeroVector).z;
  }
  bVar1 = cRam_? == '\0';
  (this->slopeNormal).x = fVar5;
  (this->slopeNormal).y = fVar27;
  (this->slopeNormal).z = fVar2;
  if (bVar1) {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar32 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar32 != (MVGameControllerBase *)0x0) &&
     (pMVar33 = (pMVar32->fields).game, pMVar33 != (MVNetworkGame *)0x0)) {
    this_00 = (pMVar33->fields)._MaterialRepository_k__BackingField;
    pCVar13 = hit->cube;
    uVar18 = hit->face;
    if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (pCVar13 == (Cube *)0x0) {
      materialId = 0;
    }
    else {
      pBVar34 = (pCVar13->fields)._.faceMaterials;
      if (pBVar34 == (Byte__Array *)0x0) goto code_?;
      if ((uint)pBVar34->max_length <= uVar18) {
        FUN_?();
        pcVar35 = (code *)swi(3);
        (*pcVar35)();
        return;
      }
      materialId = pBVar34->vector[(int)uVar18];
    }
    if (this_00 != (MVMaterialRepository *)0x0) {
      pMVar36 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                          (this_00,materialId,(MethodInfo *)0x0);
      bVar1 = iRam_? != 0;
      this->material = pMVar36;
      if (bVar1) {
        uVar18 = (uint)((ulonglong)&this->material >> 0xc);
        uVar19 = (ulonglong)((uVar18 & 0x1fffff) >> 6);
        do {
          uVar20 = *(ulonglong *)(uVar19 * 8 + 0xADDR);
          puVar21 = (ulonglong *)(uVar19 * 8 + 0xADDR);
          LOCK();
          bVar1 = uVar20 == *puVar21;
          if (bVar1) {
            *puVar21 = uVar20 | 1L << (uVar18 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      pcVar35 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar35 = (code *)FUN_?(&UNK_?), pcVar35 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar35 = (code *)swi(3);
        (*pcVar35)();
        return;
      }
      pcRam_? = pcVar35;
      fVar5 = (float)(*pcRam_?)();
      uVar37 = R3Velocity->x;
      fVar2 = R3Velocity->y;
      fVar4 = R3Velocity->z;
      (this->impactVelocity).x = (float)uVar37 / fVar5;
      (this->impactVelocity).y = fVar2 / fVar5;
      (this->impactVelocity).z = fVar4 / fVar5;
      this->testWithOutMoving = testWithOutMoving;
      return;
    }
  }
code_?:
  FUN_?();
  pcVar35 = (code *)swi(3);
  (*pcVar35)();
  return;
}


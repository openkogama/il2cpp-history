
/* Boolean Collide(Vector3 ByRef, Single, Single, Vector3, Vector3, HashSet`1[System.Int32]) */

bool Assembly-CSharp.dll::CameraCollision::CameraCollision_Collide
               (CameraCollision *this,Vector3 *newPos,float cameraRadius,float baseDistance,
               Vector3 *targetPosition,Vector3 *cameraPosition,HashSet_1_System_Int32_ *ignoreIDs,
               MethodInfo *method)

{
  VStack_1.point.x = 0.0;
  VStack_1.point.y = 0.0;
  VStack_1.point.z = 0.0;
  VStack_1.normal.x = 0.0;
  VStack_1.interactionFlags = 0;
  VStack_1.normal.y = 0.0;
  VStack_1.normal.z = 0.0;
  VStack_1.cubePos.x = 0;
  VStack_1.cubePos.y = 0;
  VStack_1.cubePos.z = 0;
  VStack_1._30_2_ = 0;
  VStack_1.face = 0;
  VStack_1.isCubeHit = 0;
  VStack_1._37_3_ = 0;
  VStack_1.woId = 0;
  VStack_1._44_4_ = 0;
  VStack_1.cube = (Cube *)0x0;
  VStack_1.distance = 0.0;
  VStack_1._60_4_ = 0;
  VStack_1.collider = (Collider *)0x0;
  VStack_1.transform = (Transform *)0x0;
  VStack_2.x = cameraPosition->x;
  VStack_2.y = cameraPosition->y;
  VStack_2.z = cameraPosition->z;
  VStack_3.x = targetPosition->x;
  VStack_3.y = targetPosition->y;
  VStack_3.z = targetPosition->z;
  bVar4 = CameraCollision_Collide_1
                    (this,&VStack_1,newPos,cameraRadius,baseDistance,&VStack_3,&VStack_2,
                     ignoreIDs,(MethodInfo *)0x0);
  return bVar4;
}


/* Boolean Collide(VoxelHit ByRef, Vector3 ByRef, Single, Single, Vector3, Vector3,
   HashSet`1[System.Int32]) */

bool Assembly-CSharp.dll::CameraCollision::CameraCollision_Collide_1
               (CameraCollision *this,VoxelHit *hit,Vector3 *newPos,float cameraRadius,
               float baseDistance,Vector3 *targetPosition,Vector3 *cameraPosition,
               HashSet_1_System_Int32_ *ignoreIDs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Mathf);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Default);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_pointOnLineScalar___0_0f);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_pointOnLineScalar___1_0f);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_1.x = 0.0;
  VStack_1.y = 0.0;
  VStack_1.z = 0.0;
  uVar2 = cameraPosition->x;
  uVar3 = cameraPosition->y;
  RStack_4.m_Origin.x = targetPosition->x;
  RStack_4.m_Origin.y = targetPosition->y;
  fVar5 = (float)uVar2 - RStack_4.m_Origin.x;
  fVar6 = cameraPosition->z;
  fVar7 = cameraPosition->z - targetPosition->z;
  newPos->x = (float)uVar2;
  newPos->y = (float)uVar3;
  fVar8 = (float)uVar3 - RStack_4.m_Origin.y;
  newPos->z = fVar6;
  uStack_9 = CONCAT44(fVar8,fVar5);
  fStack_10 = fVar7;
  fVar11 = (float)FUN_?(&uStack_9);
  fVar6 = _UNK_?;
  if (_UNK_? < fVar11) {
    fVar7 = fVar7 / fVar11;
    uStack_9 = CONCAT44(fVar8 / fVar11,fVar5 / fVar11);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_9._0_4_ = (pVVar12->zeroVector).x;
    uStack_9._4_4_ = (pVVar12->zeroVector).y;
    fVar7 = (pVVar12->zeroVector).z;
  }
  fVar8 = (float)uStack_9;
  fVar5 = uStack_9._4_4_;
  VStack_1.x = targetPosition->x;
  VStack_1.y = targetPosition->y;
  VStack_1.z = targetPosition->z;
  fStack_10 = fVar7;
  fVar11 = (float)FUN_?(&uStack_9);
  if (fVar6 < fVar11) {
    fVar6 = fVar8 / fVar11;
    fVar13 = fVar5 / fVar11;
    fVar11 = fVar7 / fVar11;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar6 = (pVVar12->zeroVector).x;
    fVar13 = (pVVar12->zeroVector).y;
    fVar11 = (pVVar12->zeroVector).z;
  }
  uStack_9 = CONCAT44(fVar13,fVar6);
  RStack_4.m_Origin.z = VStack_1.z;
  RStack_4.m_Direction.z = fVar11;
  RStack_4.m_Direction.y = fVar13;
  RStack_4.m_Origin.x = VStack_1.x;
  RStack_4.m_Origin.y = VStack_1.y;
  fStack_14 = fVar6;
  fStack_15 = fVar13;
  fStack_16 = fVar11;
  RStack_4.m_Direction.x = fVar6;
  iVar17 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                     (StringLiteral_Default,(MethodInfo *)0x0);
  bVar18 = CollisionDetection::CollisionDetection_MVSphereCast
                     (&RStack_4,cameraRadius,hit,baseDistance,ignoreIDs,1 << ((byte)iVar17 & 0x1f),
                      (MethodInfo *)0x0);
  if ((bVar18 == 0) ||
     (fVar6 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon,
     hit->distance <= fVar6 && fVar6 != hit->distance)) {
    bVar18 = 0;
  }
  else {
    uVar19 = cameraPosition->x;
    uVar20 = cameraPosition->y;
    uVar21 = targetPosition->x;
    uVar22 = targetPosition->y;
    fVar6 = (fVar8 * cameraRadius + (float)uVar19) - (float)uVar21;
    fVar8 = (fVar5 * cameraRadius + (float)uVar20) - (float)uVar22;
    fVar7 = (fVar7 * cameraRadius + cameraPosition->z) - targetPosition->z;
    uVar23 = (hit->point).x;
    uVar24 = (hit->point).y;
    fVar25 = (((float)uVar24 - (float)uVar22) * fVar8 + ((float)uVar23 - (float)uVar21) * fVar6 +
             ((hit->point).z - targetPosition->z) * fVar7) /
             (fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7);
    uVar26 = targetPosition->x;
    uVar27 = targetPosition->y;
    fVar13 = fVar25 * fVar6 + (float)uVar26;
    fVar8 = fVar25 * fVar8 + (float)uVar27;
    fVar5 = fVar25 * fVar7 + targetPosition->z;
    uVar28 = (hit->point).x;
    uVar29 = (hit->point).y;
    RStack_4.m_Origin.y = (float)uVar29 - fVar8;
    RStack_4.m_Origin.x = (float)uVar28 - fVar13;
    RStack_4.m_Origin.z = (hit->point).z - fVar5;
    fVar6 = (float)FUN_?(&RStack_4);
    fVar7 = 0.0;
    if (fVar25 < 0.0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_pointOnLineScalar___0_0f,(MethodInfo *)0x0);
      fVar7 = targetPosition->y;
      fVar6 = targetPosition->z;
      newPos->x = targetPosition->x;
      newPos->y = fVar7;
      newPos->z = fVar6;
    }
    else {
      if (_UNK_? < fVar25) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_pointOnLineScalar___1_0f,(MethodInfo *)0x0);
        return 0;
      }
      if (fVar6 < cameraRadius) {
        fVar7 = cameraRadius * cameraRadius - fVar6 * fVar6;
        if (fVar7 < 0.0) {
          fVar7 = (float)FUN_?(fVar7);
        }
        else {
          fVar7 = SQRT(fVar7);
        }
      }
      fVar7 = fVar7 - _UNK_?;
      newPos->x = fVar13 - (float)uStack_9 * fVar7;
      newPos->y = fVar8 - uStack_9._4_4_ * fVar7;
      newPos->z = fVar5 - fVar11 * fVar7;
    }
    bVar18 = 1;
  }
  return bVar18;
}


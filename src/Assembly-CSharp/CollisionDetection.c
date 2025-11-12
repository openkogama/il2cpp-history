
/* List`1[MVOverlapResult] ElipsoidOverlapSector(Vector3, Quaternion, Vector3,
   HashSet`1[System.Int32], Int32) */

List_1_MVOverlapResult_ *
Assembly-CSharp.dll::CollisionDetection::CollisionDetection_ElipsoidOverlapSector
          (Vector3 *position,Quaternion *rotation,Vector3 *radius,
          HashSet_1_System_Int32_ *ignoreWoIds,int32_t layerMask,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVElipsoidOverlapCheck);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVElipsoidOverlapCheck->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVElipsoidOverlapCheck);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVElipsoidOverlapCheck->_1).field_0x1c == 0) {
    FUN_?();
  }
  QStack_1.x = rotation->x;
  QStack_1.y = rotation->y;
  QStack_1.z = rotation->z;
  QStack_1.w = rotation->w;
  VStack_2.x = position->x;
  VStack_2.y = position->y;
  VStack_2.z = position->z;
  VStack_3.z = radius->z;
  VStack_3.x = radius->x;
  VStack_3.y = radius->y;
  TypeInfo__MVElipsoidOverlapCheck->static_fields->checkType = 1;
  pLVar4 = MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_ElipsoidOverlapCheck_1
                     (&VStack_3,&VStack_2,&QStack_1,ignoreWoIds,layerMask,(MethodInfo *)0x0);
  return pLVar4;
}


/* Boolean MVElipsoidCast(Ray, Vector3, Single, VoxelHit ByRef, HashSet`1[System.Int32], Int32) */

bool Assembly-CSharp.dll::CollisionDetection::CollisionDetection_MVElipsoidCast
               (Ray *ray,Vector3 *radius,float distance,VoxelHit *voxelHit,
               HashSet_1_System_Int32_ *ignoreWoIds,int32_t layerMask,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVSweptElipsoidCheck);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar1 = TypeInfo__UnityEngine__Quaternion->static_fields;
  uVar2._0_4_ = (pQVar1->identityQuaternion).x;
  uVar2._4_4_ = (pQVar1->identityQuaternion).y;
  uVar3._0_4_ = (pQVar1->identityQuaternion).z;
  uVar3._4_4_ = (pQVar1->identityQuaternion).w;
  if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
    FUN_?();
  }
  VStack_4.x = radius->x;
  VStack_4.y = radius->y;
  VStack_4.z = radius->z;
  aRStack_5[0].m_Direction.y = (ray->m_Direction).y;
  aRStack_5[0].m_Direction.z = (ray->m_Direction).z;
  aRStack_5[0].m_Origin.x = (ray->m_Origin).x;
  aRStack_5[0].m_Origin.y = (ray->m_Origin).y;
  aRStack_5[0]._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
  QStack_6._0_8_ = uVar2;
  QStack_6._8_8_ = uVar3;
  bVar7 = MVSweptElipsoidCheck::MVSweptElipsoidCheck_MVElipsoidCast_1
                    (aRStack_5,&VStack_4,&QStack_6,distance,voxelHit,ignoreWoIds,layerMask,
                     (MethodInfo *)0x0);
  return bVar7;
}


/* List`1[VoxelHit] MVElipsoidCastAll(Ray, Vector3, Single, HashSet`1[System.Int32], Int32) */

List_1_VoxelHit_ *
Assembly-CSharp.dll::CollisionDetection::CollisionDetection_MVElipsoidCastAll
          (Ray *ray,Vector3 *radius,float distance,HashSet_1_System_Int32_ *ignoreWoIds,
          int32_t layerMask,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVSweptElipsoidCheck);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar1 = TypeInfo__UnityEngine__Quaternion->static_fields;
  uVar2._0_4_ = (pQVar1->identityQuaternion).x;
  uVar2._4_4_ = (pQVar1->identityQuaternion).y;
  uVar3._0_4_ = (pQVar1->identityQuaternion).z;
  uVar3._4_4_ = (pQVar1->identityQuaternion).w;
  if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVSweptElipsoidCheck);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
    FUN_?();
  }
  VStack_4.x = radius->x;
  VStack_4.y = radius->y;
  VStack_4.z = radius->z;
  aRStack_5[0].m_Direction.y = (ray->m_Direction).y;
  aRStack_5[0].m_Direction.z = (ray->m_Direction).z;
  aRStack_5[0].m_Origin.x = (ray->m_Origin).x;
  aRStack_5[0].m_Origin.y = (ray->m_Origin).y;
  aRStack_5[0]._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
  QStack_6._0_8_ = uVar2;
  QStack_6._8_8_ = uVar3;
  pLVar7 = MVSweptElipsoidCheck::MVSweptElipsoidCheck_MVElipsoidCast_3
                     (aRStack_5,&VStack_4,&QStack_6,distance,1,ignoreWoIds,layerMask,
                      (MethodInfo *)0x0);
  return pLVar7;
}


/* List`1[VoxelHit] MVElipsoidCastAll(Ray, Transform, Bounds, Single, HashSet`1[System.Int32],
   Int32) */

List_1_VoxelHit_ *
Assembly-CSharp.dll::CollisionDetection::CollisionDetection_MVElipsoidCastAll_1
          (Ray *ray,Transform *transform,Bounds *localBounds,float distance,
          HashSet_1_System_Int32_ *ignoreWoIds,int32_t layerMask,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVSweptElipsoidCheck);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVSweptElipsoidCheck);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
    FUN_?();
  }
  BStack_1.m_Center.x = (localBounds->m_Center).x;
  BStack_1.m_Center.y = (localBounds->m_Center).y;
  BStack_1._8_8_ = *(undefined8 *)&(localBounds->m_Center).z;
  BStack_1.m_Extents.y = (localBounds->m_Extents).y;
  BStack_1.m_Extents.z = (localBounds->m_Extents).z;
  aRStack_2[0].m_Origin.x = (ray->m_Origin).x;
  aRStack_2[0].m_Origin.y = (ray->m_Origin).y;
  aRStack_2[0]._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
  aRStack_2[0].m_Direction.y = (ray->m_Direction).y;
  aRStack_2[0].m_Direction.z = (ray->m_Direction).z;
  pLVar3 = MVSweptElipsoidCheck::MVSweptElipsoidCheck_MVElipsoidCast_2
                     (aRStack_2,transform,&BStack_1,1,distance,ignoreWoIds,layerMask,
                      (MethodInfo *)0x0);
  return pLVar3;
}


/* Boolean MVElipsoidCast(Ray, Transform, Bounds, Single, VoxelHit ByRef, HashSet`1[System.Int32],
   Int32) */

bool Assembly-CSharp.dll::CollisionDetection::CollisionDetection_MVElipsoidCast_1
               (Ray *ray,Transform *transform,Bounds *localBounds,float distance,VoxelHit *voxelHit,
               HashSet_1_System_Int32_ *ignoreWoIds,int32_t layerMask,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVSweptElipsoidCheck);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVSweptElipsoidCheck);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Hit_counter_greater_than_1_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (voxelHit->point).x = 0.0;
  (voxelHit->point).y = 0.0;
  *(undefined8 *)&(voxelHit->point).z = 0;
  (voxelHit->normal).y = 0.0;
  (voxelHit->normal).z = 0.0;
  *(undefined8 *)&voxelHit->cubePos = 0;
  voxelHit->face = 0;
  voxelHit->isCubeHit = 0;
  *(undefined3 *)&voxelHit->field_0x25 = 0;
  *(undefined8 *)&voxelHit->woId = 0;
  voxelHit->cube = (Cube *)0x0;
  *(undefined8 *)&voxelHit->distance = 0;
  voxelHit->collider = (Collider *)0x0;
  voxelHit->transform = (Transform *)0x0;
  voxelHit->interactionFlags = 0;
  if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
    FUN_?();
  }
  BStack_1.m_Center.x = (localBounds->m_Center).x;
  BStack_1.m_Center.y = (localBounds->m_Center).y;
  BStack_1._8_8_ = *(undefined8 *)&(localBounds->m_Center).z;
  BStack_1.m_Extents.y = (localBounds->m_Extents).y;
  BStack_1.m_Extents.z = (localBounds->m_Extents).z;
  aRStack_2[0].m_Origin.x = (ray->m_Origin).x;
  aRStack_2[0].m_Origin.y = (ray->m_Origin).y;
  aRStack_2[0]._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
  aRStack_2[0].m_Direction.y = (ray->m_Direction).y;
  aRStack_2[0].m_Direction.z = (ray->m_Direction).z;
  pLVar3 = MVSweptElipsoidCheck::MVSweptElipsoidCheck_MVElipsoidCast_2
                      (aRStack_2,transform,&BStack_1,0,distance,ignoreWoIds,layerMask,
                       (MethodInfo *)0x0);
  if (pLVar3 != (List_1_VoxelHit_ *)0x0) {
    if ((pLVar3->fields)._size != 0) {
      if ((pLVar3->fields)._size < 2) {
        if ((pLVar3->fields)._size == 0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          bVar5 = (*pcVar4)();
          return bVar5;
        }
        pVVar6 = (pLVar3->fields)._items;
        if (pVVar6 != (VoxelHit__Array *)0x0) {
          if ((int)pVVar6->max_length != 0) {
            bVar7 = iRam_? != 0;
            fVar8 = pVVar6->vector[0].point.y;
            uVar9 = *(undefined8 *)&pVVar6->vector[0].point.z;
            fVar10 = pVVar6->vector[0].normal.y;
            fVar11 = pVVar6->vector[0].normal.z;
            IVar12 = pVVar6->vector[0].cubePos;
            uVar13 = *(undefined2 *)&pVVar6->vector[0].field_0x1e;
            iVar14 = pVVar6->vector[0].face;
            bVar5 = pVVar6->vector[0].isCubeHit;
            uVar15 = *(undefined3 *)&pVVar6->vector[0].field_0x25;
            iVar16 = pVVar6->vector[0].woId;
            uVar17 = *(undefined4 *)&pVVar6->vector[0].field_0x2c;
            pCVar18 = pVVar6->vector[0].cube;
            fVar19 = pVVar6->vector[0].distance;
            uVar20 = *(undefined4 *)&pVVar6->vector[0].field_0x3c;
            pCVar21 = pVVar6->vector[0].collider;
            pTVar22 = pVVar6->vector[0].transform;
            iVar23 = pVVar6->vector[0].interactionFlags;
            (voxelHit->point).x = pVVar6->vector[0].point.x;
            (voxelHit->point).y = fVar8;
            *(undefined8 *)&(voxelHit->point).z = uVar9;
            (voxelHit->normal).y = fVar10;
            (voxelHit->normal).z = fVar11;
            voxelHit->cubePos = IVar12;
            *(undefined2 *)&voxelHit->field_0x1e = uVar13;
            voxelHit->face = iVar14;
            voxelHit->isCubeHit = bVar5;
            *(undefined3 *)&voxelHit->field_0x25 = uVar15;
            voxelHit->woId = iVar16;
            *(undefined4 *)&voxelHit->field_0x2c = uVar17;
            voxelHit->cube = pCVar18;
            voxelHit->distance = fVar19;
            *(undefined4 *)&voxelHit->field_0x3c = uVar20;
            voxelHit->collider = pCVar21;
            voxelHit->transform = pTVar22;
            voxelHit->interactionFlags = iVar23;
            if (bVar7) {
              uVar24 = (uint)((ulonglong)&voxelHit->cube >> 0xc);
              uVar25 = (ulonglong)((uVar24 & 0x1fffff) >> 6);
              do {
                uVar26 = *(ulonglong *)(uVar25 * 8 + 0xADDR);
                puVar27 = (ulonglong *)(uVar25 * 8 + 0xADDR);
                LOCK();
                bVar7 = uVar26 == *puVar27;
                if (bVar7) {
                  *puVar27 = uVar26 | 1L << (uVar24 & 0x3f);
                }
                UNLOCK();
              } while (!bVar7);
            }
            return 1;
          }
          FUN_?();
          pcVar4 = (code *)swi(3);
          bVar5 = (*pcVar4)();
          return bVar5;
        }
        goto code_?;
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Hit_counter_greater_than_1_,(MethodInfo *)0x0);
    }
    return 0;
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Boolean MVHit(Ray, MVWorldObjectClient, VoxelHit ByRef, Single) */

bool Assembly-CSharp.dll::CollisionDetection::CollisionDetection_MVHit
               (Ray *ray,MVWorldObjectClient *wo,VoxelHit *voxelHit,float distance,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVRaycast);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVRaycast->_1).field_0x1c == 0) {
    FUN_?();
  }
  aRStack_1[0].m_Origin.x = (ray->m_Origin).x;
  aRStack_1[0].m_Origin.y = (ray->m_Origin).y;
  aRStack_1[0]._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
  aRStack_1[0].m_Direction.y = (ray->m_Direction).y;
  aRStack_1[0].m_Direction.z = (ray->m_Direction).z;
  bVar2 = MVRaycast::MVRaycast_MVHit(aRStack_1,wo,voxelHit,distance,(MethodInfo *)0x0);
  return bVar2;
}


/* List`1[VoxelHit] MVHitAll(Ray, Single, HashSet`1[System.Int32], Int32) */

List_1_VoxelHit_ *
Assembly-CSharp.dll::CollisionDetection::CollisionDetection_MVHitAll
          (Ray *ray,float distance,HashSet_1_System_Int32_ *ignoreWoIds,int32_t layerMask,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVRaycast);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVRaycast->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVRaycast);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVRaycast->_1).field_0x1c == 0) {
    FUN_?();
  }
  aRStack_1[0].m_Origin.x = (ray->m_Origin).x;
  aRStack_1[0].m_Origin.y = (ray->m_Origin).y;
  aRStack_1[0]._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
  aRStack_1[0].m_Direction.y = (ray->m_Direction).y;
  aRStack_1[0].m_Direction.z = (ray->m_Direction).z;
  pLVar2 = MVRaycast::MVRaycast_MVHit_2
                     (aRStack_1,1,distance,layerMask,ignoreWoIds,(MethodInfo *)0x0);
  return pLVar2;
}


/* Boolean MVHit(Ray, VoxelHit ByRef, Single, HashSet`1[System.Int32], Int32) */

bool Assembly-CSharp.dll::CollisionDetection::CollisionDetection_MVHit_1
               (Ray *ray,VoxelHit *voxelHit,float distance,HashSet_1_System_Int32_ *ignoreWoIds,
               int32_t layerMask,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVRaycast);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVRaycast->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRaycast);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Hit_counter_greater_than_1_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (voxelHit->point).x = 0.0;
  (voxelHit->point).y = 0.0;
  *(undefined8 *)&(voxelHit->point).z = 0;
  (voxelHit->normal).y = 0.0;
  (voxelHit->normal).z = 0.0;
  *(undefined8 *)&voxelHit->cubePos = 0;
  voxelHit->face = 0;
  voxelHit->isCubeHit = 0;
  *(undefined3 *)&voxelHit->field_0x25 = 0;
  *(undefined8 *)&voxelHit->woId = 0;
  voxelHit->cube = (Cube *)0x0;
  *(undefined8 *)&voxelHit->distance = 0;
  voxelHit->collider = (Collider *)0x0;
  voxelHit->transform = (Transform *)0x0;
  voxelHit->interactionFlags = 0;
  if (*(int *)&(TypeInfo__MVRaycast->_1).field_0x1c == 0) {
    FUN_?();
  }
  aRStack_1[0].m_Origin.x = (ray->m_Origin).x;
  aRStack_1[0].m_Origin.y = (ray->m_Origin).y;
  aRStack_1[0]._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
  aRStack_1[0].m_Direction.y = (ray->m_Direction).y;
  aRStack_1[0].m_Direction.z = (ray->m_Direction).z;
  pLVar2 = MVRaycast::MVRaycast_MVHit_2
                      (aRStack_1,0,distance,layerMask,ignoreWoIds,(MethodInfo *)0x0);
  if (pLVar2 != (List_1_VoxelHit_ *)0x0) {
    if ((pLVar2->fields)._size != 0) {
      if ((pLVar2->fields)._size < 2) {
        if ((pLVar2->fields)._size == 0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          bVar4 = (*pcVar3)();
          return bVar4;
        }
        pVVar5 = (pLVar2->fields)._items;
        if (pVVar5 != (VoxelHit__Array *)0x0) {
          if ((int)pVVar5->max_length != 0) {
            bVar6 = iRam_? != 0;
            fVar7 = pVVar5->vector[0].point.y;
            uVar8 = *(undefined8 *)&pVVar5->vector[0].point.z;
            fVar9 = pVVar5->vector[0].normal.y;
            fVar10 = pVVar5->vector[0].normal.z;
            IVar11 = pVVar5->vector[0].cubePos;
            uVar12 = *(undefined2 *)&pVVar5->vector[0].field_0x1e;
            iVar13 = pVVar5->vector[0].face;
            bVar4 = pVVar5->vector[0].isCubeHit;
            uVar14 = *(undefined3 *)&pVVar5->vector[0].field_0x25;
            iVar15 = pVVar5->vector[0].woId;
            uVar16 = *(undefined4 *)&pVVar5->vector[0].field_0x2c;
            pCVar17 = pVVar5->vector[0].cube;
            fVar18 = pVVar5->vector[0].distance;
            uVar19 = *(undefined4 *)&pVVar5->vector[0].field_0x3c;
            pCVar20 = pVVar5->vector[0].collider;
            pTVar21 = pVVar5->vector[0].transform;
            iVar22 = pVVar5->vector[0].interactionFlags;
            (voxelHit->point).x = pVVar5->vector[0].point.x;
            (voxelHit->point).y = fVar7;
            *(undefined8 *)&(voxelHit->point).z = uVar8;
            (voxelHit->normal).y = fVar9;
            (voxelHit->normal).z = fVar10;
            voxelHit->cubePos = IVar11;
            *(undefined2 *)&voxelHit->field_0x1e = uVar12;
            voxelHit->face = iVar13;
            voxelHit->isCubeHit = bVar4;
            *(undefined3 *)&voxelHit->field_0x25 = uVar14;
            voxelHit->woId = iVar15;
            *(undefined4 *)&voxelHit->field_0x2c = uVar16;
            voxelHit->cube = pCVar17;
            voxelHit->distance = fVar18;
            *(undefined4 *)&voxelHit->field_0x3c = uVar19;
            voxelHit->collider = pCVar20;
            voxelHit->transform = pTVar21;
            voxelHit->interactionFlags = iVar22;
            if (bVar6) {
              uVar23 = (uint)((ulonglong)&voxelHit->cube >> 0xc);
              uVar24 = (ulonglong)((uVar23 & 0x1fffff) >> 6);
              do {
                uVar25 = *(ulonglong *)(uVar24 * 8 + 0xADDR);
                puVar26 = (ulonglong *)(uVar24 * 8 + 0xADDR);
                LOCK();
                bVar6 = uVar25 == *puVar26;
                if (bVar6) {
                  *puVar26 = uVar25 | 1L << (uVar23 & 0x3f);
                }
                UNLOCK();
              } while (!bVar6);
            }
            return 1;
          }
          FUN_?();
          pcVar3 = (code *)swi(3);
          bVar4 = (*pcVar3)();
          return bVar4;
        }
        goto code_?;
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Hit_counter_greater_than_1_,(MethodInfo *)0x0);
    }
    return 0;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Boolean MVSphereCast(Ray, Single, VoxelHit ByRef, Single, HashSet`1[System.Int32], Int32) */

bool Assembly-CSharp.dll::CollisionDetection::CollisionDetection_MVSphereCast
               (Ray *ray,float radius,VoxelHit *voxelHit,float distance,
               HashSet_1_System_Int32_ *ignoreWoIds,int32_t layerMask,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVSweptElipsoidCheck);
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
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_2.x = (pVVar1->oneVector).x;
  VStack_2.y = (pVVar1->oneVector).y;
  fVar3 = (pVVar1->oneVector).z;
  fVar4 = VStack_2.y * radius;
  fVar5 = VStack_2.x * radius;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar6 = TypeInfo__UnityEngine__Quaternion->static_fields;
  uVar7._0_4_ = (pQVar6->identityQuaternion).x;
  uVar7._4_4_ = (pQVar6->identityQuaternion).y;
  uVar8._0_4_ = (pQVar6->identityQuaternion).z;
  uVar8._4_4_ = (pQVar6->identityQuaternion).w;
  if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
    FUN_?();
  }
  aRStack_9[0].m_Origin.x = (ray->m_Origin).x;
  aRStack_9[0].m_Origin.y = (ray->m_Origin).y;
  aRStack_9[0]._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
  aRStack_9[0].m_Direction.y = (ray->m_Direction).y;
  aRStack_9[0].m_Direction.z = (ray->m_Direction).z;
  VStack_2.y = fVar4;
  VStack_2.x = fVar5;
  VStack_2.z = fVar3 * radius;
  QStack_10._0_8_ = uVar7;
  QStack_10._8_8_ = uVar8;
  bVar11 = MVSweptElipsoidCheck::MVSweptElipsoidCheck_MVElipsoidCast_1
                    (aRStack_9,&VStack_2,&QStack_10,distance,voxelHit,ignoreWoIds,layerMask,
                     (MethodInfo *)0x0);
  return bVar11;
}


/* List`1[VoxelHit] MVSphereCastAll(Ray, Single, Single, HashSet`1[System.Int32], Int32) */

List_1_VoxelHit_ *
Assembly-CSharp.dll::CollisionDetection::CollisionDetection_MVSphereCastAll
          (Ray *ray,float radius,float distance,HashSet_1_System_Int32_ *ignoreWoIds,
          int32_t layerMask,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVSweptElipsoidCheck);
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
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_2.x = (pVVar1->oneVector).x;
  VStack_2.y = (pVVar1->oneVector).y;
  fVar3 = (pVVar1->oneVector).z;
  fVar4 = VStack_2.y * radius;
  fVar5 = VStack_2.x * radius;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar6 = TypeInfo__UnityEngine__Quaternion->static_fields;
  uVar7._0_4_ = (pQVar6->identityQuaternion).x;
  uVar7._4_4_ = (pQVar6->identityQuaternion).y;
  uVar8._0_4_ = (pQVar6->identityQuaternion).z;
  uVar8._4_4_ = (pQVar6->identityQuaternion).w;
  if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVSweptElipsoidCheck);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
    FUN_?();
  }
  aRStack_9[0].m_Origin.x = (ray->m_Origin).x;
  aRStack_9[0].m_Origin.y = (ray->m_Origin).y;
  aRStack_9[0]._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
  aRStack_9[0].m_Direction.y = (ray->m_Direction).y;
  aRStack_9[0].m_Direction.z = (ray->m_Direction).z;
  VStack_2.y = fVar4;
  VStack_2.x = fVar5;
  VStack_2.z = fVar3 * radius;
  QStack_10._0_8_ = uVar7;
  QStack_10._8_8_ = uVar8;
  pLVar11 = MVSweptElipsoidCheck::MVSweptElipsoidCheck_MVElipsoidCast_3
                     (aRStack_9,&VStack_2,&QStack_10,distance,1,ignoreWoIds,layerMask,
                      (MethodInfo *)0x0);
  return pLVar11;
}



/* Boolean CheckTriangle(Vector3 ByRef, Vector3 ByRef, Vector3 ByRef, Vector3 ByRef, Vector3 ByRef,
   Single, VoxelHit ByRef) */

bool Assembly-CSharp.dll::TriangleCheck::TriangleCheck_CheckTriangle
               (Vector3 *p1,Vector3 *p2,Vector3 *p3,Vector3 *localOrigin,Vector3 *localDirection,
               float distance,VoxelHit *voxelHit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Found_negativ_distance__this_sho);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_1.z = p3->z;
  VStack_1.x = p3->x;
  VStack_1.y = p3->y;
  VStack_2.z = p2->z;
  PStack_3.m_Normal.x = 0.0;
  PStack_3.m_Normal.y = 0.0;
  PStack_3.m_Normal.z = 0.0;
  PStack_3.m_Distance = 0.0;
  VStack_2.x = p2->x;
  VStack_2.y = p2->y;
  aVStack_4[0].x = p1->x;
  aVStack_4[0].y = p1->y;
  aVStack_4[0].z = p1->z;
  UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane__ctor_2
            (&PStack_3,aVStack_4,&VStack_2,&VStack_1,in_stack_5);
  fVar6 = distance * localDirection->x;
  fVar7 = distance * localDirection->y;
  fVar8 = distance * localDirection->z;
  VStack_1.y = fVar7;
  VStack_1.x = fVar6;
  if (0.0 < PStack_3.m_Normal.y * localDirection->y + PStack_3.m_Normal.x * localDirection->x +
            PStack_3.m_Normal.z * localDirection->z) {
    return 0;
  }
  uVar9 = localOrigin->x;
  uVar10 = localOrigin->y;
  fVar11 = PStack_3.m_Normal.y * fVar7 + PStack_3.m_Normal.x * fVar6 +
           PStack_3.m_Normal.z * fVar8;
  dVar12 = (double)((float)((uint)(p1->y * PStack_3.m_Normal.y + p1->x * PStack_3.m_Normal.x +
                                  p1->z * PStack_3.m_Normal.z) ^ _UNK_?) +
                   (float)uVar10 * PStack_3.m_Normal.y + (float)uVar9 * PStack_3.m_Normal.x +
                   localOrigin->z * PStack_3.m_Normal.z);
  VStack_1.z = fVar8;
  if (fVar11 == 0.0) {
    if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
      FUN_?();
    }
    uVar13 = SUB84(_UNK_?,0);
    uVar14 = (undefined4)((ulonglong)_UNK_? >> 0x20);
    if (_UNK_? <=
        (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) & _UNK_?,
                         SUB84(dVar12,0) & _UNK_?)) {
      return 0;
    }
  }
  else {
    uVar13 = SUB84(_UNK_?,0);
    uVar14 = (undefined4)((ulonglong)_UNK_? >> 0x20);
    dVar15 = (_UNK_? - dVar12) / (double)fVar11;
    dVar16 = (_UNK_? - dVar12) / (double)fVar11;
    dVar12 = dVar15;
    if (dVar16 < dVar15) {
      dVar12 = dVar16;
      dVar16 = dVar15;
    }
    if (_UNK_? < dVar12) {
      return 0;
    }
    if (dVar16 < 0.0) {
      return 0;
    }
    uVar17 = 0;
    uVar18 = 0;
    if (0.0 <= dVar12) {
      uVar17 = SUB84(dVar12,0);
      uVar18 = (undefined4)((ulonglong)dVar12 >> 0x20);
    }
    uVar19 = uVar13;
    uVar20 = uVar14;
    if ((double)CONCAT44(uVar18,uVar17) <= _UNK_?) {
      uVar19 = uVar17;
      uVar20 = uVar18;
    }
    dVar12 = (double)CONCAT44(uVar20,uVar19);
    fVar21 = (float)(double)CONCAT44(uVar20,uVar19);
    fVar11 = fVar21 * fVar6 + (localOrigin->x - PStack_3.m_Normal.x);
    distance = (localOrigin->y - PStack_3.m_Normal.y) + fVar21 * fVar7;
    VStack_2.y = distance;
    VStack_2.x = fVar11;
    fVar21 = (localOrigin->z - PStack_3.m_Normal.z) + fVar21 * fVar8;
    VStack_2.z = fVar21;
    bVar22 = TriangleCheck_SameSide(&VStack_2,p1,p2,p3,(MethodInfo *)0x0);
    if (((bVar22 != 0) &&
        (bVar22 = TriangleCheck_SameSide(&VStack_2,p2,p1,p3,(MethodInfo *)0x0), bVar22 != 0)) &&
       (bVar22 = TriangleCheck_SameSide(&VStack_2,p3,p1,p2,(MethodInfo *)0x0), fVar23 = distance,
       bVar22 != 0)) goto code_?;
  }
  fVar24 = _UNK_?;
  dVar12 = (double)CONCAT44(uVar14,uVar13);
  fVar21 = 0.0;
  fVar23 = 0.0;
  fVar11 = 0.0;
  fStack_25 = p1->z - localOrigin->z;
  distance = 0.0;
  fVar26 = p1->y - localOrigin->y;
  a = fVar7 * fVar7 + fVar6 * fVar6 + fVar8 * fVar8;
  fVar27 = p1->x - localOrigin->x;
  fStack_28 = fVar26 * fVar26 + fVar27 * fVar27 + fStack_25 * fStack_25;
  fVar29 = (localOrigin->y - p1->y) * fVar7 + (localOrigin->x - p1->x) * fVar6 +
           (localOrigin->z - p1->z) * fVar8;
  bVar22 = TriangleCheck_GetLowestRoot
                    (a,fVar29 + fVar29,fStack_28 - _UNK_?,_UNK_?,&distance,
                     (MethodInfo *)0x0);
  if (bVar22 != 0) {
    fVar11 = p1->x;
    fVar23 = p1->y;
    fVar21 = p1->z;
    dVar12 = (double)distance;
  }
  fStack_30 = p2->y - localOrigin->y;
  fStack_31 = p2->x - localOrigin->x;
  fVar32 = p2->z - localOrigin->z;
  fVar29 = fStack_30 * fStack_30 + fStack_31 * fStack_31 + fVar32 * fVar32;
  fVar33 = (localOrigin->y - p2->y) * fVar7 + (localOrigin->x - p2->x) * fVar6 +
           (localOrigin->z - p2->z) * fVar8;
  bVar34 = TriangleCheck_GetLowestRoot
                    (a,fVar33 + fVar33,fVar29 - fVar24,(float)dVar12,&distance,(MethodInfo *)0x0);
  if (bVar34 != 0) {
    fVar11 = p2->x;
    fVar23 = p2->y;
    fVar21 = p2->z;
    dVar12 = (double)distance;
  }
  fStack_35 = p3->y - localOrigin->y;
  fVar33 = p3->x - localOrigin->x;
  fStack_36 = p3->z - localOrigin->z;
  fStack_37 = fStack_35 * fStack_35 + fVar33 * fVar33 + fStack_36 * fStack_36;
  fVar38 = (localOrigin->y - p3->y) * fVar7 + (localOrigin->x - p3->x) * fVar6 +
           (localOrigin->z - p3->z) * fVar8;
  bVar39 = TriangleCheck_GetLowestRoot
                    (a,fVar38 + fVar38,fStack_37 - fVar24,(float)dVar12,&distance,(MethodInfo *)0x0);
  if (bVar39 != 0) {
    fVar11 = p3->x;
    fVar23 = p3->y;
    fVar21 = p3->z;
    dVar12 = (double)distance;
  }
  bVar40 = bVar39 != 0 || (bVar34 != 0 || bVar22 != 0);
  fVar41 = p2->x - p1->x;
  fVar38 = p2->y - p1->y;
  fVar42 = p2->z - p1->z;
  fStack_43 = fVar38 * fVar38 + fVar41 * fVar41 + fVar42 * fVar42;
  fVar44 = fVar38 * fVar7 + fVar41 * fVar6 + fVar42 * fVar8;
  fVar24 = fVar26 * fVar38 + fVar27 * fVar41 + fStack_25 * fVar42;
  fVar26 = fVar26 * fVar7 + fVar27 * fVar6 + fStack_25 * fVar8;
  bVar22 = TriangleCheck_GetLowestRoot
                    ((float)((uint)a ^ _UNK_?) * fStack_43 + fVar44 * fVar44,
                     (fVar26 + fVar26) * fStack_43 - (fVar44 + fVar44) * fVar24,
                     (_UNK_? - fStack_28) * fStack_43 + fVar24 * fVar24,(float)dVar12,
                     &distance,(MethodInfo *)0x0);
  if (((bVar22 != 0) && (fVar24 = (fVar44 * distance - fVar24) / fStack_43, 0.0 <= fVar24)) &&
     (fVar24 <= _UNK_?)) {
    bVar40 = true;
    fVar11 = fVar41 * fVar24 + p1->x;
    fVar23 = fVar38 * fVar24 + p1->y;
    dVar12 = (double)distance;
    fVar21 = fVar42 * fVar24 + p1->z;
  }
  fVar27 = p3->x - p2->x;
  fVar38 = p3->y - p2->y;
  fVar42 = p3->z - p2->z;
  fVar41 = fVar38 * fVar38 + fVar27 * fVar27 + fVar42 * fVar42;
  fVar44 = fVar38 * fVar7 + fVar27 * fVar6 + fVar42 * fVar8;
  fVar26 = fVar38 * fStack_30 + fVar27 * fStack_31 + fVar32 * fVar42;
  fVar24 = fStack_30 * fVar7 + fStack_31 * fVar6 + fVar32 * fVar8;
  bVar22 = TriangleCheck_GetLowestRoot
                    ((float)((uint)a ^ _UNK_?) * fVar41 + fVar44 * fVar44,
                     (fVar24 + fVar24) * fVar41 - (fVar44 + fVar44) * fVar26,
                     (_UNK_? - fVar29) * fVar41 + fVar26 * fVar26,(float)dVar12,&distance,
                     (MethodInfo *)0x0);
  fVar24 = _UNK_?;
  if (((bVar22 != 0) && (fVar41 = (fVar44 * distance - fVar26) / fVar41, 0.0 <= fVar41)) &&
     (fVar41 <= _UNK_?)) {
    bVar40 = true;
    fVar11 = fVar27 * fVar41 + p2->x;
    fVar23 = fVar38 * fVar41 + p2->y;
    dVar12 = (double)distance;
    fVar21 = fVar42 * fVar41 + p2->z;
  }
  fVar29 = p1->x - p3->x;
  fVar26 = p1->y - p3->y;
  fVar32 = p1->z - p3->z;
  fVar38 = fVar26 * fVar26 + fVar29 * fVar29 + fVar32 * fVar32;
  fVar41 = fVar26 * fVar7 + fVar29 * fVar6 + fVar32 * fVar8;
  fVar27 = fStack_35 * fVar26 + fVar33 * fVar29 + fStack_36 * fVar32;
  fVar8 = fStack_35 * fVar7 + fVar33 * fVar6 + fStack_36 * fVar8;
  bVar22 = TriangleCheck_GetLowestRoot
                    ((float)((uint)a ^ _UNK_?) * fVar38 + fVar41 * fVar41,
                     (fVar8 + fVar8) * fVar38 - (fVar41 + fVar41) * fVar27,
                     (_UNK_? - fStack_37) * fVar38 + fVar27 * fVar27,(float)dVar12,&distance
                     ,(MethodInfo *)0x0);
  if (((bVar22 == 0) || (fVar38 = (fVar41 * distance - fVar27) / fVar38, fVar38 < 0.0)) ||
     (fVar24 < fVar38)) {
    if (!bVar40) {
      return 0;
    }
  }
  else {
    fVar11 = fVar29 * fVar38 + p3->x;
    dVar12 = (double)distance;
    fVar21 = fVar32 * fVar38 + p3->z;
    fVar23 = fVar26 * fVar38 + p3->y;
  }
code_?:
  pVVar45 = voxelHit;
  (voxelHit->point).x = fVar11;
  (voxelHit->point).y = fVar23;
  (voxelHit->point).z = fVar21;
  fVar8 = (float)FUN_?(&VStack_1);
  pVVar45->distance = fVar8 * (float)dVar12;
  if (fVar8 * (float)dVar12 < 0.0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_Found_negativ_distance__this_sho,(MethodInfo *)0x0);
  }
  return 1;
}


/* Boolean GetLowestRoot(Single, Single, Single, Single, Single ByRef) */

bool Assembly-CSharp.dll::TriangleCheck::TriangleCheck_GetLowestRoot
               (float a,float b,float c,float maxR,float *root,MethodInfo *method)

{
  if ((a != 0.0) && (fVar1 = b * b - a * _UNK_? * c, 0.0 <= fVar1)) {
    if (fVar1 < 0.0) {
      fVar1 = (float)FUN_?(fVar1);
    }
    else {
      fVar1 = SQRT(fVar1);
    }
    fVar2 = ((float)((uint)b ^ _UNK_?) - fVar1) / (a + a);
    fVar3 = ((float)((uint)b ^ _UNK_?) + fVar1) / (a + a);
    fVar1 = fVar2;
    if (fVar3 < fVar2) {
      fVar1 = fVar3;
      fVar3 = fVar2;
    }
    if ((0.0 < fVar1) && (fVar1 < maxR)) {
      *root = fVar1;
      return 1;
    }
    if ((0.0 < fVar3) && (fVar3 < maxR)) {
      *root = fVar3;
      return 1;
    }
  }
  return 0;
}


/* Boolean IsFrontFacingTo(Plane ByRef, Vector3 ByRef) */

bool Assembly-CSharp.dll::TriangleCheck::TriangleCheck_IsFrontFacingTo
               (Plane *plane,Vector3 *direction,MethodInfo *method)

{
  uVar1 = (plane->m_Normal).x;
  uVar2 = (plane->m_Normal).y;
  return (float)uVar2 * direction->y + (float)uVar1 * direction->x +
         (plane->m_Normal).z * direction->z <= 0.0;
}


/* Boolean IsFrontFacingTo(Vector3 ByRef, Vector3 ByRef) */

bool Assembly-CSharp.dll::TriangleCheck::TriangleCheck_IsFrontFacingTo_1
               (Vector3 *planeNormal,Vector3 *direction,MethodInfo *method)

{
  return planeNormal->y * direction->y + planeNormal->x * direction->x +
         planeNormal->z * direction->z <= 0.0;
}


/* Boolean PointInTriangle(Vector3 ByRef, Vector3 ByRef, Vector3 ByRef, Vector3 ByRef) */

bool Assembly-CSharp.dll::TriangleCheck::TriangleCheck_PointInTriangle
               (Vector3 *p,Vector3 *a,Vector3 *b,Vector3 *c,MethodInfo *method)

{
  bVar1 = TriangleCheck_SameSide(p,a,b,c,(MethodInfo *)0x0);
  if ((bVar1 != 0) && (bVar1 = TriangleCheck_SameSide(p,b,a,c,(MethodInfo *)0x0), bVar1 != 0)) {
    bVar1 = TriangleCheck_SameSide(p,c,a,b,(MethodInfo *)0x0);
    return bVar1 != 0;
  }
  return 0;
}


/* Boolean SameSide(Vector3 ByRef, Vector3 ByRef, Vector3 ByRef, Vector3 ByRef) */

bool Assembly-CSharp.dll::TriangleCheck::TriangleCheck_SameSide
               (Vector3 *p1,Vector3 *p2,Vector3 *a,Vector3 *b,MethodInfo *method)

{
  fVar1 = p1->x - a->x;
  fVar2 = p1->z - a->z;
  fVar3 = b->z - a->z;
  fVar4 = b->y - a->y;
  fVar5 = b->x - a->x;
  fVar6 = p1->y - a->y;
  fVar7 = p2->y - a->y;
  fVar8 = p2->x - a->x;
  fVar9 = p2->z - a->z;
  return 0.0 <= (fVar8 * fVar3 - fVar9 * fVar5) * (fVar1 * fVar3 - fVar2 * fVar5) +
                (fVar9 * fVar4 - fVar7 * fVar3) * (fVar2 * fVar4 - fVar6 * fVar3) +
                (fVar7 * fVar5 - fVar8 * fVar4) * (fVar6 * fVar5 - fVar1 * fVar4);
}


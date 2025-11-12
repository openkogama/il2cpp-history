
/* Boolean CheckTriangle(Vector3 ByRef, Vector3 ByRef, Vector3 ByRef, Vector3 ByRef, Vector3 ByRef, Single, VoxelHit ByRef) */

bool Assembly-CSharp.dll::TriangleCheck::TriangleCheck_CheckTriangle(Vector3 *p1,Vector3 *p2,Vector3 *p3,Vector3 *localOrigin,Vector3 *localDirection,float distance,VoxelHit *voxelHit,MethodInfo *method)

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
  UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane__ctor_2(&PStack_3,aVStack_4,&VStack_2,&VStack_1,in_stack_5);
  fVar6 = distance * localDirection->x;
  fVar7 = distance * localDirection->y;
  fVar8 = distance * localDirection->z;
  VStack_1.y = fVar7;
  VStack_1.x = fVar6;
  if (0.0 < PStack_3.m_Normal.y * localDirection->y + PStack_3.m_Normal.x * localDirection->x + PStack_3.m_Normal.z * localDirection->z) {
    return 0;
  }
  uVar9 = localOrigin->x;
  uVar10 = localOrigin->y;
  fVar11 = PStack_3.m_Normal.y * fVar7 + PStack_3.m_Normal.x * fVar6 + PStack_3.m_Normal.z * fVar8;
  dVar12 = (double)(-(p1->y * PStack_3.m_Normal.y + p1->x * PStack_3.m_Normal.x + p1->z * PStack_3.m_Normal.z) + (float)uVar10 * PStack_3.m_Normal.y + (float)uVar9 * PStack_3.m_Normal.x + localOrigin->z * PStack_3.m_Normal.z);
  VStack_1.z = fVar8;
  if (fVar11 == 0.0) {
    if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (1.0 <= ABS(dVar12)) {
      return 0;
    }
  }
  else {
    dVar13 = (-1.0 - dVar12) / (double)fVar11;
    dVar14 = (1.0 - dVar12) / (double)fVar11;
    dVar12 = dVar13;
    if (dVar14 < dVar13) {
      dVar12 = dVar14;
      dVar14 = dVar13;
    }
    if (1.0 < dVar12) {
      return 0;
    }
    if (dVar14 < 0.0) {
      return 0;
    }
    uVar15 = 0;
    uVar16 = 0;
    if (0.0 <= dVar12) {
      uVar15 = SUB84(dVar12,0);
      uVar16 = (undefined4)((ulonglong)dVar12 >> 0x20);
    }
    uVar17 = 0;
    uVar18 = 0x3ff00000;
    if ((double)CONCAT44(uVar16,uVar15) <= 1.0) {
      uVar17 = uVar15;
      uVar18 = uVar16;
    }
    dVar12 = (double)CONCAT44(uVar18,uVar17);
    fVar19 = (float)(double)CONCAT44(uVar18,uVar17);
    fVar11 = fVar19 * fVar6 + (localOrigin->x - PStack_3.m_Normal.x);
    distance = (localOrigin->y - PStack_3.m_Normal.y) + fVar19 * fVar7;
    VStack_2.y = distance;
    VStack_2.x = fVar11;
    fVar19 = (localOrigin->z - PStack_3.m_Normal.z) + fVar19 * fVar8;
    VStack_2.z = fVar19;
    bVar20 = TriangleCheck_SameSide(&VStack_2,p1,p2,p3,(MethodInfo *)0x0);
    if (((bVar20 != 0) && (bVar20 = TriangleCheck_SameSide(&VStack_2,p2,p1,p3,(MethodInfo *)0x0), bVar20 != 0)) && (bVar20 = TriangleCheck_SameSide(&VStack_2,p3,p1,p2,(MethodInfo *)0x0), fVar21 = distance, bVar20 != 0)) goto code_?;
  }
  dVar12 = 1.0;
  fVar19 = 0.0;
  fVar21 = 0.0;
  fVar11 = 0.0;
  fStack_22 = p1->z - localOrigin->z;
  distance = 0.0;
  fVar23 = p1->y - localOrigin->y;
  a = fVar7 * fVar7 + fVar6 * fVar6 + fVar8 * fVar8;
  fVar24 = p1->x - localOrigin->x;
  fStack_25 = fVar23 * fVar23 + fVar24 * fVar24 + fStack_22 * fStack_22;
  fVar26 = (localOrigin->y - p1->y) * fVar7 + (localOrigin->x - p1->x) * fVar6 + (localOrigin->z - p1->z) * fVar8;
  bVar20 = TriangleCheck_GetLowestRoot(a,fVar26 + fVar26,fStack_25 - 1.0,1.0,&distance,(MethodInfo *)0x0);
  if (bVar20 != 0) {
    fVar11 = p1->x;
    fVar21 = p1->y;
    fVar19 = p1->z;
    dVar12 = (double)distance;
  }
  fStack_27 = p2->y - localOrigin->y;
  fStack_28 = p2->x - localOrigin->x;
  fVar29 = p2->z - localOrigin->z;
  fVar26 = fStack_27 * fStack_27 + fStack_28 * fStack_28 + fVar29 * fVar29;
  fVar30 = (localOrigin->y - p2->y) * fVar7 + (localOrigin->x - p2->x) * fVar6 + (localOrigin->z - p2->z) * fVar8;
  bVar31 = TriangleCheck_GetLowestRoot(a,fVar30 + fVar30,fVar26 - 1.0,(float)dVar12,&distance,(MethodInfo *)0x0);
  if (bVar31 != 0) {
    fVar11 = p2->x;
    fVar21 = p2->y;
    fVar19 = p2->z;
    dVar12 = (double)distance;
  }
  fStack_32 = p3->y - localOrigin->y;
  fVar30 = p3->x - localOrigin->x;
  fStack_33 = p3->z - localOrigin->z;
  fStack_34 = fStack_32 * fStack_32 + fVar30 * fVar30 + fStack_33 * fStack_33;
  fVar35 = (localOrigin->y - p3->y) * fVar7 + (localOrigin->x - p3->x) * fVar6 + (localOrigin->z - p3->z) * fVar8;
  bVar36 = TriangleCheck_GetLowestRoot(a,fVar35 + fVar35,fStack_34 - 1.0,(float)dVar12,&distance,(MethodInfo *)0x0);
  if (bVar36 != 0) {
    fVar11 = p3->x;
    fVar21 = p3->y;
    fVar19 = p3->z;
    dVar12 = (double)distance;
  }
  bVar37 = bVar36 != 0 || (bVar31 != 0 || bVar20 != 0);
  fVar38 = p2->x - p1->x;
  fVar39 = p2->y - p1->y;
  fVar40 = p2->z - p1->z;
  fStack_41 = fVar39 * fVar39 + fVar38 * fVar38 + fVar40 * fVar40;
  fVar42 = fVar39 * fVar7 + fVar38 * fVar6 + fVar40 * fVar8;
  fVar35 = fVar23 * fVar39 + fVar24 * fVar38 + fStack_22 * fVar40;
  fVar23 = fVar23 * fVar7 + fVar24 * fVar6 + fStack_22 * fVar8;
  bVar20 = TriangleCheck_GetLowestRoot(-a * fStack_41 + fVar42 * fVar42,(fVar23 + fVar23) * fStack_41 - (fVar42 + fVar42) * fVar35,(1.0 - fStack_25) * fStack_41 + fVar35 * fVar35,(float)dVar12,&distance,(MethodInfo *)0x0);
  if (((bVar20 != 0) && (fVar23 = (fVar42 * distance - fVar35) / fStack_41, 0.0 <= fVar23)) && (fVar23 <= 1.0)) {
    bVar37 = true;
    fVar11 = fVar38 * fVar23 + p1->x;
    fVar21 = fVar39 * fVar23 + p1->y;
    dVar12 = (double)distance;
    fVar19 = fVar40 * fVar23 + p1->z;
  }
  fVar24 = p3->x - p2->x;
  fVar35 = p3->y - p2->y;
  fVar38 = p3->z - p2->z;
  fVar39 = fVar35 * fVar35 + fVar24 * fVar24 + fVar38 * fVar38;
  fVar40 = fVar35 * fVar7 + fVar24 * fVar6 + fVar38 * fVar8;
  fVar23 = fVar35 * fStack_27 + fVar24 * fStack_28 + fVar29 * fVar38;
  fVar29 = fStack_27 * fVar7 + fStack_28 * fVar6 + fVar29 * fVar8;
  bVar20 = TriangleCheck_GetLowestRoot(-a * fVar39 + fVar40 * fVar40,(fVar29 + fVar29) * fVar39 - (fVar40 + fVar40) * fVar23,(1.0 - fVar26) * fVar39 + fVar23 * fVar23,(float)dVar12,&distance,(MethodInfo *)0x0);
  if (((bVar20 != 0) && (fVar39 = (fVar40 * distance - fVar23) / fVar39, 0.0 <= fVar39)) && (fVar39 <= 1.0)) {
    bVar37 = true;
    fVar11 = fVar24 * fVar39 + p2->x;
    fVar21 = fVar35 * fVar39 + p2->y;
    dVar12 = (double)distance;
    fVar19 = fVar38 * fVar39 + p2->z;
  }
  fVar26 = p1->x - p3->x;
  fVar23 = p1->y - p3->y;
  fVar29 = p1->z - p3->z;
  fVar35 = fVar23 * fVar23 + fVar26 * fVar26 + fVar29 * fVar29;
  fVar39 = fVar23 * fVar7 + fVar26 * fVar6 + fVar29 * fVar8;
  fVar24 = fStack_32 * fVar23 + fVar30 * fVar26 + fStack_33 * fVar29;
  fVar8 = fStack_32 * fVar7 + fVar30 * fVar6 + fStack_33 * fVar8;
  bVar20 = TriangleCheck_GetLowestRoot(-a * fVar35 + fVar39 * fVar39,(fVar8 + fVar8) * fVar35 - (fVar39 + fVar39) * fVar24,(1.0 - fStack_34) * fVar35 + fVar24 * fVar24,(float)dVar12,&distance,(MethodInfo *)0x0);
  if (((bVar20 == 0) || (fVar35 = (fVar39 * distance - fVar24) / fVar35, fVar35 < 0.0)) || (1.0 < fVar35)) {
    if (!bVar37) {
      return 0;
    }
  }
  else {
    fVar11 = fVar26 * fVar35 + p3->x;
    dVar12 = (double)distance;
    fVar19 = fVar29 * fVar35 + p3->z;
    fVar21 = fVar23 * fVar35 + p3->y;
  }
code_?:
  pVVar43 = voxelHit;
  (voxelHit->point).x = fVar11;
  (voxelHit->point).y = fVar21;
  (voxelHit->point).z = fVar19;
  fVar8 = (float)FUN_?(&VStack_1);
  pVVar43->distance = fVar8 * (float)dVar12;
  if (fVar8 * (float)dVar12 < 0.0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)StringLiteral_Found_negativ_distance__this_sho,(MethodInfo *)0x0);
  }
  return 1;
}


/* Boolean GetLowestRoot(Single, Single, Single, Single, Single ByRef) */

bool Assembly-CSharp.dll::TriangleCheck::TriangleCheck_GetLowestRoot(float a,float b,float c,float maxR,float *root,MethodInfo *method)

{
  if ((a != 0.0) && (fVar1 = b * b - a * 4.0 * c, 0.0 <= fVar1)) {
    if (fVar1 < 0.0) {
      fVar1 = (float)FUN_?(fVar1);
    }
    else {
      fVar1 = SQRT(fVar1);
    }
    fVar2 = (-b - fVar1) / (a + a);
    fVar3 = (-b + fVar1) / (a + a);
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

bool Assembly-CSharp.dll::TriangleCheck::TriangleCheck_IsFrontFacingTo(Plane *plane,Vector3 *direction,MethodInfo *method)

{
  uVar1 = (plane->m_Normal).x;
  uVar2 = (plane->m_Normal).y;
  return (float)uVar2 * direction->y + (float)uVar1 * direction->x + (plane->m_Normal).z * direction->z <= 0.0;
}


/* Boolean IsFrontFacingTo(Vector3 ByRef, Vector3 ByRef) */

bool Assembly-CSharp.dll::TriangleCheck::TriangleCheck_IsFrontFacingTo_1(Vector3 *planeNormal,Vector3 *direction,MethodInfo *method)

{
  return planeNormal->y * direction->y + planeNormal->x * direction->x + planeNormal->z * direction->z <= 0.0;
}


/* Boolean PointInTriangle(Vector3 ByRef, Vector3 ByRef, Vector3 ByRef, Vector3 ByRef) */

bool Assembly-CSharp.dll::TriangleCheck::TriangleCheck_PointInTriangle(Vector3 *p,Vector3 *a,Vector3 *b,Vector3 *c,MethodInfo *method)

{
  bVar1 = TriangleCheck_SameSide(p,a,b,c,(MethodInfo *)0x0);
  if ((bVar1 != 0) && (bVar1 = TriangleCheck_SameSide(p,b,a,c,(MethodInfo *)0x0), bVar1 != 0)) {
    bVar1 = TriangleCheck_SameSide(p,c,a,b,(MethodInfo *)0x0);
    return bVar1 != 0;
  }
  return 0;
}


/* Boolean SameSide(Vector3 ByRef, Vector3 ByRef, Vector3 ByRef, Vector3 ByRef) */

bool Assembly-CSharp.dll::TriangleCheck::TriangleCheck_SameSide(Vector3 *p1,Vector3 *p2,Vector3 *a,Vector3 *b,MethodInfo *method)

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
  return 0.0 <= (fVar8 * fVar3 - fVar9 * fVar5) * (fVar1 * fVar3 - fVar2 * fVar5) + (fVar9 * fVar4 - fVar7 * fVar3) * (fVar2 * fVar4 - fVar6 * fVar3) + (fVar7 * fVar5 - fVar8 * fVar4) * (fVar6 * fVar5 - fVar1 * fVar4);
}


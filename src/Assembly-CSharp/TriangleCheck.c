
/* Boolean CheckTriangle(Vector3 ByRef, Vector3 ByRef, Vector3 ByRef, Vector3 ByRef, Vector3 ByRef,
   Single, VoxelHit ByRef) */

bool Assembly-CSharp.dll::TriangleCheck::TriangleCheck_CheckTriangle
               (Vector3 *p1,Vector3 *p2,Vector3 *p3,Vector3 *localOrigin,Vector3 *localDirection,
               float distance,VoxelHit *voxelHit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__System__Math);
    func_?(&StringLiteral_Found_negativ_distance__this_sho);
    cRam_? = '\x01';
  }
  uStack_1._0_4_ = 0.0;
  uStack_1._4_4_ = 0.0;
  uVar2 = p2->x;
  uVar3 = p2->y;
  uVar4 = p1->x;
  uVar5 = p1->y;
  fVar6 = p2->z - p1->z;
  puStack_7 = (undefined *)p3->x;
  unique0x0000a404 = p3->y;
  uVar8 = p1->x;
  uVar9 = p1->y;
  fVar10 = p3->z - p1->z;
  value.y = fVar6 * ((float)puStack_7 - (float)uVar8) - fVar10 * ((float)uVar2 - (float)uVar4);
  value.x = fVar10 * ((float)uVar3 - (float)uVar5) - (unique0x0000a404 - (float)uVar9) * fVar6;
  value.z = (unique0x0000a404 - (float)uVar9) * ((float)uVar2 - (float)uVar4) -
            ((float)uVar3 - (float)uVar5) * ((float)puStack_7 - (float)uVar8);
  pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                      ((Vector3 *)&puStack_7,value,(MethodInfo *)0x0);
  uVar12._0_4_ = pVVar11->x;
  uVar12._4_4_ = pVVar11->y;
  fVar10 = pVVar11->z;
  fVar6 = distance * localDirection->x;
  fVar13 = distance * localDirection->y;
  fVar14 = distance * localDirection->z;
  fStack_15 = p1->x;
  puStack_16 = (undefined *)p1->y;
  fVar17 = MathFunctions::MathFunctions_DotProduct
                     ((Vector3 *)&stack0xffffff9c,localDirection,(MethodInfo *)0x0);
  if (0.0 < fVar17) {
    return 0;
  }
  dVar18 = MathFunctions::MathFunctions_SignedDistanceTo_1
                     ((Vector3 *)&stack0xffffff9c,(Vector3 *)&fStack_15,localOrigin,
                      (MethodInfo *)0x0);
  fVar17 = MathFunctions::MathFunctions_DotProduct
                     ((Vector3 *)&stack0xffffff9c,(Vector3 *)&stack0xffffffc0,(MethodInfo *)0x0);
  if (fVar17 == _UNK_?) {
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    dStack_19 = _UNK_?;
    if (_UNK_? <=
        (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) & _UNK_?,
                         SUB84(dVar18,0) & _UNK_?)) {
      return 0;
    }
  }
  else {
    dVar20 = (_UNK_? - dVar18) / (double)fVar17;
    dVar21 = (_UNK_? - dVar18) / (double)fVar17;
    dVar18 = dVar21;
    if (dVar21 < dVar20) {
      dVar18 = dVar20;
      dVar20 = dVar21;
    }
    if (_UNK_? < dVar20) {
      return 0;
    }
    if (dVar18 < 0.0) {
      return 0;
    }
    dVar18 = 0.0;
    if (0.0 <= dVar20) {
      dVar18 = dVar20;
    }
    dVar20 = _UNK_?;
    if (dVar18 <= _UNK_?) {
      dVar20 = dVar18;
    }
    dStack_19 = _UNK_?;
    fVar17 = (float)dVar20;
    stack0xffffffd0 = (localOrigin->y - SUB84(uVar12,4)) + fVar13 * fVar17;
    puStack_7 = (undefined *)((localOrigin->x - (float)uVar12) + fVar6 * fVar17);
    b = (Transform *)((localOrigin->z - fVar10) + fVar14 * fVar17);
    uStack_1._4_4_ = (float)&UNK_?;
    bVar22 = TriangleCheck_SameSide((Vector3 *)&puStack_7,p1,p2,p3,(MethodInfo *)0x0);
    if (((bVar22 != 0) &&
        (bVar22 = TriangleCheck_SameSide((Vector3 *)&puStack_7,p2,p1,p3,(MethodInfo *)0x0),
        bVar22 != 0)) &&
       (bVar22 = TriangleCheck_SameSide((Vector3 *)&puStack_7,p3,p1,p2,(MethodInfo *)0x0),
       _puStack_10 = _puStack_34, bVar22 != 0)) goto code_?;
  }
  distance = 0.0;
  fVar17 = p1->y - localOrigin->y;
  fVar6 = fVar13 * fVar13 + fVar6 * fVar6 + fVar14 * fVar14;
  fVar13 = p1->x - localOrigin->x;
  fVar10 = p1->z - localOrigin->z;
  pVVar11 = (Vector3 *)(fVar17 * fVar17 + fVar13 * fVar13 + fVar10 * fVar10);
  fVar10 = MathFunctions::MathFunctions_DotProduct
                     ((Vector3 *)&stack0xffffffc0,pVVar11,(MethodInfo *)0x0);
  fVar10 = fVar10 + fVar10;
  bVar22 = TriangleCheck_GetLowestRoot
                    (fVar6,fVar10,(float)pVVar11 - _UNK_?,1.0,&distance,(MethodInfo *)0x0);
  if (bVar22 != 0) {
    dStack_19 = (double)distance;
  }
  fVar14 = p2->y - localOrigin->y;
  fVar13 = p2->x - localOrigin->x;
  uStack_1._4_4_ = localOrigin->y - p2->y;
  uStack_1._0_4_ = localOrigin->x - p2->x;
  fVar6 = p2->z - localOrigin->z;
  fVar13 = fVar14 * fVar14 + fVar13 * fVar13 + fVar6 * fVar6;
  stack0xffffffd0 = (float)&stack0xffffffc0;
  fVar14 = MathFunctions::MathFunctions_DotProduct
                     ((Vector3 *)&stack0xffffffc0,(Vector3 *)&uStack_1,(MethodInfo *)0x0);
  fVar6 = fVar13 - _UNK_?;
  stack0xffffffd0 = fVar6;
  bVar23 = TriangleCheck_GetLowestRoot
                     (fVar6,fVar14 + fVar14,fVar6,(float)dStack_19,&distance,(MethodInfo *)0x0);
  if (bVar23 != 0) {
    dStack_19 = (double)distance;
  }
  fVar24 = p3->y - localOrigin->y;
  fVar17 = p3->x - localOrigin->x;
  fVar14 = p3->z - localOrigin->z;
  fVar14 = fVar24 * fVar24 + fVar17 * fVar17 + fVar14 * fVar14;
  fVar17 = MathFunctions::MathFunctions_DotProduct
                     ((Vector3 *)&stack0xffffffc0,(Vector3 *)&stack0xffffff54,(MethodInfo *)0x0);
  b = (Transform *)(fVar17 + fVar17);
  stack0xfffffff4 = fVar6;
  bVar25 = TriangleCheck_GetLowestRoot
                     (fVar6,(float)b,fVar14 - _UNK_?,(float)dStack_19,&distance,
                      (MethodInfo *)0x0);
  if (bVar25 != 0) {
    dStack_19 = (double)distance;
    puStack_26 = (undefined *)p3->x;
    unique0x10001012 = p3->y;
    b = (Transform *)p3->z;
  }
  bVar27 = bVar25 != 0 || (bVar23 != 0 || bVar22 != 0);
  method = (MethodInfo *)0x0;
  fVar28 = fRam00000004 - (float)voxelHit;
  fVar24 = fRam00000000 - distance;
  voxelHit = (VoxelHit *)&stack0xffffffc0;
  fVar17 = fRam00000008 - 0.0;
  distance = (float)&stack0xffffffdc;
  pCVar29 = (Cube *)(fVar28 * fVar28 + fVar24 * fVar24 + fVar17 * fVar17);
  fVar30 = MathFunctions::MathFunctions_DotProduct
                     ((Vector3 *)distance,(Vector3 *)voxelHit,(MethodInfo *)0x0);
  method = (MethodInfo *)0x0;
  voxelHit = (VoxelHit *)&stack0xffffff90;
  distance = (float)&stack0xffffffdc;
  MathFunctions::MathFunctions_DotProduct((Vector3 *)distance,(Vector3 *)voxelHit,(MethodInfo *)0x0)
  ;
  method = (MethodInfo *)0x0;
  voxelHit = (VoxelHit *)&stack0xffffff90;
  distance = (float)&stack0xffffffc0;
  fVar31 = MathFunctions::MathFunctions_DotProduct
                     ((Vector3 *)distance,(Vector3 *)voxelHit,(MethodInfo *)0x0);
  in_stack_32 = &UNK_?;
  bVar22 = TriangleCheck_GetLowestRoot
                    ((float)((uint)fVar6 ^
                            __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                            ) * (float)pCVar29 + fVar30 * fVar30,
                     (fVar31 + fVar31) * (float)pCVar29 - fVar30 * _UNK_? * 3.2943754e-29,
                     (_UNK_? - fVar10) * (float)pCVar29 + 0.0,(float)dStack_19,&distance,
                     (MethodInfo *)0x0);
  if (((bVar22 != 0) &&
      (fVar10 = (fVar30 * distance - 3.2943754e-29) / (float)pCVar29, _UNK_? <= fVar10)) &&
     (fVar10 <= _UNK_?)) {
    dStack_19 = (double)distance;
    bVar27 = true;
    stack0xfffffff4 = fVar28 * fVar10 + (float)voxelHit;
    puStack_26 = (undefined *)(fVar24 * fVar10 + distance);
    b = (Transform *)(fVar17 * fVar10 + (float)method);
  }
  fVar24 = p3->y - fRam00000004;
  fVar17 = p3->x - fRam00000000;
  fVar10 = p3->z - fRam00000008;
  pCVar29 = (Cube *)(fVar24 * fVar24 + fVar17 * fVar17 + fVar10 * fVar10);
  fVar28 = MathFunctions::MathFunctions_DotProduct
                     ((Vector3 *)&stack0xffffffdc,(Vector3 *)&stack0xffffffc0,(MethodInfo *)0x0);
  fVar30 = MathFunctions::MathFunctions_DotProduct
                     ((Vector3 *)&stack0xffffffdc,(Vector3 *)&stack0xffffff84,(MethodInfo *)0x0);
  fVar31 = MathFunctions::MathFunctions_DotProduct
                     ((Vector3 *)&stack0xffffffc0,(Vector3 *)&stack0xffffff84,(MethodInfo *)0x0);
  bVar22 = TriangleCheck_GetLowestRoot
                    ((float)((uint)fVar6 ^
                            __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                            ) * (float)pCVar29 + fVar28 * fVar28,
                     (fVar31 + fVar31) * (float)pCVar29 - fVar28 * _UNK_? * fVar30,
                     (_UNK_? - fVar13) * (float)pCVar29 + fVar30 * fVar30,(float)dStack_19,
                     &distance,(MethodInfo *)0x0);
  if (((bVar22 != 0) &&
      (fVar13 = (fVar28 * distance - fVar30) / (float)pCVar29, _UNK_? <= fVar13)) &&
     (fVar13 <= _UNK_?)) {
    dStack_19 = (double)distance;
    bVar27 = true;
    stack0xfffffff4 = fVar24 * fVar13 + fRam00000004;
    puStack_26 = (undefined *)(fVar17 * fVar13 + fRam00000000);
    b = (Transform *)(fVar10 * fVar13 + fRam00000008);
  }
  fVar24 = (float)voxelHit - p3->y;
  fVar13 = distance - p3->x;
  fVar10 = (float)method - p3->z;
  fVar17 = fVar24 * fVar24 + fVar13 * fVar13 + fVar10 * fVar10;
  fVar28 = MathFunctions::MathFunctions_DotProduct
                     ((Vector3 *)&stack0xffffffdc,(Vector3 *)&stack0xffffffc0,(MethodInfo *)0x0);
  fVar30 = MathFunctions::MathFunctions_DotProduct
                     ((Vector3 *)&stack0xffffffdc,(Vector3 *)&stack0xffffff78,(MethodInfo *)0x0);
  fVar31 = MathFunctions::MathFunctions_DotProduct
                     ((Vector3 *)&stack0xffffffc0,(Vector3 *)&stack0xffffff78,(MethodInfo *)0x0);
  bVar22 = TriangleCheck_GetLowestRoot
                    ((float)((uint)fVar6 ^
                            __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                            ) * fVar17 + fVar28 * fVar28,
                     (fVar31 + fVar31) * fVar17 - fVar28 * _UNK_? * fVar30,
                     (_UNK_? - fVar14) * fVar17 + fVar30 * fVar30,(float)dStack_19,&distance,
                     (MethodInfo *)0x0);
  if (((bVar22 == 0) || (fVar17 = (fVar28 * distance - fVar30) / fVar17, fVar17 < _UNK_?)) ||
     (_UNK_? < fVar17)) {
    dVar20 = dStack_19;
    if (!bVar27) {
      return 0;
    }
  }
  else {
    stack0xfffffff4 = fVar24 * fVar17 + p3->y;
    puStack_26 = (undefined *)(fVar13 * fVar17 + p3->x);
    b = (Transform *)(fVar10 * fVar17 + p3->z);
    dVar20 = (double)distance;
  }
code_?:
  dStack_19 = dVar20;
  pVVar33 = voxelHit;
  (voxelHit->point).x = (float)_puStack_10;
  (voxelHit->point).y = SUB84(_puStack_10,4);
  (voxelHit->point).z = (float)b;
  fVar34 = (float10)func_?();
  pVVar33->distance = (float)(fVar34 * (float10)(float)dStack_19);
  if ((float)(fVar34 * (float10)(float)dStack_19) < 0.0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
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
    dVar2 = (double)fVar1;
    if (dVar2 < 0.0) {
      func_?();
    }
    else {
      dVar2 = SQRT(dVar2);
    }
    fVar3 = ((float)((uint)b ^
                    __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field) -
            (float)dVar2) / (a + a);
    fVar4 = ((float)((uint)b ^
                    __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field) +
            (float)dVar2) / (a + a);
    fVar1 = fVar4;
    if (fVar4 < fVar3) {
      fVar1 = fVar3;
      fVar3 = fVar4;
    }
    if ((0.0 < fVar3) && (fVar3 < maxR)) {
      *root = fVar3;
      return 1;
    }
    if ((0.0 < fVar1) && (fVar1 < maxR)) {
      *root = fVar1;
      return 1;
    }
  }
  return 0;
}


/* Boolean IsFrontFacingTo(Plane ByRef, Vector3 ByRef) */

bool Assembly-CSharp.dll::TriangleCheck::TriangleCheck_IsFrontFacingTo
               (Plane *plane,Vector3 *direction,MethodInfo *method)

{
  VStack_1.x = (plane->m_Normal).x;
  VStack_1.y = (plane->m_Normal).y;
  VStack_1.z = (plane->m_Normal).z;
  fVar2 = MathFunctions::MathFunctions_DotProduct(&VStack_1,direction,(MethodInfo *)0x0);
  return fVar2 <= 0.0;
}


/* Boolean IsFrontFacingTo(Vector3 ByRef, Vector3 ByRef) */

bool Assembly-CSharp.dll::TriangleCheck::TriangleCheck_IsFrontFacingTo_1
               (Vector3 *planeNormal,Vector3 *direction,MethodInfo *method)

{
  fVar1 = MathFunctions::MathFunctions_DotProduct(planeNormal,direction,(MethodInfo *)0x0);
  return fVar1 <= 0.0;
}


/* Boolean PointInTriangle(Vector3 ByRef, Vector3 ByRef, Vector3 ByRef, Vector3 ByRef) */

bool Assembly-CSharp.dll::TriangleCheck::TriangleCheck_PointInTriangle
               (Vector3 *p,Vector3 *a,Vector3 *b,Vector3 *c,MethodInfo *method)

{
  bVar1 = TriangleCheck_SameSide(p,a,b,c,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    bVar1 = TriangleCheck_SameSide(p,b,a,c,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      bVar1 = TriangleCheck_SameSide(p,c,a,b,(MethodInfo *)0x0);
      return bVar1 != 0;
    }
  }
  return 0;
}


/* Boolean SameSide(Vector3 ByRef, Vector3 ByRef, Vector3 ByRef, Vector3 ByRef) */

bool Assembly-CSharp.dll::TriangleCheck::TriangleCheck_SameSide
               (Vector3 *p1,Vector3 *p2,Vector3 *a,Vector3 *b,MethodInfo *method)

{
  fVar1 = b->y - a->y;
  fVar2 = b->z - a->z;
  fVar3 = b->x - a->x;
  fVar4 = p1->y - a->y;
  fVar5 = p1->z - a->z;
  fVar6 = p1->x - a->x;
  VStack_7.z = fVar4 * fVar3 - fVar6 * fVar1;
  VStack_7.y = fVar6 * fVar2 - fVar5 * fVar3;
  VStack_7.x = fVar5 * fVar1 - fVar4 * fVar2;
  fVar4 = p2->y - a->y;
  fVar5 = p2->z - a->z;
  fVar6 = p2->x - a->x;
  VStack_8.z = fVar4 * fVar3 - fVar6 * fVar1;
  VStack_8.y = fVar6 * fVar2 - fVar5 * fVar3;
  VStack_8.x = fVar5 * fVar1 - fVar4 * fVar2;
  fVar5 = MathFunctions::MathFunctions_DotProduct(&VStack_7,&VStack_8,(MethodInfo *)0x0);
  return _UNK_? <= fVar5;
}


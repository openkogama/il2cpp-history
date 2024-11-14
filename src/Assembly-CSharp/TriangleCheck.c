
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
  pTStack_7 = (Transform *)p3->x;
  puStack_8 = (undefined *)p3->y;
  uVar9 = p1->x;
  uVar10 = p1->y;
  fVar11 = p3->z - p1->z;
  value.y = ((float)pTStack_7 - (float)uVar9) * fVar6 - fVar11 * ((float)uVar2 - (float)uVar4);
  value.x = fVar11 * ((float)uVar3 - (float)uVar5) - ((float)puStack_8 - (float)uVar10) * fVar6;
  value.z = ((float)puStack_8 - (float)uVar10) * ((float)uVar2 - (float)uVar4) -
            ((float)pTStack_7 - (float)uVar9) * ((float)uVar3 - (float)uVar5);
  pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                      ((Vector3 *)&pTStack_7,value,(MethodInfo *)0x0);
  uVar13._0_4_ = pVVar12->x;
  uVar13._4_4_ = pVVar12->y;
  fVar11 = pVVar12->z;
  pCVar14 = (Cube *)(distance * localDirection->x);
  fVar6 = distance * localDirection->y;
  fVar15 = distance * localDirection->z;
  fStack_16 = p1->x;
  puStack_17 = (undefined *)p1->y;
  fVar18 = MathFunctions::MathFunctions_DotProduct
                     ((Vector3 *)&stack0xffffff9c,localDirection,(MethodInfo *)0x0);
  if (0.0 < fVar18) {
    return 0;
  }
  dVar19 = MathFunctions::MathFunctions_SignedDistanceTo_1
                     ((Vector3 *)&stack0xffffff9c,(Vector3 *)&fStack_16,localOrigin,
                      (MethodInfo *)0x0);
  fVar18 = MathFunctions::MathFunctions_DotProduct
                     ((Vector3 *)&stack0xffffff9c,(Vector3 *)&stack0xffffffbc,(MethodInfo *)0x0);
  if (fVar18 == _UNK_?) {
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    dStack_20 = _UNK_?;
    if (_UNK_? <=
        (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) & _UNK_?,
                         SUB84(dVar19,0) & _UNK_?)) {
      return 0;
    }
  }
  else {
    dVar21 = (_UNK_? - dVar19) / (double)fVar18;
    dVar22 = (_UNK_? - dVar19) / (double)fVar18;
    dVar19 = dVar22;
    if (dVar22 < dVar21) {
      dVar19 = dVar21;
      dVar21 = dVar22;
    }
    if (_UNK_? < dVar21) {
      return 0;
    }
    if (dVar19 < 0.0) {
      return 0;
    }
    dVar19 = 0.0;
    if (0.0 <= dVar21) {
      dVar19 = dVar21;
    }
    dVar21 = _UNK_?;
    if (dVar19 <= _UNK_?) {
      dVar21 = dVar19;
    }
    dStack_20 = _UNK_?;
    fVar18 = (float)dVar21;
    puStack_8 = (undefined *)((localOrigin->y - SUB84(uVar13,4)) + fVar6 * fVar18);
    pTStack_7 = (Transform *)((localOrigin->x - (float)uVar13) + (float)pCVar14 * fVar18);
    fVar11 = (localOrigin->z - fVar11) + fVar15 * fVar18;
    uStack_1._4_4_ = (float)&UNK_?;
    bVar23 = TriangleCheck_SameSide((Vector3 *)&pTStack_7,p1,p2,p3,(MethodInfo *)0x0);
    if (((bVar23 != 0) &&
        (bVar23 = TriangleCheck_SameSide((Vector3 *)&pTStack_7,p2,p1,p3,(MethodInfo *)0x0),
        bVar23 != 0)) &&
       (bVar23 = TriangleCheck_SameSide((Vector3 *)&pTStack_7,p3,p1,p2,(MethodInfo *)0x0),
       _pCStack_10 = _pTStack_38, bVar23 != 0)) goto code_?;
  }
  distance = 0.0;
  fVar6 = fVar6 * fVar6 + (float)pCVar14 * (float)pCVar14 + fVar15 * fVar15;
  fVar11 = MathFunctions::MathFunctions_DotProduct
                     ((Vector3 *)&stack0xffffffbc,(Vector3 *)&stack0xffffff6c,(MethodInfo *)0x0);
  bVar23 = TriangleCheck_GetLowestRoot
                    (fVar6,fVar11 + fVar11,3.310279e-29 - _UNK_?,1.0,&distance,
                     (MethodInfo *)0x0);
  if (bVar23 != 0) {
    dStack_20 = (double)distance;
  }
  fVar18 = p2->y - localOrigin->y;
  fVar15 = p2->x - localOrigin->x;
  uStack_1._4_4_ = localOrigin->y - p2->y;
  uStack_1._0_4_ = localOrigin->x - p2->x;
  fVar11 = p2->z - localOrigin->z;
  fVar15 = fVar18 * fVar18 + fVar15 * fVar15 + fVar11 * fVar11;
  fVar11 = MathFunctions::MathFunctions_DotProduct
                     ((Vector3 *)&stack0xffffffbc,(Vector3 *)&uStack_1,(MethodInfo *)0x0);
  bVar24 = TriangleCheck_GetLowestRoot
                     (fVar6,fVar11 + fVar11,fVar15 - _UNK_?,(float)dStack_20,&distance,
                      (MethodInfo *)0x0);
  if (bVar24 != 0) {
    dStack_20 = (double)distance;
  }
  fVar25 = p3->y - localOrigin->y;
  fVar18 = p3->x - localOrigin->x;
  fVar11 = p3->z - localOrigin->z;
  fVar18 = fVar25 * fVar25 + fVar18 * fVar18 + fVar11 * fVar11;
  fVar11 = MathFunctions::MathFunctions_DotProduct
                     ((Vector3 *)&stack0xffffffbc,(Vector3 *)&stack0xffffff54,(MethodInfo *)0x0);
  fVar11 = fVar11 + fVar11;
  stack0xfffffff4 = fVar6;
  bVar26 = TriangleCheck_GetLowestRoot
                     (fVar6,fVar11,fVar18 - _UNK_?,(float)dStack_20,&distance,
                      (MethodInfo *)0x0);
  if (bVar26 != 0) {
    dStack_20 = (double)distance;
    pCStack_27 = (Collider *)p3->x;
    unique0x10001012 = p3->y;
    fVar11 = p3->z;
  }
  bVar28 = bVar26 != 0 || (bVar24 != 0 || bVar23 != 0);
  method = (MethodInfo *)0x0;
  fVar29 = fRam00000004 - (float)voxelHit;
  fVar25 = fRam00000000 - distance;
  voxelHit = (VoxelHit *)&stack0xffffffbc;
  fVar6 = fRam00000008 - 0.0;
  distance = (float)&stack0xffffffdc;
  fVar30 = fVar29 * fVar29 + fVar25 * fVar25 + fVar6 * fVar6;
  fVar31 = MathFunctions::MathFunctions_DotProduct
                     ((Vector3 *)distance,(Vector3 *)voxelHit,(MethodInfo *)0x0);
  method = (MethodInfo *)0x0;
  voxelHit = (VoxelHit *)&stack0xffffff90;
  distance = (float)&stack0xffffffdc;
  fVar32 = MathFunctions::MathFunctions_DotProduct
                     ((Vector3 *)distance,(Vector3 *)voxelHit,(MethodInfo *)0x0);
  method = (MethodInfo *)0x0;
  voxelHit = (VoxelHit *)&stack0xffffff90;
  distance = (float)&stack0xffffffbc;
  fVar33 = MathFunctions::MathFunctions_DotProduct
                     ((Vector3 *)distance,(Vector3 *)voxelHit,(MethodInfo *)0x0);
  in_stack_34 = &UNK_?;
  bVar23 = TriangleCheck_GetLowestRoot
                    ((float)(
                            __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                            ^ 0xADDR) * fVar30 + fVar31 * fVar31,
                     (fVar33 + fVar33) * fVar30 - (fVar31 + fVar31) * fVar32,
                     (_UNK_? - 3.3103007e-29) * fVar30 + fVar32 * fVar32,(float)dStack_20,
                     &distance,(MethodInfo *)0x0);
  if (((bVar23 != 0) && (fVar30 = (fVar31 * distance - fVar32) / fVar30, _UNK_? <= fVar30)) &&
     (fVar30 <= _UNK_?)) {
    dStack_20 = (double)distance;
    bVar28 = true;
    stack0xfffffff4 = fVar29 * fVar30 + (float)voxelHit;
    pCStack_27 = (Collider *)(fVar25 * fVar30 + distance);
    fVar11 = fVar6 * fVar30 + (float)method;
  }
  fVar29 = p3->y - fRam00000004;
  fVar25 = p3->x - fRam00000000;
  fVar6 = p3->z - fRam00000008;
  fVar30 = fVar29 * fVar29 + fVar25 * fVar25 + fVar6 * fVar6;
  fVar31 = MathFunctions::MathFunctions_DotProduct
                     ((Vector3 *)&stack0xffffffdc,(Vector3 *)&stack0xffffffbc,(MethodInfo *)0x0);
  fVar32 = MathFunctions::MathFunctions_DotProduct
                     ((Vector3 *)&stack0xffffffdc,(Vector3 *)&stack0xffffff84,(MethodInfo *)0x0);
  fVar33 = MathFunctions::MathFunctions_DotProduct
                     ((Vector3 *)&stack0xffffffbc,(Vector3 *)&stack0xffffff84,(MethodInfo *)0x0);
  bVar23 = TriangleCheck_GetLowestRoot
                    ((float)(
                            __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                            ^ 0xADDR) * fVar30 + fVar31 * fVar31,
                     (fVar33 + fVar33) * fVar30 - (fVar31 + fVar31) * fVar32,
                     (_UNK_? - fVar15) * fVar30 + fVar32 * fVar32,(float)dStack_20,&distance,
                     (MethodInfo *)0x0);
  if (((bVar23 != 0) && (fVar30 = (fVar31 * distance - fVar32) / fVar30, _UNK_? <= fVar30)) &&
     (fVar30 <= _UNK_?)) {
    dStack_20 = (double)distance;
    bVar28 = true;
    stack0xfffffff4 = fVar29 * fVar30 + fRam00000004;
    pCStack_27 = (Collider *)(fVar25 * fVar30 + fRam00000000);
    fVar11 = fVar6 * fVar30 + fRam00000008;
  }
  fVar30 = (float)voxelHit - p3->y;
  fVar15 = distance - p3->x;
  fVar6 = (float)method - p3->z;
  fVar25 = fVar30 * fVar30 + fVar15 * fVar15 + fVar6 * fVar6;
  fVar29 = MathFunctions::MathFunctions_DotProduct
                     ((Vector3 *)&stack0xffffffdc,(Vector3 *)&stack0xffffffbc,(MethodInfo *)0x0);
  fVar31 = MathFunctions::MathFunctions_DotProduct
                     ((Vector3 *)&stack0xffffffdc,(Vector3 *)&stack0xffffff78,(MethodInfo *)0x0);
  fVar32 = MathFunctions::MathFunctions_DotProduct
                     ((Vector3 *)&stack0xffffffbc,(Vector3 *)&stack0xffffff78,(MethodInfo *)0x0);
  bVar23 = TriangleCheck_GetLowestRoot
                    ((float)(
                            __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                            ^ 0xADDR) * fVar25 + fVar29 * fVar29,
                     (fVar32 + fVar32) * fVar25 - (fVar29 + fVar29) * fVar31,
                     (_UNK_? - fVar18) * fVar25 + fVar31 * fVar31,(float)dStack_20,&distance,
                     (MethodInfo *)0x0);
  if (((bVar23 == 0) || (fVar25 = (fVar29 * distance - fVar31) / fVar25, fVar25 < _UNK_?)) ||
     (_UNK_? < fVar25)) {
    dVar21 = dStack_20;
    if (!bVar28) {
      return 0;
    }
  }
  else {
    stack0xfffffff4 = fVar30 * fVar25 + p3->y;
    pCStack_27 = (Collider *)(fVar15 * fVar25 + p3->x);
    fVar11 = fVar6 * fVar25 + p3->z;
    dVar21 = (double)distance;
  }
code_?:
  dStack_20 = dVar21;
  pVVar35 = voxelHit;
  (voxelHit->point).x = (float)_pCStack_10;
  (voxelHit->point).y = SUB84(_pCStack_10,4);
  (voxelHit->point).z = fVar11;
  fVar36 = (float10)func_?();
  pVVar35->distance = (float)(fVar36 * (float10)(float)dStack_20);
  if ((float)(fVar36 * (float10)(float)dStack_20) < 0.0) {
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
                    __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) -
            (float)dVar2) / (a + a);
    fVar4 = ((float)((uint)b ^
                    __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) +
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


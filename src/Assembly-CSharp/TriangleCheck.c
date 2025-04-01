
/* Boolean CheckTriangle(Vector3 ByRef, Vector3 ByRef, Vector3 ByRef, Vector3 ByRef, Vector3 ByRef,
   Single, VoxelHit ByRef) */

bool Assembly-CSharp.dll::TriangleCheck::TriangleCheck_CheckTriangle
               (Vector3 *p1,Vector3 *p2,Vector3 *p3,Vector3 *localOrigin,Vector3 *localDirection,
               float distance,VoxelHit *voxelHit,MethodInfo *method)

{
  pVVar1 = p1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__System__Math);
    func_?(&StringLiteral_Found_negativ_distance__this_sho);
    cRam_? = '\x01';
  }
  b = p3;
  uStack_2._0_4_ = 0.0;
  uStack_2._4_4_ = 0.0;
  uVar3 = p2->x;
  uVar4 = p2->y;
  uVar5 = p1->x;
  uVar6 = p1->y;
  fVar7 = p2->z - p1->z;
  pcStack_8 = (char *)p3->x;
  pIStack_9 = (Il2CppClass *)p3->y;
  uVar10 = p1->x;
  uVar11 = p1->y;
  fVar12 = p3->z - p1->z;
  value.y = fVar7 * ((float)pcStack_8 - (float)uVar10) - fVar12 * ((float)uVar3 - (float)uVar5);
  value.x = fVar12 * ((float)uVar4 - (float)uVar6) - ((float)pIStack_9 - (float)uVar11) * fVar7;
  value.z = ((float)pIStack_9 - (float)uVar11) * ((float)uVar3 - (float)uVar5) -
            ((float)uVar4 - (float)uVar6) * ((float)pcStack_8 - (float)uVar10);
  pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                      ((Vector3 *)&pcStack_8,value,(MethodInfo *)0x0);
  uVar14._0_4_ = pVVar13->x;
  uVar14._4_4_ = pVVar13->y;
  fVar12 = pVVar13->z;
  pIVar15 = (Il2CppMethodPointer)(distance * localDirection->x);
  pIVar16 = (Il2CppMethodPointer)(distance * localDirection->y);
  fVar7 = distance * localDirection->z;
  fStack_17 = p1->x;
  puStack_18 = (undefined *)p1->y;
  fVar19 = MathFunctions::MathFunctions_DotProduct
                     ((Vector3 *)&stack0xffffffa0,localDirection,(MethodInfo *)0x0);
  if (0.0 < fVar19) {
    return 0;
  }
  dVar20 = MathFunctions::MathFunctions_SignedDistanceTo_1
                     ((Vector3 *)&stack0xffffffa0,(Vector3 *)&fStack_17,localOrigin,
                      (MethodInfo *)0x0);
  fVar19 = MathFunctions::MathFunctions_DotProduct
                     ((Vector3 *)&stack0xffffffa0,(Vector3 *)&stack0xffffffc0,(MethodInfo *)0x0);
  if (fVar19 == _UNK_?) {
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (_UNK_? <=
        (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) & _UNK_?,
                         SUB84(dVar20,0) & _UNK_?)) {
      return 0;
    }
  }
  else {
    dVar21 = (_UNK_? - dVar20) / (double)fVar19;
    dVar22 = (_UNK_? - dVar20) / (double)fVar19;
    dVar20 = dVar22;
    if (dVar22 < dVar21) {
      dVar20 = dVar21;
      dVar21 = dVar22;
    }
    if (_UNK_? < dVar21) {
      return 0;
    }
    if (dVar20 < 0.0) {
      return 0;
    }
    dVar20 = 0.0;
    if (0.0 <= dVar21) {
      dVar20 = dVar21;
    }
    dVar21 = _UNK_?;
    if (dVar20 <= _UNK_?) {
      dVar21 = dVar20;
    }
    fVar19 = (float)dVar21;
    pIStack_9 = (Il2CppClass *)
                 ((localOrigin->y - (float)SUB84(uVar14,4)) + (float)pIVar16 * fVar19);
    pcStack_8 = (char *)((localOrigin->x - (float)(char *)uVar14) + (float)pIVar15 * fVar19);
    pTVar23 = (Transform *)((localOrigin->z - fVar12) + fVar7 * fVar19);
    uStack_2._4_4_ = (float)&UNK_?;
    bVar24 = TriangleCheck_SameSide((Vector3 *)&pcStack_8,p1,p2,b,(MethodInfo *)0x0);
    if (((bVar24 != 0) &&
        (bVar24 = TriangleCheck_SameSide((Vector3 *)&pcStack_8,p2,p1,b,(MethodInfo *)0x0),
        bVar24 != 0)) &&
       (bVar24 = TriangleCheck_SameSide((Vector3 *)&pcStack_8,b,p1,p2,(MethodInfo *)0x0),
       _fStack_10 = _pcStack_34, bVar24 != 0)) goto code_?;
  }
  fStack_25 = 0.0;
  p3 = (Vector3 *)0x0;
  ppIVar26 = (Il2CppType **)
             ((float)pIVar16 * (float)pIVar16 + (float)pIVar15 * (float)pIVar15 + fVar7 * fVar7);
  fVar7 = p1->x - localOrigin->x;
  fVar19 = p1->y - localOrigin->y;
  fVar12 = p1->z - localOrigin->z;
  _Var21 = (_union_155)(fVar19 * fVar19 + fVar7 * fVar7 + fVar12 * fVar12);
  distance = MathFunctions::MathFunctions_DotProduct
                       ((Vector3 *)&stack0xffffffc0,(Vector3 *)_Var21.genericMethod,
                        (MethodInfo *)0x0);
  _Var14 = (_union_155)(distance + distance);
  dVar20 = _UNK_?;
  bVar24 = TriangleCheck_GetLowestRoot
                    ((float)ppIVar26,(float)_Var14,(float)_Var21 - _UNK_?,1.0,(float *)&p3,
                     (MethodInfo *)0x0);
  if (bVar24 != 0) {
    dVar20 = (double)(float)p3;
    fStack_25 = p1->x;
  }
  fVar7 = p2->x - localOrigin->x;
  fVar19 = p2->y - localOrigin->y;
  uStack_2._4_4_ = localOrigin->y - p2->y;
  uStack_2._0_4_ = localOrigin->x - p2->x;
  fVar12 = p2->z - localOrigin->z;
  _Var22 = (_union_154)(fVar19 * fVar19 + fVar7 * fVar7 + fVar12 * fVar12);
  distance = MathFunctions::MathFunctions_DotProduct
                       ((Vector3 *)&stack0xffffffc0,(Vector3 *)&uStack_2,(MethodInfo *)0x0);
  dVar21 = (double)((ulonglong)dVar20 & 0xffffffff00000000);
  a = (Transform *)(distance + distance);
  bVar24 = TriangleCheck_GetLowestRoot
                    ((float)a,(float)a,(float)_Var22 - _UNK_?,(float)dVar20,(float *)&p3,
                     (MethodInfo *)0x0);
  if (bVar24 != 0) {
    dVar21 = (double)(float)p3;
    fStack_25 = p2->x;
  }
  fVar7 = b->x - localOrigin->x;
  fVar19 = b->y - localOrigin->y;
  fVar12 = b->z - localOrigin->z;
  fVar12 = fVar19 * fVar19 + fVar7 * fVar7 + fVar12 * fVar12;
  distance = MathFunctions::MathFunctions_DotProduct
                       ((Vector3 *)&stack0xffffffc0,(Vector3 *)&stack0xffffff58,(MethodInfo *)0x0);
  p1 = (Vector3 *)(float)dVar21;
  p3 = (Vector3 *)0x0;
  pTVar23 = a;
  bVar24 = TriangleCheck_GetLowestRoot
                    ((float)a,distance + distance,fVar12 - _UNK_?,(float)p1,(float *)&p3,
                     (MethodInfo *)0x0);
  if (bVar24 != 0) {
    dVar21 = (double)(float)p3;
    p1 = (Vector3 *)0x1000000;
    fStack_25 = b->x;
    pCStack_27 = (Collider *)b->y;
    pTVar23 = (Transform *)b->z;
  }
  _Var21 = (_union_155)((float)localOrigin - pVVar1->y);
  _Var18 = (_union_154)((float)p3 - pVVar1->x);
  method = (MethodInfo *)&stack0xffffffc0;
  fVar7 = (float)localDirection - pVVar1->z;
  voxelHit = (VoxelHit *)&stack0xffffffdc;
  fVar19 = (float)_Var21 * (float)_Var21 + (float)_Var18 * (float)_Var18 + fVar7 * fVar7;
  distance = (float)&UNK_?;
  MathFunctions::MathFunctions_DotProduct((Vector3 *)voxelHit,(Vector3 *)method,(MethodInfo *)0x0);
  method = (MethodInfo *)&stack0xffffff94;
  voxelHit = (VoxelHit *)&stack0xffffffdc;
  distance = (float)&UNK_?;
  localDirection =
       (Vector3 *)
       MathFunctions::MathFunctions_DotProduct
                 ((Vector3 *)voxelHit,(Vector3 *)method,(MethodInfo *)0x0);
  method = (MethodInfo *)&stack0xffffff94;
  voxelHit = (VoxelHit *)&stack0xffffffc0;
  distance = (float)&UNK_?;
  fVar28 = MathFunctions::MathFunctions_DotProduct
                     ((Vector3 *)voxelHit,(Vector3 *)method,(MethodInfo *)0x0);
  ppIVar26 = (Il2CppType **)
             ((uint)a ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  bVar24 = TriangleCheck_GetLowestRoot
                    ((float)ppIVar26 * fVar19 + distance * distance,
                     (fVar28 + fVar28) * fVar19 - distance * _UNK_? * (float)localDirection,
                     (_UNK_? - (float)_Var14) * fVar19 +
                     (float)localDirection * (float)localDirection,(float)dVar21,(float *)&p3,
                     (MethodInfo *)0x0);
  if (((bVar24 != 0) &&
      (fVar19 = (distance * (float)p3 - (float)localDirection) / fVar19, _UNK_? <= fVar19))
     && (fVar19 <= _UNK_?)) {
    dVar21 = (double)(float)p3;
    p1._3_1_ = '\x01';
    pCStack_27 = (Collider *)((float)_Var21 * fVar19 + pVVar1->y);
    fStack_25 = (float)_Var18 * fVar19 + pVVar1->x;
    pTVar23 = (Transform *)(fVar7 * fVar19 + pVVar1->z);
  }
  _Var14 = (_union_155)(b->y - (float)localOrigin);
  _Var18 = (_union_154)(b->x - (float)p3);
  fVar7 = b->z - (float)localDirection;
  fVar19 = (float)_Var14 * (float)_Var14 + (float)_Var18 * (float)_Var18 + fVar7 * fVar7;
  distance = MathFunctions::MathFunctions_DotProduct
                       ((Vector3 *)&stack0xffffffdc,(Vector3 *)&stack0xffffffc0,(MethodInfo *)0x0);
  localDirection =
       (Vector3 *)
       MathFunctions::MathFunctions_DotProduct
                 ((Vector3 *)&stack0xffffffdc,(Vector3 *)&stack0xffffff88,(MethodInfo *)0x0);
  fVar28 = MathFunctions::MathFunctions_DotProduct
                     ((Vector3 *)&stack0xffffffc0,(Vector3 *)&stack0xffffff88,(MethodInfo *)0x0);
  bVar24 = TriangleCheck_GetLowestRoot
                    ((float)ppIVar26 * fVar19 + distance * distance,
                     (fVar28 + fVar28) * fVar19 - distance * _UNK_? * (float)localDirection,
                     (_UNK_? - (float)_Var22) * fVar19 +
                     (float)localDirection * (float)localDirection,(float)dVar21,(float *)&p3,
                     (MethodInfo *)0x0);
  if (((bVar24 != 0) &&
      (fVar19 = (distance * (float)p3 - (float)localDirection) / fVar19, _UNK_? <= fVar19))
     && (fVar19 <= _UNK_?)) {
    dVar21 = (double)(float)p3;
    p1._3_1_ = '\x01';
    pCStack_27 = (Collider *)((float)_Var14 * fVar19 + (float)localOrigin);
    fStack_25 = (float)_Var18 * fVar19 + (float)p3;
    pTVar23 = (Transform *)(fVar7 * fVar19 + (float)localDirection);
  }
  _Var14 = (_union_155)(pVVar1->y - b->y);
  _Var22 = (_union_154)(pVVar1->x - b->x);
  fVar7 = pVVar1->z - b->z;
  fVar19 = (float)_Var14 * (float)_Var14 + (float)_Var22 * (float)_Var22 + fVar7 * fVar7;
  distance = MathFunctions::MathFunctions_DotProduct
                       ((Vector3 *)&stack0xffffffdc,(Vector3 *)&stack0xffffffc0,(MethodInfo *)0x0);
  localDirection =
       (Vector3 *)
       MathFunctions::MathFunctions_DotProduct
                 ((Vector3 *)&stack0xffffffdc,(Vector3 *)&stack0xffffff7c,(MethodInfo *)0x0);
  fVar28 = MathFunctions::MathFunctions_DotProduct
                     ((Vector3 *)&stack0xffffffc0,(Vector3 *)&stack0xffffff7c,(MethodInfo *)0x0);
  bVar24 = TriangleCheck_GetLowestRoot
                    ((float)ppIVar26 * fVar19 + distance * distance,
                     (fVar28 + fVar28) * fVar19 - distance * _UNK_? * (float)localDirection,
                     (_UNK_? - fVar12) * fVar19 +
                     (float)localDirection * (float)localDirection,(float)dVar21,(float *)&p3,
                     (MethodInfo *)0x0);
  if (((bVar24 == 0) ||
      (fVar19 = (distance * (float)p3 - (float)localDirection) / fVar19, fVar19 < _UNK_?)) ||
     (_UNK_? < fVar19)) {
    if (p1._3_1_ == '\0') {
      return 0;
    }
  }
  else {
    dVar21 = (double)(float)p3;
    pCStack_27 = (Collider *)((float)_Var14 * fVar19 + b->y);
    fStack_25 = (float)_Var22 * fVar19 + b->x;
    pTVar23 = (Transform *)(fVar7 * fVar19 + b->z);
  }
code_?:
  pVVar29 = voxelHit;
  (voxelHit->point).x = (float)_fStack_10;
  (voxelHit->point).y = SUB84(_fStack_10,4);
  (voxelHit->point).z = (float)pTVar23;
  fVar30 = (float10)func_?();
  pVVar29->distance = (float)(fVar30 * (float10)(float)dVar21);
  if ((float)(fVar30 * (float10)(float)dVar21) < 0.0) {
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
      if (bVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}


/* Boolean SameSide(Vector3 ByRef, Vector3 ByRef, Vector3 ByRef, Vector3 ByRef) */

bool Assembly-CSharp.dll::TriangleCheck::TriangleCheck_SameSide
               (Vector3 *p1,Vector3 *p2,Vector3 *a,Vector3 *b,MethodInfo *method)

{
  fVar1 = a->x;
  fVar2 = a->y;
  fStack_3 = b->x - fVar1;
  fVar4 = a->z;
  fVar5 = b->y - fVar2;
  fVar6 = b->z - fVar4;
  fVar7 = p1->y - fVar2;
  fVar8 = p1->z - fVar4;
  fVar9 = p1->x - fVar1;
  VStack_10.z = fVar7 * fStack_3 - fVar9 * fVar5;
  VStack_10.y = fVar9 * fVar6 - fVar8 * fStack_3;
  VStack_10.x = fVar8 * fVar5 - fVar7 * fVar6;
  fVar2 = p2->y - fVar2;
  fVar4 = p2->z - fVar4;
  fVar1 = p2->x - fVar1;
  VStack_11.z = fVar2 * fStack_3 - fVar1 * fVar5;
  VStack_11.y = fVar1 * fVar6 - fVar4 * fStack_3;
  VStack_11.x = fVar4 * fVar5 - fVar2 * fVar6;
  fVar1 = MathFunctions::MathFunctions_DotProduct(&VStack_10,&VStack_11,(MethodInfo *)0x0);
  return _UNK_? <= fVar1;
}


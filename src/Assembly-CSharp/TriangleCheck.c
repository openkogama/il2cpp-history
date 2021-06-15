
/* Boolean CheckTriangle(Vector3 ByRef, Vector3 ByRef, Vector3 ByRef, Vector3 ByRef, Vector3 ByRef,
   Single, VoxelHit ByRef) */

bool Assembly-CSharp.dll::TriangleCheck::TriangleCheck_CheckTriangle
               (Vector3 *p1,Vector3 *p2,Vector3 *p3,Vector3 *localOrigin,Vector3 *localDirection,
               float distance,VoxelHit *voxelHit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  b = p3;
  p2_00 = p1;
  puStack_1 = (undefined *)0x0;
  stack0xffffffd0 = 0.0;
  puStack_2 = (undefined *)0x0;
  stack0xffffff88 = 0.0;
  VStack_3.x = 0.0;
  VStack_3.y = 0.0;
  uVar4._0_4_ = p3->x;
  uVar4._4_4_ = p3->y;
  uVar5._0_4_ = p2->x;
  uVar5._4_4_ = p2->y;
  uVar6._0_4_ = p1->x;
  uVar6._4_4_ = p1->y;
  VStack_3.z = 0.0;
  func_?(&stack0xffffff38,uVar6,p1->z,uVar5,p2->z,uVar4,p3->z,0);
  puVar7 = (undefined8 *)func_?(&stack0xffffff9c,&stack0xffffff38,0);
  uVar4 = *puVar7;
  fVar8 = *(float *)(puVar7 + 1);
  puStack_1 = (undefined *)(localDirection->x * distance);
  register0x00001200 = localDirection->y * distance;
  fVar9 = localDirection->z * distance;
  p3 = (Vector3 *)
       MathFunctions::MathFunctions_DotProduct
                 ((Vector3 *)&stack0xffffffb4,localDirection,(MethodInfo *)0x0);
  if (0.0 < (float)p3) {
    return 0;
  }
  p1 = (Vector3 *)((uint)p1 & 0xffffff);
  dVar10 = MathFunctions::MathFunctions_SignedDistanceTo_1
                     ((Vector3 *)&stack0xffffffb4,(Vector3 *)&stack0xffffff48,localOrigin,
                      (MethodInfo *)0x0);
  p3 = (Vector3 *)
       MathFunctions::MathFunctions_DotProduct
                 ((Vector3 *)&stack0xffffffb4,(Vector3 *)&puStack_1,(MethodInfo *)0x0);
  if ((float)p3 == _UNK_?) {
    if (_UNK_? <=
        (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & _UNK_?,
                         SUB84(dVar10,0) & _UNK_?)) {
      return 0;
    }
    p1 = (Vector3 *)CONCAT13(1,p1._0_3_);
    dVar10 = 0.0;
  }
  else {
    dVar11 = (_UNK_? - dVar10) / (double)(float)p3;
    dVar12 = (_UNK_? - dVar10) / (double)(float)p3;
    dVar10 = dVar11;
    if (dVar12 < dVar11) {
      dVar10 = dVar12;
      dVar12 = dVar11;
    }
    if (_UNK_? < dVar10) {
      return 0;
    }
    if (dVar12 < 0.0) {
      return 0;
    }
    dVar12 = 0.0;
    if (0.0 <= dVar10) {
      dVar12 = dVar10;
    }
    dVar10 = _UNK_?;
    if (dVar12 <= _UNK_?) {
      dVar10 = dVar12;
    }
  }
  dVar12 = _UNK_?;
  func_?();
  p3 = (Vector3 *)((uint)p3 & 0xffffff);
  if (p1._3_1_ == '\0') {
    fVar13 = (float)dVar10;
    fVar14 = (float)puStack_1 * fVar13 + (localOrigin->x - (float)uVar4);
    fVar15 = stack0xffffffd0 * fVar13;
    fVar16 = localOrigin->y;
    fVar8 = (localOrigin->z - fVar8) + fVar9 * fVar13;
    bVar17 = TriangleCheck_SameSide((Vector3 *)&stack0xffffff9c,p2_00,p2,b,(MethodInfo *)0x0);
    if (((bVar17 != 0) &&
        (bVar17 = TriangleCheck_SameSide((Vector3 *)&stack0xffffff9c,p2,p2_00,b,(MethodInfo *)0x0),
        bVar17 != 0)) &&
       (bVar17 = TriangleCheck_SameSide((Vector3 *)&stack0xffffff9c,b,p2_00,p2,(MethodInfo *)0x0),
       bVar17 != 0)) {
      uVar18 = CONCAT44((fVar16 - SUB84(uVar4,4)) + fVar15,fVar14);
      goto code_?;
    }
  }
  p1 = (Vector3 *)0x0;
  fVar9 = stack0xffffffd0 * stack0xffffffd0 + (float)puStack_1 * (float)puStack_1 + fVar9 * fVar9;
  method_00 = (MethodInfo *)(p2_00->x - localOrigin->x);
  register0x00001380 = p2_00->y - localOrigin->y;
  fVar8 = p2_00->z - localOrigin->z;
  fVar8 = register0x00001380 * register0x00001380 + (float)method_00 * (float)method_00 +
           fVar8 * fVar8;
  stack0xffffff88 = (float)&puStack_1;
  localDirection =
       (Vector3 *)
       MathFunctions::MathFunctions_DotProduct
                 ((Vector3 *)&puStack_1,(Vector3 *)&stack0xffffff6c,method_00);
  stack0xffffff88 = fVar9;
  bVar17 = TriangleCheck_GetLowestRoot
                    (fVar9,(float)localDirection + (float)localDirection,fVar8 - _UNK_?,1.0,
                     (float *)&p1,(MethodInfo *)0x0);
  if (bVar17 != 0) {
    dVar12 = (double)(float)p1;
    p3 = (Vector3 *)CONCAT13(1,p3._0_3_);
  }
  puStack_2 = (undefined *)(p2->x - localOrigin->x);
  register0x00001380 = p2->y - localOrigin->y;
  stack0xffffff88 = register0x00001380;
  fVar8 = p2->z - localOrigin->z;
  pVVar19 = (Vector3 *)
            (register0x00001380 * register0x00001380 + (float)puStack_2 * (float)puStack_2 +
            fVar8 * fVar8);
  localDirection =
       (Vector3 *)
       MathFunctions::MathFunctions_DotProduct
                 (pVVar19,(Vector3 *)&stack0xffffff60,(MethodInfo *)0x0);
  fVar16 = (float)localDirection + (float)localDirection;
  bVar17 = TriangleCheck_GetLowestRoot
                    (fVar9,fVar16,(float)pVVar19 - _UNK_?,(float)dVar12,(float *)&p1,
                     (MethodInfo *)0x0);
  if (bVar17 != 0) {
    dVar12 = (double)(float)p1;
    p3 = (Vector3 *)CONCAT13(1,p3._0_3_);
  }
  register0x00001340 = b->x - localOrigin->x;
  fVar15 = b->y - localOrigin->y;
  fVar8 = b->z - localOrigin->z;
  fVar15 = fVar15 * fVar15 + register0x00001340 * register0x00001340 + fVar8 * fVar8;
  stack0xffffffd0 = (float)&puStack_1;
  localDirection =
       (Vector3 *)
       MathFunctions::MathFunctions_DotProduct
                 ((Vector3 *)&puStack_1,(Vector3 *)&stack0xffffff54,(MethodInfo *)0x0);
  fVar8 = 0.0;
  uVar18 = CONCAT44(&p1,(float)dVar12);
  register0x00001200 = fVar15 - _UNK_?;
  bVar17 = TriangleCheck_GetLowestRoot
                    (register0x00001200,(float)localDirection + (float)localDirection,
                     register0x00001200,(float)dVar12,(float *)&p1,(MethodInfo *)0x0);
  if (bVar17 != 0) {
    p3 = (Vector3 *)CONCAT13(1,p3._0_3_);
    uVar18._0_4_ = b->x;
    uVar18._4_4_ = b->y;
    fVar8 = b->z;
  }
  VStack_3.y = p2->y - p2_00->y;
  VStack_3.x = p2->x - p2_00->x;
  fVar14 = p2->z - p2_00->z;
  fVar14 = VStack_3.y * VStack_3.y + VStack_3.x * VStack_3.x + fVar14 * fVar14;
  VStack_3.z = (float)&UNK_?;
  localDirection =
       (Vector3 *)
       MathFunctions::MathFunctions_DotProduct(&VStack_3,(Vector3 *)&puStack_1,(MethodInfo *)0x0);
  VStack_3.z = (float)&UNK_?;
  distance = MathFunctions::MathFunctions_DotProduct
                       (&VStack_3,(Vector3 *)&stack0xffffff90,(MethodInfo *)0x0);
  dVar10 = (double)CONCAT44((Vector3 *)&stack0xffffff90,(Vector3 *)&puStack_1);
  VStack_3.z = (float)&UNK_?;
  fVar13 = MathFunctions::MathFunctions_DotProduct
                     ((Vector3 *)&puStack_1,(Vector3 *)&stack0xffffff90,(MethodInfo *)0x0);
  voxelHit = (VoxelHit *)&p1;
  method = (MethodInfo *)0x0;
  register0x00001300 = (float)((uint)stack0xffffffd8 ^ _UNK_?);
  pVVar19 = (Vector3 *)((_UNK_? - fVar16) * fVar14 + distance * distance);
  localOrigin = (Vector3 *)
                ((fVar13 + fVar13) * fVar14 - (float)localDirection * _UNK_? * distance);
  p3 = (Vector3 *)((float)localDirection * (float)localDirection + fVar14 * register0x00001300);
  p2 = (Vector3 *)&UNK_?;
  localDirection = pVVar19;
  distance = (float)dVar10;
  bVar17 = TriangleCheck_GetLowestRoot
                    ((float)p3,(float)localOrigin,(float)pVVar19,(float)dVar10,(float *)voxelHit,
                     (MethodInfo *)0x0);
  if (((bVar17 != 0) &&
      (fVar14 = ((float)localDirection * (float)p1 - distance) / fVar14, _UNK_? <= fVar14))
     && (fVar14 <= _UNK_?)) {
    dVar10 = (double)(float)p1;
    p3 = (Vector3 *)CONCAT13(1,p3._0_3_);
    uVar18 = CONCAT44(VStack_3.y * fVar14 + p2_00->y,VStack_3.x * fVar14 + p2_00->x);
    fVar8 = VStack_3.z * fVar14 + p2_00->z;
  }
  VStack_3.y = b->y - p2->y;
  VStack_3.x = b->x - p2->x;
  VStack_3.z = b->z - p2->z;
  fVar16 = VStack_3.y * VStack_3.y + VStack_3.x * VStack_3.x + VStack_3.z * VStack_3.z;
  in_stack_20 = &UNK_?;
  localDirection =
       (Vector3 *)
       MathFunctions::MathFunctions_DotProduct(&VStack_3,(Vector3 *)&puStack_1,(MethodInfo *)0x0);
  in_stack_20 = &UNK_?;
  distance = MathFunctions::MathFunctions_DotProduct
                       (&VStack_3,(Vector3 *)&puStack_2,(MethodInfo *)0x0);
  in_stack_20 = &UNK_?;
  fVar14 = MathFunctions::MathFunctions_DotProduct
                     ((Vector3 *)&puStack_1,(Vector3 *)&puStack_2,(MethodInfo *)0x0);
  bVar17 = TriangleCheck_GetLowestRoot
                    ((float)localDirection * (float)localDirection + fVar16 * stack0xffffffd8,
                     (fVar14 + fVar14) * fVar16 - (float)localDirection * _UNK_? * distance,
                     (_UNK_? - fVar9) * fVar16 + distance * distance,(float)dVar10,
                     (float *)&p1,(MethodInfo *)0x0);
  if (((bVar17 != 0) &&
      (fVar16 = ((float)localDirection * (float)p1 - distance) / fVar16, _UNK_? <= fVar16)) &&
     (fVar16 <= _UNK_?)) {
    dVar10 = (double)(float)p1;
    p3 = (Vector3 *)CONCAT13(1,p3._0_3_);
    uVar18 = CONCAT44(VStack_3.y * fVar16 + p2->y,VStack_3.x * fVar16 + p2->x);
    fVar8 = VStack_3.z * fVar16 + p2->z;
  }
  VStack_3.y = p2_00->y - b->y;
  VStack_3.x = p2_00->x - b->x;
  VStack_3.z = p2_00->z - b->z;
  p2 = (Vector3 *)
       (VStack_3.y * VStack_3.y + VStack_3.x * VStack_3.x + VStack_3.z * VStack_3.z);
  localDirection =
       (Vector3 *)
       MathFunctions::MathFunctions_DotProduct(&VStack_3,(Vector3 *)&puStack_1,(MethodInfo *)0x0);
  distance = MathFunctions::MathFunctions_DotProduct
                       (&VStack_3,(Vector3 *)&stack0xffffff78,(MethodInfo *)0x0);
  fVar9 = MathFunctions::MathFunctions_DotProduct
                    ((Vector3 *)&puStack_1,(Vector3 *)&stack0xffffff78,(MethodInfo *)0x0);
  bVar17 = TriangleCheck_GetLowestRoot
                    ((float)localDirection * (float)localDirection + (float)p2 * stack0xffffffd8,
                     (fVar9 + fVar9) * (float)p2 - (float)localDirection * _UNK_? * distance,
                     (_UNK_? - fVar15) * (float)p2 + distance * distance,(float)dVar10,
                     (float *)&p1,(MethodInfo *)0x0);
  if (((bVar17 == 0) ||
      (register0x00001240 = ((float)localDirection * (float)p1 - distance) / (float)p2,
      register0x00001240 < _UNK_?)) || (_UNK_? < register0x00001240)) {
    if (p3._3_1_ == '\0') {
      return 0;
    }
  }
  else {
    dVar10 = (double)(float)p1;
    uVar18 = CONCAT44(VStack_3.y * register0x00001240 + b->y,
                      VStack_3.x * register0x00001240 + b->x);
    fVar8 = VStack_3.z * register0x00001240 + b->z;
  }
code_?:
  pVVar21 = voxelHit;
  (pVVar21->point).x = (float)(int)uVar18;
  (pVVar21->point).y = (float)(int)((ulonglong)uVar18 >> 0x20);
  (pVVar21->point).z = fVar8;
  stack0xffffff88 = (float)&UNK_?;
  fVar22 = (float10)func_?();
  p2 = (Vector3 *)(float)(fVar22 * (float10)(float)dVar10);
  pVVar21->distance = (float)p2;
  if ((float)p2 < 0.0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    stack0xffffff88 = (float)&UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_Found_negativ_distance__this_sho,(MethodInfo *)0x0);
  }
  return 1;
}


/* Boolean GetLowestRoot(Single, Single, Single, Single, Single ByRef) */

bool Assembly-CSharp.dll::TriangleCheck::TriangleCheck_GetLowestRoot
               (float a,float b,float c,float maxR,float *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (a != 0.0) {
    fVar1 = b * b - a * _UNK_? * c;
    if (0.0 <= fVar1) {
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Mathf);
      }
      dVar2 = (double)fVar1;
      func_?();
      fVar3 = ((float)((uint)b ^ _UNK_?) - (float)dVar2) / (a + a);
      fVar4 = ((float)((uint)b ^ _UNK_?) + (float)dVar2) / (a + a);
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
  }
  return 0;
}


/* Boolean IsFrontFacingTo(Plane ByRef, Vector3 ByRef) */

bool Assembly-CSharp.dll::TriangleCheck::TriangleCheck_IsFrontFacingTo
               (Plane *plane,Vector3 *direction,MethodInfo *method)

{
  VStack_1.z = 0.0;
  VStack_1.x = 0.0;
  VStack_1.y = 0.0;
  puVar2 = (undefined8 *)func_?(auStack_3,plane,0);
  VStack_1._0_8_ = *puVar2;
  VStack_1.z = *(float *)(puVar2 + 1);
  fVar4 = MathFunctions::MathFunctions_DotProduct(&VStack_1,direction,(MethodInfo *)0x0);
  return fVar4 <= 0.0;
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  VStack_1.x = 0.0;
  VStack_1.y = 0.0;
  fStack_2 = b->x - a->x;
  VStack_1.z = 0.0;
  fStack_3 = b->y - a->y;
  fStack_4 = b->z - a->z;
  fStack_5 = p1->x - a->x;
  fStack_6 = p1->y - a->y;
  fStack_7 = p1->z - a->z;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  fVar8 = fStack_4;
  rhs.y = fStack_6;
  rhs.x = fStack_5;
  lhs.y = fStack_3;
  lhs.x = fStack_2;
  lhs.z = fStack_4;
  rhs.z = fStack_7;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Cross
            ((Vector3 *)&stack0xffffffc0,lhs,rhs,(MethodInfo *)0x0);
  fStack_7 = p2->z - a->z;
  lhs_00.y = fStack_3;
  lhs_00.x = fStack_2;
  lhs_00.z = fVar8;
  rhs_00.y = p2->y - a->y;
  rhs_00.x = p2->x - a->x;
  rhs_00.z = fStack_7;
  pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Cross
                     ((Vector3 *)&stack0xffffffc0,lhs_00,rhs_00,(MethodInfo *)0x0);
  VStack_1.x = pVVar9->x;
  VStack_1.y = pVVar9->y;
  VStack_1.z = pVVar9->z;
  fVar8 = MathFunctions::MathFunctions_DotProduct
                    ((Vector3 *)&stack0xffffffcc,&VStack_1,(MethodInfo *)0x0);
  return _UNK_? <= fVar8;
}


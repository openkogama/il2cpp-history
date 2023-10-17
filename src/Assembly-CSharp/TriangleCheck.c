
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
  b = p3;
  a = p2;
  KStack_1.key._options = 0;
  KStack_1.key._cultureKey = (String *)0x0;
  KStack_1.key._pattern = (String *)0x0;
  KStack_1.value = (Object *)0x0;
  puStack_2 = (undefined *)0x0;
  stack0xffffff64 = 0.0;
  VStack_3.x = 0.0;
  VStack_3.y = 0.0;
  puStack_4 = (undefined *)0x0;
  stack0xffffff7c = 0.0;
  fStack_5 = 0.0;
  puStack_6 = (undefined *)0x0;
  VStack_3.z = 0.0;
  UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane__ctor_1
            ((Plane *)&KStack_1,*p1,*p2,*p3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::RegularExpressions::
  Regex+CachedCodeEntryKey,System::Object]::
  KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
            ((Regex_CachedCodeEntryKey *)&stack0xffffff9c,&KStack_1,(MethodInfo *)0x0);
  fVar7 = distance * localDirection->x;
  fVar8 = distance * localDirection->y;
  fVar9 = distance * localDirection->z;
  VStack_10.x = p1->x;
  VStack_10.y = p1->y;
  VStack_10.z = p1->z;
  p3 = (Vector3 *)
       MathFunctions::MathFunctions_DotProduct
                 ((Vector3 *)&stack0xffffffb4,localDirection,(MethodInfo *)0x0);
  if (0.0 < (float)p3) {
    return 0;
  }
  stack0xffffff64 = (float)&stack0xffffffb4;
  dVar11 = MathFunctions::MathFunctions_SignedDistanceTo_1
                     ((Vector3 *)&stack0xffffffb4,&VStack_10,localOrigin,(MethodInfo *)0x0);
  stack0xffffff64 = (float)&UNK_?;
  p3 = (Vector3 *)
       MathFunctions::MathFunctions_DotProduct
                 ((Vector3 *)&stack0xffffffb4,(Vector3 *)&stack0xffffffcc,(MethodInfo *)0x0);
  if ((float)p3 == _UNK_?) {
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (_UNK_? <=
        (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) & _UNK_?,
                         SUB84(dVar11,0) & _UNK_?)) {
      return 0;
    }
    p3 = (Vector3 *)((uint)p3 & 0xffffff);
  }
  else {
    dVar12 = (_UNK_? - dVar11) / (double)(float)p3;
    dVar13 = (_UNK_? - dVar11) / (double)(float)p3;
    dVar11 = dVar13;
    if (dVar13 < dVar12) {
      dVar11 = dVar12;
      dVar12 = dVar13;
    }
    if (_UNK_? < dVar12) {
      return 0;
    }
    if (dVar11 < 0.0) {
      return 0;
    }
    dVar11 = 0.0;
    if (0.0 <= dVar12) {
      dVar11 = dVar12;
    }
    dVar12 = _UNK_?;
    if (dVar11 <= _UNK_?) {
      dVar12 = dVar11;
    }
    p3 = (Vector3 *)((uint)p3 & 0xffffff);
    stack0xffffff7c = (float)&stack0xffffff9c;
    bVar14 = TriangleCheck_SameSide((Vector3 *)&stack0xffffff9c,p1,a,b,(MethodInfo *)0x0);
    if ((bVar14 != 0) &&
       (pSVar15 = (String__Class *)b,
       bVar14 = TriangleCheck_SameSide((Vector3 *)&stack0xffffff9c,a,p1,b,(MethodInfo *)0x0),
       bVar14 != 0)) {
      p1_00 = (String *)&stack0xffffff9c;
      pSVar16 = (String *)&UNK_?;
      bVar14 = TriangleCheck_SameSide((Vector3 *)p1_00,b,p1,a,(MethodInfo *)0x0);
      if (bVar14 != 0) {
        uVar17 = CONCAT44(pSVar16,pSVar15);
        goto code_?;
      }
    }
  }
  p2 = (Vector3 *)0x0;
  fVar18 = p1->y - localOrigin->y;
  a_00 = (Vector3 *)(fVar8 * fVar8 + fVar7 * fVar7 + fVar9 * fVar9);
  fVar8 = p1->x - localOrigin->x;
  fVar7 = p1->z - localOrigin->z;
  fVar7 = fVar18 * fVar18 + fVar8 * fVar8 + fVar7 * fVar7;
  distance = MathFunctions::MathFunctions_DotProduct
                       ((Vector3 *)&stack0xffffffcc,(Vector3 *)&stack0xffffff6c,(MethodInfo *)0x0);
  bVar14 = TriangleCheck_GetLowestRoot
                    ((float)a_00,distance + distance,fVar7 - _UNK_?,1.0,(float *)&p2,
                     (MethodInfo *)0x0);
  if (bVar14 != 0) {
    p3 = (Vector3 *)CONCAT13(1,p3._0_3_);
  }
  fVar18 = a->y - localOrigin->y;
  fVar9 = a->x - localOrigin->x;
  stack0xffffff64 = localOrigin->y - a->y;
  puStack_2 = (undefined *)(localOrigin->x - a->x);
  fVar8 = a->z - localOrigin->z;
  dVar11 = (double)ZEXT48((Vector3 *)&puStack_2);
  fVar9 = fVar18 * fVar18 + fVar9 * fVar9 + fVar8 * fVar8;
  distance = MathFunctions::MathFunctions_DotProduct
                       ((Vector3 *)&stack0xffffffcc,(Vector3 *)&puStack_2,(MethodInfo *)0x0);
  root = &p2;
  fVar8 = (float)dVar11;
  p1_00 = (String *)0x0;
  dVar12 = (double)CONCAT44(fVar9 - _UNK_?,distance + distance);
  bVar14 = TriangleCheck_GetLowestRoot
                    ((float)a_00,distance + distance,fVar9 - _UNK_?,fVar8,(float *)root,
                     (MethodInfo *)0x0);
  pVVar19 = localOrigin;
  if (bVar14 != 0) {
    dVar12 = (double)(float)p2;
    fVar8 = a->x;
    root = (Vector3 **)a->y;
    p1_00 = (String *)a->z;
  }
  localOrigin = (Vector3 *)0x0;
  register0x00001280 = b->y - pVVar19->y;
  puStack_4 = (undefined *)(b->x - pVVar19->x);
  VStack_3.y = pVVar19->y - b->y;
  VStack_3.x = pVVar19->x - b->x;
  VStack_3.z = pVVar19->z - b->z;
  fVar18 = b->z - pVVar19->z;
  p3 = &VStack_3;
  p2 = (Vector3 *)&stack0xffffffcc;
  fVar18 = register0x00001280 * register0x00001280 + (float)puStack_4 * (float)puStack_4 +
           fVar18 * fVar18;
  distance = MathFunctions::MathFunctions_DotProduct(p2,p3,(MethodInfo *)0x0);
  localDirection = (Vector3 *)(float)dVar12;
  voxelHit = (VoxelHit *)0x0;
  localOrigin = (Vector3 *)(fVar18 - _UNK_?);
  p3 = (Vector3 *)(distance + distance);
  p2 = a_00;
  bVar14 = TriangleCheck_GetLowestRoot
                    ((float)a_00,(float)p3,(float)localOrigin,(float)localDirection,
                     (float *)distance,(MethodInfo *)0x0);
  if (bVar14 != 0) {
    dVar12 = (double)(float)p2;
    p3 = (Vector3 *)CONCAT13(1,p3._0_3_);
    fVar8 = b->x;
    root = (Vector3 **)b->y;
    p1_00 = (String *)b->z;
  }
  puStack_6 = (undefined *)(a->y - _UNK_?);
  fStack_5 = a->x - _UNK_?;
  fVar20 = a->z - _UNK_?;
  fVar21 = (float)puStack_6 * (float)puStack_6 + fStack_5 * fStack_5 + fVar20 * fVar20;
  in_stack_22 = &UNK_?;
  distance = MathFunctions::MathFunctions_DotProduct
                       ((Vector3 *)&fStack_5,(Vector3 *)&stack0xffffffcc,(MethodInfo *)0x0);
  in_stack_22 = &UNK_?;
  localDirection =
       (Vector3 *)
       MathFunctions::MathFunctions_DotProduct
                 ((Vector3 *)&fStack_5,(Vector3 *)&stack0xffffff90,(MethodInfo *)0x0);
  in_stack_22 = &UNK_?;
  fVar23 = MathFunctions::MathFunctions_DotProduct
                     ((Vector3 *)&stack0xffffffcc,(Vector3 *)&stack0xffffff90,(MethodInfo *)0x0);
  bVar14 = TriangleCheck_GetLowestRoot
                    ((float)((uint)a_00 ^
                            __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                            ) * fVar21 + distance * distance,
                     (fVar23 + fVar23) * fVar21 - distance * _UNK_? * (float)localDirection,
                     (_UNK_? - fVar7) * fVar21 +
                     (float)localDirection * (float)localDirection,(float)dVar12,(float *)&p2,
                     (MethodInfo *)0x0);
  if (((bVar14 != 0) &&
      (fVar21 = (distance * (float)p2 - (float)localDirection) / fVar21, _UNK_? <= fVar21))
     && (fVar21 <= _UNK_?)) {
    dVar12 = (double)(float)p2;
    p3 = (Vector3 *)CONCAT13(1,p3._0_3_);
    fVar8 = fStack_5 * fVar21 + _UNK_?;
    root = (Vector3 **)((float)puStack_6 * fVar21 + _UNK_?);
    p1_00 = (String *)(fVar20 * fVar21 + _UNK_?);
  }
  puStack_6 = (undefined *)(b->y - a->y);
  fStack_5 = b->x - a->x;
  fVar7 = b->z - a->z;
  fVar20 = (float)puStack_6 * (float)puStack_6 + fStack_5 * fStack_5 + fVar7 * fVar7;
  distance = MathFunctions::MathFunctions_DotProduct
                       ((Vector3 *)&fStack_5,(Vector3 *)&stack0xffffffcc,(MethodInfo *)0x0);
  localDirection =
       (Vector3 *)
       MathFunctions::MathFunctions_DotProduct
                 ((Vector3 *)&fStack_5,(Vector3 *)&stack0xffffff84,(MethodInfo *)0x0);
  fVar21 = MathFunctions::MathFunctions_DotProduct
                     ((Vector3 *)&stack0xffffffcc,(Vector3 *)&stack0xffffff84,(MethodInfo *)0x0);
  bVar14 = TriangleCheck_GetLowestRoot
                    ((float)((uint)a_00 ^
                            __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                            ) * fVar20 + distance * distance,
                     (fVar21 + fVar21) * fVar20 - distance * _UNK_? * (float)localDirection,
                     (_UNK_? - fVar9) * fVar20 + (float)localDirection * (float)localDirection
                     ,(float)dVar12,(float *)&p2,(MethodInfo *)0x0);
  if (((bVar14 != 0) &&
      (fVar20 = (distance * (float)p2 - (float)localDirection) / fVar20, _UNK_? <= fVar20)) &&
     (fVar20 <= _UNK_?)) {
    dVar12 = (double)(float)p2;
    p3 = (Vector3 *)CONCAT13(1,p3._0_3_);
    fVar8 = fStack_5 * fVar20 + a->x;
    root = (Vector3 **)((float)puStack_6 * fVar20 + a->y);
    p1_00 = (String *)(fVar7 * fVar20 + a->z);
  }
  puStack_6 = (undefined *)(_UNK_? - b->y);
  fStack_5 = _UNK_? - b->x;
  fVar7 = _UNK_? - b->z;
  fVar9 = (float)puStack_6 * (float)puStack_6 + fStack_5 * fStack_5 + fVar7 * fVar7;
  distance = MathFunctions::MathFunctions_DotProduct
                       ((Vector3 *)&fStack_5,(Vector3 *)&stack0xffffffcc,(MethodInfo *)0x0);
  localDirection =
       (Vector3 *)
       MathFunctions::MathFunctions_DotProduct
                 ((Vector3 *)&fStack_5,(Vector3 *)&puStack_4,(MethodInfo *)0x0);
  fVar20 = MathFunctions::MathFunctions_DotProduct
                    ((Vector3 *)&stack0xffffffcc,(Vector3 *)&puStack_4,(MethodInfo *)0x0);
  bVar14 = TriangleCheck_GetLowestRoot
                    ((float)((uint)a_00 ^
                            __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                            ) * fVar9 + distance * distance,
                     (fVar20 + fVar20) * fVar9 - distance * _UNK_? * (float)localDirection,
                     (_UNK_? - fVar18) * fVar9 +
                     (float)localDirection * (float)localDirection,(float)dVar12,(float *)&p2,
                     (MethodInfo *)0x0);
  if (((bVar14 == 0) ||
      (fVar9 = (distance * (float)p2 - (float)localDirection) / fVar9, fVar9 < _UNK_?)) ||
     (_UNK_? < fVar9)) {
    if (p3._3_1_ == '\0') {
      return 0;
    }
  }
  else {
    dVar12 = (double)(float)p2;
    fVar8 = fStack_5 * fVar9 + b->x;
    root = (Vector3 **)((float)puStack_6 * fVar9 + b->y);
    p1_00 = (String *)(fVar7 * fVar9 + b->z);
  }
  uVar17 = CONCAT44(root,fVar8);
code_?:
  pVVar24 = voxelHit;
  (voxelHit->point).x = (float)(int)uVar17;
  (voxelHit->point).y = (float)(int)((ulonglong)uVar17 >> 0x20);
  (voxelHit->point).z = (float)p1_00;
  fVar25 = (float10)func_?();
  pVVar24->distance = (float)(fVar25 * (float10)(float)dVar12);
  if ((float)(fVar25 * (float10)(float)dVar12) < 0.0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
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
  VStack_1.z = 0.0;
  VStack_1.x = 0.0;
  VStack_1.y = 0.0;
  pRVar2 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
           RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
           KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                     (&RStack_3,
                      (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                       *)plane,(MethodInfo *)0x0);
  VStack_1.x = (float)pRVar2->_options;
  VStack_1.y = (float)pRVar2->_cultureKey;
  VStack_1.z = (float)pRVar2->_pattern;
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


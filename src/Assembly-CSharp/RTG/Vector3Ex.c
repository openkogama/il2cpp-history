
/* Vector3 Abs(Vector3) */

Vector3 * Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_Abs
                    (Vector3 *__return_storage_ptr__,Vector3 *v,MethodInfo *method)

{
  uVar1 = _UNK_?;
  fVar2 = v->z;
  __return_storage_ptr__->x = (float)((uint)v->x & _UNK_?);
  fVar3 = v->y;
  __return_storage_ptr__->z = (float)((uint)fVar2 & uVar1);
  __return_storage_ptr__->y = (float)((uint)fVar3 & uVar1);
  return __return_storage_ptr__;
}


/* Single AbsDot(Vector3, Vector3) */

float Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_AbsDot
                (Vector3 *v1,Vector3 *v2,MethodInfo *method)

{
  uVar1 = v2->x;
  uVar2 = v2->y;
  uVar3 = v1->x;
  uVar4 = v1->y;
  return (float)((uint)((float)uVar2 * (float)uVar4 + (float)uVar1 * (float)uVar3 + v2->z * v1->z) &
                _UNK_?);
}


/* Vector2 ConvertDirTo2D(Vector3, Vector3, Camera) */

Vector2 Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_ConvertDirTo2D
                  (Vector3 *start,Vector3 *end,Camera *camera,MethodInfo *method)

{
  if (camera == (Camera *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    VVar2 = (Vector2)(*pcVar1)();
    return VVar2;
  }
  uStack_3._0_4_ = start->x;
  uStack_3._4_4_ = start->y;
  fStack_4 = start->z;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_5 = 0;
  uStack_6 = 0;
  pvVar7 = (camera->fields)._._._.m_CachedPtr;
  if (pvVar7 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    VVar2 = (Vector2)(*pcVar1)();
    return VVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar1 = (code *)swi(3);
    VVar2 = (Vector2)(*pcVar1)();
    return VVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar7,&uStack_3,2,&uStack_5);
  uStack_9._0_4_ = end->x;
  uStack_9._4_4_ = end->y;
  fStack_10 = end->z;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_11 = 0;
  uStack_12 = 0;
  pvVar7 = (camera->fields)._._._.m_CachedPtr;
  if (pvVar7 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    VVar2 = (Vector2)(*pcVar1)();
    return VVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar1 = (code *)swi(3);
    VVar2 = (Vector2)(*pcVar1)();
    return VVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar7,&uStack_9,2,&uStack_11);
  VVar2.y = uStack_11._4_4_ - uStack_5._4_4_;
  VVar2.x = (float)uStack_11 - (float)uStack_5;
  return VVar2;
}


/* Single Dot(Vector3, Vector3) */

float Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_Dot(Vector3 *v1,Vector3 *v2,MethodInfo *method)

{
  uVar1 = v2->x;
  uVar2 = v2->y;
  uVar3 = v1->x;
  uVar4 = v1->y;
  return (float)uVar2 * (float)uVar4 + (float)uVar1 * (float)uVar3 + v2->z * v1->z;
}


/* Vector3 FromValue(Single) */

Vector3 * Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_FromValue
                    (Vector3 *__return_storage_ptr__,float value,MethodInfo *method)

{
  __return_storage_ptr__->x = value;
  __return_storage_ptr__->y = value;
  __return_storage_ptr__->z = value;
  return __return_storage_ptr__;
}


/* Single GetDistanceToSegment(Vector3, Vector3, Vector3) */

float Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_GetDistanceToSegment
                (Vector3 *point,Vector3 *point0,Vector3 *point1,MethodInfo *method)

{
  uVar1 = point1->x;
  uVar2 = point1->y;
  uStack_3._0_4_ = point0->x;
  uStack_3._4_4_ = point0->y;
  fVar4 = (float)uVar1 - (float)(undefined4)uStack_3;
  fVar5 = point1->z - point0->z;
  fVar6 = (float)uVar2 - (float)uStack_3._4_4_;
  uVar7 = CONCAT44(fVar6,fVar4);
  uStack_8 = uVar7;
  fStack_9 = fVar5;
  fVar10 = (float)FUN_?(&uStack_8);
  uStack_3 = uVar7;
  fStack_11 = fVar5;
  fVar12 = (float)FUN_?(&uStack_3);
  if (_UNK_? < fVar12) {
    fVar5 = fVar5 / fVar12;
    uStack_8 = CONCAT44(fVar6 / fVar12,fVar4 / fVar12);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_8._0_4_ = (pVVar13->zeroVector).x;
    uStack_8._4_4_ = (pVVar13->zeroVector).y;
    fVar5 = (pVVar13->zeroVector).z;
  }
  uVar14 = point->x;
  uVar15 = point->y;
  uVar16 = point0->x;
  uVar17 = point0->y;
  fStack_11 = point->z - point0->z;
  uStack_3 = CONCAT44((float)uVar15 - (float)uVar17,(float)uVar14 - (float)uVar16);
  fVar12 = ((float)uVar15 - (float)uVar17) * uStack_8._4_4_ +
           ((float)uVar14 - (float)uVar16) * (float)uStack_8 + fStack_11 * fVar5;
  if ((fVar12 < 0.0) || (fVar10 < fVar12)) {
    if (fVar12 < 0.0) {
      puVar18 = &uStack_3;
    }
    else {
      uVar19 = point->x;
      uVar20 = point->y;
      uVar21 = point1->x;
      fStack_9 = point1->z - point->z;
      uStack_8 = CONCAT44(point1->y - (float)uVar20,(float)uVar21 - (float)uVar19);
      puVar18 = &uStack_8;
    }
  }
  else {
    uVar22 = point0->x;
    uVar23 = point0->y;
    uVar24 = point->x;
    uVar25 = point->y;
    fStack_9 = (fVar5 * fVar12 + point0->z) - point->z;
    puVar18 = &uStack_8;
    uStack_8 = CONCAT44((uStack_8._4_4_ * fVar12 + (float)uVar23) - (float)uVar25,
                         ((float)uStack_8 * fVar12 + (float)uVar22) - (float)uVar24);
  }
  fVar5 = (float)FUN_?(puVar18);
  return fVar5;
}


/* Vector3 GetInverse(Vector3) */

Vector3 * Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_GetInverse
                    (Vector3 *__return_storage_ptr__,Vector3 *vector,MethodInfo *method)

{
  fVar1 = _UNK_? / vector->y;
  fVar2 = _UNK_? / vector->z;
  __return_storage_ptr__->x = _UNK_? / vector->x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  return __return_storage_ptr__;
}


/* Single GetMaxAbsComp(Vector3) */

float Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_GetMaxAbsComp(Vector3 *v,MethodInfo *method)

{
  fVar1 = (float)((uint)v->y & _UNK_?);
  fVar2 = (float)((uint)v->x & _UNK_?);
  if (fVar1 <= fVar2) {
    fVar1 = fVar2;
  }
  fVar2 = (float)((uint)v->z & _UNK_?);
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  return fVar2;
}


/* Int32 GetMostAligned(Vector3[], Vector3, Boolean) */

int32_t Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_GetMostAligned
                  (Vector3__Array *vectors,Vector3 *dir,bool checkSameDirection,MethodInfo *method)

{
  if (vectors == (Vector3__Array *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  if (vectors->max_length == 0) {
    return -1;
  }
  pVVar3 = vectors->vector;
  uVar4 = (uint)vectors->max_length;
  uVar5 = 0xffffffff;
  uVar6 = 0;
  fVar7 = _UNK_?;
  if (checkSameDirection == 0) {
    for (; (int)uVar6 < (int)uVar4; uVar6 = uVar6 + 1) {
      if (uVar4 <= uVar6) goto DAT_?;
      uVar8 = dir->x;
      uVar9 = dir->y;
      uVar10 = pVVar3->x;
      uVar11 = pVVar3->y;
      fVar12 = (float)((uint)((float)uVar9 * (float)uVar11 + (float)uVar8 * (float)uVar10 +
                             dir->z * pVVar3->z) & _UNK_?);
      uVar13 = uVar6;
      if (fVar12 <= fVar7) {
        uVar13 = uVar5;
        fVar12 = fVar7;
      }
      pVVar3 = pVVar3 + 1;
      fVar7 = fVar12;
      uVar5 = uVar13;
    }
  }
  else {
    for (; (int)uVar6 < (int)uVar4; uVar6 = uVar6 + 1) {
      if (uVar4 <= uVar6) {
DAT_?:
        FUN_?();
        pcVar1 = (code *)swi(3);
        iVar2 = (*pcVar1)();
        return iVar2;
      }
      uVar14 = dir->x;
      uVar15 = dir->y;
      uVar16 = pVVar3->x;
      uVar17 = pVVar3->y;
      fVar12 = (float)uVar15 * (float)uVar17 + (float)uVar14 * (float)uVar16 + dir->z * pVVar3->z;
      if ((0.0 < fVar12) && (fVar7 < fVar12)) {
        fVar7 = fVar12;
        uVar5 = uVar6;
      }
      pVVar3 = pVVar3 + 1;
    }
  }
  return uVar5;
}


/* Int32 GetPointClosestToPoint(List`1[UnityEngine.Vector3], Vector3) */

int32_t Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_GetPointClosestToPoint
                  (List_1_UnityEngine_Vector3_ *points,Vector3 *pt,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = 0;
  if (points != (List_1_UnityEngine_Vector3_ *)0x0) {
    uVar2 = (points->fields)._size;
    uVar3 = uVar1;
    fVar4 = _UNK_?;
    uVar5 = 0xffffffff;
    while( true ) {
      uVar6 = (uint)uVar1;
      if ((int)uVar2 <= (int)uVar6) {
        return uVar5;
      }
      if (uVar2 <= uVar6) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar7 = (code *)swi(3);
        iVar8 = (*pcVar7)();
        return iVar8;
      }
      pVVar9 = (points->fields)._items;
      if (pVVar9 == (Vector3__Array *)0x0) break;
      if ((uint)pVVar9->max_length <= uVar6) {
        FUN_?();
        pcVar7 = (code *)swi(3);
        iVar8 = (*pcVar7)();
        return iVar8;
      }
      uVar10 = pt->x;
      uVar11 = pt->y;
      fVar12 = (float)*(undefined8 *)((longlong)&pVVar9->vector[0].x + uVar3) - (float)uVar10;
      fVar13 = *(float *)((longlong)&pVVar9->vector[0].z + uVar3) - pt->z;
      fVar14 = (float)((ulonglong)*(undefined8 *)((longlong)&pVVar9->vector[0].x + uVar3) >> 0x20)
               - (float)uVar11;
      fVar13 = fVar14 * fVar14 + fVar12 * fVar12 + fVar13 * fVar13;
      uVar15 = uVar6;
      if (fVar4 <= fVar13) {
        uVar15 = uVar5;
        fVar13 = fVar4;
      }
      fVar4 = fVar13;
      uVar1 = (ulonglong)(uVar6 + 1);
      uVar3 = uVar3 + 0xc;
      uVar5 = uVar15;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  iVar8 = (*pcVar7)();
  return iVar8;
}


/* Vector3 GetPointCloudCenter(IEnumerable`1[UnityEngine.Vector3]) */

Vector3 * Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_GetPointCloudCenter
                    (Vector3 *__return_storage_ptr__,IEnumerable_1_UnityEngine_Vector3_ *ptCloud,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  if (ptCloud == (IEnumerable_1_UnityEngine_Vector3_ *)0x0) {
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    fVar3 = _UNK_?;
    fVar4 = _UNK_?;
    plStack_5 = (longlong *)
                 FUN_?(0,
                               TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::Vector3>
                               ,ptCloud);
    uStack_6 = 0;
    pplStack_7 = &plStack_5;
    fVar8 = fVar2;
    fVar9 = fVar2;
    fVar10 = fVar1;
    fVar11 = fVar1;
    while (plStack_5 != (longlong *)0x0) {
      cVar12 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
      plVar13 = plStack_5;
      if (cVar12 == '\0') {
        if (plStack_5 != (longlong *)0x0) {
          FUN_?(0,TypeInfo__System__IDisposable,plStack_5);
        }
        fVar9 = (fVar9 + fVar11) * _UNK_?;
        fVar8 = (fVar8 + fVar10) * _UNK_?;
        __return_storage_ptr__->x = (fVar2 + fVar1) * _UNK_?;
        __return_storage_ptr__->y = fVar9;
        __return_storage_ptr__->z = fVar8;
        return __return_storage_ptr__;
      }
      if (plStack_5 == (longlong *)0x0) goto code_?;
      lVar14 = *plStack_5;
      uVar15 = 0;
      if (*(ushort *)(lVar14 + 0x12e) != 0) {
        do {
          if (*(IEnumerator_1_UnityEngine_Vector3___Class **)
               (*(longlong *)(lVar14 + 0xb0) + (ulonglong)uVar15 * 0x10) ==
              TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Vector3>) {
            puVar16 = (undefined8 *)
                     ((longlong)*(int *)(*(longlong *)(lVar14 + 0xb0) + 8 + (ulonglong)uVar15 * 0x10)
                      * 0x10 + 0x138 + lVar14);
            goto code_?;
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 < *(ushort *)(lVar14 + 0x12e));
      }
      puVar16 = (undefined8 *)
               FUN_?(plStack_5,
                             TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Vector3>
                             ,0,
                             TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Vector3>
                             ,fVar3,fVar4);
code_?:
      puVar16 = (undefined8 *)(*(code *)*puVar16)(auStack_17,plVar13,puVar16[1]);
      uVar18 = *puVar16;
      if (fVar1 <= (float)uVar18) {
        fVar1 = (float)uVar18;
      }
      uStack_19._4_4_ = (float)((ulonglong)uVar18 >> 0x20);
      if (fVar11 <= uStack_19._4_4_) {
        fVar11 = uStack_19._4_4_;
      }
      if (fVar10 <= *(float *)(puVar16 + 1)) {
        fVar10 = *(float *)(puVar16 + 1);
      }
      uVar20 = *puVar16;
      if ((float)uVar20 <= fVar2) {
        fVar2 = (float)uVar20;
      }
      uStack_21._4_4_ = (float)((ulonglong)uVar20 >> 0x20);
      if (uStack_21._4_4_ <= fVar9) {
        fVar9 = uStack_21._4_4_;
      }
      fVar3 = fVar10;
      fVar4 = fVar9;
      uStack_19 = uVar18;
      uStack_21 = uVar20;
      if (*(float *)(puVar16 + 1) <= fVar8) {
        fVar8 = *(float *)(puVar16 + 1);
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar22 = (code *)swi(3);
  pVVar23 = (Vector3 *)(*pcVar22)();
  return pVVar23;
}


/* Vector3 GetSignVector(Vector3) */

Vector3 * Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_GetSignVector
                    (Vector3 *__return_storage_ptr__,Vector3 *v,MethodInfo *method)

{
  fVar1 = _UNK_?;
  if (0.0 <= v->x) {
    fVar1 = _UNK_?;
  }
  fVar2 = _UNK_?;
  if (0.0 <= v->y) {
    fVar2 = _UNK_?;
  }
  fVar3 = _UNK_?;
  if (v->z < 0.0) {
    fVar3 = _UNK_?;
  }
  __return_storage_ptr__->x = fVar1;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar3;
  return __return_storage_ptr__;
}


/* Boolean IsAligned(Vector3, Vector3, Boolean) */

bool Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_IsAligned
               (Vector3 *vector,Vector3 *other,bool checkSameDirection,MethodInfo *method)

{
  uVar1 = other->x;
  uVar2 = other->y;
  uVar3 = vector->x;
  uVar4 = vector->y;
  fVar5 = (float)uVar2 * (float)uVar4 + (float)uVar1 * (float)uVar3 + other->z * vector->z;
  if (checkSameDirection == 0) {
    fVar5 = (float)((uint)fVar5 & _UNK_?);
  }
  else if (fVar5 <= 0.0) {
    return 0;
  }
  return (float)((uint)(fVar5 - _UNK_?) & _UNK_?) < _UNK_?;
}


/* Void OffsetPoints(List`1[UnityEngine.Vector3], Vector3) */

void Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_OffsetPoints
               (List_1_UnityEngine_Vector3_ *points,Vector3 *offset,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = 0;
  uVar2 = uVar1;
  if (points == (List_1_UnityEngine_Vector3_ *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  do {
    uVar4 = (uint)uVar1;
    if ((points->fields)._size <= (int)uVar4) {
      return;
    }
    if ((uint)(points->fields)._size <= uVar4) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pVVar5 = (points->fields)._items;
    if (pVVar5 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar5->max_length <= uVar4) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar6 = *(undefined8 *)((longlong)&pVVar5->vector[0].x + uVar2);
    uVar7 = offset->x;
    fVar8 = offset->z;
    if ((uint)(points->fields)._size <= uVar4) goto code_?;
    if (pVVar5 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar5->max_length <= uVar4) goto code_?;
    uVar1 = (ulonglong)(uVar4 + 1);
    *(ulonglong *)((longlong)&pVVar5->vector[0].x + uVar2) =
         CONCAT44(offset->y + (float)((ulonglong)uVar6 >> 0x20),(float)uVar7 + (float)uVar6);
    *(float *)((longlong)&pVVar5->vector[0].z + uVar2) =
         fVar8 + *(float *)((longlong)&pVVar5->vector[0].z + uVar2);
    piVar9 = &(points->fields)._version;
    *piVar9 = *piVar9 + 1;
    uVar2 = uVar2 + 0xc;
  } while( true );
}


/* Boolean PointsSameDir(Vector3, Vector3) */

bool Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_PointsSameDir
               (Vector3 *vector,Vector3 *other,MethodInfo *method)

{
  uVar1 = other->x;
  uVar2 = other->y;
  uVar3 = vector->x;
  uVar4 = vector->y;
  return 0.0 < (float)uVar2 * (float)uVar4 + (float)uVar1 * (float)uVar3 + other->z * vector->z;
}


/* Vector3 ProjectOnSegment(Vector3, Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_ProjectOnSegment
                    (Vector3 *__return_storage_ptr__,Vector3 *point,Vector3 *point0,Vector3 *point1,
                    MethodInfo *method)

{
  uVar1 = point1->x;
  uVar2 = point1->y;
  uVar3 = point0->x;
  uVar4 = point0->y;
  fVar5 = point1->z - point0->z;
  uStack_6 = CONCAT44((float)uVar2 - (float)uVar4,(float)uVar1 - (float)uVar3);
  fStack_7 = fVar5;
  fVar8 = (float)FUN_?(&uStack_6);
  if (_UNK_? < fVar8) {
    fVar5 = fVar5 / fVar8;
    uStack_6 = CONCAT44(((float)uVar2 - (float)uVar4) / fVar8,
                         ((float)uVar1 - (float)uVar3) / fVar8);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_6._0_4_ = (pVVar9->zeroVector).x;
    uStack_6._4_4_ = (pVVar9->zeroVector).y;
    fVar5 = (pVVar9->zeroVector).z;
  }
  uVar10 = point0->x;
  uVar11 = point0->y;
  uVar12 = point->x;
  uVar13 = point->y;
  fVar14 = ((float)uVar13 - (float)uVar11) * uStack_6._4_4_ +
           ((float)uVar12 - (float)uVar10) * (float)uStack_6 + (point->z - point0->z) * fVar5;
  uVar15 = point0->x;
  uVar16 = point0->y;
  fVar8 = point0->z;
  __return_storage_ptr__->x = (float)uStack_6 * fVar14 + (float)uVar15;
  __return_storage_ptr__->y = uStack_6._4_4_ * fVar14 + (float)uVar16;
  __return_storage_ptr__->z = fVar5 * fVar14 + fVar8;
  return __return_storage_ptr__;
}


/* Single SignedAngle(Vector3, Vector3, Vector3) */

float Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_SignedAngle
                (Vector3 *from,Vector3 *to,Vector3 *axis,MethodInfo *method)

{
  method_00 = (MethodInfo *)axis;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                      (aVStack_2,from,(MethodInfo *)axis);
  uVar3 = pVVar1->x;
  uVar4 = pVVar1->y;
  fVar5 = pVVar1->z;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                      (aVStack_2,to,method_00);
  fVar6 = _UNK_?;
  fVar7 = _UNK_?;
  uVar8 = pVVar1->x;
  uVar9 = pVVar1->y;
  fVar5 = (float)uVar4 * (float)uVar9 + (float)uVar3 * (float)uVar8 + fVar5 * pVVar1->z;
  if (_UNK_? - fVar5 < _UNK_?) {
    fVar10 = 0.0;
  }
  else {
    fVar10 = _UNK_?;
    if (_UNK_? <= fVar5 + _UNK_?) {
      aVStack_2[0].x = from->x;
      aVStack_2[0].y = from->y;
      uVar11 = to->x;
      uVar12 = to->y;
      fVar13 = to->z * aVStack_2[0].y - (float)uVar12 * from->z;
      fVar14 = (float)uVar11 * from->z - to->z * aVStack_2[0].x;
      fVar15 = (float)uVar12 * aVStack_2[0].x - (float)uVar11 * aVStack_2[0].y;
      uStack_16 = CONCAT44(fVar14,fVar13);
      fStack_17 = fVar15;
      fVar10 = (float)FUN_?(&uStack_16);
      if (fVar7 < fVar10) {
        fVar15 = fVar15 / fVar10;
        uStack_16 = CONCAT44(fVar14 / fVar10,fVar13 / fVar10);
      }
      else {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar18 = TypeInfo__UnityEngine__Vector3->static_fields;
        uStack_16._0_4_ = (pVVar18->zeroVector).x;
        uStack_16._4_4_ = (pVVar18->zeroVector).y;
        fVar15 = (pVVar18->zeroVector).z;
      }
      if (fVar5 <= fVar6) {
        fVar6 = fVar5;
      }
      fVar5 = _UNK_?;
      if (_UNK_? <= fVar6) {
        fVar5 = fVar6;
      }
      fVar10 = (float)func_?(fVar5);
      uVar19 = axis->x;
      uVar20 = axis->y;
      fVar10 = fVar10 * _UNK_?;
      if (uStack_16._4_4_ * (float)uVar20 + (float)uStack_16 * (float)uVar19 + fVar15 * axis->z < 0.0)
      {
        fVar10 = (float)((uint)fVar10 ^ _UNK_?);
      }
    }
  }
  return fVar10;
}


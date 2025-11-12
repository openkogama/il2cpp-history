
/* Vector3 Abs(Vector3) */

Vector3 * Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_Abs(Vector3 *__return_storage_ptr__,Vector3 *v,MethodInfo *method)

{
  fVar1 = v->z;
  __return_storage_ptr__->x = ABS(v->x);
  fVar2 = v->y;
  __return_storage_ptr__->z = ABS(fVar1);
  __return_storage_ptr__->y = ABS(fVar2);
  return __return_storage_ptr__;
}


/* Single AbsDot(Vector3, Vector3) */

float Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_AbsDot(Vector3 *v1,Vector3 *v2,MethodInfo *method)

{
  uVar1 = v2->x;
  uVar2 = v2->y;
  uVar3 = v1->x;
  uVar4 = v1->y;
  return ABS((float)uVar2 * (float)uVar4 + (float)uVar1 * (float)uVar3 + v2->z * v1->z);
}


/* Vector2 ConvertDirTo2D(Vector3, Vector3, Camera) */

Vector2 Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_ConvertDirTo2D(Vector3 *start,Vector3 *end,Camera *camera,MethodInfo *method)

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
    FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_5 = 0;
  uStack_6 = 0;
  pvVar7 = (camera->fields)._._._.m_CachedPtr;
  if (pvVar7 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    VVar2 = (Vector2)(*pcVar1)();
    return VVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
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
    FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_11 = 0;
  uStack_12 = 0;
  pvVar7 = (camera->fields)._._._.m_CachedPtr;
  if (pvVar7 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    VVar2 = (Vector2)(*pcVar1)();
    return VVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
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

Vector3 * Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_FromValue(Vector3 *__return_storage_ptr__,float value,MethodInfo *method)

{
  __return_storage_ptr__->x = value;
  __return_storage_ptr__->y = value;
  __return_storage_ptr__->z = value;
  return __return_storage_ptr__;
}


/* Single GetDistanceToSegment(Vector3, Vector3, Vector3) */

float Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_GetDistanceToSegment(Vector3 *point,Vector3 *point0,Vector3 *point1,MethodInfo *method)

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
  if (1e-05 < fVar12) {
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
  fVar12 = ((float)uVar15 - (float)uVar17) * uStack_8._4_4_ + ((float)uVar14 - (float)uVar16) * (float)uStack_8 + fStack_11 * fVar5;
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
    uStack_8 = CONCAT44((uStack_8._4_4_ * fVar12 + (float)uVar23) - (float)uVar25,((float)uStack_8 * fVar12 + (float)uVar22) - (float)uVar24);
  }
  fVar5 = (float)FUN_?(puVar18);
  return fVar5;
}


/* Vector3 GetInverse(Vector3) */

Vector3 * Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_GetInverse(Vector3 *__return_storage_ptr__,Vector3 *vector,MethodInfo *method)

{
  fVar1 = vector->y;
  fVar2 = vector->z;
  __return_storage_ptr__->x = 1.0 / vector->x;
  __return_storage_ptr__->y = 1.0 / fVar1;
  __return_storage_ptr__->z = 1.0 / fVar2;
  return __return_storage_ptr__;
}


/* Single GetMaxAbsComp(Vector3) */

float Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_GetMaxAbsComp(Vector3 *v,MethodInfo *method)

{
  fVar1 = ABS(v->y);
  if (ABS(v->y) <= ABS(v->x)) {
    fVar1 = ABS(v->x);
  }
  fVar2 = ABS(v->z);
  if (ABS(v->z) <= fVar1) {
    fVar2 = fVar1;
  }
  return fVar2;
}


/* Int32 GetMostAligned(Vector3[], Vector3, Boolean) */

int32_t Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_GetMostAligned(Vector3__Array *vectors,Vector3 *dir,bool checkSameDirection,MethodInfo *method)

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
  fVar3 = -3.4028235e+38;
  pVVar4 = vectors->vector;
  uVar5 = (uint)vectors->max_length;
  uVar6 = 0xffffffff;
  uVar7 = 0;
  if (checkSameDirection == 0) {
    for (; (int)uVar7 < (int)uVar5; uVar7 = uVar7 + 1) {
      if (uVar5 <= uVar7) goto DAT_?;
      uVar8 = dir->x;
      uVar9 = dir->y;
      uVar10 = pVVar4->x;
      uVar11 = pVVar4->y;
      fVar12 = ABS((float)uVar9 * (float)uVar11 + (float)uVar8 * (float)uVar10 + dir->z * pVVar4->z);
      uVar13 = uVar7;
      if (fVar12 <= fVar3) {
        uVar13 = uVar6;
        fVar12 = fVar3;
      }
      fVar3 = fVar12;
      pVVar4 = pVVar4 + 1;
      uVar6 = uVar13;
    }
  }
  else {
    for (; (int)uVar7 < (int)uVar5; uVar7 = uVar7 + 1) {
      if (uVar5 <= uVar7) {
DAT_?:
        FUN_?();
        pcVar1 = (code *)swi(3);
        iVar2 = (*pcVar1)();
        return iVar2;
      }
      uVar14 = dir->x;
      uVar15 = dir->y;
      uVar16 = pVVar4->x;
      uVar17 = pVVar4->y;
      fVar12 = (float)uVar15 * (float)uVar17 + (float)uVar14 * (float)uVar16 + dir->z * pVVar4->z;
      if ((0.0 < fVar12) && (fVar3 < fVar12)) {
        fVar3 = fVar12;
        uVar6 = uVar7;
      }
      pVVar4 = pVVar4 + 1;
    }
  }
  return uVar6;
}


/* Int32 GetPointClosestToPoint(List`1[UnityEngine.Vector3], Vector3) */

int32_t Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_GetPointClosestToPoint(List_1_UnityEngine_Vector3_ *points,Vector3 *pt,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = 3.4028235e+38;
  uVar2 = 0;
  if (points != (List_1_UnityEngine_Vector3_ *)0x0) {
    uVar3 = (points->fields)._size;
    uVar4 = uVar2;
    uVar5 = 0xffffffff;
    while( true ) {
      uVar6 = (uint)uVar2;
      if ((int)uVar3 <= (int)uVar6) {
        return uVar5;
      }
      if (uVar3 <= uVar6) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
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
      fVar12 = (float)*(undefined8 *)((longlong)&pVVar9->vector[0].x + uVar4) - (float)uVar10;
      fVar13 = *(float *)((longlong)&pVVar9->vector[0].z + uVar4) - pt->z;
      fVar14 = (float)((ulonglong)*(undefined8 *)((longlong)&pVVar9->vector[0].x + uVar4) >> 0x20) - (float)uVar11;
      fVar13 = fVar14 * fVar14 + fVar12 * fVar12 + fVar13 * fVar13;
      uVar15 = uVar6;
      if (fVar1 <= fVar13) {
        uVar15 = uVar5;
        fVar13 = fVar1;
      }
      fVar1 = fVar13;
      uVar2 = (ulonglong)(uVar6 + 1);
      uVar4 = uVar4 + 0xc;
      uVar5 = uVar15;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  iVar8 = (*pcVar7)();
  return iVar8;
}


/* Vector3 GetPointCloudCenter(IEnumerable`1[UnityEngine.Vector3]) */

Vector3 * Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_GetPointCloudCenter(Vector3 *__return_storage_ptr__,IEnumerable_1_UnityEngine_Vector3_ *ptCloud,MethodInfo *method)

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
  fVar1 = -3.4028235e+38;
  fVar2 = -3.4028235e+38;
  fVar3 = -3.4028235e+38;
  fVar4 = -3.4028235e+38;
  fVar5 = 3.4028235e+38;
  fVar6 = 3.4028235e+38;
  fVar7 = 3.4028235e+38;
  if (ptCloud == (IEnumerable_1_UnityEngine_Vector3_ *)0x0) {
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    plStack_8 = (longlong *)FUN_?(0,TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::Vector3>,ptCloud);
    uStack_9 = 0;
    pplStack_10 = &plStack_8;
    fVar11 = 3.4028235e+38;
    while (plStack_8 != (longlong *)0x0) {
      cVar12 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
      plVar13 = plStack_8;
      if (cVar12 == '\0') {
        if (plStack_8 != (longlong *)0x0) {
          FUN_?(0,TypeInfo__System__IDisposable,plStack_8);
        }
        __return_storage_ptr__->x = (fVar5 + fVar1) * 0.5;
        __return_storage_ptr__->y = (fVar6 + fVar2) * 0.5;
        __return_storage_ptr__->z = (fVar11 + fVar3) * 0.5;
        return __return_storage_ptr__;
      }
      if (plStack_8 == (longlong *)0x0) goto code_?;
      lVar14 = *plStack_8;
      uVar15 = 0;
      if (*(ushort *)(lVar14 + 0x12e) != 0) {
        do {
          if (*(IEnumerator_1_UnityEngine_Vector3___Class **)(*(longlong *)(lVar14 + 0xb0) + (ulonglong)uVar15 * 0x10) == TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Vector3>) {
            puVar16 = (undefined8 *)((longlong)*(int *)(*(longlong *)(lVar14 + 0xb0) + 8 + (ulonglong)uVar15 * 0x10) * 0x10 + 0x138 + lVar14);
            goto code_?;
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 < *(ushort *)(lVar14 + 0x12e));
      }
      puVar16 = (undefined8 *)FUN_?(plStack_8,TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Vector3>,0,TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Vector3>,fVar4,fVar7);
code_?:
      puVar16 = (undefined8 *)(*(code *)*puVar16)(auStack_17,plVar13,puVar16[1]);
      uVar18 = *puVar16;
      if (fVar1 <= (float)uVar18) {
        fVar1 = (float)uVar18;
      }
      uStack_19._4_4_ = (float)((ulonglong)uVar18 >> 0x20);
      if (fVar2 <= uStack_19._4_4_) {
        fVar2 = uStack_19._4_4_;
      }
      if (fVar3 <= *(float *)(puVar16 + 1)) {
        fVar3 = *(float *)(puVar16 + 1);
      }
      uVar20 = *puVar16;
      if ((float)uVar20 <= fVar5) {
        fVar5 = (float)uVar20;
      }
      uStack_21._4_4_ = (float)((ulonglong)uVar20 >> 0x20);
      if (uStack_21._4_4_ <= fVar6) {
        fVar6 = uStack_21._4_4_;
      }
      fVar4 = fVar3;
      fVar7 = fVar6;
      uStack_19 = uVar18;
      uStack_21 = uVar20;
      if (*(float *)(puVar16 + 1) <= fVar11) {
        fVar11 = *(float *)(puVar16 + 1);
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

Vector3 * Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_GetSignVector(Vector3 *__return_storage_ptr__,Vector3 *v,MethodInfo *method)

{
  fVar1 = 1.0;
  if (v->x < 0.0) {
    fVar2 = -1.0;
  }
  else {
    fVar2 = 1.0;
  }
  if (v->y < 0.0) {
    fVar3 = -1.0;
  }
  else {
    fVar3 = 1.0;
  }
  if (v->z < 0.0) {
    fVar1 = -1.0;
  }
  __return_storage_ptr__->x = fVar2;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar1;
  return __return_storage_ptr__;
}


/* Boolean IsAligned(Vector3, Vector3, Boolean) */

bool Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_IsAligned(Vector3 *vector,Vector3 *other,bool checkSameDirection,MethodInfo *method)

{
  uVar1 = other->x;
  uVar2 = other->y;
  uVar3 = vector->x;
  uVar4 = vector->y;
  fVar5 = (float)uVar2 * (float)uVar4 + (float)uVar1 * (float)uVar3 + other->z * vector->z;
  if (checkSameDirection == 0) {
    fVar5 = ABS(fVar5);
  }
  else if (fVar5 <= 0.0) {
    return 0;
  }
  return ABS(fVar5 - 1.0) < 1e-05;
}


/* Void OffsetPoints(List`1[UnityEngine.Vector3], Vector3) */

void Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_OffsetPoints(List_1_UnityEngine_Vector3_ *points,Vector3 *offset,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
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
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
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
    *(ulonglong *)((longlong)&pVVar5->vector[0].x + uVar2) = CONCAT44(offset->y + (float)((ulonglong)uVar6 >> 0x20),(float)uVar7 + (float)uVar6);
    *(float *)((longlong)&pVVar5->vector[0].z + uVar2) = fVar8 + *(float *)((longlong)&pVVar5->vector[0].z + uVar2);
    piVar9 = &(points->fields)._version;
    *piVar9 = *piVar9 + 1;
    uVar2 = uVar2 + 0xc;
  } while( true );
}


/* Boolean PointsSameDir(Vector3, Vector3) */

bool Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_PointsSameDir(Vector3 *vector,Vector3 *other,MethodInfo *method)

{
  uVar1 = other->x;
  uVar2 = other->y;
  uVar3 = vector->x;
  uVar4 = vector->y;
  return 0.0 < (float)uVar2 * (float)uVar4 + (float)uVar1 * (float)uVar3 + other->z * vector->z;
}


/* Vector3 ProjectOnSegment(Vector3, Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_ProjectOnSegment(Vector3 *__return_storage_ptr__,Vector3 *point,Vector3 *point0,Vector3 *point1,MethodInfo *method)

{
  uVar1 = point1->x;
  uVar2 = point1->y;
  uVar3 = point0->x;
  uVar4 = point0->y;
  fVar5 = point1->z - point0->z;
  uStack_6 = CONCAT44((float)uVar2 - (float)uVar4,(float)uVar1 - (float)uVar3);
  fStack_7 = fVar5;
  fVar8 = (float)FUN_?(&uStack_6);
  if (1e-05 < fVar8) {
    fVar5 = fVar5 / fVar8;
    uStack_6 = CONCAT44(((float)uVar2 - (float)uVar4) / fVar8,((float)uVar1 - (float)uVar3) / fVar8);
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
  fVar14 = ((float)uVar13 - (float)uVar11) * uStack_6._4_4_ + ((float)uVar12 - (float)uVar10) * (float)uStack_6 + (point->z - point0->z) * fVar5;
  uVar15 = point0->x;
  uVar16 = point0->y;
  fVar8 = point0->z;
  __return_storage_ptr__->x = (float)uStack_6 * fVar14 + (float)uVar15;
  __return_storage_ptr__->y = uStack_6._4_4_ * fVar14 + (float)uVar16;
  __return_storage_ptr__->z = fVar5 * fVar14 + fVar8;
  return __return_storage_ptr__;
}


/* Single SignedAngle(Vector3, Vector3, Vector3) */

float Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_SignedAngle(Vector3 *from,Vector3 *to,Vector3 *axis,MethodInfo *method)

{
  method_00 = (MethodInfo *)axis;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized(aVStack_2,from,(MethodInfo *)axis);
  uVar3 = pVVar1->x;
  uVar4 = pVVar1->y;
  fVar5 = pVVar1->z;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized(aVStack_2,to,method_00);
  uVar6 = pVVar1->x;
  uVar7 = pVVar1->y;
  fVar5 = (float)uVar4 * (float)uVar7 + (float)uVar3 * (float)uVar6 + fVar5 * pVVar1->z;
  if (1.0 - fVar5 < 1e-05) {
    fVar5 = 0.0;
  }
  else if (fVar5 + 1.0 < 1e-05) {
    fVar5 = 180.0;
  }
  else {
    aVStack_2[0].x = from->x;
    aVStack_2[0].y = from->y;
    uVar8 = to->x;
    uVar9 = to->y;
    fVar10 = to->z * aVStack_2[0].y - (float)uVar9 * from->z;
    fVar11 = (float)uVar8 * from->z - to->z * aVStack_2[0].x;
    fVar12 = (float)uVar9 * aVStack_2[0].x - (float)uVar8 * aVStack_2[0].y;
    uStack_13 = CONCAT44(fVar11,fVar10);
    fStack_14 = fVar12;
    fVar15 = (float)FUN_?(&uStack_13);
    if (1e-05 < fVar15) {
      fVar12 = fVar12 / fVar15;
      uStack_13 = CONCAT44(fVar11 / fVar15,fVar10 / fVar15);
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar16 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_13._0_4_ = (pVVar16->zeroVector).x;
      uStack_13._4_4_ = (pVVar16->zeroVector).y;
      fVar12 = (pVVar16->zeroVector).z;
    }
    fVar15 = 1.0;
    if (fVar5 <= 1.0) {
      fVar15 = fVar5;
    }
    fVar5 = -1.0;
    if (-1.0 <= fVar15) {
      fVar5 = fVar15;
    }
    fVar5 = (float)func_?(fVar5);
    uVar17 = axis->x;
    uVar18 = axis->y;
    fVar5 = fVar5 * 57.29578;
    if (uStack_13._4_4_ * (float)uVar18 + (float)uStack_13 * (float)uVar17 + fVar12 * axis->z < 0.0) {
      fVar5 = -fVar5;
    }
  }
  return fVar5;
}


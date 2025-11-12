
/* Vector2 Abs(Vector2) */

Vector2 Assembly-CSharp.dll::RTG::Vector2Ex::Vector2Ex_Abs(Vector2 v,MethodInfo *method)

{
  uStackX_18 = v.x;
  uStackX_1c = v.y;
  VVar1.y = (float)((uint)uStackX_1c & _UNK_?);
  VVar1.x = (float)((uint)uStackX_18 & _UNK_?);
  return VVar1;
}


/* Single AbsDot(Vector2, Vector2) */

float Assembly-CSharp.dll::RTG::Vector2Ex::Vector2Ex_AbsDot
                (Vector2 v1,Vector2 v2,MethodInfo *method)

{
  uStackX_24 = v2.y;
  uStack_1 = v1.y;
  uStackX_20 = v2.x;
  uStack_2 = v1.x;
  return (float)((uint)(uStackX_24 * uStack_1 + uStackX_20 * uStack_2) & _UNK_?);
}


/* Vector3 ConvertDirTo3D(Vector2, Vector2, Vector3, Camera) */

Vector3 * Assembly-CSharp.dll::RTG::Vector2Ex::Vector2Ex_ConvertDirTo3D
                    (Vector3 *__return_storage_ptr__,Vector2 start,Vector2 end,Vector3 *zPos,
                    Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraEx,start,end,zPos,end);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__CameraEx->_1).field_0x1c == 0) {
    FUN_?();
  }
  VStack_1.x = zPos->x;
  VStack_1.y = zPos->y;
  VStack_1.z = zPos->z;
  fVar2 = CameraEx::CameraEx_GetPointZDistance(camera,&VStack_1,(MethodInfo *)0x0);
  if (camera == (Camera *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    pVVar4 = (Vector3 *)(*pcVar3)();
    return pVVar4;
  }
  VStack_5 = start;
  fStack_6 = fVar2;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_1.x = 0.0;
  VStack_1.y = 0.0;
  VStack_1.z = 0.0;
  pvVar7 = (camera->fields)._._._.m_CachedPtr;
  if (pvVar7 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    pVVar4 = (Vector3 *)(*pcVar3)();
    return pVVar4;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar3 = (code *)swi(3);
    pVVar4 = (Vector3 *)(*pcVar3)();
    return pVVar4;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(pvVar7,&VStack_5,2,&VStack_1);
  VStack_9 = end;
  fStack_10 = fVar2;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_11 = 0;
  fStack_12 = 0.0;
  pvVar7 = (camera->fields)._._._.m_CachedPtr;
  if (pvVar7 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    pVVar4 = (Vector3 *)(*pcVar3)();
    return pVVar4;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar3 = (code *)swi(3);
    pVVar4 = (Vector3 *)(*pcVar3)();
    return pVVar4;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(pvVar7,&VStack_9,2,&uStack_11);
  __return_storage_ptr__->x = (float)uStack_11 - VStack_1.x;
  __return_storage_ptr__->y = uStack_11._4_4_ - VStack_1.y;
  __return_storage_ptr__->z = fStack_12 - VStack_1.z;
  return __return_storage_ptr__;
}


/* Vector3 ConvertDirTo3D(Vector2, Vector3, Camera) */

Vector3 * Assembly-CSharp.dll::RTG::Vector2Ex::Vector2Ex_ConvertDirTo3D_1
                    (Vector3 *__return_storage_ptr__,Vector2 dir,Vector3 *zPos,Camera *camera,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraEx,dir,zPos,camera,dir);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__CameraEx->_1).field_0x1c == 0) {
    FUN_?();
  }
  VStack_1.x = zPos->x;
  VStack_1.y = zPos->y;
  VStack_1.z = zPos->z;
  fVar2 = CameraEx::CameraEx_GetPointZDistance(camera,&VStack_1,(MethodInfo *)0x0);
  if (camera == (Camera *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    pVVar4 = (Vector3 *)(*pcVar3)();
    return pVVar4;
  }
  uStack_5 = 0;
  fStack_6 = fVar2;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_1.x = 0.0;
  VStack_1.y = 0.0;
  VStack_1.z = 0.0;
  pvVar7 = (camera->fields)._._._.m_CachedPtr;
  if (pvVar7 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    pVVar4 = (Vector3 *)(*pcVar3)();
    return pVVar4;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar3 = (code *)swi(3);
    pVVar4 = (Vector3 *)(*pcVar3)();
    return pVVar4;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(pvVar7,&uStack_5,2,&VStack_1);
  VStack_9 = dir;
  fStack_10 = fVar2;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_11 = 0;
  fStack_12 = 0.0;
  pvVar7 = (camera->fields)._._._.m_CachedPtr;
  if (pvVar7 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    pVVar4 = (Vector3 *)(*pcVar3)();
    return pVVar4;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar3 = (code *)swi(3);
    pVVar4 = (Vector3 *)(*pcVar3)();
    return pVVar4;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(pvVar7,&VStack_9,2,&uStack_11);
  __return_storage_ptr__->x = (float)uStack_11 - VStack_1.x;
  __return_storage_ptr__->y = uStack_11._4_4_ - VStack_1.y;
  __return_storage_ptr__->z = fStack_12 - VStack_1.z;
  return __return_storage_ptr__;
}


/* Vector2 FromValue(Single) */

Vector2 Assembly-CSharp.dll::RTG::Vector2Ex::Vector2Ex_FromValue(float value,MethodInfo *method)

{
  VVar1.y = value;
  VVar1.x = value;
  return VVar1;
}


/* Single GetDistanceToSegment(Vector2, Vector2, Vector2) */

float Assembly-CSharp.dll::RTG::Vector2Ex::Vector2Ex_GetDistanceToSegment
                (Vector2 point,Vector2 point0,Vector2 point1,MethodInfo *method)

{
  VStack_1.y = point1.y;
  fVar2 = VStack_1.y;
  VStack_1.x = point1.x;
  fVar3 = VStack_1.x;
  fStack_4 = point0.y;
  fVar5 = VStack_1.y - fStack_4;
  fStack_6 = point0.x;
  fVar7 = VStack_1.x - fStack_6;
  VStack_1.y = fVar5;
  VStack_1.x = fVar7;
  aVStack_8[0] = point;
  fVar9 = (float)FUN_?(&VStack_1);
  fVar10 = (float)FUN_?(&VStack_1);
  if (_UNK_? < fVar10) {
    fVar5 = fVar5 / fVar10;
    fVar7 = fVar7 / fVar10;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector2);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    fVar5 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
    VStack_1 = TypeInfo__UnityEngine__Vector2->static_fields->zeroVector;
    fVar7 = VStack_1.x;
  }
  VVar11.y = aVStack_8[0].y - fStack_4;
  VVar11.x = aVStack_8[0].x - fStack_6;
  fVar10 = (aVStack_8[0].y - fStack_4) * fVar5 + (aVStack_8[0].x - fStack_6) * fVar7;
  if ((fVar10 < 0.0) || (fVar9 < fVar10)) {
    if (fVar10 < 0.0) {
      pVVar12 = aVStack_8;
    }
    else {
      pVVar12 = &VStack_1;
      VStack_1.y = fVar2 - aVStack_8[0].y;
      VStack_1.x = fVar3 - aVStack_8[0].x;
    }
  }
  else {
    pVVar12 = &VStack_1;
    VStack_1.y = (fVar5 * fVar10 + fStack_4) - aVStack_8[0].y;
    VStack_1.x = (fVar7 * fVar10 + fStack_6) - aVStack_8[0].x;
  }
  aVStack_8[0] = VVar11;
  fVar5 = (float)FUN_?(pVVar12);
  return fVar5;
}


/* Vector2 GetNormal(Vector2) */

Vector2 Assembly-CSharp.dll::RTG::Vector2Ex::Vector2Ex_GetNormal(Vector2 vec,MethodInfo *method)

{
  uStackX_18._4_4_ = vec.y;
  uStackX_18._0_4_ = vec.x;
  uStackX_18 = CONCAT44((float)uStackX_18,(uint)uStackX_18._4_4_ ^ _UNK_?);
  VVar1 = (Vector2)FUN_?(&uStackX_18);
  return VVar1;
}


/* Int32 GetPointClosestToPoint(List`1[UnityEngine.Vector2], Vector2) */

int32_t Assembly-CSharp.dll::RTG::Vector2Ex::Vector2Ex_GetPointClosestToPoint
                  (List_1_UnityEngine_Vector2_ *points,Vector2 pt,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = 0;
  if (points != (List_1_UnityEngine_Vector2_ *)0x0) {
    uVar2 = (points->fields)._size;
    lVar3 = 0x20;
    fStack_4 = pt.y;
    fStack_5 = pt.x;
    fVar6 = _UNK_?;
    uVar7 = 0xffffffff;
    while( true ) {
      if ((int)uVar2 <= (int)uVar1) {
        return uVar7;
      }
      if (uVar2 <= uVar1) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar8 = (code *)swi(3);
        iVar9 = (*pcVar8)();
        return iVar9;
      }
      pVVar10 = (points->fields)._items;
      if (pVVar10 == (Vector2__Array *)0x0) break;
      if ((uint)pVVar10->max_length <= uVar1) {
        FUN_?();
        pcVar8 = (code *)swi(3);
        iVar9 = (*pcVar8)();
        return iVar9;
      }
      fVar11 = *(float *)((longlong)&((Vector2__Array *)(pVVar10->vector + -4))->klass + lVar3) -
              fStack_5;
      fVar12 = *(float *)((longlong)pVVar10->vector + lVar3 + -0x1c) - fStack_4;
      fVar11 = fVar12 * fVar12 + fVar11 * fVar11;
      uVar13 = uVar1;
      if (fVar6 <= fVar11) {
        uVar13 = uVar7;
        fVar11 = fVar6;
      }
      fVar6 = fVar11;
      uVar1 = uVar1 + 1;
      lVar3 = lVar3 + 8;
      uVar7 = uVar13;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  iVar9 = (*pcVar8)();
  return iVar9;
}


/* Vector3 ToVector3(Vector2, Single) */

Vector3 * Assembly-CSharp.dll::RTG::Vector2Ex::Vector2Ex_ToVector3
                    (Vector3 *__return_storage_ptr__,Vector2 vec,float z,MethodInfo *method)

{
  fStackX_8 = vec.x;
  fStackX_c = vec.y;
  __return_storage_ptr__->x = fStackX_8;
  __return_storage_ptr__->y = fStackX_c;
  __return_storage_ptr__->z = z;
  return __return_storage_ptr__;
}


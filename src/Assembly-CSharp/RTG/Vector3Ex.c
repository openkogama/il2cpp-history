
/* Vector3 Abs(Vector3) */

Vector3 * Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_Abs(Vector3 *__return_storage_ptr__,Vector3 v,MethodInfo *method)

{
  __return_storage_ptr__->x = ABS(v.x);
  __return_storage_ptr__->y = ABS(v.y);
  __return_storage_ptr__->z = ABS(v.z);
  return __return_storage_ptr__;
}


/* Single AbsDot(Vector3, Vector3) */

float Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_AbsDot(Vector3 v1,Vector3 v2,MethodInfo *method)

{
  return ABS(v1.x * v2.x + v1.y * v2.y + v1.z * v2.z);
}


/* Vector2 ConvertDirTo2D(Vector3, Vector3, Camera) */

Vector2 Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_ConvertDirTo2D(Vector3 start,Vector3 end,Camera *camera,MethodInfo *method)

{
  if (camera != (Camera *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1(&start,camera,start,(MethodInfo *)0x0);
    fVar1 = 0.0;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1((Vector3 *)&stack0xffffffe4,camera,end,(MethodInfo *)0x0);
    uVar3 = pVVar2->x;
    uVar4 = pVVar2->y;
    VVar5.y = (float)uVar4 - fVar1;
    VVar5.x = (float)uVar3 - end.z;
    return VVar5;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  VVar5 = (Vector2)(*pcVar6)();
  return VVar5;
}


/* Single Dot(Vector3, Vector3) */

float Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_Dot(Vector3 v1,Vector3 v2,MethodInfo *method)

{
  return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
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

float Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_GetDistanceToSegment(Vector3 point,Vector3 point0,Vector3 point1,MethodInfo *method)

{
  fVar1 = point1.z - point0.z;
  fStack_2 = point1.x;
  uStack_3 = 0;
  fStack_4 = 0.0;
  uStack_5 = 0;
  fStack_6 = point0.x;
  fStack_7 = 0.0;
  fStack_8 = 0.0;
  uStack_9 = 0;
  uStack_10 = CONCAT44(uStack_10._4_4_,fVar1);
  auStack_11._4_4_ = point1.y - point0.y;
  auStack_11._0_4_ = point1.x - point0.x;
  uStack_12 = CONCAT44(uStack_12._4_4_,fVar1);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1((Vector3 *)auStack_11,(MethodInfo *)0x0);
  fStack_13 = point.z - point0.z;
  uStack_10 = CONCAT44(point.y - point0.y,point.x - fStack_8);
  fVar14 = uStack_12._4_4_ * (point.y - point0.y) + (point.x - fStack_8) * (float)uStack_12 + fStack_15 * fStack_13;
  fStack_7 = fStack_13;
  auStack_11._4_4_ = fVar14;
  if (0.0 <= fVar14) {
    dVar16 = (double)(fVar1 * fVar1 + fStack_17 * fStack_17 + (float)auStack_11._0_4_ * (float)auStack_11._0_4_);
    if (dVar16 < 0.0) {
      func_?();
    }
    else {
      dVar16 = SQRT(dVar16);
    }
    if ((float)auStack_11._4_4_ <= (float)dVar16) {
      point1.y = point0.y + uStack_12._4_4_ * (float)auStack_11._4_4_;
      point1.z = point0.z + fStack_15 * (float)auStack_11._4_4_;
      fVar1 = fStack_8 + (float)uStack_12 * (float)auStack_11._4_4_;
      goto code_?;
    }
  }
  fVar1 = fStack_4;
  if ((float)auStack_11._4_4_ < 0.0) {
    fVar18 = (float10)func_?(&uStack_10,0);
    return (float)fVar18;
  }
code_?:
  fStack_15 = point1.z - point.z;
  uStack_12 = CONCAT44(point1.y - point.y,fVar1 - point.x);
  fStack_7 = fStack_15;
  fVar18 = (float10)func_?(&uStack_12,0);
  return (float)fVar18;
}


/* Vector3 GetInverse(Vector3) */

Vector3 * Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_GetInverse(Vector3 *__return_storage_ptr__,Vector3 vector,MethodInfo *method)

{
  __return_storage_ptr__->x = 1.0 / vector.x;
  __return_storage_ptr__->y = 1.0 / vector.y;
  __return_storage_ptr__->z = 1.0 / vector.z;
  return __return_storage_ptr__;
}


/* Single GetMaxAbsComp(Vector3) */

float Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_GetMaxAbsComp(Vector3 v,MethodInfo *method)

{
  fVar1 = ABS(v.y);
  if (ABS(v.y) <= ABS(v.x)) {
    fVar1 = ABS(v.x);
  }
  fVar2 = ABS(v.z);
  if (ABS(v.z) <= fVar1) {
    fVar2 = fVar1;
  }
  return fVar2;
}


/* Int32 GetMostAligned(Vector3[], Vector3, Boolean) */

int32_t Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_GetMostAligned(Vector3__Array *vectors,Vector3 dir,bool checkSameDirection,MethodInfo *method)

{
  if (vectors != (Vector3__Array *)0x0) {
    uVar1 = vectors->max_length;
    if (uVar1 == 0) {
      return -1;
    }
    fVar2 = -3.4028235e+38;
    uVar3 = 0xffffffff;
    uVar4 = 0;
    if (checkSameDirection == 0) {
      for (; (int)uVar4 < (int)uVar1; uVar4 = uVar4 + 1) {
        if (uVar1 <= uVar4) goto code_?;
        uVar5 = vectors->vector[uVar4].x;
        uVar6 = vectors->vector[uVar4].y;
        fVar7 = ABS(dir.x * (float)uVar5 + dir.y * (float)uVar6 + dir.z * vectors->vector[uVar4].z);
        uVar8 = uVar4;
        if (fVar7 <= fVar2) {
          uVar8 = uVar3;
          fVar7 = fVar2;
        }
        fVar2 = fVar7;
        uVar3 = uVar8;
      }
    }
    else {
      pVVar9 = vectors->vector;
      for (; (int)uVar4 < (int)uVar1; uVar4 = uVar4 + 1) {
        if (uVar1 <= uVar4) goto code_?;
        uVar10 = pVVar9->x;
        uVar11 = pVVar9->y;
        fVar7 = dir.y * (float)uVar11 + dir.x * (float)uVar10 + dir.z * pVVar9->z;
        if ((0.0 < fVar7) && (fVar2 < fVar7)) {
          uVar3 = uVar4;
          fVar2 = fVar7;
        }
        pVVar9 = pVVar9 + 1;
      }
    }
    return uVar3;
  }
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  iVar13 = (*pcVar12)();
  return iVar13;
}


/* Int32 GetPointClosestToPoint(List`1[UnityEngine.Vector3], Vector3) */

int32_t Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_GetPointClosestToPoint(List_1_UnityEngine_Vector3_ *points,Vector3 pt,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    cRam_? = '\x01';
  }
  fStack_1 = 3.4028235e+38;
  index = 0;
  iVar2 = -1;
  if (points != (List_1_UnityEngine_Vector3_ *)0x0) {
    for (; fVar3 = fStack_1, index < (points->fields)._size; index = index + 1) {
      pVVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::VisualTreeAsset+UsingEntry]::List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item(&VStack_5,(List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)points,index,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
      uStack_6._0_4_ = pVVar4->alias;
      uStack_6._4_4_ = pVVar4->path;
      pVStack_7 = pVVar4->asset;
      fVar8 = ((float)uStack_6._4_4_ - pt.y) * ((float)uStack_6._4_4_ - pt.y) + ((float)(undefined4)uStack_6 - pt.x) * ((float)(undefined4)uStack_6 - pt.x) + ((float)pVStack_7 - pt.z) * ((float)pVStack_7 - pt.z);
      if (fVar8 < fStack_1) {
        fStack_1 = fVar8;
      }
      iVar9 = index;
      if (fVar3 <= fVar8) {
        iVar9 = iVar2;
      }
      iVar2 = iVar9;
    }
    return iVar2;
  }
  func_?();
  pcVar10 = (code *)swi(3);
  iVar2 = (*pcVar10)();
  return iVar2;
}


/* Vector3 GetPointCloudCenter(IEnumerable`1[UnityEngine.Vector3]) */

Vector3 * Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_GetPointCloudCenter(Vector3 *__return_storage_ptr__,IEnumerable_1_UnityEngine_Vector3_ *ptCloud,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff74;
  puVar5 = &stack0xffffff74;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::Vector3>);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Vector3>);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  uStack_6 = 0xff7fffffff7fffff;
  fStack_7 = -3.4028235e+38;
  fStack_8 = 3.4028235e+38;
  fStack_9 = 3.4028235e+38;
  uStack_10 = 0x7f7fffff7f7fffff;
  if (ptCloud != (IEnumerable_1_UnityEngine_Vector3_ *)0x0) {
    piStack_11 = (int *)func_?(0,TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::Vector3>,ptCloud);
    ppiStack_12 = &piStack_11;
    uStack_13 = 0;
    uStack_1 = 1;
    while (piStack_11 != (int *)0x0) {
      cVar14 = func_?(0,TypeInfo__System__Collections__IEnumerator,piStack_11);
      piVar15 = piStack_11;
      if (cVar14 == '\0') {
        uStack_1 = 0xffffffff;
        if (piStack_11 != (int *)0x0) {
          func_?(0,TypeInfo__System__IDisposable,piStack_11);
        }
        __return_storage_ptr__->x = ((float)uStack_10 + (float)uStack_6) * 0.5;
        __return_storage_ptr__->y = (uStack_10._4_4_ + uStack_6._4_4_) * 0.5;
        __return_storage_ptr__->z = (fStack_9 + fStack_7) * 0.5;
        *unaff_FS_OFFSET = uStack_3;
        return __return_storage_ptr__;
      }
      if (piStack_11 == (int *)0x0) break;
      iStack_16 = *piStack_11;
      uVar17 = 0;
      uStack_18 = 0;
      if (*(ushort *)(iStack_16 + 0xb6) != 0) {
        do {
          if (*(IEnumerator_1_UnityEngine_Vector3___Class **)(*(int *)(iStack_16 + 0x58) + (uint)uVar17 * 8) == TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Vector3>) {
            puVar19 = (undefined4 *)(iStack_16 + 0xc0 + *(int *)(*(int *)(iStack_16 + 0x58) + 4 + (uint)uVar17 * 8) * 8);
            goto code_?;
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 < *(ushort *)(iStack_16 + 0xb6));
      }
      puVar19 = (undefined4 *)func_?(piStack_11,TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Vector3>,0);
code_?:
      puVar20 = (undefined8 *)(*(code *)*puVar19)(auStack_21,piVar15,puVar19[1]);
      uVar22 = *puVar20;
      fStack_8 = *(float *)(puVar20 + 1);
      uStack_23._0_4_ = (float)uVar22;
      fVar24 = (float)uStack_6;
      if ((float)uStack_6 <= (float)uStack_23) {
        fVar24 = (float)uStack_23;
      }
      uStack_23._4_4_ = (float)((ulonglong)uVar22 >> 0x20);
      if (uStack_6._4_4_ <= uStack_23._4_4_) {
        uStack_6._4_4_ = uStack_23._4_4_;
      }
      fStack_25 = fStack_7;
      if (fStack_7 <= fStack_8) {
        fStack_25 = fStack_8;
      }
      uStack_6 = CONCAT44(uStack_6._4_4_,fVar24);
      uVar26 = *puVar20;
      uStack_27._0_4_ = (float)uVar26;
      fVar24 = (float)uStack_10;
      if ((float)uStack_27 <= (float)uStack_10) {
        fVar24 = (float)uStack_27;
      }
      uStack_27._4_4_ = (float)((ulonglong)uVar26 >> 0x20);
      if (uStack_27._4_4_ <= uStack_10._4_4_) {
        uStack_10._4_4_ = uStack_27._4_4_;
      }
      fStack_28 = fStack_9;
      if (fStack_8 <= fStack_9) {
        fStack_28 = fStack_8;
      }
      uStack_10 = CONCAT44(uStack_10._4_4_,fVar24);
      uStack_27 = uVar26;
      uStack_23 = uVar22;
      fStack_29 = fStack_8;
      fStack_7 = fStack_25;
      fStack_9 = fStack_28;
    }
  }
  func_?();
  pcVar30 = (code *)swi(3);
  pVVar31 = (Vector3 *)(*pcVar30)();
  return pVVar31;
}


/* Vector3 GetSignVector(Vector3) */

Vector3 * Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_GetSignVector(Vector3 *__return_storage_ptr__,Vector3 v,MethodInfo *method)

{
  fVar1 = 1.0;
  if (v.x < 0.0) {
    fVar2 = -1.0;
  }
  else {
    fVar2 = 1.0;
  }
  if (v.y < 0.0) {
    fVar3 = -1.0;
  }
  else {
    fVar3 = 1.0;
  }
  if (v.z < 0.0) {
    fVar1 = -1.0;
  }
  __return_storage_ptr__->x = fVar2;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar1;
  return __return_storage_ptr__;
}


/* Boolean IsAligned(Vector3, Vector3, Boolean) */

bool Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_IsAligned(Vector3 vector,Vector3 other,bool checkSameDirection,MethodInfo *method)

{
  fVar1 = other.x * vector.x + vector.y * other.y + vector.z * other.z;
  if (checkSameDirection == 0) {
    fVar1 = ABS(fVar1);
  }
  else if (fVar1 <= 0.0) {
    return 0;
  }
  return ABS(fVar1 - 1.0) < 1e-05;
}


/* Void OffsetPoints(List`1[UnityEngine.Vector3], Vector3) */

void Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_OffsetPoints(List_1_UnityEngine_Vector3_ *points,Vector3 offset,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_);
    cRam_? = '\x01';
  }
  index = 0;
  if (points != (List_1_UnityEngine_Vector3_ *)0x0) {
    for (; index < (points->fields)._size; index = index + 1) {
      pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::VisualTreeAsset+UsingEntry]::List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item((VisualTreeAsset_UsingEntry *)&stack0xffffffd8,(List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)points,index,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
      uVar2 = pVVar1->alias;
      uVar3 = pVVar1->path;
      value.FirstAxisSign = (int32_t)(offset.y + (float)uVar3);
      value.Quadrant = (int32_t)(offset.x + (float)uVar2);
      value.SecondAxisSign = (int32_t)(offset.z + (float)pVVar1->asset);
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)points,index,value,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_);
    }
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean PointsSameDir(Vector3, Vector3) */

bool Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_PointsSameDir(Vector3 vector,Vector3 other,MethodInfo *method)

{
  return 0.0 < vector.x * other.x + other.y * vector.y + vector.z * other.z;
}


/* Vector3 ProjectOnSegment(Vector3, Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_ProjectOnSegment(Vector3 *__return_storage_ptr__,Vector3 point,Vector3 point0,Vector3 point1,MethodInfo *method)

{
  fStack_1 = point0.x;
  uStack_2 = 0;
  uStack_3 = 0;
  fStack_4 = point1.z - point0.z;
  value.y = point1.y - point0.y;
  value.x = point1.x - point0.x;
  value.z = fStack_4;
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize(aVStack_6,value,(MethodInfo *)0x0);
  uVar7 = pVVar5->x;
  uVar8 = pVVar5->y;
  fVar9 = pVVar5->z;
  fVar10 = (float)uVar8 * (point.y - point0.y) + (float)uVar7 * (point.x - fStack_1) + fVar9 * (point.z - point0.z);
  __return_storage_ptr__->x = fStack_1 + (float)uVar7 * fVar10;
  __return_storage_ptr__->y = point0.y + (float)uVar8 * fVar10;
  __return_storage_ptr__->z = point0.z + fVar9 * fVar10;
  return __return_storage_ptr__;
}


/* Single SignedAngle(Vector3, Vector3, Vector3) */

float Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_SignedAngle(Vector3 from,Vector3 to,Vector3 axis,MethodInfo *method)

{
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize((Vector3 *)&stack0xffffffec,from,(MethodInfo *)0x0);
  pMVar2 = (MethodInfo *)pVVar1->y;
  fVar3 = pVVar1->z;
  value.y = to.y;
  value.x = to.x;
  value.z = to.z;
  fVar4 = to.z;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize((Vector3 *)&stack0xffffffd4,value,pMVar2);
  uVar5 = pVVar1->x;
  uVar6 = pVVar1->y;
  fVar3 = (float)uVar6 * (float)pMVar2 + fVar4 * (float)uVar5 + pVVar1->z * fVar3;
  if (1.0 - fVar3 < 1e-05) {
    return 0.0;
  }
  if (1e-05 <= fVar3 + 1.0) {
    fVar4 = from.y * to.z;
    fVar3 = from.x * to.z;
    to.z = from.x * to.y - to.x * from.y;
    cosine = 0.0;
    value_00.y = to.x * from.z - fVar3;
    value_00.x = fVar4 - from.z * to.y;
    value_00.z = to.z;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize(&to,value_00,(MethodInfo *)0x0);
    pMVar2 = (MethodInfo *)pVVar1->z;
    fVar3 = MathEx::MathEx_SafeAcos(cosine,pMVar2);
    to.z = fVar3 * 57.29578;
    if (axis.y * cosine + axis.x * 4.3827994e-29 + axis.z * (float)pMVar2 < 0.0) {
      to.z = -to.z;
    }
    return to.z;
  }
  return 180.0;
}


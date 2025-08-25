
/* Vector3 Abs(Vector3) */

Vector3 * Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_Abs
                    (Vector3 *__return_storage_ptr__,Vector3 v,MethodInfo *method)

{
  uVar1 = _UNK_?;
  __return_storage_ptr__->x = (float)((uint)v.x & _UNK_?);
  __return_storage_ptr__->y = (float)((uint)v.y & uVar1);
  __return_storage_ptr__->z = (float)((uint)v.z & uVar1);
  return __return_storage_ptr__;
}


/* Single AbsDot(Vector3, Vector3) */

float Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_AbsDot
                (Vector3 v1,Vector3 v2,MethodInfo *method)

{
  return (float)((uint)(v1.x * v2.x + v1.y * v2.y + v1.z * v2.z) & _UNK_?);
}


/* Vector2 ConvertDirTo2D(Vector3, Vector3, Camera) */

Vector2 Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_ConvertDirTo2D
                  (Vector3 start,Vector3 end,Camera *camera,MethodInfo *method)

{
  if (camera != (Camera *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
              (&start,camera,start,(MethodInfo *)0x0);
    fVar1 = 0.0;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                       ((Vector3 *)&stack0xffffffe4,camera,end,(MethodInfo *)0x0);
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
                (Vector3 point,Vector3 point0,Vector3 point1,MethodInfo *method)

{
  VStack_1.y = point1.y - point0.y;
  VStack_1.x = point1.x - point0.x;
  fStack_2 = point1.z - point0.z;
  VStack_1.z = fStack_2;
  fVar3 = (float10)func_?(&VStack_1,0,point1.x,0,0,0,point0.x,0,0,0);
  fStack_4 = (float)fVar3;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
            (&VStack_1,(MethodInfo *)0x0);
  fStack_2 = point.z - point0.z;
  uStack_5 = CONCAT44(point.y - point0.y,point.x - point0.x);
  fVar6 = (point.y - point0.y) * VStack_1.y + (point.x - point0.x) * VStack_1.x +
          fStack_2 * VStack_1.z;
  if ((0.0 <= fVar6) && (fVar6 <= fStack_4)) {
    VStack_1.z = (point0.z + VStack_1.z * fVar6) - point.z;
    VStack_1.y = (point0.y + VStack_1.y * fVar6) - point.y;
    VStack_1.x = (point0.x + VStack_1.x * fVar6) - point.x;
    fVar3 = (float10)func_?(&VStack_1,0);
    return (float)fVar3;
  }
  if (0.0 <= fVar6) {
    VStack_1.z = point1.z - point.z;
    VStack_1.y = point1.y - point.y;
    VStack_1.x = point1.x - point.x;
    fVar3 = (float10)func_?(&VStack_1,0);
    return (float)fVar3;
  }
  fVar3 = (float10)func_?(&uStack_5,0);
  return (float)fVar3;
}


/* Vector3 GetInverse(Vector3) */

Vector3 * Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_GetInverse
                    (Vector3 *__return_storage_ptr__,Vector3 vector,MethodInfo *method)

{
  fVar1 = _UNK_?;
  __return_storage_ptr__->x = _UNK_? / vector.x;
  __return_storage_ptr__->y = fVar1 / vector.y;
  __return_storage_ptr__->z = fVar1 / vector.z;
  return __return_storage_ptr__;
}


/* Single GetMaxAbsComp(Vector3) */

float Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_GetMaxAbsComp(Vector3 v,MethodInfo *method)

{
  fVar1 = (float)((uint)v.y & _UNK_?);
  if ((float)((uint)v.y & _UNK_?) <= (float)((uint)v.x & _UNK_?)) {
    fVar1 = (float)((uint)v.x & _UNK_?);
  }
  fVar2 = (float)((uint)v.z & _UNK_?);
  if ((float)((uint)v.z & _UNK_?) <= fVar1) {
    fVar2 = fVar1;
  }
  return fVar2;
}


/* Int32 GetMostAligned(Vector3[], Vector3, Boolean) */

int32_t Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_GetMostAligned
                  (Vector3__Array *vectors,Vector3 dir,bool checkSameDirection,MethodInfo *method)

{
  if (vectors != (Vector3__Array *)0x0) {
    if (vectors->max_length == 0) {
      return -1;
    }
    uVar1 = 0xffffffff;
    uVar2 = 0;
    fVar3 = _UNK_?;
    if (checkSameDirection == 0) {
      for (; (int)uVar2 < (int)vectors->max_length; uVar2 = uVar2 + 1) {
        if (vectors->max_length <= uVar2) goto code_?;
        uVar4 = vectors->vector[uVar2].x;
        uVar5 = vectors->vector[uVar2].y;
        fVar6 = (float)((uint)(dir.y * (float)uVar5 + dir.x * (float)uVar4 +
                               dir.z * vectors->vector[uVar2].z) & _UNK_?);
        uVar7 = uVar2;
        if (fVar6 <= fVar3) {
          uVar7 = uVar1;
          fVar6 = fVar3;
        }
        uVar1 = uVar7;
        fVar3 = fVar6;
      }
    }
    else {
      pVVar8 = vectors->vector;
      for (; (int)uVar2 < (int)vectors->max_length; uVar2 = uVar2 + 1) {
        if (vectors->max_length <= uVar2) goto code_?;
        uVar9 = pVVar8->x;
        uVar10 = pVVar8->y;
        fVar6 = dir.y * (float)uVar10 + dir.x * (float)uVar9 + dir.z * pVVar8->z;
        if ((0.0 < fVar6) && (fVar3 < fVar6)) {
          uVar1 = uVar2;
          fVar3 = fVar6;
        }
        pVVar8 = pVVar8 + 1;
      }
    }
    return uVar1;
  }
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  iVar12 = (*pcVar11)();
  return iVar12;
}


/* Int32 GetPointClosestToPoint(List`1[UnityEngine.Vector3], Vector3) */

int32_t Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_GetPointClosestToPoint
                  (List_1_UnityEngine_Vector3_ *points,Vector3 pt,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  fStack_1 = _UNK_?;
  index = 0;
  iVar2 = -1;
  if (points != (List_1_UnityEngine_Vector3_ *)0x0) {
    for (; fVar3 = fStack_1, index < (points->fields)._size; index = index + 1) {
      pVVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
               VisualTreeAsset+UsingEntry]::
               List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                         (&VStack_5,
                          (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)points,index,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                         );
      uStack_6._0_4_ = pVVar4->alias;
      uStack_6._4_4_ = pVVar4->path;
      pVStack_7 = pVVar4->asset;
      fVar8 = ((float)uStack_6._4_4_ - pt.y) * ((float)uStack_6._4_4_ - pt.y) +
              ((float)(undefined4)uStack_6 - pt.x) * ((float)(undefined4)uStack_6 - pt.x) +
              ((float)pVStack_7 - pt.z) * ((float)pVStack_7 - pt.z);
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

Vector3 * Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_GetPointCloudCenter
                    (Vector3 *__return_storage_ptr__,IEnumerable_1_UnityEngine_Vector3_ *ptCloud,
                    MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xffffff30;
  puVar6 = &stack0xfffffffc;
  puVar7 = &stack0xffffff30;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::Vector3>);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Vector3>);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    cRam_? = '\x01';
    puVar6 = puStack_1;
    puVar7 = puStack_5;
  }
  puStack_5 = puVar7;
  puStack_1 = puVar6;
  fStack_8 = _UNK_?;
  fStack_9 = _UNK_?;
  fStack_10 = _UNK_?;
  fStack_11 = _UNK_?;
  fStack_12 = _UNK_?;
  fStack_13 = _UNK_?;
  fStack_14 = _UNK_?;
  fStack_15 = _UNK_?;
  fStack_16 = _UNK_?;
  fStack_17 = _UNK_?;
  fStack_18 = _UNK_?;
  fStack_19 = _UNK_?;
  if (ptCloud != (IEnumerable_1_UnityEngine_Vector3_ *)0x0) {
    apiStack_20[0] =
         (int *)func_?(0,
                                TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::Vector3>
                                ,ptCloud);
    ppiStack_21 = apiStack_20;
    uStack_22 = 0;
    uStack_2 = 1;
    fVar23 = fStack_18;
    while (fStack_18 = fVar23, apiStack_20[0] != (int *)0x0) {
      cVar24 = func_?(0,TypeInfo__System__Collections__IEnumerator,apiStack_20[0]);
      if (cVar24 == '\0') {
        uStack_2 = 0xffffffff;
        if (apiStack_20[0] != (int *)0x0) {
          func_?(0,TypeInfo__System__IDisposable,apiStack_20[0]);
        }
        fVar23 = (fStack_18 + fStack_12) * _UNK_?;
        fVar25 = (fStack_10 + fStack_16) * _UNK_?;
        __return_storage_ptr__->x = (fStack_8 + fStack_14) * _UNK_?;
        __return_storage_ptr__->y = fVar25;
        __return_storage_ptr__->z = fVar23;
        *unaff_FS_OFFSET = uStack_4;
        return __return_storage_ptr__;
      }
      piStack_26 = apiStack_20[0];
      if (apiStack_20[0] == (int *)0x0) break;
      iStack_27 = *apiStack_20[0];
      uVar28 = 0;
      uStack_29 = 0;
      uVar30 = *(ushort *)(iStack_27 + 0xb6);
      uStack_31 = (uint)uVar30;
      if (uVar30 != 0) {
        do {
          if (*(IEnumerator_1_UnityEngine_Vector3___Class **)
               (*(int *)(iStack_27 + 0x58) + (uint)uVar28 * 8) ==
              TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Vector3>) {
            puVar32 = (undefined4 *)
                     (iStack_27 +
                     (*(int *)(*(int *)(iStack_27 + 0x58) + 4 + (uint)uVar28 * 8) + 0x18) * 8);
            goto code_?;
          }
          uVar28 = uVar28 + 1;
        } while (uVar28 < uVar30);
      }
      puVar32 = (undefined4 *)
               func_?(apiStack_20[0],
                               TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Vector3>
                               ,0);
code_?:
      puVar33 = (undefined8 *)(*(code *)*puVar32)(auStack_34,piStack_26,puVar32[1]);
      uVar35 = *puVar33;
      fStack_36 = *(float *)(puVar33 + 1);
      uStack_37._0_4_ = (float)uVar35;
      if (fStack_8 <= (float)uStack_37) {
        fStack_8 = (float)uStack_37;
      }
      uStack_37._4_4_ = (float)((ulonglong)uVar35 >> 0x20);
      if (fStack_10 <= uStack_37._4_4_) {
        fStack_10 = uStack_37._4_4_;
      }
      fVar23 = fStack_36;
      if (fStack_36 < fStack_12) {
        fVar23 = fStack_12;
      }
      fStack_12 = fVar23;
      uVar38 = *puVar33;
      uStack_39._0_4_ = (float)uVar38;
      if ((float)uStack_39 <= fStack_14) {
        fStack_14 = (float)uStack_39;
      }
      uStack_39._4_4_ = (float)((ulonglong)uVar38 >> 0x20);
      if (uStack_39._4_4_ <= fStack_16) {
        fStack_16 = uStack_39._4_4_;
      }
      uStack_39 = uVar38;
      uStack_37 = uVar35;
      fStack_40 = fStack_36;
      fStack_19 = fStack_36;
      fStack_9 = fStack_8;
      fStack_11 = fStack_10;
      fStack_13 = fStack_12;
      fStack_15 = fStack_14;
      fStack_17 = fStack_16;
      fVar23 = fStack_36;
      if (fStack_18 < fStack_36) {
        fStack_19 = fStack_18;
        fVar23 = fStack_18;
      }
    }
  }
  uVar41 = func_?();
  func_?(uVar41);
  pcVar42 = (code *)swi(3);
  pVVar43 = (Vector3 *)(*pcVar42)();
  return pVVar43;
}


/* Vector3 GetSignVector(Vector3) */

Vector3 * Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_GetSignVector
                    (Vector3 *__return_storage_ptr__,Vector3 v,MethodInfo *method)

{
  fVar1 = _UNK_?;
  if (0.0 <= v.x) {
    fVar1 = _UNK_?;
  }
  fVar2 = _UNK_?;
  if (0.0 <= v.y) {
    fVar2 = _UNK_?;
  }
  fVar3 = _UNK_?;
  if (v.z < 0.0) {
    fVar3 = _UNK_?;
  }
  __return_storage_ptr__->x = fVar1;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar3;
  return __return_storage_ptr__;
}


/* Boolean IsAligned(Vector3, Vector3, Boolean) */

bool Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_IsAligned
               (Vector3 vector,Vector3 other,bool checkSameDirection,MethodInfo *method)

{
  fVar1 = vector.x * other.x + vector.y * other.y + vector.z * other.z;
  if (checkSameDirection == 0) {
    return (float)((uint)((float)((uint)fVar1 & _UNK_?) - _UNK_?) & _UNK_?) <
           _UNK_?;
  }
  if (fVar1 <= _UNK_?) {
    return 0;
  }
  return (float)((uint)(fVar1 - _UNK_?) & _UNK_?) < _UNK_?;
}


/* Void OffsetPoints(List`1[UnityEngine.Vector3], Vector3) */

void Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_OffsetPoints
               (List_1_UnityEngine_Vector3_ *points,Vector3 offset,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
                   );
    cRam_? = '\x01';
  }
  index = 0;
  if (points != (List_1_UnityEngine_Vector3_ *)0x0) {
    for (; index < (points->fields)._size; index = index + 1) {
      pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
               VisualTreeAsset+UsingEntry]::
               List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                         ((VisualTreeAsset_UsingEntry *)&stack0xffffffd8,
                          (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)points,index,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                         );
      uVar2 = pVVar1->alias;
      uVar3 = pVVar1->path;
      value.FirstAxisSign = (int32_t)(offset.y + (float)uVar3);
      value.Quadrant = (int32_t)(offset.x + (float)uVar2);
      value.SecondAxisSign = (int32_t)(offset.z + (float)pVVar1->asset);
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
                ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)points,index,value,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
                );
    }
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean PointsSameDir(Vector3, Vector3) */

bool Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_PointsSameDir
               (Vector3 vector,Vector3 other,MethodInfo *method)

{
  return _UNK_? < vector.x * other.x + vector.y * other.y + vector.z * other.z;
}


/* Vector3 ProjectOnSegment(Vector3, Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_ProjectOnSegment
                    (Vector3 *__return_storage_ptr__,Vector3 point,Vector3 point0,Vector3 point1,
                    MethodInfo *method)

{
  fStack_1 = point0.x;
  uStack_2 = 0;
  uStack_3 = 0;
  fStack_4 = point1.z - point0.z;
  value.y = point1.y - point0.y;
  value.x = point1.x - point0.x;
  value.z = fStack_4;
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     (aVStack_6,value,(MethodInfo *)0x0);
  uVar7 = pVVar5->x;
  uVar8 = pVVar5->y;
  fVar9 = pVVar5->z;
  fVar10 = (float)uVar8 * (point.y - point0.y) + (float)uVar7 * (point.x - fStack_1) +
          fVar9 * (point.z - point0.z);
  __return_storage_ptr__->x = fStack_1 + (float)uVar7 * fVar10;
  __return_storage_ptr__->y = point0.y + (float)uVar8 * fVar10;
  __return_storage_ptr__->z = point0.z + fVar9 * fVar10;
  return __return_storage_ptr__;
}


/* Single SignedAngle(Vector3, Vector3, Vector3) */

float Assembly-CSharp.dll::RTG::Vector3Ex::Vector3Ex_SignedAngle
                (Vector3 from,Vector3 to,Vector3 axis,MethodInfo *method)

{
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)&stack0xffffffec,from,(MethodInfo *)0x0);
  pMVar2 = (MethodInfo *)pVVar1->y;
  fVar3 = pVVar1->z;
  value.y = to.y;
  value.x = to.x;
  value.z = to.z;
  fVar4 = to.z;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)&stack0xffffffd4,value,pMVar2);
  uVar5 = pVVar1->x;
  uVar6 = pVVar1->y;
  fVar3 = (float)uVar6 * (float)pMVar2 + (float)uVar5 * fVar4 + pVVar1->z * fVar3;
  if (_UNK_? - fVar3 < _UNK_?) {
    return 0.0;
  }
  if (_UNK_? <= fVar3 + _UNK_?) {
    fVar4 = from.y * to.z;
    fVar3 = from.x * to.z;
    to.z = from.x * to.y - to.x * from.y;
    cosine = 0.0;
    value_00.y = to.x * from.z - fVar3;
    value_00.x = fVar4 - from.z * to.y;
    value_00.z = to.z;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                       (&to,value_00,(MethodInfo *)0x0);
    pMVar2 = (MethodInfo *)pVVar1->z;
    fVar3 = MathEx::MathEx_SafeAcos(cosine,pMVar2);
    to.z = fVar3 * _UNK_?;
    if (axis.y * cosine + axis.x * 4.4075572e-29 + axis.z * (float)pMVar2 < 0.0) {
      to.z = (float)((uint)to.z ^
                    __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
    }
    return to.z;
  }
  return _UNK_?;
}


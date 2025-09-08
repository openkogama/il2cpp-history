
/* Vector2 Abs(Vector2) */

Vector2 Assembly-CSharp.dll::RTG::Vector2Ex::Vector2Ex_Abs(Vector2 v,MethodInfo *method)

{
  VVar1.y = (float)((uint)v.y & _UNK_?);
  VVar1.x = (float)((uint)v.x & _UNK_?);
  return VVar1;
}


/* Single AbsDot(Vector2, Vector2) */

float Assembly-CSharp.dll::RTG::Vector2Ex::Vector2Ex_AbsDot
                (Vector2 v1,Vector2 v2,MethodInfo *method)

{
  return (float)((uint)(v1.x * v2.x + v1.y * v2.y) & _UNK_?);
}


/* Vector3 ConvertDirTo3D(Vector2, Vector2, Vector3, Camera) */

Vector3 * Assembly-CSharp.dll::RTG::Vector2Ex::Vector2Ex_ConvertDirTo3D
                    (Vector3 *__return_storage_ptr__,Vector2 start,Vector2 end,Vector3 zPos,
                    Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraEx);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__CameraEx);
  }
  VVar1.y = zPos.y;
  VVar1.x = zPos.x;
  VVar1.z = zPos.z;
  __return_storage_ptr__ =
       (Vector3 *)CameraEx::CameraEx_GetPointZDistance(camera,VVar1,(MethodInfo *)0x0);
  zPos.x = start.x;
  zPos.y = start.y;
  zPos.z = (float)__return_storage_ptr__;
  if (camera != (Camera *)0x0) {
    position.z = (float)__return_storage_ptr__;
    position._0_8_ = start;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToWorldPoint_1
              (&zPos,camera,position,(MethodInfo *)0x0);
    fVar2 = end.y;
    pVVar3 = (Vector3 *)&stack0xffffffe4;
    puVar4 = &UNK_?;
    VVar1.x = end.x;
    VVar1 = (Vector3)CONCAT84(uVar5,VVar1.x);
    zPos.z = (float)__return_storage_ptr__;
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToWorldPoint_1
                       (pVVar3,camera,VVar1,(MethodInfo *)0x0);
    uVar7 = pVVar6->x;
    uVar8 = pVVar6->y;
    fVar9 = pVVar6->z;
    __return_storage_ptr__->x = (float)uVar7 - (float)puVar4;
    __return_storage_ptr__->y = (float)uVar8 - (float)pVVar3;
    __return_storage_ptr__->z = fVar9 - (float)camera;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar10 = (code *)swi(3);
  pVVar3 = (Vector3 *)(*pcVar10)();
  return pVVar3;
}


/* Vector3 ConvertDirTo3D(Vector2, Vector3, Camera) */

Vector3 * Assembly-CSharp.dll::RTG::Vector2Ex::Vector2Ex_ConvertDirTo3D_1
                    (Vector3 *__return_storage_ptr__,Vector2 dir,Vector3 zPos,Camera *camera,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraEx);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__CameraEx);
  }
  VVar1.y = zPos.y;
  VVar1.x = zPos.x;
  VVar1.z = zPos.z;
  __return_storage_ptr__ =
       (Vector3 *)CameraEx::CameraEx_GetPointZDistance(camera,VVar1,(MethodInfo *)0x0);
  zPos.x = 0.0;
  zPos.y = 0.0;
  zPos.z = (float)__return_storage_ptr__;
  if (camera != (Camera *)0x0) {
    auVar2._4_8_ = 0;
    auVar2._0_4_ = __return_storage_ptr__;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToWorldPoint_1
              (&zPos,camera,(Vector3)(auVar2 << 0x40),(MethodInfo *)0x0);
    fVar3 = dir.y;
    pVVar4 = (Vector3 *)&stack0xffffffe4;
    puVar5 = &UNK_?;
    VVar1.x = dir.x;
    VVar1 = (Vector3)CONCAT84(uVar6,VVar1.x);
    zPos.z = (float)__return_storage_ptr__;
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToWorldPoint_1
                       (pVVar4,camera,VVar1,(MethodInfo *)0x0);
    uVar8 = pVVar7->x;
    uVar9 = pVVar7->y;
    fVar10 = pVVar7->z;
    __return_storage_ptr__->x = (float)uVar8 - (float)puVar5;
    __return_storage_ptr__->y = (float)uVar9 - (float)pVVar4;
    __return_storage_ptr__->z = fVar10 - (float)camera;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar11 = (code *)swi(3);
  pVVar4 = (Vector3 *)(*pcVar11)();
  return pVVar4;
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
  fVar1 = point1.x - point0.x;
  fVar2 = point1.y - point0.y;
  fStack_3 = fVar1;
  fStack_4 = fVar2;
  fVar5 = (float10)func_?(&fStack_3,0);
  fVar6 = (float10)func_?(&fStack_3,0);
  fStack_4 = (float)fVar6;
  if (_UNK_? < fStack_4) {
    fVar1 = fVar1 / fStack_4;
    fVar2 = fVar2 / fStack_4;
  }
  else {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector2);
      cRam_? = '\x01';
    }
    fVar1 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
    fVar2 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
  }
  fVar7 = (point.x - point0.x) * fVar1 + (point.y - point0.y) * fVar2;
  if ((0.0 <= fVar7) && (fVar7 <= (float)fVar5)) {
    point0.y = (point0.y + fVar2 * fVar7) - point.y;
    point0.x = (point0.x + fVar1 * fVar7) - point.x;
    fVar5 = (float10)func_?(&point0,0);
    return (float)fVar5;
  }
  point0.x = point.x - point0.x;
  point0.y = point.y - point0.y;
  if (0.0 <= fVar7) {
    point0.x = point1.x - point.x;
    point0.y = point1.y - point.y;
  }
  fVar5 = (float10)func_?(&point0,0);
  return (float)fVar5;
}


/* Vector2 GetNormal(Vector2) */

Vector2 Assembly-CSharp.dll::RTG::Vector2Ex::Vector2Ex_GetNormal(Vector2 vec,MethodInfo *method)

{
  fVar1 = (float)((uint)vec.y ^
                 __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  vec.y = vec.x;
  vec.x = fVar1;
  VVar2 = (Vector2)func_?(&vec,0);
  return VVar2;
}


/* Int32 GetPointClosestToPoint(List`1[UnityEngine.Vector2], Vector2) */

int32_t Assembly-CSharp.dll::RTG::Vector2Ex::Vector2Ex_GetPointClosestToPoint
                  (List_1_UnityEngine_Vector2_ *points,Vector2 pt,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  iVar1 = -1;
  index = 0;
  fStack_2 = _UNK_?;
  if (points != (List_1_UnityEngine_Vector2_ *)0x0) {
    for (; index < (points->fields)._size; index = index + 1) {
      VVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (points,index,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      VStack_4.y = VVar3.y;
      fVar5 = (VStack_4.y - pt.y) * (VStack_4.y - pt.y) +
              (VStack_4.x - pt.x) * (VStack_4.x - pt.x);
      iVar6 = index;
      if (fStack_2 <= fVar5) {
        iVar6 = iVar1;
        fVar5 = fStack_2;
      }
      fStack_2 = fVar5;
      iVar1 = iVar6;
      VStack_4 = VVar3;
    }
    return iVar1;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  iVar1 = (*pcVar7)();
  return iVar1;
}


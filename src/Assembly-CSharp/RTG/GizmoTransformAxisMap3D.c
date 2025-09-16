
/* Void Map(GizmoTransform, Int32, AxisSign) */

void Assembly-CSharp.dll::RTG::GizmoTransformAxisMap3D::GizmoTransformAxisMap3D_Map
               (GizmoTransformAxisMap3D *this,GizmoTransform *transform,int32_t axisIndex,
               AxisSign__Enum axisSign,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__AxisDescriptor);
    cRam_? = '\x01';
  }
  if (transform != (GizmoTransform *)0x0) {
    this_00 = (AxisDescriptor *)func_?(TypeInfo__RTG__AxisDescriptor);
    AxisDescriptor::AxisDescriptor__ctor(this_00,axisIndex,axisSign,(MethodInfo *)0x0);
    (this->fields)._mappedAxisDesc = this_00;
    func_?(&(this->fields)._mappedAxisDesc,this_00);
    (this->fields)._transform = transform;
    func_?(&(this->fields)._transform,transform);
  }
  return;
}


/* Void SetAxis(Vector3) */

void Assembly-CSharp.dll::RTG::GizmoTransformAxisMap3D::GizmoTransformAxisMap3D_SetAxis
               (GizmoTransformAxisMap3D *this,Vector3 axis,MethodInfo *method)

{
  if ((this->fields)._transform == (GizmoTransform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                       ((Vector3 *)&stack0xfffffff0,axis,(MethodInfo *)0x0);
    fVar2 = pVVar1->y;
    unique0x00017200 = pVVar1->z;
    (this->fields)._freeAxis.x = pVVar1->x;
    (this->fields)._freeAxis.y = fVar2;
    (this->fields)._freeAxis.z = unique0x00017200;
    return;
  }
  pVVar3 = (((this->fields)._transform)->fields)._axes3D;
  if (pVVar3 != (Vector3__Array *)0x0) {
    if (pVVar3->max_length == 0) goto code_?;
    puStack_4 = (undefined *)pVVar3->vector[0].x;
    unique0x0000a404 = pVVar3->vector[0].y;
    fVar2 = pVVar3->vector[0].z;
    pAVar5 = (this->fields)._mappedAxisDesc;
    if (pAVar5 != (AxisDescriptor *)0x0) {
      if ((pAVar5->fields)._index == 0) {
        pVVar3 = (((this->fields)._transform)->fields)._axes3D;
        if (pVVar3->max_length < 2) goto code_?;
        puStack_4 = (undefined *)pVVar3->vector[1].x;
        unique0x0000a404 = pVVar3->vector[1].y;
        fVar2 = pVVar3->vector[1].z;
      }
      this_00 = (this->fields)._transform;
      if (this_00 == (GizmoTransform *)0x0) {
        uVar6._0_4_ = (this->fields)._freeAxis.x;
        uVar6._4_4_ = (this->fields)._freeAxis.y;
        fVar7 = (this->fields)._freeAxis.z;
      }
      else {
        pVVar1 = GizmoTransform::GizmoTransform_GetAxis3D
                           (&VStack_8,this_00,(this->fields)._mappedAxisDesc,(MethodInfo *)0x0);
        uVar6._0_4_ = pVVar1->x;
        uVar6._4_4_ = pVVar1->y;
        fVar7 = pVVar1->z;
      }
      from.z = fVar7;
      from.x = (float)(int)uVar6;
      from.y = (float)(int)((ulonglong)uVar6 >> 0x20);
      perp180.z = fVar2;
      perp180.x = (float)puStack_4;
      perp180.y = stack0xfffffff8;
      pQVar9 = QuaternionEx::QuaternionEx_FromToRotation3D
                         ((Quaternion *)&stack0xffffffe0,from,axis,perp180,(MethodInfo *)0x0);
      if (this_00 != (GizmoTransform *)0x0) {
        stack0xfffffff8 = (float)this_00;
        GizmoTransform::GizmoTransform_Rotate3D(this_00,*pQVar9,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void SetFreeAxis(Vector3) */

void Assembly-CSharp.dll::RTG::GizmoTransformAxisMap3D::GizmoTransformAxisMap3D_SetFreeAxis
               (GizmoTransformAxisMap3D *this,Vector3 axis,MethodInfo *method)

{
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     (&axis,axis,(MethodInfo *)0x0);
  fVar2 = pVVar1->y;
  fVar3 = pVVar1->z;
  (this->fields)._freeAxis.x = pVVar1->x;
  (this->fields)._freeAxis.y = fVar2;
  (this->fields)._freeAxis.z = fVar3;
  return;
}


/* Void SetMappedAxis(Vector3) */

void Assembly-CSharp.dll::RTG::GizmoTransformAxisMap3D::GizmoTransformAxisMap3D_SetMappedAxis
               (GizmoTransformAxisMap3D *this,Vector3 axis,MethodInfo *method)

{
  if ((this->fields)._transform == (GizmoTransform *)0x0) {
    return;
  }
  pVVar1 = (((this->fields)._transform)->fields)._axes3D;
  if (pVVar1 != (Vector3__Array *)0x0) {
    if (pVVar1->max_length == 0) goto code_?;
    uStack_2._0_4_ = pVVar1->vector[0].x;
    uStack_2._4_4_ = pVVar1->vector[0].y;
    fVar3 = pVVar1->vector[0].z;
    pAVar4 = (this->fields)._mappedAxisDesc;
    if (pAVar4 != (AxisDescriptor *)0x0) {
      if ((pAVar4->fields)._index == 0) {
        pVVar1 = (((this->fields)._transform)->fields)._axes3D;
        if (pVVar1->max_length < 2) goto code_?;
        uStack_2._0_4_ = pVVar1->vector[1].x;
        uStack_2._4_4_ = pVVar1->vector[1].y;
        fVar3 = pVVar1->vector[1].z;
      }
      this_00 = (this->fields)._transform;
      if (this_00 == (GizmoTransform *)0x0) {
        uVar5._0_4_ = (this->fields)._freeAxis.x;
        uVar5._4_4_ = (this->fields)._freeAxis.y;
        fVar6 = (this->fields)._freeAxis.z;
      }
      else {
        pVVar7 = GizmoTransform::GizmoTransform_GetAxis3D
                           ((Vector3 *)&stack0xffffffe8,this_00,(this->fields)._mappedAxisDesc,
                            (MethodInfo *)0x0);
        uVar5._0_4_ = pVVar7->x;
        uVar5._4_4_ = pVVar7->y;
        fVar6 = pVVar7->z;
      }
      from.z = fVar6;
      from.x = (float)(int)uVar5;
      from.y = (float)(int)((ulonglong)uVar5 >> 0x20);
      perp180.z = fVar3;
      perp180.x = (float)(undefined4)uStack_2;
      perp180.y = (float)uStack_2._4_4_;
      pQVar8 = QuaternionEx::QuaternionEx_FromToRotation3D
                         ((Quaternion *)&stack0xffffffe4,from,axis,perp180,(MethodInfo *)0x0);
      if (this_00 != (GizmoTransform *)0x0) {
        GizmoTransform::GizmoTransform_Rotate3D(this_00,*pQVar8,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Unmap() */

void Assembly-CSharp.dll::RTG::GizmoTransformAxisMap3D::GizmoTransformAxisMap3D_Unmap
               (GizmoTransformAxisMap3D *this,MethodInfo *method)

{
  (this->fields)._transform = (GizmoTransform *)0x0;
  func_?(&(this->fields)._transform);
  return;
}


/* GizmoTransformAxisMap3D() */

void Assembly-CSharp.dll::RTG::GizmoTransformAxisMap3D::GizmoTransformAxisMap3D__ctor
               (GizmoTransformAxisMap3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__AxisDescriptor);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->rightVector).y;
  fVar3 = (pVVar1->rightVector).z;
  (this->fields)._freeAxis.x = (pVVar1->rightVector).x;
  (this->fields)._freeAxis.y = fVar2;
  (this->fields)._freeAxis.z = fVar3;
  this_00 = (AxisDescriptor *)func_?(TypeInfo__RTG__AxisDescriptor);
  AxisDescriptor::AxisDescriptor__ctor(this_00,0,AxisSign__Enum_Positive,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)&(this->fields)._mappedAxisDesc;
  (this->fields)._mappedAxisDesc = this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* Vector3 get_Axis() */

Vector3 * Assembly-CSharp.dll::RTG::GizmoTransformAxisMap3D::GizmoTransformAxisMap3D_get_Axis
                    (Vector3 *__return_storage_ptr__,GizmoTransformAxisMap3D *this,
                    MethodInfo *method)

{
  if ((this->fields)._transform == (GizmoTransform *)0x0) {
    fVar1 = (this->fields)._freeAxis.y;
    fVar2 = (this->fields)._freeAxis.z;
    __return_storage_ptr__->x = (this->fields)._freeAxis.x;
    __return_storage_ptr__->y = fVar1;
    __return_storage_ptr__->z = fVar2;
    return __return_storage_ptr__;
  }
  this_00 = (this->fields)._transform;
  if (this_00 != (GizmoTransform *)0x0) {
    pVVar3 = GizmoTransform::GizmoTransform_GetAxis3D
                       (&VStack_4,this_00,(this->fields)._mappedAxisDesc,(MethodInfo *)0x0);
    fVar1 = pVVar3->y;
    fVar2 = pVVar3->z;
    __return_storage_ptr__->x = pVVar3->x;
    __return_storage_ptr__->y = fVar1;
    __return_storage_ptr__->z = fVar2;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar3 = (Vector3 *)(*pcVar5)();
  return pVVar3;
}


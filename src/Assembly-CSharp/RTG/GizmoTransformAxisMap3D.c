
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
    ppAVar1 = &(this->fields)._mappedAxisDesc;
    *ppAVar1 = this_00;
    func_?(ppAVar1,this_00);
    ppGVar2 = &(this->fields)._transform;
    *ppGVar2 = transform;
    func_?(ppGVar2,transform);
  }
  return;
}


/* Void SetAxis(Vector3) */

void Assembly-CSharp.dll::RTG::GizmoTransformAxisMap3D::GizmoTransformAxisMap3D_SetAxis
               (GizmoTransformAxisMap3D *this,Vector3 axis,MethodInfo *method)

{
  if ((this->fields)._transform == (GizmoTransform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                       (&VStack_2,axis,(MethodInfo *)0x0);
    fVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    (this->fields)._freeAxis.x = pVVar1->x;
    (this->fields)._freeAxis.y = fVar3;
    (this->fields)._freeAxis.z = fVar4;
    return;
  }
  GizmoTransformAxisMap3D_SetMappedAxis(this,axis,(MethodInfo *)0x0);
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
  this_00 = (this->fields)._transform;
  if (this_00 == (GizmoTransform *)0x0) {
    return;
  }
  pVVar1 = (this_00->fields)._axes3D;
  if (pVVar1 != (Vector3__Array *)0x0) {
    if (pVVar1->max_length == 0) goto code_?;
    uVar2._0_4_ = pVVar1->vector[0].x;
    uStack_3 = pVVar1->vector[0].y;
    axisDesc = (this->fields)._mappedAxisDesc;
    fVar4 = pVVar1->vector[0].z;
    if (axisDesc != (AxisDescriptor *)0x0) {
      if ((axisDesc->fields)._index == 0) {
        if (pVVar1->max_length < 2) goto code_?;
        uVar2._0_4_ = pVVar1->vector[1].x;
        uStack_3 = pVVar1->vector[1].y;
        fVar4 = pVVar1->vector[1].z;
      }
      pVVar5 = GizmoTransform::GizmoTransform_GetAxis3D
                         ((Vector3 *)&puStack_6,this_00,axisDesc,(MethodInfo *)0x0);
      perp180.z = fVar4;
      uStack_3 = (undefined4)((ulonglong)uVar2 >> 0x20);
      perp180.x = (float)(undefined4)uVar2;
      perp180.y = (float)uStack_3;
      pQVar7 = QuaternionEx::QuaternionEx_FromToRotation3D
                          (&QStack_8,*pVVar5,axis,perp180,(MethodInfo *)0x0);
      fVar4 = (this_00->fields)._rotation3D.x;
      fVar9 = (this_00->fields)._rotation3D.y;
      fVar10 = (this_00->fields)._rotation3D.z;
      fVar11 = (this_00->fields)._rotation3D.w;
      fVar12 = pQVar7->y;
      fVar13 = pQVar7->z;
      fVar14 = pQVar7->w;
      value.y = (fVar14 * fVar9 + fVar12 * fVar11 + fVar13 * fVar4) - pQVar7->x * fVar10;
      value.x = (pQVar7->x * fVar11 + fVar14 * fVar4 + fVar12 * fVar10) - fVar13 * fVar9;
      value.z = (fVar14 * fVar10 + fVar13 * fVar11 + pQVar7->x * fVar9) -
                fVar12 * (this_00->fields)._rotation3D.x;
      value.w = ((fVar14 * fVar11 - pQVar7->x * (this_00->fields)._rotation3D.x) - fVar12 * fVar9) -
                fVar13 * fVar10;
      GizmoTransform::GizmoTransform_set_Rotation3D(this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void Unmap() */

void Assembly-CSharp.dll::RTG::GizmoTransformAxisMap3D::GizmoTransformAxisMap3D_Unmap
               (GizmoTransformAxisMap3D *this,MethodInfo *method)

{
  ppGVar1 = &(this->fields)._transform;
  *ppGVar1 = (GizmoTransform *)0x0;
  func_?(ppGVar1);
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
  *(AxisDescriptor **)method_00 = this_00;
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
  this_00 = (this->fields)._transform;
  if (this_00 == (GizmoTransform *)0x0) {
    fVar1 = (this->fields)._freeAxis.y;
    fVar2 = (this->fields)._freeAxis.z;
    __return_storage_ptr__->x = (this->fields)._freeAxis.x;
    __return_storage_ptr__->y = fVar1;
    __return_storage_ptr__->z = fVar2;
    return __return_storage_ptr__;
  }
  pVVar3 = GizmoTransform::GizmoTransform_GetAxis3D
                     (&VStack_4,this_00,(this->fields)._mappedAxisDesc,(MethodInfo *)0x0);
  fVar1 = pVVar3->y;
  fVar2 = pVVar3->z;
  __return_storage_ptr__->x = pVVar3->x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  return __return_storage_ptr__;
}


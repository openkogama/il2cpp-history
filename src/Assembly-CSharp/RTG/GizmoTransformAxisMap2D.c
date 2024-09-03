
/* Void Map(GizmoTransform, Int32, AxisSign) */

void Assembly-CSharp.dll::RTG::GizmoTransformAxisMap2D::GizmoTransformAxisMap2D_Map
               (GizmoTransformAxisMap2D *this,GizmoTransform *transform,int32_t axisIndex,
               AxisSign__Enum axisSign,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__AxisDescriptor);
    cRam_? = '\x01';
  }
  if ((transform != (GizmoTransform *)0x0) && (axisIndex < 2)) {
    this_00 = (AxisDescriptor *)func_?(TypeInfo__RTG__AxisDescriptor);
    AxisDescriptor::AxisDescriptor__ctor(this_00,axisIndex,axisSign,(MethodInfo *)0x0);
    (this->fields)._mappedAxisDesc = this_00;
    func_?(&(this->fields)._mappedAxisDesc,this_00);
    (this->fields)._transform = transform;
    func_?(&(this->fields)._transform,transform);
  }
  return;
}


/* Void SetAxis(Vector2) */

void Assembly-CSharp.dll::RTG::GizmoTransformAxisMap2D::GizmoTransformAxisMap2D_SetAxis
               (GizmoTransformAxisMap2D *this,Vector2 axis,MethodInfo *method)

{
  if ((this->fields)._transform == (GizmoTransform *)0x0) {
    VVar1 = (Vector2)func_?(&stack0xfffffff4,0);
    (this->fields)._freeAxis = VVar1;
    return;
  }
  this_00 = (WebCompletionSource_1_T_Result_System_Object_ *)(this->fields)._mappedAxisDesc;
  this_01 = (this->fields)._transform;
  if ((this_00 == (WebCompletionSource_1_T_Result_System_Object_ *)0x0) ||
     (pVVar2 = (this_01->fields)._axes2D, pVVar2 == (Vector2__Array *)0x0)) {
    func_?();
  }
  else {
    pEVar3 = (this_00->fields)._Error_k__BackingField;
    if (pEVar3 < (ExceptionDispatchInfo *)pVVar2->max_length) {
      fVar4 = pVVar2->vector[(int)pEVar3].x;
      fVar5 = pVVar2->vector[(int)pEVar3].y;
      bVar6 = System.dll::System::Net::WebCompletionSource`1[T]+Result[System::Object]::
              WebCompletionSource_1_T_Result_System_Object__get_Success(this_00,(MethodInfo *)0x0);
      if (bVar6 != 0) {
        fVar4 = (float)((uint)fVar4 ^
                       __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
        fVar5 = (float)((uint)fVar5 ^
                       __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      }
      VVar1.y = fVar5;
      VVar1.x = fVar4;
      pQVar7 = QuaternionEx::QuaternionEx_FromToRotation2D
                         ((Quaternion *)&puStack_8,VVar1,axis,(MethodInfo *)0x0);
      fVar4 = QuaternionEx::QuaternionEx_ConvertTo2DRotation(*pQVar7,(MethodInfo *)0x0);
      if ((this_01->fields)._firingChanged2DEvent != 0) {
        return;
      }
      fVar5 = (this_01->fields)._rotation2DDegrees;
      fVar4 = fVar5 + fVar4;
      if (fVar5 == fVar4) {
        return;
      }
      GizmoTransform::GizmoTransform_ChangeRotation2D(this_01,fVar4,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void SetMappedAxis(Vector2) */

void Assembly-CSharp.dll::RTG::GizmoTransformAxisMap2D::GizmoTransformAxisMap2D_SetMappedAxis
               (GizmoTransformAxisMap2D *this,Vector2 axis,MethodInfo *method)

{
  if ((this->fields)._transform == (GizmoTransform *)0x0) {
    return;
  }
  this_00 = (WebCompletionSource_1_T_Result_System_Object_ *)(this->fields)._mappedAxisDesc;
  this_01 = (this->fields)._transform;
  if ((this_00 == (WebCompletionSource_1_T_Result_System_Object_ *)0x0) ||
     (pVVar1 = (this_01->fields)._axes2D, pVVar1 == (Vector2__Array *)0x0)) {
    func_?();
  }
  else {
    pEVar2 = (this_00->fields)._Error_k__BackingField;
    if (pEVar2 < (ExceptionDispatchInfo *)pVVar1->max_length) {
      fVar3 = pVVar1->vector[(int)pEVar2].x;
      fVar4 = pVVar1->vector[(int)pEVar2].y;
      bVar5 = System.dll::System::Net::WebCompletionSource`1[T]+Result[System::Object]::
              WebCompletionSource_1_T_Result_System_Object__get_Success(this_00,(MethodInfo *)0x0);
      if (bVar5 != 0) {
        fVar3 = (float)((uint)fVar3 ^
                       __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
        fVar4 = (float)((uint)fVar4 ^
                       __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      }
      from.y = fVar4;
      from.x = fVar3;
      pQVar6 = QuaternionEx::QuaternionEx_FromToRotation2D
                         ((Quaternion *)&stack0xffffffec,from,axis,(MethodInfo *)0x0);
      fVar3 = QuaternionEx::QuaternionEx_ConvertTo2DRotation(*pQVar6,(MethodInfo *)0x0);
      if ((this_01->fields)._firingChanged2DEvent != 0) {
        return;
      }
      fVar4 = (this_01->fields)._rotation2DDegrees;
      fVar3 = fVar4 + fVar3;
      if (fVar4 == fVar3) {
        return;
      }
      GizmoTransform::GizmoTransform_ChangeRotation2D(this_01,fVar3,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Unmap() */

void Assembly-CSharp.dll::RTG::GizmoTransformAxisMap2D::GizmoTransformAxisMap2D_Unmap
               (GizmoTransformAxisMap2D *this,MethodInfo *method)

{
  (this->fields)._transform = (GizmoTransform *)0x0;
  func_?(&(this->fields)._transform);
  return;
}


/* GizmoTransformAxisMap2D() */

void Assembly-CSharp.dll::RTG::GizmoTransformAxisMap2D::GizmoTransformAxisMap2D__ctor
               (GizmoTransformAxisMap2D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__AxisDescriptor);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector2);
    cRam_? = '\x01';
  }
  fVar1 = (TypeInfo__UnityEngine__Vector2->static_fields->rightVector).y;
  (this->fields)._freeAxis.x = (TypeInfo__UnityEngine__Vector2->static_fields->rightVector).x;
  (this->fields)._freeAxis.y = fVar1;
  this_00 = (AxisDescriptor *)func_?(TypeInfo__RTG__AxisDescriptor);
  AxisDescriptor::AxisDescriptor__ctor(this_00,0,AxisSign__Enum_Positive,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)&(this->fields)._mappedAxisDesc;
  (this->fields)._mappedAxisDesc = this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* Vector2 get_Axis() */

Vector2 Assembly-CSharp.dll::RTG::GizmoTransformAxisMap2D::GizmoTransformAxisMap2D_get_Axis
                  (GizmoTransformAxisMap2D *this,MethodInfo *method)

{
  if ((this->fields)._transform == (GizmoTransform *)0x0) {
    fStack_1 = (this->fields)._freeAxis.x;
    fStack_2 = (this->fields)._freeAxis.y;
code_?:
    VVar3.y = fStack_2;
    VVar3.x = fStack_1;
    return VVar3;
  }
  pGVar4 = (this->fields)._transform;
  if (((pGVar4 == (GizmoTransform *)0x0) ||
      (this_00 = (WebCompletionSource_1_T_Result_System_Object_ *)(this->fields)._mappedAxisDesc,
      this_00 == (WebCompletionSource_1_T_Result_System_Object_ *)0x0)) ||
     (pVVar5 = (pGVar4->fields)._axes2D, pVVar5 == (Vector2__Array *)0x0)) {
    func_?();
  }
  else {
    pEVar6 = (this_00->fields)._Error_k__BackingField;
    if (pEVar6 < (ExceptionDispatchInfo *)pVVar5->max_length) {
      fStack_1 = pVVar5->vector[(int)pEVar6].x;
      fStack_2 = pVVar5->vector[(int)pEVar6].y;
      bVar7 = System.dll::System::Net::WebCompletionSource`1[T]+Result[System::Object]::
              WebCompletionSource_1_T_Result_System_Object__get_Success(this_00,(MethodInfo *)0x0);
      if (bVar7 != 0) {
        VVar8.y = (float)((uint)fStack_2 ^
                         __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
        VVar8.x = (float)((uint)fStack_1 ^
                         __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
        return VVar8;
      }
      goto code_?;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  VVar8 = (Vector2)(*pcVar9)();
  return VVar8;
}


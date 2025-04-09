
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
    ppAVar1 = &(this->fields)._mappedAxisDesc;
    *ppAVar1 = this_00;
    func_?(ppAVar1,this_00);
    ppGVar2 = &(this->fields)._transform;
    *ppGVar2 = transform;
    func_?(ppGVar2,transform);
  }
  return;
}


/* Void SetAxis(Vector2) */

void Assembly-CSharp.dll::RTG::GizmoTransformAxisMap2D::GizmoTransformAxisMap2D_SetAxis
               (GizmoTransformAxisMap2D *this,Vector2 axis,MethodInfo *method)

{
  this_00 = (this->fields)._transform;
  if (this_00 == (GizmoTransform *)0x0) {
    VVar1 = (Vector2)func_?(&stack0xfffffff0,0);
    (this->fields)._freeAxis = VVar1;
    return;
  }
  this_01 = (WebCompletionSource_1_T_Result_System_Object_ *)(this->fields)._mappedAxisDesc;
  if ((this_01 == (WebCompletionSource_1_T_Result_System_Object_ *)0x0) ||
     (pVVar2 = (this_00->fields)._axes2D, pVVar2 == (Vector2__Array *)0x0)) {
    func_?();
  }
  else {
    pEVar3 = (this_01->fields)._Error_k__BackingField;
    if (pEVar3 < (ExceptionDispatchInfo *)pVVar2->max_length) {
      fVar4 = pVVar2->vector[(int)pEVar3].x;
      fVar5 = pVVar2->vector[(int)pEVar3].y;
      fVar6 = fVar4;
      fVar7 = fVar5;
      bVar8 = System.dll::System::Net::WebCompletionSource`1[T]+Result[System::Object]::
              WebCompletionSource_1_T_Result_System_Object__get_Success(this_01,(MethodInfo *)0x0);
      if (bVar8 != 0) {
        fVar6 = (float)((uint)fVar4 ^
                       __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
        fVar5 = (float)((uint)fVar7 ^
                       __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      }
      VVar1.y = fVar5;
      VVar1.x = fVar6;
      pQVar9 = QuaternionEx::QuaternionEx_FromToRotation2D
                         ((Quaternion *)&puStack_10,VVar1,axis,(MethodInfo *)0x0);
      fVar4 = QuaternionEx::QuaternionEx_ConvertTo2DRotation(*pQVar9,(MethodInfo *)0x0);
      if ((this_00->fields)._firingChanged2DEvent != 0) {
        return;
      }
      fVar5 = (this_00->fields)._rotation2DDegrees;
      fVar4 = fVar5 + fVar4;
      if (fVar5 == fVar4) {
        return;
      }
      GizmoTransform::GizmoTransform_ChangeRotation2D(this_00,fVar4,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void SetFreeAxis(Vector2) */

void Assembly-CSharp.dll::RTG::GizmoTransformAxisMap2D::GizmoTransformAxisMap2D_SetFreeAxis
               (GizmoTransformAxisMap2D *this,Vector2 axis,MethodInfo *method)

{
  VVar1 = (Vector2)func_?(&axis,0);
  (this->fields)._freeAxis = VVar1;
  return;
}


/* Void SetMappedAxis(Vector2) */

void Assembly-CSharp.dll::RTG::GizmoTransformAxisMap2D::GizmoTransformAxisMap2D_SetMappedAxis
               (GizmoTransformAxisMap2D *this,Vector2 axis,MethodInfo *method)

{
  this_00 = (this->fields)._transform;
  if (this_00 == (GizmoTransform *)0x0) {
    return;
  }
  this_01 = (WebCompletionSource_1_T_Result_System_Object_ *)(this->fields)._mappedAxisDesc;
  if ((this_01 == (WebCompletionSource_1_T_Result_System_Object_ *)0x0) ||
     (pVVar1 = (this_00->fields)._axes2D, pVVar1 == (Vector2__Array *)0x0)) {
    func_?();
  }
  else {
    pEVar2 = (this_01->fields)._Error_k__BackingField;
    if (pEVar2 < (ExceptionDispatchInfo *)pVVar1->max_length) {
      fVar3 = pVVar1->vector[(int)pEVar2].x;
      fVar4 = pVVar1->vector[(int)pEVar2].y;
      fVar5 = fVar3;
      fVar6 = fVar4;
      bVar7 = System.dll::System::Net::WebCompletionSource`1[T]+Result[System::Object]::
              WebCompletionSource_1_T_Result_System_Object__get_Success(this_01,(MethodInfo *)0x0);
      if (bVar7 != 0) {
        fVar5 = (float)((uint)fVar3 ^
                       __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
        fVar4 = (float)((uint)fVar6 ^
                       __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      }
      from.y = fVar4;
      from.x = fVar5;
      pQVar8 = QuaternionEx::QuaternionEx_FromToRotation2D
                         ((Quaternion *)&stack0xffffffe8,from,axis,(MethodInfo *)0x0);
      fVar3 = QuaternionEx::QuaternionEx_ConvertTo2DRotation(*pQVar8,(MethodInfo *)0x0);
      if ((this_00->fields)._firingChanged2DEvent != 0) {
        return;
      }
      fVar4 = (this_00->fields)._rotation2DDegrees;
      fVar3 = fVar4 + fVar3;
      if (fVar4 == fVar3) {
        return;
      }
      GizmoTransform::GizmoTransform_ChangeRotation2D(this_00,fVar3,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Unmap() */

void Assembly-CSharp.dll::RTG::GizmoTransformAxisMap2D::GizmoTransformAxisMap2D_Unmap
               (GizmoTransformAxisMap2D *this,MethodInfo *method)

{
  ppGVar1 = &(this->fields)._transform;
  *ppGVar1 = (GizmoTransform *)0x0;
  func_?(ppGVar1);
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
  *(AxisDescriptor **)method_00 = this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* Vector2 get_Axis() */

Vector2 Assembly-CSharp.dll::RTG::GizmoTransformAxisMap2D::GizmoTransformAxisMap2D_get_Axis
                  (GizmoTransformAxisMap2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._transform;
  if (pGVar1 == (GizmoTransform *)0x0) {
    fStack_2 = (this->fields)._freeAxis.x;
    fStack_3 = (this->fields)._freeAxis.y;
code_?:
    VVar4.y = fStack_3;
    VVar4.x = fStack_2;
    return VVar4;
  }
  this_00 = (WebCompletionSource_1_T_Result_System_Object_ *)(this->fields)._mappedAxisDesc;
  if ((this_00 == (WebCompletionSource_1_T_Result_System_Object_ *)0x0) ||
     (pVVar5 = (pGVar1->fields)._axes2D, pVVar5 == (Vector2__Array *)0x0)) {
    func_?();
  }
  else {
    pEVar6 = (this_00->fields)._Error_k__BackingField;
    if (pEVar6 < (ExceptionDispatchInfo *)pVVar5->max_length) {
      fStack_2 = pVVar5->vector[(int)pEVar6].x;
      fStack_3 = pVVar5->vector[(int)pEVar6].y;
      bVar7 = System.dll::System::Net::WebCompletionSource`1[T]+Result[System::Object]::
              WebCompletionSource_1_T_Result_System_Object__get_Success(this_00,(MethodInfo *)0x0);
      if (bVar7 != 0) {
        VVar8.y = (float)((uint)fStack_3 ^
                         __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
        VVar8.x = (float)((uint)fStack_2 ^
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


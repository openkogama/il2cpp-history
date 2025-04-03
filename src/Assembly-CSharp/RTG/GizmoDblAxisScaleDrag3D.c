
/* Plane CalculateDragPlane() */

Plane * Assembly-CSharp.dll::RTG::GizmoDblAxisScaleDrag3D::
        GizmoDblAxisScaleDrag3D_CalculateDragPlane
                  (Plane *__return_storage_ptr__,GizmoDblAxisScaleDrag3D *this,MethodInfo *method)

{
  uVar1 = (this->fields)._workData.Axis0.x;
  uVar2 = (this->fields)._workData.Axis0.y;
  fVar3 = (this->fields)._workData.Axis0.z;
  VStack_4.x = (this->fields)._workData.Axis1.x;
  VStack_4.y = (this->fields)._workData.Axis1.y;
  VStack_4.z = (this->fields)._workData.Axis1.z;
  value.y = VStack_4.x * fVar3 - (float)uVar1 * VStack_4.z;
  value.x = VStack_4.z * (float)uVar2 - VStack_4.y * fVar3;
  value.z = (float)uVar1 * VStack_4.y - VStack_4.x * (float)uVar2;
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     (&VStack_4,value,(MethodInfo *)0x0);
  method_00 = (this->fields)._workData.DragOrigin.x;
  uVar6 = (this->fields)._workData.DragOrigin.y;
  fVar3 = (this->fields)._workData.DragOrigin.z;
  (__return_storage_ptr__->m_Normal).x = 0.0;
  (__return_storage_ptr__->m_Normal).y = 0.0;
  (__return_storage_ptr__->m_Normal).z = 0.0;
  __return_storage_ptr__->m_Distance = 0.0;
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)&stack0xffffffd8,*pVVar5,(MethodInfo *)method_00);
  uVar7 = pVVar5->x;
  uVar8 = pVVar5->y;
  fVar9 = pVVar5->z;
  (__return_storage_ptr__->m_Normal).x = (float)uVar7;
  (__return_storage_ptr__->m_Normal).y = (float)uVar8;
  (__return_storage_ptr__->m_Normal).z = fVar9;
  __return_storage_ptr__->m_Distance =
       (float)((uint)((float)uVar6 * (float)uVar8 + (float)method_00 * (float)uVar7 + fVar3 * fVar9)
              ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  return __return_storage_ptr__;
}


/* Void CalculateDragValues() */

void Assembly-CSharp.dll::RTG::GizmoDblAxisScaleDrag3D::GizmoDblAxisScaleDrag3D_CalculateDragValues
               (GizmoDblAxisScaleDrag3D *this,MethodInfo *method)

{
  pGVar1 = this;
  pIVar2 = (this->fields)._._planeDragSession;
  if (pIVar2 == (InputDevicePlaneDragSession3D *)0x0) {
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pGVar4 = (GizmoDblAxisScaleDrag3D *)
            Vector3Ex::Vector3Ex_Dot
                      ((pIVar2->fields)._dragDelta,(this->fields)._scaleDragAxis,(MethodInfo *)0x0);
  if ((this->fields)._._isSnapEnabled == 0) {
    fVar5 = (this->fields)._scale0;
    fVar6 = (float)pGVar4 * (this->fields)._._sensitivity + fVar5;
    (this->fields)._accumSnapDrag0 = 0.0;
    (this->fields)._accumSnapDrag1 = 0.0;
    (this->fields)._scale0 = fVar6;
    (this->fields)._totalScale0 = fVar6;
    fVar6 = fVar6 / fVar5;
    (this->fields)._relativeScale0 = fVar6;
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
              (&(this->fields)._._._relativeDragScale,(this->fields)._workData.AxisIndex0,fVar6,
               (MethodInfo *)0x0);
    fVar5 = (this->fields)._scale1;
    method_00 = (MethodInfo *)0x0;
    fVar6 = (float)pGVar4 * (this->fields)._._sensitivity + fVar5;
    (this->fields)._scale1 = fVar6;
    (this->fields)._totalScale1 = fVar6;
    method = (MethodInfo *)(fVar6 / fVar5);
    (this->fields)._relativeScale1 = (float)method;
    this = (GizmoDblAxisScaleDrag3D *)(this->fields)._workData.AxisIndex1;
  }
  else {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar7 = &(this->fields)._._._relativeDragScale;
    pfVar8 = &(this->fields)._accumSnapDrag0;
    pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar6 = (pVVar9->oneVector).y;
    fVar5 = (pVVar9->oneVector).z;
    pVVar7->x = (pVVar9->oneVector).x;
    pVVar7->y = fVar6;
    method = (MethodInfo *)((float)pGVar4 + *pfVar8);
    (this->fields)._._._relativeDragScale.z = fVar5;
    *pfVar8 = (float)method;
    bVar10 = SnapMath::SnapMath_CanExtractSnap((float)method,(float)method,(MethodInfo *)0x0);
    if (bVar10 != 0) {
      fVar5 = (this->fields)._scale0;
      fVar6 = SnapMath::SnapMath_ExtractSnap((float)method,pfVar8,(MethodInfo *)0x0);
      fVar6 = fVar6 + fVar5;
      (this->fields)._scale0 = fVar6;
      (this->fields)._totalScale0 = fVar6;
      (this->fields)._relativeScale0 = fVar6 / fVar5;
      pGVar11 = &this->fields;
      this = (GizmoDblAxisScaleDrag3D *)&UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                (pVVar7,(pGVar11->_workData).AxisIndex0,fVar6 / fVar5,(MethodInfo *)0x0);
      pGVar4 = this;
    }
    this = pGVar4;
    pfVar8 = &(pGVar1->fields)._accumSnapDrag1;
    method_00 = (MethodInfo *)((float)this + *pfVar8);
    *pfVar8 = (float)method_00;
    snapStep = method;
    bVar10 = SnapMath::SnapMath_CanExtractSnap((float)method,(float)method_00,(MethodInfo *)0x0);
    if (bVar10 == 0) goto code_?;
    this = (GizmoDblAxisScaleDrag3D *)(pGVar1->fields)._scale1;
    fVar5 = SnapMath::SnapMath_ExtractSnap((float)snapStep,pfVar8,(MethodInfo *)0x0);
    fVar5 = fVar5 + (float)this;
    (pGVar1->fields)._scale1 = fVar5;
    (pGVar1->fields)._totalScale1 = fVar5;
    (pGVar1->fields)._relativeScale1 = fVar5 / (float)this;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
            (&(pGVar1->fields)._._._relativeDragScale,(int32_t)this,(float)method,method_00);
code_?:
  pVVar7 = &(pGVar1->fields)._._._totalDragScale;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
            (pVVar7,(pGVar1->fields)._workData.AxisIndex0,(pGVar1->fields)._totalScale0,
             (MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
            (pVVar7,(pGVar1->fields)._workData.AxisIndex1,(pGVar1->fields)._totalScale1,
             (MethodInfo *)0x0);
  return;
}


/* Void OnSessionEnd() */

void Assembly-CSharp.dll::RTG::GizmoDblAxisScaleDrag3D::GizmoDblAxisScaleDrag3D_OnSessionEnd
               (GizmoDblAxisScaleDrag3D *this,MethodInfo *method)

{
  (this->fields)._accumSnapDrag0 = 0.0;
  (this->fields)._accumSnapDrag1 = 0.0;
  (this->fields)._relativeScale0 = 1.0;
  (this->fields)._relativeScale1 = 1.0;
  (this->fields)._totalScale0 = 1.0;
  (this->fields)._totalScale1 = 1.0;
  return;
}


/* Void SetWorkData(GizmoDblAxisScaleDrag3D+WorkData) */

void Assembly-CSharp.dll::RTG::GizmoDblAxisScaleDrag3D::GizmoDblAxisScaleDrag3D_SetWorkData
               (GizmoDblAxisScaleDrag3D *this,GizmoDblAxisScaleDrag3D_WorkData workData,
               MethodInfo *method)

{
  cVar1 = (*(code *)(this->klass->vtable).get_IsActive_1.method)
                    (this,(this->klass->vtable).get_DragChannel_1.methodPtr);
  if (cVar1 == '\0') {
    (this->fields)._scale0 = 1.0;
    (this->fields)._scale1 = 1.0;
    (this->fields)._workData.AxisIndex0 = workData.AxisIndex0;
    (this->fields)._workData.AxisIndex1 = workData.AxisIndex1;
    (this->fields)._workData.DragOrigin.x = workData.DragOrigin.x;
    (this->fields)._workData.DragOrigin.y = workData.DragOrigin.y;
    (this->fields)._workData.DragOrigin.z = workData.DragOrigin.z;
    (this->fields)._workData.Axis0.x = workData.Axis0.x;
    (this->fields)._workData.Axis0.y = workData.Axis0.y;
    (this->fields)._workData.Axis0.z = workData.Axis0.z;
    (this->fields)._workData.Axis1.x = workData.Axis1.x;
    (this->fields)._workData.Axis1.y = workData.Axis1.y;
    (this->fields)._workData.Axis1.z = workData.Axis1.z;
    (this->fields)._workData.SnapStep = workData.SnapStep;
    VStack_2.z = (workData.Axis0.z + workData.Axis1.z) * _UNK_?;
    value.y = (workData.Axis0.y + workData.Axis1.y) * _UNK_?;
    value.x = (workData.Axis0.x + workData.Axis1.x) * _UNK_?;
    value.z = VStack_2.z;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                       (&VStack_2,value,(MethodInfo *)0x0);
    fVar4 = pVVar3->y;
    fVar5 = pVVar3->z;
    (this->fields)._scaleDragAxis.x = pVVar3->x;
    (this->fields)._scaleDragAxis.y = fVar4;
    (this->fields)._scaleDragAxis.z = fVar5;
  }
  return;
}


/* GizmoDblAxisScaleDrag3D() */

void Assembly-CSharp.dll::RTG::GizmoDblAxisScaleDrag3D::GizmoDblAxisScaleDrag3D__ctor
               (GizmoDblAxisScaleDrag3D *this,MethodInfo *method)

{
  (this->fields)._relativeScale0 = 1.0;
  (this->fields)._relativeScale1 = 1.0;
  (this->fields)._totalScale0 = 1.0;
  (this->fields)._totalScale1 = 1.0;
  (this->fields)._._sensitivity = 1.0;
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<RTG::GizmoTransform>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_RTG_GizmoTransform_ *)
            func_?(TypeInfo__System__Collections__Generic__List<RTG::GizmoTransform>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__List__);
  (this->fields)._._._targetTransforms = this_00;
  func_?(&this->fields,this_00);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  pQVar1 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar2 = (pQVar1->identityQuaternion).y;
  fVar3 = (pQVar1->identityQuaternion).z;
  fVar4 = (pQVar1->identityQuaternion).w;
  (this->fields)._._._totalDragRotation.x = (pQVar1->identityQuaternion).x;
  (this->fields)._._._totalDragRotation.y = fVar2;
  (this->fields)._._._totalDragRotation.z = fVar3;
  (this->fields)._._._totalDragRotation.w = fVar4;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar5->oneVector).y;
  fVar2 = (pVVar5->oneVector).z;
  (this->fields)._._._totalDragScale.x = (pVVar5->oneVector).x;
  (this->fields)._._._totalDragScale.y = fVar3;
  (this->fields)._._._totalDragScale.z = fVar2;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  pQVar1 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar2 = (pQVar1->identityQuaternion).y;
  fVar3 = (pQVar1->identityQuaternion).z;
  fVar4 = (pQVar1->identityQuaternion).w;
  (this->fields)._._._relativeDragRotation.x = (pQVar1->identityQuaternion).x;
  (this->fields)._._._relativeDragRotation.y = fVar2;
  (this->fields)._._._relativeDragRotation.z = fVar3;
  (this->fields)._._._relativeDragRotation.w = fVar4;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar5->oneVector).y;
  fVar2 = (pVVar5->oneVector).z;
  (this->fields)._._._relativeDragScale.x = (pVVar5->oneVector).x;
  (this->fields)._._._relativeDragScale.y = fVar3;
  (this->fields)._._._relativeDragScale.z = fVar2;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EBP);
  return;
}


/* Single get_RelativeScale0() */

float Assembly-CSharp.dll::RTG::GizmoDblAxisScaleDrag3D::GizmoDblAxisScaleDrag3D_get_RelativeScale0
                (GizmoDblAxisScaleDrag3D *this,MethodInfo *method)

{
  return (this->fields)._relativeScale0;
}


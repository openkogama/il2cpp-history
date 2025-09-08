
/* Plane CalculateDragPlane() */

Plane * Assembly-CSharp.dll::RTG::GizmoUniformScaleDrag3D::
        GizmoUniformScaleDrag3D_CalculateDragPlane
                  (Plane *__return_storage_ptr__,GizmoUniformScaleDrag3D *this,MethodInfo *method)

{
  uVar1 = (this->fields)._workData.CameraRight.x;
  uVar2 = (this->fields)._workData.CameraRight.y;
  fVar3 = (this->fields)._workData.CameraRight.z;
  (this->fields)._planeAxis0.x = (float)uVar1;
  (this->fields)._planeAxis0.y = (float)uVar2;
  (this->fields)._planeAxis0.z = fVar3;
  VStack_4.x = (this->fields)._workData.CameraUp.x;
  VStack_4.y = (this->fields)._workData.CameraUp.y;
  VStack_4.z = (this->fields)._workData.CameraUp.z;
  (this->fields)._planeAxis1.x = VStack_4.x;
  (this->fields)._planeAxis1.y = VStack_4.y;
  (this->fields)._planeAxis1.z = VStack_4.z;
  value.y = VStack_4.x * fVar3 - (float)uVar1 * VStack_4.z;
  value.x = (float)uVar2 * VStack_4.z - fVar3 * VStack_4.y;
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

void Assembly-CSharp.dll::RTG::GizmoUniformScaleDrag3D::GizmoUniformScaleDrag3D_CalculateDragValues
               (GizmoUniformScaleDrag3D *this,MethodInfo *method)

{
  if ((this->fields)._._isSnapEnabled == 0) {
    fVar1 = (this->fields)._scale;
    pIVar2 = (this->fields)._._planeDragSession;
    (this->fields)._accumSnapDrag = 0.0;
    if (pIVar2 == (InputDevicePlaneDragSession3D *)0x0) {
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    fVar4 = fVar1;
    fVar5 = Vector3Ex::Vector3Ex_Dot
                      ((pIVar2->fields)._dragDelta,(this->fields)._scaleDragAxis,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)0x0;
    fVar4 = fVar5 * (this->fields)._._sensitivity + fVar4;
    (this->fields)._scale = fVar4;
    fVar1 = fVar4 / fVar1;
    (this->fields)._totalScale = fVar4;
    (this->fields)._relativeScale = fVar1;
  }
  else {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pIVar2 = (this->fields)._._planeDragSession;
    pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar1 = (pVVar6->oneVector).y;
    fVar4 = (pVVar6->oneVector).z;
    (this->fields)._._._relativeDragScale.x = (pVVar6->oneVector).x;
    (this->fields)._._._relativeDragScale.y = fVar1;
    fVar1 = (this->fields)._accumSnapDrag;
    (this->fields)._._._relativeDragScale.z = fVar4;
    if (pIVar2 == (InputDevicePlaneDragSession3D *)0x0) goto code_?;
    fVar4 = Vector3Ex::Vector3Ex_Dot
                      ((pIVar2->fields)._dragDelta,(this->fields)._scaleDragAxis,(MethodInfo *)0x0);
    fVar4 = fVar4 + fVar1;
    (this->fields)._accumSnapDrag = fVar4;
    VStack_7.z = (float)&UNK_?;
    bVar8 = SnapMath::SnapMath_CanExtractSnap
                      ((this->fields)._workData.SnapStep,fVar4,(MethodInfo *)0x0);
    if (bVar8 == 0) goto code_?;
    method_00 = (MethodInfo *)&UNK_?;
    fVar4 = SnapMath::SnapMath_ExtractSnap
                      ((this->fields)._workData.SnapStep,&(this->fields)._accumSnapDrag,
                       (MethodInfo *)0x0);
    fVar1 = (this->fields)._scale;
    fVar4 = fVar4 + fVar1;
    (this->fields)._scale = fVar4;
    fVar1 = fVar4 / fVar1;
    (this->fields)._totalScale = fVar4;
    (this->fields)._relativeScale = fVar1;
  }
  VStack_7.z = (float)&UNK_?;
  pVVar9 = Vector3Ex::Vector3Ex_FromValue(&VStack_7,fVar1,method_00);
  fVar4 = pVVar9->y;
  fVar1 = pVVar9->z;
  (this->fields)._._._relativeDragScale.x = pVVar9->x;
  (this->fields)._._._relativeDragScale.y = fVar4;
  (this->fields)._._._relativeDragScale.z = fVar1;
code_?:
  pVVar9 = Vector3Ex::Vector3Ex_FromValue(&VStack_7,(this->fields)._totalScale,(MethodInfo *)0x0);
  fVar4 = pVVar9->y;
  fVar1 = pVVar9->z;
  (this->fields)._._._totalDragScale.x = pVVar9->x;
  (this->fields)._._._totalDragScale.y = fVar4;
  (this->fields)._._._totalDragScale.z = fVar1;
  return;
}


/* Void OnSessionEnd() */

void Assembly-CSharp.dll::RTG::GizmoUniformScaleDrag3D::GizmoUniformScaleDrag3D_OnSessionEnd
               (GizmoUniformScaleDrag3D *this,MethodInfo *method)

{
  (this->fields)._relativeScale = 1.0;
  (this->fields)._totalScale = 1.0;
  return;
}


/* Void SetWorkData(GizmoUniformScaleDrag3D+WorkData) */

void Assembly-CSharp.dll::RTG::GizmoUniformScaleDrag3D::GizmoUniformScaleDrag3D_SetWorkData
               (GizmoUniformScaleDrag3D *this,GizmoUniformScaleDrag3D_WorkData workData,
               MethodInfo *method)

{
  cVar1 = (*(code *)(this->klass->vtable).get_IsActive_1.method)
                    (this,(this->klass->vtable).get_DragChannel_1.methodPtr);
  if (cVar1 == '\0') {
    (this->fields)._scale = 1.0;
    (this->fields)._workData.CameraRight.x = workData.CameraRight.x;
    (this->fields)._workData.CameraRight.y = workData.CameraRight.y;
    (this->fields)._workData.CameraRight.z = workData.CameraRight.z;
    (this->fields)._workData.CameraUp.x = workData.CameraUp.x;
    (this->fields)._workData.CameraUp.y = workData.CameraUp.y;
    (this->fields)._workData.CameraUp.z = workData.CameraUp.z;
    (this->fields)._workData.DragOrigin.x = workData.DragOrigin.x;
    (this->fields)._workData.DragOrigin.y = workData.DragOrigin.y;
    *(undefined8 *)&(this->fields)._workData.DragOrigin.z = workData._32_8_;
    VStack_2.z = (workData.CameraRight.z + workData.CameraUp.z) * _UNK_?;
    value.y = (workData.CameraRight.y + workData.CameraUp.y) * _UNK_?;
    value.x = (workData.CameraRight.x + workData.CameraUp.x) * _UNK_?;
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


/* GizmoUniformScaleDrag3D() */

void Assembly-CSharp.dll::RTG::GizmoUniformScaleDrag3D::GizmoUniformScaleDrag3D__ctor
               (GizmoUniformScaleDrag3D *this,MethodInfo *method)

{
  (this->fields)._relativeScale = 1.0;
  (this->fields)._totalScale = 1.0;
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


/* Single get_TotalScale() */

float Assembly-CSharp.dll::RTG::GizmoUniformScaleDrag3D::GizmoUniformScaleDrag3D_get_TotalScale
                (GizmoUniformScaleDrag3D *this,MethodInfo *method)

{
  return (this->fields)._totalScale;
}


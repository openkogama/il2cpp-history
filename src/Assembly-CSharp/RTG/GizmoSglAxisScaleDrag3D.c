
/* Plane CalculateDragPlane() */

Plane * Assembly-CSharp.dll::RTG::GizmoSglAxisScaleDrag3D::
        GizmoSglAxisScaleDrag3D_CalculateDragPlane
                  (Plane *__return_storage_ptr__,GizmoSglAxisScaleDrag3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
    cRam_? = '\x01';
  }
  PStack_1.m_Normal.z = (this->fields)._workData.DragOrigin.x;
  PStack_1.m_Distance = (this->fields)._workData.DragOrigin.y;
  fVar2 = (this->fields)._workData.DragOrigin.z;
  fVar3 = (this->fields)._workData.Axis.z;
  uStack_4._0_4_ = (this->fields)._workData.Axis.x;
  uStack_4._4_4_ = (this->fields)._workData.Axis.y;
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
  }
  pOVar5 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                     (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
  if (pOVar5 != (Object *)0x0) {
    axisOrigin.z = fVar2;
    axisOrigin.x = PStack_1.m_Normal.z;
    axisOrigin.y = PStack_1.m_Distance;
    axis.z = fVar3;
    axis.x = (float)(undefined4)uStack_4;
    axis.y = (float)uStack_4._4_4_;
    pPVar6 = PlaneEx::PlaneEx_GetCameraFacingAxisSlicePlane
                       (&PStack_1,axisOrigin,axis,(Camera *)pOVar5[4].monitor,(MethodInfo *)0x0);
    fVar2 = (pPVar6->m_Normal).y;
    fVar3 = (pPVar6->m_Normal).z;
    fVar7 = pPVar6->m_Distance;
    (__return_storage_ptr__->m_Normal).x = (pPVar6->m_Normal).x;
    (__return_storage_ptr__->m_Normal).y = fVar2;
    (__return_storage_ptr__->m_Normal).z = fVar3;
    __return_storage_ptr__->m_Distance = fVar7;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pPVar6 = (Plane *)(*pcVar8)();
  return pPVar6;
}


/* Void CalculateDragValues() */

void Assembly-CSharp.dll::RTG::GizmoSglAxisScaleDrag3D::GizmoSglAxisScaleDrag3D_CalculateDragValues
               (GizmoSglAxisScaleDrag3D *this,MethodInfo *method)

{
  pGVar1 = this;
  pIVar2 = (this->fields)._._planeDragSession;
  if (pIVar2 == (InputDevicePlaneDragSession3D *)0x0) {
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pGVar4 = (GizmoSglAxisScaleDrag3D *)
           Vector3Ex::Vector3Ex_Dot
                     ((pIVar2->fields)._dragDelta,(this->fields)._workData.Axis,(MethodInfo *)0x0);
  if ((this->fields)._._isSnapEnabled == 0) {
    fVar5 = (this->fields)._._sensitivity;
    (this->fields)._accumSnapDrag = 0.0;
    fVar6 = (this->fields)._scale;
    method = (MethodInfo *)0x0;
    fVar5 = (float)pGVar4 * fVar5 + fVar6;
    (this->fields)._scale = fVar5;
    pGVar4 = (GizmoSglAxisScaleDrag3D *)(fVar5 / fVar6);
    (this->fields)._totalScale = fVar5 / (this->fields)._workData.EntityScale;
    (this->fields)._relativeScale = (float)pGVar4;
    index = (undefined *)(this->fields)._workData.AxisIndex;
    this = pGVar4;
  }
  else {
    this = pGVar4;
    if (cRam_? == '\0') {
      this = (GizmoSglAxisScaleDrag3D *)&UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    accumulated = &(pGVar1->fields)._accumSnapDrag;
    method = (MethodInfo *)((float)this + *accumulated);
    pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar6 = (pVVar7->oneVector).y;
    fVar5 = (pVVar7->oneVector).z;
    (pGVar1->fields)._._._relativeDragScale.x = (pVVar7->oneVector).x;
    (pGVar1->fields)._._._relativeDragScale.y = fVar6;
    (pGVar1->fields)._._._relativeDragScale.z = fVar5;
    *accumulated = (float)method;
    index = &UNK_?;
    bVar8 = SnapMath::SnapMath_CanExtractSnap
                      ((pGVar1->fields)._workData.SnapStep,(float)method,(MethodInfo *)0x0);
    if (bVar8 == 0) goto code_?;
    this = (GizmoSglAxisScaleDrag3D *)
           SnapMath::SnapMath_ExtractSnap
                     ((pGVar1->fields)._workData.SnapStep,accumulated,(MethodInfo *)0x0);
    fVar5 = (pGVar1->fields)._scale;
    fVar6 = fVar5 + (float)this;
    (pGVar1->fields)._scale = fVar6;
    (pGVar1->fields)._totalScale = fVar6 / (pGVar1->fields)._workData.EntityScale;
    (pGVar1->fields)._relativeScale = fVar6 / fVar5;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
            (&(pGVar1->fields)._._._relativeDragScale,(int32_t)index,(float)this,method);
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
            (&(pGVar1->fields)._._._totalDragScale,(pGVar1->fields)._workData.AxisIndex,
             (pGVar1->fields)._totalScale,(MethodInfo *)0x0);
  return;
}


/* Void OnSessionEnd() */

void Assembly-CSharp.dll::RTG::GizmoSglAxisScaleDrag3D::GizmoSglAxisScaleDrag3D_OnSessionEnd
               (GizmoSglAxisScaleDrag3D *this,MethodInfo *method)

{
  (this->fields)._accumSnapDrag = 0.0;
  (this->fields)._relativeScale = 1.0;
  (this->fields)._totalScale = 1.0;
  (this->fields)._scale = 1.0;
  return;
}


/* Void SetWorkData(GizmoSglAxisScaleDrag3D+WorkData) */

void Assembly-CSharp.dll::RTG::GizmoSglAxisScaleDrag3D::GizmoSglAxisScaleDrag3D_SetWorkData
               (GizmoSglAxisScaleDrag3D *this,GizmoSglAxisScaleDrag3D_WorkData workData,
               MethodInfo *method)

{
  cVar1 = (*(code *)(this->klass->vtable).get_IsActive_1.method)
                    (this,(this->klass->vtable).get_DragChannel_1.methodPtr);
  if (cVar1 == '\0') {
    (this->fields)._scale = workData.EntityScale;
    (this->fields)._workData.AxisIndex = workData.AxisIndex;
    (this->fields)._workData.DragOrigin.x = workData.DragOrigin.x;
    (this->fields)._workData.DragOrigin.y = workData.DragOrigin.y;
    (this->fields)._workData.DragOrigin.z = workData.DragOrigin.z;
    (this->fields)._workData.Axis.x = workData.Axis.x;
    (this->fields)._workData.Axis.y = workData.Axis.y;
    (this->fields)._workData.Axis.z = workData.Axis.z;
    (this->fields)._workData.SnapStep = workData.SnapStep;
    (this->fields)._workData.EntityScale = workData.EntityScale;
  }
  return;
}


/* GizmoSglAxisScaleDrag3D() */

void Assembly-CSharp.dll::RTG::GizmoSglAxisScaleDrag3D::GizmoSglAxisScaleDrag3D__ctor
               (GizmoSglAxisScaleDrag3D *this,MethodInfo *method)

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


/* Single get_RelativeScale() */

float Assembly-CSharp.dll::RTG::GizmoSglAxisScaleDrag3D::GizmoSglAxisScaleDrag3D_get_RelativeScale
                (GizmoSglAxisScaleDrag3D *this,MethodInfo *method)

{
  return (this->fields)._relativeScale;
}


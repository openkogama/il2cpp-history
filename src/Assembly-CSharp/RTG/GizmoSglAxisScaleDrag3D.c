
/* Plane CalculateDragPlane() */

Plane * Assembly-CSharp.dll::RTG::GizmoSglAxisScaleDrag3D::
        GizmoSglAxisScaleDrag3D_CalculateDragPlane
                  (Plane *__return_storage_ptr__,GizmoSglAxisScaleDrag3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_4_ = (this->fields)._workData.DragOrigin.x;
  uVar1._4_4_ = (this->fields)._workData.DragOrigin.y;
  fVar2 = (this->fields)._workData.DragOrigin.z;
  uVar3._0_4_ = (this->fields)._workData.Axis.x;
  uVar3._4_4_ = (this->fields)._workData.Axis.y;
  fVar4 = (this->fields)._workData.Axis.z;
  if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar5 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                     (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
  if (pOVar5 != (Object *)0x0) {
    VStack_6._0_8_ = uVar3;
    VStack_6.z = fVar4;
    VStack_7._0_8_ = uVar1;
    VStack_7.z = fVar2;
    pPVar8 = PlaneEx::PlaneEx_GetCameraFacingAxisSlicePlane
                       (&PStack_9,&VStack_7,&VStack_6,(Camera *)pOVar5[4].monitor,
                        (MethodInfo *)0x0);
    fVar2 = (pPVar8->m_Normal).y;
    uVar1 = *(undefined8 *)&(pPVar8->m_Normal).z;
    (__return_storage_ptr__->m_Normal).x = (pPVar8->m_Normal).x;
    (__return_storage_ptr__->m_Normal).y = fVar2;
    *(undefined8 *)&(__return_storage_ptr__->m_Normal).z = uVar1;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  pPVar8 = (Plane *)(*pcVar10)();
  return pPVar8;
}


/* Void CalculateDragValues() */

void Assembly-CSharp.dll::RTG::GizmoSglAxisScaleDrag3D::GizmoSglAxisScaleDrag3D_CalculateDragValues
               (GizmoSglAxisScaleDrag3D *this,MethodInfo *method)

{
  pIVar1 = (this->fields)._._planeDragSession;
  if (pIVar1 == (InputDevicePlaneDragSession3D *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = (this->fields)._workData.Axis.x;
  uVar4 = (this->fields)._workData.Axis.y;
  uVar5 = (pIVar1->fields)._dragDelta.x;
  uVar6 = (pIVar1->fields)._dragDelta.y;
  fVar7 = (float)uVar4 * (float)uVar6 + (float)uVar3 * (float)uVar5 +
           (this->fields)._workData.Axis.z * (pIVar1->fields)._dragDelta.z;
  if ((this->fields)._._isSnapEnabled == 0) {
    fVar8 = (this->fields)._._sensitivity;
    (this->fields)._accumSnapDrag = 0.0;
    fVar9 = (this->fields)._scale;
    fVar7 = fVar7 * fVar8 + fVar9;
    (this->fields)._scale = fVar7;
    fVar9 = fVar7 / fVar9;
    (this->fields)._totalScale = fVar7 / (this->fields)._workData.EntityScale;
    (this->fields)._relativeScale = fVar9;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    fVar7 = fVar7 + (this->fields)._accumSnapDrag;
    pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar9 = (pVVar10->oneVector).z;
    fVar8 = (pVVar10->oneVector).y;
    (this->fields)._._._relativeDragScale.x = (pVVar10->oneVector).x;
    (this->fields)._._._relativeDragScale.y = fVar8;
    (this->fields)._._._relativeDragScale.z = fVar9;
    (this->fields)._accumSnapDrag = fVar7;
    if ((float)((uint)fVar7 & _UNK_?) < (this->fields)._workData.SnapStep)
    goto code_?;
    fVar7 = (this->fields)._workData.SnapStep;
    fVar7 = (float)(int)((this->fields)._accumSnapDrag / fVar7) * fVar7;
    (this->fields)._accumSnapDrag = (this->fields)._accumSnapDrag - fVar7;
    fVar9 = (this->fields)._scale;
    fVar7 = fVar7 + fVar9;
    (this->fields)._scale = fVar7;
    fVar9 = fVar7 / fVar9;
    (this->fields)._totalScale = fVar7 / (this->fields)._workData.EntityScale;
    (this->fields)._relativeScale = fVar9;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
            (&(this->fields)._._._relativeDragScale,(this->fields)._workData.AxisIndex,fVar9,in_R9)
  ;
code_?:
  fVar7 = (this->fields)._totalScale;
  iVar11 = (this->fields)._workData.AxisIndex;
  if (iVar11 == 0) {
    (this->fields)._._._totalDragScale.x = fVar7;
    return;
  }
  if (iVar11 != 1) {
    if (iVar11 == 2) {
      (this->fields)._._._totalDragScale.z = fVar7;
      return;
    }
    uVar12 = func_?(&TypeInfo__System__IndexOutOfRangeException);
    this_00 = (IndexOutOfRangeException *)func_?(uVar12);
    message = (String *)func_?(&StringLiteral_Invalid_Vector3_index_);
    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
              (this_00,message,(MethodInfo *)0x0);
    uVar12 = func_?(&MethodInfo__UnityEngine__Vector3__set_Item_int__float_);
    FUN_?(this_00,uVar12);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (this->fields)._._._totalDragScale.y = fVar7;
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
               (GizmoSglAxisScaleDrag3D *this,GizmoSglAxisScaleDrag3D_WorkData *workData,
               MethodInfo *method)

{
  cVar1 = (*(this->klass->vtable).get_IsActive_1.methodPtr)
                    (this,(this->klass->vtable).get_IsActive_1.method);
  if (cVar1 == '\0') {
    fVar2 = workData->EntityScale;
    iVar3 = workData->AxisIndex;
    fVar4 = (workData->DragOrigin).x;
    fVar5 = (workData->DragOrigin).y;
    fVar6 = (workData->DragOrigin).z;
    (this->fields)._scale = fVar2;
    fVar7 = (workData->Axis).x;
    fVar8 = (workData->Axis).y;
    uVar9 = *(undefined8 *)&(workData->Axis).z;
    (this->fields)._workData.AxisIndex = iVar3;
    (this->fields)._workData.DragOrigin.x = fVar4;
    (this->fields)._workData.DragOrigin.y = fVar5;
    (this->fields)._workData.DragOrigin.z = fVar6;
    (this->fields)._workData.Axis.x = fVar7;
    (this->fields)._workData.Axis.y = fVar8;
    *(undefined8 *)&(this->fields)._workData.Axis.z = uVar9;
    (this->fields)._workData.EntityScale = fVar2;
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
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__List__,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<RTG::GizmoTransform>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_RTG_GizmoTransform_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<RTG::GizmoTransform>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__List__);
  bVar1 = iRam_? != 0;
  (this->fields)._._._targetTransforms = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar6 = cRam_?;
  cVar7 = cRam_?;
  pQVar8 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar9 = (pQVar8->identityQuaternion).y;
  fVar10 = (pQVar8->identityQuaternion).z;
  fVar11 = (pQVar8->identityQuaternion).w;
  (this->fields)._._._totalDragRotation.x = (pQVar8->identityQuaternion).x;
  (this->fields)._._._totalDragRotation.y = fVar9;
  (this->fields)._._._totalDragRotation.z = fVar10;
  (this->fields)._._._totalDragRotation.w = fVar11;
  if (cVar6 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cVar6 = '\x01';
    cRam_? = '\x01';
    cVar7 = cRam_?;
  }
  pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar10 = (pVVar12->oneVector).y;
  fVar9 = (pVVar12->oneVector).z;
  (this->fields)._._._totalDragScale.x = (pVVar12->oneVector).x;
  (this->fields)._._._totalDragScale.y = fVar10;
  (this->fields)._._._totalDragScale.z = fVar9;
  if (cVar7 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
    cVar6 = cRam_?;
  }
  pQVar8 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar9 = (pQVar8->identityQuaternion).y;
  fVar10 = (pQVar8->identityQuaternion).z;
  fVar11 = (pQVar8->identityQuaternion).w;
  (this->fields)._._._relativeDragRotation.x = (pQVar8->identityQuaternion).x;
  (this->fields)._._._relativeDragRotation.y = fVar9;
  (this->fields)._._._relativeDragRotation.z = fVar10;
  (this->fields)._._._relativeDragRotation.w = fVar11;
  if (cVar6 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar10 = (pVVar12->oneVector).y;
  fVar9 = (pVVar12->oneVector).z;
  (this->fields)._._._relativeDragScale.x = (pVVar12->oneVector).x;
  (this->fields)._._._relativeDragScale.y = fVar10;
  (this->fields)._._._relativeDragScale.z = fVar9;
  return;
}


/* Single get_RelativeScale() */

float Assembly-CSharp.dll::RTG::GizmoSglAxisScaleDrag3D::GizmoSglAxisScaleDrag3D_get_RelativeScale
                (GizmoSglAxisScaleDrag3D *this,MethodInfo *method)

{
  return (this->fields)._relativeScale;
}


/* Single get_TotalScale() */

float Assembly-CSharp.dll::RTG::GizmoSglAxisScaleDrag3D::GizmoSglAxisScaleDrag3D_get_TotalScale
                (GizmoSglAxisScaleDrag3D *this,MethodInfo *method)

{
  return (this->fields)._totalScale;
}


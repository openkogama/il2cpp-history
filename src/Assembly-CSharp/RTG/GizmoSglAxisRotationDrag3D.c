
/* Void CalculateDragValues() */

void Assembly-CSharp.dll::RTG::GizmoSglAxisRotationDrag3D::
     GizmoSglAxisRotationDrag3D_CalculateDragValues
               (GizmoSglAxisRotationDrag3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                     (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
  if (pOVar1 == (Object *)0x0) {
code_?:
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  NStack_3.IntNumSteps = (int32_t)(this->fields)._screenDragCircleTangent.x;
  NStack_3.AbsIntNumSteps = (int32_t)(this->fields)._screenDragCircleTangent.y;
  NStack_3.AbsFracSteps = (this->fields)._screenDragCircleTangent.z;
  if (pOVar1[2].klass == (Object__Class *)0x0) goto code_?;
  puVar4 = (undefined8 *)func_?();
  uStack_5._4_4_ = *(float *)(puVar4 + 1);
  fStack_6 = (float)*puVar4;
  uStack_5._0_4_ = (float)((ulonglong)*puVar4 >> 0x20);
  fStack_7 = ((float)uStack_5 * (float)NStack_3.AbsIntNumSteps +
             fStack_6 * (float)NStack_3.IntNumSteps) * (this->fields)._._sensitivity;
  (this->fields)._relativeRotation = fStack_7;
  if (fStack_7 == 0.0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pQVar8 = TypeInfo__UnityEngine__Quaternion->static_fields;
    fVar9 = (pQVar8->identityQuaternion).y;
    fVar10 = (pQVar8->identityQuaternion).z;
    fVar11 = (pQVar8->identityQuaternion).w;
    (this->fields)._._._relativeDragRotation.x = (pQVar8->identityQuaternion).x;
    (this->fields)._._._relativeDragRotation.y = fVar9;
    (this->fields)._._._relativeDragRotation.z = fVar10;
    (this->fields)._._._relativeDragRotation.w = fVar11;
    return;
  }
  if ((this->fields)._._isSnapEnabled == 0) {
    (this->fields)._accumSnapDrag = 0.0;
    (this->fields)._adjustRotationForAbsSnap = 1;
    uStack_5 = (double)(fStack_7 + (this->fields)._totalRotation);
    fVar12 = (float10)func_?();
    (this->fields)._totalRotation = (float)fVar12;
    uVar13 = (this->fields)._workData.Axis.x;
    uVar14 = (this->fields)._workData.Axis.y;
  }
  else {
    uStack_5 = (double)(fStack_7 + (this->fields)._accumSnapDrag);
    fVar12 = (float10)func_?();
    fStack_7 = (float)fVar12;
    (this->fields)._accumSnapDrag = fStack_7;
    if (((this->fields)._workData.SnapMode == 1) && ((this->fields)._adjustRotationForAbsSnap != 0))
    {
      pNVar15 = SnapMath::SnapMath_CalculateNumSnapSteps
                          (&NStack_3,(this->fields)._workData.SnapStep,
                           (this->fields)._totalRotation,(MethodInfo *)0x0);
      uStack_5._4_4_ = (this->fields)._totalRotation;
      fVar9 = (this->fields)._totalRotation;
      if (pNVar15->AbsFracSteps < _UNK_?) {
        fStack_7 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Sign
                             (fVar9,(MethodInfo *)0x0);
        fStack_7 = fStack_7 * (float)pNVar15->AbsIntNumSteps * (this->fields)._workData.SnapStep;
      }
      else {
        fStack_7 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Sign
                             (fVar9,(MethodInfo *)0x0);
        fStack_7 = fStack_7 *
                   (float)(pNVar15->AbsIntNumSteps + 1) * (this->fields)._workData.SnapStep;
      }
      (this->fields)._totalRotation = fStack_7;
      (this->fields)._accumSnapDrag = 0.0;
      (this->fields)._relativeRotation = fStack_7 - uStack_5._4_4_;
      pQVar16 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                          ((Quaternion *)&stack0xffffffc8,fStack_7 - uStack_5._4_4_,
                           (this->fields)._workData.Axis,(MethodInfo *)0x0);
      fVar9 = pQVar16->x;
      fVar10 = pQVar16->y;
      fVar11 = pQVar16->z;
      fVar17 = pQVar16->w;
      (this->fields)._adjustRotationForAbsSnap = 0;
      goto code_?;
    }
    bVar18 = SnapMath::SnapMath_CanExtractSnap
                      ((this->fields)._workData.SnapStep,fStack_7,(MethodInfo *)0x0);
    if (bVar18 == 0) {
      pQVar16 = MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_WorldRotation
                          ((Quaternion *)&stack0xffffffc8,(MVWorldObject *)0x0,in_stack_19);
      fVar9 = pQVar16->x;
      fVar10 = pQVar16->y;
      fVar11 = pQVar16->z;
      fVar17 = pQVar16->w;
      goto code_?;
    }
    fStack_7 = SnapMath::SnapMath_ExtractSnap
                         ((this->fields)._workData.SnapStep,&(this->fields)._accumSnapDrag,
                          (MethodInfo *)0x0);
    (this->fields)._relativeRotation = fStack_7;
    uStack_5 = (double)(fStack_7 + (this->fields)._totalRotation);
    fVar12 = (float10)func_?();
    (this->fields)._totalRotation = (float)fVar12;
    uVar20 = (this->fields)._workData.Axis.x;
    uVar21 = (this->fields)._workData.Axis.y;
    uVar13 = uVar20;
    uVar14 = uVar21;
  }
  axis.y = (float)uVar14;
  axis.x = (float)uVar13;
  axis.z = (this->fields)._workData.Axis.z;
  pQVar16 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                      ((Quaternion *)&stack0xffffffc8,fStack_7,axis,(MethodInfo *)0x0);
  fVar9 = pQVar16->x;
  fVar10 = pQVar16->y;
  fVar11 = pQVar16->z;
  fVar17 = pQVar16->w;
code_?:
  (this->fields)._._._relativeDragRotation.x = fVar9;
  (this->fields)._._._relativeDragRotation.y = fVar10;
  (this->fields)._._._relativeDragRotation.z = fVar11;
  (this->fields)._._._relativeDragRotation.w = fVar17;
  pQVar16 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                      ((Quaternion *)&stack0xffffffc8,(this->fields)._totalRotation,
                       (this->fields)._workData.Axis,(MethodInfo *)0x0);
  fVar9 = pQVar16->y;
  fVar10 = pQVar16->z;
  fVar11 = pQVar16->w;
  (this->fields)._._._totalDragRotation.x = pQVar16->x;
  (this->fields)._._._totalDragRotation.y = fVar9;
  (this->fields)._._._totalDragRotation.z = fVar10;
  (this->fields)._._._totalDragRotation.w = fVar11;
  return;
}


/* Void OnSessionBegin() */

void Assembly-CSharp.dll::RTG::GizmoSglAxisRotationDrag3D::GizmoSglAxisRotationDrag3D_OnSessionBegin
               (GizmoSglAxisRotationDrag3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IInputDevice);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
  }
  pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                      (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
  if (pOVar1 != (Object *)0x0) {
    this_00 = (Camera *)pOVar1[4].monitor;
    (this->fields)._adjustRotationForAbsSnap = 0;
    if ((TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
    }
    pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                        (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
    if ((pOVar1 != (Object *)0x0) && (pOVar1[5].klass != (Object__Class *)0x0)) {
      if (((pOVar1[5].klass)->_1).unity_user_data == (void *)0x2) {
        if ((TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).cctor_finished_or_no_cctor == 0)
        {
          func_?(TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
        }
        pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                            (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
        if ((pOVar1 != (Object *)0x0) && (pOVar1[2].klass != (Object__Class *)0x0)) {
          pfVar2 = (float *)func_?(&stack0xffffff80,6,TypeInfo__RTG__IInputDevice,
                                             pOVar1[2].klass,this_00);
          fVar3 = pfVar2[1];
          uVar4 = (this->fields)._rotationPlane.m_Normal.x;
          uVar5 = (this->fields)._rotationPlane.m_Normal.y;
          VStack_6.z = (this->fields)._rotationPlane.m_Normal.z;
          fStack_7 = (float)*(undefined8 *)(pfVar2 + 4);
          fStack_8 = (float)((ulonglong)*(undefined8 *)(pfVar2 + 4) >> 0x20);
          fStack_9 = fStack_7 * (float)uVar5 + pfVar2[3] * (float)uVar4 + fStack_8 * VStack_6.z
          ;
          uVar10 = (this->fields)._rotationPlane.m_Normal.x;
          uVar11 = (this->fields)._rotationPlane.m_Normal.y;
          VStack_12.y = (float)((uint)fVar3 ^
                               __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                               );
          VStack_12.z = (float)((uint)fVar3 ^
                               __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                               );
          uStack_13 = (uint)fVar3 ^
                      __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field;
          VStack_12.x = (float)((uint)(fVar3 * (float)uVar11 + *pfVar2 * (float)uVar10 +
                                      pfVar2[2] * VStack_6.z) ^
                               __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                               ) - (this->fields)._rotationPlane.m_Distance;
          VStack_6.x = (float)uVar10;
          VStack_6.y = (float)uVar11;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Mathf);
            cRam_? = '\x01';
          }
          fVar3 = (float)((uint)fStack_9 & _UNK_?);
          if ((float)((uint)fStack_9 & _UNK_?) <= 0.0) {
            fVar3 = 0.0;
          }
          fVar14 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * _UNK_?;
          fVar15 = fVar3 * _UNK_?;
          if (fVar3 * _UNK_? <= fVar14) {
            fVar15 = fVar14;
          }
          if (((float)((uint)(0.0 - fStack_9) & _UNK_?) < fVar15) ||
             (VStack_12.x / fStack_9 <= 0.0)) {
            if (this_00 != (Camera *)0x0) {
              pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                                  (&VStack_12,this_00,(this->fields)._workData.RotationPlanePos,
                                   (MethodInfo *)0x0);
              uVar17 = pVVar16->x;
              uVar18 = pVVar16->y;
              VStack_6.z = pVVar16->z;
              uStack_19._0_4_ = (this->fields)._workData.RotationPlanePos.x;
              uStack_19._4_4_ = (this->fields)._workData.RotationPlanePos.y;
              fStack_20 = (this->fields)._workData.RotationPlanePos.z;
              uStack_21._0_4_ = (this->fields)._workData.Axis.x;
              uStack_21._4_4_ = (this->fields)._workData.Axis.y;
              fStack_22 = (this->fields)._workData.Axis.z + fStack_20;
              position.y = uStack_21._4_4_ + uStack_19._4_4_;
              position.x = (float)uStack_21 + (float)uStack_19;
              position.z = fStack_22;
              VStack_6.x = (float)uVar17;
              VStack_6.y = (float)uVar18;
              pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                                  (&VStack_12,this_00,position,(MethodInfo *)0x0);
              uStack_21._0_4_ = pVVar16->x;
              uStack_21._4_4_ = pVVar16->y;
              fStack_22 = pVVar16->z;
              VStack_6.z = uStack_21._4_4_ - VStack_6.y;
              VStack_6.y = (float)uStack_21 - VStack_6.x;
              uVar23 = func_?();
              uVar24 = __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field;
              VStack_6.y = (float)uVar23;
              (this->fields)._screenDragCircleTangent.x = (float)(int)uVar23;
              (this->fields)._screenDragCircleTangent.y = (float)(int)((ulonglong)uVar23 >> 0x20);
              (this->fields)._screenDragCircleTangent.z = 0.0;
              fStack_9 = (this->fields)._screenDragCircleTangent.x;
              VStack_6.z = (float)((uint)(this->fields)._screenDragCircleTangent.y ^ uVar24);
              fStack_22 = 0.0;
              (this->fields)._screenDragCircleTangent.x = VStack_6.z;
              (this->fields)._screenDragCircleTangent.y = fStack_9;
              (this->fields)._screenDragCircleTangent.z = 0.0;
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
                uVar24 = __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field;
              }
              fStack_22 = (this->fields)._screenDragCircleTangent.z;
              uStack_21._0_4_ = (this->fields)._screenDragCircleTangent.x;
              uStack_21._4_4_ = (this->fields)._screenDragCircleTangent.y;
              if (_UNK_? <=
                  VStack_6.z * (TypeInfo__UnityEngine__Vector2->static_fields->rightVector).x +
                  fStack_9 * (TypeInfo__UnityEngine__Vector2->static_fields->rightVector).y) {
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                if (_UNK_? <=
                    uStack_21._4_4_ * (TypeInfo__UnityEngine__Vector2->static_fields->upVector).y +
                    (float)uStack_21 * (TypeInfo__UnityEngine__Vector2->static_fields->upVector).x)
                {
                  return;
                }
                uStack_21._0_4_ = (this->fields)._screenDragCircleTangent.x;
                uStack_21._4_4_ = (this->fields)._screenDragCircleTangent.y;
                fStack_22 = (this->fields)._screenDragCircleTangent.z;
                uVar24 = __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field;
              }
              (this->fields)._screenDragCircleTangent.x = (float)((uint)(float)uStack_21 ^ uVar24);
              (this->fields)._screenDragCircleTangent.y = (float)((uint)uStack_21._4_4_ ^ uVar24);
              (this->fields)._screenDragCircleTangent.z = (float)((uint)fStack_22 ^ uVar24);
              return;
            }
          }
          else {
            pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                                (&VStack_12,(Ray *)&stack0xffffff68,VStack_12.x / fStack_9,
                                 (MethodInfo *)0x0);
            uStack_21._0_4_ = pVVar16->x;
            uStack_21._4_4_ = pVVar16->y;
            fStack_22 = pVVar16->z;
            uVar25 = (this->fields)._workData.RotationPlanePos.x;
            uVar26 = (this->fields)._workData.RotationPlanePos.y;
            fVar3 = fStack_22 - (this->fields)._workData.RotationPlanePos.z;
            uStack_19._0_4_ = (this->fields)._workData.Axis.x;
            uStack_19._4_4_ = (this->fields)._workData.Axis.y;
            fStack_20 = (this->fields)._workData.Axis.z;
            fVar15 = fVar3 * uStack_19._4_4_ - (uStack_21._4_4_ - (float)uVar26) * fStack_20;
            VStack_6.z = (uStack_21._4_4_ - (float)uVar26) * (float)uStack_19 -
                          ((float)uStack_21 - (float)uVar25) * uStack_19._4_4_;
            fStack_9 = ((float)uStack_21 - (float)uVar25) * fStack_20 - fVar3 * (float)uStack_19;
            VStack_6.x = (float)uStack_21;
            VStack_6.y = uStack_21._4_4_;
            if (this_00 != (Camera *)0x0) {
              pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                                  (&VStack_12,this_00,*pVVar16,(MethodInfo *)0x0);
              uStack_19._0_4_ = pVVar16->x;
              uStack_19._4_4_ = pVVar16->y;
              fStack_22 = VStack_6.z + fStack_22;
              position_00.y = fStack_9 + uStack_21._4_4_;
              position_00.x = fVar15 + (float)uStack_21;
              position_00.z = fStack_22;
              pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                                  (&VStack_12,this_00,position_00,(MethodInfo *)0x0);
              uStack_21._0_4_ = pVVar16->x;
              uStack_21._4_4_ = pVVar16->y;
              fStack_22 = pVVar16->z;
              VStack_6.y = (float)uStack_21 - (float)uStack_19;
              VStack_6.z = uStack_21._4_4_ - uStack_19._4_4_;
              func_?();
              fVar3 = extraout_EDX;
              goto code_?;
            }
          }
        }
      }
      else {
        if ((TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).cctor_finished_or_no_cctor == 0)
        {
          func_?(TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
        }
        pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                            (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
        if ((pOVar1 != (Object *)0x0) && (pOVar1[2].klass != (Object__Class *)0x0)) {
          puVar27 = (undefined8 *)
                    func_?(&uStack_19,7,TypeInfo__RTG__IInputDevice,pOVar1[2].klass);
          uStack_21 = *puVar27;
          fStack_22 = *(float *)(puVar27 + 1);
          if (this_00 != (Camera *)0x0) {
            pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                                (&VStack_6,this_00,(this->fields)._workData.RotationPlanePos,
                                 (MethodInfo *)0x0);
            uStack_19._0_4_ = pVVar16->x;
            uStack_19._4_4_ = pVVar16->y;
            VStack_6.y = (float)uStack_21 - (float)uStack_19;
            VStack_6.z = uStack_21._4_4_ - uStack_19._4_4_;
            VVar28.y = VStack_6.z;
            VVar28.x = VStack_6.y;
            VVar28 = Vector2Ex::Vector2Ex_GetNormal(VVar28,(MethodInfo *)0x0);
            fVar3 = VVar28.y;
code_?:
            (this->fields)._screenDragCircleTangent.x = VStack_6.y;
            (this->fields)._screenDragCircleTangent.y = fVar3;
            (this->fields)._screenDragCircleTangent.z = 0.0;
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar29 = (code *)swi(3);
  (*pcVar29)();
  return;
}


/* Void OnSessionEnd() */

void Assembly-CSharp.dll::RTG::GizmoSglAxisRotationDrag3D::GizmoSglAxisRotationDrag3D_OnSessionEnd
               (GizmoSglAxisRotationDrag3D *this,MethodInfo *method)

{
  (this->fields)._accumSnapDrag = 0.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector2);
    cRam_? = '\x01';
  }
  fVar1 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
  (this->fields)._screenDragCircleTangent.x =
       (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
  (this->fields)._screenDragCircleTangent.y = fVar1;
  (this->fields)._screenDragCircleTangent.z = 0.0;
  (this->fields)._adjustRotationForAbsSnap = 0;
  (this->fields)._totalRotation = 0.0;
  (this->fields)._relativeRotation = 0.0;
  return;
}


/* Void SetWorkData(GizmoSglAxisRotationDrag3D+WorkData) */

void Assembly-CSharp.dll::RTG::GizmoSglAxisRotationDrag3D::GizmoSglAxisRotationDrag3D_SetWorkData
               (GizmoSglAxisRotationDrag3D *this,GizmoSglAxisRotationDrag3D_WorkData workData,
               MethodInfo *method)

{
  cVar1 = (*(code *)(this->klass->vtable).get_IsActive_1.method)
                    (this,(this->klass->vtable).get_DragChannel_1.methodPtr);
  if (cVar1 == '\0') {
    (this->fields)._workData.RotationPlanePos.x = workData.RotationPlanePos.x;
    (this->fields)._workData.RotationPlanePos.y = workData.RotationPlanePos.y;
    (this->fields)._workData.RotationPlanePos.z = workData.RotationPlanePos.z;
    (this->fields)._workData.Axis.x = workData.Axis.x;
    (this->fields)._workData.Axis.y = workData.Axis.y;
    (this->fields)._workData.Axis.z = workData.Axis.z;
    (this->fields)._workData.SnapMode = workData.SnapMode;
    (this->fields)._workData.SnapStep = workData.SnapStep;
    fStack_2 = (this->fields)._workData.RotationPlanePos.z;
    uStack_3._0_4_ = (this->fields)._workData.RotationPlanePos.x;
    uStack_3._4_4_ = (this->fields)._workData.RotationPlanePos.y;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                       (&VStack_5,(this->fields)._workData.Axis,(MethodInfo *)0x0);
    uVar6 = pVVar4->x;
    uVar7 = pVVar4->y;
    fVar8 = pVVar4->z;
    fVar9 = (float)((uint)(uStack_3._4_4_ * (float)uVar7 + (float)uStack_3 * (float)uVar6 +
                          fStack_2 * fVar8) ^
                   __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
    (this->fields)._rotationPlane.m_Normal.x = (float)uVar6;
    (this->fields)._rotationPlane.m_Normal.y = (float)uVar7;
    (this->fields)._rotationPlane.m_Normal.z = fVar8;
    (this->fields)._rotationPlane.m_Distance = fVar9;
  }
  return;
}


/* GizmoSglAxisRotationDrag3D() */

void Assembly-CSharp.dll::RTG::GizmoSglAxisRotationDrag3D::GizmoSglAxisRotationDrag3D__ctor
               (GizmoSglAxisRotationDrag3D *this,MethodInfo *method)

{
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


/* Plane get_RotationPlane() */

Plane * Assembly-CSharp.dll::RTG::GizmoSglAxisRotationDrag3D::
        GizmoSglAxisRotationDrag3D_get_RotationPlane
                  (Plane *__return_storage_ptr__,GizmoSglAxisRotationDrag3D *this,MethodInfo *method
                  )

{
  fVar1 = (this->fields)._rotationPlane.m_Normal.y;
  fVar2 = (this->fields)._rotationPlane.m_Normal.z;
  fVar3 = (this->fields)._rotationPlane.m_Distance;
  (__return_storage_ptr__->m_Normal).x = (this->fields)._rotationPlane.m_Normal.x;
  (__return_storage_ptr__->m_Normal).y = fVar1;
  (__return_storage_ptr__->m_Normal).z = fVar2;
  __return_storage_ptr__->m_Distance = fVar3;
  return __return_storage_ptr__;
}


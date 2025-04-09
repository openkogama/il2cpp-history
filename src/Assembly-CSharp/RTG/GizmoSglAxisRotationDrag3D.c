
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
  accumulated = &(this->fields)._accumSnapDrag;
  if ((this->fields)._._isSnapEnabled == 0) {
    *accumulated = 0.0;
    (this->fields)._adjustRotationForAbsSnap = 1;
    uStack_5 = (double)(fStack_7 + (this->fields)._totalRotation);
    fVar12 = (float10)func_?();
    (this->fields)._totalRotation = (float)fVar12;
    uVar13 = (this->fields)._workData.Axis.x;
    uVar14 = (this->fields)._workData.Axis.y;
  }
  else {
    uStack_5 = (double)(fStack_7 + *accumulated);
    fVar12 = (float10)func_?();
    fStack_7 = (float)fVar12;
    *accumulated = fStack_7;
    if (((this->fields)._workData.SnapMode == 1) && ((this->fields)._adjustRotationForAbsSnap != 0))
    {
      pNVar15 = SnapMath::SnapMath_CalculateNumSnapSteps
                          (&NStack_3,(this->fields)._workData.SnapStep,
                           (this->fields)._totalRotation,(MethodInfo *)0x0);
      uStack_5._4_4_ = (this->fields)._totalRotation;
      fVar9 = pNVar15->AbsFracSteps;
      fStack_7 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Sign
                           (uStack_5._4_4_,(MethodInfo *)pNVar15->AbsFltNumSteps);
      iVar16 = pNVar15->AbsIntNumSteps;
      if (_UNK_? <= fVar9) {
        iVar16 = iVar16 + 1;
      }
      fVar9 = (float)iVar16 * (this->fields)._workData.SnapStep * fStack_7;
      (this->fields)._totalRotation = fVar9;
      fVar9 = fVar9 - uStack_5._4_4_;
      *accumulated = 0.0;
      (this->fields)._relativeRotation = fVar9;
      pQVar17 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                          ((Quaternion *)&stack0xffffffc8,fVar9,(this->fields)._workData.Axis,
                           (MethodInfo *)0x0);
      fVar9 = pQVar17->x;
      fVar10 = pQVar17->y;
      fVar11 = pQVar17->z;
      fVar18 = pQVar17->w;
      (this->fields)._adjustRotationForAbsSnap = 0;
      goto code_?;
    }
    bVar19 = SnapMath::SnapMath_CanExtractSnap
                      ((this->fields)._workData.SnapStep,fStack_7,(MethodInfo *)0x0);
    if (bVar19 == 0) {
      pQVar17 = MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_WorldRotation
                          ((Quaternion *)&stack0xffffffc8,(MVWorldObject *)0x0,in_stack_20);
      fVar9 = pQVar17->x;
      fVar10 = pQVar17->y;
      fVar11 = pQVar17->z;
      fVar18 = pQVar17->w;
      goto code_?;
    }
    fStack_7 = SnapMath::SnapMath_ExtractSnap
                         ((this->fields)._workData.SnapStep,accumulated,(MethodInfo *)0x0);
    (this->fields)._relativeRotation = fStack_7;
    uStack_5 = (double)(fStack_7 + (this->fields)._totalRotation);
    fVar12 = (float10)func_?();
    (this->fields)._totalRotation = (float)fVar12;
    uVar21 = (this->fields)._workData.Axis.x;
    uVar22 = (this->fields)._workData.Axis.y;
    uVar13 = uVar21;
    uVar14 = uVar22;
  }
  axis.y = (float)uVar14;
  axis.x = (float)uVar13;
  axis.z = (this->fields)._workData.Axis.z;
  pQVar17 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                      ((Quaternion *)&stack0xffffffc8,fStack_7,axis,(MethodInfo *)0x0);
  fVar9 = pQVar17->x;
  fVar10 = pQVar17->y;
  fVar11 = pQVar17->z;
  fVar18 = pQVar17->w;
code_?:
  (this->fields)._._._relativeDragRotation.x = fVar9;
  (this->fields)._._._relativeDragRotation.y = fVar10;
  (this->fields)._._._relativeDragRotation.z = fVar11;
  (this->fields)._._._relativeDragRotation.w = fVar18;
  pQVar17 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                      ((Quaternion *)&stack0xffffffc8,(this->fields)._totalRotation,
                       (this->fields)._workData.Axis,(MethodInfo *)0x0);
  fVar9 = pQVar17->y;
  fVar10 = pQVar17->z;
  fVar11 = pQVar17->w;
  (this->fields)._._._totalDragRotation.x = pQVar17->x;
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
          uVar3 = (this->fields)._rotationPlane.m_Normal.x;
          uVar4 = (this->fields)._rotationPlane.m_Normal.y;
          fStack_5 = (this->fields)._rotationPlane.m_Normal.z;
          fStack_6 = (float)*(undefined8 *)(pfVar2 + 4);
          fStack_7 = (float)((ulonglong)*(undefined8 *)(pfVar2 + 4) >> 0x20);
          VStack_8.z = fStack_6 * (float)uVar4 + pfVar2[3] * (float)uVar3 + fStack_7 * fStack_5
          ;
          uStack_9._0_4_ = (this->fields)._rotationPlane.m_Normal.x;
          uStack_9._4_4_ = (this->fields)._rotationPlane.m_Normal.y;
          fStack_10 = (float)((uint)((float)uStack_9 * *pfVar2 + pfVar2[1] * uStack_9._4_4_ +
                                    fStack_5 * pfVar2[2]) ^
                             __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                             ) - (this->fields)._rotationPlane.m_Distance;
          VStack_8.x = (float)uVar3;
          VStack_8.y = (float)uVar4;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Mathf);
            cRam_? = '\x01';
          }
          fVar11 = (float)((uint)VStack_8.z & _UNK_?);
          if ((float)((uint)VStack_8.z & _UNK_?) <= 0.0) {
            fVar11 = 0.0;
          }
          fVar12 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * _UNK_?;
          fVar13 = fVar11 * _UNK_?;
          if (fVar11 * _UNK_? <= fVar12) {
            fVar13 = fVar12;
          }
          if (((float)((uint)(0.0 - VStack_8.z) & _UNK_?) < fVar13) ||
             (fStack_10 / VStack_8.z <= 0.0)) {
            if (this_00 != (Camera *)0x0) {
              pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                                  (&VStack_15,this_00,(this->fields)._workData.RotationPlanePos,
                                   (MethodInfo *)0x0);
              uVar16 = pVVar14->x;
              uVar17 = pVVar14->y;
              VStack_8.z = pVVar14->z;
              uStack_9._0_4_ = (this->fields)._workData.RotationPlanePos.x;
              uStack_9._4_4_ = (this->fields)._workData.RotationPlanePos.y;
              fStack_5 = (this->fields)._workData.RotationPlanePos.z;
              uStack_18._0_4_ = (this->fields)._workData.Axis.x;
              uStack_18._4_4_ = (this->fields)._workData.Axis.y;
              fStack_19 = (this->fields)._workData.Axis.z + fStack_5;
              position.y = uStack_18._4_4_ + uStack_9._4_4_;
              position.x = (float)uStack_18 + (float)uStack_9;
              position.z = fStack_19;
              VStack_8.x = (float)uVar16;
              VStack_8.y = (float)uVar17;
              pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                                  (&VStack_15,this_00,position,(MethodInfo *)0x0);
              uStack_18._0_4_ = pVVar14->x;
              uStack_18._4_4_ = pVVar14->y;
              fStack_19 = pVVar14->z;
              VStack_8.z = uStack_18._4_4_ - VStack_8.y;
              VStack_8.y = (float)uStack_18 - VStack_8.x;
              uVar20 = func_?();
              uVar21 = __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
              VStack_8.y = (float)uVar20;
              (this->fields)._screenDragCircleTangent.x = (float)(int)uVar20;
              (this->fields)._screenDragCircleTangent.y = (float)(int)((ulonglong)uVar20 >> 0x20);
              (this->fields)._screenDragCircleTangent.z = 0.0;
              fStack_10 = (this->fields)._screenDragCircleTangent.x;
              VStack_8.z = (float)((uint)(this->fields)._screenDragCircleTangent.y ^ uVar21);
              fStack_19 = 0.0;
              (this->fields)._screenDragCircleTangent.x = VStack_8.z;
              (this->fields)._screenDragCircleTangent.y = fStack_10;
              (this->fields)._screenDragCircleTangent.z = 0.0;
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
                uVar21 = __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
              }
              fStack_19 = (this->fields)._screenDragCircleTangent.z;
              uStack_18._0_4_ = (this->fields)._screenDragCircleTangent.x;
              uStack_18._4_4_ = (this->fields)._screenDragCircleTangent.y;
              if (_UNK_? <=
                  VStack_8.z * (TypeInfo__UnityEngine__Vector2->static_fields->rightVector).x +
                  fStack_10 * (TypeInfo__UnityEngine__Vector2->static_fields->rightVector).y) {
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                if (_UNK_? <=
                    (float)uStack_18 * (TypeInfo__UnityEngine__Vector2->static_fields->upVector).x +
                    uStack_18._4_4_ * (TypeInfo__UnityEngine__Vector2->static_fields->upVector).y) {
                  return;
                }
                uStack_18._0_4_ = (this->fields)._screenDragCircleTangent.x;
                uStack_18._4_4_ = (this->fields)._screenDragCircleTangent.y;
                fStack_19 = (this->fields)._screenDragCircleTangent.z;
                uVar21 = __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
              }
              (this->fields)._screenDragCircleTangent.x = (float)((uint)(float)uStack_18 ^ uVar21);
              (this->fields)._screenDragCircleTangent.y = (float)((uint)uStack_18._4_4_ ^ uVar21);
              (this->fields)._screenDragCircleTangent.z = (float)((uint)fStack_19 ^ uVar21);
              return;
            }
          }
          else {
            pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                                (&VStack_15,(Ray *)&stack0xffffff68,fStack_10 / VStack_8.z,
                                 (MethodInfo *)0x0);
            uStack_18._0_4_ = pVVar14->x;
            uStack_18._4_4_ = pVVar14->y;
            fStack_19 = pVVar14->z;
            uVar22 = (this->fields)._workData.RotationPlanePos.x;
            uVar23 = (this->fields)._workData.RotationPlanePos.y;
            fVar11 = fStack_19 - (this->fields)._workData.RotationPlanePos.z;
            uStack_9._0_4_ = (this->fields)._workData.Axis.x;
            uStack_9._4_4_ = (this->fields)._workData.Axis.y;
            fStack_5 = (this->fields)._workData.Axis.z;
            fVar13 = uStack_9._4_4_ * fVar11 - fStack_5 * (uStack_18._4_4_ - (float)uVar23);
            fStack_10 = (float)uStack_9 * (uStack_18._4_4_ - (float)uVar23) -
                        uStack_9._4_4_ * ((float)uStack_18 - (float)uVar22);
            VStack_8.z = fStack_5 * ((float)uStack_18 - (float)uVar22) - (float)uStack_9 * fVar11;
            VStack_8.x = (float)uVar22;
            VStack_8.y = (float)uVar23;
            if (this_00 != (Camera *)0x0) {
              pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                                  (&VStack_15,this_00,*pVVar14,(MethodInfo *)0x0);
              uStack_9._0_4_ = pVVar14->x;
              uStack_9._4_4_ = pVVar14->y;
              fStack_19 = fStack_10 + fStack_19;
              position_00.y = VStack_8.z + uStack_18._4_4_;
              position_00.x = fVar13 + (float)uStack_18;
              position_00.z = fStack_19;
              pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                                  (&VStack_15,this_00,position_00,(MethodInfo *)0x0);
              uStack_18._0_4_ = pVVar14->x;
              uStack_18._4_4_ = pVVar14->y;
              fStack_19 = pVVar14->z;
              VStack_8.y = (float)uStack_18 - (float)uStack_9;
              VStack_8.z = uStack_18._4_4_ - uStack_9._4_4_;
              func_?();
              fVar11 = extraout_EDX;
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
          puVar24 = (undefined8 *)
                   func_?(&uStack_9,7,TypeInfo__RTG__IInputDevice,pOVar1[2].klass);
          uStack_18 = *puVar24;
          fStack_19 = *(float *)(puVar24 + 1);
          if (this_00 != (Camera *)0x0) {
            pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                                (&VStack_8,this_00,(this->fields)._workData.RotationPlanePos,
                                 (MethodInfo *)0x0);
            uStack_9._0_4_ = pVVar14->x;
            uStack_9._4_4_ = pVVar14->y;
            VStack_8.y = (float)uStack_18 - (float)uStack_9;
            VStack_8.z = uStack_18._4_4_ - uStack_9._4_4_;
            VVar25.y = VStack_8.z;
            VVar25.x = VStack_8.y;
            VVar25 = Vector2Ex::Vector2Ex_GetNormal(VVar25,(MethodInfo *)0x0);
            fVar11 = VVar25.y;
code_?:
            (this->fields)._screenDragCircleTangent.x = VStack_8.y;
            (this->fields)._screenDragCircleTangent.y = fVar11;
            (this->fields)._screenDragCircleTangent.z = 0.0;
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
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
                   __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
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


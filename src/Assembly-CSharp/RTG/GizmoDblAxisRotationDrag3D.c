
/* Void CalculateDragValues() */

void Assembly-CSharp.dll::RTG::GizmoDblAxisRotationDrag3D::
     GizmoDblAxisRotationDrag3D_CalculateDragValues
               (GizmoDblAxisRotationDrag3D *this,MethodInfo *method)

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
  if ((pOVar1 == (Object *)0x0) || (pOVar1[2].klass == (Object__Class *)0x0)) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  puVar3 = (undefined8 *)func_?();
  fStack_4 = (float)*puVar3;
  fStack_5 = (float)((ulonglong)*puVar3 >> 0x20);
  fVar6 = ((this->fields)._workData.ScreenAxis0.y * fStack_5 +
          (this->fields)._workData.ScreenAxis0.x * fStack_4) * (this->fields)._._sensitivity;
  (this->fields)._relativeRotation0 = fVar6;
  fVar7 = ((this->fields)._workData.ScreenAxis1.y * fStack_5 +
           (this->fields)._workData.ScreenAxis1.x * fStack_4) * (this->fields)._._sensitivity;
  (this->fields)._relativeRotation1 = fVar7;
  if ((fVar6 == 0.0) && (fVar7 == 0.0)) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pQVar8 = TypeInfo__UnityEngine__Quaternion->static_fields;
    fVar7 = (pQVar8->identityQuaternion).y;
    fVar6 = (pQVar8->identityQuaternion).z;
    fVar9 = (pQVar8->identityQuaternion).w;
    (this->fields)._._._relativeDragRotation.x = (pQVar8->identityQuaternion).x;
    (this->fields)._._._relativeDragRotation.y = fVar7;
    (this->fields)._._._relativeDragRotation.z = fVar6;
    (this->fields)._._._relativeDragRotation.w = fVar9;
    return;
  }
  accumulated = &(this->fields)._accumSnapDrag0;
  if ((this->fields)._._isSnapEnabled == 0) {
    (this->fields)._adjustRotationForAbsSnap = 1;
    (this->fields)._accumSnapDrag1 = 0.0;
    *accumulated = 0.0;
    (this->fields)._totalRotation0 = fVar6 + (this->fields)._totalRotation0;
    (this->fields)._totalRotation1 = fVar7 + (this->fields)._totalRotation1;
    pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                        ((Quaternion *)&stack0xffffffa0,fVar7,(this->fields)._workData.Axis1,
                         (MethodInfo *)0x0);
    fVar11 = pQVar10->x;
    fVar12 = pQVar10->y;
    fVar13 = pQVar10->z;
    fVar14 = pQVar10->w;
    pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                        ((Quaternion *)&stack0xffffff88,(this->fields)._relativeRotation0,
                         (this->fields)._workData.Axis0,(MethodInfo *)0x0);
    fVar6 = pQVar10->y;
    fVar9 = pQVar10->z;
    fVar15 = pQVar10->w;
    fVar16 = (fVar15 * fVar11 + pQVar10->x * fVar14 + fVar9 * fVar12) - fVar6 * fVar13;
    fVar7 = (fVar12 * fVar15 + fVar6 * fVar14 + fVar13 * pQVar10->x) - fVar9 * fVar11;
    fVar17 = (fVar13 * fVar15 + fVar9 * fVar14 + fVar6 * fVar11) - fVar12 * pQVar10->x;
    fVar6 = ((fVar15 * fVar14 - fVar11 * pQVar10->x) - fVar6 * fVar12) - fVar13 * fVar9;
  }
  else {
    fVar18 = (float10)func_?();
    *accumulated = (float)fVar18;
    fVar18 = (float10)func_?();
    (this->fields)._accumSnapDrag1 = (float)fVar18;
    if (((this->fields)._workData.SnapMode == 1) && ((this->fields)._adjustRotationForAbsSnap != 0))
    {
      pNVar19 = SnapMath::SnapMath_CalculateNumSnapSteps
                          ((NumSnapSteps *)&stack0xffffffa0,(this->fields)._workData.SnapStep0,
                           (this->fields)._totalRotation0,(MethodInfo *)0x0);
      fVar7 = (this->fields)._totalRotation0;
      iVar20 = pNVar19->AbsIntNumSteps;
      if (pNVar19->AbsFracSteps < _UNK_?) {
        fVar6 = _UNK_?;
        if (0.0 <= fVar7) {
          fVar6 = _UNK_?;
        }
      }
      else if (fVar7 < 0.0) {
        iVar20 = iVar20 + 1;
        fVar6 = _UNK_?;
      }
      else {
        iVar20 = iVar20 + 1;
        fVar6 = _UNK_?;
      }
      fVar6 = (float)iVar20 * (this->fields)._workData.SnapStep0 * fVar6;
      (this->fields)._totalRotation0 = fVar6;
      *accumulated = 0.0;
      (this->fields)._relativeRotation0 = fVar6 - fVar7;
      pNVar19 = SnapMath::SnapMath_CalculateNumSnapSteps
                          ((NumSnapSteps *)&stack0xffffffa0,(this->fields)._workData.SnapStep1,
                           (this->fields)._totalRotation1,(MethodInfo *)0x0);
      fVar7 = (this->fields)._totalRotation1;
      iVar20 = pNVar19->AbsIntNumSteps;
      if (pNVar19->AbsFracSteps < _UNK_?) {
        fVar6 = _UNK_?;
        if (0.0 <= fVar7) {
          fVar6 = _UNK_?;
        }
      }
      else if (fVar7 < 0.0) {
        iVar20 = iVar20 + 1;
        fVar6 = _UNK_?;
      }
      else {
        iVar20 = iVar20 + 1;
        fVar6 = _UNK_?;
      }
      fVar6 = (float)iVar20 * (this->fields)._workData.SnapStep1 * fVar6;
      (this->fields)._totalRotation1 = fVar6;
      fVar6 = fVar6 - fVar7;
      (this->fields)._accumSnapDrag1 = 0.0;
      (this->fields)._relativeRotation1 = fVar6;
      UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                ((Quaternion *)&stack0xffffff88,fVar6,(this->fields)._workData.Axis1,
                 (MethodInfo *)0x0);
      fVar7 = (this->fields)._relativeRotation0;
      pVVar21 = &(this->fields)._workData.Axis0;
      fVar6 = pVVar21->x;
      pQVar10 = (Quaternion *)&stack0xffffff88;
      puVar22 = &UNK_?;
      pQVar23 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                          (pQVar10,fVar7,*pVVar21,(MethodInfo *)0x0);
      lhs.y = (float)pQVar10;
      lhs.x = (float)puVar22;
      lhs.z = fVar7;
      lhs.w = fVar6;
      pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply
                          ((Quaternion *)&stack0xffffff88,lhs,*pQVar23,(MethodInfo *)0x0);
      fVar16 = pQVar10->x;
      fVar7 = pQVar10->y;
      fVar17 = pQVar10->z;
      fVar6 = pQVar10->w;
      (this->fields)._adjustRotationForAbsSnap = 0;
    }
    else {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pQVar8 = TypeInfo__UnityEngine__Quaternion->static_fields;
      fVar7 = (pQVar8->identityQuaternion).y;
      fVar6 = (pQVar8->identityQuaternion).z;
      fVar9 = (pQVar8->identityQuaternion).w;
      (this->fields)._._._relativeDragRotation.x = (pQVar8->identityQuaternion).x;
      (this->fields)._._._relativeDragRotation.y = fVar7;
      (this->fields)._._._relativeDragRotation.z = fVar6;
      (this->fields)._._._relativeDragRotation.w = fVar9;
      bVar24 = SnapMath::SnapMath_CanExtractSnap
                        ((this->fields)._workData.SnapStep0,*accumulated,(MethodInfo *)0x0);
      if (bVar24 != 0) {
        fVar7 = SnapMath::SnapMath_ExtractSnap
                           ((this->fields)._workData.SnapStep0,accumulated,(MethodInfo *)0x0);
        (this->fields)._relativeRotation0 = fVar7;
        fVar18 = (float10)func_?();
        (this->fields)._totalRotation0 = (float)fVar18;
        pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                            ((Quaternion *)&stack0xffffff88,fVar7,(this->fields)._workData.Axis0,
                             (MethodInfo *)0x0);
        fVar7 = pQVar10->y;
        fVar6 = pQVar10->z;
        fVar9 = pQVar10->w;
        (this->fields)._._._relativeDragRotation.x = pQVar10->x;
        (this->fields)._._._relativeDragRotation.y = fVar7;
        (this->fields)._._._relativeDragRotation.z = fVar6;
        (this->fields)._._._relativeDragRotation.w = fVar9;
      }
      bVar24 = SnapMath::SnapMath_CanExtractSnap
                        ((this->fields)._workData.SnapStep1,(this->fields)._accumSnapDrag1,
                         (MethodInfo *)0x0);
      if (bVar24 == 0) goto code_?;
      fVar7 = SnapMath::SnapMath_ExtractSnap
                         ((this->fields)._workData.SnapStep1,&(this->fields)._accumSnapDrag1,
                          (MethodInfo *)0x0);
      (this->fields)._relativeRotation1 = fVar7;
      fVar18 = (float10)func_?();
      (this->fields)._totalRotation1 = (float)fVar18;
      pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                          ((Quaternion *)&stack0xffffff88,fVar7,(this->fields)._workData.Axis1,
                           (MethodInfo *)0x0);
      fVar7 = (this->fields)._._._relativeDragRotation.x;
      fVar6 = (this->fields)._._._relativeDragRotation.y;
      fVar9 = (this->fields)._._._relativeDragRotation.z;
      fVar15 = (this->fields)._._._relativeDragRotation.w;
      fVar11 = pQVar10->y;
      fVar12 = pQVar10->z;
      fVar13 = pQVar10->w;
      fVar16 = (fVar15 * pQVar10->x + fVar7 * fVar13 + fVar9 * fVar11) - fVar6 * fVar12;
      fVar7 = (fVar11 * fVar15 + fVar6 * fVar13 + fVar12 * fVar7) - fVar9 * pQVar10->x;
      fVar17 = (fVar12 * fVar15 + fVar9 * fVar13 + fVar6 * pQVar10->x) -
               fVar11 * (this->fields)._._._relativeDragRotation.x;
      fVar6 = ((fVar15 * fVar13 - pQVar10->x * (this->fields)._._._relativeDragRotation.x) -
              fVar6 * fVar11) - fVar12 * fVar9;
    }
  }
  (this->fields)._._._relativeDragRotation.x = fVar16;
  (this->fields)._._._relativeDragRotation.y = fVar7;
  (this->fields)._._._relativeDragRotation.z = fVar17;
  (this->fields)._._._relativeDragRotation.w = fVar6;
code_?:
  fVar11 = (this->fields)._._._totalDragRotation.x;
  fVar12 = (this->fields)._._._totalDragRotation.y;
  fVar13 = (this->fields)._._._totalDragRotation.z;
  fVar16 = (this->fields)._._._totalDragRotation.w;
  fVar17 = (this->fields)._._._relativeDragRotation.y;
  fVar14 = (this->fields)._._._relativeDragRotation.z;
  fVar25 = (this->fields)._._._relativeDragRotation.w;
  fVar7 = (this->fields)._._._relativeDragRotation.x;
  fVar6 = (this->fields)._._._relativeDragRotation.x;
  fVar9 = (this->fields)._._._totalDragRotation.x;
  fVar26 = (this->fields)._._._relativeDragRotation.x;
  fVar15 = (this->fields)._._._totalDragRotation.x;
  (this->fields)._._._totalDragRotation.x =
       (fVar16 * (this->fields)._._._relativeDragRotation.x + fVar11 * fVar25 + fVar13 * fVar17) -
       fVar12 * fVar14;
  (this->fields)._._._totalDragRotation.y =
       (fVar17 * fVar16 + fVar12 * fVar25 + fVar14 * fVar11) - fVar13 * fVar7;
  (this->fields)._._._totalDragRotation.z =
       (fVar14 * fVar16 + fVar13 * fVar25 + fVar12 * fVar6) - fVar17 * fVar9;
  (this->fields)._._._totalDragRotation.w =
       ((fVar16 * fVar25 - fVar26 * fVar15) - fVar12 * fVar17) - fVar14 * fVar13;
  return;
}


/* Void OnSessionEnd() */

void Assembly-CSharp.dll::RTG::GizmoDblAxisRotationDrag3D::GizmoDblAxisRotationDrag3D_OnSessionEnd
               (GizmoDblAxisRotationDrag3D *this,MethodInfo *method)

{
  (this->fields)._accumSnapDrag0 = 0.0;
  (this->fields)._accumSnapDrag1 = 0.0;
  (this->fields)._relativeRotation0 = 0.0;
  (this->fields)._relativeRotation1 = 0.0;
  (this->fields)._totalRotation0 = 0.0;
  (this->fields)._totalRotation1 = 0.0;
  return;
}


/* Void SetWorkData(GizmoDblAxisRotationDrag3D+WorkData) */

void Assembly-CSharp.dll::RTG::GizmoDblAxisRotationDrag3D::GizmoDblAxisRotationDrag3D_SetWorkData
               (GizmoDblAxisRotationDrag3D *this,GizmoDblAxisRotationDrag3D_WorkData workData,
               MethodInfo *method)

{
  cVar1 = (*(code *)(this->klass->vtable).get_IsActive_1.method)
                    (this,(this->klass->vtable).get_DragChannel_1.methodPtr);
  if (cVar1 == '\0') {
    (this->fields)._workData.ScreenAxis0.x = workData.ScreenAxis0.x;
    (this->fields)._workData.ScreenAxis0.y = workData.ScreenAxis0.y;
    (this->fields)._workData.ScreenAxis1.x = workData.ScreenAxis1.x;
    (this->fields)._workData.ScreenAxis1.y = workData.ScreenAxis1.y;
    (this->fields)._workData.Axis0.x = workData.Axis0.x;
    (this->fields)._workData.Axis0.y = workData.Axis0.y;
    (this->fields)._workData.Axis0.z = workData.Axis0.z;
    (this->fields)._workData.Axis1.x = workData.Axis1.x;
    (this->fields)._workData.Axis1.y = workData.Axis1.y;
    (this->fields)._workData.Axis1.z = workData.Axis1.z;
    (this->fields)._workData.SnapMode = workData.SnapMode;
    (this->fields)._workData.SnapStep0 = workData.SnapStep0;
    (this->fields)._workData.SnapStep1 = workData.SnapStep1;
  }
  return;
}


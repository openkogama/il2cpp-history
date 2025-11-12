
/* Void CalculateDragValues() */

void Assembly-CSharp.dll::RTG::GizmoDblAxisRotationDrag3D::
     GizmoDblAxisRotationDrag3D_CalculateDragValues
               (GizmoDblAxisRotationDrag3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IInputDevice);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                     (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
  if ((pOVar1 == (Object *)0x0) || (pOVar1[2].klass == (Object__Class *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  puVar3 = (undefined8 *)FUN_?(&uStack_4,0x10,TypeInfo__RTG__IInputDevice);
  fStack_5 = (float)*puVar3;
  fVar6 = (float)((ulonglong)*puVar3 >> 0x20);
  fVar7 = (fVar6 * (this->fields)._workData.ScreenAxis0.y +
           fStack_5 * (this->fields)._workData.ScreenAxis0.x) * (this->fields)._._sensitivity;
  (this->fields)._relativeRotation0 = fVar7;
  fVar8 = (fVar6 * (this->fields)._workData.ScreenAxis1.y +
           fStack_5 * (this->fields)._workData.ScreenAxis1.x) * (this->fields)._._sensitivity;
  (this->fields)._relativeRotation1 = fVar8;
  uVar9 = _UNK_?;
  if ((fVar7 == 0.0) && (fVar8 == 0.0)) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Quaternion);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pQVar10 = TypeInfo__UnityEngine__Quaternion->static_fields;
    fVar7 = (pQVar10->identityQuaternion).y;
    fVar8 = (pQVar10->identityQuaternion).z;
    fVar6 = (pQVar10->identityQuaternion).w;
    (this->fields)._._._relativeDragRotation.x = (pQVar10->identityQuaternion).x;
    (this->fields)._._._relativeDragRotation.y = fVar7;
    (this->fields)._._._relativeDragRotation.z = fVar8;
    (this->fields)._._._relativeDragRotation.w = fVar6;
    return;
  }
  auVar11._4_4_ = fVar6;
  auVar11._0_4_ = fVar7;
  auVar11._8_4_ = fVar6;
  auVar11._12_4_ = fVar6;
  auVar12._4_12_ = auVar11._4_12_;
  if ((this->fields)._._isSnapEnabled == 0) {
    (this->fields)._adjustRotationForAbsSnap = 1;
    (this->fields)._accumSnapDrag0 = 0.0;
    (this->fields)._accumSnapDrag1 = 0.0;
    (this->fields)._totalRotation0 = fVar7 + (this->fields)._totalRotation0;
    (this->fields)._totalRotation1 =
         (this->fields)._relativeRotation1 + (this->fields)._totalRotation1;
    uStack_13 = 0;
    uStack_14 = 0;
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar15 = func_?(&UNK_?);
      FUN_?(uVar15,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)();
    uStack_4 = 0;
    uStack_16 = 0;
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar15 = func_?(&UNK_?);
      FUN_?(uVar15,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)();
    fVar7 = ((float)uStack_4 * uStack_14._4_4_ + uStack_16._4_4_ * (float)uStack_13 +
             (float)uStack_16 * uStack_13._4_4_) - uStack_4._4_4_ * (float)uStack_14;
    fVar17 = uStack_4._4_4_ * (float)uStack_13;
    fVar8 = (uStack_4._4_4_ * uStack_14._4_4_ + uStack_16._4_4_ * uStack_13._4_4_ +
             (float)uStack_4 * (float)uStack_14) - (float)uStack_16 * (float)uStack_13;
    fVar18 = (float)uStack_16 * uStack_14._4_4_ + uStack_16._4_4_ * (float)uStack_14;
    fVar6 = (float)uStack_4 * uStack_13._4_4_;
    fVar19 = ((uStack_16._4_4_ * uStack_14._4_4_ - (float)uStack_4 * (float)uStack_13) -
             uStack_4._4_4_ * uStack_13._4_4_) - (float)uStack_16 * (float)uStack_14;
code_?:
    fVar6 = (fVar18 + fVar17) - fVar6;
  }
  else {
    auVar12._0_4_ = fVar7 + (this->fields)._accumSnapDrag0;
    fVar7 = (float)FUN_?(auVar12._0_8_,_UNK_?);
    (this->fields)._accumSnapDrag0 = fVar7;
    fVar7 = (float)FUN_?();
    (this->fields)._accumSnapDrag1 = fVar7;
    if (((this->fields)._workData.SnapMode != 1) || ((this->fields)._adjustRotationForAbsSnap == 0))
    {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Quaternion);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      fVar7 = (this->fields)._accumSnapDrag0;
      uVar20 = (uint)UNK_?;
      pQVar10 = TypeInfo__UnityEngine__Quaternion->static_fields;
      fVar8 = (pQVar10->identityQuaternion).y;
      fVar6 = (pQVar10->identityQuaternion).z;
      fVar19 = (pQVar10->identityQuaternion).w;
      (this->fields)._._._relativeDragRotation.x = (pQVar10->identityQuaternion).x;
      (this->fields)._._._relativeDragRotation.y = fVar8;
      (this->fields)._._._relativeDragRotation.z = fVar6;
      (this->fields)._._._relativeDragRotation.w = fVar19;
      if ((this->fields)._workData.SnapStep0 <= (float)((uint)fVar7 & uVar20)) {
        fVar7 = (this->fields)._workData.SnapStep0;
        fVar7 = (float)(int)((this->fields)._accumSnapDrag0 / fVar7) * fVar7;
        (this->fields)._accumSnapDrag0 = (this->fields)._accumSnapDrag0 - fVar7;
        (this->fields)._relativeRotation0 = fVar7;
        fVar7 = (float)FUN_?(fVar7 + (this->fields)._totalRotation0,uVar9);
        (this->fields)._totalRotation0 = fVar7;
        aNStack_21[0].FltNumSteps = 0.0;
        aNStack_21[0].AbsFltNumSteps = 0.0;
        aNStack_21[0].IntNumSteps = 0;
        aNStack_21[0].AbsIntNumSteps = 0;
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar15 = func_?(&UNK_?);
          FUN_?(uVar15,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        (*pcRam_?)();
        uVar20 = (uint)UNK_?;
        (this->fields)._._._relativeDragRotation.x = aNStack_21[0].FltNumSteps;
        (this->fields)._._._relativeDragRotation.y = aNStack_21[0].AbsFltNumSteps;
        (this->fields)._._._relativeDragRotation.z = (float)aNStack_21[0].IntNumSteps;
        (this->fields)._._._relativeDragRotation.w = (float)aNStack_21[0].AbsIntNumSteps;
      }
      if ((float)((uint)(this->fields)._accumSnapDrag1 & uVar20) <
          (this->fields)._workData.SnapStep1) goto code_?;
      fVar7 = (this->fields)._workData.SnapStep1;
      fVar7 = (float)(int)((this->fields)._accumSnapDrag1 / fVar7) * fVar7;
      (this->fields)._accumSnapDrag1 = (this->fields)._accumSnapDrag1 - fVar7;
      (this->fields)._relativeRotation1 = fVar7;
      fVar7 = (float)FUN_?(fVar7 + (this->fields)._totalRotation1,uVar9);
      (this->fields)._totalRotation1 = fVar7;
      uStack_13 = 0;
      uStack_14 = 0;
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar15 = func_?(&UNK_?);
        FUN_?(uVar15,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      (*pcRam_?)();
      fVar19 = (this->fields)._._._relativeDragRotation.x;
      fVar22 = (this->fields)._._._relativeDragRotation.y;
      fVar23 = (this->fields)._._._relativeDragRotation.z;
      fVar24 = (this->fields)._._._relativeDragRotation.w;
      fVar7 = ((float)uStack_13 * fVar24 + uStack_14._4_4_ * fVar19 + uStack_13._4_4_ * fVar23) -
               (float)uStack_14 * fVar22;
      fVar17 = (float)uStack_13 * fVar22;
      fVar8 = (uStack_14._4_4_ * fVar22 + uStack_13._4_4_ * fVar24 + (float)uStack_14 * fVar19) -
               (float)uStack_13 * fVar23;
      fVar18 = uStack_14._4_4_ * fVar23 + (float)uStack_14 * fVar24;
      fVar6 = uStack_13._4_4_ * fVar19;
      fVar19 = ((uStack_14._4_4_ * fVar24 - (float)uStack_13 * fVar19) - uStack_13._4_4_ * fVar22) -
               (float)uStack_14 * fVar23;
      goto code_?;
    }
    pNVar25 = SnapMath::SnapMath_CalculateNumSnapSteps
                        (aNStack_21,(this->fields)._workData.SnapStep0,
                         (this->fields)._totalRotation0,(MethodInfo *)0x0);
    fVar19 = _UNK_?;
    fVar6 = _UNK_?;
    fVar8 = _UNK_?;
    fVar7 = (this->fields)._totalRotation0;
    uStack_13._0_4_ = pNVar25->FltNumSteps;
    uStack_13._4_4_ = pNVar25->AbsFltNumSteps;
    iVar26 = pNVar25->AbsIntNumSteps;
    uStack_14._0_4_ = (float)pNVar25->IntNumSteps;
    uStack_14._4_4_ = (float)pNVar25->AbsIntNumSteps;
    aNStack_21[0].AbsFracSteps = pNVar25->AbsFracSteps;
    if (pNVar25->AbsFracSteps <= _UNK_? && _UNK_? != pNVar25->AbsFracSteps) {
      fVar18 = _UNK_?;
      if (0.0 <= fVar7) {
        fVar18 = _UNK_?;
      }
    }
    else if (fVar7 < 0.0) {
      iVar26 = iVar26 + 1;
      fVar18 = _UNK_?;
    }
    else {
      iVar26 = iVar26 + 1;
      fVar18 = _UNK_?;
    }
    fVar18 = (float)iVar26 * (this->fields)._workData.SnapStep0 * fVar18;
    (this->fields)._totalRotation0 = fVar18;
    (this->fields)._accumSnapDrag0 = 0.0;
    (this->fields)._relativeRotation0 = fVar18 - fVar7;
    pNVar25 = SnapMath::SnapMath_CalculateNumSnapSteps
                        (aNStack_21,(this->fields)._workData.SnapStep1,
                         (this->fields)._totalRotation1,(MethodInfo *)0x0);
    fVar7 = (this->fields)._totalRotation1;
    iVar26 = pNVar25->AbsIntNumSteps;
    fStack_27 = pNVar25->AbsFracSteps;
    if (pNVar25->AbsFracSteps <= fVar8 && fVar8 != pNVar25->AbsFracSteps) {
      if (fVar7 < 0.0) {
        fVar6 = fVar19;
      }
    }
    else {
      if (fVar7 < 0.0) {
        fVar6 = fVar19;
      }
      iVar26 = iVar26 + 1;
    }
    fVar6 = (float)iVar26 * (this->fields)._workData.SnapStep1 * fVar6;
    (this->fields)._totalRotation1 = fVar6;
    (this->fields)._accumSnapDrag1 = 0.0;
    (this->fields)._relativeRotation1 = fVar6 - fVar7;
    uStack_13 = 0;
    uStack_14 = 0;
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar15 = func_?(&UNK_?);
      FUN_?(uVar15,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)();
    uStack_4 = 0;
    uStack_16 = 0;
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar15 = func_?(&UNK_?);
      FUN_?(uVar15,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)();
    fVar7 = ((float)uStack_4 * uStack_14._4_4_ + uStack_16._4_4_ * (float)uStack_13 +
             uStack_13._4_4_ * (float)uStack_16) - (float)uStack_14 * uStack_4._4_4_;
    fVar8 = (uStack_16._4_4_ * uStack_13._4_4_ + uStack_14._4_4_ * uStack_4._4_4_ +
             (float)uStack_4 * (float)uStack_14) - (float)uStack_13 * (float)uStack_16;
    fVar6 = (uStack_16._4_4_ * (float)uStack_14 + uStack_14._4_4_ * (float)uStack_16 +
             (float)uStack_13 * uStack_4._4_4_) - (float)uStack_4 * uStack_13._4_4_;
    fVar19 = ((uStack_16._4_4_ * uStack_14._4_4_ - (float)uStack_4 * (float)uStack_13) -
             uStack_13._4_4_ * uStack_4._4_4_) - (float)uStack_14 * (float)uStack_16;
    (this->fields)._adjustRotationForAbsSnap = 0;
  }
  (this->fields)._._._relativeDragRotation.x = fVar7;
  (this->fields)._._._relativeDragRotation.y = fVar8;
  (this->fields)._._._relativeDragRotation.z = fVar6;
  (this->fields)._._._relativeDragRotation.w = fVar19;
code_?:
  fVar7 = (this->fields)._._._totalDragRotation.x;
  fVar8 = (this->fields)._._._totalDragRotation.y;
  fVar6 = (this->fields)._._._totalDragRotation.z;
  fVar19 = (this->fields)._._._totalDragRotation.w;
  fVar18 = (this->fields)._._._relativeDragRotation.x;
  fVar22 = (this->fields)._._._relativeDragRotation.y;
  fVar23 = (this->fields)._._._relativeDragRotation.z;
  fVar24 = (this->fields)._._._relativeDragRotation.w;
  (this->fields)._._._totalDragRotation.x =
       (fVar7 * fVar24 + fVar19 * fVar18 + fVar6 * fVar22) - fVar8 * fVar23;
  (this->fields)._._._totalDragRotation.y =
       (fVar19 * fVar22 + fVar8 * fVar24 + fVar7 * fVar23) - fVar6 * fVar18;
  (this->fields)._._._totalDragRotation.z =
       (fVar19 * fVar23 + fVar6 * fVar24 + fVar8 * fVar18) - fVar7 * fVar22;
  (this->fields)._._._totalDragRotation.w =
       ((fVar19 * fVar24 - fVar7 * fVar18) - fVar8 * fVar22) - fVar6 * fVar23;
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
               (GizmoDblAxisRotationDrag3D *this,GizmoDblAxisRotationDrag3D_WorkData *workData,
               MethodInfo *method)

{
  cVar1 = (*(this->klass->vtable).get_IsActive_1.methodPtr)
                     (this,(this->klass->vtable).get_IsActive_1.method);
  if (cVar1 == '\0') {
    VVar2 = workData->ScreenAxis1;
    fVar3 = workData->SnapStep1;
    fVar4 = (workData->Axis0).x;
    fVar5 = (workData->Axis0).y;
    uVar6 = *(undefined8 *)&(workData->Axis0).z;
    (this->fields)._workData.ScreenAxis0 = workData->ScreenAxis0;
    (this->fields)._workData.ScreenAxis1 = VVar2;
    fVar7 = (workData->Axis1).y;
    fVar8 = (workData->Axis1).z;
    iVar9 = workData->SnapMode;
    fVar10 = workData->SnapStep0;
    (this->fields)._workData.Axis0.x = fVar4;
    (this->fields)._workData.Axis0.y = fVar5;
    *(undefined8 *)&(this->fields)._workData.Axis0.z = uVar6;
    (this->fields)._workData.Axis1.y = fVar7;
    (this->fields)._workData.Axis1.z = fVar8;
    (this->fields)._workData.SnapMode = iVar9;
    (this->fields)._workData.SnapStep0 = fVar10;
    (this->fields)._workData.SnapStep1 = fVar3;
  }
  return;
}


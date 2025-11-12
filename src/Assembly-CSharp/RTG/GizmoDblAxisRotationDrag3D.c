
/* Void CalculateDragValues() */

void Assembly-CSharp.dll::RTG::GizmoDblAxisRotationDrag3D::GizmoDblAxisRotationDrag3D_CalculateDragValues(GizmoDblAxisRotationDrag3D *this,MethodInfo *method)

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
  pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get(MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
  if ((pOVar1 == (Object *)0x0) || (pOVar1[2].klass == (Object__Class *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  puVar3 = (undefined8 *)FUN_?(&uStack_4,0x10,TypeInfo__RTG__IInputDevice);
  fStack_5 = (float)*puVar3;
  fVar6 = (float)((ulonglong)*puVar3 >> 0x20);
  fVar7 = (fVar6 * (this->fields)._workData.ScreenAxis0.y + fStack_5 * (this->fields)._workData.ScreenAxis0.x) * (this->fields)._._sensitivity;
  (this->fields)._relativeRotation0 = fVar7;
  fVar8 = (fVar6 * (this->fields)._workData.ScreenAxis1.y + fStack_5 * (this->fields)._workData.ScreenAxis1.x) * (this->fields)._._sensitivity;
  (this->fields)._relativeRotation1 = fVar8;
  if ((fVar7 == 0.0) && (fVar8 == 0.0)) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Quaternion);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pQVar9 = TypeInfo__UnityEngine__Quaternion->static_fields;
    fVar7 = (pQVar9->identityQuaternion).y;
    fVar8 = (pQVar9->identityQuaternion).z;
    fVar6 = (pQVar9->identityQuaternion).w;
    (this->fields)._._._relativeDragRotation.x = (pQVar9->identityQuaternion).x;
    (this->fields)._._._relativeDragRotation.y = fVar7;
    (this->fields)._._._relativeDragRotation.z = fVar8;
    (this->fields)._._._relativeDragRotation.w = fVar6;
    return;
  }
  auVar10._4_4_ = fVar6;
  auVar10._0_4_ = fVar7;
  auVar10._8_4_ = fVar6;
  auVar10._12_4_ = fVar6;
  auVar11._4_12_ = auVar10._4_12_;
  if ((this->fields)._._isSnapEnabled == 0) {
    (this->fields)._adjustRotationForAbsSnap = 1;
    (this->fields)._accumSnapDrag0 = 0.0;
    (this->fields)._accumSnapDrag1 = 0.0;
    (this->fields)._totalRotation0 = fVar7 + (this->fields)._totalRotation0;
    (this->fields)._totalRotation1 = (this->fields)._relativeRotation1 + (this->fields)._totalRotation1;
    uStack_12 = 0;
    uStack_13 = 0;
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar14 = func_?(&UNK_?);
      FUN_?(uVar14,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)();
    uStack_4 = 0;
    uStack_15 = 0;
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar14 = func_?(&UNK_?);
      FUN_?(uVar14,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)();
    fVar7 = ((float)uStack_4 * uStack_13._4_4_ + uStack_15._4_4_ * (float)uStack_12 + (float)uStack_15 * uStack_12._4_4_) - uStack_4._4_4_ * (float)uStack_13;
    fVar16 = uStack_4._4_4_ * (float)uStack_12;
    fVar8 = (uStack_4._4_4_ * uStack_13._4_4_ + uStack_15._4_4_ * uStack_12._4_4_ + (float)uStack_4 * (float)uStack_13) - (float)uStack_15 * (float)uStack_12;
    fVar17 = (float)uStack_15 * uStack_13._4_4_ + uStack_15._4_4_ * (float)uStack_13;
    fVar6 = (float)uStack_4 * uStack_12._4_4_;
    fVar18 = ((uStack_15._4_4_ * uStack_13._4_4_ - (float)uStack_4 * (float)uStack_12) - uStack_4._4_4_ * uStack_12._4_4_) - (float)uStack_15 * (float)uStack_13;
code_?:
    fVar6 = (fVar17 + fVar16) - fVar6;
  }
  else {
    auVar11._0_4_ = fVar7 + (this->fields)._accumSnapDrag0;
    fVar7 = (float)FUN_?(auVar11._0_8_,0x43b40000);
    (this->fields)._accumSnapDrag0 = fVar7;
    fVar7 = (float)FUN_?();
    (this->fields)._accumSnapDrag1 = fVar7;
    if (((this->fields)._workData.SnapMode != 1) || ((this->fields)._adjustRotationForAbsSnap == 0)) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Quaternion);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      fVar7 = (this->fields)._accumSnapDrag0;
      uVar19 = (uint)UNK_?;
      pQVar9 = TypeInfo__UnityEngine__Quaternion->static_fields;
      fVar8 = (pQVar9->identityQuaternion).y;
      fVar6 = (pQVar9->identityQuaternion).z;
      fVar18 = (pQVar9->identityQuaternion).w;
      (this->fields)._._._relativeDragRotation.x = (pQVar9->identityQuaternion).x;
      (this->fields)._._._relativeDragRotation.y = fVar8;
      (this->fields)._._._relativeDragRotation.z = fVar6;
      (this->fields)._._._relativeDragRotation.w = fVar18;
      if ((this->fields)._workData.SnapStep0 <= (float)((uint)fVar7 & uVar19)) {
        fVar7 = (this->fields)._workData.SnapStep0;
        fVar7 = (float)(int)((this->fields)._accumSnapDrag0 / fVar7) * fVar7;
        (this->fields)._accumSnapDrag0 = (this->fields)._accumSnapDrag0 - fVar7;
        (this->fields)._relativeRotation0 = fVar7;
        fVar7 = (float)FUN_?(fVar7 + (this->fields)._totalRotation0,0x43b40000);
        (this->fields)._totalRotation0 = fVar7;
        aNStack_20[0].FltNumSteps = 0.0;
        aNStack_20[0].AbsFltNumSteps = 0.0;
        aNStack_20[0].IntNumSteps = 0;
        aNStack_20[0].AbsIntNumSteps = 0;
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar14 = func_?(&UNK_?);
          FUN_?(uVar14,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        (*pcRam_?)();
        uVar19 = (uint)UNK_?;
        (this->fields)._._._relativeDragRotation.x = aNStack_20[0].FltNumSteps;
        (this->fields)._._._relativeDragRotation.y = aNStack_20[0].AbsFltNumSteps;
        (this->fields)._._._relativeDragRotation.z = (float)aNStack_20[0].IntNumSteps;
        (this->fields)._._._relativeDragRotation.w = (float)aNStack_20[0].AbsIntNumSteps;
      }
      if ((float)((uint)(this->fields)._accumSnapDrag1 & uVar19) < (this->fields)._workData.SnapStep1) goto code_?;
      fVar7 = (this->fields)._workData.SnapStep1;
      fVar7 = (float)(int)((this->fields)._accumSnapDrag1 / fVar7) * fVar7;
      (this->fields)._accumSnapDrag1 = (this->fields)._accumSnapDrag1 - fVar7;
      (this->fields)._relativeRotation1 = fVar7;
      fVar7 = (float)FUN_?(fVar7 + (this->fields)._totalRotation1,0x43b40000);
      (this->fields)._totalRotation1 = fVar7;
      uStack_12 = 0;
      uStack_13 = 0;
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar14 = func_?(&UNK_?);
        FUN_?(uVar14,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      (*pcRam_?)();
      fVar18 = (this->fields)._._._relativeDragRotation.x;
      fVar21 = (this->fields)._._._relativeDragRotation.y;
      fVar22 = (this->fields)._._._relativeDragRotation.z;
      fVar23 = (this->fields)._._._relativeDragRotation.w;
      fVar7 = ((float)uStack_12 * fVar23 + uStack_13._4_4_ * fVar18 + uStack_12._4_4_ * fVar22) - (float)uStack_13 * fVar21;
      fVar16 = (float)uStack_12 * fVar21;
      fVar8 = (uStack_13._4_4_ * fVar21 + uStack_12._4_4_ * fVar23 + (float)uStack_13 * fVar18) - (float)uStack_12 * fVar22;
      fVar17 = uStack_13._4_4_ * fVar22 + (float)uStack_13 * fVar23;
      fVar6 = uStack_12._4_4_ * fVar18;
      fVar18 = ((uStack_13._4_4_ * fVar23 - (float)uStack_12 * fVar18) - uStack_12._4_4_ * fVar21) - (float)uStack_13 * fVar22;
      goto code_?;
    }
    pNVar24 = SnapMath::SnapMath_CalculateNumSnapSteps(aNStack_20,(this->fields)._workData.SnapStep0,(this->fields)._totalRotation0,(MethodInfo *)0x0);
    fVar7 = (this->fields)._totalRotation0;
    uStack_12._0_4_ = pNVar24->FltNumSteps;
    uStack_12._4_4_ = pNVar24->AbsFltNumSteps;
    iVar25 = pNVar24->AbsIntNumSteps;
    uStack_13._0_4_ = (float)pNVar24->IntNumSteps;
    uStack_13._4_4_ = (float)pNVar24->AbsIntNumSteps;
    aNStack_20[0].AbsFracSteps = pNVar24->AbsFracSteps;
    if (pNVar24->AbsFracSteps <= 0.5 && pNVar24->AbsFracSteps != 0.5) {
      if (fVar7 < 0.0) {
        fVar8 = -1.0;
      }
      else {
        fVar8 = 1.0;
      }
    }
    else if (fVar7 < 0.0) {
      fVar8 = -1.0;
      iVar25 = iVar25 + 1;
    }
    else {
      fVar8 = 1.0;
      iVar25 = iVar25 + 1;
    }
    fVar8 = (float)iVar25 * (this->fields)._workData.SnapStep0 * fVar8;
    (this->fields)._totalRotation0 = fVar8;
    (this->fields)._accumSnapDrag0 = 0.0;
    (this->fields)._relativeRotation0 = fVar8 - fVar7;
    pNVar24 = SnapMath::SnapMath_CalculateNumSnapSteps(aNStack_20,(this->fields)._workData.SnapStep1,(this->fields)._totalRotation1,(MethodInfo *)0x0);
    fVar7 = (this->fields)._totalRotation1;
    iVar25 = pNVar24->AbsIntNumSteps;
    fStack_26 = pNVar24->AbsFracSteps;
    fVar8 = 1.0;
    if (pNVar24->AbsFracSteps <= 0.5 && pNVar24->AbsFracSteps != 0.5) {
      if (fVar7 < 0.0) {
        fVar8 = -1.0;
      }
    }
    else {
      if (fVar7 < 0.0) {
        fVar8 = -1.0;
      }
      iVar25 = iVar25 + 1;
    }
    fVar8 = (float)iVar25 * (this->fields)._workData.SnapStep1 * fVar8;
    (this->fields)._totalRotation1 = fVar8;
    (this->fields)._accumSnapDrag1 = 0.0;
    (this->fields)._relativeRotation1 = fVar8 - fVar7;
    uStack_12 = 0;
    uStack_13 = 0;
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar14 = func_?(&UNK_?);
      FUN_?(uVar14,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)();
    uStack_4 = 0;
    uStack_15 = 0;
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar14 = func_?(&UNK_?);
      FUN_?(uVar14,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)();
    fVar7 = ((float)uStack_4 * uStack_13._4_4_ + uStack_15._4_4_ * (float)uStack_12 + uStack_12._4_4_ * (float)uStack_15) - (float)uStack_13 * uStack_4._4_4_;
    fVar8 = (uStack_15._4_4_ * uStack_12._4_4_ + uStack_13._4_4_ * uStack_4._4_4_ + (float)uStack_4 * (float)uStack_13) - (float)uStack_12 * (float)uStack_15;
    fVar6 = (uStack_15._4_4_ * (float)uStack_13 + uStack_13._4_4_ * (float)uStack_15 + (float)uStack_12 * uStack_4._4_4_) - (float)uStack_4 * uStack_12._4_4_;
    fVar18 = ((uStack_15._4_4_ * uStack_13._4_4_ - (float)uStack_4 * (float)uStack_12) - uStack_12._4_4_ * uStack_4._4_4_) - (float)uStack_13 * (float)uStack_15;
    (this->fields)._adjustRotationForAbsSnap = 0;
  }
  (this->fields)._._._relativeDragRotation.x = fVar7;
  (this->fields)._._._relativeDragRotation.y = fVar8;
  (this->fields)._._._relativeDragRotation.z = fVar6;
  (this->fields)._._._relativeDragRotation.w = fVar18;
code_?:
  fVar7 = (this->fields)._._._totalDragRotation.x;
  fVar8 = (this->fields)._._._totalDragRotation.y;
  fVar6 = (this->fields)._._._totalDragRotation.z;
  fVar18 = (this->fields)._._._totalDragRotation.w;
  fVar17 = (this->fields)._._._relativeDragRotation.x;
  fVar21 = (this->fields)._._._relativeDragRotation.y;
  fVar22 = (this->fields)._._._relativeDragRotation.z;
  fVar23 = (this->fields)._._._relativeDragRotation.w;
  (this->fields)._._._totalDragRotation.x = (fVar7 * fVar23 + fVar18 * fVar17 + fVar6 * fVar21) - fVar8 * fVar22;
  (this->fields)._._._totalDragRotation.y = (fVar18 * fVar21 + fVar8 * fVar23 + fVar7 * fVar22) - fVar6 * fVar17;
  (this->fields)._._._totalDragRotation.z = (fVar18 * fVar22 + fVar6 * fVar23 + fVar8 * fVar17) - fVar7 * fVar21;
  (this->fields)._._._totalDragRotation.w = ((fVar18 * fVar23 - fVar7 * fVar17) - fVar8 * fVar21) - fVar6 * fVar22;
                    /* WARNING: Read-only address (ram,0xADDR) is written */
  return;
}


/* Void OnSessionEnd() */

void Assembly-CSharp.dll::RTG::GizmoDblAxisRotationDrag3D::GizmoDblAxisRotationDrag3D_OnSessionEnd(GizmoDblAxisRotationDrag3D *this,MethodInfo *method)

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

void Assembly-CSharp.dll::RTG::GizmoDblAxisRotationDrag3D::GizmoDblAxisRotationDrag3D_SetWorkData(GizmoDblAxisRotationDrag3D *this,GizmoDblAxisRotationDrag3D_WorkData *workData,MethodInfo *method)

{
  cVar1 = (*(this->klass->vtable).get_IsActive_1.methodPtr)(this,(this->klass->vtable).get_IsActive_1.method);
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


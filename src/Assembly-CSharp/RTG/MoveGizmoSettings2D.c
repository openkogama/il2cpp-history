
/* Void ConnectDblSliderSettings(GizmoPlaneSlider2D) */

void Assembly-CSharp.dll::RTG::MoveGizmoSettings2D::MoveGizmoSettings2D_ConnectDblSliderSettings
               (MoveGizmoSettings2D *this,GizmoPlaneSlider2D *slider,MethodInfo *method)

{
  if (slider == (GizmoPlaneSlider2D *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = iRam_? != 0;
  (slider->fields)._sharedSettings = (this->fields)._dblSliderSettings;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(slider->fields)._sharedSettings >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return;
}


/* Void ConnectSliderSettings(GizmoLineSlider2D, Int32, AxisSign) */

void Assembly-CSharp.dll::RTG::MoveGizmoSettings2D::MoveGizmoSettings2D_ConnectSliderSettings
               (MoveGizmoSettings2D *this,GizmoLineSlider2D *slider,int32_t axisIndex,
               AxisSign__Enum axisSign,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderSettings;
  if (axisSign == AxisSign__Enum_Positive) {
    if (pGVar1 == (GizmoLineSlider2DSettings__Array *)0x0) goto code_?;
    if ((uint)pGVar1->max_length <= (uint)axisIndex) goto code_?;
    lVar2 = (longlong)axisIndex;
  }
  else {
    if (pGVar1 == (GizmoLineSlider2DSettings__Array *)0x0) goto code_?;
    lVar2 = (longlong)axisIndex + 2;
    if ((uint)pGVar1->max_length <= (uint)lVar2) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (slider != (GizmoLineSlider2D *)0x0) {
    bVar4 = iRam_? != 0;
    (slider->fields)._sharedSettings = pGVar1->vector[lVar2];
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(slider->fields)._sharedSettings >> 0xc);
      puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar7 = *puVar6;
        LOCK();
        uVar8 = *puVar6;
        if (uVar7 == uVar8) {
          *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (uVar7 != uVar8);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* GizmoLineSlider2DSettings GetSliderSettings(Int32, AxisSign) */

GizmoLineSlider2DSettings *
Assembly-CSharp.dll::RTG::MoveGizmoSettings2D::MoveGizmoSettings2D_GetSliderSettings
          (MoveGizmoSettings2D *this,int32_t axisIndex,AxisSign__Enum axisSign,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderSettings;
  if (axisSign == AxisSign__Enum_Positive) {
    if (pGVar1 == (GizmoLineSlider2DSettings__Array *)0x0) goto code_?;
    if ((uint)axisIndex < (uint)pGVar1->max_length) {
      return pGVar1->vector[axisIndex];
    }
  }
  else {
    if (pGVar1 == (GizmoLineSlider2DSettings__Array *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      pGVar3 = (GizmoLineSlider2DSettings *)(*pcVar2)();
      return pGVar3;
    }
    if (axisIndex + 2U < (uint)pGVar1->max_length) {
      return pGVar1->vector[(longlong)axisIndex + 2];
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pGVar3 = (GizmoLineSlider2DSettings *)(*pcVar2)();
  return pGVar3;
}


/* Void SetDragSensitivity(Single) */

void Assembly-CSharp.dll::RTG::MoveGizmoSettings2D::MoveGizmoSettings2D_SetDragSensitivity
               (MoveGizmoSettings2D *this,float sensitivity,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pGVar2 = (this->fields)._sglSliderSettings;
  uVar3 = 0;
  if (pGVar2 != (GizmoLineSlider2DSettings__Array *)0x0) {
    ppGVar4 = pGVar2->vector;
    while ((int)uVar3 < (int)pGVar2->max_length) {
      if ((uint)pGVar2->max_length <= uVar3) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pGVar6 = *ppGVar4;
      if (pGVar6 == (GizmoLineSlider2DSettings *)0x0) goto code_?;
      if (fVar1 <= sensitivity) {
        uVar3 = uVar3 + 1;
        (pGVar6->fields)._offsetSensitivity = sensitivity;
        ppGVar4 = ppGVar4 + 1;
      }
      else {
        uVar3 = uVar3 + 1;
        (pGVar6->fields)._offsetSensitivity = fVar1;
        ppGVar4 = ppGVar4 + 1;
      }
    }
    pGVar7 = (this->fields)._dblSliderSettings;
    if (pGVar7 != (GizmoPlaneSlider2DSettings *)0x0) {
      if (fVar1 <= sensitivity) {
        fVar1 = sensitivity;
      }
      (pGVar7->fields)._offsetSensitivity = fVar1;
      return;
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetXSnapStep(Single) */

void Assembly-CSharp.dll::RTG::MoveGizmoSettings2D::MoveGizmoSettings2D_SetXSnapStep
               (MoveGizmoSettings2D *this,float snapStep,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pGVar2 = (this->fields)._sglSliderSettings;
  if (pGVar2 != (GizmoLineSlider2DSettings__Array *)0x0) {
    if ((int)pGVar2->max_length == 0) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (pGVar2->vector[0] != (GizmoLineSlider2DSettings *)0x0) {
      fVar4 = _UNK_?;
      if (_UNK_? <= snapStep) {
        fVar4 = snapStep;
      }
      (pGVar2->vector[0]->fields)._offsetSnapStep = fVar4;
      if (pGVar2 != (GizmoLineSlider2DSettings__Array *)0x0) {
        if ((uint)pGVar2->max_length < 3) goto code_?;
        if (pGVar2->vector[2] != (GizmoLineSlider2DSettings *)0x0) {
          pGVar5 = (this->fields)._dblSliderSettings;
          fVar4 = fVar1;
          if (fVar1 <= snapStep) {
            fVar4 = snapStep;
          }
          (pGVar2->vector[2]->fields)._offsetSnapStep = fVar4;
          if (pGVar5 != (GizmoPlaneSlider2DSettings *)0x0) {
            if (fVar1 <= snapStep) {
              fVar1 = snapStep;
            }
            (pGVar5->fields)._offsetSnapStepRight = fVar1;
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetYSnapStep(Single) */

void Assembly-CSharp.dll::RTG::MoveGizmoSettings2D::MoveGizmoSettings2D_SetYSnapStep
               (MoveGizmoSettings2D *this,float snapStep,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pGVar2 = (this->fields)._sglSliderSettings;
  if (pGVar2 != (GizmoLineSlider2DSettings__Array *)0x0) {
    if ((uint)pGVar2->max_length < 2) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (pGVar2->vector[1] != (GizmoLineSlider2DSettings *)0x0) {
      fVar4 = _UNK_?;
      if (_UNK_? <= snapStep) {
        fVar4 = snapStep;
      }
      (pGVar2->vector[1]->fields)._offsetSnapStep = fVar4;
      if (pGVar2 != (GizmoLineSlider2DSettings__Array *)0x0) {
        if ((uint)pGVar2->max_length < 4) goto code_?;
        if (pGVar2->vector[3] != (GizmoLineSlider2DSettings *)0x0) {
          pGVar5 = (this->fields)._dblSliderSettings;
          fVar4 = fVar1;
          if (fVar1 <= snapStep) {
            fVar4 = snapStep;
          }
          (pGVar2->vector[3]->fields)._offsetSnapStep = fVar4;
          if (pGVar5 != (GizmoPlaneSlider2DSettings *)0x0) {
            if (fVar1 <= snapStep) {
              fVar1 = snapStep;
            }
            (pGVar5->fields)._offsetSnapStepUp = fVar1;
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* MoveGizmoSettings2D() */

void Assembly-CSharp.dll::RTG::MoveGizmoSettings2D::MoveGizmoSettings2D__ctor
               (MoveGizmoSettings2D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoLineSlider2DSettings);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoLineSlider2DSettings);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoPlaneSlider2DSettings);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (GizmoPlaneSlider2DSettings *)FUN_?(TypeInfo__RTG__GizmoPlaneSlider2DSettings);
  bVar2 = iRam_? != 0;
  (pGVar1->fields)._areaHoverEps = 1e-05;
  (pGVar1->fields)._borderLineHoverEps = 7.0;
  (pGVar1->fields)._thickBorderPolyHoverEps = 7.0;
  (pGVar1->fields)._offsetSnapStepRight = 1.0;
  (pGVar1->fields)._offsetSnapStepUp = 1.0;
  (pGVar1->fields)._rotationSnapStep = 15.0;
  (pGVar1->fields)._scaleMode = 1;
  (pGVar1->fields)._scaleSnapStepRight = 0.1;
  (pGVar1->fields)._scaleSnapStepUp = 0.1;
  (pGVar1->fields)._proportionalScaleSnapStep = 0.1;
  (pGVar1->fields)._offsetSensitivity = 1.0;
  (pGVar1->fields)._rotationSensitivity = 0.45;
  (pGVar1->fields)._scaleSensitivity = 1.0;
  (this->fields)._dblSliderSettings = pGVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._dblSliderSettings >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pGVar7 = (GizmoLineSlider2DSettings__Array *)
           FUN_?(TypeInfo__RTG__GizmoLineSlider2DSettings);
  bVar2 = iRam_? != 0;
  (this->fields)._sglSliderSettings = pGVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._sglSliderSettings >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  Settings::Settings__ctor((Settings *)this,(MethodInfo *)0x0);
  pGVar7 = (this->fields)._sglSliderSettings;
  uVar3 = 0;
  if (pGVar7 != (GizmoLineSlider2DSettings__Array *)0x0) {
    lVar8 = 0x20;
    do {
      if ((int)pGVar7->max_length <= (int)uVar3) {
        pGVar1 = (this->fields)._dblSliderSettings;
        if (pGVar1 != (GizmoPlaneSlider2DSettings *)0x0) {
          (pGVar1->fields)._scaleMode = 1;
          return;
        }
        break;
      }
      pGVar7 = (this->fields)._sglSliderSettings;
      lVar9 = FUN_?(TypeInfo__RTG__GizmoLineSlider2DSettings);
      *(undefined4 *)(lVar9 + 0x10) = 0x41200000;
      *(undefined4 *)(lVar9 + 0x14) = 0x41200000;
      *(undefined4 *)(lVar9 + 0x18) = 0x3f800000;
      *(undefined4 *)(lVar9 + 0x1c) = 0x41700000;
      *(undefined4 *)(lVar9 + 0x24) = 0x3dcccccd;
      *(undefined4 *)(lVar9 + 0x28) = 0x3f800000;
      *(undefined4 *)(lVar9 + 0x2c) = 0x3ee66666;
      *(undefined4 *)(lVar9 + 0x30) = 0x3f800000;
      if (pGVar7 == (GizmoLineSlider2DSettings__Array *)0x0) break;
      lVar10 = FUN_?(lVar9,(pGVar7->klass->_0).element_class);
      if (lVar10 == 0) {
        uVar11 = FUN_?();
        FUN_?(uVar11,0);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      if ((uint)pGVar7->max_length <= uVar3) {
        FUN_?();
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      bVar2 = iRam_? != 0;
      *(longlong *)((longlong)pGVar7->vector + lVar8 + -0x20) = lVar9;
      if (bVar2) {
        uVar13 = (uint)((ulonglong)(pGVar7->vector + (int)uVar3) >> 0xc);
        uVar4 = (ulonglong)((uVar13 & 0x1fffff) >> 6);
        do {
          uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
          puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar13 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      pGVar7 = (this->fields)._sglSliderSettings;
      uVar3 = uVar3 + 1;
      lVar8 = lVar8 + 8;
    } while (pGVar7 != (GizmoLineSlider2DSettings__Array *)0x0);
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Single get_YSnapStep() */

float Assembly-CSharp.dll::RTG::MoveGizmoSettings2D::MoveGizmoSettings2D_get_YSnapStep
                (MoveGizmoSettings2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._dblSliderSettings;
  if (pGVar1 != (GizmoPlaneSlider2DSettings *)0x0) {
    return (pGVar1->fields)._offsetSnapStepUp;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


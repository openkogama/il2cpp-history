
/* Void ConnectCamLookSliderSettings(GizmoPlaneSlider2D) */

void Assembly-CSharp.dll::RTG::RotationGizmoSettings3D::
     RotationGizmoSettings3D_ConnectCamLookSliderSettings
               (RotationGizmoSettings3D *this,GizmoPlaneSlider2D *slider,MethodInfo *method)

{
  if (slider == (GizmoPlaneSlider2D *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = iRam_? != 0;
  (slider->fields)._sharedSettings = (this->fields)._camLookSliderSettings;
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


/* Void ConnectSliderSettings(GizmoPlaneSlider3D, Int32) */

void Assembly-CSharp.dll::RTG::RotationGizmoSettings3D::
     RotationGizmoSettings3D_ConnectSliderSettings
               (RotationGizmoSettings3D *this,GizmoPlaneSlider3D *slider,int32_t axisIndex,
               MethodInfo *method)

{
  pGVar1 = (this->fields)._sliderSettings;
  if (pGVar1 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
    if ((uint)pGVar1->max_length <= (uint)axisIndex) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (slider != (GizmoPlaneSlider3D *)0x0) {
      bVar3 = iRam_? != 0;
      (slider->fields)._sharedSettings = pGVar1->vector[axisIndex];
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&(slider->fields)._sharedSettings >> 0xc);
        puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar6 = *puVar5;
          LOCK();
          uVar7 = *puVar5;
          if (uVar6 == uVar7) {
            *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (uVar6 != uVar7);
      }
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetAxisSnapStep(Int32, Single) */

void Assembly-CSharp.dll::RTG::RotationGizmoSettings3D::RotationGizmoSettings3D_SetAxisSnapStep
               (RotationGizmoSettings3D *this,int32_t axisIndex,float snapStep,MethodInfo *method)

{
  pGVar1 = (this->fields)._sliderSettings;
  if (pGVar1 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
    if ((uint)pGVar1->max_length <= (uint)axisIndex) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (pGVar1->vector[axisIndex] != (GizmoPlaneSlider3DSettings *)0x0) {
      fVar3 = _UNK_?;
      if (_UNK_? <= snapStep) {
        fVar3 = snapStep;
      }
      (pGVar1->vector[axisIndex]->fields)._rotationSnapStep = fVar3;
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetAxisTorusHoverEps(Single) */

void Assembly-CSharp.dll::RTG::RotationGizmoSettings3D::RotationGizmoSettings3D_SetAxisTorusHoverEps
               (RotationGizmoSettings3D *this,float eps,MethodInfo *method)

{
  pGVar1 = (this->fields)._sliderSettings;
  uVar2 = 0;
  if (pGVar1 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
    method = (MethodInfo *)pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pGVar4 = (GizmoPlaneSlider3DSettings *)method->methodPointer;
      if (pGVar4 == (GizmoPlaneSlider3DSettings *)0x0) break;
      if (0.0 <= eps) {
        uVar2 = uVar2 + 1;
        (pGVar4->fields)._borderTorusHoverEps = eps;
        method = (MethodInfo *)&method->virtualMethodPointer;
      }
      else {
        uVar2 = uVar2 + 1;
        (pGVar4->fields)._borderTorusHoverEps = 0.0;
        method = (MethodInfo *)&method->virtualMethodPointer;
      }
    }
  }
  FUN_?(0,pGVar1,method);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetCamLookLineHoverEps(Single) */

void Assembly-CSharp.dll::RTG::RotationGizmoSettings3D::
     RotationGizmoSettings3D_SetCamLookLineHoverEps
               (RotationGizmoSettings3D *this,float eps,MethodInfo *method)

{
  pGVar1 = (this->fields)._camLookSliderSettings;
  if (pGVar1 != (GizmoPlaneSlider2DSettings *)0x0) {
    fVar2 = 0.0;
    if (0.0 <= eps) {
      fVar2 = eps;
    }
    (pGVar1->fields)._borderLineHoverEps = fVar2;
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetCamLookSnapStep(Single) */

void Assembly-CSharp.dll::RTG::RotationGizmoSettings3D::RotationGizmoSettings3D_SetCamLookSnapStep
               (RotationGizmoSettings3D *this,float snapStep,MethodInfo *method)

{
  pGVar1 = (this->fields)._camLookSliderSettings;
  if (pGVar1 != (GizmoPlaneSlider2DSettings *)0x0) {
    fVar2 = _UNK_?;
    if (_UNK_? <= snapStep) {
      fVar2 = snapStep;
    }
    (pGVar1->fields)._rotationSnapStep = fVar2;
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetCamLookThickHoverEps(Single) */

void Assembly-CSharp.dll::RTG::RotationGizmoSettings3D::
     RotationGizmoSettings3D_SetCamLookThickHoverEps
               (RotationGizmoSettings3D *this,float eps,MethodInfo *method)

{
  pGVar1 = (this->fields)._camLookSliderSettings;
  if (pGVar1 != (GizmoPlaneSlider2DSettings *)0x0) {
    fVar2 = 0.0;
    if (0.0 <= eps) {
      fVar2 = eps;
    }
    (pGVar1->fields)._thickBorderPolyHoverEps = fVar2;
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetCanHoverCulledPixels(Boolean) */

void Assembly-CSharp.dll::RTG::RotationGizmoSettings3D::
     RotationGizmoSettings3D_SetCanHoverCulledPixels
               (RotationGizmoSettings3D *this,bool canHover,MethodInfo *method)

{
  uVar1 = CONCAT71(in_register_00000011,canHover);
  pGVar2 = (this->fields)._sliderSettings;
  uVar3 = 0;
  if (pGVar2 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
    method = (MethodInfo *)pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar3) {
        return;
      }
      if ((uint)pGVar2->max_length <= uVar3) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar1 = 0;
      if ((GizmoPlaneSlider3DSettings *)method->methodPointer == (GizmoPlaneSlider3DSettings *)0x0)
      break;
      uVar3 = uVar3 + 1;
      (((GizmoPlaneSlider3DSettings *)method->methodPointer)->fields)._isCircleHoverCullEnabled =
           canHover ^ 1;
      method = (MethodInfo *)&method->virtualMethodPointer;
    }
  }
  FUN_?(uVar3,uVar1,method);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetDragSensitivity(Single) */

void Assembly-CSharp.dll::RTG::RotationGizmoSettings3D::RotationGizmoSettings3D_SetDragSensitivity
               (RotationGizmoSettings3D *this,float sensitivity,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pGVar2 = (this->fields)._sliderSettings;
  uVar3 = 0;
  if (pGVar2 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
    ppGVar4 = pGVar2->vector;
    while ((int)uVar3 < (int)pGVar2->max_length) {
      if ((uint)pGVar2->max_length <= uVar3) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pGVar6 = *ppGVar4;
      if (pGVar6 == (GizmoPlaneSlider3DSettings *)0x0) goto code_?;
      if (fVar1 <= sensitivity) {
        uVar3 = uVar3 + 1;
        (pGVar6->fields)._rotationSensitivity = sensitivity;
        ppGVar4 = ppGVar4 + 1;
      }
      else {
        uVar3 = uVar3 + 1;
        (pGVar6->fields)._rotationSensitivity = fVar1;
        ppGVar4 = ppGVar4 + 1;
      }
    }
    pGVar7 = (this->fields)._camLookSliderSettings;
    if (pGVar7 != (GizmoPlaneSlider2DSettings *)0x0) {
      if (fVar1 <= sensitivity) {
        fVar1 = sensitivity;
      }
      (pGVar7->fields)._rotationSensitivity = fVar1;
      return;
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetSnapMode(GizmoSnapMode) */

void Assembly-CSharp.dll::RTG::RotationGizmoSettings3D::RotationGizmoSettings3D_SetSnapMode
               (RotationGizmoSettings3D *this,GizmoSnapMode__Enum snapMode,MethodInfo *method)

{
  pGVar1 = (this->fields)._sliderSettings;
  uVar2 = 0;
  pGVar3 = (GizmoPlaneSlider3DSettings *)this;
  if (pGVar1 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
    method = (MethodInfo *)pGVar1->vector;
    for (; (int)uVar2 < (int)pGVar1->max_length; uVar2 = uVar2 + 1) {
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pGVar3 = (GizmoPlaneSlider3DSettings *)method->methodPointer;
      if (pGVar3 == (GizmoPlaneSlider3DSettings *)0x0) goto code_?;
      (pGVar3->fields)._rotationSnapMode = snapMode;
      method = (MethodInfo *)&method->virtualMethodPointer;
    }
    pGVar5 = (this->fields)._camLookSliderSettings;
    if (pGVar5 != (GizmoPlaneSlider2DSettings *)0x0) {
      (pGVar5->fields)._rotationSnapMode = snapMode;
      return;
    }
  }
code_?:
  FUN_?(pGVar3,snapMode,method);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* RotationGizmoSettings3D() */

void Assembly-CSharp.dll::RTG::RotationGizmoSettings3D::RotationGizmoSettings3D__ctor
               (RotationGizmoSettings3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoPlaneSlider2DSettings);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoPlaneSlider3DSettings);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoPlaneSlider3DSettings);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._camRightSnapStep = 15.0;
  (this->fields)._camUpSnapStep = 15.0;
  pGVar1 = (GizmoPlaneSlider3DSettings__Array *)
           FUN_?(TypeInfo__RTG__GizmoPlaneSlider3DSettings);
  bVar2 = iRam_? != 0;
  (this->fields)._sliderSettings = pGVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._sliderSettings >> 0xc);
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
  pGVar7 = (GizmoPlaneSlider2DSettings *)FUN_?(TypeInfo__RTG__GizmoPlaneSlider2DSettings);
  bVar2 = iRam_? != 0;
  (pGVar7->fields)._areaHoverEps = 1e-05;
  (pGVar7->fields)._borderLineHoverEps = 7.0;
  (pGVar7->fields)._thickBorderPolyHoverEps = 7.0;
  (pGVar7->fields)._offsetSnapStepRight = 1.0;
  (pGVar7->fields)._offsetSnapStepUp = 1.0;
  (pGVar7->fields)._rotationSnapStep = 15.0;
  (pGVar7->fields)._scaleMode = 1;
  (pGVar7->fields)._scaleSnapStepRight = 0.1;
  (pGVar7->fields)._scaleSnapStepUp = 0.1;
  (pGVar7->fields)._proportionalScaleSnapStep = 0.1;
  (pGVar7->fields)._offsetSensitivity = 1.0;
  (pGVar7->fields)._rotationSensitivity = 0.45;
  (pGVar7->fields)._scaleSensitivity = 1.0;
  (this->fields)._camLookSliderSettings = pGVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._camLookSliderSettings >> 0xc);
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
  pGVar1 = (this->fields)._sliderSettings;
  uVar3 = 0;
  uVar8 = 0;
  if (pGVar1 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
    lVar9 = 0x20;
    do {
      if ((int)pGVar1->max_length <= (int)uVar8) {
        pGVar7 = (this->fields)._camLookSliderSettings;
        if (pGVar7 != (GizmoPlaneSlider2DSettings *)0x0) {
          (pGVar7->fields)._borderLineHoverEps = 7.0;
          uVar8 = 0;
          pGVar1 = (this->fields)._sliderSettings;
          if (pGVar1 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
            ppGVar10 = pGVar1->vector;
            goto code_?;
          }
        }
        break;
      }
      pGVar1 = (this->fields)._sliderSettings;
      lVar11 = FUN_?(TypeInfo__RTG__GizmoPlaneSlider3DSettings);
      *(undefined4 *)(lVar11 + 0x10) = 0x3727c5ac;
      *(undefined4 *)(lVar11 + 0x14) = 0x3727c5ac;
      *(undefined4 *)(lVar11 + 0x18) = 0x3f333333;
      *(undefined4 *)(lVar11 + 0x1c) = 0x3f333333;
      *(undefined4 *)(lVar11 + 0x20) = 0x3f333333;
      *(undefined4 *)(lVar11 + 0x28) = 0x3f800000;
      *(undefined4 *)(lVar11 + 0x2c) = 0x3f800000;
      *(undefined4 *)(lVar11 + 0x30) = 0x41700000;
      *(undefined4 *)(lVar11 + 0x38) = 1;
      *(undefined4 *)(lVar11 + 0x3c) = 0x3dcccccd;
      *(undefined4 *)(lVar11 + 0x40) = 0x3dcccccd;
      *(undefined4 *)(lVar11 + 0x44) = 0x3dcccccd;
      *(undefined4 *)(lVar11 + 0x48) = 0x3f800000;
      *(undefined4 *)(lVar11 + 0x4c) = 0x3ee66666;
      *(undefined4 *)(lVar11 + 0x50) = 0x3f800000;
      if (pGVar1 == (GizmoPlaneSlider3DSettings__Array *)0x0) break;
      lVar12 = FUN_?(lVar11,(pGVar1->klass->_0).element_class);
      if (lVar12 == 0) {
        uVar13 = FUN_?();
        FUN_?(uVar13,0);
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      if ((uint)pGVar1->max_length <= uVar8) goto code_?;
      bVar2 = iRam_? != 0;
      *(longlong *)((longlong)pGVar1->vector + lVar9 + -0x20) = lVar11;
      if (bVar2) {
        uVar15 = (uint)((ulonglong)(pGVar1->vector + (int)uVar8) >> 0xc);
        uVar4 = (ulonglong)((uVar15 & 0x1fffff) >> 6);
        do {
          uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
          puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar15 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      pGVar1 = (this->fields)._sliderSettings;
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while (pGVar1 != (GizmoPlaneSlider3DSettings__Array *)0x0);
  }
  goto code_?;
code_?:
  if ((int)pGVar1->max_length <= (int)uVar8) goto code_?;
  if ((uint)pGVar1->max_length <= uVar8) goto code_?;
  if (*ppGVar10 == (GizmoPlaneSlider3DSettings *)0x0) goto code_?;
  uVar8 = uVar8 + 1;
  ((*ppGVar10)->fields)._isCircleHoverCullEnabled = 1;
  ppGVar10 = ppGVar10 + 1;
  goto code_?;
code_?:
  pGVar1 = (this->fields)._sliderSettings;
  if (pGVar1 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
    ppGVar10 = pGVar1->vector;
    do {
      if ((int)pGVar1->max_length <= (int)uVar3) {
        return;
      }
      if ((uint)pGVar1->max_length <= uVar3) {
code_?:
        FUN_?();
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      if (*ppGVar10 == (GizmoPlaneSlider3DSettings *)0x0) break;
      uVar3 = uVar3 + 1;
      ((*ppGVar10)->fields)._borderTorusHoverEps = 0.4;
      ppGVar10 = ppGVar10 + 1;
    } while( true );
  }
code_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Single get_AxisTorusHoverEps() */

float Assembly-CSharp.dll::RTG::RotationGizmoSettings3D::
      RotationGizmoSettings3D_get_AxisTorusHoverEps
                (RotationGizmoSettings3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sliderSettings;
  if (pGVar1 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if (pGVar1->vector[0] != (GizmoPlaneSlider3DSettings *)0x0) {
      return (pGVar1->vector[0]->fields)._borderTorusHoverEps;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_CamLookLineHoverEps() */

float Assembly-CSharp.dll::RTG::RotationGizmoSettings3D::
      RotationGizmoSettings3D_get_CamLookLineHoverEps
                (RotationGizmoSettings3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._camLookSliderSettings;
  if (pGVar1 != (GizmoPlaneSlider2DSettings *)0x0) {
    return (pGVar1->fields)._borderLineHoverEps;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_CamLookSnapStep() */

float Assembly-CSharp.dll::RTG::RotationGizmoSettings3D::RotationGizmoSettings3D_get_CamLookSnapStep
                (RotationGizmoSettings3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._camLookSliderSettings;
  if (pGVar1 != (GizmoPlaneSlider2DSettings *)0x0) {
    return (pGVar1->fields)._rotationSnapStep;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_CamLookThickHoverEps() */

float Assembly-CSharp.dll::RTG::RotationGizmoSettings3D::
      RotationGizmoSettings3D_get_CamLookThickHoverEps
                (RotationGizmoSettings3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._camLookSliderSettings;
  if (pGVar1 != (GizmoPlaneSlider2DSettings *)0x0) {
    return (pGVar1->fields)._thickBorderPolyHoverEps;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Boolean get_CanHoverCulledPixels() */

bool Assembly-CSharp.dll::RTG::RotationGizmoSettings3D::
     RotationGizmoSettings3D_get_CanHoverCulledPixels
               (RotationGizmoSettings3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sliderSettings;
  if (pGVar1 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
    if (pGVar1->vector[0] != (GizmoPlaneSlider3DSettings *)0x0) {
      return (pGVar1->vector[0]->fields)._isCircleHoverCullEnabled == 0;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Single get_DragSensitivity() */

float Assembly-CSharp.dll::RTG::RotationGizmoSettings3D::RotationGizmoSettings3D_get_DragSensitivity
                (RotationGizmoSettings3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sliderSettings;
  if (pGVar1 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if (pGVar1->vector[0] != (GizmoPlaneSlider3DSettings *)0x0) {
      return (pGVar1->vector[0]->fields)._rotationSensitivity;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* GizmoSnapMode get_SnapMode() */

GizmoSnapMode__Enum
Assembly-CSharp.dll::RTG::RotationGizmoSettings3D::RotationGizmoSettings3D_get_SnapMode
          (RotationGizmoSettings3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sliderSettings;
  if (pGVar1 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      GVar3 = (*pcVar2)();
      return GVar3;
    }
    if (pGVar1->vector[0] != (GizmoPlaneSlider3DSettings *)0x0) {
      return (pGVar1->vector[0]->fields)._rotationSnapMode;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  GVar3 = (*pcVar2)();
  return GVar3;
}


/* Single get_XSnapStep() */

float Assembly-CSharp.dll::RTG::RotationGizmoSettings3D::RotationGizmoSettings3D_get_XSnapStep
                (RotationGizmoSettings3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sliderSettings;
  if (pGVar1 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if (pGVar1->vector[0] != (GizmoPlaneSlider3DSettings *)0x0) {
      return (pGVar1->vector[0]->fields)._rotationSnapStep;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_YSnapStep() */

float Assembly-CSharp.dll::RTG::RotationGizmoSettings3D::RotationGizmoSettings3D_get_YSnapStep
                (RotationGizmoSettings3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sliderSettings;
  if (pGVar1 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
    if ((uint)pGVar1->max_length < 2) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if (pGVar1->vector[1] != (GizmoPlaneSlider3DSettings *)0x0) {
      return (pGVar1->vector[1]->fields)._rotationSnapStep;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_ZSnapStep() */

float Assembly-CSharp.dll::RTG::RotationGizmoSettings3D::RotationGizmoSettings3D_get_ZSnapStep
                (RotationGizmoSettings3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sliderSettings;
  if (pGVar1 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
    if ((uint)pGVar1->max_length < 3) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if (pGVar1->vector[2] != (GizmoPlaneSlider3DSettings *)0x0) {
      return (pGVar1->vector[2]->fields)._rotationSnapStep;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


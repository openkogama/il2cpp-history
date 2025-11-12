
/* Void ConnectDblSliderSettings(GizmoPlaneSlider3D, PlaneId) */

void Assembly-CSharp.dll::RTG::ScaleGizmoSettings3D::ScaleGizmoSettings3D_ConnectDblSliderSettings
               (ScaleGizmoSettings3D *this,GizmoPlaneSlider3D *dblSlider,PlaneId__Enum planeId,
               MethodInfo *method)

{
  pGVar1 = (this->fields)._dblSliderSettings;
  if (pGVar1 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
    if ((PlaneId__Enum)pGVar1->max_length <= planeId) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (dblSlider != (GizmoPlaneSlider3D *)0x0) {
      bVar3 = iRam_? != 0;
      (dblSlider->fields)._sharedSettings = pGVar1->vector[(int)planeId];
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&(dblSlider->fields)._sharedSettings >> 0xc);
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


/* Void ConnectSliderSettings(GizmoLineSlider3D, Int32, AxisSign) */

void Assembly-CSharp.dll::RTG::ScaleGizmoSettings3D::ScaleGizmoSettings3D_ConnectSliderSettings
               (ScaleGizmoSettings3D *this,GizmoLineSlider3D *slider,int32_t axisIndex,
               AxisSign__Enum axisSign,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderSettings;
  if (axisSign == AxisSign__Enum_Positive) {
    if (pGVar1 == (GizmoLineSlider3DSettings__Array *)0x0) goto code_?;
    if ((uint)pGVar1->max_length <= (uint)axisIndex) goto code_?;
    lVar2 = (longlong)axisIndex;
  }
  else {
    if (pGVar1 == (GizmoLineSlider3DSettings__Array *)0x0) goto code_?;
    lVar2 = (longlong)axisIndex + 3;
    if ((uint)pGVar1->max_length <= (uint)lVar2) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (slider != (GizmoLineSlider3D *)0x0) {
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


/* GizmoPlaneSlider3DSettings GetDblSliderSettings(PlaneId) */

GizmoPlaneSlider3DSettings *
Assembly-CSharp.dll::RTG::ScaleGizmoSettings3D::ScaleGizmoSettings3D_GetDblSliderSettings
          (ScaleGizmoSettings3D *this,PlaneId__Enum planeId,MethodInfo *method)

{
  pGVar1 = (this->fields)._dblSliderSettings;
  if (pGVar1 == (GizmoPlaneSlider3DSettings__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pGVar3 = (GizmoPlaneSlider3DSettings *)(*pcVar2)();
    return pGVar3;
  }
  if (planeId < (PlaneId__Enum)pGVar1->max_length) {
    return pGVar1->vector[(int)planeId];
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pGVar3 = (GizmoPlaneSlider3DSettings *)(*pcVar2)();
  return pGVar3;
}


/* GizmoLineSlider3DSettings GetSglSliderSettings(Int32, AxisSign) */

GizmoLineSlider3DSettings *
Assembly-CSharp.dll::RTG::ScaleGizmoSettings3D::ScaleGizmoSettings3D_GetSglSliderSettings
          (ScaleGizmoSettings3D *this,int32_t axisIndex,AxisSign__Enum axisSign,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderSettings;
  if (axisSign == AxisSign__Enum_Positive) {
    if (pGVar1 == (GizmoLineSlider3DSettings__Array *)0x0) goto code_?;
    if ((uint)axisIndex < (uint)pGVar1->max_length) {
      return pGVar1->vector[axisIndex];
    }
  }
  else {
    if (pGVar1 == (GizmoLineSlider3DSettings__Array *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      pGVar3 = (GizmoLineSlider3DSettings *)(*pcVar2)();
      return pGVar3;
    }
    if (axisIndex + 3U < (uint)pGVar1->max_length) {
      return pGVar1->vector[(longlong)axisIndex + 3];
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pGVar3 = (GizmoLineSlider3DSettings *)(*pcVar2)();
  return pGVar3;
}


/* Void SetBoxSliderHoverEps(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoSettings3D::ScaleGizmoSettings3D_SetBoxSliderHoverEps
               (ScaleGizmoSettings3D *this,float eps,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderSettings;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
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
      pGVar4 = (GizmoLineSlider3DSettings *)method->methodPointer;
      if (pGVar4 == (GizmoLineSlider3DSettings *)0x0) break;
      if (0.0 <= eps) {
        uVar2 = uVar2 + 1;
        (pGVar4->fields)._boxHoverEps = eps;
        method = (MethodInfo *)&method->virtualMethodPointer;
      }
      else {
        uVar2 = uVar2 + 1;
        (pGVar4->fields)._boxHoverEps = 0.0;
        method = (MethodInfo *)&method->virtualMethodPointer;
      }
    }
  }
  FUN_?(0,pGVar1,method);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetCylinderSliderHoverEps(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoSettings3D::ScaleGizmoSettings3D_SetCylinderSliderHoverEps
               (ScaleGizmoSettings3D *this,float eps,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderSettings;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
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
      pGVar4 = (GizmoLineSlider3DSettings *)method->methodPointer;
      if (pGVar4 == (GizmoLineSlider3DSettings *)0x0) break;
      if (0.0 <= eps) {
        uVar2 = uVar2 + 1;
        (pGVar4->fields)._cylinderHoverEps = eps;
        method = (MethodInfo *)&method->virtualMethodPointer;
      }
      else {
        uVar2 = uVar2 + 1;
        (pGVar4->fields)._cylinderHoverEps = 0.0;
        method = (MethodInfo *)&method->virtualMethodPointer;
      }
    }
  }
  FUN_?(0,pGVar1,method);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetDragSensitivity(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoSettings3D::ScaleGizmoSettings3D_SetDragSensitivity
               (ScaleGizmoSettings3D *this,float sensitivity,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pGVar2 = (this->fields)._sglSliderSettings;
  uVar3 = 0;
  if (pGVar2 != (GizmoLineSlider3DSettings__Array *)0x0) {
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
      pGVar5 = (GizmoLineSlider3DSettings *)method->methodPointer;
      if (pGVar5 == (GizmoLineSlider3DSettings *)0x0) break;
      if (fVar1 <= sensitivity) {
        uVar3 = uVar3 + 1;
        (pGVar5->fields)._scaleSensitivity = sensitivity;
        method = (MethodInfo *)&method->virtualMethodPointer;
      }
      else {
        uVar3 = uVar3 + 1;
        (pGVar5->fields)._scaleSensitivity = fVar1;
        method = (MethodInfo *)&method->virtualMethodPointer;
      }
    }
  }
  FUN_?(0,pGVar2,method);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetLineSliderHoverEps(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoSettings3D::ScaleGizmoSettings3D_SetLineSliderHoverEps
               (ScaleGizmoSettings3D *this,float eps,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderSettings;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
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
      pGVar4 = (GizmoLineSlider3DSettings *)method->methodPointer;
      if (pGVar4 == (GizmoLineSlider3DSettings *)0x0) break;
      if (0.0 <= eps) {
        uVar2 = uVar2 + 1;
        (pGVar4->fields)._lineHoverEps = eps;
        method = (MethodInfo *)&method->virtualMethodPointer;
      }
      else {
        uVar2 = uVar2 + 1;
        (pGVar4->fields)._lineHoverEps = 0.0;
        method = (MethodInfo *)&method->virtualMethodPointer;
      }
    }
  }
  FUN_?(0,pGVar1,method);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetXSnapStep(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoSettings3D::ScaleGizmoSettings3D_SetXSnapStep
               (ScaleGizmoSettings3D *this,float snapStep,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pGVar2 = (this->fields)._sglSliderSettings;
  if (pGVar2 != (GizmoLineSlider3DSettings__Array *)0x0) {
    if ((int)pGVar2->max_length == 0) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (pGVar2->vector[0] != (GizmoLineSlider3DSettings *)0x0) {
      fVar4 = _UNK_?;
      if (_UNK_? <= snapStep) {
        fVar4 = snapStep;
      }
      (pGVar2->vector[0]->fields)._scaleSnapStep = fVar4;
      if (pGVar2 != (GizmoLineSlider3DSettings__Array *)0x0) {
        if ((uint)pGVar2->max_length < 4) goto code_?;
        if (pGVar2->vector[3] != (GizmoLineSlider3DSettings *)0x0) {
          pGVar5 = (this->fields)._dblSliderSettings;
          fVar4 = fVar1;
          if (fVar1 <= snapStep) {
            fVar4 = snapStep;
          }
          (pGVar2->vector[3]->fields)._scaleSnapStep = fVar4;
          if (pGVar5 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
            if ((int)pGVar5->max_length == 0) goto code_?;
            if (pGVar5->vector[0] != (GizmoPlaneSlider3DSettings *)0x0) {
              fVar4 = fVar1;
              if (fVar1 <= snapStep) {
                fVar4 = snapStep;
              }
              (pGVar5->vector[0]->fields)._scaleSnapStepRight = fVar4;
              if (pGVar5 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
                if ((uint)pGVar5->max_length < 3) goto code_?;
                if (pGVar5->vector[2] != (GizmoPlaneSlider3DSettings *)0x0) {
                  if (fVar1 <= snapStep) {
                    fVar1 = snapStep;
                  }
                  (pGVar5->vector[2]->fields)._scaleSnapStepUp = fVar1;
                  return;
                }
              }
            }
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


/* Void SetXYSnapStep(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoSettings3D::ScaleGizmoSettings3D_SetXYSnapStep
               (ScaleGizmoSettings3D *this,float snapStep,MethodInfo *method)

{
  pGVar1 = (this->fields)._dblSliderSettings;
  if (pGVar1 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (pGVar1->vector[0] != (GizmoPlaneSlider3DSettings *)0x0) {
      fVar3 = _UNK_?;
      if (_UNK_? <= snapStep) {
        fVar3 = snapStep;
      }
      (pGVar1->vector[0]->fields)._proportionalScaleSnapStep = fVar3;
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetYSnapStep(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoSettings3D::ScaleGizmoSettings3D_SetYSnapStep
               (ScaleGizmoSettings3D *this,float snapStep,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pGVar2 = (this->fields)._sglSliderSettings;
  if (pGVar2 != (GizmoLineSlider3DSettings__Array *)0x0) {
    if ((uint)pGVar2->max_length < 2) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (pGVar2->vector[1] != (GizmoLineSlider3DSettings *)0x0) {
      fVar4 = _UNK_?;
      if (_UNK_? <= snapStep) {
        fVar4 = snapStep;
      }
      (pGVar2->vector[1]->fields)._scaleSnapStep = fVar4;
      if (pGVar2 != (GizmoLineSlider3DSettings__Array *)0x0) {
        if ((uint)pGVar2->max_length < 5) goto code_?;
        if (pGVar2->vector[4] != (GizmoLineSlider3DSettings *)0x0) {
          pGVar5 = (this->fields)._dblSliderSettings;
          fVar4 = fVar1;
          if (fVar1 <= snapStep) {
            fVar4 = snapStep;
          }
          (pGVar2->vector[4]->fields)._scaleSnapStep = fVar4;
          if (pGVar5 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
            if ((int)pGVar5->max_length == 0) goto code_?;
            if (pGVar5->vector[0] != (GizmoPlaneSlider3DSettings *)0x0) {
              fVar4 = fVar1;
              if (fVar1 <= snapStep) {
                fVar4 = snapStep;
              }
              (pGVar5->vector[0]->fields)._scaleSnapStepUp = fVar4;
              if (pGVar5 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
                if ((uint)pGVar5->max_length < 2) goto code_?;
                if (pGVar5->vector[1] != (GizmoPlaneSlider3DSettings *)0x0) {
                  if (fVar1 <= snapStep) {
                    fVar1 = snapStep;
                  }
                  (pGVar5->vector[1]->fields)._scaleSnapStepRight = fVar1;
                  return;
                }
              }
            }
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


/* Void SetYZSnapStep(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoSettings3D::ScaleGizmoSettings3D_SetYZSnapStep
               (ScaleGizmoSettings3D *this,float snapStep,MethodInfo *method)

{
  pGVar1 = (this->fields)._dblSliderSettings;
  if (pGVar1 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
    if ((uint)pGVar1->max_length < 2) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (pGVar1->vector[1] != (GizmoPlaneSlider3DSettings *)0x0) {
      fVar3 = _UNK_?;
      if (_UNK_? <= snapStep) {
        fVar3 = snapStep;
      }
      (pGVar1->vector[1]->fields)._proportionalScaleSnapStep = fVar3;
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetZSnapStep(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoSettings3D::ScaleGizmoSettings3D_SetZSnapStep
               (ScaleGizmoSettings3D *this,float snapStep,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pGVar2 = (this->fields)._sglSliderSettings;
  if (pGVar2 != (GizmoLineSlider3DSettings__Array *)0x0) {
    if ((uint)pGVar2->max_length < 3) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (pGVar2->vector[2] != (GizmoLineSlider3DSettings *)0x0) {
      fVar4 = _UNK_?;
      if (_UNK_? <= snapStep) {
        fVar4 = snapStep;
      }
      (pGVar2->vector[2]->fields)._scaleSnapStep = fVar4;
      if (pGVar2 != (GizmoLineSlider3DSettings__Array *)0x0) {
        if ((uint)pGVar2->max_length < 6) goto code_?;
        if (pGVar2->vector[5] != (GizmoLineSlider3DSettings *)0x0) {
          pGVar5 = (this->fields)._dblSliderSettings;
          fVar4 = fVar1;
          if (fVar1 <= snapStep) {
            fVar4 = snapStep;
          }
          (pGVar2->vector[5]->fields)._scaleSnapStep = fVar4;
          if (pGVar5 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
            if ((uint)pGVar5->max_length < 2) goto code_?;
            if (pGVar5->vector[1] != (GizmoPlaneSlider3DSettings *)0x0) {
              fVar4 = fVar1;
              if (fVar1 <= snapStep) {
                fVar4 = snapStep;
              }
              (pGVar5->vector[1]->fields)._scaleSnapStepUp = fVar4;
              if (pGVar5 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
                if ((uint)pGVar5->max_length < 3) goto code_?;
                if (pGVar5->vector[2] != (GizmoPlaneSlider3DSettings *)0x0) {
                  if (fVar1 <= snapStep) {
                    fVar1 = snapStep;
                  }
                  (pGVar5->vector[2]->fields)._scaleSnapStepRight = fVar1;
                  return;
                }
              }
            }
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


/* Void SetZXSnapStep(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoSettings3D::ScaleGizmoSettings3D_SetZXSnapStep
               (ScaleGizmoSettings3D *this,float snapStep,MethodInfo *method)

{
  pGVar1 = (this->fields)._dblSliderSettings;
  if (pGVar1 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
    if ((uint)pGVar1->max_length < 3) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (pGVar1->vector[2] != (GizmoPlaneSlider3DSettings *)0x0) {
      fVar3 = _UNK_?;
      if (_UNK_? <= snapStep) {
        fVar3 = snapStep;
      }
      (pGVar1->vector[2]->fields)._proportionalScaleSnapStep = fVar3;
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* ScaleGizmoSettings3D() */

void Assembly-CSharp.dll::RTG::ScaleGizmoSettings3D::ScaleGizmoSettings3D__ctor
               (ScaleGizmoSettings3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoLineSlider3DSettings);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoLineSlider3DSettings);
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
  (this->fields)._uniformSnapStep = 0.1;
  pGVar1 = (GizmoLineSlider3DSettings__Array *)
           FUN_?(TypeInfo__RTG__GizmoLineSlider3DSettings,6);
  bVar2 = iRam_? != 0;
  (this->fields)._sglSliderSettings = pGVar1;
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
  pGVar7 = (GizmoPlaneSlider3DSettings__Array *)
           FUN_?(TypeInfo__RTG__GizmoPlaneSlider3DSettings);
  bVar2 = iRam_? != 0;
  (this->fields)._dblSliderSettings = pGVar7;
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
  Settings::Settings__ctor((Settings *)this,(MethodInfo *)0x0);
  pGVar1 = (this->fields)._sglSliderSettings;
  uVar3 = 0;
  uVar8 = 0;
  if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
    lVar9 = 0x20;
    lVar10 = 0x20;
    do {
      if ((int)pGVar1->max_length <= (int)uVar8) {
        pGVar7 = (this->fields)._dblSliderSettings;
        uVar8 = 0;
        if (pGVar7 != (GizmoPlaneSlider3DSettings__Array *)0x0) goto code_?;
        break;
      }
      pGVar1 = (this->fields)._sglSliderSettings;
      lVar11 = FUN_?(TypeInfo__RTG__GizmoLineSlider3DSettings);
      *(undefined4 *)(lVar11 + 0x10) = 0x3f333333;
      *(undefined4 *)(lVar11 + 0x14) = 0x3f000000;
      *(undefined4 *)(lVar11 + 0x18) = 0x3f000000;
      *(undefined4 *)(lVar11 + 0x1c) = 0x3f800000;
      *(undefined4 *)(lVar11 + 0x20) = 0x41700000;
      *(undefined4 *)(lVar11 + 0x28) = 0x3dcccccd;
      *(undefined4 *)(lVar11 + 0x2c) = 0x3f800000;
      *(undefined4 *)(lVar11 + 0x30) = 0x3ee66666;
      *(undefined4 *)(lVar11 + 0x34) = 0x3f800000;
      if (pGVar1 == (GizmoLineSlider3DSettings__Array *)0x0) break;
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
      *(longlong *)((longlong)pGVar1->vector + lVar10 + -0x20) = lVar11;
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
      pGVar1 = (this->fields)._sglSliderSettings;
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 8;
    } while (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0);
  }
  goto code_?;
code_?:
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
  if (*ppGVar16 == (GizmoLineSlider3DSettings *)0x0) goto code_?;
  uVar3 = uVar3 + 1;
  ((*ppGVar16)->fields)._scaleSensitivity = 0.6;
  ppGVar16 = ppGVar16 + 1;
  goto code_?;
  while( true ) {
    pGVar7 = (this->fields)._dblSliderSettings;
    lVar10 = FUN_?(TypeInfo__RTG__GizmoPlaneSlider3DSettings);
    *(undefined4 *)(lVar10 + 0x10) = 0x3727c5ac;
    *(undefined4 *)(lVar10 + 0x14) = 0x3727c5ac;
    *(undefined4 *)(lVar10 + 0x18) = 0x3f333333;
    *(undefined4 *)(lVar10 + 0x1c) = 0x3f333333;
    *(undefined4 *)(lVar10 + 0x20) = 0x3f333333;
    *(undefined4 *)(lVar10 + 0x28) = 0x3f800000;
    *(undefined4 *)(lVar10 + 0x2c) = 0x3f800000;
    *(undefined4 *)(lVar10 + 0x30) = 0x41700000;
    *(undefined4 *)(lVar10 + 0x38) = 1;
    *(undefined4 *)(lVar10 + 0x3c) = 0x3dcccccd;
    *(undefined4 *)(lVar10 + 0x40) = 0x3dcccccd;
    *(undefined4 *)(lVar10 + 0x44) = 0x3dcccccd;
    *(undefined4 *)(lVar10 + 0x48) = 0x3f800000;
    *(undefined4 *)(lVar10 + 0x4c) = 0x3ee66666;
    *(undefined4 *)(lVar10 + 0x50) = 0x3f800000;
    if (pGVar7 == (GizmoPlaneSlider3DSettings__Array *)0x0) break;
    lVar11 = FUN_?(lVar10,(pGVar7->klass->_0).element_class);
    if (lVar11 == 0) {
      uVar13 = FUN_?();
      FUN_?(uVar13,0);
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    if ((uint)pGVar7->max_length <= uVar8) goto code_?;
    bVar2 = iRam_? != 0;
    *(longlong *)((longlong)pGVar7->vector + lVar9 + -0x20) = lVar10;
    if (bVar2) {
      uVar15 = (uint)((ulonglong)(pGVar7->vector + (int)uVar8) >> 0xc);
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
    pGVar7 = (this->fields)._dblSliderSettings;
    if (pGVar7 == (GizmoPlaneSlider3DSettings__Array *)0x0) break;
    if ((uint)pGVar7->max_length <= uVar8) goto code_?;
    lVar10 = *(longlong *)((longlong)pGVar7->vector + lVar9 + -0x20);
    if (lVar10 == 0) break;
    *(undefined4 *)(lVar10 + 0x38) = 1;
    pGVar7 = (this->fields)._dblSliderSettings;
    if (pGVar7 == (GizmoPlaneSlider3DSettings__Array *)0x0) break;
    if ((uint)pGVar7->max_length <= uVar8) goto code_?;
    lVar10 = *(longlong *)((longlong)pGVar7->vector + lVar9 + -0x20);
    if (lVar10 == 0) break;
    *(undefined4 *)(lVar10 + 0x10) = 0;
    pGVar7 = (this->fields)._dblSliderSettings;
    if (pGVar7 == (GizmoPlaneSlider3DSettings__Array *)0x0) break;
    if ((uint)pGVar7->max_length <= uVar8) goto code_?;
    lVar10 = *(longlong *)((longlong)pGVar7->vector + lVar9 + -0x20);
    if (lVar10 == 0) break;
    *(undefined4 *)(lVar10 + 0x18) = 0;
    pGVar7 = (this->fields)._dblSliderSettings;
    if (pGVar7 == (GizmoPlaneSlider3DSettings__Array *)0x0) break;
    if ((uint)pGVar7->max_length <= uVar8) goto code_?;
    lVar10 = *(longlong *)((longlong)pGVar7->vector + lVar9 + -0x20);
    if (lVar10 == 0) break;
    *(undefined4 *)(lVar10 + 0x1c) = 0;
    uVar8 = uVar8 + 1;
    pGVar7 = (this->fields)._dblSliderSettings;
    lVar9 = lVar9 + 8;
    if (pGVar7 == (GizmoPlaneSlider3DSettings__Array *)0x0) break;
code_?:
    if ((int)pGVar7->max_length <= (int)uVar8) {
      pGVar1 = (this->fields)._sglSliderSettings;
      if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
        ppGVar16 = pGVar1->vector;
        goto code_?;
      }
      break;
    }
  }
code_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Single get_BoxSliderHoverEps() */

float Assembly-CSharp.dll::RTG::ScaleGizmoSettings3D::ScaleGizmoSettings3D_get_BoxSliderHoverEps
                (ScaleGizmoSettings3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderSettings;
  if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if (pGVar1->vector[0] != (GizmoLineSlider3DSettings *)0x0) {
      return (pGVar1->vector[0]->fields)._boxHoverEps;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_CylinderSliderHoverEps() */

float Assembly-CSharp.dll::RTG::ScaleGizmoSettings3D::
      ScaleGizmoSettings3D_get_CylinderSliderHoverEps(ScaleGizmoSettings3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderSettings;
  if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if (pGVar1->vector[0] != (GizmoLineSlider3DSettings *)0x0) {
      return (pGVar1->vector[0]->fields)._cylinderHoverEps;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_DragSensitivity() */

float Assembly-CSharp.dll::RTG::ScaleGizmoSettings3D::ScaleGizmoSettings3D_get_DragSensitivity
                (ScaleGizmoSettings3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderSettings;
  if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if (pGVar1->vector[0] != (GizmoLineSlider3DSettings *)0x0) {
      return (pGVar1->vector[0]->fields)._scaleSensitivity;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_LineSliderHoverEps() */

float Assembly-CSharp.dll::RTG::ScaleGizmoSettings3D::ScaleGizmoSettings3D_get_LineSliderHoverEps
                (ScaleGizmoSettings3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderSettings;
  if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if (pGVar1->vector[0] != (GizmoLineSlider3DSettings *)0x0) {
      return (pGVar1->vector[0]->fields)._lineHoverEps;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_XSnapStep() */

float Assembly-CSharp.dll::RTG::ScaleGizmoSettings3D::ScaleGizmoSettings3D_get_XSnapStep
                (ScaleGizmoSettings3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderSettings;
  if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if (pGVar1->vector[0] != (GizmoLineSlider3DSettings *)0x0) {
      return (pGVar1->vector[0]->fields)._scaleSnapStep;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_XYSnapStep() */

float Assembly-CSharp.dll::RTG::ScaleGizmoSettings3D::ScaleGizmoSettings3D_get_XYSnapStep
                (ScaleGizmoSettings3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._dblSliderSettings;
  if (pGVar1 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if (pGVar1->vector[0] != (GizmoPlaneSlider3DSettings *)0x0) {
      return (pGVar1->vector[0]->fields)._proportionalScaleSnapStep;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_YSnapStep() */

float Assembly-CSharp.dll::RTG::ScaleGizmoSettings3D::ScaleGizmoSettings3D_get_YSnapStep
                (ScaleGizmoSettings3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderSettings;
  if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
    if ((uint)pGVar1->max_length < 2) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if (pGVar1->vector[1] != (GizmoLineSlider3DSettings *)0x0) {
      return (pGVar1->vector[1]->fields)._scaleSnapStep;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_YZSnapStep() */

float Assembly-CSharp.dll::RTG::ScaleGizmoSettings3D::ScaleGizmoSettings3D_get_YZSnapStep
                (ScaleGizmoSettings3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._dblSliderSettings;
  if (pGVar1 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
    if ((uint)pGVar1->max_length < 2) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if (pGVar1->vector[1] != (GizmoPlaneSlider3DSettings *)0x0) {
      return (pGVar1->vector[1]->fields)._proportionalScaleSnapStep;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_ZSnapStep() */

float Assembly-CSharp.dll::RTG::ScaleGizmoSettings3D::ScaleGizmoSettings3D_get_ZSnapStep
                (ScaleGizmoSettings3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderSettings;
  if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
    if ((uint)pGVar1->max_length < 3) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if (pGVar1->vector[2] != (GizmoLineSlider3DSettings *)0x0) {
      return (pGVar1->vector[2]->fields)._scaleSnapStep;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_ZXSnapStep() */

float Assembly-CSharp.dll::RTG::ScaleGizmoSettings3D::ScaleGizmoSettings3D_get_ZXSnapStep
                (ScaleGizmoSettings3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._dblSliderSettings;
  if (pGVar1 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
    if ((uint)pGVar1->max_length < 3) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if (pGVar1->vector[2] != (GizmoPlaneSlider3DSettings *)0x0) {
      return (pGVar1->vector[2]->fields)._proportionalScaleSnapStep;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


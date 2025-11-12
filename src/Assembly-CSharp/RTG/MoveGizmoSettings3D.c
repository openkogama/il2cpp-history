
/* Void SetDragSensitivity(Single) */

void Assembly-CSharp.dll::RTG::MoveGizmoSettings3D::MoveGizmoSettings3D_SetDragSensitivity
               (MoveGizmoSettings3D *this,float sensitivity,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pGVar2 = (this->fields)._sglSliderSettings;
  uVar3 = 0;
  if (pGVar2 != (GizmoLineSlider3DSettings__Array *)0x0) {
    ppGVar4 = pGVar2->vector;
    while ((int)uVar3 < (int)pGVar2->max_length) {
      if ((uint)pGVar2->max_length <= uVar3) goto code_?;
      pGVar5 = *ppGVar4;
      if (pGVar5 == (GizmoLineSlider3DSettings *)0x0) goto code_?;
      if (fVar1 <= sensitivity) {
        uVar3 = uVar3 + 1;
        (pGVar5->fields)._offsetSensitivity = sensitivity;
        ppGVar4 = ppGVar4 + 1;
      }
      else {
        uVar3 = uVar3 + 1;
        (pGVar5->fields)._offsetSensitivity = fVar1;
        ppGVar4 = ppGVar4 + 1;
      }
    }
    pGVar6 = (this->fields)._dblSliderSettings;
    uVar3 = 0;
    if (pGVar6 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
      ppGVar7 = pGVar6->vector;
      do {
        if ((int)pGVar6->max_length <= (int)uVar3) {
          return;
        }
        if ((uint)pGVar6->max_length <= uVar3) {
code_?:
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pGVar9 = *ppGVar7;
        if (pGVar9 == (GizmoPlaneSlider3DSettings *)0x0) break;
        if (fVar1 <= sensitivity) {
          uVar3 = uVar3 + 1;
          (pGVar9->fields)._offsetSensitivity = sensitivity;
          ppGVar7 = ppGVar7 + 1;
        }
        else {
          uVar3 = uVar3 + 1;
          (pGVar9->fields)._offsetSensitivity = fVar1;
          ppGVar7 = ppGVar7 + 1;
        }
      } while( true );
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetXSnapStep(Single) */

void Assembly-CSharp.dll::RTG::MoveGizmoSettings3D::MoveGizmoSettings3D_SetXSnapStep
               (MoveGizmoSettings3D *this,float snapStep,MethodInfo *method)

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
      (pGVar2->vector[0]->fields)._offsetSnapStep = fVar4;
      if (pGVar2 != (GizmoLineSlider3DSettings__Array *)0x0) {
        if ((uint)pGVar2->max_length < 4) goto code_?;
        if (pGVar2->vector[3] != (GizmoLineSlider3DSettings *)0x0) {
          pGVar5 = (this->fields)._dblSliderSettings;
          fVar4 = fVar1;
          if (fVar1 <= snapStep) {
            fVar4 = snapStep;
          }
          (pGVar2->vector[3]->fields)._offsetSnapStep = fVar4;
          if (pGVar5 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
            if ((int)pGVar5->max_length == 0) goto code_?;
            if (pGVar5->vector[0] != (GizmoPlaneSlider3DSettings *)0x0) {
              fVar4 = fVar1;
              if (fVar1 <= snapStep) {
                fVar4 = snapStep;
              }
              (pGVar5->vector[0]->fields)._offsetSnapStepRight = fVar4;
              if (pGVar5 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
                if ((uint)pGVar5->max_length < 3) goto code_?;
                if (pGVar5->vector[2] != (GizmoPlaneSlider3DSettings *)0x0) {
                  if (fVar1 <= snapStep) {
                    fVar1 = snapStep;
                  }
                  (pGVar5->vector[2]->fields)._offsetSnapStepUp = fVar1;
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


/* Void SetYSnapStep(Single) */

void Assembly-CSharp.dll::RTG::MoveGizmoSettings3D::MoveGizmoSettings3D_SetYSnapStep
               (MoveGizmoSettings3D *this,float snapStep,MethodInfo *method)

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
      (pGVar2->vector[1]->fields)._offsetSnapStep = fVar4;
      if (pGVar2 != (GizmoLineSlider3DSettings__Array *)0x0) {
        if ((uint)pGVar2->max_length < 5) goto code_?;
        if (pGVar2->vector[4] != (GizmoLineSlider3DSettings *)0x0) {
          pGVar5 = (this->fields)._dblSliderSettings;
          fVar4 = fVar1;
          if (fVar1 <= snapStep) {
            fVar4 = snapStep;
          }
          (pGVar2->vector[4]->fields)._offsetSnapStep = fVar4;
          if (pGVar5 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
            if ((int)pGVar5->max_length == 0) goto code_?;
            if (pGVar5->vector[0] != (GizmoPlaneSlider3DSettings *)0x0) {
              fVar4 = fVar1;
              if (fVar1 <= snapStep) {
                fVar4 = snapStep;
              }
              (pGVar5->vector[0]->fields)._offsetSnapStepUp = fVar4;
              if (pGVar5 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
                if ((uint)pGVar5->max_length < 2) goto code_?;
                if (pGVar5->vector[1] != (GizmoPlaneSlider3DSettings *)0x0) {
                  if (fVar1 <= snapStep) {
                    fVar1 = snapStep;
                  }
                  (pGVar5->vector[1]->fields)._offsetSnapStepRight = fVar1;
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


/* Void SetZSnapStep(Single) */

void Assembly-CSharp.dll::RTG::MoveGizmoSettings3D::MoveGizmoSettings3D_SetZSnapStep
               (MoveGizmoSettings3D *this,float snapStep,MethodInfo *method)

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
      (pGVar2->vector[2]->fields)._offsetSnapStep = fVar4;
      if (pGVar2 != (GizmoLineSlider3DSettings__Array *)0x0) {
        if ((uint)pGVar2->max_length < 6) goto code_?;
        if (pGVar2->vector[5] != (GizmoLineSlider3DSettings *)0x0) {
          pGVar5 = (this->fields)._dblSliderSettings;
          fVar4 = fVar1;
          if (fVar1 <= snapStep) {
            fVar4 = snapStep;
          }
          (pGVar2->vector[5]->fields)._offsetSnapStep = fVar4;
          if (pGVar5 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
            if ((uint)pGVar5->max_length < 2) goto code_?;
            if (pGVar5->vector[1] != (GizmoPlaneSlider3DSettings *)0x0) {
              fVar4 = fVar1;
              if (fVar1 <= snapStep) {
                fVar4 = snapStep;
              }
              (pGVar5->vector[1]->fields)._offsetSnapStepUp = fVar4;
              if (pGVar5 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
                if ((uint)pGVar5->max_length < 3) goto code_?;
                if (pGVar5->vector[2] != (GizmoPlaneSlider3DSettings *)0x0) {
                  if (fVar1 <= snapStep) {
                    fVar1 = snapStep;
                  }
                  (pGVar5->vector[2]->fields)._offsetSnapStepRight = fVar1;
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


/* MoveGizmoSettings3D() */

void Assembly-CSharp.dll::RTG::MoveGizmoSettings3D::MoveGizmoSettings3D__ctor
               (MoveGizmoSettings3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoLineSlider3DSettings);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoLineSlider3DSettings);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoObjectVertexSnapSettings);
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
  this_00 = (GizmoObjectVertexSnapSettings *)
            FUN_?(TypeInfo__RTG__GizmoObjectVertexSnapSettings);
  (this_00->fields)._snapDestinationLayers = -1;
  (this_00->fields)._canSnapToGrid = 1;
  (this_00->fields)._canSnapToObjectVerts = 1;
  Settings::Settings__ctor((Settings *)this_00,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._vertexSnapSettings = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._vertexSnapSettings >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pGVar6 = (GizmoLineSlider3DSettings__Array *)
           FUN_?(TypeInfo__RTG__GizmoLineSlider3DSettings,6);
  bVar1 = iRam_? != 0;
  (this->fields)._sglSliderSettings = pGVar6;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._sglSliderSettings >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pGVar7 = (GizmoPlaneSlider3DSettings__Array *)
           FUN_?(TypeInfo__RTG__GizmoPlaneSlider3DSettings);
  bVar1 = iRam_? != 0;
  (this->fields)._dblSliderSettings = pGVar7;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._dblSliderSettings >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  Settings::Settings__ctor((Settings *)this,(MethodInfo *)0x0);
  pGVar6 = (this->fields)._sglSliderSettings;
  uVar2 = 0;
  if (pGVar6 != (GizmoLineSlider3DSettings__Array *)0x0) {
    lVar8 = 0x20;
    lVar9 = 0x20;
    do {
      if ((int)pGVar6->max_length <= (int)uVar2) {
        pGVar7 = (this->fields)._dblSliderSettings;
        uVar2 = 0;
        goto joined_?;
      }
      pGVar6 = (this->fields)._sglSliderSettings;
      lVar10 = FUN_?(TypeInfo__RTG__GizmoLineSlider3DSettings);
      *(undefined4 *)(lVar10 + 0x10) = 0x3f333333;
      *(undefined4 *)(lVar10 + 0x14) = 0x3f000000;
      *(undefined4 *)(lVar10 + 0x18) = 0x3f000000;
      *(undefined4 *)(lVar10 + 0x1c) = 0x3f800000;
      *(undefined4 *)(lVar10 + 0x20) = 0x41700000;
      *(undefined4 *)(lVar10 + 0x28) = 0x3dcccccd;
      *(undefined4 *)(lVar10 + 0x2c) = 0x3f800000;
      *(undefined4 *)(lVar10 + 0x30) = 0x3ee66666;
      *(undefined4 *)(lVar10 + 0x34) = 0x3f800000;
      if (pGVar6 == (GizmoLineSlider3DSettings__Array *)0x0) break;
      lVar11 = FUN_?(lVar10,(pGVar6->klass->_0).element_class);
      if (lVar11 == 0) {
        uVar12 = FUN_?();
        FUN_?(uVar12,0);
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      if ((uint)pGVar6->max_length <= uVar2) goto code_?;
      bVar1 = iRam_? != 0;
      *(longlong *)((longlong)pGVar6->vector + lVar9 + -0x20) = lVar10;
      if (bVar1) {
        uVar14 = (uint)((ulonglong)(pGVar6->vector + (int)uVar2) >> 0xc);
        uVar3 = (ulonglong)((uVar14 & 0x1fffff) >> 6);
        do {
          uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
          puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
          LOCK();
          bVar1 = uVar4 == *puVar5;
          if (bVar1) {
            *puVar5 = uVar4 | 1L << (uVar14 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      pGVar6 = (this->fields)._sglSliderSettings;
      uVar2 = uVar2 + 1;
      lVar9 = lVar9 + 8;
    } while (pGVar6 != (GizmoLineSlider3DSettings__Array *)0x0);
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
joined_?:
  if (pGVar7 == (GizmoPlaneSlider3DSettings__Array *)0x0) goto code_?;
  if ((int)pGVar7->max_length <= (int)uVar2) {
    return;
  }
  pGVar7 = (this->fields)._dblSliderSettings;
  lVar9 = FUN_?(TypeInfo__RTG__GizmoPlaneSlider3DSettings);
  *(undefined4 *)(lVar9 + 0x10) = 0x3727c5ac;
  *(undefined4 *)(lVar9 + 0x14) = 0x3727c5ac;
  *(undefined4 *)(lVar9 + 0x18) = 0x3f333333;
  *(undefined4 *)(lVar9 + 0x1c) = 0x3f333333;
  *(undefined4 *)(lVar9 + 0x20) = 0x3f333333;
  *(undefined4 *)(lVar9 + 0x28) = 0x3f800000;
  *(undefined4 *)(lVar9 + 0x2c) = 0x3f800000;
  *(undefined4 *)(lVar9 + 0x30) = 0x41700000;
  *(undefined4 *)(lVar9 + 0x38) = 1;
  *(undefined4 *)(lVar9 + 0x3c) = 0x3dcccccd;
  *(undefined4 *)(lVar9 + 0x40) = 0x3dcccccd;
  *(undefined4 *)(lVar9 + 0x44) = 0x3dcccccd;
  *(undefined4 *)(lVar9 + 0x48) = 0x3f800000;
  *(undefined4 *)(lVar9 + 0x4c) = 0x3ee66666;
  *(undefined4 *)(lVar9 + 0x50) = 0x3f800000;
  if (pGVar7 == (GizmoPlaneSlider3DSettings__Array *)0x0) goto code_?;
  lVar10 = FUN_?(lVar9,(pGVar7->klass->_0).element_class);
  if (lVar10 == 0) {
    uVar12 = FUN_?();
    FUN_?(uVar12,0);
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  if ((uint)pGVar7->max_length <= uVar2) {
code_?:
    FUN_?();
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  bVar1 = iRam_? != 0;
  *(longlong *)((longlong)pGVar7->vector + lVar8 + -0x20) = lVar9;
  if (bVar1) {
    uVar14 = (uint)((ulonglong)(pGVar7->vector + (int)uVar2) >> 0xc);
    uVar3 = (ulonglong)((uVar14 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar14 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pGVar7 = (this->fields)._dblSliderSettings;
  if (pGVar7 == (GizmoPlaneSlider3DSettings__Array *)0x0) goto code_?;
  if ((uint)pGVar7->max_length <= uVar2) goto code_?;
  lVar9 = *(longlong *)((longlong)pGVar7->vector + lVar8 + -0x20);
  if (lVar9 == 0) goto code_?;
  *(undefined4 *)(lVar9 + 0x10) = 0;
  pGVar7 = (this->fields)._dblSliderSettings;
  if (pGVar7 == (GizmoPlaneSlider3DSettings__Array *)0x0) goto code_?;
  if ((uint)pGVar7->max_length <= uVar2) goto code_?;
  lVar9 = *(longlong *)((longlong)pGVar7->vector + lVar8 + -0x20);
  if (lVar9 == 0) goto code_?;
  *(undefined4 *)(lVar9 + 0x18) = 0;
  pGVar7 = (this->fields)._dblSliderSettings;
  if (pGVar7 == (GizmoPlaneSlider3DSettings__Array *)0x0) goto code_?;
  if ((uint)pGVar7->max_length <= uVar2) goto code_?;
  lVar9 = *(longlong *)((longlong)pGVar7->vector + lVar8 + -0x20);
  if (lVar9 == 0) goto code_?;
  *(undefined4 *)(lVar9 + 0x1c) = 0;
  uVar2 = uVar2 + 1;
  pGVar7 = (this->fields)._dblSliderSettings;
  lVar8 = lVar8 + 8;
  goto joined_?;
}


/* Single get_DragSensitivity() */

float Assembly-CSharp.dll::RTG::MoveGizmoSettings3D::MoveGizmoSettings3D_get_DragSensitivity
                (MoveGizmoSettings3D *this,MethodInfo *method)

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
      return (pGVar1->vector[0]->fields)._offsetSensitivity;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_XSnapStep() */

float Assembly-CSharp.dll::RTG::MoveGizmoSettings3D::MoveGizmoSettings3D_get_XSnapStep
                (MoveGizmoSettings3D *this,MethodInfo *method)

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
      return (pGVar1->vector[0]->fields)._offsetSnapStep;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_YSnapStep() */

float Assembly-CSharp.dll::RTG::MoveGizmoSettings3D::MoveGizmoSettings3D_get_YSnapStep
                (MoveGizmoSettings3D *this,MethodInfo *method)

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
      return (pGVar1->vector[1]->fields)._offsetSnapStep;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_ZSnapStep() */

float Assembly-CSharp.dll::RTG::MoveGizmoSettings3D::MoveGizmoSettings3D_get_ZSnapStep
                (MoveGizmoSettings3D *this,MethodInfo *method)

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
      return (pGVar1->vector[2]->fields)._offsetSnapStep;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


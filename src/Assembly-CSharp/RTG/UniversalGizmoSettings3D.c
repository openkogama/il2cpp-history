
/* Void ConnectMvDblSliderSettings(GizmoPlaneSlider3D, PlaneId) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
     UniversalGizmoSettings3D_ConnectMvDblSliderSettings
               (UniversalGizmoSettings3D *this,GizmoPlaneSlider3D *dblSlider,PlaneId__Enum planeId,
               MethodInfo *method)

{
  pGVar1 = (this->fields)._mvDblSliderSettings;
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


/* Void ConnectMvSliderSettings(GizmoLineSlider3D, Int32, AxisSign) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
     UniversalGizmoSettings3D_ConnectMvSliderSettings
               (UniversalGizmoSettings3D *this,GizmoLineSlider3D *slider,int32_t axisIndex,
               AxisSign__Enum axisSign,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSliderSettings;
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


/* Void ConnectRtCamLookSliderSettings(GizmoPlaneSlider2D) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
     UniversalGizmoSettings3D_ConnectRtCamLookSliderSettings
               (UniversalGizmoSettings3D *this,GizmoPlaneSlider2D *slider,MethodInfo *method)

{
  if (slider == (GizmoPlaneSlider2D *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = iRam_? != 0;
  (slider->fields)._sharedSettings = (this->fields)._rtCamLookSliderSettings;
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


/* Void ConnectRtSliderSettings(GizmoPlaneSlider3D, Int32) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
     UniversalGizmoSettings3D_ConnectRtSliderSettings
               (UniversalGizmoSettings3D *this,GizmoPlaneSlider3D *slider,int32_t axisIndex,
               MethodInfo *method)

{
  pGVar1 = (this->fields)._rtSliderSettings;
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


/* Void ConnectScDblSliderSettings(GizmoPlaneSlider3D, PlaneId) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
     UniversalGizmoSettings3D_ConnectScDblSliderSettings
               (UniversalGizmoSettings3D *this,GizmoPlaneSlider3D *dblSlider,PlaneId__Enum planeId,
               MethodInfo *method)

{
  pGVar1 = (this->fields)._scDblSliderSettings;
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


/* Void ConnectScSliderSettings(GizmoLineSlider3D, Int32, AxisSign) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
     UniversalGizmoSettings3D_ConnectScSliderSettings
               (UniversalGizmoSettings3D *this,GizmoLineSlider3D *slider,int32_t axisIndex,
               AxisSign__Enum axisSign,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSliderSettings;
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


/* GizmoPlaneSlider3DSettings GetMvDblSliderSettings(PlaneId) */

GizmoPlaneSlider3DSettings *
Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_GetMvDblSliderSettings
          (UniversalGizmoSettings3D *this,PlaneId__Enum planeId,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvDblSliderSettings;
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


/* GizmoLineSlider3DSettings GetMvSglSliderSettings(Int32, AxisSign) */

GizmoLineSlider3DSettings *
Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_GetMvSglSliderSettings
          (UniversalGizmoSettings3D *this,int32_t axisIndex,AxisSign__Enum axisSign,
          MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSliderSettings;
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


/* GizmoPlaneSlider3DSettings GetScDblSliderSettings(PlaneId) */

GizmoPlaneSlider3DSettings *
Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_GetScDblSliderSettings
          (UniversalGizmoSettings3D *this,PlaneId__Enum planeId,MethodInfo *method)

{
  pGVar1 = (this->fields)._scDblSliderSettings;
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


/* GizmoLineSlider3DSettings GetScSglSliderSettings(Int32, AxisSign) */

GizmoLineSlider3DSettings *
Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_GetScSglSliderSettings
          (UniversalGizmoSettings3D *this,int32_t axisIndex,AxisSign__Enum axisSign,
          MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSliderSettings;
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


/* Void Inherit(MoveGizmoSettings3D) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_Inherit
               (UniversalGizmoSettings3D *this,MoveGizmoSettings3D *settings,MethodInfo *method)

{
  if ((settings != (MoveGizmoSettings3D *)0x0) &&
     (pGVar1 = (settings->fields)._sglSliderSettings,
     pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0)) {
    pUVar2 = this;
    pGVar3 = (GizmoLineSlider3DSettings__Array *)settings;
    if ((int)pGVar1->max_length == 0) goto code_?;
    if (pGVar1->vector[0] != (GizmoLineSlider3DSettings *)0x0) {
      pGVar3 = (this->fields)._mvSglSliderSettings;
      uVar4 = 0;
      fVar5 = (pGVar1->vector[0]->fields)._lineHoverEps;
      uVar6 = 0;
      pUVar2 = (UniversalGizmoSettings3D *)0x0;
      if (pGVar3 != (GizmoLineSlider3DSettings__Array *)0x0) {
        method = (MethodInfo *)pGVar3->vector;
        while ((int)pUVar2 < (int)pGVar3->max_length) {
          if ((uint)pGVar3->max_length <= uVar6) goto code_?;
          pGVar7 = (GizmoLineSlider3DSettings *)method->methodPointer;
          if (pGVar7 == (GizmoLineSlider3DSettings *)0x0) goto code_?;
          if (0.0 <= fVar5) {
            uVar6 = uVar6 + 1;
            (pGVar7->fields)._lineHoverEps = fVar5;
            method = (MethodInfo *)&method->virtualMethodPointer;
            pUVar2 = (UniversalGizmoSettings3D *)(ulonglong)uVar6;
          }
          else {
            uVar6 = uVar6 + 1;
            (pGVar7->fields)._lineHoverEps = 0.0;
            method = (MethodInfo *)&method->virtualMethodPointer;
            pUVar2 = (UniversalGizmoSettings3D *)(ulonglong)uVar6;
          }
        }
        pGVar1 = (settings->fields)._sglSliderSettings;
        if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
          if ((int)pGVar1->max_length == 0) goto code_?;
          if (pGVar1->vector[0] != (GizmoLineSlider3DSettings *)0x0) {
            fVar5 = (pGVar1->vector[0]->fields)._boxHoverEps;
            pUVar2 = (UniversalGizmoSettings3D *)0x0;
            uVar6 = 0;
            if (pGVar3 != (GizmoLineSlider3DSettings__Array *)0x0) {
              method = (MethodInfo *)pGVar3->vector;
              while ((int)pUVar2 < (int)pGVar3->max_length) {
                if ((uint)pGVar3->max_length <= uVar6) goto code_?;
                pGVar7 = (GizmoLineSlider3DSettings *)method->methodPointer;
                if (pGVar7 == (GizmoLineSlider3DSettings *)0x0) goto code_?;
                if (0.0 <= fVar5) {
                  uVar6 = uVar6 + 1;
                  (pGVar7->fields)._boxHoverEps = fVar5;
                  method = (MethodInfo *)&method->virtualMethodPointer;
                  pUVar2 = (UniversalGizmoSettings3D *)(ulonglong)uVar6;
                }
                else {
                  uVar6 = uVar6 + 1;
                  (pGVar7->fields)._boxHoverEps = 0.0;
                  method = (MethodInfo *)&method->virtualMethodPointer;
                  pUVar2 = (UniversalGizmoSettings3D *)(ulonglong)uVar6;
                }
              }
              pGVar1 = (settings->fields)._sglSliderSettings;
              if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
                if ((int)pGVar1->max_length == 0) goto code_?;
                if (pGVar1->vector[0] != (GizmoLineSlider3DSettings *)0x0) {
                  fVar5 = (pGVar1->vector[0]->fields)._cylinderHoverEps;
                  pUVar2 = (UniversalGizmoSettings3D *)0x0;
                  uVar6 = 0;
                  if (pGVar3 != (GizmoLineSlider3DSettings__Array *)0x0) {
                    method = (MethodInfo *)pGVar3->vector;
                    while (fVar8 = _UNK_?, (int)pUVar2 < (int)pGVar3->max_length) {
                      if ((uint)pGVar3->max_length <= uVar6) goto code_?;
                      pGVar7 = (GizmoLineSlider3DSettings *)method->methodPointer;
                      if (pGVar7 == (GizmoLineSlider3DSettings *)0x0) goto code_?;
                      if (0.0 <= fVar5) {
                        uVar6 = uVar6 + 1;
                        (pGVar7->fields)._cylinderHoverEps = fVar5;
                        method = (MethodInfo *)&method->virtualMethodPointer;
                        pUVar2 = (UniversalGizmoSettings3D *)(ulonglong)uVar6;
                      }
                      else {
                        uVar6 = uVar6 + 1;
                        (pGVar7->fields)._cylinderHoverEps = 0.0;
                        method = (MethodInfo *)&method->virtualMethodPointer;
                        pUVar2 = (UniversalGizmoSettings3D *)(ulonglong)uVar6;
                      }
                    }
                    pGVar1 = (settings->fields)._sglSliderSettings;
                    if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
                      if ((int)pGVar1->max_length == 0) goto code_?;
                      if (pGVar1->vector[0] != (GizmoLineSlider3DSettings *)0x0) {
                        fVar5 = (pGVar1->vector[0]->fields)._offsetSensitivity;
                        pUVar2 = (UniversalGizmoSettings3D *)0x0;
                        uVar6 = 0;
                        if (pGVar3 != (GizmoLineSlider3DSettings__Array *)0x0) {
                          method = (MethodInfo *)pGVar3->vector;
                          while ((int)pUVar2 < (int)pGVar3->max_length) {
                            if ((uint)pGVar3->max_length <= uVar6) goto code_?;
                            pGVar7 = (GizmoLineSlider3DSettings *)method->methodPointer;
                            if (pGVar7 == (GizmoLineSlider3DSettings *)0x0)
                            goto code_?;
                            if (fVar8 <= fVar5) {
                              uVar6 = uVar6 + 1;
                              (pGVar7->fields)._offsetSensitivity = fVar5;
                              method = (MethodInfo *)&method->virtualMethodPointer;
                              pUVar2 = (UniversalGizmoSettings3D *)(ulonglong)uVar6;
                            }
                            else {
                              uVar6 = uVar6 + 1;
                              (pGVar7->fields)._offsetSensitivity = fVar8;
                              method = (MethodInfo *)&method->virtualMethodPointer;
                              pUVar2 = (UniversalGizmoSettings3D *)(ulonglong)uVar6;
                            }
                          }
                          pGVar9 = (this->fields)._mvDblSliderSettings;
                          pUVar2 = (UniversalGizmoSettings3D *)0x0;
                          if (pGVar9 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
                            pGVar3 = (GizmoLineSlider3DSettings__Array *)pGVar9->vector;
                            while ((int)pUVar2 < (int)pGVar9->max_length) {
                              if ((uint)pGVar9->max_length <= uVar4) goto code_?;
                              pGVar10 = pGVar3->klass;
                              if (pGVar10 == (GizmoLineSlider3DSettings__Array__Class *)0x0)
                              goto code_?;
                              if (fVar8 <= fVar5) {
                                uVar4 = uVar4 + 1;
                                *(float *)&(pGVar10->_0).castClass = fVar5;
                                pGVar3 = (GizmoLineSlider3DSettings__Array *)&pGVar3->monitor;
                                pUVar2 = (UniversalGizmoSettings3D *)(ulonglong)uVar4;
                              }
                              else {
                                uVar4 = uVar4 + 1;
                                *(float *)&(pGVar10->_0).castClass = fVar8;
                                pGVar3 = (GizmoLineSlider3DSettings__Array *)&pGVar3->monitor;
                                pUVar2 = (UniversalGizmoSettings3D *)(ulonglong)uVar4;
                              }
                            }
                            pGVar1 = (settings->fields)._sglSliderSettings;
                            if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
                              if ((int)pGVar1->max_length == 0) {
code_?:
                                FUN_?(pUVar2,pGVar3,method);
                                pcVar11 = (code *)swi(3);
                                (*pcVar11)();
                                return;
                              }
                              pUVar2 = (UniversalGizmoSettings3D *)pGVar1->vector[0];
                              if (pUVar2 != (UniversalGizmoSettings3D *)0x0) {
                                pGVar1 = (this->fields)._mvSglSliderSettings;
                                fVar5 = *(float *)((longlong)&(pUVar2->fields)._._foldoutLabel + 4)
                                ;
                                if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
                                  if ((int)pGVar1->max_length == 0) goto code_?;
                                  pUVar2 = (UniversalGizmoSettings3D *)pGVar1->vector[0];
                                  if (pUVar2 != (UniversalGizmoSettings3D *)0x0) {
                                    fVar12 = fVar5;
                                    if (fVar5 < fVar8) {
                                      fVar12 = fVar8;
                                    }
                                    *(float *)((longlong)&(pUVar2->fields)._._foldoutLabel + 4) =
                                         fVar12;
                                    if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
                                      if ((uint)pGVar1->max_length < 4) goto code_?;
                                      pUVar2 = (UniversalGizmoSettings3D *)pGVar1->vector[3];
                                      if (pUVar2 != (UniversalGizmoSettings3D *)0x0) {
                                        fVar12 = fVar5;
                                        if (fVar5 < fVar8) {
                                          fVar12 = fVar8;
                                        }
                                        pGVar9 = (this->fields)._mvDblSliderSettings;
                                        *(float *)((longlong)&(pUVar2->fields)._._foldoutLabel + 4)
                                             = fVar12;
                                        if (pGVar9 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
                                          if ((int)pGVar9->max_length == 0)
                                          goto code_?;
                                          pUVar2 = (UniversalGizmoSettings3D *)pGVar9->vector[0];
                                          if (pUVar2 != (UniversalGizmoSettings3D *)0x0) {
                                            fVar12 = fVar5;
                                            if (fVar5 < fVar8) {
                                              fVar12 = fVar8;
                                            }
                                            (pUVar2->fields)._displayCategory = (int32_t)fVar12;
                                            if (pGVar9 != (GizmoPlaneSlider3DSettings__Array *)0x0)
                                            {
                                              if ((uint)pGVar9->max_length < 3)
                                              goto code_?;
                                              pUVar2 = (UniversalGizmoSettings3D *)pGVar9->vector[2]
                                              ;
                                              if (pUVar2 != (UniversalGizmoSettings3D *)0x0) {
                                                if (fVar5 < fVar8) {
                                                  fVar5 = fVar8;
                                                }
                                                *(float *)&(pUVar2->fields).field_0x1c = fVar5;
                                                pGVar1 = (settings->fields)._sglSliderSettings;
                                                if (pGVar1 != (GizmoLineSlider3DSettings__Array *)
                                                              0x0) {
                                                  if ((uint)pGVar1->max_length < 2)
                                                  goto code_?;
                                                  pUVar2 = (UniversalGizmoSettings3D *)
                                                           pGVar1->vector[1];
                                                  if (pUVar2 != (UniversalGizmoSettings3D *)0x0) {
                                                    pGVar1 = (this->fields)._mvSglSliderSettings;
                                                    fVar5 = *(float *)((longlong)
                                                                        &(pUVar2->fields)._.
                                                                         _foldoutLabel + 4);
                                                    if (pGVar1 != (GizmoLineSlider3DSettings__Array
                                                                   *)0x0) {
                                                      if ((uint)pGVar1->max_length < 2)
                                                      goto code_?;
                                                      pUVar2 = (UniversalGizmoSettings3D *)
                                                               pGVar1->vector[1];
                                                      if (pUVar2 != (UniversalGizmoSettings3D *)0x0)
                                                      {
                                                        fVar12 = fVar5;
                                                        if (fVar5 < fVar8) {
                                                          fVar12 = fVar8;
                                                        }
                                                        *(float *)((longlong)
                                                                   &(pUVar2->fields)._._foldoutLabel
                                                                  + 4) = fVar12;
                                                        if (pGVar1 != (
                                                  GizmoLineSlider3DSettings__Array *)0x0) {
                                                    if ((uint)pGVar1->max_length < 5)
                                                    goto code_?;
                                                    pUVar2 = (UniversalGizmoSettings3D *)
                                                             pGVar1->vector[4];
                                                    if (pUVar2 != (UniversalGizmoSettings3D *)0x0) {
                                                      fVar12 = fVar5;
                                                      if (fVar5 < fVar8) {
                                                        fVar12 = fVar8;
                                                      }
                                                      pGVar9 = (this->fields)._mvDblSliderSettings;
                                                      *(float *)((longlong)
                                                                 &(pUVar2->fields)._._foldoutLabel +
                                                                4) = fVar12;
                                                      if (pGVar9 != (
                                                  GizmoPlaneSlider3DSettings__Array *)0x0) {
                                                    if ((int)pGVar9->max_length == 0)
                                                    goto code_?;
                                                    pUVar2 = (UniversalGizmoSettings3D *)
                                                             pGVar9->vector[0];
                                                    if (pUVar2 != (UniversalGizmoSettings3D *)0x0) {
                                                      fVar12 = fVar5;
                                                      if (fVar5 < fVar8) {
                                                        fVar12 = fVar8;
                                                      }
                                                      *(float *)&(pUVar2->fields).field_0x1c =
                                                           fVar12;
                                                      if (pGVar9 != (
                                                  GizmoPlaneSlider3DSettings__Array *)0x0) {
                                                    if ((uint)pGVar9->max_length < 2)
                                                    goto code_?;
                                                    pUVar2 = (UniversalGizmoSettings3D *)
                                                             pGVar9->vector[1];
                                                    if (pUVar2 != (UniversalGizmoSettings3D *)0x0) {
                                                      if (fVar5 < fVar8) {
                                                        fVar5 = fVar8;
                                                      }
                                                      (pUVar2->fields)._displayCategory =
                                                           (int32_t)fVar5;
                                                      pGVar1 = (settings->fields)._sglSliderSettings
                                                      ;
                                                      if (pGVar1 != (
                                                  GizmoLineSlider3DSettings__Array *)0x0) {
                                                    if ((uint)pGVar1->max_length < 3)
                                                    goto code_?;
                                                    pUVar2 = (UniversalGizmoSettings3D *)
                                                             pGVar1->vector[2];
                                                    if (pUVar2 != (UniversalGizmoSettings3D *)0x0) {
                                                      pGVar1 = (this->fields)._mvSglSliderSettings;
                                                      fVar5 = *(float *)((longlong)
                                                                          &(pUVar2->fields)._.
                                                                           _foldoutLabel + 4);
                                                      if (pGVar1 != (
                                                  GizmoLineSlider3DSettings__Array *)0x0) {
                                                    if ((uint)pGVar1->max_length < 3)
                                                    goto code_?;
                                                    pUVar2 = (UniversalGizmoSettings3D *)
                                                             pGVar1->vector[2];
                                                    if (pUVar2 != (UniversalGizmoSettings3D *)0x0) {
                                                      fVar12 = fVar5;
                                                      if (fVar5 < fVar8) {
                                                        fVar12 = fVar8;
                                                      }
                                                      *(float *)((longlong)
                                                                 &(pUVar2->fields)._._foldoutLabel +
                                                                4) = fVar12;
                                                      if (pGVar1 != (
                                                  GizmoLineSlider3DSettings__Array *)0x0) {
                                                    if ((uint)pGVar1->max_length < 6)
                                                    goto code_?;
                                                    pUVar2 = (UniversalGizmoSettings3D *)
                                                             pGVar1->vector[5];
                                                    if (pUVar2 != (UniversalGizmoSettings3D *)0x0) {
                                                      fVar12 = fVar5;
                                                      if (fVar5 < fVar8) {
                                                        fVar12 = fVar8;
                                                      }
                                                      pGVar9 = (this->fields)._mvDblSliderSettings;
                                                      *(float *)((longlong)
                                                                 &(pUVar2->fields)._._foldoutLabel +
                                                                4) = fVar12;
                                                      if (pGVar9 != (
                                                  GizmoPlaneSlider3DSettings__Array *)0x0) {
                                                    if ((uint)pGVar9->max_length < 2)
                                                    goto code_?;
                                                    pUVar2 = (UniversalGizmoSettings3D *)
                                                             pGVar9->vector[1];
                                                    if (pUVar2 != (UniversalGizmoSettings3D *)0x0) {
                                                      fVar12 = fVar5;
                                                      if (fVar5 < fVar8) {
                                                        fVar12 = fVar8;
                                                      }
                                                      *(float *)&(pUVar2->fields).field_0x1c =
                                                           fVar12;
                                                      if (pGVar9 != (
                                                  GizmoPlaneSlider3DSettings__Array *)0x0) {
                                                    if ((uint)pGVar9->max_length < 3)
                                                    goto code_?;
                                                    if (pGVar9->vector[2] !=
                                                        (GizmoPlaneSlider3DSettings *)0x0) {
                                                      if (fVar8 <= fVar5) {
                                                        fVar8 = fVar5;
                                                      }
                                                      (pGVar9->vector[2]->fields).
                                                      _offsetSnapStepRight = fVar8;
                                                      pGVar13 = (settings->fields).
                                                               _vertexSnapSettings;
                                                      if ((pGVar13 != (GizmoObjectVertexSnapSettings
                                                                      *)0x0) &&
                                                         (pGVar14 = (this->fields).
                                                                   _mvVertexSnapSettings,
                                                         pGVar14 != (GizmoObjectVertexSnapSettings *)
                                                                   0x0)) {
                                                        (pGVar14->fields)._snapDestinationLayers =
                                                             (pGVar13->fields)._snapDestinationLayers
                                                        ;
                                                        (pGVar14->fields)._canSnapToGrid =
                                                             (pGVar13->fields)._canSnapToGrid;
                                                        (pGVar14->fields)._canSnapToObjectVerts =
                                                             (pGVar13->fields)._canSnapToObjectVerts;
                                                        return;
                                                      }
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Inherit(RotationGizmoSettings3D) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_Inherit_1
               (UniversalGizmoSettings3D *this,RotationGizmoSettings3D *settings,MethodInfo *method)

{
  if ((settings != (RotationGizmoSettings3D *)0x0) &&
     (pGVar1 = (settings->fields)._sliderSettings,
     pGVar1 != (GizmoPlaneSlider3DSettings__Array *)0x0)) {
    if ((int)pGVar1->max_length == 0) goto code_?;
    if (pGVar1->vector[0] != (GizmoPlaneSlider3DSettings *)0x0) {
      pGVar2 = (this->fields)._rtSliderSettings;
      uVar3 = 0;
      fVar4 = (pGVar1->vector[0]->fields)._borderLineHoverEps;
      uVar5 = 0;
      if (pGVar2 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
        ppGVar6 = pGVar2->vector;
        while ((int)uVar5 < (int)pGVar2->max_length) {
          if ((uint)pGVar2->max_length <= uVar5) goto code_?;
          pGVar7 = *ppGVar6;
          if (pGVar7 == (GizmoPlaneSlider3DSettings *)0x0) goto code_?;
          if (0.0 <= fVar4) {
            uVar5 = uVar5 + 1;
            (pGVar7->fields)._borderLineHoverEps = fVar4;
            ppGVar6 = ppGVar6 + 1;
          }
          else {
            uVar5 = uVar5 + 1;
            (pGVar7->fields)._borderLineHoverEps = 0.0;
            ppGVar6 = ppGVar6 + 1;
          }
        }
        pGVar1 = (settings->fields)._sliderSettings;
        if (pGVar1 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
          if ((int)pGVar1->max_length == 0) goto code_?;
          if (pGVar1->vector[0] != (GizmoPlaneSlider3DSettings *)0x0) {
            UniversalGizmoSettings3D_SetRtAxisTorusHoverEps
                      (this,(pGVar1->vector[0]->fields)._borderTorusHoverEps,(MethodInfo *)0x0);
            pGVar8 = (settings->fields)._camLookSliderSettings;
            if ((pGVar8 != (GizmoPlaneSlider2DSettings *)0x0) &&
               (pGVar9 = (this->fields)._rtCamLookSliderSettings,
               pGVar9 != (GizmoPlaneSlider2DSettings *)0x0)) {
              fVar4 = (pGVar8->fields)._thickBorderPolyHoverEps;
              if (fVar4 < 0.0) {
                fVar4 = 0.0;
              }
              (pGVar9->fields)._thickBorderPolyHoverEps = fVar4;
              pGVar8 = (settings->fields)._camLookSliderSettings;
              if ((pGVar8 != (GizmoPlaneSlider2DSettings *)0x0) &&
                 (pGVar9 = (this->fields)._rtCamLookSliderSettings,
                 pGVar9 != (GizmoPlaneSlider2DSettings *)0x0)) {
                fVar4 = (pGVar8->fields)._borderLineHoverEps;
                fVar10 = 0.0;
                if (0.0 <= fVar4) {
                  fVar10 = fVar4;
                }
                (pGVar9->fields)._borderLineHoverEps = fVar10;
                fVar4 = _UNK_?;
                pGVar8 = (settings->fields)._camLookSliderSettings;
                if ((pGVar8 != (GizmoPlaneSlider2DSettings *)0x0) &&
                   (pGVar9 = (this->fields)._rtCamLookSliderSettings,
                   pGVar9 != (GizmoPlaneSlider2DSettings *)0x0)) {
                  fVar10 = (pGVar8->fields)._rotationSnapStep;
                  if (fVar10 < _UNK_?) {
                    fVar10 = _UNK_?;
                  }
                  (pGVar9->fields)._rotationSnapStep = fVar10;
                  fVar10 = (settings->fields)._camRightSnapStep;
                  if (fVar10 < fVar4) {
                    fVar10 = fVar4;
                  }
                  (this->fields)._rtCamRightSnapStep = fVar10;
                  fVar10 = (settings->fields)._camUpSnapStep;
                  if (fVar10 < fVar4) {
                    fVar10 = fVar4;
                  }
                  (this->fields)._rtCamUpSnapStep = fVar10;
                  pGVar1 = (settings->fields)._sliderSettings;
                  if (pGVar1 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
                    if ((int)pGVar1->max_length == 0) goto code_?;
                    if (pGVar1->vector[0] != (GizmoPlaneSlider3DSettings *)0x0) {
                      pGVar2 = (this->fields)._rtSliderSettings;
                      bVar11 = (pGVar1->vector[0]->fields)._isCircleHoverCullEnabled;
                      uVar5 = 0;
                      if (pGVar2 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
                        ppGVar6 = pGVar2->vector;
                        for (; (int)uVar5 < (int)pGVar2->max_length; uVar5 = uVar5 + 1) {
                          if ((uint)pGVar2->max_length <= uVar5) goto code_?;
                          if (*ppGVar6 == (GizmoPlaneSlider3DSettings *)0x0)
                          goto code_?;
                          ((*ppGVar6)->fields)._isCircleHoverCullEnabled = bVar11 != 0;
                          ppGVar6 = ppGVar6 + 1;
                        }
                        pGVar1 = (settings->fields)._sliderSettings;
                        if (pGVar1 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
                          if ((int)pGVar1->max_length == 0) goto code_?;
                          if (pGVar1->vector[0] != (GizmoPlaneSlider3DSettings *)0x0) {
                            pGVar2 = (this->fields)._rtSliderSettings;
                            fVar10 = (pGVar1->vector[0]->fields)._rotationSensitivity;
                            uVar5 = 0;
                            if (pGVar2 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
                              ppGVar6 = pGVar2->vector;
                              while ((int)uVar5 < (int)pGVar2->max_length) {
                                if ((uint)pGVar2->max_length <= uVar5) goto code_?;
                                pGVar7 = *ppGVar6;
                                if (pGVar7 == (GizmoPlaneSlider3DSettings *)0x0)
                                goto code_?;
                                if (fVar4 <= fVar10) {
                                  uVar5 = uVar5 + 1;
                                  (pGVar7->fields)._rotationSensitivity = fVar10;
                                  ppGVar6 = ppGVar6 + 1;
                                }
                                else {
                                  uVar5 = uVar5 + 1;
                                  (pGVar7->fields)._rotationSensitivity = fVar4;
                                  ppGVar6 = ppGVar6 + 1;
                                }
                              }
                              pGVar8 = (this->fields)._rtCamLookSliderSettings;
                              if (pGVar8 != (GizmoPlaneSlider2DSettings *)0x0) {
                                if (fVar10 < fVar4) {
                                  fVar10 = fVar4;
                                }
                                (pGVar8->fields)._rotationSensitivity = fVar10;
                                pGVar1 = (settings->fields)._sliderSettings;
                                if (pGVar1 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
                                  if ((int)pGVar1->max_length == 0) goto code_?;
                                  if (pGVar1->vector[0] != (GizmoPlaneSlider3DSettings *)0x0) {
                                    pGVar2 = (this->fields)._rtSliderSettings;
                                    iVar12 = (pGVar1->vector[0]->fields)._rotationSnapMode;
                                    if (pGVar2 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
                                      ppGVar6 = pGVar2->vector;
                                      for (; (int)uVar3 < (int)pGVar2->max_length;
                                          uVar3 = uVar3 + 1) {
                                        if ((uint)pGVar2->max_length <= uVar3)
                                        goto code_?;
                                        if (*ppGVar6 == (GizmoPlaneSlider3DSettings *)0x0)
                                        goto code_?;
                                        ((*ppGVar6)->fields)._rotationSnapMode = iVar12;
                                        ppGVar6 = ppGVar6 + 1;
                                      }
                                      pGVar8 = (this->fields)._rtCamLookSliderSettings;
                                      if (pGVar8 != (GizmoPlaneSlider2DSettings *)0x0) {
                                        (pGVar8->fields)._rotationSnapMode = iVar12;
                                        pGVar1 = (settings->fields)._sliderSettings;
                                        if (pGVar1 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
                                          if ((int)pGVar1->max_length == 0) {
code_?:
                                            FUN_?();
                                            pcVar13 = (code *)swi(3);
                                            (*pcVar13)();
                                            return;
                                          }
                                          if (pGVar1->vector[0] != (GizmoPlaneSlider3DSettings *)0x0
                                             ) {
                                            pGVar2 = (this->fields)._rtSliderSettings;
                                            fVar10 = (pGVar1->vector[0]->fields)._rotationSnapStep;
                                            if (pGVar2 != (GizmoPlaneSlider3DSettings__Array *)0x0)
                                            {
                                              if ((int)pGVar2->max_length == 0)
                                              goto code_?;
                                              if (pGVar2->vector[0] !=
                                                  (GizmoPlaneSlider3DSettings *)0x0) {
                                                if (fVar10 < fVar4) {
                                                  fVar10 = fVar4;
                                                }
                                                (pGVar2->vector[0]->fields)._rotationSnapStep =
                                                     fVar10;
                                                pGVar1 = (settings->fields)._sliderSettings;
                                                if (pGVar1 != (GizmoPlaneSlider3DSettings__Array *)
                                                              0x0) {
                                                  if ((uint)pGVar1->max_length < 2)
                                                  goto code_?;
                                                  if (pGVar1->vector[1] !=
                                                      (GizmoPlaneSlider3DSettings *)0x0) {
                                                    pGVar2 = (this->fields)._rtSliderSettings;
                                                    fVar10 = (pGVar1->vector[1]->fields).
                                                             _rotationSnapStep;
                                                    if (pGVar2 != (GizmoPlaneSlider3DSettings__Array
                                                                   *)0x0) {
                                                      if ((uint)pGVar2->max_length < 2)
                                                      goto code_?;
                                                      if (pGVar2->vector[1] !=
                                                          (GizmoPlaneSlider3DSettings *)0x0) {
                                                        if (fVar10 < fVar4) {
                                                          fVar10 = fVar4;
                                                        }
                                                        (pGVar2->vector[1]->fields).
                                                        _rotationSnapStep = fVar10;
                                                        pGVar1 = (settings->fields)._sliderSettings;
                                                        if (pGVar1 != (
                                                  GizmoPlaneSlider3DSettings__Array *)0x0) {
                                                    if ((uint)pGVar1->max_length < 3)
                                                    goto code_?;
                                                    if (pGVar1->vector[2] !=
                                                        (GizmoPlaneSlider3DSettings *)0x0) {
                                                      pGVar2 = (this->fields)._rtSliderSettings;
                                                      fVar10 = (pGVar1->vector[2]->fields).
                                                               _rotationSnapStep;
                                                      if (pGVar2 != (
                                                  GizmoPlaneSlider3DSettings__Array *)0x0) {
                                                    if ((uint)pGVar2->max_length < 3)
                                                    goto code_?;
                                                    if (pGVar2->vector[2] !=
                                                        (GizmoPlaneSlider3DSettings *)0x0) {
                                                      if (fVar4 <= fVar10) {
                                                        fVar4 = fVar10;
                                                      }
                                                      (pGVar2->vector[2]->fields)._rotationSnapStep
                                                           = fVar4;
                                                      return;
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void Inherit(ScaleGizmoSettings3D) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_Inherit_2
               (UniversalGizmoSettings3D *this,ScaleGizmoSettings3D *settings,MethodInfo *method)

{
  if ((settings != (ScaleGizmoSettings3D *)0x0) &&
     (pGVar1 = (settings->fields)._sglSliderSettings,
     pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0)) {
    if ((int)pGVar1->max_length == 0) goto code_?;
    if (pGVar1->vector[0] != (GizmoLineSlider3DSettings *)0x0) {
      pGVar2 = (this->fields)._scSglSliderSettings;
      uVar3 = 0;
      fVar4 = (pGVar1->vector[0]->fields)._lineHoverEps;
      uVar5 = 0;
      if (pGVar2 != (GizmoLineSlider3DSettings__Array *)0x0) {
        ppGVar6 = pGVar2->vector;
        while ((int)uVar5 < (int)pGVar2->max_length) {
          if ((uint)pGVar2->max_length <= uVar5) goto code_?;
          pGVar7 = *ppGVar6;
          if (pGVar7 == (GizmoLineSlider3DSettings *)0x0) goto code_?;
          if (0.0 <= fVar4) {
            uVar5 = uVar5 + 1;
            (pGVar7->fields)._lineHoverEps = fVar4;
            ppGVar6 = ppGVar6 + 1;
          }
          else {
            uVar5 = uVar5 + 1;
            (pGVar7->fields)._lineHoverEps = 0.0;
            ppGVar6 = ppGVar6 + 1;
          }
        }
        pGVar1 = (settings->fields)._sglSliderSettings;
        if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
          if ((int)pGVar1->max_length == 0) goto code_?;
          if (pGVar1->vector[0] != (GizmoLineSlider3DSettings *)0x0) {
            fVar4 = (pGVar1->vector[0]->fields)._cylinderHoverEps;
            uVar5 = 0;
            if (pGVar2 != (GizmoLineSlider3DSettings__Array *)0x0) {
              ppGVar6 = pGVar2->vector;
              while ((int)uVar5 < (int)pGVar2->max_length) {
                if ((uint)pGVar2->max_length <= uVar5) goto code_?;
                pGVar7 = *ppGVar6;
                if (pGVar7 == (GizmoLineSlider3DSettings *)0x0) goto code_?;
                if (0.0 <= fVar4) {
                  uVar5 = uVar5 + 1;
                  (pGVar7->fields)._cylinderHoverEps = fVar4;
                  ppGVar6 = ppGVar6 + 1;
                }
                else {
                  uVar5 = uVar5 + 1;
                  (pGVar7->fields)._cylinderHoverEps = 0.0;
                  ppGVar6 = ppGVar6 + 1;
                }
              }
              pGVar1 = (settings->fields)._sglSliderSettings;
              if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
                if ((int)pGVar1->max_length == 0) {
code_?:
                  FUN_?();
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                if ((pGVar1->vector[0] != (GizmoLineSlider3DSettings *)0x0) &&
                   (fVar4 = (pGVar1->vector[0]->fields)._boxHoverEps,
                   pGVar2 != (GizmoLineSlider3DSettings__Array *)0x0)) {
                  ppGVar6 = pGVar2->vector;
                  while ((int)uVar3 < (int)pGVar2->max_length) {
                    if ((uint)pGVar2->max_length <= uVar3) goto code_?;
                    pGVar7 = *ppGVar6;
                    if (pGVar7 == (GizmoLineSlider3DSettings *)0x0) goto code_?;
                    if (0.0 <= fVar4) {
                      uVar3 = uVar3 + 1;
                      (pGVar7->fields)._boxHoverEps = fVar4;
                      ppGVar6 = ppGVar6 + 1;
                    }
                    else {
                      uVar3 = uVar3 + 1;
                      (pGVar7->fields)._boxHoverEps = 0.0;
                      ppGVar6 = ppGVar6 + 1;
                    }
                  }
                  pGVar1 = (settings->fields)._sglSliderSettings;
                  if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
                    if ((int)pGVar1->max_length == 0) goto code_?;
                    if (pGVar1->vector[0] != (GizmoLineSlider3DSettings *)0x0) {
                      UniversalGizmoSettings3D_SetScDragSensitivity
                                (this,(pGVar1->vector[0]->fields)._scaleSensitivity,
                                 (MethodInfo *)0x0);
                      fVar9 = _UNK_?;
                      fVar4 = (settings->fields)._uniformSnapStep;
                      if (fVar4 < _UNK_?) {
                        fVar4 = _UNK_?;
                      }
                      (this->fields)._scUniformSnapStep = fVar4;
                      pGVar1 = (settings->fields)._sglSliderSettings;
                      if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
                        if ((int)pGVar1->max_length == 0) goto code_?;
                        if (pGVar1->vector[0] != (GizmoLineSlider3DSettings *)0x0) {
                          pGVar2 = (this->fields)._scSglSliderSettings;
                          fVar4 = (pGVar1->vector[0]->fields)._scaleSnapStep;
                          if (pGVar2 != (GizmoLineSlider3DSettings__Array *)0x0) {
                            if ((int)pGVar2->max_length == 0) goto code_?;
                            if (pGVar2->vector[0] != (GizmoLineSlider3DSettings *)0x0) {
                              fVar10 = fVar4;
                              if (fVar4 < fVar9) {
                                fVar10 = fVar9;
                              }
                              (pGVar2->vector[0]->fields)._scaleSnapStep = fVar10;
                              pGVar1 = (this->fields)._scSglSliderSettings;
                              if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
                                if ((uint)pGVar1->max_length < 4) goto code_?;
                                if (pGVar1->vector[3] != (GizmoLineSlider3DSettings *)0x0) {
                                  fVar10 = fVar4;
                                  if (fVar4 < fVar9) {
                                    fVar10 = fVar9;
                                  }
                                  (pGVar1->vector[3]->fields)._scaleSnapStep = fVar10;
                                  pGVar11 = (this->fields)._scDblSliderSettings;
                                  if (pGVar11 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
                                    if ((int)pGVar11->max_length == 0) goto code_?;
                                    if (pGVar11->vector[0] != (GizmoPlaneSlider3DSettings *)0x0) {
                                      fVar10 = fVar4;
                                      if (fVar4 < fVar9) {
                                        fVar10 = fVar9;
                                      }
                                      (pGVar11->vector[0]->fields)._scaleSnapStepRight = fVar10;
                                      pGVar11 = (this->fields)._scDblSliderSettings;
                                      if (pGVar11 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
                                        if ((uint)pGVar11->max_length < 3) goto code_?;
                                        if (pGVar11->vector[2] != (GizmoPlaneSlider3DSettings *)0x0)
                                        {
                                          if (fVar4 < fVar9) {
                                            fVar4 = fVar9;
                                          }
                                          (pGVar11->vector[2]->fields)._scaleSnapStepUp = fVar4;
                                          pGVar1 = (settings->fields)._sglSliderSettings;
                                          if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
                                            if ((uint)pGVar1->max_length < 2)
                                            goto code_?;
                                            if (pGVar1->vector[1] !=
                                                (GizmoLineSlider3DSettings *)0x0) {
                                              pGVar2 = (this->fields)._scSglSliderSettings;
                                              fVar4 = (pGVar1->vector[1]->fields)._scaleSnapStep;
                                              if (pGVar2 != (GizmoLineSlider3DSettings__Array *)0x0)
                                              {
                                                if ((uint)pGVar2->max_length < 2)
                                                goto code_?;
                                                if (pGVar2->vector[1] !=
                                                    (GizmoLineSlider3DSettings *)0x0) {
                                                  fVar10 = fVar4;
                                                  if (fVar4 < fVar9) {
                                                    fVar10 = fVar9;
                                                  }
                                                  (pGVar2->vector[1]->fields)._scaleSnapStep =
                                                       fVar10;
                                                  pGVar1 = (this->fields)._scSglSliderSettings;
                                                  if (pGVar1 != (GizmoLineSlider3DSettings__Array *)
                                                                0x0) {
                                                    if ((uint)pGVar1->max_length < 5)
                                                    goto code_?;
                                                    if (pGVar1->vector[4] !=
                                                        (GizmoLineSlider3DSettings *)0x0) {
                                                      fVar10 = fVar4;
                                                      if (fVar4 < fVar9) {
                                                        fVar10 = fVar9;
                                                      }
                                                      (pGVar1->vector[4]->fields)._scaleSnapStep =
                                                           fVar10;
                                                      pGVar11 = (this->fields)._scDblSliderSettings;
                                                      if (pGVar11 != (
                                                  GizmoPlaneSlider3DSettings__Array *)0x0) {
                                                    if ((int)pGVar11->max_length == 0)
                                                    goto code_?;
                                                    if (pGVar11->vector[0] !=
                                                        (GizmoPlaneSlider3DSettings *)0x0) {
                                                      fVar10 = fVar4;
                                                      if (fVar4 < fVar9) {
                                                        fVar10 = fVar9;
                                                      }
                                                      (pGVar11->vector[0]->fields)._scaleSnapStepUp =
                                                           fVar10;
                                                      pGVar11 = (this->fields)._scDblSliderSettings;
                                                      if (pGVar11 != (
                                                  GizmoPlaneSlider3DSettings__Array *)0x0) {
                                                    if ((uint)pGVar11->max_length < 2)
                                                    goto code_?;
                                                    if (pGVar11->vector[1] !=
                                                        (GizmoPlaneSlider3DSettings *)0x0) {
                                                      if (fVar4 < fVar9) {
                                                        fVar4 = fVar9;
                                                      }
                                                      (pGVar11->vector[1]->fields).
                                                      _scaleSnapStepRight = fVar4;
                                                      pGVar1 = (settings->fields)._sglSliderSettings
                                                      ;
                                                      if (pGVar1 != (
                                                  GizmoLineSlider3DSettings__Array *)0x0) {
                                                    if ((uint)pGVar1->max_length < 3)
                                                    goto code_?;
                                                    if (pGVar1->vector[2] !=
                                                        (GizmoLineSlider3DSettings *)0x0) {
                                                      pGVar2 = (this->fields)._scSglSliderSettings;
                                                      fVar4 = (pGVar1->vector[2]->fields).
                                                               _scaleSnapStep;
                                                      if (pGVar2 != (
                                                  GizmoLineSlider3DSettings__Array *)0x0) {
                                                    if ((uint)pGVar2->max_length < 3)
                                                    goto code_?;
                                                    if (pGVar2->vector[2] !=
                                                        (GizmoLineSlider3DSettings *)0x0) {
                                                      fVar10 = fVar4;
                                                      if (fVar4 < fVar9) {
                                                        fVar10 = fVar9;
                                                      }
                                                      (pGVar2->vector[2]->fields)._scaleSnapStep =
                                                           fVar10;
                                                      pGVar1 = (this->fields)._scSglSliderSettings;
                                                      if (pGVar1 != (
                                                  GizmoLineSlider3DSettings__Array *)0x0) {
                                                    if ((uint)pGVar1->max_length < 6)
                                                    goto code_?;
                                                    if (pGVar1->vector[5] !=
                                                        (GizmoLineSlider3DSettings *)0x0) {
                                                      fVar10 = fVar4;
                                                      if (fVar4 < fVar9) {
                                                        fVar10 = fVar9;
                                                      }
                                                      (pGVar1->vector[5]->fields)._scaleSnapStep =
                                                           fVar10;
                                                      pGVar11 = (this->fields)._scDblSliderSettings;
                                                      if (pGVar11 != (
                                                  GizmoPlaneSlider3DSettings__Array *)0x0) {
                                                    if ((uint)pGVar11->max_length < 2)
                                                    goto code_?;
                                                    if (pGVar11->vector[1] !=
                                                        (GizmoPlaneSlider3DSettings *)0x0) {
                                                      fVar10 = fVar4;
                                                      if (fVar4 < fVar9) {
                                                        fVar10 = fVar9;
                                                      }
                                                      (pGVar11->vector[1]->fields)._scaleSnapStepUp =
                                                           fVar10;
                                                      pGVar11 = (this->fields)._scDblSliderSettings;
                                                      if (pGVar11 != (
                                                  GizmoPlaneSlider3DSettings__Array *)0x0) {
                                                    if ((uint)pGVar11->max_length < 3)
                                                    goto code_?;
                                                    if (pGVar11->vector[2] !=
                                                        (GizmoPlaneSlider3DSettings *)0x0) {
                                                      if (fVar4 < fVar9) {
                                                        fVar4 = fVar9;
                                                      }
                                                      (pGVar11->vector[2]->fields).
                                                      _scaleSnapStepRight = fVar4;
                                                      pGVar11 = (settings->fields)._dblSliderSettings
                                                      ;
                                                      if (pGVar11 != (
                                                  GizmoPlaneSlider3DSettings__Array *)0x0) {
                                                    if ((int)pGVar11->max_length == 0)
                                                    goto code_?;
                                                    if (pGVar11->vector[0] !=
                                                        (GizmoPlaneSlider3DSettings *)0x0) {
                                                      pGVar12 = (this->fields)._scDblSliderSettings;
                                                      fVar4 = (pGVar11->vector[0]->fields).
                                                               _proportionalScaleSnapStep;
                                                      if (pGVar12 != (
                                                  GizmoPlaneSlider3DSettings__Array *)0x0) {
                                                    if ((int)pGVar12->max_length == 0)
                                                    goto code_?;
                                                    if (pGVar12->vector[0] !=
                                                        (GizmoPlaneSlider3DSettings *)0x0) {
                                                      if (fVar4 < fVar9) {
                                                        fVar4 = fVar9;
                                                      }
                                                      (pGVar12->vector[0]->fields).
                                                      _proportionalScaleSnapStep = fVar4;
                                                      pGVar11 = (settings->fields)._dblSliderSettings
                                                      ;
                                                      if (pGVar11 != (
                                                  GizmoPlaneSlider3DSettings__Array *)0x0) {
                                                    if ((uint)pGVar11->max_length < 2)
                                                    goto code_?;
                                                    if (pGVar11->vector[1] !=
                                                        (GizmoPlaneSlider3DSettings *)0x0) {
                                                      pGVar12 = (this->fields)._scDblSliderSettings;
                                                      fVar4 = (pGVar11->vector[1]->fields).
                                                               _proportionalScaleSnapStep;
                                                      if (pGVar12 != (
                                                  GizmoPlaneSlider3DSettings__Array *)0x0) {
                                                    if ((uint)pGVar12->max_length < 2)
                                                    goto code_?;
                                                    if (pGVar12->vector[1] !=
                                                        (GizmoPlaneSlider3DSettings *)0x0) {
                                                      if (fVar4 < fVar9) {
                                                        fVar4 = fVar9;
                                                      }
                                                      (pGVar12->vector[1]->fields).
                                                      _proportionalScaleSnapStep = fVar4;
                                                      pGVar11 = (settings->fields)._dblSliderSettings
                                                      ;
                                                      if (pGVar11 != (
                                                  GizmoPlaneSlider3DSettings__Array *)0x0) {
                                                    if ((uint)pGVar11->max_length < 3)
                                                    goto code_?;
                                                    if (pGVar11->vector[2] !=
                                                        (GizmoPlaneSlider3DSettings *)0x0) {
                                                      pGVar12 = (this->fields)._scDblSliderSettings;
                                                      fVar4 = (pGVar11->vector[2]->fields).
                                                               _proportionalScaleSnapStep;
                                                      if (pGVar12 != (
                                                  GizmoPlaneSlider3DSettings__Array *)0x0) {
                                                    if ((uint)pGVar12->max_length < 3)
                                                    goto code_?;
                                                    if (pGVar12->vector[2] !=
                                                        (GizmoPlaneSlider3DSettings *)0x0) {
                                                      if (fVar9 <= fVar4) {
                                                        fVar9 = fVar4;
                                                      }
                                                      (pGVar12->vector[2]->fields).
                                                      _proportionalScaleSnapStep = fVar9;
                                                      return;
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetMvBoxSliderHoverEps(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
     UniversalGizmoSettings3D_SetMvBoxSliderHoverEps
               (UniversalGizmoSettings3D *this,float eps,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSliderSettings;
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


/* Void SetMvCylinderSliderHoverEps(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
     UniversalGizmoSettings3D_SetMvCylinderSliderHoverEps
               (UniversalGizmoSettings3D *this,float eps,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSliderSettings;
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


/* Void SetMvDragSensitivity(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
     UniversalGizmoSettings3D_SetMvDragSensitivity
               (UniversalGizmoSettings3D *this,float sensitivity,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pGVar2 = (this->fields)._mvSglSliderSettings;
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
    pGVar6 = (this->fields)._mvDblSliderSettings;
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


/* Void SetMvLineSliderHoverEps(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
     UniversalGizmoSettings3D_SetMvLineSliderHoverEps
               (UniversalGizmoSettings3D *this,float eps,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSliderSettings;
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


/* Void SetMvXSnapStep(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_SetMvXSnapStep
               (UniversalGizmoSettings3D *this,float snapStep,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pGVar2 = (this->fields)._mvSglSliderSettings;
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
          pGVar5 = (this->fields)._mvDblSliderSettings;
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


/* Void SetMvYSnapStep(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_SetMvYSnapStep
               (UniversalGizmoSettings3D *this,float snapStep,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pGVar2 = (this->fields)._mvSglSliderSettings;
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
          pGVar5 = (this->fields)._mvDblSliderSettings;
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


/* Void SetMvZSnapStep(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_SetMvZSnapStep
               (UniversalGizmoSettings3D *this,float snapStep,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pGVar2 = (this->fields)._mvSglSliderSettings;
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
          pGVar5 = (this->fields)._mvDblSliderSettings;
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


/* Void SetRtAxisLineHoverEps(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
     UniversalGizmoSettings3D_SetRtAxisLineHoverEps
               (UniversalGizmoSettings3D *this,float eps,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtSliderSettings;
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
        (pGVar4->fields)._borderLineHoverEps = eps;
        method = (MethodInfo *)&method->virtualMethodPointer;
      }
      else {
        uVar2 = uVar2 + 1;
        (pGVar4->fields)._borderLineHoverEps = 0.0;
        method = (MethodInfo *)&method->virtualMethodPointer;
      }
    }
  }
  FUN_?(0,pGVar1,method);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetRtAxisSnapStep(Int32, Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_SetRtAxisSnapStep
               (UniversalGizmoSettings3D *this,int32_t axisIndex,float snapStep,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtSliderSettings;
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


/* Void SetRtAxisTorusHoverEps(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
     UniversalGizmoSettings3D_SetRtAxisTorusHoverEps
               (UniversalGizmoSettings3D *this,float eps,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtSliderSettings;
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


/* Void SetRtCamLookLineHoverEps(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
     UniversalGizmoSettings3D_SetRtCamLookLineHoverEps
               (UniversalGizmoSettings3D *this,float eps,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtCamLookSliderSettings;
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


/* Void SetRtCamLookSnapStep(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
     UniversalGizmoSettings3D_SetRtCamLookSnapStep
               (UniversalGizmoSettings3D *this,float snapStep,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtCamLookSliderSettings;
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


/* Void SetRtCamLookThickHoverEps(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
     UniversalGizmoSettings3D_SetRtCamLookThickHoverEps
               (UniversalGizmoSettings3D *this,float eps,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtCamLookSliderSettings;
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


/* Void SetRtCamRightSnapStep(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
     UniversalGizmoSettings3D_SetRtCamRightSnapStep
               (UniversalGizmoSettings3D *this,float snapStep,MethodInfo *method)

{
  fVar1 = _UNK_?;
  if (_UNK_? <= snapStep) {
    fVar1 = snapStep;
  }
  (this->fields)._rtCamRightSnapStep = fVar1;
  return;
}


/* Void SetRtCamUpSnapStep(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_SetRtCamUpSnapStep
               (UniversalGizmoSettings3D *this,float snapStep,MethodInfo *method)

{
  fVar1 = _UNK_?;
  if (_UNK_? <= snapStep) {
    fVar1 = snapStep;
  }
  (this->fields)._rtCamUpSnapStep = fVar1;
  return;
}


/* Void SetRtCanHoverCulledPixels(Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
     UniversalGizmoSettings3D_SetRtCanHoverCulledPixels
               (UniversalGizmoSettings3D *this,bool canHover,MethodInfo *method)

{
  uVar1 = CONCAT71(in_register_00000011,canHover);
  pGVar2 = (this->fields)._rtSliderSettings;
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


/* Void SetRtDragSensitivity(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
     UniversalGizmoSettings3D_SetRtDragSensitivity
               (UniversalGizmoSettings3D *this,float sensitivity,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pGVar2 = (this->fields)._rtSliderSettings;
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
    pGVar7 = (this->fields)._rtCamLookSliderSettings;
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


/* Void SetRtSnapMode(GizmoSnapMode) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_SetRtSnapMode
               (UniversalGizmoSettings3D *this,GizmoSnapMode__Enum snapMode,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtSliderSettings;
  uVar2 = 0;
  pUVar3 = this;
  if (pGVar1 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
    method = (MethodInfo *)pGVar1->vector;
    for (; (int)uVar2 < (int)pGVar1->max_length; uVar2 = uVar2 + 1) {
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pUVar3 = (UniversalGizmoSettings3D *)method->methodPointer;
      if (pUVar3 == (UniversalGizmoSettings3D *)0x0) goto code_?;
      *(GizmoSnapMode__Enum *)((longlong)&(pUVar3->fields)._mvVertexSnapSettings + 4) = snapMode;
      method = (MethodInfo *)&method->virtualMethodPointer;
    }
    pGVar5 = (this->fields)._rtCamLookSliderSettings;
    if (pGVar5 != (GizmoPlaneSlider2DSettings *)0x0) {
      (pGVar5->fields)._rotationSnapMode = snapMode;
      return;
    }
  }
code_?:
  FUN_?(pUVar3,snapMode,method);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetScBoxSliderHoverEps(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
     UniversalGizmoSettings3D_SetScBoxSliderHoverEps
               (UniversalGizmoSettings3D *this,float eps,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSliderSettings;
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


/* Void SetScCylinderSliderHoverEps(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
     UniversalGizmoSettings3D_SetScCylinderSliderHoverEps
               (UniversalGizmoSettings3D *this,float eps,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSliderSettings;
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


/* Void SetScDragSensitivity(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
     UniversalGizmoSettings3D_SetScDragSensitivity
               (UniversalGizmoSettings3D *this,float sensitivity,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pGVar2 = (this->fields)._scSglSliderSettings;
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


/* Void SetScLineSliderHoverEps(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
     UniversalGizmoSettings3D_SetScLineSliderHoverEps
               (UniversalGizmoSettings3D *this,float eps,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSliderSettings;
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


/* Void SetScUniformScaleSnapStep(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
     UniversalGizmoSettings3D_SetScUniformScaleSnapStep
               (UniversalGizmoSettings3D *this,float snapStep,MethodInfo *method)

{
  fVar1 = _UNK_?;
  if (_UNK_? <= snapStep) {
    fVar1 = snapStep;
  }
  (this->fields)._scUniformSnapStep = fVar1;
  return;
}


/* Void SetScXSnapStep(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_SetScXSnapStep
               (UniversalGizmoSettings3D *this,float snapStep,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pGVar2 = (this->fields)._scSglSliderSettings;
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
          pGVar5 = (this->fields)._scDblSliderSettings;
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


/* Void SetScXYSnapStep(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_SetScXYSnapStep
               (UniversalGizmoSettings3D *this,float snapStep,MethodInfo *method)

{
  pGVar1 = (this->fields)._scDblSliderSettings;
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


/* Void SetScYSnapStep(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_SetScYSnapStep
               (UniversalGizmoSettings3D *this,float snapStep,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pGVar2 = (this->fields)._scSglSliderSettings;
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
          pGVar5 = (this->fields)._scDblSliderSettings;
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


/* Void SetScYZSnapStep(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_SetScYZSnapStep
               (UniversalGizmoSettings3D *this,float snapStep,MethodInfo *method)

{
  pGVar1 = (this->fields)._scDblSliderSettings;
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


/* Void SetScZSnapStep(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_SetScZSnapStep
               (UniversalGizmoSettings3D *this,float snapStep,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pGVar2 = (this->fields)._scSglSliderSettings;
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
          pGVar5 = (this->fields)._scDblSliderSettings;
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


/* Void SetScZXSnapStep(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_SetScZXSnapStep
               (UniversalGizmoSettings3D *this,float snapStep,MethodInfo *method)

{
  pGVar1 = (this->fields)._scDblSliderSettings;
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


/* UniversalGizmoSettings3D() */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D__ctor
               (UniversalGizmoSettings3D *this,MethodInfo *method)

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
  this_00 = (GizmoObjectVertexSnapSettings *)
            FUN_?(TypeInfo__RTG__GizmoObjectVertexSnapSettings);
  (this_00->fields)._snapDestinationLayers = -1;
  (this_00->fields)._canSnapToGrid = 1;
  (this_00->fields)._canSnapToObjectVerts = 1;
  Settings::Settings__ctor((Settings *)this_00,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._mvVertexSnapSettings = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._mvVertexSnapSettings >> 0xc);
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
  (this->fields)._mvSglSliderSettings = pGVar6;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._mvSglSliderSettings >> 0xc);
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
           FUN_?(TypeInfo__RTG__GizmoPlaneSlider3DSettings,3);
  bVar1 = iRam_? != 0;
  (this->fields)._mvDblSliderSettings = pGVar7;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._mvDblSliderSettings >> 0xc);
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
  (this->fields)._rtCamRightSnapStep = 15.0;
  (this->fields)._rtCamUpSnapStep = 15.0;
  pGVar7 = (GizmoPlaneSlider3DSettings__Array *)
           FUN_?(TypeInfo__RTG__GizmoPlaneSlider3DSettings,3);
  bVar1 = iRam_? != 0;
  (this->fields)._rtSliderSettings = pGVar7;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._rtSliderSettings >> 0xc);
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
  pGVar8 = (GizmoPlaneSlider2DSettings *)FUN_?(TypeInfo__RTG__GizmoPlaneSlider2DSettings);
  bVar1 = iRam_? != 0;
  (pGVar8->fields)._areaHoverEps = 1e-05;
  (pGVar8->fields)._borderLineHoverEps = 7.0;
  (pGVar8->fields)._thickBorderPolyHoverEps = 7.0;
  (pGVar8->fields)._offsetSnapStepRight = 1.0;
  (pGVar8->fields)._offsetSnapStepUp = 1.0;
  (pGVar8->fields)._rotationSnapStep = 15.0;
  (pGVar8->fields)._scaleMode = 1;
  (pGVar8->fields)._scaleSnapStepRight = 0.1;
  (pGVar8->fields)._scaleSnapStepUp = 0.1;
  (pGVar8->fields)._proportionalScaleSnapStep = 0.1;
  (pGVar8->fields)._offsetSensitivity = 1.0;
  (pGVar8->fields)._rotationSensitivity = 0.45;
  (pGVar8->fields)._scaleSensitivity = 1.0;
  (this->fields)._rtCamLookSliderSettings = pGVar8;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._rtCamLookSliderSettings >> 0xc);
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
  (this->fields)._scUniformSnapStep = 0.1;
  pGVar6 = (GizmoLineSlider3DSettings__Array *)
           FUN_?(TypeInfo__RTG__GizmoLineSlider3DSettings,6);
  bVar1 = iRam_? != 0;
  (this->fields)._scSglSliderSettings = pGVar6;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._scSglSliderSettings >> 0xc);
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
  (this->fields)._scDblSliderSettings = pGVar7;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._scDblSliderSettings >> 0xc);
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
  pGVar6 = (this->fields)._mvSglSliderSettings;
  uVar9 = 0;
  uVar2 = 0;
  if (pGVar6 != (GizmoLineSlider3DSettings__Array *)0x0) {
    lVar10 = 0x20;
    lVar11 = 0x20;
    do {
      if ((int)pGVar6->max_length <= (int)uVar2) {
        pGVar7 = (this->fields)._mvDblSliderSettings;
        uVar2 = 0;
        if (pGVar7 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
          lVar11 = 0x20;
          goto code_?;
        }
        break;
      }
      pGVar6 = (this->fields)._mvSglSliderSettings;
      lVar12 = FUN_?(TypeInfo__RTG__GizmoLineSlider3DSettings);
      *(undefined4 *)(lVar12 + 0x10) = 0x3f333333;
      *(undefined4 *)(lVar12 + 0x14) = 0x3f000000;
      *(undefined4 *)(lVar12 + 0x18) = 0x3f000000;
      *(undefined4 *)(lVar12 + 0x1c) = 0x3f800000;
      *(undefined4 *)(lVar12 + 0x20) = 0x41700000;
      *(undefined4 *)(lVar12 + 0x28) = 0x3dcccccd;
      *(undefined4 *)(lVar12 + 0x2c) = 0x3f800000;
      *(undefined4 *)(lVar12 + 0x30) = 0x3ee66666;
      *(undefined4 *)(lVar12 + 0x34) = 0x3f800000;
      if (pGVar6 == (GizmoLineSlider3DSettings__Array *)0x0) break;
      lVar13 = FUN_?(lVar12,(pGVar6->klass->_0).element_class);
      if (lVar13 == 0) {
        uVar14 = FUN_?();
        FUN_?(uVar14,0);
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      if ((uint)pGVar6->max_length <= uVar2) goto code_?;
      bVar1 = iRam_? != 0;
      *(longlong *)((longlong)pGVar6->vector + lVar11 + -0x20) = lVar12;
      if (bVar1) {
        uVar16 = (uint)((ulonglong)(pGVar6->vector + (int)uVar2) >> 0xc);
        uVar3 = (ulonglong)((uVar16 & 0x1fffff) >> 6);
        do {
          uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
          puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
          LOCK();
          bVar1 = uVar4 == *puVar5;
          if (bVar1) {
            *puVar5 = uVar4 | 1L << (uVar16 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      pGVar6 = (this->fields)._mvSglSliderSettings;
      uVar2 = uVar2 + 1;
      lVar11 = lVar11 + 8;
    } while (pGVar6 != (GizmoLineSlider3DSettings__Array *)0x0);
  }
  goto code_?;
  while( true ) {
    pGVar7 = (this->fields)._mvDblSliderSettings;
    lVar12 = FUN_?(TypeInfo__RTG__GizmoPlaneSlider3DSettings);
    *(undefined4 *)(lVar12 + 0x10) = 0x3727c5ac;
    *(undefined4 *)(lVar12 + 0x14) = 0x3727c5ac;
    *(undefined4 *)(lVar12 + 0x18) = 0x3f333333;
    *(undefined4 *)(lVar12 + 0x1c) = 0x3f333333;
    *(undefined4 *)(lVar12 + 0x20) = 0x3f333333;
    *(undefined4 *)(lVar12 + 0x28) = 0x3f800000;
    *(undefined4 *)(lVar12 + 0x2c) = 0x3f800000;
    *(undefined4 *)(lVar12 + 0x30) = 0x41700000;
    *(undefined4 *)(lVar12 + 0x38) = 1;
    *(undefined4 *)(lVar12 + 0x3c) = 0x3dcccccd;
    *(undefined4 *)(lVar12 + 0x40) = 0x3dcccccd;
    *(undefined4 *)(lVar12 + 0x44) = 0x3dcccccd;
    *(undefined4 *)(lVar12 + 0x48) = 0x3f800000;
    *(undefined4 *)(lVar12 + 0x4c) = 0x3ee66666;
    *(undefined4 *)(lVar12 + 0x50) = 0x3f800000;
    if (pGVar7 == (GizmoPlaneSlider3DSettings__Array *)0x0) break;
    lVar13 = FUN_?(lVar12,(pGVar7->klass->_0).element_class);
    if (lVar13 == 0) {
      uVar14 = FUN_?();
      FUN_?(uVar14,0);
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    if ((uint)pGVar7->max_length <= uVar2) goto code_?;
    bVar1 = iRam_? != 0;
    *(longlong *)((longlong)pGVar7->vector + lVar11 + -0x20) = lVar12;
    if (bVar1) {
      uVar16 = (uint)((ulonglong)(pGVar7->vector + (int)uVar2) >> 0xc);
      uVar3 = (ulonglong)((uVar16 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar16 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    pGVar7 = (this->fields)._mvDblSliderSettings;
    if (pGVar7 == (GizmoPlaneSlider3DSettings__Array *)0x0) break;
    if ((uint)pGVar7->max_length <= uVar2) goto code_?;
    lVar12 = *(longlong *)((longlong)pGVar7->vector + lVar11 + -0x20);
    if (lVar12 == 0) break;
    *(undefined4 *)(lVar12 + 0x10) = 0;
    pGVar7 = (this->fields)._mvDblSliderSettings;
    if (pGVar7 == (GizmoPlaneSlider3DSettings__Array *)0x0) break;
    if ((uint)pGVar7->max_length <= uVar2) goto code_?;
    lVar12 = *(longlong *)((longlong)pGVar7->vector + lVar11 + -0x20);
    if (lVar12 == 0) break;
    *(undefined4 *)(lVar12 + 0x18) = 0;
    pGVar7 = (this->fields)._mvDblSliderSettings;
    if (pGVar7 == (GizmoPlaneSlider3DSettings__Array *)0x0) break;
    if ((uint)pGVar7->max_length <= uVar2) goto code_?;
    lVar12 = *(longlong *)((longlong)pGVar7->vector + lVar11 + -0x20);
    if (lVar12 == 0) break;
    *(undefined4 *)(lVar12 + 0x1c) = 0;
    uVar2 = uVar2 + 1;
    pGVar7 = (this->fields)._mvDblSliderSettings;
    lVar11 = lVar11 + 8;
    if (pGVar7 == (GizmoPlaneSlider3DSettings__Array *)0x0) break;
code_?:
    if ((int)pGVar7->max_length <= (int)uVar2) {
      pGVar7 = (this->fields)._rtSliderSettings;
      uVar2 = 0;
      if (pGVar7 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
        lVar11 = 0x20;
        goto code_?;
      }
      break;
    }
  }
  goto code_?;
  while( true ) {
    pGVar7 = (this->fields)._rtSliderSettings;
    lVar12 = FUN_?(TypeInfo__RTG__GizmoPlaneSlider3DSettings);
    *(undefined4 *)(lVar12 + 0x10) = 0x3727c5ac;
    *(undefined4 *)(lVar12 + 0x14) = 0x3727c5ac;
    *(undefined4 *)(lVar12 + 0x18) = 0x3f333333;
    *(undefined4 *)(lVar12 + 0x1c) = 0x3f333333;
    *(undefined4 *)(lVar12 + 0x20) = 0x3f333333;
    *(undefined4 *)(lVar12 + 0x28) = 0x3f800000;
    *(undefined4 *)(lVar12 + 0x2c) = 0x3f800000;
    *(undefined4 *)(lVar12 + 0x30) = 0x41700000;
    *(undefined4 *)(lVar12 + 0x38) = 1;
    *(undefined4 *)(lVar12 + 0x3c) = 0x3dcccccd;
    *(undefined4 *)(lVar12 + 0x40) = 0x3dcccccd;
    *(undefined4 *)(lVar12 + 0x44) = 0x3dcccccd;
    *(undefined4 *)(lVar12 + 0x48) = 0x3f800000;
    *(undefined4 *)(lVar12 + 0x4c) = 0x3ee66666;
    *(undefined4 *)(lVar12 + 0x50) = 0x3f800000;
    if (pGVar7 == (GizmoPlaneSlider3DSettings__Array *)0x0) break;
    lVar13 = FUN_?(lVar12,(pGVar7->klass->_0).element_class);
    if (lVar13 == 0) {
      uVar14 = FUN_?();
      FUN_?(uVar14,0);
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    if ((uint)pGVar7->max_length <= uVar2) goto code_?;
    bVar1 = iRam_? != 0;
    *(longlong *)((longlong)pGVar7->vector + lVar11 + -0x20) = lVar12;
    if (bVar1) {
      uVar16 = (uint)((ulonglong)(pGVar7->vector + (int)uVar2) >> 0xc);
      uVar3 = (ulonglong)((uVar16 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar16 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    pGVar7 = (this->fields)._rtSliderSettings;
    uVar2 = uVar2 + 1;
    lVar11 = lVar11 + 8;
    if (pGVar7 == (GizmoPlaneSlider3DSettings__Array *)0x0) break;
code_?:
    if ((int)pGVar7->max_length <= (int)uVar2) {
      pGVar8 = (this->fields)._rtCamLookSliderSettings;
      if (pGVar8 != (GizmoPlaneSlider2DSettings *)0x0) {
        (pGVar8->fields)._borderLineHoverEps = 7.0;
        uVar2 = 0;
        pGVar7 = (this->fields)._rtSliderSettings;
        if (pGVar7 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
          ppGVar17 = pGVar7->vector;
          goto code_?;
        }
      }
      break;
    }
  }
  goto code_?;
code_?:
  if ((int)pGVar7->max_length <= (int)uVar2) goto code_?;
  if ((uint)pGVar7->max_length <= uVar2) goto code_?;
  if (*ppGVar17 == (GizmoPlaneSlider3DSettings *)0x0) goto code_?;
  uVar2 = uVar2 + 1;
  ((*ppGVar17)->fields)._isCircleHoverCullEnabled = 1;
  ppGVar17 = ppGVar17 + 1;
  goto code_?;
code_?:
  pGVar7 = (this->fields)._rtSliderSettings;
  uVar2 = 0;
  if (pGVar7 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
    ppGVar17 = pGVar7->vector;
    for (; (int)uVar2 < (int)pGVar7->max_length; uVar2 = uVar2 + 1) {
      if ((uint)pGVar7->max_length <= uVar2) goto code_?;
      if (*ppGVar17 == (GizmoPlaneSlider3DSettings *)0x0) goto code_?;
      ((*ppGVar17)->fields)._borderTorusHoverEps = 0.4;
      ppGVar17 = ppGVar17 + 1;
    }
    pGVar6 = (this->fields)._scSglSliderSettings;
    uVar2 = 0;
    if (pGVar6 != (GizmoLineSlider3DSettings__Array *)0x0) {
      lVar11 = 0x20;
      do {
        if ((int)pGVar6->max_length <= (int)uVar2) {
          pGVar7 = (this->fields)._scDblSliderSettings;
          uVar2 = 0;
          if (pGVar7 != (GizmoPlaneSlider3DSettings__Array *)0x0) goto code_?;
          break;
        }
        pGVar6 = (this->fields)._scSglSliderSettings;
        lVar12 = FUN_?(TypeInfo__RTG__GizmoLineSlider3DSettings);
        *(undefined4 *)(lVar12 + 0x10) = 0x3f333333;
        *(undefined4 *)(lVar12 + 0x14) = 0x3f000000;
        *(undefined4 *)(lVar12 + 0x18) = 0x3f000000;
        *(undefined4 *)(lVar12 + 0x1c) = 0x3f800000;
        *(undefined4 *)(lVar12 + 0x20) = 0x41700000;
        *(undefined4 *)(lVar12 + 0x28) = 0x3dcccccd;
        *(undefined4 *)(lVar12 + 0x2c) = 0x3f800000;
        *(undefined4 *)(lVar12 + 0x30) = 0x3ee66666;
        *(undefined4 *)(lVar12 + 0x34) = 0x3f800000;
        if (pGVar6 == (GizmoLineSlider3DSettings__Array *)0x0) break;
        lVar13 = FUN_?(lVar12,(pGVar6->klass->_0).element_class);
        if (lVar13 == 0) {
          uVar14 = FUN_?();
          FUN_?(uVar14,0);
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        if ((uint)pGVar6->max_length <= uVar2) goto code_?;
        bVar1 = iRam_? != 0;
        *(longlong *)((longlong)pGVar6->vector + lVar11 + -0x20) = lVar12;
        if (bVar1) {
          uVar16 = (uint)((ulonglong)(pGVar6->vector + (int)uVar2) >> 0xc);
          uVar3 = (ulonglong)((uVar16 & 0x1fffff) >> 6);
          do {
            uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
            puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
            LOCK();
            bVar1 = uVar4 == *puVar5;
            if (bVar1) {
              *puVar5 = uVar4 | 1L << (uVar16 & 0x3f);
            }
            UNLOCK();
          } while (!bVar1);
        }
        pGVar6 = (this->fields)._scSglSliderSettings;
        uVar2 = uVar2 + 1;
        lVar11 = lVar11 + 8;
      } while (pGVar6 != (GizmoLineSlider3DSettings__Array *)0x0);
    }
  }
  goto code_?;
code_?:
  if ((int)pGVar6->max_length <= (int)uVar9) {
    return;
  }
  if ((uint)pGVar6->max_length <= uVar9) {
code_?:
    FUN_?();
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  if (*ppGVar18 == (GizmoLineSlider3DSettings *)0x0) goto code_?;
  uVar9 = uVar9 + 1;
  ((*ppGVar18)->fields)._scaleSensitivity = 0.6;
  ppGVar18 = ppGVar18 + 1;
  goto code_?;
  while( true ) {
    pGVar7 = (this->fields)._scDblSliderSettings;
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
    if (pGVar7 == (GizmoPlaneSlider3DSettings__Array *)0x0) break;
    lVar12 = FUN_?(lVar11,(pGVar7->klass->_0).element_class);
    if (lVar12 == 0) {
      uVar14 = FUN_?();
      FUN_?(uVar14,0);
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    if ((uint)pGVar7->max_length <= uVar2) goto code_?;
    bVar1 = iRam_? != 0;
    *(longlong *)((longlong)pGVar7->vector + lVar10 + -0x20) = lVar11;
    if (bVar1) {
      uVar16 = (uint)((ulonglong)(pGVar7->vector + (int)uVar2) >> 0xc);
      uVar3 = (ulonglong)((uVar16 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar16 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    pGVar7 = (this->fields)._scDblSliderSettings;
    if (pGVar7 == (GizmoPlaneSlider3DSettings__Array *)0x0) break;
    if ((uint)pGVar7->max_length <= uVar2) goto code_?;
    lVar11 = *(longlong *)((longlong)pGVar7->vector + lVar10 + -0x20);
    if (lVar11 == 0) break;
    *(undefined4 *)(lVar11 + 0x38) = 1;
    pGVar7 = (this->fields)._scDblSliderSettings;
    if (pGVar7 == (GizmoPlaneSlider3DSettings__Array *)0x0) break;
    if ((uint)pGVar7->max_length <= uVar2) goto code_?;
    lVar11 = *(longlong *)((longlong)pGVar7->vector + lVar10 + -0x20);
    if (lVar11 == 0) break;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    pGVar7 = (this->fields)._scDblSliderSettings;
    if (pGVar7 == (GizmoPlaneSlider3DSettings__Array *)0x0) break;
    if ((uint)pGVar7->max_length <= uVar2) goto code_?;
    lVar11 = *(longlong *)((longlong)pGVar7->vector + lVar10 + -0x20);
    if (lVar11 == 0) break;
    *(undefined4 *)(lVar11 + 0x18) = 0;
    pGVar7 = (this->fields)._scDblSliderSettings;
    if (pGVar7 == (GizmoPlaneSlider3DSettings__Array *)0x0) break;
    if ((uint)pGVar7->max_length <= uVar2) goto code_?;
    lVar11 = *(longlong *)((longlong)pGVar7->vector + lVar10 + -0x20);
    if (lVar11 == 0) break;
    *(undefined4 *)(lVar11 + 0x1c) = 0;
    uVar2 = uVar2 + 1;
    pGVar7 = (this->fields)._scDblSliderSettings;
    lVar10 = lVar10 + 8;
    if (pGVar7 == (GizmoPlaneSlider3DSettings__Array *)0x0) break;
code_?:
    if ((int)pGVar7->max_length <= (int)uVar2) {
      pGVar6 = (this->fields)._scSglSliderSettings;
      if (pGVar6 != (GizmoLineSlider3DSettings__Array *)0x0) {
        ppGVar18 = pGVar6->vector;
        goto code_?;
      }
      break;
    }
  }
code_?:
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Single get_MvBoxSliderHoverEps() */

float Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
      UniversalGizmoSettings3D_get_MvBoxSliderHoverEps
                (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSliderSettings;
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


/* Single get_MvCylinderSliderHoverEps() */

float Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
      UniversalGizmoSettings3D_get_MvCylinderSliderHoverEps
                (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSliderSettings;
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


/* Single get_MvDragSensitivity() */

float Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
      UniversalGizmoSettings3D_get_MvDragSensitivity
                (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSliderSettings;
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


/* Single get_MvLineSliderHoverEps() */

float Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
      UniversalGizmoSettings3D_get_MvLineSliderHoverEps
                (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSliderSettings;
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


/* Single get_MvXSnapStep() */

float Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_get_MvXSnapStep
                (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSliderSettings;
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


/* Single get_MvYSnapStep() */

float Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_get_MvYSnapStep
                (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSliderSettings;
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


/* Single get_MvZSnapStep() */

float Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_get_MvZSnapStep
                (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSliderSettings;
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


/* Single get_RtAxisLineHoverEps() */

float Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
      UniversalGizmoSettings3D_get_RtAxisLineHoverEps
                (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtSliderSettings;
  if (pGVar1 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if (pGVar1->vector[0] != (GizmoPlaneSlider3DSettings *)0x0) {
      return (pGVar1->vector[0]->fields)._borderLineHoverEps;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_RtAxisTorusHoverEps() */

float Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
      UniversalGizmoSettings3D_get_RtAxisTorusHoverEps
                (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtSliderSettings;
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


/* Single get_RtCamLookLineHoverEps() */

float Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
      UniversalGizmoSettings3D_get_RtCamLookLineHoverEps
                (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtCamLookSliderSettings;
  if (pGVar1 != (GizmoPlaneSlider2DSettings *)0x0) {
    return (pGVar1->fields)._borderLineHoverEps;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_RtCamLookSnapStep() */

float Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
      UniversalGizmoSettings3D_get_RtCamLookSnapStep
                (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtCamLookSliderSettings;
  if (pGVar1 != (GizmoPlaneSlider2DSettings *)0x0) {
    return (pGVar1->fields)._rotationSnapStep;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_RtCamLookThickHoverEps() */

float Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
      UniversalGizmoSettings3D_get_RtCamLookThickHoverEps
                (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtCamLookSliderSettings;
  if (pGVar1 != (GizmoPlaneSlider2DSettings *)0x0) {
    return (pGVar1->fields)._thickBorderPolyHoverEps;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Boolean get_RtCanHoverCulledPixels() */

bool Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
     UniversalGizmoSettings3D_get_RtCanHoverCulledPixels
               (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtSliderSettings;
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


/* Single get_RtDragSensitivity() */

float Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
      UniversalGizmoSettings3D_get_RtDragSensitivity
                (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtSliderSettings;
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


/* GizmoSnapMode get_RtSnapMode() */

GizmoSnapMode__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_get_RtSnapMode
          (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtSliderSettings;
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


/* Single get_RtXSnapStep() */

float Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_get_RtXSnapStep
                (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtSliderSettings;
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


/* Single get_RtYSnapStep() */

float Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_get_RtYSnapStep
                (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtSliderSettings;
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


/* Single get_RtZSnapStep() */

float Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_get_RtZSnapStep
                (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtSliderSettings;
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


/* Single get_ScBoxSliderHoverEps() */

float Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
      UniversalGizmoSettings3D_get_ScBoxSliderHoverEps
                (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSliderSettings;
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


/* Single get_ScCylinderSliderHoverEps() */

float Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
      UniversalGizmoSettings3D_get_ScCylinderSliderHoverEps
                (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSliderSettings;
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


/* Single get_ScDragSensitivity() */

float Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
      UniversalGizmoSettings3D_get_ScDragSensitivity
                (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSliderSettings;
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


/* Single get_ScLineSliderHoverEps() */

float Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
      UniversalGizmoSettings3D_get_ScLineSliderHoverEps
                (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSliderSettings;
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


/* Single get_ScXSnapStep() */

float Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_get_ScXSnapStep
                (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSliderSettings;
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


/* Single get_ScXYSnapStep() */

float Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_get_ScXYSnapStep
                (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scDblSliderSettings;
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


/* Single get_ScYSnapStep() */

float Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_get_ScYSnapStep
                (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSliderSettings;
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


/* Single get_ScYZSnapStep() */

float Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_get_ScYZSnapStep
                (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scDblSliderSettings;
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


/* Single get_ScZSnapStep() */

float Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_get_ScZSnapStep
                (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSliderSettings;
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


/* Single get_ScZXSnapStep() */

float Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_get_ScZXSnapStep
                (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scDblSliderSettings;
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


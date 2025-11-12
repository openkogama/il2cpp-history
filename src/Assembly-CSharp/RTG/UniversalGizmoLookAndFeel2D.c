
/* Void ConnectMvDblSliderLookAndFeel(GizmoPlaneSlider2D) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
     UniversalGizmoLookAndFeel2D_ConnectMvDblSliderLookAndFeel
               (UniversalGizmoLookAndFeel2D *this,GizmoPlaneSlider2D *slider,MethodInfo *method)

{
  if (slider == (GizmoPlaneSlider2D *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = iRam_? != 0;
  (slider->fields)._sharedLookAndFeel = (this->fields)._mvDblSliderLookAndFeel;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(slider->fields)._sharedLookAndFeel >> 0xc);
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


/* Void ConnectMvSliderLookAndFeel(GizmoLineSlider2D, Int32, AxisSign) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
     UniversalGizmoLookAndFeel2D_ConnectMvSliderLookAndFeel
               (UniversalGizmoLookAndFeel2D *this,GizmoLineSlider2D *slider,int32_t axisIndex,
               AxisSign__Enum axisSign,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSliderLookAndFeel;
  if (axisSign == AxisSign__Enum_Positive) {
    if (pGVar1 == (GizmoLineSlider2DLookAndFeel__Array *)0x0) goto code_?;
    if ((uint)pGVar1->max_length <= (uint)axisIndex) goto code_?;
    lVar2 = (longlong)axisIndex;
  }
  else {
    if (pGVar1 == (GizmoLineSlider2DLookAndFeel__Array *)0x0) goto code_?;
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
    (slider->fields)._sharedLookAndFeel = pGVar1->vector[lVar2];
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(slider->fields)._sharedLookAndFeel >> 0xc);
      puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar7 = *puVar6;
        LOCK();
        uVar8 = *puVar6;
        if (uVar7 == uVar8) {
          *puVar6 = uVar7 | 1L << (ulonglong)(uVar5 & 0x3f);
        }
        UNLOCK();
      } while (uVar7 != uVar8);
    }
    lVar2 = 0xf0;
    if ((slider->fields)._sharedLookAndFeel == (GizmoLineSlider2DLookAndFeel *)0x0) {
      lVar2 = 0xe8;
    }
    lVar2 = *(longlong *)((longlong)&slider->klass + lVar2);
    if ((lVar2 != 0) && (pGVar9 = (slider->fields)._cap2D, pGVar9 != (GizmoCap2D *)0x0)) {
      bVar4 = iRam_? != 0;
      (pGVar9->fields)._sharedLookAndFeel = *(GizmoCap2DLookAndFeel **)(lVar2 + 0x70);
      if (bVar4) {
        uVar5 = (uint)((ulonglong)&(pGVar9->fields)._sharedLookAndFeel >> 0xc);
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
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Inherit(MoveGizmoLookAndFeel2D) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::UniversalGizmoLookAndFeel2D_Inherit
               (UniversalGizmoLookAndFeel2D *this,MoveGizmoLookAndFeel2D *lookAndFeel,
               MethodInfo *method)

{
  if ((lookAndFeel != (MoveGizmoLookAndFeel2D *)0x0) &&
     (pGVar1 = (lookAndFeel->fields)._sglSliderLookAndFeel,
     pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0)) {
    if ((int)pGVar1->max_length == 0) goto code_?;
    pGVar2 = pGVar1->vector[0];
    if (pGVar2 != (GizmoLineSlider2DLookAndFeel *)0x0) {
      CStack_3.r = (pGVar2->fields)._borderColor.r;
      CStack_3.g = (pGVar2->fields)._borderColor.g;
      CStack_3.b = (pGVar2->fields)._borderColor.b;
      CStack_3.a = (pGVar2->fields)._borderColor.a;
      UniversalGizmoLookAndFeel2D_SetMvAxisBorderColor(this,0,&CStack_3,(MethodInfo *)0x0);
      pGVar1 = (lookAndFeel->fields)._sglSliderLookAndFeel;
      if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
        if ((uint)pGVar1->max_length < 2) goto code_?;
        pGVar2 = pGVar1->vector[1];
        if (pGVar2 != (GizmoLineSlider2DLookAndFeel *)0x0) {
          CStack_3.r = (pGVar2->fields)._borderColor.r;
          CStack_3.g = (pGVar2->fields)._borderColor.g;
          CStack_3.b = (pGVar2->fields)._borderColor.b;
          CStack_3.a = (pGVar2->fields)._borderColor.a;
          UniversalGizmoLookAndFeel2D_SetMvAxisBorderColor(this,1,&CStack_3,(MethodInfo *)0x0);
          pGVar1 = (lookAndFeel->fields)._sglSliderLookAndFeel;
          if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
            if ((int)pGVar1->max_length == 0) goto code_?;
            pGVar2 = pGVar1->vector[0];
            if (pGVar2 != (GizmoLineSlider2DLookAndFeel *)0x0) {
              CStack_3.r = (pGVar2->fields)._color.r;
              CStack_3.g = (pGVar2->fields)._color.g;
              CStack_3.b = (pGVar2->fields)._color.b;
              CStack_3.a = (pGVar2->fields)._color.a;
              UniversalGizmoLookAndFeel2D_SetMvAxisColor(this,0,&CStack_3,(MethodInfo *)0x0);
              pGVar1 = (lookAndFeel->fields)._sglSliderLookAndFeel;
              if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                if ((uint)pGVar1->max_length < 2) goto code_?;
                pGVar2 = pGVar1->vector[1];
                if (pGVar2 != (GizmoLineSlider2DLookAndFeel *)0x0) {
                  CStack_3.r = (pGVar2->fields)._color.r;
                  CStack_3.g = (pGVar2->fields)._color.g;
                  CStack_3.b = (pGVar2->fields)._color.b;
                  CStack_3.a = (pGVar2->fields)._color.a;
                  UniversalGizmoLookAndFeel2D_SetMvAxisColor(this,1,&CStack_3,(MethodInfo *)0x0);
                  pGVar1 = (lookAndFeel->fields)._sglSliderLookAndFeel;
                  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                    if ((int)pGVar1->max_length == 0) goto code_?;
                    if (pGVar1->vector[0] != (GizmoLineSlider2DLookAndFeel *)0x0) {
                      fVar4 = (pGVar1->vector[0]->fields)._boxThickness;
                      uVar5 = 0;
                      pGVar1 = (this->fields)._mvSglSliderLookAndFeel;
                      uVar6 = 0;
                      if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                        ppGVar7 = pGVar1->vector;
                        while ((int)uVar6 < (int)pGVar1->max_length) {
                          if ((uint)pGVar1->max_length <= uVar6) goto code_?;
                          pGVar2 = *ppGVar7;
                          if (pGVar2 == (GizmoLineSlider2DLookAndFeel *)0x0)
                          goto code_?;
                          if (0.0 <= fVar4) {
                            uVar6 = uVar6 + 1;
                            (pGVar2->fields)._boxThickness = fVar4;
                            ppGVar7 = ppGVar7 + 1;
                          }
                          else {
                            uVar6 = uVar6 + 1;
                            (pGVar2->fields)._boxThickness = 0.0;
                            ppGVar7 = ppGVar7 + 1;
                          }
                        }
                        pGVar8 = (lookAndFeel->fields)._dblSliderLookAndFeel;
                        if ((pGVar8 != (GizmoPlaneSlider2DLookAndFeel *)0x0) &&
                           (pGVar9 = (this->fields)._mvDblSliderLookAndFeel,
                           pGVar9 != (GizmoPlaneSlider2DLookAndFeel *)0x0)) {
                          fVar4 = (pGVar8->fields)._borderColor.g;
                          fVar10 = (pGVar8->fields)._borderColor.b;
                          fVar11 = (pGVar8->fields)._borderColor.a;
                          (pGVar9->fields)._borderColor.r = (pGVar8->fields)._borderColor.r;
                          (pGVar9->fields)._borderColor.g = fVar4;
                          (pGVar9->fields)._borderColor.b = fVar10;
                          (pGVar9->fields)._borderColor.a = fVar11;
                          pGVar8 = (lookAndFeel->fields)._dblSliderLookAndFeel;
                          if ((pGVar8 != (GizmoPlaneSlider2DLookAndFeel *)0x0) &&
                             (pGVar9 = (this->fields)._mvDblSliderLookAndFeel,
                             pGVar9 != (GizmoPlaneSlider2DLookAndFeel *)0x0)) {
                            fVar4 = (pGVar8->fields)._circleRadius;
                            if (fVar4 < 0.0) {
                              fVar4 = 0.0;
                            }
                            (pGVar9->fields)._circleRadius = fVar4;
                            pGVar8 = (lookAndFeel->fields)._dblSliderLookAndFeel;
                            if ((pGVar8 != (GizmoPlaneSlider2DLookAndFeel *)0x0) &&
                               (pGVar9 = (this->fields)._mvDblSliderLookAndFeel,
                               pGVar9 != (GizmoPlaneSlider2DLookAndFeel *)0x0)) {
                              fVar4 = (pGVar8->fields)._color.g;
                              fVar10 = (pGVar8->fields)._color.b;
                              fVar11 = (pGVar8->fields)._color.a;
                              (pGVar9->fields)._color.r = (pGVar8->fields)._color.r;
                              (pGVar9->fields)._color.g = fVar4;
                              (pGVar9->fields)._color.b = fVar10;
                              (pGVar9->fields)._color.a = fVar11;
                              pGVar8 = (lookAndFeel->fields)._dblSliderLookAndFeel;
                              if ((pGVar8 != (GizmoPlaneSlider2DLookAndFeel *)0x0) &&
                                 (pGVar9 = (this->fields)._mvDblSliderLookAndFeel,
                                 pGVar9 != (GizmoPlaneSlider2DLookAndFeel *)0x0)) {
                                (pGVar9->fields)._fillMode = (pGVar8->fields)._fillMode;
                                pGVar8 = (lookAndFeel->fields)._dblSliderLookAndFeel;
                                if ((pGVar8 != (GizmoPlaneSlider2DLookAndFeel *)0x0) &&
                                   (pGVar9 = (this->fields)._mvDblSliderLookAndFeel,
                                   pGVar9 != (GizmoPlaneSlider2DLookAndFeel *)0x0)) {
                                  fVar4 = (pGVar8->fields)._hoveredBorderColor.g;
                                  fVar10 = (pGVar8->fields)._hoveredBorderColor.b;
                                  fVar11 = (pGVar8->fields)._hoveredBorderColor.a;
                                  (pGVar9->fields)._hoveredBorderColor.r =
                                       (pGVar8->fields)._hoveredBorderColor.r;
                                  (pGVar9->fields)._hoveredBorderColor.g = fVar4;
                                  (pGVar9->fields)._hoveredBorderColor.b = fVar10;
                                  (pGVar9->fields)._hoveredBorderColor.a = fVar11;
                                  pGVar8 = (lookAndFeel->fields)._dblSliderLookAndFeel;
                                  if ((pGVar8 != (GizmoPlaneSlider2DLookAndFeel *)0x0) &&
                                     (pGVar9 = (this->fields)._mvDblSliderLookAndFeel,
                                     pGVar9 != (GizmoPlaneSlider2DLookAndFeel *)0x0)) {
                                    fVar4 = (pGVar8->fields)._hoveredColor.g;
                                    fVar10 = (pGVar8->fields)._hoveredColor.b;
                                    fVar11 = (pGVar8->fields)._hoveredColor.a;
                                    (pGVar9->fields)._hoveredColor.r =
                                         (pGVar8->fields)._hoveredColor.r;
                                    (pGVar9->fields)._hoveredColor.g = fVar4;
                                    (pGVar9->fields)._hoveredColor.b = fVar10;
                                    (pGVar9->fields)._hoveredColor.a = fVar11;
                                    pGVar8 = (lookAndFeel->fields)._dblSliderLookAndFeel;
                                    if ((pGVar8 != (GizmoPlaneSlider2DLookAndFeel *)0x0) &&
                                       (pGVar9 = (this->fields)._mvDblSliderLookAndFeel,
                                       pGVar9 != (GizmoPlaneSlider2DLookAndFeel *)0x0)) {
                                      fVar4 = (pGVar8->fields)._quadHeight;
                                      if (fVar4 < 0.0) {
                                        fVar4 = 0.0;
                                      }
                                      (pGVar9->fields)._quadHeight = fVar4;
                                      pGVar8 = (lookAndFeel->fields)._dblSliderLookAndFeel;
                                      if ((pGVar8 != (GizmoPlaneSlider2DLookAndFeel *)0x0) &&
                                         (pGVar9 = (this->fields)._mvDblSliderLookAndFeel,
                                         pGVar9 != (GizmoPlaneSlider2DLookAndFeel *)0x0)) {
                                        fVar4 = (pGVar8->fields)._quadWidth;
                                        if (fVar4 < 0.0) {
                                          fVar4 = 0.0;
                                        }
                                        (pGVar9->fields)._quadWidth = fVar4;
                                        pGVar8 = (lookAndFeel->fields)._dblSliderLookAndFeel;
                                        if ((pGVar8 != (GizmoPlaneSlider2DLookAndFeel *)0x0) &&
                                           (pGVar9 = (this->fields)._mvDblSliderLookAndFeel,
                                           pGVar9 != (GizmoPlaneSlider2DLookAndFeel *)0x0)) {
                                          (pGVar9->fields)._planeType = (pGVar8->fields)._planeType;
                                          (this->fields)._isMvDblSliderVisible =
                                               (lookAndFeel->fields)._isDblSliderVisible;
                                          pGVar1 = (lookAndFeel->fields)._sglSliderLookAndFeel;
                                          if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0)
                                          {
                                            if ((int)pGVar1->max_length == 0)
                                            goto code_?;
                                            if (pGVar1->vector[0] !=
                                                (GizmoLineSlider2DLookAndFeel *)0x0) {
                                              pGVar12 = (this->fields)._mvSglSliderLookAndFeel;
                                              fVar4 = (pGVar1->vector[0]->fields)._scale;
                                              uVar6 = 0;
                                              if (pGVar12 != (GizmoLineSlider2DLookAndFeel__Array *)
                                                            0x0) {
                                                ppGVar7 = pGVar12->vector;
                                                while ((int)uVar6 < (int)pGVar12->max_length) {
                                                  if ((uint)pGVar12->max_length <= uVar6)
                                                  goto code_?;
                                                  pGVar2 = *ppGVar7;
                                                  if (pGVar2 == (GizmoLineSlider2DLookAndFeel *)0x0)
                                                  goto code_?;
                                                  fVar10 = fVar4;
                                                  if (fVar4 < 0.0) {
                                                    fVar10 = 0.0;
                                                  }
                                                  pGVar13 = (pGVar2->fields)._capLookAndFeel;
                                                  (pGVar2->fields)._scale = fVar10;
                                                  if (pGVar13 == (GizmoCap2DLookAndFeel *)0x0)
                                                  goto code_?;
                                                  if (0.0 <= fVar4) {
                                                    uVar6 = uVar6 + 1;
                                                    (pGVar13->fields)._scale = fVar4;
                                                    ppGVar7 = ppGVar7 + 1;
                                                  }
                                                  else {
                                                    uVar6 = uVar6 + 1;
                                                    (pGVar13->fields)._scale = 0.0;
                                                    ppGVar7 = ppGVar7 + 1;
                                                  }
                                                }
                                                pGVar8 = (this->fields)._mvDblSliderLookAndFeel;
                                                if (pGVar8 != (GizmoPlaneSlider2DLookAndFeel *)0x0)
                                                {
                                                  if (fVar4 < 0.0) {
                                                    fVar4 = 0.0;
                                                  }
                                                  (pGVar8->fields)._scale = fVar4;
                                                  pGVar1 = (lookAndFeel->fields).
                                                           _sglSliderLookAndFeel;
                                                  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array
                                                                 *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    if ((pGVar1->vector[0] !=
                                                         (GizmoLineSlider2DLookAndFeel *)0x0) &&
                                                       (pGVar13 = (pGVar1->vector[0]->fields).
                                                                 _capLookAndFeel,
                                                       pGVar13 != (GizmoCap2DLookAndFeel *)0x0)) {
                                                      pGVar1 = (this->fields).
                                                               _mvSglSliderLookAndFeel;
                                                      uVar6 = 0;
                                                      fVar4 = (pGVar13->fields)._arrowHeight;
                                                      if (pGVar1 != (
                                                  GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                                                    ppGVar7 = pGVar1->vector;
                                                    while ((int)uVar6 < (int)pGVar1->max_length) {
                                                      if ((uint)pGVar1->max_length <= uVar6)
                                                      goto code_?;
                                                      if ((*ppGVar7 ==
                                                           (GizmoLineSlider2DLookAndFeel *)0x0) ||
                                                         (pGVar13 = ((*ppGVar7)->fields).
                                                                   _capLookAndFeel,
                                                         pGVar13 == (GizmoCap2DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      if (0.0 <= fVar4) {
                                                        uVar6 = uVar6 + 1;
                                                        (pGVar13->fields)._arrowHeight = fVar4;
                                                        ppGVar7 = ppGVar7 + 1;
                                                      }
                                                      else {
                                                        uVar6 = uVar6 + 1;
                                                        (pGVar13->fields)._arrowHeight = 0.0;
                                                        ppGVar7 = ppGVar7 + 1;
                                                      }
                                                    }
                                                    pGVar1 = (lookAndFeel->fields).
                                                             _sglSliderLookAndFeel;
                                                    if (pGVar1 != (
                                                  GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    if ((pGVar1->vector[0] !=
                                                         (GizmoLineSlider2DLookAndFeel *)0x0) &&
                                                       (pGVar13 = (pGVar1->vector[0]->fields).
                                                                 _capLookAndFeel,
                                                       pGVar13 != (GizmoCap2DLookAndFeel *)0x0)) {
                                                      pGVar1 = (this->fields).
                                                               _mvSglSliderLookAndFeel;
                                                      uVar6 = 0;
                                                      fVar4 = (pGVar13->fields)._arrowBaseRadius;
                                                      if (pGVar1 != (
                                                  GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                                                    ppGVar7 = pGVar1->vector;
                                                    while ((int)uVar6 < (int)pGVar1->max_length) {
                                                      if ((uint)pGVar1->max_length <= uVar6)
                                                      goto code_?;
                                                      if ((*ppGVar7 ==
                                                           (GizmoLineSlider2DLookAndFeel *)0x0) ||
                                                         (pGVar13 = ((*ppGVar7)->fields).
                                                                   _capLookAndFeel,
                                                         pGVar13 == (GizmoCap2DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      if (0.0 <= fVar4) {
                                                        uVar6 = uVar6 + 1;
                                                        (pGVar13->fields)._arrowBaseRadius = fVar4;
                                                        ppGVar7 = ppGVar7 + 1;
                                                      }
                                                      else {
                                                        uVar6 = uVar6 + 1;
                                                        (pGVar13->fields)._arrowBaseRadius = 0.0;
                                                        ppGVar7 = ppGVar7 + 1;
                                                      }
                                                    }
                                                    pGVar1 = (lookAndFeel->fields).
                                                             _sglSliderLookAndFeel;
                                                    if (pGVar1 != (
                                                  GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    if ((pGVar1->vector[0] !=
                                                         (GizmoLineSlider2DLookAndFeel *)0x0) &&
                                                       (pGVar13 = (pGVar1->vector[0]->fields).
                                                                 _capLookAndFeel,
                                                       pGVar13 != (GizmoCap2DLookAndFeel *)0x0)) {
                                                      pGVar1 = (this->fields).
                                                               _mvSglSliderLookAndFeel;
                                                      uVar6 = 0;
                                                      fVar4 = (pGVar13->fields)._circleRadius;
                                                      if (pGVar1 != (
                                                  GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                                                    ppGVar7 = pGVar1->vector;
                                                    for (; (int)uVar6 < (int)pGVar1->max_length;
                                                        uVar6 = uVar6 + 1) {
                                                      if ((uint)pGVar1->max_length <= uVar6)
                                                      goto code_?;
                                                      if ((*ppGVar7 ==
                                                           (GizmoLineSlider2DLookAndFeel *)0x0) ||
                                                         (pGVar13 = ((*ppGVar7)->fields).
                                                                   _capLookAndFeel,
                                                         pGVar13 == (GizmoCap2DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      (pGVar13->fields)._circleRadius = fVar4;
                                                      ppGVar7 = ppGVar7 + 1;
                                                    }
                                                    pGVar1 = (lookAndFeel->fields).
                                                             _sglSliderLookAndFeel;
                                                    if (pGVar1 != (
                                                  GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    if ((pGVar1->vector[0] !=
                                                         (GizmoLineSlider2DLookAndFeel *)0x0) &&
                                                       (pGVar13 = (pGVar1->vector[0]->fields).
                                                                 _capLookAndFeel,
                                                       pGVar13 != (GizmoCap2DLookAndFeel *)0x0)) {
                                                      pGVar1 = (this->fields).
                                                               _mvSglSliderLookAndFeel;
                                                      uVar6 = 0;
                                                      iVar14 = (pGVar13->fields)._fillMode;
                                                      if (pGVar1 != (
                                                  GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                                                    ppGVar7 = pGVar1->vector;
                                                    for (; (int)uVar6 < (int)pGVar1->max_length;
                                                        uVar6 = uVar6 + 1) {
                                                      if ((uint)pGVar1->max_length <= uVar6)
                                                      goto code_?;
                                                      if ((*ppGVar7 ==
                                                           (GizmoLineSlider2DLookAndFeel *)0x0) ||
                                                         (pGVar13 = ((*ppGVar7)->fields).
                                                                   _capLookAndFeel,
                                                         pGVar13 == (GizmoCap2DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      (pGVar13->fields)._fillMode = iVar14;
                                                      ppGVar7 = ppGVar7 + 1;
                                                    }
                                                    pGVar1 = (lookAndFeel->fields).
                                                             _sglSliderLookAndFeel;
                                                    if (pGVar1 != (
                                                  GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    if ((pGVar1->vector[0] !=
                                                         (GizmoLineSlider2DLookAndFeel *)0x0) &&
                                                       (pGVar13 = (pGVar1->vector[0]->fields).
                                                                 _capLookAndFeel,
                                                       pGVar13 != (GizmoCap2DLookAndFeel *)0x0)) {
                                                      pGVar1 = (this->fields).
                                                               _mvSglSliderLookAndFeel;
                                                      uVar6 = 0;
                                                      iVar14 = (pGVar13->fields)._capType;
                                                      if (pGVar1 != (
                                                  GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                                                    ppGVar7 = pGVar1->vector;
                                                    for (; (int)uVar6 < (int)pGVar1->max_length;
                                                        uVar6 = uVar6 + 1) {
                                                      if ((uint)pGVar1->max_length <= uVar6)
                                                      goto code_?;
                                                      if ((*ppGVar7 ==
                                                           (GizmoLineSlider2DLookAndFeel *)0x0) ||
                                                         (pGVar13 = ((*ppGVar7)->fields).
                                                                   _capLookAndFeel,
                                                         pGVar13 == (GizmoCap2DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      (pGVar13->fields)._capType = iVar14;
                                                      ppGVar7 = ppGVar7 + 1;
                                                    }
                                                    pBVar15 = (lookAndFeel->fields)._sglSliderCapVis;
                                                    if (pBVar15 != (Boolean__Array *)0x0) {
                                                      if ((int)pBVar15->max_length == 0) {
code_?:
                                                        FUN_?();
                                                        pcVar16 = (code *)swi(3);
                                                        (*pcVar16)();
                                                        return;
                                                      }
                                                      pBVar17 = (this->fields)._mvSglSliderCapVis;
                                                      if (pBVar17 != (Boolean__Array *)0x0) {
                                                        if ((int)pBVar17->max_length == 0)
                                                        goto code_?;
                                                        pBVar17->vector[0] = pBVar15->vector[0] != 0;
                                                        pBVar15 = (lookAndFeel->fields).
                                                                 _sglSliderCapVis;
                                                        if (pBVar15 != (Boolean__Array *)0x0) {
                                                          if ((uint)pBVar15->max_length < 2)
                                                          goto code_?;
                                                          pBVar17 = (this->fields)._mvSglSliderCapVis
                                                          ;
                                                          if (pBVar17 != (Boolean__Array *)0x0) {
                                                            if ((uint)pBVar17->max_length < 2)
                                                            goto code_?;
                                                            pBVar17->vector[1] =
                                                                 pBVar15->vector[1] != 0;
                                                            pBVar15 = (lookAndFeel->fields).
                                                                     _sglSliderCapVis;
                                                            if (pBVar15 != (Boolean__Array *)0x0) {
                                                              if ((uint)pBVar15->max_length < 3)
                                                              goto code_?;
                                                              pBVar17 = (this->fields).
                                                                       _mvSglSliderCapVis;
                                                              if (pBVar17 != (Boolean__Array *)0x0) {
                                                                if ((uint)pBVar17->max_length < 3)
                                                                goto code_?;
                                                                pBVar17->vector[2] =
                                                                     pBVar15->vector[2] != 0;
                                                                pBVar15 = (lookAndFeel->fields).
                                                                         _sglSliderCapVis;
                                                                if (pBVar15 != (Boolean__Array *)0x0)
                                                                {
                                                                  if ((uint)pBVar15->max_length < 4)
                                                                  goto code_?;
                                                                  pBVar17 = (this->fields).
                                                                           _mvSglSliderCapVis;
                                                                  if (pBVar17 != (Boolean__Array *)
                                                                                0x0) {
                                                                    if ((uint)pBVar17->max_length < 4
                                                                       ) goto code_?;
                                                                    pBVar17->vector[3] =
                                                                         pBVar15->vector[3] != 0;
                                                                    pGVar1 = (lookAndFeel->fields).
                                                                             _sglSliderLookAndFeel;
                                                                    if (pGVar1 != (
                                                  GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    if (pGVar1->vector[0] !=
                                                        (GizmoLineSlider2DLookAndFeel *)0x0) {
                                                      pGVar12 = (this->fields).
                                                               _mvSglSliderLookAndFeel;
                                                      iVar14 = (pGVar1->vector[0]->fields)._fillMode;
                                                      uVar6 = 0;
                                                      if (pGVar12 != (
                                                  GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                                                    ppGVar7 = pGVar12->vector;
                                                    for (; (int)uVar6 < (int)pGVar12->max_length;
                                                        uVar6 = uVar6 + 1) {
                                                      if ((uint)pGVar12->max_length <= uVar6)
                                                      goto code_?;
                                                      if (*ppGVar7 ==
                                                          (GizmoLineSlider2DLookAndFeel *)0x0)
                                                      goto code_?;
                                                      ((*ppGVar7)->fields)._fillMode = iVar14;
                                                      ppGVar7 = ppGVar7 + 1;
                                                    }
                                                    pGVar1 = (lookAndFeel->fields).
                                                             _sglSliderLookAndFeel;
                                                    if (pGVar1 != (
                                                  GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    pGVar2 = pGVar1->vector[0];
                                                    if (pGVar2 != (GizmoLineSlider2DLookAndFeel *)
                                                                  0x0) {
                                                      pGVar1 = (this->fields).
                                                               _mvSglSliderLookAndFeel;
                                                      uVar18 = (pGVar2->fields)._hoveredBorderColor.
                                                               r;
                                                      uVar19 = (pGVar2->fields)._hoveredBorderColor.
                                                               g;
                                                      uVar20 = (pGVar2->fields)._hoveredBorderColor.
                                                               b;
                                                      uVar21 = (pGVar2->fields)._hoveredBorderColor.
                                                               a;
                                                      uVar6 = 0;
                                                      if (pGVar1 != (
                                                  GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                                                    ppGVar7 = pGVar1->vector;
                                                    for (; (int)uVar6 < (int)pGVar1->max_length;
                                                        uVar6 = uVar6 + 1) {
                                                      if ((uint)pGVar1->max_length <= uVar6)
                                                      goto code_?;
                                                      pGVar2 = *ppGVar7;
                                                      if (pGVar2 == (GizmoLineSlider2DLookAndFeel *)
                                                                    0x0) goto code_?;
                                                      pGVar13 = (pGVar2->fields)._capLookAndFeel;
                                                      (pGVar2->fields)._hoveredBorderColor.r =
                                                           (float)uVar18;
                                                      (pGVar2->fields)._hoveredBorderColor.g =
                                                           (float)uVar19;
                                                      (pGVar2->fields)._hoveredBorderColor.b =
                                                           (float)uVar20;
                                                      (pGVar2->fields)._hoveredBorderColor.a =
                                                           (float)uVar21;
                                                      if (pGVar13 == (GizmoCap2DLookAndFeel *)0x0)
                                                      goto code_?;
                                                      ppGVar7 = ppGVar7 + 1;
                                                      (pGVar13->fields)._hoveredBorderColor.r =
                                                           (float)uVar18;
                                                      (pGVar13->fields)._hoveredBorderColor.g =
                                                           (float)uVar19;
                                                      (pGVar13->fields)._hoveredBorderColor.b =
                                                           (float)uVar20;
                                                      (pGVar13->fields)._hoveredBorderColor.a =
                                                           (float)uVar21;
                                                    }
                                                    pGVar1 = (lookAndFeel->fields).
                                                             _sglSliderLookAndFeel;
                                                    if (pGVar1 != (
                                                  GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    pGVar2 = pGVar1->vector[0];
                                                    if (pGVar2 != (GizmoLineSlider2DLookAndFeel *)
                                                                  0x0) {
                                                      pGVar1 = (this->fields).
                                                               _mvSglSliderLookAndFeel;
                                                      uVar22 = (pGVar2->fields)._hoveredColor.r;
                                                      uVar23 = (pGVar2->fields)._hoveredColor.g;
                                                      uVar24 = (pGVar2->fields)._hoveredColor.b;
                                                      uVar25 = (pGVar2->fields)._hoveredColor.a;
                                                      uVar6 = 0;
                                                      if (pGVar1 != (
                                                  GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                                                    ppGVar7 = pGVar1->vector;
                                                    for (; (int)uVar6 < (int)pGVar1->max_length;
                                                        uVar6 = uVar6 + 1) {
                                                      if ((uint)pGVar1->max_length <= uVar6)
                                                      goto code_?;
                                                      pGVar2 = *ppGVar7;
                                                      if (pGVar2 == (GizmoLineSlider2DLookAndFeel *)
                                                                    0x0) goto code_?;
                                                      pGVar13 = (pGVar2->fields)._capLookAndFeel;
                                                      (pGVar2->fields)._hoveredColor.r =
                                                           (float)uVar22;
                                                      (pGVar2->fields)._hoveredColor.g =
                                                           (float)uVar23;
                                                      (pGVar2->fields)._hoveredColor.b =
                                                           (float)uVar24;
                                                      (pGVar2->fields)._hoveredColor.a =
                                                           (float)uVar25;
                                                      if (pGVar13 == (GizmoCap2DLookAndFeel *)0x0)
                                                      goto code_?;
                                                      ppGVar7 = ppGVar7 + 1;
                                                      (pGVar13->fields)._hoveredColor.r =
                                                           (float)uVar22;
                                                      (pGVar13->fields)._hoveredColor.g =
                                                           (float)uVar23;
                                                      (pGVar13->fields)._hoveredColor.b =
                                                           (float)uVar24;
                                                      (pGVar13->fields)._hoveredColor.a =
                                                           (float)uVar25;
                                                    }
                                                    pGVar1 = (lookAndFeel->fields).
                                                             _sglSliderLookAndFeel;
                                                    if (pGVar1 != (
                                                  GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    if (pGVar1->vector[0] !=
                                                        (GizmoLineSlider2DLookAndFeel *)0x0) {
                                                      pGVar12 = (this->fields).
                                                               _mvSglSliderLookAndFeel;
                                                      fVar4 = (pGVar1->vector[0]->fields)._length;
                                                      uVar6 = 0;
                                                      if (pGVar12 != (
                                                  GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                                                    ppGVar7 = pGVar12->vector;
                                                    while ((int)uVar6 < (int)pGVar12->max_length) {
                                                      if ((uint)pGVar12->max_length <= uVar6)
                                                      goto code_?;
                                                      pGVar2 = *ppGVar7;
                                                      if (pGVar2 == (GizmoLineSlider2DLookAndFeel *)
                                                                    0x0) goto code_?;
                                                      if (0.0 <= fVar4) {
                                                        uVar6 = uVar6 + 1;
                                                        (pGVar2->fields)._length = fVar4;
                                                        ppGVar7 = ppGVar7 + 1;
                                                      }
                                                      else {
                                                        uVar6 = uVar6 + 1;
                                                        (pGVar2->fields)._length = 0.0;
                                                        ppGVar7 = ppGVar7 + 1;
                                                      }
                                                    }
                                                    pGVar1 = (lookAndFeel->fields).
                                                             _sglSliderLookAndFeel;
                                                    if (pGVar1 != (
                                                  GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    if (pGVar1->vector[0] !=
                                                        (GizmoLineSlider2DLookAndFeel *)0x0) {
                                                      pGVar12 = (this->fields).
                                                               _mvSglSliderLookAndFeel;
                                                      iVar14 = (pGVar1->vector[0]->fields)._lineType;
                                                      uVar6 = 0;
                                                      if (pGVar12 != (
                                                  GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                                                    ppGVar7 = pGVar12->vector;
                                                    for (; (int)uVar6 < (int)pGVar12->max_length;
                                                        uVar6 = uVar6 + 1) {
                                                      if ((uint)pGVar12->max_length <= uVar6)
                                                      goto code_?;
                                                      if (*ppGVar7 ==
                                                          (GizmoLineSlider2DLookAndFeel *)0x0)
                                                      goto code_?;
                                                      ((*ppGVar7)->fields)._lineType = iVar14;
                                                      ppGVar7 = ppGVar7 + 1;
                                                    }
                                                    pGVar1 = (lookAndFeel->fields).
                                                             _sglSliderLookAndFeel;
                                                    if (pGVar1 != (
                                                  GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    if ((pGVar1->vector[0] !=
                                                         (GizmoLineSlider2DLookAndFeel *)0x0) &&
                                                       (pGVar13 = (pGVar1->vector[0]->fields).
                                                                 _capLookAndFeel,
                                                       pGVar13 != (GizmoCap2DLookAndFeel *)0x0)) {
                                                      pGVar1 = (this->fields).
                                                               _mvSglSliderLookAndFeel;
                                                      uVar6 = 0;
                                                      fVar4 = (pGVar13->fields)._quadHeight;
                                                      if (pGVar1 != (
                                                  GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                                                    ppGVar7 = pGVar1->vector;
                                                    while ((int)uVar6 < (int)pGVar1->max_length) {
                                                      if ((uint)pGVar1->max_length <= uVar6)
                                                      goto code_?;
                                                      if ((*ppGVar7 ==
                                                           (GizmoLineSlider2DLookAndFeel *)0x0) ||
                                                         (pGVar13 = ((*ppGVar7)->fields).
                                                                   _capLookAndFeel,
                                                         pGVar13 == (GizmoCap2DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      if (0.0 <= fVar4) {
                                                        uVar6 = uVar6 + 1;
                                                        (pGVar13->fields)._quadHeight = fVar4;
                                                        ppGVar7 = ppGVar7 + 1;
                                                      }
                                                      else {
                                                        uVar6 = uVar6 + 1;
                                                        (pGVar13->fields)._quadHeight = 0.0;
                                                        ppGVar7 = ppGVar7 + 1;
                                                      }
                                                    }
                                                    pGVar1 = (lookAndFeel->fields).
                                                             _sglSliderLookAndFeel;
                                                    if (pGVar1 != (
                                                  GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                                                    if ((int)pGVar1->max_length == 0)
                                                    goto code_?;
                                                    if ((pGVar1->vector[0] !=
                                                         (GizmoLineSlider2DLookAndFeel *)0x0) &&
                                                       (pGVar13 = (pGVar1->vector[0]->fields).
                                                                 _capLookAndFeel,
                                                       pGVar13 != (GizmoCap2DLookAndFeel *)0x0)) {
                                                      pGVar1 = (this->fields).
                                                               _mvSglSliderLookAndFeel;
                                                      fVar4 = (pGVar13->fields)._quadWidth;
                                                      if (pGVar1 != (
                                                  GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                                                    ppGVar7 = pGVar1->vector;
                                                    while ((int)uVar5 < (int)pGVar1->max_length) {
                                                      if ((uint)pGVar1->max_length <= uVar5)
                                                      goto code_?;
                                                      if ((*ppGVar7 ==
                                                           (GizmoLineSlider2DLookAndFeel *)0x0) ||
                                                         (pGVar13 = ((*ppGVar7)->fields).
                                                                   _capLookAndFeel,
                                                         pGVar13 == (GizmoCap2DLookAndFeel *)0x0))
                                                      goto code_?;
                                                      if (0.0 <= fVar4) {
                                                        uVar5 = uVar5 + 1;
                                                        (pGVar13->fields)._quadWidth = fVar4;
                                                        ppGVar7 = ppGVar7 + 1;
                                                      }
                                                      else {
                                                        uVar5 = uVar5 + 1;
                                                        (pGVar13->fields)._quadWidth = 0.0;
                                                        ppGVar7 = ppGVar7 + 1;
                                                      }
                                                    }
                                                    pBVar15 = (lookAndFeel->fields)._sglSliderVis;
                                                    if (pBVar15 != (Boolean__Array *)0x0) {
                                                      if ((int)pBVar15->max_length != 0) {
                                                        pBVar17 = (this->fields)._mvSglSliderVis;
                                                        if (pBVar17 == (Boolean__Array *)0x0)
                                                        goto code_?;
                                                        if ((int)pBVar17->max_length != 0) {
                                                          pBVar17->vector[0] = pBVar15->vector[0] != 0
                                                          ;
                                                          pBVar15 = (lookAndFeel->fields).
                                                                   _sglSliderVis;
                                                          if (pBVar15 == (Boolean__Array *)0x0)
                                                          goto code_?;
                                                          if (1 < (uint)pBVar15->max_length) {
                                                            pBVar17 = (this->fields)._mvSglSliderVis;
                                                            if (pBVar17 == (Boolean__Array *)0x0)
                                                            goto code_?;
                                                            if (1 < (uint)pBVar17->max_length) {
                                                              pBVar17->vector[1] =
                                                                   pBVar15->vector[1] != 0;
                                                              pBVar15 = (lookAndFeel->fields).
                                                                       _sglSliderVis;
                                                              if (pBVar15 == (Boolean__Array *)0x0)
                                                              goto code_?;
                                                              if (2 < (uint)pBVar15->max_length) {
                                                                pBVar17 = (this->fields).
                                                                         _mvSglSliderVis;
                                                                if (pBVar17 == (Boolean__Array *)0x0)
                                                                goto code_?;
                                                                if (2 < (uint)pBVar17->max_length) {
                                                                  pBVar17->vector[2] =
                                                                       pBVar15->vector[2] != 0;
                                                                  pBVar15 = (lookAndFeel->fields).
                                                                           _sglSliderVis;
                                                                  if (pBVar15 == (Boolean__Array *)
                                                                                0x0)
                                                                  goto code_?;
                                                                  if (3 < (uint)pBVar15->max_length)
                                                                  {
                                                                    pBVar17 = (this->fields).
                                                                             _mvSglSliderVis;
                                                                    if (pBVar17 == (Boolean__Array *)
                                                                                  0x0)
                                                                    goto code_?;
                                                                    if (3 < (uint)pBVar17->max_length
                                                                       ) {
                                                                      pBVar17->vector[3] =
                                                                           pBVar15->vector[3] != 0;
                                                                      return;
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                      goto code_?;
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
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Boolean IsMvNegativeSliderCapVisible(Int32) */

bool Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
     UniversalGizmoLookAndFeel2D_IsMvNegativeSliderCapVisible
               (UniversalGizmoLookAndFeel2D *this,int32_t axisIndex,MethodInfo *method)

{
  pBVar1 = (this->fields)._mvSglSliderCapVis;
  if (pBVar1 == (Boolean__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if (axisIndex + 2U < (uint)pBVar1->max_length) {
    return pBVar1->vector[(longlong)axisIndex + 2] != 0;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean IsMvNegativeSliderVisible(Int32) */

bool Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
     UniversalGizmoLookAndFeel2D_IsMvNegativeSliderVisible
               (UniversalGizmoLookAndFeel2D *this,int32_t axisIndex,MethodInfo *method)

{
  pBVar1 = (this->fields)._mvSglSliderVis;
  if (pBVar1 == (Boolean__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if (axisIndex + 2U < (uint)pBVar1->max_length) {
    return pBVar1->vector[(longlong)axisIndex + 2] != 0;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean IsMvPositiveSliderCapVisible(Int32) */

bool Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
     UniversalGizmoLookAndFeel2D_IsMvPositiveSliderCapVisible
               (UniversalGizmoLookAndFeel2D *this,int32_t axisIndex,MethodInfo *method)

{
  pBVar1 = (this->fields)._mvSglSliderCapVis;
  if (pBVar1 == (Boolean__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if ((uint)axisIndex < (uint)pBVar1->max_length) {
    return pBVar1->vector[axisIndex] != 0;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean IsMvSliderCapVisible(Int32, AxisSign) */

bool Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
     UniversalGizmoLookAndFeel2D_IsMvSliderCapVisible
               (UniversalGizmoLookAndFeel2D *this,int32_t axisIndex,AxisSign__Enum axisSign,
               MethodInfo *method)

{
  pBVar1 = (this->fields)._mvSglSliderCapVis;
  if (axisSign == AxisSign__Enum_Positive) {
    if (pBVar1 == (Boolean__Array *)0x0) goto code_?;
    if ((uint)axisIndex < (uint)pBVar1->max_length) {
      return pBVar1->vector[axisIndex] != 0;
    }
  }
  else {
    if (pBVar1 == (Boolean__Array *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
    if (axisIndex + 2U < (uint)pBVar1->max_length) {
      return pBVar1->vector[(longlong)axisIndex + 2] != 0;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean IsMvSliderVisible(Int32, AxisSign) */

bool Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
     UniversalGizmoLookAndFeel2D_IsMvSliderVisible
               (UniversalGizmoLookAndFeel2D *this,int32_t axisIndex,AxisSign__Enum axisSign,
               MethodInfo *method)

{
  pBVar1 = (this->fields)._mvSglSliderVis;
  if (axisSign == AxisSign__Enum_Positive) {
    if (pBVar1 == (Boolean__Array *)0x0) goto code_?;
    if ((uint)axisIndex < (uint)pBVar1->max_length) {
      return pBVar1->vector[axisIndex] != 0;
    }
  }
  else {
    if (pBVar1 == (Boolean__Array *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
    if (axisIndex + 2U < (uint)pBVar1->max_length) {
      return pBVar1->vector[(longlong)axisIndex + 2] != 0;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void SetMvAxisBorderColor(Int32, Color) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
     UniversalGizmoLookAndFeel2D_SetMvAxisBorderColor
               (UniversalGizmoLookAndFeel2D *this,int32_t axisIndex,Color *color,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSliderLookAndFeel;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if ((uint)pGVar1->max_length <= (uint)axisIndex) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pGVar3 = pGVar1->vector[axisIndex];
    if (pGVar3 != (GizmoLineSlider2DLookAndFeel *)0x0) {
      uVar4 = color->r;
      uVar5 = color->g;
      uVar6 = color->b;
      uVar7 = color->a;
      (pGVar3->fields)._borderColor.r = (float)uVar4;
      (pGVar3->fields)._borderColor.g = (float)uVar5;
      (pGVar3->fields)._borderColor.b = (float)uVar6;
      (pGVar3->fields)._borderColor.a = (float)uVar7;
      pGVar1 = (this->fields)._mvSglSliderLookAndFeel;
      if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
        if ((uint)pGVar1->max_length <= (uint)axisIndex) goto code_?;
        if ((pGVar1->vector[axisIndex] != (GizmoLineSlider2DLookAndFeel *)0x0) &&
           (pGVar8 = (pGVar1->vector[axisIndex]->fields)._capLookAndFeel,
           pGVar8 != (GizmoCap2DLookAndFeel *)0x0)) {
          (pGVar8->fields)._borderColor.r = (float)uVar4;
          (pGVar8->fields)._borderColor.g = (float)uVar5;
          (pGVar8->fields)._borderColor.b = (float)uVar6;
          (pGVar8->fields)._borderColor.a = (float)uVar7;
          pGVar1 = (this->fields)._mvSglSliderLookAndFeel;
          if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
            if ((uint)pGVar1->max_length <= axisIndex + 2U) goto code_?;
            pGVar3 = pGVar1->vector[(longlong)axisIndex + 2];
            if (pGVar3 != (GizmoLineSlider2DLookAndFeel *)0x0) {
              (pGVar3->fields)._borderColor.r = (float)uVar4;
              (pGVar3->fields)._borderColor.g = (float)uVar5;
              (pGVar3->fields)._borderColor.b = (float)uVar6;
              (pGVar3->fields)._borderColor.a = (float)uVar7;
              pGVar1 = (this->fields)._mvSglSliderLookAndFeel;
              if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                if ((uint)pGVar1->max_length <= axisIndex + 2U) goto code_?;
                if ((pGVar1->vector[(longlong)axisIndex + 2] != (GizmoLineSlider2DLookAndFeel *)0x0)
                   && (pGVar8 = (pGVar1->vector[(longlong)axisIndex + 2]->fields)._capLookAndFeel,
                      pGVar8 != (GizmoCap2DLookAndFeel *)0x0)) {
                  (pGVar8->fields)._borderColor.r = (float)uVar4;
                  (pGVar8->fields)._borderColor.g = (float)uVar5;
                  (pGVar8->fields)._borderColor.b = (float)uVar6;
                  (pGVar8->fields)._borderColor.a = (float)uVar7;
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
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetMvAxisColor(Int32, Color) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
     UniversalGizmoLookAndFeel2D_SetMvAxisColor
               (UniversalGizmoLookAndFeel2D *this,int32_t axisIndex,Color *color,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSliderLookAndFeel;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if ((uint)pGVar1->max_length <= (uint)axisIndex) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pGVar3 = pGVar1->vector[axisIndex];
    if (pGVar3 != (GizmoLineSlider2DLookAndFeel *)0x0) {
      uVar4 = color->r;
      uVar5 = color->g;
      uVar6 = color->b;
      uVar7 = color->a;
      (pGVar3->fields)._color.r = (float)uVar4;
      (pGVar3->fields)._color.g = (float)uVar5;
      (pGVar3->fields)._color.b = (float)uVar6;
      (pGVar3->fields)._color.a = (float)uVar7;
      pGVar1 = (this->fields)._mvSglSliderLookAndFeel;
      if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
        if ((uint)pGVar1->max_length <= (uint)axisIndex) goto code_?;
        if ((pGVar1->vector[axisIndex] != (GizmoLineSlider2DLookAndFeel *)0x0) &&
           (pGVar8 = (pGVar1->vector[axisIndex]->fields)._capLookAndFeel,
           pGVar8 != (GizmoCap2DLookAndFeel *)0x0)) {
          (pGVar8->fields)._color.r = (float)uVar4;
          (pGVar8->fields)._color.g = (float)uVar5;
          (pGVar8->fields)._color.b = (float)uVar6;
          (pGVar8->fields)._color.a = (float)uVar7;
          pGVar1 = (this->fields)._mvSglSliderLookAndFeel;
          if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
            if ((uint)pGVar1->max_length <= axisIndex + 2U) goto code_?;
            pGVar3 = pGVar1->vector[(longlong)axisIndex + 2];
            if (pGVar3 != (GizmoLineSlider2DLookAndFeel *)0x0) {
              (pGVar3->fields)._color.r = (float)uVar4;
              (pGVar3->fields)._color.g = (float)uVar5;
              (pGVar3->fields)._color.b = (float)uVar6;
              (pGVar3->fields)._color.a = (float)uVar7;
              pGVar1 = (this->fields)._mvSglSliderLookAndFeel;
              if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                if ((uint)pGVar1->max_length <= axisIndex + 2U) goto code_?;
                if ((pGVar1->vector[(longlong)axisIndex + 2] != (GizmoLineSlider2DLookAndFeel *)0x0)
                   && (pGVar8 = (pGVar1->vector[(longlong)axisIndex + 2]->fields)._capLookAndFeel,
                      pGVar8 != (GizmoCap2DLookAndFeel *)0x0)) {
                  (pGVar8->fields)._color.r = (float)uVar4;
                  (pGVar8->fields)._color.g = (float)uVar5;
                  (pGVar8->fields)._color.b = (float)uVar6;
                  (pGVar8->fields)._color.a = (float)uVar7;
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
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetMvBoxSliderThickness(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
     UniversalGizmoLookAndFeel2D_SetMvBoxSliderThickness
               (UniversalGizmoLookAndFeel2D *this,float thickness,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSliderLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
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
      pGVar4 = (GizmoLineSlider2DLookAndFeel *)method->methodPointer;
      if (pGVar4 == (GizmoLineSlider2DLookAndFeel *)0x0) break;
      if (0.0 <= thickness) {
        uVar2 = uVar2 + 1;
        (pGVar4->fields)._boxThickness = thickness;
        method = (MethodInfo *)&method->virtualMethodPointer;
      }
      else {
        uVar2 = uVar2 + 1;
        (pGVar4->fields)._boxThickness = 0.0;
        method = (MethodInfo *)&method->virtualMethodPointer;
      }
    }
  }
  FUN_?(0,pGVar1,method);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetMvDblSliderBorderColor(Color) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
     UniversalGizmoLookAndFeel2D_SetMvDblSliderBorderColor
               (UniversalGizmoLookAndFeel2D *this,Color *color,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvDblSliderLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    fVar2 = color->g;
    fVar3 = color->b;
    fVar4 = color->a;
    (pGVar1->fields)._borderColor.r = color->r;
    (pGVar1->fields)._borderColor.g = fVar2;
    (pGVar1->fields)._borderColor.b = fVar3;
    (pGVar1->fields)._borderColor.a = fVar4;
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetMvDblSliderColor(Color) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
     UniversalGizmoLookAndFeel2D_SetMvDblSliderColor
               (UniversalGizmoLookAndFeel2D *this,Color *color,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvDblSliderLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    fVar2 = color->g;
    fVar3 = color->b;
    fVar4 = color->a;
    (pGVar1->fields)._color.r = color->r;
    (pGVar1->fields)._color.g = fVar2;
    (pGVar1->fields)._color.b = fVar3;
    (pGVar1->fields)._color.a = fVar4;
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetMvDblSliderHoveredBorderColor(Color) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
     UniversalGizmoLookAndFeel2D_SetMvDblSliderHoveredBorderColor
               (UniversalGizmoLookAndFeel2D *this,Color *color,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvDblSliderLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    fVar2 = color->g;
    fVar3 = color->b;
    fVar4 = color->a;
    (pGVar1->fields)._hoveredBorderColor.r = color->r;
    (pGVar1->fields)._hoveredBorderColor.g = fVar2;
    (pGVar1->fields)._hoveredBorderColor.b = fVar3;
    (pGVar1->fields)._hoveredBorderColor.a = fVar4;
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetMvDblSliderHoveredColor(Color) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
     UniversalGizmoLookAndFeel2D_SetMvDblSliderHoveredColor
               (UniversalGizmoLookAndFeel2D *this,Color *color,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvDblSliderLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    fVar2 = color->g;
    fVar3 = color->b;
    fVar4 = color->a;
    (pGVar1->fields)._hoveredColor.r = color->r;
    (pGVar1->fields)._hoveredColor.g = fVar2;
    (pGVar1->fields)._hoveredColor.b = fVar3;
    (pGVar1->fields)._hoveredColor.a = fVar4;
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetMvDblSliderPlaneType(GizmoPlane2DType) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
     UniversalGizmoLookAndFeel2D_SetMvDblSliderPlaneType
               (UniversalGizmoLookAndFeel2D *this,GizmoPlane2DType__Enum sliderType,
               MethodInfo *method)

{
  pGVar1 = (this->fields)._mvDblSliderLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    (pGVar1->fields)._planeType = sliderType;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetMvDblSliderQuadWidth(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
     UniversalGizmoLookAndFeel2D_SetMvDblSliderQuadWidth
               (UniversalGizmoLookAndFeel2D *this,float width,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvDblSliderLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    fVar2 = 0.0;
    if (0.0 <= width) {
      fVar2 = width;
    }
    (pGVar1->fields)._quadWidth = fVar2;
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetMvScale(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::UniversalGizmoLookAndFeel2D_SetMvScale
               (UniversalGizmoLookAndFeel2D *this,float scale,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSliderLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while ((int)uVar2 < (int)pGVar1->max_length) {
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pGVar5 = *ppGVar3;
      if (pGVar5 == (GizmoLineSlider2DLookAndFeel *)0x0) goto code_?;
      fVar6 = scale;
      if (scale < 0.0) {
        fVar6 = 0.0;
      }
      pGVar7 = (pGVar5->fields)._capLookAndFeel;
      (pGVar5->fields)._scale = fVar6;
      if (pGVar7 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
      if (0.0 <= scale) {
        uVar2 = uVar2 + 1;
        (pGVar7->fields)._scale = scale;
        ppGVar3 = ppGVar3 + 1;
      }
      else {
        uVar2 = uVar2 + 1;
        (pGVar7->fields)._scale = 0.0;
        ppGVar3 = ppGVar3 + 1;
      }
    }
    pGVar8 = (this->fields)._mvDblSliderLookAndFeel;
    if (pGVar8 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
      fVar6 = 0.0;
      if (0.0 <= scale) {
        fVar6 = scale;
      }
      (pGVar8->fields)._scale = fVar6;
      return;
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetMvSliderArrowCapBaseRadius(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
     UniversalGizmoLookAndFeel2D_SetMvSliderArrowCapBaseRadius
               (UniversalGizmoLookAndFeel2D *this,float radius,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSliderLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?(uVar2,pGVar1,method);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*ppGVar3 == (GizmoLineSlider2DLookAndFeel *)0x0) ||
         (method = (MethodInfo *)((*ppGVar3)->fields)._capLookAndFeel,
         (GizmoCap2DLookAndFeel *)method == (GizmoCap2DLookAndFeel *)0x0)) break;
      if (0.0 <= radius) {
        uVar2 = uVar2 + 1;
        (((GizmoCap2DLookAndFeel *)method)->fields)._arrowBaseRadius = radius;
        ppGVar3 = ppGVar3 + 1;
      }
      else {
        uVar2 = uVar2 + 1;
        (((GizmoCap2DLookAndFeel *)method)->fields)._arrowBaseRadius = 0.0;
        ppGVar3 = ppGVar3 + 1;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetMvSliderArrowCapHeight(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
     UniversalGizmoLookAndFeel2D_SetMvSliderArrowCapHeight
               (UniversalGizmoLookAndFeel2D *this,float height,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSliderLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?(uVar2,pGVar1,method);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*ppGVar3 == (GizmoLineSlider2DLookAndFeel *)0x0) ||
         (method = (MethodInfo *)((*ppGVar3)->fields)._capLookAndFeel,
         (GizmoCap2DLookAndFeel *)method == (GizmoCap2DLookAndFeel *)0x0)) break;
      if (0.0 <= height) {
        uVar2 = uVar2 + 1;
        (((GizmoCap2DLookAndFeel *)method)->fields)._arrowHeight = height;
        ppGVar3 = ppGVar3 + 1;
      }
      else {
        uVar2 = uVar2 + 1;
        (((GizmoCap2DLookAndFeel *)method)->fields)._arrowHeight = 0.0;
        ppGVar3 = ppGVar3 + 1;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetMvSliderCapFillMode(GizmoFillMode2D) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
     UniversalGizmoLookAndFeel2D_SetMvSliderCapFillMode
               (UniversalGizmoLookAndFeel2D *this,GizmoFillMode2D__Enum fillMode,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSliderLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*ppGVar3 == (GizmoLineSlider2DLookAndFeel *)0x0) ||
         (pGVar5 = ((*ppGVar3)->fields)._capLookAndFeel, pGVar5 == (GizmoCap2DLookAndFeel *)0x0))
      break;
      uVar2 = uVar2 + 1;
      (pGVar5->fields)._fillMode = fillMode;
      ppGVar3 = ppGVar3 + 1;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetMvSliderCapType(GizmoCap2DType) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
     UniversalGizmoLookAndFeel2D_SetMvSliderCapType
               (UniversalGizmoLookAndFeel2D *this,GizmoCap2DType__Enum capType,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSliderLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*ppGVar3 == (GizmoLineSlider2DLookAndFeel *)0x0) ||
         (pGVar5 = ((*ppGVar3)->fields)._capLookAndFeel, pGVar5 == (GizmoCap2DLookAndFeel *)0x0))
      break;
      uVar2 = uVar2 + 1;
      (pGVar5->fields)._capType = capType;
      ppGVar3 = ppGVar3 + 1;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetMvSliderCapVisible(Int32, AxisSign, Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
     UniversalGizmoLookAndFeel2D_SetMvSliderCapVisible
               (UniversalGizmoLookAndFeel2D *this,int32_t axisIndex,AxisSign__Enum axisSign,
               bool isVisible,MethodInfo *method)

{
  pBVar1 = (this->fields)._mvSglSliderCapVis;
  if (axisSign == AxisSign__Enum_Positive) {
    if (pBVar1 == (Boolean__Array *)0x0) goto code_?;
    if ((uint)axisIndex < (uint)pBVar1->max_length) {
      pBVar1->vector[axisIndex] = isVisible;
      return;
    }
  }
  else {
    if (pBVar1 == (Boolean__Array *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (axisIndex + 2U < (uint)pBVar1->max_length) {
      pBVar1->vector[(longlong)axisIndex + 2] = isVisible;
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetMvSliderCircleCapRadius(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
     UniversalGizmoLookAndFeel2D_SetMvSliderCircleCapRadius
               (UniversalGizmoLookAndFeel2D *this,float radius,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSliderLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?(ppGVar3,uVar2,method);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*ppGVar3 == (GizmoLineSlider2DLookAndFeel *)0x0) ||
         (method = (MethodInfo *)((*ppGVar3)->fields)._capLookAndFeel,
         (GizmoCap2DLookAndFeel *)method == (GizmoCap2DLookAndFeel *)0x0)) break;
      uVar2 = uVar2 + 1;
      (((GizmoCap2DLookAndFeel *)method)->fields)._circleRadius = radius;
      ppGVar3 = ppGVar3 + 1;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetMvSliderFillMode(GizmoFillMode2D) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
     UniversalGizmoLookAndFeel2D_SetMvSliderFillMode
               (UniversalGizmoLookAndFeel2D *this,GizmoFillMode2D__Enum fillMode,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSliderLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*ppGVar3 == (GizmoLineSlider2DLookAndFeel *)0x0) break;
      uVar2 = uVar2 + 1;
      ((*ppGVar3)->fields)._fillMode = fillMode;
      ppGVar3 = ppGVar3 + 1;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetMvSliderHoveredBorderColor(Color) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
     UniversalGizmoLookAndFeel2D_SetMvSliderHoveredBorderColor
               (UniversalGizmoLookAndFeel2D *this,Color *color,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSliderLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pGVar5 = *ppGVar3;
      if (pGVar5 == (GizmoLineSlider2DLookAndFeel *)0x0) break;
      uVar6 = color->r;
      uVar7 = color->g;
      uVar8 = color->b;
      uVar9 = color->a;
      pGVar10 = (pGVar5->fields)._capLookAndFeel;
      (pGVar5->fields)._hoveredBorderColor.r = (float)uVar6;
      (pGVar5->fields)._hoveredBorderColor.g = (float)uVar7;
      (pGVar5->fields)._hoveredBorderColor.b = (float)uVar8;
      (pGVar5->fields)._hoveredBorderColor.a = (float)uVar9;
      if (pGVar10 == (GizmoCap2DLookAndFeel *)0x0) break;
      uVar2 = uVar2 + 1;
      ppGVar3 = ppGVar3 + 1;
      (pGVar10->fields)._hoveredBorderColor.r = (float)uVar6;
      (pGVar10->fields)._hoveredBorderColor.g = (float)uVar7;
      (pGVar10->fields)._hoveredBorderColor.b = (float)uVar8;
      (pGVar10->fields)._hoveredBorderColor.a = (float)uVar9;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetMvSliderHoveredFillColor(Color) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
     UniversalGizmoLookAndFeel2D_SetMvSliderHoveredFillColor
               (UniversalGizmoLookAndFeel2D *this,Color *color,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSliderLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pGVar5 = *ppGVar3;
      if (pGVar5 == (GizmoLineSlider2DLookAndFeel *)0x0) break;
      uVar6 = color->r;
      uVar7 = color->g;
      uVar8 = color->b;
      uVar9 = color->a;
      pGVar10 = (pGVar5->fields)._capLookAndFeel;
      (pGVar5->fields)._hoveredColor.r = (float)uVar6;
      (pGVar5->fields)._hoveredColor.g = (float)uVar7;
      (pGVar5->fields)._hoveredColor.b = (float)uVar8;
      (pGVar5->fields)._hoveredColor.a = (float)uVar9;
      if (pGVar10 == (GizmoCap2DLookAndFeel *)0x0) break;
      uVar2 = uVar2 + 1;
      ppGVar3 = ppGVar3 + 1;
      (pGVar10->fields)._hoveredColor.r = (float)uVar6;
      (pGVar10->fields)._hoveredColor.g = (float)uVar7;
      (pGVar10->fields)._hoveredColor.b = (float)uVar8;
      (pGVar10->fields)._hoveredColor.a = (float)uVar9;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetMvSliderLineType(GizmoLine2DType) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
     UniversalGizmoLookAndFeel2D_SetMvSliderLineType
               (UniversalGizmoLookAndFeel2D *this,GizmoLine2DType__Enum lineType,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSliderLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*ppGVar3 == (GizmoLineSlider2DLookAndFeel *)0x0) break;
      uVar2 = uVar2 + 1;
      ((*ppGVar3)->fields)._lineType = lineType;
      ppGVar3 = ppGVar3 + 1;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetMvSliderQuadCapHeight(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
     UniversalGizmoLookAndFeel2D_SetMvSliderQuadCapHeight
               (UniversalGizmoLookAndFeel2D *this,float height,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSliderLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?(uVar2,pGVar1,method);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*ppGVar3 == (GizmoLineSlider2DLookAndFeel *)0x0) ||
         (method = (MethodInfo *)((*ppGVar3)->fields)._capLookAndFeel,
         (GizmoCap2DLookAndFeel *)method == (GizmoCap2DLookAndFeel *)0x0)) break;
      if (0.0 <= height) {
        uVar2 = uVar2 + 1;
        (((GizmoCap2DLookAndFeel *)method)->fields)._quadHeight = height;
        ppGVar3 = ppGVar3 + 1;
      }
      else {
        uVar2 = uVar2 + 1;
        (((GizmoCap2DLookAndFeel *)method)->fields)._quadHeight = 0.0;
        ppGVar3 = ppGVar3 + 1;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetMvSliderQuadCapWidth(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
     UniversalGizmoLookAndFeel2D_SetMvSliderQuadCapWidth
               (UniversalGizmoLookAndFeel2D *this,float width,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSliderLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?(uVar2,pGVar1,method);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*ppGVar3 == (GizmoLineSlider2DLookAndFeel *)0x0) ||
         (method = (MethodInfo *)((*ppGVar3)->fields)._capLookAndFeel,
         (GizmoCap2DLookAndFeel *)method == (GizmoCap2DLookAndFeel *)0x0)) break;
      if (0.0 <= width) {
        uVar2 = uVar2 + 1;
        (((GizmoCap2DLookAndFeel *)method)->fields)._quadWidth = width;
        ppGVar3 = ppGVar3 + 1;
      }
      else {
        uVar2 = uVar2 + 1;
        (((GizmoCap2DLookAndFeel *)method)->fields)._quadWidth = 0.0;
        ppGVar3 = ppGVar3 + 1;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetMvSliderVisible(Int32, AxisSign, Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
     UniversalGizmoLookAndFeel2D_SetMvSliderVisible
               (UniversalGizmoLookAndFeel2D *this,int32_t axisIndex,AxisSign__Enum axisSign,
               bool isVisible,MethodInfo *method)

{
  pBVar1 = (this->fields)._mvSglSliderVis;
  if (axisSign == AxisSign__Enum_Positive) {
    if (pBVar1 == (Boolean__Array *)0x0) goto code_?;
    if ((uint)axisIndex < (uint)pBVar1->max_length) {
      pBVar1->vector[axisIndex] = isVisible;
      return;
    }
  }
  else {
    if (pBVar1 == (Boolean__Array *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (axisIndex + 2U < (uint)pBVar1->max_length) {
      pBVar1->vector[(longlong)axisIndex + 2] = isVisible;
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* UniversalGizmoLookAndFeel2D() */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::UniversalGizmoLookAndFeel2D__ctor
               (UniversalGizmoLookAndFeel2D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Boolean);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoLineSlider2DLookAndFeel);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoLineSlider2DLookAndFeel);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoPlaneSlider2DLookAndFeel);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (GizmoPlaneSlider2DLookAndFeel *)
            FUN_?(TypeInfo__RTG__GizmoPlaneSlider2DLookAndFeel);
  GizmoPlaneSlider2DLookAndFeel::GizmoPlaneSlider2DLookAndFeel__ctor(pGVar1,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._mvDblSliderLookAndFeel = pGVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._mvDblSliderLookAndFeel >> 0xc);
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
  pGVar7 = (GizmoLineSlider2DLookAndFeel__Array *)
            FUN_?(TypeInfo__RTG__GizmoLineSlider2DLookAndFeel,4);
  bVar2 = iRam_? != 0;
  (this->fields)._mvSglSliderLookAndFeel = pGVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._mvSglSliderLookAndFeel >> 0xc);
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
  (this->fields)._isMvDblSliderVisible = 1;
  pBVar8 = (Boolean__Array *)FUN_?(TypeInfo__System__Boolean,4);
  bVar2 = iRam_? != 0;
  (this->fields)._mvSglSliderVis = pBVar8;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._mvSglSliderVis >> 0xc);
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
  pBVar8 = (Boolean__Array *)FUN_?(TypeInfo__System__Boolean);
  bVar2 = iRam_? != 0;
  (this->fields)._mvSglSliderCapVis = pBVar8;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._mvSglSliderCapVis >> 0xc);
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
  pGVar7 = (this->fields)._mvSglSliderLookAndFeel;
  uVar3 = 0;
  if (pGVar7 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    lVar9 = 0x20;
    do {
      uVar10 = _UNK_?;
      uVar11 = _UNK_?;
      if ((int)pGVar7->max_length <= (int)uVar3) {
        pGVar7 = (this->fields)._mvSglSliderLookAndFeel;
        if (pGVar7 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
          if ((int)pGVar7->max_length == 0) goto code_?;
          pGVar12 = pGVar7->vector[0];
          if (pGVar12 != (GizmoLineSlider2DLookAndFeel *)0x0) {
            uVar13 = _UNK_?;
            (pGVar12->fields)._color.r = (float)_UNK_?;
            uVar14 = _UNK_?;
            (pGVar12->fields)._color.g = (float)uVar13;
            _UNK_? = (undefined4)uVar10;
            _UNK_? = SUB84(uVar10,4);
            uVar13 = _UNK_?;
            (pGVar12->fields)._color.b = (float)_UNK_?;
            _UNK_? = uVar14;
            uVar14 = _UNK_?;
            (pGVar12->fields)._color.a = (float)uVar13;
            pGVar7 = (this->fields)._mvSglSliderLookAndFeel;
            if (pGVar7 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
              if ((int)pGVar7->max_length == 0) goto code_?;
              if ((pGVar7->vector[0] != (GizmoLineSlider2DLookAndFeel *)0x0) &&
                 (pGVar15 = (pGVar7->vector[0]->fields)._capLookAndFeel,
                 pGVar15 != (GizmoCap2DLookAndFeel *)0x0)) {
                _UNK_? = (undefined4)uVar11;
                _UNK_? = SUB84(uVar11,4);
                uVar13 = _UNK_?;
                (pGVar15->fields)._color.r = (float)_UNK_?;
                _UNK_? = uVar14;
                uVar14 = _UNK_?;
                (pGVar15->fields)._color.g = (float)uVar13;
                _UNK_? = (undefined4)uVar10;
                _UNK_? = SUB84(uVar10,4);
                uVar13 = _UNK_?;
                (pGVar15->fields)._color.b = (float)_UNK_?;
                _UNK_? = uVar14;
                uVar14 = _UNK_?;
                (pGVar15->fields)._color.a = (float)uVar13;
                pGVar7 = (this->fields)._mvSglSliderLookAndFeel;
                if (pGVar7 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                  if ((uint)pGVar7->max_length < 3) goto code_?;
                  pGVar12 = pGVar7->vector[2];
                  if (pGVar12 != (GizmoLineSlider2DLookAndFeel *)0x0) {
                    _UNK_? = (undefined4)uVar11;
                    _UNK_? = SUB84(uVar11,4);
                    uVar13 = _UNK_?;
                    (pGVar12->fields)._color.r = (float)_UNK_?;
                    _UNK_? = uVar14;
                    uVar14 = _UNK_?;
                    (pGVar12->fields)._color.g = (float)uVar13;
                    _UNK_? = (undefined4)uVar10;
                    _UNK_? = SUB84(uVar10,4);
                    uVar13 = _UNK_?;
                    (pGVar12->fields)._color.b = (float)_UNK_?;
                    _UNK_? = uVar14;
                    uVar14 = _UNK_?;
                    (pGVar12->fields)._color.a = (float)uVar13;
                    pGVar7 = (this->fields)._mvSglSliderLookAndFeel;
                    if (pGVar7 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                      if ((uint)pGVar7->max_length < 3) goto code_?;
                      if ((pGVar7->vector[2] != (GizmoLineSlider2DLookAndFeel *)0x0) &&
                         (pGVar15 = (pGVar7->vector[2]->fields)._capLookAndFeel,
                         pGVar15 != (GizmoCap2DLookAndFeel *)0x0)) {
                        _UNK_? = (undefined4)uVar11;
                        _UNK_? = SUB84(uVar11,4);
                        uVar13 = _UNK_?;
                        (pGVar15->fields)._color.r = (float)_UNK_?;
                        _UNK_? = uVar14;
                        uVar14 = _UNK_?;
                        (pGVar15->fields)._color.g = (float)uVar13;
                        _UNK_? = (undefined4)uVar10;
                        _UNK_? = SUB84(uVar10,4);
                        uVar13 = _UNK_?;
                        (pGVar15->fields)._color.b = (float)_UNK_?;
                        _UNK_? = uVar14;
                        uVar16 = _UNK_?;
                        uVar14 = _UNK_?;
                        (pGVar15->fields)._color.a = (float)uVar13;
                        pGVar7 = (this->fields)._mvSglSliderLookAndFeel;
                        if (pGVar7 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                          if ((uint)pGVar7->max_length < 2) goto code_?;
                          pGVar12 = pGVar7->vector[1];
                          if (pGVar12 != (GizmoLineSlider2DLookAndFeel *)0x0) {
                            uVar13 = _UNK_?;
                            (pGVar12->fields)._color.r = (float)_UNK_?;
                            uVar17 = _UNK_?;
                            (pGVar12->fields)._color.g = (float)uVar13;
                            _UNK_? = (undefined4)uVar16;
                            _UNK_? = SUB84(uVar16,4);
                            uVar13 = _UNK_?;
                            (pGVar12->fields)._color.b = (float)_UNK_?;
                            _UNK_? = uVar17;
                            uVar17 = _UNK_?;
                            (pGVar12->fields)._color.a = (float)uVar13;
                            pGVar7 = (this->fields)._mvSglSliderLookAndFeel;
                            if (pGVar7 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                              if ((uint)pGVar7->max_length < 2) goto code_?;
                              if ((pGVar7->vector[1] != (GizmoLineSlider2DLookAndFeel *)0x0) &&
                                 (pGVar15 = (pGVar7->vector[1]->fields)._capLookAndFeel,
                                 pGVar15 != (GizmoCap2DLookAndFeel *)0x0)) {
                                _UNK_? = (undefined4)uVar14;
                                _UNK_? = SUB84(uVar14,4);
                                uVar13 = _UNK_?;
                                (pGVar15->fields)._color.r = (float)_UNK_?;
                                _UNK_? = uVar17;
                                uVar17 = _UNK_?;
                                (pGVar15->fields)._color.g = (float)uVar13;
                                _UNK_? = (undefined4)uVar16;
                                _UNK_? = SUB84(uVar16,4);
                                uVar13 = _UNK_?;
                                (pGVar15->fields)._color.b = (float)_UNK_?;
                                _UNK_? = uVar17;
                                uVar17 = _UNK_?;
                                (pGVar15->fields)._color.a = (float)uVar13;
                                pGVar7 = (this->fields)._mvSglSliderLookAndFeel;
                                if (pGVar7 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                                  if ((uint)pGVar7->max_length < 4) goto code_?;
                                  pGVar12 = pGVar7->vector[3];
                                  if (pGVar12 != (GizmoLineSlider2DLookAndFeel *)0x0) {
                                    _UNK_? = (undefined4)uVar14;
                                    _UNK_? = SUB84(uVar14,4);
                                    uVar13 = _UNK_?;
                                    (pGVar12->fields)._color.r = (float)_UNK_?;
                                    _UNK_? = uVar17;
                                    uVar17 = _UNK_?;
                                    (pGVar12->fields)._color.g = (float)uVar13;
                                    _UNK_? = (undefined4)uVar16;
                                    _UNK_? = SUB84(uVar16,4);
                                    uVar13 = _UNK_?;
                                    (pGVar12->fields)._color.b = (float)_UNK_?;
                                    _UNK_? = uVar17;
                                    uVar17 = _UNK_?;
                                    (pGVar12->fields)._color.a = (float)uVar13;
                                    pGVar7 = (this->fields)._mvSglSliderLookAndFeel;
                                    if (pGVar7 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                                      if ((uint)pGVar7->max_length < 4) goto code_?;
                                      if ((pGVar7->vector[3] != (GizmoLineSlider2DLookAndFeel *)0x0
                                          ) && (pGVar15 = (pGVar7->vector[3]->fields).
                                                         _capLookAndFeel,
                                               pGVar15 != (GizmoCap2DLookAndFeel *)0x0)) {
                                        _UNK_? = (undefined4)uVar14;
                                        _UNK_? = SUB84(uVar14,4);
                                        uVar13 = _UNK_?;
                                        (pGVar15->fields)._color.r = (float)_UNK_?;
                                        _UNK_? = uVar17;
                                        uVar17 = _UNK_?;
                                        (pGVar15->fields)._color.g = (float)uVar13;
                                        _UNK_? = (undefined4)uVar16;
                                        _UNK_? = SUB84(uVar16,4);
                                        uVar13 = _UNK_?;
                                        (pGVar15->fields)._color.b = (float)_UNK_?;
                                        _UNK_? = uVar17;
                                        uVar17 = _UNK_?;
                                        (pGVar15->fields)._color.a = (float)uVar13;
                                        pGVar7 = (this->fields)._mvSglSliderLookAndFeel;
                                        if (pGVar7 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                                          if ((int)pGVar7->max_length == 0)
                                          goto code_?;
                                          pGVar12 = pGVar7->vector[0];
                                          if (pGVar12 != (GizmoLineSlider2DLookAndFeel *)0x0) {
                                            _UNK_? = (undefined4)uVar11;
                                            _UNK_? = SUB84(uVar11,4);
                                            uVar13 = _UNK_?;
                                            (pGVar12->fields)._borderColor.r = (float)_UNK_?
                                            ;
                                            _UNK_? = uVar17;
                                            uVar17 = _UNK_?;
                                            (pGVar12->fields)._borderColor.g = (float)uVar13;
                                            _UNK_? = (undefined4)uVar10;
                                            _UNK_? = SUB84(uVar10,4);
                                            uVar13 = _UNK_?;
                                            (pGVar12->fields)._borderColor.b = (float)_UNK_?
                                            ;
                                            _UNK_? = uVar17;
                                            uVar17 = _UNK_?;
                                            (pGVar12->fields)._borderColor.a = (float)uVar13;
                                            pGVar7 = (this->fields)._mvSglSliderLookAndFeel;
                                            if (pGVar7 !=
                                                (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                                              if ((int)pGVar7->max_length == 0)
                                              goto code_?;
                                              if ((pGVar7->vector[0] !=
                                                   (GizmoLineSlider2DLookAndFeel *)0x0) &&
                                                 (pGVar15 = (pGVar7->vector[0]->fields).
                                                           _capLookAndFeel,
                                                 pGVar15 != (GizmoCap2DLookAndFeel *)0x0)) {
                                                _UNK_? = (undefined4)uVar11;
                                                _UNK_? = SUB84(uVar11,4);
                                                uVar13 = _UNK_?;
                                                (pGVar15->fields)._borderColor.r =
                                                     (float)_UNK_?;
                                                _UNK_? = uVar17;
                                                uVar17 = _UNK_?;
                                                (pGVar15->fields)._borderColor.g = (float)uVar13;
                                                _UNK_? = (undefined4)uVar10;
                                                _UNK_? = SUB84(uVar10,4);
                                                uVar13 = _UNK_?;
                                                (pGVar15->fields)._borderColor.b =
                                                     (float)_UNK_?;
                                                _UNK_? = uVar17;
                                                uVar17 = _UNK_?;
                                                (pGVar15->fields)._borderColor.a = (float)uVar13;
                                                pGVar7 = (this->fields)._mvSglSliderLookAndFeel;
                                                if (pGVar7 !=
                                                    (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                                                  if ((uint)pGVar7->max_length < 3)
                                                  goto code_?;
                                                  pGVar12 = pGVar7->vector[2];
                                                  if (pGVar12 != (GizmoLineSlider2DLookAndFeel *)0x0
                                                     ) {
                                                    _UNK_? = (undefined4)uVar11;
                                                    _UNK_? = SUB84(uVar11,4);
                                                    uVar13 = _UNK_?;
                                                    (pGVar12->fields)._borderColor.r =
                                                         (float)_UNK_?;
                                                    _UNK_? = uVar17;
                                                    uVar17 = _UNK_?;
                                                    (pGVar12->fields)._borderColor.g = (float)uVar13;
                                                    _UNK_? = (undefined4)uVar10;
                                                    _UNK_? = SUB84(uVar10,4);
                                                    uVar13 = _UNK_?;
                                                    (pGVar12->fields)._borderColor.b =
                                                         (float)_UNK_?;
                                                    _UNK_? = uVar17;
                                                    uVar17 = _UNK_?;
                                                    (pGVar12->fields)._borderColor.a = (float)uVar13;
                                                    pGVar7 = (this->fields)._mvSglSliderLookAndFeel
                                                    ;
                                                    if (pGVar7 !=
                                                        (GizmoLineSlider2DLookAndFeel__Array *)0x0)
                                                    {
                                                      if ((uint)pGVar7->max_length < 3)
                                                      goto code_?;
                                                      if ((pGVar7->vector[2] !=
                                                           (GizmoLineSlider2DLookAndFeel *)0x0) &&
                                                         (pGVar15 = (pGVar7->vector[2]->fields).
                                                                   _capLookAndFeel,
                                                         pGVar15 != (GizmoCap2DLookAndFeel *)0x0)) {
                                                        _UNK_? = (undefined4)uVar11;
                                                        _UNK_? = SUB84(uVar11,4);
                                                        uVar13 = _UNK_?;
                                                        (pGVar15->fields)._borderColor.r =
                                                             (float)_UNK_?;
                                                        _UNK_? = uVar17;
                                                        uVar11 = _UNK_?;
                                                        (pGVar15->fields)._borderColor.g =
                                                             (float)uVar13;
                                                        _UNK_? = (undefined4)uVar10;
                                                        _UNK_? = SUB84(uVar10,4);
                                                        uVar13 = _UNK_?;
                                                        (pGVar15->fields)._borderColor.b =
                                                             (float)_UNK_?;
                                                        _UNK_? = uVar11;
                                                        uVar11 = _UNK_?;
                                                        (pGVar15->fields)._borderColor.a =
                                                             (float)uVar13;
                                                        pGVar7 = (this->fields).
                                                                  _mvSglSliderLookAndFeel;
                                                        if (pGVar7 !=
                                                            (GizmoLineSlider2DLookAndFeel__Array *)
                                                            0x0) {
                                                          if ((uint)pGVar7->max_length < 2)
                                                          goto code_?;
                                                          pGVar12 = pGVar7->vector[1];
                                                          if (pGVar12 !=
                                                              (GizmoLineSlider2DLookAndFeel *)0x0) {
                                                            _UNK_? = (undefined4)uVar14;
                                                            _UNK_? = SUB84(uVar14,4);
                                                            uVar13 = _UNK_?;
                                                            (pGVar12->fields)._borderColor.r =
                                                                 (float)_UNK_?;
                                                            _UNK_? = uVar11;
                                                            uVar11 = _UNK_?;
                                                            (pGVar12->fields)._borderColor.g =
                                                                 (float)uVar13;
                                                            _UNK_? = (undefined4)uVar16;
                                                            _UNK_? = SUB84(uVar16,4);
                                                            uVar13 = _UNK_?;
                                                            (pGVar12->fields)._borderColor.b =
                                                                 (float)_UNK_?;
                                                            _UNK_? = uVar11;
                                                            uVar11 = _UNK_?;
                                                            (pGVar12->fields)._borderColor.a =
                                                                 (float)uVar13;
                                                            pGVar7 = (this->fields).
                                                                      _mvSglSliderLookAndFeel;
                                                            if (pGVar7 !=
                                                                (GizmoLineSlider2DLookAndFeel__Array
                                                                 *)0x0) {
                                                              if ((uint)pGVar7->max_length < 2)
                                                              goto code_?;
                                                              if ((pGVar7->vector[1] !=
                                                                   (GizmoLineSlider2DLookAndFeel *)
                                                                   0x0) && (pGVar15 = (pGVar7->
                                                  vector[1]->fields)._capLookAndFeel,
                                                  pGVar15 != (GizmoCap2DLookAndFeel *)0x0)) {
                                                    _UNK_? = (undefined4)uVar14;
                                                    _UNK_? = SUB84(uVar14,4);
                                                    uVar13 = _UNK_?;
                                                    (pGVar15->fields)._borderColor.r =
                                                         (float)_UNK_?;
                                                    _UNK_? = uVar11;
                                                    uVar11 = _UNK_?;
                                                    (pGVar15->fields)._borderColor.g = (float)uVar13;
                                                    _UNK_? = (undefined4)uVar16;
                                                    _UNK_? = SUB84(uVar16,4);
                                                    uVar13 = _UNK_?;
                                                    (pGVar15->fields)._borderColor.b =
                                                         (float)_UNK_?;
                                                    _UNK_? = uVar11;
                                                    uVar11 = _UNK_?;
                                                    (pGVar15->fields)._borderColor.a = (float)uVar13;
                                                    pGVar7 = (this->fields)._mvSglSliderLookAndFeel
                                                    ;
                                                    if (pGVar7 !=
                                                        (GizmoLineSlider2DLookAndFeel__Array *)0x0)
                                                    {
                                                      if ((uint)pGVar7->max_length < 4)
                                                      goto code_?;
                                                      pGVar12 = pGVar7->vector[3];
                                                      if (pGVar12 !=
                                                          (GizmoLineSlider2DLookAndFeel *)0x0) {
                                                        _UNK_? = (undefined4)uVar14;
                                                        _UNK_? = SUB84(uVar14,4);
                                                        uVar13 = _UNK_?;
                                                        (pGVar12->fields)._borderColor.r =
                                                             (float)_UNK_?;
                                                        _UNK_? = uVar11;
                                                        uVar11 = _UNK_?;
                                                        (pGVar12->fields)._borderColor.g =
                                                             (float)uVar13;
                                                        _UNK_? = (undefined4)uVar16;
                                                        _UNK_? = SUB84(uVar16,4);
                                                        uVar13 = _UNK_?;
                                                        (pGVar12->fields)._borderColor.b =
                                                             (float)_UNK_?;
                                                        _UNK_? = uVar11;
                                                        uVar11 = _UNK_?;
                                                        (pGVar12->fields)._borderColor.a =
                                                             (float)uVar13;
                                                        pGVar7 = (this->fields).
                                                                  _mvSglSliderLookAndFeel;
                                                        if (pGVar7 !=
                                                            (GizmoLineSlider2DLookAndFeel__Array *)
                                                            0x0) {
                                                          if ((uint)pGVar7->max_length < 4)
                                                          goto code_?;
                                                          if ((pGVar7->vector[3] !=
                                                               (GizmoLineSlider2DLookAndFeel *)0x0)
                                                             && (pGVar15 = (pGVar7->vector[3]->
                                                                          fields)._capLookAndFeel,
                                                                pGVar15 != (GizmoCap2DLookAndFeel *)
                                                                          0x0)) {
                                                            _UNK_? = (undefined4)uVar14;
                                                            _UNK_? = SUB84(uVar14,4);
                                                            uVar13 = _UNK_?;
                                                            (pGVar15->fields)._borderColor.r =
                                                                 (float)_UNK_?;
                                                            _UNK_? = uVar11;
                                                            uVar11 = _UNK_?;
                                                            (pGVar15->fields)._borderColor.g =
                                                                 (float)uVar13;
                                                            _UNK_? = (undefined4)uVar16;
                                                            _UNK_? = SUB84(uVar16,4);
                                                            uVar13 = _UNK_?;
                                                            (pGVar15->fields)._borderColor.b =
                                                                 (float)_UNK_?;
                                                            _UNK_? = uVar11;
                                                            uVar10 = _UNK_?;
                                                            uVar11 = _UNK_?;
                                                            (pGVar15->fields)._borderColor.a =
                                                                 (float)uVar13;
                                                            pGVar7 = (this->fields).
                                                                      _mvSglSliderLookAndFeel;
                                                            uVar3 = 0;
                                                            if (pGVar7 !=
                                                                (GizmoLineSlider2DLookAndFeel__Array
                                                                 *)0x0) {
                                                              ppGVar18 = pGVar7->vector;
                                                              goto code_?;
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
        break;
      }
      pGVar7 = (this->fields)._mvSglSliderLookAndFeel;
      pGVar12 = (GizmoLineSlider2DLookAndFeel *)
                FUN_?(TypeInfo__RTG__GizmoLineSlider2DLookAndFeel);
      GizmoLineSlider2DLookAndFeel::GizmoLineSlider2DLookAndFeel__ctor(pGVar12,(MethodInfo *)0x0);
      if (pGVar7 == (GizmoLineSlider2DLookAndFeel__Array *)0x0) break;
      if ((pGVar12 != (GizmoLineSlider2DLookAndFeel *)0x0) &&
         (lVar19 = FUN_?(pGVar12), lVar19 == 0)) {
        uVar11 = FUN_?();
        FUN_?(uVar11,0);
        pcVar20 = (code *)swi(3);
        (*pcVar20)();
        return;
      }
      if ((uint)pGVar7->max_length <= uVar3) goto code_?;
      bVar2 = iRam_? != 0;
      *(GizmoLineSlider2DLookAndFeel **)((longlong)pGVar7->vector + lVar9 + -0x20) = pGVar12;
      if (bVar2) {
        uVar21 = (uint)((ulonglong)(pGVar7->vector + (int)uVar3) >> 0xc);
        uVar4 = (ulonglong)((uVar21 & 0x1fffff) >> 6);
        do {
          uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
          puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar21 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      pGVar7 = (this->fields)._mvSglSliderLookAndFeel;
      uVar3 = uVar3 + 1;
      lVar9 = lVar9 + 8;
    } while (pGVar7 != (GizmoLineSlider2DLookAndFeel__Array *)0x0);
  }
code_?:
  FUN_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
code_?:
  uVar14 = _UNK_?;
  if ((int)pGVar7->max_length <= (int)uVar3) goto code_?;
  if ((uint)pGVar7->max_length <= uVar3) goto code_?;
  pGVar12 = *ppGVar18;
  if (pGVar12 == (GizmoLineSlider2DLookAndFeel *)0x0) goto code_?;
  pGVar15 = (pGVar12->fields)._capLookAndFeel;
  _UNK_? = (undefined4)uVar11;
  _UNK_? = SUB84(uVar11,4);
  uVar13 = _UNK_?;
  (pGVar12->fields)._hoveredColor.r = (float)_UNK_?;
  _UNK_? = uVar14;
  uVar14 = _UNK_?;
  (pGVar12->fields)._hoveredColor.g = (float)uVar13;
  _UNK_? = (undefined4)uVar10;
  _UNK_? = SUB84(uVar10,4);
  uVar13 = _UNK_?;
  (pGVar12->fields)._hoveredColor.b = (float)_UNK_?;
  _UNK_? = uVar14;
  uVar14 = _UNK_?;
  (pGVar12->fields)._hoveredColor.a = (float)uVar13;
  if (pGVar15 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
  uVar3 = uVar3 + 1;
  ppGVar18 = ppGVar18 + 1;
  _UNK_? = (undefined4)uVar11;
  _UNK_? = SUB84(uVar11,4);
  uVar13 = _UNK_?;
  (pGVar15->fields)._hoveredColor.r = (float)_UNK_?;
  _UNK_? = uVar14;
  uVar14 = _UNK_?;
  (pGVar15->fields)._hoveredColor.g = (float)uVar13;
  _UNK_? = (undefined4)uVar10;
  _UNK_? = SUB84(uVar10,4);
  uVar13 = _UNK_?;
  (pGVar15->fields)._hoveredColor.b = (float)_UNK_?;
  _UNK_? = uVar14;
  (pGVar15->fields)._hoveredColor.a = (float)uVar13;
  goto code_?;
code_?:
  pGVar7 = (this->fields)._mvSglSliderLookAndFeel;
  uVar3 = 0;
  if (pGVar7 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    ppGVar18 = pGVar7->vector;
    for (; uVar14 = _UNK_?, (int)uVar3 < (int)pGVar7->max_length; uVar3 = uVar3 + 1) {
      if ((uint)pGVar7->max_length <= uVar3) goto code_?;
      pGVar12 = *ppGVar18;
      if (pGVar12 == (GizmoLineSlider2DLookAndFeel *)0x0) goto code_?;
      pGVar15 = (pGVar12->fields)._capLookAndFeel;
      _UNK_? = (undefined4)uVar11;
      _UNK_? = SUB84(uVar11,4);
      uVar13 = _UNK_?;
      (pGVar12->fields)._hoveredBorderColor.r = (float)_UNK_?;
      _UNK_? = uVar14;
      uVar14 = _UNK_?;
      (pGVar12->fields)._hoveredBorderColor.g = (float)uVar13;
      _UNK_? = (undefined4)uVar10;
      _UNK_? = SUB84(uVar10,4);
      uVar13 = _UNK_?;
      (pGVar12->fields)._hoveredBorderColor.b = (float)_UNK_?;
      _UNK_? = uVar14;
      uVar14 = _UNK_?;
      (pGVar12->fields)._hoveredBorderColor.a = (float)uVar13;
      if (pGVar15 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
      ppGVar18 = ppGVar18 + 1;
      _UNK_? = (undefined4)uVar11;
      _UNK_? = SUB84(uVar11,4);
      uVar13 = _UNK_?;
      (pGVar15->fields)._hoveredBorderColor.r = (float)_UNK_?;
      _UNK_? = uVar14;
      uVar14 = _UNK_?;
      (pGVar15->fields)._hoveredBorderColor.g = (float)uVar13;
      _UNK_? = (undefined4)uVar10;
      _UNK_? = SUB84(uVar10,4);
      uVar13 = _UNK_?;
      (pGVar15->fields)._hoveredBorderColor.b = (float)_UNK_?;
      _UNK_? = uVar14;
      (pGVar15->fields)._hoveredBorderColor.a = (float)uVar13;
    }
    pGVar7 = (this->fields)._mvSglSliderLookAndFeel;
    uVar3 = 0;
    if (pGVar7 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
      ppGVar18 = pGVar7->vector;
      for (; (int)uVar3 < (int)pGVar7->max_length; uVar3 = uVar3 + 1) {
        if ((uint)pGVar7->max_length <= uVar3) goto code_?;
        if ((*ppGVar18 == (GizmoLineSlider2DLookAndFeel *)0x0) ||
           (pGVar15 = ((*ppGVar18)->fields)._capLookAndFeel, pGVar15 == (GizmoCap2DLookAndFeel *)0x0))
        goto code_?;
        (pGVar15->fields)._capType = 2;
        ppGVar18 = ppGVar18 + 1;
      }
      pGVar7 = (this->fields)._mvSglSliderLookAndFeel;
      uVar3 = 0;
      if (pGVar7 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
        ppGVar18 = pGVar7->vector;
        for (; (int)uVar3 < (int)pGVar7->max_length; uVar3 = uVar3 + 1) {
          if ((uint)pGVar7->max_length <= uVar3) goto code_?;
          if ((*ppGVar18 == (GizmoLineSlider2DLookAndFeel *)0x0) ||
             (pGVar15 = ((*ppGVar18)->fields)._capLookAndFeel, pGVar15 == (GizmoCap2DLookAndFeel *)0x0
             )) goto code_?;
          (pGVar15->fields)._fillMode = 0;
          ppGVar18 = ppGVar18 + 1;
        }
        pGVar7 = (this->fields)._mvSglSliderLookAndFeel;
        uVar3 = 0;
        if (pGVar7 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
          ppGVar18 = pGVar7->vector;
          for (; (int)uVar3 < (int)pGVar7->max_length; uVar3 = uVar3 + 1) {
            if ((uint)pGVar7->max_length <= uVar3) goto code_?;
            if (*ppGVar18 == (GizmoLineSlider2DLookAndFeel *)0x0) goto code_?;
            ((*ppGVar18)->fields)._fillMode = 0;
            ppGVar18 = ppGVar18 + 1;
          }
          pBVar8 = (this->fields)._mvSglSliderVis;
          if (pBVar8 != (Boolean__Array *)0x0) {
            if ((int)pBVar8->max_length == 0) {
code_?:
              FUN_?();
              pcVar20 = (code *)swi(3);
              (*pcVar20)();
              return;
            }
            pBVar8->vector[0] = 1;
            pBVar8 = (this->fields)._mvSglSliderVis;
            if (pBVar8 != (Boolean__Array *)0x0) {
              if ((uint)pBVar8->max_length < 2) goto code_?;
              pBVar8->vector[1] = 1;
              pBVar8 = (this->fields)._mvSglSliderCapVis;
              if (pBVar8 != (Boolean__Array *)0x0) {
                if ((int)pBVar8->max_length == 0) goto code_?;
                pBVar8->vector[0] = 1;
                pBVar8 = (this->fields)._mvSglSliderCapVis;
                if (pBVar8 != (Boolean__Array *)0x0) {
                  if ((uint)pBVar8->max_length < 2) goto code_?;
                  pBVar8->vector[1] = 1;
                  uVar16 = _UNK_?;
                  uVar14 = _UNK_?;
                  pGVar1 = (this->fields)._mvDblSliderLookAndFeel;
                  if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
                    (pGVar1->fields)._fillMode = 1;
                    uVar17 = _UNK_?;
                    pGVar1 = (this->fields)._mvDblSliderLookAndFeel;
                    if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
                      _UNK_? = (undefined4)uVar14;
                      _UNK_? = SUB84(uVar14,4);
                      uVar13 = _UNK_?;
                      (pGVar1->fields)._color.r = (float)_UNK_?;
                      _UNK_? = uVar17;
                      uVar14 = _UNK_?;
                      (pGVar1->fields)._color.g = (float)uVar13;
                      _UNK_? = (undefined4)uVar16;
                      _UNK_? = SUB84(uVar16,4);
                      uVar13 = _UNK_?;
                      (pGVar1->fields)._color.b = (float)_UNK_?;
                      _UNK_? = uVar14;
                      uVar14 = _UNK_?;
                      (pGVar1->fields)._color.a = (float)uVar13;
                      pGVar1 = (this->fields)._mvDblSliderLookAndFeel;
                      if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
                        uVar13 = _UNK_?;
                        (pGVar1->fields)._borderColor.r = (float)_UNK_?;
                        uVar16 = _UNK_?;
                        (pGVar1->fields)._borderColor.g = (float)uVar13;
                        _UNK_? = (undefined4)uVar14;
                        _UNK_? = SUB84(uVar14,4);
                        uVar13 = _UNK_?;
                        (pGVar1->fields)._borderColor.b = (float)_UNK_?;
                        _UNK_? = uVar16;
                        uVar14 = _UNK_?;
                        (pGVar1->fields)._borderColor.a = (float)uVar13;
                        pGVar1 = (this->fields)._mvDblSliderLookAndFeel;
                        if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
                          uVar13 = _UNK_?;
                          (pGVar1->fields)._hoveredColor.r = (float)_UNK_?;
                          uVar16 = _UNK_?;
                          (pGVar1->fields)._hoveredColor.g = (float)uVar13;
                          _UNK_? = (undefined4)uVar14;
                          _UNK_? = SUB84(uVar14,4);
                          uVar13 = _UNK_?;
                          (pGVar1->fields)._hoveredColor.b = (float)_UNK_?;
                          _UNK_? = uVar16;
                          uVar14 = _UNK_?;
                          (pGVar1->fields)._hoveredColor.a = (float)uVar13;
                          pGVar1 = (this->fields)._mvDblSliderLookAndFeel;
                          if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
                            _UNK_? = (undefined4)uVar11;
                            _UNK_? = SUB84(uVar11,4);
                            uVar13 = _UNK_?;
                            (pGVar1->fields)._hoveredBorderColor.r = (float)_UNK_?;
                            _UNK_? = uVar14;
                            uVar11 = _UNK_?;
                            (pGVar1->fields)._hoveredBorderColor.g = (float)uVar13;
                            _UNK_? = (undefined4)uVar10;
                            _UNK_? = SUB84(uVar10,4);
                            uVar13 = _UNK_?;
                            (pGVar1->fields)._hoveredBorderColor.b = (float)_UNK_?;
                            _UNK_? = uVar11;
                            (pGVar1->fields)._hoveredBorderColor.a = (float)uVar13;
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
  goto code_?;
}


/* Single get_MvBoxSliderThickness() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
      UniversalGizmoLookAndFeel2D_get_MvBoxSliderThickness
                (UniversalGizmoLookAndFeel2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSliderLookAndFeel;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if (pGVar1->vector[0] != (GizmoLineSlider2DLookAndFeel *)0x0) {
      return (pGVar1->vector[0]->fields)._boxThickness;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Color get_MvDblSliderBorderColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
        UniversalGizmoLookAndFeel2D_get_MvDblSliderBorderColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel2D *this,
                  MethodInfo *method)

{
  pGVar1 = (this->fields)._mvDblSliderLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    fVar2 = (pGVar1->fields)._borderColor.g;
    fVar3 = (pGVar1->fields)._borderColor.b;
    fVar4 = (pGVar1->fields)._borderColor.a;
    __return_storage_ptr__->r = (pGVar1->fields)._borderColor.r;
    __return_storage_ptr__->g = fVar2;
    __return_storage_ptr__->b = fVar3;
    __return_storage_ptr__->a = fVar4;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pCVar6 = (Color *)(*pcVar5)();
  return pCVar6;
}


/* Color get_MvDblSliderColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
        UniversalGizmoLookAndFeel2D_get_MvDblSliderColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel2D *this,
                  MethodInfo *method)

{
  pGVar1 = (this->fields)._mvDblSliderLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    fVar2 = (pGVar1->fields)._color.g;
    fVar3 = (pGVar1->fields)._color.b;
    fVar4 = (pGVar1->fields)._color.a;
    __return_storage_ptr__->r = (pGVar1->fields)._color.r;
    __return_storage_ptr__->g = fVar2;
    __return_storage_ptr__->b = fVar3;
    __return_storage_ptr__->a = fVar4;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pCVar6 = (Color *)(*pcVar5)();
  return pCVar6;
}


/* Color get_MvDblSliderHoveredBorderColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
        UniversalGizmoLookAndFeel2D_get_MvDblSliderHoveredBorderColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel2D *this,
                  MethodInfo *method)

{
  pGVar1 = (this->fields)._mvDblSliderLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    fVar2 = (pGVar1->fields)._hoveredBorderColor.g;
    fVar3 = (pGVar1->fields)._hoveredBorderColor.b;
    fVar4 = (pGVar1->fields)._hoveredBorderColor.a;
    __return_storage_ptr__->r = (pGVar1->fields)._hoveredBorderColor.r;
    __return_storage_ptr__->g = fVar2;
    __return_storage_ptr__->b = fVar3;
    __return_storage_ptr__->a = fVar4;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pCVar6 = (Color *)(*pcVar5)();
  return pCVar6;
}


/* Color get_MvDblSliderHoveredColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
        UniversalGizmoLookAndFeel2D_get_MvDblSliderHoveredColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel2D *this,
                  MethodInfo *method)

{
  pGVar1 = (this->fields)._mvDblSliderLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    fVar2 = (pGVar1->fields)._hoveredColor.g;
    fVar3 = (pGVar1->fields)._hoveredColor.b;
    fVar4 = (pGVar1->fields)._hoveredColor.a;
    __return_storage_ptr__->r = (pGVar1->fields)._hoveredColor.r;
    __return_storage_ptr__->g = fVar2;
    __return_storage_ptr__->b = fVar3;
    __return_storage_ptr__->a = fVar4;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pCVar6 = (Color *)(*pcVar5)();
  return pCVar6;
}


/* Single get_MvSliderArrowCapBaseRadius() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
      UniversalGizmoLookAndFeel2D_get_MvSliderArrowCapBaseRadius
                (UniversalGizmoLookAndFeel2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSliderLookAndFeel;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider2DLookAndFeel *)0x0) &&
       (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap2DLookAndFeel *)0x0
       )) {
      return (pGVar4->fields)._arrowBaseRadius;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_MvSliderArrowCapHeight() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
      UniversalGizmoLookAndFeel2D_get_MvSliderArrowCapHeight
                (UniversalGizmoLookAndFeel2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSliderLookAndFeel;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider2DLookAndFeel *)0x0) &&
       (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap2DLookAndFeel *)0x0
       )) {
      return (pGVar4->fields)._arrowHeight;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* GizmoFillMode2D get_MvSliderCapFillMode() */

GizmoFillMode2D__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
UniversalGizmoLookAndFeel2D_get_MvSliderCapFillMode
          (UniversalGizmoLookAndFeel2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSliderLookAndFeel;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      GVar3 = (*pcVar2)();
      return GVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider2DLookAndFeel *)0x0) &&
       (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap2DLookAndFeel *)0x0
       )) {
      return (pGVar4->fields)._fillMode;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  GVar3 = (*pcVar2)();
  return GVar3;
}


/* GizmoCap2DType get_MvSliderCapType() */

GizmoCap2DType__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
UniversalGizmoLookAndFeel2D_get_MvSliderCapType
          (UniversalGizmoLookAndFeel2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSliderLookAndFeel;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      GVar3 = (*pcVar2)();
      return GVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider2DLookAndFeel *)0x0) &&
       (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap2DLookAndFeel *)0x0
       )) {
      return (pGVar4->fields)._capType;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  GVar3 = (*pcVar2)();
  return GVar3;
}


/* Single get_MvSliderCircleCapRadius() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
      UniversalGizmoLookAndFeel2D_get_MvSliderCircleCapRadius
                (UniversalGizmoLookAndFeel2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSliderLookAndFeel;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider2DLookAndFeel *)0x0) &&
       (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap2DLookAndFeel *)0x0
       )) {
      return (pGVar4->fields)._circleRadius;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* GizmoFillMode2D get_MvSliderFillMode() */

GizmoFillMode2D__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
UniversalGizmoLookAndFeel2D_get_MvSliderFillMode
          (UniversalGizmoLookAndFeel2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSliderLookAndFeel;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      GVar3 = (*pcVar2)();
      return GVar3;
    }
    if (pGVar1->vector[0] != (GizmoLineSlider2DLookAndFeel *)0x0) {
      return (pGVar1->vector[0]->fields)._fillMode;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  GVar3 = (*pcVar2)();
  return GVar3;
}


/* Color get_MvSliderHoveredBorderColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
        UniversalGizmoLookAndFeel2D_get_MvSliderHoveredBorderColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel2D *this,
                  MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSliderLookAndFeel;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pCVar3 = (Color *)(*pcVar2)();
      return pCVar3;
    }
    pGVar4 = pGVar1->vector[0];
    if (pGVar4 != (GizmoLineSlider2DLookAndFeel *)0x0) {
      fVar5 = (pGVar4->fields)._hoveredBorderColor.g;
      fVar6 = (pGVar4->fields)._hoveredBorderColor.b;
      fVar7 = (pGVar4->fields)._hoveredBorderColor.a;
      __return_storage_ptr__->r = (pGVar4->fields)._hoveredBorderColor.r;
      __return_storage_ptr__->g = fVar5;
      __return_storage_ptr__->b = fVar6;
      __return_storage_ptr__->a = fVar7;
      return __return_storage_ptr__;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pCVar3 = (Color *)(*pcVar2)();
  return pCVar3;
}


/* Color get_MvSliderHoveredColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
        UniversalGizmoLookAndFeel2D_get_MvSliderHoveredColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel2D *this,
                  MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSliderLookAndFeel;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pCVar3 = (Color *)(*pcVar2)();
      return pCVar3;
    }
    pGVar4 = pGVar1->vector[0];
    if (pGVar4 != (GizmoLineSlider2DLookAndFeel *)0x0) {
      fVar5 = (pGVar4->fields)._hoveredColor.g;
      fVar6 = (pGVar4->fields)._hoveredColor.b;
      fVar7 = (pGVar4->fields)._hoveredColor.a;
      __return_storage_ptr__->r = (pGVar4->fields)._hoveredColor.r;
      __return_storage_ptr__->g = fVar5;
      __return_storage_ptr__->b = fVar6;
      __return_storage_ptr__->a = fVar7;
      return __return_storage_ptr__;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pCVar3 = (Color *)(*pcVar2)();
  return pCVar3;
}


/* GizmoLine2DType get_MvSliderLineType() */

GizmoLine2DType__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
UniversalGizmoLookAndFeel2D_get_MvSliderLineType
          (UniversalGizmoLookAndFeel2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSliderLookAndFeel;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      GVar3 = (*pcVar2)();
      return GVar3;
    }
    if (pGVar1->vector[0] != (GizmoLineSlider2DLookAndFeel *)0x0) {
      return (pGVar1->vector[0]->fields)._lineType;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  GVar3 = (*pcVar2)();
  return GVar3;
}


/* Single get_MvSliderQuadCapHeight() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
      UniversalGizmoLookAndFeel2D_get_MvSliderQuadCapHeight
                (UniversalGizmoLookAndFeel2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSliderLookAndFeel;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider2DLookAndFeel *)0x0) &&
       (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap2DLookAndFeel *)0x0
       )) {
      return (pGVar4->fields)._quadHeight;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_MvSliderQuadCapWidth() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
      UniversalGizmoLookAndFeel2D_get_MvSliderQuadCapWidth
                (UniversalGizmoLookAndFeel2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSliderLookAndFeel;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if ((pGVar1->vector[0] != (GizmoLineSlider2DLookAndFeel *)0x0) &&
       (pGVar4 = (pGVar1->vector[0]->fields)._capLookAndFeel, pGVar4 != (GizmoCap2DLookAndFeel *)0x0
       )) {
      return (pGVar4->fields)._quadWidth;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Color get_MvXBorderColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
        UniversalGizmoLookAndFeel2D_get_MvXBorderColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel2D *this,
                  MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSliderLookAndFeel;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pCVar3 = (Color *)(*pcVar2)();
      return pCVar3;
    }
    pGVar4 = pGVar1->vector[0];
    if (pGVar4 != (GizmoLineSlider2DLookAndFeel *)0x0) {
      fVar5 = (pGVar4->fields)._borderColor.g;
      fVar6 = (pGVar4->fields)._borderColor.b;
      fVar7 = (pGVar4->fields)._borderColor.a;
      __return_storage_ptr__->r = (pGVar4->fields)._borderColor.r;
      __return_storage_ptr__->g = fVar5;
      __return_storage_ptr__->b = fVar6;
      __return_storage_ptr__->a = fVar7;
      return __return_storage_ptr__;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pCVar3 = (Color *)(*pcVar2)();
  return pCVar3;
}


/* Color get_MvXColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
        UniversalGizmoLookAndFeel2D_get_MvXColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel2D *this,
                  MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSliderLookAndFeel;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pCVar3 = (Color *)(*pcVar2)();
      return pCVar3;
    }
    pGVar4 = pGVar1->vector[0];
    if (pGVar4 != (GizmoLineSlider2DLookAndFeel *)0x0) {
      fVar5 = (pGVar4->fields)._color.g;
      fVar6 = (pGVar4->fields)._color.b;
      fVar7 = (pGVar4->fields)._color.a;
      __return_storage_ptr__->r = (pGVar4->fields)._color.r;
      __return_storage_ptr__->g = fVar5;
      __return_storage_ptr__->b = fVar6;
      __return_storage_ptr__->a = fVar7;
      return __return_storage_ptr__;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pCVar3 = (Color *)(*pcVar2)();
  return pCVar3;
}


/* Color get_MvYBorderColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
        UniversalGizmoLookAndFeel2D_get_MvYBorderColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel2D *this,
                  MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSliderLookAndFeel;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if ((uint)pGVar1->max_length < 2) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pCVar3 = (Color *)(*pcVar2)();
      return pCVar3;
    }
    pGVar4 = pGVar1->vector[1];
    if (pGVar4 != (GizmoLineSlider2DLookAndFeel *)0x0) {
      fVar5 = (pGVar4->fields)._borderColor.g;
      fVar6 = (pGVar4->fields)._borderColor.b;
      fVar7 = (pGVar4->fields)._borderColor.a;
      __return_storage_ptr__->r = (pGVar4->fields)._borderColor.r;
      __return_storage_ptr__->g = fVar5;
      __return_storage_ptr__->b = fVar6;
      __return_storage_ptr__->a = fVar7;
      return __return_storage_ptr__;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pCVar3 = (Color *)(*pcVar2)();
  return pCVar3;
}


/* Color get_MvYColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
        UniversalGizmoLookAndFeel2D_get_MvYColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel2D *this,
                  MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSliderLookAndFeel;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if ((uint)pGVar1->max_length < 2) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pCVar3 = (Color *)(*pcVar2)();
      return pCVar3;
    }
    pGVar4 = pGVar1->vector[1];
    if (pGVar4 != (GizmoLineSlider2DLookAndFeel *)0x0) {
      fVar5 = (pGVar4->fields)._color.g;
      fVar6 = (pGVar4->fields)._color.b;
      fVar7 = (pGVar4->fields)._color.a;
      __return_storage_ptr__->r = (pGVar4->fields)._color.r;
      __return_storage_ptr__->g = fVar5;
      __return_storage_ptr__->b = fVar6;
      __return_storage_ptr__->a = fVar7;
      return __return_storage_ptr__;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pCVar3 = (Color *)(*pcVar2)();
  return pCVar3;
}


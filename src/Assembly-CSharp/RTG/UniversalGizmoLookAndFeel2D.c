
/* Void ConnectMvDblSliderLookAndFeel(GizmoPlaneSlider2D) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
     UniversalGizmoLookAndFeel2D_ConnectMvDblSliderLookAndFeel
               (UniversalGizmoLookAndFeel2D *this,GizmoPlaneSlider2D *slider,MethodInfo *method)

{
  pGStack_1 = (GizmoPlaneSlider2DLookAndFeel *)&stack0xfffffffc;
  if (slider != (GizmoPlaneSlider2D *)0x0) {
    pGStack_1 = (this->fields)._mvDblSliderLookAndFeel;
    (slider->fields)._sharedLookAndFeel = pGStack_1;
    ppGStack_2 = &(slider->fields)._sharedLookAndFeel;
    func_?();
    return;
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
    if (pGVar1->max_length <= (uint)axisIndex) goto code_?;
  }
  else {
    if (pGVar1 == (GizmoLineSlider2DLookAndFeel__Array *)0x0) goto code_?;
    axisIndex = axisIndex + 2;
    if (pGVar1->max_length <= (uint)axisIndex) {
code_?:
      func_?();
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (slider != (GizmoLineSlider2D *)0x0) {
    GizmoLineSlider2D::GizmoLineSlider2D_set_SharedLookAndFeel
              (slider,pGVar1->vector[axisIndex],(MethodInfo *)0x0);
    return;
  }
code_?:
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Inherit(MoveGizmoLookAndFeel2D) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::UniversalGizmoLookAndFeel2D_Inherit
               (UniversalGizmoLookAndFeel2D *this,MoveGizmoLookAndFeel2D *lookAndFeel,
               MethodInfo *method)

{
  this_02 = this;
  if (lookAndFeel != (MoveGizmoLookAndFeel2D *)0x0) {
    pCVar1 = MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_get_XBorderColor
                       ((Color *)&stack0xffffffe0,lookAndFeel,(MethodInfo *)0x0);
    UniversalGizmoLookAndFeel2D_SetMvAxisBorderColor(this,0,*pCVar1,(MethodInfo *)0x0);
    pCVar1 = MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_get_YBorderColor
                       ((Color *)&stack0xffffffe0,lookAndFeel,(MethodInfo *)0x0);
    UniversalGizmoLookAndFeel2D_SetMvAxisBorderColor(this,1,*pCVar1,(MethodInfo *)0x0);
    this = (UniversalGizmoLookAndFeel2D *)0x0;
    pCVar1 = (Color *)&stack0xffffffe0;
    pCVar2 = MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_get_XColor
                        (pCVar1,lookAndFeel,(MethodInfo *)0x0);
    UniversalGizmoLookAndFeel2D_SetMvAxisColor(this_02,0,*pCVar2,(MethodInfo *)0x0);
    pCVar2 = MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_get_YColor
                        ((Color *)&stack0xffffffe0,lookAndFeel,(MethodInfo *)0x0);
    UniversalGizmoLookAndFeel2D_SetMvAxisColor(this_02,1,*pCVar2,(MethodInfo *)0x0);
    fVar3 = MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_get_BoxSliderThickness
                       (lookAndFeel,(MethodInfo *)0x0);
    pGVar4 = (this_02->fields)._mvSglSliderLookAndFeel;
    uVar5 = 0;
    auVar6._4_4_ = fVar3;
    auVar6._0_4_ = pGVar4;
    auVar6._8_4_ = pCVar1;
    if (pGVar4 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
      ppGVar7 = pGVar4->vector;
      while( true ) {
        if ((int)pGVar4->max_length <= (int)uVar5) break;
        if (pGVar4->max_length <= uVar5) goto code_?;
        if (*ppGVar7 == (GizmoLineSlider2DLookAndFeel *)0x0) goto code_?;
        CameraMoveSettings::CameraMoveSettings_set_AccelerationRate
                  ((CameraMoveSettings *)*ppGVar7,auVar6._4_4_,(MethodInfo *)0x0);
        uVar5 = uVar5 + 1;
        pGVar4 = auVar6._0_4_;
        ppGVar7 = ppGVar7 + 1;
      }
      pCVar1 = MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_get_DblSliderBorderColor
                         ((Color *)&stack0xffffffe0,lookAndFeel,(MethodInfo *)0x0);
      pGVar8 = (this_02->fields)._mvDblSliderLookAndFeel;
      fVar3 = pCVar1->g;
      fVar9 = pCVar1->b;
      fVar10 = pCVar1->a;
      if (pGVar8 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
        (pGVar8->fields)._borderColor.r = pCVar1->r;
        (pGVar8->fields)._borderColor.g = fVar3;
        (pGVar8->fields)._borderColor.b = fVar9;
        (pGVar8->fields)._borderColor.a = fVar10;
        fVar3 = MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_get_DblSliderCircleRadius
                           (lookAndFeel,(MethodInfo *)0x0);
        pGVar11 = (GizmoPlaneSlider3DLookAndFeel *)(this_02->fields)._mvDblSliderLookAndFeel;
        if (pGVar11 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
          GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel_set_RATriangleXLength
                    (pGVar11,fVar3,(MethodInfo *)0x0);
          pCVar1 = MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_get_DblSliderColor
                             ((Color *)&stack0xffffffe0,lookAndFeel,(MethodInfo *)0x0);
          pGVar8 = (this_02->fields)._mvDblSliderLookAndFeel;
          fVar3 = pCVar1->g;
          fVar9 = pCVar1->b;
          fVar10 = pCVar1->a;
          if (pGVar8 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
            (pGVar8->fields)._color.r = pCVar1->r;
            (pGVar8->fields)._color.g = fVar3;
            (pGVar8->fields)._color.b = fVar9;
            (pGVar8->fields)._color.a = fVar10;
            pSVar12 = System.dll::System::Net::NetworkStreamWrapper::NetworkStreamWrapper_get_Socket
                                ((NetworkStreamWrapper *)lookAndFeel,(MethodInfo *)0x0);
            pGVar8 = (this_02->fields)._mvDblSliderLookAndFeel;
            if (pGVar8 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
              (pGVar8->fields)._fillMode = (int32_t)pSVar12;
              pCVar1 = MoveGizmoLookAndFeel2D::
                       MoveGizmoLookAndFeel2D_get_DblSliderHoveredBorderColor
                                 ((Color *)&stack0xffffffe0,lookAndFeel,(MethodInfo *)0x0);
              pGVar8 = (this_02->fields)._mvDblSliderLookAndFeel;
              fVar3 = pCVar1->g;
              fVar9 = pCVar1->b;
              fVar10 = pCVar1->a;
              if (pGVar8 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
                (pGVar8->fields)._hoveredBorderColor.r = pCVar1->r;
                (pGVar8->fields)._hoveredBorderColor.g = fVar3;
                (pGVar8->fields)._hoveredBorderColor.b = fVar9;
                (pGVar8->fields)._hoveredBorderColor.a = fVar10;
                pCVar1 = MoveGizmoLookAndFeel2D::MoveGizmoLookAndFeel2D_get_DblSliderHoveredColor
                                   ((Color *)&stack0xffffffe0,lookAndFeel,(MethodInfo *)0x0);
                pGVar8 = (this_02->fields)._mvDblSliderLookAndFeel;
                fVar3 = pCVar1->g;
                fVar9 = pCVar1->b;
                fVar10 = pCVar1->a;
                if (pGVar8 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
                  (pGVar8->fields)._hoveredColor.r = pCVar1->r;
                  (pGVar8->fields)._hoveredColor.g = fVar3;
                  (pGVar8->fields)._hoveredColor.b = fVar9;
                  (pGVar8->fields)._hoveredColor.a = fVar10;
                  fVar3 = MoveGizmoSettings2D::MoveGizmoSettings2D_get_YSnapStep
                                     ((MoveGizmoSettings2D *)lookAndFeel,(MethodInfo *)0x0);
                  pGVar8 = (this_02->fields)._mvDblSliderLookAndFeel;
                  if (pGVar8 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
                    CameraMoveSettings::CameraMoveSettings_set_AccelerationRate
                              ((CameraMoveSettings *)pGVar8,fVar3,(MethodInfo *)0x0);
                    fVar3 = ScaleGizmoLookAndFeel3D::ScaleGizmoLookAndFeel3D_get_Scale
                                       ((ScaleGizmoLookAndFeel3D *)lookAndFeel,(MethodInfo *)0x0);
                    pGVar8 = (this_02->fields)._mvDblSliderLookAndFeel;
                    if (pGVar8 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
                      GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_BorderBoxHoverEps
                                ((GizmoPlaneSlider3DSettings *)pGVar8,fVar3,(MethodInfo *)0x0);
                      iVar13 = mscorlib.dll::System::Runtime::Remoting::Messaging::MethodCall::
                               MethodCall_get_ArgCount((MethodCall *)lookAndFeel,(MethodInfo *)0x0);
                      pGVar8 = (this_02->fields)._mvDblSliderLookAndFeel;
                      if (pGVar8 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
                        (pGVar8->fields)._planeType = iVar13;
                        (this_02->fields)._isMvDblSliderVisible =
                             (lookAndFeel->fields)._isDblSliderVisible;
                        fVar3 = MoveGizmoSettings3D::MoveGizmoSettings3D_get_XSnapStep
                                           ((MoveGizmoSettings3D *)lookAndFeel,(MethodInfo *)0x0);
                        pGVar4 = (this_02->fields)._mvSglSliderLookAndFeel;
                        uVar5 = 0;
                        if (pGVar4 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                          ppGVar7 = pGVar4->vector;
                          while( true ) {
                            uVar14 = CONCAT44(auVar6._8_4_,ppGVar7);
                            if ((int)pGVar4->max_length <= (int)uVar5) break;
                            if (pGVar4->max_length <= uVar5) goto code_?;
                            this_00 = *ppGVar7;
                            auVar6._4_8_ = uVar14;
                            auVar6._0_4_ = this_00;
                            if (this_00 == (GizmoLineSlider2DLookAndFeel *)0x0)
                            goto code_?;
                            GizmoPlaneSlider3DSettings::
                            GizmoPlaneSlider3DSettings_set_BorderBoxHoverEps
                                      ((GizmoPlaneSlider3DSettings *)this_00,fVar3,
                                       (MethodInfo *)0x0);
                            this_01 = *(GizmoPlaneSlider3DSettings **)(auVar6._0_4_ + 100);
                            if (this_01 == (GizmoPlaneSlider3DSettings *)0x0) goto code_?;
                            GizmoPlaneSlider3DSettings::
                            GizmoPlaneSlider3DSettings_set_BorderLineHoverEps
                                      (this_01,fVar3,(MethodInfo *)0x0);
                            uVar5 = uVar5 + 1;
                            ppGVar7 = (GizmoLineSlider2DLookAndFeel **)(auVar6._4_4_ + 4);
                          }
                          pGVar8 = (this_02->fields)._mvDblSliderLookAndFeel;
                          if (pGVar8 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
                            GizmoPlaneSlider3DSettings::
                            GizmoPlaneSlider3DSettings_set_BorderLineHoverEps
                                      ((GizmoPlaneSlider3DSettings *)pGVar8,fVar3,(MethodInfo *)0x0
                                      );
                            fVar3 = MoveGizmoLookAndFeel2D::
                                     MoveGizmoLookAndFeel2D_get_SliderArrowCapHeight
                                               (lookAndFeel,(MethodInfo *)0x0);
                            pGVar4 = (this_02->fields)._mvSglSliderLookAndFeel;
                            uVar5 = 0;
                            if (pGVar4 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                              ppGVar7 = pGVar4->vector;
                              for (; (int)uVar5 < (int)pGVar4->max_length; uVar5 = uVar5 + 1) {
                                if (pGVar4->max_length <= uVar5) goto code_?;
                                if ((*ppGVar7 == (GizmoLineSlider2DLookAndFeel *)0x0) ||
                                   (pGVar11 = (GizmoPlaneSlider3DLookAndFeel *)
                                             ((*ppGVar7)->fields)._capLookAndFeel,
                                   pGVar11 == (GizmoPlaneSlider3DLookAndFeel *)0x0))
                                goto code_?;
                                GizmoPlaneSlider3DLookAndFeel::
                                GizmoPlaneSlider3DLookAndFeel_set_CircleRadius
                                          (pGVar11,fVar3,(MethodInfo *)0x0);
                                ppGVar7 = ppGVar7 + 1;
                              }
                              fVar3 = MoveGizmoLookAndFeel2D::
                                       MoveGizmoLookAndFeel2D_get_SliderArrowCapBaseRadius
                                                 (lookAndFeel,(MethodInfo *)0x0);
                              pGVar4 = (this_02->fields)._mvSglSliderLookAndFeel;
                              uVar5 = 0;
                              if (pGVar4 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                                ppGVar7 = pGVar4->vector;
                                while( true ) {
                                  if ((int)pGVar4->max_length <= (int)uVar5) break;
                                  if (pGVar4->max_length <= uVar5) goto code_?;
                                  if ((*ppGVar7 == (GizmoLineSlider2DLookAndFeel *)0x0) ||
                                     (pGVar11 = (GizmoPlaneSlider3DLookAndFeel *)
                                               ((*ppGVar7)->fields)._capLookAndFeel,
                                     pGVar11 == (GizmoPlaneSlider3DLookAndFeel *)0x0))
                                  goto code_?;
                                  GizmoPlaneSlider3DLookAndFeel::
                                  GizmoPlaneSlider3DLookAndFeel_set_RATriangleYLength
                                            (pGVar11,fVar3,(MethodInfo *)0x0);
                                  uVar5 = uVar5 + 1;
                                  ppGVar7 = ppGVar7 + 1;
                                }
                                fVar3 = MoveGizmoLookAndFeel2D::
                                         MoveGizmoLookAndFeel2D_get_SliderCircleCapRadius
                                                   (lookAndFeel,(MethodInfo *)0x0);
                                pGVar4 = (this_02->fields)._mvSglSliderLookAndFeel;
                                uVar5 = 0;
                                if (pGVar4 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                                  ppGVar7 = pGVar4->vector;
                                  for (; (int)uVar5 < (int)pGVar4->max_length; uVar5 = uVar5 + 1
                                      ) {
                                    if (pGVar4->max_length <= uVar5) goto code_?;
                                    if ((*ppGVar7 == (GizmoLineSlider2DLookAndFeel *)0x0) ||
                                       (pGVar15 = ((*ppGVar7)->fields)._capLookAndFeel,
                                       pGVar15 == (GizmoCap2DLookAndFeel *)0x0))
                                    goto code_?;
                                    (pGVar15->fields)._circleRadius = fVar3;
                                    ppGVar7 = ppGVar7 + 1;
                                  }
                                  GVar16 = MoveGizmoLookAndFeel2D::
                                           MoveGizmoLookAndFeel2D_get_SliderCapFillMode
                                                     (lookAndFeel,(MethodInfo *)0x0);
                                  UniversalGizmoLookAndFeel2D_SetMvSliderCapFillMode
                                            (this_02,GVar16,(MethodInfo *)0x0);
                                  capType = MoveGizmoLookAndFeel2D::
                                            MoveGizmoLookAndFeel2D_get_SliderCapType
                                                      (lookAndFeel,(MethodInfo *)0x0);
                                  UniversalGizmoLookAndFeel2D_SetMvSliderCapType
                                            (this_02,capType,(MethodInfo *)0x0);
                                  bVar17 = UniversalGizmoLookAndFeel2D_IsMvSliderVisible
                                                    ((UniversalGizmoLookAndFeel2D *)lookAndFeel,0,
                                                     AxisSign__Enum_Positive,(MethodInfo *)0x0);
                                  pBVar18 = (this_02->fields)._mvSglSliderCapVis;
                                  if (pBVar18 != (Boolean__Array *)0x0) {
                                    if (pBVar18->max_length == 0) goto code_?;
                                    pBVar18->vector[0] = bVar17;
                                    bVar17 = UniversalGizmoLookAndFeel2D_IsMvSliderVisible
                                                      ((UniversalGizmoLookAndFeel2D *)lookAndFeel,1,
                                                       AxisSign__Enum_Positive,(MethodInfo *)0x0);
                                    pBVar18 = (this_02->fields)._mvSglSliderCapVis;
                                    if (pBVar18 != (Boolean__Array *)0x0) {
                                      if (pBVar18->max_length < 2) goto code_?;
                                      pBVar18->vector[1] = bVar17;
                                      bVar17 = UniversalGizmoLookAndFeel2D_IsMvSliderVisible
                                                        ((UniversalGizmoLookAndFeel2D *)lookAndFeel,
                                                         0,AxisSign__Enum_Negative,(MethodInfo *)0x0
                                                        );
                                      pBVar18 = (this_02->fields)._mvSglSliderCapVis;
                                      if (pBVar18 != (Boolean__Array *)0x0) {
                                        if (pBVar18->max_length < 3) goto code_?;
                                        pBVar18->vector[2] = bVar17;
                                        bVar17 = UniversalGizmoLookAndFeel2D_IsMvSliderVisible
                                                          ((UniversalGizmoLookAndFeel2D *)
                                                           lookAndFeel,1,AxisSign__Enum_Negative,
                                                           (MethodInfo *)0x0);
                                        pBVar18 = (this_02->fields)._mvSglSliderCapVis;
                                        if (pBVar18 != (Boolean__Array *)0x0) {
                                          if (pBVar18->max_length < 4) goto code_?;
                                          pBVar18->vector[3] = bVar17;
                                          GVar16 = MoveGizmoLookAndFeel2D::
                                                   MoveGizmoLookAndFeel2D_get_SliderFillMode
                                                             (lookAndFeel,(MethodInfo *)0x0);
                                          UniversalGizmoLookAndFeel2D_SetMvSliderFillMode
                                                    (this_02,GVar16,(MethodInfo *)0x0);
                                          pCVar1 = MoveGizmoLookAndFeel2D::
                                                                                                      
                                                  MoveGizmoLookAndFeel2D_get_SliderHoveredBorderColor
                                                            ((Color *)&stack0xffffffe0,lookAndFeel,
                                                             (MethodInfo *)0x0);
                                          UniversalGizmoLookAndFeel2D_SetMvSliderHoveredBorderColor
                                                    (this_02,*pCVar1,(MethodInfo *)0x0);
                                          pCVar1 = MoveGizmoLookAndFeel2D::
                                                   MoveGizmoLookAndFeel2D_get_SliderHoveredColor
                                                             ((Color *)&stack0xffffffe0,lookAndFeel,
                                                              (MethodInfo *)0x0);
                                          UniversalGizmoLookAndFeel2D_SetMvSliderHoveredFillColor
                                                    (this_02,*pCVar1,(MethodInfo *)0x0);
                                          fVar3 = ScaleGizmoSettings3D::
                                                   ScaleGizmoSettings3D_get_CylinderSliderHoverEps
                                                             ((ScaleGizmoSettings3D *)lookAndFeel,
                                                              (MethodInfo *)0x0);
                                          pGVar4 = (this_02->fields)._mvSglSliderLookAndFeel;
                                          uVar5 = 0;
                                          if (pGVar4 != (GizmoLineSlider2DLookAndFeel__Array *)0x0)
                                          {
                                            ppGVar7 = pGVar4->vector;
                                            while( true ) {
                                              if ((int)pGVar4->max_length <= (int)uVar5) break;
                                              if (pGVar4->max_length <= uVar5)
                                              goto code_?;
                                              if (*ppGVar7 == (GizmoLineSlider2DLookAndFeel *)0x0)
                                              goto code_?;
                                              GizmoPlaneSlider3DSettings::
                                              GizmoPlaneSlider3DSettings_set_BorderLineHoverEps
                                                        ((GizmoPlaneSlider3DSettings *)*ppGVar7,
                                                         fVar3,(MethodInfo *)0x0);
                                              uVar5 = uVar5 + 1;
                                              ppGVar7 = ppGVar7 + 1;
                                            }
                                            GVar19 = MoveGizmoLookAndFeel2D::
                                                     MoveGizmoLookAndFeel2D_get_SliderLineType
                                                               (lookAndFeel,(MethodInfo *)0x0);
                                            pGVar4 = (this_02->fields)._mvSglSliderLookAndFeel;
                                            uVar5 = 0;
                                            if (pGVar4 !=
                                                (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                                              ppGVar7 = pGVar4->vector;
                                              for (; (int)uVar5 < (int)pGVar4->max_length;
                                                  uVar5 = uVar5 + 1) {
                                                if (pGVar4->max_length <= uVar5)
                                                goto code_?;
                                                if (*ppGVar7 == (GizmoLineSlider2DLookAndFeel *)0x0
                                                   ) goto code_?;
                                                ((*ppGVar7)->fields)._lineType = GVar19;
                                                ppGVar7 = ppGVar7 + 1;
                                                this_02 = this;
                                              }
                                              fVar3 = MoveGizmoLookAndFeel2D::
                                                                                                              
                                                  MoveGizmoLookAndFeel2D_get_SliderQuadCapHeight
                                                            (lookAndFeel,(MethodInfo *)0x0);
                                              pGVar4 = (this_02->fields)._mvSglSliderLookAndFeel;
                                              uVar5 = 0;
                                              if (pGVar4 !=
                                                  (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                                                ppGVar7 = pGVar4->vector;
                                                for (; (int)uVar5 < (int)pGVar4->max_length;
                                                    uVar5 = uVar5 + 1) {
                                                  if (pGVar4->max_length <= uVar5)
                                                  goto code_?;
                                                  if ((*ppGVar7 ==
                                                       (GizmoLineSlider2DLookAndFeel *)0x0) ||
                                                     (pGVar11 = (GizmoPlaneSlider3DLookAndFeel *)
                                                               ((*ppGVar7)->fields)._capLookAndFeel
                                                     , pGVar11 == (GizmoPlaneSlider3DLookAndFeel *)
                                                                 0x0)) goto code_?;
                                                  GizmoPlaneSlider3DLookAndFeel::
                                                  GizmoPlaneSlider3DLookAndFeel_set_RATriangleXLength
                                                            (pGVar11,fVar3,(MethodInfo *)0x0);
                                                  ppGVar7 = ppGVar7 + 1;
                                                }
                                                fVar3 = MoveGizmoLookAndFeel2D::
                                                                                                                  
                                                  MoveGizmoLookAndFeel2D_get_SliderQuadCapWidth
                                                            (lookAndFeel,(MethodInfo *)0x0);
                                                pGVar4 = (this_02->fields)._mvSglSliderLookAndFeel;
                                                uVar5 = 0;
                                                auVar20._4_8_ = uVar14;
                                                auVar20._0_4_ = pGVar4;
                                                if (pGVar4 !=
                                                    (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                                                  ppGVar7 = pGVar4->vector;
                                                  while( true ) {
                                                    if ((int)pGVar4->max_length <= (int)uVar5)
                                                    break;
                                                    if (pGVar4->max_length <= uVar5)
                                                    goto code_?;
                                                    if ((*ppGVar7 ==
                                                         (GizmoLineSlider2DLookAndFeel *)0x0) ||
                                                       (pGVar15 = ((*ppGVar7)->fields).
                                                                 _capLookAndFeel,
                                                       pGVar15 == (GizmoCap2DLookAndFeel *)0x0))
                                                    goto code_?;
                                                    CameraMoveSettings::
                                                    CameraMoveSettings_set_AccelerationRate
                                                              ((CameraMoveSettings *)pGVar15,fVar3,
                                                               (MethodInfo *)0x0);
                                                    uVar5 = uVar5 + 1;
                                                    pGVar4 = auVar20._0_4_;
                                                    ppGVar7 = ppGVar7 + 1;
                                                  }
                                                  bVar17 = MoveGizmoLookAndFeel2D::
                                                          MoveGizmoLookAndFeel2D_IsSliderVisible
                                                                    (lookAndFeel,0,
                                                                     AxisSign__Enum_Positive,
                                                                     (MethodInfo *)0x0);
                                                  pBVar18 = (this_02->fields)._mvSglSliderVis;
                                                  if (pBVar18 != (Boolean__Array *)0x0) {
                                                    if (pBVar18->max_length == 0)
                                                    goto code_?;
                                                    pBVar18->vector[0] = bVar17;
                                                    bVar17 = MoveGizmoLookAndFeel2D::
                                                            MoveGizmoLookAndFeel2D_IsSliderVisible
                                                                      (lookAndFeel,1,
                                                                       AxisSign__Enum_Positive,
                                                                       (MethodInfo *)0x0);
                                                    pBVar18 = (this_02->fields)._mvSglSliderVis;
                                                    if (pBVar18 != (Boolean__Array *)0x0) {
                                                      if (pBVar18->max_length < 2)
                                                      goto code_?;
                                                      pBVar18->vector[1] = bVar17;
                                                      bVar17 = MoveGizmoLookAndFeel2D::
                                                              MoveGizmoLookAndFeel2D_IsSliderVisible
                                                                        (lookAndFeel,0,
                                                                         AxisSign__Enum_Negative,
                                                                         (MethodInfo *)0x0);
                                                      pBVar18 = (this_02->fields)._mvSglSliderVis;
                                                      if (pBVar18 != (Boolean__Array *)0x0) {
                                                        if (pBVar18->max_length < 3)
                                                        goto code_?;
                                                        pBVar18->vector[2] = bVar17;
                                                        bVar17 = MoveGizmoLookAndFeel2D::
                                                                                                                                
                                                  MoveGizmoLookAndFeel2D_IsSliderVisible
                                                            (lookAndFeel,1,AxisSign__Enum_Negative,
                                                             (MethodInfo *)0x0);
                                                  pBVar18 = (this_02->fields)._mvSglSliderVis;
                                                  if (pBVar18 != (Boolean__Array *)0x0) {
                                                    if (3 < pBVar18->max_length) {
                                                      pBVar18->vector[3] = bVar17;
                                                      return;
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
code_?:
  func_?();
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Boolean IsMvNegativeSliderCapVisible(Int32) */

bool Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
     UniversalGizmoLookAndFeel2D_IsMvNegativeSliderCapVisible
               (UniversalGizmoLookAndFeel2D *this,int32_t axisIndex,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._mvSglSliderCapVis;
  if (pBVar2 == (Boolean__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    bVar6 = (*pcVar5)();
    return bVar6;
  }
  if (axisIndex + 2U < pBVar2->max_length) {
    return pBVar2->vector[axisIndex + 2] != 0;
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_7 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean IsMvNegativeSliderVisible(Int32) */

bool Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
     UniversalGizmoLookAndFeel2D_IsMvNegativeSliderVisible
               (UniversalGizmoLookAndFeel2D *this,int32_t axisIndex,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._mvSglSliderVis;
  if (pBVar2 == (Boolean__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    bVar6 = (*pcVar5)();
    return bVar6;
  }
  if (axisIndex + 2U < pBVar2->max_length) {
    return pBVar2->vector[axisIndex + 2] != 0;
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_7 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean IsMvPositiveSliderCapVisible(Int32) */

bool Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
     UniversalGizmoLookAndFeel2D_IsMvPositiveSliderCapVisible
               (UniversalGizmoLookAndFeel2D *this,int32_t axisIndex,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._mvSglSliderCapVis;
  if (pBVar2 == (Boolean__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    bVar6 = (*pcVar5)();
    return bVar6;
  }
  if ((uint)axisIndex < pBVar2->max_length) {
    return pBVar2->vector[axisIndex] != 0;
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_7 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean IsMvSliderCapVisible(Int32, AxisSign) */

bool Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
     UniversalGizmoLookAndFeel2D_IsMvSliderCapVisible
               (UniversalGizmoLookAndFeel2D *this,int32_t axisIndex,AxisSign__Enum axisSign,
               MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._mvSglSliderCapVis;
  if (axisSign == AxisSign__Enum_Positive) {
    if (pBVar2 == (Boolean__Array *)0x0) goto code_?;
    if ((uint)axisIndex < pBVar2->max_length) {
      return pBVar2->vector[axisIndex] != 0;
    }
  }
  else {
    if (pBVar2 == (Boolean__Array *)0x0) {
code_?:
      uVar3 = func_?(&puStack_4);
      func_?(uVar3);
      pcVar5 = (code *)swi(3);
      bVar6 = (*pcVar5)();
      return bVar6;
    }
    if (axisIndex + 2U < pBVar2->max_length) {
      return pBVar2->vector[axisIndex + 2] != 0;
    }
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_7 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean IsMvSliderVisible(Int32, AxisSign) */

bool Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
     UniversalGizmoLookAndFeel2D_IsMvSliderVisible
               (UniversalGizmoLookAndFeel2D *this,int32_t axisIndex,AxisSign__Enum axisSign,
               MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._mvSglSliderVis;
  if (axisSign == AxisSign__Enum_Positive) {
    if (pBVar2 == (Boolean__Array *)0x0) goto code_?;
    if ((uint)axisIndex < pBVar2->max_length) {
      return pBVar2->vector[axisIndex] != 0;
    }
  }
  else {
    if (pBVar2 == (Boolean__Array *)0x0) {
code_?:
      uVar3 = func_?(&puStack_4);
      func_?(uVar3);
      pcVar5 = (code *)swi(3);
      bVar6 = (*pcVar5)();
      return bVar6;
    }
    if (axisIndex + 2U < pBVar2->max_length) {
      return pBVar2->vector[axisIndex + 2] != 0;
    }
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_7 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void SetMvAxisBorderColor(Int32, Color) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
     UniversalGizmoLookAndFeel2D_SetMvAxisBorderColor
               (UniversalGizmoLookAndFeel2D *this,int32_t axisIndex,Color color,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSliderLookAndFeel;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if (pGVar1->max_length <= (uint)axisIndex) goto code_?;
    pGVar2 = pGVar1->vector[axisIndex];
    if (pGVar2 != (GizmoLineSlider2DLookAndFeel *)0x0) {
      (pGVar2->fields)._borderColor.r = color.r;
      (pGVar2->fields)._borderColor.g = color.g;
      (pGVar2->fields)._borderColor.b = color.b;
      (pGVar2->fields)._borderColor.a = color.a;
      pGVar1 = (this->fields)._mvSglSliderLookAndFeel;
      if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
        if (pGVar1->max_length <= (uint)axisIndex) goto code_?;
        if ((pGVar1->vector[axisIndex] != (GizmoLineSlider2DLookAndFeel *)0x0) &&
           (pGVar3 = (pGVar1->vector[axisIndex]->fields)._capLookAndFeel,
           pGVar3 != (GizmoCap2DLookAndFeel *)0x0)) {
          (pGVar3->fields)._borderColor.r = color.r;
          (pGVar3->fields)._borderColor.g = color.g;
          (pGVar3->fields)._borderColor.b = color.b;
          (pGVar3->fields)._borderColor.a = color.a;
          pGVar1 = (this->fields)._mvSglSliderLookAndFeel;
          if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
            if (pGVar1->max_length <= axisIndex + 2U) goto code_?;
            pGVar2 = pGVar1->vector[axisIndex + 2];
            if (pGVar2 != (GizmoLineSlider2DLookAndFeel *)0x0) {
              (pGVar2->fields)._borderColor.r = color.r;
              (pGVar2->fields)._borderColor.g = color.g;
              (pGVar2->fields)._borderColor.b = color.b;
              (pGVar2->fields)._borderColor.a = color.a;
              pGVar1 = (this->fields)._mvSglSliderLookAndFeel;
              if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                if (pGVar1->max_length <= axisIndex + 2U) goto code_?;
                if ((pGVar1->vector[axisIndex + 2] != (GizmoLineSlider2DLookAndFeel *)0x0) &&
                   (pGVar3 = (pGVar1->vector[axisIndex + 2]->fields)._capLookAndFeel,
                   pGVar3 != (GizmoCap2DLookAndFeel *)0x0)) {
                  (pGVar3->fields)._borderColor.r = color.r;
                  (pGVar3->fields)._borderColor.g = color.g;
                  (pGVar3->fields)._borderColor.b = color.b;
                  (pGVar3->fields)._borderColor.a = color.a;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetMvAxisColor(Int32, Color) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
     UniversalGizmoLookAndFeel2D_SetMvAxisColor
               (UniversalGizmoLookAndFeel2D *this,int32_t axisIndex,Color color,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSliderLookAndFeel;
  if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if (pGVar1->max_length <= (uint)axisIndex) goto code_?;
    pGVar2 = pGVar1->vector[axisIndex];
    if (pGVar2 != (GizmoLineSlider2DLookAndFeel *)0x0) {
      (pGVar2->fields)._color.r = color.r;
      (pGVar2->fields)._color.g = color.g;
      (pGVar2->fields)._color.b = color.b;
      (pGVar2->fields)._color.a = color.a;
      pGVar1 = (this->fields)._mvSglSliderLookAndFeel;
      if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
        if (pGVar1->max_length <= (uint)axisIndex) goto code_?;
        if ((pGVar1->vector[axisIndex] != (GizmoLineSlider2DLookAndFeel *)0x0) &&
           (pGVar3 = (pGVar1->vector[axisIndex]->fields)._capLookAndFeel,
           pGVar3 != (GizmoCap2DLookAndFeel *)0x0)) {
          (pGVar3->fields)._color.r = color.r;
          (pGVar3->fields)._color.g = color.g;
          (pGVar3->fields)._color.b = color.b;
          (pGVar3->fields)._color.a = color.a;
          pGVar1 = (this->fields)._mvSglSliderLookAndFeel;
          if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
            if (pGVar1->max_length <= axisIndex + 2U) goto code_?;
            pGVar2 = pGVar1->vector[axisIndex + 2];
            if (pGVar2 != (GizmoLineSlider2DLookAndFeel *)0x0) {
              (pGVar2->fields)._color.r = color.r;
              (pGVar2->fields)._color.g = color.g;
              (pGVar2->fields)._color.b = color.b;
              (pGVar2->fields)._color.a = color.a;
              pGVar1 = (this->fields)._mvSglSliderLookAndFeel;
              if (pGVar1 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
                if (pGVar1->max_length <= axisIndex + 2U) goto code_?;
                if ((pGVar1->vector[axisIndex + 2] != (GizmoLineSlider2DLookAndFeel *)0x0) &&
                   (pGVar3 = (pGVar1->vector[axisIndex + 2]->fields)._capLookAndFeel,
                   pGVar3 != (GizmoCap2DLookAndFeel *)0x0)) {
                  (pGVar3->fields)._color.r = color.r;
                  (pGVar3->fields)._color.g = color.g;
                  (pGVar3->fields)._color.b = color.b;
                  (pGVar3->fields)._color.a = color.a;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if (*ppGVar3 == (GizmoLineSlider2DLookAndFeel *)0x0) goto code_?;
      CameraMoveSettings::CameraMoveSettings_set_AccelerationRate
                ((CameraMoveSettings *)*ppGVar3,thickness,(MethodInfo *)0x0);
      uVar2 = uVar2 + 1;
      ppGVar3 = ppGVar3 + 1;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetMvDblSliderPlaneType(GizmoPlane2DType) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
     UniversalGizmoLookAndFeel2D_SetMvDblSliderPlaneType
               (UniversalGizmoLookAndFeel2D *this,GizmoPlane2DType__Enum sliderType,
               MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvDblSliderLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    (pGVar2->fields)._planeType = sliderType;
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetMvDblSliderQuadWidth(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
     UniversalGizmoLookAndFeel2D_SetMvDblSliderQuadWidth
               (UniversalGizmoLookAndFeel2D *this,float width,MethodInfo *method)

{
  this_00 = (this->fields)._mvDblSliderLookAndFeel;
  if (this_00 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_BorderBoxHoverEps
              ((GizmoPlaneSlider3DSettings *)this_00,width,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) break;
      if (pGVar1->max_length <= uVar2) goto code_?;
      this_00 = *ppGVar3;
      if (this_00 == (GizmoLineSlider2DLookAndFeel *)0x0) goto code_?;
      GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_BorderBoxHoverEps
                ((GizmoPlaneSlider3DSettings *)this_00,scale,(MethodInfo *)0x0);
      this_01 = (this_00->fields)._capLookAndFeel;
      if (this_01 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
      GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_BorderLineHoverEps
                ((GizmoPlaneSlider3DSettings *)this_01,scale,(MethodInfo *)0x0);
      uVar2 = uVar2 + 1;
      ppGVar3 = ppGVar3 + 1;
    }
    this_02 = (this->fields)._mvDblSliderLookAndFeel;
    if (this_02 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
      GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_BorderLineHoverEps
                ((GizmoPlaneSlider3DSettings *)this_02,scale,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
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
      if (pGVar1->max_length <= uVar2) break;
      if ((*ppGVar3 == (GizmoLineSlider2DLookAndFeel *)0x0) ||
         (this_00 = (GizmoPlaneSlider3DLookAndFeel *)((*ppGVar3)->fields)._capLookAndFeel,
         this_00 == (GizmoPlaneSlider3DLookAndFeel *)0x0)) goto code_?;
      GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel_set_RATriangleYLength
                (this_00,radius,(MethodInfo *)0x0);
      uVar2 = uVar2 + 1;
      ppGVar3 = ppGVar3 + 1;
    }
    func_?();
  }
code_?:
  func_?();
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
      if (pGVar1->max_length <= uVar2) break;
      if ((*ppGVar3 == (GizmoLineSlider2DLookAndFeel *)0x0) ||
         (this_00 = (GizmoPlaneSlider3DLookAndFeel *)((*ppGVar3)->fields)._capLookAndFeel,
         this_00 == (GizmoPlaneSlider3DLookAndFeel *)0x0)) goto code_?;
      GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel_set_CircleRadius
                (this_00,height,(MethodInfo *)0x0);
      uVar2 = uVar2 + 1;
      ppGVar3 = ppGVar3 + 1;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetMvSliderCapFillMode(GizmoFillMode2D) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
     UniversalGizmoLookAndFeel2D_SetMvSliderCapFillMode
               (UniversalGizmoLookAndFeel2D *this,GizmoFillMode2D__Enum fillMode,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._mvSglSliderLookAndFeel;
  if (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar1) {
        return;
      }
      if (pGVar2->max_length <= uVar1) break;
      if ((*ppGVar3 == (GizmoLineSlider2DLookAndFeel *)0x0) ||
         (pGVar4 = ((*ppGVar3)->fields)._capLookAndFeel, pGVar4 == (GizmoCap2DLookAndFeel *)0x0))
      goto code_?;
      uVar1 = uVar1 + 1;
      (pGVar4->fields)._fillMode = fillMode;
      ppGVar3 = ppGVar3 + 1;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetMvSliderCapType(GizmoCap2DType) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
     UniversalGizmoLookAndFeel2D_SetMvSliderCapType
               (UniversalGizmoLookAndFeel2D *this,GizmoCap2DType__Enum capType,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._mvSglSliderLookAndFeel;
  if (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar1) {
        return;
      }
      if (pGVar2->max_length <= uVar1) break;
      if ((*ppGVar3 == (GizmoLineSlider2DLookAndFeel *)0x0) ||
         (pGVar4 = ((*ppGVar3)->fields)._capLookAndFeel, pGVar4 == (GizmoCap2DLookAndFeel *)0x0))
      goto code_?;
      uVar1 = uVar1 + 1;
      (pGVar4->fields)._capType = capType;
      ppGVar3 = ppGVar3 + 1;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetMvSliderCapVisible(Int32, AxisSign, Boolean) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
     UniversalGizmoLookAndFeel2D_SetMvSliderCapVisible
               (UniversalGizmoLookAndFeel2D *this,int32_t axisIndex,AxisSign__Enum axisSign,
               bool isVisible,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._mvSglSliderCapVis;
  if (axisSign == AxisSign__Enum_Positive) {
    if (pBVar2 == (Boolean__Array *)0x0) goto code_?;
    if ((uint)axisIndex < pBVar2->max_length) {
      pBVar2->vector[axisIndex] = isVisible;
      return;
    }
  }
  else {
    if (pBVar2 == (Boolean__Array *)0x0) {
code_?:
      uVar3 = func_?(&puStack_4);
      func_?(uVar3);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (axisIndex + 2U < pBVar2->max_length) {
      pBVar2->vector[axisIndex + 2] = isVisible;
      return;
    }
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_6 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetMvSliderCircleCapRadius(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
     UniversalGizmoLookAndFeel2D_SetMvSliderCircleCapRadius
               (UniversalGizmoLookAndFeel2D *this,float radius,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._mvSglSliderLookAndFeel;
  if (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar1) {
        return;
      }
      if (pGVar2->max_length <= uVar1) break;
      if ((*ppGVar3 == (GizmoLineSlider2DLookAndFeel *)0x0) ||
         (pGVar4 = ((*ppGVar3)->fields)._capLookAndFeel, pGVar4 == (GizmoCap2DLookAndFeel *)0x0))
      goto code_?;
      uVar1 = uVar1 + 1;
      (pGVar4->fields)._circleRadius = radius;
      ppGVar3 = ppGVar3 + 1;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetMvSliderFillMode(GizmoFillMode2D) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
     UniversalGizmoLookAndFeel2D_SetMvSliderFillMode
               (UniversalGizmoLookAndFeel2D *this,GizmoFillMode2D__Enum fillMode,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._mvSglSliderLookAndFeel;
  if (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar1) {
        return;
      }
      if (pGVar2->max_length <= uVar1) break;
      if (*ppGVar3 == (GizmoLineSlider2DLookAndFeel *)0x0) goto code_?;
      uVar1 = uVar1 + 1;
      ((*ppGVar3)->fields)._fillMode = fillMode;
      ppGVar3 = ppGVar3 + 1;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetMvSliderHoveredBorderColor(Color) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
     UniversalGizmoLookAndFeel2D_SetMvSliderHoveredBorderColor
               (UniversalGizmoLookAndFeel2D *this,Color color,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._mvSglSliderLookAndFeel;
  if (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar1) {
        return;
      }
      if (pGVar2->max_length <= uVar1) break;
      pGVar4 = *ppGVar3;
      if (pGVar4 == (GizmoLineSlider2DLookAndFeel *)0x0) goto code_?;
      (pGVar4->fields)._hoveredBorderColor.r = color.r;
      (pGVar4->fields)._hoveredBorderColor.g = color.g;
      (pGVar4->fields)._hoveredBorderColor.b = color.b;
      (pGVar4->fields)._hoveredBorderColor.a = color.a;
      pGVar5 = (pGVar4->fields)._capLookAndFeel;
      if (pGVar5 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
      uVar1 = uVar1 + 1;
      ppGVar3 = ppGVar3 + 1;
      (pGVar5->fields)._hoveredBorderColor.r = color.r;
      (pGVar5->fields)._hoveredBorderColor.g = color.g;
      (pGVar5->fields)._hoveredBorderColor.b = color.b;
      (pGVar5->fields)._hoveredBorderColor.a = color.a;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetMvSliderHoveredFillColor(Color) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
     UniversalGizmoLookAndFeel2D_SetMvSliderHoveredFillColor
               (UniversalGizmoLookAndFeel2D *this,Color color,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._mvSglSliderLookAndFeel;
  if (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar1) {
        return;
      }
      if (pGVar2->max_length <= uVar1) break;
      pGVar4 = *ppGVar3;
      if (pGVar4 == (GizmoLineSlider2DLookAndFeel *)0x0) goto code_?;
      (pGVar4->fields)._hoveredColor.r = color.r;
      (pGVar4->fields)._hoveredColor.g = color.g;
      (pGVar4->fields)._hoveredColor.b = color.b;
      (pGVar4->fields)._hoveredColor.a = color.a;
      pGVar5 = (pGVar4->fields)._capLookAndFeel;
      if (pGVar5 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
      uVar1 = uVar1 + 1;
      ppGVar3 = ppGVar3 + 1;
      (pGVar5->fields)._hoveredColor.r = color.r;
      (pGVar5->fields)._hoveredColor.g = color.g;
      (pGVar5->fields)._hoveredColor.b = color.b;
      (pGVar5->fields)._hoveredColor.a = color.a;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetMvSliderLineType(GizmoLine2DType) */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
     UniversalGizmoLookAndFeel2D_SetMvSliderLineType
               (UniversalGizmoLookAndFeel2D *this,GizmoLine2DType__Enum lineType,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._mvSglSliderLookAndFeel;
  if (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar1) {
        return;
      }
      if (pGVar2->max_length <= uVar1) break;
      if (*ppGVar3 == (GizmoLineSlider2DLookAndFeel *)0x0) goto code_?;
      uVar1 = uVar1 + 1;
      ((*ppGVar3)->fields)._lineType = lineType;
      ppGVar3 = ppGVar3 + 1;
    }
    func_?();
  }
code_?:
  func_?();
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
      if (pGVar1->max_length <= uVar2) break;
      if ((*ppGVar3 == (GizmoLineSlider2DLookAndFeel *)0x0) ||
         (this_00 = (GizmoPlaneSlider3DLookAndFeel *)((*ppGVar3)->fields)._capLookAndFeel,
         this_00 == (GizmoPlaneSlider3DLookAndFeel *)0x0)) goto code_?;
      GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel_set_RATriangleXLength
                (this_00,height,(MethodInfo *)0x0);
      uVar2 = uVar2 + 1;
      ppGVar3 = ppGVar3 + 1;
    }
    func_?();
  }
code_?:
  func_?();
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
      if (pGVar1->max_length <= uVar2) break;
      if ((*ppGVar3 == (GizmoLineSlider2DLookAndFeel *)0x0) ||
         (this_00 = ((*ppGVar3)->fields)._capLookAndFeel, this_00 == (GizmoCap2DLookAndFeel *)0x0))
      goto code_?;
      CameraMoveSettings::CameraMoveSettings_set_AccelerationRate
                ((CameraMoveSettings *)this_00,width,(MethodInfo *)0x0);
      uVar2 = uVar2 + 1;
      ppGVar3 = ppGVar3 + 1;
    }
    func_?();
  }
code_?:
  func_?();
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
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._mvSglSliderVis;
  if (axisSign == AxisSign__Enum_Positive) {
    if (pBVar2 == (Boolean__Array *)0x0) goto code_?;
    if ((uint)axisIndex < pBVar2->max_length) {
      pBVar2->vector[axisIndex] = isVisible;
      return;
    }
  }
  else {
    if (pBVar2 == (Boolean__Array *)0x0) {
code_?:
      uVar3 = func_?(&puStack_4);
      func_?(uVar3);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (axisIndex + 2U < pBVar2->max_length) {
      pBVar2->vector[axisIndex + 2] = isVisible;
      return;
    }
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_6 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* UniversalGizmoLookAndFeel2D() */

void Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::UniversalGizmoLookAndFeel2D__ctor
               (UniversalGizmoLookAndFeel2D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__RTG__GizmoLineSlider2DLookAndFeel);
    func_?(&TypeInfo__RTG__GizmoLineSlider2DLookAndFeel);
    func_?(&TypeInfo__RTG__GizmoPlaneSlider2DLookAndFeel);
    cRam_? = '\x01';
  }
  pGVar1 = (GizmoPlaneSlider2DLookAndFeel *)
           func_?(TypeInfo__RTG__GizmoPlaneSlider2DLookAndFeel);
  GizmoPlaneSlider2DLookAndFeel::GizmoPlaneSlider2DLookAndFeel__ctor(pGVar1,(MethodInfo *)0x0);
  (this->fields)._mvDblSliderLookAndFeel = pGVar1;
  func_?(&(this->fields)._mvDblSliderLookAndFeel,pGVar1);
  pGVar2 = (GizmoLineSlider2DLookAndFeel__Array *)
           func_?(TypeInfo__RTG__GizmoLineSlider2DLookAndFeel,4);
  (this->fields)._mvSglSliderLookAndFeel = pGVar2;
  func_?(&(this->fields)._mvSglSliderLookAndFeel,pGVar2);
  (this->fields)._isMvDblSliderVisible = 1;
  pBVar3 = (Boolean__Array *)func_?(TypeInfo__System__Boolean,4);
  (this->fields)._mvSglSliderVis = pBVar3;
  func_?(&(this->fields)._mvSglSliderVis,pBVar3);
  pBVar3 = (Boolean__Array *)func_?(TypeInfo__System__Boolean,4);
  (this->fields)._mvSglSliderCapVis = pBVar3;
  func_?(&(this->fields)._mvSglSliderCapVis,pBVar3);
  Settings::Settings__ctor((Settings *)this,(MethodInfo *)0x0);
  uVar4 = 0;
  pGVar2 = (this->fields)._mvSglSliderLookAndFeel;
  while (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if ((int)pGVar2->max_length <= (int)uVar4) {
      pCVar5 = RTSystemValues::RTSystemValues_get_XAxisColor
                         ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
      UniversalGizmoLookAndFeel2D_SetMvAxisColor(this,0,*pCVar5,(MethodInfo *)0x0);
      pCVar5 = RTSystemValues::RTSystemValues_get_YAxisColor
                         ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
      UniversalGizmoLookAndFeel2D_SetMvAxisColor(this,1,*pCVar5,(MethodInfo *)0x0);
      pCVar5 = RTSystemValues::RTSystemValues_get_XAxisColor
                         ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
      UniversalGizmoLookAndFeel2D_SetMvAxisBorderColor(this,0,*pCVar5,(MethodInfo *)0x0);
      pCVar5 = RTSystemValues::RTSystemValues_get_YAxisColor
                         ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
      UniversalGizmoLookAndFeel2D_SetMvAxisBorderColor(this,1,*pCVar5,(MethodInfo *)0x0);
      pCVar5 = RTSystemValues::RTSystemValues_get_HoveredAxisColor
                         ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
      UniversalGizmoLookAndFeel2D_SetMvSliderHoveredFillColor(this,*pCVar5,(MethodInfo *)0x0);
      pCVar5 = RTSystemValues::RTSystemValues_get_HoveredAxisColor
                         ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
      UniversalGizmoLookAndFeel2D_SetMvSliderHoveredBorderColor(this,*pCVar5,(MethodInfo *)0x0);
      pGVar2 = (this->fields)._mvSglSliderLookAndFeel;
      uVar4 = 0;
      if (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
        ppGVar6 = pGVar2->vector;
        goto code_?;
      }
      break;
    }
    pGVar2 = (this->fields)._mvSglSliderLookAndFeel;
    this_00 = (GizmoLineSlider2DLookAndFeel *)func_?();
    GizmoLineSlider2DLookAndFeel::GizmoLineSlider2DLookAndFeel__ctor(this_00,(MethodInfo *)0x0);
    if (pGVar2 == (GizmoLineSlider2DLookAndFeel__Array *)0x0) break;
    if ((this_00 != (GizmoLineSlider2DLookAndFeel *)0x0) &&
       (iVar7 = func_?(this_00), iVar7 == 0)) goto code_?;
    if (pGVar2->max_length <= uVar4) goto code_?;
    pGVar2->vector[uVar4] = this_00;
    func_?(pGVar2->vector + uVar4);
    uVar4 = uVar4 + 1;
    pGVar2 = (this->fields)._mvSglSliderLookAndFeel;
  }
code_?:
  func_?();
code_?:
  uVar8 = func_?();
  func_?(uVar8);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
code_?:
  if ((int)pGVar2->max_length <= (int)uVar4) goto code_?;
  if (pGVar2->max_length <= uVar4) goto code_?;
  if ((*ppGVar6 == (GizmoLineSlider2DLookAndFeel *)0x0) ||
     (pGVar10 = ((*ppGVar6)->fields)._capLookAndFeel, pGVar10 == (GizmoCap2DLookAndFeel *)0x0))
  goto code_?;
  uVar4 = uVar4 + 1;
  (pGVar10->fields)._capType = 2;
  ppGVar6 = ppGVar6 + 1;
  goto code_?;
code_?:
  pGVar2 = (this->fields)._mvSglSliderLookAndFeel;
  uVar4 = 0;
  if (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    ppGVar6 = pGVar2->vector;
    for (; (int)uVar4 < (int)pGVar2->max_length; uVar4 = uVar4 + 1) {
      if (pGVar2->max_length <= uVar4) goto code_?;
      if ((*ppGVar6 == (GizmoLineSlider2DLookAndFeel *)0x0) ||
         (pGVar10 = ((*ppGVar6)->fields)._capLookAndFeel, pGVar10 == (GizmoCap2DLookAndFeel *)0x0))
      goto code_?;
      (pGVar10->fields)._fillMode = 0;
      ppGVar6 = ppGVar6 + 1;
    }
    pGVar2 = (this->fields)._mvSglSliderLookAndFeel;
    uVar4 = 0;
    if (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
      ppGVar6 = pGVar2->vector;
      for (; (int)uVar4 < (int)pGVar2->max_length; uVar4 = uVar4 + 1) {
        if (pGVar2->max_length <= uVar4) goto code_?;
        if (*ppGVar6 == (GizmoLineSlider2DLookAndFeel *)0x0) goto code_?;
        ((*ppGVar6)->fields)._fillMode = 0;
        ppGVar6 = ppGVar6 + 1;
      }
      pBVar3 = (this->fields)._mvSglSliderVis;
      if (pBVar3 != (Boolean__Array *)0x0) {
        if (pBVar3->max_length != 0) {
          pBVar3->vector[0] = 1;
          pBVar3 = (this->fields)._mvSglSliderVis;
          if (pBVar3 == (Boolean__Array *)0x0) goto code_?;
          if (1 < pBVar3->max_length) {
            pBVar3->vector[1] = 1;
            pBVar3 = (this->fields)._mvSglSliderCapVis;
            if (pBVar3 == (Boolean__Array *)0x0) goto code_?;
            if (pBVar3->max_length != 0) {
              pBVar3->vector[0] = 1;
              pBVar3 = (this->fields)._mvSglSliderCapVis;
              if (pBVar3 == (Boolean__Array *)0x0) goto code_?;
              if (1 < pBVar3->max_length) {
                pBVar3->vector[1] = 1;
                pGVar1 = (this->fields)._mvDblSliderLookAndFeel;
                if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
                  (pGVar1->fields)._fillMode = 1;
                  fVar11 = RTSystemValues::RTSystemValues_get_AxisAlpha((MethodInfo *)0x0);
                  color.g = _UNK_?;
                  color.r = _UNK_?;
                  color.b = _UNK_?;
                  color.a = _UNK_?;
                  pCVar5 = ColorEx::ColorEx_KeepAllButAlpha
                                     ((Color *)&stack0xffffffec,color,fVar11,(MethodInfo *)0x0);
                  pGVar1 = (this->fields)._mvDblSliderLookAndFeel;
                  fVar11 = pCVar5->g;
                  fVar12 = pCVar5->b;
                  fVar13 = pCVar5->a;
                  if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
                    (pGVar1->fields)._color.r = pCVar5->r;
                    (pGVar1->fields)._color.g = fVar11;
                    (pGVar1->fields)._color.b = fVar12;
                    (pGVar1->fields)._color.a = fVar13;
                    fVar13 = _UNK_?;
                    fVar12 = _UNK_?;
                    fVar11 = _UNK_?;
                    pGVar1 = (this->fields)._mvDblSliderLookAndFeel;
                    if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
                      (pGVar1->fields)._borderColor.r = _UNK_?;
                      (pGVar1->fields)._borderColor.g = fVar11;
                      (pGVar1->fields)._borderColor.b = fVar12;
                      (pGVar1->fields)._borderColor.a = fVar13;
                      pCVar5 = RTSystemValues::RTSystemValues_get_HoveredAxisColor
                                         ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
                      fVar11 = pCVar5->r;
                      fVar12 = pCVar5->g;
                      fVar13 = pCVar5->b;
                      fVar14 = pCVar5->a;
                      newAlpha = RTSystemValues::RTSystemValues_get_AxisAlpha((MethodInfo *)0x0);
                      color_00.g = fVar12;
                      color_00.r = fVar11;
                      color_00.b = fVar13;
                      color_00.a = fVar14;
                      pCVar5 = ColorEx::ColorEx_KeepAllButAlpha
                                         ((Color *)&stack0xffffffec,color_00,newAlpha,
                                          (MethodInfo *)0x0);
                      pGVar1 = (this->fields)._mvDblSliderLookAndFeel;
                      fVar11 = pCVar5->g;
                      fVar12 = pCVar5->b;
                      fVar13 = pCVar5->a;
                      if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
                        (pGVar1->fields)._hoveredColor.r = pCVar5->r;
                        (pGVar1->fields)._hoveredColor.g = fVar11;
                        (pGVar1->fields)._hoveredColor.b = fVar12;
                        (pGVar1->fields)._hoveredColor.a = fVar13;
                        pCVar5 = RTSystemValues::RTSystemValues_get_HoveredAxisColor
                                           ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
                        pGVar1 = (this->fields)._mvDblSliderLookAndFeel;
                        fVar11 = pCVar5->g;
                        fVar12 = pCVar5->b;
                        fVar13 = pCVar5->a;
                        if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
                          (pGVar1->fields)._hoveredBorderColor.r = pCVar5->r;
                          (pGVar1->fields)._hoveredBorderColor.g = fVar11;
                          (pGVar1->fields)._hoveredBorderColor.b = fVar12;
                          (pGVar1->fields)._hoveredBorderColor.a = fVar13;
                          return;
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
code_?:
        func_?();
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
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSliderLookAndFeel;
  if (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if (pGVar2->vector[0] != (GizmoLineSlider2DLookAndFeel *)0x0) {
      return (pGVar2->vector[0]->fields)._boxThickness;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_MvSliderArrowCapBaseRadius() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
      UniversalGizmoLookAndFeel2D_get_MvSliderArrowCapBaseRadius
                (UniversalGizmoLookAndFeel2D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSliderLookAndFeel;
  if (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if ((pGVar2->vector[0] != (GizmoLineSlider2DLookAndFeel *)0x0) &&
       (pGVar6 = (pGVar2->vector[0]->fields)._capLookAndFeel, pGVar6 != (GizmoCap2DLookAndFeel *)0x0
       )) {
      return (pGVar6->fields)._arrowBaseRadius;
    }
  }
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_MvSliderArrowCapHeight() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
      UniversalGizmoLookAndFeel2D_get_MvSliderArrowCapHeight
                (UniversalGizmoLookAndFeel2D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSliderLookAndFeel;
  if (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if ((pGVar2->vector[0] != (GizmoLineSlider2DLookAndFeel *)0x0) &&
       (pGVar6 = (pGVar2->vector[0]->fields)._capLookAndFeel, pGVar6 != (GizmoCap2DLookAndFeel *)0x0
       )) {
      return (pGVar6->fields)._arrowHeight;
    }
  }
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* GizmoFillMode2D get_MvSliderCapFillMode() */

GizmoFillMode2D__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
UniversalGizmoLookAndFeel2D_get_MvSliderCapFillMode
          (UniversalGizmoLookAndFeel2D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSliderLookAndFeel;
  if (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      GVar5 = (*pcVar4)();
      return GVar5;
    }
    if ((pGVar2->vector[0] != (GizmoLineSlider2DLookAndFeel *)0x0) &&
       (pGVar6 = (pGVar2->vector[0]->fields)._capLookAndFeel, pGVar6 != (GizmoCap2DLookAndFeel *)0x0
       )) {
      return (pGVar6->fields)._fillMode;
    }
  }
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar4 = (code *)swi(3);
  GVar5 = (*pcVar4)();
  return GVar5;
}


/* GizmoCap2DType get_MvSliderCapType() */

GizmoCap2DType__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
UniversalGizmoLookAndFeel2D_get_MvSliderCapType
          (UniversalGizmoLookAndFeel2D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSliderLookAndFeel;
  if (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      GVar5 = (*pcVar4)();
      return GVar5;
    }
    if ((pGVar2->vector[0] != (GizmoLineSlider2DLookAndFeel *)0x0) &&
       (pGVar6 = (pGVar2->vector[0]->fields)._capLookAndFeel, pGVar6 != (GizmoCap2DLookAndFeel *)0x0
       )) {
      return (pGVar6->fields)._capType;
    }
  }
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar4 = (code *)swi(3);
  GVar5 = (*pcVar4)();
  return GVar5;
}


/* Single get_MvSliderCircleCapRadius() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
      UniversalGizmoLookAndFeel2D_get_MvSliderCircleCapRadius
                (UniversalGizmoLookAndFeel2D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSliderLookAndFeel;
  if (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if ((pGVar2->vector[0] != (GizmoLineSlider2DLookAndFeel *)0x0) &&
       (pGVar6 = (pGVar2->vector[0]->fields)._capLookAndFeel, pGVar6 != (GizmoCap2DLookAndFeel *)0x0
       )) {
      return (pGVar6->fields)._circleRadius;
    }
  }
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* GizmoFillMode2D get_MvSliderFillMode() */

GizmoFillMode2D__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
UniversalGizmoLookAndFeel2D_get_MvSliderFillMode
          (UniversalGizmoLookAndFeel2D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSliderLookAndFeel;
  if (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      GVar5 = (*pcVar4)();
      return GVar5;
    }
    if (pGVar2->vector[0] != (GizmoLineSlider2DLookAndFeel *)0x0) {
      return (pGVar2->vector[0]->fields)._fillMode;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  GVar5 = (*pcVar4)();
  return GVar5;
}


/* Color get_MvSliderHoveredBorderColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
        UniversalGizmoLookAndFeel2D_get_MvSliderHoveredBorderColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel2D *this,
                  MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSliderLookAndFeel;
  if (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      pCVar5 = (Color *)(*pcVar4)();
      return pCVar5;
    }
    pGVar6 = pGVar2->vector[0];
    if (pGVar6 != (GizmoLineSlider2DLookAndFeel *)0x0) {
      fVar7 = (pGVar6->fields)._hoveredBorderColor.g;
      fVar8 = (pGVar6->fields)._hoveredBorderColor.b;
      fVar9 = (pGVar6->fields)._hoveredBorderColor.a;
      __return_storage_ptr__->r = (pGVar6->fields)._hoveredBorderColor.r;
      __return_storage_ptr__->g = fVar7;
      __return_storage_ptr__->b = fVar8;
      __return_storage_ptr__->a = fVar9;
      return __return_storage_ptr__;
    }
  }
  uVar10 = func_?(&puStack_11);
  func_?(uVar10);
  pcVar4 = (code *)swi(3);
  pCVar5 = (Color *)(*pcVar4)();
  return pCVar5;
}


/* Color get_MvSliderHoveredColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
        UniversalGizmoLookAndFeel2D_get_MvSliderHoveredColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel2D *this,
                  MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSliderLookAndFeel;
  if (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      pCVar5 = (Color *)(*pcVar4)();
      return pCVar5;
    }
    pGVar6 = pGVar2->vector[0];
    if (pGVar6 != (GizmoLineSlider2DLookAndFeel *)0x0) {
      fVar7 = (pGVar6->fields)._hoveredColor.g;
      fVar8 = (pGVar6->fields)._hoveredColor.b;
      fVar9 = (pGVar6->fields)._hoveredColor.a;
      __return_storage_ptr__->r = (pGVar6->fields)._hoveredColor.r;
      __return_storage_ptr__->g = fVar7;
      __return_storage_ptr__->b = fVar8;
      __return_storage_ptr__->a = fVar9;
      return __return_storage_ptr__;
    }
  }
  uVar10 = func_?(&puStack_11);
  func_?(uVar10);
  pcVar4 = (code *)swi(3);
  pCVar5 = (Color *)(*pcVar4)();
  return pCVar5;
}


/* GizmoLine2DType get_MvSliderLineType() */

GizmoLine2DType__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
UniversalGizmoLookAndFeel2D_get_MvSliderLineType
          (UniversalGizmoLookAndFeel2D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSliderLookAndFeel;
  if (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      GVar5 = (*pcVar4)();
      return GVar5;
    }
    if (pGVar2->vector[0] != (GizmoLineSlider2DLookAndFeel *)0x0) {
      return (pGVar2->vector[0]->fields)._lineType;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  GVar5 = (*pcVar4)();
  return GVar5;
}


/* Single get_MvSliderQuadCapHeight() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
      UniversalGizmoLookAndFeel2D_get_MvSliderQuadCapHeight
                (UniversalGizmoLookAndFeel2D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSliderLookAndFeel;
  if (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if ((pGVar2->vector[0] != (GizmoLineSlider2DLookAndFeel *)0x0) &&
       (pGVar6 = (pGVar2->vector[0]->fields)._capLookAndFeel, pGVar6 != (GizmoCap2DLookAndFeel *)0x0
       )) {
      return (pGVar6->fields)._quadHeight;
    }
  }
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_MvSliderQuadCapWidth() */

float Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
      UniversalGizmoLookAndFeel2D_get_MvSliderQuadCapWidth
                (UniversalGizmoLookAndFeel2D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSliderLookAndFeel;
  if (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if ((pGVar2->vector[0] != (GizmoLineSlider2DLookAndFeel *)0x0) &&
       (pGVar6 = (pGVar2->vector[0]->fields)._capLookAndFeel, pGVar6 != (GizmoCap2DLookAndFeel *)0x0
       )) {
      return (pGVar6->fields)._quadWidth;
    }
  }
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Color get_MvXBorderColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
        UniversalGizmoLookAndFeel2D_get_MvXBorderColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel2D *this,
                  MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSliderLookAndFeel;
  if (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      pCVar5 = (Color *)(*pcVar4)();
      return pCVar5;
    }
    pGVar6 = pGVar2->vector[0];
    if (pGVar6 != (GizmoLineSlider2DLookAndFeel *)0x0) {
      fVar7 = (pGVar6->fields)._borderColor.g;
      fVar8 = (pGVar6->fields)._borderColor.b;
      fVar9 = (pGVar6->fields)._borderColor.a;
      __return_storage_ptr__->r = (pGVar6->fields)._borderColor.r;
      __return_storage_ptr__->g = fVar7;
      __return_storage_ptr__->b = fVar8;
      __return_storage_ptr__->a = fVar9;
      return __return_storage_ptr__;
    }
  }
  uVar10 = func_?(&puStack_11);
  func_?(uVar10);
  pcVar4 = (code *)swi(3);
  pCVar5 = (Color *)(*pcVar4)();
  return pCVar5;
}


/* Color get_MvXColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
        UniversalGizmoLookAndFeel2D_get_MvXColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel2D *this,
                  MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSliderLookAndFeel;
  if (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      pCVar5 = (Color *)(*pcVar4)();
      return pCVar5;
    }
    pGVar6 = pGVar2->vector[0];
    if (pGVar6 != (GizmoLineSlider2DLookAndFeel *)0x0) {
      fVar7 = (pGVar6->fields)._color.g;
      fVar8 = (pGVar6->fields)._color.b;
      fVar9 = (pGVar6->fields)._color.a;
      __return_storage_ptr__->r = (pGVar6->fields)._color.r;
      __return_storage_ptr__->g = fVar7;
      __return_storage_ptr__->b = fVar8;
      __return_storage_ptr__->a = fVar9;
      return __return_storage_ptr__;
    }
  }
  uVar10 = func_?(&puStack_11);
  func_?(uVar10);
  pcVar4 = (code *)swi(3);
  pCVar5 = (Color *)(*pcVar4)();
  return pCVar5;
}


/* Color get_MvYBorderColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
        UniversalGizmoLookAndFeel2D_get_MvYBorderColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel2D *this,
                  MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSliderLookAndFeel;
  if (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length < 2) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      pCVar5 = (Color *)(*pcVar4)();
      return pCVar5;
    }
    pGVar6 = pGVar2->vector[1];
    if (pGVar6 != (GizmoLineSlider2DLookAndFeel *)0x0) {
      fVar7 = (pGVar6->fields)._borderColor.g;
      fVar8 = (pGVar6->fields)._borderColor.b;
      fVar9 = (pGVar6->fields)._borderColor.a;
      __return_storage_ptr__->r = (pGVar6->fields)._borderColor.r;
      __return_storage_ptr__->g = fVar7;
      __return_storage_ptr__->b = fVar8;
      __return_storage_ptr__->a = fVar9;
      return __return_storage_ptr__;
    }
  }
  uVar10 = func_?(&puStack_11);
  func_?(uVar10);
  pcVar4 = (code *)swi(3);
  pCVar5 = (Color *)(*pcVar4)();
  return pCVar5;
}


/* Color get_MvYColor() */

Color * Assembly-CSharp.dll::RTG::UniversalGizmoLookAndFeel2D::
        UniversalGizmoLookAndFeel2D_get_MvYColor
                  (Color *__return_storage_ptr__,UniversalGizmoLookAndFeel2D *this,
                  MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSliderLookAndFeel;
  if (pGVar2 != (GizmoLineSlider2DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length < 2) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      pCVar5 = (Color *)(*pcVar4)();
      return pCVar5;
    }
    pGVar6 = pGVar2->vector[1];
    if (pGVar6 != (GizmoLineSlider2DLookAndFeel *)0x0) {
      fVar7 = (pGVar6->fields)._color.g;
      fVar8 = (pGVar6->fields)._color.b;
      fVar9 = (pGVar6->fields)._color.a;
      __return_storage_ptr__->r = (pGVar6->fields)._color.r;
      __return_storage_ptr__->g = fVar7;
      __return_storage_ptr__->b = fVar8;
      __return_storage_ptr__->a = fVar9;
      return __return_storage_ptr__;
    }
  }
  uVar10 = func_?(&puStack_11);
  func_?(uVar10);
  pcVar4 = (code *)swi(3);
  pCVar5 = (Color *)(*pcVar4)();
  return pCVar5;
}



/* Void ConnectMvDblSliderSettings(GizmoPlaneSlider3D, PlaneId) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
     UniversalGizmoSettings3D_ConnectMvDblSliderSettings
               (UniversalGizmoSettings3D *this,GizmoPlaneSlider3D *dblSlider,PlaneId__Enum planeId,
               MethodInfo *method)

{
  pGStack_1 = (GizmoPlaneSlider3DSettings *)&stack0xfffffffc;
  pGVar2 = (this->fields)._mvDblSliderSettings;
  if (pGVar2 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
    if (pGVar2->max_length <= planeId) {
      pGStack_1 = (GizmoPlaneSlider3DSettings *)0x0;
      ppGStack_3 = (GizmoPlaneSlider3DSettings **)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (dblSlider != (GizmoPlaneSlider3D *)0x0) {
      pGStack_1 = pGVar2->vector[planeId];
      ppGStack_3 = &(dblSlider->fields)._sharedSettings;
      *ppGStack_3 = pGStack_1;
      func_?();
      return;
    }
  }
  uVar5 = func_?(&puStack_6);
  func_?(uVar5);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ConnectMvSliderSettings(GizmoLineSlider3D, Int32, AxisSign) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
     UniversalGizmoSettings3D_ConnectMvSliderSettings
               (UniversalGizmoSettings3D *this,GizmoLineSlider3D *slider,int32_t axisIndex,
               AxisSign__Enum axisSign,MethodInfo *method)

{
  pGStack_1 = (GizmoLineSlider3DSettings *)&stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSliderSettings;
  if (axisSign == AxisSign__Enum_Positive) {
    if (pGVar2 == (GizmoLineSlider3DSettings__Array *)0x0) goto code_?;
    if (pGVar2->max_length <= (uint)axisIndex) goto code_?;
  }
  else {
    if (pGVar2 == (GizmoLineSlider3DSettings__Array *)0x0) goto code_?;
    axisIndex = axisIndex + 3;
    if (pGVar2->max_length <= (uint)axisIndex) {
code_?:
      pGStack_1 = (GizmoLineSlider3DSettings *)0x0;
      ppGStack_3 = (GizmoLineSlider3DSettings **)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pGVar5 = pGVar2->vector[axisIndex];
  if (slider != (GizmoLineSlider3D *)0x0) {
    ppGStack_3 = &(slider->fields)._sharedSettings;
    *ppGStack_3 = pGVar5;
    pGStack_1 = pGVar5;
    func_?();
    return;
  }
code_?:
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ConnectRtCamLookSliderSettings(GizmoPlaneSlider2D) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
     UniversalGizmoSettings3D_ConnectRtCamLookSliderSettings
               (UniversalGizmoSettings3D *this,GizmoPlaneSlider2D *slider,MethodInfo *method)

{
  pGStack_1 = (GizmoPlaneSlider2DSettings *)&stack0xfffffffc;
  if (slider != (GizmoPlaneSlider2D *)0x0) {
    ppGStack_2 = &(slider->fields)._sharedSettings;
    pGStack_1 = (this->fields)._rtCamLookSliderSettings;
    *ppGStack_2 = pGStack_1;
    func_?();
    return;
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ConnectRtSliderSettings(GizmoPlaneSlider3D, Int32) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
     UniversalGizmoSettings3D_ConnectRtSliderSettings
               (UniversalGizmoSettings3D *this,GizmoPlaneSlider3D *slider,int32_t axisIndex,
               MethodInfo *method)

{
  pGStack_1 = (GizmoPlaneSlider3DSettings *)&stack0xfffffffc;
  pGVar2 = (this->fields)._rtSliderSettings;
  if (pGVar2 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
    if (pGVar2->max_length <= (uint)axisIndex) {
      pGStack_1 = (GizmoPlaneSlider3DSettings *)0x0;
      ppGStack_3 = (GizmoPlaneSlider3DSettings **)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (slider != (GizmoPlaneSlider3D *)0x0) {
      pGStack_1 = pGVar2->vector[axisIndex];
      ppGStack_3 = &(slider->fields)._sharedSettings;
      *ppGStack_3 = pGStack_1;
      func_?();
      return;
    }
  }
  uVar5 = func_?(&puStack_6);
  func_?(uVar5);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ConnectScDblSliderSettings(GizmoPlaneSlider3D, PlaneId) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
     UniversalGizmoSettings3D_ConnectScDblSliderSettings
               (UniversalGizmoSettings3D *this,GizmoPlaneSlider3D *dblSlider,PlaneId__Enum planeId,
               MethodInfo *method)

{
  pGStack_1 = (GizmoPlaneSlider3DSettings *)&stack0xfffffffc;
  pGVar2 = (this->fields)._scDblSliderSettings;
  if (pGVar2 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
    if (pGVar2->max_length <= planeId) {
      pGStack_1 = (GizmoPlaneSlider3DSettings *)0x0;
      ppGStack_3 = (GizmoPlaneSlider3DSettings **)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (dblSlider != (GizmoPlaneSlider3D *)0x0) {
      pGStack_1 = pGVar2->vector[planeId];
      ppGStack_3 = &(dblSlider->fields)._sharedSettings;
      *ppGStack_3 = pGStack_1;
      func_?();
      return;
    }
  }
  uVar5 = func_?(&puStack_6);
  func_?(uVar5);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ConnectScSliderSettings(GizmoLineSlider3D, Int32, AxisSign) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
     UniversalGizmoSettings3D_ConnectScSliderSettings
               (UniversalGizmoSettings3D *this,GizmoLineSlider3D *slider,int32_t axisIndex,
               AxisSign__Enum axisSign,MethodInfo *method)

{
  pGStack_1 = (GizmoLineSlider3DSettings *)&stack0xfffffffc;
  pGVar2 = (this->fields)._scSglSliderSettings;
  if (axisSign == AxisSign__Enum_Positive) {
    if (pGVar2 == (GizmoLineSlider3DSettings__Array *)0x0) goto code_?;
    if (pGVar2->max_length <= (uint)axisIndex) goto code_?;
  }
  else {
    if (pGVar2 == (GizmoLineSlider3DSettings__Array *)0x0) goto code_?;
    axisIndex = axisIndex + 3;
    if (pGVar2->max_length <= (uint)axisIndex) {
code_?:
      pGStack_1 = (GizmoLineSlider3DSettings *)0x0;
      ppGStack_3 = (GizmoLineSlider3DSettings **)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pGVar5 = pGVar2->vector[axisIndex];
  if (slider != (GizmoLineSlider3D *)0x0) {
    ppGStack_3 = &(slider->fields)._sharedSettings;
    *ppGStack_3 = pGVar5;
    pGStack_1 = pGVar5;
    func_?();
    return;
  }
code_?:
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* GizmoPlaneSlider3DSettings GetMvDblSliderSettings(PlaneId) */

GizmoPlaneSlider3DSettings *
Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_GetMvDblSliderSettings
          (UniversalGizmoSettings3D *this,PlaneId__Enum planeId,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvDblSliderSettings;
  if (pGVar2 == (GizmoPlaneSlider3DSettings__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    pGVar6 = (GizmoPlaneSlider3DSettings *)(*pcVar5)();
    return pGVar6;
  }
  if (planeId < pGVar2->max_length) {
    return pGVar2->vector[planeId];
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_7 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  pGVar6 = (GizmoPlaneSlider3DSettings *)(*pcVar5)();
  return pGVar6;
}


/* GizmoLineSlider3DSettings GetMvSglSliderSettings(Int32, AxisSign) */

GizmoLineSlider3DSettings *
Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_GetMvSglSliderSettings
          (UniversalGizmoSettings3D *this,int32_t axisIndex,AxisSign__Enum axisSign,
          MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSliderSettings;
  if (axisSign == AxisSign__Enum_Positive) {
    if (pGVar2 == (GizmoLineSlider3DSettings__Array *)0x0) goto code_?;
    if (pGVar2->max_length <= (uint)axisIndex) goto code_?;
  }
  else {
    if (pGVar2 == (GizmoLineSlider3DSettings__Array *)0x0) {
code_?:
      uVar3 = func_?(&puStack_4);
      func_?(uVar3);
      pcVar5 = (code *)swi(3);
      pGVar6 = (GizmoLineSlider3DSettings *)(*pcVar5)();
      return pGVar6;
    }
    axisIndex = axisIndex + 3;
    if (pGVar2->max_length <= (uint)axisIndex) {
code_?:
      puStack_1 = (undefined1 *)0x0;
      puStack_7 = (undefined *)func_?();
      func_?();
      pcVar5 = (code *)swi(3);
      pGVar6 = (GizmoLineSlider3DSettings *)(*pcVar5)();
      return pGVar6;
    }
  }
  return pGVar2->vector[axisIndex];
}


/* GizmoPlaneSlider3DSettings GetScDblSliderSettings(PlaneId) */

GizmoPlaneSlider3DSettings *
Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_GetScDblSliderSettings
          (UniversalGizmoSettings3D *this,PlaneId__Enum planeId,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scDblSliderSettings;
  if (pGVar2 == (GizmoPlaneSlider3DSettings__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    pGVar6 = (GizmoPlaneSlider3DSettings *)(*pcVar5)();
    return pGVar6;
  }
  if (planeId < pGVar2->max_length) {
    return pGVar2->vector[planeId];
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_7 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  pGVar6 = (GizmoPlaneSlider3DSettings *)(*pcVar5)();
  return pGVar6;
}


/* GizmoLineSlider3DSettings GetScSglSliderSettings(Int32, AxisSign) */

GizmoLineSlider3DSettings *
Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_GetScSglSliderSettings
          (UniversalGizmoSettings3D *this,int32_t axisIndex,AxisSign__Enum axisSign,
          MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scSglSliderSettings;
  if (axisSign == AxisSign__Enum_Positive) {
    if (pGVar2 == (GizmoLineSlider3DSettings__Array *)0x0) goto code_?;
    if (pGVar2->max_length <= (uint)axisIndex) goto code_?;
  }
  else {
    if (pGVar2 == (GizmoLineSlider3DSettings__Array *)0x0) {
code_?:
      uVar3 = func_?(&puStack_4);
      func_?(uVar3);
      pcVar5 = (code *)swi(3);
      pGVar6 = (GizmoLineSlider3DSettings *)(*pcVar5)();
      return pGVar6;
    }
    axisIndex = axisIndex + 3;
    if (pGVar2->max_length <= (uint)axisIndex) {
code_?:
      puStack_1 = (undefined1 *)0x0;
      puStack_7 = (undefined *)func_?();
      func_?();
      pcVar5 = (code *)swi(3);
      pGVar6 = (GizmoLineSlider3DSettings *)(*pcVar5)();
      return pGVar6;
    }
  }
  return pGVar2->vector[axisIndex];
}


/* Void Inherit(MoveGizmoSettings3D) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_Inherit
               (UniversalGizmoSettings3D *this,MoveGizmoSettings3D *settings,MethodInfo *method)

{
  if (settings != (MoveGizmoSettings3D *)0x0) {
    fVar1 = ScaleGizmoSettings3D::ScaleGizmoSettings3D_get_LineSliderHoverEps
                      ((ScaleGizmoSettings3D *)settings,(MethodInfo *)0x0);
    uVar2 = 0;
    pGVar3 = (this->fields)._mvSglSliderSettings;
    if (pGVar3 != (GizmoLineSlider3DSettings__Array *)0x0) {
      ppGVar4 = pGVar3->vector;
      for (; (int)uVar2 < (int)pGVar3->max_length; uVar2 = uVar2 + 1) {
        if (pGVar3->max_length <= uVar2) goto code_?;
        if ((GizmoPlaneSlider3DSettings *)*ppGVar4 == (GizmoPlaneSlider3DSettings *)0x0)
        goto code_?;
        GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_AreaHoverEps
                  ((GizmoPlaneSlider3DSettings *)*ppGVar4,fVar1,(MethodInfo *)0x0);
        ppGVar4 = ppGVar4 + 1;
      }
      fVar1 = ScaleGizmoSettings3D::ScaleGizmoSettings3D_get_BoxSliderHoverEps
                        ((ScaleGizmoSettings3D *)settings,(MethodInfo *)0x0);
      uVar2 = 0;
      pGVar3 = (this->fields)._mvSglSliderSettings;
      if (pGVar3 != (GizmoLineSlider3DSettings__Array *)0x0) {
        ppGVar4 = pGVar3->vector;
        for (; (int)uVar2 < (int)pGVar3->max_length; uVar2 = uVar2 + 1) {
          if (pGVar3->max_length <= uVar2) goto code_?;
          if (*ppGVar4 == (GizmoLineSlider3DSettings *)0x0) goto code_?;
          Sphere::Sphere_set_Radius((Sphere *)*ppGVar4,fVar1,(MethodInfo *)0x0);
          ppGVar4 = ppGVar4 + 1;
        }
        fVar1 = ScaleGizmoSettings3D::ScaleGizmoSettings3D_get_CylinderSliderHoverEps
                          ((ScaleGizmoSettings3D *)settings,(MethodInfo *)0x0);
        uVar2 = 0;
        pGVar3 = (this->fields)._mvSglSliderSettings;
        if (pGVar3 != (GizmoLineSlider3DSettings__Array *)0x0) {
          ppGVar4 = pGVar3->vector;
          for (; (int)uVar2 < (int)pGVar3->max_length; uVar2 = uVar2 + 1) {
            if (pGVar3->max_length <= uVar2) goto code_?;
            if ((GizmoPlaneSlider3DSettings *)*ppGVar4 == (GizmoPlaneSlider3DSettings *)0x0)
            goto code_?;
            GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_BorderLineHoverEps
                      ((GizmoPlaneSlider3DSettings *)*ppGVar4,fVar1,(MethodInfo *)0x0);
            ppGVar4 = ppGVar4 + 1;
          }
          fVar1 = MoveGizmoSettings3D::MoveGizmoSettings3D_get_DragSensitivity
                            (settings,(MethodInfo *)0x0);
          uVar2 = 0;
          pGVar3 = (this->fields)._mvSglSliderSettings;
          if (pGVar3 != (GizmoLineSlider3DSettings__Array *)0x0) {
            ppGVar4 = pGVar3->vector;
            for (; (int)uVar2 < (int)pGVar3->max_length; uVar2 = uVar2 + 1) {
              if (pGVar3->max_length <= uVar2) goto code_?;
              if ((UniversalGizmoSettings3D *)*ppGVar4 == (UniversalGizmoSettings3D *)0x0)
              goto code_?;
              UniversalGizmoSettings3D_SetRtCamRightSnapStep
                        ((UniversalGizmoSettings3D *)*ppGVar4,fVar1,(MethodInfo *)0x0);
              ppGVar4 = ppGVar4 + 1;
            }
            uVar2 = 0;
            pGVar5 = (this->fields)._mvDblSliderSettings;
            if (pGVar5 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
              ppGVar6 = pGVar5->vector;
              for (; (int)uVar2 < (int)pGVar5->max_length; uVar2 = uVar2 + 1) {
                if (pGVar5->max_length <= uVar2) goto code_?;
                if (*ppGVar6 == (GizmoPlaneSlider3DSettings *)0x0) goto code_?;
                GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_OffsetSensitivity
                          (*ppGVar6,fVar1,(MethodInfo *)0x0);
                ppGVar6 = ppGVar6 + 1;
              }
              fVar1 = MoveGizmoSettings3D::MoveGizmoSettings3D_get_XSnapStep
                                (settings,(MethodInfo *)0x0);
              pGVar3 = (this->fields)._mvSglSliderSettings;
              if (pGVar3 != (GizmoLineSlider3DSettings__Array *)0x0) {
                if (pGVar3->max_length == 0) goto code_?;
                if (pGVar3->vector[0] != (GizmoLineSlider3DSettings *)0x0) {
                  ObjectKeyRotationSettings::ObjectKeyRotationSettings_set_XRotationStep
                            ((ObjectKeyRotationSettings *)pGVar3->vector[0],fVar1,(MethodInfo *)0x0)
                  ;
                  pGVar3 = (this->fields)._mvSglSliderSettings;
                  if (pGVar3 != (GizmoLineSlider3DSettings__Array *)0x0) {
                    if (pGVar3->max_length < 4) goto code_?;
                    if (pGVar3->vector[3] != (GizmoLineSlider3DSettings *)0x0) {
                      ObjectKeyRotationSettings::ObjectKeyRotationSettings_set_XRotationStep
                                ((ObjectKeyRotationSettings *)pGVar3->vector[3],fVar1,
                                 (MethodInfo *)0x0);
                      pGVar5 = (this->fields)._mvDblSliderSettings;
                      if (pGVar5 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
                        if (pGVar5->max_length == 0) goto code_?;
                        this_00 = pGVar5->vector[0];
                        if (this_00 != (GizmoPlaneSlider3DSettings *)0x0) {
                          GizmoPlaneSlider3DSettings::
                          GizmoPlaneSlider3DSettings_set_OffsetSnapStepRight
                                    (this_00,fVar1,(MethodInfo *)0x0);
                          pGVar5 = (this->fields)._mvDblSliderSettings;
                          if (pGVar5 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
                            if (pGVar5->max_length < 3) goto code_?;
                            if (pGVar5->vector[2] != (GizmoPlaneSlider3DSettings *)0x0) {
                              UniversalGizmoSettings3D_SetRtCamRightSnapStep
                                        ((UniversalGizmoSettings3D *)pGVar5->vector[2],
                                         (float)this_00,(MethodInfo *)0x0);
                              fVar1 = MoveGizmoSettings3D::MoveGizmoSettings3D_get_YSnapStep
                                                (settings,(MethodInfo *)0x0);
                              pGVar3 = (this->fields)._mvSglSliderSettings;
                              if (pGVar3 != (GizmoLineSlider3DSettings__Array *)0x0) {
                                if (pGVar3->max_length < 2) goto code_?;
                                if (pGVar3->vector[1] != (GizmoLineSlider3DSettings *)0x0) {
                                  ObjectKeyRotationSettings::
                                  ObjectKeyRotationSettings_set_XRotationStep
                                            ((ObjectKeyRotationSettings *)pGVar3->vector[1],fVar1,
                                             (MethodInfo *)0x0);
                                  pGVar3 = (this->fields)._mvSglSliderSettings;
                                  if (pGVar3 != (GizmoLineSlider3DSettings__Array *)0x0) {
                                    if (pGVar3->max_length < 5) goto code_?;
                                    if (pGVar3->vector[4] != (GizmoLineSlider3DSettings *)0x0) {
                                      ObjectKeyRotationSettings::
                                      ObjectKeyRotationSettings_set_XRotationStep
                                                ((ObjectKeyRotationSettings *)pGVar3->vector[4],
                                                 fVar1,(MethodInfo *)0x0);
                                      pGVar5 = (this->fields)._mvDblSliderSettings;
                                      if (pGVar5 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
                                        if (pGVar5->max_length == 0) goto code_?;
                                        if (pGVar5->vector[0] != (GizmoPlaneSlider3DSettings *)0x0)
                                        {
                                          UniversalGizmoSettings3D_SetRtCamRightSnapStep
                                                    ((UniversalGizmoSettings3D *)pGVar5->vector[0],
                                                     fVar1,(MethodInfo *)0x0);
                                          pGVar5 = (this->fields)._mvDblSliderSettings;
                                          if (pGVar5 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
                                            if (pGVar5->max_length < 2) goto code_?;
                                            if (pGVar5->vector[1] !=
                                                (GizmoPlaneSlider3DSettings *)0x0) {
                                              GizmoPlaneSlider3DSettings::
                                              GizmoPlaneSlider3DSettings_set_OffsetSnapStepRight
                                                        (pGVar5->vector[1],fVar1,(MethodInfo *)0x0);
                                              fVar1 = MoveGizmoSettings3D::
                                                      MoveGizmoSettings3D_get_ZSnapStep
                                                                (settings,(MethodInfo *)0x0);
                                              pGVar3 = (this->fields)._mvSglSliderSettings;
                                              if (pGVar3 != (GizmoLineSlider3DSettings__Array *)0x0)
                                              {
                                                if (pGVar3->max_length < 3) goto code_?;
                                                if (pGVar3->vector[2] !=
                                                    (GizmoLineSlider3DSettings *)0x0) {
                                                  ObjectKeyRotationSettings::
                                                  ObjectKeyRotationSettings_set_XRotationStep
                                                            ((ObjectKeyRotationSettings *)
                                                             pGVar3->vector[2],fVar1,
                                                             (MethodInfo *)0x0);
                                                  pGVar3 = (this->fields)._mvSglSliderSettings;
                                                  if (pGVar3 != (GizmoLineSlider3DSettings__Array *)
                                                                0x0) {
                                                    if (pGVar3->max_length < 6)
                                                    goto code_?;
                                                    if (pGVar3->vector[5] !=
                                                        (GizmoLineSlider3DSettings *)0x0) {
                                                      ObjectKeyRotationSettings::
                                                      ObjectKeyRotationSettings_set_XRotationStep
                                                                ((ObjectKeyRotationSettings *)
                                                                 pGVar3->vector[5],fVar1,
                                                                 (MethodInfo *)0x0);
                                                      pGVar5 = (this->fields)._mvDblSliderSettings;
                                                      if (pGVar5 != (
                                                  GizmoPlaneSlider3DSettings__Array *)0x0) {
                                                    if (pGVar5->max_length < 2)
                                                    goto code_?;
                                                    if (pGVar5->vector[1] !=
                                                        (GizmoPlaneSlider3DSettings *)0x0) {
                                                      UniversalGizmoSettings3D_SetRtCamRightSnapStep
                                                                ((UniversalGizmoSettings3D *)
                                                                 pGVar5->vector[1],fVar1,
                                                                 (MethodInfo *)0x0);
                                                      pGVar5 = (this->fields)._mvDblSliderSettings;
                                                      if (pGVar5 != (
                                                  GizmoPlaneSlider3DSettings__Array *)0x0) {
                                                    if (pGVar5->max_length < 3)
                                                    goto code_?;
                                                    if (pGVar5->vector[2] !=
                                                        (GizmoPlaneSlider3DSettings *)0x0) {
                                                      GizmoPlaneSlider3DSettings::
                                                                                                            
                                                  GizmoPlaneSlider3DSettings_set_OffsetSnapStepRight
                                                            (pGVar5->vector[2],fVar1,
                                                             (MethodInfo *)0x0);
                                                  this_01 = (settings->fields)._vertexSnapSettings;
                                                  if (this_01 !=
                                                      (GizmoObjectVertexSnapSettings *)0x0) {
                                                    GizmoObjectVertexSnapSettings::
                                                    GizmoObjectVertexSnapSettings_Transfer
                                                              (this_01,(this->fields).
                                                                       _mvVertexSnapSettings,
                                                               (MethodInfo *)0x0);
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
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Inherit(RotationGizmoSettings3D) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_Inherit_1
               (UniversalGizmoSettings3D *this,RotationGizmoSettings3D *settings,MethodInfo *method)

{
  if (settings != (RotationGizmoSettings3D *)0x0) {
    fVar1 = UniversalGizmoSettings3D_get_MvCylinderSliderHoverEps
                      ((UniversalGizmoSettings3D *)settings,(MethodInfo *)0x0);
    pGVar2 = (this->fields)._rtSliderSettings;
    uVar3 = 0;
    if (pGVar2 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
      ppGVar4 = pGVar2->vector;
      for (; (int)uVar3 < (int)pGVar2->max_length; uVar3 = uVar3 + 1) {
        if (pGVar2->max_length <= uVar3) goto code_?;
        if (*ppGVar4 == (GizmoPlaneSlider3DSettings *)0x0) goto code_?;
        GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_BorderLineHoverEps
                  (*ppGVar4,fVar1,(MethodInfo *)0x0);
        ppGVar4 = ppGVar4 + 1;
      }
      fVar1 = UniversalGizmoLookAndFeel2D::UniversalGizmoLookAndFeel2D_get_MvBoxSliderThickness
                        ((UniversalGizmoLookAndFeel2D *)settings,(MethodInfo *)0x0);
      UniversalGizmoSettings3D_SetRtAxisTorusHoverEps(this,fVar1,(MethodInfo *)0x0);
      fVar1 = RotationGizmoSettings3D::RotationGizmoSettings3D_get_CamLookThickHoverEps
                        (settings,(MethodInfo *)0x0);
      this_00 = (GizmoPlaneSlider3DSettings *)(this->fields)._rtCamLookSliderSettings;
      if (this_00 != (GizmoPlaneSlider3DSettings *)0x0) {
        GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_BorderLineHoverEps
                  (this_00,fVar1,(MethodInfo *)0x0);
        fVar1 = RotationGizmoSettings3D::RotationGizmoSettings3D_get_CamLookLineHoverEps
                          (settings,(MethodInfo *)0x0);
        pGVar5 = (this->fields)._rtCamLookSliderSettings;
        if (pGVar5 != (GizmoPlaneSlider2DSettings *)0x0) {
          Sphere::Sphere_set_Radius((Sphere *)pGVar5,fVar1,(MethodInfo *)0x0);
          fVar1 = RotationGizmoSettings3D::RotationGizmoSettings3D_get_CamLookSnapStep
                            (settings,(MethodInfo *)0x0);
          pGVar5 = (this->fields)._rtCamLookSliderSettings;
          if (pGVar5 != (GizmoPlaneSlider2DSettings *)0x0) {
            ObjectKeyRotationSettings::ObjectKeyRotationSettings_set_ZRotationStep
                      ((ObjectKeyRotationSettings *)pGVar5,fVar1,(MethodInfo *)0x0);
            fVar6 = _UNK_?;
            fVar1 = (settings->fields)._camRightSnapStep;
            if (fVar1 < _UNK_?) {
              fVar1 = _UNK_?;
            }
            (this->fields)._rtCamRightSnapStep = fVar1;
            fVar1 = (settings->fields)._camUpSnapStep;
            if (fVar6 <= fVar1) {
              fVar6 = fVar1;
            }
            (this->fields)._rtCamUpSnapStep = fVar6;
            canHover = RotationGizmoSettings3D::RotationGizmoSettings3D_get_CanHoverCulledPixels
                                 (settings,(MethodInfo *)0x0);
            UniversalGizmoSettings3D_SetRtCanHoverCulledPixels(this,canHover,(MethodInfo *)0x0);
            fVar1 = RotationGizmoSettings3D::RotationGizmoSettings3D_get_DragSensitivity
                              (settings,(MethodInfo *)0x0);
            pGVar2 = (this->fields)._rtSliderSettings;
            uVar3 = 0;
            if (pGVar2 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
              ppGVar4 = pGVar2->vector;
              for (; (int)uVar3 < (int)pGVar2->max_length; uVar3 = uVar3 + 1) {
                if (pGVar2->max_length <= uVar3) goto code_?;
                if (*ppGVar4 == (GizmoPlaneSlider3DSettings *)0x0) goto code_?;
                GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_RotationSensitivity
                          (*ppGVar4,fVar1,(MethodInfo *)0x0);
                ppGVar4 = ppGVar4 + 1;
              }
              if (_UNK_? != (GizmoPlaneSlider3DSettings *)0x0) {
                GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_ScaleSnapStepUp
                          (_UNK_?,fVar1,(MethodInfo *)0x0);
                fVar1 = (float)RotationGizmoSettings3D::RotationGizmoSettings3D_get_SnapMode
                                         (settings,(MethodInfo *)0x0);
                iVar7 = _UNK_?;
                uVar3 = 0;
                if (_UNK_? != 0) {
                  piVar8 = (int *)(_UNK_? + 0x10);
                  for (; (int)uVar3 < *(int *)(iVar7 + 0xc); uVar3 = uVar3 + 1) {
                    if (*(uint *)(iVar7 + 0xc) <= uVar3) goto code_?;
                    if (*piVar8 == 0) goto code_?;
                    *(float *)(*piVar8 + 0x2c) = fVar1;
                    piVar8 = piVar8 + 1;
                  }
                  if (_UNK_? != (GizmoPlaneSlider3DSettings *)0x0) {
                    (_UNK_?->fields)._offsetSnapStepRight = fVar1;
                    fVar1 = RotationGizmoSettings3D::RotationGizmoSettings3D_get_XSnapStep
                                      (settings,(MethodInfo *)0x0);
                    if (_UNK_? != 0) {
                      if (*(int *)(_UNK_? + 0xc) == 0) goto code_?;
                      if (*(UniversalGizmoSettings3D **)(_UNK_? + 0x10) !=
                          (UniversalGizmoSettings3D *)0x0) {
                        UniversalGizmoSettings3D_SetRtCamUpSnapStep
                                  (*(UniversalGizmoSettings3D **)(_UNK_? + 0x10),fVar1,
                                   (MethodInfo *)0x0);
                        fVar1 = RotationGizmoSettings3D::RotationGizmoSettings3D_get_YSnapStep
                                          (settings,(MethodInfo *)0x0);
                        if (_UNK_? != 0) {
                          if (*(uint *)(_UNK_? + 0xc) < 2) goto code_?;
                          if (*(UniversalGizmoSettings3D **)(_UNK_? + 0x14) !=
                              (UniversalGizmoSettings3D *)0x0) {
                            UniversalGizmoSettings3D_SetRtCamUpSnapStep
                                      (*(UniversalGizmoSettings3D **)(_UNK_? + 0x14),fVar1,
                                       (MethodInfo *)0x0);
                            fVar1 = RotationGizmoSettings3D::RotationGizmoSettings3D_get_ZSnapStep
                                              (settings,(MethodInfo *)0x0);
                            if (_UNK_? != 0) {
                              if (*(uint *)(_UNK_? + 0xc) < 3) goto code_?;
                              if (*(UniversalGizmoSettings3D **)(_UNK_? + 0x18) !=
                                  (UniversalGizmoSettings3D *)0x0) {
                                UniversalGizmoSettings3D_SetRtCamUpSnapStep
                                          (*(UniversalGizmoSettings3D **)(_UNK_? + 0x18),
                                           fVar1,(MethodInfo *)0x0);
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
code_?:
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Inherit(ScaleGizmoSettings3D) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_Inherit_2
               (UniversalGizmoSettings3D *this,ScaleGizmoSettings3D *settings,MethodInfo *method)

{
  if ((settings != (ScaleGizmoSettings3D *)0x0) &&
     (pGVar1 = (settings->fields)._sglSliderSettings,
     pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0)) {
    if (pGVar1->max_length == 0) goto code_?;
    if (pGVar1->vector[0] != (GizmoLineSlider3DSettings *)0x0) {
      fVar2 = (pGVar1->vector[0]->fields)._lineHoverEps;
      uVar3 = 0;
      pGVar1 = (this->fields)._scSglSliderSettings;
      if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
        ppGVar4 = pGVar1->vector;
        for (; (int)uVar3 < (int)pGVar1->max_length; uVar3 = uVar3 + 1) {
          if (pGVar1->max_length <= uVar3) goto code_?;
          if ((GizmoPlaneSlider3DSettings *)*ppGVar4 == (GizmoPlaneSlider3DSettings *)0x0)
          goto code_?;
          GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_AreaHoverEps
                    ((GizmoPlaneSlider3DSettings *)*ppGVar4,fVar2,(MethodInfo *)0x0);
          ppGVar4 = ppGVar4 + 1;
        }
        pGVar1 = (settings->fields)._sglSliderSettings;
        if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
          if (pGVar1->max_length == 0) goto code_?;
          if (pGVar1->vector[0] != (GizmoLineSlider3DSettings *)0x0) {
            fVar2 = (pGVar1->vector[0]->fields)._cylinderHoverEps;
            uVar3 = 0;
            pGVar1 = (this->fields)._scSglSliderSettings;
            if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
              ppGVar4 = pGVar1->vector;
              for (; (int)uVar3 < (int)pGVar1->max_length; uVar3 = uVar3 + 1) {
                if (pGVar1->max_length <= uVar3) goto code_?;
                if ((GizmoPlaneSlider3DSettings *)*ppGVar4 == (GizmoPlaneSlider3DSettings *)0x0)
                goto code_?;
                GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_BorderLineHoverEps
                          ((GizmoPlaneSlider3DSettings *)*ppGVar4,fVar2,(MethodInfo *)0x0);
                ppGVar4 = ppGVar4 + 1;
              }
              pGVar1 = (settings->fields)._sglSliderSettings;
              if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
                if (pGVar1->max_length == 0) goto code_?;
                if (pGVar1->vector[0] != (GizmoLineSlider3DSettings *)0x0) {
                  fVar2 = (pGVar1->vector[0]->fields)._boxHoverEps;
                  uVar3 = 0;
                  pGVar1 = (this->fields)._scSglSliderSettings;
                  if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
                    ppGVar4 = pGVar1->vector;
                    while( true ) {
                      if ((int)pGVar1->max_length <= (int)uVar3) break;
                      if (pGVar1->max_length <= uVar3) goto code_?;
                      if (*ppGVar4 == (GizmoLineSlider3DSettings *)0x0) goto code_?;
                      Sphere::Sphere_set_Radius((Sphere *)*ppGVar4,fVar2,(MethodInfo *)0x0);
                      uVar3 = uVar3 + 1;
                      ppGVar4 = ppGVar4 + 1;
                    }
                    pGVar1 = (settings->fields)._sglSliderSettings;
                    if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
                      if (pGVar1->max_length == 0) goto code_?;
                      if (pGVar1->vector[0] != (GizmoLineSlider3DSettings *)0x0) {
                        UniversalGizmoSettings3D_SetScDragSensitivity
                                  (this,(pGVar1->vector[0]->fields)._scaleSensitivity,
                                   (MethodInfo *)0x0);
                        fVar2 = (settings->fields)._uniformSnapStep;
                        fVar5 = _UNK_?;
                        if (_UNK_? <= fVar2) {
                          fVar5 = fVar2;
                        }
                        (this->fields)._scUniformSnapStep = fVar5;
                        pGVar1 = (settings->fields)._sglSliderSettings;
                        if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
                          if (pGVar1->max_length == 0) goto code_?;
                          if (pGVar1->vector[0] != (GizmoLineSlider3DSettings *)0x0) {
                            fVar2 = (pGVar1->vector[0]->fields)._scaleSnapStep;
                            pGVar1 = (this->fields)._scSglSliderSettings;
                            if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
                              if (pGVar1->max_length == 0) goto code_?;
                              if ((GizmoPlaneSlider3DSettings *)pGVar1->vector[0] !=
                                  (GizmoPlaneSlider3DSettings *)0x0) {
                                GizmoPlaneSlider3DSettings::
                                GizmoPlaneSlider3DSettings_set_OffsetSnapStepRight
                                          ((GizmoPlaneSlider3DSettings *)pGVar1->vector[0],fVar2,
                                           (MethodInfo *)0x0);
                                pGVar1 = (this->fields)._scSglSliderSettings;
                                if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
                                  if (pGVar1->max_length < 4) goto code_?;
                                  if ((GizmoPlaneSlider3DSettings *)pGVar1->vector[3] !=
                                      (GizmoPlaneSlider3DSettings *)0x0) {
                                    GizmoPlaneSlider3DSettings::
                                    GizmoPlaneSlider3DSettings_set_OffsetSnapStepRight
                                              ((GizmoPlaneSlider3DSettings *)pGVar1->vector[3],fVar2
                                               ,(MethodInfo *)0x0);
                                    pGVar6 = (this->fields)._scDblSliderSettings;
                                    if (pGVar6 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
                                      if (pGVar6->max_length == 0) goto code_?;
                                      if (pGVar6->vector[0] != (GizmoPlaneSlider3DSettings *)0x0) {
                                        UniversalGizmoSettings3D_SetScUniformScaleSnapStep
                                                  ((UniversalGizmoSettings3D *)pGVar6->vector[0],
                                                   fVar2,(MethodInfo *)0x0);
                                        pGVar6 = (this->fields)._scDblSliderSettings;
                                        if (pGVar6 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
                                          if (pGVar6->max_length < 3) goto code_?;
                                          if (pGVar6->vector[2] != (GizmoPlaneSlider3DSettings *)0x0
                                             ) {
                                            GizmoPlaneSlider3DSettings::
                                            GizmoPlaneSlider3DSettings_set_ScaleSnapStepUp
                                                      (pGVar6->vector[2],0.0,(MethodInfo *)0x0);
                                            pGVar1 = (settings->fields)._sglSliderSettings;
                                            if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
                                              if (pGVar1->max_length < 2) goto code_?;
                                              if (pGVar1->vector[1] !=
                                                  (GizmoLineSlider3DSettings *)0x0) {
                                                fVar2 = (pGVar1->vector[1]->fields)._scaleSnapStep;
                                                pGVar1 = (this->fields)._scSglSliderSettings;
                                                if (pGVar1 != (GizmoLineSlider3DSettings__Array *)
                                                              0x0) {
                                                  if (pGVar1->max_length < 2) goto code_?;
                                                  if ((GizmoPlaneSlider3DSettings *)
                                                      pGVar1->vector[1] !=
                                                      (GizmoPlaneSlider3DSettings *)0x0) {
                                                    GizmoPlaneSlider3DSettings::
                                                                                                        
                                                  GizmoPlaneSlider3DSettings_set_OffsetSnapStepRight
                                                            ((GizmoPlaneSlider3DSettings *)
                                                             pGVar1->vector[1],fVar2,
                                                             (MethodInfo *)0x0);
                                                  pGVar1 = (this->fields)._scSglSliderSettings;
                                                  if (pGVar1 != (GizmoLineSlider3DSettings__Array *)
                                                                0x0) {
                                                    if (pGVar1->max_length < 5)
                                                    goto code_?;
                                                    if ((GizmoPlaneSlider3DSettings *)
                                                        pGVar1->vector[4] !=
                                                        (GizmoPlaneSlider3DSettings *)0x0) {
                                                      GizmoPlaneSlider3DSettings::
                                                                                                            
                                                  GizmoPlaneSlider3DSettings_set_OffsetSnapStepRight
                                                            ((GizmoPlaneSlider3DSettings *)
                                                             pGVar1->vector[4],fVar2,
                                                             (MethodInfo *)0x0);
                                                  pGVar6 = (this->fields)._scDblSliderSettings;
                                                  if (pGVar6 != (GizmoPlaneSlider3DSettings__Array *
                                                                )0x0) {
                                                    if (pGVar6->max_length == 0)
                                                    goto code_?;
                                                    if (pGVar6->vector[0] !=
                                                        (GizmoPlaneSlider3DSettings *)0x0) {
                                                      GizmoPlaneSlider3DSettings::
                                                      GizmoPlaneSlider3DSettings_set_ScaleSnapStepUp
                                                                (pGVar6->vector[0],fVar2,
                                                                 (MethodInfo *)0x0);
                                                      pGVar6 = (this->fields)._scDblSliderSettings;
                                                      if (pGVar6 != (
                                                  GizmoPlaneSlider3DSettings__Array *)0x0) {
                                                    if (pGVar6->max_length < 2)
                                                    goto code_?;
                                                    if (pGVar6->vector[1] !=
                                                        (GizmoPlaneSlider3DSettings *)0x0) {
                                                                                                            
                                                  UniversalGizmoSettings3D_SetScUniformScaleSnapStep
                                                            ((UniversalGizmoSettings3D *)
                                                             pGVar6->vector[1],fVar2,
                                                             (MethodInfo *)0x0);
                                                  pGVar1 = (settings->fields)._sglSliderSettings;
                                                  if (pGVar1 != (GizmoLineSlider3DSettings__Array *)
                                                                0x0) {
                                                    if (pGVar1->max_length < 3)
                                                    goto code_?;
                                                    if (pGVar1->vector[2] !=
                                                        (GizmoLineSlider3DSettings *)0x0) {
                                                      fVar2 = (pGVar1->vector[2]->fields).
                                                              _scaleSnapStep;
                                                      pGVar1 = (this->fields)._scSglSliderSettings;
                                                      if (pGVar1 != (
                                                  GizmoLineSlider3DSettings__Array *)0x0) {
                                                    if (pGVar1->max_length < 3)
                                                    goto code_?;
                                                    if ((GizmoPlaneSlider3DSettings *)
                                                        pGVar1->vector[2] !=
                                                        (GizmoPlaneSlider3DSettings *)0x0) {
                                                      GizmoPlaneSlider3DSettings::
                                                                                                            
                                                  GizmoPlaneSlider3DSettings_set_OffsetSnapStepRight
                                                            ((GizmoPlaneSlider3DSettings *)
                                                             pGVar1->vector[2],fVar2,
                                                             (MethodInfo *)0x0);
                                                  pGVar1 = (this->fields)._scSglSliderSettings;
                                                  if (pGVar1 != (GizmoLineSlider3DSettings__Array *)
                                                                0x0) {
                                                    if (pGVar1->max_length < 6)
                                                    goto code_?;
                                                    if ((GizmoPlaneSlider3DSettings *)
                                                        pGVar1->vector[5] !=
                                                        (GizmoPlaneSlider3DSettings *)0x0) {
                                                      GizmoPlaneSlider3DSettings::
                                                                                                            
                                                  GizmoPlaneSlider3DSettings_set_OffsetSnapStepRight
                                                            ((GizmoPlaneSlider3DSettings *)
                                                             pGVar1->vector[5],fVar2,
                                                             (MethodInfo *)0x0);
                                                  pGVar6 = (this->fields)._scDblSliderSettings;
                                                  if (pGVar6 != (GizmoPlaneSlider3DSettings__Array *
                                                                )0x0) {
                                                    if (pGVar6->max_length < 2)
                                                    goto code_?;
                                                    if (pGVar6->vector[1] !=
                                                        (GizmoPlaneSlider3DSettings *)0x0) {
                                                      GizmoPlaneSlider3DSettings::
                                                      GizmoPlaneSlider3DSettings_set_ScaleSnapStepUp
                                                                (pGVar6->vector[1],fVar2,
                                                                 (MethodInfo *)0x0);
                                                      pGVar6 = (this->fields)._scDblSliderSettings;
                                                      if (pGVar6 != (
                                                  GizmoPlaneSlider3DSettings__Array *)0x0) {
                                                    if (pGVar6->max_length < 3)
                                                    goto code_?;
                                                    if (pGVar6->vector[2] !=
                                                        (GizmoPlaneSlider3DSettings *)0x0) {
                                                                                                            
                                                  UniversalGizmoSettings3D_SetScUniformScaleSnapStep
                                                            ((UniversalGizmoSettings3D *)
                                                             pGVar6->vector[2],fVar2,
                                                             (MethodInfo *)0x0);
                                                  pGVar6 = (settings->fields)._dblSliderSettings;
                                                  if (pGVar6 != (GizmoPlaneSlider3DSettings__Array *
                                                                )0x0) {
                                                    if (pGVar6->max_length == 0)
                                                    goto code_?;
                                                    if (pGVar6->vector[0] !=
                                                        (GizmoPlaneSlider3DSettings *)0x0) {
                                                      pGVar7 = (this->fields)._scDblSliderSettings;
                                                      if (pGVar7 != (
                                                  GizmoPlaneSlider3DSettings__Array *)0x0) {
                                                    if (pGVar7->max_length == 0)
                                                    goto code_?;
                                                    if (pGVar7->vector[0] !=
                                                        (GizmoPlaneSlider3DSettings *)0x0) {
                                                      GizmoPlaneSlider3DSettings::
                                                                                                            
                                                  GizmoPlaneSlider3DSettings_set_ProportionalScaleSnapStep
                                                            (pGVar7->vector[0],
                                                             (pGVar6->vector[0]->fields).
                                                             _proportionalScaleSnapStep,
                                                             (MethodInfo *)0x0);
                                                  pGVar6 = (settings->fields)._dblSliderSettings;
                                                  if (pGVar6 != (GizmoPlaneSlider3DSettings__Array *
                                                                )0x0) {
                                                    if (pGVar6->max_length < 2)
                                                    goto code_?;
                                                    if (pGVar6->vector[1] !=
                                                        (GizmoPlaneSlider3DSettings *)0x0) {
                                                      pGVar7 = (this->fields)._scDblSliderSettings;
                                                      if (pGVar7 != (
                                                  GizmoPlaneSlider3DSettings__Array *)0x0) {
                                                    if (pGVar7->max_length < 2)
                                                    goto code_?;
                                                    if (pGVar7->vector[1] !=
                                                        (GizmoPlaneSlider3DSettings *)0x0) {
                                                      GizmoPlaneSlider3DSettings::
                                                                                                            
                                                  GizmoPlaneSlider3DSettings_set_ProportionalScaleSnapStep
                                                            (pGVar7->vector[1],
                                                             (pGVar6->vector[1]->fields).
                                                             _proportionalScaleSnapStep,
                                                             (MethodInfo *)0x0);
                                                  pGVar6 = (settings->fields)._dblSliderSettings;
                                                  if (pGVar6 != (GizmoPlaneSlider3DSettings__Array *
                                                                )0x0) {
                                                    if (pGVar6->max_length < 3)
                                                    goto code_?;
                                                    if (pGVar6->vector[2] !=
                                                        (GizmoPlaneSlider3DSettings *)0x0) {
                                                      pGVar7 = (this->fields)._scDblSliderSettings;
                                                      if (pGVar7 != (
                                                  GizmoPlaneSlider3DSettings__Array *)0x0) {
                                                    if (pGVar7->max_length < 3)
                                                    goto code_?;
                                                    if (pGVar7->vector[2] !=
                                                        (GizmoPlaneSlider3DSettings *)0x0) {
                                                      GizmoPlaneSlider3DSettings::
                                                                                                            
                                                  GizmoPlaneSlider3DSettings_set_ProportionalScaleSnapStep
                                                            (pGVar7->vector[2],
                                                             (pGVar6->vector[2]->fields).
                                                             _proportionalScaleSnapStep,
                                                             (MethodInfo *)0x0);
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
  }
code_?:
  func_?();
code_?:
  func_?();
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
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if (*ppGVar3 == (GizmoLineSlider3DSettings *)0x0) goto code_?;
      Sphere::Sphere_set_Radius((Sphere *)*ppGVar3,eps,(MethodInfo *)0x0);
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


/* Void SetMvCylinderSliderHoverEps(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
     UniversalGizmoSettings3D_SetMvCylinderSliderHoverEps
               (UniversalGizmoSettings3D *this,float eps,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSliderSettings;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if ((GizmoPlaneSlider3DSettings *)*ppGVar3 == (GizmoPlaneSlider3DSettings *)0x0)
      goto code_?;
      GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_BorderLineHoverEps
                ((GizmoPlaneSlider3DSettings *)*ppGVar3,eps,(MethodInfo *)0x0);
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


/* Void SetMvDragSensitivity(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
     UniversalGizmoSettings3D_SetMvDragSensitivity
               (UniversalGizmoSettings3D *this,float sensitivity,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSliderSettings;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    for (; (int)uVar2 < (int)pGVar1->max_length; uVar2 = uVar2 + 1) {
      if (pGVar1->max_length <= uVar2) goto code_?;
      if ((UniversalGizmoSettings3D *)*ppGVar3 == (UniversalGizmoSettings3D *)0x0)
      goto code_?;
      UniversalGizmoSettings3D_SetRtCamRightSnapStep
                ((UniversalGizmoSettings3D *)*ppGVar3,sensitivity,(MethodInfo *)0x0);
      ppGVar3 = ppGVar3 + 1;
    }
    uVar2 = 0;
    pGVar4 = (this->fields)._mvDblSliderSettings;
    if (pGVar4 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
      ppGVar5 = pGVar4->vector;
      while( true ) {
        if ((int)pGVar4->max_length <= (int)uVar2) {
          return;
        }
        if (pGVar4->max_length <= uVar2) break;
        if (*ppGVar5 == (GizmoPlaneSlider3DSettings *)0x0) goto code_?;
        GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_OffsetSensitivity
                  (*ppGVar5,sensitivity,(MethodInfo *)0x0);
        uVar2 = uVar2 + 1;
        ppGVar5 = ppGVar5 + 1;
      }
code_?:
      func_?();
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if ((GizmoPlaneSlider3DSettings *)*ppGVar3 == (GizmoPlaneSlider3DSettings *)0x0)
      goto code_?;
      GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_AreaHoverEps
                ((GizmoPlaneSlider3DSettings *)*ppGVar3,eps,(MethodInfo *)0x0);
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


/* Void SetMvXSnapStep(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_SetMvXSnapStep
               (UniversalGizmoSettings3D *this,float snapStep,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSliderSettings;
  if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
    if (pGVar1->max_length == 0) goto code_?;
    if (pGVar1->vector[0] != (GizmoLineSlider3DSettings *)0x0) {
      ObjectKeyRotationSettings::ObjectKeyRotationSettings_set_XRotationStep
                ((ObjectKeyRotationSettings *)pGVar1->vector[0],snapStep,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._mvSglSliderSettings;
      if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
        if (pGVar1->max_length < 4) goto code_?;
        if (pGVar1->vector[3] != (GizmoLineSlider3DSettings *)0x0) {
          ObjectKeyRotationSettings::ObjectKeyRotationSettings_set_XRotationStep
                    ((ObjectKeyRotationSettings *)pGVar1->vector[3],snapStep,(MethodInfo *)0x0);
          pGVar2 = (this->fields)._mvDblSliderSettings;
          if (pGVar2 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
            if (pGVar2->max_length == 0) goto code_?;
            if (pGVar2->vector[0] != (GizmoPlaneSlider3DSettings *)0x0) {
              GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_OffsetSnapStepRight
                        (pGVar2->vector[0],snapStep,(MethodInfo *)0x0);
              pGVar2 = (this->fields)._mvDblSliderSettings;
              if (pGVar2 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
                if (pGVar2->max_length < 3) goto code_?;
                if (pGVar2->vector[2] != (GizmoPlaneSlider3DSettings *)0x0) {
                  UniversalGizmoSettings3D_SetRtCamRightSnapStep
                            ((UniversalGizmoSettings3D *)pGVar2->vector[2],snapStep,
                             (MethodInfo *)0x0);
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
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetMvYSnapStep(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_SetMvYSnapStep
               (UniversalGizmoSettings3D *this,float snapStep,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSliderSettings;
  if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
    if (pGVar1->max_length < 2) goto code_?;
    if (pGVar1->vector[1] != (GizmoLineSlider3DSettings *)0x0) {
      ObjectKeyRotationSettings::ObjectKeyRotationSettings_set_XRotationStep
                ((ObjectKeyRotationSettings *)pGVar1->vector[1],snapStep,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._mvSglSliderSettings;
      if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
        if (pGVar1->max_length < 5) goto code_?;
        if (pGVar1->vector[4] != (GizmoLineSlider3DSettings *)0x0) {
          ObjectKeyRotationSettings::ObjectKeyRotationSettings_set_XRotationStep
                    ((ObjectKeyRotationSettings *)pGVar1->vector[4],snapStep,(MethodInfo *)0x0);
          pGVar2 = (this->fields)._mvDblSliderSettings;
          if (pGVar2 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
            if (pGVar2->max_length == 0) goto code_?;
            if (pGVar2->vector[0] != (GizmoPlaneSlider3DSettings *)0x0) {
              UniversalGizmoSettings3D_SetRtCamRightSnapStep
                        ((UniversalGizmoSettings3D *)pGVar2->vector[0],snapStep,(MethodInfo *)0x0);
              pGVar2 = (this->fields)._mvDblSliderSettings;
              if (pGVar2 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
                if (pGVar2->max_length < 2) goto code_?;
                if (pGVar2->vector[1] != (GizmoPlaneSlider3DSettings *)0x0) {
                  GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_OffsetSnapStepRight
                            (pGVar2->vector[1],snapStep,(MethodInfo *)0x0);
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
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetMvZSnapStep(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_SetMvZSnapStep
               (UniversalGizmoSettings3D *this,float snapStep,MethodInfo *method)

{
  pGVar1 = (this->fields)._mvSglSliderSettings;
  if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
    if (pGVar1->max_length < 3) goto code_?;
    if (pGVar1->vector[2] != (GizmoLineSlider3DSettings *)0x0) {
      ObjectKeyRotationSettings::ObjectKeyRotationSettings_set_XRotationStep
                ((ObjectKeyRotationSettings *)pGVar1->vector[2],snapStep,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._mvSglSliderSettings;
      if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
        if (pGVar1->max_length < 6) goto code_?;
        if (pGVar1->vector[5] != (GizmoLineSlider3DSettings *)0x0) {
          ObjectKeyRotationSettings::ObjectKeyRotationSettings_set_XRotationStep
                    ((ObjectKeyRotationSettings *)pGVar1->vector[5],snapStep,(MethodInfo *)0x0);
          pGVar2 = (this->fields)._mvDblSliderSettings;
          if (pGVar2 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
            if (pGVar2->max_length < 2) goto code_?;
            if (pGVar2->vector[1] != (GizmoPlaneSlider3DSettings *)0x0) {
              UniversalGizmoSettings3D_SetRtCamRightSnapStep
                        ((UniversalGizmoSettings3D *)pGVar2->vector[1],snapStep,(MethodInfo *)0x0);
              pGVar2 = (this->fields)._mvDblSliderSettings;
              if (pGVar2 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
                if (pGVar2->max_length < 3) goto code_?;
                if (pGVar2->vector[2] != (GizmoPlaneSlider3DSettings *)0x0) {
                  GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_OffsetSnapStepRight
                            (pGVar2->vector[2],snapStep,(MethodInfo *)0x0);
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
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if (*ppGVar3 == (GizmoPlaneSlider3DSettings *)0x0) goto code_?;
      GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_BorderLineHoverEps
                (*ppGVar3,eps,(MethodInfo *)0x0);
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


/* Void SetRtAxisSnapStep(Int32, Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_SetRtAxisSnapStep
               (UniversalGizmoSettings3D *this,int32_t axisIndex,float snapStep,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtSliderSettings;
  if (pGVar1 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
    if (pGVar1->max_length <= (uint)axisIndex) {
      func_?();
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (pGVar1->vector[axisIndex] != (GizmoPlaneSlider3DSettings *)0x0) {
      UniversalGizmoSettings3D_SetRtCamUpSnapStep
                ((UniversalGizmoSettings3D *)pGVar1->vector[axisIndex],snapStep,(MethodInfo *)0x0);
      return;
    }
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
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
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if (*ppGVar3 == (GizmoPlaneSlider3DSettings *)0x0) goto code_?;
      CameraMoveSettings::CameraMoveSettings_set_AccelerationRate
                ((CameraMoveSettings *)*ppGVar3,eps,(MethodInfo *)0x0);
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


/* Void SetRtCamLookLineHoverEps(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
     UniversalGizmoSettings3D_SetRtCamLookLineHoverEps
               (UniversalGizmoSettings3D *this,float eps,MethodInfo *method)

{
  this_00 = (this->fields)._rtCamLookSliderSettings;
  if (this_00 != (GizmoPlaneSlider2DSettings *)0x0) {
    Sphere::Sphere_set_Radius((Sphere *)this_00,eps,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetRtCamLookSnapStep(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
     UniversalGizmoSettings3D_SetRtCamLookSnapStep
               (UniversalGizmoSettings3D *this,float snapStep,MethodInfo *method)

{
  this_00 = (this->fields)._rtCamLookSliderSettings;
  if (this_00 != (GizmoPlaneSlider2DSettings *)0x0) {
    ObjectKeyRotationSettings::ObjectKeyRotationSettings_set_ZRotationStep
              ((ObjectKeyRotationSettings *)this_00,snapStep,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetRtCamLookThickHoverEps(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
     UniversalGizmoSettings3D_SetRtCamLookThickHoverEps
               (UniversalGizmoSettings3D *this,float eps,MethodInfo *method)

{
  this_00 = (GizmoPlaneSlider3DSettings *)(this->fields)._rtCamLookSliderSettings;
  if (this_00 != (GizmoPlaneSlider3DSettings *)0x0) {
    GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_BorderLineHoverEps
              (this_00,eps,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
  uVar1 = 0;
  pGVar2 = (this->fields)._rtSliderSettings;
  if (pGVar2 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar1) {
        return;
      }
      if (pGVar2->max_length <= uVar1) break;
      pGVar4 = *ppGVar3;
      if (pGVar4 == (GizmoPlaneSlider3DSettings *)0x0) goto code_?;
      uVar1 = uVar1 + 1;
      ppGVar3 = ppGVar3 + 1;
      (pGVar4->fields)._isCircleHoverCullEnabled = canHover ^ 1;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetRtDragSensitivity(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
     UniversalGizmoSettings3D_SetRtDragSensitivity
               (UniversalGizmoSettings3D *this,float sensitivity,MethodInfo *method)

{
  pGVar1 = (this->fields)._rtSliderSettings;
  uVar2 = 0;
  if (pGVar1 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    for (; (int)uVar2 < (int)pGVar1->max_length; uVar2 = uVar2 + 1) {
      if (pGVar1->max_length <= uVar2) goto code_?;
      if (*ppGVar3 == (GizmoPlaneSlider3DSettings *)0x0) goto code_?;
      GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_RotationSensitivity
                (*ppGVar3,sensitivity,(MethodInfo *)0x0);
      ppGVar3 = ppGVar3 + 1;
    }
    this_00 = (GizmoPlaneSlider3DSettings *)(this->fields)._rtCamLookSliderSettings;
    if (this_00 != (GizmoPlaneSlider3DSettings *)0x0) {
      GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_ScaleSnapStepUp
                (this_00,sensitivity,(MethodInfo *)0x0);
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


/* Void SetRtSnapMode(GizmoSnapMode) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_SetRtSnapMode
               (UniversalGizmoSettings3D *this,GizmoSnapMode__Enum snapMode,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._rtSliderSettings;
  if (pGVar2 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    for (; (int)uVar1 < (int)pGVar2->max_length; uVar1 = uVar1 + 1) {
      if (pGVar2->max_length <= uVar1) goto code_?;
      if (*ppGVar3 == (GizmoPlaneSlider3DSettings *)0x0) goto code_?;
      ((*ppGVar3)->fields)._rotationSnapMode = snapMode;
      ppGVar3 = ppGVar3 + 1;
    }
    pGVar4 = (this->fields)._rtCamLookSliderSettings;
    if (pGVar4 != (GizmoPlaneSlider2DSettings *)0x0) {
      (pGVar4->fields)._rotationSnapMode = snapMode;
      return;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if (*ppGVar3 == (GizmoLineSlider3DSettings *)0x0) goto code_?;
      Sphere::Sphere_set_Radius((Sphere *)*ppGVar3,eps,(MethodInfo *)0x0);
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


/* Void SetScCylinderSliderHoverEps(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
     UniversalGizmoSettings3D_SetScCylinderSliderHoverEps
               (UniversalGizmoSettings3D *this,float eps,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSliderSettings;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if ((GizmoPlaneSlider3DSettings *)*ppGVar3 == (GizmoPlaneSlider3DSettings *)0x0)
      goto code_?;
      GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_BorderLineHoverEps
                ((GizmoPlaneSlider3DSettings *)*ppGVar3,eps,(MethodInfo *)0x0);
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


/* Void SetScDragSensitivity(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
     UniversalGizmoSettings3D_SetScDragSensitivity
               (UniversalGizmoSettings3D *this,float sensitivity,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSliderSettings;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if (*ppGVar3 == (GizmoLineSlider3DSettings *)0x0) goto code_?;
      GizmoLineSlider3DSettings::GizmoLineSlider3DSettings_set_ScaleSensitivity
                (*ppGVar3,sensitivity,(MethodInfo *)0x0);
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


/* Void SetScLineSliderHoverEps(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
     UniversalGizmoSettings3D_SetScLineSliderHoverEps
               (UniversalGizmoSettings3D *this,float eps,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSliderSettings;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if ((GizmoPlaneSlider3DSettings *)*ppGVar3 == (GizmoPlaneSlider3DSettings *)0x0)
      goto code_?;
      GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_AreaHoverEps
                ((GizmoPlaneSlider3DSettings *)*ppGVar3,eps,(MethodInfo *)0x0);
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
  pGVar1 = (this->fields)._scSglSliderSettings;
  if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
    if (pGVar1->max_length == 0) goto code_?;
    if ((GizmoPlaneSlider3DSettings *)pGVar1->vector[0] != (GizmoPlaneSlider3DSettings *)0x0) {
      GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_OffsetSnapStepRight
                ((GizmoPlaneSlider3DSettings *)pGVar1->vector[0],snapStep,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._scSglSliderSettings;
      if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
        if (pGVar1->max_length < 4) goto code_?;
        if ((GizmoPlaneSlider3DSettings *)pGVar1->vector[3] != (GizmoPlaneSlider3DSettings *)0x0) {
          GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_OffsetSnapStepRight
                    ((GizmoPlaneSlider3DSettings *)pGVar1->vector[3],snapStep,(MethodInfo *)0x0);
          pGVar2 = (this->fields)._scDblSliderSettings;
          if (pGVar2 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
            if (pGVar2->max_length == 0) goto code_?;
            if (pGVar2->vector[0] != (GizmoPlaneSlider3DSettings *)0x0) {
              UniversalGizmoSettings3D_SetScUniformScaleSnapStep
                        ((UniversalGizmoSettings3D *)pGVar2->vector[0],snapStep,(MethodInfo *)0x0);
              pGVar2 = (this->fields)._scDblSliderSettings;
              if (pGVar2 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
                if (pGVar2->max_length < 3) goto code_?;
                if (pGVar2->vector[2] != (GizmoPlaneSlider3DSettings *)0x0) {
                  GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_ScaleSnapStepUp
                            (pGVar2->vector[2],snapStep,(MethodInfo *)0x0);
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
    if (pGVar1->max_length == 0) {
      func_?();
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (pGVar1->vector[0] != (GizmoPlaneSlider3DSettings *)0x0) {
      GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_ProportionalScaleSnapStep
                (pGVar1->vector[0],snapStep,(MethodInfo *)0x0);
      return;
    }
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetScYSnapStep(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_SetScYSnapStep
               (UniversalGizmoSettings3D *this,float snapStep,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSliderSettings;
  if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
    if (pGVar1->max_length < 2) goto code_?;
    if ((GizmoPlaneSlider3DSettings *)pGVar1->vector[1] != (GizmoPlaneSlider3DSettings *)0x0) {
      GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_OffsetSnapStepRight
                ((GizmoPlaneSlider3DSettings *)pGVar1->vector[1],snapStep,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._scSglSliderSettings;
      if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
        if (pGVar1->max_length < 5) goto code_?;
        if ((GizmoPlaneSlider3DSettings *)pGVar1->vector[4] != (GizmoPlaneSlider3DSettings *)0x0) {
          GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_OffsetSnapStepRight
                    ((GizmoPlaneSlider3DSettings *)pGVar1->vector[4],snapStep,(MethodInfo *)0x0);
          pGVar2 = (this->fields)._scDblSliderSettings;
          if (pGVar2 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
            if (pGVar2->max_length == 0) goto code_?;
            if (pGVar2->vector[0] != (GizmoPlaneSlider3DSettings *)0x0) {
              GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_ScaleSnapStepUp
                        (pGVar2->vector[0],snapStep,(MethodInfo *)0x0);
              pGVar2 = (this->fields)._scDblSliderSettings;
              if (pGVar2 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
                if (pGVar2->max_length < 2) goto code_?;
                if (pGVar2->vector[1] != (GizmoPlaneSlider3DSettings *)0x0) {
                  UniversalGizmoSettings3D_SetScUniformScaleSnapStep
                            ((UniversalGizmoSettings3D *)pGVar2->vector[1],snapStep,
                             (MethodInfo *)0x0);
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
    if (pGVar1->max_length < 2) {
      func_?();
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (pGVar1->vector[1] != (GizmoPlaneSlider3DSettings *)0x0) {
      GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_ProportionalScaleSnapStep
                (pGVar1->vector[1],snapStep,(MethodInfo *)0x0);
      return;
    }
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetScZSnapStep(Single) */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_SetScZSnapStep
               (UniversalGizmoSettings3D *this,float snapStep,MethodInfo *method)

{
  pGVar1 = (this->fields)._scSglSliderSettings;
  if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
    if (pGVar1->max_length < 3) goto code_?;
    if ((GizmoPlaneSlider3DSettings *)pGVar1->vector[2] != (GizmoPlaneSlider3DSettings *)0x0) {
      GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_OffsetSnapStepRight
                ((GizmoPlaneSlider3DSettings *)pGVar1->vector[2],snapStep,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._scSglSliderSettings;
      if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
        if (pGVar1->max_length < 6) goto code_?;
        if ((GizmoPlaneSlider3DSettings *)pGVar1->vector[5] != (GizmoPlaneSlider3DSettings *)0x0) {
          GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_OffsetSnapStepRight
                    ((GizmoPlaneSlider3DSettings *)pGVar1->vector[5],snapStep,(MethodInfo *)0x0);
          pGVar2 = (this->fields)._scDblSliderSettings;
          if (pGVar2 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
            if (pGVar2->max_length < 2) goto code_?;
            if (pGVar2->vector[1] != (GizmoPlaneSlider3DSettings *)0x0) {
              GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_ScaleSnapStepUp
                        (pGVar2->vector[1],snapStep,(MethodInfo *)0x0);
              pGVar2 = (this->fields)._scDblSliderSettings;
              if (pGVar2 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
                if (pGVar2->max_length < 3) goto code_?;
                if (pGVar2->vector[2] != (GizmoPlaneSlider3DSettings *)0x0) {
                  UniversalGizmoSettings3D_SetScUniformScaleSnapStep
                            ((UniversalGizmoSettings3D *)pGVar2->vector[2],snapStep,
                             (MethodInfo *)0x0);
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
    if (pGVar1->max_length < 3) {
      func_?();
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (pGVar1->vector[2] != (GizmoPlaneSlider3DSettings *)0x0) {
      GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_ProportionalScaleSnapStep
                (pGVar1->vector[2],snapStep,(MethodInfo *)0x0);
      return;
    }
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* UniversalGizmoSettings3D() */

void Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D__ctor
               (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoLineSlider3DSettings);
    func_?(&TypeInfo__RTG__GizmoLineSlider3DSettings);
    func_?(&TypeInfo__RTG__GizmoObjectVertexSnapSettings);
    func_?(&TypeInfo__RTG__GizmoPlaneSlider2DSettings);
    func_?(&TypeInfo__RTG__GizmoPlaneSlider3DSettings);
    func_?(&TypeInfo__RTG__GizmoPlaneSlider3DSettings);
    cRam_? = '\x01';
  }
  this_00 = (GizmoObjectVertexSnapSettings *)
            func_?(TypeInfo__RTG__GizmoObjectVertexSnapSettings);
  GizmoObjectVertexSnapSettings::GizmoObjectVertexSnapSettings__ctor(this_00,(MethodInfo *)0x0);
  ppGVar1 = &(this->fields)._mvVertexSnapSettings;
  *ppGVar1 = this_00;
  func_?(ppGVar1,this_00);
  pGVar2 = (GizmoLineSlider3DSettings__Array *)
           func_?(TypeInfo__RTG__GizmoLineSlider3DSettings,6);
  ppGVar3 = &(this->fields)._mvSglSliderSettings;
  *ppGVar3 = pGVar2;
  func_?(ppGVar3,pGVar2);
  pGVar4 = (GizmoPlaneSlider3DSettings__Array *)
           func_?(TypeInfo__RTG__GizmoPlaneSlider3DSettings,3);
  ppGVar5 = &(this->fields)._mvDblSliderSettings;
  *ppGVar5 = pGVar4;
  func_?(ppGVar5,pGVar4);
  (this->fields)._rtCamRightSnapStep = 15.0;
  (this->fields)._rtCamUpSnapStep = 15.0;
  pGVar4 = (GizmoPlaneSlider3DSettings__Array *)
           func_?(TypeInfo__RTG__GizmoPlaneSlider3DSettings,3);
  pGVar6 = (GizmoPlaneSlider3DSettings *)&(this->fields)._rtSliderSettings;
  *(GizmoPlaneSlider3DSettings__Array **)pGVar6 = pGVar4;
  func_?(pGVar6,pGVar4);
  this_01 = (GizmoPlaneSlider2DSettings *)func_?(TypeInfo__RTG__GizmoPlaneSlider2DSettings)
  ;
  GizmoPlaneSlider2DSettings::GizmoPlaneSlider2DSettings__ctor(this_01,(MethodInfo *)0x0);
  ppGVar7 = &(this->fields)._rtCamLookSliderSettings;
  *ppGVar7 = this_01;
  func_?(ppGVar7,this_01);
  (this->fields)._scUniformSnapStep = 0.1;
  pGVar2 = (GizmoLineSlider3DSettings__Array *)
           func_?(TypeInfo__RTG__GizmoLineSlider3DSettings,6);
  ppGVar3 = &(this->fields)._scSglSliderSettings;
  *ppGVar3 = pGVar2;
  func_?(ppGVar3,pGVar2);
  pGVar4 = (GizmoPlaneSlider3DSettings__Array *)
           func_?(TypeInfo__RTG__GizmoPlaneSlider3DSettings,3);
  ppGVar8 = &(this->fields)._scDblSliderSettings;
  *ppGVar8 = pGVar4;
  func_?(ppGVar8,pGVar4);
  Settings::Settings__ctor((Settings *)this,(MethodInfo *)0x0);
  uVar9 = 0;
  pGVar2 = (this->fields)._mvSglSliderSettings;
  while (pGVar2 != (GizmoLineSlider3DSettings__Array *)0x0) {
    ppGStack_10 = &(this->fields)._mvSglSliderSettings;
    if ((int)pGVar2->max_length <= (int)uVar9) {
      uVar9 = 0;
      pGVar4 = *ppGVar5;
      if (pGVar4 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
        iVar11 = 0x10;
        goto code_?;
      }
      break;
    }
    pGVar2 = (this->fields)._mvSglSliderSettings;
    pGVar6 = (GizmoPlaneSlider3DSettings *)func_?(TypeInfo__RTG__GizmoLineSlider3DSettings)
    ;
    GizmoLineSlider3DSettings::GizmoLineSlider3DSettings__ctor
              ((GizmoLineSlider3DSettings *)pGVar6,(MethodInfo *)0x0);
    if (pGVar2 == (GizmoLineSlider3DSettings__Array *)0x0) break;
    if ((pGVar6 != (GizmoPlaneSlider3DSettings *)0x0) &&
       (iVar11 = func_?(pGVar6,(pGVar2->klass->_0).element_class), iVar11 == 0))
    goto code_?;
    if (pGVar2->max_length <= uVar9) goto code_?;
    pGVar2->vector[uVar9] = (GizmoLineSlider3DSettings *)pGVar6;
    ppGVar7 = (GizmoPlaneSlider2DSettings **)&UNK_?;
    func_?(pGVar2->vector + uVar9);
    uVar9 = uVar9 + 1;
    pGVar2 = *ppGStack_10;
  }
  goto code_?;
  while( true ) {
    pGVar4 = *ppGVar5;
    pGVar6 = (GizmoPlaneSlider3DSettings *)
             func_?(TypeInfo__RTG__GizmoPlaneSlider3DSettings);
    GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings__ctor(pGVar6,(MethodInfo *)0x0);
    if (pGVar4 == (GizmoPlaneSlider3DSettings__Array *)0x0) break;
    if ((pGVar6 != (GizmoPlaneSlider3DSettings *)0x0) &&
       (iVar12 = func_?(pGVar6,(pGVar4->klass->_0).element_class), iVar12 == 0))
    goto code_?;
    if (pGVar4->max_length <= uVar9) goto code_?;
    *(GizmoPlaneSlider3DSettings **)((int)pGVar4->vector + iVar11 + -0x10) = pGVar6;
    ppGVar7 = (GizmoPlaneSlider2DSettings **)&UNK_?;
    func_?((int)pGVar4->vector + iVar11 + -0x10);
    pGVar4 = *ppGVar5;
    if (pGVar4 == (GizmoPlaneSlider3DSettings__Array *)0x0) break;
    if (pGVar4->max_length <= uVar9) goto code_?;
    pGVar13 = *(GizmoPlaneSlider3DSettings **)((int)pGVar4->vector + iVar11 + -0x10);
    if (pGVar13 == (GizmoPlaneSlider3DSettings *)0x0) break;
    GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_AreaHoverEps
              (pGVar13,0.0,(MethodInfo *)0x0);
    pGVar4 = *ppGVar5;
    if (pGVar4 == (GizmoPlaneSlider3DSettings__Array *)0x0) break;
    if (pGVar4->max_length <= uVar9) goto code_?;
    pGVar13 = *(GizmoPlaneSlider3DSettings **)((int)pGVar4->vector + iVar11 + -0x10);
    if (pGVar13 == (GizmoPlaneSlider3DSettings *)0x0) break;
    GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_BorderLineHoverEps
              (pGVar13,0.0,(MethodInfo *)0x0);
    pGVar4 = *ppGVar5;
    if (pGVar4 == (GizmoPlaneSlider3DSettings__Array *)0x0) break;
    if (pGVar4->max_length <= uVar9) goto code_?;
    pGVar13 = *(GizmoPlaneSlider3DSettings **)((int)pGVar4->vector + iVar11 + -0x10);
    if (pGVar13 == (GizmoPlaneSlider3DSettings *)0x0) break;
    GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_BorderBoxHoverEps
              (pGVar13,0.0,(MethodInfo *)0x0);
    pGVar4 = *ppGVar5;
    uVar9 = uVar9 + 1;
    iVar11 = iVar11 + 4;
    if (pGVar4 == (GizmoPlaneSlider3DSettings__Array *)0x0) break;
code_?:
    if ((int)pGVar4->max_length <= (int)uVar9) {
      pcVar14 = (char *)0x0;
      pGVar15 = (GizmoLineSlider3DSettings__Class *)pGVar6->klass;
      if (pGVar15 != (GizmoLineSlider3DSettings__Class *)0x0) goto code_?;
      break;
    }
  }
  goto code_?;
  while( true ) {
    pGVar15 = (GizmoLineSlider3DSettings__Class *)pGVar6->klass;
    pGVar6 = (GizmoPlaneSlider3DSettings *)
             func_?(TypeInfo__RTG__GizmoPlaneSlider3DSettings);
    GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings__ctor(pGVar6,(MethodInfo *)0x0);
    if (pGVar15 == (GizmoLineSlider3DSettings__Class *)0x0) break;
    if ((pGVar6 != (GizmoPlaneSlider3DSettings *)0x0) &&
       (iVar11 = func_?(pGVar6,((pGVar15->_0).image)->codeGenModule), iVar11 == 0))
    goto code_?;
    if ((pGVar15->_0).namespaze <= pcVar14) goto code_?;
    (&(pGVar15->_0).image)[(int)(pcVar14 + 4)] = (Il2CppImage *)pGVar6;
    ppGVar7 = (GizmoPlaneSlider2DSettings **)&UNK_?;
    func_?(&(pGVar15->_0).image + (int)(pcVar14 + 4));
    pcVar14 = pcVar14 + 1;
    pGVar15 = (GizmoLineSlider3DSettings__Class *)pGVar6->klass;
    if (pGVar15 == (GizmoLineSlider3DSettings__Class *)0x0) break;
code_?:
    if ((int)(pGVar15->_0).namespaze <= (int)pcVar14) {
      if (*ppGVar7 != (GizmoPlaneSlider2DSettings *)0x0) {
        ppGVar16 = (GizmoLineSlider3DSettings **)0x40e00000;
        Sphere::Sphere_set_Radius((Sphere *)*ppGVar7,7.0,(MethodInfo *)0x0);
        pGVar15 = (GizmoLineSlider3DSettings__Class *)pGVar6->klass;
        pcVar14 = (char *)0x0;
        if (pGVar15 != (GizmoLineSlider3DSettings__Class *)0x0) {
          pIVar17 = &(pGVar15->_0).byval_arg;
          goto code_?;
        }
      }
      break;
    }
  }
  goto code_?;
code_?:
  if ((int)(pGVar15->_0).namespaze <= (int)pcVar14) goto code_?;
  if ((pGVar15->_0).namespaze <= pcVar14) goto code_?;
  if ((pIVar17->data).__klassIndex == 0) goto code_?;
  pcVar14 = pcVar14 + 1;
  *(undefined1 *)((pIVar17->data).__klassIndex + 0x1c) = 1;
  pIVar17 = (Il2CppType *)&pIVar17->attrs;
  goto code_?;
code_?:
  pGVar15 = (GizmoLineSlider3DSettings__Class *)pGVar6->klass;
  pcVar14 = (char *)0x0;
  if (pGVar15 != (GizmoLineSlider3DSettings__Class *)0x0) {
    pIVar17 = &(pGVar15->_0).byval_arg;
    for (; (int)pcVar14 < (int)(pGVar15->_0).namespaze; pcVar14 = pcVar14 + 1) {
      if ((pGVar15->_0).namespaze <= pcVar14) goto code_?;
      if ((CameraMoveSettings *)(pIVar17->data).typeHandle == (CameraMoveSettings *)0x0)
      goto code_?;
      ppGVar16 = (GizmoLineSlider3DSettings **)0x3ecccccd;
      CameraMoveSettings::CameraMoveSettings_set_AccelerationRate
                ((CameraMoveSettings *)(pIVar17->data).typeHandle,0.4,(MethodInfo *)0x0);
      pIVar17 = (Il2CppType *)&pIVar17->attrs;
    }
    uVar9 = 0;
    pGVar2 = *ppGVar3;
    while (pGVar2 != (GizmoLineSlider3DSettings__Array *)0x0) {
      if ((int)pGVar2->max_length <= (int)uVar9) {
        fVar18 = 0.0;
        pGVar19 = *ppGVar16;
        if (pGVar19 != (GizmoLineSlider3DSettings *)0x0) {
          iVar11 = 0x10;
          goto code_?;
        }
        break;
      }
      pGVar2 = *ppGVar3;
      pGVar19 = (GizmoLineSlider3DSettings *)
                func_?(TypeInfo__RTG__GizmoLineSlider3DSettings);
      GizmoLineSlider3DSettings::GizmoLineSlider3DSettings__ctor(pGVar19,(MethodInfo *)0x0);
      if (pGVar2 == (GizmoLineSlider3DSettings__Array *)0x0) break;
      if ((pGVar19 != (GizmoLineSlider3DSettings *)0x0) &&
         (iVar11 = func_?(pGVar19,(pGVar2->klass->_0).element_class), iVar11 == 0))
      goto code_?;
      if (pGVar2->max_length <= uVar9) goto code_?;
      pGVar2->vector[uVar9] = pGVar19;
      ppGVar16 = pGVar2->vector + uVar9;
      func_?(ppGVar16,pGVar19);
      uVar9 = uVar9 + 1;
      pGVar2 = *ppGVar3;
    }
  }
  goto code_?;
code_?:
  if ((int)pGVar2->max_length <= (int)uVar9) {
    return;
  }
  if (pGVar2->max_length <= uVar9) goto code_?;
  if (*ppGVar16 == (GizmoLineSlider3DSettings *)0x0) goto code_?;
  GizmoLineSlider3DSettings::GizmoLineSlider3DSettings_set_ScaleSensitivity
            (*ppGVar16,0.6,(MethodInfo *)0x0);
  uVar9 = uVar9 + 1;
  ppGVar16 = ppGVar16 + 1;
  goto code_?;
  while( true ) {
    pGVar19 = *ppGVar16;
    pGVar6 = (GizmoPlaneSlider3DSettings *)
             func_?(TypeInfo__RTG__GizmoPlaneSlider3DSettings);
    GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings__ctor(pGVar6,(MethodInfo *)0x0);
    if (pGVar19 == (GizmoLineSlider3DSettings *)0x0) break;
    pIVar20 = (Il2CppClass *)0x0;
    if (pGVar6 != (GizmoPlaneSlider3DSettings *)0x0) {
      pIVar20 = (pGVar19->klass->_0).element_class;
      iVar12 = func_?(pGVar6);
      if (iVar12 == 0) goto code_?;
    }
    if ((uint)(pGVar19->fields)._boxHoverEps <= (uint)fVar18) goto code_?;
    ppGVar16 = (GizmoLineSlider3DSettings **)((int)&pGVar19->klass + iVar11);
    *(Il2CppClass **)((int)&pGVar19->klass + iVar11) = pIVar20;
    func_?(ppGVar16,pIVar20);
    pGVar19 = *ppGVar16;
    if (pGVar19 == (GizmoLineSlider3DSettings *)0x0) break;
    if ((uint)(pGVar19->fields)._boxHoverEps <= (uint)fVar18) goto code_?;
    iVar12 = *(int *)((int)&pGVar19->klass + iVar11);
    if (iVar12 == 0) break;
    *(undefined4 *)(iVar12 + 0x30) = 1;
    pGVar19 = *ppGVar16;
    if (pGVar19 == (GizmoLineSlider3DSettings *)0x0) break;
    if ((uint)(pGVar19->fields)._boxHoverEps <= (uint)fVar18) goto code_?;
    pGVar6 = *(GizmoPlaneSlider3DSettings **)((int)&pGVar19->klass + iVar11);
    if (pGVar6 == (GizmoPlaneSlider3DSettings *)0x0) break;
    GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_AreaHoverEps
              (pGVar6,0.0,(MethodInfo *)0x0);
    pGVar19 = *ppGVar16;
    if (pGVar19 == (GizmoLineSlider3DSettings *)0x0) break;
    if ((uint)(pGVar19->fields)._boxHoverEps <= (uint)fVar18) goto code_?;
    pGVar6 = *(GizmoPlaneSlider3DSettings **)((int)&pGVar19->klass + iVar11);
    if (pGVar6 == (GizmoPlaneSlider3DSettings *)0x0) break;
    GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_BorderLineHoverEps
              (pGVar6,0.0,(MethodInfo *)0x0);
    pGVar19 = *ppGVar16;
    if (pGVar19 == (GizmoLineSlider3DSettings *)0x0) break;
    if ((uint)(pGVar19->fields)._boxHoverEps <= (uint)fVar18) goto code_?;
    pGVar6 = *(GizmoPlaneSlider3DSettings **)((int)&pGVar19->klass + iVar11);
    if (pGVar6 == (GizmoPlaneSlider3DSettings *)0x0) break;
    GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_BorderBoxHoverEps
              (pGVar6,0.0,(MethodInfo *)0x0);
    pGVar19 = *ppGVar16;
    fVar18 = (float)((int)fVar18 + 1);
    iVar11 = iVar11 + 4;
    if (pGVar19 == (GizmoLineSlider3DSettings *)0x0) break;
code_?:
    if ((int)(pGVar19->fields)._boxHoverEps <= (int)fVar18) {
      uVar9 = 0;
      pGVar2 = *ppGVar3;
      if (pGVar2 != (GizmoLineSlider3DSettings__Array *)0x0) {
        ppGVar16 = pGVar2->vector;
        goto code_?;
      }
      break;
    }
  }
code_?:
  func_?();
code_?:
  uVar21 = func_?(0);
  func_?(uVar21);
code_?:
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Single get_MvBoxSliderHoverEps() */

float Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
      UniversalGizmoSettings3D_get_MvBoxSliderHoverEps
                (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSliderSettings;
  if (pGVar2 != (GizmoLineSlider3DSettings__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if (pGVar2->vector[0] != (GizmoLineSlider3DSettings *)0x0) {
      return (pGVar2->vector[0]->fields)._boxHoverEps;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_MvCylinderSliderHoverEps() */

float Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
      UniversalGizmoSettings3D_get_MvCylinderSliderHoverEps
                (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSliderSettings;
  if (pGVar2 != (GizmoLineSlider3DSettings__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if (pGVar2->vector[0] != (GizmoLineSlider3DSettings *)0x0) {
      return (pGVar2->vector[0]->fields)._cylinderHoverEps;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_MvDragSensitivity() */

float Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
      UniversalGizmoSettings3D_get_MvDragSensitivity
                (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSliderSettings;
  if (pGVar2 != (GizmoLineSlider3DSettings__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if (pGVar2->vector[0] != (GizmoLineSlider3DSettings *)0x0) {
      return (pGVar2->vector[0]->fields)._offsetSensitivity;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_MvLineSliderHoverEps() */

float Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
      UniversalGizmoSettings3D_get_MvLineSliderHoverEps
                (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSliderSettings;
  if (pGVar2 != (GizmoLineSlider3DSettings__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if (pGVar2->vector[0] != (GizmoLineSlider3DSettings *)0x0) {
      return (pGVar2->vector[0]->fields)._lineHoverEps;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_MvXSnapStep() */

float Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_get_MvXSnapStep
                (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSliderSettings;
  if (pGVar2 != (GizmoLineSlider3DSettings__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if (pGVar2->vector[0] != (GizmoLineSlider3DSettings *)0x0) {
      return (pGVar2->vector[0]->fields)._offsetSnapStep;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_MvYSnapStep() */

float Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_get_MvYSnapStep
                (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSliderSettings;
  if (pGVar2 != (GizmoLineSlider3DSettings__Array *)0x0) {
    if (pGVar2->max_length < 2) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if (pGVar2->vector[1] != (GizmoLineSlider3DSettings *)0x0) {
      return (pGVar2->vector[1]->fields)._offsetSnapStep;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_MvZSnapStep() */

float Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_get_MvZSnapStep
                (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._mvSglSliderSettings;
  if (pGVar2 != (GizmoLineSlider3DSettings__Array *)0x0) {
    if (pGVar2->max_length < 3) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if (pGVar2->vector[2] != (GizmoLineSlider3DSettings *)0x0) {
      return (pGVar2->vector[2]->fields)._offsetSnapStep;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_RtAxisLineHoverEps() */

float Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
      UniversalGizmoSettings3D_get_RtAxisLineHoverEps
                (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._rtSliderSettings;
  if (pGVar2 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if (pGVar2->vector[0] != (GizmoPlaneSlider3DSettings *)0x0) {
      return (pGVar2->vector[0]->fields)._borderLineHoverEps;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_RtAxisTorusHoverEps() */

float Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
      UniversalGizmoSettings3D_get_RtAxisTorusHoverEps
                (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._rtSliderSettings;
  if (pGVar2 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if (pGVar2->vector[0] != (GizmoPlaneSlider3DSettings *)0x0) {
      return (pGVar2->vector[0]->fields)._borderTorusHoverEps;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_RtCamLookLineHoverEps() */

float Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
      UniversalGizmoSettings3D_get_RtCamLookLineHoverEps
                (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._rtCamLookSliderSettings;
  if (pGVar2 != (GizmoPlaneSlider2DSettings *)0x0) {
    return (pGVar2->fields)._borderLineHoverEps;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Single get_RtCamLookSnapStep() */

float Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
      UniversalGizmoSettings3D_get_RtCamLookSnapStep
                (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._rtCamLookSliderSettings;
  if (pGVar2 != (GizmoPlaneSlider2DSettings *)0x0) {
    return (pGVar2->fields)._rotationSnapStep;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Single get_RtCamLookThickHoverEps() */

float Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
      UniversalGizmoSettings3D_get_RtCamLookThickHoverEps
                (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._rtCamLookSliderSettings;
  if (pGVar2 != (GizmoPlaneSlider2DSettings *)0x0) {
    return (pGVar2->fields)._thickBorderPolyHoverEps;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Boolean get_RtCanHoverCulledPixels() */

bool Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
     UniversalGizmoSettings3D_get_RtCanHoverCulledPixels
               (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._rtSliderSettings;
  if (pGVar2 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      bVar5 = (*pcVar4)();
      return bVar5;
    }
    if (pGVar2->vector[0] != (GizmoPlaneSlider3DSettings *)0x0) {
      return (pGVar2->vector[0]->fields)._isCircleHoverCullEnabled == 0;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Single get_RtDragSensitivity() */

float Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
      UniversalGizmoSettings3D_get_RtDragSensitivity
                (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._rtSliderSettings;
  if (pGVar2 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if (pGVar2->vector[0] != (GizmoPlaneSlider3DSettings *)0x0) {
      return (pGVar2->vector[0]->fields)._rotationSensitivity;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* GizmoSnapMode get_RtSnapMode() */

GizmoSnapMode__Enum
Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_get_RtSnapMode
          (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._rtSliderSettings;
  if (pGVar2 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      GVar5 = (*pcVar4)();
      return GVar5;
    }
    if (pGVar2->vector[0] != (GizmoPlaneSlider3DSettings *)0x0) {
      return (pGVar2->vector[0]->fields)._rotationSnapMode;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  GVar5 = (*pcVar4)();
  return GVar5;
}


/* Single get_RtXSnapStep() */

float Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_get_RtXSnapStep
                (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._rtSliderSettings;
  if (pGVar2 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if (pGVar2->vector[0] != (GizmoPlaneSlider3DSettings *)0x0) {
      return (pGVar2->vector[0]->fields)._rotationSnapStep;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_RtYSnapStep() */

float Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_get_RtYSnapStep
                (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._rtSliderSettings;
  if (pGVar2 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
    if (pGVar2->max_length < 2) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if (pGVar2->vector[1] != (GizmoPlaneSlider3DSettings *)0x0) {
      return (pGVar2->vector[1]->fields)._rotationSnapStep;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_RtZSnapStep() */

float Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_get_RtZSnapStep
                (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._rtSliderSettings;
  if (pGVar2 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
    if (pGVar2->max_length < 3) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if (pGVar2->vector[2] != (GizmoPlaneSlider3DSettings *)0x0) {
      return (pGVar2->vector[2]->fields)._rotationSnapStep;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_ScBoxSliderHoverEps() */

float Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
      UniversalGizmoSettings3D_get_ScBoxSliderHoverEps
                (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scSglSliderSettings;
  if (pGVar2 != (GizmoLineSlider3DSettings__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if (pGVar2->vector[0] != (GizmoLineSlider3DSettings *)0x0) {
      return (pGVar2->vector[0]->fields)._boxHoverEps;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_ScCylinderSliderHoverEps() */

float Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
      UniversalGizmoSettings3D_get_ScCylinderSliderHoverEps
                (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scSglSliderSettings;
  if (pGVar2 != (GizmoLineSlider3DSettings__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if (pGVar2->vector[0] != (GizmoLineSlider3DSettings *)0x0) {
      return (pGVar2->vector[0]->fields)._cylinderHoverEps;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_ScDragSensitivity() */

float Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
      UniversalGizmoSettings3D_get_ScDragSensitivity
                (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scSglSliderSettings;
  if (pGVar2 != (GizmoLineSlider3DSettings__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if (pGVar2->vector[0] != (GizmoLineSlider3DSettings *)0x0) {
      return (pGVar2->vector[0]->fields)._scaleSensitivity;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_ScLineSliderHoverEps() */

float Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::
      UniversalGizmoSettings3D_get_ScLineSliderHoverEps
                (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scSglSliderSettings;
  if (pGVar2 != (GizmoLineSlider3DSettings__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if (pGVar2->vector[0] != (GizmoLineSlider3DSettings *)0x0) {
      return (pGVar2->vector[0]->fields)._lineHoverEps;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_ScXSnapStep() */

float Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_get_ScXSnapStep
                (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scSglSliderSettings;
  if (pGVar2 != (GizmoLineSlider3DSettings__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if (pGVar2->vector[0] != (GizmoLineSlider3DSettings *)0x0) {
      return (pGVar2->vector[0]->fields)._scaleSnapStep;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_ScXYSnapStep() */

float Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_get_ScXYSnapStep
                (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scDblSliderSettings;
  if (pGVar2 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if (pGVar2->vector[0] != (GizmoPlaneSlider3DSettings *)0x0) {
      return (pGVar2->vector[0]->fields)._proportionalScaleSnapStep;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_ScYSnapStep() */

float Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_get_ScYSnapStep
                (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scSglSliderSettings;
  if (pGVar2 != (GizmoLineSlider3DSettings__Array *)0x0) {
    if (pGVar2->max_length < 2) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if (pGVar2->vector[1] != (GizmoLineSlider3DSettings *)0x0) {
      return (pGVar2->vector[1]->fields)._scaleSnapStep;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_ScYZSnapStep() */

float Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_get_ScYZSnapStep
                (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scDblSliderSettings;
  if (pGVar2 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
    if (pGVar2->max_length < 2) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if (pGVar2->vector[1] != (GizmoPlaneSlider3DSettings *)0x0) {
      return (pGVar2->vector[1]->fields)._proportionalScaleSnapStep;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_ScZSnapStep() */

float Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_get_ScZSnapStep
                (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scSglSliderSettings;
  if (pGVar2 != (GizmoLineSlider3DSettings__Array *)0x0) {
    if (pGVar2->max_length < 3) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if (pGVar2->vector[2] != (GizmoLineSlider3DSettings *)0x0) {
      return (pGVar2->vector[2]->fields)._scaleSnapStep;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_ScZXSnapStep() */

float Assembly-CSharp.dll::RTG::UniversalGizmoSettings3D::UniversalGizmoSettings3D_get_ScZXSnapStep
                (UniversalGizmoSettings3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._scDblSliderSettings;
  if (pGVar2 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
    if (pGVar2->max_length < 3) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if (pGVar2->vector[2] != (GizmoPlaneSlider3DSettings *)0x0) {
      return (pGVar2->vector[2]->fields)._proportionalScaleSnapStep;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


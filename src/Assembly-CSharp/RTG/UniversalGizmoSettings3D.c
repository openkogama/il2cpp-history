
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
      (dblSlider->fields)._sharedSettings = pGStack_1;
      ppGStack_3 = &(dblSlider->fields)._sharedSettings;
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
    (slider->fields)._sharedSettings = pGVar5;
    ppGStack_3 = &(slider->fields)._sharedSettings;
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
    pGStack_1 = (this->fields)._rtCamLookSliderSettings;
    (slider->fields)._sharedSettings = pGStack_1;
    ppGStack_2 = &(slider->fields)._sharedSettings;
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
      (slider->fields)._sharedSettings = pGStack_1;
      ppGStack_3 = &(slider->fields)._sharedSettings;
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
      (dblSlider->fields)._sharedSettings = pGStack_1;
      ppGStack_3 = &(dblSlider->fields)._sharedSettings;
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
    (slider->fields)._sharedSettings = pGVar5;
    ppGStack_3 = &(slider->fields)._sharedSettings;
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
  if (settings != (ScaleGizmoSettings3D *)0x0) {
    fVar1 = ScaleGizmoSettings3D::ScaleGizmoSettings3D_get_LineSliderHoverEps
                      (settings,(MethodInfo *)0x0);
    uVar2 = 0;
    pGVar3 = (this->fields)._scSglSliderSettings;
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
      fVar1 = ScaleGizmoSettings3D::ScaleGizmoSettings3D_get_CylinderSliderHoverEps
                        (settings,(MethodInfo *)0x0);
      pGVar3 = (this->fields)._scSglSliderSettings;
      uVar2 = 0;
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
        fVar1 = ScaleGizmoSettings3D::ScaleGizmoSettings3D_get_BoxSliderHoverEps
                          (settings,(MethodInfo *)0x0);
        pGVar3 = (this->fields)._scSglSliderSettings;
        uVar2 = 0;
        if (pGVar3 != (GizmoLineSlider3DSettings__Array *)0x0) {
          ppGVar4 = pGVar3->vector;
          while( true ) {
            if ((int)pGVar3->max_length <= (int)uVar2) break;
            if (pGVar3->max_length <= uVar2) goto code_?;
            if (*ppGVar4 == (GizmoLineSlider3DSettings *)0x0) goto code_?;
            Sphere::Sphere_set_Radius((Sphere *)*ppGVar4,fVar1,(MethodInfo *)0x0);
            uVar2 = uVar2 + 1;
            ppGVar4 = ppGVar4 + 1;
          }
          fVar1 = ScaleGizmoSettings3D::ScaleGizmoSettings3D_get_DragSensitivity
                            (settings,(MethodInfo *)0x0);
          UniversalGizmoSettings3D_SetScDragSensitivity(this,fVar1,(MethodInfo *)0x0);
          fVar1 = (settings->fields)._uniformSnapStep;
          fVar5 = _UNK_?;
          if (_UNK_? <= fVar1) {
            fVar5 = fVar1;
          }
          (this->fields)._scUniformSnapStep = fVar5;
          fVar1 = ScaleGizmoSettings3D::ScaleGizmoSettings3D_get_XSnapStep
                            (settings,(MethodInfo *)0x0);
          pGVar3 = (this->fields)._scSglSliderSettings;
          if (pGVar3 != (GizmoLineSlider3DSettings__Array *)0x0) {
            if (pGVar3->max_length == 0) goto code_?;
            if ((GizmoPlaneSlider3DSettings *)pGVar3->vector[0] != (GizmoPlaneSlider3DSettings *)0x0
               ) {
              GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_OffsetSnapStepRight
                        ((GizmoPlaneSlider3DSettings *)pGVar3->vector[0],fVar1,(MethodInfo *)0x0);
              pGVar3 = (this->fields)._scSglSliderSettings;
              if (pGVar3 != (GizmoLineSlider3DSettings__Array *)0x0) {
                if (pGVar3->max_length < 4) goto code_?;
                if ((GizmoPlaneSlider3DSettings *)pGVar3->vector[3] !=
                    (GizmoPlaneSlider3DSettings *)0x0) {
                  GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_OffsetSnapStepRight
                            ((GizmoPlaneSlider3DSettings *)pGVar3->vector[3],0.0,(MethodInfo *)0x0);
                  pGVar6 = (this->fields)._scDblSliderSettings;
                  if (pGVar6 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
                    if (pGVar6->max_length == 0) goto code_?;
                    if (pGVar6->vector[0] != (GizmoPlaneSlider3DSettings *)0x0) {
                      UniversalGizmoSettings3D_SetScUniformScaleSnapStep
                                ((UniversalGizmoSettings3D *)pGVar6->vector[0],4.3731324e-29,
                                 (MethodInfo *)0x0);
                      pGVar6 = (this->fields)._scDblSliderSettings;
                      if (pGVar6 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
                        if (pGVar6->max_length < 3) goto code_?;
                        if (pGVar6->vector[2] != (GizmoPlaneSlider3DSettings *)0x0) {
                          GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_ScaleSnapStepUp
                                    (pGVar6->vector[2],4.3731324e-29,(MethodInfo *)0x0);
                          fVar1 = ScaleGizmoSettings3D::ScaleGizmoSettings3D_get_YSnapStep
                                            (settings,(MethodInfo *)0x0);
                          pGVar3 = (this->fields)._scSglSliderSettings;
                          if (pGVar3 != (GizmoLineSlider3DSettings__Array *)0x0) {
                            if (pGVar3->max_length < 2) goto code_?;
                            if ((GizmoPlaneSlider3DSettings *)pGVar3->vector[1] !=
                                (GizmoPlaneSlider3DSettings *)0x0) {
                              GizmoPlaneSlider3DSettings::
                              GizmoPlaneSlider3DSettings_set_OffsetSnapStepRight
                                        ((GizmoPlaneSlider3DSettings *)pGVar3->vector[1],fVar1,
                                         (MethodInfo *)0x0);
                              pGVar3 = (this->fields)._scSglSliderSettings;
                              if (pGVar3 != (GizmoLineSlider3DSettings__Array *)0x0) {
                                if (pGVar3->max_length < 5) goto code_?;
                                if ((GizmoPlaneSlider3DSettings *)pGVar3->vector[4] !=
                                    (GizmoPlaneSlider3DSettings *)0x0) {
                                  GizmoPlaneSlider3DSettings::
                                  GizmoPlaneSlider3DSettings_set_OffsetSnapStepRight
                                            ((GizmoPlaneSlider3DSettings *)pGVar3->vector[4],fVar1,
                                             (MethodInfo *)0x0);
                                  pGVar6 = (this->fields)._scDblSliderSettings;
                                  if (pGVar6 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
                                    if (pGVar6->max_length == 0) goto code_?;
                                    if (pGVar6->vector[0] != (GizmoPlaneSlider3DSettings *)0x0) {
                                      GizmoPlaneSlider3DSettings::
                                      GizmoPlaneSlider3DSettings_set_ScaleSnapStepUp
                                                (pGVar6->vector[0],fVar1,(MethodInfo *)0x0);
                                      pGVar6 = (this->fields)._scDblSliderSettings;
                                      if (pGVar6 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
                                        if (pGVar6->max_length < 2) goto code_?;
                                        if (pGVar6->vector[1] != (GizmoPlaneSlider3DSettings *)0x0)
                                        {
                                          UniversalGizmoSettings3D_SetScUniformScaleSnapStep
                                                    ((UniversalGizmoSettings3D *)pGVar6->vector[1],
                                                     fVar1,(MethodInfo *)0x0);
                                          fVar1 = ScaleGizmoSettings3D::
                                                  ScaleGizmoSettings3D_get_ZSnapStep
                                                            (settings,(MethodInfo *)0x0);
                                          pGVar3 = (this->fields)._scSglSliderSettings;
                                          if (pGVar3 != (GizmoLineSlider3DSettings__Array *)0x0) {
                                            if (pGVar3->max_length < 3) goto code_?;
                                            if ((GizmoPlaneSlider3DSettings *)pGVar3->vector[2] !=
                                                (GizmoPlaneSlider3DSettings *)0x0) {
                                              GizmoPlaneSlider3DSettings::
                                              GizmoPlaneSlider3DSettings_set_OffsetSnapStepRight
                                                        ((GizmoPlaneSlider3DSettings *)
                                                         pGVar3->vector[2],fVar1,(MethodInfo *)0x0);
                                              pGVar3 = (this->fields)._scSglSliderSettings;
                                              if (pGVar3 != (GizmoLineSlider3DSettings__Array *)0x0)
                                              {
                                                if (pGVar3->max_length < 6) goto code_?;
                                                if ((GizmoPlaneSlider3DSettings *)pGVar3->vector[5]
                                                    != (GizmoPlaneSlider3DSettings *)0x0) {
                                                  GizmoPlaneSlider3DSettings::
                                                  GizmoPlaneSlider3DSettings_set_OffsetSnapStepRight
                                                            ((GizmoPlaneSlider3DSettings *)
                                                             pGVar3->vector[5],fVar1,
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
                                                                (pGVar6->vector[1],fVar1,
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
                                                             pGVar6->vector[2],fVar1,
                                                             (MethodInfo *)0x0);
                                                  fVar1 = ScaleGizmoSettings3D::
                                                          ScaleGizmoSettings3D_get_XYSnapStep
                                                                    (settings,(MethodInfo *)0x0);
                                                  pGVar6 = (this->fields)._scDblSliderSettings;
                                                  if (pGVar6 != (GizmoPlaneSlider3DSettings__Array *
                                                                )0x0) {
                                                    if (pGVar6->max_length == 0)
                                                    goto code_?;
                                                    if (pGVar6->vector[0] !=
                                                        (GizmoPlaneSlider3DSettings *)0x0) {
                                                      GizmoPlaneSlider3DSettings::
                                                                                                            
                                                  GizmoPlaneSlider3DSettings_set_ProportionalScaleSnapStep
                                                            (pGVar6->vector[0],fVar1,
                                                             (MethodInfo *)0x0);
                                                  fVar1 = ScaleGizmoSettings3D::
                                                          ScaleGizmoSettings3D_get_YZSnapStep
                                                                    (settings,(MethodInfo *)0x0);
                                                  pGVar6 = (this->fields)._scDblSliderSettings;
                                                  if (pGVar6 != (GizmoPlaneSlider3DSettings__Array *
                                                                )0x0) {
                                                    if (pGVar6->max_length < 2)
                                                    goto code_?;
                                                    if (pGVar6->vector[1] !=
                                                        (GizmoPlaneSlider3DSettings *)0x0) {
                                                      GizmoPlaneSlider3DSettings::
                                                                                                            
                                                  GizmoPlaneSlider3DSettings_set_ProportionalScaleSnapStep
                                                            (pGVar6->vector[1],fVar1,
                                                             (MethodInfo *)0x0);
                                                  fVar1 = ScaleGizmoSettings3D::
                                                          ScaleGizmoSettings3D_get_ZXSnapStep
                                                                    (settings,(MethodInfo *)0x0);
                                                  pGVar6 = (this->fields)._scDblSliderSettings;
                                                  if (pGVar6 != (GizmoPlaneSlider3DSettings__Array *
                                                                )0x0) {
                                                    if (pGVar6->max_length < 3)
                                                    goto code_?;
                                                    if (pGVar6->vector[2] !=
                                                        (GizmoPlaneSlider3DSettings *)0x0) {
                                                      GizmoPlaneSlider3DSettings::
                                                                                                            
                                                  GizmoPlaneSlider3DSettings_set_ProportionalScaleSnapStep
                                                            (pGVar6->vector[2],fVar1,
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
code_?:
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
  (this->fields)._mvVertexSnapSettings = this_00;
  func_?(&(this->fields)._mvVertexSnapSettings,this_00);
  pGVar1 = (GizmoLineSlider3DSettings__Array *)
           func_?(TypeInfo__RTG__GizmoLineSlider3DSettings,6);
  (this->fields)._mvSglSliderSettings = pGVar1;
  func_?(&(this->fields)._mvSglSliderSettings,pGVar1);
  pGVar2 = (GizmoPlaneSlider3DSettings__Array *)
           func_?(TypeInfo__RTG__GizmoPlaneSlider3DSettings,3);
  (this->fields)._mvDblSliderSettings = pGVar2;
  func_?(&(this->fields)._mvDblSliderSettings,pGVar2);
  (this->fields)._rtCamRightSnapStep = 15.0;
  (this->fields)._rtCamUpSnapStep = 15.0;
  pGVar2 = (GizmoPlaneSlider3DSettings__Array *)
           func_?(TypeInfo__RTG__GizmoPlaneSlider3DSettings,3);
  (this->fields)._rtSliderSettings = pGVar2;
  func_?(&(this->fields)._rtSliderSettings,pGVar2);
  pGVar3 = (GizmoPlaneSlider2DSettings *)func_?(TypeInfo__RTG__GizmoPlaneSlider2DSettings);
  GizmoPlaneSlider2DSettings::GizmoPlaneSlider2DSettings__ctor(pGVar3,(MethodInfo *)0x0);
  (this->fields)._rtCamLookSliderSettings = pGVar3;
  func_?(&(this->fields)._rtCamLookSliderSettings,pGVar3);
  (this->fields)._scUniformSnapStep = 0.1;
  pGVar1 = (GizmoLineSlider3DSettings__Array *)
           func_?(TypeInfo__RTG__GizmoLineSlider3DSettings,6);
  (this->fields)._scSglSliderSettings = pGVar1;
  func_?(&(this->fields)._scSglSliderSettings,pGVar1);
  pGVar2 = (GizmoPlaneSlider3DSettings__Array *)
           func_?(TypeInfo__RTG__GizmoPlaneSlider3DSettings,3);
  (this->fields)._scDblSliderSettings = pGVar2;
  func_?(&(this->fields)._scDblSliderSettings,pGVar2);
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Settings);
    cRam_? = '\x01';
  }
  (this->fields)._._canBeDisplayed = 1;
  (this->fields)._._isExpanded = 1;
  (this->fields)._._foldoutLabel = StringLiteral_Settings;
  method_00 = (MethodInfo *)&(this->fields)._._foldoutLabel;
  func_?(method_00,StringLiteral_Settings);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  uVar4 = 0;
  pGVar1 = (this->fields)._mvSglSliderSettings;
  while (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
    if ((int)pGVar1->max_length <= (int)uVar4) {
      pGVar2 = (this->fields)._mvDblSliderSettings;
      uVar4 = 0;
      if (pGVar2 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
        iVar5 = 0x10;
        goto code_?;
      }
      break;
    }
    pGVar1 = (this->fields)._mvSglSliderSettings;
    pGVar6 = (GizmoLineSlider3DSettings *)func_?();
    GizmoLineSlider3DSettings::GizmoLineSlider3DSettings__ctor(pGVar6,(MethodInfo *)0x0);
    if (pGVar1 == (GizmoLineSlider3DSettings__Array *)0x0) break;
    if ((pGVar6 != (GizmoLineSlider3DSettings *)0x0) &&
       (iVar5 = func_?(pGVar6), iVar5 == 0)) goto code_?;
    if (pGVar1->max_length <= uVar4) goto code_?;
    pGVar1->vector[uVar4] = pGVar6;
    func_?(pGVar1->vector + uVar4);
    uVar4 = uVar4 + 1;
    pGVar1 = (this->fields)._mvSglSliderSettings;
  }
  goto code_?;
  while( true ) {
    pGVar2 = (this->fields)._mvDblSliderSettings;
    pGVar7 = (GizmoPlaneSlider3DSettings *)func_?();
    GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings__ctor(pGVar7,(MethodInfo *)0x0);
    if (pGVar2 == (GizmoPlaneSlider3DSettings__Array *)0x0) break;
    puVar8 = (undefined *)0x0;
    if (pGVar7 != (GizmoPlaneSlider3DSettings *)0x0) {
      puVar8 = &UNK_?;
      iVar9 = func_?(pGVar7);
      if (iVar9 == 0) goto code_?;
    }
    if (pGVar2->max_length <= uVar4) goto code_?;
    *(undefined **)((int)pGVar2->vector + iVar5 + -0x10) = puVar8;
    func_?((int)pGVar2->vector + iVar5 + -0x10);
    pGVar2 = (this->fields)._mvDblSliderSettings;
    if (pGVar2 == (GizmoPlaneSlider3DSettings__Array *)0x0) break;
    if (pGVar2->max_length <= uVar4) goto code_?;
    pGVar7 = *(GizmoPlaneSlider3DSettings **)((int)pGVar2->vector + iVar5 + -0x10);
    if (pGVar7 == (GizmoPlaneSlider3DSettings *)0x0) break;
    GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_AreaHoverEps
              (pGVar7,0.0,(MethodInfo *)0x0);
    pGVar2 = (this->fields)._mvDblSliderSettings;
    if (pGVar2 == (GizmoPlaneSlider3DSettings__Array *)0x0) break;
    if (pGVar2->max_length <= uVar4) goto code_?;
    pGVar7 = *(GizmoPlaneSlider3DSettings **)((int)pGVar2->vector + iVar5 + -0x10);
    if (pGVar7 == (GizmoPlaneSlider3DSettings *)0x0) break;
    GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_BorderLineHoverEps
              (pGVar7,0.0,(MethodInfo *)0x0);
    pGVar2 = (this->fields)._mvDblSliderSettings;
    if (pGVar2 == (GizmoPlaneSlider3DSettings__Array *)0x0) break;
    if (pGVar2->max_length <= uVar4) goto code_?;
    pGVar7 = *(GizmoPlaneSlider3DSettings **)((int)pGVar2->vector + iVar5 + -0x10);
    if (pGVar7 == (GizmoPlaneSlider3DSettings *)0x0) break;
    GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_BorderBoxHoverEps
              (pGVar7,0.0,(MethodInfo *)0x0);
    pGVar2 = (this->fields)._mvDblSliderSettings;
    uVar4 = uVar4 + 1;
    iVar5 = iVar5 + 4;
    if (pGVar2 == (GizmoPlaneSlider3DSettings__Array *)0x0) break;
code_?:
    if ((int)pGVar2->max_length <= (int)uVar4) {
      pGVar2 = (this->fields)._rtSliderSettings;
      uVar4 = 0;
      if (pGVar2 != (GizmoPlaneSlider3DSettings__Array *)0x0) goto code_?;
      break;
    }
  }
  goto code_?;
  while( true ) {
    pGVar2 = (this->fields)._rtSliderSettings;
    pGVar7 = (GizmoPlaneSlider3DSettings *)func_?();
    GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings__ctor(pGVar7,(MethodInfo *)0x0);
    if (pGVar2 == (GizmoPlaneSlider3DSettings__Array *)0x0) break;
    if ((pGVar7 != (GizmoPlaneSlider3DSettings *)0x0) &&
       (iVar5 = func_?(pGVar7), iVar5 == 0)) goto code_?;
    if (pGVar2->max_length <= uVar4) goto code_?;
    pGVar2->vector[uVar4] = pGVar7;
    func_?(pGVar2->vector + uVar4);
    pGVar2 = (this->fields)._rtSliderSettings;
    uVar4 = uVar4 + 1;
    if (pGVar2 == (GizmoPlaneSlider3DSettings__Array *)0x0) break;
code_?:
    if ((int)pGVar2->max_length <= (int)uVar4) {
      pGVar3 = (this->fields)._rtCamLookSliderSettings;
      if (pGVar3 != (GizmoPlaneSlider2DSettings *)0x0) {
        Sphere::Sphere_set_Radius((Sphere *)pGVar3,7.0,(MethodInfo *)0x0);
        pGVar2 = (this->fields)._rtSliderSettings;
        uVar4 = 0;
        if (pGVar2 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
          ppGVar10 = pGVar2->vector;
          goto code_?;
        }
      }
      break;
    }
  }
  goto code_?;
code_?:
  if ((int)pGVar2->max_length <= (int)uVar4) goto code_?;
  if (pGVar2->max_length <= uVar4) goto code_?;
  if (*ppGVar10 == (GizmoPlaneSlider3DSettings *)0x0) goto code_?;
  uVar4 = uVar4 + 1;
  ((*ppGVar10)->fields)._isCircleHoverCullEnabled = 1;
  ppGVar10 = ppGVar10 + 1;
  goto code_?;
code_?:
  pGVar2 = (this->fields)._rtSliderSettings;
  uVar4 = 0;
  if (pGVar2 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
    ppGVar10 = pGVar2->vector;
    for (; (int)uVar4 < (int)pGVar2->max_length; uVar4 = uVar4 + 1) {
      if (pGVar2->max_length <= uVar4) goto code_?;
      if (*ppGVar10 == (GizmoPlaneSlider3DSettings *)0x0) goto code_?;
      CameraMoveSettings::CameraMoveSettings_set_AccelerationRate
                ((CameraMoveSettings *)*ppGVar10,0.4,(MethodInfo *)0x0);
      ppGVar10 = ppGVar10 + 1;
    }
    uVar4 = 0;
    pGVar1 = (this->fields)._scSglSliderSettings;
    while (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
      if ((int)pGVar1->max_length <= (int)uVar4) {
        pGVar2 = (this->fields)._scDblSliderSettings;
        uVar4 = 0;
        if (pGVar2 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
          iVar5 = 0x10;
          goto code_?;
        }
        break;
      }
      pGVar1 = (this->fields)._scSglSliderSettings;
      pGVar6 = (GizmoLineSlider3DSettings *)func_?();
      GizmoLineSlider3DSettings::GizmoLineSlider3DSettings__ctor(pGVar6,(MethodInfo *)0x0);
      if (pGVar1 == (GizmoLineSlider3DSettings__Array *)0x0) break;
      if ((pGVar6 != (GizmoLineSlider3DSettings *)0x0) &&
         (iVar5 = func_?(pGVar6), iVar5 == 0)) goto code_?;
      if (pGVar1->max_length <= uVar4) goto code_?;
      pGVar1->vector[uVar4] = pGVar6;
      func_?(pGVar1->vector + uVar4);
      uVar4 = uVar4 + 1;
      pGVar1 = (this->fields)._scSglSliderSettings;
    }
  }
  goto code_?;
code_?:
  if ((int)pGVar1->max_length <= (int)uVar4) {
    return;
  }
  if (pGVar1->max_length <= uVar4) goto code_?;
  if (*ppGVar11 == (GizmoLineSlider3DSettings *)0x0) goto code_?;
  GizmoLineSlider3DSettings::GizmoLineSlider3DSettings_set_ScaleSensitivity
            (*ppGVar11,0.6,(MethodInfo *)0x0);
  uVar4 = uVar4 + 1;
  ppGVar11 = ppGVar11 + 1;
  goto code_?;
  while( true ) {
    pGVar2 = (this->fields)._scDblSliderSettings;
    pGVar7 = (GizmoPlaneSlider3DSettings *)func_?();
    GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings__ctor(pGVar7,(MethodInfo *)0x0);
    if (pGVar2 == (GizmoPlaneSlider3DSettings__Array *)0x0) break;
    puVar8 = (undefined *)0x0;
    if (pGVar7 != (GizmoPlaneSlider3DSettings *)0x0) {
      puVar8 = &UNK_?;
      iVar9 = func_?(pGVar7);
      if (iVar9 == 0) goto code_?;
    }
    if (pGVar2->max_length <= uVar4) goto code_?;
    *(undefined **)((int)pGVar2->vector + iVar5 + -0x10) = puVar8;
    func_?((int)pGVar2->vector + iVar5 + -0x10);
    pGVar2 = (this->fields)._scDblSliderSettings;
    if (pGVar2 == (GizmoPlaneSlider3DSettings__Array *)0x0) break;
    if (pGVar2->max_length <= uVar4) goto code_?;
    iVar9 = *(int *)((int)pGVar2->vector + iVar5 + -0x10);
    if (iVar9 == 0) break;
    *(undefined4 *)(iVar9 + 0x30) = 1;
    pGVar2 = (this->fields)._scDblSliderSettings;
    if (pGVar2 == (GizmoPlaneSlider3DSettings__Array *)0x0) break;
    if (pGVar2->max_length <= uVar4) goto code_?;
    pGVar7 = *(GizmoPlaneSlider3DSettings **)((int)pGVar2->vector + iVar5 + -0x10);
    if (pGVar7 == (GizmoPlaneSlider3DSettings *)0x0) break;
    GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_AreaHoverEps
              (pGVar7,0.0,(MethodInfo *)0x0);
    pGVar2 = (this->fields)._scDblSliderSettings;
    if (pGVar2 == (GizmoPlaneSlider3DSettings__Array *)0x0) break;
    if (pGVar2->max_length <= uVar4) goto code_?;
    pGVar7 = *(GizmoPlaneSlider3DSettings **)((int)pGVar2->vector + iVar5 + -0x10);
    if (pGVar7 == (GizmoPlaneSlider3DSettings *)0x0) break;
    GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_BorderLineHoverEps
              (pGVar7,0.0,(MethodInfo *)0x0);
    pGVar2 = (this->fields)._scDblSliderSettings;
    if (pGVar2 == (GizmoPlaneSlider3DSettings__Array *)0x0) break;
    if (pGVar2->max_length <= uVar4) goto code_?;
    pGVar7 = *(GizmoPlaneSlider3DSettings **)((int)pGVar2->vector + iVar5 + -0x10);
    if (pGVar7 == (GizmoPlaneSlider3DSettings *)0x0) break;
    GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_BorderBoxHoverEps
              (pGVar7,0.0,(MethodInfo *)0x0);
    pGVar2 = (this->fields)._scDblSliderSettings;
    uVar4 = uVar4 + 1;
    iVar5 = iVar5 + 4;
    if (pGVar2 == (GizmoPlaneSlider3DSettings__Array *)0x0) break;
code_?:
    if ((int)pGVar2->max_length <= (int)uVar4) {
      pGVar1 = (this->fields)._scSglSliderSettings;
      uVar4 = 0;
      if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
        ppGVar11 = pGVar1->vector;
        goto code_?;
      }
      break;
    }
  }
code_?:
  func_?();
code_?:
  uVar12 = func_?();
  func_?(uVar12);
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
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


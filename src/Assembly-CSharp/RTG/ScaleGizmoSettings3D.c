
/* Void ConnectDblSliderSettings(GizmoPlaneSlider3D, PlaneId) */

void Assembly-CSharp.dll::RTG::ScaleGizmoSettings3D::ScaleGizmoSettings3D_ConnectDblSliderSettings
               (ScaleGizmoSettings3D *this,GizmoPlaneSlider3D *dblSlider,PlaneId__Enum planeId,
               MethodInfo *method)

{
  pGStack_1 = (GizmoPlaneSlider3DSettings *)&stack0xfffffffc;
  pGVar2 = (this->fields)._dblSliderSettings;
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


/* Void ConnectSliderSettings(GizmoLineSlider3D, Int32, AxisSign) */

void Assembly-CSharp.dll::RTG::ScaleGizmoSettings3D::ScaleGizmoSettings3D_ConnectSliderSettings
               (ScaleGizmoSettings3D *this,GizmoLineSlider3D *slider,int32_t axisIndex,
               AxisSign__Enum axisSign,MethodInfo *method)

{
  pGStack_1 = (GizmoLineSlider3DSettings *)&stack0xfffffffc;
  pGVar2 = (this->fields)._sglSliderSettings;
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


/* GizmoLineSlider3DSettings GetSglSliderSettings(Int32, AxisSign) */

GizmoLineSlider3DSettings *
Assembly-CSharp.dll::RTG::ScaleGizmoSettings3D::ScaleGizmoSettings3D_GetSglSliderSettings
          (ScaleGizmoSettings3D *this,int32_t axisIndex,AxisSign__Enum axisSign,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sglSliderSettings;
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


/* Void SetBoxSliderHoverEps(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoSettings3D::ScaleGizmoSettings3D_SetBoxSliderHoverEps
               (ScaleGizmoSettings3D *this,float eps,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderSettings;
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


/* Void SetCylinderSliderHoverEps(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoSettings3D::ScaleGizmoSettings3D_SetCylinderSliderHoverEps
               (ScaleGizmoSettings3D *this,float eps,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderSettings;
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


/* Void SetDragSensitivity(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoSettings3D::ScaleGizmoSettings3D_SetDragSensitivity
               (ScaleGizmoSettings3D *this,float sensitivity,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderSettings;
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


/* Void SetLineSliderHoverEps(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoSettings3D::ScaleGizmoSettings3D_SetLineSliderHoverEps
               (ScaleGizmoSettings3D *this,float eps,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderSettings;
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


/* Void SetXSnapStep(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoSettings3D::ScaleGizmoSettings3D_SetXSnapStep
               (ScaleGizmoSettings3D *this,float snapStep,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderSettings;
  if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
    if (pGVar1->max_length == 0) goto code_?;
    if ((GizmoPlaneSlider3DSettings *)pGVar1->vector[0] != (GizmoPlaneSlider3DSettings *)0x0) {
      GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_OffsetSnapStepRight
                ((GizmoPlaneSlider3DSettings *)pGVar1->vector[0],snapStep,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._sglSliderSettings;
      if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
        if (pGVar1->max_length < 4) goto code_?;
        if ((GizmoPlaneSlider3DSettings *)pGVar1->vector[3] != (GizmoPlaneSlider3DSettings *)0x0) {
          GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_OffsetSnapStepRight
                    ((GizmoPlaneSlider3DSettings *)pGVar1->vector[3],snapStep,(MethodInfo *)0x0);
          pGVar2 = (this->fields)._dblSliderSettings;
          if (pGVar2 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
            if (pGVar2->max_length == 0) goto code_?;
            if (pGVar2->vector[0] != (GizmoPlaneSlider3DSettings *)0x0) {
              UniversalGizmoSettings3D::UniversalGizmoSettings3D_SetScUniformScaleSnapStep
                        ((UniversalGizmoSettings3D *)pGVar2->vector[0],snapStep,(MethodInfo *)0x0);
              pGVar2 = (this->fields)._dblSliderSettings;
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


/* Void SetXYSnapStep(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoSettings3D::ScaleGizmoSettings3D_SetXYSnapStep
               (ScaleGizmoSettings3D *this,float snapStep,MethodInfo *method)

{
  pGVar1 = (this->fields)._dblSliderSettings;
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


/* Void SetYSnapStep(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoSettings3D::ScaleGizmoSettings3D_SetYSnapStep
               (ScaleGizmoSettings3D *this,float snapStep,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderSettings;
  if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
    if (pGVar1->max_length < 2) goto code_?;
    if ((GizmoPlaneSlider3DSettings *)pGVar1->vector[1] != (GizmoPlaneSlider3DSettings *)0x0) {
      GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_OffsetSnapStepRight
                ((GizmoPlaneSlider3DSettings *)pGVar1->vector[1],snapStep,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._sglSliderSettings;
      if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
        if (pGVar1->max_length < 5) goto code_?;
        if ((GizmoPlaneSlider3DSettings *)pGVar1->vector[4] != (GizmoPlaneSlider3DSettings *)0x0) {
          GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_OffsetSnapStepRight
                    ((GizmoPlaneSlider3DSettings *)pGVar1->vector[4],snapStep,(MethodInfo *)0x0);
          pGVar2 = (this->fields)._dblSliderSettings;
          if (pGVar2 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
            if (pGVar2->max_length == 0) goto code_?;
            if (pGVar2->vector[0] != (GizmoPlaneSlider3DSettings *)0x0) {
              GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_ScaleSnapStepUp
                        (pGVar2->vector[0],snapStep,(MethodInfo *)0x0);
              pGVar2 = (this->fields)._dblSliderSettings;
              if (pGVar2 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
                if (pGVar2->max_length < 2) goto code_?;
                if (pGVar2->vector[1] != (GizmoPlaneSlider3DSettings *)0x0) {
                  UniversalGizmoSettings3D::UniversalGizmoSettings3D_SetScUniformScaleSnapStep
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


/* Void SetYZSnapStep(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoSettings3D::ScaleGizmoSettings3D_SetYZSnapStep
               (ScaleGizmoSettings3D *this,float snapStep,MethodInfo *method)

{
  pGVar1 = (this->fields)._dblSliderSettings;
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


/* Void SetZSnapStep(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoSettings3D::ScaleGizmoSettings3D_SetZSnapStep
               (ScaleGizmoSettings3D *this,float snapStep,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderSettings;
  if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
    if (pGVar1->max_length < 3) goto code_?;
    if ((GizmoPlaneSlider3DSettings *)pGVar1->vector[2] != (GizmoPlaneSlider3DSettings *)0x0) {
      GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_OffsetSnapStepRight
                ((GizmoPlaneSlider3DSettings *)pGVar1->vector[2],snapStep,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._sglSliderSettings;
      if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
        if (pGVar1->max_length < 6) goto code_?;
        if ((GizmoPlaneSlider3DSettings *)pGVar1->vector[5] != (GizmoPlaneSlider3DSettings *)0x0) {
          GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_OffsetSnapStepRight
                    ((GizmoPlaneSlider3DSettings *)pGVar1->vector[5],snapStep,(MethodInfo *)0x0);
          pGVar2 = (this->fields)._dblSliderSettings;
          if (pGVar2 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
            if (pGVar2->max_length < 2) goto code_?;
            if (pGVar2->vector[1] != (GizmoPlaneSlider3DSettings *)0x0) {
              GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_ScaleSnapStepUp
                        (pGVar2->vector[1],snapStep,(MethodInfo *)0x0);
              pGVar2 = (this->fields)._dblSliderSettings;
              if (pGVar2 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
                if (pGVar2->max_length < 3) goto code_?;
                if (pGVar2->vector[2] != (GizmoPlaneSlider3DSettings *)0x0) {
                  UniversalGizmoSettings3D::UniversalGizmoSettings3D_SetScUniformScaleSnapStep
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


/* Void SetZXSnapStep(Single) */

void Assembly-CSharp.dll::RTG::ScaleGizmoSettings3D::ScaleGizmoSettings3D_SetZXSnapStep
               (ScaleGizmoSettings3D *this,float snapStep,MethodInfo *method)

{
  pGVar1 = (this->fields)._dblSliderSettings;
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


/* ScaleGizmoSettings3D() */

void Assembly-CSharp.dll::RTG::ScaleGizmoSettings3D::ScaleGizmoSettings3D__ctor
               (ScaleGizmoSettings3D *this,MethodInfo *method)

{
  pSVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoLineSlider3DSettings);
    func_?(&TypeInfo__RTG__GizmoLineSlider3DSettings);
    func_?(&TypeInfo__RTG__GizmoPlaneSlider3DSettings);
    func_?(&TypeInfo__RTG__GizmoPlaneSlider3DSettings);
    cRam_? = '\x01';
  }
  (this->fields)._uniformSnapStep = 0.1;
  pGVar2 = (GizmoLineSlider3DSettings__Array *)
           func_?(TypeInfo__RTG__GizmoLineSlider3DSettings,6);
  ppGVar3 = &(this->fields)._sglSliderSettings;
  *ppGVar3 = pGVar2;
  func_?(ppGVar3,pGVar2);
  pGVar4 = (GizmoPlaneSlider3DSettings__Array *)
           func_?(TypeInfo__RTG__GizmoPlaneSlider3DSettings,3);
  ppGVar5 = &(this->fields)._dblSliderSettings;
  *ppGVar5 = pGVar4;
  func_?(ppGVar5,pGVar4);
  Settings::Settings__ctor((Settings *)this,(MethodInfo *)0x0);
  pGVar2 = (this->fields)._sglSliderSettings;
  this = (ScaleGizmoSettings3D *)0x0;
  while (pGVar2 != (GizmoLineSlider3DSettings__Array *)0x0) {
    ppGStack_6 = &(pSVar1->fields)._sglSliderSettings;
    if ((int)pGVar2->max_length <= (int)this) {
      pGVar4 = *ppGVar5;
      uVar7 = 0;
      if (pGVar4 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
        iVar8 = 0x10;
        goto code_?;
      }
      break;
    }
    pGVar2 = (pSVar1->fields)._sglSliderSettings;
    this_00 = (GizmoLineSlider3DSettings *)func_?(TypeInfo__RTG__GizmoLineSlider3DSettings)
    ;
    GizmoLineSlider3DSettings::GizmoLineSlider3DSettings__ctor(this_00,(MethodInfo *)0x0);
    if (pGVar2 == (GizmoLineSlider3DSettings__Array *)0x0) break;
    if ((this_00 != (GizmoLineSlider3DSettings *)0x0) &&
       (iVar8 = func_?(this_00,(pGVar2->klass->_0).element_class), iVar8 == 0))
    goto code_?;
    if ((ScaleGizmoSettings3D *)pGVar2->max_length <= this) goto code_?;
    pGVar2->vector[(int)this] = this_00;
    func_?(pGVar2->vector + (int)this,this_00);
    this = (ScaleGizmoSettings3D *)((int)&this->klass + 1);
    pGVar2 = *ppGStack_6;
  }
  goto code_?;
code_?:
  if ((int)pGVar2->max_length <= (int)uVar7) {
    return;
  }
  if (pGVar2->max_length <= uVar7) goto code_?;
  if (*ppGVar9 == (GizmoLineSlider3DSettings *)0x0) goto code_?;
  GizmoLineSlider3DSettings::GizmoLineSlider3DSettings_set_ScaleSensitivity
            (*ppGVar9,0.6,(MethodInfo *)0x0);
  uVar7 = uVar7 + 1;
  ppGVar9 = ppGVar9 + 1;
  goto code_?;
  while( true ) {
    pGVar4 = *ppGVar5;
    pGVar10 = (GizmoPlaneSlider3DSettings *)
             func_?(TypeInfo__RTG__GizmoPlaneSlider3DSettings);
    GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings__ctor(pGVar10,(MethodInfo *)0x0);
    if (pGVar4 == (GizmoPlaneSlider3DSettings__Array *)0x0) break;
    if ((pGVar10 != (GizmoPlaneSlider3DSettings *)0x0) &&
       (iVar11 = func_?(pGVar10,(pGVar4->klass->_0).element_class), iVar11 == 0))
    goto code_?;
    if (pGVar4->max_length <= uVar7) goto code_?;
    *(GizmoPlaneSlider3DSettings **)((int)pGVar4->vector + iVar8 + -0x10) = pGVar10;
    func_?((int)pGVar4->vector + iVar8 + -0x10,pGVar10);
    pGVar4 = *ppGVar5;
    if (pGVar4 == (GizmoPlaneSlider3DSettings__Array *)0x0) break;
    if (pGVar4->max_length <= uVar7) goto code_?;
    iVar11 = *(int *)((int)pGVar4->vector + iVar8 + -0x10);
    if (iVar11 == 0) break;
    *(undefined4 *)(iVar11 + 0x30) = 1;
    pGVar4 = *ppGVar5;
    if (pGVar4 == (GizmoPlaneSlider3DSettings__Array *)0x0) break;
    if (pGVar4->max_length <= uVar7) goto code_?;
    pGVar10 = *(GizmoPlaneSlider3DSettings **)((int)pGVar4->vector + iVar8 + -0x10);
    if (pGVar10 == (GizmoPlaneSlider3DSettings *)0x0) break;
    GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_AreaHoverEps
              (pGVar10,0.0,(MethodInfo *)0x0);
    pGVar4 = *ppGVar5;
    if (pGVar4 == (GizmoPlaneSlider3DSettings__Array *)0x0) break;
    if (pGVar4->max_length <= uVar7) goto code_?;
    pGVar10 = *(GizmoPlaneSlider3DSettings **)((int)pGVar4->vector + iVar8 + -0x10);
    if (pGVar10 == (GizmoPlaneSlider3DSettings *)0x0) break;
    GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_BorderLineHoverEps
              (pGVar10,0.0,(MethodInfo *)0x0);
    pGVar4 = *ppGVar5;
    if (pGVar4 == (GizmoPlaneSlider3DSettings__Array *)0x0) break;
    if (pGVar4->max_length <= uVar7) goto code_?;
    pGVar10 = *(GizmoPlaneSlider3DSettings **)((int)pGVar4->vector + iVar8 + -0x10);
    if (pGVar10 == (GizmoPlaneSlider3DSettings *)0x0) break;
    GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_BorderBoxHoverEps
              (pGVar10,0.0,(MethodInfo *)0x0);
    pGVar4 = *ppGVar5;
    uVar7 = uVar7 + 1;
    iVar8 = iVar8 + 4;
    if (pGVar4 == (GizmoPlaneSlider3DSettings__Array *)0x0) break;
code_?:
    if ((int)pGVar4->max_length <= (int)uVar7) {
      uVar7 = 0;
      pGVar2 = *ppGStack_6;
      if (pGVar2 != (GizmoLineSlider3DSettings__Array *)0x0) {
        ppGVar9 = pGVar2->vector;
        goto code_?;
      }
      break;
    }
  }
code_?:
  func_?();
code_?:
  uVar12 = func_?(0);
  func_?(uVar12);
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Single get_BoxSliderHoverEps() */

float Assembly-CSharp.dll::RTG::ScaleGizmoSettings3D::ScaleGizmoSettings3D_get_BoxSliderHoverEps
                (ScaleGizmoSettings3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sglSliderSettings;
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


/* Single get_CylinderSliderHoverEps() */

float Assembly-CSharp.dll::RTG::ScaleGizmoSettings3D::
      ScaleGizmoSettings3D_get_CylinderSliderHoverEps(ScaleGizmoSettings3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sglSliderSettings;
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


/* Single get_DragSensitivity() */

float Assembly-CSharp.dll::RTG::ScaleGizmoSettings3D::ScaleGizmoSettings3D_get_DragSensitivity
                (ScaleGizmoSettings3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sglSliderSettings;
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


/* Single get_LineSliderHoverEps() */

float Assembly-CSharp.dll::RTG::ScaleGizmoSettings3D::ScaleGizmoSettings3D_get_LineSliderHoverEps
                (ScaleGizmoSettings3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sglSliderSettings;
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


/* Single get_XSnapStep() */

float Assembly-CSharp.dll::RTG::ScaleGizmoSettings3D::ScaleGizmoSettings3D_get_XSnapStep
                (ScaleGizmoSettings3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sglSliderSettings;
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


/* Single get_XYSnapStep() */

float Assembly-CSharp.dll::RTG::ScaleGizmoSettings3D::ScaleGizmoSettings3D_get_XYSnapStep
                (ScaleGizmoSettings3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._dblSliderSettings;
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


/* Single get_YSnapStep() */

float Assembly-CSharp.dll::RTG::ScaleGizmoSettings3D::ScaleGizmoSettings3D_get_YSnapStep
                (ScaleGizmoSettings3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sglSliderSettings;
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


/* Single get_YZSnapStep() */

float Assembly-CSharp.dll::RTG::ScaleGizmoSettings3D::ScaleGizmoSettings3D_get_YZSnapStep
                (ScaleGizmoSettings3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._dblSliderSettings;
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


/* Single get_ZSnapStep() */

float Assembly-CSharp.dll::RTG::ScaleGizmoSettings3D::ScaleGizmoSettings3D_get_ZSnapStep
                (ScaleGizmoSettings3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sglSliderSettings;
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


/* Single get_ZXSnapStep() */

float Assembly-CSharp.dll::RTG::ScaleGizmoSettings3D::ScaleGizmoSettings3D_get_ZXSnapStep
                (ScaleGizmoSettings3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._dblSliderSettings;
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


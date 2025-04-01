
/* Void ConnectDblSliderSettings(GizmoPlaneSlider2D) */

void Assembly-CSharp.dll::RTG::MoveGizmoSettings2D::MoveGizmoSettings2D_ConnectDblSliderSettings
               (MoveGizmoSettings2D *this,GizmoPlaneSlider2D *slider,MethodInfo *method)

{
  pGStack_1 = (GizmoPlaneSlider2DSettings *)&stack0xfffffffc;
  if (slider != (GizmoPlaneSlider2D *)0x0) {
    ppGStack_2 = &(slider->fields)._sharedSettings;
    pGStack_1 = (this->fields)._dblSliderSettings;
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


/* Void ConnectSliderSettings(GizmoLineSlider2D, Int32, AxisSign) */

void Assembly-CSharp.dll::RTG::MoveGizmoSettings2D::MoveGizmoSettings2D_ConnectSliderSettings
               (MoveGizmoSettings2D *this,GizmoLineSlider2D *slider,int32_t axisIndex,
               AxisSign__Enum axisSign,MethodInfo *method)

{
  pGStack_1 = (GizmoLineSlider2DSettings *)&stack0xfffffffc;
  pGVar2 = (this->fields)._sglSliderSettings;
  if (axisSign == AxisSign__Enum_Positive) {
    if (pGVar2 == (GizmoLineSlider2DSettings__Array *)0x0) goto code_?;
    if (pGVar2->max_length <= (uint)axisIndex) goto code_?;
  }
  else {
    if (pGVar2 == (GizmoLineSlider2DSettings__Array *)0x0) goto code_?;
    axisIndex = axisIndex + 2;
    if (pGVar2->max_length <= (uint)axisIndex) {
code_?:
      pGStack_1 = (GizmoLineSlider2DSettings *)0x0;
      ppGStack_3 = (GizmoLineSlider2DSettings **)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pGVar5 = pGVar2->vector[axisIndex];
  if (slider != (GizmoLineSlider2D *)0x0) {
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


/* GizmoLineSlider2DSettings GetSliderSettings(Int32, AxisSign) */

GizmoLineSlider2DSettings *
Assembly-CSharp.dll::RTG::MoveGizmoSettings2D::MoveGizmoSettings2D_GetSliderSettings
          (MoveGizmoSettings2D *this,int32_t axisIndex,AxisSign__Enum axisSign,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sglSliderSettings;
  if (axisSign == AxisSign__Enum_Positive) {
    if (pGVar2 == (GizmoLineSlider2DSettings__Array *)0x0) goto code_?;
    if (pGVar2->max_length <= (uint)axisIndex) goto code_?;
  }
  else {
    if (pGVar2 == (GizmoLineSlider2DSettings__Array *)0x0) {
code_?:
      uVar3 = func_?(&puStack_4);
      func_?(uVar3);
      pcVar5 = (code *)swi(3);
      pGVar6 = (GizmoLineSlider2DSettings *)(*pcVar5)();
      return pGVar6;
    }
    axisIndex = axisIndex + 2;
    if (pGVar2->max_length <= (uint)axisIndex) {
code_?:
      puStack_1 = (undefined1 *)0x0;
      puStack_7 = (undefined *)func_?();
      func_?();
      pcVar5 = (code *)swi(3);
      pGVar6 = (GizmoLineSlider2DSettings *)(*pcVar5)();
      return pGVar6;
    }
  }
  return pGVar2->vector[axisIndex];
}


/* Void SetDragSensitivity(Single) */

void Assembly-CSharp.dll::RTG::MoveGizmoSettings2D::MoveGizmoSettings2D_SetDragSensitivity
               (MoveGizmoSettings2D *this,float sensitivity,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderSettings;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider2DSettings__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    for (; (int)uVar2 < (int)pGVar1->max_length; uVar2 = uVar2 + 1) {
      if (pGVar1->max_length <= uVar2) goto code_?;
      if ((GizmoPlaneSlider3DSettings *)*ppGVar3 == (GizmoPlaneSlider3DSettings *)0x0)
      goto code_?;
      GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_OffsetSnapStepRight
                ((GizmoPlaneSlider3DSettings *)*ppGVar3,sensitivity,(MethodInfo *)0x0);
      ppGVar3 = ppGVar3 + 1;
    }
    this_00 = (this->fields)._dblSliderSettings;
    if (this_00 != (GizmoPlaneSlider2DSettings *)0x0) {
      UniversalGizmoSettings3D::UniversalGizmoSettings3D_SetScUniformScaleSnapStep
                ((UniversalGizmoSettings3D *)this_00,sensitivity,(MethodInfo *)0x0);
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


/* Void SetXSnapStep(Single) */

void Assembly-CSharp.dll::RTG::MoveGizmoSettings2D::MoveGizmoSettings2D_SetXSnapStep
               (MoveGizmoSettings2D *this,float snapStep,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderSettings;
  if (pGVar1 != (GizmoLineSlider2DSettings__Array *)0x0) {
    if (pGVar1->max_length == 0) goto code_?;
    if (pGVar1->vector[0] != (GizmoLineSlider2DSettings *)0x0) {
      GizmoLineSlider2DSettings::GizmoLineSlider2DSettings_set_OffsetSnapStep
                (pGVar1->vector[0],snapStep,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._sglSliderSettings;
      if (pGVar1 != (GizmoLineSlider2DSettings__Array *)0x0) {
        if (pGVar1->max_length < 3) goto code_?;
        if (pGVar1->vector[2] != (GizmoLineSlider2DSettings *)0x0) {
          GizmoLineSlider2DSettings::GizmoLineSlider2DSettings_set_OffsetSnapStep
                    (pGVar1->vector[2],snapStep,(MethodInfo *)0x0);
          this_00 = (this->fields)._dblSliderSettings;
          if (this_00 != (GizmoPlaneSlider2DSettings *)0x0) {
            ObjectKeyRotationSettings::ObjectKeyRotationSettings_set_XRotationStep
                      ((ObjectKeyRotationSettings *)this_00,snapStep,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetYSnapStep(Single) */

void Assembly-CSharp.dll::RTG::MoveGizmoSettings2D::MoveGizmoSettings2D_SetYSnapStep
               (MoveGizmoSettings2D *this,float snapStep,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderSettings;
  if (pGVar1 != (GizmoLineSlider2DSettings__Array *)0x0) {
    if (pGVar1->max_length < 2) goto code_?;
    if (pGVar1->vector[1] != (GizmoLineSlider2DSettings *)0x0) {
      GizmoLineSlider2DSettings::GizmoLineSlider2DSettings_set_OffsetSnapStep
                (pGVar1->vector[1],snapStep,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._sglSliderSettings;
      if (pGVar1 != (GizmoLineSlider2DSettings__Array *)0x0) {
        if (pGVar1->max_length < 4) goto code_?;
        if (pGVar1->vector[3] != (GizmoLineSlider2DSettings *)0x0) {
          GizmoLineSlider2DSettings::GizmoLineSlider2DSettings_set_OffsetSnapStep
                    (pGVar1->vector[3],snapStep,(MethodInfo *)0x0);
          this_00 = (this->fields)._dblSliderSettings;
          if (this_00 != (GizmoPlaneSlider2DSettings *)0x0) {
            ObjectKeyRotationSettings::ObjectKeyRotationSettings_set_YRotationStep
                      ((ObjectKeyRotationSettings *)this_00,snapStep,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MoveGizmoSettings2D() */

void Assembly-CSharp.dll::RTG::MoveGizmoSettings2D::MoveGizmoSettings2D__ctor
               (MoveGizmoSettings2D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoLineSlider2DSettings);
    func_?(&TypeInfo__RTG__GizmoLineSlider2DSettings);
    func_?(&TypeInfo__RTG__GizmoPlaneSlider2DSettings);
    cRam_? = '\x01';
  }
  this_00 = (GizmoPlaneSlider2DSettings *)func_?(TypeInfo__RTG__GizmoPlaneSlider2DSettings)
  ;
  GizmoPlaneSlider2DSettings::GizmoPlaneSlider2DSettings__ctor(this_00,(MethodInfo *)0x0);
  this_01 = (GizmoLineSlider2DSettings *)&(this->fields)._dblSliderSettings;
  *(GizmoPlaneSlider2DSettings **)this_01 = this_00;
  func_?(this_01,this_00);
  pGVar1 = (GizmoLineSlider2DSettings__Array *)
           func_?(TypeInfo__RTG__GizmoLineSlider2DSettings,4);
  ppGVar2 = &(this->fields)._sglSliderSettings;
  *ppGVar2 = pGVar1;
  func_?(ppGVar2,pGVar1);
  Settings::Settings__ctor((Settings *)this,(MethodInfo *)0x0);
  pGVar1 = *ppGVar2;
  uVar3 = 0;
  do {
    if (pGVar1 == (GizmoLineSlider2DSettings__Array *)0x0) {
code_?:
      func_?();
code_?:
      uVar4 = func_?(0);
      func_?(uVar4);
code_?:
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((int)pGVar1->max_length <= (int)uVar3) {
      if (this_01->klass != (GizmoLineSlider2DSettings__Class *)0x0) {
        (this_01->klass->_0).castClass = (Il2CppClass *)0x1;
        return;
      }
      goto code_?;
    }
    pGVar1 = *ppGVar2;
    this_01 = (GizmoLineSlider2DSettings *)func_?(TypeInfo__RTG__GizmoLineSlider2DSettings)
    ;
    GizmoLineSlider2DSettings::GizmoLineSlider2DSettings__ctor(this_01,(MethodInfo *)0x0);
    if (pGVar1 == (GizmoLineSlider2DSettings__Array *)0x0) goto code_?;
    if ((this_01 != (GizmoLineSlider2DSettings *)0x0) &&
       (iVar6 = func_?(this_01,(pGVar1->klass->_0).element_class), iVar6 == 0))
    goto code_?;
    if (pGVar1->max_length <= uVar3) goto code_?;
    pGVar1->vector[uVar3] = this_01;
    func_?(pGVar1->vector + uVar3);
    uVar3 = uVar3 + 1;
    pGVar1 = *ppGVar2;
  } while( true );
}


/* Single get_YSnapStep() */

float Assembly-CSharp.dll::RTG::MoveGizmoSettings2D::MoveGizmoSettings2D_get_YSnapStep
                (MoveGizmoSettings2D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._dblSliderSettings;
  if (pGVar2 != (GizmoPlaneSlider2DSettings *)0x0) {
    return (pGVar2->fields)._offsetSnapStepUp;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


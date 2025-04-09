
/* Void ConnectCamLookSliderSettings(GizmoPlaneSlider2D) */

void Assembly-CSharp.dll::RTG::RotationGizmoSettings3D::
     RotationGizmoSettings3D_ConnectCamLookSliderSettings
               (RotationGizmoSettings3D *this,GizmoPlaneSlider2D *slider,MethodInfo *method)

{
  pGStack_1 = (GizmoPlaneSlider2DSettings *)&stack0xfffffffc;
  if (slider != (GizmoPlaneSlider2D *)0x0) {
    ppGStack_2 = &(slider->fields)._sharedSettings;
    pGStack_1 = (this->fields)._camLookSliderSettings;
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


/* Void SetAxisSnapStep(Int32, Single) */

void Assembly-CSharp.dll::RTG::RotationGizmoSettings3D::RotationGizmoSettings3D_SetAxisSnapStep
               (RotationGizmoSettings3D *this,int32_t axisIndex,float snapStep,MethodInfo *method)

{
  pGVar1 = (this->fields)._sliderSettings;
  if (pGVar1 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
    if (pGVar1->max_length <= (uint)axisIndex) {
      func_?();
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (pGVar1->vector[axisIndex] != (GizmoPlaneSlider3DSettings *)0x0) {
      UniversalGizmoSettings3D::UniversalGizmoSettings3D_SetRtCamUpSnapStep
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


/* Void SetCamLookLineHoverEps(Single) */

void Assembly-CSharp.dll::RTG::RotationGizmoSettings3D::
     RotationGizmoSettings3D_SetCamLookLineHoverEps
               (RotationGizmoSettings3D *this,float eps,MethodInfo *method)

{
  this_00 = (this->fields)._camLookSliderSettings;
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


/* Void SetCamLookSnapStep(Single) */

void Assembly-CSharp.dll::RTG::RotationGizmoSettings3D::RotationGizmoSettings3D_SetCamLookSnapStep
               (RotationGizmoSettings3D *this,float snapStep,MethodInfo *method)

{
  this_00 = (this->fields)._camLookSliderSettings;
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


/* Void SetCamLookThickHoverEps(Single) */

void Assembly-CSharp.dll::RTG::RotationGizmoSettings3D::
     RotationGizmoSettings3D_SetCamLookThickHoverEps
               (RotationGizmoSettings3D *this,float eps,MethodInfo *method)

{
  this_00 = (GizmoPlaneSlider3DSettings *)(this->fields)._camLookSliderSettings;
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


/* Void SetCanHoverCulledPixels(Boolean) */

void Assembly-CSharp.dll::RTG::RotationGizmoSettings3D::
     RotationGizmoSettings3D_SetCanHoverCulledPixels
               (RotationGizmoSettings3D *this,bool canHover,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._sliderSettings;
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


/* Void SetDragSensitivity(Single) */

void Assembly-CSharp.dll::RTG::RotationGizmoSettings3D::RotationGizmoSettings3D_SetDragSensitivity
               (RotationGizmoSettings3D *this,float sensitivity,MethodInfo *method)

{
  pGVar1 = (this->fields)._sliderSettings;
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
    this_00 = (GizmoPlaneSlider3DSettings *)(this->fields)._camLookSliderSettings;
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


/* Void SetSnapMode(GizmoSnapMode) */

void Assembly-CSharp.dll::RTG::RotationGizmoSettings3D::RotationGizmoSettings3D_SetSnapMode
               (RotationGizmoSettings3D *this,GizmoSnapMode__Enum snapMode,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._sliderSettings;
  if (pGVar2 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    for (; (int)uVar1 < (int)pGVar2->max_length; uVar1 = uVar1 + 1) {
      if (pGVar2->max_length <= uVar1) goto code_?;
      if (*ppGVar3 == (GizmoPlaneSlider3DSettings *)0x0) goto code_?;
      ((*ppGVar3)->fields)._rotationSnapMode = snapMode;
      ppGVar3 = ppGVar3 + 1;
    }
    pGVar4 = (this->fields)._camLookSliderSettings;
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


/* RotationGizmoSettings3D() */

void Assembly-CSharp.dll::RTG::RotationGizmoSettings3D::RotationGizmoSettings3D__ctor
               (RotationGizmoSettings3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoPlaneSlider2DSettings);
    func_?(&TypeInfo__RTG__GizmoPlaneSlider3DSettings);
    func_?(&TypeInfo__RTG__GizmoPlaneSlider3DSettings);
    cRam_? = '\x01';
  }
  (this->fields)._camRightSnapStep = 15.0;
  (this->fields)._camUpSnapStep = 15.0;
  pGVar1 = (GizmoPlaneSlider3DSettings__Array *)
           func_?(TypeInfo__RTG__GizmoPlaneSlider3DSettings,3);
  ppGVar2 = &(this->fields)._sliderSettings;
  *ppGVar2 = pGVar1;
  func_?(ppGVar2,pGVar1);
  this_00 = (GizmoPlaneSlider2DSettings *)func_?(TypeInfo__RTG__GizmoPlaneSlider2DSettings)
  ;
  GizmoPlaneSlider2DSettings::GizmoPlaneSlider2DSettings__ctor(this_00,(MethodInfo *)0x0);
  this_01 = (GizmoPlaneSlider3DSettings *)&(this->fields)._camLookSliderSettings;
  *(GizmoPlaneSlider2DSettings **)this_01 = this_00;
  func_?(this_01,this_00);
  Settings::Settings__ctor((Settings *)this,(MethodInfo *)0x0);
  uVar3 = 0;
  pGVar1 = *ppGVar2;
  while (pGVar1 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
    if ((int)pGVar1->max_length <= (int)uVar3) {
      if (this_01->klass != (GizmoPlaneSlider3DSettings__Class *)0x0) {
        Sphere::Sphere_set_Radius((Sphere *)this_01->klass,7.0,(MethodInfo *)0x0);
        pGVar1 = *ppGVar2;
        uVar3 = 0;
        if (pGVar1 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
          ppGVar4 = pGVar1->vector;
          goto code_?;
        }
      }
      break;
    }
    pGVar1 = *ppGVar2;
    this_01 = (GizmoPlaneSlider3DSettings *)
              func_?(TypeInfo__RTG__GizmoPlaneSlider3DSettings);
    GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings__ctor(this_01,(MethodInfo *)0x0);
    if (pGVar1 == (GizmoPlaneSlider3DSettings__Array *)0x0) break;
    if ((this_01 != (GizmoPlaneSlider3DSettings *)0x0) &&
       (iVar5 = func_?(this_01,(pGVar1->klass->_0).element_class), iVar5 == 0))
    goto code_?;
    if (pGVar1->max_length <= uVar3) goto code_?;
    pGVar1->vector[uVar3] = this_01;
    func_?(pGVar1->vector + uVar3);
    uVar3 = uVar3 + 1;
    pGVar1 = *ppGVar2;
  }
code_?:
  func_?();
code_?:
  uVar6 = func_?(0);
  func_?(uVar6);
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
code_?:
  if ((int)pGVar1->max_length <= (int)uVar3) goto code_?;
  if (pGVar1->max_length <= uVar3) goto code_?;
  if (*ppGVar4 == (GizmoPlaneSlider3DSettings *)0x0) goto code_?;
  uVar3 = uVar3 + 1;
  ((*ppGVar4)->fields)._isCircleHoverCullEnabled = 1;
  ppGVar4 = ppGVar4 + 1;
  goto code_?;
code_?:
  pGVar1 = *ppGVar2;
  uVar3 = 0;
  if (pGVar1 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
    ppGVar4 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar3) {
        return;
      }
      if (pGVar1->max_length <= uVar3) break;
      if (*ppGVar4 == (GizmoPlaneSlider3DSettings *)0x0) goto code_?;
      CameraMoveSettings::CameraMoveSettings_set_AccelerationRate
                ((CameraMoveSettings *)*ppGVar4,0.4,(MethodInfo *)0x0);
      uVar3 = uVar3 + 1;
      ppGVar4 = ppGVar4 + 1;
    }
    goto code_?;
  }
  goto code_?;
}


/* Single get_CamLookLineHoverEps() */

float Assembly-CSharp.dll::RTG::RotationGizmoSettings3D::
      RotationGizmoSettings3D_get_CamLookLineHoverEps
                (RotationGizmoSettings3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._camLookSliderSettings;
  if (pGVar2 != (GizmoPlaneSlider2DSettings *)0x0) {
    return (pGVar2->fields)._borderLineHoverEps;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Single get_CamLookSnapStep() */

float Assembly-CSharp.dll::RTG::RotationGizmoSettings3D::RotationGizmoSettings3D_get_CamLookSnapStep
                (RotationGizmoSettings3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._camLookSliderSettings;
  if (pGVar2 != (GizmoPlaneSlider2DSettings *)0x0) {
    return (pGVar2->fields)._rotationSnapStep;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Single get_CamLookThickHoverEps() */

float Assembly-CSharp.dll::RTG::RotationGizmoSettings3D::
      RotationGizmoSettings3D_get_CamLookThickHoverEps
                (RotationGizmoSettings3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._camLookSliderSettings;
  if (pGVar2 != (GizmoPlaneSlider2DSettings *)0x0) {
    return (pGVar2->fields)._thickBorderPolyHoverEps;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Boolean get_CanHoverCulledPixels() */

bool Assembly-CSharp.dll::RTG::RotationGizmoSettings3D::
     RotationGizmoSettings3D_get_CanHoverCulledPixels
               (RotationGizmoSettings3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sliderSettings;
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


/* Single get_DragSensitivity() */

float Assembly-CSharp.dll::RTG::RotationGizmoSettings3D::RotationGizmoSettings3D_get_DragSensitivity
                (RotationGizmoSettings3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sliderSettings;
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


/* GizmoSnapMode get_SnapMode() */

GizmoSnapMode__Enum
Assembly-CSharp.dll::RTG::RotationGizmoSettings3D::RotationGizmoSettings3D_get_SnapMode
          (RotationGizmoSettings3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sliderSettings;
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


/* Single get_XSnapStep() */

float Assembly-CSharp.dll::RTG::RotationGizmoSettings3D::RotationGizmoSettings3D_get_XSnapStep
                (RotationGizmoSettings3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sliderSettings;
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


/* Single get_YSnapStep() */

float Assembly-CSharp.dll::RTG::RotationGizmoSettings3D::RotationGizmoSettings3D_get_YSnapStep
                (RotationGizmoSettings3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sliderSettings;
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


/* Single get_ZSnapStep() */

float Assembly-CSharp.dll::RTG::RotationGizmoSettings3D::RotationGizmoSettings3D_get_ZSnapStep
                (RotationGizmoSettings3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sliderSettings;
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


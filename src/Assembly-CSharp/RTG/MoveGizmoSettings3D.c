
/* Void SetDragSensitivity(Single) */

void Assembly-CSharp.dll::RTG::MoveGizmoSettings3D::MoveGizmoSettings3D_SetDragSensitivity
               (MoveGizmoSettings3D *this,float sensitivity,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderSettings;
  uVar2 = 0;
  if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    for (; (int)uVar2 < (int)pGVar1->max_length; uVar2 = uVar2 + 1) {
      if (pGVar1->max_length <= uVar2) goto code_?;
      if ((UniversalGizmoSettings3D *)*ppGVar3 == (UniversalGizmoSettings3D *)0x0)
      goto code_?;
      UniversalGizmoSettings3D::UniversalGizmoSettings3D_SetRtCamRightSnapStep
                ((UniversalGizmoSettings3D *)*ppGVar3,sensitivity,(MethodInfo *)0x0);
      ppGVar3 = ppGVar3 + 1;
    }
    uVar2 = 0;
    pGVar4 = (this->fields)._dblSliderSettings;
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


/* Void SetXSnapStep(Single) */

void Assembly-CSharp.dll::RTG::MoveGizmoSettings3D::MoveGizmoSettings3D_SetXSnapStep
               (MoveGizmoSettings3D *this,float snapStep,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderSettings;
  if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
    if (pGVar1->max_length == 0) goto code_?;
    if (pGVar1->vector[0] != (GizmoLineSlider3DSettings *)0x0) {
      ObjectKeyRotationSettings::ObjectKeyRotationSettings_set_XRotationStep
                ((ObjectKeyRotationSettings *)pGVar1->vector[0],snapStep,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._sglSliderSettings;
      if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
        if (pGVar1->max_length < 4) goto code_?;
        if (pGVar1->vector[3] != (GizmoLineSlider3DSettings *)0x0) {
          ObjectKeyRotationSettings::ObjectKeyRotationSettings_set_XRotationStep
                    ((ObjectKeyRotationSettings *)pGVar1->vector[3],snapStep,(MethodInfo *)0x0);
          pGVar2 = (this->fields)._dblSliderSettings;
          if (pGVar2 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
            if (pGVar2->max_length == 0) goto code_?;
            if (pGVar2->vector[0] != (GizmoPlaneSlider3DSettings *)0x0) {
              GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_OffsetSnapStepRight
                        (pGVar2->vector[0],snapStep,(MethodInfo *)0x0);
              pGVar2 = (this->fields)._dblSliderSettings;
              if (pGVar2 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
                if (pGVar2->max_length < 3) goto code_?;
                if (pGVar2->vector[2] != (GizmoPlaneSlider3DSettings *)0x0) {
                  UniversalGizmoSettings3D::UniversalGizmoSettings3D_SetRtCamRightSnapStep
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


/* Void SetYSnapStep(Single) */

void Assembly-CSharp.dll::RTG::MoveGizmoSettings3D::MoveGizmoSettings3D_SetYSnapStep
               (MoveGizmoSettings3D *this,float snapStep,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderSettings;
  if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
    if (pGVar1->max_length < 2) goto code_?;
    if (pGVar1->vector[1] != (GizmoLineSlider3DSettings *)0x0) {
      ObjectKeyRotationSettings::ObjectKeyRotationSettings_set_XRotationStep
                ((ObjectKeyRotationSettings *)pGVar1->vector[1],snapStep,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._sglSliderSettings;
      if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
        if (pGVar1->max_length < 5) goto code_?;
        if (pGVar1->vector[4] != (GizmoLineSlider3DSettings *)0x0) {
          ObjectKeyRotationSettings::ObjectKeyRotationSettings_set_XRotationStep
                    ((ObjectKeyRotationSettings *)pGVar1->vector[4],snapStep,(MethodInfo *)0x0);
          pGVar2 = (this->fields)._dblSliderSettings;
          if (pGVar2 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
            if (pGVar2->max_length == 0) goto code_?;
            if (pGVar2->vector[0] != (GizmoPlaneSlider3DSettings *)0x0) {
              UniversalGizmoSettings3D::UniversalGizmoSettings3D_SetRtCamRightSnapStep
                        ((UniversalGizmoSettings3D *)pGVar2->vector[0],snapStep,(MethodInfo *)0x0);
              pGVar2 = (this->fields)._dblSliderSettings;
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


/* Void SetZSnapStep(Single) */

void Assembly-CSharp.dll::RTG::MoveGizmoSettings3D::MoveGizmoSettings3D_SetZSnapStep
               (MoveGizmoSettings3D *this,float snapStep,MethodInfo *method)

{
  pGVar1 = (this->fields)._sglSliderSettings;
  if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
    if (pGVar1->max_length < 3) goto code_?;
    if (pGVar1->vector[2] != (GizmoLineSlider3DSettings *)0x0) {
      ObjectKeyRotationSettings::ObjectKeyRotationSettings_set_XRotationStep
                ((ObjectKeyRotationSettings *)pGVar1->vector[2],snapStep,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._sglSliderSettings;
      if (pGVar1 != (GizmoLineSlider3DSettings__Array *)0x0) {
        if (pGVar1->max_length < 6) goto code_?;
        if (pGVar1->vector[5] != (GizmoLineSlider3DSettings *)0x0) {
          ObjectKeyRotationSettings::ObjectKeyRotationSettings_set_XRotationStep
                    ((ObjectKeyRotationSettings *)pGVar1->vector[5],snapStep,(MethodInfo *)0x0);
          pGVar2 = (this->fields)._dblSliderSettings;
          if (pGVar2 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
            if (pGVar2->max_length < 2) goto code_?;
            if (pGVar2->vector[1] != (GizmoPlaneSlider3DSettings *)0x0) {
              UniversalGizmoSettings3D::UniversalGizmoSettings3D_SetRtCamRightSnapStep
                        ((UniversalGizmoSettings3D *)pGVar2->vector[1],snapStep,(MethodInfo *)0x0);
              pGVar2 = (this->fields)._dblSliderSettings;
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


/* MoveGizmoSettings3D() */

void Assembly-CSharp.dll::RTG::MoveGizmoSettings3D::MoveGizmoSettings3D__ctor
               (MoveGizmoSettings3D *this,MethodInfo *method)

{
  pMVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoLineSlider3DSettings);
    func_?(&TypeInfo__RTG__GizmoLineSlider3DSettings);
    func_?(&TypeInfo__RTG__GizmoObjectVertexSnapSettings);
    func_?(&TypeInfo__RTG__GizmoPlaneSlider3DSettings);
    func_?(&TypeInfo__RTG__GizmoPlaneSlider3DSettings);
    cRam_? = '\x01';
  }
  this_00 = (GizmoObjectVertexSnapSettings *)
            func_?(TypeInfo__RTG__GizmoObjectVertexSnapSettings);
  GizmoObjectVertexSnapSettings::GizmoObjectVertexSnapSettings__ctor(this_00,(MethodInfo *)0x0);
  (this->fields)._vertexSnapSettings = this_00;
  func_?(&(this->fields)._vertexSnapSettings,this_00);
  pGVar2 = (GizmoLineSlider3DSettings__Array *)
           func_?(TypeInfo__RTG__GizmoLineSlider3DSettings,6);
  (this->fields)._sglSliderSettings = pGVar2;
  func_?(&(this->fields)._sglSliderSettings,pGVar2);
  pGVar3 = (GizmoPlaneSlider3DSettings__Array *)
           func_?(TypeInfo__RTG__GizmoPlaneSlider3DSettings,3);
  (this->fields)._dblSliderSettings = pGVar3;
  func_?(&(this->fields)._dblSliderSettings,pGVar3);
  Settings::Settings__ctor((Settings *)this,(MethodInfo *)0x0);
  pGVar2 = (this->fields)._sglSliderSettings;
  this = (MoveGizmoSettings3D *)0x0;
  while (pGVar2 != (GizmoLineSlider3DSettings__Array *)0x0) {
    if ((int)pGVar2->max_length <= (int)this) {
      pGVar3 = (pMVar1->fields)._dblSliderSettings;
      uVar4 = 0;
      if (pGVar3 != (GizmoPlaneSlider3DSettings__Array *)0x0) {
        iVar5 = 0x10;
        goto code_?;
      }
      break;
    }
    pGVar2 = (pMVar1->fields)._sglSliderSettings;
    this_01 = (GizmoLineSlider3DSettings *)func_?(TypeInfo__RTG__GizmoLineSlider3DSettings)
    ;
    GizmoLineSlider3DSettings::GizmoLineSlider3DSettings__ctor(this_01,(MethodInfo *)0x0);
    if (pGVar2 == (GizmoLineSlider3DSettings__Array *)0x0) break;
    if ((this_01 != (GizmoLineSlider3DSettings *)0x0) &&
       (iVar5 = func_?(this_01,(pGVar2->klass->_0).element_class), iVar5 == 0))
    goto code_?;
    if ((MoveGizmoSettings3D *)pGVar2->max_length <= this) goto code_?;
    pGVar2->vector[(int)this] = this_01;
    func_?(pGVar2->vector + (int)this,this_01);
    this = (MoveGizmoSettings3D *)((int)&this->klass + 1);
    pGVar2 = (pMVar1->fields)._sglSliderSettings;
  }
  goto code_?;
  while( true ) {
    pIVar6 = (Il2CppClass *)0x0;
    if (pGVar7 != (GizmoPlaneSlider3DSettings *)0x0) {
      pIVar6 = (pGVar3->klass->_0).element_class;
      iVar8 = func_?(pGVar7);
      if (iVar8 == 0) goto code_?;
    }
    if (pGVar3->max_length <= uVar4) goto code_?;
    *(Il2CppClass **)((int)pGVar3->vector + iVar5 + -0x10) = pIVar6;
    func_?((int)pGVar3->vector + iVar5 + -0x10,pIVar6);
    pGVar3 = (pMVar1->fields)._dblSliderSettings;
    if (pGVar3 == (GizmoPlaneSlider3DSettings__Array *)0x0) break;
    if (pGVar3->max_length <= uVar4) goto code_?;
    pGVar7 = *(GizmoPlaneSlider3DSettings **)((int)pGVar3->vector + iVar5 + -0x10);
    if (pGVar7 == (GizmoPlaneSlider3DSettings *)0x0) break;
    GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_AreaHoverEps
              (pGVar7,0.0,(MethodInfo *)0x0);
    pGVar3 = (pMVar1->fields)._dblSliderSettings;
    if (pGVar3 == (GizmoPlaneSlider3DSettings__Array *)0x0) break;
    if (pGVar3->max_length <= uVar4) goto code_?;
    pGVar7 = *(GizmoPlaneSlider3DSettings **)((int)pGVar3->vector + iVar5 + -0x10);
    if (pGVar7 == (GizmoPlaneSlider3DSettings *)0x0) break;
    GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_BorderLineHoverEps
              (pGVar7,0.0,(MethodInfo *)0x0);
    pGVar3 = (pMVar1->fields)._dblSliderSettings;
    if (pGVar3 == (GizmoPlaneSlider3DSettings__Array *)0x0) break;
    if (pGVar3->max_length <= uVar4) goto code_?;
    pGVar7 = *(GizmoPlaneSlider3DSettings **)((int)pGVar3->vector + iVar5 + -0x10);
    if (pGVar7 == (GizmoPlaneSlider3DSettings *)0x0) break;
    GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_BorderBoxHoverEps
              (pGVar7,0.0,(MethodInfo *)0x0);
    pGVar3 = (pMVar1->fields)._dblSliderSettings;
    uVar4 = uVar4 + 1;
    iVar5 = iVar5 + 4;
    if (pGVar3 == (GizmoPlaneSlider3DSettings__Array *)0x0) break;
code_?:
    if ((int)pGVar3->max_length <= (int)uVar4) {
      return;
    }
    pGVar3 = (pMVar1->fields)._dblSliderSettings;
    pGVar7 = (GizmoPlaneSlider3DSettings *)
             func_?(TypeInfo__RTG__GizmoPlaneSlider3DSettings);
    GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings__ctor(pGVar7,(MethodInfo *)0x0);
    if (pGVar3 == (GizmoPlaneSlider3DSettings__Array *)0x0) break;
  }
code_?:
  func_?();
code_?:
  uVar9 = func_?(0);
  func_?(uVar9);
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Single get_DragSensitivity() */

float Assembly-CSharp.dll::RTG::MoveGizmoSettings3D::MoveGizmoSettings3D_get_DragSensitivity
                (MoveGizmoSettings3D *this,MethodInfo *method)

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
      return (pGVar2->vector[0]->fields)._offsetSensitivity;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_XSnapStep() */

float Assembly-CSharp.dll::RTG::MoveGizmoSettings3D::MoveGizmoSettings3D_get_XSnapStep
                (MoveGizmoSettings3D *this,MethodInfo *method)

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
      return (pGVar2->vector[0]->fields)._offsetSnapStep;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_YSnapStep() */

float Assembly-CSharp.dll::RTG::MoveGizmoSettings3D::MoveGizmoSettings3D_get_YSnapStep
                (MoveGizmoSettings3D *this,MethodInfo *method)

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
      return (pGVar2->vector[1]->fields)._offsetSnapStep;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_ZSnapStep() */

float Assembly-CSharp.dll::RTG::MoveGizmoSettings3D::MoveGizmoSettings3D_get_ZSnapStep
                (MoveGizmoSettings3D *this,MethodInfo *method)

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
      return (pGVar2->vector[2]->fields)._offsetSnapStep;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


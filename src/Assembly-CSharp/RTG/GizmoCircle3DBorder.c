
/* Single GetRealCylTorusHeight(Single) */

float Assembly-CSharp.dll::RTG::GizmoCircle3DBorder::GizmoCircle3DBorder_GetRealCylTorusHeight
                (GizmoCircle3DBorder *this,float zoomFactor,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._planeSlider;
  if (pGVar2 != (GizmoPlaneSlider3D *)0x0) {
    if ((pGVar2->fields)._sharedLookAndFeel != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      return (((pGVar2->fields)._sharedLookAndFeel)->fields)._borderCylTorusHeight * zoomFactor *
             (((((this->fields)._planeSlider)->fields)._sharedLookAndFeel)->fields)._scale;
    }
    pGVar3 = (pGVar2->fields)._lookAndFeel;
    if (pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      return (pGVar3->fields)._borderCylTorusHeight * zoomFactor *
             (((((this->fields)._planeSlider)->fields)._lookAndFeel)->fields)._scale;
    }
  }
  uVar4 = func_?(auStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  fVar7 = (float10)(*pcVar6)();
  return (float)fVar7;
}


/* Single GetRealCylTorusWidth(Single) */

float Assembly-CSharp.dll::RTG::GizmoCircle3DBorder::GizmoCircle3DBorder_GetRealCylTorusWidth
                (GizmoCircle3DBorder *this,float zoomFactor,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._planeSlider;
  if (pGVar2 != (GizmoPlaneSlider3D *)0x0) {
    if ((pGVar2->fields)._sharedLookAndFeel != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      return (((pGVar2->fields)._sharedLookAndFeel)->fields)._borderCylTorusWidth * zoomFactor *
             (((((this->fields)._planeSlider)->fields)._sharedLookAndFeel)->fields)._scale;
    }
    pGVar3 = (pGVar2->fields)._lookAndFeel;
    if (pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      return (pGVar3->fields)._borderCylTorusWidth * zoomFactor *
             (((((this->fields)._planeSlider)->fields)._lookAndFeel)->fields)._scale;
    }
  }
  uVar4 = func_?(auStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  fVar7 = (float10)(*pcVar6)();
  return (float)fVar7;
}


/* Single GetRealTorusThickness(Single) */

float Assembly-CSharp.dll::RTG::GizmoCircle3DBorder::GizmoCircle3DBorder_GetRealTorusThickness
                (GizmoCircle3DBorder *this,float zoomFactor,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._planeSlider;
  if (pGVar2 != (GizmoPlaneSlider3D *)0x0) {
    if ((pGVar2->fields)._sharedLookAndFeel != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      return (((pGVar2->fields)._sharedLookAndFeel)->fields)._borderTorusThickness * zoomFactor *
             (((((this->fields)._planeSlider)->fields)._sharedLookAndFeel)->fields)._scale;
    }
    pGVar3 = (pGVar2->fields)._lookAndFeel;
    if (pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      return (pGVar3->fields)._borderTorusThickness * zoomFactor *
             (((((this->fields)._planeSlider)->fields)._lookAndFeel)->fields)._scale;
    }
  }
  uVar4 = func_?(auStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  fVar7 = (float10)(*pcVar6)();
  return (float)fVar7;
}


/* Void OnCircleShapeChanged() */

void Assembly-CSharp.dll::RTG::GizmoCircle3DBorder::GizmoCircle3DBorder_OnCircleShapeChanged
               (GizmoCircle3DBorder *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoCircle3DBorderController);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._targetHandle;
  if ((pGVar1 != (GizmoHandle *)0x0) && (this_00 = (pGVar1->fields)._gizmo, this_00 != (Gizmo *)0x0)
     ) {
    camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
    pGVar2 = (this->fields)._planeSlider;
    if (pGVar2 != (GizmoPlaneSlider3D *)0x0) {
      if ((pGVar2->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
        pGVar3 = (pGVar2->fields)._lookAndFeel;
        if (pGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
      }
      else {
        pGVar3 = (pGVar2->fields)._sharedLookAndFeel;
      }
      if ((pGVar3->fields)._useZoomFactor != 0) {
        pGVar1 = (pGVar2->fields)._._handle;
        if (pGVar1 == (GizmoHandle *)0x0) goto code_?;
        GizmoHandle::GizmoHandle_GetZoomFactor(pGVar1,camera,(MethodInfo *)0x0);
      }
      pGVar2 = (this->fields)._planeSlider;
      pIVar4 = (this->fields)._controllers;
      if (pGVar2 != (GizmoPlaneSlider3D *)0x0) {
        if ((pGVar2->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
          pGVar3 = (pGVar2->fields)._lookAndFeel;
          if (pGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
        }
        else {
          pGVar3 = (pGVar2->fields)._sharedLookAndFeel;
        }
        if (pIVar4 != (IGizmoCircle3DBorderController__Array *)0x0) {
          uVar5 = (pGVar3->fields)._circleBorderType;
          if (pIVar4->max_length <= uVar5) goto code_?;
          if (pIVar4->vector[uVar5] != (IGizmoCircle3DBorderController *)0x0) {
            func_?(2,TypeInfo__RTG__IGizmoCircle3DBorderController,pIVar4->vector[uVar5]);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnGizmoPreUpdateBegin(Gizmo) */

void Assembly-CSharp.dll::RTG::GizmoCircle3DBorder::GizmoCircle3DBorder_OnGizmoPreUpdateBegin
               (GizmoCircle3DBorder *this,Gizmo *gizmo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoCircle3DBorderController);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._targetHandle;
  if ((pGVar1 != (GizmoHandle *)0x0) && (this_00 = (pGVar1->fields)._gizmo, this_00 != (Gizmo *)0x0)
     ) {
    camera = Gizmo::Gizmo_get_FocusCamera(this_00,(MethodInfo *)0x0);
    pGVar2 = (this->fields)._planeSlider;
    if (pGVar2 != (GizmoPlaneSlider3D *)0x0) {
      if ((pGVar2->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
        pGVar3 = (pGVar2->fields)._lookAndFeel;
        if (pGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
      }
      else {
        pGVar3 = (pGVar2->fields)._sharedLookAndFeel;
      }
      fVar4 = _UNK_?;
      if ((pGVar3->fields)._useZoomFactor != 0) {
        pGVar1 = (pGVar2->fields)._._handle;
        if (pGVar1 == (GizmoHandle *)0x0) goto code_?;
        fVar4 = GizmoHandle::GizmoHandle_GetZoomFactor(pGVar1,camera,(MethodInfo *)0x0);
      }
      pGVar2 = (this->fields)._planeSlider;
      pIVar5 = (this->fields)._controllers;
      if (pGVar2 != (GizmoPlaneSlider3D *)0x0) {
        if ((pGVar2->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
          pGVar3 = (pGVar2->fields)._lookAndFeel;
          if (pGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
        }
        else {
          pGVar3 = (pGVar2->fields)._sharedLookAndFeel;
        }
        if (pIVar5 != (IGizmoCircle3DBorderController__Array *)0x0) {
          uVar6 = (pGVar3->fields)._circleBorderType;
          if (pIVar5->max_length <= uVar6) goto code_?;
          if (pIVar5->vector[uVar6] != (IGizmoCircle3DBorderController *)0x0) {
            func_?(0,TypeInfo__RTG__IGizmoCircle3DBorderController,pIVar5->vector[uVar6]);
            pGVar2 = (this->fields)._planeSlider;
            pIVar5 = (this->fields)._controllers;
            if (pGVar2 != (GizmoPlaneSlider3D *)0x0) {
              if ((pGVar2->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                pGVar3 = (pGVar2->fields)._lookAndFeel;
                if (pGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
              }
              else {
                pGVar3 = (pGVar2->fields)._sharedLookAndFeel;
              }
              if (pIVar5 != (IGizmoCircle3DBorderController__Array *)0x0) {
                uVar6 = (pGVar3->fields)._circleBorderType;
                if (pIVar5->max_length <= uVar6) goto code_?;
                if (pIVar5->vector[uVar6] != (IGizmoCircle3DBorderController *)0x0) {
                  func_?(1,TypeInfo__RTG__IGizmoCircle3DBorderController,
                                  pIVar5->vector[uVar6],fVar4);
                  return;
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


/* Void Render(Camera) */

void Assembly-CSharp.dll::RTG::GizmoCircle3DBorder::GizmoCircle3DBorder_Render
               (GizmoCircle3DBorder *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoCylindricalTorusCircle3DBorderController);
    func_?(&TypeInfo__RTG__GizmoTorusCircle3DBorderController);
    func_?(&MethodInfo__RTG__Singleton<RTG::GizmoCircularMaterial>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::GizmoCircularMaterial>);
    cRam_? = '\x01';
  }
  if ((this->fields)._isVisible == 0) {
    return;
  }
  pGVar1 = (this->fields)._planeSlider;
  if (pGVar1 != (GizmoPlaneSlider3D *)0x0) {
    if ((pGVar1->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      pGVar2 = (pGVar1->fields)._lookAndFeel;
      if (pGVar2 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
    }
    else {
      pGVar2 = (pGVar1->fields)._sharedLookAndFeel;
    }
    fVar3 = (pGVar2->fields)._borderColor.r;
    fVar4 = (pGVar2->fields)._borderColor.g;
    fVar5 = (pGVar2->fields)._borderColor.b;
    puVar6 = (undefined *)(pGVar2->fields)._borderColor.a;
    pGVar7 = (this->fields)._targetHandle;
    if ((pGVar7 != (GizmoHandle *)0x0) &&
       (this_00 = (pGVar7->fields)._gizmo, this_00 != (Gizmo *)0x0)) {
      iVar8 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
               PointerCaptureEventBase`1[System::Object]::
               PointerCaptureEventBase_1_System_Object__get_pointerId
                         ((PointerCaptureEventBase_1_System_Object_ *)this_00,(MethodInfo *)0x0);
      pGVar7 = (this->fields)._targetHandle;
      if (pGVar7 != (GizmoHandle *)0x0) {
        pGVar1 = (this->fields)._planeSlider;
        if (iVar8 == (pGVar7->fields)._id) {
          if (pGVar1 != (GizmoPlaneSlider3D *)0x0) {
            if ((pGVar1->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
              pGVar2 = (pGVar1->fields)._lookAndFeel;
              if (pGVar2 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
              fVar3 = (pGVar2->fields)._hoveredBorderColor.r;
              fVar4 = (pGVar2->fields)._hoveredBorderColor.g;
              fVar5 = (pGVar2->fields)._hoveredBorderColor.b;
              puVar6 = (undefined *)(pGVar2->fields)._hoveredBorderColor.a;
            }
            else {
              pGVar2 = (pGVar1->fields)._sharedLookAndFeel;
              fVar3 = (pGVar2->fields)._hoveredBorderColor.r;
              fVar4 = (pGVar2->fields)._hoveredBorderColor.g;
              fVar5 = (pGVar2->fields)._hoveredBorderColor.b;
              puVar6 = (undefined *)(pGVar2->fields)._hoveredBorderColor.a;
            }
code_?:
            if ((pGVar1->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
              pGVar2 = (pGVar1->fields)._lookAndFeel;
              if (pGVar2 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
            }
            else {
              pGVar2 = (pGVar1->fields)._sharedLookAndFeel;
            }
            if ((pGVar2->fields)._circleBorderType == 0) {
              if ((TypeInfo__RTG__Singleton<RTG::GizmoCircularMaterial>->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__RTG__Singleton<RTG::GizmoCircularMaterial>);
              }
              pGVar9 = (GizmoCircularMaterial *)
                        Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                                  (MethodInfo__RTG__Singleton<RTG::GizmoCircularMaterial>__get_Get__
                                  );
              if (pGVar9 != (GizmoCircularMaterial *)0x0) {
                (pGVar9->fields)._circularType = 0;
                GizmoCircularMaterial::GizmoCircularMaterial_ResetValuesToSensibleDefaults
                          (pGVar9,(MethodInfo *)0x0);
                GizmoCircularMaterial::GizmoCircularMaterial_SetCamera
                          (pGVar9,camera,(MethodInfo *)0x0);
                pCVar10 = (this->fields)._targetCircle;
                if (pCVar10 != (CircleShape3D *)0x0) {
                  GizmoCircularMaterial::GizmoCircularMaterial_SetShapeCenter
                            (pGVar9,(pCVar10->fields)._center,(MethodInfo *)0x0);
                  pGVar1 = (this->fields)._planeSlider;
                  if (pGVar1 != (GizmoPlaneSlider3D *)0x0) {
                    if ((pGVar1->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0)
                    {
                      pGVar2 = (pGVar1->fields)._lookAndFeel;
                      if (pGVar2 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
                    }
                    else {
                      pGVar2 = (pGVar1->fields)._sharedLookAndFeel;
                    }
                    GizmoCircularMaterial::GizmoCircularMaterial_SetCullAlphaScale
                              (pGVar9,(pGVar2->fields)._borderCircleCullAlphaScale,
                               (MethodInfo *)0x0);
                    color_01.g = fVar4;
                    color_01.r = fVar3;
                    color_01.b = fVar5;
                    color_01.a = (float)puVar6;
                    GizmoCircularMaterial::GizmoCircularMaterial_SetColor
                              (pGVar9,color_01,(MethodInfo *)0x0);
                    GizmoCircularMaterial::GizmoCircularMaterial_SetPass
                              (pGVar9,0,(MethodInfo *)0x0);
                    pGVar7 = (this->fields)._targetHandle;
                    if (pGVar7 != (GizmoHandle *)0x0) {
                      GizmoHandle::GizmoHandle_Render3DWire_1
                                (pGVar7,(this->fields)._borderCircleIndex,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
            else {
              pGVar1 = (this->fields)._planeSlider;
              if (pGVar1 != (GizmoPlaneSlider3D *)0x0) {
                if ((pGVar1->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                  pGVar2 = (pGVar1->fields)._lookAndFeel;
                  if (pGVar2 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
                }
                else {
                  pGVar2 = (pGVar1->fields)._sharedLookAndFeel;
                }
                if ((pGVar2->fields)._circleBorderType == 1) {
                  fVar4 = GizmoRATriangle3DBorder::GizmoRATriangle3DBorder_GetZoomFactor
                                     ((GizmoRATriangle3DBorder *)this,camera,(MethodInfo *)0x0);
                  fVar11 = 0.0;
                  fVar3 = fVar4;
                  fVar12 = GizmoCircle3DBorder_GetRealTorusThickness(this,fVar4,(MethodInfo *)0x0);
                  pGVar1 = (this->fields)._planeSlider;
                  if (pGVar1 != (GizmoPlaneSlider3D *)0x0) {
                    if ((pGVar1->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0)
                    {
                      pGVar2 = (pGVar1->fields)._lookAndFeel;
                      if (pGVar2 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
                    }
                    else {
                      pGVar2 = (pGVar1->fields)._sharedLookAndFeel;
                    }
                    iVar13 = (pGVar2->fields)._borderFillMode;
                    if ((TypeInfo__RTG__Singleton<RTG::GizmoCircularMaterial>->_1).
                        cctor_finished_or_no_cctor == 0) {
                      puVar6 = &UNK_?;
                      func_?();
                    }
                    pGVar9 = (GizmoCircularMaterial *)
                              Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                                        (
                                        MethodInfo__RTG__Singleton<RTG::GizmoCircularMaterial>__get_Get__
                                        );
                    if (pGVar9 != (GizmoCircularMaterial *)0x0) {
                      (pGVar9->fields)._circularType = (uint)(iVar13 == 0);
                      GizmoCircularMaterial::GizmoCircularMaterial_ResetValuesToSensibleDefaults
                                (pGVar9,(MethodInfo *)0x0);
                      GizmoCircularMaterial::GizmoCircularMaterial_SetCamera
                                (pGVar9,camera,(MethodInfo *)0x0);
                      pCVar10 = (this->fields)._targetCircle;
                      if (pCVar10 != (CircleShape3D *)0x0) {
                        GizmoCircularMaterial::GizmoCircularMaterial_SetShapeCenter
                                  (pGVar9,(pCVar10->fields)._center,(MethodInfo *)0x0);
                        pGVar1 = (this->fields)._planeSlider;
                        if (pGVar1 != (GizmoPlaneSlider3D *)0x0) {
                          if ((pGVar1->fields)._sharedLookAndFeel ==
                              (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                            pGVar2 = (pGVar1->fields)._lookAndFeel;
                            if (pGVar2 == (GizmoPlaneSlider3DLookAndFeel *)0x0)
                            goto code_?;
                          }
                          else {
                            pGVar2 = (pGVar1->fields)._sharedLookAndFeel;
                          }
                          GizmoCircularMaterial::GizmoCircularMaterial_SetCullAlphaScale
                                    (pGVar9,(pGVar2->fields)._borderCircleCullAlphaScale,
                                     (MethodInfo *)0x0);
                          color.g = fVar11;
                          color.r = fVar3;
                          color.b = fVar5;
                          color.a = (float)puVar6;
                          GizmoCircularMaterial::GizmoCircularMaterial_SetColor
                                    (pGVar9,color,(MethodInfo *)0x0);
                          pIVar14 = (this->fields)._controllers;
                          if (pIVar14 != (IGizmoCircle3DBorderController__Array *)0x0) {
                            if (pIVar14->max_length < 2) goto code_?;
                            pGVar15 = (GizmoTorusCircle3DBorderController *)pIVar14->vector[1];
                            if (((pGVar15 != (GizmoTorusCircle3DBorderController *)0x0) &&
                                ((TypeInfo__RTG__GizmoTorusCircle3DBorderController->_1).
                                 naturalAligment <= (pGVar15->klass->_1).naturalAligment)) &&
                               ((pGVar15->klass->_1).typeHierarchy
                                [(TypeInfo__RTG__GizmoTorusCircle3DBorderController->_1).
                                 naturalAligment - 1] ==
                                (Il2CppClass *)TypeInfo__RTG__GizmoTorusCircle3DBorderController)) {
                              this_03 = (GizmoTorusCircle3DBorderController *)0x0;
                              if ((pGVar15->klass->_1).typeHierarchy
                                  [(TypeInfo__RTG__GizmoTorusCircle3DBorderController->_1).
                                   naturalAligment - 1] ==
                                  (Il2CppClass *)TypeInfo__RTG__GizmoTorusCircle3DBorderController)
                              {
                                this_03 = pGVar15;
                              }
                              fVar3 = GizmoTorusCircle3DBorderController::
                                       GizmoTorusCircle3DBorderController_GetTorusCoreRadius
                                                 (this_03,fVar4,(MethodInfo *)0x0);
                              GizmoCircularMaterial::GizmoCircularMaterial_SetTorusCoreRadius
                                        (pGVar9,fVar3,(MethodInfo *)0x0);
                              GizmoCircularMaterial::GizmoCircularMaterial_SetTorusTubeRadius
                                        (pGVar9,fVar12 * _UNK_?,(MethodInfo *)0x0);
                              pGVar1 = (this->fields)._planeSlider;
                              if (pGVar1 != (GizmoPlaneSlider3D *)0x0) {
                                if ((pGVar1->fields)._sharedLookAndFeel ==
                                    (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                  pGVar2 = (pGVar1->fields)._lookAndFeel;
                                  if (pGVar2 == (GizmoPlaneSlider3DLookAndFeel *)0x0)
                                  goto code_?;
                                }
                                else {
                                  pGVar2 = (pGVar1->fields)._sharedLookAndFeel;
                                }
                                GizmoCircularMaterial::GizmoCircularMaterial_SetLit
                                          (pGVar9,(pGVar2->fields)._borderShadeMode == 0,
                                           (MethodInfo *)0x0);
                                bVar16 = GizmoCircularMaterial::GizmoCircularMaterial_get_IsLit
                                                   (pGVar9,(MethodInfo *)0x0);
                                if (bVar16 != 0) {
                                  if ((camera == (Camera *)0x0) ||
                                     (pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                                Component_get_transform
                                                          ((Component *)camera,(MethodInfo *)0x0),
                                     pTVar17 == (Transform *)0x0)) goto code_?;
                                  pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                            Transform_get_forward
                                                      ((Vector3 *)&stack0xffffffdc,pTVar17,
                                                       (MethodInfo *)0x0);
                                  GizmoCircularMaterial::GizmoCircularMaterial_SetLightDirection
                                            (pGVar9,*pVVar18,(MethodInfo *)0x0);
                                }
                                GizmoCircularMaterial::GizmoCircularMaterial_SetPass
                                          (pGVar9,0,(MethodInfo *)0x0);
                                if (iVar13 == 0) {
                                  pGVar7 = (this->fields)._targetHandle;
                                  if (pGVar7 != (GizmoHandle *)0x0) {
                                    GizmoHandle::GizmoHandle_Render3DSolid_1
                                              (pGVar7,(this->fields)._borderTorusIndex,
                                               (MethodInfo *)0x0);
                                    return;
                                  }
                                }
                                else {
                                  pTVar19 = (this->fields)._borderTorus;
                                  if (pTVar19 != (TorusShape3D *)0x0) {
                                    this_01 = (pTVar19->fields)._wireRenderDesc;
                                    pGVar1 = (this->fields)._planeSlider;
                                    if (pGVar1 != (GizmoPlaneSlider3D *)0x0) {
                                      if ((pGVar1->fields)._sharedLookAndFeel ==
                                          (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                        pGVar2 = (pGVar1->fields)._lookAndFeel;
                                        if (pGVar2 == (GizmoPlaneSlider3DLookAndFeel *)0x0)
                                        goto code_?;
                                      }
                                      else {
                                        pGVar2 = (pGVar1->fields)._sharedLookAndFeel;
                                      }
                                      if (this_01 != (TorusShape3D_WireRenderDescriptor *)0x0) {
                                        TorusShape3D+WireRenderDescriptor::
                                        TorusShape3D_WireRenderDescriptor_set_NumAxialSlices
                                                  (this_01,(pGVar2->fields).
                                                           _numBorderTorusWireAxialSlices,
                                                   (MethodInfo *)0x0);
                                        pGVar7 = (this->fields)._targetHandle;
                                        if (pGVar7 != (GizmoHandle *)0x0) {
                                          GizmoHandle::GizmoHandle_Render3DWire_1
                                                    (pGVar7,(this->fields)._borderTorusIndex,
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
                else {
                  pGVar1 = (this->fields)._planeSlider;
                  if ((pGVar1->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                    pGVar2 = (pGVar1->fields)._lookAndFeel;
                    if (pGVar2 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
                  }
                  else {
                    pGVar2 = (pGVar1->fields)._sharedLookAndFeel;
                  }
                  if ((pGVar2->fields)._circleBorderType != 2) {
                    return;
                  }
                  fVar5 = GizmoRATriangle3DBorder::GizmoRATriangle3DBorder_GetZoomFactor
                                     ((GizmoRATriangle3DBorder *)this,camera,(MethodInfo *)0x0);
                  fVar3 = fVar5;
                  GizmoCircle3DBorder_GetRealCylTorusWidth(this,fVar5,(MethodInfo *)0x0);
                  fVar11 = 0.0;
                  puVar6 = &UNK_?;
                  pGVar20 = this;
                  fVar4 = fVar5;
                  fVar12 = GizmoCircle3DBorder_GetRealCylTorusHeight(this,fVar5,(MethodInfo *)0x0);
                  pGVar1 = (this->fields)._planeSlider;
                  if (pGVar1 != (GizmoPlaneSlider3D *)0x0) {
                    if ((pGVar1->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0)
                    {
                      pGVar2 = (pGVar1->fields)._lookAndFeel;
                      if (pGVar2 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
                    }
                    else {
                      pGVar2 = (pGVar1->fields)._sharedLookAndFeel;
                    }
                    pSStack_21 = (Singleton_1_GizmoCircularMaterial___Class *)
                                (pGVar2->fields)._borderFillMode;
                    if ((TypeInfo__RTG__Singleton<RTG::GizmoCircularMaterial>->_1).
                        cctor_finished_or_no_cctor == 0) {
                      pSStack_21 = TypeInfo__RTG__Singleton<RTG::GizmoCircularMaterial>;
                      func_?();
                    }
                    pGVar9 = (GizmoCircularMaterial *)
                              Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                                        (
                                        MethodInfo__RTG__Singleton<RTG::GizmoCircularMaterial>__get_Get__
                                        );
                    if (pGVar9 != (GizmoCircularMaterial *)0x0) {
                      iVar8 = 2;
                      if (pSStack_21 != (Singleton_1_GizmoCircularMaterial___Class *)0x0) {
                        iVar8 = 0;
                      }
                      (pGVar9->fields)._circularType = iVar8;
                      GizmoCircularMaterial::GizmoCircularMaterial_ResetValuesToSensibleDefaults
                                (pGVar9,(MethodInfo *)0x0);
                      GizmoCircularMaterial::GizmoCircularMaterial_SetCamera
                                (pGVar9,camera,(MethodInfo *)0x0);
                      pCVar10 = (this->fields)._targetCircle;
                      if (pCVar10 != (CircleShape3D *)0x0) {
                        GizmoCircularMaterial::GizmoCircularMaterial_SetShapeCenter
                                  (pGVar9,(pCVar10->fields)._center,(MethodInfo *)0x0);
                        pGVar1 = (this->fields)._planeSlider;
                        if (pGVar1 != (GizmoPlaneSlider3D *)0x0) {
                          if ((pGVar1->fields)._sharedLookAndFeel ==
                              (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                            pGVar2 = (pGVar1->fields)._lookAndFeel;
                            if (pGVar2 == (GizmoPlaneSlider3DLookAndFeel *)0x0)
                            goto code_?;
                          }
                          else {
                            pGVar2 = (pGVar1->fields)._sharedLookAndFeel;
                          }
                          GizmoCircularMaterial::GizmoCircularMaterial_SetCullAlphaScale
                                    (pGVar9,(pGVar2->fields)._borderCircleCullAlphaScale,
                                     (MethodInfo *)0x0);
                          color_00.g = (float)puVar6;
                          color_00.r = fVar3;
                          color_00.b = (float)pGVar20;
                          color_00.a = fVar4;
                          GizmoCircularMaterial::GizmoCircularMaterial_SetColor
                                    (pGVar9,color_00,(MethodInfo *)0x0);
                          pIVar14 = (this->fields)._controllers;
                          if (pIVar14 != (IGizmoCircle3DBorderController__Array *)0x0) {
                            if (pIVar14->max_length < 3) goto code_?;
                            pGVar22 = (GizmoCylindricalTorusCircle3DBorderController *)
                                     pIVar14->vector[2];
                            if (((pGVar22 != (GizmoCylindricalTorusCircle3DBorderController *)0x0) &&
                                ((TypeInfo__RTG__GizmoCylindricalTorusCircle3DBorderController->_1).
                                 naturalAligment <= (pGVar22->klass->_1).naturalAligment)) &&
                               ((pGVar22->klass->_1).typeHierarchy
                                [(TypeInfo__RTG__GizmoCylindricalTorusCircle3DBorderController->_1).
                                 naturalAligment - 1] ==
                                (Il2CppClass *)
                                TypeInfo__RTG__GizmoCylindricalTorusCircle3DBorderController)) {
                              this_02 = (GizmoCylindricalTorusCircle3DBorderController *)0x0;
                              if ((pGVar22->klass->_1).typeHierarchy
                                  [(TypeInfo__RTG__GizmoCylindricalTorusCircle3DBorderController->_1
                                   ).naturalAligment - 1] ==
                                  (Il2CppClass *)
                                  TypeInfo__RTG__GizmoCylindricalTorusCircle3DBorderController) {
                                this_02 = pGVar22;
                              }
                              fVar3 = GizmoCylindricalTorusCircle3DBorderController::
                                       GizmoCylindricalTorusCircle3DBorderController_GetTorusCoreRadius
                                                 (this_02,fVar5,(MethodInfo *)0x0);
                              GizmoCircularMaterial::GizmoCircularMaterial_SetTorusCoreRadius
                                        (pGVar9,fVar3,(MethodInfo *)0x0);
                              GizmoCircularMaterial::GizmoCircularMaterial_SetCylindricalTorusRadii
                                        (pGVar9,fVar11 * _UNK_?,fVar12 * _UNK_?,
                                         (MethodInfo *)0x0);
                              pGVar1 = (this->fields)._planeSlider;
                              if (pGVar1 != (GizmoPlaneSlider3D *)0x0) {
                                if ((pGVar1->fields)._sharedLookAndFeel ==
                                    (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                  pGVar2 = (pGVar1->fields)._lookAndFeel;
                                  if (pGVar2 == (GizmoPlaneSlider3DLookAndFeel *)0x0)
                                  goto code_?;
                                }
                                else {
                                  pGVar2 = (pGVar1->fields)._sharedLookAndFeel;
                                }
                                GizmoCircularMaterial::GizmoCircularMaterial_SetLit
                                          (pGVar9,(pGVar2->fields)._borderShadeMode == 0,
                                           (MethodInfo *)0x0);
                                bVar16 = GizmoCircularMaterial::GizmoCircularMaterial_get_IsLit
                                                   (pGVar9,(MethodInfo *)0x0);
                                if (bVar16 != 0) {
                                  if ((camera == (Camera *)0x0) ||
                                     (pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                                Component_get_transform
                                                          ((Component *)camera,(MethodInfo *)0x0),
                                     pTVar17 == (Transform *)0x0)) goto code_?;
                                  pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                            Transform_get_forward
                                                      ((Vector3 *)&stack0xffffffdc,pTVar17,
                                                       (MethodInfo *)0x0);
                                  GizmoCircularMaterial::GizmoCircularMaterial_SetLightDirection
                                            (pGVar9,*pVVar18,(MethodInfo *)0x0);
                                }
                                GizmoCircularMaterial::GizmoCircularMaterial_SetPass
                                          (pGVar9,0,(MethodInfo *)0x0);
                                pGVar7 = (this->fields)._targetHandle;
                                if (pSStack_21 == (Singleton_1_GizmoCircularMaterial___Class *)0x0) {
                                  if (pGVar7 != (GizmoHandle *)0x0) {
                                    GizmoHandle::GizmoHandle_Render3DSolid_1
                                              (pGVar7,(this->fields)._borderCylTorusIndex,
                                               (MethodInfo *)0x0);
                                    return;
                                  }
                                }
                                else if (pGVar7 != (GizmoHandle *)0x0) {
                                  GizmoHandle::GizmoHandle_Render3DWire_1
                                            (pGVar7,(this->fields)._borderCylTorusIndex,
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
        else if (pGVar1 != (GizmoPlaneSlider3D *)0x0) goto code_?;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Void SetHoverable(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoCircle3DBorder::GizmoCircle3DBorder_SetHoverable
               (GizmoCircle3DBorder *this,bool isHoverable,MethodInfo *method)

{
  pGVar1 = (this->fields)._targetHandle;
  (this->fields)._isHoverable = isHoverable;
  if (pGVar1 != (GizmoHandle *)0x0) {
    GizmoHandle::GizmoHandle_Set3DShapeHoverable
              (pGVar1,(this->fields)._borderCircleIndex,isHoverable,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._targetHandle;
    if (pGVar1 != (GizmoHandle *)0x0) {
      GizmoHandle::GizmoHandle_Set3DShapeHoverable
                (pGVar1,(this->fields)._borderTorusIndex,isHoverable,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._targetHandle;
      if (pGVar1 != (GizmoHandle *)0x0) {
        GizmoHandle::GizmoHandle_Set3DShapeHoverable
                  (pGVar1,(this->fields)._borderCylTorusIndex,isHoverable,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetVisible(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoCircle3DBorder::GizmoCircle3DBorder_SetVisible
               (GizmoCircle3DBorder *this,bool isVisible,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoCircle3DBorderController);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._controllers;
  (this->fields)._isVisible = isVisible;
  pGVar2 = (this->fields)._planeSlider;
  if (pGVar2 != (GizmoPlaneSlider3D *)0x0) {
    if ((pGVar2->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      pGVar3 = (pGVar2->fields)._lookAndFeel;
      if (pGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
    }
    else {
      pGVar3 = (pGVar2->fields)._sharedLookAndFeel;
    }
    if (pIVar1 != (IGizmoCircle3DBorderController__Array *)0x0) {
      uVar4 = (pGVar3->fields)._circleBorderType;
      if (pIVar1->max_length <= uVar4) goto code_?;
      if (pIVar1->vector[uVar4] != (IGizmoCircle3DBorderController *)0x0) {
        func_?(0,TypeInfo__RTG__IGizmoCircle3DBorderController,pIVar1->vector[uVar4]);
        if ((this->fields)._isVisible == 0) {
          return;
        }
        pGVar5 = (this->fields)._targetHandle;
        if ((pGVar5 != (GizmoHandle *)0x0) &&
           (this_00 = (pGVar5->fields)._gizmo, this_00 != (Gizmo *)0x0)) {
          camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
          fVar6 = GizmoRATriangle3DBorder::GizmoRATriangle3DBorder_GetZoomFactor
                            ((GizmoRATriangle3DBorder *)this,camera,(MethodInfo *)0x0);
          pGVar2 = (this->fields)._planeSlider;
          pIVar1 = (this->fields)._controllers;
          if (pGVar2 != (GizmoPlaneSlider3D *)0x0) {
            if ((pGVar2->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
              pGVar3 = (pGVar2->fields)._lookAndFeel;
              if (pGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
            }
            else {
              pGVar3 = (pGVar2->fields)._sharedLookAndFeel;
            }
            if (pIVar1 != (IGizmoCircle3DBorderController__Array *)0x0) {
              uVar4 = (pGVar3->fields)._circleBorderType;
              if (pIVar1->max_length <= uVar4) goto code_?;
              if (pIVar1->vector[uVar4] != (IGizmoCircle3DBorderController *)0x0) {
                func_?(1,TypeInfo__RTG__IGizmoCircle3DBorderController,
                                pIVar1->vector[uVar4],fVar6);
                GizmoCircle3DBorder_OnCircleShapeChanged(this,(MethodInfo *)0x0);
                return;
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


/* GizmoCircle3DBorder(GizmoPlaneSlider3D, GizmoHandle, CircleShape3D) */

void Assembly-CSharp.dll::RTG::GizmoCircle3DBorder::GizmoCircle3DBorder__ctor
               (GizmoCircle3DBorder *this,GizmoPlaneSlider3D *planeSlider,GizmoHandle *targetHandle,
               CircleShape3D *targetCircle,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CircleShape3D);
    func_?(&TypeInfo__RTG__CylTorusShape3D);
    func_?(&TypeInfo__System__Enum);
    func_?(&TypeInfo__RTG__GizmoCircle3DBorderControllerData);
    func_?(&TypeRef__RTG__GizmoCircle3DBorderType);
    func_?(&MethodInfo__RTG__GizmoCircle3DBorder__OnGizmoPreUpdateBegin_RTG__Gizmo_);
    func_?(&TypeInfo__RTG__GizmoCylindricalTorusCircle3DBorderController);
    func_?(&TypeInfo__RTG__GizmoPreUpdateBeginHandler);
    func_?(&TypeInfo__RTG__GizmoThinCircle3DBorderController);
    func_?(&TypeInfo__RTG__GizmoTorusCircle3DBorderController);
    func_?(&TypeInfo__RTG__IGizmoCircle3DBorderController);
    func_?(&TypeInfo__RTG__TorusShape3D);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  (this->fields)._isVisible = 1;
  (this->fields)._isHoverable = 1;
  pCVar1 = (CircleShape3D *)func_?(TypeInfo__RTG__CircleShape3D);
  CircleShape3D::CircleShape3D__ctor(pCVar1,(MethodInfo *)0x0);
  (this->fields)._borderCircle = pCVar1;
  func_?(&(this->fields)._borderCircle,pCVar1);
  pTVar2 = (TorusShape3D *)func_?(TypeInfo__RTG__TorusShape3D);
  TorusShape3D::TorusShape3D__ctor(pTVar2,(MethodInfo *)0x0);
  (this->fields)._borderTorus = pTVar2;
  func_?(&(this->fields)._borderTorus,pTVar2);
  this_02 = (CylTorusShape3D *)func_?(TypeInfo__RTG__CylTorusShape3D);
  CylTorusShape3D::CylTorusShape3D__ctor(this_02,(MethodInfo *)0x0);
  (this->fields)._borderCylTorus = this_02;
  func_?(&(this->fields)._borderCylTorus,this_02);
  pGVar3 = (GizmoCircle3DBorderControllerData *)
           func_?(TypeInfo__RTG__GizmoCircle3DBorderControllerData);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pGVar3,ExceptionArgument__Enum_obj,(MethodInfo *)planeSlider);
  (this->fields)._controllerData = pGVar3;
  func_?();
  handle = TypeRef__RTG__GizmoCircle3DBorderType;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this_03 = mscorlib.dll::System::Enum::Enum_GetValues(enumType,(MethodInfo *)0x0);
  if (this_03 == (Array *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
  }
  else {
    mscorlib.dll::System::Array::Array_get_Length(this_03,(MethodInfo *)0x0);
    pIVar4 = (IGizmoCircle3DBorderController__Array *)func_?();
    (this->fields)._controllers = pIVar4;
    method_00 = &(this->fields)._controllers;
    func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)this,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    (this->fields)._planeSlider = (GizmoPlaneSlider3D *)this;
    func_?();
    (this->fields)._targetHandle = (GizmoHandle *)this;
    func_?();
    (this->fields)._targetCircle = (CircleShape3D *)method_00;
    func_?(&(this->fields)._targetCircle,method_00);
    pGVar5 = (this->fields)._targetHandle;
    if (pGVar5 == (GizmoHandle *)0x0) goto code_?;
    iVar6 = GizmoHandle::GizmoHandle_Add3DShape
                      (pGVar5,(Shape3D *)(this->fields)._borderCircle,(MethodInfo *)0x0);
    (this->fields)._borderCircleIndex = iVar6;
    pCVar1 = (this->fields)._borderCircle;
    if (pCVar1 == (CircleShape3D *)0x0) goto code_?;
    (pCVar1->fields)._raycastMode = 1;
    pGVar5 = (this->fields)._targetHandle;
    if (pGVar5 == (GizmoHandle *)0x0) goto code_?;
    iVar6 = GizmoHandle::GizmoHandle_Add3DShape
                      (pGVar5,(Shape3D *)(this->fields)._borderTorus,(MethodInfo *)0x0);
    (this->fields)._borderTorusIndex = iVar6;
    pTVar2 = (this->fields)._borderTorus;
    if ((pTVar2 == (TorusShape3D *)0x0) ||
       (this_00 = (pTVar2->fields)._wireRenderDesc,
       this_00 == (TorusShape3D_WireRenderDescriptor *)0x0)) goto code_?;
    TorusShape3D+WireRenderDescriptor::TorusShape3D_WireRenderDescriptor_set_NumTubeSlices
              (this_00,0,(MethodInfo *)0x0);
    pGVar5 = (this->fields)._targetHandle;
    if (pGVar5 == (GizmoHandle *)0x0) goto code_?;
    iVar6 = GizmoHandle::GizmoHandle_Add3DShape
                      (pGVar5,(Shape3D *)(this->fields)._borderCylTorus,(MethodInfo *)0x0);
    (this->fields)._borderCylTorusIndex = iVar6;
    pGVar3 = (this->fields)._controllerData;
    if (pGVar3 == (GizmoCircle3DBorderControllerData *)0x0) goto code_?;
    (pGVar3->fields).Border = this;
    func_?();
    pGVar3 = (this->fields)._controllerData;
    if (pGVar3 == (GizmoCircle3DBorderControllerData *)0x0) goto code_?;
    (pGVar3->fields).PlaneSlider = (this->fields)._planeSlider;
    func_?();
    pGVar5 = (this->fields)._targetHandle;
    if (pGVar5 == (GizmoHandle *)0x0) goto code_?;
    pGVar3 = (this->fields)._controllerData;
    if (pGVar3 == (GizmoCircle3DBorderControllerData *)0x0) goto code_?;
    (pGVar3->fields).Gizmo = (pGVar5->fields)._gizmo;
    func_?();
    pGVar3 = (this->fields)._controllerData;
    if (pGVar3 == (GizmoCircle3DBorderControllerData *)0x0) goto code_?;
    (pGVar3->fields).TargetHandle = (this->fields)._targetHandle;
    func_?();
    pGVar3 = (this->fields)._controllerData;
    if (pGVar3 == (GizmoCircle3DBorderControllerData *)0x0) goto code_?;
    (pGVar3->fields).TargetCircle = (CircleShape3D *)method_00;
    func_?();
    pGVar3 = (this->fields)._controllerData;
    if (pGVar3 == (GizmoCircle3DBorderControllerData *)0x0) goto code_?;
    (pGVar3->fields).BorderCircle = (this->fields)._borderCircle;
    func_?();
    pGVar3 = (this->fields)._controllerData;
    if (pGVar3 == (GizmoCircle3DBorderControllerData *)0x0) goto code_?;
    (pGVar3->fields).BorderTorus = (this->fields)._borderTorus;
    func_?();
    pGVar3 = (this->fields)._controllerData;
    if (pGVar3 == (GizmoCircle3DBorderControllerData *)0x0) goto code_?;
    (pGVar3->fields).BorderCylTorus = (this->fields)._borderCylTorus;
    func_?();
    pGVar3 = (this->fields)._controllerData;
    if (pGVar3 == (GizmoCircle3DBorderControllerData *)0x0) goto code_?;
    (pGVar3->fields).BorderCircleIndex = (this->fields)._borderCircleIndex;
    pGVar3 = (this->fields)._controllerData;
    if (pGVar3 == (GizmoCircle3DBorderControllerData *)0x0) goto code_?;
    (pGVar3->fields).BorderTorusIndex = (this->fields)._borderTorusIndex;
    pGVar3 = (this->fields)._controllerData;
    if (pGVar3 == (GizmoCircle3DBorderControllerData *)0x0) goto code_?;
    (pGVar3->fields).BorderCylTorusIndex = (this->fields)._borderCylTorusIndex;
    pIVar4 = (this->fields)._controllers;
    pOVar7 = (Object__Class *)(this->fields)._controllerData;
    method_03 = TypeInfo__RTG__GizmoThinCircle3DBorderController;
    pOVar8 = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar8,ExceptionArgument__Enum_obj,(MethodInfo *)method_03);
    pOVar8[1].klass = pOVar7;
    func_?();
    if (pIVar4 == (IGizmoCircle3DBorderController__Array *)0x0) goto code_?;
    iVar9 = func_?();
    if (iVar9 == 0) goto code_?;
    if (pIVar4->max_length == 0) goto code_?;
    pIVar4->vector[0] = (IGizmoCircle3DBorderController *)pOVar8;
    func_?();
    method_02 = TypeInfo__RTG__GizmoTorusCircle3DBorderController;
    pIVar4 = (this->fields)._controllers;
    pOVar7 = (Object__Class *)(this->fields)._controllerData;
    pOVar8 = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar8,ExceptionArgument__Enum_obj,(MethodInfo *)method_02);
    pOVar8[1].klass = pOVar7;
    func_?();
    if (pIVar4 == (IGizmoCircle3DBorderController__Array *)0x0) goto code_?;
    iVar9 = func_?();
    if (iVar9 == 0) goto code_?;
    if (pIVar4->max_length < 2) goto code_?;
    pIVar4->vector[1] = (IGizmoCircle3DBorderController *)pOVar8;
    func_?();
    method_01 = TypeInfo__RTG__GizmoCylindricalTorusCircle3DBorderController;
    pIVar4 = (this->fields)._controllers;
    pOVar7 = (Object__Class *)(this->fields)._controllerData;
    pOVar8 = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar8,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
    pOVar8[1].klass = pOVar7;
    func_?();
    if (pIVar4 == (IGizmoCircle3DBorderController__Array *)0x0) goto code_?;
    iVar9 = func_?();
    if (iVar9 != 0) {
      if (pIVar4->max_length < 3) goto code_?;
      pIVar4->vector[2] = (IGizmoCircle3DBorderController *)pOVar8;
      func_?();
      pGVar5 = (this->fields)._targetHandle;
      if (pGVar5 != (GizmoHandle *)0x0) {
        this_01 = (pGVar5->fields)._gizmo;
        value = (GizmoPreUpdateBeginHandler *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
        VideoCapture+OnVideoCaptureResourceCreatedCallback::
        VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                  ((VideoCapture_OnVideoCaptureResourceCreatedCallback *)value,(Object *)this,
                   MethodInfo__RTG__GizmoCircle3DBorder__OnGizmoPreUpdateBegin_RTG__Gizmo_,
                   (MethodInfo *)0x0);
        if (this_01 != (Gizmo *)0x0) {
          Gizmo::Gizmo_add_PreUpdateBegin(this_01,value,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
  }
  func_?();
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}



/* Single GetRealCylTorusHeight(Single) */

float Assembly-CSharp.dll::RTG::GizmoCircle3DBorder::GizmoCircle3DBorder_GetRealCylTorusHeight
                (GizmoCircle3DBorder *this,float zoomFactor,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._planeSlider;
  if ((pGVar2 != (GizmoPlaneSlider3D *)0x0) &&
     ((pGVar3 = (pGVar2->fields)._sharedLookAndFeel, pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0
      || (pGVar3 = (pGVar2->fields)._lookAndFeel, pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0))))
  {
    return (pGVar3->fields)._borderCylTorusHeight * zoomFactor * (pGVar3->fields)._scale;
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
  if ((pGVar2 != (GizmoPlaneSlider3D *)0x0) &&
     ((pGVar3 = (pGVar2->fields)._sharedLookAndFeel, pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0
      || (pGVar3 = (pGVar2->fields)._lookAndFeel, pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0))))
  {
    return (pGVar3->fields)._borderCylTorusWidth * zoomFactor * (pGVar3->fields)._scale;
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
  if ((pGVar2 != (GizmoPlaneSlider3D *)0x0) &&
     ((pGVar3 = (pGVar2->fields)._sharedLookAndFeel, pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0
      || (pGVar3 = (pGVar2->fields)._lookAndFeel, pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0))))
  {
    return (pGVar3->fields)._borderTorusThickness * zoomFactor * (pGVar3->fields)._scale;
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
    if ((pGVar2 != (GizmoPlaneSlider3D *)0x0) &&
       ((pGVar3 = (pGVar2->fields)._sharedLookAndFeel,
        pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0 ||
        (pGVar3 = (pGVar2->fields)._lookAndFeel, pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0))))
    {
      if ((pGVar3->fields)._useZoomFactor != 0) {
        pGVar1 = (pGVar2->fields)._._handle;
        if (pGVar1 == (GizmoHandle *)0x0) goto code_?;
        GizmoHandle::GizmoHandle_GetZoomFactor(pGVar1,camera,(MethodInfo *)0x0);
      }
      pGVar2 = (this->fields)._planeSlider;
      pIVar4 = (this->fields)._controllers;
      if ((pGVar2 != (GizmoPlaneSlider3D *)0x0) &&
         (((pGVar3 = (pGVar2->fields)._sharedLookAndFeel,
           pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0 ||
           (pGVar3 = (pGVar2->fields)._lookAndFeel, pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0))
          && (pIVar4 != (IGizmoCircle3DBorderController__Array *)0x0)))) {
        uVar5 = (pGVar3->fields)._circleBorderType;
        if (pIVar4->max_length <= uVar5) goto code_?;
        if (pIVar4->vector[uVar5] != (IGizmoCircle3DBorderController *)0x0) {
          func_?(2,TypeInfo__RTG__IGizmoCircle3DBorderController,pIVar4->vector[uVar5]);
          return;
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
    if ((pGVar2 != (GizmoPlaneSlider3D *)0x0) &&
       ((pGVar3 = (pGVar2->fields)._sharedLookAndFeel,
        pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0 ||
        (pGVar3 = (pGVar2->fields)._lookAndFeel, pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0))))
    {
      fVar4 = _UNK_?;
      if ((pGVar3->fields)._useZoomFactor != 0) {
        pGVar1 = (pGVar2->fields)._._handle;
        if (pGVar1 == (GizmoHandle *)0x0) goto code_?;
        fVar4 = GizmoHandle::GizmoHandle_GetZoomFactor(pGVar1,camera,(MethodInfo *)0x0);
      }
      pGVar2 = (this->fields)._planeSlider;
      pIVar5 = (this->fields)._controllers;
      if ((pGVar2 != (GizmoPlaneSlider3D *)0x0) &&
         (((pGVar3 = (pGVar2->fields)._sharedLookAndFeel,
           pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0 ||
           (pGVar3 = (pGVar2->fields)._lookAndFeel, pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0))
          && (pIVar5 != (IGizmoCircle3DBorderController__Array *)0x0)))) {
        uVar6 = (pGVar3->fields)._circleBorderType;
        if (pIVar5->max_length <= uVar6) goto code_?;
        if (pIVar5->vector[uVar6] != (IGizmoCircle3DBorderController *)0x0) {
          func_?(0,TypeInfo__RTG__IGizmoCircle3DBorderController,pIVar5->vector[uVar6]);
          pGVar2 = (this->fields)._planeSlider;
          pIVar5 = (this->fields)._controllers;
          if (((pGVar2 != (GizmoPlaneSlider3D *)0x0) &&
              ((pGVar3 = (pGVar2->fields)._sharedLookAndFeel,
               pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0 ||
               (pGVar3 = (pGVar2->fields)._lookAndFeel,
               pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0)))) &&
             (pIVar5 != (IGizmoCircle3DBorderController__Array *)0x0)) {
            uVar6 = (pGVar3->fields)._circleBorderType;
            if (pIVar5->max_length <= uVar6) goto code_?;
            if (pIVar5->vector[uVar6] != (IGizmoCircle3DBorderController *)0x0) {
              func_?(1,TypeInfo__RTG__IGizmoCircle3DBorderController,pIVar5->vector[uVar6],
                              fVar4);
              return;
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
  if ((pGVar1 != (GizmoPlaneSlider3D *)0x0) &&
     ((pGVar2 = (pGVar1->fields)._sharedLookAndFeel,
      pGVar2 != (GizmoPlaneSlider3DLookAndFeel *)0x0 ||
      (pGVar2 = (pGVar1->fields)._lookAndFeel, pGVar2 != (GizmoPlaneSlider3DLookAndFeel *)0x0))))
  {
    puVar3 = (undefined *)(pGVar2->fields)._borderColor.r;
    pSVar4 = (Singleton_1_GizmoCircularMaterial___Class *)(pGVar2->fields)._borderColor.g;
    fVar5 = (pGVar2->fields)._borderColor.b;
    fVar6 = (pGVar2->fields)._borderColor.a;
    pGVar7 = (this->fields)._targetHandle;
    if ((pGVar7 != (GizmoHandle *)0x0) &&
       (this_00 = (pGVar7->fields)._gizmo, this_00 != (Gizmo *)0x0)) {
      iVar8 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
               PointerCaptureEventBase`1[System::Object]::
               PointerCaptureEventBase_1_System_Object__get_pointerId
                         ((PointerCaptureEventBase_1_System_Object_ *)this_00,(MethodInfo *)0x0);
      pGVar7 = (this->fields)._targetHandle;
      if (pGVar7 != (GizmoHandle *)0x0) {
        if (iVar8 == (pGVar7->fields)._id) {
          pGVar1 = (this->fields)._planeSlider;
          if ((pGVar1 != (GizmoPlaneSlider3D *)0x0) &&
             ((pGVar2 = (pGVar1->fields)._sharedLookAndFeel,
              pGVar2 != (GizmoPlaneSlider3DLookAndFeel *)0x0 ||
              (pGVar2 = (pGVar1->fields)._lookAndFeel,
              pGVar2 != (GizmoPlaneSlider3DLookAndFeel *)0x0)))) {
            puVar3 = (undefined *)(pGVar2->fields)._hoveredBorderColor.r;
            pSVar4 = (Singleton_1_GizmoCircularMaterial___Class *)
                      (pGVar2->fields)._hoveredBorderColor.g;
            fVar5 = (pGVar2->fields)._hoveredBorderColor.b;
            fVar6 = (pGVar2->fields)._hoveredBorderColor.a;
code_?:
            pGVar2 = (pGVar1->fields)._sharedLookAndFeel;
            if ((pGVar2 != (GizmoPlaneSlider3DLookAndFeel *)0x0) ||
               (pGVar2 = (pGVar1->fields)._lookAndFeel,
               pGVar2 != (GizmoPlaneSlider3DLookAndFeel *)0x0)) {
              if ((pGVar2->fields)._circleBorderType == 0) {
                if ((TypeInfo__RTG__Singleton<RTG::GizmoCircularMaterial>->_1).
                    cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__RTG__Singleton<RTG::GizmoCircularMaterial>);
                }
                pGVar9 = (GizmoCircularMaterial *)
                          Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                                    (
                                    MethodInfo__RTG__Singleton<RTG::GizmoCircularMaterial>__get_Get__
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
                    if ((pGVar1 != (GizmoPlaneSlider3D *)0x0) &&
                       ((pGVar2 = (pGVar1->fields)._sharedLookAndFeel,
                        pGVar2 != (GizmoPlaneSlider3DLookAndFeel *)0x0 ||
                        (pGVar2 = (pGVar1->fields)._lookAndFeel,
                        pGVar2 != (GizmoPlaneSlider3DLookAndFeel *)0x0)))) {
                      GizmoCircularMaterial::GizmoCircularMaterial_SetCullAlphaScale
                                (pGVar9,(pGVar2->fields)._borderCircleCullAlphaScale,
                                 (MethodInfo *)0x0);
                      color_01.g = (float)pSVar4;
                      color_01.r = (float)puVar3;
                      color_01.b = fVar5;
                      color_01.a = fVar6;
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
                pGVar2 = (pGVar1->fields)._sharedLookAndFeel;
                if ((pGVar2 != (GizmoPlaneSlider3DLookAndFeel *)0x0) ||
                   (pGVar2 = (pGVar1->fields)._lookAndFeel,
                   pGVar2 != (GizmoPlaneSlider3DLookAndFeel *)0x0)) {
                  if ((pGVar2->fields)._circleBorderType == 1) {
                    fVar11 = GizmoRATriangle3DBorder::GizmoRATriangle3DBorder_GetZoomFactor
                                       ((GizmoRATriangle3DBorder *)this,camera,(MethodInfo *)0x0);
                    pGVar1 = (this->fields)._planeSlider;
                    if ((pGVar1 != (GizmoPlaneSlider3D *)0x0) &&
                       ((pGVar2 = (pGVar1->fields)._sharedLookAndFeel,
                        pGVar2 != (GizmoPlaneSlider3DLookAndFeel *)0x0 ||
                        (pGVar2 = (pGVar1->fields)._lookAndFeel,
                        pGVar2 != (GizmoPlaneSlider3DLookAndFeel *)0x0)))) {
                      fVar12 = (pGVar2->fields)._borderTorusThickness;
                      fVar13 = (pGVar2->fields)._scale;
                      iVar14 = (pGVar2->fields)._borderFillMode;
                      if ((TypeInfo__RTG__Singleton<RTG::GizmoCircularMaterial>->_1).
                          cctor_finished_or_no_cctor == 0) {
                        puVar3 = &UNK_?;
                        pSVar4 = TypeInfo__RTG__Singleton<RTG::GizmoCircularMaterial>;
                        func_?();
                      }
                      pGVar9 = (GizmoCircularMaterial *)
                                Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                                          (
                                          MethodInfo__RTG__Singleton<RTG::GizmoCircularMaterial>__get_Get__
                                          );
                      if (pGVar9 != (GizmoCircularMaterial *)0x0) {
                        (pGVar9->fields)._circularType = (uint)(iVar14 == 0);
                        GizmoCircularMaterial::GizmoCircularMaterial_ResetValuesToSensibleDefaults
                                  (pGVar9,(MethodInfo *)0x0);
                        GizmoCircularMaterial::GizmoCircularMaterial_SetCamera
                                  (pGVar9,camera,(MethodInfo *)0x0);
                        pCVar10 = (this->fields)._targetCircle;
                        if (pCVar10 != (CircleShape3D *)0x0) {
                          GizmoCircularMaterial::GizmoCircularMaterial_SetShapeCenter
                                    (pGVar9,(pCVar10->fields)._center,(MethodInfo *)0x0);
                          pGVar1 = (this->fields)._planeSlider;
                          if ((pGVar1 != (GizmoPlaneSlider3D *)0x0) &&
                             ((pGVar2 = (pGVar1->fields)._sharedLookAndFeel,
                              pGVar2 != (GizmoPlaneSlider3DLookAndFeel *)0x0 ||
                              (pGVar2 = (pGVar1->fields)._lookAndFeel,
                              pGVar2 != (GizmoPlaneSlider3DLookAndFeel *)0x0)))) {
                            GizmoCircularMaterial::GizmoCircularMaterial_SetCullAlphaScale
                                      (pGVar9,(pGVar2->fields)._borderCircleCullAlphaScale,
                                       (MethodInfo *)0x0);
                            color.g = (float)pSVar4;
                            color.r = (float)puVar3;
                            color.b = fVar5;
                            color.a = fVar6;
                            GizmoCircularMaterial::GizmoCircularMaterial_SetColor
                                      (pGVar9,color,(MethodInfo *)0x0);
                            pIVar15 = (this->fields)._controllers;
                            if (pIVar15 != (IGizmoCircle3DBorderController__Array *)0x0) {
                              if (pIVar15->max_length < 2) goto code_?;
                              pGVar16 = (GizmoTorusCircle3DBorderController *)pIVar15->vector[1];
                              if (pGVar16 != (GizmoTorusCircle3DBorderController *)0x0) {
                                bVar17 = (TypeInfo__RTG__GizmoTorusCircle3DBorderController->_1).
                                        naturalAligment;
                                if ((bVar17 <= (pGVar16->klass->_1).naturalAligment) &&
                                   (ppIVar18 = (pGVar16->klass->_1).typeHierarchy,
                                   ppIVar18[bVar17 - 1] ==
                                   (Il2CppClass *)TypeInfo__RTG__GizmoTorusCircle3DBorderController)
                                   ) {
                                  this_02 = (GizmoTorusCircle3DBorderController *)0x0;
                                  if (ppIVar18[bVar17 - 1] ==
                                      (Il2CppClass *)
                                      TypeInfo__RTG__GizmoTorusCircle3DBorderController) {
                                    this_02 = pGVar16;
                                  }
                                  fVar5 = GizmoTorusCircle3DBorderController::
                                           GizmoTorusCircle3DBorderController_GetTorusCoreRadius
                                                     (this_02,fVar11,(MethodInfo *)0x0);
                                  GizmoCircularMaterial::GizmoCircularMaterial_SetTorusCoreRadius
                                            (pGVar9,fVar5,(MethodInfo *)0x0);
                                  GizmoCircularMaterial::GizmoCircularMaterial_SetTorusTubeRadius
                                            (pGVar9,fVar12 * fVar11 * fVar13 * _UNK_?,
                                             (MethodInfo *)0x0);
                                  pGVar1 = (this->fields)._planeSlider;
                                  if ((pGVar1 != (GizmoPlaneSlider3D *)0x0) &&
                                     ((pGVar2 = (pGVar1->fields)._sharedLookAndFeel,
                                      pGVar2 != (GizmoPlaneSlider3DLookAndFeel *)0x0 ||
                                      (pGVar2 = (pGVar1->fields)._lookAndFeel,
                                      pGVar2 != (GizmoPlaneSlider3DLookAndFeel *)0x0)))) {
                                    GizmoCircularMaterial::GizmoCircularMaterial_SetLit
                                              (pGVar9,(pGVar2->fields)._borderShadeMode == 0,
                                               (MethodInfo *)0x0);
                                    bVar19 = GizmoCircularMaterial::GizmoCircularMaterial_get_IsLit
                                                       (pGVar9,(MethodInfo *)0x0);
                                    if (bVar19 != 0) {
                                      if ((camera == (Camera *)0x0) ||
                                         (pTVar20 = UnityEngine.CoreModule.dll::UnityEngine::
                                                    Component::Component_get_transform
                                                              ((Component *)camera,(MethodInfo *)0x0
                                                              ), pTVar20 == (Transform *)0x0))
                                      goto code_?;
                                      pVVar21 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                                Transform_get_forward
                                                          ((Vector3 *)&stack0xffffffe0,pTVar20,
                                                           (MethodInfo *)0x0);
                                      GizmoCircularMaterial::GizmoCircularMaterial_SetLightDirection
                                                (pGVar9,*pVVar21,(MethodInfo *)0x0);
                                    }
                                    GizmoCircularMaterial::GizmoCircularMaterial_SetPass
                                              (pGVar9,0,(MethodInfo *)0x0);
                                    if (iVar14 == 0) {
                                      pGVar7 = (this->fields)._targetHandle;
                                      if (pGVar7 != (GizmoHandle *)0x0) {
                                        GizmoHandle::GizmoHandle_Render3DSolid_1
                                                  (pGVar7,(this->fields)._borderTorusIndex,
                                                   (MethodInfo *)0x0);
                                        return;
                                      }
                                    }
                                    else {
                                      pTVar22 = (this->fields)._borderTorus;
                                      if (pTVar22 != (TorusShape3D *)0x0) {
                                        pGVar1 = (this->fields)._planeSlider;
                                        this_01 = (pTVar22->fields)._wireRenderDesc;
                                        if ((pGVar1 != (GizmoPlaneSlider3D *)0x0) &&
                                           (((pGVar2 = (pGVar1->fields)._sharedLookAndFeel,
                                             pGVar2 != (GizmoPlaneSlider3DLookAndFeel *)0x0 ||
                                             (pGVar2 = (pGVar1->fields)._lookAndFeel,
                                             pGVar2 != (GizmoPlaneSlider3DLookAndFeel *)0x0)) &&
                                            (this_01 != (TorusShape3D_WireRenderDescriptor *)0x0))))
                                        {
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
                    pGVar2 = (pGVar1->fields)._sharedLookAndFeel;
                    if ((pGVar2 != (GizmoPlaneSlider3DLookAndFeel *)0x0) ||
                       (pGVar2 = (pGVar1->fields)._lookAndFeel,
                       pGVar2 != (GizmoPlaneSlider3DLookAndFeel *)0x0)) {
                      if ((pGVar2->fields)._circleBorderType != 2) {
                        return;
                      }
                      pSStack_23 = (Singleton_1_GizmoCircularMaterial___Class *)
                                  GizmoRATriangle3DBorder::GizmoRATriangle3DBorder_GetZoomFactor
                                            ((GizmoRATriangle3DBorder *)this,camera,
                                             (MethodInfo *)0x0);
                      pSVar4 = pSStack_23;
                      GizmoCircle3DBorder_GetRealCylTorusWidth
                                (this,(float)pSStack_23,(MethodInfo *)0x0);
                      fVar6 = 0.0;
                      puVar3 = &UNK_?;
                      pGVar24 = this;
                      pSVar25 = pSStack_23;
                      fVar5 = GizmoCircle3DBorder_GetRealCylTorusHeight
                                         (this,(float)pSStack_23,(MethodInfo *)0x0);
                      pGVar1 = (this->fields)._planeSlider;
                      if ((pGVar1 != (GizmoPlaneSlider3D *)0x0) &&
                         ((pGVar2 = (pGVar1->fields)._sharedLookAndFeel,
                          pGVar2 != (GizmoPlaneSlider3DLookAndFeel *)0x0 ||
                          (pGVar2 = (pGVar1->fields)._lookAndFeel,
                          pGVar2 != (GizmoPlaneSlider3DLookAndFeel *)0x0)))) {
                        puStack_26 = (undefined *)(pGVar2->fields)._borderFillMode;
                        if ((TypeInfo__RTG__Singleton<RTG::GizmoCircularMaterial>->_1).
                            cctor_finished_or_no_cctor == 0) {
                          pSStack_23 = TypeInfo__RTG__Singleton<RTG::GizmoCircularMaterial>;
                          func_?();
                        }
                        pGVar9 = (GizmoCircularMaterial *)
                                  Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                                            (
                                            MethodInfo__RTG__Singleton<RTG::GizmoCircularMaterial>__get_Get__
                                            );
                        if (pGVar9 != (GizmoCircularMaterial *)0x0) {
                          iVar8 = 2;
                          if (puStack_26 != (undefined *)0x0) {
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
                            if ((pGVar1 != (GizmoPlaneSlider3D *)0x0) &&
                               ((pGVar2 = (pGVar1->fields)._sharedLookAndFeel,
                                pGVar2 != (GizmoPlaneSlider3DLookAndFeel *)0x0 ||
                                (pGVar2 = (pGVar1->fields)._lookAndFeel,
                                pGVar2 != (GizmoPlaneSlider3DLookAndFeel *)0x0)))) {
                              GizmoCircularMaterial::GizmoCircularMaterial_SetCullAlphaScale
                                        (pGVar9,(pGVar2->fields)._borderCircleCullAlphaScale,
                                         (MethodInfo *)0x0);
                              color_00.g = (float)puVar3;
                              color_00.r = (float)pSVar4;
                              color_00.b = (float)pGVar24;
                              color_00.a = (float)pSVar25;
                              GizmoCircularMaterial::GizmoCircularMaterial_SetColor
                                        (pGVar9,color_00,(MethodInfo *)0x0);
                              pIVar15 = (this->fields)._controllers;
                              if (pIVar15 != (IGizmoCircle3DBorderController__Array *)0x0) {
                                if (pIVar15->max_length < 3) goto code_?;
                                pGVar27 = (GizmoCylindricalTorusCircle3DBorderController *)
                                         pIVar15->vector[2];
                                if (pGVar27 != (GizmoCylindricalTorusCircle3DBorderController *)0x0)
                                {
                                  bVar17 = (
                                          TypeInfo__RTG__GizmoCylindricalTorusCircle3DBorderController
                                          ->_1).naturalAligment;
                                  if ((bVar17 <= (pGVar27->klass->_1).naturalAligment) &&
                                     ((pGVar27->klass->_1).typeHierarchy[bVar17 - 1] ==
                                      (Il2CppClass *)
                                      TypeInfo__RTG__GizmoCylindricalTorusCircle3DBorderController))
                                  {
                                    this_03 = (GizmoCylindricalTorusCircle3DBorderController *)0x0;
                                    if ((pGVar27->klass->_1).typeHierarchy[bVar17 - 1] ==
                                        (Il2CppClass *)
                                        TypeInfo__RTG__GizmoCylindricalTorusCircle3DBorderController
                                       ) {
                                      this_03 = pGVar27;
                                    }
                                    fVar11 = GizmoCylindricalTorusCircle3DBorderController::
                                             GizmoCylindricalTorusCircle3DBorderController_GetTorusCoreRadius
                                                       (this_03,(float)pSStack_23,(MethodInfo *)0x0);
                                    GizmoCircularMaterial::GizmoCircularMaterial_SetTorusCoreRadius
                                              (pGVar9,fVar11,(MethodInfo *)0x0);
                                    GizmoCircularMaterial::
                                    GizmoCircularMaterial_SetCylindricalTorusRadii
                                              (pGVar9,fVar6 * _UNK_?,fVar5 * _UNK_?
                                               ,(MethodInfo *)0x0);
                                    pGVar1 = (this->fields)._planeSlider;
                                    if ((pGVar1 != (GizmoPlaneSlider3D *)0x0) &&
                                       ((pGVar2 = (pGVar1->fields)._sharedLookAndFeel,
                                        pGVar2 != (GizmoPlaneSlider3DLookAndFeel *)0x0 ||
                                        (pGVar2 = (pGVar1->fields)._lookAndFeel,
                                        pGVar2 != (GizmoPlaneSlider3DLookAndFeel *)0x0)))) {
                                      GizmoCircularMaterial::GizmoCircularMaterial_SetLit
                                                (pGVar9,(pGVar2->fields)._borderShadeMode == 0,
                                                 (MethodInfo *)0x0);
                                      bVar19 = GizmoCircularMaterial::
                                               GizmoCircularMaterial_get_IsLit
                                                         (pGVar9,(MethodInfo *)0x0);
                                      if (bVar19 != 0) {
                                        if ((camera == (Camera *)0x0) ||
                                           (pTVar20 = UnityEngine.CoreModule.dll::UnityEngine::
                                                      Component::Component_get_transform
                                                                ((Component *)camera,
                                                                 (MethodInfo *)0x0),
                                           pTVar20 == (Transform *)0x0)) goto code_?;
                                        pVVar21 = UnityEngine.CoreModule.dll::UnityEngine::Transform
                                                  ::Transform_get_forward
                                                            ((Vector3 *)&stack0xffffffe0,pTVar20,
                                                             (MethodInfo *)0x0);
                                        GizmoCircularMaterial::
                                        GizmoCircularMaterial_SetLightDirection
                                                  (pGVar9,*pVVar21,(MethodInfo *)0x0);
                                      }
                                      GizmoCircularMaterial::GizmoCircularMaterial_SetPass
                                                (pGVar9,0,(MethodInfo *)0x0);
                                      pGVar7 = (this->fields)._targetHandle;
                                      if (puStack_26 == (undefined *)0x0) {
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
            }
          }
        }
        else {
          pGVar1 = (this->fields)._planeSlider;
          if (pGVar1 != (GizmoPlaneSlider3D *)0x0) goto code_?;
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar28 = (code *)swi(3);
  (*pcVar28)();
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
  pGVar1 = (this->fields)._planeSlider;
  pIVar2 = (this->fields)._controllers;
  (this->fields)._isVisible = isVisible;
  if ((pGVar1 != (GizmoPlaneSlider3D *)0x0) &&
     (((pGVar3 = (pGVar1->fields)._sharedLookAndFeel, pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0
       || (pGVar3 = (pGVar1->fields)._lookAndFeel, pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0))
      && (pIVar2 != (IGizmoCircle3DBorderController__Array *)0x0)))) {
    uVar4 = (pGVar3->fields)._circleBorderType;
    if (pIVar2->max_length <= uVar4) goto code_?;
    if (pIVar2->vector[uVar4] != (IGizmoCircle3DBorderController *)0x0) {
      func_?(0,TypeInfo__RTG__IGizmoCircle3DBorderController,pIVar2->vector[uVar4]);
      if ((this->fields)._isVisible == 0) {
        return;
      }
      pGVar5 = (this->fields)._targetHandle;
      if ((pGVar5 != (GizmoHandle *)0x0) &&
         (this_00 = (pGVar5->fields)._gizmo, this_00 != (Gizmo *)0x0)) {
        camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._planeSlider;
        if ((pGVar1 != (GizmoPlaneSlider3D *)0x0) &&
           ((pGVar3 = (pGVar1->fields)._sharedLookAndFeel,
            pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0 ||
            (pGVar3 = (pGVar1->fields)._lookAndFeel, pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0)
            ))) {
          fVar6 = _UNK_?;
          if ((pGVar3->fields)._useZoomFactor != 0) {
            pGVar5 = (pGVar1->fields)._._handle;
            if (pGVar5 == (GizmoHandle *)0x0) goto code_?;
            fVar6 = GizmoHandle::GizmoHandle_GetZoomFactor(pGVar5,camera,(MethodInfo *)0x0);
          }
          pGVar1 = (this->fields)._planeSlider;
          pIVar2 = (this->fields)._controllers;
          if ((pGVar1 != (GizmoPlaneSlider3D *)0x0) &&
             (((pGVar3 = (pGVar1->fields)._sharedLookAndFeel,
               pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0 ||
               (pGVar3 = (pGVar1->fields)._lookAndFeel,
               pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0)) &&
              (pIVar2 != (IGizmoCircle3DBorderController__Array *)0x0)))) {
            uVar4 = (pGVar3->fields)._circleBorderType;
            if (pIVar2->max_length <= uVar4) goto code_?;
            if (pIVar2->vector[uVar4] != (IGizmoCircle3DBorderController *)0x0) {
              func_?(1,TypeInfo__RTG__IGizmoCircle3DBorderController,pIVar2->vector[uVar4],
                              fVar6);
              GizmoCircle3DBorder_OnCircleShapeChanged(this,(MethodInfo *)0x0);
              return;
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
  ppCVar2 = &(this->fields)._borderCircle;
  *ppCVar2 = pCVar1;
  func_?(ppCVar2,pCVar1);
  pTVar3 = (TorusShape3D *)func_?(TypeInfo__RTG__TorusShape3D);
  TorusShape3D::TorusShape3D__ctor(pTVar3,(MethodInfo *)0x0);
  ppTVar4 = &(this->fields)._borderTorus;
  *ppTVar4 = pTVar3;
  func_?(ppTVar4,pTVar3);
  this_02 = (CylTorusShape3D *)func_?(TypeInfo__RTG__CylTorusShape3D);
  CylTorusShape3D::CylTorusShape3D__ctor(this_02,(MethodInfo *)0x0);
  ppCVar5 = &(this->fields)._borderCylTorus;
  *ppCVar5 = this_02;
  func_?(ppCVar5,this_02);
  pGVar6 = (GizmoCircle3DBorderControllerData *)
            func_?(TypeInfo__RTG__GizmoCircle3DBorderControllerData);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pGVar6,ExceptionArgument__Enum_obj,(MethodInfo *)this);
  ppGVar7 = &(this->fields)._controllerData;
  *ppGVar7 = pGVar6;
  func_?(ppGVar7);
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
    pIVar8 = (IGizmoCircle3DBorderController__Array *)func_?();
    method_00 = &(this->fields)._controllers;
    *method_00 = pIVar8;
    func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)this,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    (this->fields)._planeSlider = (GizmoPlaneSlider3D *)0x0;
    func_?();
    ppGVar9 = &(this->fields)._targetHandle;
    *ppGVar9 = (GizmoHandle *)method_00;
    func_?(ppGVar9);
    ppCVar2 = &(this->fields)._targetCircle;
    *ppCVar2 = (CircleShape3D *)pIVar8;
    func_?(ppCVar2,pIVar8);
    if (*ppGVar9 == (GizmoHandle *)0x0) goto code_?;
    iVar10 = GizmoHandle::GizmoHandle_Add3DShape
                       (*ppGVar9,(Shape3D *)(this->fields)._borderCircle,(MethodInfo *)0x0);
    (this->fields)._borderCircleIndex = iVar10;
    pCVar1 = (this->fields)._borderCircle;
    if (pCVar1 == (CircleShape3D *)0x0) goto code_?;
    (pCVar1->fields)._raycastMode = 1;
    if (*ppGVar9 == (GizmoHandle *)0x0) goto code_?;
    iVar10 = GizmoHandle::GizmoHandle_Add3DShape
                       (*ppGVar9,(Shape3D *)(this->fields)._borderTorus,(MethodInfo *)0x0);
    (this->fields)._borderTorusIndex = iVar10;
    pTVar3 = (this->fields)._borderTorus;
    if ((pTVar3 == (TorusShape3D *)0x0) ||
       (this_00 = (pTVar3->fields)._wireRenderDesc,
       this_00 == (TorusShape3D_WireRenderDescriptor *)0x0)) goto code_?;
    TorusShape3D+WireRenderDescriptor::TorusShape3D_WireRenderDescriptor_set_NumTubeSlices
              (this_00,0,(MethodInfo *)0x0);
    if (*ppGVar9 == (GizmoHandle *)0x0) goto code_?;
    iVar10 = GizmoHandle::GizmoHandle_Add3DShape
                       (*ppGVar9,(Shape3D *)(this->fields)._borderCylTorus,(MethodInfo *)0x0);
    (this->fields)._borderCylTorusIndex = iVar10;
    if (*ppGVar7 == (GizmoCircle3DBorderControllerData *)0x0) goto code_?;
    ((*ppGVar7)->fields).Border = this;
    func_?();
    if (*ppGVar7 == (GizmoCircle3DBorderControllerData *)0x0) goto code_?;
    ((*ppGVar7)->fields).PlaneSlider = (this->fields)._planeSlider;
    func_?();
    if (*ppGVar9 == (GizmoHandle *)0x0) goto code_?;
    if (*ppGVar7 == (GizmoCircle3DBorderControllerData *)0x0) goto code_?;
    ((*ppGVar7)->fields).Gizmo = ((*ppGVar9)->fields)._gizmo;
    func_?();
    if (*ppGVar7 == (GizmoCircle3DBorderControllerData *)0x0) goto code_?;
    ((*ppGVar7)->fields).TargetHandle = *ppGVar9;
    func_?();
    if (*ppGVar7 == (GizmoCircle3DBorderControllerData *)0x0) goto code_?;
    ((*ppGVar7)->fields).TargetCircle = (CircleShape3D *)&UNK_?;
    func_?();
    if (*ppGVar7 == (GizmoCircle3DBorderControllerData *)0x0) goto code_?;
    ((*ppGVar7)->fields).BorderCircle = (this->fields)._borderCircle;
    func_?();
    if (*ppGVar7 == (GizmoCircle3DBorderControllerData *)0x0) goto code_?;
    ((*ppGVar7)->fields).BorderTorus = (this->fields)._borderTorus;
    func_?();
    if (*ppGVar7 == (GizmoCircle3DBorderControllerData *)0x0) goto code_?;
    ((*ppGVar7)->fields).BorderCylTorus = (this->fields)._borderCylTorus;
    func_?();
    if (*ppGVar7 == (GizmoCircle3DBorderControllerData *)0x0) goto code_?;
    ((*ppGVar7)->fields).BorderCircleIndex = (this->fields)._borderCircleIndex;
    if (*ppGVar7 == (GizmoCircle3DBorderControllerData *)0x0) goto code_?;
    ((*ppGVar7)->fields).BorderTorusIndex = (this->fields)._borderTorusIndex;
    if (*ppGVar7 == (GizmoCircle3DBorderControllerData *)0x0) goto code_?;
    ((*ppGVar7)->fields).BorderCylTorusIndex = (this->fields)._borderCylTorusIndex;
    pIVar8 = (this->fields)._controllers;
    pOVar11 = (Object__Class *)*ppGVar7;
    method_03 = TypeInfo__RTG__GizmoThinCircle3DBorderController;
    pOVar12 = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar12,ExceptionArgument__Enum_obj,(MethodInfo *)method_03);
    pOVar12[1].klass = pOVar11;
    func_?();
    if (pIVar8 == (IGizmoCircle3DBorderController__Array *)0x0) goto code_?;
    iVar13 = func_?();
    if (iVar13 == 0) goto code_?;
    if (pIVar8->max_length == 0) goto code_?;
    pIVar8->vector[0] = (IGizmoCircle3DBorderController *)pOVar12;
    func_?();
    method_02 = TypeInfo__RTG__GizmoTorusCircle3DBorderController;
    pIVar8 = (this->fields)._controllers;
    pGVar6 = *ppGVar7;
    pOVar12 = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar12,ExceptionArgument__Enum_obj,(MethodInfo *)method_02);
    _UNK_? = pGVar6;
    func_?();
    if (pIVar8 == (IGizmoCircle3DBorderController__Array *)0x0) goto code_?;
    iVar13 = func_?();
    if (iVar13 == 0) goto code_?;
    if (pIVar8->max_length < 2) goto code_?;
    pIVar8->vector[1] = (IGizmoCircle3DBorderController *)&UNK_?;
    func_?();
    method_01 = TypeInfo__RTG__GizmoCylindricalTorusCircle3DBorderController;
    pOVar11 = (Object__Class *)*ppGVar7;
    pOVar12 = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar12,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
    pOVar12[1].klass = pOVar11;
    func_?();
    iVar13 = func_?();
    if (iVar13 != 0) {
      if (_UNK_? < 3) goto code_?;
      _UNK_? = pOVar12;
      func_?();
      pGVar14 = (this->fields)._targetHandle;
      if (pGVar14 != (GizmoHandle *)0x0) {
        this_01 = (pGVar14->fields)._gizmo;
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
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


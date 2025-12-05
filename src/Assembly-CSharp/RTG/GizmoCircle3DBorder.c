
/* Single GetRealCylTorusHeight(Single) */

float Assembly-CSharp.dll::RTG::GizmoCircle3DBorder::GizmoCircle3DBorder_GetRealCylTorusHeight
                (GizmoCircle3DBorder *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._planeSlider;
  if (pGVar1 != (GizmoPlaneSlider3D *)0x0) {
    method = (MethodInfo *)0xd8;
    lVar2 = 0xd8;
    if ((pGVar1->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      lVar2 = 0xd0;
    }
    lVar2 = *(longlong *)((longlong)&pGVar1->klass + lVar2);
    if (lVar2 != 0) {
      uVar3 = 0xd8;
      if ((pGVar1->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
        uVar3 = 0xd0;
      }
      return zoomFactor * *(float *)(lVar2 + 0x44) *
             *(float *)(*(longlong *)((longlong)&pGVar1->klass + (ulonglong)uVar3) + 0x14);
    }
  }
  FUN_?(this,pGVar1,method);
  pcVar4 = (code *)swi(3);
  fVar5 = (float)(*pcVar4)();
  return fVar5;
}


/* Single GetRealCylTorusWidth(Single) */

float Assembly-CSharp.dll::RTG::GizmoCircle3DBorder::GizmoCircle3DBorder_GetRealCylTorusWidth
                (GizmoCircle3DBorder *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._planeSlider;
  if (pGVar1 != (GizmoPlaneSlider3D *)0x0) {
    method = (MethodInfo *)0xd8;
    lVar2 = 0xd8;
    if ((pGVar1->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      lVar2 = 0xd0;
    }
    lVar2 = *(longlong *)((longlong)&pGVar1->klass + lVar2);
    if (lVar2 != 0) {
      uVar3 = 0xd8;
      if ((pGVar1->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
        uVar3 = 0xd0;
      }
      return zoomFactor * *(float *)(lVar2 + 0x40) *
             *(float *)(*(longlong *)((longlong)&pGVar1->klass + (ulonglong)uVar3) + 0x14);
    }
  }
  FUN_?(this,pGVar1,method);
  pcVar4 = (code *)swi(3);
  fVar5 = (float)(*pcVar4)();
  return fVar5;
}


/* Single GetRealTorusThickness(Single) */

float Assembly-CSharp.dll::RTG::GizmoCircle3DBorder::GizmoCircle3DBorder_GetRealTorusThickness
                (GizmoCircle3DBorder *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._planeSlider;
  if (pGVar1 != (GizmoPlaneSlider3D *)0x0) {
    method = (MethodInfo *)0xd8;
    lVar2 = 0xd8;
    if ((pGVar1->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      lVar2 = 0xd0;
    }
    lVar2 = *(longlong *)((longlong)&pGVar1->klass + lVar2);
    if (lVar2 != 0) {
      uVar3 = 0xd8;
      if ((pGVar1->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
        uVar3 = 0xd0;
      }
      return zoomFactor * *(float *)(lVar2 + 0x38) *
             *(float *)(*(longlong *)((longlong)&pGVar1->klass + (ulonglong)uVar3) + 0x14);
    }
  }
  FUN_?(this,pGVar1,method);
  pcVar4 = (code *)swi(3);
  fVar5 = (float)(*pcVar4)();
  return fVar5;
}


/* Void OnCircleShapeChanged() */

void Assembly-CSharp.dll::RTG::GizmoCircle3DBorder::GizmoCircle3DBorder_OnCircleShapeChanged
               (GizmoCircle3DBorder *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoCircle3DBorderController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._targetHandle;
  if ((pGVar1 != (GizmoHandle *)0x0) && (this_00 = (pGVar1->fields)._gizmo, this_00 != (Gizmo *)0x0)
     ) {
    camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
    pGVar2 = (this->fields)._planeSlider;
    if (pGVar2 != (GizmoPlaneSlider3D *)0x0) {
      lVar3 = 0xd8;
      lVar4 = 0xd8;
      if ((pGVar2->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
        lVar4 = 0xd0;
      }
      lVar4 = *(longlong *)((longlong)&pGVar2->klass + lVar4);
      if (lVar4 != 0) {
        if (*(char *)(lVar4 + 0x18) != '\0') {
          pGVar1 = (pGVar2->fields)._._handle;
          if (pGVar1 == (GizmoHandle *)0x0) goto code_?;
          GizmoHandle::GizmoHandle_GetZoomFactor(pGVar1,camera,(MethodInfo *)0x0);
        }
        pGVar2 = (this->fields)._planeSlider;
        if (pGVar2 != (GizmoPlaneSlider3D *)0x0) {
          if ((pGVar2->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
            lVar3 = 0xd0;
          }
          lVar4 = *(longlong *)((longlong)&pGVar2->klass + lVar3);
          if ((lVar4 != 0) &&
             (pIVar5 = (this->fields)._controllers,
             pIVar5 != (IGizmoCircle3DBorderController__Array *)0x0)) {
            uVar6 = *(uint *)(lVar4 + 0xa0);
            if ((uint)pIVar5->max_length <= uVar6) {
              FUN_?();
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pIVar8 = pIVar5->vector[(int)uVar6];
            if (pIVar8 != (IGizmoCircle3DBorderController *)0x0) {
              pIVar9 = pIVar8->klass;
              uVar10 = 0;
              uVar11._0_1_ = (pIVar9->_1).rank;
              uVar11._1_1_ = (pIVar9->_1).minimumAlignment;
              if (uVar11 != 0) {
                do {
                  if (pIVar9->interfaceOffsets[uVar10].interfaceType ==
                      (Il2CppClass *)TypeInfo__RTG__IGizmoCircle3DBorderController) {
                    ppIVar12 = &(&(pIVar9->vtable).UpdateHandles)
                               [pIVar9->interfaceOffsets[uVar10].offset + 2].methodPtr;
                    goto code_?;
                  }
                  uVar13 = (short)uVar10 + 1;
                  uVar10 = (ulonglong)uVar13;
                } while (uVar13 < uVar11);
              }
              ppIVar12 = (Il2CppMethodPointer *)
                        FUN_?(pIVar8,TypeInfo__RTG__IGizmoCircle3DBorderController,2);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**ppIVar12)(pIVar8,*ppIVar12,(MethodInfo *)ppIVar12[1]);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnGizmoPreUpdateBegin(Gizmo) */

void Assembly-CSharp.dll::RTG::GizmoCircle3DBorder::GizmoCircle3DBorder_OnGizmoPreUpdateBegin
               (GizmoCircle3DBorder *this,Gizmo *gizmo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoCircle3DBorderController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._targetHandle;
  uVar2 = CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  uVar3 = CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
  if ((pGVar1 != (GizmoHandle *)0x0) && (this_00 = (pGVar1->fields)._gizmo, this_00 != (Gizmo *)0x0)
     ) {
    camera = Gizmo::Gizmo_get_FocusCamera(this_00,(MethodInfo *)0x0);
    pGVar4 = (this->fields)._planeSlider;
    if (pGVar4 != (GizmoPlaneSlider3D *)0x0) {
      lVar5 = 0xd8;
      lVar6 = 0xd8;
      if ((pGVar4->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
        lVar6 = 0xd0;
      }
      lVar6 = *(longlong *)((longlong)&pGVar4->klass + lVar6);
      if (lVar6 != 0) {
        fVar7 = _UNK_?;
        if (*(char *)(lVar6 + 0x18) != '\0') {
          pGVar1 = (pGVar4->fields)._._handle;
          if (pGVar1 == (GizmoHandle *)0x0) goto code_?;
          fVar7 = GizmoHandle::GizmoHandle_GetZoomFactor(pGVar1,camera,(MethodInfo *)0x0);
        }
        pGVar4 = (this->fields)._planeSlider;
        if (pGVar4 != (GizmoPlaneSlider3D *)0x0) {
          lVar6 = 0xd8;
          if ((pGVar4->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
            lVar6 = 0xd0;
          }
          lVar6 = *(longlong *)((longlong)&pGVar4->klass + lVar6);
          if ((lVar6 != 0) &&
             (pIVar8 = (this->fields)._controllers,
             pIVar8 != (IGizmoCircle3DBorderController__Array *)0x0)) {
            uVar9 = *(uint *)(lVar6 + 0xa0);
            if ((uint)pIVar8->max_length <= uVar9) {
code_?:
              FUN_?();
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            if (pIVar8->vector[(int)uVar9] != (IGizmoCircle3DBorderController *)0x0) {
              FUN_?(0,TypeInfo__RTG__IGizmoCircle3DBorderController);
              pGVar4 = (this->fields)._planeSlider;
              if (pGVar4 != (GizmoPlaneSlider3D *)0x0) {
                if ((pGVar4->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                  lVar5 = 0xd0;
                }
                lVar6 = *(longlong *)((longlong)&pGVar4->klass + lVar5);
                if ((lVar6 != 0) &&
                   (pIVar8 = (this->fields)._controllers,
                   pIVar8 != (IGizmoCircle3DBorderController__Array *)0x0)) {
                  uVar9 = *(uint *)(lVar6 + 0xa0);
                  if ((uint)pIVar8->max_length <= uVar9) goto code_?;
                  pIVar11 = pIVar8->vector[(int)uVar9];
                  if (pIVar11 != (IGizmoCircle3DBorderController *)0x0) {
                    pIVar12 = pIVar11->klass;
                    uVar13 = 0;
                    uVar14._0_1_ = (pIVar12->_1).rank;
                    uVar14._1_1_ = (pIVar12->_1).minimumAlignment;
                    if (uVar14 != 0) {
                      do {
                        if (pIVar12->interfaceOffsets[uVar13].interfaceType ==
                            (Il2CppClass *)TypeInfo__RTG__IGizmoCircle3DBorderController) {
                          ppIVar15 = &(&(pIVar12->vtable).UpdateHandles)
                                     [pIVar12->interfaceOffsets[uVar13].offset + 1].methodPtr;
                          goto code_?;
                        }
                        uVar16 = (short)uVar13 + 1;
                        uVar13 = (ulonglong)uVar16;
                      } while (uVar16 < uVar14);
                    }
                    ppIVar15 = (Il2CppMethodPointer *)
                              FUN_?(pIVar11,TypeInfo__RTG__IGizmoCircle3DBorderController,1,
                                            fVar7,uVar2,uVar3,unaff_RDI);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (**ppIVar15)(pIVar11,fVar7,(MethodInfo *)ppIVar15[1]);
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
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Render(Camera) */

void Assembly-CSharp.dll::RTG::GizmoCircle3DBorder::GizmoCircle3DBorder_Render
               (GizmoCircle3DBorder *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoCylindricalTorusCircle3DBorderController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoTorusCircle3DBorderController);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__Singleton<RTG::GizmoCircularMaterial>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__Singleton<RTG::GizmoCircularMaterial>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._isVisible == 0) {
    return;
  }
  pGVar1 = (this->fields)._planeSlider;
  if (pGVar1 != (GizmoPlaneSlider3D *)0x0) {
    lVar2 = 0xd8;
    lVar3 = 0xd8;
    if ((pGVar1->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      lVar3 = 0xd0;
    }
    lVar3 = *(longlong *)((longlong)&pGVar1->klass + lVar3);
    if (lVar3 != 0) {
      pGVar4 = (this->fields)._targetHandle;
      fVar5 = *(float *)(lVar3 + 0x6c);
      fVar6 = *(float *)(lVar3 + 0x70);
      fVar7 = *(float *)(lVar3 + 0x74);
      fVar8 = *(float *)(lVar3 + 0x78);
      if ((pGVar4 != (GizmoHandle *)0x0) &&
         (pGVar9 = (pGVar4->fields)._gizmo, pGVar9 != (Gizmo *)0x0)) {
        if ((pGVar9->fields)._hoverInfo._handleId == (((this->fields)._targetHandle)->fields)._id) {
          uVar10 = 0xd8;
          if ((pGVar1->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
            uVar10 = 0xd0;
          }
          lVar3 = *(longlong *)((longlong)&pGVar1->klass + (ulonglong)uVar10);
          fVar5 = *(float *)(lVar3 + 0x7c);
          fVar6 = *(float *)(lVar3 + 0x80);
          fVar7 = *(float *)(lVar3 + 0x84);
          fVar8 = *(float *)(lVar3 + 0x88);
        }
        lVar3 = 0xd8;
        if ((pGVar1->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
          lVar3 = 0xd0;
        }
        if (*(int *)(*(longlong *)((longlong)&pGVar1->klass + lVar3) + 0xa0) == 0) {
          if (*(int *)&(TypeInfo__RTG__Singleton<RTG::GizmoCircularMaterial>->_1).field_0x1c == 0) {
            FUN_?();
          }
          pGVar11 = (GizmoCircularMaterial *)
                    Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                              (MethodInfo__RTG__Singleton<RTG::GizmoCircularMaterial>__get_Get__);
          if (pGVar11 != (GizmoCircularMaterial *)0x0) {
            (pGVar11->fields)._circularType = 0;
            GizmoCircularMaterial::GizmoCircularMaterial_ResetValuesToSensibleDefaults
                      (pGVar11,(MethodInfo *)0x0);
            GizmoCircularMaterial::GizmoCircularMaterial_SetCamera(pGVar11,camera,(MethodInfo *)0x0)
            ;
            pCVar12 = (this->fields)._targetCircle;
            if (pCVar12 != (CircleShape3D *)0x0) {
              VStack_13.x = (pCVar12->fields)._center.x;
              VStack_13.y = (pCVar12->fields)._center.y;
              VStack_13.z = (pCVar12->fields)._center.z;
              GizmoCircularMaterial::GizmoCircularMaterial_SetShapeCenter
                        (pGVar11,&VStack_13,(MethodInfo *)0x0);
              pGVar1 = (this->fields)._planeSlider;
              if (pGVar1 != (GizmoPlaneSlider3D *)0x0) {
                if ((pGVar1->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                  lVar2 = 0xd0;
                }
                lVar3 = *(longlong *)((longlong)&pGVar1->klass + lVar2);
                if (lVar3 != 0) {
                  GizmoCircularMaterial::GizmoCircularMaterial_SetCullAlphaScale
                            (pGVar11,*(float *)(lVar3 + 0x8c),(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    FUN_?(&StringLiteral__Color);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pMVar14 = GizmoCircularMaterial::GizmoCircularMaterial_get_Material
                                      (pGVar11,(MethodInfo *)0x0);
                  if (pMVar14 != (Material *)0x0) {
                    aCStack_15[0].r = fVar5;
                    aCStack_15[0].g = fVar6;
                    aCStack_15[0].b = fVar7;
                    aCStack_15[0].a = fVar8;
                    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                              (pMVar14,StringLiteral__Color,aCStack_15,(MethodInfo *)0x0);
                    pMVar14 = GizmoCircularMaterial::GizmoCircularMaterial_get_Material
                                        (pGVar11,(MethodInfo *)0x0);
                    if (pMVar14 != (Material *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass
                                (pMVar14,0,(MethodInfo *)0x0);
                      pGVar4 = (this->fields)._targetHandle;
                      if (pGVar4 != (GizmoHandle *)0x0) {
                        iVar16 = (this->fields)._borderCircleIndex;
code_?:
                        GizmoHandle::GizmoHandle_Render3DWire_1(pGVar4,iVar16,(MethodInfo *)0x0);
                        return;
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
          lVar3 = 0xd8;
          if ((pGVar1->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
            lVar3 = 0xd0;
          }
          if (*(int *)(*(longlong *)((longlong)&pGVar1->klass + lVar3) + 0xa0) == 1) {
            fVar17 = GizmoRATriangle3DBorder::GizmoRATriangle3DBorder_GetZoomFactor
                               ((GizmoRATriangle3DBorder *)this,camera,(MethodInfo *)0x0);
            fVar18 = GizmoCircle3DBorder_GetRealTorusThickness(this,fVar17,(MethodInfo *)0x0);
            pGVar1 = (this->fields)._planeSlider;
            if (pGVar1 != (GizmoPlaneSlider3D *)0x0) {
              lVar3 = 0xd8;
              if ((pGVar1->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                lVar3 = 0xd0;
              }
              lVar3 = *(longlong *)((longlong)&pGVar1->klass + lVar3);
              if (lVar3 != 0) {
                iVar19 = *(int *)(lVar3 + 0x94);
                if (*(int *)&(TypeInfo__RTG__Singleton<RTG::GizmoCircularMaterial>->_1).field_0x1c
                    == 0) {
                  FUN_?();
                }
                pGVar11 = (GizmoCircularMaterial *)
                          Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                                    (
                                    MethodInfo__RTG__Singleton<RTG::GizmoCircularMaterial>__get_Get__
                                    );
                if (pGVar11 != (GizmoCircularMaterial *)0x0) {
                  (pGVar11->fields)._circularType = (uint)(iVar19 == 0);
                  GizmoCircularMaterial::GizmoCircularMaterial_ResetValuesToSensibleDefaults
                            (pGVar11,(MethodInfo *)0x0);
                  GizmoCircularMaterial::GizmoCircularMaterial_SetCamera
                            (pGVar11,camera,(MethodInfo *)0x0);
                  pCVar12 = (this->fields)._targetCircle;
                  if (pCVar12 != (CircleShape3D *)0x0) {
                    VStack_13.x = (pCVar12->fields)._center.x;
                    VStack_13.y = (pCVar12->fields)._center.y;
                    VStack_13.z = (pCVar12->fields)._center.z;
                    GizmoCircularMaterial::GizmoCircularMaterial_SetShapeCenter
                              (pGVar11,&VStack_13,(MethodInfo *)0x0);
                    pGVar1 = (this->fields)._planeSlider;
                    if (pGVar1 != (GizmoPlaneSlider3D *)0x0) {
                      lVar3 = 0xd8;
                      if ((pGVar1->fields)._sharedLookAndFeel ==
                          (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                        lVar3 = 0xd0;
                      }
                      lVar3 = *(longlong *)((longlong)&pGVar1->klass + lVar3);
                      if (lVar3 != 0) {
                        GizmoCircularMaterial::GizmoCircularMaterial_SetCullAlphaScale
                                  (pGVar11,*(float *)(lVar3 + 0x8c),(MethodInfo *)0x0);
                        if (cRam_? == '\0') {
                          FUN_?(&StringLiteral__Color);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pMVar14 = GizmoCircularMaterial::GizmoCircularMaterial_get_Material
                                            (pGVar11,(MethodInfo *)0x0);
                        if (pMVar14 != (Material *)0x0) {
                          aCStack_15[0].r = fVar5;
                          aCStack_15[0].g = fVar6;
                          aCStack_15[0].b = fVar7;
                          aCStack_15[0].a = fVar8;
                          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                                    (pMVar14,StringLiteral__Color,aCStack_15,(MethodInfo *)0x0);
                          pIVar20 = (this->fields)._controllers;
                          if (pIVar20 != (IGizmoCircle3DBorderController__Array *)0x0) {
                            if ((uint)pIVar20->max_length < 2) goto code_?;
                            pGVar21 = (GizmoTorusCircle3DBorderController *)pIVar20->vector[1];
                            if (pGVar21 != (GizmoTorusCircle3DBorderController *)0x0) {
                              bVar22 = (TypeInfo__RTG__GizmoTorusCircle3DBorderController->_1).
                                      naturalAligment;
                              if ((bVar22 <= (pGVar21->klass->_1).naturalAligment) &&
                                 (ppIVar23 = (pGVar21->klass->_1).typeHierarchy,
                                 ppIVar23[(ulonglong)bVar22 - 1] ==
                                 (Il2CppClass *)TypeInfo__RTG__GizmoTorusCircle3DBorderController))
                              {
                                this_01 = (GizmoTorusCircle3DBorderController *)0x0;
                                if (ppIVar23[(ulonglong)
                                            (TypeInfo__RTG__GizmoTorusCircle3DBorderController->_1).
                                            naturalAligment - 1] ==
                                    (Il2CppClass *)TypeInfo__RTG__GizmoTorusCircle3DBorderController
                                   ) {
                                  this_01 = pGVar21;
                                }
                                fVar5 = GizmoTorusCircle3DBorderController::
                                         GizmoTorusCircle3DBorderController_GetTorusCoreRadius
                                                   (this_01,fVar17,(MethodInfo *)0x0);
                                GizmoCircularMaterial::GizmoCircularMaterial_SetTorusCoreRadius
                                          (pGVar11,fVar5,(MethodInfo *)0x0);
                                fVar18 = fVar18 * _UNK_?;
                                if (cRam_? == '\0') {
                                  FUN_?(&StringLiteral__TorusTubeRadius);
                                  LOCK();
                                  UNLOCK();
                                  cRam_? = '\x01';
                                }
                                if ((pGVar11->fields)._circularType == 1) {
                                  pMVar14 = GizmoCircularMaterial::
                                            GizmoCircularMaterial_get_Material
                                                      (pGVar11,(MethodInfo *)0x0);
                                  if (pMVar14 == (Material *)0x0) goto code_?;
                                  iVar16 = UnityEngine.CoreModule.dll::UnityEngine::Shader::
                                           Shader_PropertyToID(StringLiteral__TorusTubeRadius,
                                                               (MethodInfo *)0x0);
                                  UnityEngine.CoreModule.dll::UnityEngine::Material::
                                  Material_SetFloatImpl(pMVar14,iVar16,fVar18,(MethodInfo *)0x0);
                                }
                                pGVar1 = (this->fields)._planeSlider;
                                if (pGVar1 != (GizmoPlaneSlider3D *)0x0) {
                                  lVar3 = 0xd8;
                                  if ((pGVar1->fields)._sharedLookAndFeel ==
                                      (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                    lVar3 = 0xd0;
                                  }
                                  lVar3 = *(longlong *)((longlong)&pGVar1->klass + lVar3);
                                  if (lVar3 != 0) {
                                    GizmoCircularMaterial::GizmoCircularMaterial_SetLit
                                              (pGVar11,*(int *)(lVar3 + 0x90) == 0,
                                               (MethodInfo *)0x0);
                                    bVar24 = GizmoCircularMaterial::GizmoCircularMaterial_get_IsLit
                                                       (pGVar11,(MethodInfo *)0x0);
                                    if (bVar24 != 0) {
                                      if ((camera == (Camera *)0x0) ||
                                         (pTVar25 = UnityEngine.CoreModule.dll::UnityEngine::
                                                    Component::Component_get_transform
                                                              ((Component *)camera,(MethodInfo *)0x0
                                                              ), pTVar25 == (Transform *)0x0))
                                      goto code_?;
                                      pVVar26 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                                Transform_get_forward
                                                          ((Vector3 *)aCStack_15,pTVar25,
                                                           (MethodInfo *)0x0);
                                      VStack_13.x = pVVar26->x;
                                      VStack_13.y = pVVar26->y;
                                      VStack_13.z = pVVar26->z;
                                      GizmoCircularMaterial::GizmoCircularMaterial_SetLightDirection
                                                (pGVar11,&VStack_13,(MethodInfo *)0x0);
                                    }
                                    pMVar14 = GizmoCircularMaterial::
                                              GizmoCircularMaterial_get_Material
                                                        (pGVar11,(MethodInfo *)0x0);
                                    if (pMVar14 == (Material *)0x0) goto code_?;
                                    UnityEngine.CoreModule.dll::UnityEngine::Material::
                                    Material_SetPass(pMVar14,0,(MethodInfo *)0x0);
                                    if (iVar19 != 0) {
                                      pTVar27 = (this->fields)._borderTorus;
                                      if (pTVar27 != (TorusShape3D *)0x0) {
                                        pTVar28 = (pTVar27->fields)._wireRenderDesc;
                                        pGVar1 = (this->fields)._planeSlider;
                                        if (pGVar1 != (GizmoPlaneSlider3D *)0x0) {
                                          if ((pGVar1->fields)._sharedLookAndFeel ==
                                              (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                            lVar2 = 0xd0;
                                          }
                                          lVar3 = *(longlong *)((longlong)&pGVar1->klass + lVar2);
                                          if ((lVar3 != 0) &&
                                             (pTVar28 != (TorusShape3D_WireRenderDescriptor *)0x0))
                                          {
                                            iVar19 = *(int *)(lVar3 + 0x3c);
                                            if (iVar19 < 2) {
                                              iVar19 = 2;
                                            }
                                            (pTVar28->fields)._numAxialSlices = iVar19;
                                            pGVar4 = (this->fields)._targetHandle;
                                            if (pGVar4 != (GizmoHandle *)0x0) {
                                              iVar16 = (this->fields)._borderTorusIndex;
                                              goto code_?;
                                            }
                                          }
                                        }
                                      }
                                      goto code_?;
                                    }
                                    pGVar4 = (this->fields)._targetHandle;
                                    if (pGVar4 == (GizmoHandle *)0x0) goto code_?;
                                    iVar16 = (this->fields)._borderTorusIndex;
code_?:
                                    GizmoHandle::GizmoHandle_Render3DSolid_1
                                              (pGVar4,iVar16,(MethodInfo *)0x0);
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
            lVar3 = 0xd8;
            if ((pGVar1->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
              lVar3 = 0xd0;
            }
            if (*(int *)(*(longlong *)((longlong)&pGVar1->klass + lVar3) + 0xa0) != 2) {
              return;
            }
            fVar17 = GizmoRATriangle3DBorder::GizmoRATriangle3DBorder_GetZoomFactor
                               ((GizmoRATriangle3DBorder *)this,camera,(MethodInfo *)0x0);
            fVar18 = GizmoCircle3DBorder_GetRealCylTorusWidth(this,fVar17,(MethodInfo *)0x0);
            fVar29 = GizmoCircle3DBorder_GetRealCylTorusHeight(this,fVar17,(MethodInfo *)0x0);
            pGVar1 = (this->fields)._planeSlider;
            if (pGVar1 != (GizmoPlaneSlider3D *)0x0) {
              lVar3 = 0xd8;
              if ((pGVar1->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                lVar3 = 0xd0;
              }
              lVar3 = *(longlong *)((longlong)&pGVar1->klass + lVar3);
              if (lVar3 != 0) {
                iVar19 = *(int *)(lVar3 + 0x94);
                if (*(int *)&(TypeInfo__RTG__Singleton<RTG::GizmoCircularMaterial>->_1).field_0x1c
                    == 0) {
                  FUN_?();
                }
                pGVar11 = (GizmoCircularMaterial *)
                          Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                                    (
                                    MethodInfo__RTG__Singleton<RTG::GizmoCircularMaterial>__get_Get__
                                    );
                if (pGVar11 != (GizmoCircularMaterial *)0x0) {
                  iVar16 = 2;
                  if (iVar19 != 0) {
                    iVar16 = 0;
                  }
                  (pGVar11->fields)._circularType = iVar16;
                  GizmoCircularMaterial::GizmoCircularMaterial_ResetValuesToSensibleDefaults
                            (pGVar11,(MethodInfo *)0x0);
                  GizmoCircularMaterial::GizmoCircularMaterial_SetCamera
                            (pGVar11,camera,(MethodInfo *)0x0);
                  pCVar12 = (this->fields)._targetCircle;
                  if (pCVar12 != (CircleShape3D *)0x0) {
                    VStack_13.x = (pCVar12->fields)._center.x;
                    VStack_13.y = (pCVar12->fields)._center.y;
                    VStack_13.z = (pCVar12->fields)._center.z;
                    GizmoCircularMaterial::GizmoCircularMaterial_SetShapeCenter
                              (pGVar11,&VStack_13,(MethodInfo *)0x0);
                    pGVar1 = (this->fields)._planeSlider;
                    if (pGVar1 != (GizmoPlaneSlider3D *)0x0) {
                      lVar3 = 0xd8;
                      if ((pGVar1->fields)._sharedLookAndFeel ==
                          (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                        lVar3 = 0xd0;
                      }
                      lVar3 = *(longlong *)((longlong)&pGVar1->klass + lVar3);
                      if (lVar3 != 0) {
                        GizmoCircularMaterial::GizmoCircularMaterial_SetCullAlphaScale
                                  (pGVar11,*(float *)(lVar3 + 0x8c),(MethodInfo *)0x0);
                        if (cRam_? == '\0') {
                          FUN_?(&StringLiteral__Color);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pMVar14 = GizmoCircularMaterial::GizmoCircularMaterial_get_Material
                                            (pGVar11,(MethodInfo *)0x0);
                        if (pMVar14 != (Material *)0x0) {
                          aCStack_15[0].r = fVar5;
                          aCStack_15[0].g = fVar6;
                          aCStack_15[0].b = fVar7;
                          aCStack_15[0].a = fVar8;
                          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                                    (pMVar14,StringLiteral__Color,aCStack_15,(MethodInfo *)0x0);
                          pIVar20 = (this->fields)._controllers;
                          if (pIVar20 != (IGizmoCircle3DBorderController__Array *)0x0) {
                            if ((uint)pIVar20->max_length < 3) {
code_?:
                              FUN_?();
                              pcVar30 = (code *)swi(3);
                              (*pcVar30)();
                              return;
                            }
                            pGVar31 = (GizmoCylindricalTorusCircle3DBorderController *)
                                     pIVar20->vector[2];
                            if (pGVar31 != (GizmoCylindricalTorusCircle3DBorderController *)0x0) {
                              bVar22 = (TypeInfo__RTG__GizmoCylindricalTorusCircle3DBorderController
                                      ->_1).naturalAligment;
                              if ((bVar22 <= (pGVar31->klass->_1).naturalAligment) &&
                                 ((pGVar31->klass->_1).typeHierarchy[(ulonglong)bVar22 - 1] ==
                                  (Il2CppClass *)
                                  TypeInfo__RTG__GizmoCylindricalTorusCircle3DBorderController)) {
                                this_00 = (GizmoCylindricalTorusCircle3DBorderController *)0x0;
                                if ((pGVar31->klass->_1).typeHierarchy
                                    [(ulonglong)
                                     (TypeInfo__RTG__GizmoCylindricalTorusCircle3DBorderController->
                                     _1).naturalAligment - 1] ==
                                    (Il2CppClass *)
                                    TypeInfo__RTG__GizmoCylindricalTorusCircle3DBorderController) {
                                  this_00 = pGVar31;
                                }
                                fVar5 = GizmoCylindricalTorusCircle3DBorderController::
                                         GizmoCylindricalTorusCircle3DBorderController_GetTorusCoreRadius
                                                   (this_00,fVar17,(MethodInfo *)0x0);
                                GizmoCircularMaterial::GizmoCircularMaterial_SetTorusCoreRadius
                                          (pGVar11,fVar5,(MethodInfo *)0x0);
                                fVar29 = fVar29 * _UNK_?;
                                fVar18 = fVar18 * _UNK_?;
                                if (cRam_? == '\0') {
                                  FUN_?(&StringLiteral__TorusVertRadius);
                                  LOCK();
                                  UNLOCK();
                                  FUN_?(&StringLiteral__TorusHrzRadius);
                                  LOCK();
                                  UNLOCK();
                                  cRam_? = '\x01';
                                }
                                if ((pGVar11->fields)._circularType == 2) {
                                  pMVar14 = GizmoCircularMaterial::
                                            GizmoCircularMaterial_get_Material
                                                      (pGVar11,(MethodInfo *)0x0);
                                  if (pMVar14 == (Material *)0x0) goto code_?;
                                  iVar16 = UnityEngine.CoreModule.dll::UnityEngine::Shader::
                                           Shader_PropertyToID(StringLiteral__TorusHrzRadius,
                                                               (MethodInfo *)0x0);
                                  UnityEngine.CoreModule.dll::UnityEngine::Material::
                                  Material_SetFloatImpl(pMVar14,iVar16,fVar18,(MethodInfo *)0x0);
                                  pMVar14 = GizmoCircularMaterial::
                                            GizmoCircularMaterial_get_Material
                                                      (pGVar11,(MethodInfo *)0x0);
                                  if (pMVar14 == (Material *)0x0) goto code_?;
                                  iVar16 = UnityEngine.CoreModule.dll::UnityEngine::Shader::
                                           Shader_PropertyToID(StringLiteral__TorusVertRadius,
                                                               (MethodInfo *)0x0);
                                  UnityEngine.CoreModule.dll::UnityEngine::Material::
                                  Material_SetFloatImpl(pMVar14,iVar16,fVar29,(MethodInfo *)0x0);
                                }
                                pGVar1 = (this->fields)._planeSlider;
                                if (pGVar1 != (GizmoPlaneSlider3D *)0x0) {
                                  if ((pGVar1->fields)._sharedLookAndFeel ==
                                      (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                    lVar2 = 0xd0;
                                  }
                                  lVar3 = *(longlong *)((longlong)&pGVar1->klass + lVar2);
                                  if (lVar3 != 0) {
                                    GizmoCircularMaterial::GizmoCircularMaterial_SetLit
                                              (pGVar11,*(int *)(lVar3 + 0x90) == 0,
                                               (MethodInfo *)0x0);
                                    bVar24 = GizmoCircularMaterial::GizmoCircularMaterial_get_IsLit
                                                       (pGVar11,(MethodInfo *)0x0);
                                    if (bVar24 != 0) {
                                      if ((camera == (Camera *)0x0) ||
                                         (pTVar25 = UnityEngine.CoreModule.dll::UnityEngine::
                                                    Component::Component_get_transform
                                                              ((Component *)camera,(MethodInfo *)0x0
                                                              ), pTVar25 == (Transform *)0x0))
                                      goto code_?;
                                      pVVar26 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                                Transform_get_forward
                                                          ((Vector3 *)aCStack_15,pTVar25,
                                                           (MethodInfo *)0x0);
                                      VStack_13.x = pVVar26->x;
                                      VStack_13.y = pVVar26->y;
                                      VStack_13.z = pVVar26->z;
                                      GizmoCircularMaterial::GizmoCircularMaterial_SetLightDirection
                                                (pGVar11,&VStack_13,(MethodInfo *)0x0);
                                    }
                                    pMVar14 = GizmoCircularMaterial::
                                              GizmoCircularMaterial_get_Material
                                                        (pGVar11,(MethodInfo *)0x0);
                                    if (pMVar14 != (Material *)0x0) {
                                      UnityEngine.CoreModule.dll::UnityEngine::Material::
                                      Material_SetPass(pMVar14,0,(MethodInfo *)0x0);
                                      pGVar4 = (this->fields)._targetHandle;
                                      if (pGVar4 != (GizmoHandle *)0x0) {
                                        iVar16 = (this->fields)._borderCylTorusIndex;
                                        if (iVar19 == 0) goto code_?;
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
code_?:
  FUN_?();
  pcVar30 = (code *)swi(3);
  (*pcVar30)();
  return;
}


/* Void SetHoverable(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoCircle3DBorder::GizmoCircle3DBorder_SetHoverable
               (GizmoCircle3DBorder *this,bool isHoverable,MethodInfo *method)

{
  (this->fields)._isHoverable = isHoverable;
  pGVar1 = (this->fields)._targetHandle;
  if (pGVar1 != (GizmoHandle *)0x0) {
    GizmoHandle::GizmoHandle_Set3DShapeHoverable
              (pGVar1,(this->fields)._borderCircleIndex,isHoverable,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._targetHandle;
    if (pGVar1 != (GizmoHandle *)0x0) {
      GizmoHandle::GizmoHandle_Set3DShapeHoverable
                (pGVar1,(this->fields)._borderTorusIndex,isHoverable,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._targetHandle;
      if (pGVar1 != (GizmoHandle *)0x0) {
        uVar2 = (this->fields)._borderCylTorusIndex;
        if (cRam_? == '\0') {
          FUN_?();
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pLVar3 = (pGVar1->fields)._3DShapes;
        if (pLVar3 != (List_1_RTG_GizmoHandleShape3D_ *)0x0) {
          if ((uint)(pLVar3->fields)._size <= uVar2) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pGVar5 = (pLVar3->fields)._items;
          if (pGVar5 != (GizmoHandleShape3D__Array *)0x0) {
            if ((uint)pGVar5->max_length <= uVar2) {
              FUN_?();
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (pGVar5->vector[(int)uVar2] != (GizmoHandleShape3D *)0x0) {
              (pGVar5->vector[(int)uVar2]->fields)._isHoverable = isHoverable;
              return;
            }
          }
        }
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetVisible(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoCircle3DBorder::GizmoCircle3DBorder_SetVisible
               (GizmoCircle3DBorder *this,bool isVisible,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoCircle3DBorderController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._planeSlider;
  (this->fields)._isVisible = isVisible;
  if (pGVar1 != (GizmoPlaneSlider3D *)0x0) {
    lVar2 = 0xd8;
    lVar3 = 0xd8;
    if ((pGVar1->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      lVar3 = 0xd0;
    }
    lVar3 = *(longlong *)((longlong)&pGVar1->klass + lVar3);
    if ((lVar3 != 0) &&
       (pIVar4 = (this->fields)._controllers, pIVar4 != (IGizmoCircle3DBorderController__Array *)0x0
       )) {
      uVar5 = *(uint *)(lVar3 + 0xa0);
      if ((uint)pIVar4->max_length <= uVar5) {
code_?:
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (pIVar4->vector[(int)uVar5] != (IGizmoCircle3DBorderController *)0x0) {
        FUN_?(0);
        if ((this->fields)._isVisible == 0) {
          return;
        }
        pGVar7 = (this->fields)._targetHandle;
        if ((pGVar7 != (GizmoHandle *)0x0) &&
           (this_00 = (pGVar7->fields)._gizmo, this_00 != (Gizmo *)0x0)) {
          camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
          pGVar1 = (this->fields)._planeSlider;
          if (pGVar1 != (GizmoPlaneSlider3D *)0x0) {
            uVar5 = 0xd8;
            if ((pGVar1->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
              uVar5 = 0xd0;
            }
            lVar3 = *(longlong *)((longlong)&pGVar1->klass + (ulonglong)uVar5);
            if (lVar3 != 0) {
              fVar8 = _UNK_?;
              if (*(char *)(lVar3 + 0x18) != '\0') {
                pGVar7 = (pGVar1->fields)._._handle;
                if (pGVar7 == (GizmoHandle *)0x0) goto code_?;
                fVar8 = GizmoHandle::GizmoHandle_GetZoomFactor(pGVar7,camera,(MethodInfo *)0x0);
              }
              pGVar1 = (this->fields)._planeSlider;
              if (pGVar1 != (GizmoPlaneSlider3D *)0x0) {
                if ((pGVar1->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                  lVar2 = 0xd0;
                }
                lVar3 = *(longlong *)((longlong)&pGVar1->klass + lVar2);
                if ((lVar3 != 0) &&
                   (pIVar4 = (this->fields)._controllers,
                   pIVar4 != (IGizmoCircle3DBorderController__Array *)0x0)) {
                  uVar5 = *(uint *)(lVar3 + 0xa0);
                  if ((uint)pIVar4->max_length <= uVar5) goto code_?;
                  if (pIVar4->vector[(int)uVar5] != (IGizmoCircle3DBorderController *)0x0) {
                    FUN_?(1,TypeInfo__RTG__IGizmoCircle3DBorderController,
                                  pIVar4->vector[(int)uVar5],fVar8);
                    GizmoCircle3DBorder_OnCircleShapeChanged(this,(MethodInfo *)0x0);
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
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* GizmoCircle3DBorder(GizmoPlaneSlider3D, GizmoHandle, CircleShape3D) */

void Assembly-CSharp.dll::RTG::GizmoCircle3DBorder::GizmoCircle3DBorder__ctor
               (GizmoCircle3DBorder *this,GizmoPlaneSlider3D *planeSlider,GizmoHandle *targetHandle,
               CircleShape3D *targetCircle,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CircleShape3D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__CylTorusShape3D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoCircle3DBorderControllerData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__RTG__GizmoCircle3DBorderType);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__GizmoCircle3DBorder__OnGizmoPreUpdateBegin_RTG__Gizmo_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoCylindricalTorusCircle3DBorderController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoPreUpdateBeginHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoThinCircle3DBorderController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoTorusCircle3DBorderController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__IGizmoCircle3DBorderController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__TorusShape3D);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._isVisible = 1;
  (this->fields)._isHoverable = 1;
  pCVar1 = (CircleShape3D *)FUN_?(TypeInfo__RTG__CircleShape3D);
  CircleShape3D::CircleShape3D__ctor(pCVar1,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._borderCircle = pCVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._borderCircle >> 0xc);
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
  pTVar7 = (TorusShape3D *)FUN_?(TypeInfo__RTG__TorusShape3D);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__TorusShape3D__WireRenderDescriptor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar2 = cRam_? == '\0';
  (pTVar7->fields)._coreRadius = 1.0;
  (pTVar7->fields)._tubeRadius = 1.0;
  if (bVar2) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar2 = cRam_? == '\0';
  pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar9 = (pVVar8->zeroVector).y;
  fVar10 = (pVVar8->zeroVector).z;
  (pTVar7->fields)._center.x = (pVVar8->zeroVector).x;
  (pTVar7->fields)._center.y = fVar9;
  (pTVar7->fields)._center.z = fVar10;
  if (bVar2) {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar11 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar10 = (pQVar11->identityQuaternion).y;
  fVar9 = (pQVar11->identityQuaternion).z;
  fVar12 = (pQVar11->identityQuaternion).w;
  (pTVar7->fields)._rotation.x = (pQVar11->identityQuaternion).x;
  (pTVar7->fields)._rotation.y = fVar10;
  (pTVar7->fields)._rotation.z = fVar9;
  (pTVar7->fields)._rotation.w = fVar12;
  pTVar13 = (TorusShape3D_WireRenderDescriptor *)
            FUN_?(TypeInfo__RTG__TorusShape3D__WireRenderDescriptor);
  (pTVar13->fields)._wireFlags = 2;
  (pTVar13->fields)._numTubeSlices = 0x1e;
  (pTVar13->fields)._numAxialSlices = 0x1e;
  (pTVar7->fields)._wireRenderDesc = pTVar13;
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&(pTVar7->fields)._wireRenderDesc >> 0xc);
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
  iVar14 = iRam_?;
  (this->fields)._borderTorus = pTVar7;
  if (iVar14 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields)._borderTorus >> 0xc);
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
  pCVar15 = (CylTorusShape3D *)FUN_?(TypeInfo__RTG__CylTorusShape3D);
  bVar2 = cRam_? == '\0';
  (pCVar15->fields)._coreRadius = 1.0;
  (pCVar15->fields)._hrzRadius = 1.0;
  (pCVar15->fields)._vertRadius = 1.0;
  if (bVar2) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar2 = cRam_? == '\0';
  pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar9 = (pVVar8->zeroVector).y;
  fVar10 = (pVVar8->zeroVector).z;
  (pCVar15->fields)._center.x = (pVVar8->zeroVector).x;
  (pCVar15->fields)._center.y = fVar9;
  (pCVar15->fields)._center.z = fVar10;
  if (bVar2) {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar2 = iRam_? != 0;
  pQVar11 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar10 = (pQVar11->identityQuaternion).y;
  fVar9 = (pQVar11->identityQuaternion).z;
  fVar12 = (pQVar11->identityQuaternion).w;
  (pCVar15->fields)._rotation.x = (pQVar11->identityQuaternion).x;
  (pCVar15->fields)._rotation.y = fVar10;
  (pCVar15->fields)._rotation.z = fVar9;
  (pCVar15->fields)._rotation.w = fVar12;
  (this->fields)._borderCylTorus = pCVar15;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._borderCylTorus >> 0xc);
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
  pGVar16 = (GizmoCircle3DBorderControllerData *)
            FUN_?(TypeInfo__RTG__GizmoCircle3DBorderControllerData);
  bVar2 = iRam_? != 0;
  (this->fields)._controllerData = pGVar16;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._controllerData >> 0xc);
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
  pIVar17 = TypeRef__RTG__GizmoCircle3DBorderType;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  plVar18 = (longlong *)0x0;
  if (pIVar17 != (Il2CppType *)0x0) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar19 = FUN_?(pIVar17,1);
    plVar18 = (longlong *)FUN_?(lVar19 + 0x20);
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (plVar18 == (longlong *)0x0) {
    uVar20 = func_?(&TypeInfo__System__ArgumentNullException);
    this_02 = (ArgumentNullException *)func_?(uVar20);
    paramName = (String *)func_?(&StringLiteral_enumType);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_02,paramName,(MethodInfo *)0x0);
    uVar20 = func_?(&MethodInfo__System__Enum__GetValues_System__Type_);
    FUN_?(this_02,uVar20);
    pcVar21 = (code *)swi(3);
    (*pcVar21)();
    return;
  }
  this_00 = (Array *)(**(code **)(*plVar18 + 0x888))(plVar18);
  if (this_00 != (Array *)0x0) {
    iVar22 = mscorlib.dll::System::Array::Array_get_Length(this_00,(MethodInfo *)0x0);
    pIVar23 = (IGizmoCircle3DBorderController__Array *)
              FUN_?(TypeInfo__RTG__IGizmoCircle3DBorderController,iVar22);
    (this->fields)._controllers = pIVar23;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&(this->fields)._controllers >> 0xc);
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
    iVar14 = iRam_?;
    (this->fields)._planeSlider = planeSlider;
    if (iVar14 != 0) {
      uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
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
        iVar14 = iRam_?;
      } while (!bVar2);
    }
    (this->fields)._targetHandle = targetHandle;
    iVar24 = 0;
    if (iVar14 != 0) {
      uVar3 = (uint)((ulonglong)&(this->fields)._targetHandle >> 0xc);
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
        iVar24 = iRam_?;
      } while (!bVar2);
    }
    (this->fields)._targetCircle = targetCircle;
    if (iVar24 != 0) {
      uVar3 = (uint)((ulonglong)&(this->fields)._targetCircle >> 0xc);
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
    pGVar25 = (this->fields)._targetHandle;
    if (pGVar25 != (GizmoHandle *)0x0) {
      iVar22 = GizmoHandle::GizmoHandle_Add3DShape
                         (pGVar25,(Shape3D *)(this->fields)._borderCircle,(MethodInfo *)0x0);
      (this->fields)._borderCircleIndex = iVar22;
      pCVar1 = (this->fields)._borderCircle;
      if (pCVar1 != (CircleShape3D *)0x0) {
        (pCVar1->fields)._raycastMode = 1;
        pGVar25 = (this->fields)._targetHandle;
        if (pGVar25 != (GizmoHandle *)0x0) {
          iVar22 = GizmoHandle::GizmoHandle_Add3DShape
                             (pGVar25,(Shape3D *)(this->fields)._borderTorus,(MethodInfo *)0x0);
          (this->fields)._borderTorusIndex = iVar22;
          pTVar7 = (this->fields)._borderTorus;
          if ((pTVar7 != (TorusShape3D *)0x0) &&
             (pTVar13 = (pTVar7->fields)._wireRenderDesc,
             pTVar13 != (TorusShape3D_WireRenderDescriptor *)0x0)) {
            (pTVar13->fields)._numTubeSlices = 0;
            pGVar25 = (this->fields)._targetHandle;
            if (pGVar25 != (GizmoHandle *)0x0) {
              iVar22 = GizmoHandle::GizmoHandle_Add3DShape
                                 (pGVar25,(Shape3D *)(this->fields)._borderCylTorus,(MethodInfo *)0x0
                                 );
              pGVar16 = (this->fields)._controllerData;
              (this->fields)._borderCylTorusIndex = iVar22;
              iVar14 = iRam_?;
              if (pGVar16 != (GizmoCircle3DBorderControllerData *)0x0) {
                (pGVar16->fields).Border = this;
                if (iVar14 != 0) {
                  uVar3 = (uint)((ulonglong)&(pGVar16->fields).Border >> 0xc);
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
                    iVar14 = iRam_?;
                  } while (!bVar2);
                }
                pGVar16 = (this->fields)._controllerData;
                if (pGVar16 != (GizmoCircle3DBorderControllerData *)0x0) {
                  (pGVar16->fields).PlaneSlider = (this->fields)._planeSlider;
                  iVar24 = 0;
                  if (iVar14 != 0) {
                    uVar3 = (uint)((ulonglong)&(pGVar16->fields).PlaneSlider >> 0xc);
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
                      iVar24 = iRam_?;
                    } while (!bVar2);
                  }
                  pGVar25 = (this->fields)._targetHandle;
                  if ((pGVar25 != (GizmoHandle *)0x0) &&
                     (pGVar16 = (this->fields)._controllerData,
                     pGVar16 != (GizmoCircle3DBorderControllerData *)0x0)) {
                    (pGVar16->fields).Gizmo = (pGVar25->fields)._gizmo;
                    iVar14 = 0;
                    if (iVar24 != 0) {
                      uVar3 = (uint)((ulonglong)&pGVar16->fields >> 0xc);
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
                        iVar14 = iRam_?;
                      } while (!bVar2);
                    }
                    pGVar16 = (this->fields)._controllerData;
                    if (pGVar16 != (GizmoCircle3DBorderControllerData *)0x0) {
                      (pGVar16->fields).TargetHandle = (this->fields)._targetHandle;
                      iVar24 = 0;
                      if (iVar14 != 0) {
                        uVar3 = (uint)((ulonglong)&(pGVar16->fields).TargetHandle >> 0xc);
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
                          iVar24 = iRam_?;
                        } while (!bVar2);
                      }
                      pGVar16 = (this->fields)._controllerData;
                      if (pGVar16 != (GizmoCircle3DBorderControllerData *)0x0) {
                        (pGVar16->fields).TargetCircle = targetCircle;
                        iVar14 = 0;
                        if (iVar24 != 0) {
                          uVar3 = (uint)((ulonglong)&(pGVar16->fields).TargetCircle >> 0xc);
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
                            iVar14 = iRam_?;
                          } while (!bVar2);
                        }
                        pGVar16 = (this->fields)._controllerData;
                        if (pGVar16 != (GizmoCircle3DBorderControllerData *)0x0) {
                          (pGVar16->fields).BorderCircle = (this->fields)._borderCircle;
                          iVar24 = 0;
                          if (iVar14 != 0) {
                            uVar3 = (uint)((ulonglong)&(pGVar16->fields).BorderCircle >> 0xc);
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
                              iVar24 = iRam_?;
                            } while (!bVar2);
                          }
                          pGVar16 = (this->fields)._controllerData;
                          if (pGVar16 != (GizmoCircle3DBorderControllerData *)0x0) {
                            (pGVar16->fields).BorderTorus = (this->fields)._borderTorus;
                            iVar14 = 0;
                            if (iVar24 != 0) {
                              uVar3 = (uint)((ulonglong)&(pGVar16->fields).BorderTorus >> 0xc);
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
                                iVar14 = iRam_?;
                              } while (!bVar2);
                            }
                            pGVar16 = (this->fields)._controllerData;
                            if (pGVar16 != (GizmoCircle3DBorderControllerData *)0x0) {
                              (pGVar16->fields).BorderCylTorus = (this->fields)._borderCylTorus;
                              if (iVar14 != 0) {
                                uVar3 = (uint)((ulonglong)&(pGVar16->fields).BorderCylTorus >> 0xc)
                                ;
                                uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                                do {
                                  uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                                  puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                                  LOCK();
                                  bVar2 = uVar5 == *puVar6;
                                  if (bVar2) {
                                    *puVar6 = uVar5 | 1L << (ulonglong)(uVar3 & 0x3f);
                                  }
                                  UNLOCK();
                                } while (!bVar2);
                              }
                              pGVar16 = (this->fields)._controllerData;
                              if (pGVar16 != (GizmoCircle3DBorderControllerData *)0x0) {
                                (pGVar16->fields).BorderCircleIndex =
                                     (this->fields)._borderCircleIndex;
                                pGVar16 = (this->fields)._controllerData;
                                if (pGVar16 != (GizmoCircle3DBorderControllerData *)0x0) {
                                  (pGVar16->fields).BorderTorusIndex =
                                       (this->fields)._borderTorusIndex;
                                  pGVar16 = (this->fields)._controllerData;
                                  if (pGVar16 != (GizmoCircle3DBorderControllerData *)0x0) {
                                    (pGVar16->fields).BorderCylTorusIndex =
                                         (this->fields)._borderCylTorusIndex;
                                    pIVar23 = (this->fields)._controllers;
                                    pGVar16 = (this->fields)._controllerData;
                                    lVar19 = FUN_?(
                                                  TypeInfo__RTG__GizmoThinCircle3DBorderController);
                                    bVar2 = iRam_? != 0;
                                    *(GizmoCircle3DBorderControllerData **)(lVar19 + 0x10) = pGVar16
                                    ;
                                    if (bVar2) {
                                      uVar3 = (uint)(lVar19 + 0x10U >> 0xc);
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
                                    if (pIVar23 != (IGizmoCircle3DBorderController__Array *)0x0) {
                                      lVar26 = FUN_?(lVar19,(pIVar23->klass->_0).
                                                                    element_class);
                                      if (lVar26 == 0) {
                                        uVar20 = FUN_?();
                                        FUN_?(uVar20,0);
                                        pcVar21 = (code *)swi(3);
                                        (*pcVar21)();
                                        return;
                                      }
                                      FUN_?(pIVar23,0,lVar19);
                                      pIVar23 = (this->fields)._controllers;
                                      pGVar16 = (this->fields)._controllerData;
                                      lVar19 = FUN_?(
                                                  TypeInfo__RTG__GizmoTorusCircle3DBorderController)
                                      ;
                                      bVar2 = iRam_? != 0;
                                      *(GizmoCircle3DBorderControllerData **)(lVar19 + 0x10) =
                                           pGVar16;
                                      if (bVar2) {
                                        uVar3 = (uint)(lVar19 + 0x10U >> 0xc);
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
                                      if (pIVar23 != (IGizmoCircle3DBorderController__Array *)0x0) {
                                        lVar26 = FUN_?(lVar19,(pIVar23->klass->_0).
                                                                      element_class);
                                        if (lVar26 == 0) {
                                          uVar20 = FUN_?();
                                          FUN_?(uVar20,0);
                                          pcVar21 = (code *)swi(3);
                                          (*pcVar21)();
                                          return;
                                        }
                                        FUN_?(pIVar23,1,lVar19);
                                        pIVar23 = (this->fields)._controllers;
                                        pGVar16 = (this->fields)._controllerData;
                                        lVar19 = FUN_?(
                                                  TypeInfo__RTG__GizmoCylindricalTorusCircle3DBorderController
                                                  );
                                        bVar2 = iRam_? != 0;
                                        *(GizmoCircle3DBorderControllerData **)(lVar19 + 0x10) =
                                             pGVar16;
                                        if (bVar2) {
                                          uVar3 = (uint)(lVar19 + 0x10U >> 0xc);
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
                                        if (pIVar23 != (IGizmoCircle3DBorderController__Array *)0x0)
                                        {
                                          lVar26 = FUN_?(lVar19,(pIVar23->klass->_0).
                                                                        element_class);
                                          if (lVar26 == 0) {
                                            uVar20 = FUN_?();
                                            FUN_?(uVar20,0);
                                            pcVar21 = (code *)swi(3);
                                            (*pcVar21)();
                                            return;
                                          }
                                          FUN_?(pIVar23,2,lVar19);
                                          pGVar25 = (this->fields)._targetHandle;
                                          if (pGVar25 != (GizmoHandle *)0x0) {
                                            pGVar27 = (pGVar25->fields)._gizmo;
                                            this_01 = (UnityAction_1_System_Object_ *)
                                                      FUN_?(
                                                  TypeInfo__RTG__GizmoPreUpdateBeginHandler);
                                            UnityEngine.CoreModule.dll::UnityEngine::Events::
                                            UnityAction`1[System::Object]::
                                            UnityAction_1_System_Object___ctor
                                                      (this_01,(Object *)this,
                                                                                                              
                                                  MethodInfo__RTG__GizmoCircle3DBorder__OnGizmoPreUpdateBegin_RTG__Gizmo_
                                                  ,(MethodInfo *)0x0);
                                            if (pGVar27 != (Gizmo *)0x0) {
                                              if (cRam_? == '\0') {
                                                FUN_?(&
                                                  TypeInfo__RTG__GizmoPreUpdateBeginHandler);
                                                LOCK();
                                                UNLOCK();
                                                cRam_? = '\x01';
                                              }
                                              ppGVar28 = &(pGVar27->fields).PreUpdateBegin;
                                              a = (pGVar27->fields).PreUpdateBegin;
                                              do {
                                                pGVar29 = (GizmoPreUpdateBeginHandler *)
                                                          mscorlib.dll::System::Delegate::
                                                          Delegate_Combine((Delegate *)a,
                                                                           (Delegate *)this_01,
                                                                           (MethodInfo *)0x0);
                                                pGVar30 = (GizmoPreUpdateBeginHandler *)0x0;
                                                if (pGVar29 != (GizmoPreUpdateBeginHandler *)0x0) {
                                                  if (pGVar29->klass ==
                                                      TypeInfo__RTG__GizmoPreUpdateBeginHandler) {
                                                    pGVar30 = pGVar29;
                                                  }
                                                  if (pGVar30 == (GizmoPreUpdateBeginHandler *)0x0)
                                                  {
                                                    FUN_?(pGVar29);
                                                    pcVar21 = (code *)swi(3);
                                                    (*pcVar21)();
                                                    return;
                                                  }
                                                }
                                                LOCK();
                                                pGVar29 = *ppGVar28;
                                                bVar2 = a == pGVar29;
                                                if (bVar2) {
                                                  *ppGVar28 = pGVar30;
                                                  pGVar29 = a;
                                                }
                                                UNLOCK();
                                                pGVar30 = a;
                                                if (!bVar2) {
                                                  pGVar30 = pGVar29;
                                                }
                                                if (iRam_? != 0) {
                                                  uVar3 = (uint)((ulonglong)ppGVar28 >> 0xc);
                                                  uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                                                  do {
                                                    uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR)
                                                    ;
                                                    puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR)
                                                    ;
                                                    LOCK();
                                                    bVar2 = uVar5 == *puVar6;
                                                    if (bVar2) {
                                                      *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                                                    }
                                                    UNLOCK();
                                                  } while (!bVar2);
                                                }
                                                bVar2 = pGVar30 != a;
                                                a = pGVar30;
                                              } while (bVar2);
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
  FUN_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


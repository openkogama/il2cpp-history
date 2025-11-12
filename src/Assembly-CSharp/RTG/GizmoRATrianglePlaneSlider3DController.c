
/* Void UpdateEpsilons(Single) */

void Assembly-CSharp.dll::RTG::GizmoRATrianglePlaneSlider3DController::
     GizmoRATrianglePlaneSlider3DController_UpdateEpsilons
               (GizmoRATrianglePlaneSlider3DController *this,float zoomFactor,MethodInfo *method)

{
  uVar1 = _UNK_?;
  pGVar2 = (this->fields)._._data;
  if ((pGVar2 != (GizmoPlaneSlider3DControllerData *)0x0) &&
     (pGVar3 = (pGVar2->fields).Slider, pGVar3 != (GizmoPlaneSlider3D *)0x0)) {
    method = (MethodInfo *)0xc8;
    lVar4 = 200;
    if ((pGVar3->fields)._sharedSettings == (GizmoPlaneSlider3DSettings *)0x0) {
      lVar4 = 0xc0;
    }
    lVar4 = *(longlong *)((longlong)&pGVar3->klass + lVar4);
    if ((lVar4 != 0) && (pRVar5 = (pGVar2->fields).RATriangle, pRVar5 != (RightAngTriangle3D *)0x0))
    {
      (pRVar5->fields)._epsilon._areaEps =
           (float)((uint)(zoomFactor * *(float *)(lVar4 + 0x10)) & _UNK_?);
      if ((pGVar2 != (GizmoPlaneSlider3DControllerData *)0x0) &&
         (pGVar3 != (GizmoPlaneSlider3D *)0x0)) {
        uVar6 = 200;
        if ((pGVar3->fields)._sharedSettings == (GizmoPlaneSlider3DSettings *)0x0) {
          uVar6 = 0xc0;
        }
        method = (MethodInfo *)(ulonglong)uVar6;
        lVar4 = *(longlong *)((longlong)&method->methodPointer + (longlong)pGVar3);
        if ((lVar4 != 0) && (pRVar5 != (RightAngTriangle3D *)0x0)) {
          (pRVar5->fields)._epsilon._extrudeEps =
               (float)((uint)(zoomFactor * *(float *)(lVar4 + 0x14)) & uVar1);
          return;
        }
      }
    }
  }
  FUN_?(this,zoomFactor,method);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UpdateHandles() */

void Assembly-CSharp.dll::RTG::GizmoRATrianglePlaneSlider3DController::
     GizmoRATrianglePlaneSlider3DController_UpdateHandles
               (GizmoRATrianglePlaneSlider3DController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoPlaneSlider3DControllerData *)0x0) &&
     (this_00 = (pGVar1->fields).QuadBorder, this_00 != (GizmoQuad3DBorder *)0x0)) {
    GizmoQuad3DBorder::GizmoQuad3DBorder_SetVisible(this_00,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._data;
    if ((pGVar1 != (GizmoPlaneSlider3DControllerData *)0x0) &&
       (pGVar2 = (pGVar1->fields).SliderHandle, pGVar2 != (GizmoHandle *)0x0)) {
      GizmoHandle::GizmoHandle_Set3DShapeVisible
                (pGVar2,(pGVar1->fields).QuadIndex,0,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._data;
      if ((pGVar1 != (GizmoPlaneSlider3DControllerData *)0x0) &&
         (this_01 = (pGVar1->fields).CircleBorder, this_01 != (GizmoCircle3DBorder *)0x0)) {
        GizmoCircle3DBorder::GizmoCircle3DBorder_SetVisible(this_01,0,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._._data;
        if ((pGVar1 != (GizmoPlaneSlider3DControllerData *)0x0) &&
           (pGVar2 = (pGVar1->fields).SliderHandle, pGVar2 != (GizmoHandle *)0x0)) {
          GizmoHandle::GizmoHandle_Set3DShapeVisible
                    (pGVar2,(pGVar1->fields).CircleIndex,0,(MethodInfo *)0x0);
          pGVar1 = (this->fields)._._data;
          if (((pGVar1 != (GizmoPlaneSlider3DControllerData *)0x0) &&
              (pGVar3 = (pGVar1->fields).Slider, pGVar3 != (GizmoPlaneSlider3D *)0x0)) &&
             (this_02 = (pGVar1->fields).RATriangleBorder, this_02 != (GizmoRATriangle3DBorder *)0x0
             )) {
            GizmoRATriangle3DBorder::GizmoRATriangle3DBorder_SetVisible
                      (this_02,(pGVar3->fields)._isBorderVisible,(MethodInfo *)0x0);
            pGVar1 = (this->fields)._._data;
            if (((pGVar1 != (GizmoPlaneSlider3DControllerData *)0x0) &&
                (pGVar3 = (pGVar1->fields).Slider, pGVar3 != (GizmoPlaneSlider3D *)0x0)) &&
               (pGVar2 = (pGVar1->fields).SliderHandle, pGVar2 != (GizmoHandle *)0x0)) {
              bVar4 = (pGVar3->fields)._._isVisible;
              uVar5 = (pGVar1->fields).RATriangleIndex;
              if (cRam_? == '\0') {
                FUN_?();
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pLVar6 = (pGVar2->fields)._3DShapes;
              if (pLVar6 != (List_1_RTG_GizmoHandleShape3D_ *)0x0) {
                if ((uint)(pLVar6->fields)._size <= uVar5) {
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pGVar8 = (pLVar6->fields)._items;
                if (pGVar8 != (GizmoHandleShape3D__Array *)0x0) {
                  if ((uint)pGVar8->max_length <= uVar5) {
                    FUN_?();
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  if (pGVar8->vector[(int)uVar5] != (GizmoHandleShape3D *)0x0) {
                    (pGVar8->vector[(int)uVar5]->fields)._isVisible = bVar4;
                    return;
                  }
                }
              }
              FUN_?();
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UpdateTransforms(Single) */

void Assembly-CSharp.dll::RTG::GizmoRATrianglePlaneSlider3DController::
     GizmoRATrianglePlaneSlider3DController_UpdateTransforms
               (GizmoRATrianglePlaneSlider3DController *this,float zoomFactor,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pGVar2 = (this->fields)._._data;
  uVar3 = CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  uVar4 = CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
  if (pGVar2 != (GizmoPlaneSlider3DControllerData *)0x0) {
    pRVar5 = (pGVar2->fields).RATriangle;
    pGVar6 = (((this->fields)._._data)->fields).Slider;
    if (pGVar6 != (GizmoPlaneSlider3D *)0x0) {
      lVar7 = 0xd8;
      lVar8 = 0xd8;
      if ((pGVar6->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
        lVar8 = 0xd0;
      }
      lVar8 = *(longlong *)((longlong)&pGVar6->klass + lVar8);
      if (lVar8 != 0) {
        if (*(char *)(lVar8 + 0x18) == '\0') {
          zoomFactor = _UNK_?;
        }
        pGVar9 = (pGVar6->fields)._scaleDrag;
        if (pGVar9 != (GizmoDblAxisScaleDrag3D *)0x0) {
          cVar10 = (*(pGVar9->klass->vtable).get_IsActive_1.methodPtr)
                             (pGVar9,(pGVar9->klass->vtable).get_IsActive_1.method);
          fVar11 = fVar1;
          if (cVar10 != '\0') {
            pGVar9 = (pGVar6->fields)._scaleDrag;
            if (pGVar9 == (GizmoDblAxisScaleDrag3D *)0x0) goto code_?;
            fVar1 = (pGVar9->fields)._totalScale0;
            fVar11 = (pGVar9->fields)._totalScale1;
          }
          lVar8 = 0xd8;
          if ((pGVar6->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
            lVar8 = 0xd0;
          }
          lVar8 = *(longlong *)((longlong)&pGVar6->klass + lVar8);
          if (lVar8 != 0) {
            bVar12 = (pGVar6->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0;
            lVar13 = 0xd8;
            if (bVar12) {
              lVar13 = 0xd0;
            }
            lVar14 = 0xd8;
            if (bVar12) {
              lVar14 = 0xd0;
            }
            if (bVar12) {
              lVar7 = 0xd0;
            }
            pGVar15 = (pGVar6->fields)._transform;
            fVar1 = *(float *)(lVar8 + 0x24) *
                     *(float *)(*(longlong *)((longlong)&pGVar6->klass + lVar13) + 0x14) *
                     zoomFactor * fVar1;
            fVar11 = *(float *)(*(longlong *)((longlong)&pGVar6->klass + lVar7) + 0x14) *
                     *(float *)(*(longlong *)((longlong)&pGVar6->klass + lVar14) + 0x28) *
                     zoomFactor * fVar11;
            if ((pGVar15 != (GizmoTransform *)0x0) && (pRVar5 != (RightAngTriangle3D *)0x0)) {
              fVar16 = (pGVar15->fields)._position3D.z;
              fVar17 = (pGVar15->fields)._position3D.y;
              (pRVar5->fields)._rightAngleCorner.x = (pGVar15->fields)._position3D.x;
              (pRVar5->fields)._rightAngleCorner.y = fVar17;
              (pRVar5->fields)._rightAngleCorner.z = fVar16;
              pGVar15 = (pGVar6->fields)._transform;
              if (pGVar15 != (GizmoTransform *)0x0) {
                fVar16 = (pGVar15->fields)._rotation3D.y;
                fVar17 = (pGVar15->fields)._rotation3D.z;
                fVar18 = (pGVar15->fields)._rotation3D.w;
                (pRVar5->fields)._rotation.x = (pGVar15->fields)._rotation3D.x;
                (pRVar5->fields)._rotation.y = fVar16;
                (pRVar5->fields)._rotation.z = fVar17;
                (pRVar5->fields)._rotation.w = fVar18;
                (pRVar5->fields)._XLength = (float)((uint)fVar1 & _UNK_?);
                (pRVar5->fields)._YLength = (float)((uint)fVar11 & _UNK_?);
                (pRVar5->fields)._XLengthSign = (uint)(fVar1 < 0.0);
                (pRVar5->fields)._YLengthSign = (uint)(fVar11 < 0.0);
                pGVar2 = (this->fields)._._data;
                if ((pGVar2 != (GizmoPlaneSlider3DControllerData *)0x0) &&
                   (pGVar19 = (pGVar2->fields).RATriangleBorder,
                   pGVar19 != (GizmoRATriangle3DBorder *)0x0)) {
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__RTG__IGizmoRATriangle3DBorderController,0,lVar8,fVar11
                                  ,unaff_RBX);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pGVar20 = (pGVar19->fields)._targetHandle;
                  if ((pGVar20 != (GizmoHandle *)0x0) &&
                     (this_00 = (pGVar20->fields)._gizmo, this_00 != (Gizmo *)0x0)) {
                    camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
                    pGVar6 = (pGVar19->fields)._planeSlider;
                    if (pGVar6 != (GizmoPlaneSlider3D *)0x0) {
                      lVar7 = 0xd8;
                      lVar8 = 0xd8;
                      if ((pGVar6->fields)._sharedLookAndFeel ==
                          (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                        lVar8 = 0xd0;
                      }
                      lVar8 = *(longlong *)((longlong)&pGVar6->klass + lVar8);
                      if (lVar8 != 0) {
                        fVar1 = _UNK_?;
                        if (*(char *)(lVar8 + 0x18) != '\0') {
                          pGVar20 = (pGVar6->fields)._._handle;
                          if (pGVar20 == (GizmoHandle *)0x0) goto code_?;
                          fVar1 = GizmoHandle::GizmoHandle_GetZoomFactor
                                             (pGVar20,camera,(MethodInfo *)0x0);
                        }
                        pGVar6 = (pGVar19->fields)._planeSlider;
                        if (pGVar6 != (GizmoPlaneSlider3D *)0x0) {
                          if ((pGVar6->fields)._sharedLookAndFeel ==
                              (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                            lVar7 = 0xd0;
                          }
                          lVar8 = *(longlong *)((longlong)&pGVar6->klass + lVar7);
                          if ((lVar8 != 0) &&
                             (pIVar21 = (pGVar19->fields)._controllers,
                             pIVar21 != (IGizmoRATriangle3DBorderController__Array *)0x0)) {
                            uVar22 = *(uint *)(lVar8 + 0x9c);
                            if ((uint)pIVar21->max_length <= uVar22) {
                              FUN_?();
                              pcVar23 = (code *)swi(3);
                              (*pcVar23)();
                              return;
                            }
                            pIVar24 = pIVar21->vector[(int)uVar22];
                            if (pIVar24 != (IGizmoRATriangle3DBorderController *)0x0) {
                              pIVar25 = pIVar24->klass;
                              uVar26 = 0;
                              uVar27._0_1_ = (pIVar25->_1).rank;
                              uVar27._1_1_ = (pIVar25->_1).minimumAlignment;
                              if (uVar27 != 0) {
                                do {
                                  if (pIVar25->interfaceOffsets[uVar26].interfaceType ==
                                      (Il2CppClass *)
                                      TypeInfo__RTG__IGizmoRATriangle3DBorderController) {
                                    ppIVar28 = &(&(pIVar25->vtable).UpdateHandles)
                                                [pIVar25->interfaceOffsets[uVar26].offset + 2].
                                                methodPtr;
                                    goto code_?;
                                  }
                                  uVar29 = (short)uVar26 + 1;
                                  uVar26 = (ulonglong)uVar29;
                                } while (uVar29 < uVar27);
                              }
                              ppIVar28 = (Il2CppMethodPointer *)
                                         FUN_?(pIVar24,
                                                  TypeInfo__RTG__IGizmoRATriangle3DBorderController,
                                                  2,fVar1,uVar3,uVar4,unaff_RDI);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                              (**ppIVar28)(pIVar24,fVar1,(MethodInfo *)ppIVar28[1]);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
code_?:
                  FUN_?();
                  pcVar23 = (code *)swi(3);
                  (*pcVar23)();
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
  FUN_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


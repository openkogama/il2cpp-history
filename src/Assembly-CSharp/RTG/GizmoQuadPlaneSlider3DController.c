
/* Void UpdateEpsilons(Single) */

void Assembly-CSharp.dll::RTG::GizmoQuadPlaneSlider3DController::
     GizmoQuadPlaneSlider3DController_UpdateEpsilons
               (GizmoQuadPlaneSlider3DController *this,float zoomFactor,MethodInfo *method)

{
  uVar1 = _UNK_?;
  pGVar2 = (this->fields)._._data;
  if (pGVar2 != (GizmoPlaneSlider3DControllerData *)0x0) {
    pGVar3 = (pGVar2->fields).Slider;
    pQVar4 = (pGVar2->fields).Quad;
    if (pGVar3 != (GizmoPlaneSlider3D *)0x0) {
      method = (MethodInfo *)0xc8;
      lVar5 = 200;
      if ((pGVar3->fields)._sharedSettings == (GizmoPlaneSlider3DSettings *)0x0) {
        lVar5 = 0xc0;
      }
      lVar5 = *(longlong *)((longlong)&pGVar3->klass + lVar5);
      if ((lVar5 != 0) &&
         (fVar6 = zoomFactor * *(float *)(lVar5 + 0x10), pQVar4 != (QuadShape3D *)0x0)) {
        fVar7 = (float)((uint)fVar6 & _UNK_?);
        (pQVar4->fields)._epsilon._sizeEps.x = (float)((uint)fVar6 & _UNK_?);
        (pQVar4->fields)._epsilon._sizeEps.y = fVar7;
        pGVar2 = (this->fields)._._data;
        if ((pGVar2 != (GizmoPlaneSlider3DControllerData *)0x0) &&
           (this = (GizmoQuadPlaneSlider3DController *)(pGVar2->fields).Slider,
           (GizmoPlaneSlider3D *)this != (GizmoPlaneSlider3D *)0x0)) {
          uVar8 = 200;
          if ((((GizmoPlaneSlider3D *)this)->fields)._sharedSettings ==
              (GizmoPlaneSlider3DSettings *)0x0) {
            uVar8 = 0xc0;
          }
          method = (MethodInfo *)(ulonglong)uVar8;
          lVar5 = *(longlong *)
                   ((longlong)&((GizmoPlaneSlider3D *)this)->klass +
                   (longlong)&method->methodPointer);
          if ((lVar5 != 0) && (pQVar4 = (pGVar2->fields).Quad, pQVar4 != (QuadShape3D *)0x0)) {
            (pQVar4->fields)._epsilon._extrudeEps =
                 (float)((uint)(zoomFactor * *(float *)(lVar5 + 0x14)) & uVar1);
            return;
          }
        }
      }
    }
  }
  FUN_?(this,zoomFactor,method);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void UpdateHandles() */

void Assembly-CSharp.dll::RTG::GizmoQuadPlaneSlider3DController::
     GizmoQuadPlaneSlider3DController_UpdateHandles
               (GizmoQuadPlaneSlider3DController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoPlaneSlider3DControllerData *)0x0) &&
     (this_00 = (pGVar1->fields).RATriangleBorder, this_00 != (GizmoRATriangle3DBorder *)0x0)) {
    GizmoRATriangle3DBorder::GizmoRATriangle3DBorder_SetVisible(this_00,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._data;
    if ((pGVar1 != (GizmoPlaneSlider3DControllerData *)0x0) &&
       (pGVar2 = (pGVar1->fields).SliderHandle, pGVar2 != (GizmoHandle *)0x0)) {
      GizmoHandle::GizmoHandle_Set3DShapeVisible
                (pGVar2,(pGVar1->fields).RATriangleIndex,0,(MethodInfo *)0x0);
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
             (this_02 = (pGVar1->fields).QuadBorder, this_02 != (GizmoQuad3DBorder *)0x0)) {
            GizmoQuad3DBorder::GizmoQuad3DBorder_SetVisible
                      (this_02,(pGVar3->fields)._isBorderVisible,(MethodInfo *)0x0);
            pGVar1 = (this->fields)._._data;
            if (((pGVar1 != (GizmoPlaneSlider3DControllerData *)0x0) &&
                (pGVar3 = (pGVar1->fields).Slider, pGVar3 != (GizmoPlaneSlider3D *)0x0)) &&
               (pGVar2 = (pGVar1->fields).SliderHandle, pGVar2 != (GizmoHandle *)0x0)) {
              bVar4 = (pGVar3->fields)._._isVisible;
              uVar5 = (pGVar1->fields).QuadIndex;
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

void Assembly-CSharp.dll::RTG::GizmoQuadPlaneSlider3DController::
     GizmoQuadPlaneSlider3DController_UpdateTransforms
               (GizmoQuadPlaneSlider3DController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  uVar2 = CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  uVar3 = CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
  if ((((pGVar1 != (GizmoPlaneSlider3DControllerData *)0x0) &&
       (pGVar4 = (pGVar1->fields).Slider, pGVar4 != (GizmoPlaneSlider3D *)0x0)) &&
      (pGVar5 = (pGVar4->fields)._transform, pGVar5 != (GizmoTransform *)0x0)) &&
     (pQVar6 = (pGVar1->fields).Quad, pQVar6 != (QuadShape3D *)0x0)) {
    fVar7 = (pGVar5->fields)._position3D.z;
    fVar8 = (pGVar5->fields)._position3D.y;
    (pQVar6->fields)._center.x = (pGVar5->fields)._position3D.x;
    (pQVar6->fields)._center.y = fVar8;
    (pQVar6->fields)._center.z = fVar7;
    pGVar5 = (pGVar4->fields)._transform;
    if (pGVar5 != (GizmoTransform *)0x0) {
      fVar7 = (pGVar5->fields)._rotation3D.y;
      fVar8 = (pGVar5->fields)._rotation3D.z;
      fVar9 = (pGVar5->fields)._rotation3D.w;
      (pQVar6->fields)._rotation.x = (pGVar5->fields)._rotation3D.x;
      (pQVar6->fields)._rotation.y = fVar7;
      (pQVar6->fields)._rotation.z = fVar8;
      (pQVar6->fields)._rotation.w = fVar9;
      fVar7 = _UNK_?;
      lVar10 = 0xd8;
      lVar11 = 0xd8;
      if ((pGVar4->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
        lVar11 = 0xd0;
      }
      lVar11 = *(longlong *)((longlong)&pGVar4->klass + lVar11);
      if (lVar11 != 0) {
        if (*(char *)(lVar11 + 0x18) == '\0') {
          zoomFactor = _UNK_?;
        }
        pGVar12 = (pGVar4->fields)._scaleDrag;
        if (pGVar12 != (GizmoDblAxisScaleDrag3D *)0x0) {
          cVar13 = (*(pGVar12->klass->vtable).get_IsActive_1.methodPtr)
                             (pGVar12,(pGVar12->klass->vtable).get_IsActive_1.method);
          fVar8 = fVar7;
          if (cVar13 != '\0') {
            pGVar12 = (pGVar4->fields)._scaleDrag;
            if (pGVar12 == (GizmoDblAxisScaleDrag3D *)0x0) goto code_?;
            fVar7 = (pGVar12->fields)._totalScale0;
            fVar8 = (pGVar12->fields)._totalScale1;
          }
          lVar11 = 0xd8;
          if ((pGVar4->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
            lVar11 = 0xd0;
          }
          lVar11 = *(longlong *)((longlong)&pGVar4->klass + lVar11);
          if (lVar11 != 0) {
            bVar14 = (pGVar4->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0;
            lVar15 = 0xd8;
            if (bVar14) {
              lVar15 = 0xd0;
            }
            lVar16 = 0xd8;
            if (bVar14) {
              lVar16 = 0xd0;
            }
            if (bVar14) {
              lVar10 = 0xd0;
            }
            fVar9 = *(float *)(*(longlong *)((longlong)&pGVar4->klass + lVar10) + 0x14);
            fVar17 = *(float *)(*(longlong *)((longlong)&pGVar4->klass + lVar16) + 0x20);
            (pQVar6->fields)._size.x =
                 (float)((uint)(*(float *)(*(longlong *)((longlong)&pGVar4->klass + lVar15) + 0x14)
                                * *(float *)(lVar11 + 0x1c) * zoomFactor * fVar7) & _UNK_?)
            ;
            (pQVar6->fields)._size.y =
                 (float)((uint)(fVar9 * fVar17 * zoomFactor * fVar8) & _UNK_?);
            pGVar1 = (this->fields)._._data;
            if ((pGVar1 != (GizmoPlaneSlider3DControllerData *)0x0) &&
               (pGVar18 = (pGVar1->fields).QuadBorder, pGVar18 != (GizmoQuad3DBorder *)0x0)) {
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__RTG__IGizmoQuad3DBorderController);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pGVar19 = (pGVar18->fields)._targetHandle;
              if ((pGVar19 != (GizmoHandle *)0x0) &&
                 (this_00 = (pGVar19->fields)._gizmo, this_00 != (Gizmo *)0x0)) {
                camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
                pGVar4 = (pGVar18->fields)._planeSlider;
                if (pGVar4 != (GizmoPlaneSlider3D *)0x0) {
                  lVar10 = 0xd8;
                  lVar11 = 0xd8;
                  if ((pGVar4->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                    lVar11 = 0xd0;
                  }
                  lVar11 = *(longlong *)((longlong)&pGVar4->klass + lVar11);
                  if (lVar11 != 0) {
                    fVar7 = _UNK_?;
                    if (*(char *)(lVar11 + 0x18) != '\0') {
                      pGVar19 = (pGVar4->fields)._._handle;
                      if (pGVar19 == (GizmoHandle *)0x0) goto code_?;
                      fVar7 = GizmoHandle::GizmoHandle_GetZoomFactor
                                         (pGVar19,camera,(MethodInfo *)0x0);
                    }
                    pGVar4 = (pGVar18->fields)._planeSlider;
                    if (pGVar4 != (GizmoPlaneSlider3D *)0x0) {
                      if ((pGVar4->fields)._sharedLookAndFeel ==
                          (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                        lVar10 = 0xd0;
                      }
                      lVar11 = *(longlong *)((longlong)&pGVar4->klass + lVar10);
                      if ((lVar11 != 0) &&
                         (pIVar20 = (pGVar18->fields)._controllers,
                         pIVar20 != (IGizmoQuad3DBorderController__Array *)0x0)) {
                        uVar21 = *(uint *)(lVar11 + 0x98);
                        if ((uint)pIVar20->max_length <= uVar21) {
                          FUN_?();
                          pcVar22 = (code *)swi(3);
                          (*pcVar22)();
                          return;
                        }
                        pIVar23 = pIVar20->vector[(int)uVar21];
                        if (pIVar23 != (IGizmoQuad3DBorderController *)0x0) {
                          pIVar24 = pIVar23->klass;
                          uVar25 = 0;
                          uVar26._0_1_ = (pIVar24->_1).rank;
                          uVar26._1_1_ = (pIVar24->_1).minimumAlignment;
                          if (uVar26 != 0) {
                            do {
                              if (pIVar24->interfaceOffsets[uVar25].interfaceType ==
                                  (Il2CppClass *)TypeInfo__RTG__IGizmoQuad3DBorderController) {
                                ppIVar27 = &(&(pIVar24->vtable).UpdateHandles)
                                            [pIVar24->interfaceOffsets[uVar25].offset + 2].methodPtr;
                                goto code_?;
                              }
                              uVar28 = (short)uVar25 + 1;
                              uVar25 = (ulonglong)uVar28;
                            } while (uVar28 < uVar26);
                          }
                          ppIVar27 = (Il2CppMethodPointer *)
                                     FUN_?(pIVar23,
                                                  TypeInfo__RTG__IGizmoQuad3DBorderController,2,
                                                  fVar7,uVar2,uVar3,unaff_RDI);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          (**ppIVar27)(pIVar23,fVar7,(MethodInfo *)ppIVar27[1]);
                          return;
                        }
                      }
                    }
                  }
                }
              }
code_?:
              FUN_?();
              pcVar22 = (code *)swi(3);
              (*pcVar22)();
              return;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


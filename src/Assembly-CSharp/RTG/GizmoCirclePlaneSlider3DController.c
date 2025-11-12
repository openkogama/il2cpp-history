
/* Void UpdateEpsilons(Single) */

void Assembly-CSharp.dll::RTG::GizmoCirclePlaneSlider3DController::
     GizmoCirclePlaneSlider3DController_UpdateEpsilons
               (GizmoCirclePlaneSlider3DController *this,float zoomFactor,MethodInfo *method)

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
    if ((lVar4 != 0) && (pCVar5 = (pGVar2->fields).Circle, pCVar5 != (CircleShape3D *)0x0)) {
      (pCVar5->fields)._epsilon._radiusEps =
           (float)((uint)(zoomFactor * *(float *)(lVar4 + 0x10) * _UNK_?) & _UNK_?);
      if ((pGVar2 != (GizmoPlaneSlider3DControllerData *)0x0) &&
         (pGVar3 != (GizmoPlaneSlider3D *)0x0)) {
        uVar6 = 200;
        if ((pGVar3->fields)._sharedSettings == (GizmoPlaneSlider3DSettings *)0x0) {
          uVar6 = 0xc0;
        }
        method = (MethodInfo *)(ulonglong)uVar6;
        lVar4 = *(longlong *)((longlong)&method->methodPointer + (longlong)pGVar3);
        if ((lVar4 != 0) && (pCVar5 != (CircleShape3D *)0x0)) {
          (pCVar5->fields)._epsilon._extrudeEps =
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

void Assembly-CSharp.dll::RTG::GizmoCirclePlaneSlider3DController::
     GizmoCirclePlaneSlider3DController_UpdateHandles
               (GizmoCirclePlaneSlider3DController *this,MethodInfo *method)

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
         (this_01 = (pGVar1->fields).RATriangleBorder, this_01 != (GizmoRATriangle3DBorder *)0x0)) {
        GizmoRATriangle3DBorder::GizmoRATriangle3DBorder_SetVisible(this_01,0,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._._data;
        if ((pGVar1 != (GizmoPlaneSlider3DControllerData *)0x0) &&
           (pGVar2 = (pGVar1->fields).SliderHandle, pGVar2 != (GizmoHandle *)0x0)) {
          GizmoHandle::GizmoHandle_Set3DShapeVisible
                    (pGVar2,(pGVar1->fields).RATriangleIndex,0,(MethodInfo *)0x0);
          pGVar1 = (this->fields)._._data;
          if (((pGVar1 != (GizmoPlaneSlider3DControllerData *)0x0) &&
              (pGVar3 = (pGVar1->fields).Slider, pGVar3 != (GizmoPlaneSlider3D *)0x0)) &&
             (this_02 = (pGVar1->fields).CircleBorder, this_02 != (GizmoCircle3DBorder *)0x0)) {
            GizmoCircle3DBorder::GizmoCircle3DBorder_SetVisible
                      (this_02,(pGVar3->fields)._isBorderVisible,(MethodInfo *)0x0);
            pGVar1 = (this->fields)._._data;
            if (((pGVar1 != (GizmoPlaneSlider3DControllerData *)0x0) &&
                (pGVar3 = (pGVar1->fields).Slider, pGVar3 != (GizmoPlaneSlider3D *)0x0)) &&
               (pGVar2 = (pGVar1->fields).SliderHandle, pGVar2 != (GizmoHandle *)0x0)) {
              bVar4 = (pGVar3->fields)._._isVisible;
              uVar5 = (pGVar1->fields).CircleIndex;
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

void Assembly-CSharp.dll::RTG::GizmoCirclePlaneSlider3DController::
     GizmoCirclePlaneSlider3DController_UpdateTransforms
               (GizmoCirclePlaneSlider3DController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((((pGVar1 != (GizmoPlaneSlider3DControllerData *)0x0) &&
       (pGVar2 = (pGVar1->fields).Slider, pGVar2 != (GizmoPlaneSlider3D *)0x0)) &&
      (pGVar3 = (pGVar2->fields)._transform, pGVar3 != (GizmoTransform *)0x0)) &&
     (pCVar4 = (pGVar1->fields).Circle, pCVar4 != (CircleShape3D *)0x0)) {
    fVar5 = (pGVar3->fields)._position3D.y;
    fVar6 = (pGVar3->fields)._position3D.z;
    (pCVar4->fields)._center.x = (pGVar3->fields)._position3D.x;
    (pCVar4->fields)._center.y = fVar5;
    (pCVar4->fields)._center.z = fVar6;
    fVar6 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_GetRealCircleRadius
                       (pGVar2,zoomFactor,(MethodInfo *)0x0);
    (pCVar4->fields)._radius = (float)((uint)fVar6 & _UNK_?);
    pGVar3 = (pGVar2->fields)._transform;
    if (pGVar3 != (GizmoTransform *)0x0) {
      fVar6 = (pGVar3->fields)._rotation3D.y;
      fVar5 = (pGVar3->fields)._rotation3D.z;
      fVar7 = (pGVar3->fields)._rotation3D.w;
      (pCVar4->fields)._rotation.x = (pGVar3->fields)._rotation3D.x;
      (pCVar4->fields)._rotation.y = fVar6;
      (pCVar4->fields)._rotation.z = fVar5;
      (pCVar4->fields)._rotation.w = fVar7;
      pGVar1 = (this->fields)._._data;
      if ((pGVar1 != (GizmoPlaneSlider3DControllerData *)0x0) &&
         (pGVar8 = (pGVar1->fields).CircleBorder, pGVar8 != (GizmoCircle3DBorder *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__RTG__IGizmoCircle3DBorderController);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pGVar9 = (pGVar8->fields)._targetHandle;
        if ((pGVar9 != (GizmoHandle *)0x0) &&
           (this_00 = (pGVar9->fields)._gizmo, this_00 != (Gizmo *)0x0)) {
          camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
          pGVar2 = (pGVar8->fields)._planeSlider;
          if (pGVar2 != (GizmoPlaneSlider3D *)0x0) {
            lVar10 = 0xd8;
            lVar11 = 0xd8;
            if ((pGVar2->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
              lVar11 = 0xd0;
            }
            lVar11 = *(longlong *)((longlong)&pGVar2->klass + lVar11);
            if (lVar11 != 0) {
              fVar6 = _UNK_?;
              if (*(char *)(lVar11 + 0x18) != '\0') {
                pGVar9 = (pGVar2->fields)._._handle;
                if (pGVar9 == (GizmoHandle *)0x0) goto code_?;
                fVar6 = GizmoHandle::GizmoHandle_GetZoomFactor(pGVar9,camera,(MethodInfo *)0x0);
              }
              pGVar2 = (pGVar8->fields)._planeSlider;
              if (pGVar2 != (GizmoPlaneSlider3D *)0x0) {
                if ((pGVar2->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                  lVar10 = 0xd0;
                }
                lVar11 = *(longlong *)((longlong)&pGVar2->klass + lVar10);
                if ((lVar11 != 0) &&
                   (pIVar12 = (pGVar8->fields)._controllers,
                   pIVar12 != (IGizmoCircle3DBorderController__Array *)0x0)) {
                  uVar13 = *(uint *)(lVar11 + 0xa0);
                  if ((uint)pIVar12->max_length <= uVar13) {
                    FUN_?();
                    pcVar14 = (code *)swi(3);
                    (*pcVar14)();
                    return;
                  }
                  pIVar15 = pIVar12->vector[(int)uVar13];
                  if (pIVar15 != (IGizmoCircle3DBorderController *)0x0) {
                    pIVar16 = pIVar15->klass;
                    uVar17 = 0;
                    uVar18._0_1_ = (pIVar16->_1).rank;
                    uVar18._1_1_ = (pIVar16->_1).minimumAlignment;
                    if (uVar18 != 0) {
                      do {
                        if (pIVar16->interfaceOffsets[uVar17].interfaceType ==
                            (Il2CppClass *)TypeInfo__RTG__IGizmoCircle3DBorderController) {
                          pVVar19 = &(pIVar16->vtable).UpdateHandles +
                                    (pIVar16->interfaceOffsets[uVar17].offset + 2);
                          goto code_?;
                        }
                        uVar20 = (short)uVar17 + 1;
                        uVar17 = (ulonglong)uVar20;
                      } while (uVar20 < uVar18);
                    }
                    pVVar19 = (VirtualInvokeData *)
                              FUN_?(pIVar15,TypeInfo__RTG__IGizmoCircle3DBorderController,2)
                    ;
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*pVVar19->methodPtr)(pIVar15,fVar6,pVVar19->method);
                    return;
                  }
                }
              }
            }
          }
        }
code_?:
        FUN_?();
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


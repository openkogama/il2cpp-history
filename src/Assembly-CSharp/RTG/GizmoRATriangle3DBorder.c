
/* Single GetZoomFactor(Camera) */

float Assembly-CSharp.dll::RTG::GizmoRATriangle3DBorder::GizmoRATriangle3DBorder_GetZoomFactor
                (GizmoRATriangle3DBorder *this,Camera *camera,MethodInfo *method)

{
  pGVar1 = (this->fields)._planeSlider;
  if (pGVar1 != (GizmoPlaneSlider3D *)0x0) {
    lVar2 = 0xd8;
    if ((pGVar1->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      lVar2 = 0xd0;
    }
    lVar2 = *(longlong *)((longlong)&pGVar1->klass + lVar2);
    if (lVar2 != 0) {
      if (*(char *)(lVar2 + 0x18) == '\0') {
        return _UNK_?;
      }
      pGVar3 = (pGVar1->fields)._._handle;
      if (pGVar3 != (GizmoHandle *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__RTG__CameraEx);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pGVar4 = (pGVar3->fields)._zoomFactorTransform;
        if (pGVar4 != (GizmoTransform *)0x0) {
          fVar5 = (pGVar4->fields)._position3D.z;
          uVar6._0_4_ = (pGVar4->fields)._position3D.x;
          uVar6._4_4_ = (pGVar4->fields)._position3D.y;
          if (*(int *)&(TypeInfo__RTG__CameraEx->_1).field_0x1c == 0) {
            FUN_?();
          }
          aVStack_7[0]._0_8_ = uVar6;
          aVStack_7[0].z = fVar5;
          fVar5 = CameraEx::CameraEx_EstimateZoomFactor(camera,aVStack_7,(MethodInfo *)0x0);
          return fVar5;
        }
        FUN_?();
        pcVar8 = (code *)swi(3);
        fVar5 = (float)(*pcVar8)();
        return fVar5;
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  fVar5 = (float)(*pcVar8)();
  return fVar5;
}


/* Void OnGizmoPreUpdateBegin(Gizmo) */

void Assembly-CSharp.dll::RTG::GizmoRATriangle3DBorder::
     GizmoRATriangle3DBorder_OnGizmoPreUpdateBegin
               (GizmoRATriangle3DBorder *this,Gizmo *gizmo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoRATriangle3DBorderController);
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
             pIVar8 != (IGizmoRATriangle3DBorderController__Array *)0x0)) {
            uVar9 = *(uint *)(lVar6 + 0x9c);
            if ((uint)pIVar8->max_length <= uVar9) {
code_?:
              FUN_?();
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            if (pIVar8->vector[(int)uVar9] != (IGizmoRATriangle3DBorderController *)0x0) {
              FUN_?(0,TypeInfo__RTG__IGizmoRATriangle3DBorderController);
              pGVar4 = (this->fields)._planeSlider;
              if (pGVar4 != (GizmoPlaneSlider3D *)0x0) {
                if ((pGVar4->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                  lVar5 = 0xd0;
                }
                lVar6 = *(longlong *)((longlong)&pGVar4->klass + lVar5);
                if ((lVar6 != 0) &&
                   (pIVar8 = (this->fields)._controllers,
                   pIVar8 != (IGizmoRATriangle3DBorderController__Array *)0x0)) {
                  uVar9 = *(uint *)(lVar6 + 0x9c);
                  if ((uint)pIVar8->max_length <= uVar9) goto code_?;
                  pIVar11 = pIVar8->vector[(int)uVar9];
                  if (pIVar11 != (IGizmoRATriangle3DBorderController *)0x0) {
                    pIVar12 = pIVar11->klass;
                    uVar13 = 0;
                    uVar14._0_1_ = (pIVar12->_1).rank;
                    uVar14._1_1_ = (pIVar12->_1).minimumAlignment;
                    if (uVar14 != 0) {
                      do {
                        if (pIVar12->interfaceOffsets[uVar13].interfaceType ==
                            (Il2CppClass *)TypeInfo__RTG__IGizmoRATriangle3DBorderController) {
                          ppIVar15 = &(&(pIVar12->vtable).UpdateHandles)
                                     [pIVar12->interfaceOffsets[uVar13].offset + 1].methodPtr;
                          goto code_?;
                        }
                        uVar16 = (short)uVar13 + 1;
                        uVar13 = (ulonglong)uVar16;
                      } while (uVar16 < uVar14);
                    }
                    ppIVar15 = (Il2CppMethodPointer *)
                              FUN_?(pIVar11,TypeInfo__RTG__IGizmoRATriangle3DBorderController
                                            ,1,fVar7,uVar2,uVar3,unaff_RDI);
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


/* Void OnTriangleShapeChanged() */

void Assembly-CSharp.dll::RTG::GizmoRATriangle3DBorder::
     GizmoRATriangle3DBorder_OnTriangleShapeChanged
               (GizmoRATriangle3DBorder *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoRATriangle3DBorderController);
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
        fVar5 = _UNK_?;
        if (*(char *)(lVar4 + 0x18) != '\0') {
          pGVar1 = (pGVar2->fields)._._handle;
          if (pGVar1 == (GizmoHandle *)0x0) goto code_?;
          fVar5 = GizmoHandle::GizmoHandle_GetZoomFactor(pGVar1,camera,(MethodInfo *)0x0);
        }
        pGVar2 = (this->fields)._planeSlider;
        if (pGVar2 != (GizmoPlaneSlider3D *)0x0) {
          if ((pGVar2->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
            lVar3 = 0xd0;
          }
          lVar4 = *(longlong *)((longlong)&pGVar2->klass + lVar3);
          if ((lVar4 != 0) &&
             (pIVar6 = (this->fields)._controllers,
             pIVar6 != (IGizmoRATriangle3DBorderController__Array *)0x0)) {
            uVar7 = *(uint *)(lVar4 + 0x9c);
            if ((uint)pIVar6->max_length <= uVar7) {
              FUN_?();
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pIVar9 = pIVar6->vector[(int)uVar7];
            if (pIVar9 != (IGizmoRATriangle3DBorderController *)0x0) {
              pIVar10 = pIVar9->klass;
              uVar11 = 0;
              uVar12._0_1_ = (pIVar10->_1).rank;
              uVar12._1_1_ = (pIVar10->_1).minimumAlignment;
              if (uVar12 != 0) {
                do {
                  if (pIVar10->interfaceOffsets[uVar11].interfaceType ==
                      (Il2CppClass *)TypeInfo__RTG__IGizmoRATriangle3DBorderController) {
                    ppIVar13 = &(&(pIVar10->vtable).UpdateHandles)
                               [pIVar10->interfaceOffsets[uVar11].offset + 2].methodPtr;
                    goto code_?;
                  }
                  uVar14 = (short)uVar11 + 1;
                  uVar11 = (ulonglong)uVar14;
                } while (uVar14 < uVar12);
              }
              ppIVar13 = (Il2CppMethodPointer *)
                        FUN_?(pIVar9,TypeInfo__RTG__IGizmoRATriangle3DBorderController,2);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**ppIVar13)(pIVar9,fVar5,(MethodInfo *)ppIVar13[1]);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Render(Camera) */

void Assembly-CSharp.dll::RTG::GizmoRATriangle3DBorder::GizmoRATriangle3DBorder_Render
               (GizmoRATriangle3DBorder *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>);
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
        if ((pGVar1->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
          lVar2 = 0xd0;
        }
        if (*(int *)(*(longlong *)((longlong)&pGVar1->klass + lVar2) + 0x9c) != 0) {
          return;
        }
        if (*(int *)&(TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>->_1).field_0x1c == 0) {
          FUN_?();
        }
        this_00 = (GizmoLineMaterial *)
                  Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                            (MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
        if (this_00 != (GizmoLineMaterial *)0x0) {
          GizmoLineMaterial::GizmoLineMaterial_ResetValuesToSensibleDefaults
                    (this_00,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&StringLiteral__Color);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar11 = GizmoLineMaterial::GizmoLineMaterial_get_Material(this_00,(MethodInfo *)0x0);
          if (pMVar11 != (Material *)0x0) {
            aCStack_12[0].r = fVar5;
            aCStack_12[0].g = fVar6;
            aCStack_12[0].b = fVar7;
            aCStack_12[0].a = fVar8;
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                      (pMVar11,StringLiteral__Color,aCStack_12,(MethodInfo *)0x0);
            pMVar11 = GizmoLineMaterial::GizmoLineMaterial_get_Material(this_00,(MethodInfo *)0x0);
            if (pMVar11 != (Material *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass
                        (pMVar11,0,(MethodInfo *)0x0);
              pGVar4 = (this->fields)._targetHandle;
              if (pGVar4 != (GizmoHandle *)0x0) {
                GizmoHandle::GizmoHandle_Render3DWire_1
                          (pGVar4,(this->fields)._borderTriangleIndex,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void SetHoverable(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoRATriangle3DBorder::GizmoRATriangle3DBorder_SetHoverable
               (GizmoRATriangle3DBorder *this,bool isHoverable,MethodInfo *method)

{
  pGVar1 = (this->fields)._targetHandle;
  (this->fields)._isHoverable = isHoverable;
  if (pGVar1 == (GizmoHandle *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = (this->fields)._borderTriangleIndex;
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar4 = (pGVar1->fields)._3DShapes;
  if (pLVar4 != (List_1_RTG_GizmoHandleShape3D_ *)0x0) {
    if ((uint)(pLVar4->fields)._size <= uVar3) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pGVar5 = (pLVar4->fields)._items;
    if (pGVar5 != (GizmoHandleShape3D__Array *)0x0) {
      if ((uint)pGVar5->max_length <= uVar3) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (pGVar5->vector[(int)uVar3] != (GizmoHandleShape3D *)0x0) {
        (pGVar5->vector[(int)uVar3]->fields)._isHoverable = isHoverable;
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetVisible(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoRATriangle3DBorder::GizmoRATriangle3DBorder_SetVisible
               (GizmoRATriangle3DBorder *this,bool isVisible,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoRATriangle3DBorderController);
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
       (pIVar4 = (this->fields)._controllers,
       pIVar4 != (IGizmoRATriangle3DBorderController__Array *)0x0)) {
      uVar5 = *(uint *)(lVar3 + 0x9c);
      if ((uint)pIVar4->max_length <= uVar5) {
code_?:
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (pIVar4->vector[(int)uVar5] != (IGizmoRATriangle3DBorderController *)0x0) {
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
                   pIVar4 != (IGizmoRATriangle3DBorderController__Array *)0x0)) {
                  uVar5 = *(uint *)(lVar3 + 0x9c);
                  if ((uint)pIVar4->max_length <= uVar5) goto code_?;
                  if (pIVar4->vector[(int)uVar5] != (IGizmoRATriangle3DBorderController *)0x0) {
                    FUN_?(1,TypeInfo__RTG__IGizmoRATriangle3DBorderController,
                                  pIVar4->vector[(int)uVar5],fVar8);
                    GizmoRATriangle3DBorder_OnTriangleShapeChanged(this,(MethodInfo *)0x0);
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


/* GizmoRATriangle3DBorder(GizmoPlaneSlider3D, GizmoHandle, RightAngTriangle3D) */

void Assembly-CSharp.dll::RTG::GizmoRATriangle3DBorder::GizmoRATriangle3DBorder__ctor
               (GizmoRATriangle3DBorder *this,GizmoPlaneSlider3D *planeSlider,
               GizmoHandle *targetHandle,RightAngTriangle3D *targetRiangle,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoPreUpdateBeginHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoRATriangle3DBorderControllerData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__RTG__GizmoRATriangle3DBorderType);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__GizmoRATriangle3DBorder__OnGizmoPreUpdateBegin_RTG__Gizmo_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoThinRATriangle3DBorderController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__IGizmoRATriangle3DBorderController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__RightAngTriangle3D);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._isVisible = 1;
  (this->fields)._isHoverable = 1;
  pRVar1 = (RightAngTriangle3D *)FUN_?(TypeInfo__RTG__RightAngTriangle3D);
  RightAngTriangle3D::RightAngTriangle3D__ctor(pRVar1,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._borderTriangle = pRVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._borderTriangle >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pGVar7 = (GizmoRATriangle3DBorderControllerData *)
            FUN_?(TypeInfo__RTG__GizmoRATriangle3DBorderControllerData);
  bVar2 = iRam_? != 0;
  (this->fields)._controllerData = pGVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._controllerData >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pIVar8 = TypeRef__RTG__GizmoRATriangle3DBorderType;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  plVar9 = (longlong *)0x0;
  if (pIVar8 != (Il2CppType *)0x0) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar4 = FUN_?(pIVar8,1);
    plVar9 = (longlong *)FUN_?(lVar4 + 0x20);
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (plVar9 == (longlong *)0x0) {
    uVar10 = func_?(&TypeInfo__System__ArgumentNullException);
    this_02 = (ArgumentNullException *)func_?(uVar10);
    paramName = (String *)func_?(&StringLiteral_enumType);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_02,paramName,(MethodInfo *)0x0);
    uVar10 = func_?(&MethodInfo__System__Enum__GetValues_System__Type_);
    FUN_?(this_02,uVar10);
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  this_00 = (Array *)(**(code **)(*plVar9 + 0x888))(plVar9);
  if (this_00 != (Array *)0x0) {
    iVar12 = mscorlib.dll::System::Array::Array_get_Length(this_00,(MethodInfo *)0x0);
    pIVar13 = (IGizmoRATriangle3DBorderController__Array *)
              FUN_?(TypeInfo__RTG__IGizmoRATriangle3DBorderController,iVar12);
    (this->fields)._controllers = pIVar13;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&(this->fields)._controllers >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
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
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
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
    iVar15 = 0;
    if (iVar14 != 0) {
      uVar3 = (uint)((ulonglong)&(this->fields)._targetHandle >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
        iVar15 = iRam_?;
      } while (!bVar2);
    }
    (this->fields)._targetTriangle = targetRiangle;
    if (iVar15 != 0) {
      uVar3 = (uint)((ulonglong)&(this->fields)._targetTriangle >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    pGVar16 = (this->fields)._targetHandle;
    if (pGVar16 != (GizmoHandle *)0x0) {
      iVar12 = GizmoHandle::GizmoHandle_Add3DShape
                        (pGVar16,(Shape3D *)(this->fields)._borderTriangle,(MethodInfo *)0x0);
      (this->fields)._borderTriangleIndex = iVar12;
      pRVar1 = (this->fields)._borderTriangle;
      if (pRVar1 != (RightAngTriangle3D *)0x0) {
        (pRVar1->fields)._raycastMode = 1;
        iVar14 = iRam_?;
        pGVar7 = (this->fields)._controllerData;
        if (pGVar7 != (GizmoRATriangle3DBorderControllerData *)0x0) {
          (pGVar7->fields).Border = this;
          if (iVar14 != 0) {
            uVar3 = (uint)((ulonglong)&(pGVar7->fields).Border >> 0xc);
            lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
            do {
              uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
              puVar6 = (ulonglong *)(lVar4 + 0xADDR);
              LOCK();
              bVar2 = uVar5 == *puVar6;
              if (bVar2) {
                *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
              }
              UNLOCK();
              iVar14 = iRam_?;
            } while (!bVar2);
          }
          pGVar7 = (this->fields)._controllerData;
          if (pGVar7 != (GizmoRATriangle3DBorderControllerData *)0x0) {
            (pGVar7->fields).PlaneSlider = (this->fields)._planeSlider;
            iVar15 = 0;
            if (iVar14 != 0) {
              uVar3 = (uint)((ulonglong)&(pGVar7->fields).PlaneSlider >> 0xc);
              lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
              do {
                uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                LOCK();
                bVar2 = uVar5 == *puVar6;
                if (bVar2) {
                  *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                }
                UNLOCK();
                iVar15 = iRam_?;
              } while (!bVar2);
            }
            pGVar16 = (this->fields)._targetHandle;
            if ((pGVar16 != (GizmoHandle *)0x0) &&
               (pGVar7 = (this->fields)._controllerData,
               pGVar7 != (GizmoRATriangle3DBorderControllerData *)0x0)) {
              (pGVar7->fields).Gizmo = (pGVar16->fields)._gizmo;
              iVar14 = 0;
              if (iVar15 != 0) {
                uVar3 = (uint)((ulonglong)&pGVar7->fields >> 0xc);
                lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                do {
                  uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                  puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                  LOCK();
                  bVar2 = uVar5 == *puVar6;
                  if (bVar2) {
                    *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                  }
                  UNLOCK();
                  iVar14 = iRam_?;
                } while (!bVar2);
              }
              pGVar7 = (this->fields)._controllerData;
              if (pGVar7 != (GizmoRATriangle3DBorderControllerData *)0x0) {
                (pGVar7->fields).TargetHandle = (this->fields)._targetHandle;
                iVar15 = 0;
                if (iVar14 != 0) {
                  uVar3 = (uint)((ulonglong)&(pGVar7->fields).TargetHandle >> 0xc);
                  lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                  do {
                    uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                    puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                    LOCK();
                    bVar2 = uVar5 == *puVar6;
                    if (bVar2) {
                      *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                    }
                    UNLOCK();
                    iVar15 = iRam_?;
                  } while (!bVar2);
                }
                pGVar7 = (this->fields)._controllerData;
                if (pGVar7 != (GizmoRATriangle3DBorderControllerData *)0x0) {
                  (pGVar7->fields).TargetTriangle = (this->fields)._targetTriangle;
                  iVar14 = 0;
                  if (iVar15 != 0) {
                    uVar3 = (uint)((ulonglong)&(pGVar7->fields).TargetTriangle >> 0xc);
                    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                    do {
                      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                      LOCK();
                      bVar2 = uVar5 == *puVar6;
                      if (bVar2) {
                        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                      }
                      UNLOCK();
                      iVar14 = iRam_?;
                    } while (!bVar2);
                  }
                  pGVar7 = (this->fields)._controllerData;
                  if (pGVar7 != (GizmoRATriangle3DBorderControllerData *)0x0) {
                    (pGVar7->fields).BorderTriangle = (this->fields)._borderTriangle;
                    if (iVar14 != 0) {
                      uVar3 = (uint)((ulonglong)&(pGVar7->fields).BorderTriangle >> 0xc);
                      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                      do {
                        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                        LOCK();
                        bVar2 = uVar5 == *puVar6;
                        if (bVar2) {
                          *puVar6 = uVar5 | 1L << (ulonglong)(uVar3 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar2);
                    }
                    pGVar7 = (this->fields)._controllerData;
                    if (pGVar7 != (GizmoRATriangle3DBorderControllerData *)0x0) {
                      (pGVar7->fields).BorderTriangleIndex = (this->fields)._borderTriangleIndex;
                      pIVar13 = (this->fields)._controllers;
                      pIVar17 = (IGizmoRATriangle3DBorderController__Class *)
                               (this->fields)._controllerData;
                      pIVar18 = (IGizmoRATriangle3DBorderController *)
                                FUN_?(TypeInfo__RTG__GizmoThinRATriangle3DBorderController);
                      bVar2 = iRam_? != 0;
                      pIVar18[1].klass = pIVar17;
                      if (bVar2) {
                        uVar3 = (uint)((ulonglong)(pIVar18 + 1) >> 0xc);
                        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                        do {
                          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                          LOCK();
                          bVar2 = uVar5 == *puVar6;
                          if (bVar2) {
                            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                          }
                          UNLOCK();
                        } while (!bVar2);
                      }
                      if (pIVar13 != (IGizmoRATriangle3DBorderController__Array *)0x0) {
                        lVar4 = FUN_?(pIVar18,(pIVar13->klass->_0).element_class);
                        if (lVar4 == 0) {
                          uVar10 = FUN_?();
                          FUN_?(uVar10,0);
                          pcVar11 = (code *)swi(3);
                          (*pcVar11)();
                          return;
                        }
                        if ((int)pIVar13->max_length == 0) {
                          FUN_?();
                          pcVar11 = (code *)swi(3);
                          (*pcVar11)();
                          return;
                        }
                        bVar2 = iRam_? != 0;
                        pIVar13->vector[0] = pIVar18;
                        if (bVar2) {
                          uVar3 = (uint)((ulonglong)pIVar13->vector >> 0xc);
                          lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                          do {
                            uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                            puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                            LOCK();
                            bVar2 = uVar5 == *puVar6;
                            if (bVar2) {
                              *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                            }
                            UNLOCK();
                          } while (!bVar2);
                        }
                        pGVar16 = (this->fields)._targetHandle;
                        if (pGVar16 != (GizmoHandle *)0x0) {
                          pGVar19 = (pGVar16->fields)._gizmo;
                          this_01 = (UnityAction_1_System_Object_ *)
                                    FUN_?(TypeInfo__RTG__GizmoPreUpdateBeginHandler);
                          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::
                          Object]::UnityAction_1_System_Object___ctor
                                    (this_01,(Object *)this,
                                     MethodInfo__RTG__GizmoRATriangle3DBorder__OnGizmoPreUpdateBegin_RTG__Gizmo_
                                     ,(MethodInfo *)0x0);
                          if (pGVar19 != (Gizmo *)0x0) {
                            if (cRam_? == '\0') {
                              FUN_?(&TypeInfo__RTG__GizmoPreUpdateBeginHandler);
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            ppGVar20 = &(pGVar19->fields).PreUpdateBegin;
                            a = (pGVar19->fields).PreUpdateBegin;
                            do {
                              pGVar21 = (GizmoPreUpdateBeginHandler *)
                                        mscorlib.dll::System::Delegate::Delegate_Combine
                                                  ((Delegate *)a,(Delegate *)this_01,
                                                   (MethodInfo *)0x0);
                              pGVar22 = (GizmoPreUpdateBeginHandler *)0x0;
                              if (pGVar21 != (GizmoPreUpdateBeginHandler *)0x0) {
                                if (pGVar21->klass == TypeInfo__RTG__GizmoPreUpdateBeginHandler) {
                                  pGVar22 = pGVar21;
                                }
                                if (pGVar22 == (GizmoPreUpdateBeginHandler *)0x0) {
                                  FUN_?(pGVar21);
                                  pcVar11 = (code *)swi(3);
                                  (*pcVar11)();
                                  return;
                                }
                              }
                              LOCK();
                              pGVar21 = *ppGVar20;
                              bVar2 = a == pGVar21;
                              if (bVar2) {
                                *ppGVar20 = pGVar22;
                                pGVar21 = a;
                              }
                              UNLOCK();
                              pGVar22 = a;
                              if (!bVar2) {
                                pGVar22 = pGVar21;
                              }
                              if (iRam_? != 0) {
                                uVar3 = (uint)((ulonglong)ppGVar20 >> 0xc);
                                uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                                do {
                                  uVar23 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                                  puVar6 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                                  LOCK();
                                  bVar2 = uVar23 == *puVar6;
                                  if (bVar2) {
                                    *puVar6 = uVar23 | 1L << (uVar3 & 0x3f);
                                  }
                                  UNLOCK();
                                } while (!bVar2);
                              }
                              bVar2 = pGVar22 != a;
                              a = pGVar22;
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
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


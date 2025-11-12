
/* Void AddTargetTransform(GizmoTransform) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_AddTargetTransform
               (GizmoPlaneSlider2D *this,GizmoTransform *transform,MethodInfo *method)

{
  this_00 = (this->fields)._offsetDrag;
  if (this_00 != (GizmoDblAxisOffsetDrag3D *)0x0) {
    GizmoDragSession::GizmoDragSession_AddTargetTransform
              ((GizmoDragSession *)this_00,transform,(MethodInfo *)0x0);
    this_01 = (this->fields)._rotationDrag;
    if (this_01 != (GizmoSglAxisRotationDrag3D *)0x0) {
      GizmoDragSession::GizmoDragSession_AddTargetTransform
                ((GizmoDragSession *)this_01,transform,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._scaleDrag;
      if (pGVar1 != (GizmoDblAxisScaleDrag3D *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__Add_RTG__GizmoTransform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        cVar2 = (*(pGVar1->klass->vtable).get_IsActive_1.methodPtr)
                          (pGVar1,(pGVar1->klass->vtable).get_IsActive_1.method);
        if (cVar2 == '\0') {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__Contains_RTG__GizmoTransform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pLVar3 = (pGVar1->fields)._._._targetTransforms;
          if (pLVar3 != (List_1_RTG_GizmoTransform_ *)0x0) {
            if (((pLVar3->fields)._size != 0) &&
               (iVar4 = mscorlib.dll::System::Array::Array_IndexOf_69
                                  ((Object__Array *)(pLVar3->fields)._items,(Object *)transform,0,
                                   (pLVar3->fields)._size,
                                   (MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__Contains_RTG__GizmoTransform_
                                    ->klass->rgctx_data[0x17].method)->klass->rgctx_data[0x27].
                                   method), iVar4 != -1)) {
              return;
            }
            pLVar3 = (pGVar1->fields)._._._targetTransforms;
            if (pLVar3 != (List_1_RTG_GizmoTransform_ *)0x0) {
              FUN_?(pLVar3,transform);
              return;
            }
          }
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void AddTargetTransform(GizmoTransform, GizmoDragChannel) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_AddTargetTransform_1
               (GizmoPlaneSlider2D *this,GizmoTransform *transform,
               GizmoDragChannel__Enum dragChannel,MethodInfo *method)

{
  if (dragChannel == GizmoDragChannel__Enum_Offset) {
    pGVar1 = (GizmoDblAxisScaleDrag3D *)(this->fields)._offsetDrag;
  }
  else if (dragChannel == GizmoDragChannel__Enum_Rotation) {
    pGVar1 = (GizmoDblAxisScaleDrag3D *)(this->fields)._rotationDrag;
  }
  else {
    if ((this->fields)._dragChannel != 3) {
      return;
    }
    pGVar1 = (this->fields)._scaleDrag;
  }
  if (pGVar1 != (GizmoDblAxisScaleDrag3D *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__Add_RTG__GizmoTransform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    cVar2 = (*(pGVar1->klass->vtable).get_IsActive_1.methodPtr)
                      (pGVar1,(pGVar1->klass->vtable).get_IsActive_1.method);
    if (cVar2 == '\0') {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__Contains_RTG__GizmoTransform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pLVar3 = (pGVar1->fields)._._._targetTransforms;
      if (pLVar3 != (List_1_RTG_GizmoTransform_ *)0x0) {
        if (((pLVar3->fields)._size != 0) &&
           (iVar4 = mscorlib.dll::System::Array::Array_IndexOf_69
                              ((Object__Array *)(pLVar3->fields)._items,(Object *)transform,0,
                               (pLVar3->fields)._size,
                               (MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__Contains_RTG__GizmoTransform_
                                ->klass->rgctx_data[0x17].method)->klass->rgctx_data[0x27].method),
           iVar4 != -1)) {
          return;
        }
        pLVar3 = (pGVar1->fields)._._._targetTransforms;
        if (pLVar3 != (List_1_RTG_GizmoTransform_ *)0x0) {
          FUN_?(pLVar3,transform);
          return;
        }
      }
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Single GetRealCircleRadius() */

float Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_GetRealCircleRadius
                (GizmoPlaneSlider2D *this,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pGVar2 = (this->fields)._scaleDrag;
  if (pGVar2 != (GizmoDblAxisScaleDrag3D *)0x0) {
    cVar3 = (*(pGVar2->klass->vtable).get_IsActive_1.methodPtr)();
    if (cVar3 == '\0') {
      lVar4 = 0x110;
      if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
        lVar4 = 0x108;
      }
      lVar4 = *(longlong *)((longlong)&this->klass + lVar4);
      if (lVar4 != 0) {
        bVar5 = (this->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0;
code_?:
        lVar6 = 0x110;
        if (bVar5) {
          lVar6 = 0x108;
        }
        return *(float *)(*(longlong *)((longlong)&this->klass + lVar6) + 0x18) *
               *(float *)(lVar4 + 0x24) * fVar1;
      }
    }
    else {
      pGVar2 = (this->fields)._scaleDrag;
      if (pGVar2 != (GizmoDblAxisScaleDrag3D *)0x0) {
        fVar7 = (pGVar2->fields)._totalScale0;
        if ((float)((uint)fVar7 & _UNK_?) <
            (float)((uint)(pGVar2->fields)._totalScale1 & _UNK_?)) {
          fVar7 = (pGVar2->fields)._totalScale1;
        }
        uVar8 = (this->fields)._scaleAxisUp.x;
        uVar9 = (this->fields)._scaleAxisUp.y;
        uVar10._0_4_ = (this->fields)._scaleDragOrigin.x;
        uVar10._4_4_ = (this->fields)._scaleDragOrigin.y;
        fVar11 = (this->fields)._scaleDragOrigin.z;
        fVar12 = (this->fields)._scaleAxisUp.z;
        this_00 = (this->fields)._._gizmo;
        fVar13 = (this->fields)._scaleDragOrigin.z;
        aVStack_14[0]._0_8_ = uVar10;
        if (this_00 != (Gizmo *)0x0) {
          camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
          VStack_15.y = (float)uVar9 * fVar7 + uVar10._4_4_;
          VStack_15.x = (float)uVar8 * fVar7 + (float)uVar10;
          VStack_15.z = fVar12 * fVar7 + fVar13;
          aVStack_14[0]._0_8_ = uVar10;
          aVStack_14[0].z = fVar11;
          VStackX_8 = Vector3Ex::Vector3Ex_ConvertDirTo2D
                                (aVStack_14,&VStack_15,camera,(MethodInfo *)0x0);
          fVar12 = (float)FUN_?(&VStackX_8);
          lVar4 = 0x110;
          if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
            lVar4 = 0x108;
          }
          lVar6 = *(longlong *)((longlong)&this->klass + lVar4);
          if (lVar6 != 0) {
            uVar16 = 0x110;
            if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
              uVar16 = 0x108;
            }
            if (fVar7 < 0.0) {
              fVar1 = _UNK_?;
            }
            lVar4 = 0x110;
            bVar5 = (this->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0;
            if (bVar5) {
              lVar4 = 0x108;
            }
            lVar4 = *(longlong *)((longlong)&this->klass + lVar4);
            fVar1 = (fVar12 / (*(float *)(*(longlong *)((longlong)&this->klass + (ulonglong)uVar16)
                                          + 0x18) * *(float *)(lVar6 + 0x24))) * fVar1;
            goto code_?;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar17 = (code *)swi(3);
  fVar1 = (float)(*pcVar17)();
  return fVar1;
}


/* Vector2 GetRealExtentPoint(Shape2DExtentPoint) */

Vector2 Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_GetRealExtentPoint
                  (GizmoPlaneSlider2D *this,Shape2DExtentPoint__Enum extentPt,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoPlaneSlider2DController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = 0x110;
  if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    lVar1 = 0x108;
  }
  lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
  if ((lVar1 != 0) &&
     (pIVar2 = (this->fields)._controllers, pIVar2 != (IGizmoPlaneSlider2DController__Array *)0x0))
  {
    uVar3 = *(uint *)(lVar1 + 0x14);
    if ((uint)pIVar2->max_length <= uVar3) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      VVar5 = (Vector2)(*pcVar4)();
      return VVar5;
    }
    pIVar6 = pIVar2->vector[(int)uVar3];
    if (pIVar6 != (IGizmoPlaneSlider2DController *)0x0) {
      uVar7 = 0;
      pIVar8 = pIVar6->klass;
      uVar9._0_1_ = (pIVar8->_1).rank;
      uVar9._1_1_ = (pIVar8->_1).minimumAlignment;
      if (uVar9 != 0) {
        do {
          if (pIVar8->interfaceOffsets[uVar7].interfaceType ==
              (Il2CppClass *)TypeInfo__RTG__IGizmoPlaneSlider2DController) {
            ppIVar10 = &(&(pIVar8->vtable).UpdateHandles)[pIVar8->interfaceOffsets[uVar7].offset + 3]
                       .methodPtr;
            goto code_?;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar9);
      }
      ppIVar10 = (Il2CppMethodPointer *)FUN_?(pIVar6);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      VVar5 = (Vector2)(**ppIVar10)(pIVar6,(ulonglong)extentPt,(MethodInfo *)ppIVar10[1],*ppIVar10);
      return VVar5;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  VVar5 = (Vector2)(*pcVar4)();
  return VVar5;
}


/* Single GetRealQuadHeight() */

float Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_GetRealQuadHeight
                (GizmoPlaneSlider2D *this,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pGVar2 = (this->fields)._scaleDrag;
  if (pGVar2 != (GizmoDblAxisScaleDrag3D *)0x0) {
    cVar3 = (*(pGVar2->klass->vtable).get_IsActive_1.methodPtr)();
    if (cVar3 == '\0') {
      lVar4 = 0x110;
      if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
        lVar4 = 0x108;
      }
      lVar4 = *(longlong *)((longlong)&this->klass + lVar4);
      if (lVar4 != 0) {
        bVar5 = (this->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0;
code_?:
        lVar6 = 0x110;
        if (bVar5) {
          lVar6 = 0x108;
        }
        return *(float *)(*(longlong *)((longlong)&this->klass + lVar6) + 0x18) *
               *(float *)(lVar4 + 0x20) * fVar1;
      }
    }
    else {
      pGVar2 = (this->fields)._scaleDrag;
      if (pGVar2 != (GizmoDblAxisScaleDrag3D *)0x0) {
        fVar7 = (pGVar2->fields)._totalScale1;
        uVar8 = (this->fields)._scaleAxisUp.x;
        uVar9 = (this->fields)._scaleAxisUp.y;
        uVar10._0_4_ = (this->fields)._scaleDragOrigin.x;
        uVar10._4_4_ = (this->fields)._scaleDragOrigin.y;
        fVar11 = (this->fields)._scaleDragOrigin.z;
        this_00 = (this->fields)._._gizmo;
        fVar12 = (this->fields)._scaleAxisUp.z;
        fVar13 = (this->fields)._scaleDragOrigin.z;
        aVStack_14[0]._0_8_ = uVar10;
        if (this_00 != (Gizmo *)0x0) {
          camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
          VStack_15.y = fVar7 * (float)uVar9 + uVar10._4_4_;
          VStack_15.x = fVar7 * (float)uVar8 + (float)uVar10;
          VStack_15.z = fVar7 * fVar12 + fVar13;
          aVStack_14[0]._0_8_ = uVar10;
          aVStack_14[0].z = fVar11;
          VStackX_8 = Vector3Ex::Vector3Ex_ConvertDirTo2D
                                (aVStack_14,&VStack_15,camera,(MethodInfo *)0x0);
          fVar7 = (float)FUN_?(&VStackX_8);
          lVar4 = 0x110;
          if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
            lVar4 = 0x108;
          }
          lVar6 = *(longlong *)((longlong)&this->klass + lVar4);
          if (lVar6 != 0) {
            uVar16 = 0x110;
            if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
              uVar16 = 0x108;
            }
            pGVar2 = (this->fields)._scaleDrag;
            if (pGVar2 != (GizmoDblAxisScaleDrag3D *)0x0) {
              if ((pGVar2->fields)._totalScale1 < 0.0) {
                fVar1 = _UNK_?;
              }
              lVar4 = 0x110;
              bVar5 = (this->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0;
              if (bVar5) {
                lVar4 = 0x108;
              }
              lVar4 = *(longlong *)((longlong)&this->klass + lVar4);
              fVar1 = (fVar7 / (*(float *)(*(longlong *)
                                              ((longlong)&this->klass + (ulonglong)uVar16) + 0x18) *
                                  *(float *)(lVar6 + 0x20) * _UNK_?)) * fVar1;
              goto code_?;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar17 = (code *)swi(3);
  fVar1 = (float)(*pcVar17)();
  return fVar1;
}


/* Vector2 GetRealQuadSize() */

Vector2 Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_GetRealQuadSize
                  (GizmoPlaneSlider2D *this,MethodInfo *method)

{
  fVar1 = GizmoPlaneSlider2D_GetRealQuadWidth(this,(MethodInfo *)0x0);
  fVar2 = GizmoPlaneSlider2D_GetRealQuadHeight(this,(MethodInfo *)0x0);
  VVar3.y = fVar2;
  VVar3.x = fVar1;
  return VVar3;
}


/* Single GetRealQuadWidth() */

float Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_GetRealQuadWidth
                (GizmoPlaneSlider2D *this,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pGVar2 = (this->fields)._scaleDrag;
  if (pGVar2 != (GizmoDblAxisScaleDrag3D *)0x0) {
    cVar3 = (*(pGVar2->klass->vtable).get_IsActive_1.methodPtr)();
    if (cVar3 == '\0') {
      lVar4 = 0x110;
      if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
        lVar4 = 0x108;
      }
      lVar4 = *(longlong *)((longlong)&this->klass + lVar4);
      if (lVar4 != 0) {
        bVar5 = (this->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0;
code_?:
        lVar6 = 0x110;
        if (bVar5) {
          lVar6 = 0x108;
        }
        return *(float *)(*(longlong *)((longlong)&this->klass + lVar6) + 0x18) *
               *(float *)(lVar4 + 0x1c) * fVar1;
      }
    }
    else {
      pGVar2 = (this->fields)._scaleDrag;
      if (pGVar2 != (GizmoDblAxisScaleDrag3D *)0x0) {
        fVar7 = (pGVar2->fields)._totalScale0;
        uVar8 = (this->fields)._scaleAxisRight.x;
        uVar9 = (this->fields)._scaleAxisRight.y;
        uVar10._0_4_ = (this->fields)._scaleDragOrigin.x;
        uVar10._4_4_ = (this->fields)._scaleDragOrigin.y;
        fVar11 = (this->fields)._scaleDragOrigin.z;
        this_00 = (this->fields)._._gizmo;
        fVar12 = (this->fields)._scaleAxisRight.z;
        fVar13 = (this->fields)._scaleDragOrigin.z;
        aVStack_14[0]._0_8_ = uVar10;
        if (this_00 != (Gizmo *)0x0) {
          camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
          VStack_15.y = fVar7 * (float)uVar9 + uVar10._4_4_;
          VStack_15.x = fVar7 * (float)uVar8 + (float)uVar10;
          VStack_15.z = fVar7 * fVar12 + fVar13;
          aVStack_14[0]._0_8_ = uVar10;
          aVStack_14[0].z = fVar11;
          VStackX_8 = Vector3Ex::Vector3Ex_ConvertDirTo2D
                                (aVStack_14,&VStack_15,camera,(MethodInfo *)0x0);
          fVar7 = (float)FUN_?(&VStackX_8);
          lVar4 = 0x110;
          if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
            lVar4 = 0x108;
          }
          lVar6 = *(longlong *)((longlong)&this->klass + lVar4);
          if (lVar6 != 0) {
            uVar16 = 0x110;
            if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
              uVar16 = 0x108;
            }
            pGVar2 = (this->fields)._scaleDrag;
            if (pGVar2 != (GizmoDblAxisScaleDrag3D *)0x0) {
              if ((pGVar2->fields)._totalScale0 < 0.0) {
                fVar1 = _UNK_?;
              }
              lVar4 = 0x110;
              bVar5 = (this->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0;
              if (bVar5) {
                lVar4 = 0x108;
              }
              lVar4 = *(longlong *)((longlong)&this->klass + lVar4);
              fVar1 = (fVar7 / (*(float *)(*(longlong *)
                                              ((longlong)&this->klass + (ulonglong)uVar16) + 0x18) *
                                  *(float *)(lVar6 + 0x1c) * _UNK_?)) * fVar1;
              goto code_?;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar17 = (code *)swi(3);
  fVar1 = (float)(*pcVar17)();
  return fVar1;
}


/* Void MakePolySphereBorder(Vector3, Single, Int32, Camera) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_MakePolySphereBorder
               (GizmoPlaneSlider2D *this,Vector3 *sphereCenter,float sphereRadius,int32_t numPoints,
               Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoPlaneSlider2DController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = 0x110;
  if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    lVar1 = 0x108;
  }
  lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x14) != 2) {
      return;
    }
    this_00 = (this->fields)._polygon;
    if (this_00 != (PolygonShape2D *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__RTG__CameraEx);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      aVStack_2[0].x = sphereCenter->x;
      aVStack_2[0].y = sphereCenter->y;
      aVStack_2[0].z = sphereCenter->z;
      worldPoints = PrimitiveFactory::PrimitiveFactory_GenerateSphereBorderPoints
                              (camera,aVStack_2,sphereRadius,numPoints,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__RTG__CameraEx->_1).field_0x1c == 0) {
        FUN_?();
      }
      cwBorderPoints =
           CameraEx::CameraEx_ConvertWorldToScreenPoints(camera,worldPoints,(MethodInfo *)0x0);
      PolygonShape2D::PolygonShape2D_SetClockwisePoints(this_00,cwBorderPoints,1,(MethodInfo *)0x0);
      pIVar3 = (this->fields)._controllers;
      if (pIVar3 != (IGizmoPlaneSlider2DController__Array *)0x0) {
        if ((uint)pIVar3->max_length < 3) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (pIVar3->vector[2] != (IGizmoPlaneSlider2DController *)0x0) {
          FUN_?(1,TypeInfo__RTG__IGizmoPlaneSlider2DController);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnGizmoAttemptHandleDragBegin(Gizmo, Int32) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_OnGizmoAttemptHandleDragBegin
               (GizmoPlaneSlider2D *this,Gizmo *gizmo,int32_t handleId,MethodInfo *method)

{
  pGVar1 = (this->fields)._._handle;
  if (pGVar1 != (GizmoHandle *)0x0) {
    if (handleId != (pGVar1->fields)._id) {
      return;
    }
    if ((this->fields)._dragChannel == 1) {
      pGVar2 = (this->fields)._transform;
      VStack_3.x = 0.0;
      VStack_3.y = 0.0;
      fStack_4 = 0.0;
      if ((pGVar2 != (GizmoTransform *)0x0) &&
         (pVVar5 = (pGVar2->fields)._axes2D, pVVar5 != (Vector2__Array *)0x0)) {
        if ((int)pVVar5->max_length == 0) {
code_?:
          FUN_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        VVar7.x = (this->fields)._offsetDragOrigin.x;
        VVar7.y = (this->fields)._offsetDragOrigin.y;
        fVar8 = (this->fields)._offsetDragOrigin.z;
        pGVar9 = (this->fields)._._gizmo;
        VVar10 = pVVar5->vector[0];
        if (pGVar9 != (Gizmo *)0x0) {
          pCVar11 = Gizmo::Gizmo_get_FocusCamera(pGVar9,(MethodInfo *)0x0);
          VStack_12._0_8_ = VVar7;
          VStack_12.z = fVar8;
          pVVar13 = Vector2Ex::Vector2Ex_ConvertDirTo3D_1
                              ((Vector3 *)&VStack_14,VVar10,&VStack_12,pCVar11,(MethodInfo *)0x0);
          VStack_15.x = pVVar13->x;
          VStack_15.y = pVVar13->y;
          fVar8 = pVVar13->z;
          VStack_12._0_8_ = VStack_15._0_8_;
          VStack_12.z = fVar8;
          fStack_16 = (float)FUN_?((Vector2 *)&VStack_12);
          fVar17 = _UNK_?;
          if (_UNK_? < fStack_16) {
            fVar18 = VStack_15.x / fStack_16;
            fVar19 = VStack_15.y / fStack_16;
            fStack_16 = fVar8 / fStack_16;
          }
          else {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pVVar20 = TypeInfo__UnityEngine__Vector3->static_fields;
            fVar18 = (pVVar20->zeroVector).x;
            fVar19 = (pVVar20->zeroVector).y;
            fStack_16 = (pVVar20->zeroVector).z;
          }
          VStack_15.y = fVar19;
          VStack_15.x = fVar18;
          pGVar2 = (this->fields)._transform;
          fStack_21 = fVar18;
          fStack_22 = fVar19;
          if ((pGVar2 != (GizmoTransform *)0x0) &&
             (pVVar5 = (pGVar2->fields)._axes2D, pVVar5 != (Vector2__Array *)0x0)) {
            if ((uint)pVVar5->max_length < 2) goto code_?;
            pGVar9 = (this->fields)._._gizmo;
            VVar7 = pVVar5->vector[1];
            VVar10.x = (this->fields)._offsetDragOrigin.x;
            VVar10.y = (this->fields)._offsetDragOrigin.y;
            fVar8 = (this->fields)._offsetDragOrigin.z;
            if (pGVar9 != (Gizmo *)0x0) {
              pCVar11 = Gizmo::Gizmo_get_FocusCamera(pGVar9,(MethodInfo *)0x0);
              VStack_12._0_8_ = VVar10;
              VStack_12.z = fVar8;
              pVVar13 = Vector2Ex::Vector2Ex_ConvertDirTo3D_1
                                  ((Vector3 *)&VStack_14,VVar7,&VStack_12,pCVar11,(MethodInfo *)0x0
                                  );
              VStack_15.x = pVVar13->x;
              VStack_15.y = pVVar13->y;
              fVar8 = pVVar13->z;
              VStack_12._0_8_ = VStack_15._0_8_;
              VStack_12.z = fVar8;
              fVar18 = (float)FUN_?((Vector2 *)&VStack_12);
              if (fVar17 < fVar18) {
                fVar17 = VStack_15.x / fVar18;
                fVar23 = VStack_15.y / fVar18;
                fVar8 = fVar8 / fVar18;
              }
              else {
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Vector3);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pVVar20 = TypeInfo__UnityEngine__Vector3->static_fields;
                fVar17 = (pVVar20->zeroVector).x;
                fVar23 = (pVVar20->zeroVector).y;
                fVar8 = (pVVar20->zeroVector).z;
              }
              VStack_15.y = fVar23;
              VStack_15.x = fVar17;
              VStack_3.x = (this->fields)._offsetDragOrigin.x;
              VStack_3.y = (this->fields)._offsetDragOrigin.y;
              fStack_4 = (this->fields)._offsetDragOrigin.z;
              lVar24 = 0x100;
              if ((this->fields)._sharedSettings == (GizmoPlaneSlider2DSettings *)0x0) {
                lVar24 = 0xf8;
              }
              lVar24 = *(longlong *)((longlong)&this->klass + lVar24);
              fStack_25 = fVar17;
              fStack_26 = fVar23;
              if (lVar24 != 0) {
                uVar27 = *(undefined4 *)(lVar24 + 0x1c);
                uVar28 = 0x100;
                if ((this->fields)._sharedSettings == (GizmoPlaneSlider2DSettings *)0x0) {
                  uVar28 = 0xf8;
                }
                lVar24 = *(longlong *)((longlong)&this->klass + (ulonglong)uVar28);
                if (lVar24 != 0) {
                  pGVar29 = (this->fields)._offsetDrag;
                  fVar17 = *(float *)(lVar24 + 0x20);
                  if (pGVar29 != (GizmoDblAxisOffsetDrag3D *)0x0) {
                    cVar30 = (*(pGVar29->klass->vtable).get_IsActive_1.methodPtr)
                                       (pGVar29,(pGVar29->klass->vtable).get_IsActive_1.method);
                    if (cVar30 != '\0') {
                      return;
                    }
                    (pGVar29->fields)._workData.DragOrigin.x = VStack_3.x;
                    (pGVar29->fields)._workData.DragOrigin.y = VStack_3.y;
                    *(ulonglong *)&(pGVar29->fields)._workData.DragOrigin.z =
                         CONCAT44(fStack_21,fStack_4);
                    (pGVar29->fields)._workData.Axis0.y = fStack_22;
                    (pGVar29->fields)._workData.Axis0.z = fStack_16;
                    (pGVar29->fields)._workData.Axis1.x = fStack_25;
                    (pGVar29->fields)._workData.Axis1.y = fStack_26;
                    *(ulonglong *)&(pGVar29->fields)._workData.Axis1.z = CONCAT44(uVar27,fVar8);
                    (pGVar29->fields)._workData.SnapStep1 = fVar17;
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
    else if ((this->fields)._dragChannel == 2) {
      pGVar9 = (this->fields)._._gizmo;
      VStack_3.x = 0.0;
      VStack_3.y = 0.0;
      fStack_4 = 0.0;
      fStack_21 = 0.0;
      fStack_22 = 0.0;
      fStack_16 = 0.0;
      if (((pGVar9 != (Gizmo *)0x0) &&
          (pCVar11 = Gizmo::Gizmo_get_FocusCamera(pGVar9,(MethodInfo *)0x0),
          pCVar11 != (Camera *)0x0)) &&
         (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pCVar11,(MethodInfo *)0x0), this_02 != (Transform *)0x0)
         ) {
        pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                            (&VStack_12,this_02,(MethodInfo *)0x0);
        uVar31 = pVVar13->x;
        uVar32 = pVVar13->y;
        fStack_16 = pVVar13->z;
        lVar24 = 0x100;
        if ((this->fields)._sharedSettings == (GizmoPlaneSlider2DSettings *)0x0) {
          lVar24 = 0xf8;
        }
        lVar24 = *(longlong *)((longlong)&this->klass + lVar24);
        fStack_21 = (float)uVar31;
        fStack_22 = (float)uVar32;
        if (lVar24 != 0) {
          fStack_25 = *(float *)(lVar24 + 0x28);
          uVar28 = 0x100;
          if ((this->fields)._sharedSettings == (GizmoPlaneSlider2DSettings *)0x0) {
            uVar28 = 0xf8;
          }
          lVar24 = *(longlong *)((longlong)&this->klass + (ulonglong)uVar28);
          if (lVar24 != 0) {
            fStack_26 = *(float *)(lVar24 + 0x24);
            lVar33 = 0x110;
            lVar24 = 0x110;
            if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
              lVar24 = 0x108;
            }
            lVar24 = *(longlong *)((longlong)&this->klass + lVar24);
            if (lVar24 != 0) {
              if (*(int *)(lVar24 + 0x14) != 2) {
                pGVar9 = (this->fields)._._gizmo;
                if (pGVar9 == (Gizmo *)0x0) goto code_?;
                pCVar11 = Gizmo::Gizmo_get_FocusCamera(pGVar9,(MethodInfo *)0x0);
                pGVar2 = (this->fields)._transform;
                if (pGVar2 == (GizmoTransform *)0x0) goto code_?;
                pGVar9 = (this->fields)._._gizmo;
                VVar7 = (pGVar2->fields)._position2D;
                if (((pGVar9 == (Gizmo *)0x0) ||
                    (pCVar34 = Gizmo::Gizmo_get_FocusCamera(pGVar9,(MethodInfo *)0x0),
                    pCVar34 == (Camera *)0x0)) ||
                   (fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                             Camera_get_nearClipPlane(pCVar34,(MethodInfo *)0x0),
                   pCVar11 == (Camera *)0x0)) goto code_?;
                VStack_12._0_8_ = VVar7;
                VStack_12.z = fVar8;
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                VStack_15.x = 0.0;
                VStack_15.y = 0.0;
                VStack_15.z = 0.0;
                pvVar35 = (pCVar11->fields)._._._.m_CachedPtr;
                if (pvVar35 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar11,(MethodInfo *)0x0);
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                pcVar6 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
                  uVar36 = func_?(&UNK_?);
                  FUN_?(uVar36,0);
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                pcRam_? = pcVar6;
                (*pcRam_?)(pvVar35,(Vector2 *)&VStack_12,2,(Vector2 *)&VStack_15);
                VStack_3.x = VStack_15.x;
                VStack_3.y = VStack_15.y;
                fStack_4 = VStack_15.z;
              }
              lVar24 = 0x110;
              if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
                lVar24 = 0x108;
              }
              lVar24 = *(longlong *)((longlong)&this->klass + lVar24);
              if (lVar24 != 0) {
                if (*(int *)(lVar24 + 0x14) == 1) {
                  pGVar2 = (this->fields)._transform;
                  pGVar37 = (this->fields)._rotationArc;
                  if (pGVar2 == (GizmoTransform *)0x0) goto code_?;
                  VVar7 = (pGVar2->fields)._position2D;
                  pGVar9 = (this->fields)._._gizmo;
                  if (pGVar9 == (Gizmo *)0x0) goto code_?;
                  aVStack_38[0].z = (pGVar9->fields)._hoverInfo._hoverPoint.y;
                  aVStack_38[1].x = (pGVar9->fields)._hoverInfo._hoverPoint.z;
                  arcStart_00.x = (pGVar9->fields)._hoverInfo._hoverPoint.x;
                  arcStart_00.y = (pGVar9->fields)._hoverInfo._hoverPoint.y;
                  fVar8 = GizmoPlaneSlider2D_GetRealCircleRadius(this,(MethodInfo *)0x0);
                  if (pGVar37 == (GizmoRotationArc2D *)0x0) goto code_?;
                  GizmoRotationArc2D::GizmoRotationArc2D_SetArcData
                            (pGVar37,VVar7,arcStart_00,fVar8,(MethodInfo *)0x0);
                  pGVar37 = (this->fields)._rotationArc;
                  if (pGVar37 == (GizmoRotationArc2D *)0x0) goto code_?;
                  (pGVar37->fields)._type = 0;
                }
                else {
                  if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
                    lVar33 = 0x108;
                  }
                  if (*(int *)(*(longlong *)((longlong)&this->klass + lVar33) + 0x14) == 2) {
                    VVar7 = GizmoPlaneSlider2D_get_PolyCenter(this,(MethodInfo *)0x0);
                    pGVar9 = (this->fields)._._gizmo;
                    if (pGVar9 == (Gizmo *)0x0) goto code_?;
                    pCVar11 = Gizmo::Gizmo_get_FocusCamera(pGVar9,(MethodInfo *)0x0);
                    pGVar9 = (this->fields)._._gizmo;
                    if (((pGVar9 == (Gizmo *)0x0) ||
                        (pCVar34 = Gizmo::Gizmo_get_FocusCamera(pGVar9,(MethodInfo *)0x0),
                        pCVar34 == (Camera *)0x0)) ||
                       (fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                 Camera_get_nearClipPlane(pCVar34,(MethodInfo *)0x0),
                       pCVar11 == (Camera *)0x0)) goto code_?;
                    VStack_12._0_8_ = VVar7;
                    VStack_12.z = fVar8;
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    VStack_15.x = 0.0;
                    VStack_15.y = 0.0;
                    VStack_15.z = 0.0;
                    pvVar35 = (pCVar11->fields)._._._.m_CachedPtr;
                    if (pvVar35 == (void *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar11,(MethodInfo *)0x0)
                      ;
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    pcVar6 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
                      uVar36 = func_?(&UNK_?);
                      FUN_?(uVar36,0);
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    pcRam_? = pcVar6;
                    (*pcRam_?)(pvVar35,(Vector2 *)&VStack_12,2,(Vector2 *)&VStack_15);
                    pGVar37 = (this->fields)._rotationArc;
                    VStack_3.x = VStack_15.x;
                    VStack_3.y = VStack_15.y;
                    fStack_4 = VStack_15.z;
                    VVar7 = GizmoPlaneSlider2D_get_PolyCenter(this,(MethodInfo *)0x0);
                    pGVar9 = (this->fields)._._gizmo;
                    if (pGVar9 == (Gizmo *)0x0) goto code_?;
                    aVStack_38[0].z = (pGVar9->fields)._hoverInfo._hoverPoint.y;
                    aVStack_38[1].x = (pGVar9->fields)._hoverInfo._hoverPoint.z;
                    arcStart.x = (pGVar9->fields)._hoverInfo._hoverPoint.x;
                    arcStart.y = (pGVar9->fields)._hoverInfo._hoverPoint.y;
                    if (pGVar37 == (GizmoRotationArc2D *)0x0) goto code_?;
                    GizmoRotationArc2D::GizmoRotationArc2D_SetArcData
                              (pGVar37,VVar7,arcStart,_UNK_?,(MethodInfo *)0x0);
                    pGVar37 = (this->fields)._rotationArc;
                    if (pGVar37 == (GizmoRotationArc2D *)0x0) goto code_?;
                    (pGVar37->fields)._type = 1;
                    pGVar37 = (this->fields)._rotationArc;
                    if (pGVar37 == (GizmoRotationArc2D *)0x0) goto code_?;
                    bVar39 = iRam_? != 0;
                    (pGVar37->fields)._projectionPoly = (this->fields)._polygon;
                    if (bVar39) {
                      uVar28 = (uint)((ulonglong)&(pGVar37->fields)._projectionPoly >> 0xc);
                      uVar40 = (ulonglong)((uVar28 & 0x1fffff) >> 6);
                      do {
                        uVar41 = *(ulonglong *)(uVar40 * 8 + 0xADDR);
                        puVar42 = (ulonglong *)(uVar40 * 8 + 0xADDR);
                        LOCK();
                        bVar39 = uVar41 == *puVar42;
                        if (bVar39) {
                          *puVar42 = uVar41 | 1L << (uVar28 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar39);
                    }
                    pGVar37 = (this->fields)._rotationArc;
                    if (pGVar37 == (GizmoRotationArc2D *)0x0) goto code_?;
                    (pGVar37->fields)._numProjectedPoints = 100;
                  }
                }
                this_01 = (this->fields)._rotationDrag;
                if (this_01 != (GizmoSglAxisRotationDrag3D *)0x0) {
                  aVStack_38[0].y = fStack_21;
                  aVStack_38[0].x = fStack_4;
                  aVStack_38[1].x = fStack_16;
                  aVStack_38[0].z = fStack_22;
                  aVStack_38[1].z = fStack_26;
                  aVStack_38[1].y = fStack_25;
                  VStack_14 = VStack_3;
                  GizmoSglAxisRotationDrag3D::GizmoSglAxisRotationDrag3D_SetWorkData
                            (this_01,(GizmoSglAxisRotationDrag3D_WorkData *)&VStack_14,
                             (MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
    else {
      if ((this->fields)._dragChannel != 3) {
        return;
      }
      pGVar2 = (this->fields)._transform;
      if (pGVar2 != (GizmoTransform *)0x0) {
        VVar7 = (pGVar2->fields)._position2D;
        VVar10 = GizmoPlaneSlider2D_GetRealExtentPoint
                           (this,Shape2DExtentPoint__Enum_Right,(MethodInfo *)0x0);
        pGVar9 = (this->fields)._._gizmo;
        VVar43.x = (this->fields)._scaleDragOrigin.x;
        VVar43.y = (this->fields)._scaleDragOrigin.y;
        fVar8 = (this->fields)._scaleDragOrigin.z;
        if (pGVar9 != (Gizmo *)0x0) {
          pCVar11 = Gizmo::Gizmo_get_FocusCamera(pGVar9,(MethodInfo *)0x0);
          VStack_15._0_8_ = VVar43;
          VStack_15.z = fVar8;
          pVVar13 = Vector2Ex::Vector2Ex_ConvertDirTo3D
                              (&VStack_12,VVar7,VVar10,&VStack_15,pCVar11,(MethodInfo *)0x0);
          fVar8 = pVVar13->z;
          fVar17 = pVVar13->y;
          pGVar2 = (this->fields)._transform;
          (this->fields)._scaleAxisRight.x = pVVar13->x;
          (this->fields)._scaleAxisRight.y = fVar17;
          (this->fields)._scaleAxisRight.z = fVar8;
          if (pGVar2 != (GizmoTransform *)0x0) {
            VVar7 = (pGVar2->fields)._position2D;
            VVar10 = GizmoPlaneSlider2D_GetRealExtentPoint
                               (this,Shape2DExtentPoint__Enum_Top,(MethodInfo *)0x0);
            pGVar9 = (this->fields)._._gizmo;
            VVar44.x = (this->fields)._scaleDragOrigin.x;
            VVar44.y = (this->fields)._scaleDragOrigin.y;
            fVar8 = (this->fields)._scaleDragOrigin.z;
            if (pGVar9 != (Gizmo *)0x0) {
              pCVar11 = Gizmo::Gizmo_get_FocusCamera(pGVar9,(MethodInfo *)0x0);
              VStack_15._0_8_ = VVar44;
              VStack_15.z = fVar8;
              pVVar13 = Vector2Ex::Vector2Ex_ConvertDirTo3D
                                  (&VStack_12,VVar7,VVar10,&VStack_15,pCVar11,(MethodInfo *)0x0);
              fStack_25 = 0.0;
              fStack_26 = 0.0;
              VStack_45.x = 0.0;
              VStack_45.y = 0.0;
              fVar17 = pVVar13->y;
              fVar8 = pVVar13->z;
              (this->fields)._scaleAxisUp.x = pVVar13->x;
              (this->fields)._scaleAxisUp.y = fVar17;
              (this->fields)._scaleAxisUp.z = fVar8;
              fStack_4 = 0.0;
              fStack_21 = 0.0;
              fStack_22 = 0.0;
              fStack_16 = 0.0;
              pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                                  (&VStack_12,&(this->fields)._scaleAxisRight,(MethodInfo *)VVar10);
              uVar46 = pVVar13->x;
              uVar47 = pVVar13->y;
              fStack_26 = pVVar13->z;
              fStack_16 = (float)uVar46;
              fStack_25 = (float)uVar47;
              pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                                  (&VStack_12,&(this->fields)._scaleAxisUp,(MethodInfo *)VVar10);
              VStack_45.x = pVVar13->x;
              VStack_45.y = pVVar13->y;
              VStack_45.z = pVVar13->z;
              VStack_3.x = (float)(this->fields)._scaleDragAxisIndexRight;
              VStack_3.y = (float)(this->fields)._scaleDragAxisIndexUp;
              aVStack_38[0].x = (this->fields)._scaleDragOrigin.x;
              aVStack_38[0].y = (this->fields)._scaleDragOrigin.y;
              fStack_22 = (this->fields)._scaleDragOrigin.z;
              lVar24 = 0x100;
              if ((this->fields)._sharedSettings == (GizmoPlaneSlider2DSettings *)0x0) {
                lVar24 = 0xf8;
              }
              lVar24 = *(longlong *)((longlong)&this->klass + lVar24);
              fStack_4 = aVStack_38[0].x;
              fStack_21 = aVStack_38[0].y;
              if (lVar24 != 0) {
                this_00 = (this->fields)._scaleDrag;
                fStack_48 = *(float *)(lVar24 + 0x38);
                if (this_00 != (GizmoDblAxisScaleDrag3D *)0x0) {
                  aVStack_38[1].x = fStack_16;
                  aVStack_38[0].z = fStack_22;
                  aVStack_38[1].z = fStack_26;
                  aVStack_38[1].y = fStack_25;
                  aVStack_49[1].x = fStack_48;
                  aVStack_49[0].z = VStack_45.z;
                  VStack_14 = VStack_3;
                  aVStack_49[0]._0_8_ = VStack_45._0_8_;
                  GizmoDblAxisScaleDrag3D::GizmoDblAxisScaleDrag3D_SetWorkData
                            (this_00,(GizmoDblAxisScaleDrag3D_WorkData *)&VStack_14,
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
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnGizmoHandleDragUpdate(Gizmo, Int32) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_OnGizmoHandleDragUpdate
               (GizmoPlaneSlider2D *this,Gizmo *gizmo,int32_t handleId,MethodInfo *method)

{
  pGVar1 = (this->fields)._._handle;
  if (pGVar1 == (GizmoHandle *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((handleId == (pGVar1->fields)._id) && ((this->fields)._dragChannel == 2)) {
    pGVar3 = (this->fields)._rotationDrag;
    if ((pGVar3 == (GizmoSglAxisRotationDrag3D *)0x0) ||
       (this_00 = (this->fields)._transform, this_00 == (GizmoTransform *)0x0))
    goto code_?;
    if (((this_00->fields)._firingChanged2DEvent == 0) &&
       (fVar4 = (pGVar3->fields)._relativeRotation + (this_00->fields)._rotation2DDegrees,
       (this_00->fields)._rotation2DDegrees != fVar4)) {
      fVar4 = (float)FUN_?(fVar4,_UNK_?,0);
      bVar5 = cRam_? == '\0';
      (this_00->fields)._rotation2DDegrees = fVar4;
      if (bVar5) {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_7._0_4_ = (pVVar6->forwardVector).x;
      uStack_7._4_4_ = (pVVar6->forwardVector).y;
      fStack_8 = (pVVar6->forwardVector).z;
      uStack_9 = 0;
      uStack_10 = 0;
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar11 = func_?(&UNK_?);
        FUN_?(uVar11,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      (*pcRam_?)(fVar4,&uStack_7,&uStack_9);
      uVar11 = uStack_9;
      fVar12 = uStack_9._4_4_;
      fVar4 = (float)uStack_9;
      fVar13 = (float)uStack_10;
      fStack_14 = uStack_10._4_4_;
      fVar15 = uStack_9._4_4_ * uStack_9._4_4_ + (float)uStack_9 * (float)uStack_9 +
               (float)uStack_10 * (float)uStack_10 + uStack_10._4_4_ * uStack_10._4_4_;
      if (fVar15 < 0.0) {
        fVar15 = (float)FUN_?(fVar15);
      }
      else {
        fVar15 = SQRT(fVar15);
      }
      if (fVar15 < _UNK_?) {
        uStack_7 = uVar11;
        fStack_8 = fVar13;
      }
      else {
        fVar15 = _UNK_? / fVar15;
        fStack_8 = fVar15 * fVar13;
        fStack_14 = fVar15 * fStack_14;
        uStack_7 = CONCAT44(fVar15 * fVar12,fVar15 * fVar4);
      }
      (this_00->fields)._rotation2D.x = (float)(undefined4)uStack_7;
      (this_00->fields)._rotation2D.y = (float)uStack_7._4_4_;
      (this_00->fields)._rotation2D.z = fStack_8;
      (this_00->fields)._rotation2D.w = fStack_14;
      if ((this_00->fields)._parent == (GizmoTransform *)0x0) {
        fVar4 = (this_00->fields)._rotation2D.y;
        fVar12 = (this_00->fields)._rotation2D.z;
        fVar13 = (this_00->fields)._rotation2D.w;
        (this_00->fields)._localRotation2D.x = (this_00->fields)._rotation2D.x;
        (this_00->fields)._localRotation2D.y = fVar4;
        (this_00->fields)._localRotation2D.z = fVar12;
        (this_00->fields)._localRotation2D.w = fVar13;
      }
      else {
        pGVar16 = (this_00->fields)._parent;
        aQStack_17[0].x = (pGVar16->fields)._rotation2D.x;
        aQStack_17[0].y = (pGVar16->fields)._rotation2D.y;
        aQStack_17[0].z = (pGVar16->fields)._rotation2D.z;
        aQStack_17[0].w = (pGVar16->fields)._rotation2D.w;
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar11 = func_?(&UNK_?);
          FUN_?(uVar11,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        uStack_9 = CONCAT44(unaff_XMM10_Db,unaff_XMM10_Da);
        uStack_10 = CONCAT44(unaff_XMM10_Dd,unaff_XMM10_Dc);
        uStack_7 = CONCAT44(unaff_XMM11_Db,unaff_XMM11_Da);
        fStack_8 = unaff_XMM11_Dc;
        fStack_14 = unaff_XMM11_Dd;
        (*pcRam_?)(aQStack_17);
        fVar4 = (this_00->fields)._rotation2D.x;
        fVar12 = (this_00->fields)._rotation2D.y;
        fVar13 = (this_00->fields)._rotation2D.z;
        fVar15 = (this_00->fields)._rotation2D.w;
        fVar18 = (fVar15 * 0.0 + fVar4 * 0.0 + fVar13 * 0.0) - fVar12 * 0.0;
        fVar19 = (fVar12 * 0.0 + fVar15 * 0.0 + fVar4 * 0.0) - fVar13 * 0.0;
        fVar20 = ((fVar15 * 0.0 - fVar4 * 0.0) - fVar12 * 0.0) - fVar13 * 0.0;
        fVar12 = (fVar13 * 0.0 + fVar15 * 0.0 + fVar12 * 0.0) - fVar4 * 0.0;
        fVar4 = fVar19 * fVar19 + fVar18 * fVar18 + fVar12 * fVar12 + fVar20 * fVar20;
        if (fVar4 < 0.0) {
          fVar4 = (float)FUN_?(fVar4);
        }
        else {
          fVar4 = SQRT(fVar4);
        }
        if (_UNK_? <= fVar4) {
          fVar4 = _UNK_? / fVar4;
          fVar18 = fVar18 * fVar4;
          fVar19 = fVar19 * fVar4;
          fVar12 = fVar12 * fVar4;
          fVar20 = fVar20 * fVar4;
        }
        (this_00->fields)._localRotation2D.x = fVar18;
        (this_00->fields)._localRotation2D.y = fVar19;
        (this_00->fields)._localRotation2D.z = fVar12;
        (this_00->fields)._localRotation2D.w = fVar20;
      }
      aQStack_17[0].x = (this_00->fields)._localRotation2D.x;
      aQStack_17[0].y = (this_00->fields)._localRotation2D.y;
      aQStack_17[0].z = (this_00->fields)._localRotation2D.z;
      aQStack_17[0].w = (this_00->fields)._localRotation2D.w;
      fVar4 = QuaternionEx::QuaternionEx_ConvertTo2DRotation(aQStack_17,(MethodInfo *)0x0);
      (this_00->fields)._localRotation2DDegrees = fVar4;
      GizmoTransform::GizmoTransform_Update2DAxes(this_00,(MethodInfo *)0x0);
      GizmoTransform::GizmoTransform_UpdateChildTransforms2D(this_00,(MethodInfo *)0x0);
      pGVar21 = (this_00->fields).Changed;
      (this_00->fields)._firingChanged2DEvent = 1;
      if (pGVar21 != (GizmoEntityTransformChangedHandler *)0x0) {
        (*(pGVar21->fields)._._.invoke_impl)
                  ((pGVar21->fields)._._.method_code,this_00,0x100000000,(pGVar21->fields)._._.method)
        ;
      }
      (this_00->fields)._firingChanged2DEvent = 0;
      return;
    }
  }
  return;
}


/* Void OnGizmoPostEnabled(Gizmo) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_OnGizmoPostEnabled
               (GizmoPlaneSlider2D *this,Gizmo *gizmo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoPlaneSlider2DController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = 0x110;
  if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    lVar1 = 0x108;
  }
  lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
  if ((lVar1 != 0) &&
     (pIVar2 = (this->fields)._controllers, pIVar2 != (IGizmoPlaneSlider2DController__Array *)0x0))
  {
    uVar3 = *(uint *)(lVar1 + 0x14);
    if ((uint)pIVar2->max_length <= uVar3) {
code_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (pIVar2->vector[(int)uVar3] != (IGizmoPlaneSlider2DController *)0x0) {
      FUN_?(0,TypeInfo__RTG__IGizmoPlaneSlider2DController);
      uVar3 = 0x110;
      if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
        uVar3 = 0x108;
      }
      lVar1 = *(longlong *)((longlong)&this->klass + (ulonglong)uVar3);
      if ((lVar1 != 0) &&
         (pIVar2 = (this->fields)._controllers,
         pIVar2 != (IGizmoPlaneSlider2DController__Array *)0x0)) {
        uVar3 = *(uint *)(lVar1 + 0x14);
        if ((uint)pIVar2->max_length <= uVar3) goto code_?;
        if (pIVar2->vector[(int)uVar3] != (IGizmoPlaneSlider2DController *)0x0) {
          FUN_?(2,TypeInfo__RTG__IGizmoPlaneSlider2DController);
          lVar1 = 0x110;
          if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
            lVar1 = 0x108;
          }
          lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
          if ((lVar1 != 0) &&
             (pIVar2 = (this->fields)._controllers,
             pIVar2 != (IGizmoPlaneSlider2DController__Array *)0x0)) {
            uVar3 = *(uint *)(lVar1 + 0x14);
            if ((uint)pIVar2->max_length <= uVar3) goto code_?;
            pIVar5 = pIVar2->vector[(int)uVar3];
            if (pIVar5 != (IGizmoPlaneSlider2DController *)0x0) {
              uVar6 = 0;
              pIVar7 = pIVar5->klass;
              uVar8._0_1_ = (pIVar7->_1).rank;
              uVar8._1_1_ = (pIVar7->_1).minimumAlignment;
              if (uVar8 != 0) {
                do {
                  if (pIVar7->interfaceOffsets[uVar6].interfaceType ==
                      (Il2CppClass *)TypeInfo__RTG__IGizmoPlaneSlider2DController) {
                    ppIVar9 = &(&(pIVar7->vtable).UpdateHandles)
                               [pIVar7->interfaceOffsets[uVar6].offset + 1].methodPtr;
                    UNRECOVERED_JUMPTABLE = *ppIVar9;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*UNRECOVERED_JUMPTABLE)(pIVar5,(MethodInfo *)ppIVar9[1],UNRECOVERED_JUMPTABLE);
                    return;
                  }
                  uVar6 = uVar6 + 1;
                } while (uVar6 < uVar8);
              }
              puVar10 = (undefined8 *)FUN_?(pIVar5);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)*puVar10)(pIVar5,puVar10[1],(code *)*puVar10);
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnGizmoPreUpdateBegin(Gizmo) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_OnGizmoPreUpdateBegin
               (GizmoPlaneSlider2D *this,Gizmo *gizmo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoPlaneSlider2DController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = 0x110;
  if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    lVar1 = 0x108;
  }
  lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
  if ((lVar1 != 0) &&
     (pIVar2 = (this->fields)._controllers, pIVar2 != (IGizmoPlaneSlider2DController__Array *)0x0))
  {
    uVar3 = *(uint *)(lVar1 + 0x14);
    if ((uint)pIVar2->max_length <= uVar3) goto code_?;
    if (pIVar2->vector[(int)uVar3] != (IGizmoPlaneSlider2DController *)0x0) {
      FUN_?(0,TypeInfo__RTG__IGizmoPlaneSlider2DController);
      fVar4 = _UNK_?;
      lVar1 = 0x100;
      if ((this->fields)._sharedSettings == (GizmoPlaneSlider2DSettings *)0x0) {
        lVar1 = 0xf8;
      }
      lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
      if ((lVar1 != 0) &&
         (pGVar5 = (this->fields)._offsetDrag, pGVar5 != (GizmoDblAxisOffsetDrag3D *)0x0)) {
        fVar6 = *(float *)(lVar1 + 0x3c);
        fVar7 = _UNK_?;
        if (_UNK_? <= fVar6) {
          fVar7 = fVar6;
        }
        (pGVar5->fields)._._sensitivity = fVar7;
        uVar8 = 0x100;
        if ((this->fields)._sharedSettings == (GizmoPlaneSlider2DSettings *)0x0) {
          uVar8 = 0xf8;
        }
        lVar1 = *(longlong *)((longlong)&this->klass + (ulonglong)uVar8);
        if ((lVar1 != 0) &&
           (pGVar9 = (this->fields)._rotationDrag, pGVar9 != (GizmoSglAxisRotationDrag3D *)0x0)) {
          fVar6 = *(float *)(lVar1 + 0x40);
          fVar7 = fVar4;
          if (fVar4 <= fVar6) {
            fVar7 = fVar6;
          }
          (pGVar9->fields)._._sensitivity = fVar7;
          lVar1 = 0x100;
          if ((this->fields)._sharedSettings == (GizmoPlaneSlider2DSettings *)0x0) {
            lVar1 = 0xf8;
          }
          lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
          if ((lVar1 != 0) &&
             (pGVar10 = (this->fields)._scaleDrag, pGVar10 != (GizmoDblAxisScaleDrag3D *)0x0)) {
            fVar6 = *(float *)(lVar1 + 0x44);
            if (fVar4 <= fVar6) {
              fVar4 = fVar6;
            }
            pIVar2 = (this->fields)._controllers;
            (pGVar10->fields)._._sensitivity = fVar4;
            if (pIVar2 != (IGizmoPlaneSlider2DController__Array *)0x0) {
              if ((uint)pIVar2->max_length <= uVar3) {
code_?:
                FUN_?();
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              if (pIVar2->vector[(int)uVar3] != (IGizmoPlaneSlider2DController *)0x0) {
                FUN_?(1,TypeInfo__RTG__IGizmoPlaneSlider2DController);
                pIVar2 = (this->fields)._controllers;
                if (pIVar2 != (IGizmoPlaneSlider2DController__Array *)0x0) {
                  if ((uint)pIVar2->max_length <= uVar3) goto code_?;
                  pIVar12 = pIVar2->vector[(int)uVar3];
                  if (pIVar12 != (IGizmoPlaneSlider2DController *)0x0) {
                    uVar13 = 0;
                    pIVar14 = pIVar12->klass;
                    uVar15._0_1_ = (pIVar14->_1).rank;
                    uVar15._1_1_ = (pIVar14->_1).minimumAlignment;
                    if (uVar15 != 0) {
                      do {
                        if (pIVar14->interfaceOffsets[uVar13].interfaceType ==
                            (Il2CppClass *)TypeInfo__RTG__IGizmoPlaneSlider2DController) {
                          ppIVar16 = &(&(pIVar14->vtable).UpdateHandles)
                                      [pIVar14->interfaceOffsets[uVar13].offset + 2].methodPtr;
                          UNRECOVERED_JUMPTABLE = *ppIVar16;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          (*UNRECOVERED_JUMPTABLE)
                                    (pIVar12,(MethodInfo *)ppIVar16[1],UNRECOVERED_JUMPTABLE);
                          return;
                        }
                        uVar13 = uVar13 + 1;
                      } while (uVar13 < uVar15);
                    }
                    puVar17 = (undefined8 *)
                              FUN_?(pIVar12,TypeInfo__RTG__IGizmoPlaneSlider2DController,2,
                                            uVar15,unaff_RBX);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*(code *)*puVar17)(pIVar12,puVar17[1],(code *)*puVar17);
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
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnHoverableStateChanged() */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_OnHoverableStateChanged
               (GizmoPlaneSlider2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._handle;
  if (pGVar1 != (GizmoHandle *)0x0) {
    GizmoHandle::GizmoHandle_Set2DShapeHoverable
              (pGVar1,(this->fields)._quadIndex,(this->fields)._._isHoverable,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._handle;
    if (pGVar1 != (GizmoHandle *)0x0) {
      bVar2 = (this->fields)._._isHoverable;
      uVar3 = (this->fields)._circleIndex;
      if (cRam_? == '\0') {
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pLVar4 = (pGVar1->fields)._2DShapes;
      if (pLVar4 != (List_1_RTG_GizmoHandleShape2D_ *)0x0) {
        if ((uint)(pLVar4->fields)._size <= uVar3) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pGVar6 = (pLVar4->fields)._items;
        if (pGVar6 != (GizmoHandleShape2D__Array *)0x0) {
          if ((uint)pGVar6->max_length <= uVar3) {
            FUN_?();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (pGVar6->vector[(int)uVar3] != (GizmoHandleShape2D *)0x0) {
            (pGVar6->vector[(int)uVar3]->fields)._isHoverable = bVar2;
            return;
          }
        }
      }
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnTransformChanged(GizmoTransform, GizmoTransform+ChangeData) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_OnTransformChanged
               (GizmoPlaneSlider2D *this,GizmoTransform *transform,
               GizmoTransform_ChangeData changeData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoPlaneSlider2DController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iStackX_1c = changeData.TRSDimension;
  if ((iStackX_1c != 1) && (changeData.ChangeReason != 1)) {
    return;
  }
  lVar1 = 0x110;
  if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    lVar1 = 0x108;
  }
  lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
  if ((lVar1 != 0) &&
     (pIVar2 = (this->fields)._controllers, pIVar2 != (IGizmoPlaneSlider2DController__Array *)0x0))
  {
    uVar3 = *(uint *)(lVar1 + 0x14);
    if ((uint)pIVar2->max_length <= uVar3) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (pIVar2->vector[(int)uVar3] != (IGizmoPlaneSlider2DController *)0x0) {
      FUN_?(1,TypeInfo__RTG__IGizmoPlaneSlider2DController);
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnVisibilityStateChanged() */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_OnVisibilityStateChanged
               (GizmoPlaneSlider2D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoPlaneSlider2DController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = 0x110;
  if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    lVar1 = 0x108;
  }
  lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
  if ((lVar1 != 0) &&
     (pIVar2 = (this->fields)._controllers, pIVar2 != (IGizmoPlaneSlider2DController__Array *)0x0))
  {
    uVar3 = *(uint *)(lVar1 + 0x14);
    if ((uint)pIVar2->max_length <= uVar3) {
code_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (pIVar2->vector[(int)uVar3] != (IGizmoPlaneSlider2DController *)0x0) {
      FUN_?(0,TypeInfo__RTG__IGizmoPlaneSlider2DController);
      uVar3 = 0x110;
      if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
        uVar3 = 0x108;
      }
      lVar1 = *(longlong *)((longlong)&this->klass + (ulonglong)uVar3);
      if ((lVar1 != 0) &&
         (pIVar2 = (this->fields)._controllers,
         pIVar2 != (IGizmoPlaneSlider2DController__Array *)0x0)) {
        uVar3 = *(uint *)(lVar1 + 0x14);
        if ((uint)pIVar2->max_length <= uVar3) goto code_?;
        if (pIVar2->vector[(int)uVar3] != (IGizmoPlaneSlider2DController *)0x0) {
          FUN_?(2,TypeInfo__RTG__IGizmoPlaneSlider2DController);
          lVar1 = 0x110;
          if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
            lVar1 = 0x108;
          }
          lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
          if ((lVar1 != 0) &&
             (pIVar2 = (this->fields)._controllers,
             pIVar2 != (IGizmoPlaneSlider2DController__Array *)0x0)) {
            uVar3 = *(uint *)(lVar1 + 0x14);
            if ((uint)pIVar2->max_length <= uVar3) goto code_?;
            pIVar5 = pIVar2->vector[(int)uVar3];
            if (pIVar5 != (IGizmoPlaneSlider2DController *)0x0) {
              uVar6 = 0;
              pIVar7 = pIVar5->klass;
              uVar8._0_1_ = (pIVar7->_1).rank;
              uVar8._1_1_ = (pIVar7->_1).minimumAlignment;
              if (uVar8 != 0) {
                do {
                  if (pIVar7->interfaceOffsets[uVar6].interfaceType ==
                      (Il2CppClass *)TypeInfo__RTG__IGizmoPlaneSlider2DController) {
                    ppIVar9 = &(&(pIVar7->vtable).UpdateHandles)
                               [pIVar7->interfaceOffsets[uVar6].offset + 1].methodPtr;
                    UNRECOVERED_JUMPTABLE = *ppIVar9;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*UNRECOVERED_JUMPTABLE)(pIVar5,(MethodInfo *)ppIVar9[1],UNRECOVERED_JUMPTABLE);
                    return;
                  }
                  uVar6 = uVar6 + 1;
                } while (uVar6 < uVar8);
              }
              puVar10 = (undefined8 *)FUN_?(pIVar5);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)*puVar10)(pIVar5,puVar10[1],(code *)*puVar10);
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void RemoveTargetTransform(GizmoTransform) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_RemoveTargetTransform
               (GizmoPlaneSlider2D *this,GizmoTransform *transform,MethodInfo *method)

{
  this_01 = (this->fields)._offsetDrag;
  if (this_01 != (GizmoDblAxisOffsetDrag3D *)0x0) {
    GizmoDragSession::GizmoDragSession_RemoveTargetTransform
              ((GizmoDragSession *)this_01,transform,(MethodInfo *)0x0);
    this_02 = (this->fields)._rotationDrag;
    if (this_02 != (GizmoSglAxisRotationDrag3D *)0x0) {
      GizmoDragSession::GizmoDragSession_RemoveTargetTransform
                ((GizmoDragSession *)this_02,transform,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._scaleDrag;
      if (pGVar1 != (GizmoDblAxisScaleDrag3D *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__Remove_RTG__GizmoTransform_
                        ,transform,0,in_R9,unaff_RDI);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        cVar2 = (*(pGVar1->klass->vtable).get_IsActive_1.methodPtr)
                          (pGVar1,(pGVar1->klass->vtable).get_IsActive_1.method);
        if (cVar2 == '\0') {
          this_00 = (pGVar1->fields)._._._targetTransforms;
          if (this_00 == (List_1_RTG_GizmoTransform_ *)0x0) {
            FUN_?();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Remove
                    ((List_1_System_Object_ *)this_00,(Object *)transform,
                     MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__Remove_RTG__GizmoTransform_
                    );
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void RemoveTargetTransform(GizmoTransform, GizmoDragChannel) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_RemoveTargetTransform_1
               (GizmoPlaneSlider2D *this,GizmoTransform *transform,
               GizmoDragChannel__Enum dragChannel,MethodInfo *method)

{
  if (dragChannel == GizmoDragChannel__Enum_Offset) {
    pGVar1 = (GizmoDblAxisScaleDrag3D *)(this->fields)._offsetDrag;
  }
  else if (dragChannel == GizmoDragChannel__Enum_Rotation) {
    pGVar1 = (GizmoDblAxisScaleDrag3D *)(this->fields)._rotationDrag;
  }
  else {
    if ((this->fields)._dragChannel != 3) {
      return;
    }
    pGVar1 = (this->fields)._scaleDrag;
  }
  if (pGVar1 != (GizmoDblAxisScaleDrag3D *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__Remove_RTG__GizmoTransform_
                    ,transform,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    cVar2 = (*(pGVar1->klass->vtable).get_IsActive_1.methodPtr)
                      (pGVar1,(pGVar1->klass->vtable).get_IsActive_1.method);
    if (cVar2 == '\0') {
      this_00 = (pGVar1->fields)._._._targetTransforms;
      if (this_00 == (List_1_RTG_GizmoTransform_ *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__Remove
                ((List_1_System_Object_ *)this_00,(Object *)transform,
                 MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__Remove_RTG__GizmoTransform_
                );
    }
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Render(Camera) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_Render
               (GizmoPlaneSlider2D *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__Singleton<RTG::GizmoSolidMaterial>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__Singleton<RTG::GizmoSolidMaterial>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((this->fields)._._isVisible == 0) && ((this->fields)._isBorderVisible == 0)) {
    return;
  }
  pGVar1 = (this->fields)._rotationDrag;
  if (pGVar1 == (GizmoSglAxisRotationDrag3D *)0x0) goto code_?;
  cVar2 = (*(pGVar1->klass->vtable).get_IsActive_1.methodPtr)();
  lVar3 = 0x110;
  if (cVar2 != '\0') {
    lVar4 = 0x110;
    if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
      lVar4 = 0x108;
    }
    lVar4 = *(longlong *)((longlong)&this->klass + lVar4);
    if (lVar4 == 0) goto code_?;
    if (*(char *)(lVar4 + 0x28) != '\0') {
      uVar5 = 0x110;
      if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
        uVar5 = 0x108;
      }
      if (*(int *)(*(longlong *)((longlong)&this->klass + (ulonglong)uVar5) + 0x14) != 1) {
        lVar4 = 0x110;
        if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
          lVar4 = 0x108;
        }
        if (*(int *)(*(longlong *)((longlong)&this->klass + lVar4) + 0x14) != 2)
        goto code_?;
      }
      pGVar6 = (this->fields)._._gizmo;
      if (pGVar6 == (Gizmo *)0x0) goto code_?;
      pCVar7 = Gizmo::Gizmo_get_FocusCamera(pGVar6,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (camera != (Camera *)0x0 || pCVar7 != (Camera *)0x0) {
        if (pCVar7 == (Camera *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (camera == (Camera *)0x0) goto code_?;
          bVar8 = (camera->fields)._._._.m_CachedPtr == (void *)0x0;
        }
        else if (camera == (Camera *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          bVar8 = (pCVar7->fields)._._._.m_CachedPtr == (void *)0x0;
        }
        else {
          bVar8 = camera == pCVar7;
        }
        if (!bVar8) goto code_?;
      }
      pGVar1 = (this->fields)._rotationDrag;
      if ((pGVar1 == (GizmoSglAxisRotationDrag3D *)0x0) ||
         (pGVar9 = (this->fields)._rotationArc, pGVar9 == (GizmoRotationArc2D *)0x0))
      goto code_?;
      GizmoRotationArc2D::GizmoRotationArc2D_set_RotationAngle
                (pGVar9,(pGVar1->fields)._totalRotation,(MethodInfo *)0x0);
      lVar4 = 0x110;
      if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
        lVar4 = 0x108;
      }
      lVar4 = *(longlong *)((longlong)&this->klass + lVar4);
      if ((lVar4 == 0) ||
         (pGVar9 = (this->fields)._rotationArc, pGVar9 == (GizmoRotationArc2D *)0x0))
      goto code_?;
      GizmoRotationArc2D::GizmoRotationArc2D_Render
                (pGVar9,*(GizmoRotationArc2DLookAndFeel **)(lVar4 + 0x30),camera,(MethodInfo *)0x0)
      ;
    }
  }
code_?:
  if ((this->fields)._._isVisible != 0) {
    lVar4 = 0x110;
    if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
      lVar4 = 0x108;
    }
    lVar4 = *(longlong *)((longlong)&this->klass + lVar4);
    if (lVar4 == 0) goto code_?;
    if (*(int *)(lVar4 + 0x10) != 0) {
      lVar4 = 0x110;
      if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
        lVar4 = 0x108;
      }
      if (*(int *)(*(longlong *)((longlong)&this->klass + lVar4) + 0x10) != 2)
      goto code_?;
    }
    lVar4 = 0x110;
    pGVar6 = (this->fields)._._gizmo;
    if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
      lVar4 = 0x108;
    }
    lVar4 = *(longlong *)((longlong)&this->klass + lVar4);
    fVar10 = *(float *)(lVar4 + 0x38);
    fVar11 = *(float *)(lVar4 + 0x3c);
    fVar12 = *(float *)(lVar4 + 0x40);
    fVar13 = *(float *)(lVar4 + 0x44);
    if ((pGVar6 == (Gizmo *)0x0) ||
       (pGVar14 = (this->fields)._._handle, pGVar14 == (GizmoHandle *)0x0)) goto code_?;
    if ((pGVar6->fields)._hoverInfo._handleId == (pGVar14->fields)._id) {
      lVar4 = 0x110;
      if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
        lVar4 = 0x108;
      }
      lVar4 = *(longlong *)((longlong)&this->klass + lVar4);
      fVar10 = *(float *)(lVar4 + 0x48);
      fVar11 = *(float *)(lVar4 + 0x4c);
      fVar12 = *(float *)(lVar4 + 0x50);
      fVar13 = *(float *)(lVar4 + 0x54);
    }
    if (*(int *)&(TypeInfo__RTG__Singleton<RTG::GizmoSolidMaterial>->_1).field_0x1c == 0) {
      FUN_?();
    }
    this_01 = (GizmoSolidMaterial *)
              Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                        (MethodInfo__RTG__Singleton<RTG::GizmoSolidMaterial>__get_Get__);
    if (this_01 == (GizmoSolidMaterial *)0x0) goto code_?;
    GizmoSolidMaterial::GizmoSolidMaterial_ResetValuesToSensibleDefaults(this_01,(MethodInfo *)0x0);
    GizmoSolidMaterial::GizmoSolidMaterial_SetLit(this_01,0,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral__Color);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar15 = GizmoSolidMaterial::GizmoSolidMaterial_get_Material(this_01,(MethodInfo *)0x0);
    if (pMVar15 == (Material *)0x0) goto code_?;
    aCStack_16[0].r = fVar10;
    aCStack_16[0].g = fVar11;
    aCStack_16[0].b = fVar12;
    aCStack_16[0].a = fVar13;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
              (pMVar15,StringLiteral__Color,aCStack_16,(MethodInfo *)0x0);
    pMVar15 = GizmoSolidMaterial::GizmoSolidMaterial_get_Material(this_01,(MethodInfo *)0x0);
    if (pMVar15 == (Material *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass(pMVar15,0,(MethodInfo *)0x0)
    ;
    pGVar14 = (this->fields)._._handle;
    if (pGVar14 == (GizmoHandle *)0x0) goto code_?;
    GizmoHandle::GizmoHandle_Render2DSolid(pGVar14,camera,(MethodInfo *)0x0);
  }
code_?:
  if ((this->fields)._isBorderVisible == 0) {
    return;
  }
  lVar4 = 0x110;
  if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    lVar4 = 0x108;
  }
  lVar4 = *(longlong *)((longlong)&this->klass + lVar4);
  if (lVar4 == 0) goto code_?;
  if (*(int *)(lVar4 + 0x10) != 1) {
    lVar4 = 0x110;
    if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
      lVar4 = 0x108;
    }
    if (*(int *)(*(longlong *)((longlong)&this->klass + lVar4) + 0x10) != 2) {
      return;
    }
  }
  lVar4 = 0x110;
  if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    lVar4 = 0x108;
  }
  if (*(int *)(*(longlong *)((longlong)&this->klass + lVar4) + 0x14) == 0) {
    pGVar17 = (GizmoCircle2DBorder *)(this->fields)._quadBorder;
    if (pGVar17 == (GizmoCircle2DBorder *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
  }
  else {
    lVar4 = 0x110;
    if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
      lVar4 = 0x108;
    }
    if (*(int *)(*(longlong *)((longlong)&this->klass + lVar4) + 0x14) != 1) {
      if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
        lVar3 = 0x108;
      }
      if (*(int *)(*(longlong *)((longlong)&this->klass + lVar3) + 0x14) != 2) {
        return;
      }
      this_00 = (this->fields)._polygonBorder;
      if (this_00 != (GizmoPolygon2DBorder *)0x0) {
        GizmoPolygon2DBorder::GizmoPolygon2DBorder_Render(this_00,camera,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    pGVar17 = (this->fields)._circleBorder;
    if (pGVar17 == (GizmoCircle2DBorder *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
  }
  if ((pGVar17->fields)._isVisible == 0) {
    return;
  }
  pGVar18 = (pGVar17->fields)._planeSlider;
  if (pGVar18 != (GizmoPlaneSlider2D *)0x0) {
    lVar4 = 0x110;
    if ((pGVar18->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
      lVar4 = 0x108;
    }
    lVar4 = *(longlong *)((longlong)&pGVar18->klass + lVar4);
    if (lVar4 != 0) {
      fVar10 = *(float *)(lVar4 + 0x58);
      fVar11 = *(float *)(lVar4 + 0x5c);
      fVar12 = *(float *)(lVar4 + 0x60);
      fVar13 = *(float *)(lVar4 + 100);
      pGVar14 = (pGVar17->fields)._targetHandle;
      if ((pGVar14 != (GizmoHandle *)0x0) &&
         (pGVar6 = (pGVar14->fields)._gizmo, pGVar6 != (Gizmo *)0x0)) {
        if ((pGVar6->fields)._hoverInfo._handleId == (((pGVar17->fields)._targetHandle)->fields)._id
           ) {
          pGVar18 = (pGVar17->fields)._planeSlider;
          if ((pGVar18->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
            lVar3 = 0x108;
          }
          lVar3 = *(longlong *)((longlong)&pGVar18->klass + lVar3);
          fVar10 = *(float *)(lVar3 + 0x68);
          fVar11 = *(float *)(lVar3 + 0x6c);
          fVar12 = *(float *)(lVar3 + 0x70);
          fVar13 = *(float *)(lVar3 + 0x74);
        }
        if (*(int *)&(TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>->_1).field_0x1c == 0) {
          FUN_?();
        }
        this_02 = (GizmoLineMaterial *)
                  Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                            (MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
        if (this_02 != (GizmoLineMaterial *)0x0) {
          GizmoLineMaterial::GizmoLineMaterial_ResetValuesToSensibleDefaults
                    (this_02,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&StringLiteral__Color);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar15 = GizmoLineMaterial::GizmoLineMaterial_get_Material(this_02,(MethodInfo *)0x0);
          if (pMVar15 != (Material *)0x0) {
            aCStack_16[0].r = fVar10;
            aCStack_16[0].g = fVar11;
            aCStack_16[0].b = fVar12;
            aCStack_16[0].a = fVar13;
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                      (pMVar15,StringLiteral__Color,aCStack_16,(MethodInfo *)0x0);
            pMVar15 = GizmoLineMaterial::GizmoLineMaterial_get_Material(this_02,(MethodInfo *)0x0);
            if (pMVar15 != (Material *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass
                        (pMVar15,0,(MethodInfo *)0x0);
              pGVar14 = (pGVar17->fields)._targetHandle;
              if (pGVar14 != (GizmoHandle *)0x0) {
                GizmoHandle::GizmoHandle_Render2DWire_1
                          (pGVar14,camera,(pGVar17->fields)._borderCircleIndex,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void SetBorderHoverable(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_SetBorderHoverable
               (GizmoPlaneSlider2D *this,bool isHoverable,MethodInfo *method)

{
  (this->fields)._isBorderHoverable = isHoverable;
  pGVar1 = (this->fields)._quadBorder;
  if (pGVar1 != (GizmoQuad2DBorder *)0x0) {
    pGVar2 = (pGVar1->fields)._targetHandle;
    (pGVar1->fields)._isHoverable = isHoverable;
    if (pGVar2 != (GizmoHandle *)0x0) {
      GizmoHandle::GizmoHandle_Set2DShapeHoverable
                (pGVar2,(pGVar1->fields)._borderQuadIndex,isHoverable,(MethodInfo *)0x0);
      pGVar3 = (this->fields)._circleBorder;
      if (pGVar3 != (GizmoCircle2DBorder *)0x0) {
        pGVar2 = (pGVar3->fields)._targetHandle;
        (pGVar3->fields)._isHoverable = isHoverable;
        if (pGVar2 != (GizmoHandle *)0x0) {
          GizmoHandle::GizmoHandle_Set2DShapeHoverable
                    (pGVar2,(pGVar3->fields)._borderCircleIndex,isHoverable,(MethodInfo *)0x0);
          pGVar4 = (this->fields)._polygonBorder;
          if (pGVar4 != (GizmoPolygon2DBorder *)0x0) {
            pGVar2 = (pGVar4->fields)._targetHandle;
            (pGVar4->fields)._isHoverable = isHoverable;
            if (pGVar2 != (GizmoHandle *)0x0) {
              GizmoHandle::GizmoHandle_Set2DShapeHoverable
                        (pGVar2,(pGVar4->fields)._borderPolygonIndex,isHoverable,(MethodInfo *)0x0);
              pGVar2 = (pGVar4->fields)._targetHandle;
              if (pGVar2 != (GizmoHandle *)0x0) {
                uVar5 = (pGVar4->fields)._thickBorderPolygonIndex;
                if (cRam_? == '\0') {
                  FUN_?();
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pLVar6 = (pGVar2->fields)._2DShapes;
                if (pLVar6 != (List_1_RTG_GizmoHandleShape2D_ *)0x0) {
                  if ((uint)(pLVar6->fields)._size <= uVar5) {
                    mscorlib.dll::System::ThrowHelper::
                    ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  pGVar8 = (pLVar6->fields)._items;
                  if (pGVar8 != (GizmoHandleShape2D__Array *)0x0) {
                    if ((uint)pGVar8->max_length <= uVar5) {
                      FUN_?();
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    if (pGVar8->vector[(int)uVar5] != (GizmoHandleShape2D *)0x0) {
                      (pGVar8->vector[(int)uVar5]->fields)._isHoverable = isHoverable;
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
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetBorderVisible(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_SetBorderVisible
               (GizmoPlaneSlider2D *this,bool isVisible,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoPlaneSlider2DController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (isVisible == (this->fields)._isBorderVisible) {
    return;
  }
  (this->fields)._isBorderVisible = isVisible;
  lVar1 = 0x110;
  if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    lVar1 = 0x108;
  }
  lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
  if ((lVar1 != 0) &&
     (pIVar2 = (this->fields)._controllers, pIVar2 != (IGizmoPlaneSlider2DController__Array *)0x0))
  {
    uVar3 = *(uint *)(lVar1 + 0x14);
    if ((uint)pIVar2->max_length <= uVar3) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (pIVar2->vector[(int)uVar3] != (IGizmoPlaneSlider2DController *)0x0) {
      FUN_?(0,TypeInfo__RTG__IGizmoPlaneSlider2DController);
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetDragChannel(GizmoDragChannel) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_SetDragChannel
               (GizmoPlaneSlider2D *this,GizmoDragChannel__Enum dragChannel,MethodInfo *method)

{
  (this->fields)._dragChannel = dragChannel;
  lVar1 = 0xADDR;
  if (dragChannel == GizmoDragChannel__Enum_Offset) {
    bVar2 = iRam_? != 0;
    (this->fields)._selectedDragSession = (IGizmoDragSession *)(this->fields)._offsetDrag;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields)._selectedDragSession >> 0xc);
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
  }
  else if (dragChannel == GizmoDragChannel__Enum_Rotation) {
    bVar2 = iRam_? != 0;
    (this->fields)._selectedDragSession = (IGizmoDragSession *)(this->fields)._rotationDrag;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields)._selectedDragSession >> 0xc);
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
  }
  else if (dragChannel == GizmoDragChannel__Enum_Scale) {
    (this->fields)._selectedDragSession = (IGizmoDragSession *)(this->fields)._scaleDrag;
    func_?(&(this->fields)._selectedDragSession);
  }
  pGVar7 = (this->fields)._._handle;
  if (pGVar7 == (GizmoHandle *)0x0) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  bVar2 = iRam_? != 0;
  (pGVar7->fields)._DragSession_k__BackingField = (this->fields)._selectedDragSession;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(pGVar7->fields)._DragSession_k__BackingField >> 0xc);
    lVar1 = lVar1 + (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar1 + 0x462e0);
      puVar6 = (ulonglong *)(lVar1 + 0x462e0);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  return;
}


/* Void SetPolyCwPoints(List`1[UnityEngine.Vector2], Boolean) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_SetPolyCwPoints
               (GizmoPlaneSlider2D *this,List_1_UnityEngine_Vector2_ *cwPoints,bool isClosed,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoPlaneSlider2DController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = 0x110;
  if ((this->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    lVar1 = 0x108;
  }
  lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x14) != 2) {
      return;
    }
    this_00 = (this->fields)._polygon;
    if (this_00 != (PolygonShape2D *)0x0) {
      PolygonShape2D::PolygonShape2D_SetClockwisePoints(this_00,cwPoints,isClosed,(MethodInfo *)0x0)
      ;
      pIVar2 = (this->fields)._controllers;
      if (pIVar2 != (IGizmoPlaneSlider2DController__Array *)0x0) {
        if ((uint)pIVar2->max_length < 3) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (pIVar2->vector[2] != (IGizmoPlaneSlider2DController *)0x0) {
          FUN_?(1,TypeInfo__RTG__IGizmoPlaneSlider2DController);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetSnapEnabled(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_SetSnapEnabled
               (GizmoPlaneSlider2D *this,bool isEnabled,MethodInfo *method)

{
  pGVar1 = (this->fields)._offsetDrag;
  if (pGVar1 != (GizmoDblAxisOffsetDrag3D *)0x0) {
    (pGVar1->fields)._._isSnapEnabled = isEnabled;
    pGVar2 = (this->fields)._rotationDrag;
    if (pGVar2 != (GizmoSglAxisRotationDrag3D *)0x0) {
      (pGVar2->fields)._._isSnapEnabled = isEnabled;
      pGVar3 = (this->fields)._scaleDrag;
      if (pGVar3 != (GizmoDblAxisScaleDrag3D *)0x0) {
        (pGVar3->fields)._._isSnapEnabled = isEnabled;
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* GizmoPlaneSlider2D(Gizmo, Int32) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D__ctor
               (GizmoPlaneSlider2D *this,Gizmo *gizmo,int32_t handleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CircleShape2D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoCircle2DBorder);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoCirclePlaneSlider2DController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoDblAxisOffsetDrag3D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoDblAxisScaleDrag3D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoEntityTransformChangedHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__RTG__GizmoPlane2DType);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoPlaneSlider2DControllerData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoPlaneSlider2DLookAndFeel);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoPlaneSlider2DSettings);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__GizmoPlaneSlider2D__OnGizmoAttemptHandleDragBegin_RTG__Gizmo__int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__GizmoPlaneSlider2D__OnGizmoHandleDragUpdate_RTG__Gizmo__int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__GizmoPlaneSlider2D__OnGizmoPostEnabled_RTG__Gizmo_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__GizmoPlaneSlider2D__OnGizmoPreUpdateBegin_RTG__Gizmo_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__GizmoPlaneSlider2D__OnTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoPolygon2DBorder);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoPolygonPlaneSlider2DController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoPostEnabledHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoPreDragBeginAttemptHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoPreDragUpdateHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoPreUpdateBeginHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoQuad2DBorder);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoQuadPlaneSlider2DController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoRotationArc2D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoSglAxisRotationDrag3D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoTransform);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__IGizmoPlaneSlider2DController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__PolygonShape2D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__QuadShape2D);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar1 = (QuadShape2D *)FUN_?(TypeInfo__RTG__QuadShape2D);
  QuadShape2D::QuadShape2D__ctor(pQVar1,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._quad = pQVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._quad >> 0xc);
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
  pCVar7 = (CircleShape2D *)FUN_?(TypeInfo__RTG__CircleShape2D);
  CircleShape2D::CircleShape2D__ctor(pCVar7,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._circle = pCVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._circle >> 0xc);
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
  pPVar8 = (PolygonShape2D *)FUN_?(TypeInfo__RTG__PolygonShape2D);
  PolygonShape2D::PolygonShape2D__ctor(pPVar8,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._polygon = pPVar8;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._polygon >> 0xc);
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
  (this->fields)._isBorderVisible = 1;
  (this->fields)._isBorderHoverable = 1;
  pGVar9 = (GizmoTransform *)FUN_?(TypeInfo__RTG__GizmoTransform);
  GizmoTransform::GizmoTransform__ctor(pGVar9,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._transform = pGVar9;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._transform >> 0xc);
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
  (this->fields)._dragChannel = 1;
  pGVar10 = (GizmoDblAxisOffsetDrag3D *)FUN_?(TypeInfo__RTG__GizmoDblAxisOffsetDrag3D);
  (pGVar10->fields)._._sensitivity = 1.0;
  GizmoDragSession::GizmoDragSession__ctor((GizmoDragSession *)pGVar10,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._offsetDrag = pGVar10;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._offsetDrag >> 0xc);
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
  pGVar11 = (GizmoSglAxisRotationDrag3D *)FUN_?(TypeInfo__RTG__GizmoSglAxisRotationDrag3D);
  (pGVar11->fields)._._sensitivity = 1.0;
  GizmoDragSession::GizmoDragSession__ctor((GizmoDragSession *)pGVar11,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._rotationDrag = pGVar11;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._rotationDrag >> 0xc);
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
  this_00 = (GizmoRotationArc2D *)FUN_?(TypeInfo__RTG__GizmoRotationArc2D);
  GizmoRotationArc2D::GizmoRotationArc2D__ctor(this_00,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._rotationArc = this_00;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._rotationArc >> 0xc);
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
  pGVar12 = (GizmoDblAxisScaleDrag3D *)FUN_?(TypeInfo__RTG__GizmoDblAxisScaleDrag3D);
  (pGVar12->fields)._relativeScale0 = 1.0;
  (pGVar12->fields)._relativeScale1 = 1.0;
  (pGVar12->fields)._totalScale0 = 1.0;
  (pGVar12->fields)._totalScale1 = 1.0;
  (pGVar12->fields)._._sensitivity = 1.0;
  GizmoDragSession::GizmoDragSession__ctor((GizmoDragSession *)pGVar12,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._scaleDrag = pGVar12;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._scaleDrag >> 0xc);
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
  (this->fields)._scaleDragAxisIndexUp = 1;
  pGVar13 = (GizmoPlaneSlider2DControllerData *)
            FUN_?(TypeInfo__RTG__GizmoPlaneSlider2DControllerData);
  bVar2 = iRam_? != 0;
  (this->fields)._controllerData = pGVar13;
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
  pIVar14 = TypeRef__RTG__GizmoPlane2DType;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  plVar15 = (longlong *)0x0;
  if (pIVar14 != (Il2CppType *)0x0) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar16 = FUN_?(pIVar14,1);
    plVar15 = (longlong *)FUN_?(lVar16 + 0x20);
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (plVar15 != (longlong *)0x0) {
    this_01 = (Array *)(**(code **)(*plVar15 + 0x888))(plVar15);
    if (this_01 != (Array *)0x0) {
      mscorlib.dll::System::Array::Array_get_Length(this_01,(MethodInfo *)0x0);
      pIVar17 = (IGizmoPlaneSlider2DController__Array *)
                FUN_?(TypeInfo__RTG__IGizmoPlaneSlider2DController);
      bVar2 = iRam_? != 0;
      (this->fields)._controllers = pIVar17;
      if (bVar2) {
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
      pGVar18 = (GizmoPlaneSlider2DSettings *)
                FUN_?(TypeInfo__RTG__GizmoPlaneSlider2DSettings);
      bVar2 = iRam_? != 0;
      (pGVar18->fields)._areaHoverEps = 1e-05;
      (pGVar18->fields)._borderLineHoverEps = 7.0;
      (pGVar18->fields)._thickBorderPolyHoverEps = 7.0;
      (pGVar18->fields)._offsetSnapStepRight = 1.0;
      (pGVar18->fields)._offsetSnapStepUp = 1.0;
      (pGVar18->fields)._rotationSnapStep = 15.0;
      (pGVar18->fields)._scaleMode = 1;
      (pGVar18->fields)._scaleSnapStepRight = 0.1;
      (pGVar18->fields)._scaleSnapStepUp = 0.1;
      (pGVar18->fields)._proportionalScaleSnapStep = 0.1;
      (pGVar18->fields)._offsetSensitivity = 1.0;
      (pGVar18->fields)._rotationSensitivity = 0.45;
      (pGVar18->fields)._scaleSensitivity = 1.0;
      (this->fields)._settings = pGVar18;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&(this->fields)._settings >> 0xc);
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
      this_02 = (GizmoPlaneSlider2DLookAndFeel *)
                FUN_?(TypeInfo__RTG__GizmoPlaneSlider2DLookAndFeel);
      GizmoPlaneSlider2DLookAndFeel::GizmoPlaneSlider2DLookAndFeel__ctor(this_02,(MethodInfo *)0x0);
      bVar2 = iRam_? != 0;
      (this->fields)._lookAndFeel = this_02;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&(this->fields)._lookAndFeel >> 0xc);
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
      GizmoSlider::GizmoSlider__ctor((GizmoSlider *)this,gizmo,handleId,(MethodInfo *)0x0);
      pGVar19 = (this->fields)._._handle;
      if (pGVar19 != (GizmoHandle *)0x0) {
        iVar20 = GizmoHandle::GizmoHandle_Add2DShape
                          (pGVar19,(Shape2D *)(this->fields)._quad,(MethodInfo *)0x0);
        pGVar19 = (this->fields)._._handle;
        (this->fields)._quadIndex = iVar20;
        if (pGVar19 != (GizmoHandle *)0x0) {
          iVar20 = GizmoHandle::GizmoHandle_Add2DShape
                            (pGVar19,(Shape2D *)(this->fields)._circle,(MethodInfo *)0x0);
          pGVar19 = (this->fields)._._handle;
          (this->fields)._circleIndex = iVar20;
          if (pGVar19 != (GizmoHandle *)0x0) {
            iVar20 = GizmoHandle::GizmoHandle_Add2DShape
                              (pGVar19,(Shape2D *)(this->fields)._polygon,(MethodInfo *)0x0);
            pGVar19 = (this->fields)._._handle;
            pQVar1 = (this->fields)._quad;
            (this->fields)._polygonIndex = iVar20;
            this_03 = (GizmoQuad2DBorder *)FUN_?(TypeInfo__RTG__GizmoQuad2DBorder);
            GizmoQuad2DBorder::GizmoQuad2DBorder__ctor(this_03,this,pGVar19,pQVar1,(MethodInfo *)0x0)
            ;
            bVar2 = iRam_? != 0;
            (this->fields)._quadBorder = this_03;
            if (bVar2) {
              uVar3 = (uint)((ulonglong)&(this->fields)._quadBorder >> 0xc);
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
            pGVar19 = (this->fields)._._handle;
            pCVar7 = (this->fields)._circle;
            this_04 = (GizmoCircle2DBorder *)FUN_?(TypeInfo__RTG__GizmoCircle2DBorder);
            GizmoCircle2DBorder::GizmoCircle2DBorder__ctor
                      (this_04,this,pGVar19,pCVar7,(MethodInfo *)0x0);
            bVar2 = iRam_? != 0;
            (this->fields)._circleBorder = this_04;
            if (bVar2) {
              uVar3 = (uint)((ulonglong)&(this->fields)._circleBorder >> 0xc);
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
            pGVar19 = (this->fields)._._handle;
            pPVar8 = (this->fields)._polygon;
            this_05 = (GizmoPolygon2DBorder *)FUN_?(TypeInfo__RTG__GizmoPolygon2DBorder);
            GizmoPolygon2DBorder::GizmoPolygon2DBorder__ctor
                      (this_05,this,pGVar19,pPVar8,(MethodInfo *)0x0);
            iVar21 = iRam_?;
            (this->fields)._polygonBorder = this_05;
            if (iVar21 != 0) {
              uVar3 = (uint)((ulonglong)&(this->fields)._polygonBorder >> 0xc);
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
                iVar21 = iRam_?;
              } while (!bVar2);
            }
            pGVar13 = (this->fields)._controllerData;
            if (pGVar13 != (GizmoPlaneSlider2DControllerData *)0x0) {
              (pGVar13->fields).Gizmo = (this->fields)._._gizmo;
              iVar22 = 0;
              if (iVar21 != 0) {
                uVar3 = (uint)((ulonglong)&pGVar13->fields >> 0xc);
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
                  iVar22 = iRam_?;
                } while (!bVar2);
              }
              pGVar13 = (this->fields)._controllerData;
              if (pGVar13 != (GizmoPlaneSlider2DControllerData *)0x0) {
                (pGVar13->fields).Slider = this;
                iVar21 = 0;
                if (iVar22 != 0) {
                  uVar3 = (uint)((ulonglong)&(pGVar13->fields).Slider >> 0xc);
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
                    iVar21 = iRam_?;
                  } while (!bVar2);
                }
                pGVar13 = (this->fields)._controllerData;
                if (pGVar13 != (GizmoPlaneSlider2DControllerData *)0x0) {
                  (pGVar13->fields).SliderHandle = (this->fields)._._handle;
                  iVar22 = 0;
                  if (iVar21 != 0) {
                    uVar3 = (uint)((ulonglong)&(pGVar13->fields).SliderHandle >> 0xc);
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
                      iVar22 = iRam_?;
                    } while (!bVar2);
                  }
                  pGVar13 = (this->fields)._controllerData;
                  if (pGVar13 != (GizmoPlaneSlider2DControllerData *)0x0) {
                    (pGVar13->fields).QuadBorder = (this->fields)._quadBorder;
                    iVar21 = 0;
                    if (iVar22 != 0) {
                      uVar3 = (uint)((ulonglong)&(pGVar13->fields).QuadBorder >> 0xc);
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
                        iVar21 = iRam_?;
                      } while (!bVar2);
                    }
                    pGVar13 = (this->fields)._controllerData;
                    if (pGVar13 != (GizmoPlaneSlider2DControllerData *)0x0) {
                      (pGVar13->fields).Quad = (this->fields)._quad;
                      iVar22 = 0;
                      if (iVar21 != 0) {
                        uVar3 = (uint)((ulonglong)&(pGVar13->fields).Quad >> 0xc);
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
                          iVar22 = iRam_?;
                        } while (!bVar2);
                      }
                      pGVar13 = (this->fields)._controllerData;
                      if (pGVar13 != (GizmoPlaneSlider2DControllerData *)0x0) {
                        (pGVar13->fields).QuadIndex = (this->fields)._quadIndex;
                        pGVar13 = (this->fields)._controllerData;
                        if (pGVar13 != (GizmoPlaneSlider2DControllerData *)0x0) {
                          (pGVar13->fields).CircleBorder = (this->fields)._circleBorder;
                          iVar21 = 0;
                          if (iVar22 != 0) {
                            uVar3 = (uint)((ulonglong)&(pGVar13->fields).CircleBorder >> 0xc);
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
                              iVar21 = iRam_?;
                            } while (!bVar2);
                          }
                          pGVar13 = (this->fields)._controllerData;
                          if (pGVar13 != (GizmoPlaneSlider2DControllerData *)0x0) {
                            (pGVar13->fields).Circle = (this->fields)._circle;
                            iVar22 = 0;
                            if (iVar21 != 0) {
                              uVar3 = (uint)((ulonglong)&(pGVar13->fields).Circle >> 0xc);
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
                                iVar22 = iRam_?;
                              } while (!bVar2);
                            }
                            pGVar13 = (this->fields)._controllerData;
                            if (pGVar13 != (GizmoPlaneSlider2DControllerData *)0x0) {
                              (pGVar13->fields).CircleIndex = (this->fields)._circleIndex;
                              pGVar13 = (this->fields)._controllerData;
                              if (pGVar13 != (GizmoPlaneSlider2DControllerData *)0x0) {
                                (pGVar13->fields).PolygonBorder = (this->fields)._polygonBorder;
                                iVar21 = 0;
                                if (iVar22 != 0) {
                                  uVar3 = (uint)((ulonglong)&(pGVar13->fields).PolygonBorder >> 0xc
                                                 );
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
                                    iVar21 = iRam_?;
                                  } while (!bVar2);
                                }
                                pGVar13 = (this->fields)._controllerData;
                                if (pGVar13 != (GizmoPlaneSlider2DControllerData *)0x0) {
                                  (pGVar13->fields).Polygon = (this->fields)._polygon;
                                  if (iVar21 != 0) {
                                    uVar3 = (uint)((ulonglong)&(pGVar13->fields).Polygon >> 0xc);
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
                                  pGVar13 = (this->fields)._controllerData;
                                  if (pGVar13 != (GizmoPlaneSlider2DControllerData *)0x0) {
                                    (pGVar13->fields).PolygonIndex = (this->fields)._polygonIndex;
                                    pIVar17 = (this->fields)._controllers;
                                    pGVar13 = (this->fields)._controllerData;
                                    lVar16 = FUN_?(
                                                  TypeInfo__RTG__GizmoQuadPlaneSlider2DController);
                                    bVar2 = iRam_? != 0;
                                    *(GizmoPlaneSlider2DControllerData **)(lVar16 + 0x10) = pGVar13;
                                    if (bVar2) {
                                      uVar3 = (uint)(lVar16 + 0x10U >> 0xc);
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
                                    if (pIVar17 != (IGizmoPlaneSlider2DController__Array *)0x0) {
                                      lVar23 = FUN_?(lVar16,(pIVar17->klass->_0).
                                                                    element_class);
                                      if (lVar23 == 0) {
                                        uVar24 = FUN_?();
                                        FUN_?(uVar24,0);
                                        pcVar25 = (code *)swi(3);
                                        (*pcVar25)();
                                        return;
                                      }
                                      FUN_?(pIVar17,0,lVar16);
                                      pIVar17 = (this->fields)._controllers;
                                      pGVar13 = (this->fields)._controllerData;
                                      lVar16 = FUN_?(
                                                  TypeInfo__RTG__GizmoCirclePlaneSlider2DController)
                                      ;
                                      bVar2 = iRam_? != 0;
                                      *(GizmoPlaneSlider2DControllerData **)(lVar16 + 0x10) =
                                           pGVar13;
                                      if (bVar2) {
                                        uVar3 = (uint)(lVar16 + 0x10U >> 0xc);
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
                                      if (pIVar17 != (IGizmoPlaneSlider2DController__Array *)0x0) {
                                        lVar23 = FUN_?(lVar16,(pIVar17->klass->_0).
                                                                      element_class);
                                        if (lVar23 == 0) {
                                          uVar24 = FUN_?();
                                          FUN_?(uVar24,0);
                                          pcVar25 = (code *)swi(3);
                                          (*pcVar25)();
                                          return;
                                        }
                                        FUN_?(pIVar17,1,lVar16);
                                        pIVar17 = (this->fields)._controllers;
                                        pGVar13 = (this->fields)._controllerData;
                                        lVar16 = FUN_?(
                                                  TypeInfo__RTG__GizmoPolygonPlaneSlider2DController
                                                  );
                                        bVar2 = iRam_? != 0;
                                        *(GizmoPlaneSlider2DControllerData **)(lVar16 + 0x10) =
                                             pGVar13;
                                        if (bVar2) {
                                          uVar3 = (uint)(lVar16 + 0x10U >> 0xc);
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
                                        if (pIVar17 != (IGizmoPlaneSlider2DController__Array *)0x0)
                                        {
                                          lVar23 = FUN_?(lVar16,(pIVar17->klass->_0).
                                                                        element_class);
                                          if (lVar23 == 0) {
                                            uVar24 = FUN_?();
                                            FUN_?(uVar24,0);
                                            pcVar25 = (code *)swi(3);
                                            (*pcVar25)();
                                            return;
                                          }
                                          FUN_?(pIVar17,2,lVar16);
                                          pGVar9 = (this->fields)._transform;
                                          value = (GizmoEntityTransformChangedHandler *)
                                                  FUN_?(
                                                  TypeInfo__RTG__GizmoEntityTransformChangedHandler)
                                          ;
                                          mscorlib.dll::System::Action`2[Object,UnityEngine::
                                          UIElements::Experimental::StyleValues]::
                                          Action_2_Object_UnityEngine_UIElements_Experimental_StyleValues___ctor
                                                    ((
                                                  Action_2_Object_UnityEngine_UIElements_Experimental_StyleValues_
                                                  *)value,(Object *)this,
                                                  MethodInfo__RTG__GizmoPlaneSlider2D__OnTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
                                                  ,(MethodInfo *)0x0);
                                          if (pGVar9 != (GizmoTransform *)0x0) {
                                            GizmoTransform::GizmoTransform_add_Changed
                                                      (pGVar9,value,(MethodInfo *)0x0);
                                            pGVar26 = (this->fields)._._gizmo;
                                            value_00 = (GizmoPreUpdateBeginHandler *)
                                                       FUN_?(
                                                  TypeInfo__RTG__GizmoPreUpdateBeginHandler);
                                            UnityEngine.CoreModule.dll::UnityEngine::Events::
                                            UnityAction`1[System::Object]::
                                            UnityAction_1_System_Object___ctor
                                                      ((UnityAction_1_System_Object_ *)value_00,
                                                       (Object *)this,
                                                                                                              
                                                  MethodInfo__RTG__GizmoPlaneSlider2D__OnGizmoPreUpdateBegin_RTG__Gizmo_
                                                  ,(MethodInfo *)0x0);
                                            if (pGVar26 != (Gizmo *)0x0) {
                                              Gizmo::Gizmo_add_PreUpdateBegin
                                                        (pGVar26,value_00,(MethodInfo *)0x0);
                                              pGVar26 = (this->fields)._._gizmo;
                                              value_01 = (GizmoPreDragBeginAttemptHandler *)
                                                         FUN_?(
                                                  TypeInfo__RTG__GizmoPreDragBeginAttemptHandler);
                                              UnityEngine.CoreModule.dll::UnityEngine::Events::
                                              UnityAction`2[System::Object,System::Int32]::
                                              UnityAction_2_System_Object_System_Int32___ctor
                                                        ((UnityAction_2_System_Object_System_Int32_
                                                          *)value_01,(Object *)this,
                                                                                                                  
                                                  MethodInfo__RTG__GizmoPlaneSlider2D__OnGizmoAttemptHandleDragBegin_RTG__Gizmo__int_
                                                  ,(MethodInfo *)0x0);
                                              if (pGVar26 != (Gizmo *)0x0) {
                                                Gizmo::Gizmo_add_PreDragBeginAttempt
                                                          (pGVar26,value_01,(MethodInfo *)0x0);
                                                pGVar26 = (this->fields)._._gizmo;
                                                value_02 = (GizmoPreDragUpdateHandler *)
                                                           FUN_?(
                                                  TypeInfo__RTG__GizmoPreDragUpdateHandler);
                                                UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                UnityAction`2[System::Object,System::Int32]::
                                                UnityAction_2_System_Object_System_Int32___ctor
                                                          ((
                                                  UnityAction_2_System_Object_System_Int32_ *)
                                                  value_02,(Object *)this,
                                                  MethodInfo__RTG__GizmoPlaneSlider2D__OnGizmoHandleDragUpdate_RTG__Gizmo__int_
                                                  ,(MethodInfo *)0x0);
                                                if (pGVar26 != (Gizmo *)0x0) {
                                                  Gizmo::Gizmo_add_PreDragUpdate
                                                            (pGVar26,value_02,(MethodInfo *)0x0);
                                                  pGVar26 = (this->fields)._._gizmo;
                                                  value_03 = (GizmoPostEnabledHandler *)
                                                             FUN_?(
                                                  TypeInfo__RTG__GizmoPostEnabledHandler);
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`1[System::Object]::
                                                  UnityAction_1_System_Object___ctor
                                                            ((UnityAction_1_System_Object_ *)
                                                             value_03,(Object *)this,
                                                                                                                          
                                                  MethodInfo__RTG__GizmoPlaneSlider2D__OnGizmoPostEnabled_RTG__Gizmo_
                                                  ,(MethodInfo *)0x0);
                                                  if (pGVar26 != (Gizmo *)0x0) {
                                                    Gizmo::Gizmo_add_PostEnabled
                                                              (pGVar26,value_03,(MethodInfo *)0x0);
                                                    pGVar10 = (this->fields)._offsetDrag;
                                                    if (pGVar10 != (GizmoDblAxisOffsetDrag3D *)0x0)
                                                    {
                                                      pGVar9 = (this->fields)._transform;
                                                      GizmoDragSession::
                                                      GizmoDragSession_AddTargetTransform
                                                                ((GizmoDragSession *)pGVar10,pGVar9
                                                                 ,(MethodInfo *)0x0);
                                                      pGVar11 = (this->fields)._rotationDrag;
                                                      if (pGVar11 !=
                                                          (GizmoSglAxisRotationDrag3D *)0x0) {
                                                        GizmoDragSession::
                                                        GizmoDragSession_AddTargetTransform
                                                                  ((GizmoDragSession *)pGVar11,
                                                                   pGVar9,(MethodInfo *)0x0);
                                                        pGVar12 = (this->fields)._scaleDrag;
                                                        if (pGVar12 !=
                                                            (GizmoDblAxisScaleDrag3D *)0x0) {
                                                          GizmoDragSession::
                                                          GizmoDragSession_AddTargetTransform
                                                                    ((GizmoDragSession *)pGVar12,
                                                                     pGVar9,(MethodInfo *)0x0);
                                                          pGVar26 = (this->fields)._._gizmo;
                                                          if ((pGVar26 != (Gizmo *)0x0) &&
                                                             (pGVar10 = (this->fields)._offsetDrag,
                                                             pGVar10 !=
                                                             (GizmoDblAxisOffsetDrag3D *)0x0)) {
                                                            pGVar9 = (pGVar26->fields)._transform;
                                                            GizmoDragSession::
                                                            GizmoDragSession_AddTargetTransform
                                                                      ((GizmoDragSession *)pGVar10,
                                                                       pGVar9,(MethodInfo *)0x0);
                                                            pGVar11 = (this->fields)._rotationDrag;
                                                            if (pGVar11 !=
                                                                (GizmoSglAxisRotationDrag3D *)0x0) {
                                                              GizmoDragSession::
                                                              GizmoDragSession_AddTargetTransform
                                                                        ((GizmoDragSession *)pGVar11
                                                                         ,pGVar9,(MethodInfo *)0x0)
                                                              ;
                                                              pGVar12 = (this->fields)._scaleDrag;
                                                              if (pGVar12 !=
                                                                  (GizmoDblAxisScaleDrag3D *)0x0) {
                                                                GizmoDragSession::
                                                                GizmoDragSession_AddTargetTransform
                                                                          ((GizmoDragSession *)
                                                                           pGVar12,pGVar9,
                                                                           (MethodInfo *)0x0);
                                                                pGVar26 = (this->fields)._._gizmo;
                                                                if ((pGVar26 != (Gizmo *)0x0) &&
                                                                   (pGVar9 = (this->fields).
                                                                              _transform,
                                                                   pGVar9 != (GizmoTransform *)0x0)
                                                                   ) {
                                                                  GizmoTransform::
                                                                  GizmoTransform_SetParent
                                                                            (pGVar9,(pGVar26->fields
                                                                                     )._transform,
                                                                             (MethodInfo *)0x0);
                                                                  (this->fields)._dragChannel = 1;
                                                                  bVar2 = iRam_? != 0
                                                                  ;
                                                                  (this->fields).
                                                                  _selectedDragSession =
                                                                       (IGizmoDragSession *)
                                                                       (this->fields)._offsetDrag;
                                                                  if (bVar2) {
                                                                    uVar3 = (uint)((ulonglong)
                                                                                    &(this->fields).
                                                                                                                                                                          
                                                  _selectedDragSession >> 0xc);
                                                  lVar16 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8
                                                  ;
                                                  do {
                                                    uVar4 = *(ulonglong *)(lVar16 + 0xADDR);
                                                    puVar6 = (ulonglong *)(lVar16 + 0xADDR);
                                                    LOCK();
                                                    bVar2 = uVar4 == *puVar6;
                                                    if (bVar2) {
                                                      *puVar6 = uVar4 | 1L << (uVar3 & 0x3f);
                                                    }
                                                    UNLOCK();
                                                  } while (!bVar2);
                                                  }
                                                  pGVar19 = (this->fields)._._handle;
                                                  if (pGVar19 != (GizmoHandle *)0x0) {
                                                    bVar2 = iRam_? != 0;
                                                    (pGVar19->fields)._DragSession_k__BackingField =
                                                         (this->fields)._selectedDragSession;
                                                    if (bVar2) {
                                                      uVar3 = (uint)((ulonglong)
                                                                      &(pGVar19->fields).
                                                                       _DragSession_k__BackingField
                                                                     >> 0xc);
                                                      lVar16 = (ulonglong)((uVar3 & 0x1fffff) >> 6)
                                                               * 8;
                                                      do {
                                                        uVar4 = *(ulonglong *)
                                                                  (lVar16 + 0xADDR);
                                                        puVar6 = (ulonglong *)(lVar16 + 0xADDR)
                                                        ;
                                                        LOCK();
                                                        bVar2 = uVar4 == *puVar6;
                                                        if (bVar2) {
                                                          *puVar6 = uVar4 | 1L << (uVar3 & 0x3f);
                                                        }
                                                        UNLOCK();
                                                      } while (!bVar2);
                                                    }
                                                    return;
                                                  }
                                                  FUN_?();
                                                  pcVar25 = (code *)swi(3);
                                                  (*pcVar25)();
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
    pcVar25 = (code *)swi(3);
    (*pcVar25)();
    return;
  }
  uVar24 = func_?(&TypeInfo__System__ArgumentNullException);
  this_06 = (ArgumentNullException *)func_?(uVar24);
  paramName = (String *)func_?(&StringLiteral_enumType);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_06,paramName,(MethodInfo *)0x0);
  uVar24 = func_?(&MethodInfo__System__Enum__GetValues_System__Type_);
  FUN_?(this_06,uVar24);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* Boolean get_IsScaling() */

bool Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_IsScaling
               (GizmoPlaneSlider2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scaleDrag;
  if (pGVar1 != (GizmoDblAxisScaleDrag3D *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    bVar2 = (*(pGVar1->klass->vtable).get_IsActive_1.methodPtr)
                      (pGVar1,(pGVar1->klass->vtable).get_IsActive_1.method);
    return bVar2;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* GizmoPlaneSlider2DLookAndFeel get_LookAndFeel() */

GizmoPlaneSlider2DLookAndFeel *
Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_LookAndFeel
          (GizmoPlaneSlider2D *this,MethodInfo *method)

{
  if ((this->fields)._sharedLookAndFeel != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    return (this->fields)._sharedLookAndFeel;
  }
  return (this->fields)._lookAndFeel;
}


/* Vector3 get_OffsetDragOrigin() */

Vector3 * Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_OffsetDragOrigin
                    (Vector3 *__return_storage_ptr__,GizmoPlaneSlider2D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._offsetDragOrigin.z;
  fVar2 = (this->fields)._offsetDragOrigin.y;
  __return_storage_ptr__->x = (this->fields)._offsetDragOrigin.x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar1;
  return __return_storage_ptr__;
}


/* Vector2 get_PolyCenter() */

Vector2 Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_PolyCenter
                  (GizmoPlaneSlider2D *this,MethodInfo *method)

{
  pPVar1 = (this->fields)._polygon;
  if (pPVar1 != (PolygonShape2D *)0x0) {
    pfVar2 = (float *)(*(pPVar1->klass->vtable).GetEncapsulatingRect.methodPtr)
                                (auStack_3,pPVar1,
                                 (pPVar1->klass->vtable).GetEncapsulatingRect.method);
    VVar4.y = pfVar2[3] * _UNK_? + pfVar2[1];
    VVar4.x = pfVar2[2] * _UNK_? + *pfVar2;
    return VVar4;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  VVar4 = (Vector2)(*pcVar5)();
  return VVar4;
}


/* Vector2 get_Position() */

Vector2 Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_Position
                  (GizmoPlaneSlider2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._transform;
  if (pGVar1 != (GizmoTransform *)0x0) {
    return (pGVar1->fields)._position2D;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  VVar3 = (Vector2)(*pcVar2)();
  return VVar3;
}


/* Single get_RelativeDragScaleRight() */

float Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_RelativeDragScaleRight
                (GizmoPlaneSlider2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scaleDrag;
  if (pGVar1 != (GizmoDblAxisScaleDrag3D *)0x0) {
    return (pGVar1->fields)._relativeScale0;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_RelativeDragScaleUp() */

float Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_RelativeDragScaleUp
                (GizmoPlaneSlider2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scaleDrag;
  if (pGVar1 != (GizmoDblAxisScaleDrag3D *)0x0) {
    return (pGVar1->fields)._relativeScale1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Vector2 get_Right() */

Vector2 Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_Right
                  (GizmoPlaneSlider2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._transform;
  if ((pGVar1 != (GizmoTransform *)0x0) &&
     (pVVar2 = (pGVar1->fields)._axes2D, pVVar2 != (Vector2__Array *)0x0)) {
    if ((int)pVVar2->max_length != 0) {
      return pVVar2->vector[0];
    }
    FUN_?();
    pcVar3 = (code *)swi(3);
    VVar4 = (Vector2)(*pcVar3)();
    return VVar4;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  VVar4 = (Vector2)(*pcVar3)();
  return VVar4;
}


/* Quaternion get_Rotation() */

Quaternion *
Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_Rotation
          (Quaternion *__return_storage_ptr__,GizmoPlaneSlider2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._transform;
  if (pGVar1 != (GizmoTransform *)0x0) {
    fVar2 = (pGVar1->fields)._rotation2D.y;
    fVar3 = (pGVar1->fields)._rotation2D.z;
    fVar4 = (pGVar1->fields)._rotation2D.w;
    __return_storage_ptr__->x = (pGVar1->fields)._rotation2D.x;
    __return_storage_ptr__->y = fVar2;
    __return_storage_ptr__->z = fVar3;
    __return_storage_ptr__->w = fVar4;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pQVar6 = (Quaternion *)(*pcVar5)();
  return pQVar6;
}


/* Single get_RotationDegrees() */

float Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_RotationDegrees
                (GizmoPlaneSlider2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._transform;
  if (pGVar1 != (GizmoTransform *)0x0) {
    return (pGVar1->fields)._rotation2DDegrees;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Vector3 get_ScaleDragOrigin() */

Vector3 * Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_ScaleDragOrigin
                    (Vector3 *__return_storage_ptr__,GizmoPlaneSlider2D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._scaleDragOrigin.z;
  fVar2 = (this->fields)._scaleDragOrigin.y;
  __return_storage_ptr__->x = (this->fields)._scaleDragOrigin.x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar1;
  return __return_storage_ptr__;
}


/* GizmoPlaneSlider2DSettings get_Settings() */

GizmoPlaneSlider2DSettings *
Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_Settings
          (GizmoPlaneSlider2D *this,MethodInfo *method)

{
  if ((this->fields)._sharedSettings != (GizmoPlaneSlider2DSettings *)0x0) {
    return (this->fields)._sharedSettings;
  }
  return (this->fields)._settings;
}


/* Single get_TotalDragScaleRight() */

float Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_TotalDragScaleRight
                (GizmoPlaneSlider2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scaleDrag;
  if (pGVar1 != (GizmoDblAxisScaleDrag3D *)0x0) {
    return (pGVar1->fields)._totalScale0;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_TotalDragScaleUp() */

float Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_TotalDragScaleUp
                (GizmoPlaneSlider2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scaleDrag;
  if (pGVar1 != (GizmoDblAxisScaleDrag3D *)0x0) {
    return (pGVar1->fields)._totalScale1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Vector2 get_Up() */

Vector2 Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_Up
                  (GizmoPlaneSlider2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._transform;
  if ((pGVar1 != (GizmoTransform *)0x0) &&
     (pVVar2 = (pGVar1->fields)._axes2D, pVVar2 != (Vector2__Array *)0x0)) {
    if (1 < (uint)pVVar2->max_length) {
      return pVVar2->vector[1];
    }
    FUN_?();
    pcVar3 = (code *)swi(3);
    VVar4 = (Vector2)(*pcVar3)();
    return VVar4;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  VVar4 = (Vector2)(*pcVar3)();
  return VVar4;
}


/* Void set_OffsetDragOrigin(Vector3) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_set_OffsetDragOrigin
               (GizmoPlaneSlider2D *this,Vector3 *value,MethodInfo *method)

{
  fVar1 = value->y;
  fVar2 = value->z;
  (this->fields)._offsetDragOrigin.x = value->x;
  (this->fields)._offsetDragOrigin.y = fVar1;
  (this->fields)._offsetDragOrigin.z = fVar2;
  return;
}


/* Void set_Position(Vector2) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_set_Position
               (GizmoPlaneSlider2D *this,Vector2 value,MethodInfo *method)

{
  this_00 = (this->fields)._transform;
  if (this_00 == (GizmoTransform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((this_00->fields)._firingChanged2DEvent == 0) {
    fStackX_8 = value.x;
    fVar2 = (this_00->fields)._position2D.x - fStackX_8;
    fStackX_c = value.y;
    fVar3 = (this_00->fields)._position2D.y - fStackX_c;
    if (_UNK_? <= fVar3 * fVar3 + fVar2 * fVar2) {
      (this_00->fields)._position2D.x = fStackX_8;
      (this_00->fields)._position2D.y = fStackX_c;
      if ((this_00->fields)._parent == (GizmoTransform *)0x0) {
        fVar2 = (this_00->fields)._position2D.x;
        fVar3 = (this_00->fields)._position2D.y;
      }
      else {
        pGVar4 = (this_00->fields)._parent;
        fStack_5 = (pGVar4->fields)._rotation2D.x;
        fStack_6 = (pGVar4->fields)._rotation2D.y;
        fStack_7 = (pGVar4->fields)._rotation2D.z;
        fStack_8 = (pGVar4->fields)._rotation2D.w;
        pcVar1 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
          uVar9 = func_?(&UNK_?);
          FUN_?(uVar9,0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pcRam_? = pcVar1;
        (*pcRam_?)(&fStack_5);
        pGVar4 = (this_00->fields)._parent;
        if (pGVar4 == (GizmoTransform *)0x0) {
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        fVar3 = (this_00->fields)._position2D.x - (pGVar4->fields)._position2D.x;
        fVar10 = (this_00->fields)._position2D.y - (pGVar4->fields)._position2D.y;
        fVar2 = (_UNK_? - 0.0) * fVar3 + fVar10 * 0.0 + 0.0;
        fVar3 = (_UNK_? - 0.0) * fVar10 + fVar3 * 0.0 + 0.0;
      }
      (this_00->fields)._localPosition2D.x = fVar2;
      (this_00->fields)._localPosition2D.y = fVar3;
      GizmoTransform::GizmoTransform_UpdateChildTransforms2D(this_00,(MethodInfo *)0x0);
      pGVar11 = (this_00->fields).Changed;
      (this_00->fields)._firingChanged2DEvent = 1;
      if (pGVar11 != (GizmoEntityTransformChangedHandler *)0x0) {
        (*(pGVar11->fields)._._.invoke_impl)
                  ((pGVar11->fields)._._.method_code,this_00,0x100000000,(pGVar11->fields)._._.method)
        ;
      }
      (this_00->fields)._firingChanged2DEvent = 0;
      return;
    }
  }
  return;
}


/* Void set_RotationDegrees(Single) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_set_RotationDegrees
               (GizmoPlaneSlider2D *this,float value,MethodInfo *method)

{
  this_00 = (this->fields)._transform;
  if (this_00 == (GizmoTransform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((this_00->fields)._firingChanged2DEvent == 0) &&
     ((this_00->fields)._rotation2DDegrees != value)) {
    fVar2 = (float)FUN_?(value,_UNK_?,0);
    bVar3 = cRam_? == '\0';
    (this_00->fields)._rotation2DDegrees = fVar2;
    if (bVar3) {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_5._0_4_ = (pVVar4->forwardVector).x;
    uStack_5._4_4_ = (pVVar4->forwardVector).y;
    fStack_6 = (pVVar4->forwardVector).z;
    uStack_7 = 0;
    uStack_8 = 0;
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(fVar2,&uStack_5,&uStack_7);
    uVar9 = uStack_7;
    fVar10 = uStack_7._4_4_;
    fVar2 = (float)uStack_7;
    fVar11 = (float)uStack_8;
    fStack_12 = uStack_8._4_4_;
    fVar13 = uStack_7._4_4_ * uStack_7._4_4_ + (float)uStack_7 * (float)uStack_7 +
            (float)uStack_8 * (float)uStack_8 + uStack_8._4_4_ * uStack_8._4_4_;
    if (fVar13 < 0.0) {
      fVar13 = (float)FUN_?(fVar13);
    }
    else {
      fVar13 = SQRT(fVar13);
    }
    if (fVar13 < _UNK_?) {
      uStack_5 = uVar9;
      fStack_6 = fVar11;
    }
    else {
      fVar13 = _UNK_? / fVar13;
      fStack_6 = fVar13 * fVar11;
      fStack_12 = fVar13 * fStack_12;
      uStack_5 = CONCAT44(fVar13 * fVar10,fVar13 * fVar2);
    }
    (this_00->fields)._rotation2D.x = (float)(undefined4)uStack_5;
    (this_00->fields)._rotation2D.y = (float)uStack_5._4_4_;
    (this_00->fields)._rotation2D.z = fStack_6;
    (this_00->fields)._rotation2D.w = fStack_12;
    if ((this_00->fields)._parent == (GizmoTransform *)0x0) {
      fVar2 = (this_00->fields)._rotation2D.y;
      fVar10 = (this_00->fields)._rotation2D.z;
      fVar11 = (this_00->fields)._rotation2D.w;
      (this_00->fields)._localRotation2D.x = (this_00->fields)._rotation2D.x;
      (this_00->fields)._localRotation2D.y = fVar2;
      (this_00->fields)._localRotation2D.z = fVar10;
      (this_00->fields)._localRotation2D.w = fVar11;
    }
    else {
      pGVar14 = (this_00->fields)._parent;
      aQStack_15[0].x = (pGVar14->fields)._rotation2D.x;
      aQStack_15[0].y = (pGVar14->fields)._rotation2D.y;
      aQStack_15[0].z = (pGVar14->fields)._rotation2D.z;
      aQStack_15[0].w = (pGVar14->fields)._rotation2D.w;
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      uStack_7 = CONCAT44(unaff_XMM10_Db,unaff_XMM10_Da);
      uStack_8 = CONCAT44(unaff_XMM10_Dd,unaff_XMM10_Dc);
      uStack_5 = CONCAT44(unaff_XMM11_Db,unaff_XMM11_Da);
      fStack_6 = unaff_XMM11_Dc;
      fStack_12 = unaff_XMM11_Dd;
      (*pcRam_?)(aQStack_15);
      fVar2 = (this_00->fields)._rotation2D.x;
      fVar10 = (this_00->fields)._rotation2D.y;
      fVar11 = (this_00->fields)._rotation2D.z;
      fVar13 = (this_00->fields)._rotation2D.w;
      fVar16 = (fVar13 * 0.0 + fVar2 * 0.0 + fVar11 * 0.0) - fVar10 * 0.0;
      fVar17 = (fVar10 * 0.0 + fVar13 * 0.0 + fVar2 * 0.0) - fVar11 * 0.0;
      fVar18 = ((fVar13 * 0.0 - fVar2 * 0.0) - fVar10 * 0.0) - fVar11 * 0.0;
      fVar10 = (fVar11 * 0.0 + fVar13 * 0.0 + fVar10 * 0.0) - fVar2 * 0.0;
      fVar2 = fVar17 * fVar17 + fVar16 * fVar16 + fVar10 * fVar10 + fVar18 * fVar18;
      if (fVar2 < 0.0) {
        fVar2 = (float)FUN_?(fVar2);
      }
      else {
        fVar2 = SQRT(fVar2);
      }
      if (_UNK_? <= fVar2) {
        fVar2 = _UNK_? / fVar2;
        fVar16 = fVar16 * fVar2;
        fVar17 = fVar17 * fVar2;
        fVar10 = fVar10 * fVar2;
        fVar18 = fVar18 * fVar2;
      }
      (this_00->fields)._localRotation2D.x = fVar16;
      (this_00->fields)._localRotation2D.y = fVar17;
      (this_00->fields)._localRotation2D.z = fVar10;
      (this_00->fields)._localRotation2D.w = fVar18;
    }
    aQStack_15[0].x = (this_00->fields)._localRotation2D.x;
    aQStack_15[0].y = (this_00->fields)._localRotation2D.y;
    aQStack_15[0].z = (this_00->fields)._localRotation2D.z;
    aQStack_15[0].w = (this_00->fields)._localRotation2D.w;
    fVar2 = QuaternionEx::QuaternionEx_ConvertTo2DRotation(aQStack_15,(MethodInfo *)0x0);
    (this_00->fields)._localRotation2DDegrees = fVar2;
    GizmoTransform::GizmoTransform_Update2DAxes(this_00,(MethodInfo *)0x0);
    GizmoTransform::GizmoTransform_UpdateChildTransforms2D(this_00,(MethodInfo *)0x0);
    pGVar19 = (this_00->fields).Changed;
    (this_00->fields)._firingChanged2DEvent = 1;
    if (pGVar19 != (GizmoEntityTransformChangedHandler *)0x0) {
      (*(pGVar19->fields)._._.invoke_impl)
                ((pGVar19->fields)._._.method_code,this_00,0x100000000,(pGVar19->fields)._._.method);
    }
    (this_00->fields)._firingChanged2DEvent = 0;
    return;
  }
  return;
}


/* Void set_ScaleDragAxisIndexRight(Int32) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_set_ScaleDragAxisIndexRight
               (GizmoPlaneSlider2D *this,int32_t value,MethodInfo *method)

{
  if (value < 0) {
    (this->fields)._scaleDragAxisIndexRight = 0;
    return;
  }
  if (2 < value) {
    (this->fields)._scaleDragAxisIndexRight = 2;
    return;
  }
  (this->fields)._scaleDragAxisIndexRight = value;
  return;
}


/* Void set_ScaleDragAxisIndexUp(Int32) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_set_ScaleDragAxisIndexUp
               (GizmoPlaneSlider2D *this,int32_t value,MethodInfo *method)

{
  if (value < 0) {
    (this->fields)._scaleDragAxisIndexUp = 0;
    return;
  }
  if (2 < value) {
    (this->fields)._scaleDragAxisIndexUp = 2;
    return;
  }
  (this->fields)._scaleDragAxisIndexUp = value;
  return;
}


/* Void set_ScaleDragOrigin(Vector3) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2D::GizmoPlaneSlider2D_set_ScaleDragOrigin
               (GizmoPlaneSlider2D *this,Vector3 *value,MethodInfo *method)

{
  fVar1 = value->y;
  fVar2 = value->z;
  (this->fields)._scaleDragOrigin.x = value->x;
  (this->fields)._scaleDragOrigin.y = fVar1;
  (this->fields)._scaleDragOrigin.z = fVar2;
  return;
}


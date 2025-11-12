
/* Void AddTargetTransform(GizmoTransform) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_AddTargetTransform
               (GizmoLineSlider2D *this,GizmoTransform *transform,MethodInfo *method)

{
  this_00 = (this->fields)._offsetDrag;
  if (this_00 != (GizmoSglAxisOffsetDrag3D *)0x0) {
    GizmoDragSession::GizmoDragSession_AddTargetTransform
              ((GizmoDragSession *)this_00,transform,(MethodInfo *)0x0);
    this_01 = (this->fields)._rotationDrag;
    if (this_01 != (GizmoSglAxisRotationDrag3D *)0x0) {
      GizmoDragSession::GizmoDragSession_AddTargetTransform
                ((GizmoDragSession *)this_01,transform,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._scaleDrag;
      if (pGVar1 != (GizmoSglAxisScaleDrag3D *)0x0) {
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

void Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_AddTargetTransform_1
               (GizmoLineSlider2D *this,GizmoTransform *transform,GizmoDragChannel__Enum dragChannel
               ,MethodInfo *method)

{
  if (dragChannel == GizmoDragChannel__Enum_Offset) {
    pGVar1 = (GizmoSglAxisRotationDrag3D *)(this->fields)._offsetDrag;
  }
  else if (dragChannel == GizmoDragChannel__Enum_Rotation) {
    pGVar1 = (this->fields)._rotationDrag;
  }
  else {
    if (dragChannel != GizmoDragChannel__Enum_Scale) {
      return;
    }
    pGVar1 = (GizmoSglAxisRotationDrag3D *)(this->fields)._scaleDrag;
  }
  if (pGVar1 != (GizmoSglAxisRotationDrag3D *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__Add_RTG__GizmoTransform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    cVar2 = (*(((GizmoSglAxisScaleDrag3D__Class *)pGVar1->klass)->vtable).get_IsActive_1.methodPtr)
                      (pGVar1,(((GizmoSglAxisScaleDrag3D__Class *)pGVar1->klass)->vtable).
                              get_IsActive_1.method);
    if (cVar2 == '\0') {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__Contains_RTG__GizmoTransform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pLVar3 = (((GizmoPlaneDrag3D__Fields *)&(pGVar1->fields)._)->_)._targetTransforms;
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
        pLVar3 = (((GizmoPlaneDrag3D__Fields *)&(pGVar1->fields)._)->_)._targetTransforms;
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


/* Single GetRealBoxThickness() */

float Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_GetRealBoxThickness
                (GizmoLineSlider2D *this,MethodInfo *method)

{
  lVar1 = 0xf0;
  if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider2DLookAndFeel *)0x0) {
    lVar1 = 0xe8;
  }
  lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
  if (lVar1 != 0) {
    uVar2 = 0xf0;
    if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider2DLookAndFeel *)0x0) {
      uVar2 = 0xe8;
    }
    return *(float *)(*(longlong *)((longlong)&this->klass + (ulonglong)uVar2) + 0x1c) *
           *(float *)(lVar1 + 0x20);
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  fVar4 = (float)(*pcVar3)();
  return fVar4;
}


/* Vector2 GetRealDirection() */

Vector2 Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_GetRealDirection
                  (GizmoLineSlider2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scaleDrag;
  if (pGVar1 != (GizmoSglAxisScaleDrag3D *)0x0) {
    cVar2 = (*(pGVar1->klass->vtable).get_IsActive_1.methodPtr)();
    fVar3 = _UNK_?;
    if (cVar2 != '\0') {
      pGVar1 = (this->fields)._scaleDrag;
      if (pGVar1 == (GizmoSglAxisScaleDrag3D *)0x0) goto code_?;
      if ((pGVar1->fields)._totalScale < 0.0) {
        fVar3 = _UNK_?;
      }
    }
    this_00 = (this->fields)._directionAxisMap;
    if (this_00 != (GizmoTransformAxisMap2D *)0x0) {
      VVar4 = GizmoTransformAxisMap2D::GizmoTransformAxisMap2D_get_Axis(this_00,(MethodInfo *)0x0);
      fStackX_8 = VVar4.x;
      fStackX_c = VVar4.y;
      VVar4.y = fStackX_c * fVar3;
      VVar4.x = fStackX_8 * fVar3;
      return VVar4;
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  VVar4 = (Vector2)(*pcVar5)();
  return VVar4;
}


/* Vector2 GetRealEndPosition() */

Vector2 Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_GetRealEndPosition
                  (GizmoLineSlider2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._transform;
  if (pGVar1 != (GizmoTransform *)0x0) {
    this_00 = (this->fields)._directionAxisMap;
    fVar2 = (pGVar1->fields)._position2D.x;
    fVar3 = (pGVar1->fields)._position2D.y;
    if (this_00 != (GizmoTransformAxisMap2D *)0x0) {
      VVar4 = GizmoTransformAxisMap2D::GizmoTransformAxisMap2D_get_Axis(this_00,(MethodInfo *)0x0);
      fVar5 = GizmoLineSlider2D_GetRealLength(this,(MethodInfo *)0x0);
      fStackX_8 = VVar4.x;
      fStackX_c = VVar4.y;
      VVar4.y = fStackX_c * fVar5 + fVar3;
      VVar4.x = fStackX_8 * fVar5 + fVar2;
      return VVar4;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  VVar4 = (Vector2)(*pcVar6)();
  return VVar4;
}


/* Single GetRealLength() */

float Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_GetRealLength
                (GizmoLineSlider2D *this,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pGVar2 = (this->fields)._scaleDrag;
  if (pGVar2 != (GizmoSglAxisScaleDrag3D *)0x0) {
    cVar3 = (*(pGVar2->klass->vtable).get_IsActive_1.methodPtr)();
    if (cVar3 == '\0') {
      lVar4 = 0xf0;
      if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider2DLookAndFeel *)0x0) {
        lVar4 = 0xe8;
      }
      lVar4 = *(longlong *)((longlong)&this->klass + lVar4);
      if (lVar4 != 0) {
        bVar5 = (this->fields)._sharedLookAndFeel == (GizmoLineSlider2DLookAndFeel *)0x0;
code_?:
        lVar6 = 0xf0;
        if (bVar5) {
          lVar6 = 0xe8;
        }
        return *(float *)(*(longlong *)((longlong)&this->klass + lVar6) + 0x1c) *
               *(float *)(lVar4 + 0x18) * fVar1;
      }
    }
    else {
      pGVar2 = (this->fields)._scaleDrag;
      if (pGVar2 != (GizmoSglAxisScaleDrag3D *)0x0) {
        fVar7 = (pGVar2->fields)._totalScale;
        uVar8 = (this->fields)._scaleAxis.x;
        uVar9 = (this->fields)._scaleAxis.y;
        uVar10._0_4_ = (this->fields)._scaleDragOrigin.x;
        uVar10._4_4_ = (this->fields)._scaleDragOrigin.y;
        fVar11 = (this->fields)._scaleDragOrigin.z;
        this_00 = (this->fields)._._gizmo;
        fVar12 = (this->fields)._scaleAxis.z;
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
          lVar4 = 0xf0;
          if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider2DLookAndFeel *)0x0) {
            lVar4 = 0xe8;
          }
          lVar6 = *(longlong *)((longlong)&this->klass + lVar4);
          if (lVar6 != 0) {
            uVar16 = 0xf0;
            if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider2DLookAndFeel *)0x0) {
              uVar16 = 0xe8;
            }
            pGVar2 = (this->fields)._scaleDrag;
            if (pGVar2 != (GizmoSglAxisScaleDrag3D *)0x0) {
              if ((pGVar2->fields)._totalScale < 0.0) {
                fVar1 = _UNK_?;
              }
              lVar4 = 0xf0;
              bVar5 = (this->fields)._sharedLookAndFeel == (GizmoLineSlider2DLookAndFeel *)0x0;
              if (bVar5) {
                lVar4 = 0xe8;
              }
              lVar4 = *(longlong *)((longlong)&this->klass + lVar4);
              fVar1 = (fVar7 / (*(float *)(*(longlong *)
                                              ((longlong)&this->klass + (ulonglong)uVar16) + 0x1c) *
                                 *(float *)(lVar6 + 0x18))) * fVar1;
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


/* Void MapDirection(Int32, AxisSign) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_MapDirection
               (GizmoLineSlider2D *this,int32_t axisIndex,AxisSign__Enum axisSign,MethodInfo *method
               )

{
  bVar1 = GizmoLineSlider3D::GizmoLineSlider3D_get_IsDragged
                    ((GizmoLineSlider3D *)this,(MethodInfo *)0x0);
  if ((bVar1 == 0) && (axisIndex < 2)) {
    pGVar2 = (this->fields)._directionAxisMap;
    pGVar3 = (this->fields)._transform;
    if (pGVar2 == (GizmoTransformAxisMap2D *)0x0) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__RTG__AxisDescriptor);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pGVar3 != (GizmoTransform *)0x0) {
      pAVar5 = (AxisDescriptor *)FUN_?(TypeInfo__RTG__AxisDescriptor);
      (pAVar5->fields)._sign = axisSign;
      (pAVar5->fields)._index = axisIndex;
      (pGVar2->fields)._mappedAxisDesc = pAVar5;
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&(pGVar2->fields)._mappedAxisDesc >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      iVar11 = iRam_?;
      (pGVar2->fields)._transform = pGVar3;
      if (iVar11 != 0) {
        uVar6 = (uint)((ulonglong)&(pGVar2->fields)._transform >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
    }
  }
  return;
}


/* Void OnGizmoAttemptHandleDragBegin(Gizmo, Int32) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_OnGizmoAttemptHandleDragBegin
               (GizmoLineSlider2D *this,Gizmo *gizmo,int32_t handleId,MethodInfo *method)

{
  pGVar1 = (this->fields)._._handle;
  if (pGVar1 != (GizmoHandle *)0x0) {
    if (handleId != (pGVar1->fields)._id) {
      pGVar2 = (this->fields)._cap2D;
      if ((pGVar2 == (GizmoCap2D *)0x0) ||
         (pGVar1 = (pGVar2->fields)._._handle, pGVar1 == (GizmoHandle *)0x0))
      goto code_?;
      if (handleId != (pGVar1->fields)._id) {
        return;
      }
    }
    if ((this->fields)._dragChannel == 1) {
      pGVar3 = (this->fields)._transform;
      if (pGVar3 != (GizmoTransform *)0x0) {
        VVar4 = (pGVar3->fields)._position2D;
        VVar5 = GizmoLineSlider2D_GetRealEndPosition(this,(MethodInfo *)0x0);
        pGVar6 = (this->fields)._._gizmo;
        VVar7.x = (this->fields)._offsetDragOrigin.x;
        VVar7.y = (this->fields)._offsetDragOrigin.y;
        fVar8 = (this->fields)._offsetDragOrigin.z;
        if (pGVar6 != (Gizmo *)0x0) {
          pCVar9 = Gizmo::Gizmo_get_FocusCamera(pGVar6,(MethodInfo *)0x0);
          VStack_10._0_8_ = VVar7;
          VStack_10.z = fVar8;
          pVVar11 = Vector2Ex::Vector2Ex_ConvertDirTo3D
                              (aVStack_12,VVar4,VVar5,&VStack_10,pCVar9,(MethodInfo *)0x0);
          VStack_13.x = pVVar11->x;
          VStack_13.y = pVVar11->y;
          fVar8 = pVVar11->z;
          VStack_10._0_8_ = VStack_13._0_8_;
          VStack_10.z = fVar8;
          fVar14 = (float)FUN_?((Vector2 *)&VStack_10);
          if (_UNK_? < fVar14) {
            fVar15 = VStack_13.x / fVar14;
            fVar16 = VStack_13.y / fVar14;
            fVar8 = fVar8 / fVar14;
          }
          else {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pVVar17 = TypeInfo__UnityEngine__Vector3->static_fields;
            fVar15 = (pVVar17->zeroVector).x;
            fVar16 = (pVVar17->zeroVector).y;
            fVar8 = (pVVar17->zeroVector).z;
          }
          VStack_13.y = fVar16;
          VStack_13.x = fVar15;
          uVar18._0_4_ = (this->fields)._offsetDragOrigin.x;
          uVar18._4_4_ = (this->fields)._offsetDragOrigin.y;
          lVar19 = 0xe0;
          if ((this->fields)._sharedSettings == (GizmoLineSlider2DSettings *)0x0) {
            lVar19 = 0xd8;
          }
          lVar19 = *(longlong *)((longlong)&this->klass + lVar19);
          if (lVar19 != 0) {
            pGVar20 = (this->fields)._offsetDrag;
            fVar14 = *(float *)(lVar19 + 0x18);
            if (pGVar20 != (GizmoSglAxisOffsetDrag3D *)0x0) {
              VStack_21 = (Vector2)uVar18;
              fStack_22 = (this->fields)._offsetDragOrigin.z;
              fStack_23 = fVar15;
              cVar24 = (*(pGVar20->klass->vtable).get_IsActive_1.methodPtr)
                                 (pGVar20,(pGVar20->klass->vtable).get_IsActive_1.method);
              if (cVar24 != '\0') {
                return;
              }
              (pGVar20->fields)._workData.DragOrigin.x = VStack_21.x;
              (pGVar20->fields)._workData.DragOrigin.y = VStack_21.y;
              *(ulonglong *)&(pGVar20->fields)._workData.DragOrigin.z =
                   CONCAT44(fStack_23,fStack_22);
              (pGVar20->fields)._workData.Axis.y = VStack_13.y;
              (pGVar20->fields)._workData.Axis.z = fVar8;
              (pGVar20->fields)._workData.SnapStep = fVar14;
              return;
            }
          }
        }
      }
    }
    else if ((this->fields)._dragChannel == 2) {
      pGVar6 = (this->fields)._._gizmo;
      fStack_23 = 0.0;
      fStack_25 = 0.0;
      fStack_26 = 0.0;
      if (((pGVar6 != (Gizmo *)0x0) &&
          (pCVar9 = Gizmo::Gizmo_get_FocusCamera(pGVar6,(MethodInfo *)0x0),
          pCVar9 != (Camera *)0x0)) &&
         (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pCVar9,(MethodInfo *)0x0), this_02 != (Transform *)0x0)
         ) {
        pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                            (&VStack_10,this_02,(MethodInfo *)0x0);
        uVar27 = pVVar11->x;
        uVar28 = pVVar11->y;
        fStack_26 = pVVar11->z;
        lVar19 = 0xe0;
        if ((this->fields)._sharedSettings == (GizmoLineSlider2DSettings *)0x0) {
          lVar19 = 0xd8;
        }
        lVar19 = *(longlong *)((longlong)&this->klass + lVar19);
        fStack_23 = (float)uVar27;
        fStack_25 = (float)uVar28;
        if (lVar19 != 0) {
          iStack_29 = *(int32_t *)(lVar19 + 0x20);
          uVar30 = 0xe0;
          if ((this->fields)._sharedSettings == (GizmoLineSlider2DSettings *)0x0) {
            uVar30 = 0xd8;
          }
          lVar19 = *(longlong *)((longlong)&this->klass + (ulonglong)uVar30);
          if (lVar19 != 0) {
            pGVar6 = (this->fields)._._gizmo;
            fStack_31 = *(float *)(lVar19 + 0x1c);
            if (pGVar6 != (Gizmo *)0x0) {
              pCVar9 = Gizmo::Gizmo_get_FocusCamera(pGVar6,(MethodInfo *)0x0);
              pGVar3 = (this->fields)._transform;
              if (pGVar3 != (GizmoTransform *)0x0) {
                pGVar6 = (this->fields)._._gizmo;
                VVar7 = (pGVar3->fields)._position2D;
                if (((pGVar6 != (Gizmo *)0x0) &&
                    (this_03 = Gizmo::Gizmo_get_FocusCamera(pGVar6,(MethodInfo *)0x0),
                    this_03 != (Camera *)0x0)) &&
                   (fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                             Camera_get_nearClipPlane(this_03,(MethodInfo *)0x0),
                   pCVar9 != (Camera *)0x0)) {
                  VStack_10._0_8_ = VVar7;
                  VStack_10.z = fVar8;
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  VStack_13.x = 0.0;
                  VStack_13.y = 0.0;
                  VStack_13.z = 0.0;
                  pvVar32 = (pCVar9->fields)._._._.m_CachedPtr;
                  if (pvVar32 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar9,(MethodInfo *)0x0);
                    pcVar33 = (code *)swi(3);
                    (*pcVar33)();
                    return;
                  }
                  pcVar33 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar33 = (code *)FUN_?(&UNK_?), pcVar33 == (code *)0x0)) {
                    uVar18 = func_?(&UNK_?);
                    FUN_?(uVar18,0);
                    pcVar33 = (code *)swi(3);
                    (*pcVar33)();
                    return;
                  }
                  pcRam_? = pcVar33;
                  (*pcRam_?)(pvVar32,(Vector2 *)&VStack_10,2,(Vector2 *)&VStack_13);
                  this_00 = (this->fields)._rotationArc;
                  fStack_22 = VStack_13.z;
                  pGVar3 = (this->fields)._transform;
                  VStack_21.x = VStack_13.x;
                  VStack_21.y = VStack_13.y;
                  if (pGVar3 != (GizmoTransform *)0x0) {
                    VVar7 = (pGVar3->fields)._position2D;
                    VVar4 = GizmoLineSlider2D_GetRealEndPosition(this,(MethodInfo *)0x0);
                    fVar8 = GizmoLineSlider2D_GetRealLength(this,(MethodInfo *)0x0);
                    if (this_00 != (GizmoRotationArc2D *)0x0) {
                      GizmoRotationArc2D::GizmoRotationArc2D_SetArcData
                                (this_00,VVar7,VVar4,fVar8,(MethodInfo *)0x0);
                      this_01 = (this->fields)._rotationDrag;
                      if (this_01 != (GizmoSglAxisRotationDrag3D *)0x0) {
                        GStack_34.RotationPlanePos.x = VStack_21.x;
                        GStack_34.RotationPlanePos.y = VStack_21.y;
                        GStack_34.RotationPlanePos.z = fStack_22;
                        GStack_34.Axis.x = fStack_23;
                        GStack_34.Axis.y = fStack_25;
                        GStack_34.Axis.z = fStack_26;
                        GStack_34.SnapMode = iStack_29;
                        GStack_34.SnapStep = fStack_31;
                        GizmoSglAxisRotationDrag3D::GizmoSglAxisRotationDrag3D_SetWorkData
                                  (this_01,&GStack_34,(MethodInfo *)0x0);
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
    else {
      if ((this->fields)._dragChannel != 3) {
        return;
      }
      pGVar3 = (this->fields)._transform;
      if (pGVar3 != (GizmoTransform *)0x0) {
        VVar7 = (pGVar3->fields)._position2D;
        VVar5 = GizmoLineSlider2D_GetRealEndPosition(this,(MethodInfo *)0x0);
        pGVar6 = (this->fields)._._gizmo;
        VVar4.x = (this->fields)._scaleDragOrigin.x;
        VVar4.y = (this->fields)._scaleDragOrigin.y;
        fVar8 = (this->fields)._scaleDragOrigin.z;
        if (pGVar6 != (Gizmo *)0x0) {
          pCVar9 = Gizmo::Gizmo_get_FocusCamera(pGVar6,(MethodInfo *)0x0);
          VStack_13._0_8_ = VVar4;
          VStack_13.z = fVar8;
          pVVar11 = Vector2Ex::Vector2Ex_ConvertDirTo3D
                              (&VStack_10,VVar7,VVar5,&VStack_13,pCVar9,(MethodInfo *)0x0);
          GStack_34.Axis.z = 0.0;
          GStack_34.SnapMode = 0;
          fVar14 = pVVar11->y;
          fVar8 = pVVar11->z;
          (this->fields)._scaleAxis.x = pVVar11->x;
          (this->fields)._scaleAxis.y = fVar14;
          (this->fields)._scaleAxis.z = fVar8;
          GStack_34.RotationPlanePos.y = 0.0;
          GStack_34.RotationPlanePos.z = 0.0;
          GStack_34.Axis.x = 0.0;
          GStack_34.Axis.y = 0.0;
          pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                              (&VStack_10,&(this->fields)._scaleAxis,(MethodInfo *)VVar5);
          fVar8 = _UNK_?;
          uVar35 = pVVar11->x;
          uVar36 = pVVar11->y;
          GStack_34.SnapMode = (int32_t)pVVar11->z;
          GStack_34.RotationPlanePos.x = (float)(this->fields)._scaleDragAxisIndex;
          uVar37 = (this->fields)._scaleDragOrigin.x;
          uVar38 = (this->fields)._scaleDragOrigin.y;
          GStack_34.Axis.x = (this->fields)._scaleDragOrigin.z;
          lVar19 = 0xe0;
          if ((this->fields)._sharedSettings == (GizmoLineSlider2DSettings *)0x0) {
            lVar19 = 0xd8;
          }
          lVar19 = *(longlong *)((longlong)&this->klass + lVar19);
          GStack_34.RotationPlanePos.y = (float)uVar37;
          GStack_34.RotationPlanePos.z = (float)uVar38;
          GStack_34.Axis.y = (float)uVar35;
          GStack_34.Axis.z = (float)uVar36;
          if (lVar19 != 0) {
            pGVar39 = (this->fields)._scaleDrag;
            GStack_34.SnapStep = *(float *)(lVar19 + 0x24);
            if (pGVar39 != (GizmoSglAxisScaleDrag3D *)0x0) {
              cVar24 = (*(pGVar39->klass->vtable).get_IsActive_1.methodPtr)
                                 (pGVar39,(pGVar39->klass->vtable).get_IsActive_1.method);
              if (cVar24 != '\0') {
                return;
              }
              (pGVar39->fields)._workData.AxisIndex = (int32_t)GStack_34.RotationPlanePos.x;
              (pGVar39->fields)._workData.DragOrigin.x = GStack_34.RotationPlanePos.y;
              (pGVar39->fields)._workData.DragOrigin.y = GStack_34.RotationPlanePos.z;
              (pGVar39->fields)._workData.DragOrigin.z = GStack_34.Axis.x;
              (pGVar39->fields)._workData.Axis.x = GStack_34.Axis.y;
              (pGVar39->fields)._workData.Axis.y = GStack_34.Axis.z;
              *(ulonglong *)&(pGVar39->fields)._workData.Axis.z =
                   CONCAT44(GStack_34.SnapStep,GStack_34.SnapMode);
              (pGVar39->fields)._workData.EntityScale = fVar8;
              (pGVar39->fields)._scale = (pGVar39->fields)._workData.EntityScale;
              return;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar33 = (code *)swi(3);
  (*pcVar33)();
  return;
}


/* Void OnGizmoHandleDragUpdate(Gizmo, Int32) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_OnGizmoHandleDragUpdate
               (GizmoLineSlider2D *this,Gizmo *gizmo,int32_t handleId,MethodInfo *method)

{
  pGVar1 = (this->fields)._._handle;
  if (pGVar1 != (GizmoHandle *)0x0) {
    if (handleId != (pGVar1->fields)._id) {
      pGVar2 = (this->fields)._cap2D;
      if ((pGVar2 == (GizmoCap2D *)0x0) ||
         (pGVar1 = (pGVar2->fields)._._handle, pGVar1 == (GizmoHandle *)0x0))
      goto code_?;
      if (handleId != (pGVar1->fields)._id) {
        return;
      }
    }
    if ((gizmo != (Gizmo *)0x0) &&
       (this_00 = (this->fields)._transform, this_00 != (GizmoTransform *)0x0)) {
      QStack_3.x = (gizmo->fields)._dragInfo._relativeRotation.x;
      QStack_3.y = (gizmo->fields)._dragInfo._relativeRotation.y;
      QStack_3.z = (gizmo->fields)._dragInfo._relativeRotation.z;
      QStack_3.w = (gizmo->fields)._dragInfo._relativeRotation.w;
      fVar4 = QuaternionEx::QuaternionEx_ConvertTo2DRotation(&QStack_3,(MethodInfo *)0x0);
      if (((this_00->fields)._firingChanged2DEvent != 0) ||
         (fVar4 = fVar4 + (this_00->fields)._rotation2DDegrees,
         (this_00->fields)._rotation2DDegrees == fVar4)) {
        return;
      }
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
      pcVar11 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
        uVar12 = func_?(&UNK_?);
        FUN_?(uVar12,0);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pcRam_? = pcVar11;
      (*pcRam_?)(fVar4,&uStack_7,&uStack_9);
      uVar12 = uStack_9;
      fVar13 = uStack_9._4_4_;
      fVar4 = (float)uStack_9;
      fVar14 = (float)uStack_10;
      fStack_15 = uStack_10._4_4_;
      fVar16 = uStack_9._4_4_ * uStack_9._4_4_ + (float)uStack_9 * (float)uStack_9 +
               (float)uStack_10 * (float)uStack_10 + uStack_10._4_4_ * uStack_10._4_4_;
      if (fVar16 < 0.0) {
        fVar16 = (float)FUN_?(fVar16);
      }
      else {
        fVar16 = SQRT(fVar16);
      }
      if (fVar16 < _UNK_?) {
        uStack_7 = uVar12;
        fStack_8 = fVar14;
      }
      else {
        fVar16 = _UNK_? / fVar16;
        fStack_8 = fVar16 * fVar14;
        fStack_15 = fVar16 * fStack_15;
        uStack_7 = CONCAT44(fVar16 * fVar13,fVar16 * fVar4);
      }
      (this_00->fields)._rotation2D.x = (float)(undefined4)uStack_7;
      (this_00->fields)._rotation2D.y = (float)uStack_7._4_4_;
      (this_00->fields)._rotation2D.z = fStack_8;
      (this_00->fields)._rotation2D.w = fStack_15;
      if ((this_00->fields)._parent == (GizmoTransform *)0x0) {
        fVar4 = (this_00->fields)._rotation2D.y;
        fVar13 = (this_00->fields)._rotation2D.z;
        fVar14 = (this_00->fields)._rotation2D.w;
        (this_00->fields)._localRotation2D.x = (this_00->fields)._rotation2D.x;
        (this_00->fields)._localRotation2D.y = fVar4;
        (this_00->fields)._localRotation2D.z = fVar13;
        (this_00->fields)._localRotation2D.w = fVar14;
      }
      else {
        pGVar17 = (this_00->fields)._parent;
        aQStack_18[0].x = (pGVar17->fields)._rotation2D.x;
        aQStack_18[0].y = (pGVar17->fields)._rotation2D.y;
        aQStack_18[0].z = (pGVar17->fields)._rotation2D.z;
        aQStack_18[0].w = (pGVar17->fields)._rotation2D.w;
        pcVar11 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
          uVar12 = func_?(&UNK_?);
          FUN_?(uVar12,0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pcRam_? = pcVar11;
        uStack_9 = CONCAT44(unaff_XMM10_Db,unaff_XMM10_Da);
        uStack_10 = CONCAT44(unaff_XMM10_Dd,unaff_XMM10_Dc);
        uStack_7 = CONCAT44(unaff_XMM11_Db,unaff_XMM11_Da);
        fStack_8 = unaff_XMM11_Dc;
        fStack_15 = unaff_XMM11_Dd;
        (*pcRam_?)(aQStack_18);
        fVar4 = (this_00->fields)._rotation2D.x;
        fVar13 = (this_00->fields)._rotation2D.y;
        fVar14 = (this_00->fields)._rotation2D.z;
        fVar16 = (this_00->fields)._rotation2D.w;
        fVar19 = (fVar16 * 0.0 + fVar4 * 0.0 + fVar14 * 0.0) - fVar13 * 0.0;
        fVar20 = (fVar13 * 0.0 + fVar16 * 0.0 + fVar4 * 0.0) - fVar14 * 0.0;
        fVar21 = ((fVar16 * 0.0 - fVar4 * 0.0) - fVar13 * 0.0) - fVar14 * 0.0;
        fVar13 = (fVar14 * 0.0 + fVar16 * 0.0 + fVar13 * 0.0) - fVar4 * 0.0;
        fVar4 = fVar20 * fVar20 + fVar19 * fVar19 + fVar13 * fVar13 + fVar21 * fVar21;
        if (fVar4 < 0.0) {
          fVar4 = (float)FUN_?(fVar4);
        }
        else {
          fVar4 = SQRT(fVar4);
        }
        if (_UNK_? <= fVar4) {
          fVar4 = _UNK_? / fVar4;
          fVar19 = fVar19 * fVar4;
          fVar20 = fVar20 * fVar4;
          fVar13 = fVar13 * fVar4;
          fVar21 = fVar21 * fVar4;
        }
        (this_00->fields)._localRotation2D.x = fVar19;
        (this_00->fields)._localRotation2D.y = fVar20;
        (this_00->fields)._localRotation2D.z = fVar13;
        (this_00->fields)._localRotation2D.w = fVar21;
      }
      aQStack_18[0].x = (this_00->fields)._localRotation2D.x;
      aQStack_18[0].y = (this_00->fields)._localRotation2D.y;
      aQStack_18[0].z = (this_00->fields)._localRotation2D.z;
      aQStack_18[0].w = (this_00->fields)._localRotation2D.w;
      fVar4 = QuaternionEx::QuaternionEx_ConvertTo2DRotation(aQStack_18,(MethodInfo *)0x0);
      (this_00->fields)._localRotation2DDegrees = fVar4;
      GizmoTransform::GizmoTransform_Update2DAxes(this_00,(MethodInfo *)0x0);
      GizmoTransform::GizmoTransform_UpdateChildTransforms2D(this_00,(MethodInfo *)0x0);
      pGVar22 = (this_00->fields).Changed;
      (this_00->fields)._firingChanged2DEvent = 1;
      if (pGVar22 != (GizmoEntityTransformChangedHandler *)0x0) {
        (*(pGVar22->fields)._._.invoke_impl)
                  ((pGVar22->fields)._._.method_code,this_00,0x100000000,(pGVar22->fields)._._.method)
        ;
      }
      (this_00->fields)._firingChanged2DEvent = 0;
      return;
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnGizmoHandleHoverEnter(Gizmo, Int32) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_OnGizmoHandleHoverEnter
               (GizmoLineSlider2D *this,Gizmo *gizmo,int32_t handleId,MethodInfo *method)

{
  lVar1 = CONCAT44(in_register_00000084,handleId);
  pGVar2 = (this->fields)._._handle;
  if (pGVar2 != (GizmoHandle *)0x0) {
    uVar3 = (pGVar2->fields)._id;
    gizmo = (Gizmo *)(ulonglong)uVar3;
    pGVar4 = (this->fields)._cap2D;
    if (pGVar4 != (GizmoCap2D *)0x0) {
      if (handleId == uVar3) {
        gizmo = (Gizmo *)(pGVar4->fields)._overrideFillColor;
        if (gizmo != (Gizmo *)0x0) {
          *(undefined1 *)&(gizmo->fields).PostEnabled = 1;
          method = (MethodInfo *)(this->fields)._cap2D;
          if ((GizmoCap2D *)method != (GizmoCap2D *)0x0) {
            gizmo = (Gizmo *)0xf0;
            lVar5 = 0xf0;
            lVar1 = 0xe8;
            if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider2DLookAndFeel *)0x0) {
              lVar5 = 0xe8;
            }
            lVar5 = *(longlong *)((longlong)&this->klass + lVar5);
            if (((lVar5 != 0) && (lVar5 = *(longlong *)(lVar5 + 0x70), lVar5 != 0)) &&
               (pGVar6 = (((GizmoCap2D *)method)->fields)._overrideFillColor,
               pGVar6 != (GizmoOverrideColor *)0x0)) {
              uVar7 = *(undefined8 *)(lVar5 + 0x40);
              uVar8 = *(undefined8 *)(lVar5 + 0x48);
              (pGVar6->fields)._color.r = (float)(int)uVar7;
              (pGVar6->fields)._color.g = (float)(int)((ulonglong)uVar7 >> 0x20);
              (pGVar6->fields)._color.b = (float)(int)uVar8;
              (pGVar6->fields)._color.a = (float)(int)((ulonglong)uVar8 >> 0x20);
              pGVar4 = (this->fields)._cap2D;
              if ((pGVar4 != (GizmoCap2D *)0x0) &&
                 (pGVar6 = (pGVar4->fields)._overrideBorderColor,
                 pGVar6 != (GizmoOverrideColor *)0x0)) {
                (pGVar6->fields)._isActive = 1;
                method = (MethodInfo *)(this->fields)._cap2D;
                if ((GizmoCap2D *)method != (GizmoCap2D *)0x0) {
                  uVar3 = 0xf0;
                  if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider2DLookAndFeel *)0x0) {
                    uVar3 = 0xe8;
                  }
                  gizmo = (Gizmo *)(ulonglong)uVar3;
                  lVar5 = *(longlong *)((longlong)&this->klass + (longlong)&gizmo->klass);
                  if ((lVar5 != 0) && (lVar5 = *(longlong *)(lVar5 + 0x70), lVar5 != 0)) {
                    pGVar6 = (((GizmoCap2D *)method)->fields)._overrideBorderColor;
                    this = (GizmoLineSlider2D *)0x0;
                    if (pGVar6 != (GizmoOverrideColor *)0x0) {
                      uVar7 = *(undefined8 *)(lVar5 + 0x60);
                      uVar8 = *(undefined8 *)(lVar5 + 0x68);
                      (pGVar6->fields)._color.r = (float)(int)uVar7;
                      (pGVar6->fields)._color.g = (float)(int)((ulonglong)uVar7 >> 0x20);
                      (pGVar6->fields)._color.b = (float)(int)uVar8;
                      (pGVar6->fields)._color.a = (float)(int)((ulonglong)uVar8 >> 0x20);
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
        gizmo = (Gizmo *)(pGVar4->fields)._._handle;
        if (gizmo != (Gizmo *)0x0) {
          if (handleId != *(int *)&(gizmo->fields).PostDisabled) {
            return;
          }
          pGVar6 = (this->fields)._overrideFillColor;
          if (pGVar6 != (GizmoOverrideColor *)0x0) {
            (pGVar6->fields)._isActive = 1;
            gizmo = (Gizmo *)0xf0;
            lVar5 = 0xf0;
            lVar1 = 0xe8;
            if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider2DLookAndFeel *)0x0) {
              lVar5 = 0xe8;
            }
            method = *(MethodInfo **)((longlong)&this->klass + lVar5);
            if (((GizmoCap2D *)method != (GizmoCap2D *)0x0) &&
               (pGVar6 = (this->fields)._overrideFillColor, pGVar6 != (GizmoOverrideColor *)0x0)) {
              uVar9 = *(undefined4 *)&(((GizmoCap2D *)method)->fields).field_0x2c;
              pCVar10 = (((GizmoCap2D *)method)->fields)._circle;
              (pGVar6->fields)._color.r = (float)(((GizmoCap2D *)method)->fields)._circleIndex;
              (pGVar6->fields)._color.g = (float)uVar9;
              *(CircleShape2D **)&(pGVar6->fields)._color.b = pCVar10;
              pGVar6 = (this->fields)._overrideBorderColor;
              if (pGVar6 != (GizmoOverrideColor *)0x0) {
                (pGVar6->fields)._isActive = 1;
                uVar3 = 0xf0;
                if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider2DLookAndFeel *)0x0) {
                  uVar3 = 0xe8;
                }
                gizmo = (Gizmo *)(ulonglong)uVar3;
                lVar1 = *(longlong *)((longlong)&this->klass + (longlong)&gizmo->klass);
                if ((lVar1 != 0) &&
                   (pGVar6 = (this->fields)._overrideBorderColor,
                   pGVar6 != (GizmoOverrideColor *)0x0)) {
                  uVar7 = *(undefined8 *)(lVar1 + 0x58);
                  uVar8 = *(undefined8 *)(lVar1 + 0x60);
                  (pGVar6->fields)._color.r = (float)(int)uVar7;
                  (pGVar6->fields)._color.g = (float)(int)((ulonglong)uVar7 >> 0x20);
                  (pGVar6->fields)._color.b = (float)(int)uVar8;
                  (pGVar6->fields)._color.a = (float)(int)((ulonglong)uVar8 >> 0x20);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?(this,gizmo,lVar1,method);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnGizmoHandleHoverExit(Gizmo, Int32) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_OnGizmoHandleHoverExit
               (GizmoLineSlider2D *this,Gizmo *gizmo,int32_t handleId,MethodInfo *method)

{
  pGVar1 = (this->fields)._._handle;
  if (pGVar1 != (GizmoHandle *)0x0) {
    uVar2 = (pGVar1->fields)._id;
    gizmo = (Gizmo *)(ulonglong)uVar2;
    pGVar3 = (this->fields)._cap2D;
    if (pGVar3 != (GizmoCap2D *)0x0) {
      if (handleId == uVar2) {
        gizmo = (Gizmo *)(pGVar3->fields)._overrideFillColor;
        if (gizmo == (Gizmo *)0x0) goto code_?;
        *(undefined1 *)&(gizmo->fields).PostEnabled = 0;
        pGVar3 = (this->fields)._cap2D;
        if (pGVar3 == (GizmoCap2D *)0x0) goto code_?;
        pGVar4 = (pGVar3->fields)._overrideBorderColor;
      }
      else {
        gizmo = (Gizmo *)(pGVar3->fields)._._handle;
        if (gizmo == (Gizmo *)0x0) goto code_?;
        if (handleId != *(int *)&(gizmo->fields).PostDisabled) {
          return;
        }
        pGVar4 = (this->fields)._overrideFillColor;
        if (pGVar4 == (GizmoOverrideColor *)0x0) goto code_?;
        (pGVar4->fields)._isActive = 0;
        pGVar4 = (this->fields)._overrideBorderColor;
      }
      if (pGVar4 != (GizmoOverrideColor *)0x0) {
        (pGVar4->fields)._isActive = 0;
        return;
      }
    }
  }
code_?:
  FUN_?(this,gizmo);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnGizmoPostEnabled(Gizmo) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_OnGizmoPostEnabled
               (GizmoLineSlider2D *this,Gizmo *gizmo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoLineSlider2DController,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = 0xf0;
  if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider2DLookAndFeel *)0x0) {
    lVar1 = 0xe8;
  }
  lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
  if ((lVar1 != 0) &&
     (pIVar2 = (this->fields)._controllers, pIVar2 != (IGizmoLineSlider2DController__Array *)0x0)) {
    uVar3 = *(uint *)(lVar1 + 0x10);
    if ((uint)pIVar2->max_length <= uVar3) {
code_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (pIVar2->vector[(int)uVar3] != (IGizmoLineSlider2DController *)0x0) {
      FUN_?(0,TypeInfo__RTG__IGizmoLineSlider2DController);
      uVar3 = 0xf0;
      if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider2DLookAndFeel *)0x0) {
        uVar3 = 0xe8;
      }
      lVar1 = *(longlong *)((longlong)&this->klass + (ulonglong)uVar3);
      if ((lVar1 != 0) &&
         (pIVar2 = (this->fields)._controllers, pIVar2 != (IGizmoLineSlider2DController__Array *)0x0
         )) {
        uVar3 = *(uint *)(lVar1 + 0x10);
        if ((uint)pIVar2->max_length <= uVar3) goto code_?;
        if (pIVar2->vector[(int)uVar3] != (IGizmoLineSlider2DController *)0x0) {
          FUN_?(2,TypeInfo__RTG__IGizmoLineSlider2DController);
          lVar1 = 0xf0;
          if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider2DLookAndFeel *)0x0) {
            lVar1 = 0xe8;
          }
          lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
          if ((lVar1 != 0) &&
             (pIVar2 = (this->fields)._controllers,
             pIVar2 != (IGizmoLineSlider2DController__Array *)0x0)) {
            uVar3 = *(uint *)(lVar1 + 0x10);
            if ((uint)pIVar2->max_length <= uVar3) goto code_?;
            if (pIVar2->vector[(int)uVar3] != (IGizmoLineSlider2DController *)0x0) {
              FUN_?(1);
              pGVar5 = (this->fields)._cap2D;
              VVar6 = GizmoLineSlider2D_GetRealDirection(this,(MethodInfo *)0x0);
              VVar7 = GizmoLineSlider2D_GetRealEndPosition(this,(MethodInfo *)0x0);
              if (pGVar5 != (GizmoCap2D *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__RTG__IGizmoCap2DController,VVar6,VVar7,0);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                lVar1 = 0x88;
                if ((pGVar5->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
                  lVar1 = 0x80;
                }
                lVar1 = *(longlong *)((longlong)&pGVar5->klass + lVar1);
                if ((lVar1 != 0) &&
                   (pIVar8 = (pGVar5->fields)._controllers,
                   pIVar8 != (IGizmoCap2DController__Array *)0x0)) {
                  uVar3 = *(uint *)(lVar1 + 0x14);
                  if ((uint)pIVar8->max_length <= uVar3) {
                    FUN_?();
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  if (pIVar8->vector[(int)uVar3] != (IGizmoCap2DController *)0x0) {
                    FUN_?(2);
                    return;
                  }
                }
                FUN_?();
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
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

void Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_OnGizmoPreUpdateBegin
               (GizmoLineSlider2D *this,Gizmo *gizmo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoLineSlider2DController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = 0xf0;
  if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider2DLookAndFeel *)0x0) {
    lVar1 = 0xe8;
  }
  lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
  if ((lVar1 != 0) &&
     (pIVar2 = (this->fields)._controllers, pIVar2 != (IGizmoLineSlider2DController__Array *)0x0)) {
    uVar3 = *(uint *)(lVar1 + 0x10);
    if ((uint)pIVar2->max_length <= uVar3) goto code_?;
    if (pIVar2->vector[(int)uVar3] != (IGizmoLineSlider2DController *)0x0) {
      FUN_?(0,TypeInfo__RTG__IGizmoLineSlider2DController);
      fVar4 = _UNK_?;
      lVar1 = 0xe0;
      if ((this->fields)._sharedSettings == (GizmoLineSlider2DSettings *)0x0) {
        lVar1 = 0xd8;
      }
      lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
      if ((lVar1 != 0) &&
         (pGVar5 = (this->fields)._offsetDrag, pGVar5 != (GizmoSglAxisOffsetDrag3D *)0x0)) {
        fVar6 = *(float *)(lVar1 + 0x28);
        fVar7 = _UNK_?;
        if (_UNK_? <= fVar6) {
          fVar7 = fVar6;
        }
        (pGVar5->fields)._._sensitivity = fVar7;
        uVar8 = 0xe0;
        if ((this->fields)._sharedSettings == (GizmoLineSlider2DSettings *)0x0) {
          uVar8 = 0xd8;
        }
        lVar1 = *(longlong *)((longlong)&this->klass + (ulonglong)uVar8);
        if ((lVar1 != 0) &&
           (pGVar9 = (this->fields)._rotationDrag, pGVar9 != (GizmoSglAxisRotationDrag3D *)0x0)) {
          fVar6 = *(float *)(lVar1 + 0x2c);
          if (fVar4 <= fVar6) {
            fVar4 = fVar6;
          }
          (pGVar9->fields)._._sensitivity = fVar4;
          pIVar2 = (this->fields)._controllers;
          if (pIVar2 != (IGizmoLineSlider2DController__Array *)0x0) {
            if ((uint)pIVar2->max_length <= uVar3) {
code_?:
              FUN_?();
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            if (pIVar2->vector[(int)uVar3] != (IGizmoLineSlider2DController *)0x0) {
              FUN_?(1,TypeInfo__RTG__IGizmoLineSlider2DController);
              pIVar2 = (this->fields)._controllers;
              if (pIVar2 != (IGizmoLineSlider2DController__Array *)0x0) {
                if ((uint)pIVar2->max_length <= uVar3) goto code_?;
                if (pIVar2->vector[(int)uVar3] != (IGizmoLineSlider2DController *)0x0) {
                  FUN_?(2,TypeInfo__RTG__IGizmoLineSlider2DController);
                  pGVar11 = (this->fields)._cap2D;
                  if ((((pGVar11 != (GizmoCap2D *)0x0) &&
                       (pGVar12 = (pGVar11->fields)._._handle, pGVar12 != (GizmoHandle *)0x0)) &&
                      (pGVar13 = (this->fields)._._handle, pGVar13 != (GizmoHandle *)0x0)) &&
                     ((pPVar14 = (pGVar13->fields)._genericHoverPriority, pPVar14 != (Priority *)0x0
                      && (pPVar15 = (pGVar12->fields)._genericHoverPriority,
                         pPVar15 != (Priority *)0x0)))) {
                    (pPVar15->fields)._priority = (pPVar14->fields)._priority;
                    pGVar11 = (this->fields)._cap2D;
                    if (((pGVar11 != (GizmoCap2D *)0x0) &&
                        ((pGVar12 = (pGVar11->fields)._._handle, pGVar12 != (GizmoHandle *)0x0 &&
                         (pGVar13 = (this->fields)._._handle, pGVar13 != (GizmoHandle *)0x0)))) &&
                       ((pPVar14 = (pGVar13->fields)._hoverPriority2D, pPVar14 != (Priority *)0x0 &&
                        (pPVar15 = (pGVar12->fields)._hoverPriority2D, pPVar15 != (Priority *)0x0))))
                    {
                      (pPVar15->fields)._priority = (pPVar14->fields)._priority;
                      pGVar11 = (this->fields)._cap2D;
                      if ((((pGVar11 != (GizmoCap2D *)0x0) &&
                           (pGVar12 = (pGVar11->fields)._._handle, pGVar12 != (GizmoHandle *)0x0)) &&
                          (pGVar13 = (this->fields)._._handle, pGVar13 != (GizmoHandle *)0x0)) &&
                         ((pPVar14 = (pGVar13->fields)._hoverPriority3D, pPVar14 != (Priority *)0x0
                          && (pPVar15 = (pGVar12->fields)._hoverPriority3D,
                             pPVar15 != (Priority *)0x0)))) {
                        (pPVar15->fields)._priority = (pPVar14->fields)._priority;
                        pGVar11 = (this->fields)._cap2D;
                        VVar16 = GizmoLineSlider2D_GetRealDirection(this,(MethodInfo *)0x0);
                        VVar17 = GizmoLineSlider2D_GetRealEndPosition(this,(MethodInfo *)0x0);
                        if (pGVar11 != (GizmoCap2D *)0x0) {
                          if (cRam_? == '\0') {
                            FUN_?(&TypeInfo__RTG__IGizmoCap2DController,VVar16,VVar17,0);
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          lVar1 = 0x88;
                          if ((pGVar11->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
                            lVar1 = 0x80;
                          }
                          lVar1 = *(longlong *)((longlong)&pGVar11->klass + lVar1);
                          if ((lVar1 != 0) &&
                             (pIVar18 = (pGVar11->fields)._controllers,
                             pIVar18 != (IGizmoCap2DController__Array *)0x0)) {
                            uVar3 = *(uint *)(lVar1 + 0x14);
                            if ((uint)pIVar18->max_length <= uVar3) {
                              FUN_?();
                              pcVar10 = (code *)swi(3);
                              (*pcVar10)();
                              return;
                            }
                            if (pIVar18->vector[(int)uVar3] != (IGizmoCap2DController *)0x0) {
                              FUN_?(2);
                              return;
                            }
                          }
                          FUN_?();
                          pcVar10 = (code *)swi(3);
                          (*pcVar10)();
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
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnTransformChanged(GizmoTransform, GizmoTransform+ChangeData) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_OnTransformChanged
               (GizmoLineSlider2D *this,GizmoTransform *transform,
               GizmoTransform_ChangeData changeData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoLineSlider2DController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iStackX_1c = changeData.TRSDimension;
  if ((iStackX_1c != 1) && (changeData.ChangeReason != 1)) {
    return;
  }
  lVar1 = 0xf0;
  if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider2DLookAndFeel *)0x0) {
    lVar1 = 0xe8;
  }
  lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
  if ((lVar1 != 0) &&
     (pIVar2 = (this->fields)._controllers, pIVar2 != (IGizmoLineSlider2DController__Array *)0x0)) {
    uVar3 = *(uint *)(lVar1 + 0x10);
    if ((uint)pIVar2->max_length <= uVar3) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (pIVar2->vector[(int)uVar3] != (IGizmoLineSlider2DController *)0x0) {
      FUN_?(1);
      this_00 = (this->fields)._cap2D;
      sliderDirection = GizmoLineSlider2D_GetRealDirection(this,(MethodInfo *)0x0);
      sliderEndPt = GizmoLineSlider2D_GetRealEndPosition(this,(MethodInfo *)0x0);
      if (this_00 != (GizmoCap2D *)0x0) {
        GizmoCap2D::GizmoCap2D_CapSlider2D(this_00,sliderDirection,sliderEndPt,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnVisibilityStateChanged() */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_OnVisibilityStateChanged
               (GizmoLineSlider2D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoLineSlider2DController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = 0xf0;
  if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider2DLookAndFeel *)0x0) {
    lVar1 = 0xe8;
  }
  lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
  if ((lVar1 != 0) &&
     (pIVar2 = (this->fields)._controllers, pIVar2 != (IGizmoLineSlider2DController__Array *)0x0)) {
    uVar3 = *(uint *)(lVar1 + 0x10);
    if ((uint)pIVar2->max_length <= uVar3) {
code_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (pIVar2->vector[(int)uVar3] != (IGizmoLineSlider2DController *)0x0) {
      FUN_?(0,TypeInfo__RTG__IGizmoLineSlider2DController);
      uVar3 = 0xf0;
      if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider2DLookAndFeel *)0x0) {
        uVar3 = 0xe8;
      }
      lVar1 = *(longlong *)((longlong)&this->klass + (ulonglong)uVar3);
      if ((lVar1 != 0) &&
         (pIVar2 = (this->fields)._controllers, pIVar2 != (IGizmoLineSlider2DController__Array *)0x0
         )) {
        uVar3 = *(uint *)(lVar1 + 0x10);
        if ((uint)pIVar2->max_length <= uVar3) goto code_?;
        if (pIVar2->vector[(int)uVar3] != (IGizmoLineSlider2DController *)0x0) {
          FUN_?(2,TypeInfo__RTG__IGizmoLineSlider2DController);
          lVar1 = 0xf0;
          if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider2DLookAndFeel *)0x0) {
            lVar1 = 0xe8;
          }
          lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
          if ((lVar1 != 0) &&
             (pIVar2 = (this->fields)._controllers,
             pIVar2 != (IGizmoLineSlider2DController__Array *)0x0)) {
            uVar3 = *(uint *)(lVar1 + 0x10);
            if ((uint)pIVar2->max_length <= uVar3) goto code_?;
            if (pIVar2->vector[(int)uVar3] != (IGizmoLineSlider2DController *)0x0) {
              FUN_?(1);
              pGVar5 = (this->fields)._cap2D;
              VVar6 = GizmoLineSlider2D_GetRealDirection(this,(MethodInfo *)0x0);
              VVar7 = GizmoLineSlider2D_GetRealEndPosition(this,(MethodInfo *)0x0);
              if (pGVar5 != (GizmoCap2D *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__RTG__IGizmoCap2DController,VVar6,VVar7,0);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                lVar1 = 0x88;
                if ((pGVar5->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
                  lVar1 = 0x80;
                }
                lVar1 = *(longlong *)((longlong)&pGVar5->klass + lVar1);
                if ((lVar1 != 0) &&
                   (pIVar8 = (pGVar5->fields)._controllers,
                   pIVar8 != (IGizmoCap2DController__Array *)0x0)) {
                  uVar3 = *(uint *)(lVar1 + 0x14);
                  if ((uint)pIVar8->max_length <= uVar3) {
                    FUN_?();
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  if (pIVar8->vector[(int)uVar3] != (IGizmoCap2DController *)0x0) {
                    FUN_?(2);
                    return;
                  }
                }
                FUN_?();
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
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


/* Void Refresh() */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_Refresh
               (GizmoLineSlider2D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoLineSlider2DController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = 0xf0;
  if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider2DLookAndFeel *)0x0) {
    lVar1 = 0xe8;
  }
  lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
  if ((lVar1 != 0) &&
     (pIVar2 = (this->fields)._controllers, pIVar2 != (IGizmoLineSlider2DController__Array *)0x0)) {
    uVar3 = *(uint *)(lVar1 + 0x10);
    if ((uint)pIVar2->max_length <= uVar3) {
code_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (pIVar2->vector[(int)uVar3] != (IGizmoLineSlider2DController *)0x0) {
      FUN_?(0,TypeInfo__RTG__IGizmoLineSlider2DController);
      uVar3 = 0xf0;
      if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider2DLookAndFeel *)0x0) {
        uVar3 = 0xe8;
      }
      lVar1 = *(longlong *)((longlong)&this->klass + (ulonglong)uVar3);
      if ((lVar1 != 0) &&
         (pIVar2 = (this->fields)._controllers, pIVar2 != (IGizmoLineSlider2DController__Array *)0x0
         )) {
        uVar3 = *(uint *)(lVar1 + 0x10);
        if ((uint)pIVar2->max_length <= uVar3) goto code_?;
        if (pIVar2->vector[(int)uVar3] != (IGizmoLineSlider2DController *)0x0) {
          FUN_?(2,TypeInfo__RTG__IGizmoLineSlider2DController);
          lVar1 = 0xf0;
          if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider2DLookAndFeel *)0x0) {
            lVar1 = 0xe8;
          }
          lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
          if ((lVar1 != 0) &&
             (pIVar2 = (this->fields)._controllers,
             pIVar2 != (IGizmoLineSlider2DController__Array *)0x0)) {
            uVar3 = *(uint *)(lVar1 + 0x10);
            if ((uint)pIVar2->max_length <= uVar3) goto code_?;
            if (pIVar2->vector[(int)uVar3] != (IGizmoLineSlider2DController *)0x0) {
              FUN_?(1);
              pGVar5 = (this->fields)._cap2D;
              VVar6 = GizmoLineSlider2D_GetRealDirection(this,(MethodInfo *)0x0);
              VVar7 = GizmoLineSlider2D_GetRealEndPosition(this,(MethodInfo *)0x0);
              if (pGVar5 != (GizmoCap2D *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__RTG__IGizmoCap2DController,VVar6,VVar7,0);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                lVar1 = 0x88;
                if ((pGVar5->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
                  lVar1 = 0x80;
                }
                lVar1 = *(longlong *)((longlong)&pGVar5->klass + lVar1);
                if ((lVar1 != 0) &&
                   (pIVar8 = (pGVar5->fields)._controllers,
                   pIVar8 != (IGizmoCap2DController__Array *)0x0)) {
                  uVar3 = *(uint *)(lVar1 + 0x14);
                  if ((uint)pIVar8->max_length <= uVar3) {
                    FUN_?();
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  if (pIVar8->vector[(int)uVar3] != (IGizmoCap2DController *)0x0) {
                    FUN_?(2);
                    return;
                  }
                }
                FUN_?();
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
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

void Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_RemoveTargetTransform
               (GizmoLineSlider2D *this,GizmoTransform *transform,MethodInfo *method)

{
  this_01 = (this->fields)._offsetDrag;
  if (this_01 != (GizmoSglAxisOffsetDrag3D *)0x0) {
    GizmoDragSession::GizmoDragSession_RemoveTargetTransform
              ((GizmoDragSession *)this_01,transform,(MethodInfo *)0x0);
    this_02 = (this->fields)._rotationDrag;
    if (this_02 != (GizmoSglAxisRotationDrag3D *)0x0) {
      GizmoDragSession::GizmoDragSession_RemoveTargetTransform
                ((GizmoDragSession *)this_02,transform,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._scaleDrag;
      if (pGVar1 != (GizmoSglAxisScaleDrag3D *)0x0) {
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

void Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_RemoveTargetTransform_1
               (GizmoLineSlider2D *this,GizmoTransform *transform,GizmoDragChannel__Enum dragChannel
               ,MethodInfo *method)

{
  if (dragChannel == GizmoDragChannel__Enum_Offset) {
    pGVar1 = (GizmoSglAxisRotationDrag3D *)(this->fields)._offsetDrag;
  }
  else if (dragChannel == GizmoDragChannel__Enum_Rotation) {
    pGVar1 = (this->fields)._rotationDrag;
  }
  else {
    if (dragChannel != GizmoDragChannel__Enum_Scale) {
      return;
    }
    pGVar1 = (GizmoSglAxisRotationDrag3D *)(this->fields)._scaleDrag;
  }
  if (pGVar1 != (GizmoSglAxisRotationDrag3D *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__Remove_RTG__GizmoTransform_
                    ,transform,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    cVar2 = (*(((GizmoSglAxisScaleDrag3D__Class *)pGVar1->klass)->vtable).get_IsActive_1.methodPtr)
                      (pGVar1,(((GizmoSglAxisScaleDrag3D__Class *)pGVar1->klass)->vtable).
                              get_IsActive_1.method);
    if (cVar2 == '\0') {
      this_00 = (((GizmoPlaneDrag3D__Fields *)&(pGVar1->fields)._)->_)._targetTransforms;
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

void Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_Render
               (GizmoLineSlider2D *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__Singleton<RTG::GizmoSolidMaterial>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__Singleton<RTG::GizmoSolidMaterial>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._._isVisible == 0) {
    pGVar1 = (this->fields)._cap2D;
    if (pGVar1 == (GizmoCap2D *)0x0) goto code_?;
    if ((pGVar1->fields)._._isVisible == 0) {
      return;
    }
  }
  lVar2 = 0xf0;
  lVar3 = 0xf0;
  if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider2DLookAndFeel *)0x0) {
    lVar3 = 0xe8;
  }
  lVar3 = *(longlong *)((longlong)&this->klass + lVar3);
  if (lVar3 == 0) goto code_?;
  if (*(char *)(lVar3 + 0x24) != '\0') {
    pGVar4 = (this->fields)._rotationDrag;
    if (pGVar4 == (GizmoSglAxisRotationDrag3D *)0x0) goto code_?;
    cVar5 = (*(pGVar4->klass->vtable).get_IsActive_1.methodPtr)();
    if (cVar5 != '\0') {
      pGVar4 = (this->fields)._rotationDrag;
      if (((pGVar4 == (GizmoSglAxisRotationDrag3D *)0x0) ||
          (pGVar6 = (this->fields)._rotationArc, pGVar6 == (GizmoRotationArc2D *)0x0)) ||
         (this_00 = (pGVar6->fields)._arc, this_00 == (ArcShape2D *)0x0)) goto code_?;
      fVar7 = (float)FUN_?((pGVar4->fields)._totalRotation,_UNK_?);
      (this_00->fields)._degreeAngleFromStart = fVar7;
      ArcShape2D::ArcShape2D_CalculateEndPoint(this_00,(MethodInfo *)0x0);
      (this_00->fields)._areBorderPointsDirty = 1;
      uVar8 = 0xf0;
      if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider2DLookAndFeel *)0x0) {
        uVar8 = 0xe8;
      }
      lVar3 = *(longlong *)((longlong)&this->klass + (ulonglong)uVar8);
      if ((lVar3 == 0) ||
         (pGVar6 = (this->fields)._rotationArc, pGVar6 == (GizmoRotationArc2D *)0x0))
      goto code_?;
      GizmoRotationArc2D::GizmoRotationArc2D_Render
                (pGVar6,*(GizmoRotationArc2DLookAndFeel **)(lVar3 + 0x68),camera,(MethodInfo *)0x0)
      ;
    }
  }
  if ((this->fields)._._isVisible != 0) {
    lVar3 = 0xf0;
    if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider2DLookAndFeel *)0x0) {
      lVar3 = 0xe8;
    }
    lVar3 = *(longlong *)((longlong)&this->klass + lVar3);
    if (lVar3 == 0) goto code_?;
    if (*(int *)(lVar3 + 0x10) == 0) {
code_?:
      pGVar9 = (this->fields)._overrideFillColor;
      if (pGVar9 == (GizmoOverrideColor *)0x0) goto code_?;
      if ((pGVar9->fields)._isActive == 0) {
        lVar3 = 0xf0;
        if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider2DLookAndFeel *)0x0) {
          lVar3 = 0xe8;
        }
        lVar3 = *(longlong *)((longlong)&this->klass + lVar3);
        if (lVar3 == 0) goto code_?;
        fVar7 = *(float *)(lVar3 + 0x28);
        fVar10 = *(float *)(lVar3 + 0x2c);
        fVar11 = *(float *)(lVar3 + 0x30);
        fVar12 = *(float *)(lVar3 + 0x34);
        pGVar13 = (this->fields)._._gizmo;
        if ((pGVar13 == (Gizmo *)0x0) ||
           (pGVar14 = (this->fields)._._handle, pGVar14 == (GizmoHandle *)0x0))
        goto code_?;
        if ((pGVar13->fields)._hoverInfo._handleId == (pGVar14->fields)._id) {
          lVar3 = 0xf0;
          if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider2DLookAndFeel *)0x0) {
            lVar3 = 0xe8;
          }
          lVar3 = *(longlong *)((longlong)&this->klass + lVar3);
          fVar7 = *(float *)(lVar3 + 0x38);
          fVar10 = *(float *)(lVar3 + 0x3c);
          fVar11 = *(float *)(lVar3 + 0x40);
          fVar12 = *(float *)(lVar3 + 0x44);
        }
      }
      else {
        fVar7 = (pGVar9->fields)._color.r;
        fVar10 = (pGVar9->fields)._color.g;
        fVar11 = (pGVar9->fields)._color.b;
        fVar12 = (pGVar9->fields)._color.a;
      }
      if (*(int *)&(TypeInfo__RTG__Singleton<RTG::GizmoSolidMaterial>->_1).field_0x1c == 0) {
        FUN_?();
      }
      this_01 = (GizmoSolidMaterial *)
                Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                          (MethodInfo__RTG__Singleton<RTG::GizmoSolidMaterial>__get_Get__);
      if (this_01 == (GizmoSolidMaterial *)0x0) goto code_?;
      GizmoSolidMaterial::GizmoSolidMaterial_ResetValuesToSensibleDefaults
                (this_01,(MethodInfo *)0x0);
      GizmoSolidMaterial::GizmoSolidMaterial_SetLit(this_01,0,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&StringLiteral__Color);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar15 = GizmoSolidMaterial::GizmoSolidMaterial_get_Material(this_01,(MethodInfo *)0x0);
      if (pMVar15 == (Material *)0x0) goto code_?;
      aCStack_16[0].r = fVar7;
      aCStack_16[0].g = fVar10;
      aCStack_16[0].b = fVar11;
      aCStack_16[0].a = fVar12;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                (pMVar15,StringLiteral__Color,aCStack_16,(MethodInfo *)0x0);
      pMVar15 = GizmoSolidMaterial::GizmoSolidMaterial_get_Material(this_01,(MethodInfo *)0x0);
      if (pMVar15 == (Material *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass
                (pMVar15,0,(MethodInfo *)0x0);
      pGVar14 = (this->fields)._._handle;
      if (pGVar14 == (GizmoHandle *)0x0) goto code_?;
      GizmoHandle::GizmoHandle_Render2DSolid(pGVar14,camera,(MethodInfo *)0x0);
    }
    else {
      lVar3 = 0xf0;
      if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider2DLookAndFeel *)0x0) {
        lVar3 = 0xe8;
      }
      if (*(int *)(*(longlong *)((longlong)&this->klass + lVar3) + 0x14) == 2)
      goto code_?;
      lVar3 = 0xf0;
      if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider2DLookAndFeel *)0x0) {
        lVar3 = 0xe8;
      }
      if (*(int *)(*(longlong *)((longlong)&this->klass + lVar3) + 0x14) == 0)
      goto code_?;
    }
    lVar3 = 0xf0;
    if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider2DLookAndFeel *)0x0) {
      lVar3 = 0xe8;
    }
    lVar3 = *(longlong *)((longlong)&this->klass + lVar3);
    if (lVar3 == 0) goto code_?;
    if (*(int *)(lVar3 + 0x10) != 0) {
      lVar3 = 0xf0;
      if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider2DLookAndFeel *)0x0) {
        lVar3 = 0xe8;
      }
      if (*(int *)(*(longlong *)((longlong)&this->klass + lVar3) + 0x14) != 2) {
        lVar3 = 0xf0;
        if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider2DLookAndFeel *)0x0) {
          lVar3 = 0xe8;
        }
        lVar3 = *(longlong *)((longlong)&this->klass + lVar3);
        if (lVar3 == 0) goto code_?;
        if (*(int *)(lVar3 + 0x14) != 1) goto code_?;
      }
      pGVar9 = (this->fields)._overrideFillColor;
      if (pGVar9 == (GizmoOverrideColor *)0x0) goto code_?;
      if ((pGVar9->fields)._isActive == 0) {
        lVar3 = 0xf0;
        pGVar13 = (this->fields)._._gizmo;
        if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider2DLookAndFeel *)0x0) {
          lVar3 = 0xe8;
        }
        lVar3 = *(longlong *)((longlong)&this->klass + lVar3);
        fVar7 = *(float *)(lVar3 + 0x48);
        fVar10 = *(float *)(lVar3 + 0x4c);
        fVar11 = *(float *)(lVar3 + 0x50);
        fVar12 = *(float *)(lVar3 + 0x54);
        if ((pGVar13 == (Gizmo *)0x0) ||
           (pGVar14 = (this->fields)._._handle, pGVar14 == (GizmoHandle *)0x0))
        goto code_?;
        if ((pGVar13->fields)._hoverInfo._handleId == (pGVar14->fields)._id) {
          if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider2DLookAndFeel *)0x0) {
            lVar2 = 0xe8;
          }
          lVar3 = *(longlong *)((longlong)&this->klass + lVar2);
          fVar7 = *(float *)(lVar3 + 0x58);
          fVar10 = *(float *)(lVar3 + 0x5c);
          fVar11 = *(float *)(lVar3 + 0x60);
          fVar12 = *(float *)(lVar3 + 100);
        }
      }
      else {
        pGVar9 = (this->fields)._overrideBorderColor;
        if (pGVar9 == (GizmoOverrideColor *)0x0) goto code_?;
        fVar7 = (pGVar9->fields)._color.r;
        fVar10 = (pGVar9->fields)._color.g;
        fVar11 = (pGVar9->fields)._color.b;
        fVar12 = (pGVar9->fields)._color.a;
      }
      if (*(int *)&(TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>->_1).field_0x1c == 0) {
        FUN_?();
      }
      this_02 = (GizmoLineMaterial *)
                Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                          (MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
      if (this_02 == (GizmoLineMaterial *)0x0) goto code_?;
      GizmoLineMaterial::GizmoLineMaterial_ResetValuesToSensibleDefaults(this_02,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&StringLiteral__Color);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar15 = GizmoLineMaterial::GizmoLineMaterial_get_Material(this_02,(MethodInfo *)0x0);
      if (pMVar15 == (Material *)0x0) goto code_?;
      aCStack_16[0].r = fVar7;
      aCStack_16[0].g = fVar10;
      aCStack_16[0].b = fVar11;
      aCStack_16[0].a = fVar12;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                (pMVar15,StringLiteral__Color,aCStack_16,(MethodInfo *)0x0);
      pMVar15 = GizmoLineMaterial::GizmoLineMaterial_get_Material(this_02,(MethodInfo *)0x0);
      if (pMVar15 == (Material *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass
                (pMVar15,0,(MethodInfo *)0x0);
      pGVar14 = (this->fields)._._handle;
      if (pGVar14 == (GizmoHandle *)0x0) goto code_?;
      GizmoHandle::GizmoHandle_Render2DWire(pGVar14,camera,(MethodInfo *)0x0);
    }
  }
code_?:
  pGVar1 = (this->fields)._cap2D;
  if (pGVar1 != (GizmoCap2D *)0x0) {
    (*(pGVar1->klass->vtable).Render_1.methodPtr)
              (pGVar1,camera,(pGVar1->klass->vtable).Render_1.method);
    return;
  }
code_?:
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void SetDirection(Vector2) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_SetDirection
               (GizmoLineSlider2D *this,Vector2 directionAxis,MethodInfo *method)

{
  bVar1 = GizmoLineSlider3D::GizmoLineSlider3D_get_IsDragged
                    ((GizmoLineSlider3D *)this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    pGVar2 = (this->fields)._directionAxisMap;
    if (pGVar2 == (GizmoTransformAxisMap2D *)0x0) {
DAT_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((pGVar2->fields)._transform == (GizmoTransform *)0x0) {
      VStackX_20 = directionAxis;
      uVar4 = FUN_?(&VStackX_20);
      VStackX_20.x = (float)uVar4;
      VStackX_20.y = (float)((ulonglong)uVar4 >> 0x20);
      (pGVar2->fields)._freeAxis.x = VStackX_20.x;
      (pGVar2->fields)._freeAxis.y = VStackX_20.y;
    }
    else {
      pAVar5 = (pGVar2->fields)._mappedAxisDesc;
      this_00 = (pGVar2->fields)._transform;
      if ((pAVar5 == (AxisDescriptor *)0x0) ||
         (pVVar6 = (this_00->fields)._axes2D, pVVar6 == (Vector2__Array *)0x0)) goto DAT_?;
      uVar7 = (pAVar5->fields)._index;
      if ((uint)pVVar6->max_length <= uVar7) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar8 = pVVar6->vector[(int)uVar7].x;
      fVar9 = pVVar6->vector[(int)uVar7].y;
      if ((pAVar5->fields)._sign == 1) {
        fVar8 = (float)((uint)fVar8 ^ _UNK_?);
        fVar9 = (float)((uint)fVar9 ^ _UNK_?);
      }
      from.y = fVar9;
      from.x = fVar8;
      pQVar10 = QuaternionEx::QuaternionEx_FromToRotation2D
                          (aQStack_11,from,directionAxis,(MethodInfo *)0x0);
      aQStack_11[0].x = pQVar10->x;
      aQStack_11[0].y = pQVar10->y;
      aQStack_11[0].z = pQVar10->z;
      aQStack_11[0].w = pQVar10->w;
      fVar8 = QuaternionEx::QuaternionEx_ConvertTo2DRotation(aQStack_11,(MethodInfo *)0x0);
      if (((this_00->fields)._firingChanged2DEvent == 0) &&
         (fVar8 = fVar8 + (this_00->fields)._rotation2DDegrees,
         (this_00->fields)._rotation2DDegrees != fVar8)) {
        fVar8 = (float)FUN_?(fVar8,_UNK_?,0);
        bVar12 = cRam_? == '\0';
        (this_00->fields)._rotation2DDegrees = fVar8;
        if (bVar12) {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
        uStack_14._0_4_ = (pVVar13->forwardVector).x;
        uStack_14._4_4_ = (pVVar13->forwardVector).y;
        fStack_15 = (pVVar13->forwardVector).z;
        uStack_16 = 0;
        uStack_17 = (undefined *)0x0;
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar4 = func_?(&UNK_?);
          FUN_?(uVar4,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
        (*pcRam_?)(fVar8,&uStack_14,&uStack_16);
        uVar4 = uStack_16;
        fVar9 = uStack_16._4_4_;
        fVar8 = (float)uStack_16;
        fVar18 = (float)uStack_17;
        fStack_19 = uStack_17._4_4_;
        fVar20 = uStack_16._4_4_ * uStack_16._4_4_ + (float)uStack_16 * (float)uStack_16 +
                 (float)uStack_17 * (float)uStack_17 + uStack_17._4_4_ * uStack_17._4_4_;
        if (fVar20 < 0.0) {
          fVar20 = (float)FUN_?(fVar20);
        }
        else {
          fVar20 = SQRT(fVar20);
        }
        if (fVar20 < _UNK_?) {
          uStack_14 = uVar4;
          fStack_15 = fVar18;
        }
        else {
          fVar20 = _UNK_? / fVar20;
          fStack_15 = fVar20 * fVar18;
          fStack_19 = fVar20 * fStack_19;
          uStack_14 = CONCAT44(fVar20 * fVar9,fVar20 * fVar8);
        }
        (this_00->fields)._rotation2D.x = (float)(undefined4)uStack_14;
        (this_00->fields)._rotation2D.y = (float)uStack_14._4_4_;
        (this_00->fields)._rotation2D.z = fStack_15;
        (this_00->fields)._rotation2D.w = fStack_19;
        if ((this_00->fields)._parent == (GizmoTransform *)0x0) {
          fVar8 = (this_00->fields)._rotation2D.y;
          fVar9 = (this_00->fields)._rotation2D.z;
          fVar18 = (this_00->fields)._rotation2D.w;
          (this_00->fields)._localRotation2D.x = (this_00->fields)._rotation2D.x;
          (this_00->fields)._localRotation2D.y = fVar8;
          (this_00->fields)._localRotation2D.z = fVar9;
          (this_00->fields)._localRotation2D.w = fVar18;
        }
        else {
          pGVar21 = (this_00->fields)._parent;
          aQStack_22[0].x = (pGVar21->fields)._rotation2D.x;
          aQStack_22[0].y = (pGVar21->fields)._rotation2D.y;
          aQStack_22[0].z = (pGVar21->fields)._rotation2D.z;
          aQStack_22[0].w = (pGVar21->fields)._rotation2D.w;
          pcVar3 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
            uVar4 = func_?(&UNK_?);
            FUN_?(uVar4,0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pcRam_? = pcVar3;
          uStack_16 = CONCAT44(unaff_XMM10_Db,unaff_XMM10_Da);
          uStack_17 = (undefined *)CONCAT44(unaff_XMM10_Dd,unaff_XMM10_Dc);
          uStack_14 = CONCAT44(unaff_XMM11_Db,unaff_XMM11_Da);
          fStack_15 = unaff_XMM11_Dc;
          fStack_19 = unaff_XMM11_Dd;
          (*pcRam_?)(aQStack_22);
          fVar8 = (this_00->fields)._rotation2D.x;
          fVar9 = (this_00->fields)._rotation2D.y;
          fVar18 = (this_00->fields)._rotation2D.z;
          fVar20 = (this_00->fields)._rotation2D.w;
          fVar23 = (fVar20 * 0.0 + fVar8 * 0.0 + fVar18 * 0.0) - fVar9 * 0.0;
          fVar24 = (fVar9 * 0.0 + fVar20 * 0.0 + fVar8 * 0.0) - fVar18 * 0.0;
          fVar25 = ((fVar20 * 0.0 - fVar8 * 0.0) - fVar9 * 0.0) - fVar18 * 0.0;
          fVar9 = (fVar18 * 0.0 + fVar20 * 0.0 + fVar9 * 0.0) - fVar8 * 0.0;
          fVar8 = fVar24 * fVar24 + fVar23 * fVar23 + fVar9 * fVar9 + fVar25 * fVar25;
          if (fVar8 < 0.0) {
            fVar8 = (float)FUN_?(fVar8);
          }
          else {
            fVar8 = SQRT(fVar8);
          }
          if (_UNK_? <= fVar8) {
            fVar8 = _UNK_? / fVar8;
            fVar23 = fVar23 * fVar8;
            fVar24 = fVar24 * fVar8;
            fVar9 = fVar9 * fVar8;
            fVar25 = fVar25 * fVar8;
          }
          (this_00->fields)._localRotation2D.x = fVar23;
          (this_00->fields)._localRotation2D.y = fVar24;
          (this_00->fields)._localRotation2D.z = fVar9;
          (this_00->fields)._localRotation2D.w = fVar25;
        }
        aQStack_22[0].x = (this_00->fields)._localRotation2D.x;
        aQStack_22[0].y = (this_00->fields)._localRotation2D.y;
        aQStack_22[0].z = (this_00->fields)._localRotation2D.z;
        aQStack_22[0].w = (this_00->fields)._localRotation2D.w;
        fVar8 = QuaternionEx::QuaternionEx_ConvertTo2DRotation(aQStack_22,(MethodInfo *)0x0);
        (this_00->fields)._localRotation2DDegrees = fVar8;
        GizmoTransform::GizmoTransform_Update2DAxes(this_00,(MethodInfo *)0x0);
        GizmoTransform::GizmoTransform_UpdateChildTransforms2D(this_00,(MethodInfo *)0x0);
        pGVar26 = (this_00->fields).Changed;
        (this_00->fields)._firingChanged2DEvent = 1;
        if (pGVar26 != (GizmoEntityTransformChangedHandler *)0x0) {
          (*(pGVar26->fields)._._.invoke_impl)
                    ((pGVar26->fields)._._.method_code,this_00,0x100000000,
                     (pGVar26->fields)._._.method);
        }
        (this_00->fields)._firingChanged2DEvent = 0;
        return;
      }
    }
  }
  return;
}


/* Void SetDragChannel(GizmoDragChannel) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_SetDragChannel
               (GizmoLineSlider2D *this,GizmoDragChannel__Enum dragChannel,MethodInfo *method)

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
  if (pGVar7 != (GizmoHandle *)0x0) {
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
          *puVar6 = uVar5 | 1L << (ulonglong)(uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    pGVar8 = (this->fields)._cap2D;
    if (pGVar8 != (GizmoCap2D *)0x0) {
      pGVar7 = (pGVar8->fields)._._handle;
      if (pGVar7 == (GizmoHandle *)0x0) {
        FUN_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      bVar2 = iRam_? != 0;
      (pGVar7->fields)._DragSession_k__BackingField = (this->fields)._selectedDragSession;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&(pGVar7->fields)._DragSession_k__BackingField >> 0xc);
        puVar6 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar10 = *puVar6;
          LOCK();
          uVar5 = *puVar6;
          if (uVar10 == uVar5) {
            *puVar6 = uVar10 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (uVar10 != uVar5);
      }
      return;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void SetSnapEnabled(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_SetSnapEnabled
               (GizmoLineSlider2D *this,bool isEnabled,MethodInfo *method)

{
  pGVar1 = (this->fields)._offsetDrag;
  if (pGVar1 != (GizmoSglAxisOffsetDrag3D *)0x0) {
    (pGVar1->fields)._._isSnapEnabled = isEnabled;
    pGVar2 = (this->fields)._rotationDrag;
    if (pGVar2 != (GizmoSglAxisRotationDrag3D *)0x0) {
      (pGVar2->fields)._._isSnapEnabled = isEnabled;
      pGVar3 = (this->fields)._scaleDrag;
      if (pGVar3 != (GizmoSglAxisScaleDrag3D *)0x0) {
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


/* Void SetupSharedLookAndFeel() */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_SetupSharedLookAndFeel
               (GizmoLineSlider2D *this,MethodInfo *method)

{
  lVar1 = 0xf0;
  if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider2DLookAndFeel *)0x0) {
    lVar1 = 0xe8;
  }
  lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
  if ((lVar1 != 0) && (pGVar2 = (this->fields)._cap2D, pGVar2 != (GizmoCap2D *)0x0)) {
    bVar3 = iRam_? != 0;
    (pGVar2->fields)._sharedLookAndFeel = *(GizmoCap2DLookAndFeel **)(lVar1 + 0x70);
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(pGVar2->fields)._sharedLookAndFeel >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
    return;
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* GizmoLineSlider2D(Gizmo, Int32, Int32) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D__ctor
               (GizmoLineSlider2D *this,Gizmo *gizmo,int32_t handleId,int32_t capHandleId,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoBoxLineSlider2DController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoCap2D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoEntityTransformChangedHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__RTG__GizmoLine2DType);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoLineSlider2DControllerData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoLineSlider2DLookAndFeel);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoLineSlider2DSettings);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__GizmoLineSlider2D__OnGizmoAttemptHandleDragBegin_RTG__Gizmo__int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__GizmoLineSlider2D__OnGizmoHandleDragUpdate_RTG__Gizmo__int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__GizmoLineSlider2D__OnGizmoHandleHoverEnter_RTG__Gizmo__int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__GizmoLineSlider2D__OnGizmoHandleHoverExit_RTG__Gizmo__int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__GizmoLineSlider2D__OnGizmoPostEnabled_RTG__Gizmo_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__GizmoLineSlider2D__OnGizmoPreUpdateBegin_RTG__Gizmo_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__GizmoLineSlider2D__OnTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoOverrideColor);
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
    FUN_?(&TypeInfo__RTG__GizmoPreHoverEnterHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoPreHoverExitHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoPreUpdateBeginHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoRotationArc2D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoSglAxisOffsetDrag3D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoSglAxisRotationDrag3D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoSglAxisScaleDrag3D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoThinLineSlider2DController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoTransformAxisMap2D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoTransform);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__IGizmoLineSlider2DController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__QuadShape2D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__SegmentShape2D);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (SegmentShape2D *)FUN_?(TypeInfo__RTG__SegmentShape2D);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar2 = cRam_?;
  fVar3 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
  (pSVar1->fields)._startPoint.x = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
  (pSVar1->fields)._startPoint.y = fVar3;
  if (cVar2 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cVar2 = '\x01';
    cRam_? = '\x01';
  }
  fVar3 = (TypeInfo__UnityEngine__Vector2->static_fields->rightVector).y;
  (pSVar1->fields)._endPoint.x = (TypeInfo__UnityEngine__Vector2->static_fields->rightVector).x;
  (pSVar1->fields)._endPoint.y = fVar3;
  if (cVar2 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar3 = (TypeInfo__UnityEngine__Vector2->static_fields->rightVector).y;
  bVar4 = iRam_? != 0;
  (pSVar1->fields)._direction.x = (TypeInfo__UnityEngine__Vector2->static_fields->rightVector).x;
  (pSVar1->fields)._direction.y = fVar3;
  (pSVar1->fields)._length = 1.0;
  (this->fields)._segment = pSVar1;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields)._segment >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  this_00 = (QuadShape2D *)FUN_?(TypeInfo__RTG__QuadShape2D);
  QuadShape2D::QuadShape2D__ctor(this_00,(MethodInfo *)0x0);
  bVar4 = iRam_? != 0;
  (this->fields)._quad = this_00;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields)._quad >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  pGVar9 = (GizmoSglAxisOffsetDrag3D *)FUN_?(TypeInfo__RTG__GizmoSglAxisOffsetDrag3D);
  (pGVar9->fields)._._sensitivity = 1.0;
  GizmoDragSession::GizmoDragSession__ctor((GizmoDragSession *)pGVar9,(MethodInfo *)0x0);
  bVar4 = iRam_? != 0;
  (this->fields)._offsetDrag = pGVar9;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields)._offsetDrag >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  pGVar10 = (GizmoSglAxisRotationDrag3D *)FUN_?(TypeInfo__RTG__GizmoSglAxisRotationDrag3D);
  (pGVar10->fields)._._sensitivity = 1.0;
  GizmoDragSession::GizmoDragSession__ctor((GizmoDragSession *)pGVar10,(MethodInfo *)0x0);
  bVar4 = iRam_? != 0;
  (this->fields)._rotationDrag = pGVar10;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields)._rotationDrag >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  this_01 = (GizmoRotationArc2D *)FUN_?(TypeInfo__RTG__GizmoRotationArc2D);
  GizmoRotationArc2D::GizmoRotationArc2D__ctor(this_01,(MethodInfo *)0x0);
  bVar4 = iRam_? != 0;
  (this->fields)._rotationArc = this_01;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields)._rotationArc >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  pGVar11 = (GizmoSglAxisScaleDrag3D *)FUN_?(TypeInfo__RTG__GizmoSglAxisScaleDrag3D);
  (pGVar11->fields)._relativeScale = 1.0;
  (pGVar11->fields)._totalScale = 1.0;
  (pGVar11->fields)._._sensitivity = 1.0;
  GizmoDragSession::GizmoDragSession__ctor((GizmoDragSession *)pGVar11,(MethodInfo *)0x0);
  bVar4 = iRam_? != 0;
  (this->fields)._scaleDrag = pGVar11;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields)._scaleDrag >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  pGVar12 = (GizmoTransform *)FUN_?(TypeInfo__RTG__GizmoTransform);
  GizmoTransform::GizmoTransform__ctor(pGVar12,(MethodInfo *)0x0);
  bVar4 = iRam_? != 0;
  (this->fields)._transform = pGVar12;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields)._transform >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  pGVar13 = (GizmoTransformAxisMap2D *)FUN_?(TypeInfo__RTG__GizmoTransformAxisMap2D);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__AxisDescriptor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar3 = (TypeInfo__UnityEngine__Vector2->static_fields->rightVector).y;
  (pGVar13->fields)._freeAxis.x = (TypeInfo__UnityEngine__Vector2->static_fields->rightVector).x;
  (pGVar13->fields)._freeAxis.y = fVar3;
  pAVar14 = (AxisDescriptor *)FUN_?(TypeInfo__RTG__AxisDescriptor);
  plVar15 = (longlong *)0x0;
  (pAVar14->fields)._sign = 0;
  (pAVar14->fields)._index = 0;
  (pGVar13->fields)._mappedAxisDesc = pAVar14;
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&(pGVar13->fields)._mappedAxisDesc >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  iVar16 = iRam_?;
  (this->fields)._directionAxisMap = pGVar13;
  if (iVar16 != 0) {
    uVar5 = (uint)((ulonglong)&(this->fields)._directionAxisMap >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  pGVar17 = (GizmoOverrideColor *)FUN_?(TypeInfo__RTG__GizmoOverrideColor);
  bVar4 = iRam_? != 0;
  (this->fields)._overrideFillColor = pGVar17;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields)._overrideFillColor >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  pGVar17 = (GizmoOverrideColor *)FUN_?(TypeInfo__RTG__GizmoOverrideColor);
  bVar4 = iRam_? != 0;
  (this->fields)._overrideBorderColor = pGVar17;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields)._overrideBorderColor >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  pGVar18 = (GizmoLineSlider2DControllerData *)
            FUN_?(TypeInfo__RTG__GizmoLineSlider2DControllerData);
  bVar4 = iRam_? != 0;
  (this->fields)._controllerData = pGVar18;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields)._controllerData >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  pIVar19 = TypeRef__RTG__GizmoLine2DType;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (pIVar19 != (Il2CppType *)0x0) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar20 = FUN_?(pIVar19,1);
    plVar15 = (longlong *)FUN_?(lVar20 + 0x20);
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (plVar15 == (longlong *)0x0) {
    uVar21 = func_?(&TypeInfo__System__ArgumentNullException);
    this_06 = (ArgumentNullException *)func_?(uVar21);
    paramName = (String *)func_?(&StringLiteral_enumType);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_06,paramName,(MethodInfo *)0x0);
    uVar21 = func_?(&MethodInfo__System__Enum__GetValues_System__Type_);
    FUN_?(this_06,uVar21);
    pcVar22 = (code *)swi(3);
    (*pcVar22)();
    return;
  }
  this_02 = (Array *)(**(code **)(*plVar15 + 0x888))(plVar15);
  if (this_02 != (Array *)0x0) {
    mscorlib.dll::System::Array::Array_get_Length(this_02,(MethodInfo *)0x0);
    pIVar23 = (IGizmoLineSlider2DController__Array *)
              FUN_?(TypeInfo__RTG__IGizmoLineSlider2DController);
    bVar4 = iRam_? != 0;
    (this->fields)._controllers = pIVar23;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(this->fields)._controllers >> 0xc);
      uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
      do {
        uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
        puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
    pGVar24 = (GizmoLineSlider2DSettings *)FUN_?(TypeInfo__RTG__GizmoLineSlider2DSettings);
    bVar4 = iRam_? != 0;
    (this->fields)._settings = pGVar24;
    (pGVar24->fields)._lineHoverEps = 10.0;
    (pGVar24->fields)._boxHoverEps = 10.0;
    (pGVar24->fields)._offsetSnapStep = 1.0;
    (pGVar24->fields)._rotationSnapStep = 15.0;
    (pGVar24->fields)._scaleSnapStep = 0.1;
    (pGVar24->fields)._offsetSensitivity = 1.0;
    (pGVar24->fields)._rotationSensitivity = 0.45;
    (pGVar24->fields)._scaleSensitivity = 1.0;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(this->fields)._settings >> 0xc);
      uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
      do {
        uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
        puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
    this_03 = (GizmoLineSlider2DLookAndFeel *)
              FUN_?(TypeInfo__RTG__GizmoLineSlider2DLookAndFeel);
    GizmoLineSlider2DLookAndFeel::GizmoLineSlider2DLookAndFeel__ctor(this_03,(MethodInfo *)0x0);
    bVar4 = iRam_? != 0;
    (this->fields)._lookAndFeel = this_03;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(this->fields)._lookAndFeel >> 0xc);
      uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
      do {
        uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
        puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
    GizmoSlider::GizmoSlider__ctor((GizmoSlider *)this,gizmo,handleId,(MethodInfo *)0x0);
    pGVar25 = (this->fields)._._handle;
    if (pGVar25 != (GizmoHandle *)0x0) {
      iVar26 = GizmoHandle::GizmoHandle_Add2DShape
                        (pGVar25,(Shape2D *)(this->fields)._segment,(MethodInfo *)0x0);
      pGVar25 = (this->fields)._._handle;
      (this->fields)._segmentIndex = iVar26;
      if (pGVar25 != (GizmoHandle *)0x0) {
        iVar26 = GizmoHandle::GizmoHandle_Add2DShape
                          (pGVar25,(Shape2D *)(this->fields)._quad,(MethodInfo *)0x0);
        pGVar18 = (this->fields)._controllerData;
        (this->fields)._quadIndex = iVar26;
        iVar16 = iRam_?;
        if (pGVar18 != (GizmoLineSlider2DControllerData *)0x0) {
          (pGVar18->fields).Gizmo = (this->fields)._._gizmo;
          if (iVar16 != 0) {
            uVar5 = (uint)((ulonglong)&pGVar18->fields >> 0xc);
            uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
            do {
              uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
              puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
              LOCK();
              bVar4 = uVar7 == *puVar8;
              if (bVar4) {
                *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
              }
              UNLOCK();
              iVar16 = iRam_?;
            } while (!bVar4);
          }
          pGVar18 = (this->fields)._controllerData;
          if (pGVar18 != (GizmoLineSlider2DControllerData *)0x0) {
            (pGVar18->fields).Slider = this;
            iVar27 = 0;
            if (iVar16 != 0) {
              uVar5 = (uint)((ulonglong)&(pGVar18->fields).Slider >> 0xc);
              uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
              do {
                uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
                puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
                LOCK();
                bVar4 = uVar7 == *puVar8;
                if (bVar4) {
                  *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
                }
                UNLOCK();
                iVar27 = iRam_?;
              } while (!bVar4);
            }
            pGVar18 = (this->fields)._controllerData;
            if (pGVar18 != (GizmoLineSlider2DControllerData *)0x0) {
              (pGVar18->fields).SliderHandle = (this->fields)._._handle;
              iVar16 = 0;
              if (iVar27 != 0) {
                uVar5 = (uint)((ulonglong)&(pGVar18->fields).SliderHandle >> 0xc);
                uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
                do {
                  uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
                  puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
                  LOCK();
                  bVar4 = uVar7 == *puVar8;
                  if (bVar4) {
                    *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
                  }
                  UNLOCK();
                  iVar16 = iRam_?;
                } while (!bVar4);
              }
              pGVar18 = (this->fields)._controllerData;
              if (pGVar18 != (GizmoLineSlider2DControllerData *)0x0) {
                (pGVar18->fields).Segment = (this->fields)._segment;
                iVar27 = 0;
                if (iVar16 != 0) {
                  uVar5 = (uint)((ulonglong)&(pGVar18->fields).Segment >> 0xc);
                  uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
                  do {
                    uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
                    puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
                    LOCK();
                    bVar4 = uVar7 == *puVar8;
                    if (bVar4) {
                      *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
                    }
                    UNLOCK();
                    iVar27 = iRam_?;
                  } while (!bVar4);
                }
                pGVar18 = (this->fields)._controllerData;
                if (pGVar18 != (GizmoLineSlider2DControllerData *)0x0) {
                  (pGVar18->fields).SegmentIndex = (this->fields)._segmentIndex;
                  pGVar18 = (this->fields)._controllerData;
                  if (pGVar18 != (GizmoLineSlider2DControllerData *)0x0) {
                    (pGVar18->fields).Quad = (this->fields)._quad;
                    if (iVar27 != 0) {
                      uVar5 = (uint)((ulonglong)&(pGVar18->fields).Quad >> 0xc);
                      uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
                      do {
                        uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
                        puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
                        LOCK();
                        bVar4 = uVar7 == *puVar8;
                        if (bVar4) {
                          *puVar8 = uVar7 | 1L << (ulonglong)(uVar5 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar4);
                    }
                    pGVar18 = (this->fields)._controllerData;
                    if (pGVar18 != (GizmoLineSlider2DControllerData *)0x0) {
                      (pGVar18->fields).QuadIndex = (this->fields)._quadIndex;
                      pIVar23 = (this->fields)._controllers;
                      pGVar18 = (this->fields)._controllerData;
                      lVar20 = FUN_?(TypeInfo__RTG__GizmoThinLineSlider2DController);
                      bVar4 = iRam_? != 0;
                      *(GizmoLineSlider2DControllerData **)(lVar20 + 0x10) = pGVar18;
                      if (bVar4) {
                        uVar5 = (uint)(lVar20 + 0x10U >> 0xc);
                        uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
                        do {
                          uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
                          puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
                          LOCK();
                          bVar4 = uVar7 == *puVar8;
                          if (bVar4) {
                            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
                          }
                          UNLOCK();
                        } while (!bVar4);
                      }
                      if (pIVar23 != (IGizmoLineSlider2DController__Array *)0x0) {
                        lVar28 = FUN_?(lVar20,(pIVar23->klass->_0).element_class);
                        if (lVar28 == 0) {
                          uVar21 = FUN_?();
                          FUN_?(uVar21,0);
                          pcVar22 = (code *)swi(3);
                          (*pcVar22)();
                          return;
                        }
                        FUN_?(pIVar23,0,lVar20);
                        pIVar23 = (this->fields)._controllers;
                        pGVar18 = (this->fields)._controllerData;
                        lVar20 = FUN_?(TypeInfo__RTG__GizmoBoxLineSlider2DController);
                        bVar4 = iRam_? != 0;
                        *(GizmoLineSlider2DControllerData **)(lVar20 + 0x10) = pGVar18;
                        if (bVar4) {
                          uVar5 = (uint)(lVar20 + 0x10U >> 0xc);
                          uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
                          do {
                            uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
                            puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
                            LOCK();
                            bVar4 = uVar7 == *puVar8;
                            if (bVar4) {
                              *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
                            }
                            UNLOCK();
                          } while (!bVar4);
                        }
                        if (pIVar23 != (IGizmoLineSlider2DController__Array *)0x0) {
                          lVar28 = FUN_?(lVar20,(pIVar23->klass->_0).element_class);
                          if (lVar28 == 0) {
                            uVar21 = FUN_?();
                            FUN_?(uVar21,0);
                            pcVar22 = (code *)swi(3);
                            (*pcVar22)();
                            return;
                          }
                          FUN_?(pIVar23,1,lVar20);
                          this_04 = (GizmoCap2D *)FUN_?(TypeInfo__RTG__GizmoCap2D);
                          GizmoCap2D::GizmoCap2D__ctor(this_04,gizmo,capHandleId,(MethodInfo *)0x0);
                          bVar4 = iRam_? != 0;
                          (this->fields)._cap2D = this_04;
                          if (bVar4) {
                            uVar5 = (uint)((ulonglong)&(this->fields)._cap2D >> 0xc);
                            uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
                            do {
                              uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
                              puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
                              LOCK();
                              bVar4 = uVar7 == *puVar8;
                              if (bVar4) {
                                *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
                              }
                              UNLOCK();
                            } while (!bVar4);
                          }
                          GizmoLineSlider2D_SetupSharedLookAndFeel(this,(MethodInfo *)0x0);
                          GizmoLineSlider2D_SetDragChannel
                                    (this,GizmoDragChannel__Enum_Offset,(MethodInfo *)0x0);
                          pGVar29 = (this->fields)._._gizmo;
                          if ((pGVar29 != (Gizmo *)0x0) &&
                             (pGVar9 = (this->fields)._offsetDrag,
                             pGVar9 != (GizmoSglAxisOffsetDrag3D *)0x0)) {
                            pGVar12 = (pGVar29->fields)._transform;
                            GizmoDragSession::GizmoDragSession_AddTargetTransform
                                      ((GizmoDragSession *)pGVar9,pGVar12,(MethodInfo *)0x0);
                            pGVar10 = (this->fields)._rotationDrag;
                            if (pGVar10 != (GizmoSglAxisRotationDrag3D *)0x0) {
                              GizmoDragSession::GizmoDragSession_AddTargetTransform
                                        ((GizmoDragSession *)pGVar10,pGVar12,(MethodInfo *)0x0);
                              pGVar11 = (this->fields)._scaleDrag;
                              if (pGVar11 != (GizmoSglAxisScaleDrag3D *)0x0) {
                                GizmoDragSession::GizmoDragSession_AddTargetTransform
                                          ((GizmoDragSession *)pGVar11,pGVar12,(MethodInfo *)0x0);
                                pGVar9 = (this->fields)._offsetDrag;
                                if (pGVar9 != (GizmoSglAxisOffsetDrag3D *)0x0) {
                                  pGVar12 = (this->fields)._transform;
                                  GizmoDragSession::GizmoDragSession_AddTargetTransform
                                            ((GizmoDragSession *)pGVar9,pGVar12,(MethodInfo *)0x0);
                                  pGVar10 = (this->fields)._rotationDrag;
                                  if (pGVar10 != (GizmoSglAxisRotationDrag3D *)0x0) {
                                    GizmoDragSession::GizmoDragSession_AddTargetTransform
                                              ((GizmoDragSession *)pGVar10,pGVar12,(MethodInfo *)0x0
                                              );
                                    pGVar11 = (this->fields)._scaleDrag;
                                    if (pGVar11 != (GizmoSglAxisScaleDrag3D *)0x0) {
                                      GizmoDragSession::GizmoDragSession_AddTargetTransform
                                                ((GizmoDragSession *)pGVar11,pGVar12,
                                                 (MethodInfo *)0x0);
                                      pGVar9 = (this->fields)._offsetDrag;
                                      if ((this->fields)._cap2D != (GizmoCap2D *)0x0) {
                                        if (cRam_? == '\0') {
                                          FUN_?(&TypeInfo__RTG__IGizmoDragSession);
                                          LOCK();
                                          UNLOCK();
                                          cRam_? = '\x01';
                                        }
                                        if (pGVar9 != (GizmoSglAxisOffsetDrag3D *)0x0) {
                                          FUN_?(9);
                                          pGVar10 = (this->fields)._rotationDrag;
                                          if ((this->fields)._cap2D != (GizmoCap2D *)0x0) {
                                            if (cRam_? == '\0') {
                                              FUN_?(&TypeInfo__RTG__IGizmoDragSession);
                                              LOCK();
                                              UNLOCK();
                                              cRam_? = '\x01';
                                            }
                                            if (pGVar10 != (GizmoSglAxisRotationDrag3D *)0x0) {
                                              FUN_?(9);
                                              pGVar12 = (this->fields)._transform;
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
                                                  MethodInfo__RTG__GizmoLineSlider2D__OnTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
                                                  ,(MethodInfo *)0x0);
                                              if (((pGVar12 != (GizmoTransform *)0x0) &&
                                                  (GizmoTransform::GizmoTransform_add_Changed
                                                             (pGVar12,value,(MethodInfo *)0x0),
                                                  gizmo != (Gizmo *)0x0)) &&
                                                 (pGVar12 = (this->fields)._transform,
                                                 pGVar12 != (GizmoTransform *)0x0)) {
                                                GizmoTransform::GizmoTransform_SetParent
                                                          (pGVar12,(gizmo->fields)._transform,
                                                           (MethodInfo *)0x0);
                                                pGVar29 = (this->fields)._._gizmo;
                                                value_00 = (GizmoPreUpdateBeginHandler *)
                                                           FUN_?(
                                                  TypeInfo__RTG__GizmoPreUpdateBeginHandler);
                                                UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                UnityAction`1[System::Object]::
                                                UnityAction_1_System_Object___ctor
                                                          ((UnityAction_1_System_Object_ *)value_00,
                                                           (Object *)this,
                                                                                                                      
                                                  MethodInfo__RTG__GizmoLineSlider2D__OnGizmoPreUpdateBegin_RTG__Gizmo_
                                                  ,(MethodInfo *)0x0);
                                                if (pGVar29 != (Gizmo *)0x0) {
                                                  Gizmo::Gizmo_add_PreUpdateBegin
                                                            (pGVar29,value_00,(MethodInfo *)0x0);
                                                  pGVar29 = (this->fields)._._gizmo;
                                                  value_01 = (GizmoPreDragUpdateHandler *)
                                                             FUN_?(
                                                  TypeInfo__RTG__GizmoPreDragUpdateHandler);
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`2[System::Object,System::Int32]::
                                                  UnityAction_2_System_Object_System_Int32___ctor
                                                            ((
                                                  UnityAction_2_System_Object_System_Int32_ *)
                                                  value_01,(Object *)this,
                                                  MethodInfo__RTG__GizmoLineSlider2D__OnGizmoHandleDragUpdate_RTG__Gizmo__int_
                                                  ,(MethodInfo *)0x0);
                                                  if (pGVar29 != (Gizmo *)0x0) {
                                                    Gizmo::Gizmo_add_PreDragUpdate
                                                              (pGVar29,value_01,(MethodInfo *)0x0);
                                                    pGVar29 = (this->fields)._._gizmo;
                                                    value_02 = (GizmoPreDragBeginAttemptHandler *)
                                                               FUN_?(
                                                  TypeInfo__RTG__GizmoPreDragBeginAttemptHandler);
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`2[System::Object,System::Int32]::
                                                  UnityAction_2_System_Object_System_Int32___ctor
                                                            ((
                                                  UnityAction_2_System_Object_System_Int32_ *)
                                                  value_02,(Object *)this,
                                                  MethodInfo__RTG__GizmoLineSlider2D__OnGizmoAttemptHandleDragBegin_RTG__Gizmo__int_
                                                  ,(MethodInfo *)0x0);
                                                  if (pGVar29 != (Gizmo *)0x0) {
                                                    Gizmo::Gizmo_add_PreDragBeginAttempt
                                                              (pGVar29,value_02,(MethodInfo *)0x0);
                                                    pGVar29 = (this->fields)._._gizmo;
                                                    value_03 = (GizmoPreHoverEnterHandler *)
                                                               FUN_?(
                                                  TypeInfo__RTG__GizmoPreHoverEnterHandler);
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`2[System::Object,System::Int32]::
                                                  UnityAction_2_System_Object_System_Int32___ctor
                                                            ((
                                                  UnityAction_2_System_Object_System_Int32_ *)
                                                  value_03,(Object *)this,
                                                  MethodInfo__RTG__GizmoLineSlider2D__OnGizmoHandleHoverEnter_RTG__Gizmo__int_
                                                  ,(MethodInfo *)0x0);
                                                  if (pGVar29 != (Gizmo *)0x0) {
                                                    Gizmo::Gizmo_add_PreHoverEnter
                                                              (pGVar29,value_03,(MethodInfo *)0x0);
                                                    pGVar29 = (this->fields)._._gizmo;
                                                    value_04 = (GizmoPreHoverExitHandler *)
                                                               FUN_?(
                                                  TypeInfo__RTG__GizmoPreHoverExitHandler);
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`2[System::Object,System::Int32]::
                                                  UnityAction_2_System_Object_System_Int32___ctor
                                                            ((
                                                  UnityAction_2_System_Object_System_Int32_ *)
                                                  value_04,(Object *)this,
                                                  MethodInfo__RTG__GizmoLineSlider2D__OnGizmoHandleHoverExit_RTG__Gizmo__int_
                                                  ,(MethodInfo *)0x0);
                                                  if (pGVar29 != (Gizmo *)0x0) {
                                                    Gizmo::Gizmo_add_PreHoverExit
                                                              (pGVar29,value_04,(MethodInfo *)0x0);
                                                    pGVar29 = (this->fields)._._gizmo;
                                                    this_05 = (UnityAction_1_System_Object_ *)
                                                              FUN_?(
                                                  TypeInfo__RTG__GizmoPostEnabledHandler);
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`1[System::Object]::
                                                  UnityAction_1_System_Object___ctor
                                                            (this_05,(Object *)this,
                                                                                                                          
                                                  MethodInfo__RTG__GizmoLineSlider2D__OnGizmoPostEnabled_RTG__Gizmo_
                                                  ,(MethodInfo *)0x0);
                                                  if (pGVar29 != (Gizmo *)0x0) {
                                                    if (cRam_? == '\0') {
                                                      FUN_?(&
                                                  TypeInfo__RTG__GizmoPostEnabledHandler);
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  pGVar30 = &pGVar29->fields;
                                                  a = (pGVar29->fields).PostEnabled;
                                                  do {
                                                    pGVar31 = (GizmoPostEnabledHandler *)
                                                              mscorlib.dll::System::Delegate::
                                                              Delegate_Combine((Delegate *)a,
                                                                               (Delegate *)this_05,
                                                                               (MethodInfo *)0x0);
                                                    pGVar32 = (GizmoPostEnabledHandler *)0x0;
                                                    if (pGVar31 != (GizmoPostEnabledHandler *)0x0) {
                                                      if (pGVar31->klass ==
                                                          TypeInfo__RTG__GizmoPostEnabledHandler) {
                                                        pGVar32 = pGVar31;
                                                      }
                                                      if (pGVar32 == (GizmoPostEnabledHandler *)0x0)
                                                      {
                                                        FUN_?(pGVar31);
                                                        pcVar22 = (code *)swi(3);
                                                        (*pcVar22)();
                                                        return;
                                                      }
                                                    }
                                                    LOCK();
                                                    pGVar31 = pGVar30->PostEnabled;
                                                    bVar4 = a == pGVar31;
                                                    if (bVar4) {
                                                      pGVar30->PostEnabled = pGVar32;
                                                      pGVar31 = a;
                                                    }
                                                    UNLOCK();
                                                    pGVar32 = a;
                                                    if (!bVar4) {
                                                      pGVar32 = pGVar31;
                                                    }
                                                    if (iRam_? != 0) {
                                                      uVar5 = (uint)((ulonglong)pGVar30 >> 0xc);
                                                      uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6)
                                                      ;
                                                      do {
                                                        uVar7 = *(ulonglong *)
                                                                 (uVar6 * 8 + 0xADDR);
                                                        puVar8 = (ulonglong *)
                                                                 (uVar6 * 8 + 0xADDR);
                                                        LOCK();
                                                        bVar4 = uVar7 == *puVar8;
                                                        if (bVar4) {
                                                          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
                                                        }
                                                        UNLOCK();
                                                      } while (!bVar4);
                                                    }
                                                    bVar4 = pGVar32 != a;
                                                    a = pGVar32;
                                                  } while (bVar4);
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
  FUN_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Vector2 get_Direction() */

Vector2 Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_get_Direction
                  (GizmoLineSlider2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._directionAxisMap;
  if (pGVar1 == (GizmoTransformAxisMap2D *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    VVar3 = (Vector2)(*pcVar2)();
    return VVar3;
  }
  pAVar4 = (AxisDescriptor *)0x0;
  if ((pGVar1->fields)._transform == (GizmoTransform *)0x0) {
    return (pGVar1->fields)._freeAxis;
  }
  pGVar5 = (pGVar1->fields)._transform;
  if (((pGVar5 != (GizmoTransform *)0x0) &&
      (pAVar4 = (pGVar1->fields)._mappedAxisDesc, pAVar4 != (AxisDescriptor *)0x0)) &&
     (pVVar6 = (pGVar5->fields)._axes2D, pGVar1 = (GizmoTransformAxisMap2D *)0x0,
     pVVar6 != (Vector2__Array *)0x0)) {
    uVar7 = (pAVar4->fields)._index;
    if (uVar7 < (uint)pVVar6->max_length) {
      fVar8 = pVVar6->vector[(int)uVar7].x;
      fVar9 = pVVar6->vector[(int)uVar7].y;
      if ((pAVar4->fields)._sign == 1) {
        fVar8 = (float)((uint)fVar8 ^ _UNK_?);
        fVar9 = (float)((uint)fVar9 ^ _UNK_?);
      }
      VVar3.y = fVar9;
      VVar3.x = fVar8;
      return VVar3;
    }
    FUN_?();
    pcVar2 = (code *)swi(3);
    VVar3 = (Vector2)(*pcVar2)();
    return VVar3;
  }
  FUN_?(pGVar1,pAVar4);
  pcVar2 = (code *)swi(3);
  VVar3 = (Vector2)(*pcVar2)();
  return VVar3;
}


/* Boolean get_IsRotating() */

bool Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_get_IsRotating
               (GizmoLineSlider2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._rotationDrag;
  if (pGVar1 != (GizmoSglAxisRotationDrag3D *)0x0) {
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


/* GizmoLineSlider2DLookAndFeel get_LookAndFeel() */

GizmoLineSlider2DLookAndFeel *
Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_get_LookAndFeel
          (GizmoLineSlider2D *this,MethodInfo *method)

{
  if ((this->fields)._sharedLookAndFeel != (GizmoLineSlider2DLookAndFeel *)0x0) {
    return (this->fields)._sharedLookAndFeel;
  }
  return (this->fields)._lookAndFeel;
}


/* Vector3 get_OffsetDragOrigin() */

Vector3 * Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_get_OffsetDragOrigin
                    (Vector3 *__return_storage_ptr__,GizmoLineSlider2D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._offsetDragOrigin.z;
  fVar2 = (this->fields)._offsetDragOrigin.y;
  __return_storage_ptr__->x = (this->fields)._offsetDragOrigin.x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar1;
  return __return_storage_ptr__;
}


/* Vector3 get_RelativeDragOffset() */

Vector3 * Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_get_RelativeDragOffset
                    (Vector3 *__return_storage_ptr__,GizmoLineSlider2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._offsetDrag;
  if (pGVar1 != (GizmoSglAxisOffsetDrag3D *)0x0) {
    fVar2 = (pGVar1->fields)._._._relativeDragOffset.y;
    fVar3 = (pGVar1->fields)._._._relativeDragOffset.z;
    __return_storage_ptr__->x = (pGVar1->fields)._._._relativeDragOffset.x;
    __return_storage_ptr__->y = fVar2;
    __return_storage_ptr__->z = fVar3;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pVVar5 = (Vector3 *)(*pcVar4)();
  return pVVar5;
}


/* Single get_RelativeDragRotation() */

float Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_get_RelativeDragRotation
                (GizmoLineSlider2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._rotationDrag;
  if (pGVar1 != (GizmoSglAxisRotationDrag3D *)0x0) {
    return (pGVar1->fields)._relativeRotation;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_RelativeDragScale() */

float Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_get_RelativeDragScale
                (GizmoLineSlider2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scaleDrag;
  if (pGVar1 != (GizmoSglAxisScaleDrag3D *)0x0) {
    return (pGVar1->fields)._relativeScale;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Quaternion get_Rotation() */

Quaternion *
Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_get_Rotation
          (Quaternion *__return_storage_ptr__,GizmoLineSlider2D *this,MethodInfo *method)

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

float Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_get_RotationDegrees
                (GizmoLineSlider2D *this,MethodInfo *method)

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

Vector3 * Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_get_ScaleDragOrigin
                    (Vector3 *__return_storage_ptr__,GizmoLineSlider2D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._scaleDragOrigin.z;
  fVar2 = (this->fields)._scaleDragOrigin.y;
  __return_storage_ptr__->x = (this->fields)._scaleDragOrigin.x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar1;
  return __return_storage_ptr__;
}


/* Vector2 get_StartPosition() */

Vector2 Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_get_StartPosition
                  (GizmoLineSlider2D *this,MethodInfo *method)

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


/* Vector3 get_TotalDragOffset() */

Vector3 * Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_get_TotalDragOffset
                    (Vector3 *__return_storage_ptr__,GizmoLineSlider2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._offsetDrag;
  if (pGVar1 != (GizmoSglAxisOffsetDrag3D *)0x0) {
    fVar2 = (pGVar1->fields)._._._totalDragOffset.y;
    fVar3 = (pGVar1->fields)._._._totalDragOffset.z;
    __return_storage_ptr__->x = (pGVar1->fields)._._._totalDragOffset.x;
    __return_storage_ptr__->y = fVar2;
    __return_storage_ptr__->z = fVar3;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pVVar5 = (Vector3 *)(*pcVar4)();
  return pVVar5;
}


/* Single get_TotalDragRotation() */

float Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_get_TotalDragRotation
                (GizmoLineSlider2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._rotationDrag;
  if (pGVar1 != (GizmoSglAxisRotationDrag3D *)0x0) {
    return (pGVar1->fields)._totalRotation;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_TotalDragScale() */

float Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_get_TotalDragScale
                (GizmoLineSlider2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scaleDrag;
  if (pGVar1 != (GizmoSglAxisScaleDrag3D *)0x0) {
    return (pGVar1->fields)._totalScale;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Void set_OffsetDragOrigin(Vector3) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_set_OffsetDragOrigin
               (GizmoLineSlider2D *this,Vector3 *value,MethodInfo *method)

{
  fVar1 = value->y;
  fVar2 = value->z;
  (this->fields)._offsetDragOrigin.x = value->x;
  (this->fields)._offsetDragOrigin.y = fVar1;
  (this->fields)._offsetDragOrigin.z = fVar2;
  return;
}


/* Void set_ScaleDragAxisIndex(Int32) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_set_ScaleDragAxisIndex
               (GizmoLineSlider2D *this,int32_t value,MethodInfo *method)

{
  if (value < 0) {
    (this->fields)._scaleDragAxisIndex = 0;
    return;
  }
  if (2 < value) {
    (this->fields)._scaleDragAxisIndex = 2;
    return;
  }
  (this->fields)._scaleDragAxisIndex = value;
  return;
}


/* Void set_ScaleDragOrigin(Vector3) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_set_ScaleDragOrigin
               (GizmoLineSlider2D *this,Vector3 *value,MethodInfo *method)

{
  fVar1 = value->y;
  fVar2 = value->z;
  (this->fields)._scaleDragOrigin.x = value->x;
  (this->fields)._scaleDragOrigin.y = fVar1;
  (this->fields)._scaleDragOrigin.z = fVar2;
  return;
}


/* Void set_SharedLookAndFeel(GizmoLineSlider2DLookAndFeel) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_set_SharedLookAndFeel
               (GizmoLineSlider2D *this,GizmoLineSlider2DLookAndFeel *value,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields)._sharedLookAndFeel = value;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._sharedLookAndFeel >> 0xc);
    method = (MethodInfo *)(ulonglong)(uVar2 & 0x3f);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (longlong)method;
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  lVar6 = 0xf0;
  if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider2DLookAndFeel *)0x0) {
    lVar6 = 0xe8;
  }
  lVar6 = *(longlong *)((longlong)&this->klass + lVar6);
  if (lVar6 != 0) {
    pGVar7 = (this->fields)._cap2D;
    method = (MethodInfo *)0x0;
    if (pGVar7 != (GizmoCap2D *)0x0) {
      bVar1 = iRam_? != 0;
      (pGVar7->fields)._sharedLookAndFeel = *(GizmoCap2DLookAndFeel **)(lVar6 + 0x70);
      if (bVar1) {
        uVar2 = (uint)((ulonglong)&(pGVar7->fields)._sharedLookAndFeel >> 0xc);
        puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar4 = *puVar3;
          LOCK();
          uVar5 = *puVar3;
          if (uVar4 == uVar5) {
            *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (uVar4 != uVar5);
      }
      return;
    }
  }
  FUN_?(this,0xe8,method);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void set_StartPosition(Vector2) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2D::GizmoLineSlider2D_set_StartPosition
               (GizmoLineSlider2D *this,Vector2 value,MethodInfo *method)

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


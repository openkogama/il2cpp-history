
/* Void AddTargetTransform(GizmoTransform) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_AddTargetTransform
               (GizmoLineSlider3D *this,GizmoTransform *transform,MethodInfo *method)

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

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_AddTargetTransform_1
               (GizmoLineSlider3D *this,GizmoTransform *transform,GizmoDragChannel__Enum dragChannel
               ,MethodInfo *method)

{
  if (dragChannel == GizmoDragChannel__Enum_Offset) {
    pGVar1 = (GizmoSglAxisRotationDrag3D *)(this->fields)._offsetDrag;
  }
  else if (dragChannel == GizmoDragChannel__Enum_Rotation) {
    pGVar1 = (this->fields)._rotationDrag;
  }
  else {
    if ((this->fields)._dragChannel != 3) {
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


/* Void ApplyZoomFactor(Camera) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_ApplyZoomFactor
               (GizmoLineSlider3D *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoLineSlider3DController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = 0xe0;
  if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider3DLookAndFeel *)0x0) {
    lVar1 = 0xd8;
  }
  lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x24) == '\0') {
      return;
    }
    this_00 = (this->fields)._._handle;
    if (this_00 != (GizmoHandle *)0x0) {
      zoomFactor = GizmoHandle::GizmoHandle_GetZoomFactor(this_00,camera,(MethodInfo *)0x0);
      uVar2 = 0xe0;
      if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider3DLookAndFeel *)0x0) {
        uVar2 = 0xd8;
      }
      lVar1 = *(longlong *)((longlong)&this->klass + (ulonglong)uVar2);
      if ((lVar1 != 0) &&
         (pIVar3 = (this->fields)._controllers, pIVar3 != (IGizmoLineSlider3DController__Array *)0x0
         )) {
        uVar2 = *(uint *)(lVar1 + 0x14);
        if ((uint)pIVar3->max_length <= uVar2) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (pIVar3->vector[(int)uVar2] != (IGizmoLineSlider3DController *)0x0) {
          FUN_?(1,TypeInfo__RTG__IGizmoLineSlider3DController,pIVar3->vector[(int)uVar2],
                        zoomFactor);
          pGVar5 = (this->fields)._cap3D;
          if (pGVar5 != (GizmoCap3D *)0x0) {
            GizmoCap3D::GizmoCap3D_ApplyZoomFactor(pGVar5,camera,(MethodInfo *)0x0);
            pGVar5 = (this->fields)._cap3D;
            pVVar6 = GizmoLineSlider3D_GetRealDirection(aVStack_7,this,(MethodInfo *)0x0);
            uVar8._0_4_ = pVVar6->x;
            uVar8._4_4_ = pVVar6->y;
            fVar9 = pVVar6->z;
            pVVar6 = GizmoLineSlider3D_GetRealEndPosition
                               (aVStack_7,this,zoomFactor,(MethodInfo *)0x0);
            if (pGVar5 != (GizmoCap3D *)0x0) {
              VStack_10.x = pVVar6->x;
              VStack_10.y = pVVar6->y;
              VStack_10.z = pVVar6->z;
              aVStack_7[0]._0_8_ = uVar8;
              aVStack_7[0].z = fVar9;
              GizmoCap3D::GizmoCap3D_CapSlider3D(pGVar5,aVStack_7,&VStack_10,(MethodInfo *)0x0);
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


/* Single GetRealBoxDepth(Single) */

float Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_GetRealBoxDepth
                (GizmoLineSlider3D *this,float zoomFactor,MethodInfo *method)

{
  lVar1 = 0xe0;
  lVar2 = 0xe0;
  if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider3DLookAndFeel *)0x0) {
    lVar2 = 0xd8;
  }
  lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
  if (lVar2 == 0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    fVar4 = (float)(*pcVar3)();
    return fVar4;
  }
  pGVar5 = (this->fields)._sharedLookAndFeel;
  lVar6 = 0xe0;
  if (*(char *)(lVar2 + 0x24) != '\0') {
    if (pGVar5 == (GizmoLineSlider3DLookAndFeel *)0x0) {
      lVar6 = 0xd8;
      lVar1 = 0xd8;
    }
    return *(float *)(*(longlong *)((longlong)&this->klass + lVar6) + 0x20) *
           *(float *)(*(longlong *)((longlong)&this->klass + lVar1) + 0x2c) * zoomFactor;
  }
  if (pGVar5 == (GizmoLineSlider3DLookAndFeel *)0x0) {
    lVar6 = 0xd8;
  }
  lVar2 = 0xe0;
  if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider3DLookAndFeel *)0x0) {
    lVar2 = 0xd8;
  }
  return *(float *)(*(longlong *)((longlong)&this->klass + lVar2) + 0x20) *
         *(float *)(*(longlong *)((longlong)&this->klass + lVar6) + 0x2c) * _UNK_?;
}


/* Single GetRealBoxHeight(Single) */

float Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_GetRealBoxHeight
                (GizmoLineSlider3D *this,float zoomFactor,MethodInfo *method)

{
  lVar1 = 0xe0;
  lVar2 = 0xe0;
  if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider3DLookAndFeel *)0x0) {
    lVar2 = 0xd8;
  }
  lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
  if (lVar2 == 0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    fVar4 = (float)(*pcVar3)();
    return fVar4;
  }
  pGVar5 = (this->fields)._sharedLookAndFeel;
  lVar6 = 0xe0;
  if (*(char *)(lVar2 + 0x24) != '\0') {
    if (pGVar5 == (GizmoLineSlider3DLookAndFeel *)0x0) {
      lVar6 = 0xd8;
      lVar1 = 0xd8;
    }
    return *(float *)(*(longlong *)((longlong)&this->klass + lVar6) + 0x20) *
           *(float *)(*(longlong *)((longlong)&this->klass + lVar1) + 0x28) * zoomFactor;
  }
  if (pGVar5 == (GizmoLineSlider3DLookAndFeel *)0x0) {
    lVar6 = 0xd8;
  }
  lVar2 = 0xe0;
  if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider3DLookAndFeel *)0x0) {
    lVar2 = 0xd8;
  }
  return *(float *)(*(longlong *)((longlong)&this->klass + lVar2) + 0x20) *
         *(float *)(*(longlong *)((longlong)&this->klass + lVar6) + 0x28) * _UNK_?;
}


/* Single GetRealCylinderRadius(Single) */

float Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_GetRealCylinderRadius
                (GizmoLineSlider3D *this,float zoomFactor,MethodInfo *method)

{
  lVar1 = 0xe0;
  lVar2 = 0xe0;
  if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider3DLookAndFeel *)0x0) {
    lVar2 = 0xd8;
  }
  lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
  if (lVar2 == 0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    fVar4 = (float)(*pcVar3)();
    return fVar4;
  }
  pGVar5 = (this->fields)._sharedLookAndFeel;
  lVar6 = 0xe0;
  if (*(char *)(lVar2 + 0x24) != '\0') {
    if (pGVar5 == (GizmoLineSlider3DLookAndFeel *)0x0) {
      lVar6 = 0xd8;
      lVar1 = 0xd8;
    }
    return *(float *)(*(longlong *)((longlong)&this->klass + lVar6) + 0x20) *
           *(float *)(*(longlong *)((longlong)&this->klass + lVar1) + 0x30) * zoomFactor;
  }
  if (pGVar5 == (GizmoLineSlider3DLookAndFeel *)0x0) {
    lVar6 = 0xd8;
  }
  lVar2 = 0xe0;
  if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider3DLookAndFeel *)0x0) {
    lVar2 = 0xd8;
  }
  return *(float *)(*(longlong *)((longlong)&this->klass + lVar2) + 0x20) *
         *(float *)(*(longlong *)((longlong)&this->klass + lVar6) + 0x30) * _UNK_?;
}


/* Vector3 GetRealDirection() */

Vector3 * Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_GetRealDirection
                    (Vector3 *__return_storage_ptr__,GizmoLineSlider3D *this,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pGVar2 = (this->fields)._scaleDrag;
  if (pGVar2 == (GizmoSglAxisScaleDrag3D *)0x0) goto code_?;
  cVar3 = (*(pGVar2->klass->vtable).get_IsActive_1.methodPtr)
                    (pGVar2,(pGVar2->klass->vtable).get_IsActive_1.method);
  if (cVar3 == '\0') {
    pGVar4 = (this->fields)._._gizmo;
    if (pGVar4 == (Gizmo *)0x0) goto code_?;
    if (((pGVar4->fields)._dragInfo._isDragged != 0) &&
       (bVar5 = GizmoLineSlider3D_IsScalerHandleRegistered_1
                          (this,(pGVar4->fields)._dragInfo._handleId,
                           (this->fields)._scaleDragAxisIndex,(MethodInfo *)0x0), bVar5 != 0)) {
      pGVar4 = (this->fields)._._gizmo;
      if (pGVar4 == (Gizmo *)0x0) goto code_?;
      aVStack_6[0].x = (pGVar4->fields)._dragInfo._totalScale.x;
      aVStack_6[0].y = (pGVar4->fields)._dragInfo._totalScale.y;
      iVar7 = (this->fields)._scaleDragAxisIndex;
      fVar8 = (pGVar4->fields)._dragInfo._totalScale.z;
      if (iVar7 == 0) {
        fVar8 = aVStack_6[0].x;
      }
      else if (iVar7 == 1) {
        fVar8 = aVStack_6[0].y;
      }
      else if (iVar7 != 2) {
        uVar9 = func_?(&TypeInfo__System__IndexOutOfRangeException);
        this_01 = (IndexOutOfRangeException *)func_?(uVar9);
        message = (String *)func_?(&StringLiteral_Invalid_Vector3_index_);
        mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
                  (this_01,message,(MethodInfo *)0x0);
        uVar9 = func_?(&MethodInfo__UnityEngine__Vector3__get_Item_int_);
        FUN_?(this_01,uVar9);
        pcVar10 = (code *)swi(3);
        pVVar11 = (Vector3 *)(*pcVar10)();
        return pVVar11;
      }
      goto code_?;
    }
  }
  else {
    pGVar2 = (this->fields)._scaleDrag;
    if (pGVar2 == (GizmoSglAxisScaleDrag3D *)0x0) goto code_?;
    fVar8 = (pGVar2->fields)._totalScale;
code_?:
    if (fVar8 < 0.0) {
      fVar1 = _UNK_?;
    }
  }
  this_00 = (this->fields)._directionAxisMap;
  if (this_00 != (GizmoTransformAxisMap3D *)0x0) {
    pVVar11 = GizmoTransformAxisMap3D::GizmoTransformAxisMap3D_get_Axis
                       (aVStack_6,this_00,(MethodInfo *)0x0);
    uVar12 = pVVar11->x;
    fVar8 = pVVar11->y;
    fVar13 = pVVar11->z;
    __return_storage_ptr__->x = (float)uVar12 * fVar1;
    __return_storage_ptr__->y = fVar8 * fVar1;
    __return_storage_ptr__->z = fVar13 * fVar1;
    return __return_storage_ptr__;
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  pVVar11 = (Vector3 *)(*pcVar10)();
  return pVVar11;
}


/* Vector3 GetRealEndPosition(Single) */

Vector3 * Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_GetRealEndPosition
                    (Vector3 *__return_storage_ptr__,GizmoLineSlider3D *this,float zoomFactor,
                    MethodInfo *method)

{
  pGVar1 = (this->fields)._transform;
  if (pGVar1 != (GizmoTransform *)0x0) {
    this_00 = (this->fields)._directionAxisMap;
    uVar2 = (pGVar1->fields)._position3D.x;
    uVar3 = (pGVar1->fields)._position3D.y;
    fVar4 = (pGVar1->fields)._position3D.z;
    if (this_00 != (GizmoTransformAxisMap3D *)0x0) {
      pVVar5 = GizmoTransformAxisMap3D::GizmoTransformAxisMap3D_get_Axis
                         (aVStack_6,this_00,(MethodInfo *)0x0);
      uVar7 = pVVar5->x;
      uVar8 = pVVar5->y;
      fVar9 = pVVar5->z;
      fVar10 = GizmoLineSlider3D_GetRealLength(this,zoomFactor,(MethodInfo *)0x0);
      __return_storage_ptr__->x = (float)uVar7 * fVar10 + (float)uVar2;
      __return_storage_ptr__->y = (float)uVar8 * fVar10 + (float)uVar3;
      __return_storage_ptr__->z = fVar9 * fVar10 + fVar4;
      return __return_storage_ptr__;
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  pVVar5 = (Vector3 *)(*pcVar11)();
  return pVVar5;
}


/* Vector3 GetRealEndPositionWith3DCap(Single) */

Vector3 * Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_GetRealEndPositionWith3DCap
                    (Vector3 *__return_storage_ptr__,GizmoLineSlider3D *this,float zoomFactor,
                    MethodInfo *method)

{
  pGVar1 = (this->fields)._transform;
  if (pGVar1 != (GizmoTransform *)0x0) {
    this_00 = (this->fields)._directionAxisMap;
    uVar2 = (pGVar1->fields)._position3D.x;
    uVar3 = (pGVar1->fields)._position3D.y;
    fVar4 = (pGVar1->fields)._position3D.z;
    if (this_00 != (GizmoTransformAxisMap3D *)0x0) {
      pVVar5 = GizmoTransformAxisMap3D::GizmoTransformAxisMap3D_get_Axis
                          (aVStack_6,this_00,(MethodInfo *)0x0);
      pGVar7 = (this->fields)._cap3D;
      uVar8 = pVVar5->x;
      uVar9 = pVVar5->y;
      fVar10 = pVVar5->z;
      if (pGVar7 != (GizmoCap3D *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__RTG__IGizmoCap3DController);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        lVar11 = 0xa0;
        if ((pGVar7->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
          lVar11 = 0x98;
        }
        lVar11 = *(longlong *)((longlong)&pGVar7->klass + lVar11);
        if ((lVar11 != 0) &&
           (pIVar12 = (pGVar7->fields)._controllers, pIVar12 != (IGizmoCap3DController__Array *)0x0)
           ) {
          uVar13 = *(uint *)(lVar11 + 0x10);
          if ((uint)pIVar12->max_length <= uVar13) {
            FUN_?();
            pcVar14 = (code *)swi(3);
            pVVar5 = (Vector3 *)(*pcVar14)();
            return pVVar5;
          }
          if (pIVar12->vector[(int)uVar13] != (IGizmoCap3DController *)0x0) {
            fVar15 = (float)FUN_?(4,TypeInfo__RTG__IGizmoCap3DController,
                                          pIVar12->vector[(int)uVar13],zoomFactor);
            fVar16 = GizmoLineSlider3D_GetRealLength(this,zoomFactor,(MethodInfo *)0x0);
            fVar16 = fVar16 + fVar15;
            __return_storage_ptr__->x = fVar16 * (float)uVar8 + (float)uVar2;
            __return_storage_ptr__->y = fVar16 * (float)uVar9 + (float)uVar3;
            __return_storage_ptr__->z = fVar16 * fVar10 + fVar4;
            return __return_storage_ptr__;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  pVVar5 = (Vector3 *)(*pcVar14)();
  return pVVar5;
}


/* Single GetRealLength(Single) */

float Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_GetRealLength
                (GizmoLineSlider3D *this,float zoomFactor,MethodInfo *method)

{
  lVar1 = 0xe0;
  lVar2 = 0xe0;
  if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider3DLookAndFeel *)0x0) {
    lVar2 = 0xd8;
  }
  lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
  if (lVar2 != 0) {
    pGVar3 = (this->fields)._sharedLookAndFeel;
    lVar4 = 0xe0;
    if (*(char *)(lVar2 + 0x24) == '\0') {
      if (pGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) {
        lVar4 = 0xd8;
      }
      lVar1 = 0xe0;
      if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider3DLookAndFeel *)0x0) {
        lVar1 = 0xd8;
      }
      lVar2 = *(longlong *)((longlong)&this->klass + lVar4);
      lVar4 = *(longlong *)((longlong)&this->klass + lVar1);
      zoomFactor = _UNK_?;
    }
    else {
      if (pGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) {
        lVar4 = 0xd8;
        lVar1 = 0xd8;
      }
      lVar4 = *(longlong *)((longlong)&this->klass + lVar4);
      lVar2 = *(longlong *)((longlong)&this->klass + lVar1);
    }
    pGVar5 = (this->fields)._scaleDrag;
    fVar6 = *(float *)(lVar2 + 0x1c) * *(float *)(lVar4 + 0x20) * zoomFactor;
    if (pGVar5 != (GizmoSglAxisScaleDrag3D *)0x0) {
      cVar7 = (*(pGVar5->klass->vtable).get_IsActive_1.methodPtr)
                        (pGVar5,(pGVar5->klass->vtable).get_IsActive_1.method);
      if (cVar7 == '\0') {
        pGVar8 = (this->fields)._._gizmo;
        if (pGVar8 != (Gizmo *)0x0) {
          if ((pGVar8->fields)._dragInfo._isDragged == 0) {
            return fVar6;
          }
          bVar9 = GizmoLineSlider3D_IsScalerHandleRegistered_1
                            (this,(pGVar8->fields)._dragInfo._handleId,
                             (this->fields)._scaleDragAxisIndex,(MethodInfo *)0x0);
          if (bVar9 == 0) {
            return fVar6;
          }
          pGVar8 = (this->fields)._._gizmo;
          if (pGVar8 != (Gizmo *)0x0) {
            uVar10 = (pGVar8->fields)._dragInfo._totalScale.x;
            uVar11 = (pGVar8->fields)._dragInfo._totalScale.y;
            iVar12 = (this->fields)._scaleDragAxisIndex;
            if (iVar12 == 0) {
              return fVar6 * (float)uVar10;
            }
            if (iVar12 != 1) {
              if (iVar12 == 2) {
                return fVar6 * (pGVar8->fields)._dragInfo._totalScale.z;
              }
              uVar13 = func_?(&TypeInfo__System__IndexOutOfRangeException);
              this_00 = (IndexOutOfRangeException *)func_?(uVar13);
              message = (String *)func_?(&StringLiteral_Invalid_Vector3_index_);
              mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
                        (this_00,message,(MethodInfo *)0x0);
              uVar13 = func_?(&MethodInfo__UnityEngine__Vector3__get_Item_int_);
              FUN_?(this_00,uVar13);
              pcVar14 = (code *)swi(3);
              fVar6 = (float)(*pcVar14)();
              return fVar6;
            }
            return fVar6 * (float)uVar11;
          }
        }
      }
      else {
        pGVar5 = (this->fields)._scaleDrag;
        if (pGVar5 != (GizmoSglAxisScaleDrag3D *)0x0) {
          return fVar6 * (pGVar5->fields)._totalScale;
        }
      }
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  fVar6 = (float)(*pcVar14)();
  return fVar6;
}


/* Single GetRealLengthWith3DCap(Single) */

float Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_GetRealLengthWith3DCap
                (GizmoLineSlider3D *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._cap3D;
  if (pGVar1 != (GizmoCap3D *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__RTG__IGizmoCap3DController);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    lVar2 = 0xa0;
    if ((pGVar1->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
      lVar2 = 0x98;
    }
    lVar2 = *(longlong *)((longlong)&pGVar1->klass + lVar2);
    if ((lVar2 != 0) &&
       (pIVar3 = (pGVar1->fields)._controllers, pIVar3 != (IGizmoCap3DController__Array *)0x0)) {
      uVar4 = *(uint *)(lVar2 + 0x10);
      if ((uint)pIVar3->max_length <= uVar4) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        fVar6 = (float)(*pcVar5)();
        return fVar6;
      }
      if (pIVar3->vector[(int)uVar4] != (IGizmoCap3DController *)0x0) {
        fVar6 = (float)FUN_?(4,TypeInfo__RTG__IGizmoCap3DController,
                                     pIVar3->vector[(int)uVar4],zoomFactor);
        fVar7 = GizmoLineSlider3D_GetRealLength(this,zoomFactor,(MethodInfo *)0x0);
        return fVar7 + fVar6;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  fVar6 = (float)(*pcVar5)();
  return fVar6;
}


/* Single GetRealSizeAlongDirection(Camera, Vector3) */

float Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_GetRealSizeAlongDirection
                (GizmoLineSlider3D *this,Camera *camera,Vector3 *direction,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoLineSlider3DController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = 0xe0;
  if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider3DLookAndFeel *)0x0) {
    lVar1 = 0xd8;
  }
  lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
  if ((lVar1 != 0) &&
     (pIVar2 = (this->fields)._controllers, pIVar2 != (IGizmoLineSlider3DController__Array *)0x0)) {
    uVar3 = *(uint *)(lVar1 + 0x14);
    if ((uint)pIVar2->max_length <= uVar3) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float)(*pcVar4)();
      return fVar5;
    }
    pIVar6 = pIVar2->vector[(int)uVar3];
    this_00 = (this->fields)._._gizmo;
    if (this_00 != (Gizmo *)0x0) {
      camera_00 = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
      uVar3 = 0xe0;
      if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider3DLookAndFeel *)0x0) {
        uVar3 = 0xd8;
      }
      lVar1 = *(longlong *)((longlong)&this->klass + (ulonglong)uVar3);
      if (lVar1 != 0) {
        fVar5 = _UNK_?;
        if (*(char *)(lVar1 + 0x24) != '\0') {
          this_01 = (this->fields)._._handle;
          if (this_01 == (GizmoHandle *)0x0) goto code_?;
          fVar5 = GizmoHandle::GizmoHandle_GetZoomFactor(this_01,camera_00,(MethodInfo *)0x0);
        }
        if (pIVar6 != (IGizmoLineSlider3DController *)0x0) {
          pIVar7 = pIVar6->klass;
          uVar8 = 0;
          uVar9._0_1_ = (pIVar7->_1).rank;
          uVar9._1_1_ = (pIVar7->_1).minimumAlignment;
          if (uVar9 != 0) {
            do {
              if (pIVar7->interfaceOffsets[uVar8].interfaceType ==
                  (Il2CppClass *)TypeInfo__RTG__IGizmoLineSlider3DController) {
                ppIVar10 = &(&(pIVar7->vtable).UpdateHandles)
                           [pIVar7->interfaceOffsets[uVar8].offset + 3].methodPtr;
                goto code_?;
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar9);
          }
          ppIVar10 = (Il2CppMethodPointer *)
                    FUN_?(pIVar6,TypeInfo__RTG__IGizmoLineSlider3DController,3);
code_?:
          fStack_11 = direction->z;
          uStack_12._0_4_ = direction->x;
          uStack_12._4_4_ = direction->y;
          fVar5 = (float)(**ppIVar10)(pIVar6,&uStack_12,fVar5,(MethodInfo *)ppIVar10[1]);
          return fVar5;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  fVar5 = (float)(*pcVar4)();
  return fVar5;
}


/* Single GetZoomFactor(Camera) */

float Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_GetZoomFactor
                (GizmoLineSlider3D *this,Camera *camera,MethodInfo *method)

{
  lVar1 = 0xe0;
  if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider3DLookAndFeel *)0x0) {
    lVar1 = 0xd8;
  }
  lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x24) == '\0') {
      return _UNK_?;
    }
    pGVar2 = (this->fields)._._handle;
    if (pGVar2 != (GizmoHandle *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__RTG__CameraEx);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar3 = (pGVar2->fields)._zoomFactorTransform;
      if (pGVar3 != (GizmoTransform *)0x0) {
        fVar4 = (pGVar3->fields)._position3D.z;
        uVar5._0_4_ = (pGVar3->fields)._position3D.x;
        uVar5._4_4_ = (pGVar3->fields)._position3D.y;
        if (*(int *)&(TypeInfo__RTG__CameraEx->_1).field_0x1c == 0) {
          FUN_?();
        }
        aVStack_6[0]._0_8_ = uVar5;
        aVStack_6[0].z = fVar4;
        fVar4 = CameraEx::CameraEx_EstimateZoomFactor(camera,aVStack_6,(MethodInfo *)0x0);
        return fVar4;
      }
      FUN_?();
      pcVar7 = (code *)swi(3);
      fVar4 = (float)(*pcVar7)();
      return fVar4;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  fVar4 = (float)(*pcVar7)();
  return fVar4;
}


/* Boolean IsScalerHandleRegistered(Int32) */

bool Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_IsScalerHandleRegistered
               (GizmoLineSlider3D *this,int32_t handleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoScalerHandle>__FindAll_System__Predicate<RTG::GizmoScalerHandle>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoScalerHandle>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Predicate<RTG::GizmoScalerHandle>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__GizmoLineSlider3D____c__DisplayClass78_0___IsScalerHandleRegistered_b__0_RTG__GizmoScalerHandle_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoLineSlider3D____c__DisplayClass78_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__RTG__GizmoLineSlider3D____c__DisplayClass78_0);
  if (object != (Object *)0x0) {
    *(int32_t *)&object[1].klass = handleId;
    this_00 = (this->fields)._scalerHandles;
    this_01 = (Predicate_1_Object_ *)
              FUN_?(TypeInfo__System__Predicate<RTG::GizmoScalerHandle>);
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              (this_01,object,
               MethodInfo__RTG__GizmoLineSlider3D____c__DisplayClass78_0___IsScalerHandleRegistered_b__0_RTG__GizmoScalerHandle_
               ,(MethodInfo *)0x0);
    if (this_00 != (List_1_RTG_GizmoScalerHandle_ *)0x0) {
      pLVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
               List_1_System_Object__FindAll
                         ((List_1_System_Object_ *)this_00,this_01,
                          MethodInfo__System__Collections__Generic__List<RTG::GizmoScalerHandle>__FindAll_System__Predicate<RTG::GizmoScalerHandle>_
                         );
      if (pLVar1 != (List_1_System_Object_ *)0x0) {
        return (pLVar1->fields)._size != 0;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean IsScalerHandleRegistered(Int32, Int32) */

bool Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_IsScalerHandleRegistered_1
               (GizmoLineSlider3D *this,int32_t handleId,int32_t scaleDragAxisIndex,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoScalerHandle>__FindAll_System__Predicate<RTG::GizmoScalerHandle>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoScalerHandle>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoScalerHandle>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Predicate<RTG::GizmoScalerHandle>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__GizmoLineSlider3D____c__DisplayClass79_0___IsScalerHandleRegistered_b__0_RTG__GizmoScalerHandle_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoLineSlider3D____c__DisplayClass79_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)FUN_?(TypeInfo__RTG__GizmoLineSlider3D____c__DisplayClass79_0);
  if (pOVar1 != (Object *)0x0) {
    *(int32_t *)&pOVar1[1].klass = handleId;
    this_00 = (this->fields)._scalerHandles;
    this_01 = (Predicate_1_Object_ *)
              FUN_?(TypeInfo__System__Predicate<RTG::GizmoScalerHandle>);
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              (this_01,pOVar1,
               MethodInfo__RTG__GizmoLineSlider3D____c__DisplayClass79_0___IsScalerHandleRegistered_b__0_RTG__GizmoScalerHandle_
               ,(MethodInfo *)0x0);
    if ((this_00 != (List_1_RTG_GizmoScalerHandle_ *)0x0) &&
       (pLVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                 List_1_System_Object__FindAll
                           ((List_1_System_Object_ *)this_00,this_01,
                            MethodInfo__System__Collections__Generic__List<RTG::GizmoScalerHandle>__FindAll_System__Predicate<RTG::GizmoScalerHandle>_
                           ), pLVar2 != (List_1_System_Object_ *)0x0)) {
      if ((pLVar2->fields)._size == 0) {
        return 0;
      }
      pOVar3 = (pLVar2->fields)._items;
      if (pOVar3 != (Object__Array *)0x0) {
        if ((int)pOVar3->max_length == 0) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          bVar5 = (*pcVar4)();
          return bVar5;
        }
        pOVar1 = pOVar3->vector[0];
        if (pOVar1 != (Object *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar6 = pOVar1[1].monitor;
          if (pMVar6 != (MonitorData *)0x0) {
            if (*(int *)(pMVar6 + 0x18) == 0) {
              return 0;
            }
            iVar7 = FUN_?(pMVar6,scaleDragAxisIndex,
                                  MethodInfo__System__Collections__Generic__List<int>__Contains_int_
                                  ->klass->rgctx_data[0x17].rgctxDataDummy);
            return iVar7 != -1;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void MapDirection(Int32, AxisSign) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_MapDirection
               (GizmoLineSlider3D *this,int32_t axisIndex,AxisSign__Enum axisSign,MethodInfo *method
               )

{
  bVar1 = GizmoLineSlider3D_get_IsDragged(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    this_00 = (this->fields)._directionAxisMap;
    if (this_00 == (GizmoTransformAxisMap3D *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    GizmoTransformAxisMap3D::GizmoTransformAxisMap3D_Map
              (this_00,(this->fields)._transform,axisIndex,axisSign,(MethodInfo *)0x0);
  }
  return;
}


/* Void MapDragRotationAxis(GizmoTransform, Int32, AxisSign) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_MapDragRotationAxis
               (GizmoLineSlider3D *this,GizmoTransform *mapTransform,int32_t axisIndex,
               AxisSign__Enum axisSign,MethodInfo *method)

{
  bVar1 = GizmoLineSlider3D_get_IsDragged(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    this_00 = (this->fields)._dragRotationAxisMap;
    if (this_00 == (GizmoTransformAxisMap3D *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    GizmoTransformAxisMap3D::GizmoTransformAxisMap3D_Map
              (this_00,mapTransform,axisIndex,axisSign,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnGizmoAttemptHandleDragBegin(Gizmo, Int32) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_OnGizmoAttemptHandleDragBegin
               (GizmoLineSlider3D *this,Gizmo *gizmo,int32_t handleId,MethodInfo *method)

{
  pGVar1 = (this->fields)._._handle;
  if (pGVar1 != (GizmoHandle *)0x0) {
    if (handleId != (pGVar1->fields)._id) {
      pGVar2 = (this->fields)._cap3D;
      if ((pGVar2 == (GizmoCap3D *)0x0) ||
         (pGVar1 = (pGVar2->fields)._._handle, pGVar1 == (GizmoHandle *)0x0))
      goto code_?;
      if (handleId != (pGVar1->fields)._id) {
        return;
      }
    }
    if ((this->fields)._dragChannel == 1) {
      pGVar3 = (this->fields)._directionAxisMap;
      fStack_4 = 0.0;
      fStack_5 = 0.0;
      fStack_6 = 0.0;
      uStack_7 = 0;
      fStack_8 = 0.0;
      fStack_9 = 0.0;
      if (pGVar3 != (GizmoTransformAxisMap3D *)0x0) {
        pVVar10 = GizmoTransformAxisMap3D::GizmoTransformAxisMap3D_get_Axis
                            (&VStack_11,pGVar3,(MethodInfo *)0x0);
        uVar12 = pVVar10->x;
        uVar13 = pVVar10->y;
        fStack_5 = pVVar10->z;
        pGVar14 = (this->fields)._transform;
        fStack_9 = (float)uVar12;
        fStack_4 = (float)uVar13;
        if (pGVar14 != (GizmoTransform *)0x0) {
          uVar15._0_4_ = (pGVar14->fields)._position3D.x;
          uVar15._4_4_ = (pGVar14->fields)._position3D.y;
          fStack_8 = (pGVar14->fields)._position3D.z;
          lVar16 = 0xd0;
          if ((this->fields)._sharedSettings == (GizmoLineSlider3DSettings *)0x0) {
            lVar16 = 200;
          }
          lVar16 = *(longlong *)((longlong)&this->klass + lVar16);
          uStack_7 = uVar15;
          if (lVar16 != 0) {
            pGVar17 = (this->fields)._offsetDrag;
            fVar18 = *(float *)(lVar16 + 0x1c);
            if (pGVar17 != (GizmoSglAxisOffsetDrag3D *)0x0) {
              uVar19 = CONCAT44(uVar12,fStack_8);
              cVar20 = (*(pGVar17->klass->vtable).get_IsActive_1.methodPtr)
                                 (pGVar17,(pGVar17->klass->vtable).get_IsActive_1.method);
              if (cVar20 != '\0') {
                return;
              }
              (pGVar17->fields)._workData.DragOrigin.x = (float)(undefined4)uVar15;
              (pGVar17->fields)._workData.DragOrigin.y = (float)uVar15._4_4_;
              *(undefined8 *)&(pGVar17->fields)._workData.DragOrigin.z = uVar19;
              (pGVar17->fields)._workData.Axis.y = fStack_4;
              (pGVar17->fields)._workData.Axis.z = fStack_5;
              (pGVar17->fields)._workData.SnapStep = fVar18;
              return;
            }
          }
        }
      }
    }
    else if ((this->fields)._dragChannel == 2) {
      pGVar3 = (this->fields)._dragRotationAxisMap;
      uStack_7 = 0;
      fStack_8 = 0.0;
      fStack_9 = 0.0;
      fStack_4 = 0.0;
      fStack_5 = 0.0;
      if (pGVar3 != (GizmoTransformAxisMap3D *)0x0) {
        pVVar10 = GizmoTransformAxisMap3D::GizmoTransformAxisMap3D_get_Axis
                            (&VStack_11,pGVar3,(MethodInfo *)0x0);
        uVar21 = pVVar10->x;
        uVar22 = pVVar10->y;
        fStack_5 = pVVar10->z;
        pGVar14 = (this->fields)._transform;
        fStack_9 = (float)uVar21;
        fStack_4 = (float)uVar22;
        if (pGVar14 != (GizmoTransform *)0x0) {
          uStack_7._0_4_ = (pGVar14->fields)._position3D.x;
          uStack_7._4_4_ = (pGVar14->fields)._position3D.y;
          fStack_8 = (pGVar14->fields)._position3D.z;
          lVar16 = 0xd0;
          if ((this->fields)._sharedSettings == (GizmoLineSlider3DSettings *)0x0) {
            lVar16 = 200;
          }
          lVar16 = *(longlong *)((longlong)&this->klass + lVar16);
          if (lVar16 != 0) {
            fStack_23 = *(float *)(lVar16 + 0x20);
            uVar24 = 0xd0;
            if ((this->fields)._sharedSettings == (GizmoLineSlider3DSettings *)0x0) {
              uVar24 = 200;
            }
            lVar16 = *(longlong *)((longlong)&this->klass + (ulonglong)uVar24);
            if (lVar16 != 0) {
              this_00 = (this->fields)._rotationDrag;
              fStack_6 = *(float *)(lVar16 + 0x24);
              if (this_00 != (GizmoSglAxisRotationDrag3D *)0x0) {
                GStack_25.Axis.x = (float)uVar21;
                GStack_25.Axis.y = (float)uVar22;
                GStack_25.RotationPlanePos.x = (float)(undefined4)uStack_7;
                GStack_25.RotationPlanePos.y = (float)uStack_7._4_4_;
                GStack_25.RotationPlanePos.z = fStack_8;
                GStack_25.Axis.z = fStack_5;
                GStack_25.SnapMode = (int32_t)fStack_6;
                GStack_25.SnapStep = fStack_23;
                GizmoSglAxisRotationDrag3D::GizmoSglAxisRotationDrag3D_SetWorkData
                          (this_00,&GStack_25,(MethodInfo *)0x0);
                pGVar3 = (this->fields)._dragRotationAxisMap;
                this_01 = (this->fields)._rotationArc;
                if (pGVar3 != (GizmoTransformAxisMap3D *)0x0) {
                  pVVar10 = GizmoTransformAxisMap3D::GizmoTransformAxisMap3D_get_Axis
                                      (&VStack_11,pGVar3,(MethodInfo *)0x0);
                  uVar19._0_4_ = pVVar10->x;
                  uVar19._4_4_ = pVVar10->y;
                  fVar18 = pVVar10->z;
                  pGVar14 = (this->fields)._transform;
                  if (pGVar14 != (GizmoTransform *)0x0) {
                    pGVar3 = (this->fields)._directionAxisMap;
                    uVar26._0_4_ = (pGVar14->fields)._position3D.x;
                    uVar26._4_4_ = (pGVar14->fields)._position3D.y;
                    fVar27 = (pGVar14->fields)._position3D.z;
                    VStack_28._0_8_ = uVar26;
                    if (pGVar3 != (GizmoTransformAxisMap3D *)0x0) {
                      pVVar10 = GizmoTransformAxisMap3D::GizmoTransformAxisMap3D_get_Axis
                                          (&VStack_11,pGVar3,(MethodInfo *)0x0);
                      aVStack_29[0].x = pVVar10->x;
                      aVStack_29[0].y = pVVar10->y;
                      this_02 = (this->fields)._._gizmo;
                      fVar30 = VStack_28.x + aVStack_29[0].x;
                      fVar31 = VStack_28.y + aVStack_29[0].y;
                      VStack_28.z = fVar27 + pVVar10->z;
                      if (this_02 != (Gizmo *)0x0) {
                        camera = Gizmo::Gizmo_get_FocusCamera(this_02,(MethodInfo *)0x0);
                        fVar32 = GizmoLineSlider3D_GetZoomFactor(this,camera,(MethodInfo *)0x0);
                        fVar32 = GizmoLineSlider3D_GetRealLength(this,fVar32,(MethodInfo *)0x0);
                        if (this_01 != (GizmoRotationArc3D *)0x0) {
                          VStack_28.y = fVar31;
                          VStack_28.x = fVar30;
                          VStack_11._0_8_ = uVar19;
                          VStack_11.z = fVar18;
                          aVStack_29[0]._0_8_ = uVar26;
                          aVStack_29[0].z = fVar27;
                          GizmoRotationArc3D::GizmoRotationArc3D_SetArcData
                                    (this_01,&VStack_11,aVStack_29,&VStack_28,fVar32,
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
    else {
      if ((this->fields)._dragChannel != 3) {
        return;
      }
      pGVar3 = (this->fields)._directionAxisMap;
      GStack_25.Axis.z = 0.0;
      GStack_25.SnapMode = 0;
      GStack_25.RotationPlanePos.y = 0.0;
      GStack_25.RotationPlanePos.z = 0.0;
      GStack_25.Axis.x = 0.0;
      GStack_25.Axis.y = 0.0;
      if (pGVar3 != (GizmoTransformAxisMap3D *)0x0) {
        pVVar10 = GizmoTransformAxisMap3D::GizmoTransformAxisMap3D_get_Axis
                            (&VStack_11,pGVar3,(MethodInfo *)0x0);
        fVar18 = _UNK_?;
        uVar33 = pVVar10->x;
        uVar34 = pVVar10->y;
        GStack_25.SnapMode = (int32_t)pVVar10->z;
        pGVar14 = (this->fields)._transform;
        GStack_25.Axis.y = (float)uVar33;
        GStack_25.Axis.z = (float)uVar34;
        if (pGVar14 != (GizmoTransform *)0x0) {
          uVar35 = (pGVar14->fields)._position3D.x;
          uVar36 = (pGVar14->fields)._position3D.y;
          GStack_25.Axis.x = (pGVar14->fields)._position3D.z;
          lVar16 = 0xd0;
          if ((this->fields)._sharedSettings == (GizmoLineSlider3DSettings *)0x0) {
            lVar16 = 200;
          }
          lVar16 = *(longlong *)((longlong)&this->klass + lVar16);
          GStack_25.RotationPlanePos.y = (float)uVar35;
          GStack_25.RotationPlanePos.z = (float)uVar36;
          if (lVar16 != 0) {
            GStack_25.SnapStep = *(float *)(lVar16 + 0x28);
            GStack_25.RotationPlanePos.x = (float)(this->fields)._scaleDragAxisIndex;
            pGVar37 = (this->fields)._scaleDrag;
            if (pGVar37 != (GizmoSglAxisScaleDrag3D *)0x0) {
              cVar20 = (*(pGVar37->klass->vtable).get_IsActive_1.methodPtr)
                                 (pGVar37,(pGVar37->klass->vtable).get_IsActive_1.method);
              if (cVar20 != '\0') {
                return;
              }
              (pGVar37->fields)._workData.AxisIndex = (int32_t)GStack_25.RotationPlanePos.x;
              (pGVar37->fields)._workData.DragOrigin.x = GStack_25.RotationPlanePos.y;
              (pGVar37->fields)._workData.DragOrigin.y = GStack_25.RotationPlanePos.z;
              (pGVar37->fields)._workData.DragOrigin.z = GStack_25.Axis.x;
              (pGVar37->fields)._workData.Axis.x = GStack_25.Axis.y;
              (pGVar37->fields)._workData.Axis.y = GStack_25.Axis.z;
              *(ulonglong *)&(pGVar37->fields)._workData.Axis.z =
                   CONCAT44(GStack_25.SnapStep,GStack_25.SnapMode);
              (pGVar37->fields)._workData.EntityScale = fVar18;
              (pGVar37->fields)._scale = (pGVar37->fields)._workData.EntityScale;
              return;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar38 = (code *)swi(3);
  (*pcVar38)();
  return;
}


/* Void OnGizmoHandleHoverEnter(Gizmo, Int32) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_OnGizmoHandleHoverEnter
               (GizmoLineSlider3D *this,Gizmo *gizmo,int32_t handleId,MethodInfo *method)

{
  pGVar1 = (this->fields)._._handle;
  if (pGVar1 != (GizmoHandle *)0x0) {
    uVar2 = (pGVar1->fields)._id;
    gizmo = (Gizmo *)(ulonglong)uVar2;
    pGVar3 = (this->fields)._cap3D;
    if (pGVar3 != (GizmoCap3D *)0x0) {
      if (handleId == uVar2) {
        pGVar4 = (pGVar3->fields)._overrideColor;
        gizmo = (Gizmo *)0x0;
        if (pGVar4 != (GizmoOverrideColor *)0x0) {
          (pGVar4->fields)._isActive = 1;
          gizmo = (Gizmo *)(this->fields)._cap3D;
          if (gizmo != (Gizmo *)0x0) {
            lVar5 = 0xe0;
            if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider3DLookAndFeel *)0x0) {
              lVar5 = 0xd8;
            }
            lVar5 = *(longlong *)((longlong)&this->klass + lVar5);
            if ((lVar5 != 0) && (lVar5 = *(longlong *)(lVar5 + 0x60), lVar5 != 0)) {
              pGVar6 = (gizmo->fields).PreDragBeginAttempt;
              this = (GizmoLineSlider3D *)0x0;
              if (pGVar6 != (GizmoPreDragBeginAttemptHandler *)0x0) {
                uVar7 = *(undefined8 *)(lVar5 + 0x7c);
                uVar8 = *(undefined8 *)(lVar5 + 0x84);
                pCVar9 = (Color *)((longlong)&(pGVar6->fields)._._.method_ptr + 4);
                pCVar9->r = (float)(int)uVar7;
                pCVar9->g = (float)(int)((ulonglong)uVar7 >> 0x20);
                *(undefined8 *)((longlong)&(pGVar6->fields)._._.invoke_impl + 4) = uVar8;
                return;
              }
            }
          }
        }
      }
      else {
        gizmo = (Gizmo *)(pGVar3->fields)._._handle;
        if (gizmo != (Gizmo *)0x0) {
          if (handleId != *(int *)&(gizmo->fields).PostDisabled) {
            return;
          }
          pGVar4 = (this->fields)._overrideColor;
          if (pGVar4 != (GizmoOverrideColor *)0x0) {
            (pGVar4->fields)._isActive = 1;
            lVar5 = 0xe0;
            if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider3DLookAndFeel *)0x0) {
              lVar5 = 0xd8;
            }
            gizmo = *(Gizmo **)((longlong)&this->klass + lVar5);
            if ((gizmo != (Gizmo *)0x0) &&
               (pGVar4 = (this->fields)._overrideColor, pGVar4 != (GizmoOverrideColor *)0x0)) {
              pGVar10 = (gizmo->fields).PostDragBegin;
              *(GizmoPreDragBeginHandler **)&(pGVar4->fields)._color = (gizmo->fields).PreDragBegin;
              *(GizmoPostDragBeginHandler **)&(pGVar4->fields)._color.b = pGVar10;
              return;
            }
          }
        }
      }
    }
  }
  FUN_?(this,gizmo);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnGizmoHandleHoverExit(Gizmo, Int32) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_OnGizmoHandleHoverExit
               (GizmoLineSlider3D *this,Gizmo *gizmo,int32_t handleId,MethodInfo *method)

{
  pGVar1 = (this->fields)._._handle;
  if (pGVar1 != (GizmoHandle *)0x0) {
    pGVar2 = (this->fields)._cap3D;
    if (pGVar2 != (GizmoCap3D *)0x0) {
      if (handleId == (pGVar1->fields)._id) {
        pGVar3 = (pGVar2->fields)._overrideColor;
      }
      else {
        pGVar1 = (pGVar2->fields)._._handle;
        if (pGVar1 == (GizmoHandle *)0x0) goto code_?;
        if (handleId != (pGVar1->fields)._id) {
          return;
        }
        pGVar3 = (this->fields)._overrideColor;
      }
      if (pGVar3 != (GizmoOverrideColor *)0x0) {
        (pGVar3->fields)._isActive = 0;
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnGizmoPostDisabled(Gizmo) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_OnGizmoPostDisabled
               (GizmoLineSlider3D *this,Gizmo *gizmo,MethodInfo *method)

{
  pGVar1 = (this->fields)._overrideColor;
  if (pGVar1 != (GizmoOverrideColor *)0x0) {
    (pGVar1->fields)._isActive = 0;
    pGVar2 = (this->fields)._cap3D;
    if ((pGVar2 != (GizmoCap3D *)0x0) &&
       (pGVar1 = (pGVar2->fields)._overrideColor, pGVar1 != (GizmoOverrideColor *)0x0)) {
      (pGVar1->fields)._isActive = 0;
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnGizmoPostEnabled(Gizmo) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_OnGizmoPostEnabled
               (GizmoLineSlider3D *this,Gizmo *gizmo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoLineSlider3DController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._gizmo;
  if (this_00 != (Gizmo *)0x0) {
    camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
    lVar1 = 0xe0;
    lVar2 = 0xe0;
    if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider3DLookAndFeel *)0x0) {
      lVar2 = 0xd8;
    }
    lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
    if (lVar2 != 0) {
      zoomFactor = _UNK_?;
      if (*(char *)(lVar2 + 0x24) != '\0') {
        this_01 = (this->fields)._._handle;
        if (this_01 == (GizmoHandle *)0x0) goto code_?;
        zoomFactor = GizmoHandle::GizmoHandle_GetZoomFactor(this_01,camera,(MethodInfo *)0x0);
      }
      lVar2 = 0xe0;
      if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider3DLookAndFeel *)0x0) {
        lVar2 = 0xd8;
      }
      lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
      if ((lVar2 != 0) &&
         (pIVar3 = (this->fields)._controllers, pIVar3 != (IGizmoLineSlider3DController__Array *)0x0
         )) {
        uVar4 = *(uint *)(lVar2 + 0x14);
        if ((uint)pIVar3->max_length <= uVar4) {
code_?:
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (pIVar3->vector[(int)uVar4] != (IGizmoLineSlider3DController *)0x0) {
          FUN_?(0,TypeInfo__RTG__IGizmoLineSlider3DController);
          lVar2 = 0xe0;
          if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider3DLookAndFeel *)0x0) {
            lVar2 = 0xd8;
          }
          lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
          if ((lVar2 != 0) &&
             (pIVar3 = (this->fields)._controllers,
             pIVar3 != (IGizmoLineSlider3DController__Array *)0x0)) {
            uVar4 = *(uint *)(lVar2 + 0x14);
            if ((uint)pIVar3->max_length <= uVar4) goto code_?;
            if (pIVar3->vector[(int)uVar4] != (IGizmoLineSlider3DController *)0x0) {
              FUN_?(2,TypeInfo__RTG__IGizmoLineSlider3DController,pIVar3->vector[(int)uVar4]
                            ,zoomFactor);
              if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider3DLookAndFeel *)0x0) {
                lVar1 = 0xd8;
              }
              lVar2 = *(longlong *)((longlong)&this->klass + lVar1);
              if ((lVar2 != 0) &&
                 (pIVar3 = (this->fields)._controllers,
                 pIVar3 != (IGizmoLineSlider3DController__Array *)0x0)) {
                uVar4 = *(uint *)(lVar2 + 0x14);
                if ((uint)pIVar3->max_length <= uVar4) goto code_?;
                if (pIVar3->vector[(int)uVar4] != (IGizmoLineSlider3DController *)0x0) {
                  FUN_?(1,TypeInfo__RTG__IGizmoLineSlider3DController,
                                pIVar3->vector[(int)uVar4],zoomFactor);
                  this_02 = (this->fields)._cap3D;
                  pVVar6 = GizmoLineSlider3D_GetRealDirection(aVStack_7,this,(MethodInfo *)0x0);
                  uVar8._0_4_ = pVVar6->x;
                  uVar8._4_4_ = pVVar6->y;
                  fVar9 = pVVar6->z;
                  pVVar6 = GizmoLineSlider3D_GetRealEndPosition
                                     (aVStack_7,this,zoomFactor,(MethodInfo *)0x0);
                  if (this_02 != (GizmoCap3D *)0x0) {
                    VStack_10.x = pVVar6->x;
                    VStack_10.y = pVVar6->y;
                    VStack_10.z = pVVar6->z;
                    aVStack_7[0]._0_8_ = uVar8;
                    aVStack_7[0].z = fVar9;
                    GizmoCap3D::GizmoCap3D_CapSlider3D
                              (this_02,aVStack_7,&VStack_10,(MethodInfo *)0x0);
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
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnGizmoPreUpdateBegin(Gizmo) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_OnGizmoPreUpdateBegin
               (GizmoLineSlider3D *this,Gizmo *gizmo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoLineSlider3DController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = 0xe0;
  if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider3DLookAndFeel *)0x0) {
    lVar1 = 0xd8;
  }
  lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
  if ((lVar1 != 0) &&
     (pIVar2 = (this->fields)._controllers, pIVar2 != (IGizmoLineSlider3DController__Array *)0x0)) {
    uVar3 = *(uint *)(lVar1 + 0x14);
    if ((uint)pIVar2->max_length <= uVar3) goto code_?;
    if ((pIVar2->vector[(int)uVar3] != (IGizmoLineSlider3DController *)0x0) &&
       (FUN_?(0), gizmo != (Gizmo *)0x0)) {
      camera = Gizmo::Gizmo_get_FocusCamera(gizmo,(MethodInfo *)0x0);
      uVar4 = 0xe0;
      if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider3DLookAndFeel *)0x0) {
        uVar4 = 0xd8;
      }
      lVar1 = *(longlong *)((longlong)&this->klass + (ulonglong)uVar4);
      if (lVar1 != 0) {
        zoomFactor = _UNK_?;
        if (*(char *)(lVar1 + 0x24) != '\0') {
          pGVar5 = (this->fields)._._handle;
          if (pGVar5 == (GizmoHandle *)0x0) goto code_?;
          zoomFactor = GizmoHandle::GizmoHandle_GetZoomFactor(pGVar5,camera,(MethodInfo *)0x0);
        }
        fVar6 = _UNK_?;
        lVar1 = 0xd0;
        if ((this->fields)._sharedSettings == (GizmoLineSlider3DSettings *)0x0) {
          lVar1 = 200;
        }
        lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
        if ((lVar1 != 0) &&
           (pGVar7 = (this->fields)._offsetDrag, pGVar7 != (GizmoSglAxisOffsetDrag3D *)0x0)) {
          fVar8 = *(float *)(lVar1 + 0x2c);
          fVar9 = _UNK_?;
          if (_UNK_? <= fVar8) {
            fVar9 = fVar8;
          }
          (pGVar7->fields)._._sensitivity = fVar9;
          uVar4 = 0xd0;
          if ((this->fields)._sharedSettings == (GizmoLineSlider3DSettings *)0x0) {
            uVar4 = 200;
          }
          lVar1 = *(longlong *)((longlong)&this->klass + (ulonglong)uVar4);
          if ((lVar1 != 0) &&
             (pGVar10 = (this->fields)._rotationDrag, pGVar10 != (GizmoSglAxisRotationDrag3D *)0x0)) {
            fVar8 = *(float *)(lVar1 + 0x30);
            fVar9 = fVar6;
            if (fVar6 <= fVar8) {
              fVar9 = fVar8;
            }
            (pGVar10->fields)._._sensitivity = fVar9;
            lVar1 = 0xd0;
            if ((this->fields)._sharedSettings == (GizmoLineSlider3DSettings *)0x0) {
              lVar1 = 200;
            }
            lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
            if ((lVar1 != 0) &&
               (pGVar11 = (this->fields)._scaleDrag, pGVar11 != (GizmoSglAxisScaleDrag3D *)0x0)) {
              fVar8 = *(float *)(lVar1 + 0x34);
              if (fVar6 <= fVar8) {
                fVar6 = fVar8;
              }
              (pGVar11->fields)._._sensitivity = fVar6;
              pIVar2 = (this->fields)._controllers;
              if (pIVar2 != (IGizmoLineSlider3DController__Array *)0x0) {
                if ((uint)pIVar2->max_length <= uVar3) {
code_?:
                  FUN_?();
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                if (pIVar2->vector[(int)uVar3] != (IGizmoLineSlider3DController *)0x0) {
                  FUN_?(1,TypeInfo__RTG__IGizmoLineSlider3DController,
                                pIVar2->vector[(int)uVar3],zoomFactor);
                  pIVar2 = (this->fields)._controllers;
                  if (pIVar2 != (IGizmoLineSlider3DController__Array *)0x0) {
                    if ((uint)pIVar2->max_length <= uVar3) goto code_?;
                    if (pIVar2->vector[(int)uVar3] != (IGizmoLineSlider3DController *)0x0) {
                      FUN_?(2,TypeInfo__RTG__IGizmoLineSlider3DController,
                                    pIVar2->vector[(int)uVar3],zoomFactor);
                      pGVar13 = (this->fields)._cap3D;
                      if ((((pGVar13 != (GizmoCap3D *)0x0) &&
                           (pGVar5 = (pGVar13->fields)._._handle, pGVar5 != (GizmoHandle *)0x0)) &&
                          (pGVar14 = (this->fields)._._handle, pGVar14 != (GizmoHandle *)0x0)) &&
                         ((pPVar15 = (pGVar14->fields)._genericHoverPriority,
                          pPVar15 != (Priority *)0x0 &&
                          (pPVar16 = (pGVar5->fields)._genericHoverPriority,
                          pPVar16 != (Priority *)0x0)))) {
                        (pPVar16->fields)._priority = (pPVar15->fields)._priority;
                        pGVar13 = (this->fields)._cap3D;
                        if (((pGVar13 != (GizmoCap3D *)0x0) &&
                            ((pGVar5 = (pGVar13->fields)._._handle, pGVar5 != (GizmoHandle *)0x0 &&
                             (pGVar14 = (this->fields)._._handle, pGVar14 != (GizmoHandle *)0x0))))
                           && ((pPVar15 = (pGVar14->fields)._hoverPriority2D,
                               pPVar15 != (Priority *)0x0 &&
                               (pPVar16 = (pGVar5->fields)._hoverPriority2D,
                               pPVar16 != (Priority *)0x0)))) {
                          (pPVar16->fields)._priority = (pPVar15->fields)._priority;
                          pGVar13 = (this->fields)._cap3D;
                          if ((((pGVar13 != (GizmoCap3D *)0x0) &&
                               (pGVar5 = (pGVar13->fields)._._handle, pGVar5 != (GizmoHandle *)0x0))
                              && (pGVar14 = (this->fields)._._handle, pGVar14 != (GizmoHandle *)0x0)
                              ) && ((pPVar15 = (pGVar14->fields)._hoverPriority3D,
                                    pPVar15 != (Priority *)0x0 &&
                                    (pPVar16 = (pGVar5->fields)._hoverPriority3D,
                                    pPVar16 != (Priority *)0x0)))) {
                            (pPVar16->fields)._priority = (pPVar15->fields)._priority;
                            pGVar13 = (this->fields)._cap3D;
                            pVVar17 = GizmoLineSlider3D_GetRealDirection
                                                (aVStack_18,this,(MethodInfo *)0x0);
                            uVar19._0_4_ = pVVar17->x;
                            uVar19._4_4_ = pVVar17->y;
                            fVar6 = pVVar17->z;
                            pVVar17 = GizmoLineSlider3D_GetRealEndPosition
                                                (aVStack_18,this,zoomFactor,(MethodInfo *)0x0);
                            if (pGVar13 != (GizmoCap3D *)0x0) {
                              VStack_20.x = pVVar17->x;
                              VStack_20.y = pVVar17->y;
                              VStack_20.z = pVVar17->z;
                              aVStack_18[0]._0_8_ = uVar19;
                              aVStack_18[0].z = fVar6;
                              GizmoCap3D::GizmoCap3D_CapSlider3D
                                        (pGVar13,aVStack_18,&VStack_20,(MethodInfo *)0x0);
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
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnHoverableStateChanged() */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_OnHoverableStateChanged
               (GizmoLineSlider3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._handle;
  if (pGVar1 != (GizmoHandle *)0x0) {
    bVar2 = (this->fields)._._isHoverable;
    (pGVar1->fields)._Is3DHoverable_k__BackingField = bVar2;
    (pGVar1->fields)._Is2DHoverable_k__BackingField = bVar2;
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnTransformChanged(GizmoTransform, GizmoTransform+ChangeData) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_OnTransformChanged
               (GizmoLineSlider3D *this,GizmoTransform *transform,
               GizmoTransform_ChangeData changeData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoLineSlider3DController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((changeData.ChangeReason != 1) && (iStackX_1c = changeData.TRSDimension, iStackX_1c != 2)) {
    return;
  }
  this_00 = (this->fields)._._gizmo;
  if (this_00 != (Gizmo *)0x0) {
    camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
    lVar1 = 0xe0;
    lVar2 = 0xe0;
    if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider3DLookAndFeel *)0x0) {
      lVar2 = 0xd8;
    }
    lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
    if (lVar2 != 0) {
      zoomFactor = _UNK_?;
      if (*(char *)(lVar2 + 0x24) != '\0') {
        this_01 = (this->fields)._._handle;
        if (this_01 == (GizmoHandle *)0x0) goto DAT_?;
        zoomFactor = GizmoHandle::GizmoHandle_GetZoomFactor(this_01,camera,(MethodInfo *)0x0);
      }
      if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider3DLookAndFeel *)0x0) {
        lVar1 = 0xd8;
      }
      lVar2 = *(longlong *)((longlong)&this->klass + lVar1);
      if ((lVar2 != 0) &&
         (pIVar3 = (this->fields)._controllers, pIVar3 != (IGizmoLineSlider3DController__Array *)0x0
         )) {
        uVar4 = *(uint *)(lVar2 + 0x14);
        if ((uint)pIVar3->max_length <= uVar4) {
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (pIVar3->vector[(int)uVar4] != (IGizmoLineSlider3DController *)0x0) {
          FUN_?(1,TypeInfo__RTG__IGizmoLineSlider3DController,pIVar3->vector[(int)uVar4],
                        zoomFactor);
          this_02 = (this->fields)._cap3D;
          pVVar6 = GizmoLineSlider3D_GetRealDirection(aVStack_7,this,(MethodInfo *)0x0);
          uVar8._0_4_ = pVVar6->x;
          uVar8._4_4_ = pVVar6->y;
          fVar9 = pVVar6->z;
          pVVar6 = GizmoLineSlider3D_GetRealEndPosition
                             (aVStack_7,this,zoomFactor,(MethodInfo *)0x0);
          if (this_02 != (GizmoCap3D *)0x0) {
            VStack_10.x = pVVar6->x;
            VStack_10.y = pVVar6->y;
            VStack_10.z = pVVar6->z;
            aVStack_7[0]._0_8_ = uVar8;
            aVStack_7[0].z = fVar9;
            GizmoCap3D::GizmoCap3D_CapSlider3D(this_02,aVStack_7,&VStack_10,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnVisibilityStateChanged() */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_OnVisibilityStateChanged
               (GizmoLineSlider3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoLineSlider3DController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = 0xe0;
  lVar2 = 0xe0;
  if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider3DLookAndFeel *)0x0) {
    lVar2 = 0xd8;
  }
  lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
  if ((lVar2 != 0) &&
     (pIVar3 = (this->fields)._controllers, pIVar3 != (IGizmoLineSlider3DController__Array *)0x0)) {
    uVar4 = *(uint *)(lVar2 + 0x14);
    if ((uint)pIVar3->max_length <= uVar4) goto code_?;
    if (pIVar3->vector[(int)uVar4] != (IGizmoLineSlider3DController *)0x0) {
      FUN_?(0);
      this_00 = (this->fields)._._gizmo;
      if (this_00 != (Gizmo *)0x0) {
        camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
        uVar4 = 0xe0;
        if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider3DLookAndFeel *)0x0) {
          uVar4 = 0xd8;
        }
        lVar2 = *(longlong *)((longlong)&this->klass + (ulonglong)uVar4);
        if (lVar2 != 0) {
          zoomFactor = _UNK_?;
          if (*(char *)(lVar2 + 0x24) != '\0') {
            this_01 = (this->fields)._._handle;
            if (this_01 == (GizmoHandle *)0x0) goto code_?;
            zoomFactor = GizmoHandle::GizmoHandle_GetZoomFactor(this_01,camera,(MethodInfo *)0x0);
          }
          lVar2 = 0xe0;
          if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider3DLookAndFeel *)0x0) {
            lVar2 = 0xd8;
          }
          lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
          if ((lVar2 != 0) &&
             (pIVar3 = (this->fields)._controllers,
             pIVar3 != (IGizmoLineSlider3DController__Array *)0x0)) {
            uVar4 = *(uint *)(lVar2 + 0x14);
            if ((uint)pIVar3->max_length <= uVar4) {
code_?:
              FUN_?();
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if (pIVar3->vector[(int)uVar4] != (IGizmoLineSlider3DController *)0x0) {
              FUN_?(2,TypeInfo__RTG__IGizmoLineSlider3DController,pIVar3->vector[(int)uVar4]
                            ,zoomFactor);
              if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider3DLookAndFeel *)0x0) {
                lVar1 = 0xd8;
              }
              lVar2 = *(longlong *)((longlong)&this->klass + lVar1);
              if ((lVar2 != 0) &&
                 (pIVar3 = (this->fields)._controllers,
                 pIVar3 != (IGizmoLineSlider3DController__Array *)0x0)) {
                uVar4 = *(uint *)(lVar2 + 0x14);
                if ((uint)pIVar3->max_length <= uVar4) goto code_?;
                if (pIVar3->vector[(int)uVar4] != (IGizmoLineSlider3DController *)0x0) {
                  FUN_?(1,TypeInfo__RTG__IGizmoLineSlider3DController,
                                pIVar3->vector[(int)uVar4],zoomFactor);
                  this_02 = (this->fields)._cap3D;
                  pVVar6 = GizmoLineSlider3D_GetRealDirection(aVStack_7,this,(MethodInfo *)0x0);
                  uVar8._0_4_ = pVVar6->x;
                  uVar8._4_4_ = pVVar6->y;
                  fVar9 = pVVar6->z;
                  pVVar6 = GizmoLineSlider3D_GetRealEndPosition
                                     (aVStack_7,this,zoomFactor,(MethodInfo *)0x0);
                  if (this_02 != (GizmoCap3D *)0x0) {
                    VStack_10.x = pVVar6->x;
                    VStack_10.y = pVVar6->y;
                    VStack_10.z = pVVar6->z;
                    aVStack_7[0]._0_8_ = uVar8;
                    aVStack_7[0].z = fVar9;
                    GizmoCap3D::GizmoCap3D_CapSlider3D
                              (this_02,aVStack_7,&VStack_10,(MethodInfo *)0x0);
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
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Refresh() */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_Refresh
               (GizmoLineSlider3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoLineSlider3DController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._gizmo;
  if (this_00 != (Gizmo *)0x0) {
    camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
    lVar1 = 0xe0;
    lVar2 = 0xe0;
    if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider3DLookAndFeel *)0x0) {
      lVar2 = 0xd8;
    }
    lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
    if (lVar2 != 0) {
      zoomFactor = _UNK_?;
      if (*(char *)(lVar2 + 0x24) != '\0') {
        this_01 = (this->fields)._._handle;
        if (this_01 == (GizmoHandle *)0x0) goto code_?;
        zoomFactor = GizmoHandle::GizmoHandle_GetZoomFactor(this_01,camera,(MethodInfo *)0x0);
      }
      lVar2 = 0xe0;
      if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider3DLookAndFeel *)0x0) {
        lVar2 = 0xd8;
      }
      lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
      if ((lVar2 != 0) &&
         (pIVar3 = (this->fields)._controllers, pIVar3 != (IGizmoLineSlider3DController__Array *)0x0
         )) {
        uVar4 = *(uint *)(lVar2 + 0x14);
        if ((uint)pIVar3->max_length <= uVar4) {
code_?:
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (pIVar3->vector[(int)uVar4] != (IGizmoLineSlider3DController *)0x0) {
          FUN_?(0,TypeInfo__RTG__IGizmoLineSlider3DController);
          lVar2 = 0xe0;
          if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider3DLookAndFeel *)0x0) {
            lVar2 = 0xd8;
          }
          lVar2 = *(longlong *)((longlong)&this->klass + lVar2);
          if ((lVar2 != 0) &&
             (pIVar3 = (this->fields)._controllers,
             pIVar3 != (IGizmoLineSlider3DController__Array *)0x0)) {
            uVar4 = *(uint *)(lVar2 + 0x14);
            if ((uint)pIVar3->max_length <= uVar4) goto code_?;
            if (pIVar3->vector[(int)uVar4] != (IGizmoLineSlider3DController *)0x0) {
              FUN_?(2,TypeInfo__RTG__IGizmoLineSlider3DController,pIVar3->vector[(int)uVar4]
                            ,zoomFactor);
              if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider3DLookAndFeel *)0x0) {
                lVar1 = 0xd8;
              }
              lVar2 = *(longlong *)((longlong)&this->klass + lVar1);
              if ((lVar2 != 0) &&
                 (pIVar3 = (this->fields)._controllers,
                 pIVar3 != (IGizmoLineSlider3DController__Array *)0x0)) {
                uVar4 = *(uint *)(lVar2 + 0x14);
                if ((uint)pIVar3->max_length <= uVar4) goto code_?;
                if (pIVar3->vector[(int)uVar4] != (IGizmoLineSlider3DController *)0x0) {
                  FUN_?(1,TypeInfo__RTG__IGizmoLineSlider3DController,
                                pIVar3->vector[(int)uVar4],zoomFactor);
                  this_02 = (this->fields)._cap3D;
                  pVVar6 = GizmoLineSlider3D_GetRealDirection(aVStack_7,this,(MethodInfo *)0x0);
                  uVar8._0_4_ = pVVar6->x;
                  uVar8._4_4_ = pVVar6->y;
                  fVar9 = pVVar6->z;
                  pVVar6 = GizmoLineSlider3D_GetRealEndPosition
                                     (aVStack_7,this,zoomFactor,(MethodInfo *)0x0);
                  if (this_02 != (GizmoCap3D *)0x0) {
                    VStack_10.x = pVVar6->x;
                    VStack_10.y = pVVar6->y;
                    VStack_10.z = pVVar6->z;
                    aVStack_7[0]._0_8_ = uVar8;
                    aVStack_7[0].z = fVar9;
                    GizmoCap3D::GizmoCap3D_CapSlider3D
                              (this_02,aVStack_7,&VStack_10,(MethodInfo *)0x0);
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
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void RegisterScalerHandle(Int32, IEnumerable`1[System.Int32]) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_RegisterScalerHandle
               (GizmoLineSlider3D *this,int32_t handleId,
               IEnumerable_1_System_Int32_ *scaleDragAxisIndices,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoScalerHandle);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoScalerHandle>__Add_RTG__GizmoScalerHandle_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoScalerHandle>__FindAll_System__Predicate<RTG::GizmoScalerHandle>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoScalerHandle>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Predicate<RTG::GizmoScalerHandle>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__GizmoLineSlider3D____c__DisplayClass78_0___IsScalerHandleRegistered_b__0_RTG__GizmoScalerHandle_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoLineSlider3D____c__DisplayClass78_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)FUN_?(TypeInfo__RTG__GizmoLineSlider3D____c__DisplayClass78_0);
  if (pOVar1 != (Object *)0x0) {
    *(int32_t *)&pOVar1[1].klass = handleId;
    pLVar2 = (this->fields)._scalerHandles;
    this_00 = (Predicate_1_Object_ *)
              FUN_?(TypeInfo__System__Predicate<RTG::GizmoScalerHandle>);
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              (this_00,pOVar1,
               MethodInfo__RTG__GizmoLineSlider3D____c__DisplayClass78_0___IsScalerHandleRegistered_b__0_RTG__GizmoScalerHandle_
               ,(MethodInfo *)0x0);
    if ((pLVar2 != (List_1_RTG_GizmoScalerHandle_ *)0x0) &&
       (pLVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                  List_1_System_Object__FindAll
                            ((List_1_System_Object_ *)pLVar2,this_00,
                             MethodInfo__System__Collections__Generic__List<RTG::GizmoScalerHandle>__FindAll_System__Predicate<RTG::GizmoScalerHandle>_
                            ), pLVar3 != (List_1_System_Object_ *)0x0)) {
      if ((pLVar3->fields)._size != 0) {
        return;
      }
      pLVar2 = (this->fields)._scalerHandles;
      pOVar1 = (Object *)FUN_?(TypeInfo__RTG__GizmoScalerHandle);
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<int>__List_System__Collections__Generic__IEnumerable<int>_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__System__Collections__Generic__List<int>);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar4 = (MonitorData *)FUN_?(TypeInfo__System__Collections__Generic__List<int>);
      FUN_?(pMVar4,MethodInfo__System__Collections__Generic__List<int>__List__);
      bVar5 = iRam_? != 0;
      pOVar1[1].monitor = pMVar4;
      if (bVar5) {
        uVar6 = (uint)((ulonglong)&pOVar1[1].monitor >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar5 = uVar8 == *puVar9;
          if (bVar5) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar5);
      }
      *(int32_t *)&pOVar1[1].klass = handleId;
      this_01 = (List_1_System_Int32_ *)
                FUN_?(TypeInfo__System__Collections__Generic__List<int>);
      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
      List_1_System_Int32___ctor_1
                (this_01,scaleDragAxisIndices,
                 MethodInfo__System__Collections__Generic__List<int>__List_System__Collections__Generic__IEnumerable<int>_
                );
      bVar5 = iRam_? != 0;
      pOVar1[1].monitor = (MonitorData *)this_01;
      if (bVar5) {
        uVar6 = (uint)((ulonglong)&pOVar1[1].monitor >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar5 = uVar8 == *puVar9;
          if (bVar5) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar5);
      }
      pMVar10 = 
      MethodInfo__System__Collections__Generic__List<RTG::GizmoScalerHandle>__Add_RTG__GizmoScalerHandle_
      ;
      if (pLVar2 != (List_1_RTG_GizmoScalerHandle_ *)0x0) {
        piVar11 = &(pLVar2->fields)._version;
        *piVar11 = *piVar11 + 1;
        pGVar12 = (pLVar2->fields)._items;
        if (pGVar12 != (GizmoScalerHandle__Array *)0x0) {
          uVar6 = (pLVar2->fields)._size;
          if ((uint)pGVar12->max_length <= uVar6) {
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__AddWithResize
                      ((List_1_System_Object_ *)pLVar2,pOVar1,pMVar10->klass->rgctx_data[0xe].method)
            ;
            return;
          }
          (pLVar2->fields)._size = uVar6 + 1;
          FUN_?(pGVar12,(longlong)(int)uVar6,pOVar1);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void RemoveTargetTransform(GizmoTransform) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_RemoveTargetTransform
               (GizmoLineSlider3D *this,GizmoTransform *transform,MethodInfo *method)

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

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_RemoveTargetTransform_1
               (GizmoLineSlider3D *this,GizmoTransform *transform,GizmoDragChannel__Enum dragChannel
               ,MethodInfo *method)

{
  if (dragChannel == GizmoDragChannel__Enum_Offset) {
    pGVar1 = (GizmoSglAxisRotationDrag3D *)(this->fields)._offsetDrag;
  }
  else if (dragChannel == GizmoDragChannel__Enum_Rotation) {
    pGVar1 = (this->fields)._rotationDrag;
  }
  else {
    if ((this->fields)._dragChannel != 3) {
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

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_Render
               (GizmoLineSlider3D *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraEx);
    LOCK();
    UNLOCK();
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
    pGVar1 = (this->fields)._cap3D;
    if (pGVar1 == (GizmoCap3D *)0x0) goto code_?;
    if ((pGVar1->fields)._._isVisible == 0) {
      return;
    }
  }
  pGVar2 = (this->fields)._overrideColor;
  if (pGVar2 == (GizmoOverrideColor *)0x0) goto code_?;
  if ((pGVar2->fields)._isActive == 0) {
    pGVar3 = (this->fields)._._gizmo;
    if ((pGVar3 == (Gizmo *)0x0) ||
       (pGVar4 = (this->fields)._._handle, pGVar4 == (GizmoHandle *)0x0)) goto code_?;
    pGVar5 = (this->fields)._sharedLookAndFeel;
    lVar6 = 0xe0;
    if ((pGVar3->fields)._hoverInfo._handleId == (pGVar4->fields)._id) {
      if (pGVar5 == (GizmoLineSlider3DLookAndFeel *)0x0) {
        lVar6 = 0xd8;
      }
      lVar6 = *(longlong *)((longlong)&this->klass + lVar6);
      if (lVar6 == 0) goto code_?;
      fVar7 = *(float *)(lVar6 + 0x50);
      fVar8 = *(float *)(lVar6 + 0x54);
      fVar9 = *(float *)(lVar6 + 0x58);
      fVar10 = *(float *)(lVar6 + 0x5c);
    }
    else {
      if (pGVar5 == (GizmoLineSlider3DLookAndFeel *)0x0) {
        lVar6 = 0xd8;
      }
      lVar6 = *(longlong *)((longlong)&this->klass + lVar6);
      if (lVar6 == 0) goto code_?;
      fVar7 = *(float *)(lVar6 + 0x40);
      fVar8 = *(float *)(lVar6 + 0x44);
      fVar9 = *(float *)(lVar6 + 0x48);
      fVar10 = *(float *)(lVar6 + 0x4c);
    }
    lVar6 = 0xe0;
    if (pGVar5 == (GizmoLineSlider3DLookAndFeel *)0x0) {
      lVar6 = 0xd8;
    }
    lVar6 = *(longlong *)((longlong)&this->klass + lVar6);
  }
  else {
    fVar7 = (pGVar2->fields)._color.r;
    fVar8 = (pGVar2->fields)._color.g;
    fVar9 = (pGVar2->fields)._color.b;
    fVar10 = (pGVar2->fields)._color.a;
    lVar6 = 0xe0;
    if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider3DLookAndFeel *)0x0) {
      lVar6 = 0xd8;
    }
    lVar6 = *(longlong *)((longlong)&this->klass + lVar6);
    if (lVar6 == 0) goto code_?;
  }
  lVar11 = 0xe0;
  if (*(char *)(lVar6 + 0x34) != '\0') {
    pGVar12 = (this->fields)._rotationDrag;
    if (pGVar12 == (GizmoSglAxisRotationDrag3D *)0x0) goto code_?;
    cVar13 = (*(pGVar12->klass->vtable).get_IsActive_1.methodPtr)();
    if (cVar13 != '\0') {
      pGVar12 = (this->fields)._rotationDrag;
      if (((pGVar12 == (GizmoSglAxisRotationDrag3D *)0x0) ||
          (pGVar14 = (this->fields)._rotationArc, pGVar14 == (GizmoRotationArc3D *)0x0)) ||
         (pAVar15 = (pGVar14->fields)._arc, pAVar15 == (ArcShape3D *)0x0)) goto code_?;
      fVar16 = (float)FUN_?((pGVar12->fields)._totalRotation,_UNK_?);
      (pAVar15->fields)._degreeAngleFromStart = fVar16;
      ArcShape3D::ArcShape3D_CalculateEndPoint(pAVar15,(MethodInfo *)0x0);
      (pAVar15->fields)._areBorderPointsDirty = 1;
      pGVar14 = (this->fields)._rotationArc;
      fVar16 = GizmoLineSlider3D_GetZoomFactor(this,camera,(MethodInfo *)0x0);
      fVar16 = GizmoLineSlider3D_GetRealLength(this,fVar16,(MethodInfo *)0x0);
      if ((pGVar14 == (GizmoRotationArc3D *)0x0) ||
         (pAVar15 = (pGVar14->fields)._arc, pAVar15 == (ArcShape3D *)0x0)) goto code_?;
      ArcShape3D::ArcShape3D_set_Radius(pAVar15,fVar16,(MethodInfo *)0x0);
      lVar6 = 0xe0;
      if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider3DLookAndFeel *)0x0) {
        lVar6 = 0xd8;
      }
      lVar6 = *(longlong *)((longlong)&this->klass + lVar6);
      if ((lVar6 == 0) ||
         (pGVar14 = (this->fields)._rotationArc, pGVar14 == (GizmoRotationArc3D *)0x0))
      goto code_?;
      GizmoRotationArc3D::GizmoRotationArc3D_Render
                (pGVar14,*(GizmoRotationArc3DLookAndFeel **)(lVar6 + 0x38),(MethodInfo *)0x0);
    }
  }
  lVar6 = 0xe0;
  if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider3DLookAndFeel *)0x0) {
    lVar6 = 0xd8;
  }
  lVar6 = *(longlong *)((longlong)&this->klass + lVar6);
  if (lVar6 != 0) {
    fVar16 = _UNK_?;
    if (*(char *)(lVar6 + 0x24) != '\0') {
      pGVar4 = (this->fields)._._handle;
      if (pGVar4 == (GizmoHandle *)0x0) goto code_?;
      fVar16 = GizmoHandle::GizmoHandle_GetZoomFactor(pGVar4,camera,(MethodInfo *)0x0);
    }
    pVVar17 = GizmoLineSlider3D_GetRealEndPosition
                        ((Vector3 *)aCStack_18,this,fVar16,(MethodInfo *)0x0);
    uVar19._0_4_ = pVVar17->x;
    uVar19._4_4_ = pVVar17->y;
    fVar16 = pVVar17->z;
    pVVar17 = GizmoLineSlider3D_GetRealDirection((Vector3 *)aCStack_18,this,(MethodInfo *)0x0);
    VStack_20.x = pVVar17->x;
    VStack_20.y = pVVar17->y;
    VStack_20.z = pVVar17->z;
    if (*(int *)&(TypeInfo__RTG__CameraEx->_1).field_0x1c == 0) {
      FUN_?();
    }
    aCStack_18[0]._0_8_ = uVar19;
    aCStack_18[0].b = fVar16;
    bVar21 = CameraEx::CameraEx_IsPointFacingCamera
                       (camera,(Vector3 *)aCStack_18,&VStack_20,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._cap3D;
    if (pGVar1 != (GizmoCap3D *)0x0) {
      if (((pGVar1->fields)._._isVisible & (bVar21 ^ 1)) != 0) {
        (*(pGVar1->klass->vtable).Render_1.methodPtr)(pGVar1);
      }
      if ((this->fields)._._isVisible != 0) {
        lVar6 = 0xe0;
        if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider3DLookAndFeel *)0x0) {
          lVar6 = 0xd8;
        }
        lVar6 = *(longlong *)((longlong)&this->klass + lVar6);
        if (lVar6 == 0) goto code_?;
        if (*(int *)(lVar6 + 0x18) == 0) {
          lVar6 = 0xe0;
          if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider3DLookAndFeel *)0x0) {
            lVar6 = 0xd8;
          }
          lVar6 = *(longlong *)((longlong)&this->klass + lVar6);
          if (lVar6 == 0) goto code_?;
          if (*(int *)(lVar6 + 0x10) == 0) {
            if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider3DLookAndFeel *)0x0) {
              lVar11 = 0xd8;
            }
            isLit = *(int *)(*(longlong *)((longlong)&this->klass + lVar11) + 0x14) != 0;
          }
          else {
            isLit = false;
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
          GizmoSolidMaterial::GizmoSolidMaterial_SetLit(this_01,isLit,(MethodInfo *)0x0);
          if (isLit != false) {
            if ((camera == (Camera *)0x0) ||
               (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)camera,(MethodInfo *)0x0),
               this_02 == (Transform *)0x0)) goto code_?;
            pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                                (&VStack_20,this_02,(MethodInfo *)0x0);
            aCStack_18[0].r = pVVar17->x;
            aCStack_18[0].g = pVVar17->y;
            aCStack_18[0].b = pVVar17->z;
            GizmoSolidMaterial::GizmoSolidMaterial_SetLightDirection
                      (this_01,(Vector3 *)aCStack_18,(MethodInfo *)0x0);
          }
          if (cRam_? == '\0') {
            FUN_?(&StringLiteral__Color);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar22 = GizmoSolidMaterial::GizmoSolidMaterial_get_Material(this_01,(MethodInfo *)0x0);
          if (pMVar22 == (Material *)0x0) goto code_?;
          aCStack_18[0].g = fVar8;
          aCStack_18[0].r = fVar7;
          aCStack_18[0].b = fVar9;
          aCStack_18[0].a = fVar10;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                    (pMVar22,StringLiteral__Color,aCStack_18,(MethodInfo *)0x0);
          pMVar22 = GizmoSolidMaterial::GizmoSolidMaterial_get_Material(this_01,(MethodInfo *)0x0);
          if (pMVar22 == (Material *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass
                    (pMVar22,0,(MethodInfo *)0x0);
          pGVar4 = (this->fields)._._handle;
          if (pGVar4 == (GizmoHandle *)0x0) goto code_?;
          GizmoHandle::GizmoHandle_Render3DSolid(pGVar4,(MethodInfo *)0x0);
        }
        else {
          if (*(int *)&(TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>->_1).field_0x1c == 0) {
            FUN_?();
          }
          this_00 = (GizmoLineMaterial *)
                    Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                              (MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
          if (this_00 == (GizmoLineMaterial *)0x0) goto code_?;
          GizmoLineMaterial::GizmoLineMaterial_ResetValuesToSensibleDefaults
                    (this_00,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&StringLiteral__Color);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar22 = GizmoLineMaterial::GizmoLineMaterial_get_Material(this_00,(MethodInfo *)0x0);
          if (pMVar22 == (Material *)0x0) goto code_?;
          aCStack_18[0].g = fVar8;
          aCStack_18[0].r = fVar7;
          aCStack_18[0].b = fVar9;
          aCStack_18[0].a = fVar10;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                    (pMVar22,StringLiteral__Color,aCStack_18,(MethodInfo *)0x0);
          pMVar22 = GizmoLineMaterial::GizmoLineMaterial_get_Material(this_00,(MethodInfo *)0x0);
          if (pMVar22 == (Material *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass
                    (pMVar22,0,(MethodInfo *)0x0);
          pGVar4 = (this->fields)._._handle;
          if (pGVar4 == (GizmoHandle *)0x0) goto code_?;
          GizmoHandle::GizmoHandle_Render3DWire(pGVar4,(MethodInfo *)0x0);
        }
      }
      pGVar1 = (this->fields)._cap3D;
      if (pGVar1 != (GizmoCap3D *)0x0) {
        if (((pGVar1->fields)._._isVisible != 0) && ((bVar21 ^ 1) == 0)) {
          (*(pGVar1->klass->vtable).Render_1.methodPtr)
                    (pGVar1,camera,(pGVar1->klass->vtable).Render_1.method);
        }
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Void Set3DCapHoverable(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_Set3DCapHoverable
               (GizmoLineSlider3D *this,bool isHoverable,MethodInfo *method)

{
  pGVar1 = (this->fields)._cap3D;
  if (pGVar1 == (GizmoCap3D *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pGVar1->fields)._._isHoverable != isHoverable) {
    (pGVar1->fields)._._isHoverable = isHoverable;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pGVar1->klass->vtable).OnHoverableStateChanged.methodPtr)
              (pGVar1,(pGVar1->klass->vtable).OnHoverableStateChanged.method);
    return;
  }
  return;
}


/* Void Set3DCapVisible(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_Set3DCapVisible
               (GizmoLineSlider3D *this,bool isVisible,MethodInfo *method)

{
  pGVar1 = (this->fields)._cap3D;
  if (pGVar1 == (GizmoCap3D *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pGVar1->fields)._._isVisible != isVisible) {
    (pGVar1->fields)._._isVisible = isVisible;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pGVar1->klass->vtable).OnVisibilityStateChanged.methodPtr)
              (pGVar1,(pGVar1->klass->vtable).OnVisibilityStateChanged.method);
    return;
  }
  return;
}


/* Void SetDirection(Vector3) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_SetDirection
               (GizmoLineSlider3D *this,Vector3 *directionAxis,MethodInfo *method)

{
  bVar1 = GizmoLineSlider3D_get_IsDragged(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    this_00 = (this->fields)._directionAxisMap;
    if (this_00 == (GizmoTransformAxisMap3D *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    VStack_3.x = directionAxis->x;
    VStack_3.y = directionAxis->y;
    VStack_3.z = directionAxis->z;
    GizmoTransformAxisMap3D::GizmoTransformAxisMap3D_SetAxis(this_00,&VStack_3,(MethodInfo *)0x0);
  }
  return;
}


/* Void SetDragChannel(GizmoDragChannel) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_SetDragChannel
               (GizmoLineSlider3D *this,GizmoDragChannel__Enum dragChannel,MethodInfo *method)

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
    pGVar8 = (this->fields)._cap3D;
    if (pGVar8 != (GizmoCap3D *)0x0) {
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


/* Void SetDragRotationAxis(Vector3) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_SetDragRotationAxis
               (GizmoLineSlider3D *this,Vector3 *rotationAxis,MethodInfo *method)

{
  bVar1 = GizmoLineSlider3D_get_IsDragged(this,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return;
  }
  pGVar2 = (this->fields)._dragRotationAxisMap;
  if (pGVar2 != (GizmoTransformAxisMap3D *)0x0) {
    bVar3 = iRam_? != 0;
    (pGVar2->fields)._transform = (GizmoTransform *)0x0;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(pGVar2->fields)._transform >> 0xc);
      uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (ulonglong)(uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    pGVar2 = (this->fields)._dragRotationAxisMap;
    if (pGVar2 != (GizmoTransformAxisMap3D *)0x0) {
      if ((pGVar2->fields)._transform == (GizmoTransform *)0x0) {
        VStack_8.x = rotationAxis->x;
        VStack_8.y = rotationAxis->y;
        VStack_8.z = rotationAxis->z;
        fVar9 = (float)FUN_?(&VStack_8);
        if (_UNK_? < fVar9) {
          uVar10 = rotationAxis->x;
          fVar11 = (float)uVar10 / fVar9;
          fVar12 = rotationAxis->y / fVar9;
          fVar9 = rotationAxis->z / fVar9;
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
          fVar11 = (pVVar13->zeroVector).x;
          fVar12 = (pVVar13->zeroVector).y;
          fVar9 = (pVVar13->zeroVector).z;
        }
        (pGVar2->fields)._freeAxis.x = fVar11;
        (pGVar2->fields)._freeAxis.y = fVar12;
        (pGVar2->fields)._freeAxis.z = fVar9;
        return;
      }
      pVVar14 = (((pGVar2->fields)._transform)->fields)._axes3D;
      if (pVVar14 != (Vector3__Array *)0x0) {
        if ((int)pVVar14->max_length == 0) {
code_?:
          FUN_?();
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        pAVar16 = (pGVar2->fields)._mappedAxisDesc;
        uVar17._0_4_ = pVVar14->vector[0].x;
        uVar17._4_4_ = pVVar14->vector[0].y;
        fVar9 = pVVar14->vector[0].z;
        if (pAVar16 != (AxisDescriptor *)0x0) {
          if ((pAVar16->fields)._index == 0) {
            pGVar18 = (pGVar2->fields)._transform;
            if ((pGVar18 == (GizmoTransform *)0x0) ||
               (pVVar14 = (pGVar18->fields)._axes3D, pVVar14 == (Vector3__Array *)0x0))
            goto code_?;
            if ((uint)pVVar14->max_length < 2) goto code_?;
            uVar17._0_4_ = pVVar14->vector[1].x;
            uVar17._4_4_ = pVVar14->vector[1].y;
            fVar9 = pVVar14->vector[1].z;
          }
          pGVar18 = (pGVar2->fields)._transform;
          if (pGVar18 == (GizmoTransform *)0x0) {
            QStack_19.x = (pGVar2->fields)._freeAxis.x;
            QStack_19.y = (pGVar2->fields)._freeAxis.y;
            fVar11 = (pGVar2->fields)._freeAxis.z;
          }
          else {
            pAVar16 = (pGVar2->fields)._mappedAxisDesc;
            if ((pAVar16 == (AxisDescriptor *)0x0) ||
               (pVVar14 = (pGVar18->fields)._axes3D, pVVar14 == (Vector3__Array *)0x0))
            goto code_?;
            uVar4 = (pAVar16->fields)._index;
            if ((uint)pVVar14->max_length <= uVar4) goto code_?;
            fVar20 = pVVar14->vector[(int)uVar4].x;
            fVar21 = pVVar14->vector[(int)uVar4].y;
            fVar11 = pVVar14->vector[(int)uVar4].z;
            if ((pAVar16->fields)._sign == 1) {
              fVar20 = (float)((uint)fVar20 ^ _UNK_?);
              fVar21 = (float)((uint)fVar21 ^ _UNK_?);
              fVar11 = (float)((uint)pVVar14->vector[(int)uVar4].z ^ _UNK_?);
            }
            QStack_19.y = fVar21;
            QStack_19.x = fVar20;
          }
          VStack_22.x = rotationAxis->x;
          VStack_22.y = rotationAxis->y;
          VStack_22.z = rotationAxis->z;
          QStack_19.z = fVar11;
          VStack_8._0_8_ = uVar17;
          VStack_8.z = fVar9;
          pQVar23 = QuaternionEx::QuaternionEx_FromToRotation3D
                              (&QStack_24,(Vector3 *)&QStack_19,&VStack_22,&VStack_8,
                               (MethodInfo *)0x0);
          if (pGVar18 != (GizmoTransform *)0x0) {
            QStack_19.x = pQVar23->x;
            QStack_19.y = pQVar23->y;
            QStack_19.z = pQVar23->z;
            QStack_19.w = pQVar23->w;
            GizmoTransform::GizmoTransform_Rotate3D(pGVar18,&QStack_19,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void SetSnapEnabled(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_SetSnapEnabled
               (GizmoLineSlider3D *this,bool isEnabled,MethodInfo *method)

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

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_SetupSharedLookAndFeel
               (GizmoLineSlider3D *this,MethodInfo *method)

{
  lVar1 = 0xe0;
  if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider3DLookAndFeel *)0x0) {
    lVar1 = 0xd8;
  }
  lVar1 = *(longlong *)((longlong)&this->klass + lVar1);
  if ((lVar1 != 0) && (pGVar2 = (this->fields)._cap3D, pGVar2 != (GizmoCap3D *)0x0)) {
    bVar3 = iRam_? != 0;
    (pGVar2->fields)._sharedLookAndFeel = *(GizmoCap3DLookAndFeel **)(lVar1 + 0x60);
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


/* Void UnmapDragRotationAxis() */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_UnmapDragRotationAxis
               (GizmoLineSlider3D *this,MethodInfo *method)

{
  bVar1 = GizmoLineSlider3D_get_IsDragged(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    pGVar2 = (this->fields)._dragRotationAxisMap;
    if (pGVar2 == (GizmoTransformAxisMap3D *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = iRam_? != 0;
    (pGVar2->fields)._transform = (GizmoTransform *)0x0;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(pGVar2->fields)._transform >> 0xc);
      puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar7 = *puVar6;
        LOCK();
        uVar8 = *puVar6;
        if (uVar7 == uVar8) {
          *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (uVar7 != uVar8);
    }
  }
  return;
}


/* Void UnregisterScalerHandle(Int32) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_UnregisterScalerHandle
               (GizmoLineSlider3D *this,int32_t handleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoScalerHandle>__RemoveAll_System__Predicate<RTG::GizmoScalerHandle>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Predicate<RTG::GizmoScalerHandle>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__GizmoLineSlider3D____c__DisplayClass81_0___UnregisterScalerHandle_b__0_RTG__GizmoScalerHandle_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoLineSlider3D____c__DisplayClass81_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__RTG__GizmoLineSlider3D____c__DisplayClass81_0);
  if (object != (Object *)0x0) {
    *(int32_t *)&object[1].klass = handleId;
    pLVar1 = (this->fields)._scalerHandles;
    this_00 = (Predicate_1_Object_ *)
              FUN_?(TypeInfo__System__Predicate<RTG::GizmoScalerHandle>);
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              (this_00,object,
               MethodInfo__RTG__GizmoLineSlider3D____c__DisplayClass81_0___UnregisterScalerHandle_b__0_RTG__GizmoScalerHandle_
               ,(MethodInfo *)0x0);
    if (pLVar1 != (List_1_RTG_GizmoScalerHandle_ *)0x0) {
      if (this_00 == (Predicate_1_Object_ *)0x0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentNullException
                  (ExceptionArgument__Enum_match,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      index = 0;
      if ((pLVar1->fields)._size < 1) {
DAT_?:
        if ((int)index < (pLVar1->fields)._size) {
          uVar3 = index + 1;
          if ((int)uVar3 < (pLVar1->fields)._size) {
            lVar4 = (longlong)(int)uVar3;
code_?:
            lVar5 = lVar4 * 8 + 0x20;
            uVar6 = uVar3;
            do {
              pGVar7 = (pLVar1->fields)._items;
              if (pGVar7 == (GizmoScalerHandle__Array *)0x0) goto code_?;
              if ((uint)pGVar7->max_length <= uVar6) goto DAT_?;
              cVar8 = (*(this_00->fields)._._.invoke_impl)
                                ((this_00->fields)._._.method_code,
                                 *(undefined8 *)((longlong)pGVar7->vector + lVar5 + -0x20),
                                 (this_00->fields)._._.method);
              lVar9 = lVar4;
              if (cVar8 == '\0') break;
              uVar6 = uVar6 + 1;
              lVar4 = lVar4 + 1;
              lVar5 = lVar5 + 8;
              lVar9 = lVar4;
            } while ((int)uVar6 < (pLVar1->fields)._size);
            if ((int)uVar6 < (pLVar1->fields)._size) goto code_?;
          }
code_?:
          mscorlib.dll::System::Array::Array_Clear
                    ((Array *)(pLVar1->fields)._items,index,(pLVar1->fields)._size - index,
                     (MethodInfo *)0x0);
          piVar10 = &(pLVar1->fields)._version;
          *piVar10 = *piVar10 + 1;
          (pLVar1->fields)._size = index;
        }
      }
      else {
        lVar4 = 0x20;
        do {
          pGVar7 = (pLVar1->fields)._items;
          if (pGVar7 == (GizmoScalerHandle__Array *)0x0) goto code_?;
          if ((uint)pGVar7->max_length <= index) goto DAT_?;
          cVar8 = (*(this_00->fields)._._.invoke_impl)
                            ((this_00->fields)._._.method_code,
                             *(undefined8 *)((longlong)pGVar7->vector + lVar4 + -0x20),
                             (this_00->fields)._._.method);
          if (cVar8 != '\0') goto DAT_?;
          index = index + 1;
          lVar4 = lVar4 + 8;
        } while ((int)index < (pLVar1->fields)._size);
      }
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
code_?:
  pGVar7 = (pLVar1->fields)._items;
  lVar5 = (longlong)(int)index;
  lVar4 = lVar9 + 1;
  index = index + 1;
  uVar3 = uVar6 + 1;
  if (pGVar7 == (GizmoScalerHandle__Array *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((uint)pGVar7->max_length <= uVar6) {
DAT_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_?((pLVar1->fields)._items,lVar5,pGVar7->vector[lVar9]);
  if ((pLVar1->fields)._size <= (int)uVar3) goto code_?;
  goto code_?;
}


/* GizmoLineSlider3D(Gizmo, Int32, Int32) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D__ctor
               (GizmoLineSlider3D *this,Gizmo *gizmo,int32_t handleId,int32_t capHandleId,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__BoxShape3D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__CylinderShape3D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoBoxLineSlider3DController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoCap3D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoCylinderLineSlider3DController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoEntityTransformChangedHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__RTG__GizmoLine3DType);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoLineSlider3DControllerData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoLineSlider3DLookAndFeel);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoLineSlider3DSettings);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__GizmoLineSlider3D__OnGizmoAttemptHandleDragBegin_RTG__Gizmo__int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__GizmoLineSlider3D__OnGizmoHandleHoverEnter_RTG__Gizmo__int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__GizmoLineSlider3D__OnGizmoHandleHoverExit_RTG__Gizmo__int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__GizmoLineSlider3D__OnGizmoPostDisabled_RTG__Gizmo_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__GizmoLineSlider3D__OnGizmoPostEnabled_RTG__Gizmo_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__GizmoLineSlider3D__OnGizmoPreUpdateBegin_RTG__Gizmo_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__GizmoLineSlider3D__OnTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoOverrideColor);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoPostDisabledHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoPostEnabledHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoPreDragBeginAttemptHandler);
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
    FUN_?(&TypeInfo__RTG__GizmoRotationArc3D);
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
    FUN_?(&TypeInfo__RTG__GizmoThinLineSlider3DController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoTransformAxisMap3D);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoTransform);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__IGizmoLineSlider3DController);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::GizmoScalerHandle>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<RTG::GizmoScalerHandle>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__SegmentShape3D);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (SegmentShape3D *)FUN_?(TypeInfo__RTG__SegmentShape3D);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar2 = cRam_?;
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar4 = (pVVar3->zeroVector).z;
  fVar5 = (pVVar3->zeroVector).y;
  (pSVar1->fields)._startPoint.x = (pVVar3->zeroVector).x;
  (pSVar1->fields)._startPoint.y = fVar5;
  (pSVar1->fields)._startPoint.z = fVar4;
  if (cVar2 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cVar2 = '\x01';
    cRam_? = '\x01';
  }
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar5 = (pVVar3->rightVector).y;
  fVar4 = (pVVar3->rightVector).z;
  (pSVar1->fields)._endPoint.x = (pVVar3->rightVector).x;
  (pSVar1->fields)._endPoint.y = fVar5;
  (pSVar1->fields)._endPoint.z = fVar4;
  if (cVar2 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar6 = iRam_? != 0;
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar5 = (pVVar3->rightVector).y;
  fVar4 = (pVVar3->rightVector).z;
  (pSVar1->fields)._direction.x = (pVVar3->rightVector).x;
  (pSVar1->fields)._direction.y = fVar5;
  (pSVar1->fields)._direction.z = fVar4;
  (pSVar1->fields)._length = 1.0;
  (this->fields)._segment = pSVar1;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields)._segment >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  this_01 = (BoxShape3D *)FUN_?(TypeInfo__RTG__BoxShape3D);
  BoxShape3D::BoxShape3D__ctor(this_01,(MethodInfo *)0x0);
  bVar6 = iRam_? != 0;
  (this->fields)._box = this_01;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields)._box >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pCVar11 = (CylinderShape3D *)FUN_?(TypeInfo__RTG__CylinderShape3D);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar6 = cRam_? == '\0';
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar5 = (pVVar3->zeroVector).y;
  fVar4 = (pVVar3->zeroVector).z;
  (pCVar11->fields)._baseCenter.x = (pVVar3->zeroVector).x;
  (pCVar11->fields)._baseCenter.y = fVar5;
  (pCVar11->fields)._baseCenter.z = fVar4;
  (pCVar11->fields)._radius = 1.0;
  (pCVar11->fields)._height = 1.0;
  if (bVar6) {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar6 = iRam_? != 0;
  pQVar12 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar4 = (pQVar12->identityQuaternion).y;
  fVar5 = (pQVar12->identityQuaternion).z;
  fVar13 = (pQVar12->identityQuaternion).w;
  (pCVar11->fields)._rotation.x = (pQVar12->identityQuaternion).x;
  (pCVar11->fields)._rotation.y = fVar4;
  (pCVar11->fields)._rotation.z = fVar5;
  (pCVar11->fields)._rotation.w = fVar13;
  (this->fields)._cylinder = pCVar11;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields)._cylinder >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pIVar14 = TypeRef__RTG__GizmoLine3DType;
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
  if (plVar15 == (longlong *)0x0) {
    uVar17 = func_?(&TypeInfo__System__ArgumentNullException);
    this_07 = (ArgumentNullException *)func_?(uVar17);
    paramName = (String *)func_?(&StringLiteral_enumType);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_07,paramName,(MethodInfo *)0x0);
    uVar17 = func_?(&MethodInfo__System__Enum__GetValues_System__Type_);
    FUN_?(this_07,uVar17);
    pcVar18 = (code *)swi(3);
    (*pcVar18)();
    return;
  }
  this_02 = (Array *)(**(code **)(*plVar15 + 0x888))(plVar15);
  if (this_02 == (Array *)0x0) {
code_?:
    FUN_?();
    pcVar18 = (code *)swi(3);
    (*pcVar18)();
    return;
  }
  mscorlib.dll::System::Array::Array_get_Length(this_02,(MethodInfo *)0x0);
  pIVar19 = (IGizmoLineSlider3DController__Array *)
            FUN_?(TypeInfo__RTG__IGizmoLineSlider3DController);
  bVar6 = iRam_? != 0;
  (this->fields)._controllers = pIVar19;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields)._controllers >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pGVar20 = (GizmoLineSlider3DControllerData *)
            FUN_?(TypeInfo__RTG__GizmoLineSlider3DControllerData);
  bVar6 = iRam_? != 0;
  (this->fields)._controllerData = pGVar20;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields)._controllerData >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  (this->fields)._dragChannel = 3;
  pGVar21 = (GizmoSglAxisOffsetDrag3D *)FUN_?(TypeInfo__RTG__GizmoSglAxisOffsetDrag3D);
  (pGVar21->fields)._._sensitivity = 1.0;
  GizmoDragSession::GizmoDragSession__ctor((GizmoDragSession *)pGVar21,(MethodInfo *)0x0);
  bVar6 = iRam_? != 0;
  (this->fields)._offsetDrag = pGVar21;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields)._offsetDrag >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pGVar22 = (GizmoSglAxisRotationDrag3D *)FUN_?(TypeInfo__RTG__GizmoSglAxisRotationDrag3D);
  (pGVar22->fields)._._sensitivity = 1.0;
  GizmoDragSession::GizmoDragSession__ctor((GizmoDragSession *)pGVar22,(MethodInfo *)0x0);
  bVar6 = iRam_? != 0;
  (this->fields)._rotationDrag = pGVar22;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields)._rotationDrag >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  this_03 = (GizmoRotationArc3D *)FUN_?(TypeInfo__RTG__GizmoRotationArc3D);
  GizmoRotationArc3D::GizmoRotationArc3D__ctor(this_03,(MethodInfo *)0x0);
  bVar6 = iRam_? != 0;
  (this->fields)._rotationArc = this_03;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields)._rotationArc >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pGVar23 = (GizmoSglAxisScaleDrag3D *)FUN_?(TypeInfo__RTG__GizmoSglAxisScaleDrag3D);
  (pGVar23->fields)._relativeScale = 1.0;
  (pGVar23->fields)._totalScale = 1.0;
  (pGVar23->fields)._._sensitivity = 1.0;
  GizmoDragSession::GizmoDragSession__ctor((GizmoDragSession *)pGVar23,(MethodInfo *)0x0);
  bVar6 = iRam_? != 0;
  (this->fields)._scaleDrag = pGVar23;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields)._scaleDrag >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  this_04 = (List_1_RTG_GizmoScalerHandle_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<RTG::GizmoScalerHandle>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_04,
             MethodInfo__System__Collections__Generic__List<RTG::GizmoScalerHandle>__List__);
  bVar6 = iRam_? != 0;
  (this->fields)._scalerHandles = this_04;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields)._scalerHandles >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pGVar24 = (GizmoTransform *)FUN_?(TypeInfo__RTG__GizmoTransform);
  GizmoTransform::GizmoTransform__ctor(pGVar24,(MethodInfo *)0x0);
  bVar6 = iRam_? != 0;
  (this->fields)._transform = pGVar24;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields)._transform >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pGVar25 = (GizmoTransformAxisMap3D *)FUN_?(TypeInfo__RTG__GizmoTransformAxisMap3D);
  GizmoTransformAxisMap3D::GizmoTransformAxisMap3D__ctor(pGVar25,(MethodInfo *)0x0);
  bVar6 = iRam_? != 0;
  (this->fields)._directionAxisMap = pGVar25;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields)._directionAxisMap >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pGVar25 = (GizmoTransformAxisMap3D *)FUN_?(TypeInfo__RTG__GizmoTransformAxisMap3D);
  GizmoTransformAxisMap3D::GizmoTransformAxisMap3D__ctor(pGVar25,(MethodInfo *)0x0);
  bVar6 = iRam_? != 0;
  (this->fields)._dragRotationAxisMap = pGVar25;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields)._dragRotationAxisMap >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pGVar26 = (GizmoOverrideColor *)FUN_?(TypeInfo__RTG__GizmoOverrideColor);
  bVar6 = iRam_? != 0;
  (this->fields)._overrideColor = pGVar26;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields)._overrideColor >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pGVar27 = (GizmoLineSlider3DSettings *)FUN_?(TypeInfo__RTG__GizmoLineSlider3DSettings);
  bVar6 = iRam_? != 0;
  (pGVar27->fields)._lineHoverEps = 0.7;
  (pGVar27->fields)._boxHoverEps = 0.5;
  (pGVar27->fields)._cylinderHoverEps = 0.5;
  (pGVar27->fields)._offsetSnapStep = 1.0;
  (pGVar27->fields)._rotationSnapStep = 15.0;
  (pGVar27->fields)._scaleSnapStep = 0.1;
  (pGVar27->fields)._offsetSensitivity = 1.0;
  (pGVar27->fields)._rotationSensitivity = 0.45;
  (pGVar27->fields)._scaleSensitivity = 1.0;
  (this->fields)._settings = pGVar27;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields)._settings >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  this_05 = (GizmoLineSlider3DLookAndFeel *)
            FUN_?(TypeInfo__RTG__GizmoLineSlider3DLookAndFeel);
  GizmoLineSlider3DLookAndFeel::GizmoLineSlider3DLookAndFeel__ctor(this_05,(MethodInfo *)0x0);
  bVar6 = iRam_? != 0;
  (this->fields)._lookAndFeel = this_05;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields)._lookAndFeel >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  GizmoSlider::GizmoSlider__ctor((GizmoSlider *)this,gizmo,handleId,(MethodInfo *)0x0);
  pGVar28 = (this->fields)._._handle;
  if (pGVar28 == (GizmoHandle *)0x0) goto code_?;
  iVar29 = GizmoHandle::GizmoHandle_Add3DShape
                     (pGVar28,(Shape3D *)(this->fields)._segment,(MethodInfo *)0x0);
  pGVar28 = (this->fields)._._handle;
  (this->fields)._segmentIndex = iVar29;
  if (pGVar28 == (GizmoHandle *)0x0) goto code_?;
  iVar29 = GizmoHandle::GizmoHandle_Add3DShape
                     (pGVar28,(Shape3D *)(this->fields)._box,(MethodInfo *)0x0);
  pGVar28 = (this->fields)._._handle;
  (this->fields)._boxIndex = iVar29;
  if (pGVar28 == (GizmoHandle *)0x0) goto code_?;
  iVar29 = GizmoHandle::GizmoHandle_Add3DShape
                     (pGVar28,(Shape3D *)(this->fields)._cylinder,(MethodInfo *)0x0);
  pGVar30 = (this->fields)._._gizmo;
  (this->fields)._cylinderIndex = iVar29;
  this_06 = (GizmoCap3D *)FUN_?(TypeInfo__RTG__GizmoCap3D);
  GizmoCap3D::GizmoCap3D__ctor(this_06,pGVar30,capHandleId,(MethodInfo *)0x0);
  bVar6 = iRam_? != 0;
  (this->fields)._cap3D = this_06;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields)._cap3D >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  GizmoLineSlider3D_SetupSharedLookAndFeel(this,(MethodInfo *)0x0);
  GizmoLineSlider3D_MapDirection(this,0,AxisSign__Enum_Positive,(MethodInfo *)0x0);
  GizmoLineSlider3D_SetDragChannel(this,GizmoDragChannel__Enum_Offset,(MethodInfo *)0x0);
  pGVar20 = (this->fields)._controllerData;
  if (pGVar20 == (GizmoLineSlider3DControllerData *)0x0) goto code_?;
  (pGVar20->fields).Gizmo = (this->fields)._._gizmo;
  func_?(&pGVar20->fields);
  pGVar20 = (this->fields)._controllerData;
  if (pGVar20 == (GizmoLineSlider3DControllerData *)0x0) goto code_?;
  (pGVar20->fields).Slider = this;
  func_?(&(pGVar20->fields).Slider);
  pGVar20 = (this->fields)._controllerData;
  if (pGVar20 == (GizmoLineSlider3DControllerData *)0x0) goto code_?;
  (pGVar20->fields).SliderHandle = (this->fields)._._handle;
  func_?(&(pGVar20->fields).SliderHandle);
  pGVar20 = (this->fields)._controllerData;
  if (pGVar20 == (GizmoLineSlider3DControllerData *)0x0) goto code_?;
  (pGVar20->fields).Segment = (this->fields)._segment;
  func_?(&(pGVar20->fields).Segment);
  pGVar20 = (this->fields)._controllerData;
  if (pGVar20 == (GizmoLineSlider3DControllerData *)0x0) goto code_?;
  (pGVar20->fields).Box = (this->fields)._box;
  func_?(&(pGVar20->fields).Box);
  pGVar20 = (this->fields)._controllerData;
  if (pGVar20 == (GizmoLineSlider3DControllerData *)0x0) goto code_?;
  (pGVar20->fields).Cylinder = (this->fields)._cylinder;
  func_?(&(pGVar20->fields).Cylinder);
  pGVar20 = (this->fields)._controllerData;
  if (pGVar20 == (GizmoLineSlider3DControllerData *)0x0) goto code_?;
  (pGVar20->fields).SegmentIndex = (this->fields)._segmentIndex;
  pGVar20 = (this->fields)._controllerData;
  if (pGVar20 == (GizmoLineSlider3DControllerData *)0x0) goto code_?;
  (pGVar20->fields).BoxIndex = (this->fields)._boxIndex;
  pGVar20 = (this->fields)._controllerData;
  if (pGVar20 == (GizmoLineSlider3DControllerData *)0x0) goto code_?;
  (pGVar20->fields).CylinderIndex = (this->fields)._cylinderIndex;
  pIVar19 = (this->fields)._controllers;
  pGVar20 = (this->fields)._controllerData;
  pSVar31 = (SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)FUN_?(TypeInfo__RTG__GizmoThinLineSlider3DController);
  System.dll::System::Collections::Generic::SortedList`2[TKey,TValue]+ValueList[Unity::IL2CPP::
  Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]
  ::
  SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (pSVar31,(SortedList_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                      *)pGVar20,(MethodInfo *)0x0);
  if (pIVar19 == (IGizmoLineSlider3DController__Array *)0x0) goto code_?;
  if ((pSVar31 !=
       (SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
        *)0x0) && (lVar16 = FUN_?(pSVar31,(pIVar19->klass->_0).element_class), lVar16 == 0))
  {
    uVar17 = FUN_?();
    FUN_?(uVar17,0);
    pcVar18 = (code *)swi(3);
    (*pcVar18)();
    return;
  }
  FUN_?(pIVar19,0);
  pIVar19 = (this->fields)._controllers;
  pGVar20 = (this->fields)._controllerData;
  pSVar31 = (SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)FUN_?(TypeInfo__RTG__GizmoBoxLineSlider3DController);
  System.dll::System::Collections::Generic::SortedList`2[TKey,TValue]+ValueList[Unity::IL2CPP::
  Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]
  ::
  SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (pSVar31,(SortedList_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                      *)pGVar20,(MethodInfo *)0x0);
  if (pIVar19 == (IGizmoLineSlider3DController__Array *)0x0) goto code_?;
  if ((pSVar31 !=
       (SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
        *)0x0) && (lVar16 = FUN_?(pSVar31,(pIVar19->klass->_0).element_class), lVar16 == 0))
  {
    uVar17 = FUN_?();
    FUN_?(uVar17,0);
    pcVar18 = (code *)swi(3);
    (*pcVar18)();
    return;
  }
  FUN_?(pIVar19,1);
  pIVar19 = (this->fields)._controllers;
  pGVar20 = (this->fields)._controllerData;
  pSVar31 = (SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)FUN_?(TypeInfo__RTG__GizmoCylinderLineSlider3DController);
  System.dll::System::Collections::Generic::SortedList`2[TKey,TValue]+ValueList[Unity::IL2CPP::
  Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]
  ::
  SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (pSVar31,(SortedList_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                      *)pGVar20,(MethodInfo *)0x0);
  if (pIVar19 == (IGizmoLineSlider3DController__Array *)0x0) goto code_?;
  if ((pSVar31 !=
       (SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
        *)0x0) && (lVar16 = FUN_?(pSVar31,(pIVar19->klass->_0).element_class), lVar16 == 0))
  {
    uVar17 = FUN_?();
    FUN_?(uVar17,0);
    pcVar18 = (code *)swi(3);
    (*pcVar18)();
    return;
  }
  FUN_?(pIVar19,2,pSVar31);
  pGVar24 = (this->fields)._transform;
  value = (GizmoEntityTransformChangedHandler *)
          FUN_?(TypeInfo__RTG__GizmoEntityTransformChangedHandler);
  mscorlib.dll::System::Action`2[Object,UnityEngine::UIElements::Experimental::StyleValues]::
  Action_2_Object_UnityEngine_UIElements_Experimental_StyleValues___ctor
            ((Action_2_Object_UnityEngine_UIElements_Experimental_StyleValues_ *)value,
             (Object *)this,
             MethodInfo__RTG__GizmoLineSlider3D__OnTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
             ,(MethodInfo *)0x0);
  if (pGVar24 == (GizmoTransform *)0x0) goto code_?;
  GizmoTransform::GizmoTransform_add_Changed(pGVar24,value,(MethodInfo *)0x0);
  pGVar30 = (this->fields)._._gizmo;
  value_00 = (GizmoPreUpdateBeginHandler *)FUN_?(TypeInfo__RTG__GizmoPreUpdateBeginHandler);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            ((UnityAction_1_System_Object_ *)value_00,(Object *)this,
             MethodInfo__RTG__GizmoLineSlider3D__OnGizmoPreUpdateBegin_RTG__Gizmo_,(MethodInfo *)0x0
            );
  if (pGVar30 == (Gizmo *)0x0) goto code_?;
  Gizmo::Gizmo_add_PreUpdateBegin(pGVar30,value_00,(MethodInfo *)0x0);
  pGVar30 = (this->fields)._._gizmo;
  value_01 = (GizmoPreDragBeginAttemptHandler *)
             FUN_?(TypeInfo__RTG__GizmoPreDragBeginAttemptHandler);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Int32]::
  UnityAction_2_System_Object_System_Int32___ctor
            ((UnityAction_2_System_Object_System_Int32_ *)value_01,(Object *)this,
             MethodInfo__RTG__GizmoLineSlider3D__OnGizmoAttemptHandleDragBegin_RTG__Gizmo__int_,
             (MethodInfo *)0x0);
  if (pGVar30 == (Gizmo *)0x0) goto code_?;
  Gizmo::Gizmo_add_PreDragBeginAttempt(pGVar30,value_01,(MethodInfo *)0x0);
  pGVar30 = (this->fields)._._gizmo;
  value_02 = (GizmoPreHoverEnterHandler *)FUN_?(TypeInfo__RTG__GizmoPreHoverEnterHandler);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Int32]::
  UnityAction_2_System_Object_System_Int32___ctor
            ((UnityAction_2_System_Object_System_Int32_ *)value_02,(Object *)this,
             MethodInfo__RTG__GizmoLineSlider3D__OnGizmoHandleHoverEnter_RTG__Gizmo__int_,
             (MethodInfo *)0x0);
  if (pGVar30 == (Gizmo *)0x0) goto code_?;
  Gizmo::Gizmo_add_PreHoverEnter(pGVar30,value_02,(MethodInfo *)0x0);
  pGVar30 = (this->fields)._._gizmo;
  value_03 = (GizmoPreHoverExitHandler *)FUN_?(TypeInfo__RTG__GizmoPreHoverExitHandler);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Int32]::
  UnityAction_2_System_Object_System_Int32___ctor
            ((UnityAction_2_System_Object_System_Int32_ *)value_03,(Object *)this,
             MethodInfo__RTG__GizmoLineSlider3D__OnGizmoHandleHoverExit_RTG__Gizmo__int_,
             (MethodInfo *)0x0);
  if (pGVar30 == (Gizmo *)0x0) goto code_?;
  Gizmo::Gizmo_add_PreHoverExit(pGVar30,value_03,(MethodInfo *)0x0);
  pGVar30 = (this->fields)._._gizmo;
  value_04 = (GizmoPostEnabledHandler *)FUN_?(TypeInfo__RTG__GizmoPostEnabledHandler);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            ((UnityAction_1_System_Object_ *)value_04,(Object *)this,
             MethodInfo__RTG__GizmoLineSlider3D__OnGizmoPostEnabled_RTG__Gizmo_,(MethodInfo *)0x0);
  if (pGVar30 == (Gizmo *)0x0) goto code_?;
  Gizmo::Gizmo_add_PostEnabled(pGVar30,value_04,(MethodInfo *)0x0);
  pGVar30 = (this->fields)._._gizmo;
  value_05 = (GizmoPostDisabledHandler *)FUN_?(TypeInfo__RTG__GizmoPostDisabledHandler);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            ((UnityAction_1_System_Object_ *)value_05,(Object *)this,
             MethodInfo__RTG__GizmoLineSlider3D__OnGizmoPostDisabled_RTG__Gizmo_,(MethodInfo *)0x0);
  if (pGVar30 == (Gizmo *)0x0) goto code_?;
  Gizmo::Gizmo_add_PostDisabled(pGVar30,value_05,(MethodInfo *)0x0);
  pGVar21 = (this->fields)._offsetDrag;
  if (pGVar21 == (GizmoSglAxisOffsetDrag3D *)0x0) goto code_?;
  pGVar24 = (this->fields)._transform;
  GizmoDragSession::GizmoDragSession_AddTargetTransform
            ((GizmoDragSession *)pGVar21,pGVar24,(MethodInfo *)0x0);
  pGVar22 = (this->fields)._rotationDrag;
  if (pGVar22 == (GizmoSglAxisRotationDrag3D *)0x0) goto code_?;
  GizmoDragSession::GizmoDragSession_AddTargetTransform
            ((GizmoDragSession *)pGVar22,pGVar24,(MethodInfo *)0x0);
  pGVar23 = (this->fields)._scaleDrag;
  if (pGVar23 == (GizmoSglAxisScaleDrag3D *)0x0) goto code_?;
  GizmoDragSession::GizmoDragSession_AddTargetTransform
            ((GizmoDragSession *)pGVar23,pGVar24,(MethodInfo *)0x0);
  pGVar30 = (this->fields)._._gizmo;
  if ((pGVar30 == (Gizmo *)0x0) ||
     (pGVar21 = (this->fields)._offsetDrag, pGVar21 == (GizmoSglAxisOffsetDrag3D *)0x0))
  goto code_?;
  pGVar24 = (pGVar30->fields)._transform;
  GizmoDragSession::GizmoDragSession_AddTargetTransform
            ((GizmoDragSession *)pGVar21,pGVar24,(MethodInfo *)0x0);
  pGVar22 = (this->fields)._rotationDrag;
  if (pGVar22 == (GizmoSglAxisRotationDrag3D *)0x0) goto code_?;
  GizmoDragSession::GizmoDragSession_AddTargetTransform
            ((GizmoDragSession *)pGVar22,pGVar24,(MethodInfo *)0x0);
  pGVar23 = (this->fields)._scaleDrag;
  if (pGVar23 == (GizmoSglAxisScaleDrag3D *)0x0) goto code_?;
  GizmoDragSession::GizmoDragSession_AddTargetTransform
            ((GizmoDragSession *)pGVar23,pGVar24,(MethodInfo *)0x0);
  pGVar21 = (this->fields)._offsetDrag;
  if ((this->fields)._cap3D == (GizmoCap3D *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoDragSession);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pGVar21 == (GizmoSglAxisOffsetDrag3D *)0x0) goto code_?;
  FUN_?(9);
  pGVar22 = (this->fields)._rotationDrag;
  if ((this->fields)._cap3D == (GizmoCap3D *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoDragSession);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pGVar22 == (GizmoSglAxisRotationDrag3D *)0x0) goto code_?;
  FUN_?(9);
  pGVar23 = (this->fields)._scaleDrag;
  if ((this->fields)._cap3D == (GizmoCap3D *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoDragSession);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pGVar23 == (GizmoSglAxisScaleDrag3D *)0x0) goto code_?;
  FUN_?(9);
  pGVar30 = (this->fields)._._gizmo;
  if ((pGVar30 == (Gizmo *)0x0) ||
     (pGVar24 = (this->fields)._transform, pGVar24 == (GizmoTransform *)0x0))
  goto code_?;
  pGVar32 = (pGVar30->fields)._transform;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__Add_RTG__GizmoTransform_
                  ,pGVar32,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__Remove_RTG__GizmoTransform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((pGVar24->fields)._firingChanged3DEvent == 0) && ((pGVar24->fields)._parent != pGVar32)) {
    pGVar33 = (pGVar24->fields)._parent;
    if (pGVar33 != (GizmoTransform *)0x0) {
      this_00 = (pGVar33->fields)._children;
      if (this_00 == (List_1_RTG_GizmoTransform_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__Remove
                ((List_1_System_Object_ *)this_00,(Object *)pGVar24,
                 MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__Remove_RTG__GizmoTransform_
                );
    }
    bVar6 = iRam_? != 0;
    (pGVar24->fields)._parent = pGVar32;
    if (bVar6) {
      uVar7 = (uint)((ulonglong)&(pGVar24->fields)._parent >> 0xc);
      puVar10 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar9 = *puVar10;
        LOCK();
        uVar8 = *puVar10;
        if (uVar9 == uVar8) {
          *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (uVar9 != uVar8);
    }
    pGVar32 = (pGVar24->fields)._parent;
    if ((pGVar32 == (GizmoTransform *)0x0) ||
       ((pGVar32->fields)._children == (List_1_RTG_GizmoTransform_ *)0x0)) {
code_?:
      FUN_?();
      pcVar18 = (code *)swi(3);
      (*pcVar18)();
      return;
    }
    FUN_?();
    GizmoTransform::GizmoTransform_OnParentChanged(pGVar24,(MethodInfo *)0x0);
  }
  return;
}


/* Int32 get_Cap3DHandleId() */

int32_t Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_get_Cap3DHandleId
                  (GizmoLineSlider3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._cap3D;
  if ((pGVar1 != (GizmoCap3D *)0x0) &&
     (pGVar2 = (pGVar1->fields)._._handle, pGVar2 != (GizmoHandle *)0x0)) {
    return (pGVar2->fields)._id;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* GizmoOverrideColor get_Cap3DOverrideColor() */

GizmoOverrideColor *
Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_get_Cap3DOverrideColor
          (GizmoLineSlider3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._cap3D;
  if (pGVar1 != (GizmoCap3D *)0x0) {
    return (pGVar1->fields)._overrideColor;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pGVar3 = (GizmoOverrideColor *)(*pcVar2)();
  return pGVar3;
}


/* Vector3 get_Direction() */

Vector3 * Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_get_Direction
                    (Vector3 *__return_storage_ptr__,GizmoLineSlider3D *this,MethodInfo *method)

{
  this_00 = (this->fields)._directionAxisMap;
  if (this_00 != (GizmoTransformAxisMap3D *)0x0) {
    pVVar1 = GizmoTransformAxisMap3D::GizmoTransformAxisMap3D_get_Axis
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    fVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar5)();
  return pVVar1;
}


/* Vector3 get_DragRotationAxis() */

Vector3 * Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_get_DragRotationAxis
                    (Vector3 *__return_storage_ptr__,GizmoLineSlider3D *this,MethodInfo *method)

{
  this_00 = (this->fields)._dragRotationAxisMap;
  if (this_00 != (GizmoTransformAxisMap3D *)0x0) {
    pVVar1 = GizmoTransformAxisMap3D::GizmoTransformAxisMap3D_get_Axis
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    fVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar5)();
  return pVVar1;
}


/* Boolean get_Is3DCapHoverable() */

bool Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_get_Is3DCapHoverable
               (GizmoLineSlider3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._cap3D;
  if (pGVar1 != (GizmoCap3D *)0x0) {
    return (pGVar1->fields)._._isHoverable;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean get_Is3DCapVisible() */

bool Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_get_Is3DCapVisible
               (GizmoLineSlider3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._cap3D;
  if (pGVar1 != (GizmoCap3D *)0x0) {
    return (pGVar1->fields)._._isVisible;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean get_IsDragged() */

bool Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_get_IsDragged
               (GizmoLineSlider3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._gizmo;
  if (pGVar1 != (Gizmo *)0x0) {
    if ((pGVar1->fields)._dragInfo._isDragged == 0) {
      return 0;
    }
    pGVar2 = (this->fields)._._handle;
    method = (MethodInfo *)pGVar1;
    if (pGVar2 != (GizmoHandle *)0x0) {
      if ((pGVar1->fields)._dragInfo._handleId == (pGVar2->fields)._id) {
        return 1;
      }
      pGVar3 = (this->fields)._cap3D;
      if ((pGVar3 != (GizmoCap3D *)0x0) &&
         (pGVar2 = (pGVar3->fields)._._handle, pGVar2 != (GizmoHandle *)0x0)) {
        return (pGVar1->fields)._dragInfo._handleId == (pGVar2->fields)._id;
      }
    }
  }
  FUN_?(this,method);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Boolean get_IsRotating() */

bool Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_get_IsRotating
               (GizmoLineSlider3D *this,MethodInfo *method)

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


/* Boolean get_IsScaling() */

bool Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_get_IsScaling
               (GizmoLineSlider3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._scaleDrag;
  if (pGVar1 != (GizmoSglAxisScaleDrag3D *)0x0) {
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


/* GizmoLineSlider3DLookAndFeel get_LookAndFeel() */

GizmoLineSlider3DLookAndFeel *
Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_get_LookAndFeel
          (GizmoLineSlider3D *this,MethodInfo *method)

{
  if ((this->fields)._sharedLookAndFeel != (GizmoLineSlider3DLookAndFeel *)0x0) {
    return (this->fields)._sharedLookAndFeel;
  }
  return (this->fields)._lookAndFeel;
}


/* Vector3 get_RelativeDragOffset() */

Vector3 * Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_get_RelativeDragOffset
                    (Vector3 *__return_storage_ptr__,GizmoLineSlider3D *this,MethodInfo *method)

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

float Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_get_RelativeDragRotation
                (GizmoLineSlider3D *this,MethodInfo *method)

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

float Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_get_RelativeDragScale
                (GizmoLineSlider3D *this,MethodInfo *method)

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


/* GizmoLineSlider3DSettings get_Settings() */

GizmoLineSlider3DSettings *
Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_get_Settings
          (GizmoLineSlider3D *this,MethodInfo *method)

{
  if ((this->fields)._sharedSettings != (GizmoLineSlider3DSettings *)0x0) {
    return (this->fields)._sharedSettings;
  }
  return (this->fields)._settings;
}


/* Vector3 get_StartPosition() */

Vector3 * Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_get_StartPosition
                    (Vector3 *__return_storage_ptr__,GizmoLineSlider3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._transform;
  if (pGVar1 != (GizmoTransform *)0x0) {
    fVar2 = (pGVar1->fields)._position3D.y;
    fVar3 = (pGVar1->fields)._position3D.z;
    __return_storage_ptr__->x = (pGVar1->fields)._position3D.x;
    __return_storage_ptr__->y = fVar2;
    __return_storage_ptr__->z = fVar3;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pVVar5 = (Vector3 *)(*pcVar4)();
  return pVVar5;
}


/* Vector3 get_TotalDragOffset() */

Vector3 * Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_get_TotalDragOffset
                    (Vector3 *__return_storage_ptr__,GizmoLineSlider3D *this,MethodInfo *method)

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

float Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_get_TotalDragRotation
                (GizmoLineSlider3D *this,MethodInfo *method)

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

float Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_get_TotalDragScale
                (GizmoLineSlider3D *this,MethodInfo *method)

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


/* Void set_ScaleDragAxisIndex(Int32) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_set_ScaleDragAxisIndex
               (GizmoLineSlider3D *this,int32_t value,MethodInfo *method)

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


/* Void set_SharedLookAndFeel(GizmoLineSlider3DLookAndFeel) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_set_SharedLookAndFeel
               (GizmoLineSlider3D *this,GizmoLineSlider3DLookAndFeel *value,MethodInfo *method)

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
  lVar6 = 0xe0;
  if ((this->fields)._sharedLookAndFeel == (GizmoLineSlider3DLookAndFeel *)0x0) {
    lVar6 = 0xd8;
  }
  lVar6 = *(longlong *)((longlong)&this->klass + lVar6);
  if (lVar6 != 0) {
    pGVar7 = (this->fields)._cap3D;
    method = (MethodInfo *)0x0;
    if (pGVar7 != (GizmoCap3D *)0x0) {
      bVar1 = iRam_? != 0;
      (pGVar7->fields)._sharedLookAndFeel = *(GizmoCap3DLookAndFeel **)(lVar6 + 0x60);
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
  FUN_?(this,0xd8,method);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void set_StartPosition(Vector3) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3D::GizmoLineSlider3D_set_StartPosition
               (GizmoLineSlider3D *this,Vector3 *value,MethodInfo *method)

{
  this_00 = (this->fields)._transform;
  if (this_00 == (GizmoTransform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((this_00->fields)._firingChanged3DEvent == 0) &&
     (uVar2 = value->x, uVar3 = value->y, uVar4 = (this_00->fields)._position3D.x,
     fVar5 = (this_00->fields)._position3D.z - value->z,
     fVar6 = (this_00->fields)._position3D.y - (float)uVar3,
     _UNK_? <=
     fVar6 * fVar6 + ((float)uVar4 - (float)uVar2) * ((float)uVar4 - (float)uVar2) +
     fVar5 * fVar5)) {
    fVar6 = value->y;
    fVar5 = value->z;
    (this_00->fields)._position3D.x = value->x;
    (this_00->fields)._position3D.y = fVar6;
    (this_00->fields)._position3D.z = fVar5;
    if ((this_00->fields)._parent == (GizmoTransform *)0x0) {
      fVar6 = (this_00->fields)._position3D.y;
      fVar5 = (this_00->fields)._position3D.z;
      (this_00->fields)._localPosition3D.x = (this_00->fields)._position3D.x;
      (this_00->fields)._localPosition3D.y = fVar6;
      (this_00->fields)._localPosition3D.z = fVar5;
    }
    else {
      pGVar7 = (this_00->fields)._parent;
      uStack_8 = 0;
      uStack_9 = 0;
      fStack_10 = (pGVar7->fields)._rotation3D.x;
      fStack_11 = (pGVar7->fields)._rotation3D.y;
      fStack_12 = (pGVar7->fields)._rotation3D.z;
      fStack_13 = (pGVar7->fields)._rotation3D.w;
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar14 = func_?(&UNK_?);
        FUN_?(uVar14,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(&fStack_10);
      pGVar7 = (this_00->fields)._parent;
      if (pGVar7 == (GizmoTransform *)0x0) {
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar15 = (pGVar7->fields)._position3D.x;
      uVar16 = (pGVar7->fields)._position3D.y;
      fVar17 = (this_00->fields)._position3D.z - (pGVar7->fields)._position3D.z;
      uVar18 = (this_00->fields)._position3D.x;
      fVar19 = (float)uVar18 - (float)uVar15;
      fVar20 = (this_00->fields)._position3D.y - (float)uVar16;
      fVar6 = uStack_8._4_4_ + uStack_8._4_4_;
      fVar5 = (float)uStack_9 + (float)uStack_9;
      fVar21 = uStack_9._4_4_ * ((float)uStack_8 + (float)uStack_8);
      fVar22 = (float)uStack_8 * ((float)uStack_8 + (float)uStack_8);
      fVar23 = _UNK_? - ((float)uStack_9 * fVar5 + fVar22);
      fVar22 = _UNK_? - (uStack_8._4_4_ * fVar6 + fVar22);
      (this_00->fields)._localPosition3D.x =
           (_UNK_? - ((float)uStack_9 * fVar5 + uStack_8._4_4_ * fVar6)) * fVar19 +
           ((float)uStack_8 * fVar6 - uStack_9._4_4_ * fVar5) * fVar20 +
           (uStack_9._4_4_ * fVar6 + (float)uStack_8 * fVar5) * fVar17;
      (this_00->fields)._localPosition3D.y =
           fVar23 * fVar20 + (uStack_9._4_4_ * fVar5 + (float)uStack_8 * fVar6) * fVar19 +
           (uStack_8._4_4_ * fVar5 - fVar21) * fVar17;
      (this_00->fields)._localPosition3D.z =
           ((float)uStack_8 * fVar5 - uStack_9._4_4_ * fVar6) * fVar19 +
           (fVar21 + uStack_8._4_4_ * fVar5) * fVar20 + fVar22 * fVar17;
    }
    GizmoTransform::GizmoTransform_UpdateChildTransforms3D(this_00,(MethodInfo *)0x0);
    pGVar24 = (this_00->fields).Changed;
    (this_00->fields)._firingChanged3DEvent = 1;
    if (pGVar24 != (GizmoEntityTransformChangedHandler *)0x0) {
      (*(pGVar24->fields)._._.invoke_impl)
                ((pGVar24->fields)._._.method_code,this_00,0x200000000,(pGVar24->fields)._._.method);
    }
    (this_00->fields)._firingChanged3DEvent = 0;
    return;
  }
  return;
}

